#!/usr/bin/env python3
# R5F-P1 dispositions derived from comparison.json plus source reading.
# CONFIRMED only for a valid/stable/source-matching capture with a rule-level
# difference after the campaign norm and frame mask; Stage 2 tidy, owned
# whitespace spelling, inter-tag newlines and serving surfaces are owned and clear.
import json, os
from collections import Counter

U = os.path.dirname(os.path.abspath(__file__))

confirm = {
 "LA3-LOWERLI": ("C-R5F-P1-1",
  "List.php:568-578 (REFCORR12 flatten callback strips only raw-case ul/ol tags but the LI split at 575 is case-insensitive) and the synthetic gate at 504, plus sibling emission at 597-600",
  "ListRules.lean:1689-1696 (stripRawListTags12 filters tagIsRawCase), 1700-1713 (splitLiOpeners12 uses case-insensitive firstLiAt), 1787 and 1819-1825",
  "Source-reading inference, no Lean elaboration: the mirror pairs a raw-case-only ul/ol strip with a case-insensitive LI split and emits the same sibling/absorb split, so it inherits the wrong nesting for a lowercase nested li inside a raw-case failed-closer body."),
 "LA4-FTDOUBLE": ("C-R5F-P1-2",
  "List.php:531-550, specifically the first-match hoist break at 537 and the rtrim of insideProse12 at 548",
  "ListRules.lean:1681-1684 (splitFootnoteBlock12 splits at the first literal marker) and 1817-1818 (rtrimWs10 on insideProse)",
  "Source-reading inference, no Lean elaboration: the mirror splits at the first footnoteblock marker and then rtrims the inside prose, so it drops the Newline witness that live keeps inside the absorbing item; a second marker remains inside both implementations."),
 "LA5-FTPROSE": ("C-R5F-P1-3",
  "List.php:547-550 (rtrim(substr($leftover12,0,$hoistPos12)) discards the LF before the footnoteblock) with the wire at 596-600",
  "ListRules.lean:1681-1684 and 1817-1818 (splitFootnoteBlock12 then rtrimWs10 insideProse)",
  "Source-reading inference, no Lean elaboration: same changed rtrim-before-hoist mechanism as C-R5F-P1-2 with prose on both sides of the marker; the mirror also rtrims insideProse and inherits the lost <br />. The two IDs share one mechanism and one owning clause and are eligible for coordinator dedupe."),
 "LA6-NESTATTR": ("C-R5F-P1-4",
  "List.php:559-563 (leading-closer strip removes the closer run but leaves the following LF in the literal tail) with 568-579 and the absorb concatenation at 579/600",
  "ListRules.lean:1719-1732 (stripLeadingClosers12 drops leading whitespace when a closer was stripped) and 1822-1825",
  "Source-reading inference, no Lean elaboration: unlike PHP, the mirror's stripLeadingClosers12 returns s1 with the leading whitespace removed after the last stripped closer, so the mirror does NOT inherit this spurious-break defect; the PHP strip needs to trim the residual leading W run as the mirror already does."),
 "LA8-RESIDBR": ("C-R5F-P1-5",
  "List.php:559-563 and 568-579, same leading-closer strip plus residual-bracket boundary as LA6",
  "ListRules.lean:1719-1732 and 1819-1825",
  "Source-reading inference, no Lean elaboration: byte-distinct residual-bracket witness of the same PHP-only break defect as C-R5F-P1-4; the mirror's whitespace-dropping strip again avoids it, so the two are eligible for coordinator dedupe."),
 "LA9-LOWERCTRL": ("C-R5F-P1-6",
  "List.php:504 (the whole C1 fast path is gated on a synthetic/raw-case opener) and the generic synthetic tail path at 605-620",
  "ListRules.lean:1787 (opener must satisfy tagIsRawCase) and 1842-1854 (listExplicitPass fallback)",
  "Source-reading inference, no Lean elaboration: the mirror also restricts the general post-failed-close rule to a raw-case opener, so with a lowercase outer opener it keeps the nested raw-case list as genuine nesting and inherits the same divergence from live."),
}

cleared = {
 "LA1-OLTRAIL": "byte-identical after the standard mask: the REFCORR12 last-closer split keeps ZZZ inside the absorbing item for the OL tag on both sides; uppercase list degradation is an owned prior shape and not part of this comparison",
 "LA2-SCOREDOL": "byte-identical after the standard mask: the scored OL_ flag and the rewritten leftover split place ZZZ identically on both sides",
 "LA7-DBLFAIL": "byte-identical after the standard mask: the non-greedy first failed closer and the two-failed-closer cascade produce the same literal tail on both sides",
 "CL1-TRAILATTR": "CLEARED as an owned inter-tag-newline frame: the REFCORR12 rtrim emits the same trimmed class=\"t\" and the continued lead is bare on both sides; only <div>\\n<p> versus <div><p> differs",
 "CL2-UPPERATTR": "CLEARED as an owned inter-tag-newline frame: the uppercase opener, bare lead and trimmed type=\"t\" agree on both sides; only the inter-tag newline differs",
 "CL3-MULTATTR": "CLEARED as an owned inter-tag-newline frame: both trimmed attributes and the bare lead agree on both sides; only the inter-tag newline differs",
 "F1-BQJUMP3": "CLEARED as an owned inter-tag-newline frame: both sides build the same three-level blockquote with the same paragraphs; only newlines right after <blockquote> tags differ",
 "F2-COLNEST": "CLEARED as an owned Stage 2 tidy frame: the reference's misnested <li>x</div></div></div></li></ul> is repaired by live's purifyHtml to <li>x</li></ul> with the same collapsible structure; no rule-level value differs after the owned tidy transform",
 "F3-DBLSPACEBREAK": "CLEARED as an owned Stage 2 whitespace-spelling frame: both sides emit the same forced <br /> and the same text bytes; the sole residual one-space-before-the-break difference is the surface already cleared as N1-BRK2SPACE in rounds 5c and 5d. This ledger row was written as a fresh code-reading shape before the cached-round index was consulted; the post-probe disposition applies the standing owned class without re-litigation.",
 "F4-TABUNMATCH": "CLEARED as owned frames: after probe.norm masks the wdfiles host, random tab ids and date attributes, the only residual difference is inter-tag newlines; the recovered tab structure and literal [[tab B]] body agree on both sides",
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
