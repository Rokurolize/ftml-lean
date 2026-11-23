#!/usr/bin/env python3
"""Compare R5G-P2 cached live captures with the post-REFCORR13 canonical reference render.

Uses the campaign-standard probe.norm plus the round-5 campaign shape frame
(blank-line runs, single outer paragraph, harness error-block/PNG surfaces).
Freelink lead rows are adjudicated by the rule-level href value (class="newpage"
and the outer paragraph are shared serving surfaces). External-URL and breadth
rows by frame equality after probe.norm. Math rows are adjudicated by the rule-level
environment decision: the reference render output yields either an
`Unsupported math environment "X"` decision or an accepted type whose envelope
name is the star-stripped token type (the PNG-stub "not processed correctly"
block is a serving surface); the live value is the \begin{X} envelope or the
live `Unsupported math environment "X"` decision. Token-id digits, the outer
paragraph, class="newpage", onclick/new-window spelling, &nbsp; spelling and
Stage 2 tidy frames are owned or serving surfaces and never counted as divergences.
"""
import hashlib
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


def frame(s):
    s = probe.norm(s or "")
    s = s.replace("\r\n", "\n").replace("<br />", "<br>")
    s = re.sub(r"\n{2,}", "\n", s)
    s = re.sub(r"\ufffd\d+\ufffd", "\ufffdN\ufffd", s)
    s = s.strip()
    if s.startswith("<p>") and s.endswith("</p>") and s.count("<p>") == 1:
        s = s[3:-4].strip()
    if s.startswith('<div class="error-block">') and s.endswith("</div>"):
        s = s[len('<div class="error-block">'):-len("</div>")].strip()
    return s


def href(s):
    m = re.search(r'href="([^"]*)"', s or "")
    return m.group(1) if m else None


def anchor_text(s):
    m = re.search(r"<a[^>]*>(.*?)</a>", s or "", re.S)
    return m.group(1) if m else None


def math_type_from_tokens(out):
    try:
        arr = json.loads(out)
    except Exception:
        return None
    vals = list(arr.values()) if isinstance(arr, dict) else arr
    math = [v for v in vals if isinstance(v, list) and v and v[0] == "Math"]
    return math[0][1].get("type") if math else None


def ref_math_decision(render_out, tok_out):
    """Rule-level Math decision from the reference render + verbatim token type."""
    m = re.search(r'Unsupported math environment "([^"]*)"', render_out or "")
    if m:
        return "unsupported:" + m.group(1)
    # PNG-stub error block means the type was ACCEPTED by the validator; the
    # envelope name is the star-stripped verbatim stored type.
    if "not been processed correctly" in (render_out or ""):
        t = math_type_from_tokens(tok_out)
        if t is None:
            return "accept:?"
        return "accept:" + str(t).replace("*", "")
    return "unknown"


def live_math_value(s):
    m = re.search(r"\\begin\{([A-Za-z0-9]*)\}", s or "")
    if m:
        return "accept:" + m.group(1)
    m = re.search(r'Unsupported math environment "([^"]*)"', s or "")
    if m:
        return "unsupported:" + m.group(1)
    if "error-block" in (s or ""):
        return "stub"
    if re.search(r"math-inline|\[\[math", s or ""):
        return "literal"
    return "unknown"


cases = [json.loads(l) for l in open(os.path.join(HERE, "cases.jsonl"), encoding="utf-8")]
ref = {o["id"]: o.get("output", o.get("error"))
       for o in map(json.loads, open(os.path.join(HERE, "ref.jsonl"), encoding="utf-8"))}
tok = {o["id"]: o.get("output", o.get("error"))
       for o in map(json.loads, open(os.path.join(HERE, "ref-tokens.jsonl"), encoding="utf-8"))}
cap = json.load(open(os.path.join(HERE, "captures.json"), encoding="utf-8"))

LEAD = {"R5GP2-01", "R5GP2-02", "R5GP2-03", "R5GP2-04", "R5GP2-05"}
URL = {"R5GP2-06", "R5GP2-07", "R5GP2-08", "R5GP2-09", "R5GP2-10"}
MATH = {"R5GP2-11", "R5GP2-12", "R5GP2-13", "R5GP2-14",
        "R5GP2-15", "R5GP2-16", "R5GP2-17"}
BREADTH = {"R5GP2-18", "R5GP2-19", "R5GP2-20"}

results = []
tallies = {"confirmed": 0, "cleared": 0, "untestable": 0}
for c in cases:
    cid = c["id"]
    got = cap.get(cid)
    if not got or not all(got.get(k) for k in ("valid", "stable", "saved_source_matches")):
        results.append({"id": cid, "verdict": "UNTESTABLE",
                        "reason": "capture invalid / unstable / saved source mismatch",
                        "capture_valid": bool(got and got.get("valid")),
                        "capture_stable": bool(got and got.get("stable")),
                        "capture_saved_source_matches": bool(got and got.get("saved_source_matches"))})
        tallies["untestable"] += 1
        continue
    live_html = got["html"]
    live_n, ref_n = frame(live_html), frame(ref[cid])
    row = {"id": cid, "fullname": got["fullname"], "source": c["source"],
           "live_html": live_html, "ref_output": ref[cid],
           "live_norm": live_n, "ref_norm": ref_n,
           "live_sha256": got["html_sha256"],
           "capture_valid": got["valid"], "capture_stable": got["stable"],
           "capture_saved_source_matches": got["saved_source_matches"],
           "capture_fullname": got["fullname"]}
    if cid in LEAD:
        lh, rh = href(live_html), href(ref[cid])
        row["live_href"], row["ref_href"] = lh, rh
        if lh != rh:
            row["verdict"] = "CONFIRMED"
            row["reason"] = ("rule-level Freelink lead slug: live href %s, post-REFCORR13 "
                             "reference href %s; only class=\"newpage\" and the outer paragraph "
                             "are shared serving surfaces" % (lh, rh))
            tallies["confirmed"] += 1
        else:
            row["verdict"] = "CLEARED"
            row["reason"] = ("live and post-REFCORR13 reference share slug %s after the standard "
                             "mask; no rule-level value differs" % lh)
            tallies["cleared"] += 1
    elif cid in MATH:
        rd = ref_math_decision(ref[cid], tok[cid])
        lv = live_math_value(live_html)
        row["ref_math_decision"], row["live_math_value"] = rd, lv
        if rd == lv:
            row["verdict"] = "CLEARED"
            row["reason"] = ("rule-level Math environment decision %s on both sides; the reference "
                             "PNG-stub block is a serving surface and is not the basis" % rd)
            tallies["cleared"] += 1
        else:
            row["verdict"] = "CONFIRMED"
            row["reason"] = ("rule-level Math environment disagreement: reference decision %s, "
                             "live decision %s" % (rd, lv))
            tallies["confirmed"] += 1
    elif cid in URL or cid in BREADTH:
        # Rule-level href + authored text; onclick/new-window spelling and frames masked.
        lh, rh = href(live_html), href(ref[cid])
        lt, rt = anchor_text(live_html), anchor_text(ref[cid])
        row["live_href"], row["ref_href"] = lh, rh
        row["live_anchor_text"], row["ref_anchor_text"] = lt, rt
        if live_n == ref_n:
            row["verdict"] = "CLEARED"
            row["reason"] = ("byte-identical after probe.norm + campaign shape frame + owned "
                             "index/newpage/onclick/&nbsp;/frame masks")
            tallies["cleared"] += 1
        else:
            row["verdict"] = "DIFFER"
            row["reason"] = "raw bytes differ after mask; manual rule-level adjudication required"
            tallies["confirmed"] += 1
    else:
        if live_n == ref_n:
            row["verdict"] = "CLEARED"
            row["reason"] = "byte-identical after probe.norm + campaign shape frame + owned index mask"
            tallies["cleared"] += 1
        else:
            row["verdict"] = "DIFFER"
            row["reason"] = "raw bytes differ after mask; manual rule-level adjudication required"
            tallies["confirmed"] += 1
    results.append(row)

payload = {"method": "probe.norm + round-5 campaign shape frame; Freelink lead slug by href value; Math by rule-level environment decision (reference render accept/unsupported mapped to star-stripped token type vs live \\begin{} envelope); PNG error block, onclick/new-page/&nbsp;/token-id/Stage-2 frames owned",
           "tallies": tallies, "rows": results}
out = os.path.join(HERE, "comparison.json")
with open(out, "w", encoding="utf-8") as f:
    json.dump(payload, f, ensure_ascii=False, indent=1)
    f.write("\n")
for r in results:
    print(r["id"], r["verdict"])
    if r["verdict"] == "CONFIRMED":
        print("  ", r.get("reason"))
    if "live_href" in r:
        print("   href live/ref:", r.get("live_href"), "/", r.get("ref_href"))
    if "ref_math_decision" in r:
        print("   math ref/live:", r.get("ref_math_decision"), "/", r.get("live_math_value"))
    if r["verdict"] == "DIFFER":
        print("   live_norm:", repr(r["live_norm"]))
        print("   ref_norm :", repr(r["ref_norm"]))
print("SUMMARY", tallies)
print("comparison.json sha256", hashlib.sha256(open(out, "rb").read()).hexdigest())
