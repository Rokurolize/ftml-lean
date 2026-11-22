#!/usr/bin/env python3
"""Seeded fuzz differential for the R3.9 (LIST) stage.

Generates 500 synthetic documents across the stage's
families — native line lists (depth walks with skips and
unwinds, empty and whitespace-only items with and without
deeper followers, marker-type switches at column 0,
indented continuation lines, non-item lines that end a
run, text around runs), definition lists (separators
present and absent, blank lines consumed by a run,
separator-less colon lines, terms with spaces and
placeholder terms, definitions with trailing spaces),
explicit block lists (scored and unscored openers, item
and block attribute matrices, nested explicit blocks,
native lists inside items and as whole bodies, text-only
bodies, empty and whitespace bodies, dissolved blocks,
residual third brackets, text before and after blocks) —
plus whole-document mixtures with earlier families.

No generated source contains a raw \\x02 or \\x03 byte:
the reference's masking placeholders are outside the
modelled surface, as recorded in REPORT-R39.md.

Usage: fuzz_r39.py [seed]   (default 20261120)
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
                        "lean-ftml-conformance-r39")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
         "Freelink,Equationreference,Footnote,Footnoteitem,"
         "Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,"
         "Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist")

WORDS = ["apple", "two words", "x", "caf\u00e9", "a  b", "trail ",
         "[[span]]s[[/span]]", "@@raw@@", "[[footnote]]n[[/footnote]]",
         "http://example.com", "* star", "# hash", ": colon"]


def gen_native(rng):
    lines = []
    if rng.random() < 0.3:
        lines.append(rng.choice(["intro text", "para one", ""]))
    depth = 0
    for _ in range(rng.randint(1, 9)):
        r = rng.random()
        if r < 0.62:
            depth = max(0, min(3, depth + rng.choice([-1, 0, 0, 1, 1, 2])))
            marker = rng.choice(["*", "#"])
            body = rng.choice(WORDS + ["", " ", "  "])
            lines.append(" " * depth + marker + " " + body)
        elif r < 0.72:
            lines.append(" " * rng.randint(1, 3) + rng.choice(
                ["continuation", "* cont", "# cont", ""]))
        elif r < 0.8:
            lines.append(rng.choice(["plain line", "", " end text"]))
            depth = 0
        else:
            lines.append(" " * rng.randint(0, 2) + rng.choice(["*", "#"])
                         + " " + rng.choice(WORDS))
    if rng.random() < 0.3:
        lines.append(rng.choice(["outro", "done", ""]))
    return {"source": "\n".join(lines)}


def gen_deflist(rng):
    lines = []
    if rng.random() < 0.25:
        lines.append("lead")
    for _ in range(rng.randint(1, 6)):
        r = rng.random()
        term = rng.choice(["term", "two words", "", "t ", " term",
                           "[[footnote]]f[[/footnote]]", "a b c"])
        dfn = rng.choice(["definition", "two words", "", "d ", " x"])
        if r < 0.6:
            lines.append(f": {term} : {dfn}")
        elif r < 0.72:
            lines.append(f": {term}")
        elif r < 0.8:
            lines.append("")
        elif r < 0.88:
            lines.append(f": {term} :")
        else:
            lines.append(rng.choice(["plain", ":notalist", ":"]))
    if rng.random() < 0.25:
        lines.append("tail")
    return {"source": "\n".join(lines)}


UL_ATTRS = ["", ' id="u1"', ' id=" spaced"', ' id="u-pre"', ' id=""',
            ' class="c"', ' class="a  b"', ' style="x: 1"',
            ' title="drop"', ' role="r" type="decimal"',
            ' data-X="1"', ' data-a="1" data-b="2"', ' foo="bar"',
            " class='sq'", ' id="a" id="b"', ' class=""']
LI_ATTRS = ["", ' id="i1"', ' class="it"', ' value="3"', ' data-k="v"',
            ' style="s"', ' title="t"', ' class="a" class="b"']


def native_block(rng, depth=0):
    lines = []
    d = 0
    for _ in range(rng.randint(1, 4)):
        d = max(0, min(2, d + rng.choice([0, 1, -1])))
        lines.append(" " * d + rng.choice(["*", "#"]) + " "
                     + rng.choice(WORDS[:6]))
    return "\n".join(lines)


def expl_block(rng, depth=0):
    tag = rng.choice(["ul", "ol"])
    scored = "_" if rng.random() < 0.25 else ""
    attrs = rng.choice(UL_ATTRS)
    items = []
    for _ in range(rng.randint(0, 4)):
        r = rng.random()
        if r < 0.5 or depth >= 2:
            body = rng.choice(WORDS + ["", " ", "multi\nline",
                                       "lead\n" + "x"])
        elif r < 0.65:
            body = native_block(rng)
        elif r < 0.8:
            body = "text\n" + expl_block(rng, depth + 1)
        else:
            body = expl_block(rng, depth + 1)
        resid = "]" if rng.random() < 0.12 else ""
        items.append(f"[[li{rng.choice(LI_ATTRS)}]]{body}[[/li]]{resid}")
    if items and rng.random() < 0.2:
        body = "\n" + "\n".join(items) + "\n"
    elif items:
        body = "".join(items) if rng.random() < 0.4 else "\n".join(items)
    else:
        body = rng.choice(["", " ", "\n", "just text", native_block(rng),
                           "text with [[span]]s[[/span]]"])
    resid = "]" if rng.random() < 0.12 else ""
    return f"[[{tag}{scored}{attrs}]]{body}[[/{tag}]]{resid}"


def gen_explicit(rng):
    s = expl_block(rng)
    r = rng.random()
    if r < 0.25:
        s = "before\n" + s
    elif r < 0.4:
        s = "before\n\n" + s + "\nafter"
    elif r < 0.5:
        s = s + "\n" + expl_block(rng)
    if rng.random() < 0.15:
        s = "text " + s + " tail"
    return {"source": s}


def gen_mix(rng):
    frags = ["plain paragraph", "+ Head A", "> quote line",
             "* item one", "* item two", " * nested", "# first",
             ": term : def", ": t2 : d2",
             "[[ul]]\n[[li]]a[[/li]]\n[[li]]b[[/li]]\n[[/ul]]",
             "[[ol_]]\n[[li]]x[[/li]]\n[[/ol]]",
             "[[span class=\"c\"]]sp[[/span]]",
             "[[footnote]]note[[/footnote]] text",
             "[[div]]\ndv\n[[/div]]", "[[toc]]", ""]
    s = "\n".join(rng.choice(frags) for _ in range(rng.randint(2, 6)))
    return {"source": s}


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261120
    rng = random.Random(seed)
    cases = []
    for i in range(130):
        cases.append({"id": f"fz-nat-{i:03d}", **gen_native(rng)})
    for i in range(110):
        cases.append({"id": f"fz-def-{i:03d}", **gen_deflist(rng)})
    for i in range(160):
        cases.append({"id": f"fz-exp-{i:03d}", **gen_explicit(rng)})
    for i in range(100):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261120 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r39/ref-php && php harness/state-restricted.php {RULES}"],
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
