#!/usr/bin/env python3
"""R3.1 fuzz differential: adversarial generated inputs through both
the restricted PHP reference (on WSL, via the loop's wsl-ssh route)
and the Lean driver, compared with compare.py's canonicalization.

Three families, all deterministic (seeded):
  fz-frame-*: whitespace/line-ending soup aimed at Prefilter's six
    steps (blank-line runs, lone and paired CRs, tabs, VT, spaces).
  fz-code-*:  assemblies of code-block fragments (nested and stray
    openers/closers, case variants, missing line starts).
  fz-attrs-*: code openers with hostile attribute strings aimed at
    getAttrs/stripslashes (unclosed quotes, backslashes, repeated
    keys, missing '="').
  fz-nest-*:  nested code blocks at line starts and mid-line,
    aimed at the (?R) recursion and its `^` gate.

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
LEAN_EXE = os.path.join(ROOT, "lean-ftml/.lake/build/bin/lean-ftml-conformance-r31")


def gen_frame(rng):
    pieces = []
    for _ in range(rng.randint(1, 14)):
        ch = rng.choices(
            ["\n", " ", "\t", "\r", "a", "ü", "\x0b", "b"],
            weights=[5, 4, 2, 1, 2, 1, 1, 1],
        )[0]
        pieces.append(ch * rng.randint(1, 5))
    return "".join(pieces)


def gen_code(rng):
    frags = [
        "[[code]]", "[[/code]]", "[[CODE]]", "[[/CODE]]", "[[code ",
        "]]", "x", "alpha", "\n", " ", "[[code type=\"php\"]]",
        "[[cod", "[[code]] ", " [[code]]", "\n\n", "beta gamma",
        "[[code]]\n", "[[/code]]\n", "\t",
    ]
    return "".join(rng.choice(frags) for _ in range(rng.randint(2, 10)))


def gen_attrs(rng):
    args = [
        ' type="x"', " type=php", ' a="1" b="2"', ' a="x\\"y"', " a=",
        ' ="v"', ' type="a" type="b"', " ", "\\", ' a="unclosed',
        ' foo bar="baz"', ' type="\\0"', ' a="s\\\\t"', ' a="v" ',
        ' a = "v"', '  spaced  =  "v"  ', ' a="1"a="2"', ' a="x" c',
        ' type="php" ', "\ttype=\"y\"", ' a="trailing\\"',
    ]
    arg = rng.choice(args)
    body = rng.choice(["body", "", "x\ny", "[[code]]inner[[/code]]"])
    tail = rng.choice([" ", "\n", ""])
    return "[[code" + arg + "]]" + body + "[[/code]]" + tail


def gen_nest(rng):
    """Nested code blocks at line starts and mid-line: exercises the
    (?R) recursion and its `^` gate (a recursive match can only
    start at a line start)."""
    def block(depth):
        body = ""
        for _ in range(rng.randint(0, 3)):
            r = rng.random()
            if depth < 3 and r < 0.35:
                body += block(depth + 1)
            elif r < 0.5:
                body += rng.choice(["\n", " ", "x"])
            else:
                body += rng.choice(["alpha", "[[/code]]", "[[code ", "]]", "\n"])
        tail = rng.choice([" ", "\n", " ", ""])
        return "[[code]]" + body + "[[/code]]" + tail
    parts = []
    for _ in range(rng.randint(1, 3)):
        parts.append(rng.choice(["", "\n", "pre ", "\npre\n"]))
        parts.append(block(0))
    return "".join(parts)


def main():
    seed = int(sys.argv[1]) if len(sys.argv) > 1 else 20261120
    rng = random.Random(seed)
    cases = []
    for i in range(150):
        cases.append({"id": f"fz-frame-{i:03d}", "source": gen_frame(rng)})
    for i in range(150):
        cases.append({"id": f"fz-code-{i:03d}", "source": gen_code(rng)})
    for i in range(80):
        cases.append({"id": f"fz-attrs-{i:03d}", "source": gen_attrs(rng)})
    for i in range(120):
        cases.append({"id": f"fz-nest-{i:03d}", "source": gen_nest(rng)})
    suffix = "" if seed == 20261120 else f"-s{seed}"
    cases_path = os.path.join(HERE, f"fuzz-cases{suffix}.jsonl")
    with open(cases_path, "w") as f:
        for c in cases:
            f.write(json.dumps(c) + "\n")
    blob = open(cases_path, "rb").read()

    php = subprocess.run(
        [WSL_SSH, "cd /tmp/r31/ref-php && php harness/state-restricted.php Prefilter,Delimiter,Code"],
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
