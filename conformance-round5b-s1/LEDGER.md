# Pre-probe ledger — round 5b unit R5B-S1, cross-rule seams around the sixteen REFCORR8 corrections (written before any live probe)

Read basis: canonical base e53e7234 with the post-REFCORR8 build-green ground announced on WORKBOARD.md line 45; the REFCORR8-INTAKE.md adoption resolution (16 shapes fixed, C-R5-S1-16 ruled an owned counter class), the nine CORRECTION-REFCORR8 records, the firsthand corrected PHP sources (List.php, Div.php parse and render, Footnote.php, Bibitem.php, Raw.php, Freelink.php, Math.php, Mathinline.php, Tableadv.php, Tighten.php, Text/Wiki.php U+FFFD recovery), and both required review files wj-completeness-review/LISTCASE-FIX-RESULT.md and wj-completeness-review/EMAIL-FIX-RESULT.md read in full before this ledger. Each row below is a NEW sibling shape that combines two corrected mechanisms or probes a third-order neighbor of a correction; no round-5 confirmed minimal shape is re-run as-is. A round-5 cleared shape is re-entered only where a named REFCORR8 correction changed its mechanism, and that reason is stated in the row. P_CONFIRM is the live rule-level byte that would make the seam a reference defect; P_CLEAR is the live byte that shows the corrected reference already matches. Pages are muse-probe-round5b-s1-* on sandbox-for-codex, left in place and listed in the map. SOURCE lines are JSON string literals parsed by gen_cases.py so case identities cannot drift from this prose. No reference, mirror, spec or ftml file has been edited and no Lean, cargo or PHP harness run preceded this ledger.

## S01 — s01-li-failed-close — uppercase [[LI]] after a failed uppercase-list closer, named open item of the listcase fix (C-R5-P1-4 seam; LISTCASE-FIX-RESULT.md line 23)
FAMILY: list
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[LI]]B[[/LI]]\n[[/UL]]"
P_CONFIRM: live forms a second item or sibling list for the post-closer [[LI]]B[[/LI]] while the reference leaves that marker literal inside item A (a block-list-item rule-failed residue), or the two sides disagree on which closer is absorbed.
P_CLEAR: both sides give the same item structure and the same treatment of the two uppercase closers.
The listcase review records this exact source as its named open item: ftml keeps the second uppercase LI literal inside item A because the shared li-pairing scan decrements list depth on any-case [[/ul]], so a head after the first failed closer is recorded outside list scope and never pairs. REFCORR8 fixed the text-absorption branch (C-R5-P1-4) and the nested-case pairing branch (C-R5-S1-01/02) but deliberately did not touch the shared pairing scan, so this third-order sibling asks whether the corrected reference still mis-scopes the second LI against live. This is a re-probe with a changed mechanism: the earlier round-5 list shapes cleared without the REFCORR8 absorption and normalization edits now in place.

## S02 — s02-list-emptyraw-retrim — empty-Raw re-trim value stored in an explicit list item (R8-C x R8-A seam)
FAMILY: list
SOURCE: "[[ul]]\n[[li]]@@@@ @@@@[[/li]]\n[[/ul]]"
P_CONFIRM: live emits an empty or tight <li> while the reference leaves a stray interior separator space, or the reference keeps a placeholder the list-item boundary has consumed.
P_CLEAR: the <li> body and its separator are byte-identical on both sides.
REFCORR8 C-R5-R3-1/2 re-trim the footnote and bibitem bodies AFTER the empty-Raw strip, but the correction is local to those two parse rules; a list item holds the same two empty Raw runs separated by a space and then meets the explicit-list trailing-token boundary that R8-A also touched. If the post-strip re-trim is really needed only where the emptiness flag fires, the list item should clear; if the residual space is a general empty-Raw artifact, this sibling exposes it at a list boundary no corrected rule owns.

## S03 — s03-list-scored-wsclass — scored uppercase list opener with a whitespace-only class and a cross-type uppercase closer with trailing text (R8-A x R8-H seam)
FAMILY: list
SOURCE: "[[UL_ class=\" \"]]\n[[li]]a[[/li]]\n[[/OL]]AFTER"
P_CONFIRM: live emits an unclosed list carrying class="" with a following AFTER, while the reference closes the list, drops the class, or places AFTER inside the item.
P_CLEAR: both sides agree on closure, the empty class attribute value and the AFTER separator.
C-R5-P1-3 lets a scored raw-case opener take the unclosed path when its closer is absorbed, and C-R5-P1-1 keeps a whitespace-only authored class as a real rendered class="". The recorded minimal shapes carry at most one of those mechanisms: a scored opener with no attribute, or a whitespace class on a div. Combining them on one list opener tests whether the scored-gate edit and the authored-value map interact correctly, since normalizeValue runs before the list synthetic-tail decision.

## S04 — s04-fl-ws-pipe-label — U+3000 whitespace prefix before _default: with a described pipe label (R8-B x described-label seam)
FAMILY: freelink
SOURCE: "A [[[　_default:x|Label]]] B"
P_CONFIRM: live serves href /x with label Label while the reference leaves the category in the href or shifts the pipe-label cut by the three stripped bytes.
P_CLEAR: href /x and label Label agree on both sides.
C-R5-S1-08 added the UTF-8 E3 80 80 (U+3000) alternative to the anchored prefix strip, and the strip consumes strlen of the whole match before transliteration. Every recorded whitespace shape uses an undelimited target; a pipe label exercises the separate display-text branch that cuts at the first colon of the raw target. A wrong byte count in the prefix strip is invisible on the plain target but moves the pipe-label offset, so this sibling probes the two branches together.

## S05 — s05-fl-vt-upper-pipe — vertical-tab prefix before uppercase _DEFAULT: with a non-ASCII target and a pipe label (R8-B x transliteration seam)
FAMILY: freelink
SOURCE: "A [[[\u000b_DEFAULT:Café|Étiquette]]] B"
P_CONFIRM: live strips the vertical tab and the case-insensitive category and transliterates the suffix to /cafe while the reference keeps a byte of the prefix or the category.
P_CLEAR: href /cafe and the authored pipe label agree on both sides.
C-R5-P2-1 introduced the 0x0B strip alternative and C-R5-S1-07 proved the category match is case-insensitive, but neither recorded shape combines a vertical tab, an uppercase category, a non-ASCII suffix and a pipe label. The strip is byte-oriented and consumes the full match, then freelink_transliterate runs on the remainder; this sibling checks that the four sub-mechanisms compose in the same order as live.

## S06 — s06-fl-nbsp-colonchain — NBSP prefix plus a two-colon target with a pipe label (R8-B x colon-cut seam)
FAMILY: freelink
SOURCE: "A [[[\u00a0_default:caté:sub|L]]] B"
P_CONFIRM: live drops the NBSP and category then serves /cate:sub with label L while the reference drops the second colon segment or mis-strips the label.
P_CLEAR: both sides serve /cate:sub with the same display text.
C-R5-P2-2 added the C2 A0 (U+00A0) strip alternative; the reference's display branch cuts at the first colon when the target starts with a page name, so a second colon is a third-order sibling of the recorded single-colon non-ASCII shape. It isolates whether the two-byte whitespace alternative is consumed by strlen in the same way when a later colon changes the label path.

## S07 — s07-math-type-other-attrs — uppercase TYPE with a label and two additional attributes (R8-D x attribute-key seam; required Math TYPE with other attributes)
FAMILY: math
SOURCE: "[[math a TYPE=\"align\" style=\"s\" data-x=\"1\"]]\nx\n[[/math]]"
P_CONFIRM: live serves the equation envelope while the reference takes the lowercase-type default align or rejects the environment because the extra attributes change getAttrs keying.
P_CLEAR: both sides carry type equation with label a and content x after the PNG frame is masked.
C-R5-P2-3 added the nested absent-lowercase-type fallback to equation for a bare TYPE attribute. The Math opener regex captures an arbitrary run of lowercase-named attributes, so a style and a data-* attribute beside TYPE could change the raw key map that getAttrs returns. This sibling tests whether the fallback still fires when other attributes are present, without changing the label or content.

## S08 — s08-math-type-lower-and-upper — both lowercase type and uppercase TYPE present (R8-D third-order sibling)
FAMILY: math
SOURCE: "[[math type=\"gather\" TYPE=\"align\"]]\nx\n[[/math]]"
P_CONFIRM: live keeps the lowercase value gather while the reference takes the uppercase fallback equation, or the two sides choose different environments.
P_CLEAR: both sides choose the lowercase type gather.
The REFCORR8-MATH-TYPE record states that a present lowercase type is kept verbatim and the uppercase fallback applies only when the lowercase key is absent. That precedence is asserted on a single-shape battery; this sibling puts both keys in one opener to confirm the branch order against live, which no REFCORR8 probe measured.

## S09 — s09-mathinline-date-email — a described email whose label claims a URL token, authored inside inline math (R8-D x Email seam)
FAMILY: mathinline
SOURCE: "[[$x [a@b.com http://example.com] y$]]"
P_CONFIRM: live suppresses the whole formula to $$ while the reference expands the Email token to an empty option value and serves a non-empty formula, or the reference suppresses and live does not.
P_CLEAR: both sides serve the same math-inline body after the span frame is masked.
C-R5-P2-4 added Date to the recursive suppressRules set, which currently holds Freelink, Raw, Newline, Image and Date. A described email that claimed a URL is a different token family inside the same formula: the Email token is not on the suppress list, so the fallback optionReplacement returns an empty string and the surrounding text survives. Live's treatment of that token inside inline math is not pinned by the Date minimal shape, so this is a genuine two-correction seam.

## S10 — s10-div-id-wsclass — whitespace-only id plus whitespace-only class on one div (R8-I x R8-H seam)
FAMILY: div
SOURCE: "[[div id=\"   \" class=\" \"]]\nbody\n[[/div]]"
P_CONFIRM: live emits id="u-" and class="" while the reference clears the id to empty or suppresses the pair.
P_CLEAR: both sides emit the u- shell and the empty class value with the same body.
C-R5-R1-1 removed the render-side bare-u- clear arm and C-R5-P1-1 kept a whitespace-only authored class as a real empty-valued attribute. The two edits live in different files and were verified on separate minimal shapes; this sibling puts them on one start token to check that the id shell survives while the class value is rendered empty, which is the composed live value.

## S11 — s11-div-id-dupdata — whitespace-only id plus two case-variant data-* keys (R8-I x R8-H seam)
FAMILY: div
SOURCE: "[[div id=\"   \" data-Foo=\"1\" data-foo=\"2\"]]\nX[[/div]]"
P_CONFIRM: live emits id="u-" with data-foo="2" while the reference keeps the earlier data value or clears the id.
P_CLEAR: both sides emit id="u-" data-foo="2" with the same body.
The authoredValue map added by C-R5-P1-2 feeds the unset pass that decides whether a key survives, while the id shell relies on the render clear arm narrowed by C-R5-R1-1. A collision on the same start token tests that the last-wins assignment and the shell emission do not interfere through the shared args array or the lost-vanished flag.

## S12 — s12-div-id-placeholder-class — whitespace-only id with a real placeholder-carrying class value (R8-I placeholder boundary; required Div whitespace-only id with placeholder values)
FAMILY: div
SOURCE: "[[div id=\"   \" class=\"@@@@\"]]\nX[[/div]]"
P_CONFIRM: live clears the placeholder class to class="" but keeps id="u-", while the reference clears both or keeps the placeholder bytes.
P_CLEAR: both sides emit id="u-" with class="" and the same body.
R8-I deliberately left the render-side 0xFF placeholder-clear arm intact and removed only the bare-u- arm; R8-H kept the placeholder-cleared class shape byte-identical on a div with an ordinary id. Combining a whitespace-only id with the recorded placeholder-cleared class is the unmeasured boundary between the two arms: it confirms that narrowing the id arm did not accidentally stop the class arm, and that the u- shell is not mistaken for a placeholder when another attribute really carries one.

## S13 — s13-fn-in-list-retrim — empty-Raw re-trim footnote stored inside an explicit list item (R8-C x R8-A seam; required empty-Raw re-trim inside list context)
FAMILY: notes
SOURCE: "[[ul]]\n[[li]]A [[footnote]]@@@@ @@@@[[/footnote]] B[[/li]]\n[[/ul]]\n[[footnoteblock]]"
P_CONFIRM: live's footer entry has no separator space after the re-trim while the reference keeps one, or the footer id or list break differs.
P_CLEAR: footer body, ids and list bytes are identical on both sides.
C-R5-R3-1 re-trims the footnote body after stripping two adjacent empty Raw placeholders in a top-level footnote. Placing that footnote inside a list item introduces the R8-A list trailing-token boundary during the same parse, so the stored body and the item break are decided together. The REFCORR8 battery never combined the notes re-trim with a list owner.

## S14 — s14-fn-in-quote-retrim — empty-Raw re-trim footnote inside a blockquote (R8-C seam; required empty-Raw re-trim inside quote context)
FAMILY: notes
SOURCE: "> [[footnote]]@@@@ @@@@[[/footnote]]\n\n[[footnoteblock]]"
P_CONFIRM: live's quote wrapper and footer entry agree on the re-trimmed body while the reference keeps a separator space or shifts the quote boundary.
P_CLEAR: quote wrapper, footer entry and separator are byte-identical.
The same REFCORR8 footnote re-trim is exercised behind a blockquote prefix, which runs its own paragraph and linebreak rules around the footnote token. This sibling asks whether the post-strip trim value is stable when the surrounding block is a quote rather than a paragraph, a context no R8-C row covered.

## S15 — s15-fn-two-runs-tab — two empty Raw runs separated by a tab in a footnote (R8-C x Raw whitespace-family seam; required two empty Raw runs separated by different whitespace families)
FAMILY: notes
SOURCE: "[[footnote]]@@@@\t@@@@[[/footnote]]\n[[footnoteblock]]"
P_CONFIRM: live folds the tab-separated pair to an empty footer entry while the reference keeps a space or the tab in the stored body.
P_CLEAR: both sides emit the same footer entry with no separator artifact.
The R3 follow-up battery proved the space and the tab as separators between the two empty Raw runs, but under the pre-correction reference the space case was the confirmation and the tab case a confirming follow-up. Post-correction the re-trim uses trim(), whose byte set covers the tab; this sibling re-checks the tab on the adopted ground and settles the whitespace-family generalization with a fresh capture rather than intent.

## S16 — s16-bib-two-runs-u3000 — two empty Raw runs separated by U+3000 in a bibliography entry (R8-C x Freelink-whitespace-family seam)
FAMILY: notes
SOURCE: "[[bibliography]]\n: lab : @@@@　@@@@\n[[/bibliography]]"
P_CONFIRM: live treats the ideographic space as a whitespace separator and folds the entry to empty while the reference keeps U+3000 in the visible string and emits a separator.
P_CLEAR: both sides emit the same entry and empty flag.
PHP trim() strips only ASCII whitespace, so U+3000 between the two placeholders survives the REFCORR8 re-trim in the reference. R8-B established that live accepts U+3000 as a leading whitespace byte in the freelink _default: strip, so this sibling asks whether the same byte is also whitespace for the notes emptiness decision; the two corrected mechanisms disagree about the byte class, making it a real cross-rule seam.

## S17 — s17-raw-4c3-plus-empty — a 4+ opener with a three-run closer followed by a standalone empty Raw run (R8-F third-order sibling)
FAMILY: raw
SOURCE: "@@@@ZQ@@@\n\n@@@@"
P_CONFIRM: live keeps the three literal @ bytes from the first run and renders nothing for the second while the reference cancels the first three or re-scans them with the second run.
P_CLEAR: both sides surface ZQ@@@ and no bytes for the trailing empty Raw.
C-R5-P3-1 changed the closer-surplus expression so a bare three-run closer after a 4+ opener stays literal. Its battery stops at one construct per source; a second empty Raw run later in the document changes the global token stream and the Tighten empty-Raw removal pass, so this sibling checks that the surfaced @ bytes are not swallowed by a later placeholder interaction.

## S18 — s18-tableadv-dup-data — uppercase and lowercase duplicate data-* keys on an advanced table head (R8-G x R8-H seam)
FAMILY: table
SOURCE: "[[table data-Foo=\"1\" data-foo=\"2\"]]\n[[row]]\n[[cell]]\nC\n[[/cell]]\n[[/row]]\n[[/table]]"
P_CONFIRM: live emits data-foo="2" while the reference keeps the first value or drops the key.
P_CLEAR: both sides emit the last-wins value with the ordinary row and cell bytes.
C-R5-P3-2 folds a leading data- key to lowercase before the grammar and allowlist, and the correction record asserts the table already resolves duplicates last-wins by PHP array assignment, borrowing the Div sibling. No measured shape put two case-variant data keys on a table head, so this sibling confirms the borrowed tie-break on the table surface after the fold.

## S19 — s19-email-mixed-label — described email whose label holds plain text plus a URL placeholder (required Email claimed-placeholder-with-intervening-token family)
FAMILY: email
SOURCE: "[a@b.com X http://example.com]"
P_CONFIRM: live leaves the label unclaimed and reverses the full text while the reference claims the URL token into the label, or the two sides differ in the obfuscated bytes after the counter digits are masked.
P_CLEAR: both sides produce the same obfuscated email label with the same quote escaping and U+FFFD wrapping after the counter mask.
EMAIL-FIX-RESULT.md line 19 names mixed labels containing a placeholder alongside other text as unclaimed and expressly unmeasured. The reference claim rule fires only when the label region is exactly one Url token followed by the closing bracket; adding X before the URL is the third-order sibling that tests the exactness condition against live rather than against the ftml fix's intent.

## S20 — s20-email-intervening-code — described email claiming a URL placeholder after an intervening Code token (required Email claimed-placeholder-with-intervening-token family)
FAMILY: email
SOURCE: "[[code]]x[[/code]]\n\n[a@b.com http://example.com]"
P_CONFIRM: live claims the URL placeholder and shifts the leaked index by the code token while the reference either fails to claim or emits a structurally different label; a pure digit shift on an otherwise identical label is an owned counter class and is recorded as CLEARED, not confirmed.
P_CLEAR: after the standard token-counter digit mask both sides show the same claimed-email structure, obfuscation and escaping.
EMAIL-FIX-RESULT.md line 19 names code or form blocks as pre-URL token families that can shift live's claimed index. The REFCORR8 campaign mask canonizes token-id counter digits, so the decisive value here is the claimed structure, not the digits; the probe records whether an intervening token changes anything beyond the owned digit run and therefore whether the claim mechanism itself generalizes.
