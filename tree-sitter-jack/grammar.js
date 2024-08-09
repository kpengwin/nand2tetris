/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'jack',

  extras: $ => [
    /\s/,
    $.single_line_comment,
    $.multi_line_comment,
    $.doc_string_comment
  ],

  rules: {
    source_file: $ => repeat($.class_definition),

    class_definition: $ => seq(
      'class',
      field('class_name', $.identifier),
      $.class_block
    ),

    class_block: $ => seq(
      '{',
      repeat($._class_statement),
      '}'
    ),

    _class_statement: $ => choice(
      $._class_variable,
      $._subroutine_definition
    ),

    _class_variable: $ => choice(
      $.field_variable,
      $.static_variable,
    ),

    field_variable: $ => seq(
      'field',
      $.type,
      sepBy(',', field('var_name', $.identifier))
    ),

    static_variable: $ => seq(
      'static',
      $.type,
      sepBy(',', field('var_name', $.identifier))
    ),

    _subroutine_definition: $ => choice(
      $.constructor_definition,
      $.function_definition,
      $.method_definition
    ),

    constructor_definition: $ => seq(
      'constructor',
      $._subroutine_generic_definition
    ),

    function_definition: $ => seq(
      'function',
      $._subroutine_generic_definition
    ),

    method_definition: $ => seq(
      'method',
      $._subroutine_generic_definition
    ),

    _subroutine_generic_definition: $ => seq(
      $.type,
      field('name', $.identifier),
      $.parameter_list,
      $.subroutine_block
    ),

    parameter_list: $ => seq(
      '(',
      sepBy(',', $._parameter_statement),
      ')'
    ),

    _parameter_statement: $ => seq(
      $.type,
      $.identifier
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
      field('var_name', $.identifier),
      '=',
      $._expression,
      ';'
    ),

    do_statement: $ => seq(
      'do',
      sepBy('.', $._expression),
      '(',
      repeat($._expression),
      ')',
      ';'
    ),

    return_statement: $ => seq(
      'return',
      optional($.identifier),
      ';'
    ),

    _expression: $ => choice(
      $.identifier,
      $.number,
      $.quoted_string
      // TODO: other kinds of expressions
    ),

    type: $ => choice(
      $._primitive_type,
      $.identifier
    ),

    // Adapted from https://github.com/tree-sitter-grammars/tree-sitter-lua/blob/main/grammar.js
    quoted_string: $ => seq(
      seq(
        field('start', alias('"', '"')),
        field(
          'content',
          optional(alias($._string_content, $.string_content))
        ),
        field('end', alias('"', '"'))
      )
    ),
    _string_content: $ => repeat1(choice(token.immediate(prec(1, /[^"\\]+/)), $.escape_sequence)),

    escape_sequence: () =>
      token.immediate(
        seq(
          '\\',
          choice(
            /[\nabfnrtv\\'"]/,
            /z\s*/,
            /[0-9]{1,3}/,
            /x[0-9a-fA-F]{2}/,
            /u\{[0-9a-fA-F]+\}/
          )
        )
      ),

    _primitive_type: $ => choice(
      'int',
      'char',
      'boolean',
      'Array'
    ),

    identifier: $ => /[a-zA-Z]+/,

    number: $ => /\d+/,

    _comment: $ => choice(
      $.single_line_comment,
      $.multi_line_comment,
      $.doc_string_comment
    ),

    single_line_comment: $ => seq(
      '//',
      /[^\n]*/
    ),

    multi_line_comment: $ => seq(
      '/*',
      /[^(*\/)]*/,
      '*/'
    ),

    doc_string_comment: $ => seq(
      '/**',
      /[^(*\/)]*/,
      '*/'
    )
  }
});


// From: https://github.com/tree-sitter/tree-sitter-rust/blob/master/grammar.js#L1605-L1630
function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
