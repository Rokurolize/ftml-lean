#!/usr/bin/env python3
# R5H-P1 dispositions derived from comparison.json plus source reading.
# CONFIRMED only for a valid/stable/source-matching capture with a rule-level
# difference after the campaign norm and frame mask; inter-tag newlines, owned
# whitespace spelling, token/footnote frame digits and serving surfaces are owned.
# The save-normalized L-ADJ-S2CR case has no capture and is UNTESTABLE.
import json, os
from collections import Counter

U = os.path.dirname(os.path.abspath(__file__))

confirm = {
 "L-ADJ-SCOREALL": ("C-R5H-P1-1",
  "List.php:325-333 (REFCORR13 R13-S1 rewrites admit scored openers through (?:_)? but both closer patterns are bare \\[\\[\\/(?:ul|ol)\\]\\], so a skeleton with scored closers matches neither rewrite and falls to the generic synthetic/unclosed path at 605-680, which emits a list where live leaves the whole skeleton literal)",
  "ListRules.lean:659-670 (mirror blockCloserAt requires a bare \\]\\] immediately after the tag and has no scored-closer arm, exactly the PHP tagPattern closer exclusion, so scanTags never sees [[/UL_]] or [[/ul_]] as closers while blockOpenerAt still sees the scored openers) and 1943-1958 (listExplicitPass generic explLoop fallback)",
  "Source-reading inference, no Lean elaboration: the mirror's bare-closer parser shares the PHP scored-closer exclusion, so it appears to inherit the defect and a coupled PHP-plus-mirror correction is indicated."),
 "L-ADJ-NESTATTR": ("C-R5H-P1-2",
  "List.php:325-329 (REFCORR13 R13-S1 first pre-normalization rewrite admits an attributed nested lowercase opener through (?:\\s+[^\\]]*)? but its replacement rewrites the nested list as bare [[$4]], discarding the authored class attribute) with the generic path at 605-620",
  "ListRules.lean:1613-1642 (normalizeRawOuterLowNested13 reconstructs the nested opener as litBytes \"[[\" ++ lowerBytes n.tag ++ \"]]\" and never uses n.attrs, so the authored class is dropped exactly as in the PHP replacement)",
  "Source-reading inference, no Lean elaboration: the mirror byte-pairing rewrite discards TagMatch.attrs when rebuilding the sibling list opener, so it inherits the PHP attribute-loss defect and a coupled PHP-plus-mirror correction is indicated."),
 "L-ADJ-FTIN": ("C-R5H-P1-3",
  "List.php:530-561 (REFCORR13 R13-S3 hoist scans for a Footnoteblock token only in $tail12, the bytes after the C1 failed-closer match, so a marker authored inside the absorbing item body is never hoisted) with the absorbing-item assembly at 597-624",
  "ListRules.lean:1877-1926 (listPostFailedClose10 applies splitFootnoteBlock13 only to post1 = rtrimWs10 (post1 derived from post, the bytes after the first block closer), so an in-body marker earlier in pre remains in the absorbing item) and 1766-1779 (splitFootnoteBlock13)",
  "Source-reading inference, no Lean elaboration: the mirror hoist scans only the post-closer tail exactly as the PHP rewrite does, so it inherits the in-body-marker placement defect and a coupled PHP-plus-mirror correction is indicated."),
}

cleared = {
 "RAW-L3": "byte-identical after the standard mask: the later run of exactly three @ takes the REFCORR14 threshold-2 reassociation on both sides with the same span body and literal @ count; the old four-byte guard boundary is cleared.",
 "RAW-M2": "byte-identical after the standard mask: the minimal (middle two, later two) run pair reassociates identically on both sides, confirming the lowered guard at its smallest instance.",
 "RAW-OP5": "byte-identical after the standard mask: the five-byte opener surplus and the reassociated two-byte later run are shaped identically on both sides.",
 "RAW-TWOLATE": "byte-identical after the standard mask: the first-match later-run scan chooses the same two-byte run on both sides and the second run stays literal identically.",
 "RAW-NL": "byte-identical after the standard mask: the two-byte later run beyond the line bound does not reassociate on either side and the Newline witness and @ bytes agree.",
 "RAW-LONE": "byte-identical after the standard mask: the lone @ is placed in the same reassociated span on both sides.",
 "L-ADJ-LOWOL": "byte-identical after the standard mask: the bare lowercase ol outer emits the same sibling list, flattened raw-case item and tail on both sides; the ol branch of the R13-S1 rewrite is sound.",
 "L-ADJ-BLANK": "CLEARED as an owned inter-tag-newline frame: the two sibling lists, the forced break and the literal tail LI agree on both sides; the sole residual is one space between the sibling </ul> and <ul> boundaries from the doubled-LF seam.",
 "L-ADJ-S2CR": "UNTESTABLE: the authored CR 0x0D in the source was normalized by Wikidot on save, so the standard create tool's read-back verification failed (create.err) and no valid/stable/source-matching capture exists; save-normalized sources are UNTESTABLE by standing scope decision and are never counted as a clearance or a divergence.",
 "CL-SPANTYPE": "byte-identical after the standard mask: the scored span's ESC-bearing type value is kept verbatim on both sides by the REFCORR13 Span normalizer reached through the paragraph scored-span path.",
 "CL-DIVSTYLE": "CLEARED as an owned inter-tag-newline frame: the continued lead is bare, the DEL-bearing style value is trimmed identically on both sides, and only the space between <div> and <p> differs.",
 "CL-DIVDATA": "CLEARED as an owned inter-tag-newline frame: the continued lead is bare and the authored TAB in data-x collapses to one space identically on both sides; only the space between <div> and <p> differs.",
 "CL-SPANROLE": "byte-identical after the standard mask: the scored span's role value drops vertical tab identically on both sides by the REFCORR13 shared Span normalizer.",
}

caps = json.load(open(os.path.join(U, "captures.json"), encoding="utf-8"))
cases = [json.loads(x) for x in open(os.path.join(U, "cases.jsonl"), encoding="utf-8") if x.strip()]
maps = json.load(open(os.path.join(U, "map.json"), encoding="utf-8"))
rows = []
for rec in cases:
    cid = rec["id"]
    cap = caps.get(cid)
    ok = cap is not None and cap["valid"] and cap["stable"] and cap["saved_source_matches"] is not False
    if cid in confirm and ok:
        name, ref_lines, mirror_lines, mirror_note = confirm[cid]
        verdict = "CONFIRMED"
        reason = "valid/stable/source-matching live capture disagrees with the reference on a rule-level value after the campaign norm and frame mask"
    elif ok:
        name = ref_lines = mirror_lines = mirror_note = None
        verdict = "CLEARED"
        reason = cleared.get(cid, "standard-mask agreement")
    else:
        name = ref_lines = mirror_lines = mirror_note = None
        verdict = "UNTESTABLE"
        reason = cleared.get(cid, "capture not valid/stable/source-matching")
    rows.append({
      "id": cid, "candidate": name,
      "fullname": maps[cid]["fullname"] if cid in maps else ("muse-probe-round5h-p1-" + cid.lower().replace("_", "-")),
      "verdict": verdict, "reason": reason,
      "valid": cap["valid"] if cap else None,
      "stable": cap["stable"] if cap else None,
      "saved_source_matches": cap["saved_source_matches"] if cap else None,
      "html_sha256": cap["html_sha256"] if cap else None,
      "source_sha256": cap["source_sha256"] if cap else None,
      "owning_reference_lines": ref_lines, "mirror_lines": mirror_lines,
      "mirror_consequence": mirror_note,
    })
json.dump(rows, open(os.path.join(U, "verdicts.json"), "w", encoding="utf-8"),
          ensure_ascii=False, indent=1)
print("verdicts:", dict(Counter(r["verdict"] for r in rows)))
print("confirmed:", [r["candidate"] for r in rows if r["verdict"] == "CONFIRMED"])
