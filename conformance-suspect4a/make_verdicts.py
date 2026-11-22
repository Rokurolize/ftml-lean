#!/usr/bin/env python3
"""Emit one verdict file per suspicion from the cached live captures and ref renders."""
import json
import os
import re

OUT = os.path.dirname(os.path.abspath(__file__))
CAP = json.load(open(os.path.join(OUT, "captures.json"), encoding="utf-8"))
REF = {}
for line in open(os.path.join(OUT, "ref.jsonl"), encoding="utf-8"):
    o = json.loads(line)
    REF[o["id"]] = o.get("output", o.get("error"))
SRC = {}
for line in open(os.path.join(OUT, "cases.jsonl"), encoding="utf-8"):
    o = json.loads(line)
    SRC[o["id"]] = o["source"]

VERDICTS = [
    dict(sid="S4A-L1", verdict="CONFIRMED", candidate="C-SUSPECT4A-1",
         cases=["s4a-l1a", "s4a-l1b"],
         rationale="Live serves the nested form as a clean list: the lowercase outer opener pairs, the uppercase inner opener is recognized, and the inner item renders as an ordinary <li>. The reference's stack keeps the uppercase opener's raw case while lowercasing the closer, so the inner pair never matches; it synthesizes an unclosed list, strips the closer and leaves [[li]]b literal inside a sublist wrapper. Both probes diverge in tags and text, not in any Stage 2 frame surface. The fresh live hash for s4a-l1a equals the frozen muse-probe-refcorr5-lc-sib-nested-lower-ul-upper-ol hash, so the capture reproduces the prior ground. This is the nested-list half of the case classification REFCORR5 batch 1 recorded from live but did not implement in the pairing gate.",
         minimal="[[ul]] / [[li]]a / [[OL]] / [[li]]b[[/li]] / [[/ol]] / [[/li]] / [[/ul]]"),
    dict(sid="S4A-L2", verdict="CONFIRMED", candidate="C-SUSPECT4A-2",
         cases=["s4a-l2a", "s4a-l2b"],
         rationale="Live closes a lowercase opener with a cross-type uppercase closer, both when the closer is at end of source and when prose follows it. The reference's closer gate additionally requires the stack tag to equal the lowercased close tag, so [[/UL]] against an [[ol]] opener fails and the whole block stays literal in a <p>. This is exactly the C11 classification REPORT-REFCORR5 batch 1 recorded from the pinned lc-sib-cross-ul-ol-upper capture; the current code does not realize it. The divergence is structural, not a newline or entity-spelling surface.",
         minimal="[[ol]] / [[li]]a[[/li]] / [[/UL]]"),
    dict(sid="S4A-L3", verdict="CONFIRMED", candidate="C-SUSPECT4A-3",
         cases=["s4a-l3a", "s4a-l3b"],
         rationale="Live drops id, style and data-* attributes on an uppercase list opener, just as the pinned lc-sib-ul-upper-with-class shape dropped class. The reference's buildListAttrs is reached for an uppercase opener and emits the isolated id, style and data-x attributes on <ul>/<ol>; the tail is also absorbed differently (the uppercase opener never closes on live, so the closer and following text are swallowed). The attribute presence and the absorbed item text are substantive differences. This is the C1/C5/C6 classification from REPORT-REFCORR5 batch 1 that the current attribute path does not implement.",
         minimal="[[UL id=\"x\" style=\"color:red\"]] / [[LI]]A[[/LI]] / [[/uL]]"),
    dict(sid="S4A-L4", verdict="CONFIRMED", candidate="C-SUSPECT4A-4",
         cases=["s4a-l4a", "s4a-l4b"],
         rationale="Live degrades an uppercase opener with a plain item-less body to bare prose, with or without a following paragraph, while the reference builds a <ul>/<ol> wrapper with a list-style:none item. This is the C10 classification recorded in REPORT-REFCORR5 batch 1 from the pinned degraded-noli capture; the current reference still constructs a list. The difference is the presence of the list element itself, not a frame surface.",
         minimal="[[OL]] / plain body / [[/OL]] / blank line / AFTER"),
    dict(sid="S4A-L5", verdict="CLEARED", candidate=None,
         cases=["s4a-l5a", "s4a-l5b"],
         rationale="Both duplicate-case-variant shapes match the reference byte for byte after the Stage 2 trailing-newline mask. Live drops uppercase keys, keeps the lowercase duplicate, isolates id with u- and lowercases the data-* suffix, emitting the same <li> attribute set and order as buildListAttrs. No divergence at the <li> surface."),
    dict(sid="S4A-R1", verdict="CLEARED", candidate=None,
         cases=["s4a-r1a", "s4a-r1b", "s4a-r1c"],
         rationale="All three narrative-side and both-sides empty-Raw deflist shapes match the reference after the trailing-newline mask. The composite empty Raw renders to nothing in the <dd>, and termRendersEmpty omits the <dt> only when the term alone is the empty Raw, exactly as live serves. The pinned dl-empty4 shape is extended without divergence."),
    dict(sid="S4A-R2", verdict="CLEARED", candidate=None,
         cases=["s4a-r2a", "s4a-r2b"],
         rationale="An empty Raw embedded in term text and two empty Raw tokens in one term both match the reference. Live serves the residual literal @ bytes in <dt> exactly as termRendersEmpty plus the scanner leave them; no different run arithmetic appears."),
    dict(sid="S4A-R3", verdict="CLEARED", candidate=None,
         cases=["s4a-r3a", "s4a-r3b"],
         rationale="Both line-boundary empty-Raw shapes match the reference after the trailing-newline mask. Tighten's newline removal, placeholder deletion and space fold produce live's <p>A<br />B</p> bytes on the same source, so the order of those operations is live-correct at this boundary."),
    dict(sid="S4A-R4", verdict="CLEARED", candidate=None,
         cases=["s4a-r4a", "s4a-r4b"],
         rationale="Both empty-Raw-at-Colortext-edge shapes match the reference after the trailing-newline mask. The emitted span content and the hoisted/ejected spaces coincide, so the composite's placeholder deletion before the color edge passes is live-correct here."),
    dict(sid="S4A-M1", verdict="CLEARED", candidate=None,
         cases=["s4a-m1a", "s4a-m1b"],
         rationale="The wikidot-probe page-content capture is empty for a [[module css]] page because the CSS module emits a <style> element outside id=\"page-content\"; the full page HTML was therefore fetched once and cached under live-full-*.html. The full pages emit no CSS for a nested-module body, consistent with the reference capturing the inner module token as the outer body and the CSS module discarding that invalid CSS. The remaining visible difference is the documented serving-layer module placeholder (class S), not a parse or render defect. No divergence in the shapes the parse rule owns."),
    dict(sid="S4A-M2", verdict="CLEARED", candidate=None,
         cases=["s4a-m2a", "s4a-m2b"],
         rationale="For s4a-m2a the page-content bytes are <p>trailing</p> on both sides; the reference's module placeholder is the known serving-layer marker and the captured body is the trimmed 'body' that batch 7 settled. For s4a-m2b the full-page fetch shows no CSS, matching the reference's capture of the inner module token as the module654 body. No parse-side tail or nesting divergence survives."),
    dict(sid="S4A-T1", verdict="CLEARED", candidate=None,
         cases=["s4a-t1a", "s4a-t1b", "s4a-t1c"],
         rationale="All three enumeration neighbors match the reference. The quoted-bracket head and the uppercase [[/HCELL]] closer give byte-identical tables; the clean nested table differs only by the already-owned Stage 2 <td> cell-padding newline, which the frame mask removes. The enumeration repair's witness family extends to these live-serving neighbors without divergence."),
    dict(sid="S4A-P1", verdict="CLEARED", candidate=None,
         cases=["s4a-p1a", "s4a-p1b", "s4a-p1c", "s4a-p1d"],
         rationale="The two valid probes clear the rule: NBSP in a whitespace-only line is kept and spelled &nbsp; by live (the already-owned M72 entity-spelling family), and a vertical-tab-only line is stripped exactly as PCRE \\s predicts, both modulo the Stage 2 frame. The form-feed and space-only-line probes are UNTESTABLE rather than cleared or divergent: their saves did not verify on read-back and the cached captures show the saved source was normalized to a blank line (saved_source_matches=false, valid=false), so those bytes never reached live under the intended source. No divergence in the testable surface."),
]


def norm(s):
    if s is None:
        return None
    return re.sub(r">\s*\n\s*<", "><", s.replace("&nbsp;", "\xa0")).strip()


index = []
for v in VERDICTS:
    sid = v["sid"]
    lines = ["# Verdict {sid} — SUSPECT4-A".format(sid=sid), ""]
    lines.append("Verdict: {v}{cand}".format(
        v=v["verdict"],
        cand=" (routed as " + v["candidate"] + ")" if v["candidate"] else ""))
    lines.append("")
    lines.append("Pre-probe ledger: LEDGER-PREPROBE.md, section {sid}. Rationale: {r}".format(sid=sid, r=v["rationale"]))
    lines.append("")
    if "minimal" in v:
        lines.append("Minimal shape: {m}".format(m=v["minimal"]))
        lines.append("")
    for cid in v["cases"]:
        cap = CAP[cid]
        ref = REF[cid]
        lines.append("## {cid} — {page}".format(cid=cid, page=cap["fullname"]))
        lines.append("")
        lines.append("Capture valid={v} stable={s} saved_source_matches={m}; source sha256 {h}.".format(
            v=cap["valid"], s=cap["stable"], m=cap["saved_source_matches"], h=cap["source_sha256"]))
        lines.append("")
        lines.append("Source: `{src}`".format(src=SRC[cid]))
        lines.append("")
        lines.append("Live bytes: `{b}`".format(b=cap["html"]))
        lines.append("")
        lines.append("Reference bytes (this tree's ref-php batch.php render): `{b}`".format(b=ref))
        lines.append("")
        lines.append("Frame-masked comparison: {cmp}.".format(
            cmp="MATCH" if norm(cap["html"]) == norm(ref) else "DIFF"))
        lines.append("")
    lines.append("Reference command: `cd ref-php && php harness/batch.php render < ../conformance-suspect4a/cases.jsonl > ../conformance-suspect4a/ref.jsonl` (exit 0, empty stderr).")
    lines.append("")
    path = os.path.join(OUT, "verdict-" + sid + ".md")
    with open(path, "w", encoding="utf-8") as f:
        f.write("\n".join(lines) + "\n")
    index.append("{sid}: {verdict}{cand}".format(
        sid=sid, verdict=v["verdict"],
        cand=" (" + v["candidate"] + ")" if v["candidate"] else ""))

with open(os.path.join(OUT, "VERDICTS.md"), "w", encoding="utf-8") as f:
    f.write("# VERDICTS — SUSPECT4-A\n\n")
    f.write("One file per suspicion sits beside this index. Live bytes are the cached wikidot-probe page-content captures; reference bytes are this tree's ref-php harness on the same source. The frame mask strips inter-tag newlines, trailing newlines and the &nbsp;/U+00A0 spelling, all already-owned surfaces.\n\n")
    for line in index:
        f.write(line + "\n")
print("\n".join(index))
