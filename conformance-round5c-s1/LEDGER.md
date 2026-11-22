# Pre-probe ledger — round 5c unit R5C-S1, cross-rule seams around the sixteen REFCORR9 corrections (written before any live probe)

Read basis: canonical base e53e7234 with the post-REFCORR9 ground announced ready (snapshot-33, HEAD cfb792e86b3e4914a5761fe163929fda9d1b09fe, build green, all sixteen fix markers present as .before-refcorr9 companions in ref-php/ and lean-ftml/). The two governing protocols COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5C.md were read in full first. The correction inventory was read from coord-units/R9-PINS/UNIT.md (sixteen unique round-5b confirmations after dedupe), conformance-refcorr9/MIRROR-REFCORR9-MODULE.md and conformance-refcorr9/FINAL-GATES.md, and the corrected PHP sources were read firsthand: Raw.php, Freelink.php, Math.php, Div.php parse and Xhtml render, Tableadv.php, Module.php, Footnote.php parse and Footnoteitem.php render, List.php, Email.php parse and Xhtml render, Toc.php, plus harness/batch.php (which exposes a tokens mode). Each row below is a NEW sibling shape that combines two REFCORR9-corrected mechanisms or probes a third-order neighbor of a correction; no round-5b confirmed minimal shape is re-run as-is. A round-5b cleared shape is re-entered only where a named REFCORR9 correction changed its mechanism, and that reason is stated in the row. P_CONFIRM is the live rule-level byte that would make the seam a reference defect; P_CLEAR is the live byte that shows the corrected reference already matches. Pages are muse-probe-round5c-s1-* on sandbox-for-codex, left in place and listed in the map. SOURCE lines are JSON string literals parsed by gen_cases.py so case identities cannot drift from this prose. The uppercase-[[LI]]-after-failed-closer shape was corrected in REFCORR9 (List.php lines 461-490) and its siblings are in scope; the parity-side Email index candidate was closed with owned counter digits only and its mechanism was not moved by REFCORR9, so it is not re-probed (recorded as a standing scope decision rather than a suspicion). Stage 2 frames and token-id counter digits are owned classes throughout. No reference, mirror, spec or ftml file has been edited and no Lean, cargo or PHP harness run preceded this ledger.

## S01 — s01-fn-newline-in-div — empty-Raw lone newline retained in a footnote nested inside a div (C-R5B-R3-1 x R9-I seam)
FAMILY: notes/contain
SOURCE: "[[div class=\"c\"]]\n[[footnote]]@@@@\n@@@@[[/footnote]]\n[[/div]]\n[[footnoteblock]]"
P_CONFIRM: live emits a footer back-reference followed by a single inline break with no separator space while the reference folds the lone newline to a paragraph separator, or the div wrapper and footer boundary disagree at rule level.
P_CLEAR: the div wrapper, the footnote marker, the single break and the footer entry are byte-identical after the campaign frame mask.
REFCORR9 C-R5B-R3-1 keeps the pre-strip placeholder-bearing body when the empty-Raw strip leaves exactly one authored newline, and Footnoteitem derives its separator from the visible body. Both edits assume a top-level footnote. Placing that footnote inside a div runs the Contain parse around the note token and gives the newline a second owner at the div boundary; no REFCORR9 probe combined the two mechanisms. If the retained placeholder is mis-scoped by the div body regex, this sibling exposes it.

## S02 — s02-fn-newline-with-toc — empty-Raw lone newline footnote with a following TOC collection point (C-R5B-R3-1 x Toc seam)
FAMILY: notes/toc
SOURCE: "[[footnote]]@@@@\n@@@@[[/footnote]]\n[[toc]]\n[[footnoteblock]]"
P_CONFIRM: the live ordering of the footnote break, the TOC list and the footnote footer differs from the reference at rule level, or one side drops the retained newline when Toc rewrites the token stream.
P_CLEAR: the footnote break, TOC list tokens and footer entry agree after the campaign frame mask.
Toc::process walks the Heading token set and rewrites its own collection point late in the pipeline, after Footnote has stored the placeholder-bearing newline body. The REFCORR9 newline retention is pinned only on a bare footnote plus footnoteblock; a TOC between them is a third-order neighbor that tests whether the retained Newline token survives a later block-token rewrite.

## S03 — s03-fn-newline-with-anchor — empty-Raw lone newline footnote adjacent to a scored anchor (C-R5B-R3-1 x Anchor seam)
FAMILY: notes/anchor
SOURCE: "[[a tgt]]\n[[footnote]]@@@@\n@@@@[[/footnote]]\n[[footnoteblock]]"
P_CONFIRM: live keeps the anchor target and the footnote's single inline break while the reference attaches the retained newline to the anchor body or shifts the footer id.
P_CLEAR: anchor target, footnote break and footer entry agree after the campaign frame mask.
Anchor::parse joins a bare anchor to adjacent lines across one or two newlines, so a footnote whose decisive byte is exactly one retained newline sits on the same join boundary. The REFCORR9 proof never placed a footnote newline next to an anchor, making this a genuine two-correction seam between the newline retention and the anchor line-joining rule.

## S04 — s04-fl-ff-pipe-label — form-feed lead byte before _default: with a described pipe label (C-R5B-P2-1 x described-label seam)
FAMILY: freelink
SOURCE: "A [[[\u000c_default:Café|Étiquette]]] B"
P_CONFIRM: live serves href /cafe with label Étiquette while the reference keeps the form feed or the category in the href, or shifts the pipe-label cut.
P_CLEAR: href /cafe and label Étiquette agree on both sides after the standard mask.
REFCORR9 added 0x0C to the anchored category-strip regex, which consumes strlen of the whole match before transliteration. Every recorded lead-byte shape uses an undelimited target; a pipe label exercises the separate display branch that reads the raw target and cuts at the first colon. A wrong byte count in the strip is invisible on a plain target but moves the label path, so this sibling probes the strip and the label branch together.

## S05 — s05-fl-u2028-colon-pipe — U+2028 lead byte with a two-colon target and a described label (C-R5B-P2-2 x colon-cut seam)
FAMILY: freelink
SOURCE: "A [[[\u2028_default:Café:sub|L]]] B"
P_CONFIRM: live strips the three-byte U+2028 and the category and serves /cafe:sub with label L while the reference drops the second colon segment or leaves a lead byte.
P_CLEAR: both sides serve /cafe:sub with the same display text.
REFCORR9 added the E2 80 A8 lead alternative, and the no-label display branch cuts at the first colon after a real page name. A second colon is a third-order sibling of the recorded single-colon non-ASCII shape and isolates whether the three-byte alternative is consumed by the same strlen count when a later colon changes the label path.

## S06 — s06-fl-bom-upper-pipe — U+FEFF BOM lead with an uppercase _DEFAULT: category and a pipe label (C-R5B-P2-3 x case-insensitive-category seam)
FAMILY: freelink
SOURCE: "A [[[\uFEFF_DEFAULT:Café|L]]] B"
P_CONFIRM: live strips the three-byte BOM and the case-insensitive category to /cafe while the reference keeps a BOM byte or the category spelling.
P_CLEAR: href /cafe and label L agree on both sides.
The BOM alternative was cached and admitted as a lead byte, and the category match is case-insensitive, but no REFCORR9 shape combined a three-byte lead with an uppercase category and a described label. The regex is byte-oriented with no /u flag, so this sibling checks that a malformed-UTF-8 subject cannot turn the strip off when the category case and the label branch change together.

## S07 — s07-fl-star-leadbyte-pipe — leading star ordered before a new form-feed lead byte and category with a pipe label (C-R5B-P2-4 x C-R5B-P2-1 seam)
FAMILY: freelink
SOURCE: "A [[[*\u000c_default:Café|Label]]] B"
P_CONFIRM: live consumes the star, then the form feed and the category, and serves /cafe with label Label while the reference lets the star defeat the strip.
P_CLEAR: href /cafe, the new-tab target option and the label agree after the mask.
REFCORR9 C-R5B-P2-4 consumes a single leading star on the slug source before the anchored category strip under the no-leading-space guard, while C-R5B-P2-1 added the form-feed alternative. The recorded ordering shape uses a plain zero-whitespace category, so a star followed by one of the newly admitted lead bytes is the unmeasured composition of the two ordering fixes and exercises the byte check on the slug source against a described label.

## S08 — s08-math-variant-with-attrs — case-variant type attribute alongside other attributes and a positional label (C-R5B-P2-5/6 x attribute-key seam)
FAMILY: math
SOURCE: "[[math a TYPe=\"align\" style=\"s\" data-x=\"1\"]]\nx\n[[/math]]"
P_CONFIRM: the reference stored type value is align or absent while live serves the equation environment, or a dropped style/data attribute changes the chosen environment.
P_CLEAR: the reference tokens-mode type is equation with label a, content x and both extra attributes retained, matching live's environment.
REFCORR9 generalized the mixed-case type-name fallback so any case variant of the attribute NAME takes fossil fallback equation. The Math opener regex captures an arbitrary run of lowercase-named attributes, so a style and a data-* attribute beside a case-variant type could change the raw key map that getAttrs returns. Tokens mode is used because the harness LatexRenderer is a no-op PNG stub at the render boundary, as adjudicated in round 5b.

## S09 — s09-math-lower-plus-variant — exact lowercase type and a case-variant type in one opener (C-R5B-P2-5/6 third-order sibling)
FAMILY: math
SOURCE: "[[math type=\"gather\" TYPe=\"align\"]]\nx\n[[/math]]"
P_CONFIRM: the reference takes the case-variant equation fallback while live keeps the exact lowercase gather, or the two sides choose different environments.
P_CLEAR: both sides choose the lowercase value gather in tokens mode and in the rendered environment.
The REFCORR9 record states that only a case-variant name triggers the equation fallback and an exact lowercase type is kept verbatim, but that precedence is asserted on single-key openers. Putting both keys in one opener is a third-order sibling that confirms branch order against the reference token artifact, which no REFCORR9 probe measured.

## S10 — s10-div-ph-id-ph-class — Size-token placeholder id combined with an empty-Raw placeholder class and duplicate case-variant data keys (C-R5B-R1-1 x C-R5B-P1-5 seam)
FAMILY: div
SOURCE: "[[div id=\"[[size 12px]]x[[/size]]\" class=\"@@@@\" data-Foo=\"1\" data-foo=\"2\"]]\nX[[/div]]"
P_CONFIRM: live clears the placeholder id and the placeholder class to empty while keeping the last-wins data value, and the reference clears the wrong attribute or drops the data key.
P_CLEAR: id=\"\", class=\"\" and data-foo=\"2\" agree on both sides after the mask.
REFCORR9 C-R5B-R1-1 preserves a 0xFF-bearing authored id so the render clear arm emits id=\"\", while the placeholder-cleared class arm and the case-variant data last-wins rule live in the same start token but in different code paths. Putting a Size placeholder, an empty-Raw placeholder and a data collision on one opener tests that the narrowed id arm did not disturb either sibling arm through the shared args array.

## S11 — s11-div-ph-id-u-prefix — placeholder-bearing id whose authored value already begins with u- (C-R5B-R1-1 guard-path sibling)
FAMILY: div
SOURCE: "[[div id=\"u-[[size 12px]]x[[/size]]\"]]\nX[[/div]]"
P_CONFIRM: live takes the collapse-to-null path or the placeholder-clear arm differently from the reference, so the rendered id differs at rule level.
P_CLEAR: both sides emit the same id value after the placeholder bytes are masked.
isolateId preserves a 0xFF-bearing value only when it does not start with u-; an authored u- prefix takes the historic collapse path. The REFCORR9 confirmation pins the preserve arm on a value without the prefix, so the guard boundary is an unmeasured third-order sibling of the same correction.

## S12 — s12-raw-2close-plus-text — a 4+ opener with the new two-run surplus closer followed by prose (C-R5B-P3-1 x text seam)
FAMILY: raw
SOURCE: "A @@@@ZQ@@ B"
P_CONFIRM: live surfaces ZQ@@ with no Raw token while the reference cancels both closer bytes or re-scans them as a new opener.
P_CLEAR: both sides surface the same literal ZQ@@ and the same surrounding prose after the frame mask.
REFCORR9 C-R5B-P3-1 changed the surplus-closer expression so a two-run closer after a 4+ opener keeps both bytes literal, verified on a bare construct. Surrounding prose changes the enclosing token stream and the Tighten pass, so this sibling asks whether the surfaced @@ bytes stay literal when the construct is inline in a paragraph.

## S13 — s13-raw-3close-plus-text-run — a three-run surplus closer with text plus a later empty Raw run (C-R5B-P3-1 x C-R5B-P3-1 sibling)
FAMILY: raw
SOURCE: "A @@@@ZQ@@@ B @@@@ C"
P_CONFIRM: live keeps all three @ bytes from the first run and renders nothing for the later empty run while the reference re-scans them or changes the intervening text.
P_CLEAR: both sides surface ZQ@@@ and the same A/B/C text with the trailing empty Raw vanished.
The corrected closer expression keeps a three-run surplus literal, and its battery stops at one construct per source. A second empty Raw run later in the document changes the global token stream and Tighten's empty-Raw removal, so this sibling checks that the surfaced @ bytes are not swallowed by a later placeholder interaction.

## S14 — s14-table-dup-underscore — underscore-bearing data-* key with a case-variant duplicate on an advanced table head (C-R5B-P3-2 x last-wins seam)
FAMILY: table
SOURCE: "[[table data-Foo_Bar=\"1\" data-foo_bar=\"2\"]]\n[[row]]\n[[cell]]\nC\n[[/cell]]\n[[/row]]\n[[/table]]"
P_CONFIRM: live emits data-foo_bar=\"2\" while the reference keeps the first value, drops the underscore key, or misorders the attribute.
P_CLEAR: both sides emit the last-wins value with ordinary row and cell bytes after the mask.
REFCORR9 C-R5B-P3-2 admits the underscore byte in the lowercased data-* key grammar and folds a leading case variant to lowercase. The recorded shape uses a single key; two case-variant keys that fold to the same underscore-bearing key are the third-order sibling that tests the borrowed last-wins tie-break after the fold.

## S15 — s15-table-dup-underscore-cell — underscore data-* duplicate on a cell plus an uppercase DATA- prefix (C-R5B-P3-2 owner/prefix seam)
FAMILY: table
SOURCE: "[[table]]\n[[row data-Foo_Bar=\"1\" data-foo_bar=\"2\"]]\n[[cell data-Foo_Bar=\"3\" DATA-BAZ_QUX=\"4\"]]\nC\n[[/cell]]\n[[/row]]\n[[/table]]"
P_CONFIRM: the row and cell data values or the uppercase-prefix drop differ between live and the reference at rule level.
P_CLEAR: both sides emit the same row and cell data attributes with DATA-BAZ_QUX dropped on both.
buildAttrs is shared by table, row and cell owners, but the REFCORR9 underscore probe used a table head only. Combining the fold on a row and a cell with an uppercase DATA- prefix that must stay outside the recognised lower-case prefix tests that the admitted underscore byte did not widen the prefix rule on the other owners.

## S16 — s16-module-code-raw-closer — Code-bearing module body that also contains a Raw token, with an authored uppercase closer (C-R5B-P3-3 x REFCORR7 seam)
FAMILY: module
SOURCE: "[[module nosuchmod]]\n[[code]]CODEX[[/code]]\n@@@@\n[[/MODULE]]"
P_CONFIRM: live re-emits the authored uppercase closer while the reference emits a lowercase literal, or the two sides disagree on whether the Raw token body is consumed with the closer.
P_CLEAR: both sides show the error block, the code block, no Raw bytes and the same authored closer spelling after the mask.
REFCORR9 C-R5B-P3-3 carries the matched closer bytes into the Code-gated re-emit, and the gate was narrowed in REFCORR7 so a Raw-token body alone is consumed. A body holding both a Code token and a Raw token sits exactly on the boundary between the re-emit gate and the suppression rule, which no REFCORR9 probe measured.

## S17 — s17-module-closer-tail — authored mixed-case closer followed by trailing text on the same line (C-R5B-P3-3 tail sibling)
FAMILY: module
SOURCE: "[[module nosuchmod]]\n[[code]]CODEX[[/code]]\n[[/Module]]TAIL"
P_CONFIRM: live preserves the mixed-case closer and the trailing TAIL as literal bytes while the reference lowercases the closer or absorbs TAIL into the code block.
P_CLEAR: both sides emit the same `[[/Module]]TAIL` tail literal after the error and code blocks.
The REFCORR9 fix reads the last eleven bytes of the regex match as the closer, and the match ends at the closer. A mixed-case spelling with trailing text on that same line asks whether the fixed-width suffix read and the unclaimed tail boundary compose as authored, which the bare uppercase closer shape did not test.

## S18 — s18-li-lower-after-failed-close — a lowercase second item after a failed uppercase-list closer (C-R5B-P1-1 case sibling)
FAMILY: list
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[li]]B[[/li]]\n[[/UL]]"
P_CONFIRM: live keeps the post-closer lowercase item literal inside item A while the reference takes the generic synthetic-tail path and forms a second item or leaves the list unclosed.
P_CLEAR: both sides keep the same item structure, closer residue and list closure after the frame mask.
REFCORR9 C-R5B-P1-1 emits a one-item closed token sequence for an exact skeleton whose post-failed-closer item is uppercase `[[LI]]`; the guard regex requires that exact case. The corrected shape itself is not re-run. A lowercase second item is the closest case sibling and tests whether the narrow guard generalizes or whether the generic path reasserts the pre-correction structure.

## S19 — s19-li-attr-after-failed-close — a post-failed-closer uppercase item carrying attributes (C-R5B-P1-1 attribute sibling)
FAMILY: list
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[LI class=\"x\"]]B[[/LI]]\n[[/UL]]"
P_CONFIRM: live keeps the attributed post-closer item literal and closed while the reference splits it into a new item or writes the authored class onto a different element.
P_CLEAR: both sides agree on the closed one-item list and on where the literal attributed marker sits.
The same guard regex requires exactly `[[LI]]` with no attribute tail. An item with an authored class is a third-order neighbor of the corrected skeleton and exercises buildListAttrs on a marker that the guard may no longer recognise, which the fix's minimal shape cannot show.

## S20 — s20-li-empty-raw-item — uppercase explicit list whose empty item body is made of empty-Raw placeholders (C-R5B-P1-4 x C-R5B-P3-1 seam)
FAMILY: list/raw
SOURCE: "[[UL]]\n[[LI]]@@@@ @@@@[[/LI]]\n[[/UL]]"
P_CONFIRM: live emits exactly one trailing break in the empty item while the reference emits a second break from a raw newline, or the empty-Raw strip changes the item's survival.
P_CLEAR: both sides emit the same one-break empty item with no Raw bytes after the frame mask.
REFCORR9 C-R5B-P1-4 makes a whitespace-only uppercase item carry exactly one break, and C-R5B-P3-1 fixes the surplus empty-Raw shaping. The recorded empty-item shape uses literal whitespace only; replacing that whitespace with two empty Raw runs combines the two corrections on one item and tests whether the placeholder strip runs before the one-break decision at a list boundary no REFCORR9 probe owned.
