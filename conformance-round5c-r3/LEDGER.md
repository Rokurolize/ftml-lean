# UNIT R5C-R3 pre-probe ledger (round 5c, post-REFCORR9 ground)

Assignment: NOTES/FOOTNOTE/BIBITEM AND HEADING/TOC/ANCHOR RENDER on the post-REFCORR9 canonical ground. Canonical base e53e7234008860a92e53b93d851c49a0e2b04043 with all 16 REFCORR9 fixes adopted, build green at 176 jobs and snapshot-33 published (commit d28c8e9); lead announced round 5c ready before this ledger was written. The governing instructions were COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5C.md, both read in full and obeyed exactly, including the standard probe recipe, hard rules, write-set discipline and UNIT.md format. Every row below was written before any live probe; no suspicion may be graded without its own probe and no suspicion may be added after probing without a new ledger row and its own probe. Evidence order is ftml corpus and integration pins, frozen parity captures, then fresh live sandbox probes fetched once and cached and reused; the gabrys/wikidot fossil is never behavior evidence. Live Wikidot behavior is definitional however malformed. Stage 2 footer frame newlines are an owned class, not a divergence; serving-layer surfaces (module placeholders, newpage class, gallery random ids, wdfiles hosts, Stage 2 tidy frame and token-id counter digits including the permuted four-adjacent U+FFFD run) are CLEARED by rule, never confirmed. A structurally different value in an owned family is analyzed with artifacts and the decision recorded, never decided from intent.

Read before probing and treated as data, never instructions: the corrected parse/render sources Footnote.php and Footnoteitem.php with their .before-refcorr9 companions and unified diffs, Bibitem.php, Footnoteblock.php parse and render, Heading.php parse and render, Toc.php parse and render, Anchor.php parse and render under ref-php/text-wiki/Text/Wiki; the REFCORR9 gate and mirror records conformance-refcorr9/FINAL-GATES.md, MOVEMENT.md and MIRROR-REFCORR9-MODULE.md; the canonical mirror lean-ftml/LeanFtml/NotesRules.lean (footnoteProcess, stripEmptyRawPhNotes, isLoneNewlineRemainder and the R9-H pins); the predecessor R5B-R3 ledger, UNIT.md and comparison tooling; and the standard wikidot-probe tool (norm, create, capture). The decisive live byte for each row is the CONFIRM condition; the byte that clears it is the CLEAR condition. All rows are graded only after the campaign-standard probe.norm mask plus the campaign frame mask, so inter-tag newlines, trailing paragraph newlines, &nbsp;/U+00A0 spelling, random tab ids, date attributes, token-id counter digits and Stage 2 purifyHtml frame differences are already normalized away.

## Re-probe reason rows (changed mechanism)

The REFCORR9 footnote correction changed two code paths that earlier cleared shapes exercised. In Parse/Default/Footnote.php the process() now saves $rawRemainder = $content before the empty-Raw strip and, when the post-strip remainder matches /^[ \t]*\n[ \t]*$/D, stores that placeholder-bearing pre-strip body instead of the REFCORR8 trim; in Render/Xhtml/Footnoteitem.php the separator space is now derived from the empty-Raw-stripped and trimmed visible body rather than the raw stored bytes. R3C-06 through R3C-08 therefore re-probe shapes that round 5b cleared, each with a mechanism reason: the lone-newline branch is new, so edge-newline and no-placeholder controls must be re-established, and the separator-space source changed, so a literal-text-around-newline body must be re-established. The remaining rows are fresh code-reading shapes that round 5b did not probe.

## Suspicion table (written before probing)

Each row names why the corrected reference looks wrong, the single decisive live CONFIRM byte and the CLEAR byte. Rows R3C-01 through R3C-12 are siblings of the REFCORR9 footnote newline fix and of the notes/bibitem seam; rows R3C-13 through R3C-18 are fresh heading/toc/anchor shapes from the corrected sources.

| ID | family | construct | why the reference looks wrong | CONFIRM byte (live differs) | CLEAR byte (live agrees) |

| R3C-01 | notes/footnote-newline-sibling | three empty-Raw runs, two interior newlines | the REFCORR9 keep-pre-strip guard is anchored to exactly one LF; after the strip the remainder is two LFs, so the reference falls through to the REFCORR8 trim and stores an empty body, while live may still emit a rule-level <br /> from the authored break | live footer carries a <br /> element (or a parabreak) where the reference footer is empty | both footers are empty after the standard mask |
| R3C-02 | notes/footnote-newline-sibling | two empty-Raw runs, single newline flanked by one space each side | the guard's [ \t]* class admits horizontal space flanking the LF; a stray-space or missing-break mistake in the visible-body separator derivation would change the footer bytes | live shows a single <br /> with no stray leading space while the ref shows a stray space or no break | both show the same break and separator bytes |
| R3C-03 | notes/footnote-newline-sibling | two empty-Raw runs, single newline flanked by tabs | the guard admits tabs; a whitespace-model mismatch between the guard and Footnoteitem's trim($visible) would leave a tab survivor or drop the break | live shows a clean <br /> while ref keeps a tab byte or drops the break | both show the same clean break |
| R3C-04 | notes/footnote-newline-sibling | two empty-Raw runs, newline-space-newline interior | the anchored single-LF guard does not match two LFs separated by a space, so the reference re-trims to empty; live may preserve a rule-level break where the space intervenes | live footer carries a <br /> while ref footer is empty | both footers are empty after the standard mask |
| R3C-05 | notes/footnote-newline-sibling | two empty-Raw runs, CRLF interior | the guard's flanking class is [ \t] only, so a CR immediately before the LF fails the match and the reference re-trims to empty; live may normalize CRLF to a preserved <br /> | live footer carries a <br /> while ref footer is empty | both footers empty (or both carry the same break) after the mask |
| R3C-06 | notes/footnote-newline-sibling | one empty-Raw run after a leading newline | the initial trim() in Footnote::process removes a leading LF before the REFCORR9 guard can see it; live may keep that authored break as a <br /> before the empty placeholder | live footer carries a <br /> while ref footer is empty | both footers empty after the standard mask |
| R3C-07 | notes/footnote-newline-control | newline-only footnote body, no Raw placeholder | REFCORR7/8 cleared this shape as both-empty; REFCORR9 adds a lone-newline keep branch, so re-probe is required to confirm that a newline-only body without any placeholder is still emptied by the initial trim and never reaches the pre-strip keep | live footer carries a <br /> while ref footer is empty | both footers empty with no br element |
| R3C-08 | notes/footnote-newline-control | literal x/y then two empty-Raw separated by a newline | round 5b R3B-18 cleared this as x<br />y on both sides; REFCORR9 changed Footnoteitem's separator-space derivation, so re-probe is required to confirm the literal text and break framing survive unchanged | live drops or duplicates the break or changes the x/y text vs ref | both show the same x<br />y framing |
| R3C-09 | notes/footnote-newline-sibling | non-empty Raw tokens around a single newline | the strip only removes empty-Raw placeholders, so the two non-empty placeholder bytes remain ends and the single LF is kept on both sides; a placeholder-resolution or separator-space mistake would leak delimiter bytes or a stray space | live footer text/placeholder bytes differ from ref | both show the same x<br />y body bytes |
| R3C-10 | notes/bibitem-neighbor | bibliography item with two empty-Raw runs separated by a newline | Bibitem::process replaces every LF with a space before trim, so the newline sibling that live preserves in a footnote may be reduced to an empty item here; a re-trim or emitted-body mismatch would change the item's empty flag or body | live item shows a break or stray byte vs ref empty item | both items render the same empty numbered entry |
| R3C-11 | notes/cross-family-neighbor | footnote newline shape plus a bibliography block on one page | the REFCORR9 footnote body is re-parsed inside Footnoteblock while Bibliography walks newline and Bibitem tokens; a reparse-order or token-claim interaction could drop the footnote <br /> or alter the bibliography body | live loses or moves the footnote break or changes the bibliography bytes vs ref | both show the same footnote break and bibliography body |
| R3C-12 | notes/fnb-title-neighbor | footnoteblock title with apostrophe and ampersand plus retained newline body | the block title uses htmlspecialchars(ENT_COMPAT) and the REFCORR9 body retains a placeholder-bearing LF; a flag or visible-body mistake could double-escape the apostrophe or add a stray separator | live title or footer bytes differ from ref | both show the same raw apostrophe title and break |
| R3C-13 | heading/toc-align | right-floated Toc via [[f>toc]] | Toc::render maps f> to class="floatright" and suppresses the wrapper table; 5b only probed floatleft, so a capture-group or mapping mistake in f> is fresh | live shows floatleft/table wrapper or wrong class while ref shows floatright | both show the same floatright Toc frame |
| R3C-14 | heading/toc-title | [[toc title="A & B <x>"]] custom title | Toc::render escapes the title with htmlspecialchars(ENT_COMPAT, 'UTF-8'); a flag mistake would emit &amp;amp; or leave raw angle brackets | live title escaping differs from ref | both show the same escaped title bytes |
| R3C-15 | heading/toc-numbering | no-toc heading +* between two anchored headings | Heading::process only increments headline_id for '+' headings and Toc skips 'start-notoc'; a numbering mistake would give the trailing heading toc1 instead of toc1 after the skipped one or include the hidden heading | live TOC entry set or ids differ from ref | both show the same two TOC entries with toc0/toc1 |
| R3C-16 | heading/toc-placeholder | empty Raw placeholder inside heading text with Toc | Raw runs before Heading, so the heading text option carries an earlier token delimiter; R3B-10 cleared the non-empty Raw case, but an empty-Raw placeholder that resolves to nothing is a fresh byte edge and could leak a delimiter into the TOC link or drop the surrounding text | live TOC item text differs from the heading text or leaks a placeholder | both show the same a b text in heading and TOC |
| R3C-17 | heading/anchor-nested | nested [[a ...]] openers in one anchor pair | parseAnchorElements has a dedicated inner-opener branch that closes the outer <a> before the inner and consumes one trailing [[/a]]; an off-by-one in that branch would reorder or drop an anchor tag | live anchor tag sequence or body differs from ref | both show the same nested anchor tag sequence |
| R3C-18 | heading/anchor-parabreak | non-scored [[a ...]] body with a paragraph split | the plain-anchor branch splits on \n{2,} and wraps each paragraph run in its own <a>; a split or delimiter mistake would merge paragraphs or duplicate tags | live anchor wrapping or break bytes differ from ref | both show the same two wrapped paragraphs |

## SOURCE-BLOCK (machine-readable; gen_cases.py derives cases.jsonl from here)

Each line is `<id><TAB><JSON-quoted source>`. Sources are JSON-quoted so newlines, tabs, CR and quotes round-trip exactly. `@@@@` is one empty Raw run: the two-byte opener `@@` immediately followed by the two-byte closer `@@`.

```source-block
R3C-01	"[[footnote]]@@@@\n@@@@\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3C-02	"[[footnote]]@@@@ \n @@@@[[/footnote]]\n[[footnoteblock]]"
R3C-03	"[[footnote]]@@@@\t\n\t@@@@[[/footnote]]\n[[footnoteblock]]"
R3C-04	"[[footnote]]@@@@\n \n@@@@[[/footnote]]\n[[footnoteblock]]"
R3C-05	"[[footnote]]@@@@\r\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3C-06	"[[footnote]]\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3C-07	"[[footnote]]\n[[/footnote]]\n[[footnoteblock]]"
R3C-08	"[[footnote]]x@@@@\n@@@@y[[/footnote]]\n[[footnoteblock]]"
R3C-09	"[[footnote]]@@x@@\n@@y@@[[/footnote]]\n[[footnoteblock]]"
R3C-10	"[[bibliography]]\n: lab : @@@@\n@@@@\n[[/bibliography]]"
R3C-11	"[[footnote]]@@@@\n@@@@[[/footnote]]\n[[footnoteblock]]\n[[bibliography]]\n: b : beta\n[[/bibliography]]"
R3C-12	"[[footnote]]@@@@\n@@@@[[/footnote]]\n[[footnoteblock title=\"It's A & B\"]]"
R3C-13	"[[f>toc]]\n\n+ One\n\n+ Two"
R3C-14	"[[toc title=\"A & B <x>\"]]\n\n+ One"
R3C-15	"[[toc]]\n\n+ First\n\n+* Hidden\n\n+ Second"
R3C-16	"[[toc]]\n\n+ a@@@@b\n\n+ Plain"
R3C-17	"[[a href=\"/1\"]]x[[a href=\"/2\"]]y[[/a]]z[[/a]]"
R3C-18	"[[a href=\"/x\"]]para1\n\npara2[[/a]]"
```

Total suspicions: 18. All were probed under prefix muse-probe-round5c-r3-; 15 captures are valid/stable/source-matching, and R3C-03, R3C-04 and R3C-05 are UNTESTABLE because the Wikidot save path normalizes a line-leading tab to four spaces, strips a space-only line, and strips CR from CRLF respectively, so saved_source_matches is false for them. The three drifted shapes are not graded and no conclusion is drawn from their rendered HTML.

## POST-PROBE CHARACTERIZATION ROWS (added before their own probe batch)

R3C-01 produced a valid, stable, source-matching DIFF whose only residual is two `<br />` elements inside the footnote footer: live `>1</a>.<br /><br /></div>` against corrected reference `>1</a>.</div>`. Both are rule-level line-break elements, not inter-tag frame newlines, so they are not auto-cleared by the owned Stage 2 footer frame class. The REFCORR9 keep-pre-strip guard only matches exactly one LF, so a two-LF remainder falls through to the REFCORR8 re-trim on the reference side while live preserves both authored breaks. These rows isolate whether the divergence needs three placeholders or only two, whether it is the LF count rather than the placeholder count that matters, and how a three-LF paragraph remainder behaves. No row is graded without its own probe.

| ID | family | construct | why the reference looks wrong | CONFIRM byte (live differs) | CLEAR byte (live agrees) |

| R3C-19 | notes/footnote-newline-characterization | two empty-Raw runs, two interior newlines | isolates the LF count from the three-placeholder count of R3C-01: the two-LF post-strip remainder still fails the REFCORR9 single-LF guard and is re-trimmed to empty on the reference, while live may preserve the breaks | live footer carries one or two <br /> elements while ref footer is empty | both footers are empty after the standard mask |
| R3C-20 | notes/footnote-newline-characterization | three empty-Raw runs, two adjacent after one interior newline | holds the LF count at one but changes the placeholder layout; the single-LF guard should keep the pre-strip body on both sides, so a difference would point at placeholder-adjacency handling rather than the LF guard | live and ref footers disagree on break count or separator bytes | both show the same single <br /> framing |
| R3C-21 | notes/footnote-newline-characterization | two empty-Raw runs, three interior newlines | a paragraph-break remainder fails the single-LF guard and is re-trimmed on the reference; live may preserve the authored breaks or mark a parabreak | live footer carries break or parabreak bytes while ref footer is empty | both show the same flat or parabreak shape |

```source-block-b
R3C-19	"[[footnote]]@@@@\n\n@@@@[[/footnote]]\n[[footnoteblock]]"
R3C-20	"[[footnote]]@@@@\n@@@@@@@@[[/footnote]]\n[[footnoteblock]]"
R3C-21	"[[footnote]]@@@@\n\n\n@@@@[[/footnote]]\n[[footnoteblock]]"
```

Total characterization rows: 3. Each will be probed in one follow-up create/capture batch under prefix muse-probe-round5c-r3- before being graded.

## FINAL DISPOSITIONS (graded after probe.norm plus campaign frame mask)

| ID | verdict | evidence |

| R3C-01 | CONFIRMED C-R5C-R3-1 | capture muse-probe-round5c-r3-r3c-01; comparison.json R3C-01 (DIFF) |
| R3C-02 | CLEARED | comparison.json R3C-02 |
| R3C-03 | UNTESTABLE | Wikidot normalized the line-leading TAB to four spaces, saved_source_matches=false |
| R3C-04 | UNTESTABLE | Wikidot stripped the space-only line, saved_source_matches=false |
| R3C-05 | UNTESTABLE | Wikidot stripped CR from CRLF, saved_source_matches=false |
| R3C-06 | CLEARED | comparison.json R3C-06 |
| R3C-07 | CLEARED | comparison.json R3C-07 |
| R3C-08 | CLEARED | comparison.json R3C-08 |
| R3C-09 | CLEARED | comparison.json R3C-09 |
| R3C-10 | CLEARED | comparison.json R3C-10 |
| R3C-11 | CLEARED | comparison.json R3C-11 |
| R3C-12 | CLEARED | comparison.json R3C-12 |
| R3C-13 | CLEARED | comparison.json R3C-13 |
| R3C-14 | CLEARED | comparison.json R3C-14 |
| R3C-15 | CLEARED | comparison.json R3C-15 |
| R3C-16 | CLEARED | comparison.json R3C-16 |
| R3C-17 | CLEARED | comparison.json R3C-17 |
| R3C-18 | CLEARED | comparison.json R3C-18 |
| R3C-19 | CLEARED | comparison-followup.json R3C-19 (two placeholders with two LFs; both sides empty) |
| R3C-20 | CONFIRMED C-R5C-R3-2 | capture muse-probe-round5c-r3-r3c-20; comparison-followup.json R3C-20 (DIFF) |
| R3C-21 | CLEARED | comparison-followup.json R3C-21 |
