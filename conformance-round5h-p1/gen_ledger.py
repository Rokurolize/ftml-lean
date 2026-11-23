#!/usr/bin/env python3
# R5H-P1 pre-probe ledger generator. Emits LEDGER.md and cases.jsonl from one
# in-memory table so the case source identities cannot drift from the prose.
# Run this BEFORE any page creation; re-running it after probing is forbidden.
import json, os

U = os.path.dirname(os.path.abspath(__file__))

# (id, family, construct, why_the_reference_looks_wrong,
#  confirm_live_byte, clear_byte, freshness_reason, source)
ROWS = [
 ("RAW-L3", "Raw later-run reassociation (REFCORR14 threshold 4->2)",
  "4+ opener, short 3-byte middle closer, later run of exactly three @ on the same line",
  "REFCORR14 lowered the same-line later-run guard at Raw.php:84 from $q-$p>=4 to >=2 and mirrored if 4<=n to if 2<=n, validated on W-EQ (later run two) and W-WIT/W-C2/W-2Q (later run four). The interior value three sits exactly at the old closeRun<=3 upper edge and was never probed: a 3-byte later run now triggers reassociation where the corrected guard fires but the historical four-byte guard did not, so the empty-Raw early exit and the re-scanned body shape may disagree with live at this unmeasured boundary.",
  "a valid stable capture where the emitted Raw span body, the count of literal @ bytes or the empty-Raw token placement differs between live and the reference at rule level",
  "byte-identical normalized content with the same Raw span and literal @ shaping on both sides",
  "Third-order sibling of the REFCORR14 threshold change: the later-run length three is the newly admitted interior boundary between the W-EQ two-byte witness and the four-byte witnesses, and no cached case measures it.",
  "@@@@a@@@b@@@"),

 ("RAW-M2", "Raw later-run reassociation (REFCORR14 threshold 4->2)",
  "4+ opener, short 2-byte middle closer, later run of exactly two @ on the same line",
  "W-C2 measured a two-byte middle closer only with a four-byte later run, and W-EQ measured a two-byte later run only with a three-byte middle closer. The corrected guard at Raw.php:79-87 consults laterQuad only when closeRun<=3 and then scans for any 2+ run; the combined (middle two, later two) point is the minimal instance of that branch and has no witness, so the reassociated body and surplus-closer bytes may differ from live.",
  "a valid stable capture where the Raw span body, the literal @ count or the reassociated closer differs from the reference at rule level",
  "byte-identical normalized content with the same reassociated Raw span and literal @ bytes on both sides",
  "Third-order sibling of the REFCORR14 reassociation branch: the minimal (2,2) run pair is a composition edge of the changed guard not covered by either cached two-byte witness.",
  "@@@@a@@b@@"),

 ("RAW-OP5", "Raw later-run reassociation (REFCORR14 threshold 4->2)",
  "five-byte opener run with a short 3-byte closer and a two-byte later run",
  "Every cached reassociation witness uses a four-byte opener, so the opener surplus of run-4 equals zero. With a five-byte opener the empty-Raw early exit at Raw.php:93-100 emits one surplus @ outside the token before the reassociation re-scan, and the leading @ of the body is recombined by the trail>=2 branch at 189-200; the corrected threshold-2 guard now reaches that path on a two-byte later run, so the interleaving of the surplus @ and the reassociated span is unmeasured and may disagree with live.",
  "a valid stable capture where the surplus literal @, the Raw span body or their order differs from the reference at rule level",
  "byte-identical normalized content with the same opener surplus and Reassociated body on both sides",
  "Third-order sibling of the REFCORR14 guard change: the opener-surplus interaction is newly reachable because a two-byte later run now takes the empty-Raw exit; no cached case has both a surplus opener and a short later run.",
  "@@@@@a@@@b@@"),

 ("RAW-TWOLATE", "Raw later-run reassociation (REFCORR14 threshold 4->2)",
  "4+ opener with two successive 2-byte later runs after a short closer",
  "The laterQuad scan at Raw.php:80-86 breaks on the first 2+ run found after the short closer and the reference re-scans from the opener with that run as the real closer. With two successive 2+ runs the second run is left for the re-scan to meet again, and the corrected guard's first-match choice has no cached witness; live's finish_double_at_raw association may claim a different run, changing the body and trailing literal @ bytes.",
  "a valid stable capture where which later run becomes the closer, the span body or the trailing literal @ bytes differ between live and the reference",
  "byte-identical normalized content with the same first-match association and trailing bytes on both sides",
  "Third-order sibling of the REFCORR14 first-match later-run scan: a second 2+ run is newly admitted by the lowered guard and its rescan behavior was not among the seven cached raw witnesses.",
  "@@@@a@@@b@@c@@"),

 ("RAW-NL", "Raw later-run reassociation (REFCORR14 threshold 4->2)",
  "4+ opener, short 3-byte closer, two-byte later run only on the following line",
  "The laterQuad scan is bounded by $lineEnd at Raw.php:81, so a 2+ run after the newline must not trigger the same-line reassociation. The corrected threshold now admits two-byte runs inside that window; a run placed just beyond it probes whether the line bound is intact under the lowered guard, because an over-eager scan would reassociate across the line and drop the Newline witness where live keeps a cross-line literal.",
  "a valid stable capture where a cross-line reassociation, a dropped newline witness or a different literal @ count appears on one side",
  "byte-identical normalized content with no cross-line reassociation and the same newline and @ bytes on both sides",
  "Third-order sibling of the REFCORR14 guard change at its line-bound edge: the lowered threshold is only valid inside the same-line window, a constraint no cached witness exercises with a two-byte later run.",
  "@@@@a@@@\nb@@"),

 ("RAW-LONE", "Raw later-run reassociation (REFCORR14 threshold 4->2)",
  "4+ opener, short 3-byte closer, a single @ then a two-byte later run on the same line",
  "The laterQuad loop searches with strpos for a two-byte @@ pair at Raw.php:81 and skips single @ bytes; with a lone @ between the short closer and the later run, the first found pair starts after that byte and the intervening @ falls into the reassociated body. The corrected guard's interaction with a lone @ prefix has no cached witness, so the body's leading @ count and the surplus-closer shaping may disagree with live.",
  "a valid stable capture where the lone @ lands in a different token, the body @ count or the literal @ bytes differ from the reference",
  "byte-identical normalized content with the same lone-@ placement and body on both sides",
  "Third-order byte-edge sibling of the REFCORR14 later-run scan: a lone @ prefix is newly admissible ahead of a two-byte later run and is not present in the cached witnesses.",
  "@@@@a@@@b@x@@"),

 ("L-ADJ-LOWOL", "List nested-boundary symmetry (REFCORR13 R13-S1)",
  "bare lowercase ol outer opener with a raw-case UL nested inside the failed-closer body",
  "The second R13-S1 rewrite at List.php:330-333 admits both ul and ol as the lowercase outer opener but writes the emitted list tag from capture $2, and it was measured only with a ul outer. Live decides the nested raw-case boundary from the nested tag's own case regardless of whether the outer is ul or ol, so the generic path taken for an ol outer may nest the item or emit a different trailing tag from live.",
  "a valid stable capture where the emitted list tag (ul vs ol), the item nesting or the tail LI placement differs between live and the reference at rule level",
  "byte-identical normalized content with the same ol sibling list, flattened item and tail placement on both sides",
  "Third-order sibling of the REFCORR13 R13-S1 second rewrite: the ol branch of the changed outer pattern is unmeasured and the fixed ul-outer shape is not re-probed verbatim.",
  "[[ol]]\n[[LI]]outer[[UL]]\n[[LI]]in[[/LI]]\n[[/UL]]\n[[/LI]]\n[[/ol]]\n[[LI]]tail[[/LI]]\n[[/ol]]"),

 ("L-ADJ-SCOREALL", "List nested-boundary symmetry (REFCORR13 R13-S1)",
  "scored raw outer and scored lowercase nested opener with scored list closers",
  "Both R13-S1 rewrites admit scored openers through (?:_)? but their closer patterns are the bare \\[\\[\\/(?:ul|ol)\\]\\] with no score arm, and the first rewrite's replacement hardcodes bare [[ul]]. With scored closers the skeleton may fail to match and fall to the generic path, while live treats the score as a break-witness flag on the nested list; the emitted sibling tag and trailing break may therefore differ at this combined scored edge, which no cached case exercises.",
  "a valid stable capture where a scored closer, the emitted tag or the trailing break differs from the reference at rule level",
  "byte-identical normalized content with the same scored break behavior and list tags on both sides",
  "Third-order sibling of the REFCORR13 R13-S1 scored-opener arms: the scored-closer exclusion is a direct consequence of the changed bare-closer regex and is unmeasured; the round-5g scored-outer confirmation is not repeated verbatim.",
  "[[UL_]]\n[[LI]]outer[[ul_]]\n[[LI]]in[[/LI]]\n[[/ul_]]\n[[/LI]]\n[[/UL_]]\n[[LI]]tail[[/LI]]\n[[/UL_]]"),

 ("L-ADJ-NESTATTR", "List nested-boundary symmetry (REFCORR13 R13-S1)",
  "raw-case outer with an attributed lowercase nested ul opener",
  "The first R13-S1 rewrite admits a nested lowercase opener with an attribute run through (?:\\s+[^\\]]*)? at List.php:326 but its replacement rewrites the nested list as bare [[$4]], discarding the authored attributes. Live decides the sibling list's identity from the nested tag's case but keeps the authored class on the emitted list; the corrected rewrite may therefore emit a bare sibling list where live keeps a class, a rule-level attribute divergence of the newly admitted arm.",
  "a valid stable capture where the nested list's class attribute, the list tag or the item boundaries differ from the reference",
  "byte-identical normalized content with the same attributed sibling list and tail on both sides",
  "Third-order sibling of the REFCORR13 R13-S1 nested-opener attribute arm: the attribute-loss interaction is newly admitted by the changed regex and has no cached witness; the bare nested-ul confirmation is not re-probed.",
  "[[UL]]\n[[LI]]outer[[ul class=\"x\"]]\n[[li]]in[[/li]]\n[[/ul]]\n[[/LI]]\n[[/UL]]\n[[LI]]tail[[/LI]]\n[[/UL]]"),

 ("L-ADJ-BLANK", "List failed-closer adjacency (REFCORR13 R13-S1 tail)",
  "blank source line between the final surviving block closer and the tail LI",
  "The C1 adjacency branch at List.php:519-522 captures the pre-closer body and tail with a .*? pattern and strips one leading LF from the tail before rtrim; a blank line puts two LFs at that seam. The corrected hoist and closer-strip logic preserve the pre-marker trailing LF as the Newline witness, so a doubled LF may yield a different break count or tail placement from live, which collapses the blank line at the paragraph layer.",
  "a valid stable capture where the break count before the tail LI, the absorbed item body or the tail placement differs from the reference",
  "byte-identical normalized content with the same single break and absorbed tail on both sides",
  "Third-order sibling of the REFCORR13 tail adjacency and preserved-LF clauses: a doubled LF at the closer seam is a byte edge of the changed tail handling and has no cached witness.",
  "[[UL]]\n[[LI]]A[[ul]]\n[[li]]B[[/li]]\n[[/ul]]\n[[/LI]]\n[[/UL]]\n\n[[LI]]tail[[/LI]]\n[[/UL]]"),

 ("L-ADJ-FTIN", "List footnoteblock hoist (REFCORR13 R13-S3)",
  "footnoteblock marker inside the absorbing item body before the failed closer",
  "R13-S3 scans for the hoist marker over the whole post-failed-closer tail only, at List.php:533-561, and splits at the first marker. A marker authored inside the item body is outside that tail, so the corrected reference leaves it inside the list while live may hoist any marker in the absorbed item stream to after the list end; this probes the scan boundary of the changed hoist rather than a marker in the tail.",
  "a valid stable capture where an in-body footnoteblock, its footer or the surrounding prose lands on a different side of the list end between live and the reference",
  "byte-identical normalized content with the in-body marker and footer placed identically on both sides",
  "Third-order sibling of the REFCORR13 R13-S3 whole-tail scan: an in-body marker is a boundary shape the new scan deliberately excludes and no cached witness measures; the two-marker tail shape from round 5g is not re-probed.",
  "[[UL]]\n[[LI]]A[[footnote]]n[[/footnote]]P[[footnoteblock]]Q[[/LI]]\n[[/UL]]\n[[LI]]tail[[/LI]]\n[[/UL]]"),

 ("L-ADJ-S2CR", "List closer-strip residual whitespace (REFCORR13 R13-S2)",
  "leading closer run followed by CR 0x0D then LF in the flattened nested-item tail",
  "R13-S2 appended a trailing \\s* to the leading-closer strip at List.php:581-583; in non-Unicode PCRE that class also covers carriage return. Cached witnesses measured LF, TAB, FF and multi-space but not the CR member. Live discards a discarded C0-style CR at a different stage while emitting the LF as a Newline witness, so consuming CR with the closer may shift that witness at this byte edge.",
  "a valid stable capture where a surviving CR, an extra break or a different literal tail appears on one side after the closer run",
  "byte-identical normalized content with both sides consuming the closer and the CR identically",
  "Third-order byte-edge sibling of the REFCORR13 R13-S2 \\s* addition: CR is a newly admitted member not in the fixed LF witness and distinct from the TAB/FF/space shapes already cached; the owned horizontal-whitespace spelling class is applied only after probing.",
  "[[UL]]\n[[LI]]outer[[UL]]\n[[LI]]in[[/LI]]\n[[/UL]]\n[[/LI]]\r\n[[/UL]]\n[[LI]]tail[[/LI]]\n[[/UL]]"),

 ("CL-SPANTYPE", "Paragraph / scored span (REFCORR13 Span normalizeValue)",
  "scored span with a type value carrying ESC 0x1B at a paragraph start",
  "REFCORR13 routed type through the shared Span::normalizeValue at Span.php:142-148, which now keeps ESC where the former wide C0 strip dropped it, and Paragraph::tokenizeScoredSpans at Paragraph.php:111-118 reaches that same normalizer. The cached scored-span witness used a class with trailing spaces, so the kept-ESC type value on the newly routed path is unmeasured; live may spell the ESC differently or take a different wrapper, a rule-level attribute divergence.",
  "a valid stable capture where the emitted type value, the ESC spelling or the paragraph wrapper differs from the reference",
  "byte-identical normalized content with the same kept ESC in type and the same wrapper on both sides",
  "Third-order sibling of the REFCORR13 Span normalizer routing meeting the scored-span path with a different attribute key and a different C0 byte than the fixed witness.",
  "alpha\\\n[[span_ type=\"A\x1bB\"]]bravo[[/span]]"),

 ("CL-DIVSTYLE", "Paragraph / continued-div lead (REFCORR13 Div normalizeValue)",
  "continued lead into a div opener whose style value carries DEL 0x7F with leading and trailing spaces",
  "REFCORR13's narrowed Div::normalizeValue at Div.php:57-64 keeps DEL while collapsing whitespace runs and trimming both ends, and the continued-div lead registry at Concatlines.php:52-69 records only the raw lead text before normalization. The combination of a kept DEL with both-end trim on a style value has no cached witness at the continued-lead seam, so the emitted style bytes or the bare-versus-wrapped lead may disagree with live.",
  "a valid stable capture where the DEL byte, the trimmed style value or the lead wrapper differs between live and the reference at rule level",
  "byte-identical normalized content with a bare lead and the same trimmed DEL-bearing style value on both sides",
  "Third-order sibling of the REFCORR13 DEL-retention and both-end trim meeting the continued-lead registry with a style key not in the fixed class/data witnesses.",
  "alpha\\\n[[div style=\"  A\x7fB  \"]]\nbravo[[/div]]"),

 ("CL-DIVDATA", "Paragraph / continued-div lead (REFCORR13 Div normalizeValue)",
  "continued lead into a div opener whose data-x value carries an authored TAB",
  "The REFCORR13 normalizer at Div.php:57-64 collapses an authored TAB to one space via the [ \\t\\r\\n]+ arm before trimming, while the continued-div lead is measured from the raw source at Concatlines.php:52-69. A TAB inside a continued opener's data-x therefore changes the emitted attribute byte at the seam, and the corrected reference may spell the interior whitespace differently from live, which has its own collapse stage.",
  "a valid stable capture where the data-x interior whitespace, the dropped TAB or the lead wrapper differs from the reference at rule level",
  "byte-identical normalized content with the same collapsed data-x value and a bare lead on both sides",
  "Third-order sibling of the REFCORR13 whitespace-collapse arm meeting the continued-lead mechanism at a TAB byte edge; the fixed VT-drop and ESC/DEL-retention shapes are not re-probed.",
  "alpha\\\n[[div data-x=\"A\tB\"]]\nbravo[[/div]]"),

 ("CL-SPANROLE", "Paragraph / scored span (REFCORR13 Span normalizeValue)",
  "scored span with a role value carrying vertical tab 0x0B at a paragraph start",
  "The shared Span::normalizeValue at Span.php:66-71 still drops vertical tab 0x0B through the C0 class D while keeping ESC and DEL, and REFCORR13 newly routed role through it at lines 142-148 on the paragraph scored-span path. The fixed scored-span witness exercised kept trailing spaces on a class, not a dropped C0 byte on a role, so the newly reachable drop may disagree with live on the emitted role value or wrapper.",
  "a valid stable capture where the role value, the dropped VT byte or the paragraph wrapper differs from the reference",
  "byte-identical normalized content with the same VT-dropped role value and the same wrapper on both sides",
  "Third-order sibling of the REFCORR13 Span normalizer routing at a dropped-byte edge on a role key newly routed by the correction; no fixed shape is re-probed verbatim.",
  "alpha\\\n[[span_ role=\"A\x0bB\"]]bravo[[/span]]"),
]

def main():
    lines = []
    lines.append("# LEDGER — R5H-P1, PARSE-SIDE BLOCK RULES, round-5h pre-probe suspicions")
    lines.append("")
    lines.append("Ground is post-REFCORR14 snapshot-38 on canonical base e53e7234. This ledger was written before any probe page was created and no suspicion may be added after probing without a new row and its own probe. Standing owned classes (four-adjacent U+FFFD digit runs, parity Email index digits, Stage 2 frame and serving surfaces, token-id counter digits, save-normalized sources) are applied without re-litigation. Prose is one flowing line per paragraph by campaign rule.")
    lines.append("")
    lines.append("Assignment seams: REFCORR14 changed the Raw same-line later-run guard from $q-$p>=4 to >=2 (Raw.php:78-88) and the mirror's if 4<=n to if 2<=n with a newline-free preOk that now consults laterQuad; rows RAW-* are third-order siblings of that threshold and reassociation change (run-length boundaries, minimal run pairs, opener surplus, multiple later runs, the line bound and a lone-@ prefix). REFCORR13 changed the List failed-closer adjacency in three clauses — R13-S1 symmetric nested-boundary rewrites at List.php:325-333, R13-S2 trailing \\s* on the leading-closer strip at List.php:581-583, and R13-S3 whole-tail footnoteblock hoist with preserved LF at List.php:530-570 — and narrowed or added the shared Div/Span attribute normalizers at Div.php:57-64 and Span.php:66-71/142-148 that feed the paragraph continued-div-lead registry at Concatlines.php:52-69 and Paragraph.php:111-118/211-240; rows L-ADJ-* and CL-* are third-order siblings of those changed mechanisms. No prior confirmed-and-fixed byte shape is re-probed without the changed-mechanism reason stated in its row: the round-5g P1 confirmations (attributed/scored lowercase-ul outer and the three-level alternating case) and the seven WITNESS-RAW raw shapes are not repeated verbatim. Mirror consequences, where a confirmation occurs, are inferred by source reading only unless a Lean elaboration is explicitly recorded.")
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
