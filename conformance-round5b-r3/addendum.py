#!/usr/bin/env python3
"""Derive cases-followup.jsonl from the LEDGER.md SOURCE-BLOCK-B."""
import json

LEDGER = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5B-R3/LEDGER.md"
OUT = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5B-R3/cases-followup.jsonl"

text = open(LEDGER, encoding="utf-8").read()
block = text.split("```source-block-b", 1)[1].split("```", 1)[0]
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
print(f"wrote {len(rows)} follow-up cases to {OUT}")
