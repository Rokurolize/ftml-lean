#!/usr/bin/env python3
# R5C-P1 dispositions derived from comparison.json, rule_view.json and source reading.
import json, os

U = os.path.dirname(os.path.abspath(__file__))

confirm = {
 "L1-C1LOWER": ("C-R5C-P1-1", "List.php:468-490 (C1 guard requires exact uppercase [[LI]] / [[/LI]] / [[/UL]])",
   "ListRules.lean:1603-1628 (listPostFailedClose9 exact literal skeleton), 1634-1637 (listExplicitPass dispatch)",
   "The mirror's fast path matches only the exact recorded uppercase [[LI]] skeleton, so a lowercase second item falls through to explLoop's generic synthetic tail absorption and the mirror forms two items with an unclosed list, inheriting the defect."),
 "L2-C1MIXCLOSE": ("C-R5C-P1-2", "List.php:317 (case-insensitive tagPattern), 361-382 (pairing break), 468-490 (C1 guard exact [[/UL]])",
   "ListRules.lean:1605 (listPostFailedClose9 preliteral), 1637 (generic fallback)",
   "The mixed-case closer still enters synthetic mode but misses the mirror's exact literal preimage, so the mirror falls through to the generic path and inherits the two-item/unclosed shape."),
 "L3-C1MULTI": ("C-R5C-P1-3", "List.php:469 (first-item body captured with [^\\n]*)",
   "ListRules.lean:1605 (exact literal preimage has a single-line first item)",
   "The mirror's preimage requires [[LI]]A[[/LI]] on one line; a multiline first item misses it and the generic path absorbs the second marker, so the defect is inherited."),
 "L4-C2ATTR": ("C-R5C-P1-4", "List.php:307-315 (C2 normalization hardcodes a bare uppercase inner opener)",
   "ListRules.lean:1581-1587 (normalizeUpperInner9 exact prefix with bare [[OL]])",
   "The mirror rewrite requires the exact bare [[OL]] inner opener; an attributed [[OL class=\"c\"]] misses it and explLoop builds one nested list with a literal lowercase-item label, inheriting the defect."),
 "L5-C2TAILNL": ("C-R5C-P1-5", "List.php:308 (C2 tail group ([^\\n]*)\\s*$)",
   "ListRules.lean:1585 (takeWhile (fun b => b != 10) keeps only a single-line tail)",
   "The mirror rewrite consumes only the first tail line, so a two-line tail leaves the normalization incomplete and the mirror inherits the nested-list/literal-label shape; no Lean elaboration was run."),
 "L6-C3INNERUL": ("C-R5C-P1-6", "List.php:288-298 (S1-02 normalization hardcodes inner [[ol]])",
   "ListRules.lean:1593-1596 (normalizeS1Tail9 exact prefix with [[ol]])",
   "The mirror rewrite hardcodes [[ol]] at depth two; an inner [[ul]] misses it and the generic path keeps a real inner item with different literal closers, so the defect is inherited."),
 "L7-C3ITEMNL": ("C-R5C-P1-7", "List.php:289 (S1-02 inner item captured with [^\\n]*)",
   "ListRules.lean:1594 (exact prefix has [[li]]b[[/li]] on one line)",
   "The mirror's exact prefix cannot match a multiline inner item, so the rewrite is skipped and the mirror inherits the real-inner-item/different-closer shape."),
 "L8-C4NESTED": ("C-R5C-P1-8", "List.php:789-791 (C4 whitespace-only collapse is guarded by attached_nested === 0)",
   "ListRules.lean:980-986 and 1010 (isWsByte branch requires attached.isEmpty), 1033-1039 (attached nested appended unconditionally)",
   "The mirror's whitespace-only branch is likewise disabled when attached nested blocks exist, so the raw newline survives and the mirror keeps one nested list where live splits into two; the defect is inherited."),
 "L9-C4SCORED": ("C-R5C-P1-9", "List.php:789-791 plus 987-993 (C4 collapse and scored follower skip)",
   "ListRules.lean:980 (empty body returns []), 1214-1218 and 1116 (dissolveBlock when surviving == 0)",
   "The mirror strips the whitespace-only item to empty, dissolves the list and skips the scored follower, so it renders empty where live renders the truncated unclosed <ul><li>; the defect is inherited."),
}

cleared = {
 "D1-DATAEMPTYFIRST": "rule-level equal after inter-tag-newline mask: reversing the authored-empty order keeps data-foo=\"2\" on both sides; the monotone flag fix is direction-agnostic here",
 "D2-DATAEMPTYMID": "rule-level equal after inter-tag-newline mask: a three-key nonempty/empty/nonempty collision keeps data-foo=\"3\" on both sides",
 "P1-SCOREDSPAN": "rule-level equal: Paragraph's scored-span lead/trail break filtering joins A and B into one paragraph on both sides",
 "N1-BRK2SPACE": "CLEARED as an owned Stage 2 whitespace frame: both sides emit the same forced <br /> and the same text a/b; the sole residual difference is one authored leading space before the break, which is the purifyHtml/Tighten whitespace-spelling surface excluded by the standing scope decision",
 "B1-DEEPTOBRANCH": "rule-level equal after inter-tag-newline mask: the three-to-one quote jump closes two levels and forms the lower-depth paragraph on both sides",
 "T1-TABTITLEATLT": "rule-level equal after Stage 2 frame mask: the @<Label>@ title is blanked to an empty tab anchor on both sides; script host, random tab ids and counter digits are owned surfaces",
 "C1-COLLNEST": "CLEARED as an owned Stage 2 whitespace frame: both sides build one collapsible containing A[[collapsible]]B with C[[/collapsible]] outside; the sole residual difference is one inter-element space, an owned purifyHtml frame",
}

caps = json.load(open(os.path.join(U, "captures.json"), encoding="utf-8"))
rows = []
for cid, cap in caps.items():
    if cid in confirm:
        name, ref_lines, mirror_lines, mirror_note = confirm[cid]
        verdict = "CONFIRMED"
        reason = "valid/stable/source-matching live capture disagrees with the reference on a rule-level value after the campaign mask and the stricter rule-level view"
    else:
        name = ref_lines = mirror_lines = mirror_note = None
        verdict = "CLEARED" if cap["valid"] and cap["stable"] and cap["saved_source_matches"] else "UNTESTABLE"
        reason = cleared.get(cid, "standard-mask agreement")
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
from collections import Counter
print("verdicts:", dict(Counter(r["verdict"] for r in rows)))
print("confirmed:", [r["candidate"] for r in rows if r["verdict"] == "CONFIRMED"])
