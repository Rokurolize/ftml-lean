#!/usr/bin/env python3
"""R3.7 fuzz differential: seeded random sources over the BLOCK
family's shapes, run through the twenty-six-rule restricted PHP
oracle (WSL scratch copy) and the Lean R3.7 driver, compared with
this stage's compare.py.

Families:
  fz-bq-*    blockquotes: runs of one to four levels, tight and
             spaced markers, no-space and bare-marker lines,
             whitespace-only lines inside runs, depth skips and
             drops, runs at document start, middle, and end,
             bodies carrying footnote, freelink, raw, and
             equation-reference placeholders, and the literal
             [[blockquote]] block forms beside real runs.
  fz-head-*  headings: levels one to six and the seven-plus
             non-matches, no-toc stars, space and tab runs after
             the prefix, empty and whitespace-only texts, texts
             carrying footnote, freelink, and math placeholders,
             repeated texts, headings adjacent to quotes and
             paragraphs.
  fz-toc-*   tocs: plain, floated, and titled forms (including
             a quoted ]] inside the title, empty and bogus
             tails), near misses (uppercase, tab separator,
             indented, mid-line, [[>toc]], [[*toc]]), multiple
             tocs, tocs before, between, and after headings,
             no-toc headings mixed in, headings inside quotes
             and iftags spans under both tag polarities.
  fz-mix-*   whole-document mixtures: quotes containing
             headings with a toc after them, a toc inside a
             quote run, footnotes inside headings, headings and
             quotes interleaved with paragraphs and math blocks.

Usage: fuzz_r37.py [seed]   (default 20261120)
Writes fuzz-cases[-sSEED].jsonl, fuzz-php[-sSEED].jsonl,
fuzz-lean[-sSEED].jsonl and comparison-fuzz[-sSEED].txt beside
itself; prints the comparison's summary lines.
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
                        "lean-ftml-conformance-r37")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
         "Freelink,Equationreference,Footnote,Footnoteitem,"
         "Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,"
         "Heading,Toc")

TAG_POOL = ["alpha", "beta", "Alpha", ""]

QUOTE_BODIES = ["text", "two words", "", " ", "  padded",
                "note[[footnote]]fn[[/footnote]] here",
                "[[[some-page|lab]]] link", "@@raw@@ body",
                "caf\u00e9 \u4e2d\u6587", "> nested literal",
                "x" * 24]


def quote_line(rng):
    level = rng.randint(1, 4)
    markers = ">" * level
    form = rng.random()
    body = rng.choice(QUOTE_BODIES)
    if form < 0.62:
        return f"{markers} {body}"
    if form < 0.72:
        return f"{markers}{body}"
    if form < 0.82:
        return markers
    if form < 0.92:
        return f"{markers} "
    return f"{markers}  {body}"


def gen_bq(rng):
    parts = []
    if rng.random() < 0.35:
        parts.append(rng.choice(["intro text", "+ Head", "para\nmore"]))
    for _ in range(rng.randint(1, 5)):
        parts.append(quote_line(rng))
        if rng.random() < 0.18:
            parts.append("")
    if rng.random() < 0.3:
        parts.append(rng.choice(["after text", "[[blockquote]]",
                                 "[[/blockquote]]", "+ Tail"]))
    s = "\n".join(parts)
    if rng.random() < 0.25:
        s += "\n"
    return {"source": s}


HEADING_TEXTS = ["Title", "Same", "", " ", "A [[footnote]]n[[/footnote]] B",
                 "[[[page|lab]]] link", "See ((ref)) eq",
                 "caf\u00e9 \u4e2d\u6587", "trail  ", "a]]b",
                 "x" * 20]


def heading_line(rng):
    level = rng.choice([1, 1, 2, 2, 3, 4, 5, 6, 7, 8])
    star = "*" if rng.random() < 0.25 else ""
    sep = rng.choice([" ", " ", "  ", "\t", " \t ", ""])
    text = rng.choice(HEADING_TEXTS)
    return f"{'+' * level}{star}{sep}{text}"


def gen_head(rng):
    parts = []
    for _ in range(rng.randint(1, 4)):
        r = rng.random()
        if r < 0.6:
            parts.append(heading_line(rng))
        elif r < 0.75:
            parts.append(rng.choice(["plain text", "", "> quote line",
                                     "[[math]]\nx\n[[/math]]"]))
        else:
            parts.append(heading_line(rng))
    s = "\n".join(parts)
    if rng.random() < 0.3:
        s = "lead\n" + s
    return {"source": s}


def gen_toc(rng):
    heads = []
    for _ in range(rng.randint(0, 4)):
        star = "*" if rng.random() < 0.2 else ""
        heads.append(f"{'+' * rng.randint(1, 3)}{star} "
                     f"{rng.choice(['Alpha', 'Beta', 'Same', 'G [[footnote]]n[[/footnote]]'])}")
    toc = rng.choice([
        "[[toc]]", "[[toc]]", "[[f<toc]]", "[[f>toc]]",
        "[[toc title=\"Contents\"]]", "[[toc title=\"\"]]",
        "[[toc title=\"a]]b\"]]", "[[toc bogus]]", "[[toc ]]",
        "[[TOC]]", "[[Toc]]", "[[toc\ttitle=\"x\"]]", "[[>toc]]",
        "[[*toc]]", " [[toc]]", "x [[toc]]", "[[toc]] tail",
        "[[toc]]", "[[toc]]"])
    layout = rng.choice(["{t}\n{h}", "{h}\n{t}", "{h}\n{t}\n{h}",
                         "{t}", "{h}", "{t}\n{h}\n{t}",
                         "pre\n{t}\n{h}\npost"])
    s = layout.format(t=toc, h="\n".join(heads))
    case = {"source": s}
    if rng.random() < 0.3:
        case["tags"] = [rng.choice(TAG_POOL)]
    return case


def gen_mix(rng):
    frags = ["+ Head A", "++ Head B", "+* Skip", "> quote line",
             ">> deep quote", "> head next\n+ In quote area",
             "[[toc]]", "[[f<toc title=\"T\"]]",
             "plain paragraph", "[[blockquote]]", "[[/blockquote]]",
             "[[footnote]]note[[/footnote]] text",
             "[[iftags +alpha]]\n+ Gated\n[[/iftags]]",
             "[[iftags -alpha]]\n+ Dropped\n[[/iftags]]",
             "[[math E]]\nx + y\n[[/math]]", "((E)) reference",
             "> + not a heading", ""]
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
    for i in range(130):
        cases.append({"id": f"fz-bq-{i:03d}", **gen_bq(rng)})
    for i in range(130):
        cases.append({"id": f"fz-head-{i:03d}", **gen_head(rng)})
    for i in range(130):
        cases.append({"id": f"fz-toc-{i:03d}", **gen_toc(rng)})
    for i in range(110):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261120 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r37/ref-php && php harness/state-restricted.php {RULES}"],
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
