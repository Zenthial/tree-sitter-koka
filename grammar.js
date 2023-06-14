// follows this grammar specification 1:1
// https://koka-lang.github.io/koka/doc/book.html#sec:full-grammar
module.exports = grammar({
  name: "koka",

  word: $ => $.lowerid,
  rules: {
    module: $ => seq($.moduledecl, $.modulebody),

    moduledecl: $ => seq("module", $.moduleid),
    moduleid: $ => choice($.qvarid, $.lowerid),

    modulebody: $ => repeat1($.declarations),

    semis: $ => repeat1("\n"),
    semi: $ => seq("\n", optional($.semis)),

    declarations: $ => $.importdecl,

    importdecl: $ => seq(optional($.pub), "import", $.moduleid, $.semi),

    // puredecl: $ => choice(seq(optional(inlinemod), "val", valdecl), seq(optional(inlinemod), "fun", fundecl)),
    puredecl: $ => seq(optional($.inlinemod), "fun", $.fundecl),
    inlinemod: $ => choice("inline", "noinline"),

    fundecl: $ => seq($.funid, $.funbody),
    funbody: $ => seq($.funparam, $.blockexpr),
    funparam: $ => seq(optional($.typeparams), $.parameters, optional(seq(":", $.tresult)), optional($.qualifier)),
    funid: $ => choice($.identifier, optional(seq("[", optional(","), "]"))),

    parameters: $ => seq("(", optional(seq($.parameter, repeat(seq(",", $.parameter)))), ")"),
    parameter: $ => seq(optional($.borrow), $.paramid, optional(seq(":", $.type)), optional(seq("=", $.expr))),

    paramid: $ => choice($.identifier, $.wildcard),
    borrow: $ => "^",

    // block expr here

    letter: $ => /[a-z]/,

    digit: $ => /\d/,

    qvarid: $ => seq($.modulepath, $.lowerid),
    modulepath: $ => prec.left(repeat1(seq($.lowerid, "/"))),
    varid: $ => $.lowerid,

    pub: $ => "pub",
    wildcard: $ => seq("_", $.identifier),
    lowerid: ($) => /[a-z]([A-Za-z]|\d|-|_)*'*/,
  }
})
