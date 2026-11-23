#!/usr/bin/env python3
"""Split cases.jsonl into the savable main batch and the single soft-failing case."""
import json

BASE = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5F-R3"
rows = [json.loads(l) for l in open(BASE + "/cases.jsonl", encoding="utf-8") if l.strip()]
main = [r for r in rows if r["id"] != "R3F-05"]
solo = [r for r in rows if r["id"] == "R3F-05"]
for name, data in (("cases-main.jsonl", main), ("cases-r3f05.jsonl", solo)):
    with open(BASE + "/" + name, "w", encoding="utf-8") as f:
        for r in data:
            f.write(json.dumps(r, ensure_ascii=False) + "\n")
    print(name, len(data))
