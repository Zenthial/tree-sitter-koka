#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 46
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  sym_lowerid = 1,
  anon_sym_module = 2,
  anon_sym_LF = 3,
  anon_sym_import = 4,
  anon_sym_fun = 5,
  anon_sym_inline = 6,
  anon_sym_noinline = 7,
  anon_sym_LT = 8,
  anon_sym_GT = 9,
  anon_sym_COMMA = 10,
  anon_sym_COLON = 11,
  anon_sym_LBRACK = 12,
  anon_sym_RBRACK = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_EQ = 16,
  anon_sym_CARET = 17,
  anon_sym_BANG = 18,
  anon_sym_TILDE = 19,
  anon_sym_forall = 20,
  sym_qualifier = 21,
  anon_sym_PIPE = 22,
  sym_letter = 23,
  sym_digit = 24,
  anon_sym_SLASH = 25,
  sym_pub = 26,
  anon_sym__ = 27,
  anon_sym_DOLLAR = 28,
  anon_sym_PERCENT = 29,
  anon_sym_AMP = 30,
  anon_sym_STAR = 31,
  anon_sym_PLUS = 32,
  anon_sym_BSLASH = 33,
  anon_sym_POUND = 34,
  anon_sym_DOT = 35,
  anon_sym_DASH = 36,
  anon_sym_QMARK = 37,
  anon_sym_V = 38,
  anon_sym_X = 39,
  anon_sym_E = 40,
  anon_sym_H = 41,
  anon_sym_P = 42,
  anon_sym_S = 43,
  anon_sym_HX = 44,
  anon_sym_HX1 = 45,
  sym_module = 46,
  sym_moduledecl = 47,
  sym_moduleid = 48,
  sym_modulebody = 49,
  sym_semis = 50,
  sym_semi = 51,
  sym_declarations = 52,
  sym_importdecl = 53,
  sym_qvarid = 54,
  sym_modulepath = 55,
  aux_sym_modulebody_repeat1 = 56,
  aux_sym_semis_repeat1 = 57,
  aux_sym_modulepath_repeat1 = 58,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_lowerid] = "lowerid",
  [anon_sym_module] = "module",
  [anon_sym_LF] = "\n",
  [anon_sym_import] = "import",
  [anon_sym_fun] = "fun",
  [anon_sym_inline] = "inline",
  [anon_sym_noinline] = "noinline",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ] = "=",
  [anon_sym_CARET] = "^",
  [anon_sym_BANG] = "!",
  [anon_sym_TILDE] = "~",
  [anon_sym_forall] = "forall",
  [sym_qualifier] = "qualifier",
  [anon_sym_PIPE] = "|",
  [sym_letter] = "letter",
  [sym_digit] = "digit",
  [anon_sym_SLASH] = "/",
  [sym_pub] = "pub",
  [anon_sym__] = "_",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_POUND] = "#",
  [anon_sym_DOT] = ".",
  [anon_sym_DASH] = "-",
  [anon_sym_QMARK] = "\?",
  [anon_sym_V] = "V",
  [anon_sym_X] = "X",
  [anon_sym_E] = "E",
  [anon_sym_H] = "H",
  [anon_sym_P] = "P",
  [anon_sym_S] = "S",
  [anon_sym_HX] = "HX",
  [anon_sym_HX1] = "HX1",
  [sym_module] = "module",
  [sym_moduledecl] = "moduledecl",
  [sym_moduleid] = "moduleid",
  [sym_modulebody] = "modulebody",
  [sym_semis] = "semis",
  [sym_semi] = "semi",
  [sym_declarations] = "declarations",
  [sym_importdecl] = "importdecl",
  [sym_qvarid] = "qvarid",
  [sym_modulepath] = "modulepath",
  [aux_sym_modulebody_repeat1] = "modulebody_repeat1",
  [aux_sym_semis_repeat1] = "semis_repeat1",
  [aux_sym_modulepath_repeat1] = "modulepath_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_lowerid] = sym_lowerid,
  [anon_sym_module] = anon_sym_module,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_fun] = anon_sym_fun,
  [anon_sym_inline] = anon_sym_inline,
  [anon_sym_noinline] = anon_sym_noinline,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_forall] = anon_sym_forall,
  [sym_qualifier] = sym_qualifier,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_letter] = sym_letter,
  [sym_digit] = sym_digit,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_pub] = sym_pub,
  [anon_sym__] = anon_sym__,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_V] = anon_sym_V,
  [anon_sym_X] = anon_sym_X,
  [anon_sym_E] = anon_sym_E,
  [anon_sym_H] = anon_sym_H,
  [anon_sym_P] = anon_sym_P,
  [anon_sym_S] = anon_sym_S,
  [anon_sym_HX] = anon_sym_HX,
  [anon_sym_HX1] = anon_sym_HX1,
  [sym_module] = sym_module,
  [sym_moduledecl] = sym_moduledecl,
  [sym_moduleid] = sym_moduleid,
  [sym_modulebody] = sym_modulebody,
  [sym_semis] = sym_semis,
  [sym_semi] = sym_semi,
  [sym_declarations] = sym_declarations,
  [sym_importdecl] = sym_importdecl,
  [sym_qvarid] = sym_qvarid,
  [sym_modulepath] = sym_modulepath,
  [aux_sym_modulebody_repeat1] = aux_sym_modulebody_repeat1,
  [aux_sym_semis_repeat1] = aux_sym_semis_repeat1,
  [aux_sym_modulepath_repeat1] = aux_sym_modulepath_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_lowerid] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_module] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fun] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_inline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_noinline] = {
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_forall] = {
    .visible = true,
    .named = false,
  },
  [sym_qualifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_digit] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_pub] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_V] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_E] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_H] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_P] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_S] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_HX1] = {
    .visible = true,
    .named = false,
  },
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym_moduledecl] = {
    .visible = true,
    .named = true,
  },
  [sym_moduleid] = {
    .visible = true,
    .named = true,
  },
  [sym_modulebody] = {
    .visible = true,
    .named = true,
  },
  [sym_semis] = {
    .visible = true,
    .named = true,
  },
  [sym_semi] = {
    .visible = true,
    .named = true,
  },
  [sym_declarations] = {
    .visible = true,
    .named = true,
  },
  [sym_importdecl] = {
    .visible = true,
    .named = true,
  },
  [sym_qvarid] = {
    .visible = true,
    .named = true,
  },
  [sym_modulepath] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_modulebody_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_semis_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_modulepath_repeat1] = {
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
  [23] = 11,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 21,
  [31] = 19,
  [32] = 29,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(3);
      if (lookahead == '!') ADVANCE(15);
      if (lookahead == '#') ADVANCE(27);
      if (lookahead == '$') ADVANCE(21);
      if (lookahead == '%') ADVANCE(22);
      if (lookahead == '&') ADVANCE(23);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == ')') ADVANCE(12);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead == '+') ADVANCE(25);
      if (lookahead == ',') ADVANCE(7);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == ':') ADVANCE(8);
      if (lookahead == '<') ADVANCE(5);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(6);
      if (lookahead == '?') ADVANCE(30);
      if (lookahead == 'E') ADVANCE(35);
      if (lookahead == 'H') ADVANCE(36);
      if (lookahead == 'P') ADVANCE(37);
      if (lookahead == 'S') ADVANCE(38);
      if (lookahead == 'V') ADVANCE(33);
      if (lookahead == 'X') ADVANCE(34);
      if (lookahead == '[') ADVANCE(9);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == ']') ADVANCE(10);
      if (lookahead == '^') ADVANCE(14);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == '|') ADVANCE(17);
      if (lookahead == '~') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(18);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (eof) ADVANCE(3);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(4);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_digit);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_lowerid);
      if (lookahead == '\'') ADVANCE(31);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_V);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_E);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_H);
      if (lookahead == 'X') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_P);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_S);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_HX);
      if (lookahead == '1') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_HX1);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'f') ADVANCE(1);
      if (lookahead == 'i') ADVANCE(2);
      if (lookahead == 'm') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(4);
      if (lookahead == 'p') ADVANCE(5);
      if (lookahead == 'w') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(7);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 'o') ADVANCE(8);
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 'm') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_letter);
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_letter);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(20);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_fun);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'u') ADVANCE(27);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_pub);
      END_STATE();
    case 23:
      if (lookahead == 'h') ADVANCE(29);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 28:
      if (lookahead == 'l') ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_qualifier);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(36);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_forall);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_inline);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_module);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_noinline);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_lowerid] = ACTIONS(1),
    [anon_sym_module] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_fun] = ACTIONS(1),
    [anon_sym_inline] = ACTIONS(1),
    [anon_sym_noinline] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_forall] = ACTIONS(1),
    [sym_qualifier] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_letter] = ACTIONS(1),
    [sym_digit] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [sym_pub] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_V] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [anon_sym_E] = ACTIONS(1),
    [anon_sym_H] = ACTIONS(1),
    [anon_sym_P] = ACTIONS(1),
    [anon_sym_S] = ACTIONS(1),
    [anon_sym_HX] = ACTIONS(1),
    [anon_sym_HX1] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(25),
    [sym_moduledecl] = STATE(2),
    [anon_sym_module] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym_pub,
    STATE(15), 1,
      sym_importdecl,
    STATE(27), 1,
      sym_modulebody,
    STATE(4), 2,
      sym_declarations,
      aux_sym_modulebody_repeat1,
  [17] = 5,
    ACTIONS(9), 1,
      ts_builtin_sym_end,
    ACTIONS(11), 1,
      anon_sym_LF,
    STATE(9), 1,
      aux_sym_semis_repeat1,
    STATE(13), 1,
      sym_semis,
    ACTIONS(13), 2,
      anon_sym_import,
      sym_pub,
  [34] = 5,
    ACTIONS(5), 1,
      anon_sym_import,
    ACTIONS(7), 1,
      sym_pub,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      sym_importdecl,
    STATE(5), 2,
      sym_declarations,
      aux_sym_modulebody_repeat1,
  [51] = 5,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_import,
    ACTIONS(22), 1,
      sym_pub,
    STATE(15), 1,
      sym_importdecl,
    STATE(5), 2,
      sym_declarations,
      aux_sym_modulebody_repeat1,
  [68] = 5,
    ACTIONS(25), 1,
      sym_lowerid,
    STATE(16), 1,
      sym_moduleid,
    STATE(20), 1,
      aux_sym_modulepath_repeat1,
    STATE(30), 1,
      sym_qvarid,
    STATE(32), 1,
      sym_modulepath,
  [84] = 5,
    ACTIONS(27), 1,
      sym_lowerid,
    STATE(20), 1,
      aux_sym_modulepath_repeat1,
    STATE(21), 1,
      sym_qvarid,
    STATE(22), 1,
      sym_moduleid,
    STATE(29), 1,
      sym_modulepath,
  [100] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_semis_repeat1,
    ACTIONS(34), 2,
      anon_sym_import,
      sym_pub,
  [114] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      anon_sym_LF,
    STATE(8), 1,
      aux_sym_semis_repeat1,
    ACTIONS(40), 2,
      anon_sym_import,
      sym_pub,
  [128] = 5,
    ACTIONS(25), 1,
      sym_lowerid,
    STATE(18), 1,
      sym_moduleid,
    STATE(20), 1,
      aux_sym_modulepath_repeat1,
    STATE(30), 1,
      sym_qvarid,
    STATE(32), 1,
      sym_modulepath,
  [144] = 2,
    ACTIONS(44), 1,
      anon_sym_SLASH,
    ACTIONS(42), 2,
      anon_sym_import,
      sym_pub,
  [152] = 1,
    ACTIONS(46), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      sym_pub,
  [158] = 1,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      sym_pub,
  [164] = 1,
    ACTIONS(50), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      sym_pub,
  [170] = 1,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_import,
      sym_pub,
  [176] = 2,
    ACTIONS(54), 1,
      anon_sym_LF,
    STATE(12), 1,
      sym_semi,
  [183] = 2,
    ACTIONS(56), 1,
      sym_lowerid,
    STATE(17), 1,
      aux_sym_modulepath_repeat1,
  [190] = 2,
    ACTIONS(54), 1,
      anon_sym_LF,
    STATE(14), 1,
      sym_semi,
  [197] = 1,
    ACTIONS(59), 2,
      anon_sym_import,
      sym_pub,
  [202] = 2,
    ACTIONS(61), 1,
      sym_lowerid,
    STATE(17), 1,
      aux_sym_modulepath_repeat1,
  [209] = 1,
    ACTIONS(42), 2,
      anon_sym_import,
      sym_pub,
  [214] = 1,
    ACTIONS(63), 2,
      anon_sym_import,
      sym_pub,
  [219] = 2,
    ACTIONS(42), 1,
      anon_sym_LF,
    ACTIONS(65), 1,
      anon_sym_SLASH,
  [226] = 1,
    ACTIONS(44), 1,
      anon_sym_SLASH,
  [230] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [234] = 1,
    ACTIONS(69), 1,
      sym_lowerid,
  [238] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [242] = 1,
    ACTIONS(73), 1,
      anon_sym_import,
  [246] = 1,
    ACTIONS(75), 1,
      sym_lowerid,
  [250] = 1,
    ACTIONS(42), 1,
      anon_sym_LF,
  [254] = 1,
    ACTIONS(59), 1,
      anon_sym_LF,
  [258] = 1,
    ACTIONS(77), 1,
      sym_lowerid,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 17,
  [SMALL_STATE(4)] = 34,
  [SMALL_STATE(5)] = 51,
  [SMALL_STATE(6)] = 68,
  [SMALL_STATE(7)] = 84,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 114,
  [SMALL_STATE(10)] = 128,
  [SMALL_STATE(11)] = 144,
  [SMALL_STATE(12)] = 152,
  [SMALL_STATE(13)] = 158,
  [SMALL_STATE(14)] = 164,
  [SMALL_STATE(15)] = 170,
  [SMALL_STATE(16)] = 176,
  [SMALL_STATE(17)] = 183,
  [SMALL_STATE(18)] = 190,
  [SMALL_STATE(19)] = 197,
  [SMALL_STATE(20)] = 202,
  [SMALL_STATE(21)] = 209,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 219,
  [SMALL_STATE(24)] = 226,
  [SMALL_STATE(25)] = 230,
  [SMALL_STATE(26)] = 234,
  [SMALL_STATE(27)] = 238,
  [SMALL_STATE(28)] = 242,
  [SMALL_STATE(29)] = 246,
  [SMALL_STATE(30)] = 250,
  [SMALL_STATE(31)] = 254,
  [SMALL_STATE(32)] = 258,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semi, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_semi, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulebody, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modulebody_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modulebody_repeat1, 2), SHIFT_REPEAT(10),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modulebody_repeat1, 2), SHIFT_REPEAT(28),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_semis_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_semis_repeat1, 2), SHIFT_REPEAT(8),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_semis_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semis, 1),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_semis, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduleid, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importdecl, 4),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_semi, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_importdecl, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declarations, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_modulepath_repeat1, 2), SHIFT_REPEAT(24),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qvarid, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modulepath, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_moduledecl, 2),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [67] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_modulepath_repeat1, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_koka(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_lowerid,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
