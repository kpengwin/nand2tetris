/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: 'jack',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.class_definition
      // TODO: other kinds of definitions
    ),

    class_definition: $ => seq(
      'class',
      field('class_name', $.identifier),
      $.class_block
    ),

    class_block: $ => seq(
      field('start', '{'),
      repeat($._class_statement),
      field('end', '}')
    ),

    _class_statement: $ => choice(
      //$.field_variable,
      //$.static_variable,
      $.subroutine_definition
      // TODO: other kinds of statements
    ),

    subroutine_definition: $ => seq(
      $._subroutine_flavor,
      $.type,
      field('name', $.identifier),
      $.parameter_list,
      $.subroutine_block
    ),

    _subroutine_flavor: $ => choice(
      'constructor',
      'function',
      'subroutine'
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

    number: $ => /\d+/
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}
