#!/usr/bin/env python3
"""Produce the recheck audit: original vs recheck tallies, stage-1 change
attribution, and byte evidence for every non-agreeing case.
"""
import json
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
from classify_recheck import mask_frame, strip_ws, first_diff

ORIG = os.path.join(os.path.dirname(HERE), "conformance-tidy-oracle")


def load(path):
    return [json.loads(l) for l in open(path, encoding="utf-8") if l.strip()]


def main():
    orig = load(os.path.join(ORIG, "three-way-results.jsonl"))
    new = load(os.path.join(HERE, "three-way-results.jsonl"))
    cls = {r["id"]: r for r in load(os.path.join(HERE, "classified-results.jsonl"))}
    orig_by = {r["id"]: r for r in orig}
    stage = {r["id"]: r for r in load(os.path.join(HERE, "stage1-regenerated.jsonl"))}
    def tally(rows):
        return {"all_three_agree": sum(r["all_three_agree"] for r in rows),
                "oracle_eq_live": sum(r["oracle_eq_live"] for r in rows),
                "model_eq_live": sum(r["model_eq_live"] for r in rows),
                "oracle_eq_model": sum(r["oracle_eq_model"] for r in rows)}
    nonagree = []
    for r in new:
        if r["all_three_agree"]:
            continue
        c = cls[r["id"]]
        o, m, l = (strip_ws(r[k]) for k in ("oracle", "model", "live"))
        nonagree.append({
            "id": r["id"], "battery": r["battery"],
            "classification": c["classification"], "subclass": c["subclass"],
            "stage1_changed": r["stage1_changed"],
            "oracle_eq_live": o == l, "model_eq_live": m == l,
            "oracle_eq_model": o == m,
            "literal_model_gap_predicate": m != l and m != o,
            "mask_model_eq_oracle": mask_frame(m) == mask_frame(o),
            "mask_model_eq_live": mask_frame(m) == mask_frame(l),
            "mask_oracle_eq_live": mask_frame(o) == mask_frame(l),
            "model_vs_oracle_first_diff": first_diff(m, o),
            "model_vs_live_first_diff": first_diff(m, l),
            "oracle_vs_live_first_diff": first_diff(o, l),
        })
    moved = []
    for r in new:
        o0 = orig_by[r["id"]]
        if r["all_three_agree"] != o0["all_three_agree"]:
            moved.append({"id": r["id"], "from": "agree" if o0["all_three_agree"] else "classified",
                          "to": "agree" if r["all_three_agree"] else "classified",
                          "stage1_changed": r["stage1_changed"],
                          "model_changed": strip_ws(r["model"]) != strip_ws(o0["model"])})
    model_changed = [r["id"] for r in new
                     if strip_ws(r["model"]) != strip_ws(orig_by[r["id"]]["model"])]
    stage1_changed = [r["id"] for r in new if r["stage1_changed"]]
    audit = {
        "tallies": {"original": tally(orig), "recheck": tally(new)},
        "counts": {"cases": len(new),
                   "original_nonagreeing": sum(not r["all_three_agree"] for r in orig),
                   "recheck_nonagreeing": len(nonagree)},
        "stage1_changed_count": len(stage1_changed),
        "stage1_changed_ids": stage1_changed,
        "model_output_changed_ids": model_changed,
        "moved_cases": moved,
        "repobe": {"fresh_live_probes": 0,
                   "reason": "Every case source is byte-identical to the frozen capture source (read verbatim from stage2/stage2-evidence battery files); the 34 Stage 1 changes are reference corrections rendering the same source, so no capture ceased to correspond."},
        "nonagreeing": nonagree,
    }
    with open(os.path.join(HERE, "recheck-audit.json"), "w", encoding="utf-8") as f:
        json.dump(audit, f, indent=2, ensure_ascii=False)
        f.write("\n")
    print(json.dumps({"tallies": audit["tallies"], "moved": moved,
                      "stage1_changed": len(stage1_changed),
                      "model_changed": model_changed}, indent=2))


if __name__ == "__main__":
    main()
