#!/usr/bin/env python3
"""R3.9 regression slices: the R3.1 through R3.8 corpora re-run
with their own stage drivers (Lean executables built from this
worktree) against the current state driver on the WSL scratch
copy of this worktree's reference, compared with this stage's
compare.py. Case inputs are read from the canonical record
(~/workspace/ftml-lean-equivalence/, read-only) and from this
worktree's conformance-r3-prev/ (the R3.8 stage directory), as
in the earlier stages' regression practice. The R3.4, R3.5,
R3.6, R3.7, and R3.8 slices are additionally compared against
their own stages' recorded restricted outputs, so the
accumulated protocol state is shown not to move the
pre-existing slices on their own records (fields a record
lacks read as their empty values).

Slices:
  reg31  code battery (68) + smoke (9) + fuzz (500 x 2 seeds),
         rules Prefilter,Delimiter,Code
  reg32  form/raw/rawold battery (68) + smoke (9) + fuzz (500 x 2),
         rules ..,Form,Raw,Rawold
  reg33  module corpus (204) + fuzz (500 x 2),
         rules ..,Modulepre,Module,Module654
  reg34  next corpus (382) + fuzz (500 x 2),
         rules ..,Iftags,Comment,Iframe,Date,Math
         (plus the next corpus against the R3.4 stage's recorded
         restricted outputs in the canonical record)
  reg35  link corpus (221) + fuzz (500 x 2),
         rules ..,Concatlines,Freelink,Equationreference
         (plus the link corpus against the R3.5 stage's recorded
         restricted outputs in the canonical record)
  reg36  notes corpus (367) + fuzz (500 x 2),
         rules ..,Footnote,Footnoteitem,Footnoteblock,Bibitem,
         Bibliography,Bibcite
         (plus the notes corpus against the R3.6 stage's recorded
         restricted outputs in the canonical conformance-r36/;
         this worktree's conformance-r3-prev/ is the R3.8 stage
         directory, so the R3.6 inputs are read from canonical,
         where the R3.6 stage record lives)
  reg37  block corpus (206) + fuzz (500 x 2),
         rules ..,Blockquote,Heading,Toc
         (plus the block corpus against the R3.7 stage's recorded
         restricted outputs in the canonical conformance-r37/;
         in this worktree conformance-r3-prev/ is the R3.8 stage
         directory, so the R3.7 inputs are read from canonical,
         where the R3.7 stage record lives)
  reg38  contain corpus (372) + fuzz (500 x 2),
         rules ..,Span,Size,Div,Collapsible,Tabview
         (plus the contain corpus against the R3.8 stage's
         recorded restricted outputs in conformance-r3-prev/)

Writes reg<stage>-<name>-{php,lean}.jsonl, the .err sidecars, and
reg<stage>-<name>-comparison.txt beside itself; prints summaries.
"""

import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
CANON = os.path.expanduser("~/workspace/ftml-lean-equivalence")
PREV = os.path.join(ROOT, "conformance-r3-prev")
WSL_SSH = os.path.expanduser("~/workspace/native-stack/bin/wsl-ssh.sh")
BIN = os.path.join(ROOT, "lean-ftml", ".lake", "build", "bin")

R31 = "Prefilter,Delimiter,Code"
R32 = R31 + ",Form,Raw,Rawold"
R33 = R32 + ",Modulepre,Module,Module654"
R34 = R33 + ",Iftags,Comment,Iframe,Date,Math"
R35 = R34 + ",Concatlines,Freelink,Equationreference"
R36 = R35 + ",Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite"
R37 = R36 + ",Blockquote,Heading,Toc"
R38 = R37 + ",Span,Size,Div,Collapsible,Tabview"

SLICES = [
    ("reg31", "code", f"{CANON}/conformance-refphp/code/battery.jsonl",
     R31, "lean-ftml-conformance-r31"),
    ("reg31", "smoke", f"{CANON}/conformance-r3/smoke-cases.jsonl",
     R31, "lean-ftml-conformance-r31"),
    ("reg31", "fuzz", f"{CANON}/conformance-r3/fuzz-cases.jsonl",
     R31, "lean-ftml-conformance-r31"),
    ("reg31", "fuzz-s7", f"{CANON}/conformance-r3/fuzz-cases-s7.jsonl",
     R31, "lean-ftml-conformance-r31"),
    ("reg32", "formraw", f"{CANON}/conformance-r33/formraw-cases.jsonl",
     R32, "lean-ftml-conformance-r32"),
    ("reg32", "smoke", f"{CANON}/conformance-r33/smoke-cases.jsonl",
     R32, "lean-ftml-conformance-r32"),
    ("reg32", "fuzz", f"{CANON}/conformance-r34/reg32-fuzz-cases.jsonl",
     R32, "lean-ftml-conformance-r32"),
    ("reg32", "fuzz-s7", f"{CANON}/conformance-r34/reg32-fuzz-cases-s7.jsonl",
     R32, "lean-ftml-conformance-r32"),
    ("reg33", "module", f"{CANON}/conformance-r33/module-all-cases.jsonl",
     R33, "lean-ftml-conformance-r33"),
    ("reg33", "fuzz", f"{CANON}/conformance-r33/fuzz-cases.jsonl",
     R33, "lean-ftml-conformance-r33"),
    ("reg33", "fuzz-s7", f"{CANON}/conformance-r33/fuzz-cases-s7.jsonl",
     R33, "lean-ftml-conformance-r33"),
    ("reg34", "next", f"{CANON}/conformance-r34/next-all-cases.jsonl",
     R34, "lean-ftml-conformance-r34"),
    ("reg34", "fuzz", f"{CANON}/conformance-r34/fuzz-cases.jsonl",
     R34, "lean-ftml-conformance-r34"),
    ("reg34", "fuzz-s7", f"{CANON}/conformance-r34/fuzz-cases-s7.jsonl",
     R34, "lean-ftml-conformance-r34"),
    ("reg35", "link", f"{CANON}/conformance-r35/link-all-cases.jsonl",
     R35, "lean-ftml-conformance-r35"),
    ("reg35", "fuzz", f"{CANON}/conformance-r35/fuzz-cases.jsonl",
     R35, "lean-ftml-conformance-r35"),
    ("reg35", "fuzz-s7", f"{CANON}/conformance-r35/fuzz-cases-s7.jsonl",
     R35, "lean-ftml-conformance-r35"),
    ("reg36", "notes", f"{CANON}/conformance-r36/notes-all-cases.jsonl",
     R36, "lean-ftml-conformance-r36"),
    ("reg36", "fuzz", f"{CANON}/conformance-r36/fuzz-cases.jsonl",
     R36, "lean-ftml-conformance-r36"),
    ("reg36", "fuzz-s7", f"{CANON}/conformance-r36/fuzz-cases-s7.jsonl",
     R36, "lean-ftml-conformance-r36"),
    ("reg37", "block", f"{CANON}/conformance-r37/block-all-cases.jsonl",
     R37, "lean-ftml-conformance-r37"),
    ("reg37", "fuzz", f"{CANON}/conformance-r37/fuzz-cases.jsonl",
     R37, "lean-ftml-conformance-r37"),
    ("reg37", "fuzz-s7", f"{CANON}/conformance-r37/fuzz-cases-s7.jsonl",
     R37, "lean-ftml-conformance-r37"),
    ("reg38", "contain", f"{PREV}/contain-all-cases.jsonl",
     R38, "lean-ftml-conformance-r38"),
    ("reg38", "fuzz", f"{PREV}/fuzz-cases.jsonl",
     R38, "lean-ftml-conformance-r38"),
    ("reg38", "fuzz-s7", f"{PREV}/fuzz-cases-s7.jsonl",
     R38, "lean-ftml-conformance-r38"),
]


def run_slice(stage, name, cases_path, rules, exe):
    blob = open(cases_path, "rb").read()
    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r39/ref-php && php harness/state-restricted.php {rules}"],
        input=blob, capture_output=True)
    php_path = os.path.join(HERE, f"{stage}-{name}-php.jsonl")
    open(php_path, "wb").write(php.stdout)
    open(os.path.join(HERE, f"{stage}-{name}-php.err"), "wb").write(php.stderr)
    if php.returncode != 0:
        print(f"{stage}-{name}: PHP DRIVER FAILED")
        return 2
    lean = subprocess.run([os.path.join(BIN, exe)], input=blob,
                          capture_output=True)
    lean_path = os.path.join(HERE, f"{stage}-{name}-lean.jsonl")
    open(lean_path, "wb").write(lean.stdout)
    open(os.path.join(HERE, f"{stage}-{name}-lean.err"), "wb").write(lean.stderr)
    if lean.returncode != 0:
        print(f"{stage}-{name}: LEAN DRIVER FAILED")
        return 2
    cmp = subprocess.run(
        [sys.executable, os.path.join(HERE, "compare.py"), php_path, lean_path],
        capture_output=True, text=True)
    out_path = os.path.join(HERE, f"{stage}-{name}-comparison.txt")
    with open(out_path, "w") as f:
        f.write(cmp.stdout)
    tail = " | ".join(cmp.stdout.splitlines()[-2:])
    print(f"{stage}-{name}: {tail}")
    return cmp.returncode


def recorded_check(stage, name, cases_path, recorded_path, exe):
    blob = open(cases_path, "rb").read()
    lean = subprocess.run([os.path.join(BIN, exe)], input=blob,
                          capture_output=True)
    lean_path = os.path.join(HERE, f"{stage}-{name}-recorded-lean.jsonl")
    open(lean_path, "wb").write(lean.stdout)
    cmp = subprocess.run(
        [sys.executable, os.path.join(HERE, "compare.py"),
         recorded_path, lean_path],
        capture_output=True, text=True)
    with open(os.path.join(HERE, f"{stage}-{name}-recorded-comparison.txt"),
              "w") as f:
        f.write(cmp.stdout)
    tail = " | ".join(cmp.stdout.splitlines()[-2:])
    print(f"{stage}-{name}-recorded: {tail}")
    return cmp.returncode


def main():
    rc = 0
    for stage, name, cases_path, rules, exe in SLICES:
        r = run_slice(stage, name, cases_path, rules, exe)
        rc = rc or r
    rc = rc or recorded_check(
        "reg34", "next", f"{CANON}/conformance-r34/next-all-cases.jsonl",
        f"{CANON}/conformance-r34/restricted-next-states.jsonl",
        "lean-ftml-conformance-r34")
    rc = rc or recorded_check(
        "reg35", "link", f"{CANON}/conformance-r35/link-all-cases.jsonl",
        f"{CANON}/conformance-r35/restricted-link-states.jsonl",
        "lean-ftml-conformance-r35")
    rc = rc or recorded_check(
        "reg36", "notes", f"{CANON}/conformance-r36/notes-all-cases.jsonl",
        f"{CANON}/conformance-r36/restricted-notes-states.jsonl",
        "lean-ftml-conformance-r36")
    rc = rc or recorded_check(
        "reg37", "block", f"{CANON}/conformance-r37/block-all-cases.jsonl",
        f"{CANON}/conformance-r37/restricted-block-states.jsonl",
        "lean-ftml-conformance-r37")
    rc = rc or recorded_check(
        "reg38", "contain", f"{PREV}/contain-all-cases.jsonl",
        f"{PREV}/restricted-contain-states.jsonl",
        "lean-ftml-conformance-r38")
    return rc


if __name__ == "__main__":
    sys.exit(main())
