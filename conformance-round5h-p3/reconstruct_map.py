#!/usr/bin/env python3
"""R5H-P3: reconstruct the full create map deterministically from cases.jsonl (source of truth)."""
import json, os, re
HERE = os.path.dirname(os.path.abspath(__file__))
PREFIX = "muse-probe-round5h-p3-"
def slugify(case_id):
    return re.sub(r"[^a-z0-9]+", "-", str(case_id).lower()).strip("-")
action = {}
for fn in ("create.out", "create-rest.out", "create-nl11.out", "create-nl17.out"):
    p = os.path.join(HERE, fn)
    if not os.path.exists(p): continue
    for line in open(p, encoding="utf-8"):
        m = re.match(r"(\S+) -> (\S+) \((\w+)\)", line.strip())
        if m: action[m.group(1)] = m.group(3)
cases = [json.loads(l) for l in open(os.path.join(HERE, "cases.jsonl"), encoding="utf-8")]
mapping = {}
for c in cases:
    cid = c["id"]
    mapping[cid] = {"fullname": PREFIX + slugify(cid), "source": c["source"],
                    "action": action.get(cid, "saved-unverified")}
with open(os.path.join(HERE, "map.json"), "w", encoding="utf-8") as f:
    json.dump(mapping, f, ensure_ascii=False, indent=1)
    f.write("\n")
print("map entries", len(mapping))
from collections import Counter
print("actions", dict(Counter(v["action"] for v in mapping.values())))
