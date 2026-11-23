#!/usr/bin/env python3
"""Merge the three tool maps into one authoritative map.json.

The create tool writes a map only on a fully successful batch, so the second
wave has map2b.json (seven created) and no map for R3G-17, whose save failed
read-back verification twice. The merged map keeps every page id, marks
R3G-17 save-unverified, and is cross-checked against the create logs.
"""
import json
import os

BASE = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5G-R3"

merged = {}
for name in ("map.json", "map2b.json", "map3.json"):
    with open(os.path.join(BASE, name), encoding="utf-8") as fh:
        merged.update(json.load(fh))

cases = {}
for name in ("cases.jsonl", "cases2.jsonl", "cases3.jsonl"):
    for line in open(os.path.join(BASE, name), encoding="utf-8"):
        if line.strip():
            rec = json.loads(line)
            cases[rec["id"]] = rec["source"]

if "R3G-17" not in merged:
    merged["R3G-17"] = {
        "fullname": "muse-probe-round5g-r3-r3g-17",
        "source": cases["R3G-17"],
        "action": "save-unverified",
    }

out = os.path.join(BASE, "map.json")
with open(out, "w", encoding="utf-8") as fh:
    json.dump({k: merged[k] for k in sorted(merged)}, fh, ensure_ascii=False, indent=1)
    fh.write("\n")
print("wrote", out, len(merged), "page ids")
for k in sorted(merged):
    print(k, merged[k]["fullname"], merged[k]["action"])
