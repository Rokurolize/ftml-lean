#!/usr/bin/env python3
"""R4.2 corpus assembly (coordinator-pattern, cf. conformance-capstone/
pooled_run.py): concatenate the family's battery files in order,
dedupe by id with first occurrence winning, and write the assembled
corpus plus a provenance record.

Family sources (the brief's five batteries; para/block/contain are
the R2 stage corpora under conformance-refphp/, middle/middle2 are
the R3.15/R3.16 stage corpora in the canonical tree, whose rules are
exactly this family's Center/Horiz/Separator/Clearfloat/Break and
Divalign/Note):

  para    conformance-refphp/para/paragraph/battery.jsonl
          conformance-refphp/para/newline/battery.jsonl
          conformance-refphp/para/xbattery.jsonl
          conformance-refphp/para/xbattery2.jsonl
  block   conformance-refphp/block/blockquote/battery.jsonl
          conformance-refphp/block/xbattery.jsonl
  contain conformance-refphp/contain/xbattery.jsonl
  middle  conformance-r315/middle-all-cases.jsonl   (canonical tree)
  middle2 conformance-r316/middle2-all-cases.jsonl  (canonical tree)

Also assembles the R4.1 regression corpus (the 365-case NOTES battery
set of REPORT-R4.md section 3) from conformance-refphp/notes/.

Outputs (this directory):
  family-cases.jsonl, family-provenance.json,
  notes365-cases.jsonl, notes365-provenance.json
"""

import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
WORKTREE = os.path.dirname(HERE)
CANON = os.path.join(os.path.dirname(WORKTREE), "ftml-lean-equivalence")

FAMILY_SOURCES = [
    ("para", "conformance-refphp/para/paragraph/battery.jsonl", WORKTREE),
    ("para", "conformance-refphp/para/newline/battery.jsonl", WORKTREE),
    ("para", "conformance-refphp/para/xbattery.jsonl", WORKTREE),
    ("para", "conformance-refphp/para/xbattery2.jsonl", WORKTREE),
    ("block", "conformance-refphp/block/blockquote/battery.jsonl", WORKTREE),
    ("block", "conformance-refphp/block/xbattery.jsonl", WORKTREE),
    ("contain", "conformance-refphp/contain/xbattery.jsonl", WORKTREE),
    ("middle", "conformance-r315/middle-all-cases.jsonl", CANON),
    ("middle2", "conformance-r316/middle2-all-cases.jsonl", CANON),
]

NOTES_SOURCES = [
    ("notes", "conformance-refphp/notes/footnote/battery.jsonl", WORKTREE),
    ("notes", "conformance-refphp/notes/footnoteitem/battery.jsonl", WORKTREE),
    ("notes", "conformance-refphp/notes/footnoteblock/battery.jsonl", WORKTREE),
    ("notes", "conformance-refphp/notes/bibitem/battery.jsonl", WORKTREE),
    ("notes", "conformance-refphp/notes/bibliography/battery.jsonl", WORKTREE),
    ("notes", "conformance-refphp/notes/bibcite/battery.jsonl", WORKTREE),
    ("notes", "conformance-refphp/notes/xbattery.jsonl", WORKTREE),
    ("notes", "conformance-refphp/notes/audit/state-leak-battery.jsonl", WORKTREE),
]


def read_jsonl(path):
    with open(path, encoding="utf-8") as f:
        return [json.loads(line) for line in f if line.strip()]


def assemble(sources, out_name, prov_name):
    pool = {}
    provenance = {}
    per_source = {}
    for battery, rel, base in sources:
        path = os.path.join(base, rel)
        n_in = n_new = 0
        for rec in read_jsonl(path):
            n_in += 1
            cid = rec["id"]
            if cid not in pool:
                pool[cid] = rec
                provenance[cid] = battery + ":" + rel
                n_new += 1
        per_source[rel] = (battery, n_in, n_new)
    cases = [pool[cid] for cid in sorted(pool)]
    out_path = os.path.join(HERE, out_name)
    with open(out_path, "w", encoding="utf-8") as f:
        for rec in cases:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    with open(os.path.join(HERE, prov_name), "w", encoding="utf-8") as f:
        json.dump({"per_source": {rel: {"battery": b, "lines_in": i, "new_ids": n}
                                  for rel, (b, i, n) in per_source.items()},
                   "total": len(cases),
                   "provenance": provenance}, f, indent=1, sort_keys=True)
    print(f"{out_name}: {len(cases)} cases")
    for rel, (b, i, n) in per_source.items():
        print(f"  [{b}] {rel}: {i} in, {n} new")
    return len(cases)


def main():
    n_family = assemble(FAMILY_SOURCES, "family-cases.jsonl",
                        "family-provenance.json")
    n_notes = assemble(NOTES_SOURCES, "notes365-cases.jsonl",
                       "notes365-provenance.json")
    print(f"family corpus: {n_family} cases; notes regression corpus: "
          f"{n_notes} cases")
    if n_notes != 365:
        print("WARNING: notes corpus is not 365 cases", file=sys.stderr)
        sys.exit(1)


if __name__ == "__main__":
    main()
