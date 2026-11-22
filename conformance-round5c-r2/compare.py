#!/usr/bin/env python3
"""Compare R5C-R2 live captures with the canonical post-REFCORR9 PHP reference.

Uses the campaign-standard probe.norm mask plus the campaign frame mask
(inter-tag newlines, trailing paragraph newlines, br/div spelling). Attribute
order and the newpage class are already masked by probe.norm. Only
valid/stable/source-matching captures are compared. Math render rows are
adjudicated from the reference token stream (the reference harness emits a
stub no-PNG error block) against the live equation envelope and counter.
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
    s = probe.norm(html)
    return {
        "anchors": re.findall(r"<a\b[^>]*>[^<]*</a>", s),
        "imgs": re.findall(r"<img\b[^>]*/?>", s),
        "emails": re.findall(r'<span class="wiki-email">.*?</span>', s, flags=re.S),
        "mathinline": re.findall(r'<span class="math-inline">.*?</span>', s, flags=re.S),
        "err": re.findall(r'<div class="error-block">.*?</div>', s, flags=re.S),
        "equation": re.findall(r'\\begin\{([a-z]+)\}', s),
        "eqnum": re.findall(r'equation-number">\((\d+)\)', s),
        "text": re.sub(r"\s+", " ", re.sub(r"<[^>]+>", " ", s)).strip(),
    }


def ref_type(tokens_line):
    """Extract the Math token type from a reference tokens-mode JSON line."""
    try:
        toks = json.loads(tokens_line)
    except Exception:
        return None
    if isinstance(toks, dict):
        vals = list(toks.values())
    else:
        vals = toks
    for t in vals:
        if isinstance(t, list) and len(t) >= 2 and t[0] == "Math" and isinstance(t[1], dict):
            return t[1].get("type")
    return None


def main():
    ref, toks = {}, {}
    for line in open(os.path.join(HERE, "ref.jsonl"), encoding="utf-8"):
        if line.strip():
            d = json.loads(line)
            ref[d["id"]] = d.get("output", d.get("error", ""))
    for line in open(os.path.join(HERE, "tokens.jsonl"), encoding="utf-8"):
        if line.strip():
            d = json.loads(line)
            toks[d["id"]] = d.get("output", "")
    live = json.load(open(os.path.join(HERE, "captures.json"), encoding="utf-8"))
    rows = []
    for cid in ref:
        cap = live.get(cid)
        if not (cap and cap.get("valid") and cap.get("stable")
                and cap.get("saved_source_matches") is True):
            rows.append({"id": cid, "status": "UNTESTABLE",
                         "valid": bool(cap and cap.get("valid")),
                         "stable": bool(cap and cap.get("stable")),
                         "source_match": bool(cap and cap.get("saved_source_matches"))})
            continue
        cr, cl = canon(ref[cid]), canon(cap["html"])
        sr, sl = rule_sig(ref[cid]), rule_sig(cap["html"])
        row = {"id": cid, "status": "CLEAR" if cr == cl else "DIFF",
               "canon_equal": cr == cl, "sig_equal": sr == sl,
               "ref_canon": cr, "live_canon": cl,
               "ref_sig": sr, "live_sig": sl,
               "capture_id": cap.get("fullname", cid)}
        if cid in toks:
            row["ref_math_token_type"] = ref_type(toks[cid])
            row["live_math_envelope"] = sl["equation"]
            row["live_math_counter"] = sl["eqnum"]
        rows.append(row)
    out = os.path.join(HERE, "comparison.json")
    with open(out, "w", encoding="utf-8") as fh:
        json.dump(rows, fh, ensure_ascii=False, indent=1)
        fh.write("\n")
    counts = {}
    for r in rows:
        counts[r["status"]] = counts.get(r["status"], 0) + 1
    print("wrote", out, "rows", len(rows), counts)
    for r in rows:
        print(r["id"], r["status"],
              "math_ref_type=" + str(r.get("ref_math_token_type")),
              "live_env=" + str(r.get("live_math_envelope")))
        if r["status"] == "DIFF":
            print("   ref :", repr(r["ref_canon"]))
            print("   live:", repr(r["live_canon"]))


if __name__ == "__main__":
    main()
