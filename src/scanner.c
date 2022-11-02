#include <tree_sitter/parser.h>
#include <wctype.h>

enum TokenType {
  TEXT_LITERAL,
  BLOCK_COMMENT,
};

void *tree_sitter_candid_external_scanner_create() { return NULL; }
void tree_sitter_candid_external_scanner_destroy(void *p) {}
void tree_sitter_candid_external_scanner_reset(void *p) {}
unsigned tree_sitter_candid_external_scanner_serialize(void *p, char *buffer) { return 0; }
void tree_sitter_candid_external_scanner_deserialize(void *p, const char *b, unsigned n) {}

static void advance(TSLexer *lexer) {
  lexer->advance(lexer, false);
}

static bool is_num_char(int32_t c) {
  return c == '_' || iswdigit(c);
}

static bool is_valid_utf8(int32_t c) {
  uint8_t c1 = c & 0xff;
  uint8_t c2 = (c >> 8) & 0xff;
  uint8_t c3 = (c >> 16) & 0xff;
  uint8_t c4 = (c >> 24) & 0xff;
  
  #define utf8_cont(cn) (cn >= 0x80 && cn <= 0xbf)
  
  return (((c1 >= 0x00 && c1 <= 0x09) || (c1 >= 0x0b && c1 <= 0x7f))
    || (c1 >= 0xc2 && c1 <= 0xdf) && utf8_cont(c2))
    || (c1 == 0xe0 && (c2 >= 0xa0 && c2 <= 0xbf) && utf8_cont(c3))
    || (c1 == 0xed && (c2 >= 0x80 && c2 <= 0x9f) && utf8_cont(c3))
    || (((c1 >= 0xe1 && c1 <= 0xec) || c1 == 0xee || c1 == 0xef) && utf8_cont(c2) && utf8_cont(c3))
    || (c1 == 0xf0 && (c2 >= 0x90 && c2 <= 0xbf) && utf8_cont(c3) && utf8_cont(c4))
    || (c1 == 0xf4 && (c2 >= 0x80 && c2 <= 0x8f) && utf8_cont(c3) && utf8_cont(c4))
    || ((c1 >= 0xf1 && c1 <= 0xf3) && utf8_cont(c2) && utf8_cont(c3) && utf8_cont(c4));
}

bool tree_sitter_candid_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  
  if (valid_symbols[TEXT_LITERAL]) {
    bool has_content = false;
    for (;;) { 
      if (lexer->lookahead == '\"' || lexer->lookahead == '\\' || !is_valid_utf8(lexer->lookahead)) {
        break;
      } else if (lexer->lookahead == 0) {
        return false;
      }
      has_content = true;
      advance(lexer);
    }
    lexer->result_symbol = TEXT_LITERAL;
    return has_content;
  }
  
  while (iswspace(lexer->lookahead)) lexer->advance(lexer, true);
  
  if (lexer->lookahead == '/') {
    advance(lexer);
    if (lexer->lookahead != '*') return false;
    advance(lexer);

    bool after_star = false;
    unsigned nesting_depth = 1;
    for (;;) {
      switch (lexer->lookahead) {
        case '\0':
          return false;
        case '*':
          advance(lexer);
          after_star = true;
          break;
        case '/':
          if (after_star) {
            advance(lexer);
            after_star = false;
            nesting_depth--;
            if (nesting_depth == 0) {
              lexer->result_symbol = BLOCK_COMMENT;
              return true;
            }
          } else {
            advance(lexer);
            after_star = false;
            if (lexer->lookahead == '*') {
              nesting_depth++;
              advance(lexer);
            }
          }
          break;
        default:
          advance(lexer);
          after_star = false;
          break;
      }
    }
  }  
  return false;
}
