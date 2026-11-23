#!/usr/bin/env python3
"""Grade each R5D-R1 suspicion: live page-content vs reference render, masked.

Standard mask = wikidot-probe.norm(). Campaign frame mask additionally collapses
inter-tag whitespace and trims. Stage 2 tidy frame and serving-layer surfaces
are owned classes, never new divergences. A capture is usable only when
valid && stable && saved_source_matches; otherwise UNTESTABLE. A missing capture
is graded UNTESTABLE with that reason.
"""
import json, re, hashlib, importlib.machinery, importlib.util

U = "/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R5D-R1"
P = "/home/roku/.agents/skills/wikidot-py-operations/scripts/wikidot-probe"

loader = importlib.machinery.SourceFileLoader("wikidot_probe", P)
spec = importlib.util.spec_from_loader("wikidot_probe", loader)
probe = importlib.util.module_from_spec(spec)
spec.loader.exec_module(probe)


def frame_norm(html):
    if html is None:
        return None
    s = probe.norm(html)
    s = re.sub(r">\s+<", "><", s)
    return s.strip()


caps = json.load(open(U + "/captures.json", encoding="utf-8"))
refs = {}
for line in open(U + "/ref.jsonl", encoding="utf-8"):
    r = json.loads(line)
    refs[r["id"]] = r.get("output", r.get("error"))
cases = {}
for line in open(U + "/cases.jsonl", encoding="utf-8"):
    r = json.loads(line)
    cases[r["id"]] = r["source"]

results = []
for cid in sorted(cases):
    cap = caps.get(cid)
    ref = refs.get(cid)
    if cap is None:
        results.append({
            "id": cid, "page": None, "valid": False, "stable": None,
            "source_matched": False,
            "reason": "no capture record for this case; no valid double-fetch capture possible",
            "live_raw": None, "ref_raw": ref, "live_norm": None,
            "ref_norm": probe.norm(ref) if ref is not None else None,
            "live_frame": None, "ref_frame": frame_norm(ref) if ref is not None else None,
            "match_strict_mask": False, "verdict_frame_mask": "UNTESTABLE",
        })
        continue
    live_norm = probe.norm(cap["html"])
    ref_norm = probe.norm(ref) if ref is not None else None
    live_frame = frame_norm(cap["html"])
    ref_frame = frame_norm(ref) if ref is not None else None
    valid = bool(cap["valid"] and cap["stable"] and cap["saved_source_matches"])
    verdict = "UNTESTABLE" if not valid else ("CLEARED" if live_frame == ref_frame else "DIFF")
    results.append({
        "id": cid, "page": cap["fullname"], "valid": valid,
        "stable": cap["stable"], "source_matched": cap["saved_source_matches"],
        "live_raw": cap["html"], "ref_raw": ref,
        "live_norm": live_norm, "ref_norm": ref_norm,
        "live_frame": live_frame, "ref_frame": ref_frame,
        "match_strict_mask": live_norm == ref_norm,
        "verdict_frame_mask": verdict,
    })

with open(U + "/comparison.json", "w", encoding="utf-8") as f:
    json.dump(results, f, ensure_ascii=False, indent=1)
    f.write("\n")

print("sha256 comparison.json:", hashlib.sha256(open(U + "/comparison.json", "rb").read()).hexdigest())
print("total:", len(results))
counts = {}
for r in results:
    counts[r["verdict_frame_mask"]] = counts.get(r["verdict_frame_mask"], 0) + 1
    print("\n===", r["id"], r["verdict_frame_mask"], "strict-match=", r["match_strict_mask"])
    if r["verdict_frame_mask"] != "CLEARED":
        print("  LIVE frame:", repr(r["live_frame"]))
        print("  REF  frame:", repr(r["ref_frame"]))
    elif not r["match_strict_mask"]:
        print("  (frame-only diff) LIVE norm:", repr(r["live_norm"]))
        print("  (frame-only diff) REF  norm:", repr(r["ref_norm"]))
print("\nCOUNTS:", counts)
