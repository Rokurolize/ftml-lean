#!/usr/bin/env python3
"""R3.15 regression slices: the R3.1 through R3.14 corpora
re-run with their own stage drivers (Lean executables built
from this worktree) against the current state driver on the
WSL scratch copy of this worktree's reference, compared with
this stage's compare.py. Case inputs are read from the
canonical record (~/workspace/ftml-lean-equivalence/,
read-only). The R3.4 through R3.14 slices are additionally
compared against their own stages' recorded restricted
outputs, so the accumulated protocol state is shown not to
move the pre-existing slices on their own records.

Slices: as in reg_r314.py (reg31 code, reg32 formraw,
reg33 module, reg34 next, reg35 link, reg36 notes, reg37
block, reg38 contain, reg39 list, reg310 table, reg311
para, reg312 inline1, reg313 inline2, each with its fuzz
slices), plus:
  reg314 inline3 corpus (455) + fuzz (500 x 2),
         rules ..,Tt,Superscript,Subscript,Typography,
         Tighten
         (plus the inline3 corpus against the R3.14 stage's
         recorded restricted outputs in canonical
         conformance-r314/)

Repointing note (the reg_r312 precedent for its R3.10
slice): in this worktree conformance-r3-prev/ is the R3.14
stage directory only, so the earlier slice inputs are read
from the canonical conformance-r3*/ directories instead of
from a prev-stage directory.

Writes reg<stage>-<name>-{php,lean}.jsonl, the .err
sidecars, and reg<stage>-<name>-comparison.txt beside
itself; prints summaries.
"""

import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
CANON = os.path.expanduser("~/workspace/ftml-lean-equivalence")
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
R39 = R38 + ",List,Deflist"
R310 = R39 + ",Table,Tableadv"
R311 = R310 + ",Image,Newline,Paragraph"
R312 = R311 + ",Url,Email,Mathinline,Interwiki"
R313 = R312 + ",Colortext,Strong,Emphasis,Underline,Strikethrough"
R314 = R313 + ",Tt,Superscript,Subscript,Typography,Tighten"

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
    ("reg38", "contain", f"{CANON}/conformance-r38/contain-all-cases.jsonl",
     R38, "lean-ftml-conformance-r38"),
    ("reg38", "fuzz", f"{CANON}/conformance-r38/fuzz-cases.jsonl",
     R38, "lean-ftml-conformance-r38"),
    ("reg38", "fuzz-s7", f"{CANON}/conformance-r38/fuzz-cases-s7.jsonl",
     R38, "lean-ftml-conformance-r38"),
    ("reg39", "list", f"{CANON}/conformance-r39/list-all-cases.jsonl",
     R39, "lean-ftml-conformance-r39"),
    ("reg39", "fuzz", f"{CANON}/conformance-r39/fuzz-cases.jsonl",
     R39, "lean-ftml-conformance-r39"),
    ("reg39", "fuzz-s7", f"{CANON}/conformance-r39/fuzz-cases-s7.jsonl",
     R39, "lean-ftml-conformance-r39"),
    ("reg310", "table", f"{CANON}/conformance-r310/table-all-cases.jsonl",
     R310, "lean-ftml-conformance-r310"),
    ("reg310", "fuzz", f"{CANON}/conformance-r310/fuzz-cases.jsonl",
     R310, "lean-ftml-conformance-r310"),
    ("reg310", "fuzz-s7", f"{CANON}/conformance-r310/fuzz-cases-s7.jsonl",
     R310, "lean-ftml-conformance-r310"),
    ("reg311", "para", f"{CANON}/conformance-r311/para-all-cases.jsonl",
     R311, "lean-ftml-conformance-r311"),
    ("reg311", "fuzz", f"{CANON}/conformance-r311/fuzz-cases.jsonl",
     R311, "lean-ftml-conformance-r311"),
    ("reg311", "fuzz-s7", f"{CANON}/conformance-r311/fuzz-cases-s7.jsonl",
     R311, "lean-ftml-conformance-r311"),
    ("reg312", "inline1", f"{CANON}/conformance-r312/inline1-all-cases.jsonl",
     R312, "lean-ftml-conformance-r312"),
    ("reg312", "fuzz", f"{CANON}/conformance-r312/fuzz-cases.jsonl",
     R312, "lean-ftml-conformance-r312"),
    ("reg312", "fuzz-s7", f"{CANON}/conformance-r312/fuzz-cases-s7.jsonl",
     R312, "lean-ftml-conformance-r312"),
    ("reg313", "inline2", f"{CANON}/conformance-r313/inline2-all-cases.jsonl",
     R313, "lean-ftml-conformance-r313"),
    ("reg313", "fuzz", f"{CANON}/conformance-r313/fuzz-cases.jsonl",
     R313, "lean-ftml-conformance-r313"),
    ("reg313", "fuzz-s7", f"{CANON}/conformance-r313/fuzz-cases-s7.jsonl",
     R313, "lean-ftml-conformance-r313"),
    ("reg314", "inline3", f"{CANON}/conformance-r314/inline3-all-cases.jsonl",
     R314, "lean-ftml-conformance-r314"),
    ("reg314", "fuzz", f"{CANON}/conformance-r314/fuzz-cases.jsonl",
     R314, "lean-ftml-conformance-r314"),
    ("reg314", "fuzz-s7", f"{CANON}/conformance-r314/fuzz-cases-s7.jsonl",
     R314, "lean-ftml-conformance-r314"),
]

RECORDED = [
    ("reg34", "next", f"{CANON}/conformance-r34/next-all-cases.jsonl",
     f"{CANON}/conformance-r34/restricted-next-states.jsonl",
     "lean-ftml-conformance-r34"),
    ("reg35", "link", f"{CANON}/conformance-r35/link-all-cases.jsonl",
     f"{CANON}/conformance-r35/restricted-link-states.jsonl",
     "lean-ftml-conformance-r35"),
    ("reg36", "notes", f"{CANON}/conformance-r36/notes-all-cases.jsonl",
     f"{CANON}/conformance-r36/restricted-notes-states.jsonl",
     "lean-ftml-conformance-r36"),
    ("reg37", "block", f"{CANON}/conformance-r37/block-all-cases.jsonl",
     f"{CANON}/conformance-r37/restricted-block-states.jsonl",
     "lean-ftml-conformance-r37"),
    ("reg38", "contain", f"{CANON}/conformance-r38/contain-all-cases.jsonl",
     f"{CANON}/conformance-r38/restricted-contain-states.jsonl",
     "lean-ftml-conformance-r38"),
    ("reg39", "list", f"{CANON}/conformance-r39/list-all-cases.jsonl",
     f"{CANON}/conformance-r39/restricted-list-states.jsonl",
     "lean-ftml-conformance-r39"),
    ("reg310", "table", f"{CANON}/conformance-r310/table-all-cases.jsonl",
     f"{CANON}/conformance-r310/restricted-table-states.jsonl",
     "lean-ftml-conformance-r310"),
    ("reg311", "para", f"{CANON}/conformance-r311/para-all-cases.jsonl",
     f"{CANON}/conformance-r311/restricted-para-states.jsonl",
     "lean-ftml-conformance-r311"),
    ("reg312", "inline1", f"{CANON}/conformance-r312/inline1-all-cases.jsonl",
     f"{CANON}/conformance-r312/restricted-inline1-states.jsonl",
     "lean-ftml-conformance-r312"),
    ("reg313", "inline2", f"{CANON}/conformance-r313/inline2-all-cases.jsonl",
     f"{CANON}/conformance-r313/restricted-inline2-states.jsonl",
     "lean-ftml-conformance-r313"),
    ("reg314", "inline3", f"{CANON}/conformance-r314/inline3-all-cases.jsonl",
     f"{CANON}/conformance-r314/restricted-inline3-states.jsonl",
     "lean-ftml-conformance-r314"),
]


def run_slice(stage, name, cases_path, rules, exe):
    blob = open(cases_path, "rb").read()
    php = subprocess.run(
        [WSL_SSH, f"cd /tmp/r315/ref-php && php harness/state-restricted.php {rules}"],
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
    for stage, name, cases_path, recorded_path, exe in RECORDED:
        r = recorded_check(stage, name, cases_path, recorded_path, exe)
        rc = rc or r
    return rc


if __name__ == "__main__":
    sys.exit(main())
