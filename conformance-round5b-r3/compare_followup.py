#!/usr/bin/env python3
"""Compare R5B-R3 follow-up captures with the post-REFCORR8 reference."""
import importlib.machinery
import importlib.util
import json
import os

from compare import canon, rule_sig

HERE = os.path.dirname(os.path.abspath(__file__))
ref = {}
for line in open(os.path.join(HERE, "ref-followup.jsonl"), encoding="utf-8"):
    if line.strip():
        rec = json.loads(line)
        ref[rec["id"]] = rec.get("output", rec.get("error", ""))
live = json.load(open(os.path.join(HERE, "captures-followup.json"), encoding="utf-8"))
rows = []
for cid in ref:
    cap = live.get(cid)
    if not cap or not cap.get("valid") or not cap.get("stable") or cap.get("saved_source_matches") is not True:
        rows.append({"id": cid, "status": "UNTESTABLE"})
        continue
    cr, cl = canon(ref[cid]), canon(cap["html"])
    sr, sl = rule_sig(ref[cid]), rule_sig(cap["html"])
    status = "CLEAR" if cr == cl else ("FRAME-ONLY" if sr == sl else "DIFF")
    rows.append({"id": cid, "status": status, "ref_canon": cr, "live_canon": cl,
                 "ref_sig": sr, "live_sig": sl, "capture_id": cid})
out = os.path.join(HERE, "comparison-followup.json")
with open(out, "w", encoding="utf-8") as fh:
    json.dump(rows, fh, ensure_ascii=False, indent=1)
    fh.write("\n")
print("wrote", out, "rows", len(rows))
for r in rows:
    print(r["id"], r["status"])
    if r["status"] == "DIFF":
        print("  ref :", repr(r["ref_canon"]))
        print("  live:", repr(r["live_canon"]))
