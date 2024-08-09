/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'YOUR_LANGUAGE_NAME',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.class_definition
      // TODO: other kinds of definitions
    ),

    class_definition: $ => seq(
      'class',
      $.identifier,
      $.class_block
    ),

    class_block: $ => seq(
      '{',
      repeat($._class_statement),
      '}'
    ),

    _class_statement: $ => choice(
      //$.field_variable,
      //$.static_variable,
      $.subroutine_definition
      // TODO: other kinds of statements
    ),

    subroutine_definition: $ => seq(
      $.subroutine_flavor,
      $.type,
      $.identifier,
      $.parameter_list,
      $.subroutine_block
    ),

    subroutine_flavor: $ => choice(
      'constructor',
      'function',
      'subroutine'
    ),

    parameter_list: $ => seq(
      '(',
      repeat($._parameter_statement),
      ')'
    ),

    _parameter_statement: $ => seq(
      $.type,
      $.identifier
      // TODO: comma separated?
    ),

    subroutine_block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    _statement: $ => choice(
      $.let_statement,
      $.do_statement,
      //$.if_statement,
      //$.else_statement,
      //$.while_statement,
      $.return_statement
    ),

    let_statement: $ => seq(
      'let',
      $.identifier,
      '=',
      $._expression,
      ';'
    ),

    do_statement: $ => seq(
      'do',
      $._expression,
      '(',
      repeat($._expression),
      ')',
      ';'
    ),

    return_statement: $ => seq(
      'return',
      $.identifier,
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number
      // TODO: other kinds of expressions
    ),

    type: $ => choice(
      $.primitive_type,
      $.identifier
    ),

    primitive_type: $ => choice(
      'int',
      'char',
      'boolean',
      'Array'
    ),

    identifier: $ => /[a-zA-Z]+/,

    number: $ => /\d+/
  }
});
