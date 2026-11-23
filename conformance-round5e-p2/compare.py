#!/usr/bin/env python3
"""Compare R5E-P2 cached live captures with the post-REFCORR11 canonical reference render.

Uses the campaign-standard probe.norm plus the round-5 campaign shape frame
(blank-line runs, single outer paragraph, harness error-block/PNG and code
leading-newline surfaces). Token-index digits inside U+FFFD sentinels are an
owned frame class. Freelink lead rows are adjudicated by the rule-level href
value, hash-route rows by href plus auto-label text, and Math rows by the
reference token type against the live environment envelope. The Math predicate
maps a valid lower-case reference type to the same live \\begin{...} envelope,
maps an invalid reference value to a live error surface, and maps the reference
equation default to the live equation envelope; the reference PNG-stub render
error block is a serving surface and is never compared. Token-id digits,
`class="newpage"`, the outer paragraph, `&nbsp;` spelling and Stage 2 tidy
frames are owned or serving surfaces and never counted as divergences.
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


def live_math_value(s):
    m = re.search(r"\\begin\{([A-Za-z0-9]*)\}", s or "")
    if m:
        return m.group(1)
    m = re.search(r'Unsupported math environment "([^"]*)"', s or "")
    if m:
        return "unsupported:" + m.group(1)
    if re.search(r"math-inline|\[\[math", s or ""):
        return "literal"
    if "error-block" in (s or ""):
        return "stub"
    return "unknown"


def math_agree(ref_type, live_value):
    if ref_type is None:
        return live_value in ("literal", "stub")
    if ref_type == "equation":
        return live_value == "equation"
    if re.fullmatch(r"[a-z][a-z0-9]*", ref_type):
        return live_value == ref_type
    return live_value in ("unsupported:" + ref_type, "stub")


cases = [json.loads(l) for l in open(os.path.join(HERE, "cases.jsonl"), encoding="utf-8")]
ref = {o["id"]: o.get("output", o.get("error"))
       for o in map(json.loads, open(os.path.join(HERE, "ref.jsonl"), encoding="utf-8"))}
tok = {o["id"]: o.get("output", o.get("error"))
       for o in map(json.loads, open(os.path.join(HERE, "ref-tokens.jsonl"), encoding="utf-8"))}
cap = json.load(open(os.path.join(HERE, "captures.json"), encoding="utf-8"))

LEAD = {"R5EP2-01", "R5EP2-02", "R5EP2-03"}
HASH = {"R5EP2-04", "R5EP2-05", "R5EP2-06", "R5EP2-07"}
MATH = {"R5EP2-08", "R5EP2-09", "R5EP2-10", "R5EP2-11"}

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
            row["reason"] = ("rule-level Freelink lead slug: live href %s, post-REFCORR11 "
                             "reference href %s; only class=\"newpage\" and the outer paragraph "
                             "are shared serving surfaces" % (lh, rh))
            tallies["confirmed"] += 1
        else:
            row["verdict"] = "CLEARED"
            row["reason"] = ("live and post-REFCORR11 reference share slug %s after the standard "
                             "mask; no rule-level value differs" % lh)
            tallies["cleared"] += 1
    elif cid in HASH:
        lh, rh = href(live_html), href(ref[cid])
        lt, rt = anchor_text(live_html), anchor_text(ref[cid])
        row.update({"live_href": lh, "ref_href": rh, "live_text": lt, "ref_text": rt})
        if lh != rh or lt != rt:
            row["verdict"] = "CONFIRMED"
            row["reason"] = ("rule-level Freelink hash-route value: live (href=%s, text=%s) vs "
                             "post-REFCORR11 reference (href=%s, text=%s)" % (lh, lt, rh, rt))
            tallies["confirmed"] += 1
        else:
            row["verdict"] = "CLEARED"
            row["reason"] = ("live and post-REFCORR11 reference share hash-route href and auto "
                             "label after the standard mask")
            tallies["cleared"] += 1
    elif cid in MATH:
        rt = math_type_from_tokens(tok[cid])
        lv = live_math_value(live_html)
        row["ref_token_type"], row["live_math_value"] = rt, lv
        if math_agree(rt, lv):
            row["verdict"] = "CLEARED"
            row["reason"] = ("rule-level Math type %s on both sides (live envelope %s); the "
                             "reference render error block is the no-op PNG harness surface"
                             % (rt, lv))
            tallies["cleared"] += 1
        else:
            row["verdict"] = "CONFIRMED"
            row["reason"] = ("rule-level Math type disagreement: reference token type %s, live "
                             "environment %s" % (rt, lv))
            tallies["confirmed"] += 1
    elif live_n == ref_n:
        row["verdict"] = "CLEARED"
        row["reason"] = "byte-identical after probe.norm + campaign shape frame + owned index mask"
        tallies["cleared"] += 1
    else:
        row["verdict"] = "DIFFER"
        row["reason"] = "raw bytes differ after mask; manual rule-level adjudication required"
        tallies["confirmed"] += 1
    results.append(row)

payload = {"method": "probe.norm + round-5 campaign shape frame; Freelink lead slug by href value; hash-route by href plus auto-label text; Math type by reference token stream mapped to live \\begin{} envelope, with PNG error-block surface excluded; token-id digits and &nbsp; spelling owned",
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
    if "ref_token_type" in r:
        print("   math ref/live:", r.get("ref_token_type"), "/", r.get("live_math_value"))
    if r["verdict"] == "DIFFER":
        print("   live_norm:", repr(r["live_norm"]))
        print("   ref_norm :", repr(r["ref_norm"]))
print("SUMMARY", tallies)
print("comparison.json sha256", hashlib.sha256(open(out, "rb").read()).hexdigest())
