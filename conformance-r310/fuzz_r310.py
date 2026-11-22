#!/usr/bin/env python3
"""Seeded fuzz differential for the R3.10 (TABLE) stage.

Generates 500 synthetic documents across the stage's
families — native line tables (marker and span matrices,
ragged rows, whitespace-only and empty cells, unterminated
final rows, text around and between tables), advanced
tables (attribute matrices on all three owners, mismatched
and upper-case closers, residue and empty-body failures,
quoted-bracket table heads, blank-line cell bodies, nested
tables to depth two, malformed openers) — plus
whole-document mixtures with earlier families (spans, divs,
lists, and footnotes inside cells; tables inside containers).

Usage: fuzz_r310.py [seed]   (default 20261121)
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
                        "lean-ftml-conformance-r310")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
         "Freelink,Equationreference,Footnote,Footnoteitem,"
         "Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,"
         "Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,"
         "Table,Tableadv")

WORDS = ["apple", "two words", "x", "café", "a  b", "trail ",
         "[[span]]s[[/span]]", "@@raw@@", "[[footnote]]n[[/footnote]]",
         "http://example.com", "> right", "= center", "< left",
         "~ head", ">", "~", " "]


def gen_simple(rng):
    def row():
        cells = []
        for _ in range(rng.randint(1, 4)):
            r = rng.random()
            if r < 0.18:
                cells.append("")
            elif r < 0.3:
                cells.append(rng.choice([" ", "  ", "\t"]))
            else:
                cells.append(rng.choice(WORDS))
        s = "||" + "||".join(cells)
        if rng.random() < 0.75:
            s += "||"
        return s
    lines = []
    if rng.random() < 0.35:
        lines.append(rng.choice(["intro text", "para one", ""]))
    for _ in range(rng.randint(1, 5)):
        lines.append(row())
    if rng.random() < 0.3:
        lines.append("")
        for _ in range(rng.randint(1, 3)):
            lines.append(row())
    if rng.random() < 0.35:
        lines.append(rng.choice(["outro", "done", ""]))
    return {"source": "\n".join(lines)}


TABLE_ATTRS = ["", ' class="t"', ' id="tb"', ' id="u-pre"', ' id=""',
               ' style="x: 1"', ' title="drop"', ' colspan="2"',
               ' data-X="1"', ' data-a="1" data-b="2"', ' foo="bar"',
               ' class="a  b"', " class='sq'", ' id="a" id="b"',
               ' aria-label="L"', ' data-note="a]]b"', ' lang="en"']
ROW_ATTRS = ["", ' class="r"', ' id="rw"', ' colspan="9"',
             ' rowspan="2"', ' title="t"', ' data-k="v"']
CELL_ATTRS = ["", ' class="c"', ' id="cl"', ' colspan="2"',
              ' colspan="0"', ' colspan="abc"', ' rowspan="3"',
              ' style="s"', ' title="t"', ' data-n="v"',
              ' aria-label="x"', ' align="center"', ' hidden="h"',
              ' CLASS="up"', ' data-Y="2"']


def adv_table(rng, depth=0):
    head = rng.choice(TABLE_ATTRS)
    rows = []
    for _ in range(rng.randint(0, 3)):
        cells = []
        for _ in range(rng.randint(0, 3)):
            tag = rng.choice(["cell", "hcell", "CELL", "HCell"])
            closer = rng.choice(["cell", "hcell", "CELL", "HCell"])
            r = rng.random()
            if r < 0.5 or depth >= 2:
                body = rng.choice(["text", "two words", "", " ",
                                   "a\n\nb", " lead", "trail ",
                                   "[[span]]s[[/span]]"])
            elif r < 0.75:
                body = adv_table(rng, depth + 1)
            else:
                body = "pre " + adv_table(rng, depth + 1) + " post"
            cells.append(f"[[{tag}{rng.choice(CELL_ATTRS)}]]{body}"
                         f"[[/{closer}]]")
        sep = rng.choice(["", " ", "\n", " \n "])
        rows.append(f"[[row{rng.choice(ROW_ATTRS)}]]{sep.join(cells)}"
                    f"[[/row]]")
    sep = rng.choice(["", " ", "\n", "\n\n"])
    body = sep.join(rows)
    if rng.random() < 0.12:
        body += rng.choice(["stray", " [[/row]]", " x "])
    if rng.random() < 0.08:
        body = rng.choice(["", " ", "no rows here"]) + body
    name = rng.choice(["table", "TABLE", "Table", "tablex", "tables"])
    return f"[[{name}{head}]]{body}[[/table]]"


def gen_adv(rng):
    s = adv_table(rng)
    r = rng.random()
    if r < 0.2:
        s = "before\n" + s
    elif r < 0.35:
        s = s + "\nafter"
    elif r < 0.45:
        s = s + "\n" + adv_table(rng)
    if rng.random() < 0.1:
        s = s.replace("[[/table]]", "", 1)
    return {"source": s}


def gen_mix(rng):
    frags = ["plain paragraph", "+ Head A",
             "|| a || b ||\n|| c || d ||",
             "||~ h ||\n|| x ||",
             "[[table]][[row]][[cell]]adv[[/cell]][[/row]][[/table]]",
             "[[div]]\n|| in || div ||\n[[/div]]",
             "[[collapsible]]\n|| in || coll ||\n[[/collapsible]]",
             "[[table]][[row]][[cell]][[div]]d[[/div]][[/cell]][[/row]][[/table]]",
             "* item one", ": term : def",
             "[[footnote]]note[[/footnote]] text",
             "|| [[ul]]\n[[li]]i[[/li]]\n[[/ul]] || cell ||",
             ""]
    s = "\n".join(rng.choice(frags) for _ in range(rng.randint(2, 6)))
    return {"source": s}


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261121
    rng = random.Random(seed)
    cases = []
    for i in range(170):
        cases.append({"id": f"fz-tab-{i:03d}", **gen_simple(rng)})
    for i in range(180):
        cases.append({"id": f"fz-adv-{i:03d}", **gen_adv(rng)})
    for i in range(150):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261121 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r310/ref-php && php harness/state-restricted.php {RULES}"],
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
