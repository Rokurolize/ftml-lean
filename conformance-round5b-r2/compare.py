#!/usr/bin/env python3
"""Compare R5B-R2 live captures with the canonical post-REFCORR8 PHP reference.

Uses the campaign-standard probe.norm mask plus the campaign frame mask
(inter-tag newlines, trailing paragraph newlines, br/div spelling, token-id
digits and Stage 2 purifyHtml frame collapse). Attribute order is already
masked by probe.norm, so this comparison never counts order as a divergence.
Only valid/stable/source-matching captures are compared.
"""
import importlib.machinery
import importlib.util
import json
import os
import re

HERE = os.path.dirname(os.path.abspath(__file__))
P = "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe"
loader = importlib.machinery.SourceFileLoader("wikidot_probe", P)
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec)
spec.loader.exec_module(probe)


def canon(html):
    s = probe.norm(html)
    s = s.replace("<br />", "<br>").replace("<div >", "<div>")
    s = re.sub(r">\s+<", "><", s)
    return s.strip()


def rule_sig(html):
    """Rule-level byte signature, independent of Stage 2 frame wrappers."""
    s = probe.norm(html)
    return {
        "anchors": re.findall(r"<a\b[^>]*>[^<]*</a>", s),
        "imgs": re.findall(r"<img\b[^>]*/?>", s),
        "emails": re.findall(r'<span class="wiki-email">.*?</span>', s, flags=re.S),
        "math": re.findall(r'<span class="math-inline">.*?</span>', s, flags=re.S),
        "err": re.findall(r'<div class="error-block">.*?</div>', s, flags=re.S),
        "divs": re.findall(r'<div class="image-container[^"]*">', s),
        "text": re.sub(r"\s+", " ", re.sub(r"<[^>]+>", " ", s)).strip(),
    }


def main():
    ref = {}
    for line in open(os.path.join(HERE, "ref.jsonl"), encoding="utf-8"):
        if not line.strip():
            continue
        rec = json.loads(line)
        ref[rec["id"]] = rec.get("output", rec.get("error", ""))
    live = json.load(open(os.path.join(HERE, "captures.json"), encoding="utf-8"))
    rows = []
    for cid in ref:
        cap = live.get(cid)
        if not cap or not cap.get("valid") or not cap.get("stable") or cap.get("saved_source_matches") is not True:
            rows.append({"id": cid, "status": "UNTESTABLE",
                         "valid": bool(cap and cap.get("valid")),
                         "stable": bool(cap and cap.get("stable")),
                         "source_match": bool(cap and cap.get("saved_source_matches"))})
            continue
        cr, cl = canon(ref[cid]), canon(cap["html"])
        sr, sl = rule_sig(ref[cid]), rule_sig(cap["html"])
        rows.append({"id": cid, "status": "CLEAR" if cr == cl else "DIFF",
                     "canon_equal": cr == cl, "sig_equal": sr == sl,
                     "ref_canon": cr, "live_canon": cl,
                     "ref_sig": sr, "live_sig": sl,
                     "capture_id": cap.get("fullname", cid)})
    out = os.path.join(HERE, "comparison.json")
    with open(out, "w", encoding="utf-8") as fh:
        json.dump(rows, fh, ensure_ascii=False, indent=1)
        fh.write("\n")
    counts = {}
    for r in rows:
        counts[r["status"]] = counts.get(r["status"], 0) + 1
    print("wrote", out, "rows", len(rows), counts)
    for r in rows:
        if r["status"] != "CLEAR":
            print(r["id"], r["status"])
            if r["status"] == "DIFF":
                print("  ref :", repr(r["ref_canon"]))
                print("  live:", repr(r["live_canon"]))
                print("  sig ref :", r["ref_sig"])
                print("  sig live:", r["live_sig"])


if __name__ == "__main__":
    main()
