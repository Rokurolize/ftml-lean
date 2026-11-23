#!/usr/bin/env python3
"""Reconstruct map.json from create-log attestations plus the canonical cases.jsonl.

The wikidot-probe create tool writes its map only when a whole batch succeeds,
and both waves aborted on a save read-back failure. This script rebuilds the
authoritative map for all 19 ids: created pages take the fullname attested in
create.log / create2.log, and the two save-unverified pages are marked so the
comparison grades them UNTESTABLE rather than CLEAR or DIFF.
"""
import json
import os
import re

BASE = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5H-R3"
PREFIX = "muse-probe-round5h-r3-"

cases = {}
for line in open(os.path.join(BASE, "cases.jsonl"), encoding="utf-8"):
    if line.strip():
        rec = json.loads(line)
        cases[rec["id"]] = rec["source"]

created = {}
for name in ("create.log", "create2.log"):
    for line in open(os.path.join(BASE, name), encoding="utf-8"):
        m = re.match(r"^(\S+) -> (\S+) \(created\)\s*$", line)
        if m:
            created[m.group(1)] = m.group(2)

save_unverified = {"R3H-10", "R3H-19"}
merged = {}
for rid in sorted(cases):
    merged[rid] = {
        "fullname": created.get(rid, PREFIX + rid.lower()),
        "source": cases[rid],
        "action": "save-unverified" if rid in save_unverified else "created",
    }

out = os.path.join(BASE, "map.json")
with open(out, "w", encoding="utf-8") as fh:
    json.dump(merged, fh, ensure_ascii=False, indent=1)
    fh.write("\n")
print("wrote", out, len(merged), "page ids;", len(created), "created;", len(save_unverified), "save-unverified")
for rid in sorted(merged):
    print(rid, merged[rid]["fullname"], merged[rid]["action"])
