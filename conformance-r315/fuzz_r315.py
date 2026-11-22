#!/usr/bin/env python3
"""Seeded fuzz differential for the R3.15 (middle rules)
stage.

Generates 500 synthetic documents across the stage's
families -- Horiz shapes (dash runs of length zero to
twelve on their own lines, trailing and leading matter,
stacked and blank-separated runs, runs beside headings,
spans, lists, and code blocks), Separator shapes (the same
matrix in `=`, with `= ` Center lines mixed in), Clearfloat
shapes (tilde runs with the side byte absent, `>`, `<`,
doubled, or followed by matter), Break shapes (the literal
space-underscore-newline at line ends, doubled, tabbed, and
inside block lines), Center shapes (bodies from the fill
set including earlier rules' syntax, consecutive and
blank-separated lines, subject-start and unterminated
lines) -- plus whole-document mixtures across all five
families and the earlier ones.

Usage: fuzz_r315.py [seed]   (default 20261121)
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
sys.path.insert(0, HERE)
import run_oracle  # noqa: E402

LEAN_EXE = os.path.join(ROOT, "lean-ftml", ".lake", "build", "bin",
                        "lean-ftml-conformance-r315")
RULES = run_oracle.RULES_RESTRICTED
REMOTE = run_oracle.REMOTE_DIR

TEXT = ["text", "some words", "café", "a b c", "x", "para one",
        "**bold**", "[[span]]s[[/span]]", "+ Head", "* item",
        "> quoted", "|| cell ||"]


def doc(rng, lines):
    out = "\n".join(lines)
    if rng.random() < 0.7:
        out += "\n"
    return {"source": out}


def gen_run(rng, ch, extra_lines):
    lines = []
    for _ in range(rng.randint(1, 4)):
        r = rng.random()
        if r < 0.5:
            n = rng.randint(0, 12)
            line = ch * n
            if rng.random() < 0.15:
                line += rng.choice([" ", "\t", "x", " x"])
            if rng.random() < 0.1:
                line = " " + line
            lines.append(line)
        elif r < 0.75:
            lines.append(rng.choice(TEXT + extra_lines))
        else:
            lines.append("")
    return doc(rng, lines)


def gen_horiz(rng):
    return gen_run(rng, "-", ["= centered", "~~~~", "===="])


def gen_sep(rng):
    return gen_run(rng, "=", ["= centered", "= a = b", "----"])


def gen_cf(rng):
    lines = []
    for _ in range(rng.randint(1, 4)):
        r = rng.random()
        if r < 0.55:
            n = rng.randint(0, 10)
            line = "~" * n + rng.choice(
                ["", "", ">", "<", ">>", "><", ">x", " ", "> "])
            if rng.random() < 0.1:
                line = " " + line
            lines.append(line)
        elif r < 0.8:
            lines.append(rng.choice(TEXT + ["----", "===="]))
        else:
            lines.append("")
    return doc(rng, lines)


def gen_br(rng):
    lines = []
    for _ in range(rng.randint(1, 4)):
        r = rng.random()
        base = rng.choice(["a", "some text", "x y", "**b**",
                           "* item", "+ head", "[[span]]s[[/span]]"])
        if r < 0.5:
            lines.append(base + " _")
        elif r < 0.65:
            lines.append(base + " _ _")
        elif r < 0.75:
            lines.append(base + "  _")
        elif r < 0.85:
            lines.append(base + "\t_")
        else:
            lines.append(base)
    return doc(rng, lines)


BODIES = ["hello", "a = b", "", " ", "padded ", " lead",
          "**bold** text", "café", "http://example.com",
          "see [[footnote]]n[[/footnote]] here", "a _", "----",
          "~~~~", "x" * 30]


def gen_ce(rng):
    lines = []
    for _ in range(rng.randint(1, 4)):
        r = rng.random()
        if r < 0.55:
            lines.append("= " + rng.choice(BODIES))
        elif r < 0.7:
            lines.append(rng.choice(TEXT))
        elif r < 0.8:
            lines.append(rng.choice(
                ["=x", "== double", " = lead", "= "]))
        else:
            lines.append("")
    out = "\n".join(lines)
    if rng.random() < 0.75:
        out += "\n"
    if rng.random() < 0.2:
        out = "= first\n" + out
    return {"source": out}


def gen_mix(rng):
    pool = TEXT + ["----", "-----", "====", "~~~~", "~~~~>", "~~~~<",
                   "= centered", "= a _", "text _", "", "----",
                   "[[code]]\n----\n[[/code]]",
                   "[[div]]\n= in div\n[[/div]]",
                   "@@\n====\n@@", "x\n----\n= after hr"]
    lines = [rng.choice(pool) for _ in range(rng.randint(2, 6))]
    return doc(rng, lines)


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261121
    rng = random.Random(seed)
    cases = []
    for i in range(100):
        cases.append({"id": f"fz-hz-{i:03d}", **gen_horiz(rng)})
    for i in range(80):
        cases.append({"id": f"fz-sep-{i:03d}", **gen_sep(rng)})
    for i in range(80):
        cases.append({"id": f"fz-cf-{i:03d}", **gen_cf(rng)})
    for i in range(80):
        cases.append({"id": f"fz-br-{i:03d}", **gen_br(rng)})
    for i in range(100):
        cases.append({"id": f"fz-ce-{i:03d}", **gen_ce(rng)})
    for i in range(60):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261121 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [run_oracle.WSL_SSH,
         f"cd {REMOTE}/ref-php && php harness/state-restricted.php {RULES}"],
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
        [sys.executable, os.path.join(HERE, "compare.py"),
         php_path, lean_path],
        capture_output=True, text=True)
    out_path = os.path.join(HERE, f"comparison-fuzz{suffix}.txt")
    with open(out_path, "w") as f:
        f.write(cmp.stdout)
    sys.stdout.write("\n".join(cmp.stdout.splitlines()[-4:]) + "\n")
    return cmp.returncode


if __name__ == "__main__":
    sys.exit(main())
