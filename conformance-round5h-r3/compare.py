#!/usr/bin/env python3
"""Compare R5H-R3 live captures with the canonical post-REFCORR14 PHP reference.

Uses the campaign-standard probe.norm mask plus the campaign frame mask. Only
valid/stable/source-matching captures are compared; a source-drifted capture is
UNTESTABLE by rule. The owned Stage 2 purifyHtml surface is exactly the
live-discarded C0 class D = [\x00-\x08\x0B\x0C\x0E-\x1A\x1C-\x1F]: a bare
member of D that live purifies is owned and CLEARED, but ESC 0x1B, DEL 0x7F,
TAB, LF and CR are rule-level bytes and are never removed by the owned mask.
Stage 2 footer frames (inter-tag newlines and trailing paragraph newlines) are
owned and collapse under the frame mask. A rule-level difference in a <br />, a
separator, an empty flag, a TOC title, an href, an id, a class, a data value or
emitted text is reported as DIFF.
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

OWNED_D = set(list(range(0, 9)) + [11, 12] + list(range(14, 27)) + list(range(28, 32)))


def drop_owned(s):
    return "".join(ch for ch in s if ord(ch) not in OWNED_D)


def canon(html):
    s = probe.norm(html)
    s = re.sub(r'(id="bibcite-\d+)-[0-9a-f]{4,}"', r'\1"', s)
    s = s.replace("<br />", "<br>").replace("<div >", "<div>")
    s = re.sub(r">\s+<", "><", s)
    return s.strip()


def canon_owned(html):
    return canon(drop_owned(html))


def sig(html):
    s = probe.norm(html)
    return {
        "footfooter": re.findall(r'<div class="footnote-footer".*?</div>', s, flags=re.S),
        "footblock": re.findall(r'<div class="footnotes-footer".*', s, flags=re.S),
        "sep_after_backref": re.findall(r'</a>(\.\s*(?:<br\s*/?>|</div>| ))', s),
        "bibitem": re.findall(r'<div class="bibitem".*?</div>', s, flags=re.S),
        "toc_items": re.findall(r'<div style="margin-left:[^"]*"><a href="#[^"]*">.*?</a></div>', s, flags=re.S),
        "toc_title": re.findall(r'<div class="title".*?</div>', s, flags=re.S),
        "headings": re.findall(r'<h[1-6][^>]*>.*?</h[1-6]>', s, flags=re.S),
        "anchors": re.findall(r'<a\b[^>]*>.*?</a>', s),
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
    for cid in sorted(ref):
        cap = live.get(cid)
        if not cap or not cap.get("valid") or not cap.get("stable") or cap.get("saved_source_matches") is not True:
            rows.append({"id": cid, "status": "UNTESTABLE",
                         "valid": bool(cap and cap.get("valid")),
                         "stable": bool(cap and cap.get("stable")),
                         "source_match": bool(cap and cap.get("saved_source_matches")),
                         "saved_source": (cap or {}).get("source"),
                         "capture_id": cid})
            continue
        cr, cl = canon(ref[cid]), canon(cap["html"])
        sr, sl = sig(ref[cid]), sig(cap["html"])
        co_r, co_l = canon_owned(ref[cid]), canon_owned(cap["html"])
        so_r, so_l = sig(drop_owned(ref[cid])), sig(drop_owned(cap["html"]))
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


if __name__ == "__main__":
    main()
