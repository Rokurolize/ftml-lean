#!/usr/bin/env python3
# R5E-P1 dispositions derived from comparison.json plus source reading.
# CONFIRMED only for a valid/stable/source-matching capture with a rule-level
# difference after the campaign norm and frame mask; Stage 2 tidy and
# inter-tag-newline frames are owned and clear.
import json, os
from collections import Counter

U = os.path.dirname(os.path.abspath(__file__))

confirm = {
  "L1-TRAILPROSE": ("C-R5E-P1-1",
    "List.php:501-537, specifically the greedy leftover11 split at 512-517 and the append of $leftover11 after explicit_list_end at 535",
    "ListRules.lean:1648-1660 (splitLastCloser11), 1718-1730 (listPostFailedClose10 builds ePh ++ leftover11)",
    "Source-reading inference, no Lean elaboration: the mirror's splitLastCloser11 returns the bytes after the final closer as leftover11 and emits them after the list-end placeholder, so it inherits the reference's placement of ZZZ after </ul> rather than live's inside-the-last-item placement; a correction must move both PHP and mirror."),
  "L5-SCOREDTRAIL": ("C-R5E-P1-2",
    "List.php:501-537 (same REFCORR11 leftover split), with the scored opener flag carried into explicit_list_start/end at 523 and 533",
    "ListRules.lean:1716-1730 (op.scored passed to both list tokens; leftover11 appended after ePh)",
    "Source-reading inference, no Lean elaboration: the mirror carries op.scored on both list tokens and still appends the leftover after the list end, so it inherits the same scored-opener placement defect; this is the same mechanism as C-R5E-P1-1 with a scored opener and may be deduped by the coordinator."),
}

cleared = {
  "L2-DBLCLOSER": "byte-identical after the standard mask: the greedy last-closer split keeps the cross-tag [[/OL]] literal in the item on both sides; no rule-level difference",
  "L3-NOLF": "byte-identical after the standard mask: the zero-leading-LF adjacency produces one closed item with a literal [[LI]]B on both sides",
  "L4-MULTILI": "byte-identical after the standard mask: both following LI markers stay literal inside the single closed item on both sides",
  "C4-DIVRESID": "byte-identical after the standard mask: the residual-bracket [[div]]] is not a continued-div opener on either side and ordinary continuation joins the lead into one paragraph",
  "F3-DIVC0": "byte-identical after the standard mask: normalizeValue deletes the embedded form feed and collapses a\\fb to class 'a b' exactly as live does",
  "F4-DIVTABATTR": "byte-identical after the standard mask: a literal tab after 'div' is admitted as the attribute separator and both sides emit the same class c",
  "C1-DIVSCORED": "CLEARED as an owned Stage 2 tidy frame: the reference emits a misnested <p> around the scored div (raw '<p>alpha <div>bravo</div></p>\\n\\n'), which live's purifyHtml tidy removes, leaving the lead bare; this is the same owned misnested-paragraph-around-a-div surface cleared as T1-TABATTRDUP in round 5d, not a new rule-level value",
  "C2-DIVUPPER": "CLEARED as an owned inter-tag-newline frame: the uppercase continued opener and bare lead are identical on both sides; only <div>\\n<p> versus <div><p> differs",
  "C3-DIVATTR": "CLEARED as an owned inter-tag-newline frame: the attributed div head and bare lead are identical on both sides; only the inter-tag newline differs",
  "C5-CHAIN": "CLEARED as an owned inter-tag-newline frame: the chained continuations join to the same 'alphabeta' lead and the same div on both sides",
  "C6-TOKENLEAD": "CLEARED as an owned inter-tag-newline frame: the literal [[size 12px]] lead and the div are identical on both sides, so the REFCORR11 lead-string comparison does not lose the wrapper",
  "F1-BQMIXED": "CLEARED as an owned inter-tag-newline frame: both sides build the same two-level blockquote with the same paragraph at depth two",
  "F2-COLLEMPTY": "CLEARED as an owned inter-tag-newline frame: the byte-empty collapsible is not suppressed on either side and the same full container is emitted",
  "F5-BRKQUOTE": "CLEARED as an owned inter-tag-newline frame: the forced break inside the quote is a single <br /> and the same paragraph on both sides",
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
