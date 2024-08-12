#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 113
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 75
#define ALIAS_COUNT 1
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 5
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
  anon_sym_return = 16,
  anon_sym_var = 17,
  anon_sym_DOT = 18,
  anon_sym_TILDE = 19,
  anon_sym_DASH = 20,
  sym_array_element = 21,
  anon_sym_DQUOTE = 22,
  aux_sym__string_content_token1 = 23,
  sym_escape_sequence = 24,
  anon_sym_int = 25,
  anon_sym_char = 26,
  anon_sym_boolean = 27,
  anon_sym_Array = 28,
  sym_identifier = 29,
  sym_number = 30,
  anon_sym_SLASH_SLASH = 31,
  aux_sym_single_line_comment_token1 = 32,
  anon_sym_SLASH_STAR = 33,
  aux_sym_multi_line_comment_token1 = 34,
  anon_sym_STAR_SLASH = 35,
  anon_sym_SLASH_STAR_STAR = 36,
  sym_source_file = 37,
  sym_class_definition = 38,
  sym_class_block = 39,
  sym__class_statement = 40,
  sym__class_variable = 41,
  sym_field_variable = 42,
  sym_static_variable = 43,
  sym__subroutine_definition = 44,
  sym_constructor_definition = 45,
  sym_function_definition = 46,
  sym_method_definition = 47,
  sym__subroutine_generic_definition = 48,
  sym_parameter_list = 49,
  sym__parameter_statement = 50,
  sym_subroutine_block = 51,
  sym__statement = 52,
  sym_let_statement = 53,
  sym_do_statement = 54,
  sym_return_statement = 55,
  sym_variable_declaration = 56,
  sym__expression = 57,
  sym_subroutine_call = 58,
  sym_argument_list = 59,
  sym_unary_expression = 60,
  sym_unary_operator = 61,
  sym_type = 62,
  sym_quoted_string = 63,
  aux_sym__string_content = 64,
  sym__primitive_type = 65,
  sym_single_line_comment = 66,
  sym_multi_line_comment = 67,
  sym_doc_string_comment = 68,
  aux_sym_source_file_repeat1 = 69,
  aux_sym_class_block_repeat1 = 70,
  aux_sym_field_variable_repeat1 = 71,
  aux_sym_parameter_list_repeat1 = 72,
  aux_sym_subroutine_block_repeat1 = 73,
  aux_sym_argument_list_repeat1 = 74,
  alias_sym_string_content = 75,
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
  [anon_sym_return] = "return",
  [anon_sym_var] = "var",
  [anon_sym_DOT] = ".",
  [anon_sym_TILDE] = "~",
  [anon_sym_DASH] = "-",
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
  [sym_return_statement] = "return_statement",
  [sym_variable_declaration] = "variable_declaration",
  [sym__expression] = "_expression",
  [sym_subroutine_call] = "subroutine_call",
  [sym_argument_list] = "argument_list",
  [sym_unary_expression] = "unary_expression",
  [sym_unary_operator] = "unary_operator",
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
  [anon_sym_return] = anon_sym_return,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [sym_return_statement] = sym_return_statement,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym__expression] = sym__expression,
  [sym_subroutine_call] = sym_subroutine_call,
  [sym_argument_list] = sym_argument_list,
  [sym_unary_expression] = sym_unary_expression,
  [sym_unary_operator] = sym_unary_operator,
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
  [sym_unary_operator] = {
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
  [77] = 23,
  [78] = 24,
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
      if (eof) ADVANCE(71);
      ADVANCE_MAP(
        '"', 98,
        '(', 86,
        ')', 87,
        '*', 6,
        ',', 77,
        '-', 96,
        '.', 94,
        '/', 4,
        ';', 90,
        '=', 89,
        'A', 45,
        '\\', 61,
        ']', 97,
        'b', 39,
        'c', 24,
        'd', 36,
        'f', 25,
        'i', 34,
        'l', 19,
        'm', 20,
        'r', 21,
        's', 58,
        'v', 9,
        '{', 73,
        '}', 74,
        '~', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '-') ADVANCE(96);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(90);
      if (lookahead == ']') ADVANCE(97);
      if (lookahead == '~') ADVANCE(95);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(98);
      if (lookahead == '/') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(61);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0) ADVANCE(102);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(87);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'A') ADVANCE(148);
      if (lookahead == 'b') ADVANCE(140);
      if (lookahead == 'c') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(134);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(167);
      if (lookahead == '/') ADVANCE(162);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(142);
      if (lookahead == 'f') ADVANCE(130);
      if (lookahead == 'm') ADVANCE(126);
      if (lookahead == 's') ADVANCE(156);
      if (lookahead == '}') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(171);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(60);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(75);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(84);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(38);
      END_STATE();
    case 24:
      if (lookahead == 'h') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(18);
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(92);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(51);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(91);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(80);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(49);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(59);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(107);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(88);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(12);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(46);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(65);
      if (lookahead == 'x') ADVANCE(69);
      if (lookahead == 'z') ADVANCE(104);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      if (set_contains(sym_escape_sequence_character_set_1, 12, lookahead)) ADVANCE(103);
      END_STATE();
    case 62:
      if (lookahead == 'u') ADVANCE(47);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(15);
      END_STATE();
    case 64:
      if (lookahead == 'y') ADVANCE(113);
      END_STATE();
    case 65:
      if (lookahead == '{') ADVANCE(68);
      END_STATE();
    case 66:
      if (lookahead == '}') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 70:
      if (eof) ADVANCE(71);
      ADVANCE_MAP(
        '"', 98,
        '(', 86,
        ')', 87,
        '*', 6,
        ',', 77,
        '-', 96,
        '.', 94,
        '/', 4,
        ';', 90,
        '=', 89,
        'A', 45,
        ']', 97,
        'b', 39,
        'c', 24,
        'd', 36,
        'f', 25,
        'i', 34,
        'l', 19,
        'm', 20,
        'r', 21,
        's', 58,
        'v', 9,
        '{', 73,
        '}', 74,
        '~', 95,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_field);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_static);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_function);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_method);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_array_element);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '*') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '/') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '/') ADVANCE(100);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(105);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_char);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(159);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(154);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(85);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(124);
      if (lookahead == 'u') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(136);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(158);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(161);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(168);
      if (lookahead == '/') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '/') ADVANCE(164);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(172);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(173);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(169);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '/') ADVANCE(170);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '/') ADVANCE(170);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR_STAR);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(166);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 2},
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
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 169},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 169},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 165},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {(TSStateId)(-1)},
  [111] = {(TSStateId)(-1)},
  [112] = {(TSStateId)(-1)},
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
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
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
    [sym_source_file] = STATE(91),
    [sym_class_definition] = STATE(83),
    [sym_single_line_comment] = STATE(1),
    [sym_multi_line_comment] = STATE(1),
    [sym_doc_string_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(51),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_class] = ACTIONS(11),
    [anon_sym_SLASH_SLASH] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH_STAR_STAR] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(13), 1,
      anon_sym_RBRACE,
    ACTIONS(15), 1,
      anon_sym_field,
    ACTIONS(17), 1,
      anon_sym_static,
    ACTIONS(19), 1,
      anon_sym_constructor,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_method,
    STATE(3), 1,
      aux_sym_class_block_repeat1,
    STATE(30), 1,
      sym__class_statement,
    STATE(31), 2,
      sym__class_variable,
      sym__subroutine_definition,
    STATE(32), 2,
      sym_field_variable,
      sym_static_variable,
    STATE(2), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(33), 3,
      sym_constructor_definition,
      sym_function_definition,
      sym_method_definition,
  [52] = 15,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(15), 1,
      anon_sym_field,
    ACTIONS(17), 1,
      anon_sym_static,
    ACTIONS(19), 1,
      anon_sym_constructor,
    ACTIONS(21), 1,
      anon_sym_function,
    ACTIONS(23), 1,
      anon_sym_method,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    STATE(4), 1,
      aux_sym_class_block_repeat1,
    STATE(30), 1,
      sym__class_statement,
    STATE(31), 2,
      sym__class_variable,
      sym__subroutine_definition,
    STATE(32), 2,
      sym_field_variable,
      sym_static_variable,
    STATE(3), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(33), 3,
      sym_constructor_definition,
      sym_function_definition,
      sym_method_definition,
  [104] = 14,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(27), 1,
      anon_sym_RBRACE,
    ACTIONS(29), 1,
      anon_sym_field,
    ACTIONS(32), 1,
      anon_sym_static,
    ACTIONS(35), 1,
      anon_sym_constructor,
    ACTIONS(38), 1,
      anon_sym_function,
    ACTIONS(41), 1,
      anon_sym_method,
    STATE(30), 1,
      sym__class_statement,
    STATE(31), 2,
      sym__class_variable,
      sym__subroutine_definition,
    STATE(32), 2,
      sym_field_variable,
      sym_static_variable,
    STATE(33), 3,
      sym_constructor_definition,
      sym_function_definition,
      sym_method_definition,
    STATE(4), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_class_block_repeat1,
  [154] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(7), 1,
      sym_unary_operator,
    STATE(61), 1,
      sym__expression,
    ACTIONS(46), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(48), 2,
      sym_array_element,
      sym_number,
    STATE(5), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(67), 3,
      sym_subroutine_call,
      sym_unary_expression,
      sym_quoted_string,
  [197] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(7), 1,
      sym_unary_operator,
    STATE(82), 1,
      sym__expression,
    ACTIONS(46), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(48), 2,
      sym_array_element,
      sym_number,
    STATE(6), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(67), 3,
      sym_subroutine_call,
      sym_unary_expression,
      sym_quoted_string,
  [237] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(62), 1,
      sym__expression,
    ACTIONS(46), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(48), 2,
      sym_array_element,
      sym_number,
    STATE(67), 3,
      sym_subroutine_call,
      sym_unary_expression,
      sym_quoted_string,
    STATE(7), 4,
      sym_unary_operator,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [275] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(50), 1,
      anon_sym_DQUOTE,
    ACTIONS(52), 1,
      sym_identifier,
    STATE(7), 1,
      sym_unary_operator,
    STATE(93), 1,
      sym__expression,
    ACTIONS(46), 2,
      anon_sym_TILDE,
      anon_sym_DASH,
    ACTIONS(48), 2,
      sym_array_element,
      sym_number,
    STATE(8), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(67), 3,
      sym_subroutine_call,
      sym_unary_expression,
      sym_quoted_string,
  [315] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      anon_sym_let,
    ACTIONS(59), 1,
      anon_sym_do,
    ACTIONS(62), 1,
      anon_sym_return,
    ACTIONS(65), 1,
      anon_sym_var,
    STATE(48), 1,
      sym__statement,
    STATE(9), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_subroutine_block_repeat1,
    STATE(47), 4,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
      sym_variable_declaration,
  [355] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      anon_sym_let,
    ACTIONS(72), 1,
      anon_sym_do,
    ACTIONS(74), 1,
      anon_sym_return,
    ACTIONS(76), 1,
      anon_sym_var,
    STATE(11), 1,
      aux_sym_subroutine_block_repeat1,
    STATE(48), 1,
      sym__statement,
    STATE(10), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(47), 4,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
      sym_variable_declaration,
  [397] = 12,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(70), 1,
      anon_sym_let,
    ACTIONS(72), 1,
      anon_sym_do,
    ACTIONS(74), 1,
      anon_sym_return,
    ACTIONS(76), 1,
      anon_sym_var,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(9), 1,
      aux_sym_subroutine_block_repeat1,
    STATE(48), 1,
      sym__statement,
    STATE(11), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(47), 4,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
      sym_variable_declaration,
  [439] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(82), 1,
      anon_sym_COMMA,
    STATE(12), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_field_variable_repeat1,
    ACTIONS(80), 7,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
      anon_sym_SEMI,
  [467] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(66), 1,
      sym__parameter_statement,
    STATE(77), 1,
      sym__primitive_type,
    STATE(104), 1,
      sym_type,
    STATE(13), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(87), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [503] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(18), 1,
      aux_sym_field_variable_repeat1,
    STATE(14), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(91), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [532] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_field_variable_repeat1,
    STATE(15), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(95), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [561] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(76), 1,
      sym__parameter_statement,
    STATE(77), 1,
      sym__primitive_type,
    STATE(104), 1,
      sym_type,
    STATE(16), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(87), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [594] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(15), 1,
      aux_sym_field_variable_repeat1,
    STATE(17), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(97), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [623] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    STATE(12), 1,
      aux_sym_field_variable_repeat1,
    STATE(18), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(99), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [652] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(19), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(101), 8,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
      anon_sym_SEMI,
  [677] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(37), 1,
      sym__subroutine_generic_definition,
    STATE(77), 1,
      sym__primitive_type,
    STATE(95), 1,
      sym_type,
    STATE(20), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(87), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [710] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(35), 1,
      sym__subroutine_generic_definition,
    STATE(77), 1,
      sym__primitive_type,
    STATE(95), 1,
      sym_type,
    STATE(21), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(87), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [743] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(36), 1,
      sym__subroutine_generic_definition,
    STATE(77), 1,
      sym__primitive_type,
    STATE(95), 1,
      sym_type,
    STATE(22), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(87), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [776] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(103), 1,
      anon_sym_RBRACE,
    STATE(23), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(105), 6,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
      sym_identifier,
  [802] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(107), 1,
      anon_sym_RBRACE,
    STATE(24), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(109), 6,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
      sym_identifier,
  [828] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(23), 1,
      sym__primitive_type,
    STATE(27), 1,
      sym_type,
    STATE(25), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(111), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [858] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(115), 1,
      anon_sym_RBRACE,
    ACTIONS(119), 1,
      sym_identifier,
    STATE(26), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(117), 5,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [886] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(121), 1,
      anon_sym_RBRACE,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(27), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(123), 5,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [914] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(23), 1,
      sym__primitive_type,
    STATE(26), 1,
      sym_type,
    STATE(28), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(111), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [944] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(89), 1,
      sym_identifier,
    STATE(77), 1,
      sym__primitive_type,
    STATE(81), 1,
      sym_type,
    STATE(29), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(87), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [974] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(30), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(127), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [997] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(31), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(129), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1020] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(32), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(131), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1043] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(33), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(133), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1066] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(74), 1,
      sym_argument_list,
    ACTIONS(135), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(34), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1095] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(35), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(141), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1118] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(36), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(143), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1141] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(37), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(145), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1164] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(38), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(147), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1187] = 5,
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
    ACTIONS(149), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1210] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(40), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(151), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1233] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(41), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(153), 6,
      anon_sym_TILDE,
      anon_sym_DASH,
      sym_array_element,
      anon_sym_DQUOTE,
      sym_identifier,
      sym_number,
  [1256] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(42), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(155), 5,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
      anon_sym_var,
  [1278] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(43), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(157), 5,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
      anon_sym_var,
  [1300] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(44), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(159), 5,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
      anon_sym_var,
  [1322] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(45), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(161), 5,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
      anon_sym_var,
  [1344] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(46), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(163), 5,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
      anon_sym_var,
  [1366] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(47), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(165), 5,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
      anon_sym_var,
  [1388] = 5,
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
    ACTIONS(167), 5,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
      anon_sym_var,
  [1410] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(49), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(169), 5,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
      anon_sym_var,
  [1432] = 5,
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
    ACTIONS(171), 5,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
      anon_sym_var,
  [1454] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      aux_sym_source_file_repeat1,
    STATE(83), 1,
      sym_class_definition,
    STATE(51), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1481] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(175), 1,
      anon_sym_DQUOTE,
    ACTIONS(180), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(177), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(52), 4,
      aux_sym__string_content,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1504] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(184), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      aux_sym__string_content,
    ACTIONS(186), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(53), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1529] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
    ACTIONS(190), 1,
      anon_sym_class,
    STATE(83), 1,
      sym_class_definition,
    STATE(54), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_source_file_repeat1,
  [1554] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(193), 1,
      anon_sym_DQUOTE,
    STATE(52), 1,
      aux_sym__string_content,
    ACTIONS(186), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(55), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1579] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(195), 1,
      anon_sym_SEMI,
    STATE(12), 1,
      aux_sym_field_variable_repeat1,
    STATE(56), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1603] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(197), 1,
      anon_sym_DQUOTE,
    ACTIONS(199), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(57), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1625] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(201), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(58), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1645] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(203), 1,
      anon_sym_COMMA,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
    STATE(59), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_argument_list_repeat1,
  [1667] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
    STATE(68), 1,
      aux_sym_parameter_list_repeat1,
    STATE(60), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1691] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(214), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_argument_list_repeat1,
    STATE(61), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1715] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(216), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(62), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1735] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(218), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(63), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1755] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(212), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_argument_list_repeat1,
    STATE(64), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1779] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(222), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(65), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1799] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(208), 1,
      anon_sym_COMMA,
    ACTIONS(224), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_parameter_list_repeat1,
    STATE(66), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1823] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(135), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(67), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1843] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(226), 1,
      anon_sym_COMMA,
    ACTIONS(229), 1,
      anon_sym_RPAREN,
    STATE(68), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_parameter_list_repeat1,
  [1865] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(93), 1,
      anon_sym_COMMA,
    ACTIONS(231), 1,
      anon_sym_SEMI,
    STATE(56), 1,
      aux_sym_field_variable_repeat1,
    STATE(69), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1889] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    ACTIONS(139), 1,
      anon_sym_DOT,
    STATE(74), 1,
      sym_argument_list,
    STATE(70), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1913] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(233), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(71), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1933] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(235), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(72), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1953] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(237), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(73), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1973] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(239), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_SEMI,
    STATE(74), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1993] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(241), 1,
      anon_sym_SEMI,
    ACTIONS(243), 1,
      sym_identifier,
    STATE(75), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2014] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(229), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(76), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2033] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(103), 2,
      anon_sym_SEMI,
      sym_identifier,
    STATE(77), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2052] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(107), 2,
      anon_sym_SEMI,
      sym_identifier,
    STATE(78), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2071] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(245), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(79), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2090] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(247), 1,
      anon_sym_LPAREN,
    STATE(84), 1,
      sym_parameter_list,
    STATE(80), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2111] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(249), 1,
      anon_sym_SEMI,
    ACTIONS(251), 1,
      sym_identifier,
    STATE(81), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2132] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(206), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(82), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2151] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(253), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(83), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2170] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_subroutine_block,
    STATE(84), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2191] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(257), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(85), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2210] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(259), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(86), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2229] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(261), 1,
      sym_identifier,
    STATE(108), 1,
      sym_subroutine_call,
    STATE(87), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2250] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(263), 1,
      anon_sym_LBRACE,
    STATE(85), 1,
      sym_class_block,
    STATE(88), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2271] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(137), 1,
      anon_sym_LPAREN,
    STATE(71), 1,
      sym_argument_list,
    STATE(89), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2292] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(265), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(90), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2311] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(267), 1,
      ts_builtin_sym_end,
    STATE(91), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2329] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(269), 1,
      sym_identifier,
    STATE(92), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2347] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(271), 1,
      anon_sym_SEMI,
    STATE(93), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2365] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(273), 1,
      aux_sym_multi_line_comment_token1,
    STATE(94), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2383] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(275), 1,
      sym_identifier,
    STATE(95), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2401] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(277), 1,
      sym_identifier,
    STATE(96), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2419] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(279), 1,
      sym_identifier,
    STATE(97), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2437] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(281), 1,
      anon_sym_LBRACE,
    STATE(98), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2455] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(283), 1,
      anon_sym_LBRACE,
    STATE(99), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2473] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(285), 1,
      anon_sym_STAR_SLASH,
    STATE(100), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2491] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(287), 1,
      aux_sym_multi_line_comment_token1,
    STATE(101), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2509] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(289), 1,
      anon_sym_EQ,
    STATE(102), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2527] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(182), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(291), 1,
      aux_sym_single_line_comment_token1,
    STATE(103), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2545] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(293), 1,
      sym_identifier,
    STATE(104), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2563] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(295), 1,
      anon_sym_LBRACE,
    STATE(105), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2581] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(297), 1,
      anon_sym_STAR_SLASH,
    STATE(106), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2599] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(299), 1,
      sym_identifier,
    STATE(107), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2617] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(301), 1,
      anon_sym_SEMI,
    STATE(108), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2635] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(303), 1,
      anon_sym_SEMI,
    STATE(109), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2653] = 1,
    ACTIONS(305), 1,
      ts_builtin_sym_end,
  [2657] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [2661] = 1,
    ACTIONS(309), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 104,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 197,
  [SMALL_STATE(7)] = 237,
  [SMALL_STATE(8)] = 275,
  [SMALL_STATE(9)] = 315,
  [SMALL_STATE(10)] = 355,
  [SMALL_STATE(11)] = 397,
  [SMALL_STATE(12)] = 439,
  [SMALL_STATE(13)] = 467,
  [SMALL_STATE(14)] = 503,
  [SMALL_STATE(15)] = 532,
  [SMALL_STATE(16)] = 561,
  [SMALL_STATE(17)] = 594,
  [SMALL_STATE(18)] = 623,
  [SMALL_STATE(19)] = 652,
  [SMALL_STATE(20)] = 677,
  [SMALL_STATE(21)] = 710,
  [SMALL_STATE(22)] = 743,
  [SMALL_STATE(23)] = 776,
  [SMALL_STATE(24)] = 802,
  [SMALL_STATE(25)] = 828,
  [SMALL_STATE(26)] = 858,
  [SMALL_STATE(27)] = 886,
  [SMALL_STATE(28)] = 914,
  [SMALL_STATE(29)] = 944,
  [SMALL_STATE(30)] = 974,
  [SMALL_STATE(31)] = 997,
  [SMALL_STATE(32)] = 1020,
  [SMALL_STATE(33)] = 1043,
  [SMALL_STATE(34)] = 1066,
  [SMALL_STATE(35)] = 1095,
  [SMALL_STATE(36)] = 1118,
  [SMALL_STATE(37)] = 1141,
  [SMALL_STATE(38)] = 1164,
  [SMALL_STATE(39)] = 1187,
  [SMALL_STATE(40)] = 1210,
  [SMALL_STATE(41)] = 1233,
  [SMALL_STATE(42)] = 1256,
  [SMALL_STATE(43)] = 1278,
  [SMALL_STATE(44)] = 1300,
  [SMALL_STATE(45)] = 1322,
  [SMALL_STATE(46)] = 1344,
  [SMALL_STATE(47)] = 1366,
  [SMALL_STATE(48)] = 1388,
  [SMALL_STATE(49)] = 1410,
  [SMALL_STATE(50)] = 1432,
  [SMALL_STATE(51)] = 1454,
  [SMALL_STATE(52)] = 1481,
  [SMALL_STATE(53)] = 1504,
  [SMALL_STATE(54)] = 1529,
  [SMALL_STATE(55)] = 1554,
  [SMALL_STATE(56)] = 1579,
  [SMALL_STATE(57)] = 1603,
  [SMALL_STATE(58)] = 1625,
  [SMALL_STATE(59)] = 1645,
  [SMALL_STATE(60)] = 1667,
  [SMALL_STATE(61)] = 1691,
  [SMALL_STATE(62)] = 1715,
  [SMALL_STATE(63)] = 1735,
  [SMALL_STATE(64)] = 1755,
  [SMALL_STATE(65)] = 1779,
  [SMALL_STATE(66)] = 1799,
  [SMALL_STATE(67)] = 1823,
  [SMALL_STATE(68)] = 1843,
  [SMALL_STATE(69)] = 1865,
  [SMALL_STATE(70)] = 1889,
  [SMALL_STATE(71)] = 1913,
  [SMALL_STATE(72)] = 1933,
  [SMALL_STATE(73)] = 1953,
  [SMALL_STATE(74)] = 1973,
  [SMALL_STATE(75)] = 1993,
  [SMALL_STATE(76)] = 2014,
  [SMALL_STATE(77)] = 2033,
  [SMALL_STATE(78)] = 2052,
  [SMALL_STATE(79)] = 2071,
  [SMALL_STATE(80)] = 2090,
  [SMALL_STATE(81)] = 2111,
  [SMALL_STATE(82)] = 2132,
  [SMALL_STATE(83)] = 2151,
  [SMALL_STATE(84)] = 2170,
  [SMALL_STATE(85)] = 2191,
  [SMALL_STATE(86)] = 2210,
  [SMALL_STATE(87)] = 2229,
  [SMALL_STATE(88)] = 2250,
  [SMALL_STATE(89)] = 2271,
  [SMALL_STATE(90)] = 2292,
  [SMALL_STATE(91)] = 2311,
  [SMALL_STATE(92)] = 2329,
  [SMALL_STATE(93)] = 2347,
  [SMALL_STATE(94)] = 2365,
  [SMALL_STATE(95)] = 2383,
  [SMALL_STATE(96)] = 2401,
  [SMALL_STATE(97)] = 2419,
  [SMALL_STATE(98)] = 2437,
  [SMALL_STATE(99)] = 2455,
  [SMALL_STATE(100)] = 2473,
  [SMALL_STATE(101)] = 2491,
  [SMALL_STATE(102)] = 2509,
  [SMALL_STATE(103)] = 2527,
  [SMALL_STATE(104)] = 2545,
  [SMALL_STATE(105)] = 2563,
  [SMALL_STATE(106)] = 2581,
  [SMALL_STATE(107)] = 2599,
  [SMALL_STATE(108)] = 2617,
  [SMALL_STATE(109)] = 2635,
  [SMALL_STATE(110)] = 2653,
  [SMALL_STATE(111)] = 2657,
  [SMALL_STATE(112)] = 2661,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(96),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(87),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(75),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_variable_repeat1, 2, 0, 6),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_variable_repeat1, 2, 0, 6), SHIFT_REPEAT(92),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [87] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_variable, 3, 0, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_variable, 4, 0, 4),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_variable, 3, 0, 3),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_variable, 4, 0, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_variable_repeat1, 2, 0, 5),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive_type, 1, 0, 0),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_variable, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_variable, 2, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_variable, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_variable, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 1, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_statement, 1, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_variable, 1, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subroutine_definition, 1, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_definition, 2, 0, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 2),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2, 0, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subroutine_generic_definition, 4, 0, 7),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_block, 2, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_block, 3, 0, 0),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_operator, 1, 0, 0),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 3, 0, 0),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 5, 0, 4),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 4, 0, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5, 0, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [177] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(57),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [182] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(107),
  [193] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 1, 0, 0),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_content, 1, 0, 0),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 9),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2, 0, 0),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, 0, 0),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3, 0, 0),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2, 0, 0),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [226] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [231] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_call, 4, 0, 10),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 11),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4, 0, 0),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_call, 2, 0, 8),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [243] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 3, 0, 0),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [257] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, 0, 1),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_statement, 2, 0, 0),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 2, 0, 0),
  [267] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [269] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(112),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string_comment, 3, 0, 0),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 3, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 2, 0, 0),
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
