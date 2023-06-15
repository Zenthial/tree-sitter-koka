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

    typeparams: $ => seq("<", optional($.tbinders), ">"),
    tbinders: $ => seq($.tbinder, repeat(seq(",", $.tbinder))),
    tbinder: $ => seq($.varid, optional($.kannot)),

    fundecl: $ => seq($.funid, $.funbody),
    funbody: $ => seq($.funparam, $.blockexpr),
    funparam: $ => seq(optional($.typeparams), $.parameters, optional(seq(":", $.tresult)), optional($.qualifier)),
    funid: $ => choice($.identifier, seq("[", repeat(","), "]")),

    parameters: $ => seq("(", optional(seq($.parameter, repeat(seq(",", $.parameter)))), ")"),
    parameter: $ => seq(optional($.borrow), $.paramid, optional(seq(":", $.type)), optional(seq("=", $.expr))),

    paramid: $ => choice($.identifier, $.wildcard),
    borrow: $ => "^",

    blockexpr: $ => $.expr,

    expr: $ => choice($.basicexpr),
    basicexpr: $ => choice($.opexpr),

    opexpr: $ => seq($.prefixexpr, optional(seq($.qoperator, $.prefixexpr))),
    prefixexpr: $ => seq(optional(choice("!", "~")), $.appexpr),
    appexpr: $ => choice($.atom),
    
    atom: $ => choice($.qidentifier, "()"),

    type: $ => seq(optional($.foralls), $.tarrow, optional($.qualifier)),

    foralls: $ => seq("forall", $.typeparams),

    tarrow: $ => seq($.tatom, optional(seq("->", $.tresult))),
    tresult: $ => seq($.tatom, optional($.tbasic)),

    qualifier: $ => "with",

    tatom: $ => choice($.tbasic, 
                  seq("<", $.anntype, repeat(seq(",", $.anntype)), optional(seq("|", $.tatom)), ">"),
                  seq("<", ">")
                ),

    tbasic: $ => choice($.typeapp, "()", seq("(", $.tparam, ")"), seq("(", $.tparam, ")", repeat(seq(",", $.tparam))), seq("[", $.anntype, "]")),

    typeapp: $ => seq($.typecon, optional(seq("<", $.anntype, repeat(seq(",", $.anntype)), ">"))),

    typecon: $ => choice($.varid, $.wildcard, seq("(", ",", repeat(","), ")"), "[]", seq("(", "->", ")")),

    anntype: $ => seq($.type, optional($.kannot)),
    tparam: $ => seq(optional(seq($.varid, ":")), $.anntype),

    letter: $ => /[a-z]/,

    digit: $ => /\d/,

    qvarid: $ => seq($.modulepath, $.lowerid),
    modulepath: $ => prec.left(repeat1(seq($.lowerid, "/"))),
    varid: $ => $.lowerid,

    pub: $ => "pub",
    wildcard: $ => seq("_", $.identifier),

    qoperator: $ => $.op,
    op: $ => choice($.symbols, "| |"),
    symbols: $ => choice(seq($.symbol, repeat($.symbol), "/")),
    symbol: $ => choice("$", "%", "&", "*", "+", "~", "!", "\\", "^", "#", "=", ".", ":", "-", "?", $.anglebar),

    anglebar: $ => choice("<", ">", "|"),

    qidentifier: $ => choice($.qvarid, $.identifier),
    identifier: $ => $.lowerid,
    lowerid: $ => /[a-z]([A-Za-z]|\d|-|_)*'*/,

    kannot: $ => seq("::", $.kind),
    kind: $ => choice(
                  seq("(", $.kind, repeat(seq(",", $.kind)), ")", "->", $.kind),
                  seq($.katom, "->", $.kind),
                  $.katom,
    ),
    katom: $ => choice("V", "X", "E", "H", "P", "S", "HX", "HX1")
  }
})
