#!/usr/bin/env python3
"""F-TABLEADV-1 conformance pins: the witness family in the R3.10 battery.

The fourteen frames are the exhaustive divergence family of the lane's grammar comparison (REPORT-TABLEADV-PROOF.md): one cell opener of each of the seven attribute shapes, the quote-trick nested table, and one of the two cell closers; the first member is the 74-byte witness. This script writes the cases as R3.10 restricted-pipeline cases, runs the local PHP 8.5.4 oracle from this tree's ref-php and the built Lean R3.10 driver, and compares their canonical states with this stage's compare.py. It writes witness-family-{cases,php,lean}.jsonl and witness-family-comparison.txt beside itself, and exits with the comparison's status.
"""

import json
import os
import subprocess
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
BIN = os.path.join(ROOT, "lean-ftml", ".lake", "build", "bin")
RESTRICTED = ("Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,"
              "Module,Module654,Iftags,Comment,Iframe,Date,Math,"
              "Concatlines,Freelink,Equationreference,Footnote,"
              "Footnoteitem,Footnoteblock,Bibitem,Bibliography,"
              "Bibcite,Blockquote,Heading,Toc,Span,Size,Div,"
              "Collapsible,Tabview,List,Deflist,Table,Tableadv")

OPENERS = [
    "[[cell]]", "[[hcell]]", '[[cell colspan="2"]]',
    '[[cell colspan="0"]]', '[[cell colspan="abc"]]',
    '[[cell align="center"]]', '[[cell foo="1"]]',
]
CLOSERS = ["[[/cell]]", "[[/hcell]]"]
MIDDLE = '[[table"]][[/table]]"]]'


def frames():
    for opener in OPENERS:
        for closer in CLOSERS:
            yield "[[table]][[row]]" + opener + MIDDLE + closer + "[[/row]][[/table]]"


def main():
    cases = [{"id": f"tableadv-witness-{i:02d}", "source": source}
             for i, source in enumerate(frames(), 1)]
    assert len(cases) == 14
    blob = "".join(json.dumps(c, ensure_ascii=False, separators=(",", ":")) + "\n"
                   for c in cases).encode()
    cases_path = os.path.join(HERE, "witness-family-cases.jsonl")
    with open(cases_path, "wb") as f:
        f.write(blob)
    php = subprocess.run(
        ["php", os.path.join(ROOT, "ref-php", "harness", "state-restricted.php"),
         RESTRICTED], input=blob, capture_output=True)
    php_path = os.path.join(HERE, "witness-family-php.jsonl")
    with open(php_path, "wb") as f:
        f.write(php.stdout)
    with open(os.path.join(HERE, "witness-family-php.err"), "wb") as f:
        f.write(php.stderr)
    if php.returncode != 0:
        print("PHP oracle failed", php.stderr.decode(errors="replace")[:400])
        return 2
    lean = subprocess.run([os.path.join(BIN, "lean-ftml-conformance-r310")],
                          input=blob, capture_output=True)
    lean_path = os.path.join(HERE, "witness-family-lean.jsonl")
    with open(lean_path, "wb") as f:
        f.write(lean.stdout)
    with open(os.path.join(HERE, "witness-family-lean.err"), "wb") as f:
        f.write(lean.stderr)
    if lean.returncode != 0:
        print("Lean driver failed", lean.stderr.decode(errors="replace")[:400])
        return 2
    cmp = subprocess.run([sys.executable, os.path.join(HERE, "compare.py"),
                          php_path, lean_path], capture_output=True, text=True)
    out_path = os.path.join(HERE, "witness-family-comparison.txt")
    with open(out_path, "w") as f:
        f.write(cmp.stdout)
    print("".join(cmp.stdout.splitlines(True)[-3:]), end="")
    return cmp.returncode


if __name__ == "__main__":
    sys.exit(main())
