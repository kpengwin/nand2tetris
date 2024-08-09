#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 1
#define TOKEN_COUNT 33
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 10

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
  anon_sym_DOT = 16,
  anon_sym_return = 17,
  anon_sym_DQUOTE = 18,
  aux_sym__string_content_token1 = 19,
  sym_escape_sequence = 20,
  anon_sym_int = 21,
  anon_sym_char = 22,
  anon_sym_boolean = 23,
  anon_sym_Array = 24,
  sym_identifier = 25,
  sym_number = 26,
  anon_sym_SLASH_SLASH = 27,
  aux_sym_single_line_comment_token1 = 28,
  anon_sym_SLASH_STAR = 29,
  aux_sym_multi_line_comment_token1 = 30,
  anon_sym_STAR_SLASH = 31,
  anon_sym_SLASH_STAR_STAR = 32,
  sym_source_file = 33,
  sym_class_definition = 34,
  sym_class_block = 35,
  sym__class_statement = 36,
  sym__class_variable = 37,
  sym_field_variable = 38,
  sym_static_variable = 39,
  sym__subroutine_definition = 40,
  sym_constructor_definition = 41,
  sym_function_definition = 42,
  sym_method_definition = 43,
  sym__subroutine_generic_definition = 44,
  sym_parameter_list = 45,
  sym__parameter_statement = 46,
  sym_subroutine_block = 47,
  sym__statement = 48,
  sym_let_statement = 49,
  sym_do_statement = 50,
  sym_return_statement = 51,
  sym__expression = 52,
  sym_type = 53,
  sym_quoted_string = 54,
  aux_sym__string_content = 55,
  sym__primitive_type = 56,
  sym_single_line_comment = 57,
  sym_multi_line_comment = 58,
  sym_doc_string_comment = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_class_block_repeat1 = 61,
  aux_sym_field_variable_repeat1 = 62,
  aux_sym_parameter_list_repeat1 = 63,
  aux_sym_subroutine_block_repeat1 = 64,
  aux_sym_do_statement_repeat1 = 65,
  aux_sym_do_statement_repeat2 = 66,
  alias_sym_string_content = 67,
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
  [anon_sym_DOT] = ".",
  [anon_sym_return] = "return",
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
  [sym__expression] = "_expression",
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
  [aux_sym_do_statement_repeat1] = "do_statement_repeat1",
  [aux_sym_do_statement_repeat2] = "do_statement_repeat2",
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
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_return] = anon_sym_return,
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
  [sym__expression] = sym__expression,
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
  [aux_sym_do_statement_repeat1] = aux_sym_do_statement_repeat1,
  [aux_sym_do_statement_repeat2] = aux_sym_do_statement_repeat2,
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
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
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
  [sym__expression] = {
    .visible = false,
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
  [aux_sym_do_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_do_statement_repeat2] = {
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
  field_name = 4,
  field_start = 5,
  field_var_name = 6,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_class_name] = "class_name",
  [field_content] = "content",
  [field_end] = "end",
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
  [8] = {.index = 9, .length = 2},
  [9] = {.index = 11, .length = 3},
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
    {field_end, 1},
    {field_start, 0},
  [11] =
    {field_content, 1},
    {field_end, 2},
    {field_start, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [9] = {
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
  [83] = 30,
  [84] = 29,
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
      if (eof) ADVANCE(69);
      ADVANCE_MAP(
        '"', 92,
        '(', 84,
        ')', 85,
        '*', 6,
        ',', 75,
        '.', 90,
        '/', 4,
        ';', 88,
        '=', 87,
        'A', 43,
        '\\', 59,
        'b', 38,
        'c', 22,
        'd', 35,
        'f', 24,
        'i', 33,
        'l', 18,
        'm', 19,
        'r', 20,
        's', 56,
        '{', 71,
        '}', 72,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '(') ADVANCE(84);
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '.') ADVANCE(90);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == ';') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(92);
      if (lookahead == '/') ADVANCE(94);
      if (lookahead == '\\') ADVANCE(59);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0) ADVANCE(96);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(85);
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'A') ADVANCE(142);
      if (lookahead == 'b') ADVANCE(134);
      if (lookahead == 'c') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(128);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(161);
      if (lookahead == '/') ADVANCE(156);
      END_STATE();
    case 5:
      if (lookahead == '/') ADVANCE(4);
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'f') ADVANCE(124);
      if (lookahead == 'm') ADVANCE(120);
      if (lookahead == 's') ADVANCE(150);
      if (lookahead == '}') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(165);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(48);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(41);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 15:
      if (lookahead == 'd') ADVANCE(73);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(82);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(51);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(52);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(9);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(37);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(17);
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(91);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(80);
      END_STATE();
    case 33:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 34:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(89);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(103);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(78);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(8);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(70);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(101);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(25);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(26);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(67);
      if (lookahead == 'z') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (set_contains(sym_escape_sequence_character_set_1, 12, lookahead)) ADVANCE(97);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 61:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 62:
      if (lookahead == 'y') ADVANCE(107);
      END_STATE();
    case 63:
      if (lookahead == '{') ADVANCE(66);
      END_STATE();
    case 64:
      if (lookahead == '}') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(64);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 68:
      if (eof) ADVANCE(69);
      ADVANCE_MAP(
        '"', 92,
        '(', 84,
        ')', 85,
        '*', 6,
        ',', 75,
        '.', 90,
        '/', 4,
        ';', 88,
        '=', 87,
        'A', 43,
        'b', 38,
        'c', 22,
        'd', 35,
        'f', 24,
        'i', 33,
        'l', 18,
        'm', 19,
        'r', 20,
        's', 56,
        '{', 71,
        '}', 72,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(68);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_field);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_field);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_static);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_constructor);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_function);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_method);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_method);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '*') ADVANCE(93);
      if (lookahead == '/') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead == '/') ADVANCE(94);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(98);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_char);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(146);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(148);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'c') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(135);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(118);
      if (lookahead == 'u') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'i') ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(145);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(114);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(152);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 's') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(112);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'u') ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '*') ADVANCE(162);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead == '/') ADVANCE(158);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(159);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(160);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(aux_sym_single_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(166);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(163);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '/') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(aux_sym_multi_line_comment_token1);
      if (lookahead != 0 &&
          (lookahead < '(' || '*' < lookahead) &&
          lookahead != '/') ADVANCE(164);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_STAR_SLASH);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR_STAR);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR_STAR);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(160);
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
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 3},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 1},
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
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 2},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 159},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 163},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 163},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {(TSStateId)(-1)},
  [105] = {(TSStateId)(-1)},
  [106] = {(TSStateId)(-1)},
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
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
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
    [sym_source_file] = STATE(92),
    [sym_class_definition] = STATE(79),
    [sym_single_line_comment] = STATE(1),
    [sym_multi_line_comment] = STATE(1),
    [sym_doc_string_comment] = STATE(1),
    [aux_sym_source_file_repeat1] = STATE(52),
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
    STATE(36), 1,
      sym__class_statement,
    STATE(37), 2,
      sym__class_variable,
      sym__subroutine_definition,
    STATE(38), 2,
      sym_field_variable,
      sym_static_variable,
    STATE(2), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(39), 3,
      sym_constructor_definition,
      sym_function_definition,
      sym_method_definition,
  [52] = 14,
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
    STATE(36), 1,
      sym__class_statement,
    STATE(37), 2,
      sym__class_variable,
      sym__subroutine_definition,
    STATE(38), 2,
      sym_field_variable,
      sym_static_variable,
    STATE(39), 3,
      sym_constructor_definition,
      sym_function_definition,
      sym_method_definition,
    STATE(3), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_class_block_repeat1,
  [102] = 15,
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
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(2), 1,
      aux_sym_class_block_repeat1,
    STATE(36), 1,
      sym__class_statement,
    STATE(37), 2,
      sym__class_variable,
      sym__subroutine_definition,
    STATE(38), 2,
      sym_field_variable,
      sym_static_variable,
    STATE(4), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(39), 3,
      sym_constructor_definition,
      sym_function_definition,
      sym_method_definition,
  [154] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(44), 1,
      anon_sym_RPAREN,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(68), 1,
      sym__parameter_statement,
    STATE(83), 1,
      sym__primitive_type,
    STATE(87), 1,
      sym_type,
    STATE(5), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(46), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [190] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 1,
      anon_sym_let,
    ACTIONS(55), 1,
      anon_sym_do,
    ACTIONS(58), 1,
      anon_sym_return,
    STATE(62), 1,
      sym__statement,
    STATE(55), 3,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
    STATE(6), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_subroutine_block_repeat1,
  [226] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(63), 1,
      anon_sym_let,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_return,
    STATE(8), 1,
      aux_sym_subroutine_block_repeat1,
    STATE(62), 1,
      sym__statement,
    STATE(7), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(55), 3,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
  [264] = 11,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(63), 1,
      anon_sym_let,
    ACTIONS(65), 1,
      anon_sym_do,
    ACTIONS(67), 1,
      anon_sym_return,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(6), 1,
      aux_sym_subroutine_block_repeat1,
    STATE(62), 1,
      sym__statement,
    STATE(8), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    STATE(55), 3,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
  [302] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(10), 1,
      aux_sym_field_variable_repeat1,
    STATE(9), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(71), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [331] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_field_variable_repeat1,
    STATE(10), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(75), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [360] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    STATE(11), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_field_variable_repeat1,
    ACTIONS(77), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [387] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(13), 1,
      aux_sym_field_variable_repeat1,
    STATE(12), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(82), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [416] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(73), 1,
      anon_sym_COMMA,
    STATE(11), 1,
      aux_sym_field_variable_repeat1,
    STATE(13), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(84), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [445] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(73), 1,
      sym__parameter_statement,
    STATE(83), 1,
      sym__primitive_type,
    STATE(87), 1,
      sym_type,
    STATE(14), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(46), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [478] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(43), 1,
      sym__subroutine_generic_definition,
    STATE(83), 1,
      sym__primitive_type,
    STATE(98), 1,
      sym_type,
    STATE(15), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(46), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [511] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(42), 1,
      sym__subroutine_generic_definition,
    STATE(83), 1,
      sym__primitive_type,
    STATE(98), 1,
      sym_type,
    STATE(16), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(46), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [544] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(40), 1,
      sym__subroutine_generic_definition,
    STATE(83), 1,
      sym__primitive_type,
    STATE(98), 1,
      sym_type,
    STATE(17), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(46), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [577] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(18), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(86), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      sym_identifier,
      sym_number,
  [601] = 5,
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
    ACTIONS(88), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      sym_identifier,
      sym_number,
  [625] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(30), 1,
      sym__primitive_type,
    STATE(31), 1,
      sym_type,
    STATE(20), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(90), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [655] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(92), 1,
      sym_identifier,
    STATE(30), 1,
      sym__primitive_type,
    STATE(32), 1,
      sym_type,
    STATE(21), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(90), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [685] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(22), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(94), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      sym_identifier,
      sym_number,
  [709] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_quoted_string,
    STATE(27), 1,
      aux_sym_do_statement_repeat2,
    STATE(54), 1,
      sym__expression,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
    STATE(23), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [743] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_quoted_string,
    STATE(27), 1,
      aux_sym_do_statement_repeat2,
    STATE(54), 1,
      sym__expression,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
    STATE(24), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [777] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_quoted_string,
    STATE(27), 1,
      aux_sym_do_statement_repeat2,
    STATE(54), 1,
      sym__expression,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
    STATE(25), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [811] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_quoted_string,
    STATE(25), 1,
      aux_sym_do_statement_repeat2,
    STATE(54), 1,
      sym__expression,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
    STATE(26), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [845] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    ACTIONS(108), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_quoted_string,
    STATE(54), 1,
      sym__expression,
    ACTIONS(111), 2,
      sym_identifier,
      sym_number,
    STATE(27), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_do_statement_repeat2,
  [877] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(104), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_quoted_string,
    STATE(24), 1,
      aux_sym_do_statement_repeat2,
    STATE(54), 1,
      sym__expression,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
    STATE(28), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [911] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(29), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(116), 6,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
      sym_identifier,
  [937] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(118), 1,
      anon_sym_RBRACE,
    STATE(30), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(120), 6,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
      sym_identifier,
  [963] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(122), 1,
      anon_sym_RBRACE,
    ACTIONS(126), 1,
      sym_identifier,
    STATE(31), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(124), 5,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [991] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(128), 1,
      anon_sym_RBRACE,
    ACTIONS(132), 1,
      sym_identifier,
    STATE(32), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(130), 5,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1019] = 10,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(22), 1,
      sym_quoted_string,
    STATE(23), 1,
      aux_sym_do_statement_repeat2,
    STATE(54), 1,
      sym__expression,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
    STATE(33), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1053] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(34), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(136), 7,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_COMMA,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1077] = 5,
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
    ACTIONS(138), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1100] = 5,
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
    ACTIONS(140), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1123] = 5,
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
    ACTIONS(142), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1146] = 5,
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
    ACTIONS(144), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1169] = 5,
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
    ACTIONS(146), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1192] = 5,
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
    ACTIONS(148), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1215] = 9,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    ACTIONS(150), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_quoted_string,
    STATE(65), 1,
      sym__expression,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
    STATE(41), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1246] = 5,
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
    ACTIONS(152), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1269] = 5,
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
    ACTIONS(154), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1292] = 5,
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
    ACTIONS(156), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1315] = 5,
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
    ACTIONS(158), 6,
      anon_sym_RBRACE,
      anon_sym_field,
      anon_sym_static,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_method,
  [1338] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_quoted_string,
    STATE(77), 1,
      sym__expression,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
    STATE(46), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1366] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(98), 1,
      anon_sym_DQUOTE,
    STATE(22), 1,
      sym_quoted_string,
    STATE(88), 1,
      sym__expression,
    ACTIONS(100), 2,
      sym_identifier,
      sym_number,
    STATE(47), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1394] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(162), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(48), 4,
      aux_sym__string_content,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1417] = 5,
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
    ACTIONS(169), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [1438] = 5,
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
    ACTIONS(171), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [1459] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    STATE(51), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
    ACTIONS(173), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [1480] = 8,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(11), 1,
      anon_sym_class,
    ACTIONS(175), 1,
      ts_builtin_sym_end,
    STATE(61), 1,
      aux_sym_source_file_repeat1,
    STATE(79), 1,
      sym_class_definition,
    STATE(52), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1507] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(177), 1,
      anon_sym_DQUOTE,
    STATE(48), 1,
      aux_sym__string_content,
    ACTIONS(179), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(53), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1532] = 5,
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
    ACTIONS(181), 4,
      anon_sym_RPAREN,
      anon_sym_DQUOTE,
      sym_identifier,
      sym_number,
  [1553] = 5,
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
    ACTIONS(183), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [1574] = 5,
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
    ACTIONS(185), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [1595] = 5,
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
    ACTIONS(187), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [1616] = 5,
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
    ACTIONS(189), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [1637] = 7,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(191), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      aux_sym__string_content,
    ACTIONS(179), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(59), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1662] = 5,
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
    ACTIONS(193), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [1683] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(195), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 1,
      anon_sym_class,
    STATE(79), 1,
      sym_class_definition,
    STATE(61), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_source_file_repeat1,
  [1708] = 5,
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
    ACTIONS(200), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [1729] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(202), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_DOT,
    STATE(66), 1,
      aux_sym_do_statement_repeat1,
    STATE(63), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1753] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(206), 1,
      anon_sym_COMMA,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
    STATE(64), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_parameter_list_repeat1,
  [1775] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(204), 1,
      anon_sym_DOT,
    ACTIONS(211), 1,
      anon_sym_LPAREN,
    STATE(63), 1,
      aux_sym_do_statement_repeat1,
    STATE(65), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1799] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(213), 1,
      anon_sym_LPAREN,
    ACTIONS(215), 1,
      anon_sym_DOT,
    STATE(66), 4,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
      aux_sym_do_statement_repeat1,
  [1821] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      aux_sym_parameter_list_repeat1,
    STATE(67), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1845] = 7,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(218), 1,
      anon_sym_COMMA,
    ACTIONS(222), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameter_list_repeat1,
    STATE(68), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1869] = 6,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(224), 1,
      anon_sym_DQUOTE,
    ACTIONS(226), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
    STATE(69), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1891] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(228), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(70), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1910] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(230), 1,
      anon_sym_SEMI,
    ACTIONS(232), 1,
      sym_identifier,
    STATE(71), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1931] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(234), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(72), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1950] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(209), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(73), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1969] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(236), 1,
      anon_sym_LPAREN,
    STATE(75), 1,
      sym_parameter_list,
    STATE(74), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [1990] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(238), 1,
      anon_sym_LBRACE,
    STATE(35), 1,
      sym_subroutine_block,
    STATE(75), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2011] = 6,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(240), 1,
      anon_sym_LBRACE,
    STATE(70), 1,
      sym_class_block,
    STATE(76), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2032] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(213), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
    STATE(77), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2051] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(242), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    STATE(78), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2070] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(244), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(79), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2089] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(246), 2,
      ts_builtin_sym_end,
      anon_sym_class,
    STATE(80), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2108] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(248), 1,
      anon_sym_SEMI,
    STATE(81), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2126] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(250), 1,
      sym_identifier,
    STATE(82), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2144] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(118), 1,
      sym_identifier,
    STATE(83), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2162] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(84), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2180] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(252), 1,
      aux_sym_single_line_comment_token1,
    STATE(85), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2198] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(254), 1,
      anon_sym_LBRACE,
    STATE(86), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2216] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(87), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2234] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(258), 1,
      anon_sym_SEMI,
    STATE(88), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2252] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(260), 1,
      anon_sym_LBRACE,
    STATE(89), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2270] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(262), 1,
      anon_sym_SEMI,
    STATE(90), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2288] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(264), 1,
      anon_sym_SEMI,
    STATE(91), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2306] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(266), 1,
      ts_builtin_sym_end,
    STATE(92), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2324] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(268), 1,
      anon_sym_LBRACE,
    STATE(93), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2342] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(270), 1,
      anon_sym_STAR_SLASH,
    STATE(94), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2360] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(272), 1,
      anon_sym_STAR_SLASH,
    STATE(95), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2378] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(274), 1,
      aux_sym_multi_line_comment_token1,
    STATE(96), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2396] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(276), 1,
      sym_identifier,
    STATE(97), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2414] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(278), 1,
      sym_identifier,
    STATE(98), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2432] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(280), 1,
      sym_identifier,
    STATE(99), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2450] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(282), 1,
      anon_sym_SEMI,
    STATE(100), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2468] = 5,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(167), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(284), 1,
      aux_sym_multi_line_comment_token1,
    STATE(101), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2486] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(286), 1,
      anon_sym_EQ,
    STATE(102), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2504] = 5,
    ACTIONS(3), 1,
      anon_sym_SLASH_SLASH,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(7), 1,
      anon_sym_SLASH_STAR_STAR,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    STATE(103), 3,
      sym_single_line_comment,
      sym_multi_line_comment,
      sym_doc_string_comment,
  [2522] = 1,
    ACTIONS(290), 1,
      ts_builtin_sym_end,
  [2526] = 1,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
  [2530] = 1,
    ACTIONS(294), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 52,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 154,
  [SMALL_STATE(6)] = 190,
  [SMALL_STATE(7)] = 226,
  [SMALL_STATE(8)] = 264,
  [SMALL_STATE(9)] = 302,
  [SMALL_STATE(10)] = 331,
  [SMALL_STATE(11)] = 360,
  [SMALL_STATE(12)] = 387,
  [SMALL_STATE(13)] = 416,
  [SMALL_STATE(14)] = 445,
  [SMALL_STATE(15)] = 478,
  [SMALL_STATE(16)] = 511,
  [SMALL_STATE(17)] = 544,
  [SMALL_STATE(18)] = 577,
  [SMALL_STATE(19)] = 601,
  [SMALL_STATE(20)] = 625,
  [SMALL_STATE(21)] = 655,
  [SMALL_STATE(22)] = 685,
  [SMALL_STATE(23)] = 709,
  [SMALL_STATE(24)] = 743,
  [SMALL_STATE(25)] = 777,
  [SMALL_STATE(26)] = 811,
  [SMALL_STATE(27)] = 845,
  [SMALL_STATE(28)] = 877,
  [SMALL_STATE(29)] = 911,
  [SMALL_STATE(30)] = 937,
  [SMALL_STATE(31)] = 963,
  [SMALL_STATE(32)] = 991,
  [SMALL_STATE(33)] = 1019,
  [SMALL_STATE(34)] = 1053,
  [SMALL_STATE(35)] = 1077,
  [SMALL_STATE(36)] = 1100,
  [SMALL_STATE(37)] = 1123,
  [SMALL_STATE(38)] = 1146,
  [SMALL_STATE(39)] = 1169,
  [SMALL_STATE(40)] = 1192,
  [SMALL_STATE(41)] = 1215,
  [SMALL_STATE(42)] = 1246,
  [SMALL_STATE(43)] = 1269,
  [SMALL_STATE(44)] = 1292,
  [SMALL_STATE(45)] = 1315,
  [SMALL_STATE(46)] = 1338,
  [SMALL_STATE(47)] = 1366,
  [SMALL_STATE(48)] = 1394,
  [SMALL_STATE(49)] = 1417,
  [SMALL_STATE(50)] = 1438,
  [SMALL_STATE(51)] = 1459,
  [SMALL_STATE(52)] = 1480,
  [SMALL_STATE(53)] = 1507,
  [SMALL_STATE(54)] = 1532,
  [SMALL_STATE(55)] = 1553,
  [SMALL_STATE(56)] = 1574,
  [SMALL_STATE(57)] = 1595,
  [SMALL_STATE(58)] = 1616,
  [SMALL_STATE(59)] = 1637,
  [SMALL_STATE(60)] = 1662,
  [SMALL_STATE(61)] = 1683,
  [SMALL_STATE(62)] = 1708,
  [SMALL_STATE(63)] = 1729,
  [SMALL_STATE(64)] = 1753,
  [SMALL_STATE(65)] = 1775,
  [SMALL_STATE(66)] = 1799,
  [SMALL_STATE(67)] = 1821,
  [SMALL_STATE(68)] = 1845,
  [SMALL_STATE(69)] = 1869,
  [SMALL_STATE(70)] = 1891,
  [SMALL_STATE(71)] = 1910,
  [SMALL_STATE(72)] = 1931,
  [SMALL_STATE(73)] = 1950,
  [SMALL_STATE(74)] = 1969,
  [SMALL_STATE(75)] = 1990,
  [SMALL_STATE(76)] = 2011,
  [SMALL_STATE(77)] = 2032,
  [SMALL_STATE(78)] = 2051,
  [SMALL_STATE(79)] = 2070,
  [SMALL_STATE(80)] = 2089,
  [SMALL_STATE(81)] = 2108,
  [SMALL_STATE(82)] = 2126,
  [SMALL_STATE(83)] = 2144,
  [SMALL_STATE(84)] = 2162,
  [SMALL_STATE(85)] = 2180,
  [SMALL_STATE(86)] = 2198,
  [SMALL_STATE(87)] = 2216,
  [SMALL_STATE(88)] = 2234,
  [SMALL_STATE(89)] = 2252,
  [SMALL_STATE(90)] = 2270,
  [SMALL_STATE(91)] = 2288,
  [SMALL_STATE(92)] = 2306,
  [SMALL_STATE(93)] = 2324,
  [SMALL_STATE(94)] = 2342,
  [SMALL_STATE(95)] = 2360,
  [SMALL_STATE(96)] = 2378,
  [SMALL_STATE(97)] = 2396,
  [SMALL_STATE(98)] = 2414,
  [SMALL_STATE(99)] = 2432,
  [SMALL_STATE(100)] = 2450,
  [SMALL_STATE(101)] = 2468,
  [SMALL_STATE(102)] = 2486,
  [SMALL_STATE(103)] = 2504,
  [SMALL_STATE(104)] = 2522,
  [SMALL_STATE(105)] = 2526,
  [SMALL_STATE(106)] = 2530,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(97),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(71),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_variable, 3, 0, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_variable, 4, 0, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_variable_repeat1, 2, 0, 6),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_field_variable_repeat1, 2, 0, 6), SHIFT_REPEAT(99),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_variable, 3, 0, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_variable, 4, 0, 4),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 9),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 8),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat2, 2, 0, 0),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(59),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(22),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__primitive_type, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__primitive_type, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_field_variable, 2, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_field_variable, 2, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_static_variable, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_static_variable, 2, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_field_variable_repeat1, 2, 0, 5),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subroutine_generic_definition, 4, 0, 7),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_statement, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__class_variable, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__subroutine_definition, 1, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constructor_definition, 2, 0, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 2, 0, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method_definition, 2, 0, 2),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_block, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_block, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(69),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [167] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 4, 0, 0),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 7, 0, 0),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat2, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5, 0, 5),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 5, 0, 0),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 6, 0, 0),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(82),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 1, 0, 0),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2, 0, 0),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 1, 0, 0),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_content, 1, 0, 0),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, 0, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_statement, 2, 0, 0),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, 0, 0),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 2, 0, 0),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [266] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multi_line_comment, 3, 0, 0),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_doc_string_comment, 3, 0, 0),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_line_comment, 2, 0, 0),
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
