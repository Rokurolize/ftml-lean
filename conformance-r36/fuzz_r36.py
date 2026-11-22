#!/usr/bin/env python3
"""R3.6 fuzz differential: seeded random sources over the NOTES
family's shapes, run through the twenty-three-rule restricted PHP
oracle (WSL scratch copy) and the Lean R3.6 driver, compared with
this stage's compare.py.

Families:
  fz-fn-*    footnotes: multiple and nested notes, empty and
             whitespace bodies, whitespace runs before openers,
             unterminated and mixed-case forms, bodies spanning
             code, raw, math, and freelink placeholders.
  fz-fnb-*   footnoteblocks: before, between, after, absent, and
             duplicated blocks; title, empty-title, bogus, and
             placeholder-spanning attributes; notes whose bodies
             carry placeholders into the collection.
  fz-bib-*   bibliography blocks: definition lines (spacing
             variants, next-line values, empty bodies, duplicate,
             uppercase, and malformed labels), residual lines
             (blank, whitespace-only, whitespace runs), multiple
             and unterminated blocks, opener and closer lines
             that fail the line anchors.
  fz-bibc-*  citations: defined, undefined, forward, and
             duplicate-label citations; separator variants (space,
             tab, newline, double space); case variants; citations
             inside footnote bodies and bibliography bodies.
  fz-mix-*   placeholder-spanning mixtures: footnotes and entries
             holding code, raw, math, and iftags-gated content,
             with per-case tag arrays under both polarities.

Usage: fuzz_r36.py [seed]   (default 20261120)
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
                        "lean-ftml-conformance-r36")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,"
         "Freelink,Equationreference,Footnote,Footnoteitem,"
         "Footnoteblock,Bibitem,Bibliography,Bibcite")

TAG_POOL = ["alpha", "beta", "Alpha", ""]

NOTE_BODIES = ["note", "two words", "", " ", "  padded  ",
               "a [[code]]x[[/code]] b", "@@raw@@", "[[[page|lab]]]",
               "[[math]]\nm\n[[/math]] ", "multi\nline body",
               "((bibcite bell))", "[[footnote]]nested",
               "caf\u00e9 \u4e2d\u6587", "x" * 30]


def gen_fn(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        body = rng.choice(NOTE_BODIES)
        pre = rng.choice(["", " ", "\n", "  \n ", "x", "x ", "x\n"])
        form = rng.choice(["[[footnote]]{b}[[/footnote]]",
                           "[[footnote]]{b}[[/footnote]]",
                           "[[FootNote]]{b}[[/FootNote]]",
                           "[[footnote]]{b}[[/FootNote]]",
                           "[[footnote]]{b}"])
        parts.append(pre + form.format(b=body))
    s = "".join(parts)
    if rng.random() < 0.5:
        s += rng.choice(["", "\n[[footnoteblock]]", " tail",
                         "\n[[footnoteblock]]\n"])
    return {"source": s}


def gen_fnb(rng):
    notes = "".join(
        f"[[footnote]]{rng.choice(NOTE_BODIES)}[[/footnote]]"
        for _ in range(rng.randint(0, 3)))
    block = rng.choice([
        "[[footnoteblock]]", "[[footnoteblock title=\"Notes\"]]",
        "[[footnoteblock title=\"\"]]", "[[footnoteblock hide=\"1\"]]",
        "[[footnoteblock title=\"@@x@@\"]]",
        "[[footnoteblock bogus]]", "[[footnoteblock ]]",
        "[[footnoteblock]]", "[[FOOTNOTEBLOCK]]"])
    layout = rng.choice(["{b}\n{n}", "{n}\n{b}", "{n} mid {b}",
                         "{b}", "{n}", "{b}\n{n}\n{b}",
                         "pre {n}\n{b}\npost"])
    s = layout.format(n=notes, b=block)
    if not s.endswith("\n") and rng.random() < 0.3:
        s += "\n"
    return {"source": s}


BIB_LABELS = ["bell", "guy", "a", "b2", "BELL", "x-y", "x_y", "",
              "longlabel9"]


def bib_line(rng):
    lab = rng.choice(BIB_LABELS)
    val = rng.choice(["Value text.", "", " ", "Next  value  here",
                      "//ital// and **bold**", "[[[page]]]",
                      "@@raw@@", "((bibcite bell))"])
    form = rng.choice([": {l} : {v}", ": {l} : {v}", ":{l}: {v}",
                       ": {l}: {v}", ":  {l} : {v}", ": {l}  : {v}",
                       ": {l} :{v}", ": {l} :", ": {l} :\n{v}",
                       ": {l} : \n{v}"])
    return form.format(l=lab, v=val)


def gen_bib(rng):
    lines = []
    for _ in range(rng.randint(0, 4)):
        r = rng.random()
        if r < 0.55:
            lines.append(bib_line(rng))
        elif r < 0.7:
            lines.append(rng.choice(["residual text", "  spaced   out  ",
                                     "", "   ", "\t tabbed",
                                     "not : a : def",
                                     "[[footnote]]in bib[[/footnote]]"]))
        else:
            lines.append(bib_line(rng))
    body = "\n".join(lines)
    opener = rng.choice(["[[bibliography]]", "[[bibliography]]",
                         "[[bibliography title=\"Refs\"]]",
                         "[[bibliography title=\"\"]]",
                         "x[[bibliography]]", "[[Bibliography]]"])
    closer = rng.choice(["[[/bibliography]]", "[[/bibliography]]  ",
                         "[[/bibliography]] tail", "[[/BIBLIOGRAPHY]]",
                         ""])
    s = opener + "\n" + body + "\n" + closer
    if rng.random() < 0.3:
        s = "pre\n" + s
    if rng.random() < 0.2:
        s += "\n[[bibliography]]\n: z : Second block.\n[[/bibliography]]"
    case = {"source": s}
    if rng.random() < 0.3:
        case["tags"] = [rng.choice(TAG_POOL)]
    return case


def gen_bibc(rng):
    lab = rng.choice(["bell", "guy", "undef", "BELL", "a", ""])
    sep = rng.choice([" ", " ", "  ", "\t", "\n"])
    cite = f"((bibcite{sep}{lab}))"
    parts = []
    if rng.random() < 0.7:
        labs = rng.sample(["bell", "guy", "a"], rng.randint(1, 3))
        if rng.random() < 0.25:
            labs.append(labs[0])
        entries = "\n".join(f": {l} : Entry {l}." for l in labs)
        parts.append(f"[[bibliography]]\n{entries}\n[[/bibliography]]")
    parts.append(cite)
    if rng.random() < 0.3:
        parts.append(f"[[footnote]]note {cite}[[/footnote]]")
    s = "\n".join(parts) if rng.random() < 0.5 else " ".join(parts)
    return {"source": s}


def gen_mix(rng):
    frags = ["[[footnote]]n1[[/footnote]]",
             "[[footnote]]@@r@@[[/footnote]]",
             "[[footnote]][[code]]c[[/code]][[/footnote]]",
             "[[footnoteblock]]",
             "[[bibliography]]\n: bell : B.\n[[/bibliography]]",
             "((bibcite bell))", "((bibcite undef))",
             "[[iftags +alpha]][[footnote]]gated[[/footnote]][[/iftags]]",
             "[[iftags -alpha]][[footnote]]dropped[[/footnote]][[/iftags]]",
             "[[footnote]]((bibcite bell))[[/footnote]]",
             "text ", "\n", "[[math E]]\nx\n[[/math]] ",
             "[[[some-page|lab]]]"]
    s = "".join(rng.choice(frags) for _ in range(rng.randint(2, 6)))
    case = {"source": s}
    if rng.random() < 0.5:
        case["tags"] = [rng.choice(TAG_POOL)
                        for _ in range(rng.randint(0, 2))]
    return case


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261120
    rng = random.Random(seed)
    cases = []
    for i in range(110):
        cases.append({"id": f"fz-fn-{i:03d}", **gen_fn(rng)})
    for i in range(100):
        cases.append({"id": f"fz-fnb-{i:03d}", **gen_fnb(rng)})
    for i in range(130):
        cases.append({"id": f"fz-bib-{i:03d}", **gen_bib(rng)})
    for i in range(80):
        cases.append({"id": f"fz-bibc-{i:03d}", **gen_bibc(rng)})
    for i in range(80):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261120 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r36/ref-php && php harness/state-restricted.php {RULES}"],
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
