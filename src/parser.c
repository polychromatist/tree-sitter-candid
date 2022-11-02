#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 121
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 105
#define ALIAS_COUNT 0
#define TOKEN_COUNT 66
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 14

enum {
  sym_id = 1,
  anon_sym_SEMI = 2,
  anon_sym_type = 3,
  anon_sym_EQ = 4,
  anon_sym_import = 5,
  anon_sym_service = 6,
  anon_sym_COLON = 7,
  anon_sym_DASH_GT = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_oneway = 11,
  anon_sym_query = 12,
  anon_sym_LPAREN = 13,
  anon_sym_COMMA = 14,
  anon_sym_RPAREN = 15,
  anon_sym_bool = 16,
  anon_sym_text = 17,
  anon_sym_null = 18,
  anon_sym_reserved = 19,
  anon_sym_empty = 20,
  anon_sym_principal = 21,
  anon_sym_nat = 22,
  anon_sym_nat8 = 23,
  anon_sym_nat16 = 24,
  anon_sym_nat32 = 25,
  anon_sym_nat64 = 26,
  anon_sym_int = 27,
  anon_sym_int8 = 28,
  anon_sym_int16 = 29,
  anon_sym_int32 = 30,
  anon_sym_int64 = 31,
  anon_sym_float32 = 32,
  anon_sym_float64 = 33,
  sym__constype_short = 34,
  anon_sym_opt = 35,
  anon_sym_vec = 36,
  anon_sym_record = 37,
  anon_sym_variant = 38,
  anon_sym_func = 39,
  sym_linecomment = 40,
  anon_sym_PLUS = 41,
  anon_sym_DASH = 42,
  aux_sym_int_token1 = 43,
  aux_sym_nat_token1 = 44,
  aux_sym_float_token3 = 45,
  aux_sym_float_token4 = 46,
  aux_sym_utf8_enc_token1 = 47,
  aux_sym_utf8_enc_token2 = 48,
  aux_sym_utf8_enc_token3 = 49,
  aux_sym_utf8_enc_token4 = 50,
  aux_sym_utf8_enc_token5 = 51,
  aux_sym_utf8_enc_token6 = 52,
  aux_sym_utf8_enc_token7 = 53,
  anon_sym_BSLASH = 54,
  aux_sym_escape_token1 = 55,
  aux_sym_byte_token1 = 56,
  anon_sym_BSLASHu_LBRACE = 57,
  aux_sym_utf8code_token1 = 58,
  anon_sym_RBRACE2 = 59,
  anon_sym_SQUOTE = 60,
  anon_sym_SQUOTE2 = 61,
  anon_sym_DQUOTE = 62,
  anon_sym_DQUOTE2 = 63,
  sym__text_literal = 64,
  sym_blockcomment = 65,
  sym_prog = 66,
  sym_def = 67,
  sym_def_type = 68,
  sym_def_import = 69,
  sym_actor = 70,
  sym__actor_arrow_pre = 71,
  sym_actortype = 72,
  sym_methtype = 73,
  sym_functype = 74,
  sym_funcann = 75,
  sym_tuptype = 76,
  sym_argtype = 77,
  sym__argtype_short = 78,
  sym_fieldtype = 79,
  sym__fieldtype_short = 80,
  sym_datatype = 81,
  sym_comptype = 82,
  sym_primtype = 83,
  sym_numtype = 84,
  sym_constype = 85,
  sym_cons_opt = 86,
  sym_cons_vec = 87,
  sym_cons_record = 88,
  sym__cons_record_list = 89,
  sym_cons_variant = 90,
  sym__cons_variant_list = 91,
  sym_reftype = 92,
  sym_ref_func = 93,
  sym_ref_service = 94,
  sym_name = 95,
  sym_nat = 96,
  sym_escape = 97,
  sym_text = 98,
  aux_sym_prog_repeat1 = 99,
  aux_sym_actortype_repeat1 = 100,
  aux_sym_functype_repeat1 = 101,
  aux_sym_tuptype_repeat1 = 102,
  aux_sym__cons_record_list_repeat1 = 103,
  aux_sym_text_repeat1 = 104,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_id] = "id",
  [anon_sym_SEMI] = ";",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_import] = "import",
  [anon_sym_service] = "service",
  [anon_sym_COLON] = ":",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_oneway] = "oneway",
  [anon_sym_query] = "query",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_bool] = "bool",
  [anon_sym_text] = "text",
  [anon_sym_null] = "null",
  [anon_sym_reserved] = "reserved",
  [anon_sym_empty] = "empty",
  [anon_sym_principal] = "principal",
  [anon_sym_nat] = "nat",
  [anon_sym_nat8] = "nat8",
  [anon_sym_nat16] = "nat16",
  [anon_sym_nat32] = "nat32",
  [anon_sym_nat64] = "nat64",
  [anon_sym_int] = "int",
  [anon_sym_int8] = "int8",
  [anon_sym_int16] = "int16",
  [anon_sym_int32] = "int32",
  [anon_sym_int64] = "int64",
  [anon_sym_float32] = "float32",
  [anon_sym_float64] = "float64",
  [sym__constype_short] = "_constype_short",
  [anon_sym_opt] = "opt",
  [anon_sym_vec] = "vec",
  [anon_sym_record] = "record",
  [anon_sym_variant] = "variant",
  [anon_sym_func] = "func",
  [sym_linecomment] = "linecomment",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_nat_token1] = "nat_token1",
  [aux_sym_float_token3] = "float_token3",
  [aux_sym_float_token4] = "float_token4",
  [aux_sym_utf8_enc_token1] = "utf8_enc_token1",
  [aux_sym_utf8_enc_token2] = "utf8_enc_token2",
  [aux_sym_utf8_enc_token3] = "utf8_enc_token3",
  [aux_sym_utf8_enc_token4] = "utf8_enc_token4",
  [aux_sym_utf8_enc_token5] = "utf8_enc_token5",
  [aux_sym_utf8_enc_token6] = "utf8_enc_token6",
  [aux_sym_utf8_enc_token7] = "utf8_enc_token7",
  [anon_sym_BSLASH] = "\\",
  [aux_sym_escape_token1] = "escape_token1",
  [aux_sym_byte_token1] = "byte_token1",
  [anon_sym_BSLASHu_LBRACE] = "\\u{",
  [aux_sym_utf8code_token1] = "utf8code_token1",
  [anon_sym_RBRACE2] = "}",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_SQUOTE2] = "'",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_DQUOTE2] = "\"",
  [sym__text_literal] = "_text_literal",
  [sym_blockcomment] = "blockcomment",
  [sym_prog] = "prog",
  [sym_def] = "def",
  [sym_def_type] = "def_type",
  [sym_def_import] = "def_import",
  [sym_actor] = "actor",
  [sym__actor_arrow_pre] = "_actor_arrow_pre",
  [sym_actortype] = "actortype",
  [sym_methtype] = "methtype",
  [sym_functype] = "functype",
  [sym_funcann] = "funcann",
  [sym_tuptype] = "tuptype",
  [sym_argtype] = "argtype",
  [sym__argtype_short] = "_argtype_short",
  [sym_fieldtype] = "fieldtype",
  [sym__fieldtype_short] = "_fieldtype_short",
  [sym_datatype] = "datatype",
  [sym_comptype] = "comptype",
  [sym_primtype] = "primtype",
  [sym_numtype] = "numtype",
  [sym_constype] = "constype",
  [sym_cons_opt] = "cons_opt",
  [sym_cons_vec] = "cons_vec",
  [sym_cons_record] = "cons_record",
  [sym__cons_record_list] = "_cons_record_list",
  [sym_cons_variant] = "cons_variant",
  [sym__cons_variant_list] = "_cons_variant_list",
  [sym_reftype] = "reftype",
  [sym_ref_func] = "ref_func",
  [sym_ref_service] = "ref_service",
  [sym_name] = "name",
  [sym_nat] = "nat",
  [sym_escape] = "escape",
  [sym_text] = "text",
  [aux_sym_prog_repeat1] = "prog_repeat1",
  [aux_sym_actortype_repeat1] = "actortype_repeat1",
  [aux_sym_functype_repeat1] = "functype_repeat1",
  [aux_sym_tuptype_repeat1] = "tuptype_repeat1",
  [aux_sym__cons_record_list_repeat1] = "_cons_record_list_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_id] = sym_id,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_service] = anon_sym_service,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_oneway] = anon_sym_oneway,
  [anon_sym_query] = anon_sym_query,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_text] = anon_sym_text,
  [anon_sym_null] = anon_sym_null,
  [anon_sym_reserved] = anon_sym_reserved,
  [anon_sym_empty] = anon_sym_empty,
  [anon_sym_principal] = anon_sym_principal,
  [anon_sym_nat] = anon_sym_nat,
  [anon_sym_nat8] = anon_sym_nat8,
  [anon_sym_nat16] = anon_sym_nat16,
  [anon_sym_nat32] = anon_sym_nat32,
  [anon_sym_nat64] = anon_sym_nat64,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_int8] = anon_sym_int8,
  [anon_sym_int16] = anon_sym_int16,
  [anon_sym_int32] = anon_sym_int32,
  [anon_sym_int64] = anon_sym_int64,
  [anon_sym_float32] = anon_sym_float32,
  [anon_sym_float64] = anon_sym_float64,
  [sym__constype_short] = sym__constype_short,
  [anon_sym_opt] = anon_sym_opt,
  [anon_sym_vec] = anon_sym_vec,
  [anon_sym_record] = anon_sym_record,
  [anon_sym_variant] = anon_sym_variant,
  [anon_sym_func] = anon_sym_func,
  [sym_linecomment] = sym_linecomment,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_nat_token1] = aux_sym_nat_token1,
  [aux_sym_float_token3] = aux_sym_float_token3,
  [aux_sym_float_token4] = aux_sym_float_token4,
  [aux_sym_utf8_enc_token1] = aux_sym_utf8_enc_token1,
  [aux_sym_utf8_enc_token2] = aux_sym_utf8_enc_token2,
  [aux_sym_utf8_enc_token3] = aux_sym_utf8_enc_token3,
  [aux_sym_utf8_enc_token4] = aux_sym_utf8_enc_token4,
  [aux_sym_utf8_enc_token5] = aux_sym_utf8_enc_token5,
  [aux_sym_utf8_enc_token6] = aux_sym_utf8_enc_token6,
  [aux_sym_utf8_enc_token7] = aux_sym_utf8_enc_token7,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [aux_sym_escape_token1] = aux_sym_escape_token1,
  [aux_sym_byte_token1] = aux_sym_byte_token1,
  [anon_sym_BSLASHu_LBRACE] = anon_sym_BSLASHu_LBRACE,
  [aux_sym_utf8code_token1] = aux_sym_utf8code_token1,
  [anon_sym_RBRACE2] = anon_sym_RBRACE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_SQUOTE2] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE2] = anon_sym_DQUOTE,
  [sym__text_literal] = sym__text_literal,
  [sym_blockcomment] = sym_blockcomment,
  [sym_prog] = sym_prog,
  [sym_def] = sym_def,
  [sym_def_type] = sym_def_type,
  [sym_def_import] = sym_def_import,
  [sym_actor] = sym_actor,
  [sym__actor_arrow_pre] = sym__actor_arrow_pre,
  [sym_actortype] = sym_actortype,
  [sym_methtype] = sym_methtype,
  [sym_functype] = sym_functype,
  [sym_funcann] = sym_funcann,
  [sym_tuptype] = sym_tuptype,
  [sym_argtype] = sym_argtype,
  [sym__argtype_short] = sym__argtype_short,
  [sym_fieldtype] = sym_fieldtype,
  [sym__fieldtype_short] = sym__fieldtype_short,
  [sym_datatype] = sym_datatype,
  [sym_comptype] = sym_comptype,
  [sym_primtype] = sym_primtype,
  [sym_numtype] = sym_numtype,
  [sym_constype] = sym_constype,
  [sym_cons_opt] = sym_cons_opt,
  [sym_cons_vec] = sym_cons_vec,
  [sym_cons_record] = sym_cons_record,
  [sym__cons_record_list] = sym__cons_record_list,
  [sym_cons_variant] = sym_cons_variant,
  [sym__cons_variant_list] = sym__cons_variant_list,
  [sym_reftype] = sym_reftype,
  [sym_ref_func] = sym_ref_func,
  [sym_ref_service] = sym_ref_service,
  [sym_name] = sym_name,
  [sym_nat] = sym_nat,
  [sym_escape] = sym_escape,
  [sym_text] = sym_text,
  [aux_sym_prog_repeat1] = aux_sym_prog_repeat1,
  [aux_sym_actortype_repeat1] = aux_sym_actortype_repeat1,
  [aux_sym_functype_repeat1] = aux_sym_functype_repeat1,
  [aux_sym_tuptype_repeat1] = aux_sym_tuptype_repeat1,
  [aux_sym__cons_record_list_repeat1] = aux_sym__cons_record_list_repeat1,
  [aux_sym_text_repeat1] = aux_sym_text_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_id] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_service] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_oneway] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_query] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_text] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_null] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_reserved] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_empty] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_principal] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_nat64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int8] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int16] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_int64] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_float64] = {
    .visible = true,
    .named = false,
  },
  [sym__constype_short] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_opt] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_vec] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_record] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_variant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [sym_linecomment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nat_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_utf8_enc_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_utf8_enc_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_utf8_enc_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_utf8_enc_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_utf8_enc_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_utf8_enc_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_utf8_enc_token7] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_byte_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHu_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_utf8code_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_RBRACE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE2] = {
    .visible = true,
    .named = false,
  },
  [sym__text_literal] = {
    .visible = false,
    .named = true,
  },
  [sym_blockcomment] = {
    .visible = true,
    .named = true,
  },
  [sym_prog] = {
    .visible = true,
    .named = true,
  },
  [sym_def] = {
    .visible = true,
    .named = true,
  },
  [sym_def_type] = {
    .visible = true,
    .named = true,
  },
  [sym_def_import] = {
    .visible = true,
    .named = true,
  },
  [sym_actor] = {
    .visible = true,
    .named = true,
  },
  [sym__actor_arrow_pre] = {
    .visible = false,
    .named = true,
  },
  [sym_actortype] = {
    .visible = true,
    .named = true,
  },
  [sym_methtype] = {
    .visible = true,
    .named = true,
  },
  [sym_functype] = {
    .visible = true,
    .named = true,
  },
  [sym_funcann] = {
    .visible = true,
    .named = true,
  },
  [sym_tuptype] = {
    .visible = true,
    .named = true,
  },
  [sym_argtype] = {
    .visible = true,
    .named = true,
  },
  [sym__argtype_short] = {
    .visible = false,
    .named = true,
  },
  [sym_fieldtype] = {
    .visible = true,
    .named = true,
  },
  [sym__fieldtype_short] = {
    .visible = false,
    .named = true,
  },
  [sym_datatype] = {
    .visible = true,
    .named = true,
  },
  [sym_comptype] = {
    .visible = true,
    .named = true,
  },
  [sym_primtype] = {
    .visible = true,
    .named = true,
  },
  [sym_numtype] = {
    .visible = true,
    .named = true,
  },
  [sym_constype] = {
    .visible = true,
    .named = true,
  },
  [sym_cons_opt] = {
    .visible = true,
    .named = true,
  },
  [sym_cons_vec] = {
    .visible = true,
    .named = true,
  },
  [sym_cons_record] = {
    .visible = true,
    .named = true,
  },
  [sym__cons_record_list] = {
    .visible = false,
    .named = true,
  },
  [sym_cons_variant] = {
    .visible = true,
    .named = true,
  },
  [sym__cons_variant_list] = {
    .visible = false,
    .named = true,
  },
  [sym_reftype] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_func] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_service] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_nat] = {
    .visible = true,
    .named = true,
  },
  [sym_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_prog_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_actortype_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_functype_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tuptype_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__cons_record_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_hasharg = 1,
  field_index = 2,
  field_name = 3,
  field_param = 4,
  field_return = 5,
  field_value = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_hasharg] = "hasharg",
  [field_index] = "index",
  [field_name] = "name",
  [field_param] = "param",
  [field_return] = "return",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 3},
  [8] = {.index = 11, .length = 1},
  [9] = {.index = 12, .length = 2},
  [10] = {.index = 14, .length = 1},
  [11] = {.index = 15, .length = 2},
  [12] = {.index = 17, .length = 1},
  [13] = {.index = 18, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_value, 1},
  [1] =
    {field_value, 2},
  [2] =
    {field_name, 0, .inherited = true},
  [3] =
    {field_param, 2, .inherited = true},
    {field_value, 3},
  [5] =
    {field_param, 0},
  [6] =
    {field_name, 1},
    {field_value, 3},
  [8] =
    {field_name, 1},
    {field_param, 3, .inherited = true},
    {field_value, 4},
  [11] =
    {field_hasharg, 0, .inherited = true},
  [12] =
    {field_name, 0},
    {field_value, 2},
  [14] =
    {field_name, 0},
  [15] =
    {field_param, 0},
    {field_return, 2},
  [17] =
    {field_hasharg, 0},
  [18] =
    {field_index, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 120,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '\'') ADVANCE(71);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(65);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(69);
      if (lookahead == 224) ADVANCE(17);
      if (lookahead == 237) ADVANCE(16);
      if (lookahead == 240) ADVANCE(18);
      if (lookahead == 244) ADVANCE(11);
      if (lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(63);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(64);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if ((225 <= lookahead && lookahead <= 239)) ADVANCE(26);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(19);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(73);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\\') ADVANCE(60);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '"' ||
          lookahead == '\'' ||
          lookahead == '\\' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(62);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 7:
      if (lookahead == 'x') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '{') ADVANCE(67);
      END_STATE();
    case 9:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 11:
      if ((128 <= lookahead && lookahead <= 143)) ADVANCE(28);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 16:
      if ((128 <= lookahead && lookahead <= 159)) ADVANCE(21);
      END_STATE();
    case 17:
      if ((160 <= lookahead && lookahead <= 191)) ADVANCE(20);
      END_STATE();
    case 18:
      if ((144 <= lookahead && lookahead <= 191)) ADVANCE(27);
      END_STATE();
    case 19:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(53);
      END_STATE();
    case 20:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(54);
      END_STATE();
    case 21:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(55);
      END_STATE();
    case 22:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(56);
      END_STATE();
    case 23:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(57);
      END_STATE();
    case 24:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(58);
      END_STATE();
    case 25:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(59);
      END_STATE();
    case 26:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(22);
      END_STATE();
    case 27:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(23);
      END_STATE();
    case 28:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(24);
      END_STATE();
    case 29:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(25);
      END_STATE();
    case 30:
      if ((128 <= lookahead && lookahead <= 191)) ADVANCE(29);
      END_STATE();
    case 31:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '\'') ADVANCE(70);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '+') ADVANCE(45);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(61);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == 224) ADVANCE(17);
      if (lookahead == 237) ADVANCE(16);
      if (lookahead == 240) ADVANCE(18);
      if (lookahead == 244) ADVANCE(11);
      if ((241 <= lookahead && lookahead <= 243)) ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(31)
      if ((225 <= lookahead && lookahead <= 239)) ADVANCE(26);
      if ((194 <= lookahead && lookahead <= 223)) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 32:
      if (eof) ADVANCE(33);
      if (lookahead == '"') ADVANCE(72);
      if (lookahead == '(') ADVANCE(40);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(41);
      if (lookahead == '-') ADVANCE(6);
      if (lookahead == '/') ADVANCE(5);
      if (lookahead == '0') ADVANCE(47);
      if (lookahead == ':') ADVANCE(36);
      if (lookahead == ';') ADVANCE(34);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(32)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(48);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_id);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_linecomment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(37);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (lookahead == 'x') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_int_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_nat_token1);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_nat_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_float_token3);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_float_token4);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_utf8_enc_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_utf8_enc_token2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_utf8_enc_token3);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_utf8_enc_token4);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_utf8_enc_token5);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_utf8_enc_token6);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_utf8_enc_token7);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_escape_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_byte_token1);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_byte_token1);
      if (lookahead == 'x') ADVANCE(12);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_byte_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(43);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_BSLASHu_LBRACE);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_utf8code_token1);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_RBRACE2);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_SQUOTE2);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_DQUOTE2);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'f') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(4);
      if (lookahead == 'n') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(6);
      if (lookahead == 'p') ADVANCE(7);
      if (lookahead == 'q') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 's') ADVANCE(10);
      if (lookahead == 't') ADVANCE(11);
      if (lookahead == 'v') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'l') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(17);
      END_STATE();
    case 4:
      if (lookahead == 'm') ADVANCE(18);
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(22);
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 7:
      if (lookahead == 'r') ADVANCE(24);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(25);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(28);
      if (lookahead == 'y') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(30);
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 18:
      if (lookahead == 'p') ADVANCE(37);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 20:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(44);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(45);
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 27:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 28:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(49);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 32:
      if (lookahead == 'b') ADVANCE(52);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 35:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 36:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_int);
      if (lookahead == '1') ADVANCE(58);
      if (lookahead == '3') ADVANCE(59);
      if (lookahead == '6') ADVANCE(60);
      if (lookahead == '8') ADVANCE(61);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_nat);
      if (lookahead == '1') ADVANCE(62);
      if (lookahead == '3') ADVANCE(63);
      if (lookahead == '6') ADVANCE(64);
      if (lookahead == '8') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'l') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'w') ADVANCE(67);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_opt);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 47:
      if (lookahead == 'v') ADVANCE(72);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 49:
      if (lookahead == 'e') ADVANCE(74);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_vec);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__constype_short);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 54:
      if (lookahead == 'y') ADVANCE(76);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 58:
      if (lookahead == '6') ADVANCE(79);
      END_STATE();
    case 59:
      if (lookahead == '2') ADVANCE(80);
      END_STATE();
    case 60:
      if (lookahead == '4') ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_int8);
      END_STATE();
    case 62:
      if (lookahead == '6') ADVANCE(82);
      END_STATE();
    case 63:
      if (lookahead == '2') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead == '4') ADVANCE(84);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_nat8);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_null);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 68:
      if (lookahead == 'c') ADVANCE(86);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(87);
      END_STATE();
    case 70:
      if (lookahead == 'r') ADVANCE(88);
      END_STATE();
    case 71:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 72:
      if (lookahead == 'i') ADVANCE(90);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_text);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 75:
      if (lookahead == 'a') ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_empty);
      END_STATE();
    case 77:
      if (lookahead == '3') ADVANCE(92);
      if (lookahead == '6') ADVANCE(93);
      END_STATE();
    case 78:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_int16);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_int32);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_int64);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_nat16);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_nat32);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_nat64);
      END_STATE();
    case 85:
      if (lookahead == 'y') ADVANCE(95);
      END_STATE();
    case 86:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_query);
      END_STATE();
    case 88:
      if (lookahead == 'd') ADVANCE(97);
      END_STATE();
    case 89:
      if (lookahead == 'v') ADVANCE(98);
      END_STATE();
    case 90:
      if (lookahead == 'c') ADVANCE(99);
      END_STATE();
    case 91:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 92:
      if (lookahead == '2') ADVANCE(101);
      END_STATE();
    case 93:
      if (lookahead == '4') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_oneway);
      END_STATE();
    case 96:
      if (lookahead == 'p') ADVANCE(103);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_record);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_float32);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_float64);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 104:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_service);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_variant);
      END_STATE();
    case 107:
      if (lookahead == 'l') ADVANCE(109);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_reserved);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_principal);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 32, .external_lex_state = 2},
  [2] = {.lex_state = 32, .external_lex_state = 2},
  [3] = {.lex_state = 32, .external_lex_state = 2},
  [4] = {.lex_state = 32, .external_lex_state = 2},
  [5] = {.lex_state = 32, .external_lex_state = 2},
  [6] = {.lex_state = 32, .external_lex_state = 2},
  [7] = {.lex_state = 32, .external_lex_state = 2},
  [8] = {.lex_state = 32, .external_lex_state = 2},
  [9] = {.lex_state = 32, .external_lex_state = 2},
  [10] = {.lex_state = 32, .external_lex_state = 2},
  [11] = {.lex_state = 32, .external_lex_state = 2},
  [12] = {.lex_state = 32, .external_lex_state = 2},
  [13] = {.lex_state = 32, .external_lex_state = 2},
  [14] = {.lex_state = 32, .external_lex_state = 2},
  [15] = {.lex_state = 32, .external_lex_state = 2},
  [16] = {.lex_state = 32, .external_lex_state = 2},
  [17] = {.lex_state = 32, .external_lex_state = 2},
  [18] = {.lex_state = 32, .external_lex_state = 2},
  [19] = {.lex_state = 32, .external_lex_state = 2},
  [20] = {.lex_state = 32, .external_lex_state = 2},
  [21] = {.lex_state = 32, .external_lex_state = 2},
  [22] = {.lex_state = 32, .external_lex_state = 2},
  [23] = {.lex_state = 32, .external_lex_state = 2},
  [24] = {.lex_state = 32, .external_lex_state = 2},
  [25] = {.lex_state = 32, .external_lex_state = 2},
  [26] = {.lex_state = 32, .external_lex_state = 2},
  [27] = {.lex_state = 32, .external_lex_state = 2},
  [28] = {.lex_state = 32, .external_lex_state = 2},
  [29] = {.lex_state = 32, .external_lex_state = 2},
  [30] = {.lex_state = 32, .external_lex_state = 2},
  [31] = {.lex_state = 32, .external_lex_state = 2},
  [32] = {.lex_state = 32, .external_lex_state = 2},
  [33] = {.lex_state = 32, .external_lex_state = 2},
  [34] = {.lex_state = 1, .external_lex_state = 1},
  [35] = {.lex_state = 32, .external_lex_state = 2},
  [36] = {.lex_state = 1, .external_lex_state = 1},
  [37] = {.lex_state = 1, .external_lex_state = 1},
  [38] = {.lex_state = 32, .external_lex_state = 2},
  [39] = {.lex_state = 32, .external_lex_state = 2},
  [40] = {.lex_state = 32, .external_lex_state = 2},
  [41] = {.lex_state = 32, .external_lex_state = 2},
  [42] = {.lex_state = 32, .external_lex_state = 2},
  [43] = {.lex_state = 32, .external_lex_state = 2},
  [44] = {.lex_state = 32, .external_lex_state = 2},
  [45] = {.lex_state = 32, .external_lex_state = 2},
  [46] = {.lex_state = 32, .external_lex_state = 2},
  [47] = {.lex_state = 32, .external_lex_state = 2},
  [48] = {.lex_state = 32, .external_lex_state = 2},
  [49] = {.lex_state = 32, .external_lex_state = 2},
  [50] = {.lex_state = 32, .external_lex_state = 2},
  [51] = {.lex_state = 32, .external_lex_state = 2},
  [52] = {.lex_state = 32, .external_lex_state = 2},
  [53] = {.lex_state = 32, .external_lex_state = 2},
  [54] = {.lex_state = 32, .external_lex_state = 2},
  [55] = {.lex_state = 32, .external_lex_state = 2},
  [56] = {.lex_state = 32, .external_lex_state = 2},
  [57] = {.lex_state = 32, .external_lex_state = 2},
  [58] = {.lex_state = 32, .external_lex_state = 2},
  [59] = {.lex_state = 32, .external_lex_state = 2},
  [60] = {.lex_state = 32, .external_lex_state = 2},
  [61] = {.lex_state = 32, .external_lex_state = 2},
  [62] = {.lex_state = 0, .external_lex_state = 2},
  [63] = {.lex_state = 32, .external_lex_state = 2},
  [64] = {.lex_state = 32, .external_lex_state = 2},
  [65] = {.lex_state = 32, .external_lex_state = 2},
  [66] = {.lex_state = 32, .external_lex_state = 2},
  [67] = {.lex_state = 32, .external_lex_state = 2},
  [68] = {.lex_state = 32, .external_lex_state = 2},
  [69] = {.lex_state = 32, .external_lex_state = 2},
  [70] = {.lex_state = 32, .external_lex_state = 2},
  [71] = {.lex_state = 0, .external_lex_state = 2},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 32, .external_lex_state = 2},
  [74] = {.lex_state = 32, .external_lex_state = 2},
  [75] = {.lex_state = 32, .external_lex_state = 2},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 1, .external_lex_state = 1},
  [78] = {.lex_state = 32, .external_lex_state = 2},
  [79] = {.lex_state = 32, .external_lex_state = 2},
  [80] = {.lex_state = 32, .external_lex_state = 2},
  [81] = {.lex_state = 32, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 32, .external_lex_state = 2},
  [84] = {.lex_state = 32, .external_lex_state = 2},
  [85] = {.lex_state = 32, .external_lex_state = 2},
  [86] = {.lex_state = 32, .external_lex_state = 2},
  [87] = {.lex_state = 32, .external_lex_state = 2},
  [88] = {.lex_state = 32, .external_lex_state = 2},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 0, .external_lex_state = 2},
  [91] = {.lex_state = 0, .external_lex_state = 2},
  [92] = {.lex_state = 0, .external_lex_state = 2},
  [93] = {.lex_state = 0, .external_lex_state = 2},
  [94] = {.lex_state = 0, .external_lex_state = 2},
  [95] = {.lex_state = 0, .external_lex_state = 2},
  [96] = {.lex_state = 0, .external_lex_state = 2},
  [97] = {.lex_state = 0, .external_lex_state = 2},
  [98] = {.lex_state = 0, .external_lex_state = 2},
  [99] = {.lex_state = 0, .external_lex_state = 2},
  [100] = {.lex_state = 0, .external_lex_state = 2},
  [101] = {.lex_state = 0, .external_lex_state = 2},
  [102] = {.lex_state = 0, .external_lex_state = 2},
  [103] = {.lex_state = 0, .external_lex_state = 2},
  [104] = {.lex_state = 32, .external_lex_state = 2},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 4, .external_lex_state = 2},
  [107] = {.lex_state = 0, .external_lex_state = 2},
  [108] = {.lex_state = 0, .external_lex_state = 2},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 0, .external_lex_state = 2},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 0, .external_lex_state = 2},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 32, .external_lex_state = 2},
  [120] = {.lex_state = 32, .external_lex_state = 2},
};

enum {
  ts_external_token__text_literal = 0,
  ts_external_token_blockcomment = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__text_literal] = sym__text_literal,
  [ts_external_token_blockcomment] = sym_blockcomment,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__text_literal] = true,
    [ts_external_token_blockcomment] = true,
  },
  [2] = {
    [ts_external_token_blockcomment] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_id] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_service] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_oneway] = ACTIONS(1),
    [anon_sym_query] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_text] = ACTIONS(1),
    [anon_sym_null] = ACTIONS(1),
    [anon_sym_reserved] = ACTIONS(1),
    [anon_sym_empty] = ACTIONS(1),
    [anon_sym_principal] = ACTIONS(1),
    [anon_sym_nat] = ACTIONS(1),
    [anon_sym_nat8] = ACTIONS(1),
    [anon_sym_nat16] = ACTIONS(1),
    [anon_sym_nat32] = ACTIONS(1),
    [anon_sym_nat64] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_int8] = ACTIONS(1),
    [anon_sym_int16] = ACTIONS(1),
    [anon_sym_int32] = ACTIONS(1),
    [anon_sym_int64] = ACTIONS(1),
    [anon_sym_float32] = ACTIONS(1),
    [anon_sym_float64] = ACTIONS(1),
    [sym__constype_short] = ACTIONS(1),
    [anon_sym_opt] = ACTIONS(1),
    [anon_sym_vec] = ACTIONS(1),
    [anon_sym_record] = ACTIONS(1),
    [anon_sym_variant] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [sym_linecomment] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [aux_sym_nat_token1] = ACTIONS(1),
    [aux_sym_float_token3] = ACTIONS(1),
    [aux_sym_float_token4] = ACTIONS(1),
    [aux_sym_utf8_enc_token1] = ACTIONS(1),
    [aux_sym_utf8_enc_token2] = ACTIONS(1),
    [aux_sym_utf8_enc_token3] = ACTIONS(1),
    [aux_sym_utf8_enc_token4] = ACTIONS(1),
    [aux_sym_utf8_enc_token5] = ACTIONS(1),
    [aux_sym_utf8_enc_token6] = ACTIONS(1),
    [aux_sym_utf8_enc_token7] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [aux_sym_escape_token1] = ACTIONS(1),
    [aux_sym_byte_token1] = ACTIONS(1),
    [anon_sym_BSLASHu_LBRACE] = ACTIONS(1),
    [aux_sym_utf8code_token1] = ACTIONS(1),
    [anon_sym_RBRACE2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE2] = ACTIONS(1),
    [sym__text_literal] = ACTIONS(1),
    [sym_blockcomment] = ACTIONS(3),
  },
  [1] = {
    [sym_prog] = STATE(118),
    [sym_def] = STATE(117),
    [sym_def_type] = STATE(116),
    [sym_def_import] = STATE(116),
    [sym_actor] = STATE(115),
    [aux_sym_prog_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_type] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_service] = ACTIONS(11),
    [sym_linecomment] = ACTIONS(3),
    [sym_blockcomment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(17), 1,
      anon_sym_RBRACE,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(35), 1,
      aux_sym_int_token1,
    ACTIONS(37), 1,
      aux_sym_nat_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_numtype,
    STATE(63), 1,
      sym_nat,
    STATE(73), 1,
      sym_text,
    STATE(78), 1,
      sym_name,
    STATE(88), 1,
      sym_fieldtype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(84), 2,
      sym__fieldtype_short,
      sym_datatype,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [100] = 25,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(35), 1,
      aux_sym_int_token1,
    ACTIONS(37), 1,
      aux_sym_nat_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_numtype,
    STATE(63), 1,
      sym_nat,
    STATE(73), 1,
      sym_text,
    STATE(78), 1,
      sym_name,
    STATE(88), 1,
      sym_fieldtype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(84), 2,
      sym__fieldtype_short,
      sym_datatype,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [200] = 25,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(35), 1,
      aux_sym_int_token1,
    ACTIONS(37), 1,
      aux_sym_nat_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_numtype,
    STATE(63), 1,
      sym_nat,
    STATE(73), 1,
      sym_text,
    STATE(78), 1,
      sym_name,
    STATE(88), 1,
      sym_fieldtype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(84), 2,
      sym__fieldtype_short,
      sym_datatype,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [300] = 25,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(35), 1,
      aux_sym_int_token1,
    ACTIONS(37), 1,
      aux_sym_nat_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(45), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_numtype,
    STATE(63), 1,
      sym_nat,
    STATE(73), 1,
      sym_text,
    STATE(78), 1,
      sym_name,
    STATE(88), 1,
      sym_fieldtype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(84), 2,
      sym__fieldtype_short,
      sym_datatype,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [400] = 25,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(35), 1,
      aux_sym_int_token1,
    ACTIONS(37), 1,
      aux_sym_nat_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_numtype,
    STATE(63), 1,
      sym_nat,
    STATE(68), 1,
      sym_fieldtype,
    STATE(73), 1,
      sym_text,
    STATE(78), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(84), 2,
      sym__fieldtype_short,
      sym_datatype,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [500] = 25,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(35), 1,
      aux_sym_int_token1,
    ACTIONS(37), 1,
      aux_sym_nat_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(49), 1,
      anon_sym_RBRACE,
    STATE(52), 1,
      sym_numtype,
    STATE(63), 1,
      sym_nat,
    STATE(73), 1,
      sym_text,
    STATE(78), 1,
      sym_name,
    STATE(80), 1,
      sym_fieldtype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(84), 2,
      sym__fieldtype_short,
      sym_datatype,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [600] = 24,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(35), 1,
      aux_sym_int_token1,
    ACTIONS(37), 1,
      aux_sym_nat_token1,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_numtype,
    STATE(63), 1,
      sym_nat,
    STATE(73), 1,
      sym_text,
    STATE(78), 1,
      sym_name,
    STATE(88), 1,
      sym_fieldtype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(84), 2,
      sym__fieldtype_short,
      sym_datatype,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [697] = 23,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_numtype,
    STATE(73), 1,
      sym_text,
    STATE(82), 1,
      sym__argtype_short,
    STATE(92), 1,
      sym_argtype,
    STATE(94), 1,
      sym_datatype,
    STATE(98), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [790] = 23,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_numtype,
    STATE(73), 1,
      sym_text,
    STATE(82), 1,
      sym__argtype_short,
    STATE(92), 1,
      sym_argtype,
    STATE(94), 1,
      sym_datatype,
    STATE(98), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [883] = 23,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      sym_numtype,
    STATE(72), 1,
      sym_argtype,
    STATE(73), 1,
      sym_text,
    STATE(82), 1,
      sym__argtype_short,
    STATE(94), 1,
      sym_datatype,
    STATE(98), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [976] = 22,
    ACTIONS(13), 1,
      sym_id,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      sym_numtype,
    STATE(73), 1,
      sym_text,
    STATE(82), 1,
      sym__argtype_short,
    STATE(92), 1,
      sym_argtype,
    STATE(94), 1,
      sym_datatype,
    STATE(98), 1,
      sym_name,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [1066] = 17,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(57), 1,
      sym_id,
    STATE(52), 1,
      sym_numtype,
    STATE(101), 1,
      sym_datatype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [1141] = 17,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(57), 1,
      sym_id,
    STATE(52), 1,
      sym_numtype,
    STATE(87), 1,
      sym_datatype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [1216] = 17,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(57), 1,
      sym_id,
    STATE(52), 1,
      sym_numtype,
    STATE(95), 1,
      sym_datatype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [1291] = 17,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(57), 1,
      sym_id,
    STATE(52), 1,
      sym_numtype,
    STATE(86), 1,
      sym_datatype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [1366] = 17,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(57), 1,
      sym_id,
    STATE(52), 1,
      sym_numtype,
    STATE(61), 1,
      sym_datatype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [1441] = 17,
    ACTIONS(15), 1,
      anon_sym_service,
    ACTIONS(23), 1,
      sym__constype_short,
    ACTIONS(25), 1,
      anon_sym_opt,
    ACTIONS(27), 1,
      anon_sym_vec,
    ACTIONS(29), 1,
      anon_sym_record,
    ACTIONS(31), 1,
      anon_sym_variant,
    ACTIONS(33), 1,
      anon_sym_func,
    ACTIONS(57), 1,
      sym_id,
    STATE(52), 1,
      sym_numtype,
    STATE(60), 1,
      sym_datatype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(38), 2,
      sym_constype,
      sym_reftype,
    STATE(39), 2,
      sym_comptype,
      sym_primtype,
    STATE(42), 2,
      sym_ref_func,
      sym_ref_service,
    STATE(50), 4,
      sym_cons_opt,
      sym_cons_vec,
      sym_cons_record,
      sym_cons_variant,
    ACTIONS(19), 6,
      anon_sym_bool,
      anon_sym_text,
      anon_sym_null,
      anon_sym_reserved,
      anon_sym_empty,
      anon_sym_principal,
    ACTIONS(21), 12,
      anon_sym_nat,
      anon_sym_nat8,
      anon_sym_nat16,
      anon_sym_nat32,
      anon_sym_nat64,
      anon_sym_int,
      anon_sym_int8,
      anon_sym_int16,
      anon_sym_int32,
      anon_sym_int64,
      anon_sym_float32,
      anon_sym_float64,
  [1516] = 9,
    ACTIONS(7), 1,
      anon_sym_type,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_service,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(21), 1,
      aux_sym_prog_repeat1,
    STATE(107), 1,
      sym_actor,
    STATE(117), 1,
      sym_def,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(116), 2,
      sym_def_type,
      sym_def_import,
  [1546] = 4,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(63), 2,
      anon_sym_oneway,
      anon_sym_query,
    STATE(20), 2,
      sym_funcann,
      aux_sym_functype_repeat1,
    ACTIONS(61), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1565] = 7,
    ACTIONS(68), 1,
      anon_sym_type,
    ACTIONS(71), 1,
      anon_sym_import,
    STATE(21), 1,
      aux_sym_prog_repeat1,
    STATE(117), 1,
      sym_def,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(66), 2,
      ts_builtin_sym_end,
      anon_sym_service,
    STATE(116), 2,
      sym_def_type,
      sym_def_import,
  [1590] = 4,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(76), 2,
      anon_sym_oneway,
      anon_sym_query,
    STATE(23), 2,
      sym_funcann,
      aux_sym_functype_repeat1,
    ACTIONS(74), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1609] = 4,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(76), 2,
      anon_sym_oneway,
      anon_sym_query,
    STATE(20), 2,
      sym_funcann,
      aux_sym_functype_repeat1,
    ACTIONS(78), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1628] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(80), 7,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_oneway,
      anon_sym_query,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1642] = 8,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      sym_id,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_actortype_repeat1,
    STATE(73), 1,
      sym_text,
    STATE(99), 1,
      sym_name,
    STATE(100), 1,
      sym_methtype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [1668] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(86), 7,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_oneway,
      anon_sym_query,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1682] = 8,
    ACTIONS(88), 1,
      sym_id,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      anon_sym_DQUOTE,
    STATE(27), 1,
      aux_sym_actortype_repeat1,
    STATE(73), 1,
      sym_text,
    STATE(99), 1,
      sym_name,
    STATE(100), 1,
      sym_methtype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [1708] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(96), 7,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_oneway,
      anon_sym_query,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1722] = 8,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 1,
      sym_id,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(27), 1,
      aux_sym_actortype_repeat1,
    STATE(73), 1,
      sym_text,
    STATE(99), 1,
      sym_name,
    STATE(100), 1,
      sym_methtype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [1748] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(100), 7,
      anon_sym_SEMI,
      anon_sym_DASH_GT,
      anon_sym_RBRACE,
      anon_sym_oneway,
      anon_sym_query,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1762] = 7,
    ACTIONS(102), 1,
      sym_id,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym__actor_arrow_pre,
    STATE(104), 1,
      sym_tuptype,
    STATE(105), 1,
      sym_actortype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [1785] = 7,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(108), 1,
      sym_id,
    STATE(64), 1,
      sym__actor_arrow_pre,
    STATE(104), 1,
      sym_tuptype,
    STATE(112), 1,
      sym_actortype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [1808] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(110), 6,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_oneway,
      anon_sym_query,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1821] = 5,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    ACTIONS(114), 1,
      anon_sym_DQUOTE2,
    ACTIONS(116), 1,
      sym__text_literal,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(37), 2,
      sym_escape,
      aux_sym_text_repeat1,
  [1839] = 4,
    ACTIONS(121), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(118), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
    ACTIONS(123), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1855] = 5,
    ACTIONS(112), 1,
      anon_sym_BSLASH,
    ACTIONS(125), 1,
      anon_sym_DQUOTE2,
    ACTIONS(127), 1,
      sym__text_literal,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(34), 2,
      sym_escape,
      aux_sym_text_repeat1,
  [1873] = 5,
    ACTIONS(129), 1,
      anon_sym_BSLASH,
    ACTIONS(132), 1,
      anon_sym_DQUOTE2,
    ACTIONS(134), 1,
      sym__text_literal,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    STATE(37), 2,
      sym_escape,
      aux_sym_text_repeat1,
  [1891] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(137), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1902] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(123), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1913] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(139), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1924] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(141), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1935] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(143), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1946] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(145), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1957] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_type,
      anon_sym_import,
      anon_sym_service,
  [1968] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(147), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1979] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(149), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1990] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(151), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2001] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(153), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2012] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(155), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2023] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(157), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2034] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(159), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2045] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(161), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2056] = 5,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    ACTIONS(163), 1,
      sym_id,
    STATE(108), 1,
      sym_functype,
    STATE(120), 1,
      sym_tuptype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2073] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(165), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2084] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(167), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2095] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(169), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2106] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(171), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2117] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(173), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2128] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(175), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2139] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(177), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2150] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(179), 4,
      anon_sym_SEMI,
      anon_sym_RBRACE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2161] = 4,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_functype,
    STATE(120), 1,
      sym_tuptype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2175] = 3,
    ACTIONS(183), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(181), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2187] = 4,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(185), 1,
      sym_id,
    STATE(102), 1,
      sym_actortype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2201] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(187), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2211] = 4,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    ACTIONS(189), 1,
      sym_id,
    STATE(111), 1,
      sym_actortype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2225] = 4,
    ACTIONS(41), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      aux_sym__cons_record_list_repeat1,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2239] = 4,
    ACTIONS(193), 1,
      anon_sym_SEMI,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    STATE(69), 1,
      aux_sym__cons_record_list_repeat1,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2253] = 4,
    ACTIONS(43), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 1,
      anon_sym_SEMI,
    STATE(74), 1,
      aux_sym__cons_record_list_repeat1,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2267] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(91), 3,
      anon_sym_RBRACE,
      sym_id,
      anon_sym_DQUOTE,
  [2277] = 4,
    ACTIONS(199), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(71), 1,
      aux_sym_tuptype_repeat1,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2291] = 4,
    ACTIONS(204), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      aux_sym_tuptype_repeat1,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2305] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(121), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2315] = 4,
    ACTIONS(208), 1,
      anon_sym_SEMI,
    ACTIONS(211), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      aux_sym__cons_record_list_repeat1,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2329] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(213), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2339] = 4,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    STATE(71), 1,
      aux_sym_tuptype_repeat1,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2353] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(217), 3,
      sym__text_literal,
      anon_sym_BSLASH,
      anon_sym_DQUOTE2,
  [2363] = 3,
    ACTIONS(219), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(181), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2375] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(221), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_RBRACE,
  [2385] = 4,
    ACTIONS(223), 1,
      anon_sym_SEMI,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(67), 1,
      aux_sym__cons_record_list_repeat1,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2399] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(227), 2,
      anon_sym_LBRACE,
      sym_id,
  [2408] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2417] = 3,
    ACTIONS(39), 1,
      anon_sym_DQUOTE,
    STATE(113), 1,
      sym_text,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2428] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(231), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2437] = 3,
    ACTIONS(233), 1,
      sym_id,
    ACTIONS(235), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2448] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(237), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2457] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(239), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2466] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(211), 2,
      anon_sym_SEMI,
      anon_sym_RBRACE,
  [2475] = 3,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_tuptype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2486] = 3,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
    STATE(59), 1,
      sym_actortype,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2497] = 3,
    ACTIONS(241), 1,
      anon_sym_LBRACE,
    STATE(49), 1,
      sym__cons_record_list,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2508] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(202), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2517] = 3,
    ACTIONS(243), 1,
      anon_sym_LBRACE,
    STATE(56), 1,
      sym__cons_variant_list,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2528] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(245), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2537] = 2,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2546] = 2,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2554] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2562] = 2,
    ACTIONS(253), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2570] = 2,
    ACTIONS(255), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2578] = 2,
    ACTIONS(257), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2586] = 2,
    ACTIONS(259), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2594] = 2,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2602] = 2,
    ACTIONS(263), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2610] = 2,
    ACTIONS(265), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2618] = 2,
    ACTIONS(267), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2626] = 2,
    ACTIONS(269), 1,
      aux_sym_escape_token1,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2634] = 2,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2642] = 2,
    ACTIONS(273), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2650] = 2,
    ACTIONS(261), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2658] = 2,
    ACTIONS(275), 1,
      anon_sym_COLON,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2666] = 2,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2674] = 2,
    ACTIONS(277), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2682] = 2,
    ACTIONS(279), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2690] = 2,
    ACTIONS(281), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2698] = 2,
    ACTIONS(283), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2706] = 2,
    ACTIONS(285), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2714] = 2,
    ACTIONS(287), 1,
      anon_sym_SEMI,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2722] = 2,
    ACTIONS(289), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2730] = 2,
    ACTIONS(291), 1,
      sym_id,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
  [2738] = 2,
    ACTIONS(293), 1,
      anon_sym_DASH_GT,
    ACTIONS(3), 2,
      sym_blockcomment,
      sym_linecomment,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 100,
  [SMALL_STATE(4)] = 200,
  [SMALL_STATE(5)] = 300,
  [SMALL_STATE(6)] = 400,
  [SMALL_STATE(7)] = 500,
  [SMALL_STATE(8)] = 600,
  [SMALL_STATE(9)] = 697,
  [SMALL_STATE(10)] = 790,
  [SMALL_STATE(11)] = 883,
  [SMALL_STATE(12)] = 976,
  [SMALL_STATE(13)] = 1066,
  [SMALL_STATE(14)] = 1141,
  [SMALL_STATE(15)] = 1216,
  [SMALL_STATE(16)] = 1291,
  [SMALL_STATE(17)] = 1366,
  [SMALL_STATE(18)] = 1441,
  [SMALL_STATE(19)] = 1516,
  [SMALL_STATE(20)] = 1546,
  [SMALL_STATE(21)] = 1565,
  [SMALL_STATE(22)] = 1590,
  [SMALL_STATE(23)] = 1609,
  [SMALL_STATE(24)] = 1628,
  [SMALL_STATE(25)] = 1642,
  [SMALL_STATE(26)] = 1668,
  [SMALL_STATE(27)] = 1682,
  [SMALL_STATE(28)] = 1708,
  [SMALL_STATE(29)] = 1722,
  [SMALL_STATE(30)] = 1748,
  [SMALL_STATE(31)] = 1762,
  [SMALL_STATE(32)] = 1785,
  [SMALL_STATE(33)] = 1808,
  [SMALL_STATE(34)] = 1821,
  [SMALL_STATE(35)] = 1839,
  [SMALL_STATE(36)] = 1855,
  [SMALL_STATE(37)] = 1873,
  [SMALL_STATE(38)] = 1891,
  [SMALL_STATE(39)] = 1902,
  [SMALL_STATE(40)] = 1913,
  [SMALL_STATE(41)] = 1924,
  [SMALL_STATE(42)] = 1935,
  [SMALL_STATE(43)] = 1946,
  [SMALL_STATE(44)] = 1957,
  [SMALL_STATE(45)] = 1968,
  [SMALL_STATE(46)] = 1979,
  [SMALL_STATE(47)] = 1990,
  [SMALL_STATE(48)] = 2001,
  [SMALL_STATE(49)] = 2012,
  [SMALL_STATE(50)] = 2023,
  [SMALL_STATE(51)] = 2034,
  [SMALL_STATE(52)] = 2045,
  [SMALL_STATE(53)] = 2056,
  [SMALL_STATE(54)] = 2073,
  [SMALL_STATE(55)] = 2084,
  [SMALL_STATE(56)] = 2095,
  [SMALL_STATE(57)] = 2106,
  [SMALL_STATE(58)] = 2117,
  [SMALL_STATE(59)] = 2128,
  [SMALL_STATE(60)] = 2139,
  [SMALL_STATE(61)] = 2150,
  [SMALL_STATE(62)] = 2161,
  [SMALL_STATE(63)] = 2175,
  [SMALL_STATE(64)] = 2187,
  [SMALL_STATE(65)] = 2201,
  [SMALL_STATE(66)] = 2211,
  [SMALL_STATE(67)] = 2225,
  [SMALL_STATE(68)] = 2239,
  [SMALL_STATE(69)] = 2253,
  [SMALL_STATE(70)] = 2267,
  [SMALL_STATE(71)] = 2277,
  [SMALL_STATE(72)] = 2291,
  [SMALL_STATE(73)] = 2305,
  [SMALL_STATE(74)] = 2315,
  [SMALL_STATE(75)] = 2329,
  [SMALL_STATE(76)] = 2339,
  [SMALL_STATE(77)] = 2353,
  [SMALL_STATE(78)] = 2363,
  [SMALL_STATE(79)] = 2375,
  [SMALL_STATE(80)] = 2385,
  [SMALL_STATE(81)] = 2399,
  [SMALL_STATE(82)] = 2408,
  [SMALL_STATE(83)] = 2417,
  [SMALL_STATE(84)] = 2428,
  [SMALL_STATE(85)] = 2437,
  [SMALL_STATE(86)] = 2448,
  [SMALL_STATE(87)] = 2457,
  [SMALL_STATE(88)] = 2466,
  [SMALL_STATE(89)] = 2475,
  [SMALL_STATE(90)] = 2486,
  [SMALL_STATE(91)] = 2497,
  [SMALL_STATE(92)] = 2508,
  [SMALL_STATE(93)] = 2517,
  [SMALL_STATE(94)] = 2528,
  [SMALL_STATE(95)] = 2537,
  [SMALL_STATE(96)] = 2546,
  [SMALL_STATE(97)] = 2554,
  [SMALL_STATE(98)] = 2562,
  [SMALL_STATE(99)] = 2570,
  [SMALL_STATE(100)] = 2578,
  [SMALL_STATE(101)] = 2586,
  [SMALL_STATE(102)] = 2594,
  [SMALL_STATE(103)] = 2602,
  [SMALL_STATE(104)] = 2610,
  [SMALL_STATE(105)] = 2618,
  [SMALL_STATE(106)] = 2626,
  [SMALL_STATE(107)] = 2634,
  [SMALL_STATE(108)] = 2642,
  [SMALL_STATE(109)] = 2650,
  [SMALL_STATE(110)] = 2658,
  [SMALL_STATE(111)] = 2666,
  [SMALL_STATE(112)] = 2674,
  [SMALL_STATE(113)] = 2682,
  [SMALL_STATE(114)] = 2690,
  [SMALL_STATE(115)] = 2698,
  [SMALL_STATE(116)] = 2706,
  [SMALL_STATE(117)] = 2714,
  [SMALL_STATE(118)] = 2722,
  [SMALL_STATE(119)] = 2730,
  [SMALL_STATE(120)] = 2738,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_functype_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_functype_repeat1, 2), SHIFT_REPEAT(33),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(119),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_prog_repeat1, 2), SHIFT_REPEAT(83),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functype, 3, .production_id = 11),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_functype, 4, .production_id = 11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuptype, 5),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuptype, 4),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actortype_repeat1, 2), SHIFT_REPEAT(73),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_actortype_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_actortype_repeat1, 2), SHIFT_REPEAT(36),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuptype, 2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tuptype, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_funcann, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_datatype, 1), REDUCE(sym_name, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_datatype, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(106),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(37),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comptype, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cons_record_list, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cons_record_list, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reftype, 1),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cons_variant_list, 4),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cons_variant_list, 5),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actortype, 2),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actortype, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cons_record_list, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons_record, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constype, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_numtype, 1),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primtype, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_func, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cons_variant_list, 3),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons_variant, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cons_record_list, 4),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__cons_variant_list, 2),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref_service, 2),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons_opt, 2),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cons_vec, 2),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldtype_short, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 2),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tuptype_repeat1, 2), SHIFT_REPEAT(12),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tuptype_repeat1, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__cons_record_list_repeat1, 2), SHIFT_REPEAT(8),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__cons_record_list_repeat1, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_text, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escape, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nat, 1),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__actor_arrow_pre, 2, .production_id = 5),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argtype, 1, .production_id = 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldtype, 1, .production_id = 8),
  [233] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fieldtype, 3, .production_id = 13),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__fieldtype_short, 3, .production_id = 12),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argtype, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__argtype_short, 3, .production_id = 10),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actor, 4, .production_id = 4),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_type, 4),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actor, 5, .production_id = 7),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prog, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actor, 3, .production_id = 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_methtype, 3, .production_id = 9),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_actor, 4, .production_id = 6),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def_import, 2, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [285] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_def, 1),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [289] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_candid_external_scanner_create(void);
void tree_sitter_candid_external_scanner_destroy(void *);
bool tree_sitter_candid_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_candid_external_scanner_serialize(void *, char *);
void tree_sitter_candid_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_candid(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_id,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_candid_external_scanner_create,
      tree_sitter_candid_external_scanner_destroy,
      tree_sitter_candid_external_scanner_scan,
      tree_sitter_candid_external_scanner_serialize,
      tree_sitter_candid_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
