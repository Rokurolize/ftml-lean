#!/usr/bin/env python3
"""Seeded fuzz differential for the R3.8 (CONTAIN) stage.

Generates 500 synthetic documents across the stage's
families — spans (nesting, elision, attribute matrices,
placeholder-bearing bodies), sizes (valid and invalid
values, innermost-first nesting, control bytes and
line-end spaces in bodies), divs (scored and unscored,
nesting, empty suppression, id isolation shapes, data-*
case handling), collapsibles (multiple views of the
counter, first-closer nesting, a `count` attribute that
must not be canonicalized), tabviews (multiple views,
quoted-pair and plain and junk tab heads, the ff shapes,
unterminated views, placeholder bodies) — plus whole-
document mixtures with earlier families and iftags tags.

Usage: fuzz_r38.py [seed]   (default 20261120)
Writes fuzz-cases[-sSEED].jsonl, fuzz-php[-sSEED].jsonl,
fuzz-lean[-sSEED].jsonl and comparison-fuzz[-sSEED].txt
beside itself; prints the comparison's summary lines.
"""

import json
import os
import random
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
WSL_SSH = os.path.expanduser("~/workspace/native-stack/bin/wsl-ssh.sh")
LEAN_EXE = os.path.join(ROOT, "lean-ftml", ".lake", "build", "bin",
                        "lean-ftml-conformance-r38")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
         "Freelink,Equationreference,Footnote,Footnoteitem,"
         "Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,"
         "Heading,Toc,Span,Size,Div,Collapsible,Tabview")

TAG_POOL = ["alpha", "beta", "Alpha", ""]
TEXTS = ["text", "two words", "", " ", "  padded  ", "x" * 20,
         "caf\u00e9 \u4e2d\u6587", "a]]b", "[[span]]in[[/span]]",
         "note[[footnote]]fn[[/footnote]] here", "@@raw@@",
         "line one\nline two", "trail  \nnext"]


def span_attrs(rng):
    pool = ['id="i1"', 'id=""', 'id="u-pre"', 'class="c"', 'class="a b"',
            'style="color: red"', 'role="note"', 'type="t"',
            'data-x="1"', 'data-Foo="2"', 'data-x="dup"', 'foo="bar"',
            'lang="en"', "class='sq'", 'class=uq', 'title="T"']
    n = rng.randint(0, 3)
    if n == 0:
        return ""
    return " " + " ".join(rng.choice(pool) for _ in range(n))


def gen_span(rng):
    def one(depth):
        body = rng.choice(TEXTS)
        if depth < 2 and rng.random() < 0.35:
            body = body + one(depth + 1)
        return f"[[span{span_attrs(rng)}]]{body}[[/span]]"
    s = one(0)
    if rng.random() < 0.3:
        s = "pre\n" + s + "\npost"
    if rng.random() < 0.15:
        s += one(0)
    case = {"source": s}
    if rng.random() < 0.2:
        case["tags"] = [rng.choice(TAG_POOL)]
    return case


SIZE_VALUES = ["1em", "2.5px", "100%", "0", ".5em", "5.", "12345px",
               "xx-small", "small", "larger", "medium", "123456em",
               "1EM", "em", "1.2.3em", "bogus", "-1em", "1e m", "%",
               "12.5%", "99999em", "larg", " smaller "]


def gen_size(rng):
    def one(depth):
        v = rng.choice(SIZE_VALUES)
        body = rng.choice(TEXTS + ["a\x01b\x1fc", "sp  \nnext", "end  "])
        if depth < 2 and rng.random() < 0.35:
            body = body + one(depth + 1)
        return f"[[size {v}]]{body}[[/size]]"
    s = one(0)
    if rng.random() < 0.25:
        s = "pre " + s + " post"
    return {"source": s}


DIV_ATTRS = ['', ' class="c"', ' id="d1"', ' id=" spaced id "',
             ' id="u-pre"', ' id=""', ' class="a  b\t"',
             ' style="x: 1\n 2"', ' data-X="1" data-x="2"',
             ' data-x="1" data-X="2"', ' role="r" type="t" foo="no"',
             ' class=""', ' id="\u00a0nb"', ' style="\x01ctl"']


def gen_div(rng):
    def one(depth):
        scored = "_" if rng.random() < 0.4 else ""
        body = rng.choice(TEXTS + ["a\n\nb", "\n\n", "x\n\n\ny"])
        if depth < 2 and rng.random() < 0.3:
            body = body + "\n" + one(depth + 1)
        return f"[[div{scored}{rng.choice(DIV_ATTRS)}]]\n{body}\n[[/div]]"
    s = one(0)
    if rng.random() < 0.3:
        s = "intro\n" + s
    return {"source": s}


COLL_ATTRS = ['', ' show="+ Show" hide="- Hide"', ' count="7"',
              ' foo="bar"', ' note="[[footnote]]x[[/footnote]]"']


def gen_coll(rng):
    n = rng.randint(1, 3)
    parts = []
    for _ in range(n):
        body = rng.choice(TEXTS)
        if rng.random() < 0.2:
            body = "a[[collapsible]]inner[[/collapsible]]b"
        parts.append(
            f"[[collapsible{rng.choice(COLL_ATTRS)}]]{body}[[/collapsible]]")
    s = "\n".join(parts)
    if rng.random() < 0.25:
        s = "lead\n" + s
    return {"source": s}


TAB_HEADS = ['[[tab One]]', '[[tab]]', '[[tab  ]]', '[[tab Two Words]]',
             '[[tab title="T"]]', '[[tab title="T" class="c"]]',
             '[[tab class="c" title="T"]]', '[[tab a="1" b="2"]]',
             '[[tab @@raw@@]]', '[[tab title="a  b"]]',
             '[[tab data-x="1" title="D"]]', '[[tab x]]']


def one_tabview(rng):
    tabs = []
    for _ in range(rng.randint(1, 3)):
        body = rng.choice(TEXTS)
        tabs.append(f"{rng.choice(TAB_HEADS)}{body}[[/tab]]")
    attrs = rng.choice(['', ' class="v"', ' class="0"', ' class=""',
                        ' id="no"', ' class="a" class="b"'])
    name = rng.choice(["tabview", "tabs", "TABVIEW"])
    s = f"[[{name}{attrs}]]\n" + "\n".join(tabs) + f"\n[[/{name.lower()}]]"
    if rng.random() < 0.12:
        s = s.replace("[[/tabview]]", "").replace("[[/tabs]]", "")
    return s


def gen_tabview(rng):
    s = one_tabview(rng)
    if rng.random() < 0.3:
        s += "\n" + one_tabview(rng)
    if rng.random() < 0.2:
        s = "mid [[tabview]]\n[[tab X]]b[[/tab]]\n[[/tabview]] and\n" + s
    return {"source": s}


def gen_mix(rng):
    frags = ["plain paragraph", "+ Head A", "> quote line",
             "[[span class=\"c\"]]sp[[/span]]",
             "[[size 2em]]big[[/size]]", "[[size bogus]]bad[[/size]]",
             "[[div]]\ndv\n[[/div]]", "[[div_ class=\"s\"]]\nsc\n[[/div]]",
             "[[collapsible]]cl[[/collapsible]]",
             "[[footnote]]note[[/footnote]] text",
             "[[tabview]]\n[[tab T]]tb[[/tab]]\n[[/tabview]]",
             "[[iftags +alpha]]\n+ Gated\n[[/iftags]]",
             "[[math]]\nx\n[[/math]]", "[[toc]]", ""]
    s = "\n".join(rng.choice(frags) for _ in range(rng.randint(2, 7)))
    case = {"source": s}
    if rng.random() < 0.5:
        case["tags"] = [rng.choice(TAG_POOL)
                        for _ in range(rng.randint(0, 2))]
    return case


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261120
    rng = random.Random(seed)
    cases = []
    for i in range(90):
        cases.append({"id": f"fz-span-{i:03d}", **gen_span(rng)})
    for i in range(90):
        cases.append({"id": f"fz-size-{i:03d}", **gen_size(rng)})
    for i in range(90):
        cases.append({"id": f"fz-div-{i:03d}", **gen_div(rng)})
    for i in range(70):
        cases.append({"id": f"fz-coll-{i:03d}", **gen_coll(rng)})
    for i in range(90):
        cases.append({"id": f"fz-tv-{i:03d}", **gen_tabview(rng)})
    for i in range(70):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261120 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r38/ref-php && php harness/state-restricted.php {RULES}"],
        input=blob, capture_output=True)
    if php.returncode != 0:
        sys.stderr.write(php.stderr.decode("utf-8", "replace"))
        return 2
    php_path = os.path.join(HERE, f"fuzz-php{suffix}.jsonl")
    open(php_path, "wb").write(php.stdout)

    lean = subprocess.run([LEAN_EXE], input=blob, capture_output=True)
    if lean.returncode != 0:
        sys.stderr.write(lean.stderr.decode("utf-8", "replace"))
        return 2
    lean_path = os.path.join(HERE, f"fuzz-lean{suffix}.jsonl")
    open(lean_path, "wb").write(lean.stdout)

    cmp = subprocess.run(
        [sys.executable, os.path.join(HERE, "compare.py"), php_path, lean_path],
        capture_output=True, text=True)
    out_path = os.path.join(HERE, f"comparison-fuzz{suffix}.txt")
    with open(out_path, "w") as f:
        f.write(cmp.stdout)
    sys.stdout.write("\n".join(cmp.stdout.splitlines()[-4:]) + "\n")
    return cmp.returncode


if __name__ == "__main__":
    sys.exit(main())
