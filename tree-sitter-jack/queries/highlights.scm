(identifier) @variable
(quoted_string) @string

[
  "let"
  "do"
  "return"
  "class"
  "constructor"
  "function"
  "subroutine"
] @keyword

(class_definition class_name: (identifier) @function)

(subroutine_definition name: (identifier) @function)

(let_statement var_name: (identifier) @variable.parameter)

(type) @type

[
 "="
] @operator

[
  ","
  ";"
  "."
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
] @punctuation.bracket
