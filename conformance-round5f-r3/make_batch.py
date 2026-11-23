#!/usr/bin/env python3
"""Write a named sub-batch of cases.jsonl: make_batch.py OUT.jsonl ID [...]."""
import json
import sys

BASE = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5F-R3"
out, ids = sys.argv[1], sys.argv[2:]
rows = {r["id"]: r for r in (json.loads(l) for l in open(BASE + "/cases.jsonl", encoding="utf-8") if l.strip())}
with open(BASE + "/" + out, "w", encoding="utf-8") as f:
    for i in ids:
        f.write(json.dumps(rows[i], ensure_ascii=False) + "\n")
print(out, ids)
