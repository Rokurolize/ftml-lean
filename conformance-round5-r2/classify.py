#!/usr/bin/env python3
"""Attach final verdicts to the raw comparison rows.

A raw DIFF whose rule-level signature is identical and whose only canonical
difference is a Stage 2 paragraph frame (<p> around a block-level div, or an
empty <p> against empty content) is CLEARED as an owned serving-layer class.
"""
import json, os, re
HERE = os.path.dirname(os.path.abspath(__file__))
rows = json.load(open(os.path.join(HERE, "comparison.json"), encoding="utf-8"))
for r in rows:
    if r["status"] == "UNTESTABLE":
        r["final_verdict"] = "UNTESTABLE"
        r["reason"] = "capture invalid, unstable or source mismatch"
        continue
    if r["status"] == "CLEAR":
        r["final_verdict"] = "CLEARED"
        r["reason"] = "masked canonical bytes equal"
        continue
    a, b = r["ref_canon"], r["live_canon"]
    stripped_a = re.sub(r"</?p>", "", a).strip()
    stripped_b = re.sub(r"</?p>", "", b).strip()
    frame_only = (r["sig_equal"] and stripped_a == stripped_b)
    r["final_verdict"] = "CLEARED" if frame_only else "CONFIRMED"
    r["reason"] = ("Stage 2 paragraph frame only; rule-level signature and "
                   "non-paragraph bytes identical") if frame_only else "rule-level byte divergence"
out = os.path.join(HERE, "classification.json")
with open(out, "w", encoding="utf-8") as fh:
    json.dump(rows, fh, ensure_ascii=False, indent=1); fh.write("\n")
final = {}
for r in rows:
    final[r["final_verdict"]] = final.get(r["final_verdict"], 0) + 1
print("wrote", out, final)
for r in rows:
    if r["final_verdict"] != "CLEARED":
        print(r["id"], r["final_verdict"], r["reason"])
