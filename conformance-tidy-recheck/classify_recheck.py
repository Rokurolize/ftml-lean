#!/usr/bin/env python3
"""Classify every non-agreeing case in the recheck, reusing the original
BRIEF-TIDY-ORACLE classification scheme and the exact decision rules of
conformance-tidy-oracle/classify.py (same precedence, same masks, same case
sets), with an added evidence audit and explicit model-gap predicate.
"""
import json
import os
import re

HERE = os.path.dirname(os.path.abspath(__file__))
WS = " \t\r\n"

# Sets recorded by stage2/REPORT-STAGE2.md section 4 and section 5, copied
# verbatim from conformance-tidy-oracle/classify.py.
SCRIPT_ID_CASES = {
    "con-x21-div-in-coll-in-tab", "con-x22-coll-in-tab", "con-x23-div-in-tab",
    "con-x25-tab-in-coll-in-div", "con-x29-footnote-in-tab",
    "lst-x08-list-in-tab",
}
DYNAMIC_ID_CASES = {
    "lst-x13-deflist-in-bib", "lst-x14-deflist-multi-bib",
    "lst-x15-deflist-bib-colon",
}
STAGE1_CANDIDATE_CASES = {
    "p34-div-tag-attr-whitespace": "C-STAGE2-1: div attribute order (id before class)",
    "con-x24-three-nested-divs": "C-STAGE2-2: three same-line div openers",
}
FRAME_COMPENSATION_CASES = {
    "p29-unwrap-image-table-dl": "T6 paragraph unwrap around img/table/dl",
    "in2-x48": "T6 paragraph unwrap around a collapsible block",
    "lst-x27-deflist-heading": "T6 paragraph unwrap around a definition list",
    "tab-x06-table-in-quote-head": "T6 paragraph unwrap inside a blockquote",
    "tab-x16-two-adv-adjacent": "T11 break drop between two tables",
    "tab-x44-malformed-adv-opener": "T6 paragraph unwrap around a simple table",
}


def strip_ws(s):
    return s.strip(WS)


def mask_frame(s):
    s = re.sub(r"<script\b[^>]*>.*?</script>", "<script-MASKED>", s,
               flags=re.S | re.I)
    s = re.sub(r"(?:<script-MASKED>\s*){2,}", "<script-MASKED> ", s)
    s = re.sub(r"wiki-tabview-[0-9a-f]+", "wiki-tabview-ID", s)
    s = re.sub(r"wiki-tab-[0-9]+-[0-9]+", "wiki-tab-ID", s)
    s = re.sub(r"tabView[0-9a-f]+", "tabViewID", s)
    s = re.sub(r"bibcite-[0-9]+(?:-[0-9a-f]+)?", "bibcite-ID", s)
    s = re.sub(r"\s+", " ", s)
    return strip_ws(s)


def diff_shape(live, oracle):
    shapes = []
    if "<p>" in oracle and "<p>" not in live:
        shapes.append("oracle keeps a <p> wrapper live does not serve")
    if "<p>" in live and "<p>" not in oracle:
        shapes.append("live keeps a <p> wrapper the oracle does not serve")
    if "<br />" in oracle and "<br />" not in live:
        shapes.append("oracle keeps a <br /> live does not serve")
    if "<br />" in live and "<br />" not in oracle:
        shapes.append("live keeps a <br /> the oracle does not serve")
    return "; ".join(shapes) or "paragraph/break frame difference"


def first_diff(a, b):
    n = min(len(a), len(b))
    for i in range(n):
        if a[i] != b[i]:
            return i, a[max(0, i - 40):i + 60], b[max(0, i - 40):i + 60]
    return n, a[n:n + 100], b[n:n + 100]


def main():
    rows = [json.loads(l) for l in open(os.path.join(HERE, "three-way-results.jsonl"),
                                        encoding="utf-8")]
    out = []
    counts = {}
    for r in rows:
        o, m, l = (strip_ws(r[k]) for k in ("oracle", "model", "live"))
        rec = dict(r)
        mg = (m != l and m != o)
        if o == l == m:
            cls, sub, ev = "three-way agreement", "", "oracle=model=live after outer-ASCII-whitespace stripping"
        elif r["id"] in SCRIPT_ID_CASES or r["id"] in DYNAMIC_ID_CASES:
            masked_match = mask_frame(o) == mask_frame(l)
            cls = "harness frame"
            sub = ("script/harness-id frame" if r["id"] in SCRIPT_ID_CASES
                   else "dynamic bibcite id frame")
            ev = ("oracle=live after masking script blocks and harness/dynamic ids"
                  if masked_match else
                  "recorded script/dynamic-id frame difference; oracle and live differ only in that material")
        elif r["id"] in STAGE1_CANDIDATE_CASES:
            cls, sub = "harness frame", "recorded Stage 1 candidate"
            ev = "oracle=model; both differ from live at " + STAGE1_CANDIDATE_CASES[r["id"]]
        elif r["id"] in FRAME_COMPENSATION_CASES:
            cls, sub = "harness frame", "recorded frame compensation"
            ev = ("model=live; oracle differs at " + diff_shape(l, o) +
                  " (" + FRAME_COMPENSATION_CASES[r["id"]] + ")")
        elif mg:
            cls, sub, ev = "model gap", "UNCLASSIFIED", "model differs from both live and oracle"
        elif o != l and m == l:
            cls, sub, ev = "version-class residue", "UNCLASSIFIED", "oracle differs from live, model matches live"
        else:
            cls, sub, ev = "unclassified", "", "no rule matched"
        rec.update({"classification": cls, "subclass": sub, "evidence": ev,
                    "model_gap_test": mg,
                    "oracle_mask_eq_live": mask_frame(o) == mask_frame(l),
                    "oracle_eq_model": o == m, "model_eq_live": m == l,
                    "oracle_eq_live": o == l})
        # byte evidence for every non-agreeing case
        if cls != "three-way agreement":
            idx_mo, ctx_mo_l, ctx_mo_o = first_diff(m, o)
            idx_ml, ctx_ml_m, ctx_ml_l = first_diff(m, l)
            rec["model_vs_oracle_first_diff"] = {"offset": idx_mo, "model": ctx_mo_l, "oracle": ctx_mo_o}
            rec["model_vs_live_first_diff"] = {"offset": idx_ml, "model": ctx_ml_m, "live": ctx_ml_l}
        out.append(rec)
        key = (cls, sub)
        counts[key] = counts.get(key, 0) + 1

    with open(os.path.join(HERE, "classified-results.jsonl"), "w", encoding="utf-8") as f:
        for rec in out:
            f.write(json.dumps(rec, ensure_ascii=False) + "\n")
    summ = {
        "total": len(out),
        "by_class": {},
        "model_gap_cases": [r["id"] for r in out if r["classification"] == "model gap"],
        "model_gap_predicate_true": [r["id"] for r in out if r["model_gap_test"]],
        "unclassified_cases": [r["id"] for r in out
                               if r["classification"] in ("unclassified", "version-class residue")],
        "stage1_changed_nonagreeing": [r["id"] for r in out
                                       if r["stage1_changed"] and r["classification"] != "three-way agreement"],
    }
    for (cls, sub), n in sorted(counts.items()):
        summ["by_class"].setdefault(cls, {})[sub or "(none)"] = n
    with open(os.path.join(HERE, "classification-summary.json"), "w", encoding="utf-8") as f:
        json.dump(summ, f, indent=2)
        f.write("\n")
    print(json.dumps(summ, indent=2))


if __name__ == "__main__":
    main()
