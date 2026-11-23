#!/usr/bin/env python3
"""Derive wave-two and retry case files from the canonical cases.jsonl."""
import json
import os

BASE = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5H-R3"
rows = [json.loads(line) for line in open(os.path.join(BASE, "cases.jsonl"), encoding="utf-8") if line.strip()]


def emit(name, ids):
    out = os.path.join(BASE, name)
    with open(out, "w", encoding="utf-8") as f:
        for r in rows:
            if r["id"] in ids:
                f.write(json.dumps(r, ensure_ascii=False) + "\n")
    print(name, [r["id"] for r in rows if r["id"] in ids])


emit("cases2.jsonl", {f"R3H-{n:02d}" for n in range(11, 20)})
emit("cases_retry10.jsonl", {"R3H-10"})
emit("cases_retry19.jsonl", {"R3H-19"})
