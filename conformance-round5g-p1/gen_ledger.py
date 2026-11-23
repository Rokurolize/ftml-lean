#!/usr/bin/env python3
# R5G-P1 pre-probe ledger generator. Emits LEDGER.md and cases.jsonl from one
# in-memory table so the case source identities cannot drift from the prose.
# Run this BEFORE any page creation; re-running it after probing is forbidden.
import json, os

U = os.path.dirname(os.path.abspath(__file__))

# (id, family, construct, why_the_reference_looks_wrong,
#  confirm_live_byte, clear_byte, freshness_reason, source)
ROWS = [
 ("N1-CROSSOL", "List nested-boundary symmetry (REFCORR13 R13-S1)",
  "raw-case UL outer with a lowercase OL nested list inside the failed-closer item body",
  "REFCORR13 added the first symmetric pre-normalization rewrite at List.php:325-329, which admits both ul and ol as the nested lowercase tag and writes the nested tag back from capture $4. The corrected rewrite was validated only on a nested lowercase ul witness, so the ol branch of the same rewrite is unmeasured; live decides a nested list's fate by its own case and may keep the lowercase ol paired with the raw-case outer differently, leaving a different item or list boundary after the rewrite.",
  "a valid stable capture where the emitted list tag, the number of sibling lists or the placement of the tail LI differs between live and the reference at rule level",
  "byte-identical normalized content with the lowercase ol emitted as a sibling list and the tail LI in the same position on both sides",
  "Third-order sibling of the REFCORR13 R13-S1 nested-case rewrite: the newly added rewrite's ol branch has no cached witness and the prior lowercase-ul confirmation is not re-probed verbatim.",
  "[[UL]]\n[[LI]]outer[[ol]]\n[[li]]in[[/li]]\n[[/ol]]\n[[/LI]]\n[[/UL]]\n[[LI]]tail[[/LI]]\n[[/UL]]"),

 ("N2-SCOREDRAW", "List nested-boundary symmetry (REFCORR13 R13-S1)",
  "scored raw-case UL_ outer with a lowercase nested ul inside the failed-closer item body",
  "The first R13-S1 rewrite's outer opener at List.php:326 admits the scored form through (?:_)? but its replacement at line 327 hardcodes the bare literal [[ul]], so the scored flag and the raw-case marker are both discarded when the skeleton matches. Scored openers suppress a trailing Newline witness in the generic path, so a scored outer whose sibling list is emitted without the score may differ from live where the authored score survives the case-symmetry rewrite.",
  "a valid stable capture where the trailing break after the tail LI, the list tag or the item boundaries differ from the reference at rule level",
  "byte-identical normalized content with the same sibling lists and the same scored trailing-break behavior on both sides",
  "Third-order sibling of the REFCORR13 R13-S1 rewrite: the scored outer branch is admitted by the changed regex but the replacement drops the flag, an interaction no cached case exercises and no fixed shape is re-probed.",
  "[[UL_]]\n[[LI]]outer[[ul]]\n[[li]]in[[/li]]\n[[/ul]]\n[[/LI]]\n[[/UL]]\n[[LI]]tail[[/LI]]\n[[/UL]]"),

 ("N3-SCOREDNEST", "List nested-boundary symmetry (REFCORR13 R13-S1)",
  "raw-case UL outer with a scored lowercase ul_ nested opener",
  "The first R13-S1 rewrite admits a scored nested lowercase opener through (?:_)? at List.php:326 but its replacement at line 327 rewrites the nested list as bare [[$4]], dropping the nested score. Because a scored opener changes break suppression and the rewrite is applied before the tag-pattern loop at line 335, the emitted sibling list may carry the wrong scored state relative to live, which decides sibling emission by the nested tag's own case and score.",
  "a valid stable capture where the nested list's scored trailing break or its sibling placement differs from the reference",
  "byte-identical normalized content with the scored nested list emitted with the same break behavior on both sides",
  "Third-order sibling of the REFCORR13 R13-S1 nested-opener arm: the scored nested case is newly admitted and its flag loss in the replacement is unmeasured; no prior confirmed shape is re-probed verbatim.",
  "[[UL]]\n[[LI]]outer[[ul_]]\n[[li]]in[[/li]]\n[[/ul]]\n[[/LI]]\n[[/UL]]\n[[LI]]tail[[/LI]]\n[[/UL]]"),

 ("N4-LOWERATTR", "List nested-boundary symmetry (REFCORR13 R13-S1)",
  "attributed lowercase ul outer opener with a raw-case nested UL inside the failed-closer body",
  "The second R13-S1 rewrite at List.php:330-333 requires a bare lowercase opener \[\\[(ul|ol)\\]\\] with no attribute arm, so an attributed lowercase outer opener falls through to the generic synthetic tail path even though live decides the nested raw-case boundary by its own case regardless of the outer opener's attributes. The changed rewrite is therefore narrower than the rule it states, and the surviving generic path may nest the raw-case item where live flattens it.",
  "a valid stable capture where the reference keeps the nested raw-case item inside the outer list while live flattens it, or the literal tail bytes differ",
  "byte-identical normalized content with the attributed lowercase outer list and the flattened nested item handled identically on both sides",
  "Third-order sibling of the REFCORR13 R13-S1 lowercase-outer rewrite: the bare-opener precondition is newly introduced by the correction and has no cached witness; the prior lowercase-outer confirmation used a bare opener and is not re-probed verbatim.",
  "[[ul class=\"o\"]]\n[[LI]]outer[[UL]]\n[[LI]]in[[/LI]]\n[[/UL]]\n[[/LI]]\n[[/ul]]\n[[LI]]tail[[/LI]]\n[[/ul]]"),

 ("N5-LOWERSCORED", "List nested-boundary symmetry (REFCORR13 R13-S1)",
  "scored lowercase ul_ outer opener with a raw-case nested UL inside the failed-closer body",
  "The second R13-S1 rewrite's outer opener at List.php:331 is the bare pattern \[\\[(ul|ol)\\]\\] with no (?:_)? arm, so a scored lowercase outer opener is excluded from the newly added symmetric rewrite. Live applies the nested-boundary decision by the nested tag's own case without conditioning on the outer score, so the generic path taken by the reference may preserve a nested list that live flattens or emit a different trailing break.",
  "a valid stable capture where the nested raw-case boundary, the item count or the trailing break differs from the reference at rule level",
  "byte-identical normalized content with the scored lowercase outer list and the flattened nested item handled identically on both sides",
  "Third-order sibling of the REFCORR13 R13-S1 lowercase-outer rewrite: the scored-outer exclusion is a direct consequence of the changed bare-opener regex and is unmeasured; the fixed bare lowercase shape is not re-probed verbatim.",
  "[[ul_]]\n[[LI]]outer[[UL]]\n[[LI]]in[[/LI]]\n[[/UL]]\n[[/LI]]\n[[/ul]]\n[[LI]]tail[[/LI]]\n[[/ul]]"),

 ("N6-THREELEVEL", "List nested-boundary symmetry (REFCORR13 R13-S1)",
  "three-level nesting that alternates raw-case, lowercase and raw-case openers before the failed closer",
  "Both R13-S1 rewrites at List.php:325-333 describe a single nested-list skeleton and use a non-greedy .*? inside capture $4, so an additional raw-case opener nested one level deeper is swallowed into that capture rather than rewritten by its own rule. Live decides each nesting boundary independently by its own opener case, so the outer rewrite may consume a deeper raw-case opener that live treats as its own item boundary, changing the number of emitted lists and the placement of the final literal tail.",
  "a valid stable capture where the count of sibling or nested lists, the item boundaries or the final tail placement differs from the reference at rule level",
  "byte-identical normalized content with the three-level case-alternating structure resolved into the same lists on both sides",
  "Third-order sibling of the REFCORR13 R13-S1 single-skeleton rewrite: the deeper alternating case is a composition edge of the changed pre-normalization and has no cached witness; it is not a re-probe of any fixed byte shape.",
  "[[UL]]\n[[LI]]A[[ul]]\n[[li]]B[[UL]]\n[[LI]]C[[/LI]]\n[[/UL]]\n[[/li]]\n[[/ul]]\n[[/LI]]\n[[/UL]]\n[[LI]]D[[/LI]]\n[[/UL]]"),

 ("S2-TAB", "List closer-strip residual whitespace (REFCORR13 R13-S2)",
  "leading closer run followed by a TAB then LF in the flattened nested-item tail",
  "R13-S2 appended a trailing \\s* to the leading-closer strip at List.php:581-583 so the stripped closer's own line end is consumed together with it. In non-Unicode PCRE \\s also covers TAB 0x09, so the corrected regex removes a TAB that live may treat as an authored inline witness before the next item; the byte class of the newly added \\s* was validated on an LF-only witness and the TAB member is unmeasured.",
  "a valid stable capture where a surviving tab, an extra break or a different literal tail appears on one side after the closer run",
  "byte-identical normalized content with both sides consuming the closer and the TAB identically",
  "Third-order sibling of the REFCORR13 R13-S2 closer-strip whitespace edge: the newly added \\s* admits TAB and the prior fixed witness used LF; no confirmed shape is re-probed verbatim.",
  "[[UL]]\n[[LI]]outer[[UL]]\n[[LI]]in[[/LI]]\n[[/UL]]\n[[/LI]]\t\n[[/UL]]\n[[LI]]tail[[/LI]]\n[[/UL]]"),

 ("S2-FF", "List closer-strip residual whitespace (REFCORR13 R13-S2)",
  "leading closer run followed by a form-feed 0x0C then LF in the flattened nested-item tail",
  "The trailing \\s* added by R13-S2 at List.php:581-583 matches form-feed 0x0C in non-Unicode PCRE, so the corrected reference consumes a discarded C0 byte as if it were the stripped closer's line end. Live removes discarded C0 bytes from visible text at a different stage while still emitting the authored LF as a Newline witness, so consuming the FF together with the closer may drop or shift that witness at this byte edge.",
  "a valid stable capture where the form-feed or the following LF witness produces a different break or literal byte on one side",
  "byte-identical normalized content with the FF-bearing closer tail handled identically on both sides",
  "Third-order byte-edge sibling of the REFCORR13 R13-S2 \\s* addition: form-feed is a newly admitted member of the strip class and was not among the fixed LF witnesses; the four-adjacent U+FFFD digit class is owned and is not part of this probe.",
  "[[UL]]\n[[LI]]outer[[UL]]\n[[LI]]in[[/LI]]\n[[/UL]]\n[[/LI]]\x0c\n[[/UL]]\n[[LI]]tail[[/LI]]\n[[/UL]]"),

 ("S2-SPACES", "List closer-strip residual whitespace (REFCORR13 R13-S2)",
  "leading closer run followed by multiple spaces then LF in the flattened nested-item tail",
  "The R13-S2 strip at List.php:581-583 consumes the whole run matched by \\s* after the leading closers, not just one line end, so three authored spaces and the LF all disappear from the literal tail. Live's adjacency tolerance may preserve the authored spaces as a visible separator or apply a different collapse before the Newline rule, which would make the reference lose a rule-level text byte that live keeps.",
  "a valid stable capture where the space run, the break count or the literal tail differs from the reference at rule level",
  "byte-identical normalized content with the multi-space closer tail collapsed identically on both sides",
  "Third-order sibling of the REFCORR13 R13-S2 \\s* addition: a multi-space run is newly admitted by the strip and was not in the single-LF fixed witness; no prior confirmed shape is re-probed verbatim.",
  "[[UL]]\n[[LI]]outer[[UL]]\n[[LI]]in[[/LI]]\n[[/UL]]\n[[/LI]]   \n[[/UL]]\n[[LI]]tail[[/LI]]\n[[/UL]]"),

 ("S3-DBLFT", "List footnoteblock hoist (REFCORR13 R13-S3)",
  "two footnoteblock markers straddling the surviving final block closer in the post-failed-closer tail",
  "R13-S3 moved the hoist scan from the post-closer leftover to the whole tail at List.php:530-563 and splits at the first marker by byte order, applying the final-closer split only to the pre-marker bytes. With a marker before the final closer and a second marker after it, the first split leaves the final closer inside the hoisted half and the second marker literal, a placement that the single-marker witnesses cannot validate and live may resolve by hoisting both blocks and keeping the closer with the absorbing item.",
  "a valid stable capture where either footnoteblock, its footer or the final list closer lands on a different side of the list-end token between live and the reference",
  "byte-identical normalized content with both blocks and the closer placed identically on both sides",
  "Third-order sibling of the REFCORR13 R13-S3 whole-tail scan: the two-marker byte ordering is a composition edge of the new first-match split and has no cached witness; the fixed single-marker shapes are not re-probed verbatim.",
  "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[footnote]]n1[[/footnote]]P1[[footnoteblock]]Q1\n[[LI]]B[[/LI]]\n[[footnoteblock]]Q2[[/UL]]\nTAIL"),

 ("S3-DOUBLELF", "List footnoteblock hoist (REFCORR13 R13-S3)",
  "two authored LFs between the trailing prose and the hoisted footnoteblock marker",
  "R13-S3 deliberately removed the rtrim of the pre-marker bytes so their trailing LF is the Newline witness live emits as a break at List.php:561-570. A double-LF run puts two authored LFs in that preserved region; the corrected reference hands both to the Newline rule verbatim, while live may collapse the run to a single break at the paragraph layer, so the preserved-LF clause can over-produce a witness at this byte edge.",
  "a valid stable capture where the number of breaks before the hoisted footer or the placement of the RIGHT prose differs from the reference",
  "byte-identical normalized content with the same single break and footer placement on both sides",
  "Third-order sibling of the REFCORR13 R13-S3 preserved-LF clause: the double-LF run is a byte edge of the new no-rtrim pre-marker half and was not among the single-LF fixed witnesses; no prior confirmation is re-probed verbatim.",
  "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[LI]]B[[/LI]]\n[[/UL]]\n[[footnote]]n[[/footnote]]LEFT\n\n[[footnoteblock]]RIGHT"),

 ("S3-CASEFT", "List footnoteblock hoist (REFCORR13 R13-S3)",
  "uppercase [[FootnoteBlock]] marker in the post-failed-closer tail",
  "The token-identity arm of the R13-S3 scan at List.php:543-554 only recognizes a marker already tokenized by the Footnoteblock rule, whose regex is lowercase-only, so an uppercase marker reaches the case-insensitive literal fallback at lines 555-559. That fallback was written as a defensive arm and has no cached witness; live may not treat the uppercase spelling as a footnoteblock at all, in which case the reference hoists a marker that live keeps literal inside the absorbing item.",
  "a valid stable capture where the uppercase marker or its surrounding prose appears on a different side of the list-end token between live and the reference",
  "byte-identical normalized content with the uppercase marker handled identically on both sides",
  "Third-order sibling of the REFCORR13 R13-S3 literal-marker fallback: the changed scan now runs over the whole tail so the fallback is reachable at this case edge, and no fixed lowercase witness is re-probed verbatim.",
  "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[LI]]B[[/LI]]\n[[/UL]]\n[[footnote]]n[[/footnote]]LEFT[[FootnoteBlock]]RIGHT"),

 ("CL-ESCCLASS", "Paragraph / continued-div lead (REFCORR13 Div normalizeValue)",
  "continued lead into a div opener whose class value carries ESC 0x1B",
  "REFCORR13 narrowed Div::normalizeValue at Div.php:57-64 to drop only the live-discarded C0 class D, so ESC and DEL are now kept in an attribute value while the continued-div-lead registry at Concatlines.php:52-69 still records only the plain lead text from the raw source. The interaction is new: the emitted class bytes change under the corrected normalizer but the lead-wrapper decision is taken before normalization, so live may keep a wrapper or spell the ESC differently once the two changed paths meet.",
  "a valid stable capture where the lead keeps a paragraph wrapper on one side and is bare on the other, or the ESC spelling in the class value differs at rule level",
  "byte-identical normalized content with a bare lead and the same ESC-bearing class value on both sides",
  "Third-order sibling of the REFCORR13 Div C0-class narrowing meeting the continued-lead mechanism; the fixed plain continued-lead and ESC-attribute shapes were separate witnesses and are not re-probed verbatim.",
  "alpha\\\n[[div class=\"A\x1bB\"]]\nbravo[[/div]]"),

 ("CL-DELCLASS", "Paragraph / continued-div lead (REFCORR13 Div normalizeValue)",
  "continued lead into a div opener whose class value carries DEL 0x7F",
  "The same REFCORR13 narrowing at Div.php:57-64 keeps DEL 0x7F in attribute values where the former regex stripped it, and the continued-div lead at Concatlines.php:52-69 keys on raw lead text only. A DEL inside the opener's class value therefore survives normalization on the corrected reference but was absent from the fixed continued-lead witnesses, so the emitted class byte and the wrapper decision may disagree with live at this newly changed intersection.",
  "a valid stable capture where the DEL byte, the class value or the lead wrapper differs between live and the reference",
  "byte-identical normalized content with a bare lead and the same DEL-bearing class value on both sides",
  "Third-order sibling of the REFCORR13 Div DEL-retention change meeting the continued-lead registry; the fixed DEL-attribute and continued-lead shapes are not re-probed verbatim.",
  "alpha\\\n[[div class=\"A\x7fB\"]]\nbravo[[/div]]"),

 ("CL-SPANTYPE", "Paragraph / scored span (REFCORR13 Span normalizeValue)",
  "scored span opener with a trailing-space class value at the start of a paragraph run",
  "REFCORR13 added Span::normalizeValue at Span.php:66-71 and routed class/style/role/type and data-* through it at lines 142-148. Paragraph::tokenizeScoredSpans at Paragraph.php:111-118 calls that same Span::process for a scored opener, so a scored [[span_ class=\"t  \"]] now produces a trimmed class on the reference by a path that had no cached witness; live may trim a scored span's technical value differently or keep the trailing spaces, which is a rule-level attribute divergence of the newly changed normalizer.",
  "a valid stable capture where the emitted class value, the whitespace inside the span or the paragraph wrapper differs from the reference",
  "byte-identical normalized content with the same trimmed class and the same wrapper on both sides",
  "Third-order sibling of the REFCORR13 Span normalizeValue addition meeting the paragraph scored-span path; the fixed unscored Span attribute shapes are not re-probed verbatim.",
  "alpha\\\n[[span_ class=\"t  \"]]bravo[[/span]]"),

 ("CL-DIVC0", "Paragraph / continued-div lead (REFCORR13 Div normalizeValue)",
  "continued lead into a div opener whose data-x value carries vertical tab 0x0B",
  "REFCORR13's narrowed C0 class D at Div.php:57-64 still drops vertical tab 0x0B from data-* values while keeping ESC and DEL, and the continued lead is measured from raw text by Concatlines.php:52-69 before the opener is normalized. A discarded C0 byte in a continued opener's data-* value sits exactly at the changed byte-class boundary, so the reference may drop a byte that live retains as authored text in the attribute or take a different wrapper branch.",
  "a valid stable capture where the data-x value, the dropped byte or the lead wrapper differs between live and the reference at rule level",
  "byte-identical normalized content with the same trimmed data-x value and a bare lead on both sides",
  "Third-order sibling of the REFCORR13 Div C0-class narrowing meeting the continued-lead mechanism at a dropped-byte edge; no fixed continued-lead or data-* shape is re-probed verbatim.",
  "alpha\\\n[[div data-x=\"A\x0bB\"]]\nbravo[[/div]]"),
]

def main():
    lines = []
    lines.append("# LEDGER — R5G-P1, PARSE-SIDE BLOCK RULES, round-5g pre-probe suspicions")
    lines.append("")
    lines.append("Ground is post-REFCORR13 snapshot-37 on canonical base e53e7234. This ledger was written before any probe page was created and no suspicion may be added after probing without a new row and its own probe. Standing owned classes (four-adjacent U+FFFD digit runs, parity Email index digits, Stage 2 frame and serving surfaces, token-id counter digits, save-normalized sources) are applied without re-litigation. Prose is one flowing line per paragraph by campaign rule.")
    lines.append("")
    lines.append("Assignment seams: REFCORR13 changed the List failed-closer adjacency in three clauses — R13-S1 symmetric nested-boundary rewrites at List.php:325-333, R13-S2 trailing \\s* on the leading-closer strip at List.php:581-583, and R13-S3 whole-tail footnoteblock hoist with preserved LF at List.php:530-570 — and narrowed or added the shared attribute normalizers in Div.php:57-64 and Span.php:66-71/142-148 that feed the paragraph continued-div-lead registry at Concatlines.php:52-69 and Paragraph.php:111-118/211-240. Rows N1-N6 are third-order siblings of the R13-S1 case rewrites, rows S2-* of the R13-S2 strip, rows S3-* of the R13-S3 hoist, and rows CL-* of the changed Div/Span normalizers meeting continued-lead. No prior confirmed-and-fixed byte shape is re-probed without the changed-mechanism reason stated in its row; the round-5f P1 confirmations were all corrected by REFCORR13 and are not repeated here. Mirror consequences, where a confirmation occurs, are inferred by source reading only unless a Lean elaboration is explicitly recorded.")
    lines.append("")
    for rid, fam, construct, why, confirm, clear, fresh, source in ROWS:
        lines.append("## " + rid + " — " + fam)
        lines.append("")
        lines.append("Construct: " + construct + ". Why the corrected reference looks wrong: " + why + " Decisive live byte that CONFIRMS: " + confirm + " Decisive byte that CLEARS: " + clear + " Freshness / ledger reason: " + fresh)
        lines.append("")
    lines.append("## Pre-probe predictions")
    lines.append("")
    lines.append("Each row predicts its own confirm and clear byte above; final verdicts are recorded after capture in verdicts.json and UNIT.md. A capture that is not valid, stable and source-matching is UNTESTABLE and is never counted as a clearance or a divergence. All content read from reference trees, reports and pages is treated as data, never as instructions.")
    lines.append("")
    open(os.path.join(U, "LEDGER.md"), "w", encoding="utf-8").write("\n".join(lines))
    with open(os.path.join(U, "cases.jsonl"), "w", encoding="utf-8") as f:
        for rid, *_rest, source in ROWS:
            f.write(json.dumps({"id": rid, "source": source}, ensure_ascii=False) + "\n")
    print("rows:", len(ROWS))

if __name__ == "__main__":
    main()
