#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_class = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_constructor = 4,
  anon_sym_function = 5,
  anon_sym_subroutine = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_let = 9,
  anon_sym_EQ = 10,
  anon_sym_SEMI = 11,
  anon_sym_do = 12,
  anon_sym_return = 13,
  anon_sym_int = 14,
  anon_sym_char = 15,
  anon_sym_boolean = 16,
  anon_sym_Array = 17,
  sym_identifier = 18,
  sym_number = 19,
  sym_source_file = 20,
  sym__definition = 21,
  sym_class_definition = 22,
  sym_class_block = 23,
  sym__class_statement = 24,
  sym_subroutine_definition = 25,
  sym_subroutine_flavor = 26,
  sym_parameter_list = 27,
  sym__parameter_statement = 28,
  sym_subroutine_block = 29,
  sym__statement = 30,
  sym_let_statement = 31,
  sym_do_statement = 32,
  sym_return_statement = 33,
  sym__expression = 34,
  sym_type = 35,
  sym_primitive_type = 36,
  aux_sym_source_file_repeat1 = 37,
  aux_sym_class_block_repeat1 = 38,
  aux_sym_parameter_list_repeat1 = 39,
  aux_sym_subroutine_block_repeat1 = 40,
  aux_sym_do_statement_repeat1 = 41,
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
  [anon_sym_RPAREN] = ")",
  [anon_sym_let] = "let",
  [anon_sym_EQ] = "=",
  [anon_sym_SEMI] = ";",
  [anon_sym_do] = "do",
  [anon_sym_return] = "return",
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
  [sym_subroutine_flavor] = "subroutine_flavor",
  [sym_parameter_list] = "parameter_list",
  [sym__parameter_statement] = "_parameter_statement",
  [sym_subroutine_block] = "subroutine_block",
  [sym__statement] = "_statement",
  [sym_let_statement] = "let_statement",
  [sym_do_statement] = "do_statement",
  [sym_return_statement] = "return_statement",
  [sym__expression] = "_expression",
  [sym_type] = "type",
  [sym_primitive_type] = "primitive_type",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_class_block_repeat1] = "class_block_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_subroutine_block_repeat1] = "subroutine_block_repeat1",
  [aux_sym_do_statement_repeat1] = "do_statement_repeat1",
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
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_do] = anon_sym_do,
  [anon_sym_return] = anon_sym_return,
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
  [sym_subroutine_flavor] = sym_subroutine_flavor,
  [sym_parameter_list] = sym_parameter_list,
  [sym__parameter_statement] = sym__parameter_statement,
  [sym_subroutine_block] = sym_subroutine_block,
  [sym__statement] = sym__statement,
  [sym_let_statement] = sym_let_statement,
  [sym_do_statement] = sym_do_statement,
  [sym_return_statement] = sym_return_statement,
  [sym__expression] = sym__expression,
  [sym_type] = sym_type,
  [sym_primitive_type] = sym_primitive_type,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_class_block_repeat1] = aux_sym_class_block_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_subroutine_block_repeat1] = aux_sym_subroutine_block_repeat1,
  [aux_sym_do_statement_repeat1] = aux_sym_do_statement_repeat1,
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
  [sym_subroutine_flavor] = {
    .visible = true,
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
  [sym_primitive_type] = {
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
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(54);
      ADVANCE_MAP(
        '(', 61,
        ')', 62,
        ';', 65,
        '=', 64,
        'A', 33,
        'b', 27,
        'c', 14,
        'd', 25,
        'f', 49,
        'i', 18,
        'l', 11,
        'r', 12,
        's', 48,
        '{', 56,
        '}', 57,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == ')') ADVANCE(62);
      if (lookahead == 'A') ADVANCE(87);
      if (lookahead == 'b') ADVANCE(85);
      if (lookahead == 'c') ADVANCE(80);
      if (lookahead == 'i') ADVANCE(82);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      if (('B' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(62);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(43);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(47);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(6);
      END_STATE();
    case 14:
      if (lookahead == 'h') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(24);
      END_STATE();
    case 17:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(41);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(67);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(72);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(66);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 34:
      if (lookahead == 'r') ADVANCE(4);
      END_STATE();
    case 35:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'r') ADVANCE(20);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(52);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 49:
      if (lookahead == 'u') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 'u') ADVANCE(36);
      END_STATE();
    case 51:
      if (lookahead == 'u') ADVANCE(44);
      END_STATE();
    case 52:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 53:
      if (lookahead == 'y') ADVANCE(74);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_class);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_constructor);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_subroutine);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_do);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_int);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_int);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_char);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_char);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_boolean);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_boolean);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_Array);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_Array);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(83);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'h') ADVANCE(78);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'l') ADVANCE(79);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(81);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'o') ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(88);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'r') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(69);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'y') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 2},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
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
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_do] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_int] = ACTIONS(1),
    [anon_sym_char] = ACTIONS(1),
    [anon_sym_boolean] = ACTIONS(1),
    [anon_sym_Array] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(38),
    [sym__definition] = STATE(14),
    [sym_class_definition] = STATE(14),
    [aux_sym_source_file_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_class] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      anon_sym_RPAREN,
    ACTIONS(12), 1,
      sym_identifier,
    STATE(46), 1,
      sym_type,
    STATE(49), 1,
      sym_primitive_type,
    STATE(2), 2,
      sym__parameter_statement,
      aux_sym_parameter_list_repeat1,
    ACTIONS(9), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [23] = 6,
    ACTIONS(15), 1,
      anon_sym_RPAREN,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(46), 1,
      sym_type,
    STATE(49), 1,
      sym_primitive_type,
    STATE(2), 2,
      sym__parameter_statement,
      aux_sym_parameter_list_repeat1,
    ACTIONS(17), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [46] = 6,
    ACTIONS(19), 1,
      sym_identifier,
    ACTIONS(21), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_type,
    STATE(49), 1,
      sym_primitive_type,
    STATE(3), 2,
      sym__parameter_statement,
      aux_sym_parameter_list_repeat1,
    ACTIONS(17), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [69] = 5,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(25), 1,
      anon_sym_let,
    ACTIONS(28), 1,
      anon_sym_do,
    ACTIONS(31), 1,
      anon_sym_return,
    STATE(5), 5,
      sym__statement,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_subroutine_block_repeat1,
  [89] = 5,
    ACTIONS(34), 1,
      anon_sym_RBRACE,
    ACTIONS(36), 1,
      anon_sym_let,
    ACTIONS(38), 1,
      anon_sym_do,
    ACTIONS(40), 1,
      anon_sym_return,
    STATE(5), 5,
      sym__statement,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_subroutine_block_repeat1,
  [109] = 5,
    ACTIONS(36), 1,
      anon_sym_let,
    ACTIONS(38), 1,
      anon_sym_do,
    ACTIONS(40), 1,
      anon_sym_return,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    STATE(6), 5,
      sym__statement,
      sym_let_statement,
      sym_do_statement,
      sym_return_statement,
      aux_sym_subroutine_block_repeat1,
  [129] = 4,
    ACTIONS(44), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_subroutine_flavor,
    ACTIONS(46), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
    STATE(9), 3,
      sym__class_statement,
      sym_subroutine_definition,
      aux_sym_class_block_repeat1,
  [146] = 4,
    ACTIONS(48), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_subroutine_flavor,
    ACTIONS(46), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
    STATE(10), 3,
      sym__class_statement,
      sym_subroutine_definition,
      aux_sym_class_block_repeat1,
  [163] = 4,
    ACTIONS(50), 1,
      anon_sym_RBRACE,
    STATE(11), 1,
      sym_subroutine_flavor,
    ACTIONS(52), 3,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
    STATE(10), 3,
      sym__class_statement,
      sym_subroutine_definition,
      aux_sym_class_block_repeat1,
  [180] = 4,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(48), 1,
      sym_type,
    STATE(49), 1,
      sym_primitive_type,
    ACTIONS(17), 4,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
  [196] = 2,
    ACTIONS(55), 1,
      anon_sym_RPAREN,
    ACTIONS(57), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
      sym_identifier,
  [207] = 3,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    ACTIONS(61), 2,
      sym_identifier,
      sym_number,
    STATE(17), 2,
      sym__expression,
      aux_sym_do_statement_repeat1,
  [219] = 3,
    ACTIONS(5), 1,
      anon_sym_class,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(18), 3,
      sym__definition,
      sym_class_definition,
      aux_sym_source_file_repeat1,
  [231] = 1,
    ACTIONS(65), 5,
      anon_sym_int,
      anon_sym_char,
      anon_sym_boolean,
      anon_sym_Array,
      sym_identifier,
  [239] = 3,
    ACTIONS(67), 1,
      anon_sym_RPAREN,
    ACTIONS(69), 2,
      sym_identifier,
      sym_number,
    STATE(13), 2,
      sym__expression,
      aux_sym_do_statement_repeat1,
  [251] = 3,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(73), 2,
      sym_identifier,
      sym_number,
    STATE(17), 2,
      sym__expression,
      aux_sym_do_statement_repeat1,
  [263] = 3,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      anon_sym_class,
    STATE(18), 3,
      sym__definition,
      sym_class_definition,
      aux_sym_source_file_repeat1,
  [275] = 1,
    ACTIONS(81), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [282] = 1,
    ACTIONS(83), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
  [289] = 1,
    ACTIONS(85), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [296] = 1,
    ACTIONS(87), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
  [303] = 1,
    ACTIONS(89), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [310] = 1,
    ACTIONS(91), 4,
      anon_sym_RBRACE,
      anon_sym_let,
      anon_sym_do,
      anon_sym_return,
  [317] = 1,
    ACTIONS(93), 4,
      anon_sym_RBRACE,
      anon_sym_constructor,
      anon_sym_function,
      anon_sym_subroutine,
  [324] = 2,
    STATE(42), 1,
      sym__expression,
    ACTIONS(95), 2,
      sym_identifier,
      sym_number,
  [332] = 2,
    STATE(35), 1,
      sym__expression,
    ACTIONS(97), 2,
      sym_identifier,
      sym_number,
  [340] = 2,
    ACTIONS(99), 1,
      anon_sym_LBRACE,
    STATE(20), 1,
      sym_subroutine_block,
  [347] = 1,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [352] = 1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [357] = 2,
    ACTIONS(105), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_parameter_list,
  [364] = 1,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_class,
  [369] = 2,
    ACTIONS(109), 1,
      anon_sym_LBRACE,
    STATE(29), 1,
      sym_class_block,
  [376] = 1,
    ACTIONS(111), 1,
      anon_sym_LBRACE,
  [380] = 1,
    ACTIONS(113), 1,
      anon_sym_LPAREN,
  [384] = 1,
    ACTIONS(115), 1,
      anon_sym_SEMI,
  [388] = 1,
    ACTIONS(117), 1,
      sym_identifier,
  [392] = 1,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
  [396] = 1,
    ACTIONS(121), 1,
      anon_sym_EQ,
  [400] = 1,
    ACTIONS(123), 1,
      sym_identifier,
  [404] = 1,
    ACTIONS(125), 1,
      sym_identifier,
  [408] = 1,
    ACTIONS(127), 1,
      anon_sym_SEMI,
  [412] = 1,
    ACTIONS(129), 1,
      anon_sym_SEMI,
  [416] = 1,
    ACTIONS(131), 1,
      anon_sym_LBRACE,
  [420] = 1,
    ACTIONS(133), 1,
      sym_identifier,
  [424] = 1,
    ACTIONS(135), 1,
      sym_identifier,
  [428] = 1,
    ACTIONS(137), 1,
      anon_sym_SEMI,
  [432] = 1,
    ACTIONS(139), 1,
      sym_identifier,
  [436] = 1,
    ACTIONS(141), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 23,
  [SMALL_STATE(4)] = 46,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 89,
  [SMALL_STATE(7)] = 109,
  [SMALL_STATE(8)] = 129,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 207,
  [SMALL_STATE(14)] = 219,
  [SMALL_STATE(15)] = 231,
  [SMALL_STATE(16)] = 239,
  [SMALL_STATE(17)] = 251,
  [SMALL_STATE(18)] = 263,
  [SMALL_STATE(19)] = 275,
  [SMALL_STATE(20)] = 282,
  [SMALL_STATE(21)] = 289,
  [SMALL_STATE(22)] = 296,
  [SMALL_STATE(23)] = 303,
  [SMALL_STATE(24)] = 310,
  [SMALL_STATE(25)] = 317,
  [SMALL_STATE(26)] = 324,
  [SMALL_STATE(27)] = 332,
  [SMALL_STATE(28)] = 340,
  [SMALL_STATE(29)] = 347,
  [SMALL_STATE(30)] = 352,
  [SMALL_STATE(31)] = 357,
  [SMALL_STATE(32)] = 364,
  [SMALL_STATE(33)] = 369,
  [SMALL_STATE(34)] = 376,
  [SMALL_STATE(35)] = 380,
  [SMALL_STATE(36)] = 384,
  [SMALL_STATE(37)] = 388,
  [SMALL_STATE(38)] = 392,
  [SMALL_STATE(39)] = 396,
  [SMALL_STATE(40)] = 400,
  [SMALL_STATE(41)] = 404,
  [SMALL_STATE(42)] = 408,
  [SMALL_STATE(43)] = 412,
  [SMALL_STATE(44)] = 416,
  [SMALL_STATE(45)] = 420,
  [SMALL_STATE(46)] = 424,
  [SMALL_STATE(47)] = 428,
  [SMALL_STATE(48)] = 432,
  [SMALL_STATE(49)] = 436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [12] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_parameter_list_repeat1, 2, 0, 0), SHIFT_REPEAT(49),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subroutine_block_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_class_block_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parameter_statement, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__parameter_statement, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subroutine_flavor, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2, 0, 0),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_do_statement_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_statement, 5, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_definition, 5, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_block, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 5, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_do_statement, 6, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subroutine_block, 3, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_definition, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 2, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_class_block, 3, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_primitive_type, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_YOUR_LANGUAGE_NAME(void) {
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
