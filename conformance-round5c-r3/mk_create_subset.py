#!/usr/bin/env python3
"""Derive a create-batch input from cases.jsonl, skipping IDs already handled.

Usage: python3 mk_create_subset.py SKIP_ID [SKIP_ID ...] > cases-create.jsonl
The full ledger-derived cases.jsonl remains the single source of truth; this
subset only avoids re-saving pages whose create already succeeded (or whose
source Wikidot normalized on save), because wikidot-probe create aborts on the
first unverifiable save.
"""
import json
import sys

BASE = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5C-R3"
skip = set(sys.argv[1:])
rows = [json.loads(line) for line in open(BASE + "/cases.jsonl", encoding="utf-8") if line.strip()]
for row in rows:
    if row["id"] in skip:
        continue
    print(json.dumps(row, ensure_ascii=False))
print(f"subset {len(rows) - len(skip)} of {len(rows)} cases (skipped {sorted(skip)})", file=sys.stderr)
