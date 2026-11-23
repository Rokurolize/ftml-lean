#!/usr/bin/env python3
# R5D-P1 dispositions derived from comparison.json, rule_view.json,
# comparison-addendum.json and source reading. A verdict is CONFIRMED only
# for a valid/stable/source-matching capture with a rule-level difference
# after the campaign norm and frame mask; owned Stage 2 surfaces clear.
import json, os
from collections import Counter

U = os.path.dirname(os.path.abspath(__file__))

# cid -> (candidate, owning reference lines, mirror lines, mirror consequence)
confirm = {
 "L1-C1RESBR": ("C-R5D-P1-1",
   "List.php:487-509 (C1 fast path requires a bare [[/(ul|ol)]] immediately before LF; residualBracket from tagPattern:317 is not admitted)",
   "ListRules.lean:1636-1675 (listPostFailedClose10 keys on the first closer's post tail), 1431-1433 (stripBlockCloserTag / absorbTailTrim)",
   "Source-reading inference, no Lean elaboration: the mirror's general post-failed-close predicate recognises the closer token with its optional residual bracket and still takes the closed-one-item fast path, so it is inferred to keep the reference's two-item/unclosed shape rather than live's one closed item with the literal ] byte."),
 "L2-C1BLANK": ("C-R5D-P1-2",
   "List.php:488 (C1 regex anchors the failed closer and second [[li]] with exactly one \\n)",
   "ListRules.lean:1644-1649 (listPostFailedClose10 finds the first closer and applies post.dropWhile isWsByte before liOpenerAt)",
   "Source-reading inference, no Lean elaboration: the mirror predicate is whitespace-agnostic around the second marker and so may already produce live's one-closed-item shape for the blank-line sibling; this is a PHP-versus-mirror inconsistency to check before adopting a correction, not a claim that the mirror fails."),
 "L4-NATEMPTY": ("C-R5D-P1-3",
   "List.php:664-688 (empty-item nested-list predicate strips only \\s and EXPLIST placeholders), 853-865 (native-list placeholder is nested inside the item)",
   "ListRules.lean:971-1019 (formatItem: b1.isEmpty && attached.isEmpty guard; wholeMask b1 \"NATLIST_\" branch), 1177-1180 (maskNative before build)",
   "Source-reading inference, no Lean elaboration: a NATLIST placeholder is non-empty at the 980 guard, so the mirror takes the wholeMask NATLIST branch and nests the native list inside a non-empty explicit item, inheriting the reference's shape rather than live's sibling list."),
 "L5-EMPTYNESTEDNL": ("C-R5D-P1-4",
   "List.php:664-688 (siblingAfter tail from the empty-item nested split), 1033-1076 (finalizeExplicitListBoundaries follower on the blank-line run)",
   "ListRules.lean:1193-1223 (buildExplicit attachedOf / surviving / wrap paths), 1498-1530 (finalize boundary newlines)",
   "Source-reading inference, no Lean elaboration: the mirror's disclosed REFCORR10 limitation is that the PHP empty-item-nested sibling split is not transcribed as a separate predicate, so the extra live break after the sibling list is not reproduced by the mirror; the exact break count needs elaboration to confirm."),
 "L6-NESTEDCLOSEEMPTY": ("C-R5D-P1-5",
   "List.php:454-472 (nested-list gate sets unclosed7=false for any nested-list opener, including a byte-empty [[ul]][[/ul]])",
   "ListRules.lean:1399-1400 (syntheticUnclosed), 1434-1435 (hasNestedBlock from registered blocks)",
   "Source-reading inference, no Lean elaboration: a byte-empty nested list dissolves to an explicit_empty token and may not register as an ExplBlock, so hasNestedBlock can remain false and the mirror can keep the unclosed truncated shape; whether that matches live or the reference needs elaboration."),
 "L7-C4SCOREDNESTED": ("C-R5D-P1-6",
   "List.php:664-688 (nested split), 729 (sibling tail follower), 838-848 (scored empty item), 1041-1047 (scored follower suppression)",
   "ListRules.lean:1602-1624 (listScoredEmptyItem10 ignores attached nested lists), 1105-1113 (wrapListTokensUnclosed)",
   "Source-reading inference, no Lean elaboration: the mirror's scored-empty predicate checks only item-body emptiness and emits a bare <li> with no sibling nested list and no trailing break, so it is inferred to inherit at least the missing sibling placement; no Lean elaboration was run."),
}

cleared = {
 "L3-C1CROSSTAG": "standard-mask and rule-level equal: the cross-tag [[/OL]] failed closer is consumed by the C1 fast path on both sides into one closed item with literal markers; no rule-level difference",
 "D1-IDFFLEADWS": "rule-level equal after the inter-tag-newline frame: a literal U+FFFD is not converted to the \\xFF token delimiter, so both sides apply normal u- isolation and emit id=\"u- <U+FFFD>abc\"; this row is not evidence about the REFCORR10 0xFF arm (see LEDGER-ADDENDUM.md)",
 "D2-IDFFONLY": "rule-level equal after the inter-tag-newline frame: both sides emit id=\"u-<U+FFFD>\" for a literal U+FFFD; the genuine token-placeholder siblings are D3 and D4",
 "P1-SCOREDSPANATTR": "byte-identical after the standard mask: the attributed scored span keeps a bare <span class=\"c\">X</span> on both sides with no wrapper",
 "P2-SCOREDANCHORMID": "byte-identical after the standard mask: a mid-line scored anchor is wrapped in the same single paragraph on both sides",
 "N1-BRK3SPACE": "CLEARED as an owned Stage 2 whitespace-spelling frame: both sides emit the same forced <br /> and the same text bytes a/b; the sole residual difference is one authored space before the break, the same purifyHtml/Tighten surface cleared as N1-BRK2SPACE in round 5c",
 "B1-DEEPEMPTY": "CLEARED as an owned inter-tag-newline frame: both sides build the same three-level nested blockquote with the same paragraph at depth three; only <blockquote><p> versus <blockquote> <p> differs",
 "B2-MARKERNOSPACE": "byte-identical after the standard mask: both sides keep >a and >b as literal text with no blockquote container",
 "T1-TABATTRDUP": "CLEARED as an owned Stage 2 tidy frame: both sides leak the same duplicated class=\"c\" class=\"c\" literal text; the sole difference is the reference's misnested <p> around the tabview div, which live's purifyHtml tidy removes, plus the owned script host and random tab ids",
 "T2-TABWS": "CLEARED as an owned inter-tag-newline frame: both sides collapse the tab-and-spaces title to the same tab label A B and build the same single tabview; script host and random tab ids are owned",
 "C1-COLLTRAIL": "CLEARED as an owned Stage 2 whitespace frame: both sides build one collapsible with the same body and the same literal trailing B[[/collapsible]]; the sole residual difference is one inter-element space",
 "D3-IDFFSIZELEAD": "rule-level equal after the inter-tag-newline frame: a genuine [[size]] token placeholder with a leading space yields <div id=\"\"> on both sides, so the REFCORR10 general 0xFF arm is confirmed correct at this sibling",
 "D4-IDFFSIZEBARE": "rule-level equal after the inter-tag-newline frame: a genuine bare [[size]] token placeholder yields <div id=\"\"> on both sides, so the removal of the u- prefix exclusion is correct at its minimal boundary",
}

caps = {}
for fn in ("captures.json", "captures-addendum.json"):
    caps.update(json.load(open(os.path.join(U, fn), encoding="utf-8")))

rows = []
for cid, cap in caps.items():
    ok = cap["valid"] and cap["stable"] and cap["saved_source_matches"] is not False
    if cid in confirm and ok:
        name, ref_lines, mirror_lines, mirror_note = confirm[cid]
        verdict = "CONFIRMED"
        reason = "valid/stable/source-matching live capture disagrees with the reference on a rule-level value after the campaign norm and frame mask and the stricter rule-level view"
    elif ok:
        name = ref_lines = mirror_lines = mirror_note = None
        verdict = "CLEARED"
        reason = cleared.get(cid, "standard-mask agreement")
    else:
        name = ref_lines = mirror_lines = mirror_note = None
        verdict = "UNTESTABLE"
        reason = "capture not valid/stable/source-matching"
    rows.append({
      "id": cid, "candidate": name, "fullname": cap["fullname"],
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
