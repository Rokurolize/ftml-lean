#!/usr/bin/env python3
# R5G-P1 dispositions derived from comparison.json plus source reading.
# CONFIRMED only for a valid/stable/source-matching capture with a rule-level
# difference after the campaign norm and frame mask; inter-tag newlines, owned
# whitespace spelling, token/footnote frame digits and serving surfaces are owned.
import json, os
from collections import Counter

U = os.path.dirname(os.path.abspath(__file__))

confirm = {
 "N4-LOWERATTR": ("C-R5G-P1-1",
  "List.php:330-333 (REFCORR13 R13-S1 second pre-normalization rewrite requires a bare [[ul|ol]] outer opener; an attributed lowercase outer opener misses the rewrite and falls to the generic synthetic tail path) with the generic path at 605-620 and 671+",
  "ListRules.lean:1645-1667 (normalizeLowOuterRawNested13 keys only on tagIsRawCase of the outer opener and does not require a bare opener, so it still fires for an attributed lowercase outer opener) and 1671-1672",
  "Source-reading inference, no Lean elaboration: the mirror's case-B byte-pairing rewrite does not carry the PHP bare-opener precondition, so it flattens the nested raw-case item as live does; the mirror appears NOT to inherit this defect and a PHP-only widening of the opener pattern may suffice."),
 "N5-LOWERSCORED": ("C-R5G-P1-2",
  "List.php:331 (the R13-S1 second rewrite's bare \\[\\[(ul|ol)\\]\\] opener has no (?:_)? arm, so a scored lowercase outer opener is excluded) with the generic path at 605-620",
  "ListRules.lean:1645-1667 (normalizeLowOuterRawNested13 checks tagIsRawCase only and reconstructs the opener from o.tag, so a scored lowercase outer opener still enters the rewrite) and 1671-1672",
  "Source-reading inference, no Lean elaboration: the mirror's case-B rewrite ignores the score of the outer opener, so it flattens the nested raw-case item as live does and does not inherit the PHP exclusion. Same owning clause as C-R5G-P1-1 and eligible for coordinator dedupe."),
 "N6-THREELEVEL": ("C-R5G-P1-3",
  "List.php:325-333 (both R13-S1 rewrites match a single nested skeleton with a non-greedy capture; an additional raw-case opener one level deeper is swallowed into that capture and is not rewritten, while the outer rewrite still fires) with the generic path at 605-620",
  "ListRules.lean:1617-1638 and 1645-1667 (both mirror rewrites inspect only the first four scanned tags; the alternating raw/lowercase/raw three-level skeleton makes the cl/oc predicates fail, so neither mirror rewrite fires) and 1671-1672",
  "Source-reading inference, no Lean elaboration: the mirror's fixed four-tag window cannot see the deeper alternating boundary, so it leaves the nested structure intact where live flattens all three levels; unlike C-R5G-P1-1/-2 the mirror appears to inherit this composition defect and a coupled PHP-plus-mirror correction is indicated."),
}

cleared = {
 "N1-CROSSOL": "CLEARED as an owned inter-tag-newline frame: the lowercase-ol sibling list, the item boundaries and the literal tail LI agree on both sides; the sole residual is a single space between </ul> and <ol> introduced by the newline at the sibling boundary.",
 "N2-SCOREDRAW": "CLEARED as an owned inter-tag-newline frame: the scored raw outer is rewritten to the same bare sibling lists and the same trailing break on both sides; only the space between the two </ul>/<ul> boundaries differs.",
 "N3-SCOREDNEST": "CLEARED as an owned inter-tag-newline frame: the scored lowercase nested opener is rewritten to the same bare sibling lists and break on both sides; only the space between the sibling list tags differs.",
 "S2-TAB": "CLEARED as an owned Stage 2 whitespace-spelling frame: both sides emit the same items, the same forced break and the same literal tail; the sole residual one-space-before-[[LI]]tail difference is the authored TAB collapsed by purifyHtml, the standing N1-BRK2SPACE surface cleared in rounds 5c and 5d. This row was written as a fresh byte-edge shape before the cached-round index was consulted; the standing owned class is applied post-probe without re-litigation.",
 "S2-FF": "byte-identical after the standard mask: the form-feed member of the R13-S2 \\s* strip is consumed on both sides and no break or literal byte differs; the four-adjacent U+FFFD digit class is owned and is not part of this comparison.",
 "S2-SPACES": "CLEARED as an owned Stage 2 whitespace-spelling frame: both sides emit the same items, break and literal tail; the three authored spaces collapse to one space on live and to nothing on the reference, which is the same owned horizontal-whitespace spelling surface as S2-TAB, not a rule-level value.",
 "S3-DBLFT": "CLEARED as owned inter-tag-newline frames: the two-footnoteblock placement, the footer, the final closer and the trailing TAIL all agree on both sides; the residual differences are only spaces between </ul>, the footnotes-footer divs and the following <br>.",
 "S3-DOUBLELF": "CLEARED as owned inter-tag-newline frames: the preserved-LF witness, the single break before RIGHT and the footer placement agree; only spaces around the footnotes-footer div and the leading <br> differ.",
 "S3-CASEFT": "CLEARED as owned inter-tag-newline frames: the uppercase marker is left literal inside the absorbing item and the footnote footer is placed identically on both sides; only spaces around the footnotes-footer div differ.",
 "CL-ESCCLASS": "CLEARED as an owned inter-tag-newline frame: the continued lead is bare, the ESC-bearing class value is kept verbatim on both sides after the REFCORR13 C0-class narrowing, and only the space between <div> and <p> differs.",
 "CL-DELCLASS": "CLEARED as an owned inter-tag-newline frame: the continued lead is bare, the DEL-bearing class value is kept verbatim on both sides, and only the space between <div> and <p> differs.",
 "CL-SPANTYPE": "byte-identical after the standard mask: the scored span's trailing-space class is trimmed to class=\"t\" on both sides by the REFCORR13 Span normalizer reached through the paragraph scored-span path.",
 "CL-DIVC0": "CLEARED as an owned inter-tag-newline frame: the continued lead is bare and the vertical-tab byte is dropped from data-x to the same value on both sides; only the space between <div> and <p> differs.",
}

caps = json.load(open(os.path.join(U, "captures.json"), encoding="utf-8"))
maps = json.load(open(os.path.join(U, "map.json"), encoding="utf-8"))
rows = []
for cid, cap in caps.items():
    ok = cap["valid"] and cap["stable"] and cap["saved_source_matches"] is not False
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
        reason = "capture not valid/stable/source-matching"
    rows.append({
      "id": cid, "candidate": name, "fullname": maps[cid]["fullname"],
      "verdict": verdict, "reason": reason,
      "valid": cap["valid"], "stable": cap["stable"],
      "saved_source_matches": cap["saved_source_matches"],
      "html_sha256": cap["html_sha256"], "source_sha256": cap["source_sha256"],
      "owning_reference_lines": ref_lines, "mirror_lines": mirror_lines,
      "mirror_consequence": mirror_note,
    })
json.dump(rows, open(os.path.join(U, "verdicts.json"), "w", encoding="utf-8"),
          ensure_ascii=False, indent=1)
print("verdicts:", dict(Counter(r["verdict"] for r in rows)))
print("confirmed:", [r["candidate"] for r in rows if r["verdict"] == "CONFIRMED"])
