#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 71
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 50
#define ALIAS_COUNT 1
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  anon_sym_class = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_constructor = 4,
  anon_sym_function = 5,
  anon_sym_subroutine = 6,
  anon_sym_LPAREN = 7,
  anon_sym_COMMA = 8,
  anon_sym_RPAREN = 9,
  anon_sym_let = 10,
  anon_sym_EQ = 11,
  anon_sym_SEMI = 12,
  anon_sym_do = 13,
  anon_sym_DOT = 14,
  anon_sym_return = 15,
  anon_sym_DQUOTE = 16,
  aux_sym__string_content_token1 = 17,
  sym_escape_sequence = 18,
  anon_sym_int = 19,
  anon_sym_char = 20,
  anon_sym_boolean = 21,
  anon_sym_Array = 22,
  sym_identifier = 23,
  sym_number = 24,
  sym_source_file = 25,
  sym__definition = 26,
  sym_class_definition = 27,
  sym_class_block = 28,
  sym__class_statement = 29,
  sym_subroutine_definition = 30,
  sym__subroutine_flavor = 31,
  sym_parameter_list = 32,
  sym__parameter_statement = 33,
  sym_subroutine_block = 34,
  sym__statement = 35,
  sym_let_statement = 36,
  sym_do_statement = 37,
  sym_return_statement = 38,
  sym__expression = 39,
  sym_type = 40,
  sym_quoted_string = 41,
  aux_sym__string_content = 42,
  sym__primitive_type = 43,
  aux_sym_source_file_repeat1 = 44,
  aux_sym_class_block_repeat1 = 45,
  aux_sym_parameter_list_repeat1 = 46,
  aux_sym_subroutine_block_repeat1 = 47,
  aux_sym_do_statement_repeat1 = 48,
  aux_sym_do_statement_repeat2 = 49,
  alias_sym_string_content = 50,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_class] = "class",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_constructor] = "constructor",
  [anon_sym_function] = "function",
  [anon_sym_subroutine] = "subroutine",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
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
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_class_definition] = "class_definition",
  [sym_class_block] = "class_block",
  [sym__class_statement] = "_class_statement",
  [sym_subroutine_definition] = "subroutine_definition",
  [sym__subroutine_flavor] = "_subroutine_flavor",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_block_repeat1] = "class_block_repeat1",
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
  [anon_sym_constructor] = anon_sym_constructor,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_subroutine] = anon_sym_subroutine,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_class_definition] = sym_class_definition,
  [sym_class_block] = sym_class_block,
  [sym__class_statement] = sym__class_statement,
  [sym_subroutine_definition] = sym_subroutine_definition,
  [sym__subroutine_flavor] = sym__subroutine_flavor,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_block_repeat1] = aux_sym_class_block_repeat1,
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
  [anon_sym_constructor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_subroutine] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
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
  [sym_subroutine_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__subroutine_flavor] = {
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_class_block_repeat1] = {
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
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 1},
  [5] = {.index = 6, .length = 3},
  [6] = {.index = 9, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_class_name, 1},
  [1] =
    {field_end, 1},
    {field_start, 0},
  [3] =
    {field_end, 2},
    {field_start, 0},
  [5] =
    {field_name, 2},
  [6] =
    {field_content, 1},
    {field_end, 2},
    {field_start, 0},
  [9] =
    {field_var_name, 1},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [5] = {
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
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '"', 78,
        '(', 69,
        ')', 71,
        ',', 70,
        '.', 76,
        ';', 74,
        '=', 73,
        'A', 34,
        '\\', 49,
        'b', 28,
        'c', 15,
        'd', 26,
        'f', 51,
        'i', 19,
        'l', 12,
        'r', 13,
        's', 50,
        '{', 64,
        '}', 65,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '(') ADVANCE(69);
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == '.') ADVANCE(76);
      if (lookahead == ';') ADVANCE(74);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(78);
      if (lookahead == '\\') ADVANCE(49);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(80);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(71);
      if (lookahead == 'A') ADVANCE(104);
      if (lookahead == 'b') ADVANCE(102);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead == 'i') ADVANCE(99);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 8:
      if (lookahead == 'b') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(44);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(27);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(63);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(72);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(56);
      if (lookahead == 'x') ADVANCE(60);
      if (lookahead == 'z') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (set_contains(sym_escape_sequence_character_set_1, 12, lookahead)) ADVANCE(81);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(8);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(45);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 55:
      if (lookahead == 'y') ADVANCE(91);
      END_STATE();
    case 56:
      if (lookahead == '{') ADVANCE(59);
      END_STATE();
    case 57:
      if (lookahead == '}') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 61:
      if (eof) ADVANCE(62);
      ADVANCE_MAP(
        '"', 78,
        '(', 69,
        ')', 71,
        ',', 70,
        '.', 76,
        ';', 74,
        '=', 73,
        'A', 34,
        'b', 28,
        'c', 15,
        'd', 26,
        'f', 51,
        'i', 19,
        'l', 12,
        'r', 13,
        's', 50,
        '{', 64,
        '}', 65,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(61);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_subroutine);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__string_content_token1);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(83);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_char);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(103);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(95);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(106);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(105);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
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
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 1},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_class] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_constructor] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_subroutine] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
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
  },
  [1] = {
    [sym_source_file] = STATE(70),
    [sym__definition] = STATE(23),
    [sym_class_definition] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_RBRACE,
    ACTIONS(9), 1,
      anon_sym_let,
    ACTIONS(12), 1,
      anon_sym_do,
    ACTIONS(15), 1,
      anon_sym_return,
    STATE(2), 5,
      sym__statement,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_subroutine_block_repeat1,
  [20] = 5,
    ACTIONS(18), 1,
      anon_sym_RBRACE,
    ACTIONS(20), 1,
      anon_sym_let,
    ACTIONS(22), 1,
      anon_sym_do,
    ACTIONS(24), 1,
      anon_sym_return,
    STATE(2), 5,
      sym__statement,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_subroutine_block_repeat1,
  [40] = 5,
    ACTIONS(20), 1,
      anon_sym_let,
    ACTIONS(22), 1,
      anon_sym_do,
    ACTIONS(24), 1,
      anon_sym_return,
    ACTIONS(26), 1,
      anon_sym_RBRACE,
    STATE(3), 5,
      sym__statement,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_subroutine_block_repeat1,
  [60] = 5,
    ACTIONS(28), 1,
      anon_sym_RPAREN,
    STATE(40), 1,
      sym__parameter_statement,
    STATE(55), 1,
      sym_type,
    STATE(64), 1,
      sym__primitive_type,
    ACTIONS(30), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
      sym_identifier,
  [80] = 4,
    ACTIONS(32), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__subroutine_flavor,
    ACTIONS(34), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
    STATE(8), 3,
      sym__class_statement,
      sym_subroutine_definition,
      aux_sym_class_block_repeat1,
  [97] = 4,
    ACTIONS(36), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__subroutine_flavor,
    ACTIONS(34), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
    STATE(6), 3,
      sym__class_statement,
      sym_subroutine_definition,
      aux_sym_class_block_repeat1,
  [114] = 4,
    ACTIONS(38), 1,
      anon_sym_RBRACE,
    STATE(13), 1,
      sym__subroutine_flavor,
    ACTIONS(40), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
    STATE(8), 3,
      sym__class_statement,
      sym_subroutine_definition,
      aux_sym_class_block_repeat1,
  [131] = 4,
    STATE(51), 1,
      sym__parameter_statement,
    STATE(55), 1,
      sym_type,
    STATE(64), 1,
      sym__primitive_type,
    ACTIONS(30), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
      sym_identifier,
  [148] = 4,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(47), 2,
      sym_identifier,
      sym_number,
    STATE(19), 3,
      sym__expression,
      sym_quoted_string,
      aux_sym_do_statement_repeat2,
  [164] = 1,
    ACTIONS(49), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      sym_identifier,
      sym_number,
  [174] = 4,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 2,
      sym_identifier,
      sym_number,
    STATE(19), 3,
      sym__expression,
      sym_quoted_string,
      aux_sym_do_statement_repeat2,
  [190] = 3,
    STATE(63), 1,
      sym_type,
    STATE(64), 1,
      sym__primitive_type,
    ACTIONS(30), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
      sym_identifier,
  [204] = 4,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      anon_sym_RPAREN,
    ACTIONS(55), 2,
      sym_identifier,
      sym_number,
    STATE(12), 3,
      sym__expression,
      sym_quoted_string,
      aux_sym_do_statement_repeat2,
  [220] = 4,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 2,
      sym_identifier,
      sym_number,
    STATE(10), 3,
      sym__expression,
      sym_quoted_string,
      aux_sym_do_statement_repeat2,
  [236] = 4,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(57), 1,
      anon_sym_RPAREN,
    ACTIONS(47), 2,
      sym_identifier,
      sym_number,
    STATE(19), 3,
      sym__expression,
      sym_quoted_string,
      aux_sym_do_statement_repeat2,
  [252] = 4,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(51), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 2,
      sym_identifier,
      sym_number,
    STATE(16), 3,
      sym__expression,
      sym_quoted_string,
      aux_sym_do_statement_repeat2,
  [268] = 1,
    ACTIONS(63), 7,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_SEMI,
      anon_sym_DOT,
      anon_sym_DQUOTE,
      sym_identifier,
      sym_number,
  [278] = 4,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    ACTIONS(67), 1,
      anon_sym_DQUOTE,
    ACTIONS(70), 2,
      sym_identifier,
      sym_number,
    STATE(19), 3,
      sym__expression,
      sym_quoted_string,
      aux_sym_do_statement_repeat2,
  [294] = 4,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(73), 1,
      anon_sym_LPAREN,
    ACTIONS(75), 2,
      sym_identifier,
      sym_number,
    STATE(42), 2,
      sym__expression,
      sym_quoted_string,
  [309] = 3,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 1,
      anon_sym_class,
    STATE(21), 3,
      sym__definition,
      sym_class_definition,
      aux_sym_source_file_repeat1,
  [321] = 3,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(82), 2,
      sym_identifier,
      sym_number,
    STATE(61), 2,
      sym__expression,
      sym_quoted_string,
  [333] = 3,
    ACTIONS(5), 1,
      anon_sym_class,
    ACTIONS(84), 1,
      ts_builtin_sym_end,
    STATE(21), 3,
      sym__definition,
      sym_class_definition,
      aux_sym_source_file_repeat1,
  [345] = 3,
    ACTIONS(45), 1,
      anon_sym_DQUOTE,
    ACTIONS(86), 2,
      sym_identifier,
      sym_number,
    STATE(53), 2,
      sym__expression,
      sym_quoted_string,
  [357] = 1,
    ACTIONS(88), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [364] = 1,
    ACTIONS(90), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [371] = 1,
    ACTIONS(92), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
  [378] = 1,
    ACTIONS(94), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [385] = 1,
    ACTIONS(96), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
  [392] = 1,
    ACTIONS(98), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [399] = 3,
    ACTIONS(100), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym__string_content,
    ACTIONS(102), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
  [410] = 3,
    ACTIONS(104), 1,
      anon_sym_DQUOTE,
    STATE(32), 1,
      aux_sym__string_content,
    ACTIONS(106), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
  [421] = 3,
    ACTIONS(109), 1,
      anon_sym_DQUOTE,
    STATE(31), 1,
      aux_sym__string_content,
    ACTIONS(102), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
  [432] = 1,
    ACTIONS(111), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [439] = 1,
    ACTIONS(113), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
  [446] = 1,
    ACTIONS(115), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [453] = 1,
    ACTIONS(117), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [460] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_parameter_list_repeat1,
  [470] = 3,
    ACTIONS(123), 1,
      anon_sym_LPAREN,
    ACTIONS(125), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_do_statement_repeat1,
  [480] = 3,
    ACTIONS(119), 1,
      anon_sym_COMMA,
    ACTIONS(127), 1,
      anon_sym_RPAREN,
    STATE(38), 1,
      aux_sym_parameter_list_repeat1,
  [490] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_parameter_list_repeat1,
  [500] = 3,
    ACTIONS(125), 1,
      anon_sym_DOT,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
    STATE(39), 1,
      aux_sym_do_statement_repeat1,
  [510] = 3,
    ACTIONS(136), 1,
      anon_sym_LPAREN,
    ACTIONS(138), 1,
      anon_sym_DOT,
    STATE(43), 1,
      aux_sym_do_statement_repeat1,
  [520] = 2,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(143), 2,
      aux_sym__string_content_token1,
      sym_escape_sequence,
  [528] = 2,
    ACTIONS(145), 1,
      anon_sym_LPAREN,
    STATE(54), 1,
      sym_parameter_list,
  [535] = 1,
    ACTIONS(147), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [540] = 2,
    ACTIONS(149), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_class_block,
  [547] = 1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [552] = 1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [557] = 1,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [562] = 1,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [567] = 2,
    ACTIONS(157), 1,
      anon_sym_SEMI,
    ACTIONS(159), 1,
      sym_identifier,
  [574] = 1,
    ACTIONS(136), 2,
      anon_sym_LPAREN,
      anon_sym_DOT,
  [579] = 2,
    ACTIONS(161), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_subroutine_block,
  [586] = 1,
    ACTIONS(163), 1,
      sym_identifier,
  [590] = 1,
    ACTIONS(165), 1,
      anon_sym_SEMI,
  [594] = 1,
    ACTIONS(167), 1,
      anon_sym_LBRACE,
  [598] = 1,
    ACTIONS(169), 1,
      anon_sym_SEMI,
  [602] = 1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
  [606] = 1,
    ACTIONS(173), 1,
      anon_sym_EQ,
  [610] = 1,
    ACTIONS(175), 1,
      anon_sym_SEMI,
  [614] = 1,
    ACTIONS(177), 1,
      sym_identifier,
  [618] = 1,
    ACTIONS(179), 1,
      sym_identifier,
  [622] = 1,
    ACTIONS(181), 1,
      sym_identifier,
  [626] = 1,
    ACTIONS(183), 1,
      anon_sym_LBRACE,
  [630] = 1,
    ACTIONS(185), 1,
      anon_sym_SEMI,
  [634] = 1,
    ACTIONS(187), 1,
      sym_identifier,
  [638] = 1,
    ACTIONS(189), 1,
      anon_sym_SEMI,
  [642] = 1,
    ACTIONS(191), 1,
      anon_sym_SEMI,
  [646] = 1,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 114,
  [SMALL_STATE(9)] = 131,
  [SMALL_STATE(10)] = 148,
  [SMALL_STATE(11)] = 164,
  [SMALL_STATE(12)] = 174,
  [SMALL_STATE(13)] = 190,
  [SMALL_STATE(14)] = 204,
  [SMALL_STATE(15)] = 220,
  [SMALL_STATE(16)] = 236,
  [SMALL_STATE(17)] = 252,
  [SMALL_STATE(18)] = 268,
  [SMALL_STATE(19)] = 278,
  [SMALL_STATE(20)] = 294,
  [SMALL_STATE(21)] = 309,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 333,
  [SMALL_STATE(24)] = 345,
  [SMALL_STATE(25)] = 357,
  [SMALL_STATE(26)] = 364,
  [SMALL_STATE(27)] = 371,
  [SMALL_STATE(28)] = 378,
  [SMALL_STATE(29)] = 385,
  [SMALL_STATE(30)] = 392,
  [SMALL_STATE(31)] = 399,
  [SMALL_STATE(32)] = 410,
  [SMALL_STATE(33)] = 421,
  [SMALL_STATE(34)] = 432,
  [SMALL_STATE(35)] = 439,
  [SMALL_STATE(36)] = 446,
  [SMALL_STATE(37)] = 453,
  [SMALL_STATE(38)] = 460,
  [SMALL_STATE(39)] = 470,
  [SMALL_STATE(40)] = 480,
  [SMALL_STATE(41)] = 490,
  [SMALL_STATE(42)] = 500,
  [SMALL_STATE(43)] = 510,
  [SMALL_STATE(44)] = 520,
  [SMALL_STATE(45)] = 528,
  [SMALL_STATE(46)] = 535,
  [SMALL_STATE(47)] = 540,
  [SMALL_STATE(48)] = 547,
  [SMALL_STATE(49)] = 552,
  [SMALL_STATE(50)] = 557,
  [SMALL_STATE(51)] = 562,
  [SMALL_STATE(52)] = 567,
  [SMALL_STATE(53)] = 574,
  [SMALL_STATE(54)] = 579,
  [SMALL_STATE(55)] = 586,
  [SMALL_STATE(56)] = 590,
  [SMALL_STATE(57)] = 594,
  [SMALL_STATE(58)] = 598,
  [SMALL_STATE(59)] = 602,
  [SMALL_STATE(60)] = 606,
  [SMALL_STATE(61)] = 610,
  [SMALL_STATE(62)] = 614,
  [SMALL_STATE(63)] = 618,
  [SMALL_STATE(64)] = 622,
  [SMALL_STATE(65)] = 626,
  [SMALL_STATE(66)] = 630,
  [SMALL_STATE(67)] = 634,
  [SMALL_STATE(68)] = 638,
  [SMALL_STATE(69)] = 642,
  [SMALL_STATE(70)] = 646,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [15] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(52),
  [18] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 2),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 5),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat2, 2, 0, 0),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(33),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat2, 2, 0, 0), SHIFT_REPEAT(19),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(67),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 4, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_block, 2, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 5, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_definition, 5, 0, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 7, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 2, 0, 0),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__string_content, 2, 0, 0), SHIFT_REPEAT(44),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_block, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 6, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5, 0, 6),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2, 0, 0),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__string_content, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__string_content, 1, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_statement, 2, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, 0, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 2, 0, 2),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 3, 0, 3),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4, 0, 0),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
