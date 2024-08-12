#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 127
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 87
#define ALIAS_COUNT 1
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

enum ts_symbol_identifiers {
  anon_sym_class = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_field = 4,
  anon_sym_COMMA = 5,
  anon_sym_static = 6,
  anon_sym_constructor = 7,
  anon_sym_function = 8,
  anon_sym_method = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_let = 12,
  anon_sym_EQ = 13,
  anon_sym_SEMI = 14,
  anon_sym_do = 15,
  anon_sym_while = 16,
  anon_sym_return = 17,
  anon_sym_var = 18,
  anon_sym_DOT = 19,
  anon_sym_TILDE = 20,
  anon_sym_DASH = 21,
  anon_sym_PLUS = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_AMP = 25,
  anon_sym_PIPE = 26,
  anon_sym_LT = 27,
  anon_sym_GT = 28,
  sym_array_element = 29,
  anon_sym_DQUOTE = 30,
  aux_sym__string_content_token1 = 31,
  sym_escape_sequence = 32,
  anon_sym_int = 33,
  anon_sym_char = 34,
  anon_sym_boolean = 35,
  anon_sym_Array = 36,
  sym_identifier = 37,
  sym_number = 38,
  anon_sym_SLASH_SLASH = 39,
  aux_sym_single_line_comment_token1 = 40,
  anon_sym_SLASH_STAR = 41,
  aux_sym_multi_line_comment_token1 = 42,
  anon_sym_STAR_SLASH = 43,
  anon_sym_SLASH_STAR_STAR = 44,
  sym_source_file = 45,
  sym_class_definition = 46,
  sym_class_block = 47,
  sym__class_statement = 48,
  sym__class_variable = 49,
  sym_field_variable = 50,
  sym_static_variable = 51,
  sym__subroutine_definition = 52,
  sym_constructor_definition = 53,
  sym_function_definition = 54,
  sym_method_definition = 55,
  sym__subroutine_generic_definition = 56,
  sym_parameter_list = 57,
  sym__parameter_statement = 58,
  sym_subroutine_block = 59,
  sym__statement = 60,
  sym_let_statement = 61,
  sym_do_statement = 62,
  sym_while_statement = 63,
  sym_return_statement = 64,
  sym_variable_declaration = 65,
  sym__expression = 66,
  sym_parenthetical_expr = 67,
  sym_subroutine_call = 68,
  sym_argument_list = 69,
  sym_unary_expression = 70,
  sym_dual_expression = 71,
  sym_unary_operator = 72,
  sym_dual_operator = 73,
  sym_type = 74,
  sym_quoted_string = 75,
  aux_sym__string_content = 76,
  sym__primitive_type = 77,
  sym_single_line_comment = 78,
  sym_multi_line_comment = 79,
  sym_doc_string_comment = 80,
  aux_sym_source_file_repeat1 = 81,
  aux_sym_class_block_repeat1 = 82,
  aux_sym_field_variable_repeat1 = 83,
  aux_sym_parameter_list_repeat1 = 84,
  aux_sym_subroutine_block_repeat1 = 85,
  aux_sym_argument_list_repeat1 = 86,
  alias_sym_string_content = 87,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_field] = "field",
  [anon_sym_COMMA] = ",",
  [anon_sym_static] = "static",
  [anon_sym_constructor] = "constructor",
  [anon_sym_function] = "function",
  [anon_sym_method] = "method",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_do] = "do",
  [anon_sym_while] = "while",
  [anon_sym_return] = "return",
  [anon_sym_var] = "var",
  [anon_sym_DOT] = ".",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH] = "-",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [sym_array_element] = "array_element",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym__string_content_token1] = "_string_content_token1",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_int] = "int",
  [anon_sym_char] = "char",
  [anon_sym_boolean] = "boolean",
  [anon_sym_Array] = "Array",
  [sym_identifier] = "identifier",
  [sym_number] = "number",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_single_line_comment_token1] = "single_line_comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_multi_line_comment_token1] = "multi_line_comment_token1",
  [anon_sym_STAR_SLASH] = "*/",
  [anon_sym_SLASH_STAR_STAR] = "/**",
  [sym_source_file] = "source_file",
  [sym_class_definition] = "class_definition",
  [sym_class_block] = "class_block",
  [sym__class_statement] = "_class_statement",
  [sym__class_variable] = "_class_variable",
  [sym_field_variable] = "field_variable",
  [sym_static_variable] = "static_variable",
  [sym__subroutine_definition] = "_subroutine_definition",
  [sym_constructor_definition] = "constructor_definition",
  [sym_function_definition] = "function_definition",
  [sym_method_definition] = "method_definition",
  [sym__subroutine_generic_definition] = "_subroutine_generic_definition",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter_statement] = "_parameter_statement",
  [sym_subroutine_block] = "subroutine_block",
  [sym__statement] = "_statement",
  [sym_let_statement] = "let_statement",
  [sym_do_statement] = "do_statement",
  [sym_while_statement] = "while_statement",
  [sym_return_statement] = "return_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym__expression] = "_expression",
  [sym_parenthetical_expr] = "parenthetical_expr",
  [sym_subroutine_call] = "subroutine_call",
  [sym_argument_list] = "argument_list",
  [sym_unary_expression] = "unary_expression",
  [sym_dual_expression] = "dual_expression",
  [sym_unary_operator] = "unary_operator",
  [sym_dual_operator] = "dual_operator",
  [sym_type] = "type",
  [sym_quoted_string] = "quoted_string",
  [aux_sym__string_content] = "_string_content",
  [sym__primitive_type] = "_primitive_type",
  [sym_single_line_comment] = "single_line_comment",
  [sym_multi_line_comment] = "multi_line_comment",
  [sym_doc_string_comment] = "doc_string_comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_block_repeat1] = "class_block_repeat1",
  [aux_sym_field_variable_repeat1] = "field_variable_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_subroutine_block_repeat1] = "subroutine_block_repeat1",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [alias_sym_string_content] = "string_content",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_class] = anon_sym_class,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_field] = anon_sym_field,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [sym_array_element] = sym_array_element,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym__string_content_token1] = aux_sym__string_content_token1,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_int] = anon_sym_int,
  [anon_sym_char] = anon_sym_char,
  [anon_sym_boolean] = anon_sym_boolean,
  [anon_sym_Array] = anon_sym_Array,
  [sym_identifier] = sym_identifier,
  [sym_number] = sym_number,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_single_line_comment_token1] = aux_sym_single_line_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_multi_line_comment_token1] = aux_sym_multi_line_comment_token1,
  [anon_sym_STAR_SLASH] = anon_sym_STAR_SLASH,
  [anon_sym_SLASH_STAR_STAR] = anon_sym_SLASH_STAR_STAR,
  [sym_source_file] = sym_source_file,
  [sym_class_definition] = sym_class_definition,
  [sym_class_block] = sym_class_block,
  [sym__class_statement] = sym__class_statement,
  [sym__class_variable] = sym__class_variable,
  [sym_field_variable] = sym_field_variable,
  [sym_static_variable] = sym_static_variable,
  [sym__subroutine_definition] = sym__subroutine_definition,
  [sym_constructor_definition] = sym_constructor_definition,
  [sym_function_definition] = sym_function_definition,
  [sym_method_definition] = sym_method_definition,
  [sym__subroutine_generic_definition] = sym__subroutine_generic_definition,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter_statement] = sym__parameter_statement,
  [sym_subroutine_block] = sym_subroutine_block,
  [sym__statement] = sym__statement,
  [sym_let_statement] = sym_let_statement,
  [sym_do_statement] = sym_do_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__expression] = sym__expression,
  [sym_parenthetical_expr] = sym_parenthetical_expr,
  [sym_subroutine_call] = sym_subroutine_call,
  [sym_argument_list] = sym_argument_list,
  [sym_unary_expression] = sym_unary_expression,
  [sym_dual_expression] = sym_dual_expression,
  [sym_unary_operator] = sym_unary_operator,
  [sym_dual_operator] = sym_dual_operator,
  [sym_type] = sym_type,
  [sym_quoted_string] = sym_quoted_string,
  [aux_sym__string_content] = aux_sym__string_content,
  [sym__primitive_type] = sym__primitive_type,
  [sym_single_line_comment] = sym_single_line_comment,
  [sym_multi_line_comment] = sym_multi_line_comment,
  [sym_doc_string_comment] = sym_doc_string_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_block_repeat1] = aux_sym_class_block_repeat1,
  [aux_sym_field_variable_repeat1] = aux_sym_field_variable_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_subroutine_block_repeat1] = aux_sym_subroutine_block_repeat1,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [alias_sym_string_content] = alias_sym_string_content,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_class] = {
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
  [anon_sym_field] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_do] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_array_element] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__string_content_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_int] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_char] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Array] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_single_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multi_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_STAR_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_class_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_class_block] = {
    .visible = true,
    .named = true,
  },
  [sym__class_statement] = {
    .visible = false,
    .named = true,
  },
  [sym__class_variable] = {
    .visible = false,
    .named = true,
  },
  [sym_field_variable] = {
    .visible = true,
    .named = true,
  },
  [sym_static_variable] = {
    .visible = true,
    .named = true,
  },
  [sym__subroutine_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_constructor_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_method_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__subroutine_generic_definition] = {
    .visible = false,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym__parameter_statement] = {
    .visible = false,
    .named = true,
  },
  [sym_subroutine_block] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_let_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_do_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthetical_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_subroutine_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_dual_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_dual_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__string_content] = {
    .visible = false,
    .named = false,
  },
  [sym__primitive_type] = {
    .visible = false,
    .named = true,
  },
  [sym_single_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_multi_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_doc_string_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_field_variable_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subroutine_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_string_content] = {
    .visible = true,
    .named = true,
  },
};

enum ts_field_identifiers {
  field_class_name = 1,
  field_content = 2,
  field_end = 3,
  field_function_name = 4,
  field_name = 5,
  field_start = 6,
  field_var_name = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_class_name] = "class_name",
  [field_content] = "content",
  [field_end] = "end",
  [field_function_name] = "function_name",
  [field_name] = "name",
  [field_start] = "start",
  [field_var_name] = "var_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 1},
  [8] = {.index = 9, .length = 1},
  [9] = {.index = 10, .length = 2},
  [10] = {.index = 12, .length = 2},
  [11] = {.index = 14, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_class_name, 1},
  [1] =
    {field_name, 1, .inherited = true},
  [2] =
    {field_var_name, 2},
  [3] =
    {field_var_name, 2},
    {field_var_name, 3, .inherited = true},
  [5] =
    {field_var_name, 1},
  [6] =
    {field_var_name, 0, .inherited = true},
    {field_var_name, 1, .inherited = true},
  [8] =
    {field_name, 1},
  [9] =
    {field_function_name, 0},
  [10] =
    {field_end, 1},
    {field_start, 0},
  [12] =
    {field_class_name, 0},
    {field_function_name, 2},
  [14] =
    {field_content, 1},
    {field_end, 2},
    {field_start, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [11] = {
    [1] = alias_sym_string_content,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__string_content, 2,
    aux_sym__string_content,
    alias_sym_string_content,
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
  [94] = 45,
  [95] = 47,
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
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
};

static TSCharacterRange sym_escape_sequence_character_set_1[] = {
  {'\n', '\n'}, {'"', '"'}, {'\'', '\''}, {'0', '9'}, {'\\', '\\'}, {'a', 'b'}, {'f', 'f'}, {'n', 'n'},
  {'r', 'r'}, {'t', 'v'}, {'x', 'x'}, {'z', 'z'},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(75);
      ADVANCE_MAP(
        '"', 111,
        '&', 106,
        '(', 90,
        ')', 91,
        '*', 104,
        '+', 102,
        ',', 81,
        '-', 101,
        '.', 99,
        '/', 105,
        ';', 94,
        '<', 108,
        '=', 93,
        '>', 109,
        'A', 49,
        '\\', 65,
        ']', 110,
        'b', 43,
        'c', 26,
        'd', 40,
        'f', 27,
        'i', 38,
        'l', 20,
        'm', 21,
        'r', 22,
        's', 61,
        'v', 9,
        'w', 24,
        '{', 77,
        '|', 107,
        '}', 78,
        '~', 100,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 111,
        '&', 106,
        '(', 90,
        ')', 91,
        '*', 103,
        '+', 102,
        ',', 81,
        '-', 101,
        '.', 99,
        '/', 105,
        ';', 94,
        '<', 108,
        '=', 93,
        '>', 109,
        ']', 110,
        '|', 107,
        '~', 100,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(111);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead == '\\') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(91);
      if (lookahead == '*') ADVANCE(5);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'A') ADVANCE(161);
      if (lookahead == 'b') ADVANCE(153);
      if (lookahead == 'c') ADVANCE(140);
      if (lookahead == 'i') ADVANCE(147);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '/') ADVANCE(175);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(155);
      if (lookahead == 'f') ADVANCE(143);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 's') ADVANCE(169);
      if (lookahead == '}') ADVANCE(78);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(36);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(82);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(62);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(79);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(88);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(19);
      if (lookahead == 'u') ADVANCE(34);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(124);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(56);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(55);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(95);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(98);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(84);
      END_STATE();
    case 49:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(76);
      END_STATE();
    case 54:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(120);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(29);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(69);
      if (lookahead == 'x') ADVANCE(73);
      if (lookahead == 'z') ADVANCE(117);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(119);
      if (set_contains(sym_escape_sequence_character_set_1, 12, lookahead)) ADVANCE(116);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(51);
      END_STATE();
    case 67:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 68:
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 69:
      if (lookahead == '{') ADVANCE(72);
      END_STATE();
    case 70:
      if (lookahead == '}') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(70);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 74:
      if (eof) ADVANCE(75);
      ADVANCE_MAP(
        '"', 111,
        '&', 106,
        '(', 90,
        ')', 91,
        '*', 104,
        '+', 102,
        ',', 81,
        '-', 101,
        '.', 99,
        '/', 105,
        ';', 94,
        '<', 108,
        '=', 93,
        '>', 109,
        'A', 49,
        ']', 110,
        'b', 43,
        'c', 26,
        'd', 40,
        'f', 27,
        'i', 38,
        'l', 20,
        'm', 21,
        'r', 22,
        's', 61,
        'v', 9,
        'w', 24,
        '{', 77,
        '|', 107,
        '}', 78,
        '~', 100,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(74);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_field);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_static);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_function);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_method);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead == '/') ADVANCE(184);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(180);
      if (lookahead == '/') ADVANCE(175);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_array_element);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '*') ADVANCE(112);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '/') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_char);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(172);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(165);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(167);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(170);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(80);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'u') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(164);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(163);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(87);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(162);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(156);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(173);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(174);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(181);
      if (lookahead == '/') ADVANCE(176);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '/') ADVANCE(177);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(178);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(179);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(185);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(186);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(182);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '/') ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '/') ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR_STAR);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(179);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 3},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 3},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 178},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 182},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 182},
  [124] = {(TSStateId)(-1)},
  [125] = {(TSStateId)(-1)},
  [126] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_single_line_comment] = STATE(0),
    [sym_multi_line_comment] = STATE(0),
    [sym_doc_string_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_field] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_array_element] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_STAR_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR_STAR] = ACTIONS(7),
  },
  [1] = {
    [sym_source_file] = STATE(117),
    [sym_class_definition] = STATE(104),
    [sym_single_line_comment] = STATE(1),
    [sym_multi_line_comment] = STATE(1),
    [sym_doc_string_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(75),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH_STAR_STAR] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(11), 1,
      sym_unary_operator,
    STATE(18), 1,
      sym__expression,
    ACTIONS(17), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_array_element,
      sym_number,
    STATE(2), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(26), 5,
      sym_parenthetical_expr,
      sym_subroutine_call,
      sym_unary_expression,
      sym_dual_expression,
      sym_quoted_string,
  [48] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(27), 1,
      anon_sym_field,
    ACTIONS(30), 1,
      anon_sym_static,
    ACTIONS(33), 1,
      anon_sym_constructor,
    ACTIONS(36), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_method,
    STATE(55), 1,
      sym__class_statement,
    STATE(70), 2,
      sym_field_variable,
      sym_static_variable,
    STATE(71), 2,
      sym__class_variable,
      sym__subroutine_definition,
    STATE(67), 3,
      sym_constructor_definition,
      sym_function_definition,
      sym_method_definition,
    STATE(3), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_class_block_repeat1,
  [98] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_DOT,
    ACTIONS(48), 1,
      anon_sym_SLASH,
    STATE(23), 1,
      sym_argument_list,
    STATE(4), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(42), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [138] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_field,
    ACTIONS(54), 1,
      anon_sym_static,
    ACTIONS(56), 1,
      anon_sym_constructor,
    ACTIONS(58), 1,
      anon_sym_function,
    ACTIONS(60), 1,
      anon_sym_method,
    STATE(3), 1,
      aux_sym_class_block_repeat1,
    STATE(55), 1,
      sym__class_statement,
    STATE(70), 2,
      sym_field_variable,
      sym_static_variable,
    STATE(71), 2,
      sym__class_variable,
      sym__subroutine_definition,
    STATE(5), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(67), 3,
      sym_constructor_definition,
      sym_function_definition,
      sym_method_definition,
  [190] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(52), 1,
      anon_sym_field,
    ACTIONS(54), 1,
      anon_sym_static,
    ACTIONS(56), 1,
      anon_sym_constructor,
    ACTIONS(58), 1,
      anon_sym_function,
    ACTIONS(60), 1,
      anon_sym_method,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(5), 1,
      aux_sym_class_block_repeat1,
    STATE(55), 1,
      sym__class_statement,
    STATE(70), 2,
      sym_field_variable,
      sym_static_variable,
    STATE(71), 2,
      sym__class_variable,
      sym__subroutine_definition,
    STATE(6), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(67), 3,
      sym_constructor_definition,
      sym_function_definition,
      sym_method_definition,
  [242] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(11), 1,
      sym_unary_operator,
    STATE(19), 1,
      sym__expression,
    ACTIONS(17), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_array_element,
      sym_number,
    STATE(7), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(26), 5,
      sym_parenthetical_expr,
      sym_subroutine_call,
      sym_unary_expression,
      sym_dual_expression,
      sym_quoted_string,
  [287] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(11), 1,
      sym_unary_operator,
    STATE(32), 1,
      sym__expression,
    ACTIONS(17), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_array_element,
      sym_number,
    STATE(8), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(26), 5,
      sym_parenthetical_expr,
      sym_subroutine_call,
      sym_unary_expression,
      sym_dual_expression,
      sym_quoted_string,
  [332] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(11), 1,
      sym_unary_operator,
    STATE(33), 1,
      sym__expression,
    ACTIONS(17), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_array_element,
      sym_number,
    STATE(9), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(26), 5,
      sym_parenthetical_expr,
      sym_subroutine_call,
      sym_unary_expression,
      sym_dual_expression,
      sym_quoted_string,
  [377] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(11), 1,
      sym_unary_operator,
    STATE(31), 1,
      sym__expression,
    ACTIONS(17), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_array_element,
      sym_number,
    STATE(10), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(26), 5,
      sym_parenthetical_expr,
      sym_subroutine_call,
      sym_unary_expression,
      sym_dual_expression,
      sym_quoted_string,
  [422] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(13), 1,
      sym__expression,
    ACTIONS(17), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_array_element,
      sym_number,
    STATE(11), 4,
      sym_unary_operator,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(26), 5,
      sym_parenthetical_expr,
      sym_subroutine_call,
      sym_unary_expression,
      sym_dual_expression,
      sym_quoted_string,
  [465] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_DQUOTE,
    ACTIONS(23), 1,
      sym_identifier,
    STATE(11), 1,
      sym_unary_operator,
    STATE(30), 1,
      sym__expression,
    ACTIONS(17), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(19), 2,
      sym_array_element,
      sym_number,
    STATE(12), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(26), 5,
      sym_parenthetical_expr,
      sym_subroutine_call,
      sym_unary_expression,
      sym_dual_expression,
      sym_quoted_string,
  [510] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(69), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      sym_dual_operator,
    ACTIONS(64), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(13), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(66), 8,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [546] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(72), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 1,
      anon_sym_let,
    ACTIONS(76), 1,
      anon_sym_do,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      anon_sym_return,
    ACTIONS(82), 1,
      anon_sym_var,
    STATE(17), 1,
      aux_sym_subroutine_block_repeat1,
    STATE(64), 1,
      sym__statement,
    STATE(14), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(65), 5,
      sym_let_statement,
      sym_do_statement,
      sym_while_statement,
      sym_return_statement,
      sym_variable_declaration,
  [592] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(74), 1,
      anon_sym_let,
    ACTIONS(76), 1,
      anon_sym_do,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      anon_sym_return,
    ACTIONS(82), 1,
      anon_sym_var,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(16), 1,
      aux_sym_subroutine_block_repeat1,
    STATE(64), 1,
      sym__statement,
    STATE(15), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(65), 5,
      sym_let_statement,
      sym_do_statement,
      sym_while_statement,
      sym_return_statement,
      sym_variable_declaration,
  [638] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(74), 1,
      anon_sym_let,
    ACTIONS(76), 1,
      anon_sym_do,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      anon_sym_return,
    ACTIONS(82), 1,
      anon_sym_var,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(17), 1,
      aux_sym_subroutine_block_repeat1,
    STATE(64), 1,
      sym__statement,
    STATE(16), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(65), 5,
      sym_let_statement,
      sym_do_statement,
      sym_while_statement,
      sym_return_statement,
      sym_variable_declaration,
  [684] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(90), 1,
      anon_sym_let,
    ACTIONS(93), 1,
      anon_sym_do,
    ACTIONS(96), 1,
      anon_sym_while,
    ACTIONS(99), 1,
      anon_sym_return,
    ACTIONS(102), 1,
      anon_sym_var,
    STATE(64), 1,
      sym__statement,
    STATE(17), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_subroutine_block_repeat1,
    STATE(65), 5,
      sym_let_statement,
      sym_do_statement,
      sym_while_statement,
      sym_return_statement,
      sym_variable_declaration,
  [728] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      sym_dual_operator,
    STATE(87), 1,
      aux_sym_argument_list_repeat1,
    STATE(18), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(109), 8,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [768] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(118), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      sym_dual_operator,
    ACTIONS(113), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(19), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(115), 8,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [804] = 13,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(74), 1,
      anon_sym_let,
    ACTIONS(76), 1,
      anon_sym_do,
    ACTIONS(78), 1,
      anon_sym_while,
    ACTIONS(80), 1,
      anon_sym_return,
    ACTIONS(82), 1,
      anon_sym_var,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    STATE(14), 1,
      aux_sym_subroutine_block_repeat1,
    STATE(64), 1,
      sym__statement,
    STATE(20), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(65), 5,
      sym_let_statement,
      sym_do_statement,
      sym_while_statement,
      sym_return_statement,
      sym_variable_declaration,
  [850] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(125), 1,
      anon_sym_SLASH,
    STATE(21), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(123), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [881] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(129), 1,
      anon_sym_SLASH,
    STATE(22), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(127), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [912] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(133), 1,
      anon_sym_SLASH,
    STATE(23), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(131), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [943] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(137), 1,
      anon_sym_SLASH,
    STATE(24), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(135), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [974] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(141), 1,
      anon_sym_SLASH,
    STATE(25), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(139), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1005] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(48), 1,
      anon_sym_SLASH,
    STATE(26), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(42), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1036] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(145), 1,
      anon_sym_SLASH,
    STATE(27), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(143), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1067] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(149), 1,
      anon_sym_SLASH,
    STATE(28), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(147), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1098] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(153), 1,
      anon_sym_SLASH,
    STATE(29), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(151), 11,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1129] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    STATE(7), 1,
      sym_dual_operator,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(30), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(109), 8,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1164] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(157), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_dual_operator,
    STATE(31), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(109), 8,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1198] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(159), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      sym_dual_operator,
    STATE(32), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(109), 8,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1232] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(111), 1,
      anon_sym_SLASH,
    ACTIONS(161), 1,
      anon_sym_SEMI,
    STATE(7), 1,
      sym_dual_operator,
    STATE(33), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(109), 8,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_LT,
      anon_sym_GT,
  [1266] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(165), 1,
      anon_sym_COMMA,
    STATE(34), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_field_variable_repeat1,
    ACTIONS(163), 7,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
      anon_sym_SEMI,
  [1294] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(168), 1,
      anon_sym_RPAREN,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(81), 1,
      sym__parameter_statement,
    STATE(94), 1,
      sym__primitive_type,
    STATE(116), 1,
      sym_type,
    STATE(35), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(170), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [1330] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(63), 1,
      sym__subroutine_generic_definition,
    STATE(94), 1,
      sym__primitive_type,
    STATE(108), 1,
      sym_type,
    STATE(36), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(170), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [1363] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(90), 1,
      sym__parameter_statement,
    STATE(94), 1,
      sym__primitive_type,
    STATE(116), 1,
      sym_type,
    STATE(37), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(170), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [1396] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(60), 1,
      sym__subroutine_generic_definition,
    STATE(94), 1,
      sym__primitive_type,
    STATE(108), 1,
      sym_type,
    STATE(38), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(170), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [1429] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(39), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(174), 8,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
      anon_sym_SEMI,
  [1454] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    STATE(43), 1,
      aux_sym_field_variable_repeat1,
    STATE(40), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(176), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1483] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    STATE(44), 1,
      aux_sym_field_variable_repeat1,
    STATE(41), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(180), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1512] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(56), 1,
      sym__subroutine_generic_definition,
    STATE(94), 1,
      sym__primitive_type,
    STATE(108), 1,
      sym_type,
    STATE(42), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(170), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [1545] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_field_variable_repeat1,
    STATE(43), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(182), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1574] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      aux_sym_field_variable_repeat1,
    STATE(44), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(184), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1603] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(186), 1,
      anon_sym_RBRACE,
    STATE(45), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(188), 6,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
      sym_identifier,
  [1629] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(45), 1,
      sym__primitive_type,
    STATE(51), 1,
      sym_type,
    STATE(46), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(190), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [1659] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(194), 1,
      anon_sym_RBRACE,
    STATE(47), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(196), 6,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
      sym_identifier,
  [1685] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(48), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(198), 7,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_DASH,
      sym_array_element,
      anon_sym_DQUOTE,
      sym_identifier,
      sym_number,
  [1709] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(192), 1,
      sym_identifier,
    STATE(45), 1,
      sym__primitive_type,
    STATE(52), 1,
      sym_type,
    STATE(49), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(190), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [1739] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(50), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(200), 7,
      anon_sym_LPAREN,
      anon_sym_TILDE,
      anon_sym_DASH,
      sym_array_element,
      anon_sym_DQUOTE,
      sym_identifier,
      sym_number,
  [1763] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(202), 1,
      anon_sym_RBRACE,
    ACTIONS(206), 1,
      sym_identifier,
    STATE(51), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(204), 5,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1791] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(208), 1,
      anon_sym_RBRACE,
    ACTIONS(212), 1,
      sym_identifier,
    STATE(52), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(210), 5,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1819] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(172), 1,
      sym_identifier,
    STATE(94), 1,
      sym__primitive_type,
    STATE(101), 1,
      sym_type,
    STATE(53), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(170), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [1849] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(54), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(214), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [1872] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(55), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(216), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1895] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(56), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(218), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1918] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(57), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(220), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [1941] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(58), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(222), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1964] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(59), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(224), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [1987] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(60), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(226), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2010] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(61), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(228), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [2033] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(62), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(230), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [2056] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(63), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(232), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2079] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(64), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(234), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [2102] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(65), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(236), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [2125] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(66), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(238), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2148] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(67), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(240), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2171] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(68), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(242), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [2194] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(69), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(244), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [2217] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(70), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(246), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2240] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(71), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(248), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2263] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(72), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(250), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [2286] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(73), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(252), 6,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_while,
      anon_sym_return,
      anon_sym_var,
  [2309] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(74), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(254), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [2332] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(256), 1,
      ts_builtin_sym_end,
    STATE(76), 1,
      aux_sym_source_file_repeat1,
    STATE(104), 1,
      sym_class_definition,
    STATE(75), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2359] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(258), 1,
      ts_builtin_sym_end,
    ACTIONS(260), 1,
      anon_sym_class,
    STATE(104), 1,
      sym_class_definition,
    STATE(76), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_source_file_repeat1,
  [2384] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(263), 1,
      anon_sym_DQUOTE,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(269), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(78), 1,
      aux_sym__string_content,
    ACTIONS(265), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(77), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2409] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(269), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(271), 1,
      anon_sym_DQUOTE,
    ACTIONS(273), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(78), 4,
      aux_sym__string_content,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2432] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(269), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(276), 1,
      anon_sym_DQUOTE,
    STATE(77), 1,
      aux_sym__string_content,
    ACTIONS(265), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(79), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2457] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(269), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(278), 1,
      anon_sym_DQUOTE,
    ACTIONS(280), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(80), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2479] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(284), 1,
      anon_sym_RPAREN,
    STATE(82), 1,
      aux_sym_parameter_list_repeat1,
    STATE(81), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2503] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_COMMA,
    ACTIONS(286), 1,
      anon_sym_RPAREN,
    STATE(86), 1,
      aux_sym_parameter_list_repeat1,
    STATE(82), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2527] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_DOT,
    STATE(23), 1,
      sym_argument_list,
    STATE(83), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2551] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    STATE(85), 1,
      aux_sym_field_variable_repeat1,
    STATE(84), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2575] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(178), 1,
      anon_sym_COMMA,
    ACTIONS(290), 1,
      anon_sym_SEMI,
    STATE(34), 1,
      aux_sym_field_variable_repeat1,
    STATE(85), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2599] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(292), 1,
      anon_sym_COMMA,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
    STATE(86), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_parameter_list_repeat1,
  [2621] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(105), 1,
      anon_sym_COMMA,
    ACTIONS(297), 1,
      anon_sym_RPAREN,
    STATE(88), 1,
      aux_sym_argument_list_repeat1,
    STATE(87), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2645] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(155), 1,
      anon_sym_RPAREN,
    ACTIONS(299), 1,
      anon_sym_COMMA,
    STATE(88), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_argument_list_repeat1,
  [2667] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(302), 1,
      anon_sym_LBRACE,
    STATE(99), 1,
      sym_class_block,
    STATE(89), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2688] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(295), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(90), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2707] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(304), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(91), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2726] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(306), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(92), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2745] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(308), 1,
      anon_sym_LPAREN,
    STATE(96), 1,
      sym_parameter_list,
    STATE(93), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2766] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(186), 2,
      anon_sym_SEMI,
      sym_identifier,
    STATE(94), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2785] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(194), 2,
      anon_sym_SEMI,
      sym_identifier,
    STATE(95), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2804] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(310), 1,
      anon_sym_LBRACE,
    STATE(66), 1,
      sym_subroutine_block,
    STATE(96), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2825] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_argument_list,
    STATE(97), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2846] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(312), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(98), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2865] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(99), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2884] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(316), 2,
      sym_array_element,
      sym_identifier,
    STATE(100), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2903] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(318), 1,
      anon_sym_SEMI,
    ACTIONS(320), 1,
      sym_identifier,
    STATE(101), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2924] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(322), 1,
      sym_identifier,
    STATE(107), 1,
      sym_subroutine_call,
    STATE(102), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2945] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(324), 1,
      anon_sym_SEMI,
    ACTIONS(326), 1,
      sym_identifier,
    STATE(103), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2966] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(328), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(104), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2985] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(330), 1,
      anon_sym_EQ,
    STATE(105), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3003] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(332), 1,
      anon_sym_SEMI,
    STATE(106), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3021] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(334), 1,
      anon_sym_SEMI,
    STATE(107), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3039] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(336), 1,
      sym_identifier,
    STATE(108), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3057] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(338), 1,
      anon_sym_LBRACE,
    STATE(109), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3075] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(340), 1,
      anon_sym_STAR_SLASH,
    STATE(110), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3093] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(342), 1,
      anon_sym_LBRACE,
    STATE(111), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3111] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(344), 1,
      anon_sym_STAR_SLASH,
    STATE(112), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3129] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(346), 1,
      sym_identifier,
    STATE(113), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3147] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(348), 1,
      sym_identifier,
    STATE(114), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3165] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(269), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(350), 1,
      aux_sym_single_line_comment_token1,
    STATE(115), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3183] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(352), 1,
      sym_identifier,
    STATE(116), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3201] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(354), 1,
      ts_builtin_sym_end,
    STATE(117), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3219] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(356), 1,
      anon_sym_LBRACE,
    STATE(118), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3237] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(358), 1,
      sym_identifier,
    STATE(119), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3255] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(269), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(360), 1,
      aux_sym_multi_line_comment_token1,
    STATE(120), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3273] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(362), 1,
      anon_sym_LPAREN,
    STATE(121), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3291] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(364), 1,
      anon_sym_LBRACE,
    STATE(122), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3309] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(267), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(269), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(366), 1,
      aux_sym_multi_line_comment_token1,
    STATE(123), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [3327] = 1,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
  [3331] = 1,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
  [3335] = 1,
    ACTIONS(372), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 48,
  [SMALL_STATE(4)] = 98,
  [SMALL_STATE(5)] = 138,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 242,
  [SMALL_STATE(8)] = 287,
  [SMALL_STATE(9)] = 332,
  [SMALL_STATE(10)] = 377,
  [SMALL_STATE(11)] = 422,
  [SMALL_STATE(12)] = 465,
  [SMALL_STATE(13)] = 510,
  [SMALL_STATE(14)] = 546,
  [SMALL_STATE(15)] = 592,
  [SMALL_STATE(16)] = 638,
  [SMALL_STATE(17)] = 684,
  [SMALL_STATE(18)] = 728,
  [SMALL_STATE(19)] = 768,
  [SMALL_STATE(20)] = 804,
  [SMALL_STATE(21)] = 850,
  [SMALL_STATE(22)] = 881,
  [SMALL_STATE(23)] = 912,
  [SMALL_STATE(24)] = 943,
  [SMALL_STATE(25)] = 974,
  [SMALL_STATE(26)] = 1005,
  [SMALL_STATE(27)] = 1036,
  [SMALL_STATE(28)] = 1067,
  [SMALL_STATE(29)] = 1098,
  [SMALL_STATE(30)] = 1129,
  [SMALL_STATE(31)] = 1164,
  [SMALL_STATE(32)] = 1198,
  [SMALL_STATE(33)] = 1232,
  [SMALL_STATE(34)] = 1266,
  [SMALL_STATE(35)] = 1294,
  [SMALL_STATE(36)] = 1330,
  [SMALL_STATE(37)] = 1363,
  [SMALL_STATE(38)] = 1396,
  [SMALL_STATE(39)] = 1429,
  [SMALL_STATE(40)] = 1454,
  [SMALL_STATE(41)] = 1483,
  [SMALL_STATE(42)] = 1512,
  [SMALL_STATE(43)] = 1545,
  [SMALL_STATE(44)] = 1574,
  [SMALL_STATE(45)] = 1603,
  [SMALL_STATE(46)] = 1629,
  [SMALL_STATE(47)] = 1659,
  [SMALL_STATE(48)] = 1685,
  [SMALL_STATE(49)] = 1709,
  [SMALL_STATE(50)] = 1739,
  [SMALL_STATE(51)] = 1763,
  [SMALL_STATE(52)] = 1791,
  [SMALL_STATE(53)] = 1819,
  [SMALL_STATE(54)] = 1849,
  [SMALL_STATE(55)] = 1872,
  [SMALL_STATE(56)] = 1895,
  [SMALL_STATE(57)] = 1918,
  [SMALL_STATE(58)] = 1941,
  [SMALL_STATE(59)] = 1964,
  [SMALL_STATE(60)] = 1987,
  [SMALL_STATE(61)] = 2010,
  [SMALL_STATE(62)] = 2033,
  [SMALL_STATE(63)] = 2056,
  [SMALL_STATE(64)] = 2079,
  [SMALL_STATE(65)] = 2102,
  [SMALL_STATE(66)] = 2125,
  [SMALL_STATE(67)] = 2148,
  [SMALL_STATE(68)] = 2171,
  [SMALL_STATE(69)] = 2194,
  [SMALL_STATE(70)] = 2217,
  [SMALL_STATE(71)] = 2240,
  [SMALL_STATE(72)] = 2263,
  [SMALL_STATE(73)] = 2286,
  [SMALL_STATE(74)] = 2309,
  [SMALL_STATE(75)] = 2332,
  [SMALL_STATE(76)] = 2359,
  [SMALL_STATE(77)] = 2384,
  [SMALL_STATE(78)] = 2409,
  [SMALL_STATE(79)] = 2432,
  [SMALL_STATE(80)] = 2457,
  [SMALL_STATE(81)] = 2479,
  [SMALL_STATE(82)] = 2503,
  [SMALL_STATE(83)] = 2527,
  [SMALL_STATE(84)] = 2551,
  [SMALL_STATE(85)] = 2575,
  [SMALL_STATE(86)] = 2599,
  [SMALL_STATE(87)] = 2621,
  [SMALL_STATE(88)] = 2645,
  [SMALL_STATE(89)] = 2667,
  [SMALL_STATE(90)] = 2688,
  [SMALL_STATE(91)] = 2707,
  [SMALL_STATE(92)] = 2726,
  [SMALL_STATE(93)] = 2745,
  [SMALL_STATE(94)] = 2766,
  [SMALL_STATE(95)] = 2785,
  [SMALL_STATE(96)] = 2804,
  [SMALL_STATE(97)] = 2825,
  [SMALL_STATE(98)] = 2846,
  [SMALL_STATE(99)] = 2865,
  [SMALL_STATE(100)] = 2884,
  [SMALL_STATE(101)] = 2903,
  [SMALL_STATE(102)] = 2924,
  [SMALL_STATE(103)] = 2945,
  [SMALL_STATE(104)] = 2966,
  [SMALL_STATE(105)] = 2985,
  [SMALL_STATE(106)] = 3003,
  [SMALL_STATE(107)] = 3021,
  [SMALL_STATE(108)] = 3039,
  [SMALL_STATE(109)] = 3057,
  [SMALL_STATE(110)] = 3075,
  [SMALL_STATE(111)] = 3093,
  [SMALL_STATE(112)] = 3111,
  [SMALL_STATE(113)] = 3129,
  [SMALL_STATE(114)] = 3147,
  [SMALL_STATE(115)] = 3165,
  [SMALL_STATE(116)] = 3183,
  [SMALL_STATE(117)] = 3201,
  [SMALL_STATE(118)] = 3219,
  [SMALL_STATE(119)] = 3237,
  [SMALL_STATE(120)] = 3255,
  [SMALL_STATE(121)] = 3273,
  [SMALL_STATE(122)] = 3291,
  [SMALL_STATE(123)] = 3309,
  [SMALL_STATE(124)] = 3327,
  [SMALL_STATE(125)] = 3331,
  [SMALL_STATE(126)] = 3335,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(36),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0), SHIFT(48),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_unary_expression, 2, 0, 0), SHIFT(48),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(100),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(121),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(53),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dual_expression, 3, 0, 0),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_dual_expression, 3, 0, 0), SHIFT(48),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_dual_expression, 3, 0, 0), SHIFT(48),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthetical_expr, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthetical_expr, 3, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_call, 2, 0, 8),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutine_call, 2, 0, 8),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 11),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 3, 0, 11),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_call, 4, 0, 10),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutine_call, 4, 0, 10),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 9),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quoted_string, 2, 0, 9),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_variable_repeat1, 2, 0, 6),
  [165] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_variable_repeat1, 2, 0, 6), SHIFT_REPEAT(114),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(95),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_variable_repeat1, 2, 0, 5),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_variable, 3, 0, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_variable, 3, 0, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_variable, 4, 0, 4),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_variable, 4, 0, 4),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive_type, 1, 0, 0),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dual_operator, 1, 0, 0),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_variable, 2, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_variable, 2, 0, 0),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_variable, 2, 0, 0),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_variable, 2, 0, 0),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 1, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 7, 0, 0),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_block, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 6, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2, 0, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_definition, 2, 0, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 1, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subroutine_generic_definition, 4, 0, 7),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subroutine_definition, 1, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5, 0, 5),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_variable, 1, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_statement, 1, 0, 0),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_block, 3, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(119),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [271] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [273] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(80),
  [276] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 1, 0, 0),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_content, 1, 0, 0),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [304] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_statement, 2, 0, 0),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 3, 0, 0),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 2, 0, 0),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, 0, 1),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [328] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [338] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [350] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [354] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [356] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [366] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string_comment, 3, 0, 0),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 3, 0, 0),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 2, 0, 0),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jack(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
