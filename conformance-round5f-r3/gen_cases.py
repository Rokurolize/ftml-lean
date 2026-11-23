#!/usr/bin/env python3
"""Derive cases.jsonl from the LEDGER.md SOURCE-BLOCK (single source of truth)."""
import json

BASE = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5F-R3"
LEDGER = BASE + "/LEDGER.md"
OUT = BASE + "/cases.jsonl"

text = open(LEDGER, encoding="utf-8").read()
block = text.split("```source-block", 1)[1].split("```", 1)[0]
rows = []
for line in block.splitlines():
    line = line.strip()
    if not line:
        continue
    rid, src_json = line.split("\t", 1)
    rows.append((rid.strip(), json.loads(src_json)))
with open(OUT, "w", encoding="utf-8") as f:
    for rid, src in rows:
        f.write(json.dumps({"id": rid, "source": src}, ensure_ascii=False) + "\n")
print(f"wrote {len(rows)} cases to {OUT}")
for rid, src in rows:
    print(rid, repr(src))
