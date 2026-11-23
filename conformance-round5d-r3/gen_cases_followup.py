#!/usr/bin/env python3
"""Derive cases-followup.jsonl from the LEDGER.md SOURCE-BLOCK-B."""
import json

BASE = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5D-R3"
text = open(BASE + "/LEDGER.md", encoding="utf-8").read()
block = text.split("```source-block-b", 1)[1].split("```", 1)[0]
rows = []
for line in block.splitlines():
    line = line.strip()
    if not line:
        continue
    rid, src_json = line.split("\t", 1)
    rows.append((rid.strip(), json.loads(src_json)))
with open(BASE + "/cases-followup.jsonl", "w", encoding="utf-8") as f:
    for rid, src in rows:
        f.write(json.dumps({"id": rid, "source": src}, ensure_ascii=False) + "\n")
print("wrote", len(rows), "followup cases")
for rid, src in rows:
    print(rid, repr(src))
