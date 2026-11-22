#!/usr/bin/env python3
"""R3.4 fuzz differential: seeded random sources over the NEXT
family's shapes, run through the fourteen-rule restricted PHP
oracle (WSL scratch copy) and the Lean R3.4 driver, compared with
this stage's compare.py.

Families:
  fz-iftags-*  tag specs (+/-/bare pieces, comma and space
               separators, case variants, empty pieces), nested
               blocks, bodies holding later-family constructs;
               every case carries a "tags" array drawn from a
               small pool (mixed case, an empty tag included).
  fz-comment-* comments at line starts, indented, mid-line,
               multiple per line, unterminated, with opener-like
               bodies and constructs inside.
  fz-iframe-*  schemes in mixed case, segment shapes (empty
               segments, backslashes, quotes), attribute tails
               ending at early and late closers, unclosed forms.
  fz-date-*    numeric, negative, blank, and blank-with-attrs
               values across the three patterns, tabs and spaces,
               attribute sets including a literal "timestamp" key.
  fz-math-*    labels, attribute chunks in varied positions (the
               repeated-capture last chunk decides the visible
               type), nested blocks, adjacent closers, repeated
               labels (the equations map), and guard shapes
               (include/input braces) that must agree as
               PARSE-FATAL.
  fz-mix-*     placeholder-spanning mixtures: code, raw, form,
               and module constructs inside iftags bodies, math
               bodies, iframe tails, and date attribute values;
               comments hiding openers and closers; iftags
               wrapping math, date, and iframe blocks under both
               tag polarities.

Usage: fuzz_r34.py [seed]   (default 20261120)
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
                        "lean-ftml-conformance-r34")
RULES = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,"
         "Module654,Iftags,Comment,Iframe,Date,Math")

TAG_POOL = ["alpha", "beta", "Alpha", "scp", "tale", ""]
TEXTS = ["KEEP", "body text", "x", "", "a b c", "line1\nline2", " tail"]


def gen_tags(rng):
    n = rng.randint(0, 3)
    return [rng.choice(TAG_POOL) for _ in range(n)]


def gen_spec(rng):
    pieces = []
    for _ in range(rng.randint(0, 3)):
        t = rng.choice(TAG_POOL + ["gamma", "ALPHA"])
        pieces.append(rng.choice(["+", "-", ""]) + t)
    sep = rng.choice([",", ", ", " ", ",,", " , "])
    spec = sep.join(pieces)
    return rng.choice([" ", "  ", "\t"]) + spec if rng.random() < 0.9 else spec


def gen_iftags(rng):
    body = rng.choice(TEXTS + ["[[date 0]]", "[[math]]\nx\n[[/math]]",
                               "[!-- c --]", "[[iftags +alpha]]in[[/iftags]]"])
    s = "[[iftags" + (gen_spec(rng) if rng.random() < 0.95 else "") + "]]" \
        + body + "[[/iftags]]"
    if rng.random() < 0.3:
        s = rng.choice(["pre ", "pre\n", ""]) + s + rng.choice([" post", "\npost", ""])
    if rng.random() < 0.2:
        s = "[[iftags" + gen_spec(rng) + "]]" + s + "[[/iftags]]"
    return {"source": s, "tags": gen_tags(rng)}


def gen_comment(rng):
    frags = ["[!-- c --]", "[!----]", "[!--a--b--]", "[!-- unterm",
             "[!-- [[date 0]] --]", "[!--x--]", "text", " ", "  ", "\t",
             "\n", "[!-- multi\nline --]", "[!-- [[!-- --] --]"]
    s = "".join(rng.choice(frags) for _ in range(rng.randint(1, 5)))
    if rng.random() < 0.4:
        s = rng.choice(["  ", " ", "\t"]) + s
    return {"source": s}


def gen_iframe(rng):
    scheme = rng.choice(["http://", "https://", "HTTP://", "HtTpS://",
                         "ftp://", "mailto:", "MMS://", "news://",
                         "gopher://", "file://", "http:/", ""])
    host = rng.choice(["example.com", "a.b.c", "EXAMPLE.COM", "x"])
    path = rng.choice(["", "/a", "/a/b", "/a\\b/c", "//", "/a b",
                       "/a'b", '/a"b', "/x]]", "/"])
    tail = rng.choice(["", " width=\"300\"", "  height=\"2\" class=\"c\"",
                       " width=\"a]]b\"", "\nwidth=\"1\"", " x"])
    s = "[[iframe " + scheme + host + path + tail + "]]"
    if rng.random() < 0.25:
        s = rng.choice(["pre ", "\n"]) + s + rng.choice([" post", ""])
    if rng.random() < 0.15:
        s = s[:-2]  # unclosed
    return {"source": s}


def gen_date(rng):
    val = rng.choice(["0", "123", "-45", "007", "", " ", "abc", "1.5",
                      "12a", " 123"])
    attrs = rng.choice(["", " format=\"%Y\"", " format=\"a\" x=\"1\"",
                        " timestamp=\"9\"", " format=\"@@r@@\"",
                        " format=\"%d\" extra", "\tformat=\"%Y\""])
    s = "[[date " + val + attrs + "]]"
    if rng.random() < 0.2:
        s = "[[date\t" + val + attrs + "]]"
    if rng.random() < 0.2:
        s = rng.choice(["pre ", "x\n"]) + s + rng.choice([" post", ""])
    return {"source": s}


def gen_math(rng):
    label = rng.choice(["", " E", " eq_1", "  A2", " _x"])
    attrs = rng.choice(["", " type=\"eqnarray\"", " type=\"align\"",
                        " foo=\"x\" type=\"eqnarray\"",
                        " type=\"eqnarray\" foo=\"x\"",
                        " a=\"1\" b=\"2\" type=\"eqnarray\"",
                        " type=\"EQNARRAY\"", " type=\"eqnarray\"",
                        " bad-attr", " type=\"unterminated"])
    body = rng.choice(["x=1", "y", "\\alpha + \\beta", "a\nb",
                       "\\include{foo}", "\\input {bar}", "INCLUDE{x}",
                       "text \\includegraphics{z}", "e^{i\\pi}"])
    s = "[[math" + label + attrs + "]]\n" + body + "\n[[/math]]"
    tail = rng.choice(["", " ", "\n", "\n\nnext", " tail"])
    s += tail
    if rng.random() < 0.25:
        s = rng.choice(["", "\n", "pre\n", "x "]) + s
    if rng.random() < 0.2:
        # a second block, sometimes with the same label (equations map)
        s += "\n[[math" + rng.choice([label, " E2", ""]) + "]]\nz\n[[/math]] "
    if rng.random() < 0.15:
        # nested block inside the body
        s = "[[math]]\nouter [[math]]\ninner\n[[/math]] after\n[[/math]] "
    return {"source": s}


def gen_mix(rng):
    frags = ["[[code]]\nc\n[[/code]]\n", "@@r@@", "``o``",
             "[[form]]\nf\n[[/form]]\n", "[[module css]]\n",
             "[[iftags +alpha]]K[[/iftags]]", "[!-- [[/math]] --]",
             "[[math]]\nm\n[[/math]] ", "[[date 0 format=\"@@q@@\"]]",
             "[[iframe http://a.b/c width=\"@@w@@\"]]",
             "[[iftags -beta]]D[[/iftags]]", "text ", "\n",
             "[[math]]\n@@span@@\n[[/math]] ",
             "[!--x--]  \n", "  [!-- ind --]\n"]
    s = "".join(rng.choice(frags) for _ in range(rng.randint(2, 6)))
    return {"source": s, "tags": gen_tags(rng)}


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261120
    rng = random.Random(seed)
    cases = []
    for i in range(120):
        c = gen_iftags(rng)
        cases.append({"id": f"fz-iftags-{i:03d}", **c})
    for i in range(80):
        cases.append({"id": f"fz-comment-{i:03d}", **gen_comment(rng)})
    for i in range(80):
        cases.append({"id": f"fz-iframe-{i:03d}", **gen_iframe(rng)})
    for i in range(70):
        cases.append({"id": f"fz-date-{i:03d}", **gen_date(rng)})
    for i in range(80):
        cases.append({"id": f"fz-math-{i:03d}", **gen_math(rng)})
    for i in range(70):
        cases.append({"id": f"fz-mix-{i:03d}", **gen_mix(rng)})
    suffix = "" if seed == 20261120 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r34/ref-php && php harness/state-restricted.php {RULES}"],
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
