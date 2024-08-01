module.exports = grammar({
name: "cypher",

  extras: ($) => [$.comment, /\s+/],

  rules: {

    match_clause: ($) => seq(
      optional(choice($._mandatory, $._optional)),
      alias(/[mM][aA][tT][cC][hH]/, "MATCH")),

    comment: ($) => choice($._single_line_comment),
    _single_line_comment: () => /\/\/.*/,

    _mandatory: ($) => alias(/[mM][aA][nN][dD][aA][tT][oO][rR][yY]/, "MANDATORY"),
    _optional: ($) => alias(/[oO][pP][tT][iI][oO][nN][aA][lL]/, "OPTIONAL")
  }
})
