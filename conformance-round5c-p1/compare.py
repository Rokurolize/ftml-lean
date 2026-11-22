#!/usr/bin/env python3
# R5B-P1 comparison: campaign-standard norm + campaign frame mask.
import json, os, re, importlib.machinery, importlib.util

U = os.path.dirname(os.path.abspath(__file__))
P = "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe"
loader = importlib.machinery.SourceFileLoader("wikidot_probe", P)
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec); spec.loader.exec_module(probe)

captures = json.load(open(os.path.join(U, "captures.json"), encoding="utf-8"))
ref = {}
for line in open(os.path.join(U, "ref.jsonl"), encoding="utf-8"):
    r = json.loads(line)
    ref[r["id"]] = r.get("output", None)

# Campaign frame mask on top of norm(): token-id counter digits in generated
# ids are an owned class, not a rule-level divergence. norm() already handles
# inter-tag and trailing newlines, &nbsp;/U+00A0 spelling, tab ids and date
# attributes, numeric entities, script bodies and the newpage class.
def frame_mask(s):
    if s is None:
        return s
    s = re.sub(r"(footnoteref|footnote|bibitem)-\d+", r"\1-X", s)
    s = re.sub(r"\b(idx|index)-\d+", r"\1-X", s)
    return s

rows = []
for cid, cap in captures.items():
    live = probe.norm(cap["html"])
    refout = probe.norm(ref.get(cid))
    lm, rm = frame_mask(live), frame_mask(refout)
    rows.append({
        "id": cid,
        "valid": cap["valid"],
        "stable": cap["stable"],
        "source_matches": cap["saved_source_matches"],
        "html_sha256": cap["html_sha256"],
        "source_sha256": cap["source_sha256"],
        "live_norm": lm,
        "ref_norm": rm,
        "equal": (lm == rm),
    })

json.dump(rows, open(os.path.join(U, "comparison.json"), "w", encoding="utf-8"),
          ensure_ascii=False, indent=1)

print("id     eq  live_norm / ref_norm")
for r in rows:
    print("%-14s %-4s" % (r["id"], "EQ" if r["equal"] else "DIFF"))
    if not r["equal"]:
        print("   LIVE: " + str(r["live_norm"])[:700])
        print("   REF : " + str(r["ref_norm"])[:700])
print("equal:", sum(1 for r in rows if r["equal"]), "/", len(rows))
