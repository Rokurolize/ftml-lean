#!/usr/bin/env python3
"""Compare R5C-R3 live captures with the canonical post-REFCORR9 PHP reference.

Uses the campaign-standard probe.norm mask plus the campaign frame mask
(inter-tag newlines, trailing paragraph newlines, br/div spelling, token-id
digits and Stage 2 purifyHtml frame collapse). Attribute order is already
masked by probe.norm, so this comparison never counts order as a divergence.
Only valid/stable/source-matching captures are compared; a source-drifted
capture is UNTESTABLE by rule, never a clearance and never a divergence.
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
    # Campaign frame mask: live's per-page random hex suffix on bibcite ids
    # is a recorded serving-layer surface, never a rule-level divergence.
    s = re.sub(r'(id="bibcite-\d+)-[0-9a-f]{4,}"', r'\1"', s)
    s = s.replace("<br />", "<br>").replace("<div >", "<div>")
    s = re.sub(r">\s+<", "><", s)
    return s.strip()


def rule_sig(html):
    """Rule-level byte signature for the notes/heading/toc/anchor family."""
    s = probe.norm(html)
    return {
        "footnoteref": re.findall(r'<sup class="footnoteref">.*?</sup>', s, flags=re.S),
        "footfooter": re.findall(r'<div class="footnote-footer".*?</div>', s, flags=re.S),
        "footblock": re.findall(r'<div class="footnotes-footer".*', s, flags=re.S),
        "bibitem": re.findall(r'<div class="bibitem".*?</div>', s, flags=re.S),
        "bibcite": re.findall(r'<a\b[^>]*class="bibcite"[^>]*>.*?</a>', s, flags=re.S),
        "bib_err": re.findall(r'<span class="error-inline">.*?</span>', s, flags=re.S),
        "toc_items": re.findall(r'<div style="margin-left:[^"]*"><a href="#[^"]*">.*?</a></div>', s, flags=re.S),
        "headings": re.findall(r'<h[1-6][^>]*><span>.*?</span></h[1-6]>', s, flags=re.S),
        "toc_title": re.findall(r'<div class="title".*?</div>', s, flags=re.S),
        "anchors": re.findall(r'<a\b[^>]*>[^<]*</a>', s),
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
                         "source_match": bool(cap and cap.get("saved_source_matches")),
                         "saved_source": (cap or {}).get("source")})
            continue
        cr, cl = canon(ref[cid]), canon(cap["html"])
        sr, sl = rule_sig(ref[cid]), rule_sig(cap["html"])
        if cr == cl:
            status = "CLEAR"
        elif sr == sl:
            status = "FRAME-ONLY"
        else:
            status = "DIFF"
        rows.append({"id": cid, "status": status,
                     "canon_equal": cr == cl, "sig_equal": sr == sl,
                     "ref_canon": cr, "live_canon": cl,
                     "ref_sig": sr, "live_sig": sl,
                     "capture_id": cid})
    out = os.path.join(HERE, "comparison.json")
    with open(out, "w", encoding="utf-8") as fh:
        json.dump(rows, fh, ensure_ascii=False, indent=1)
        fh.write("\n")
    counts = {}
    for r in rows:
        counts[r["status"]] = counts.get(r["status"], 0) + 1
    print("wrote", out, "rows", len(rows), counts)
    for r in rows:
        if r["status"] not in ("CLEAR",):
            print(r["id"], r["status"])
            if r["status"] == "DIFF":
                print("  ref :", repr(r["ref_canon"]))
                print("  live:", repr(r["live_canon"]))
                print("  sig ref :", r["ref_sig"])
                print("  sig live:", r["live_sig"])


if __name__ == "__main__":
    main()
