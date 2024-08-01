#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 9
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 9
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 2
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  aux_sym_match_clause_token1 = 1,
  sym__single_line_comment = 2,
  aux_sym__mandatory_token1 = 3,
  aux_sym__optional_token1 = 4,
  sym_match_clause = 5,
  sym_comment = 6,
  sym__mandatory = 7,
  sym__optional = 8,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_match_clause_token1] = "MATCH",
  [sym__single_line_comment] = "_single_line_comment",
  [aux_sym__mandatory_token1] = "MANDATORY",
  [aux_sym__optional_token1] = "OPTIONAL",
  [sym_match_clause] = "match_clause",
  [sym_comment] = "comment",
  [sym__mandatory] = "_mandatory",
  [sym__optional] = "_optional",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_match_clause_token1] = aux_sym_match_clause_token1,
  [sym__single_line_comment] = sym__single_line_comment,
  [aux_sym__mandatory_token1] = aux_sym__mandatory_token1,
  [aux_sym__optional_token1] = aux_sym__optional_token1,
  [sym_match_clause] = sym_match_clause,
  [sym_comment] = sym_comment,
  [sym__mandatory] = sym__mandatory,
  [sym__optional] = sym__optional,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_match_clause_token1] = {
    .visible = true,
    .named = false,
  },
  [sym__single_line_comment] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__mandatory_token1] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__optional_token1] = {
    .visible = true,
    .named = false,
  },
  [sym_match_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__mandatory] = {
    .visible = false,
    .named = true,
  },
  [sym__optional] = {
    .visible = false,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(19);
      if (lookahead == '/') ADVANCE(1);
      if (lookahead == 'M' ||
          lookahead == 'm') ADVANCE(2);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '/') ADVANCE(21);
      END_STATE();
    case 2:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 3:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 4:
      if (lookahead == 'A' ||
          lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == 'C' ||
          lookahead == 'c') ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == 'D' ||
          lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == 'H' ||
          lookahead == 'h') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'I' ||
          lookahead == 'i') ADVANCE(12);
      END_STATE();
    case 9:
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(23);
      END_STATE();
    case 10:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(6);
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'N' ||
          lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'R' ||
          lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == 'T' ||
          lookahead == 't') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'Y' ||
          lookahead == 'y') ADVANCE(22);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_match_clause_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__single_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym__mandatory_token1);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym__optional_token1);
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
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_match_clause_token1] = ACTIONS(1),
    [sym__single_line_comment] = ACTIONS(3),
    [aux_sym__mandatory_token1] = ACTIONS(1),
    [aux_sym__optional_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_match_clause] = STATE(5),
    [sym_comment] = STATE(1),
    [sym__mandatory] = STATE(6),
    [sym__optional] = STATE(6),
    [aux_sym_match_clause_token1] = ACTIONS(5),
    [sym__single_line_comment] = ACTIONS(3),
    [aux_sym__mandatory_token1] = ACTIONS(7),
    [aux_sym__optional_token1] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym__single_line_comment,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(2), 1,
      sym_comment,
  [10] = 3,
    ACTIONS(3), 1,
      sym__single_line_comment,
    ACTIONS(13), 1,
      aux_sym_match_clause_token1,
    STATE(3), 1,
      sym_comment,
  [20] = 3,
    ACTIONS(3), 1,
      sym__single_line_comment,
    ACTIONS(15), 1,
      aux_sym_match_clause_token1,
    STATE(4), 1,
      sym_comment,
  [30] = 3,
    ACTIONS(3), 1,
      sym__single_line_comment,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(5), 1,
      sym_comment,
  [40] = 3,
    ACTIONS(3), 1,
      sym__single_line_comment,
    ACTIONS(19), 1,
      aux_sym_match_clause_token1,
    STATE(6), 1,
      sym_comment,
  [50] = 3,
    ACTIONS(3), 1,
      sym__single_line_comment,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_comment,
  [60] = 1,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 10,
  [SMALL_STATE(4)] = 20,
  [SMALL_STATE(5)] = 30,
  [SMALL_STATE(6)] = 40,
  [SMALL_STATE(7)] = 50,
  [SMALL_STATE(8)] = 60,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__mandatory, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__optional, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_match_clause, 2, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1, 0, 0),
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

TS_PUBLIC const TSLanguage *tree_sitter_cypher(void) {
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
