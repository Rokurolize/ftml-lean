#!/usr/bin/env python3
"""R3.3 fuzz differential: adversarial generated inputs through
both the restricted PHP reference (on WSL, via the loop's wsl-ssh
route, nine-rule list) and the Lean R3.3 driver, compared with
this directory's compare.py (the R3.3 copy: $bytes values compare
by content; an error record on either side is a failure).

Three families, all deterministic (seeded):
  fz-mod-*:  structured module/module654 block assemblies aimed
    at the shared opener head, the two tails, the two body
    groups, and Module's defense: name charset edges (leading
    digit, slash, hyphen, uppercase, empty, dotted, multibyte),
    attribute areas with early `]]`, newlines, tabs, and nested
    openers; tails with spaces, tabs, CR, junk, or nothing;
    bodies empty, whitespace, nested, extra-closed, case-varied
    closers, pseudo-closers, and unterminated blocks.
  fz-pre-*:  module654 openers aimed at Modulepre: case variants
    of the literal, midline and indented placements, bodies with
    and without closers, several openers per page.
  fz-mix-*:  fragment mixtures with code, form, and raw
    constructs inside module bodies and attribute areas — the
    byte-form obligation shapes, whose claimed module_body and
    attr values span earlier placeholders and cross the wire
    under the $bytes encoding.

Writes fuzz-cases.jsonl, fuzz-php.jsonl, fuzz-lean.jsonl and
comparison-fuzz.txt next to this script (a non-default seed,
given as argv[1], writes the same names with a -s<seed> suffix).
Exit status is compare.py's.
"""

import json
import os
import random
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
WSL_SSH = os.path.expanduser("~/workspace/native-stack/bin/wsl-ssh.sh")
LEAN_EXE = os.path.join(ROOT, "lean-ftml/.lake/build/bin/lean-ftml-conformance-r33")
RULES = "Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654"

NAMES = ["css", "CSS", "Rate", "9lives", "a/b-c_d", "x", "listpages",
         "UnknownModuleX", "", "a.b", "é", "long-module-name_1/2",
         "trailing-", "-leading", "_under"]
ATTRS = ["", " ", "  foo=bar", "\tfoo", " a]]b", " \n ", ' category="x"',
         " @@x@@ ", " [[code]]y[[/code]] ", "\t", "  a  b  "]
TAILS = ["\n", " \n", "\t\n", "  \t \n", "", "\r\n", " x\n", "\n\n"]
BODIES = ["", "body", " body ", "\n", "a\nb",
          "[[module inner]]\nx\n[[/module]]",
          "[[module654 inner]]\nx\n[[/module]]",
          "[[code]]\ny\n[[/code]]", "@@raw@@",
          "[[/module]]", "[[/MODULE]]", "[[/module654]]",
          "[[module", "pre [[/module]] post"]
CLOSERS = ["[[/module]]", "[[/MODULE]]", "[[/Module]]", ""]


def gen_block(rng):
    lit = rng.choice(["[[module", "[[module654", "[[MODULE",
                      "[[Module", "[[module654", "[[module"])
    sep = rng.choice([" ", "  ", "\t", " \t"])
    s = lit + sep + rng.choice(NAMES) + rng.choice(ATTRS) + "]]"
    s += rng.choice(TAILS)
    s += rng.choice(BODIES)
    if rng.random() < 0.8:
        s += rng.choice(CLOSERS)
    if rng.random() < 0.3:
        s += "\n" + rng.choice(CLOSERS)
    return s


def gen_mod(rng):
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(gen_block(rng))
        parts.append(rng.choice(["\n", "\ntext\n", "", "\n\n"]))
    return "".join(parts)


def gen_pre(rng):
    frags = ["[[module654 css]]", "[[MODULE654 css]]", "[[Module654 Rate]]",
             "[[module654 x]]\nbody\n[[/module]]", "x [[module654 css]]",
             " [[module654 css]]", "[[module654]]", "[[module654 ]]",
             "[[module654 9lives]]\n[[/module]]", "text\n", "\n",
             "[[module654 a/b]]\n", "[[/module]]\n", "[[module css]]\n"]
    return "".join(rng.choice(frags) for _ in range(rng.randint(2, 7)))


def gen_mix(rng):
    frags = ["[[module css]]\n", "[[module654 rate]]\n", "[[/module]]\n",
             "[[code]]\nc\n[[/code]]\n", "@@r@@", "[[form]]\nf\n[[/form]]\n",
             "``o``", "text ", "\n", "[[module x @@a@@]]\n",
             "[[module654 y [[code]]z[[/code]]]]\n", " body ",
             "[[module inner]]\n", "[[module654 inner]]\n"]
    return "".join(rng.choice(frags) for _ in range(rng.randint(3, 10)))


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261120
    rng = random.Random(seed)
    cases = []
    for i in range(200):
        cases.append({"id": f"fz-mod-{i:03d}", "source": gen_mod(rng)})
    for i in range(100):
        cases.append({"id": f"fz-pre-{i:03d}", "source": gen_pre(rng)})
    for i in range(200):
        cases.append({"id": f"fz-mix-{i:03d}", "source": gen_mix(rng)})
    suffix = "" if seed == 20261120 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r33/ref-php && php harness/state-restricted.php {RULES}"],
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
