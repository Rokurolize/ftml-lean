#!/usr/bin/env python3
"""R5H-P3: compare cached live captures against canonical PHP reference renders.

Owned serving surfaces are masked before the rule-level byte comparison:
wdfiles host + page path and the random gallery-box id / lightbox frame.
These are CLEARED by protocol, never confirmations. Everything else is the
campaign `probe.norm` plus the campaign frame mask.
"""
import json, re, importlib.machinery, importlib.util, os

HERE = os.path.dirname(os.path.abspath(__file__))
P = "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe"
loader = importlib.machinery.SourceFileLoader("wikidot_probe", P)
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec)
spec.loader.exec_module(probe)


def owned(s):
    """Mask owned serving surfaces (wdfiles host/path, gallery lightbox frame)."""
    s = re.sub(r"https://sandbox-for-codex\.wdfiles\.com/local--files/muse-probe-round5h-p3-[^/]+/", "/local--files//", s)
    s = re.sub(r"https://sandbox-for-codex\.wdfiles\.com/local--resized-images/muse-probe-round5h-p3-[^/]+/", "/local--resized-images//", s)
    s = re.sub(r'\s*id="gallery-box-\d+"', '', s)
    s = re.sub(r'\s*class="(?:with-lb|gallery-image-size-[a-z]+)"', '', s)
    return s


def frame(s):
    """Campaign frame mask on top of probe.norm: owned Stage 2 / counter surfaces."""
    s = s.replace("\r\n", "\n").replace("<br />", "<br>")
    s = re.sub(r"id=\"(footnote|footnoteref|bibitem|bibitemref)-\d+\"", r'id="\1-X"', s)
    s = re.sub(r"(footnoteref-|footnote-|bibitemref-|bibitem-)\d+", r"\1X", s)
    s = re.sub(r"<p>\s*</p>", "", s)
    s = re.sub(r"\s+", " ", s)
    s = re.sub(r">\s+<", "><", s)
    return s.strip()


def comparable(html):
    return frame(owned(probe.norm(html)))


cases = [json.loads(l) for l in open(os.path.join(HERE, "cases.jsonl"), encoding="utf-8")]
ref = {o["id"]: o.get("output", o.get("error"))
       for o in map(json.loads, open(os.path.join(HERE, "ref.jsonl"), encoding="utf-8"))}
cap = json.load(open(os.path.join(HERE, "captures.json"), encoding="utf-8"))

rows = []
summary = {"agree": 0, "differ": 0, "invalid": 0, "missing": 0}
for c in cases:
    cid = c["id"]
    got = cap.get(cid)
    if got is None:
        rows.append({"id": cid, "verdict": "MISSING"})
        summary["missing"] += 1
        continue
    if not (got.get("valid") and got.get("stable") and got.get("saved_source_matches")):
        rows.append({"id": cid, "verdict": "UNTESTABLE",
                     "flags": {k: got.get(k) for k in ("valid", "stable", "saved_source_matches")}})
        summary["invalid"] += 1
        continue
    live = comparable(got["html"])
    expected = comparable(ref[cid])
    same = live == expected
    rows.append({"id": cid, "verdict": "AGREE" if same else "DIFFER",
                 "capture_id": got["fullname"], "reference": expected, "live": live,
                 "live_sha256": got["html_sha256"], "source": c["source"]})
    summary["agree" if same else "differ"] += 1

with open(os.path.join(HERE, "comparison.json"), "w", encoding="utf-8") as f:
    json.dump({"summary": summary, "rows": rows}, f, ensure_ascii=False, indent=1)
for r in rows:
    print(r["id"], r["verdict"])
    if r["verdict"] == "DIFFER":
        print("  ref :", repr(r["reference"]))
        print("  live:", repr(r["live"]))
print("SUMMARY", summary)
