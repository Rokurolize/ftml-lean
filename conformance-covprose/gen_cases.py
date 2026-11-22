#!/usr/bin/env python3
"""Seeded within-class shape generator for BRIEF-COVERAGE-PROSE.

One entry per class of LeanFtml.CoverageProse.lean's `allClasses`. Each
generator returns authored source realizing that class's decisive branch;
the RNG varies only features that are irrelevant to the decision (run
length above the threshold, the literal body, and surrounding prose that
does not change the branch). The generated sources are fed to both the
reference harness and the Lean mirror by run_fuzz.py.

Evidence order: the shapes are taken from the reference PHP branch
conditions and from the R2-PARA / R2-FRAME / R2-LINK / R2-INLINE3 / REFVAL
batteries and the muse-probe-suspect-prose-* pins, not invented.
"""

import random

WORDS = ["a", "xy", "q7", "hello", "zz", "body"]
NL = ["\n", "\n", "\n", "\n\n"]


def w(rng):
    return rng.choice(WORDS)


def wrap(rng, core):
    """Neutral surrounding prose; the core is kept on its own lines."""
    lead = rng.choice(["", "", "x\n"])
    tail = rng.choice(["", "\ny", "\n\nz"])
    return lead + core + tail


def pf_crlf(rng):
    return rng.choice(["a\r\nb", "x\r\ny\r\nz", "p\r\n\r\nq"])


def pf_cr(rng):
    return rng.choice(["a\rb", "x\ry\rz", "p\r\rq"])


def pf_ws(rng):
    return rng.choice(["a\n   \nb", "a\n\t\nb", "a\n \n \nb"])


def pf_tab(rng):
    return rng.choice([
        "[[code]]\n%s\t%s\n[[/code]]\nx" % (w(rng), w(rng)),
        "[[code]]\n\t%s\t\n[[/code]]\nx" % w(rng),
    ])


def pf_pad(rng):
    return rng.choice(["x", "a\nb", "one line only"])


def pf_compress(rng):
    n = rng.randint(3, 6)
    return "%s\n%s%s" % (w(rng), "\n" * n, w(rng))


def dl(rng):
    return rng.choice(["ÿ\nx", "aÿb\nx", "\xdf\nx"])


def cl_identity(rng):
    return rng.choice(["a\nb", "x\ny\nz", "plain text"])


def cl_join(rng):
    return rng.choice(["a\\\nb", "%s\\\n%s" % (w(rng), w(rng)),
                       "a\\\nb\\\nc"])


def cl_divopen(rng):
    return rng.choice([
        "a\\\n[[div]]\nb\n[[/div]]",
        "%s\\\n[[div class=\"x\"]]\n%s\n[[/div]]" % (w(rng), w(rng)),
    ])


def cl_tokenized(rng):
    return rng.choice([
        "[[code]]\na\\\nb\n[[/code]]\nx",
        "[[code]]\n%s\\\n%s\n[[/code]]\ny" % (w(rng), w(rng)),
    ])


def tn_newline(rng):
    return rng.choice(["a\nb", "%s\n%s\n%s" % (w(rng), w(rng), w(rng))])


def tn_fold(rng):
    return rng.choice(["a  b", "a\tb", "a   b", "a \t b"])


def tn_color_start(rng):
    return rng.choice(["##red| x##", "##blue|  %s##" % w(rng)])


def tn_color_end(rng):
    return rng.choice(["##red|x ##", "##blue|%s  ##" % w(rng)])


def tn_edge(rng):
    return rng.choice([
        "##red| x ##",
        "[[code]]\na\n[[/code]]  _\nb",
        "a  _\nb",
    ])


def ty_dq(rng):
    return rng.choice(["``%s''" % w(rng), "a ``%s'' b" % w(rng)])


def ty_cq(rng):
    return rng.choice([",,%s''" % w(rng), "a ,,%s'' b" % w(rng)])


def ty_sq(rng):
    return rng.choice(["`%s'" % w(rng), "a `%s' b" % w(rng)])


def ty_la(rng):
    return rng.choice(["<<", "a<<b", "<< x <<"])


def ty_ra(rng):
    return rng.choice(["x >>", "a>>b", "x >> y"])


def ty_num(rng):
    return rng.choice(["1 2", "10 20", "3 4 5"])


def ty_unit(rng):
    return rng.choice(["10 m", "10 kg", "10 %%", "10 px", "10 °C"])


def ty_ell(rng):
    return rng.choice(["a...b", "a. . .b", "..."])


def ty_dash(rng):
    return rng.choice(["a--b", "--", "a----b"])


def ty_none(rng):
    return rng.choice(["plain", "a b c", "no pattern here"])


def pg_empty(rng):
    return rng.choice(["a\n  \nb", "a\n\n\nb"])


def pg_anchor(rng):
    return rng.choice(["[[a_]]%s[[/a]]\nx" % w(rng),
                       "p\n[[a_]]%s[[/a]]\nq" % w(rng)])


def pg_span(rng):
    return rng.choice(["[[span_]]%s[[/span]]\nx" % w(rng),
                       "p\n[[span_]]%s[[/span]]\nq" % w(rng)])


def pg_skip(rng):
    return rng.choice(["====\nx", "===\nx", "[[div]]\nx\n[[/div]]\ny"])


def pg_wrap(rng):
    return rng.choice(["%s\n\n%s" % (w(rng), w(rng)),
                       "one paragraph\n\nanother"])


def hz_fire(rng):
    n = rng.randint(4, 9)
    return wrap(rng, "-" * n)


def hz_lit(rng):
    return rng.choice(["---\nx", "---- \nx", "a----b", "--x"])


def sp_fire(rng):
    n = rng.randint(4, 8)
    return wrap(rng, "=" * n)


def sp_lit(rng):
    return rng.choice(["===\nx", "= x", "a====b", "==== ="])


def cf_both(rng):
    n = rng.randint(4, 8)
    return wrap(rng, "~" * n)


def cf_right(rng):
    n = rng.randint(4, 8)
    return wrap(rng, "~" * n + ">")


def cf_left(rng):
    n = rng.randint(4, 8)
    return wrap(rng, "~" * n + "<")


def cf_double(rng):
    n = rng.randint(4, 8)
    return rng.choice([wrap(rng, "~" * n + ">>"),
                       wrap(rng, "~" * n + "<<")])


def cf_lit(rng):
    return rng.choice(["~~~\nx", "~~~~>\nx", "~~~~ x"])


def br_fire(rng):
    return rng.choice(["a _\nb", "%s _\n%s" % (w(rng), w(rng)),
                       "a  _\nb"])


def br_lit(rng):
    return rng.choice(["a_\nb", "a  _ \nb", "a _ b"])


def ct_fire(rng):
    return rng.choice(["= %s\nx" % w(rng),
                       "= %s\n= %s\nx" % (w(rng), w(rng)),
                       "x\n= %s =\ny" % w(rng)])


def ct_lit(rng):
    return rng.choice(["=%s\nx" % w(rng), "== x", "x = y"])


def dp_join(rng):
    sep = rng.choice(["", " ", "\n", "  \n "])
    return rng.choice([
        "[[/div]]%s[[div]]\nx\n[[/div]]" % sep,
        "[[/DIV]]%s[[DIV]]\nx\n[[/DIV]]" % sep,
        "[[/div]]%s[[divx]]\nx" % sep,
    ])


def dp_lit(rng):
    return rng.choice(["[[/div]] x [[div]]", "[[/div]]\nx\n[[div]]"])


def da_center(rng):
    return rng.choice(["[[=]]\n%s\n[[/=]]\ny" % w(rng)])


def da_left(rng):
    return rng.choice(["[[<]]\n%s\n[[/<]]\ny" % w(rng)])


def da_right(rng):
    return rng.choice(["[[>]]\n%s\n[[/>]]\ny" % w(rng)])


def da_justify(rng):
    return rng.choice(["[[==]]\n%s\n[[/==]]\ny" % w(rng)])


def da_repeat(rng):
    return rng.choice([
        "[[=]]\n[[>]]\n%s\n[[/>]]\n[[/=]]\ny" % w(rng),
        "[[==]]\n[[=]]\n%s\n[[/=]]\n[[/==]]\ny" % w(rng),
    ])


def da_lit(rng):
    return rng.choice(["[[=]]\n%s\ny" % w(rng), "[[==]]x[[/==]]"])


CLASS_GENS = {
    "pfCrlf": pf_crlf, "pfCr": pf_cr, "pfWsLine": pf_ws, "pfTab": pf_tab,
    "pfPad": pf_pad, "pfCompress": pf_compress,
    "dlAuthored": dl,
    "clIdentity": cl_identity, "clJoin": cl_join,
    "clDivOpen": cl_divopen, "clTokenized": cl_tokenized,
    "tnNewline": tn_newline, "tnFold": tn_fold,
    "tnColorStart": tn_color_start, "tnColorEnd": tn_color_end,
    "tnEdgeTrim": tn_edge, "tnSecondFold": tn_color_start,
    "tyQuoteDouble": ty_dq, "tyQuoteComma": ty_cq, "tyQuoteSingle": ty_sq,
    "tyLeftAngle": ty_la, "tyRightAngle": ty_ra, "tyNumSpace": ty_num,
    "tyUnit": ty_unit, "tyEllipsis": ty_ell, "tyDash2": ty_dash,
    "tyNone": ty_none,
    "pgEmpty": pg_empty, "pgScoredAnchor": pg_anchor,
    "pgScoredSpan": pg_span, "pgSkip": pg_skip, "pgWrap": pg_wrap,
    "hzFire": hz_fire, "hzLiteral": hz_lit,
    "spFire": sp_fire, "spLiteral": sp_lit,
    "cfBoth": cf_both, "cfRight": cf_right, "cfLeft": cf_left,
    "cfDoubleSide": cf_double, "cfLiteral": cf_lit,
    "brFire": br_fire, "brLiteral": br_lit,
    "ctFire": ct_fire, "ctLiteral": ct_lit,
    "dpJoin": dp_join, "dpLiteral": dp_lit,
    "daCenter": da_center, "daLeft": da_left, "daRight": da_right,
    "daJustify": da_justify, "daRepeat": da_repeat, "daLiteral": da_lit,
}

assert len(CLASS_GENS) == 53, len(CLASS_GENS)


def generate(seed, per_class=6):
    rng = random.Random(seed)
    cases = []
    for cls in sorted(CLASS_GENS):
        for i in range(per_class):
            src = CLASS_GENS[cls](rng)
            cases.append({"id": "cov-%d-%s-%02d" % (seed, cls, i),
                          "class": cls, "source": src})
    return cases
