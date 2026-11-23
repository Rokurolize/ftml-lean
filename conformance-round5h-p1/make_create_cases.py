#!/usr/bin/env python3
# Derive the create-time case list from the frozen pre-probe cases.jsonl by
# dropping only the save-normalized source that the standard tool could not
# verify on read-back (L-ADJ-S2CR: Wikidot normalizes the CR 0x0D on save).
# The ledger row is kept unchanged; the dropped id is recorded UNTESTABLE in
# verdicts.json and UNIT.md. cases.jsonl itself is never modified.
import json, os
U = os.path.dirname(os.path.abspath(__file__))
DROP = {"L-ADJ-S2CR"}
src = os.path.join(U, "cases.jsonl")
out = os.path.join(U, "scratch-create-cases.jsonl")
rows = [json.loads(x) for x in open(src, encoding="utf-8") if x.strip()]
kept = [r for r in rows if r["id"] not in DROP]
with open(out, "w", encoding="utf-8") as f:
    for r in kept:
        f.write(json.dumps(r, ensure_ascii=False) + "\n")
print("kept", len(kept), "of", len(rows), "->", out)
