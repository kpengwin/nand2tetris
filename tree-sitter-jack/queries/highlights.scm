(identifier) @variable
(quoted_string) @string

[
  "let"
  "do"
  "while"
  "return"
  "class"
  "constructor"
  "function"
  "method"
  "var"
  "field"
  "static"
] @keyword

(class_definition class_name: (identifier) @constant)

(function_definition name: (identifier) @function)

(constructor_definition name: (identifier) @function)

(method_definition name: (identifier) @function)

(let_statement var_name: (identifier) @variable.parameter)

(variable_declaration var_name: (identifier) @variable.parameter)

(subroutine_call class_name: (identifier) @constant)
(subroutine_call function_name: (identifier) @function)

[
 (single_line_comment)
 (multi_line_comment)
 (doc_string_comment)
 ] @comment

(type) @type

(number) @number

(ERROR) @error

[
 "="
 "<"
 ">"
 "+"
 "-"
 "/"
 "*"
 "&"
 "|"
] @operator

[
  ","
  ";"
] @punctuation.delimiter

[
  "("
  ")"
  "{"
  "}"
  "["
  "]"
] @punctuation.bracket
