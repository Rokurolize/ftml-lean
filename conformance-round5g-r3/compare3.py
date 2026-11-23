#!/usr/bin/env python3
"""Compare the R5G-R3 third-wave captures against ref3.jsonl.

Reuses the exact campaign-standard mask and owned-class policy from compare.py.
All four third-wave suspicions were captured valid/stable/source-matching, so
no third-wave row is UNTESTABLE; the one UNTESTABLE row of the unit (R3G-17)
belongs to the second wave in comparison2.json.
"""
import json
import os

import compare

HERE = os.path.dirname(os.path.abspath(__file__))


def main():
    ref = {}
    for line in open(os.path.join(HERE, "ref3.jsonl"), encoding="utf-8"):
        if not line.strip():
            continue
        rec = json.loads(line)
        ref[rec["id"]] = rec.get("output", rec.get("error", ""))
    live = json.load(open(os.path.join(HERE, "captures3.json"), encoding="utf-8"))
    cases = {}
    for line in open(os.path.join(HERE, "cases3.jsonl"), encoding="utf-8"):
        rec = json.loads(line)
        cases[rec["id"]] = rec["source"]
    rows = []
    for cid in sorted(set(ref) | set(cases)):
        cap = live.get(cid)
        if not cap or not cap.get("valid") or not cap.get("stable") or cap.get("saved_source_matches") is not True:
            rows.append({"id": cid, "status": "UNTESTABLE",
                         "valid": bool(cap and cap.get("valid")),
                         "stable": bool(cap and cap.get("stable")),
                         "source_match": bool(cap and cap.get("saved_source_matches")),
                         "intended_source": cases.get(cid),
                         "saved_source": (cap or {}).get("source"),
                         "capture_id": cid})
            continue
        cr, cl = compare.canon(ref[cid]), compare.canon(cap["html"])
        sr, sl = compare.sig(ref[cid]), compare.sig(cap["html"])
        co_r, co_l = compare.canon_owned(ref[cid]), compare.canon_owned(cap["html"])
        so_r, so_l = compare.sig(compare.drop_owned(ref[cid])), compare.sig(compare.drop_owned(cap["html"]))
        if cr == cl:
            status = "CLEAR"
        elif co_r == co_l and so_r == so_l:
            status = "CLEAR-STAGE2-OWNED"
        else:
            status = "DIFF"
        rows.append({"id": cid, "status": status,
                     "canon_equal": cr == cl,
                     "owned_equal": co_r == co_l,
                     "sig_equal": sr == sl,
                     "ref_canon": cr, "live_canon": cl,
                     "ref_owned_canon": co_r, "live_owned_canon": co_l,
                     "ref_sig": sr, "live_sig": sl,
                     "capture_id": cid})
    out = os.path.join(HERE, "comparison3.json")
    with open(out, "w", encoding="utf-8") as fh:
        json.dump(rows, fh, ensure_ascii=False, indent=1)
        fh.write("\n")
    counts = {}
    for r in rows:
        counts[r["status"]] = counts.get(r["status"], 0) + 1
    print("wrote", out, "rows", len(rows), counts)
    for r in rows:
        if r["status"] != "CLEAR":
            print(r["id"], r["status"], r.get("valid"), r.get("stable"), r.get("source_match"))


if __name__ == "__main__":
    main()
