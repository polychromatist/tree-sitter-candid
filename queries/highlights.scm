"import" @keyword.control.import

[
 "type"
 "func"
 "service"
 "opt"
 "vec"
 "record"
 "variant"
] @keyword.storage.type

[
 "oneway"
 "query"
] @keyword.storage.modifier

(numtype) @type.builtin
(primtype) @type.builtin

(constype) @type.builtin
(#eq? @type.builtin "blob")

(datatype) @type

[
 "->"
] @operator

[
 ":"
 ";"
 ","
] @punctuation.delimiter

[
 "{"
 "}"
 "("
 ")"
] @punctuation.bracket

(text (escape) @constant.character.escape)
(text) @string

(nat) @constant.numeric.integer
;(int) @constant.numeric.integer
;(float) @constant.numeric.float

(linecomment) @comment.line
(blockcomment) @comment.block

name: (id) @variable