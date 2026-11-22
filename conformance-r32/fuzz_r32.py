#!/usr/bin/env python3
"""R3.2 fuzz differential: adversarial generated inputs through
both the restricted PHP reference (on WSL, via the loop's wsl-ssh
route, six-rule list) and the Lean R3.2 driver, compared with this
directory's compare.py (which counts a case where both drivers
emit the unrepresentable-state error record as a pass).

Four families, all deterministic (seeded):
  fz-raw-*:  '@'-run assemblies aimed at Raw's scanner (opener and
    closer runs of every length, cross-line bodies, aborts).
  fz-old-*:  backtick assemblies aimed at Rawold's lazy body
    (runs, apostrophes in and around the body, near-misses).
  fz-form-*: form-block assemblies aimed at Form's backtracking
    matcher (separators, blank lines, case variants, unterminated
    and stray pieces).
  fz-mix-*:  mixtures with code blocks, aimed at the stage's
    byte-form obligation: code blocks inside and around raw spans,
    rawold bodies, and form blocks, including the shapes whose
    claimed texts span a code placeholder (both sides then emit
    the error record).

Writes fuzz-cases.jsonl, fuzz-php.jsonl, fuzz-lean.jsonl and
comparison-fuzz.txt next to this script (a non-default seed, given
as argv[1], writes the same names with a -s<seed> suffix). Exit
status is compare.py's.
"""

import json
import os
import random
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
WSL_SSH = os.path.expanduser("~/workspace/native-stack/bin/wsl-ssh.sh")
LEAN_EXE = os.path.join(ROOT, "lean-ftml/.lake/build/bin/lean-ftml-conformance-r32")
RULES = "Prefilter,Delimiter,Code,Form,Raw,Rawold"


def gen_raw(rng):
    frags = [
        "@@", "@", "@@@", "@@@@", "@@@@@", "@@@@@@", "x", " ", "\n",
        "ab", "@@\n@@", "@@x\n@@", "@@x\ny@@", "@@ ", " @@", "y@@",
        "@@x@@", "@@\n", "\n@@", "@@x", "x@@", "@@ü@@", "@@a b@@",
    ]
    return "".join(rng.choice(frags) for _ in range(rng.randint(2, 9)))


def gen_old(rng):
    frags = [
        "``", "`", "```", "````", "`````", "x", "'", " ", "\n",
        "``x``", "it's", "``a'b``", "`` ", "a``", "``ü``", "``a`b``",
        "''", "``a\nb``",
    ]
    return "".join(rng.choice(frags) for _ in range(rng.randint(2, 9)))


def gen_form(rng):
    frags = [
        "[[form]]\n", "[[form]]", "[[/form]]", "---\n", "---", "x\n",
        "\n", "[[FORM]]\n", "[[/FORM]]", "a", "", "[[form]] ",
        "\n---\n", "[[form]]\n\n", "name: x\n", " [[form]]\n",
        "[[form]] \n", "data:\n",
    ]
    return "".join(rng.choice(frags) for _ in range(rng.randint(2, 9)))


def gen_mix(rng):
    frags = [
        "[[code]]", "[[/code]]", "\n", "@@", "``", "[[form]]\n",
        "[[/form]]", "x", "@@raw@@", "``old``", "---\n", " ",
        "[[code]]\n", "\n[[/code]]", "@@a[[code]]", "[[/code]]b@@",
        "``a[[code]]x[[/code]]b``", "@@[[code]]x[[/code]]@@",
        "@@\n[[code]]x[[/code]]\n@@",
        "[[form]]\n[[code]]x[[/code]]\n[[/form]]",
        "[[form]]\na\n[[code]]x[[/code]]\nb\n[[/form]]",
        "``[[code]]x[[/code]]``", "@@@@", "````",
        "[[code type=\"css\"]]", "@@x@@``y``",
    ]
    return "".join(rng.choice(frags) for _ in range(rng.randint(2, 9)))


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261120
    rng = random.Random(seed)
    cases = []
    for i in range(140):
        cases.append({"id": f"fz-raw-{i:03d}", "source": gen_raw(rng)})
    for i in range(100):
        cases.append({"id": f"fz-old-{i:03d}", "source": gen_old(rng)})
    for i in range(100):
        cases.append({"id": f"fz-form-{i:03d}", "source": gen_form(rng)})
    for i in range(160):
        cases.append({"id": f"fz-mix-{i:03d}", "source": gen_mix(rng)})
    suffix = "" if seed == 20261120 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r32/ref-php && php harness/state-restricted.php {RULES}"],
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
