(identifier) @variable
(quoted_string) @string

[
  "let"
  "do"
  "return"
  "class"
  "constructor"
  "function"
  "method"
] @keyword

(class_definition class_name: (identifier) @function)

(function_definition name: (identifier) @function)

(constructor_definition name: (identifier) @function)

(method_definition name: (identifier) @function)

(let_statement var_name: (identifier) @variable.parameter)
(let_statement (array_element) @function)

(variable_declaration var_name: (identifier) @variable.parameter)

[
 (single_line_comment)
 (multi_line_comment)
 (doc_string_comment)
 ] @comment

(type) @type

(number) @number

[
 "="
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
] @punctuation.bracket
