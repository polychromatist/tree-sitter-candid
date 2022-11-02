const _list = (token, sep) => optional(seq(token, repeat(seq(sep, token)), optional(sep)));
//const _list1 = (token, sep) => seq(token, repeat(seq(sep, token)), optional(sep));
const _list_s = (token, sep) => repeat(seq(token, sep));

const WHITESPACE = /\s/;
const NAME = /[a-zA-Z_][0-9a-zA-Z_]*/;
const DECIMAL_DIGIT = /[0-9]/;
const HEX_DIGIT = /[0-9a-f-A-F]/;

const ASCII = /[\x00-\x7f]/u;
const ASCII_NO_NL = /[\x00-\x09\x0b-\x7f]/u;

const ESCAPE = /[nrt\\'"]/

const DECIMAL_NUM = /[0-9][0-9_]*/
const HEX_NUM = /0x[0-9a-fA-F][0-9a-fA-F_]*/

const FLOAT = [
  /[0-9][0-9_]*\.(?:[0-9][0-9_]*)?/,
  /[0-9][0-9_]*(?:\.(?:[0-9][0-9_]*)?)?(?:e|E)(?:\+|-)?[0-9][0-9_]*/,
  /0x[0-9a-fA-F][0-9a-fA-F_]*\.(?:[0-9a-fA-F][0-9a-fA-F_]*)/,
  /0x[0-9a-fA-F][0-9a-fA-F_]*(?:\.(?:[0-9a-fA-F][0-9a-fA-F_]*)?)?(?:p|P)(?:\+|-)?[0-9a-fA-F][0-9a-fA-F_]*/
];

const UTF8_ENC = [
  /[\xc2-\xdf][\x80-\xbf]/, 
  /[\xe0][\xa0-\xbf][\x80-\xbf]/,
  /[\xed][\x80-\x9f][\x80-\xbf]/,
  /[\xe1-\xec\xee-\xef][\x80-\xbf]{2}/,
  /[\xf0][\x90-\xbf][\x80-\xbf]{2}/,
  /[\xf4][\x80-\x8f][\x80-\xbf]{2}/,
  /[\xf1-\xf3][\x80-\xbf]{3}/
];

module.exports = grammar({
  name: 'candid',
  word: $ => $.id,
  extras: $ => [WHITESPACE, $.linecomment, $.blockcomment],
  externals: $ => [$._text_literal, $.blockcomment],
  conflicts: $ => [[$.datatype, $.name]],
  
  rules: {
    prog: $ => seq(
      _list_s($.def, ";"),
      optional(seq($.actor, ";"))
    ),
    
    def: $ => choice(
      $.def_type,
      $.def_import),
    
    def_type: $ => seq("type", $.id, "=", $.datatype),
    
    def_import: $ => seq("import", field("value", $.text)),
    
    actor: $ => seq(
      "service",
      optional(field("name", $.id)),
      ":",
      optional($._actor_arrow_pre),
      field("value", choice($.actortype, $.id))),
    _actor_arrow_pre: $ => seq(field("param", $.tuptype), "->"),
    
    actortype: $ => seq("{", _list_s($.methtype, ";"), "}"),
    
    methtype: $ => seq(field("name", $.name), ":", field("value", choice($.functype, $.id))),
    
    functype: $ => seq(field("param", $.tuptype), "->", field("return", $.tuptype), repeat($.funcann)),
    
    funcann: () => choice("oneway", "query"),
    
    tuptype: $ => seq("(", _list($.argtype, ","), ")"),
    
    argtype: $ => choice(
      $.datatype,
      $._argtype_short),
    _argtype_short: $ => seq(field("name", $.name), ":", $.datatype),
    
    fieldtype: $ => choice(
      seq(field("index", $.nat), ":", $.datatype),
      $._fieldtype_short),
    _fieldtype_short: $ => choice(
      seq(field("hasharg", $.name), ":", $.datatype),
      $.datatype,
      $.nat,
      $.name),
    
    datatype: $ => choice($.id, $.primtype, $.comptype),
    
    comptype: $ => choice($.constype, $.reftype),
    
    primtype: $ => choice(
      $.numtype,
      "bool",
      "text",
      "null",
      "reserved",
      "empty",
      "principal"),
    
    numtype: () => choice("nat",
       "nat8",
       "nat16",
       "nat32",
       "nat64" ,
       "int",
       "int8",
       "int16",
       "int32",
       "int64",
       "float32",
       "float64"), 
    
    constype: $ => choice(
      $.cons_opt,
      $.cons_vec,
      $.cons_record,
      $.cons_variant,
      $._constype_short),
    _constype_short: () => "blob",
    
    cons_opt: $ => seq("opt", $.datatype),
    
    cons_vec: $ => seq("vec", $.datatype),
    
    cons_record: $ => seq("record", $._cons_record_list),
    _cons_record_list: $ => seq("{", _list($.fieldtype, ";"), "}"),
    
    cons_variant: $ => seq("variant", $._cons_variant_list),
    _cons_variant_list: $ => seq("{", _list($.fieldtype, ";"), "}"),
    
    reftype: $ => choice(
      $.ref_func,
      $.ref_service),
    
    ref_func: $ => seq("func", $.functype),
    
    ref_service: $ => seq("service", $.actortype),
    
    name: $ => choice($.id, $.text),
       
    id: () => NAME,
    
    linecomment: () => token(seq("//", /.*/)),
   
    int: () => seq(optional(choice("+", "-")), DECIMAL_NUM),
    nat: () => choice(DECIMAL_NUM, HEX_NUM),
    float: () => choice(...FLOAT),
    
    utf8_enc: () => choice(...UTF8_ENC),
    
    _utf8: $ => choice(ASCII, $.utf8_enc),
    _utf8_no_nl: $ => choice(ASCII_NO_NL, $.utf8_enc),
    
    escape: () => seq("\\", token.immediate(ESCAPE)),
    byte: () => seq("\\", token.immediate(HEX_DIGIT), token.immediate(HEX_DIGIT)),
    utf8code: () => seq("\\u{", token.immediate(HEX_NUM), token.immediate("}")),
    
    character: $ => choice(
      /[^"\\\x00-\x1f\x7f-\xff]/,
      $.utf8_enc,
      $.escape,
      $.byte,
      $.utf8code),
    
    char: $ => seq("'", $.character, token.immediate("'")),
    
    text: $ => seq('"', repeat(choice($.escape, $._text_literal)), token.immediate('"'))   
//    text: $ => seq('"', repeat(choice($.escape, $.character)), token.immediate('"'))
  }
});
