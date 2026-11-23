# Pre-probe ledger — round 5d unit R5D-S1, cross-rule seams around the REFCORR8/9/10 corrections (written before any live probe)

Read basis: canonical base e53e7234 on the post-REFCORR10 repair ground announced ready by the creation of COORD-UNITS/PROTOCOL-R5D.md (snapshot-34 publication repair, R10-FINAL verdict PASS). The two governing protocols COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5D.md were read in full first. The correction mechanism inventory was read firsthand from conformance-refcorr10/CORRECTION-REFCORR10-GENERAL.md, CORRECTION-REFCORR10-FREELINK-GENERAL.md, CORRECTION-REFCORR10-HASHROUTE.md, MOVEMENT.md and VERDICT.md, and the corrected PHP sources were read firsthand by diff against their .before-refcorr10 companions: List.php (C1 adjacency guard, nested-list-closes rule, empty-item sibling rule, general raw-case LI guard), Footnote.php (single-authored-break general body rule) and Render/Xhtml/Footnoteitem.php (visible-projection separator rule), Freelink.php (general White_Space|FEFF|star lead class, hash-route textRaw), Div.php parse (placeholder id preserved for any body) and Render/Xhtml/Div.php, Raw.php (laterQuad re-association and general surplus-closer formula), Tableadv.php (data-* suffix class [a-z0-9._-]), Module.php (inline nested-opener newline), plus harness/batch.php (render/tokens modes) and harness/pages.php. Round-5b and 5c lane S1 reports were read to avoid re-running a minimal confirmed shape as-is. Pages are muse-probe-round5d-s1-* on sandbox-for-codex, left in place and listed in map.json. Each row below is a NEW sibling shape that combines two corrected mechanisms or probes a third-order neighbor of a REFCORR8/9/10 correction; no prior confirmed minimal shape is re-run as-is, and the two rows that re-enter a previously confirmed bare shape (S14, S15) do so with a named changed mechanism (REFCORR10 removed the u- exclusion and added nested-module consumption) stated in the row. P_CONFIRM is the live rule-level byte that would make the reference defect; P_CLEAR is the live byte showing the corrected reference already matches. SOURCE lines are JSON string literals parsed by gen_cases.py so case identities cannot drift from this prose. Stage 2 frames, serving surfaces and token-id counter digits are treated as owned/cleared classes throughout. No reference, mirror, spec or ftml file has been edited and no Lean, cargo or PHP harness run preceded this ledger.

## S01 — s01-li-guard-footnote-gap — footnote line breaks the REFCORR10 C1 failed-closer adjacency guard (list case stack x notes)
FAMILY: list/notes
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[footnote]]gap[[/footnote]]\n[[LI]]B[[/LI]]\n[[/UL]]\n[[footnoteblock]]"
P_CONFIRM: live keeps the post-closer [[LI]]B[[/LI]] literal inside item A and closes a single list while the reference forms a second list item because the REFCORR10 C1 guard requires the raw-case LI to be immediately adjacent to the failed [[/UL]] newline.
P_CLEAR: both sides produce the same one-item list with the gap footnote footer and literal B bytes.
REASON: REFCORR10 generalised the C1 guard to `\[\[li(?:\s+[^\]]*)?\]\]` with /i but kept the rigid `\[\[\/(?:ul|ol)\]\]\n(...)` adjacency; a footnote collected between the failed closer and the following LI is a third-order sibling that no REFCORR8/9/10 probe placed there. R5C-S1-3/4 probed lowercase and attributed LI adjacency only.

## S02 — s02-li-empty-item-footnote-nested — footnote token defeats the REFCORR10 empty-item sibling rule (list x notes x nested list)
FAMILY: list/notes
SOURCE: "[[ul]]\n[[li]][[footnote]]n[[/footnote]][[ul]]\n[[li]]in[[/li]]\n[[/ul]][[/li]]\n[[/ul]]\n[[footnoteblock]]"
P_CONFIRM: live emits the nested list as a sibling after the outer list with the footnote marker in the empty item while the reference keeps the nested list inside the item because the footnote token placeholder makes bodyNoPh non-empty and the empty-item guard does not fire.
P_CLEAR: the item, nested-list position and footnote footer are byte-identical after the campaign frame mask.
REASON: REFCORR10 added `bodyNoPh = preg_replace('/\s|\x02EXPLIST_\d+\x03/', '', body)` to decide emptiness; a footnote placeholder is a different 0xFF token family not removed by that expression, so inserting it into the would-be empty item is a genuine third-order sibling of the nested-in-empty-item correction.

## S03 — s03-li-mixedcase-footnote-body — mixed-case LI case stack with footnote bodies in each item (list case stack x notes)
FAMILY: list/notes
SOURCE: "[[ul]]\n[[li]][[footnote]]n1[[/footnote]][[/li]]\n[[LI]][[footnote]]n2[[/footnote]][[/LI]]\n[[/ul]]\n[[footnoteblock]]"
P_CONFIRM: the item boundary, case-stack pairing or footnote document-order numbering differs at rule level between live and reference.
P_CLEAR: both sides produce the same two-item list and the same footnote footer numbering after the owned counter-digit mask.
REASON: REFCORR8/9/10 refined raw-case LI pairing and the REFCORR10 general guard; a mixed-case stack whose two item bodies are footnote collection points runs the footnote token through the case-stack rewrite twice, a combination not in any prior lane.

## S04 — s04-li-fn-newline-before-failed-close — empty-Raw single-newline footnote inside a raw-case item before a failed uppercase closer (list x notes newline)
FAMILY: list/notes
SOURCE: "[[UL]]\n[[LI]]A[[footnote]]@@@@\n@@@@[[/footnote]][[/LI]]\n[[/UL]]\n[[LI]]B[[/LI]]\n[[/UL]]\n[[footnoteblock]]"
P_CONFIRM: the retained footnote newline combined with the failed-closer LI stack yields different literal bytes, break counts or footer entries on the two sides.
P_CLEAR: the retained break, the literal post-closer item and the footer entry agree after the campaign frame mask.
REASON: REFCORR10 GENERAL keeps a placeholder-bearing footnote body exactly when it has one authored break; REFCORR10 List closes an outer list around nested content. This row places the retained-break body inside the paired-stack opener body so both corrections act on the same item.

## S05 — s05-fl-u2002-pipe — unevidenced Unicode White_Space U+2002 lead before _default: with a described pipe label (Freelink general class x described label)
FAMILY: freelink
SOURCE: "A [[[\u2002_default:Caf\u00e9|L]]] B"
P_CONFIRM: the reference strips the unevidenced U+2002 lead and serves href /cafe with label L while live does not admit that byte in the lead run, leaving a lead byte in the href or failing the link.
P_CLEAR: both sides serve href /cafe with display text L after the standard mask.
REASON: CORRECTION-REFCORR10-FREELINK-GENERAL explicitly records U+2000..U+2002 and U+2004..U+2008 as unevidenced general-class consequences with no cached live value; a described label exercises the separate display branch so the byte-count strip and the label cut are tested together.

## S06 — s06-fl-u1680-pipe — unevidenced U+1680 OGHAM lead before _default: with a described pipe label (Freelink general class x described label)
FAMILY: freelink
SOURCE: "A [[[\u1680_default:Caf\u00e9|L]]] B"
P_CONFIRM: the reference consumes the three-byte E1 9A 80 lead while live keeps it, so the href or label cut differs.
P_CLEAR: both sides strip the lead and serve the same href and label.
REASON: U+1680 is another White_Space member admitted by the principled REFCORR10 class without a cached live value; its three-byte UTF-8 shape is a third-order sibling of the two-byte NBSP and three-byte U+3000 shapes that were live-confirmed in REFCORR8.

## S07 — s07-fl-u0085-pipe — unevidenced U+0085 NEL lead before _default: with a described pipe label (Freelink general class x described label)
FAMILY: freelink
SOURCE: "A [[[\u0085_default:Caf\u00e9|L]]] B"
P_CONFIRM: divergence on whether the C2 85 NEL lead is consumed before the category, visible in the href or the label cut.
P_CLEAR: both sides consume C2 85 and agree.
REASON: U+0085 is an unevidenced White_Space member of the REFCORR10 class and a two-byte UTF-8 sibling of the live-cached C2 A0 NBSP; placing it in a described link tests the generalised run against the label path.

## S08 — s08-fl-mixed-nel-star-pipe — mixed star plus NBSP plus U+202F lead run before _default: with a described label (Freelink multiplicity x described label)
FAMILY: freelink
SOURCE: "A [[[*\u00a0\u202f_default:Caf\u00e9|L]]] B"
P_CONFIRM: the reference's single general run consumes star, NBSP and U+202F together while live consumes only the leading new-tab star under its no-leading-space guard, leaving a lead byte in the href.
P_CLEAR: both sides produce the same href and label after the standard mask.
REASON: REFCORR10 subsumed the REFCORR9 single-star ordering fix into one White_Space|FEFF|star run; a described link whose lead run mixes the marker with two distinct whitespace bytes is a third-order sibling of the eight-byte mixed run and double star cached in round 5c.

## S09 — s09-fn-newline-in-quote — empty-Raw single-newline footnote inside a blockquote (footnote general rule x contain)
FAMILY: notes/contain
SOURCE: "> [[footnote]]@@@@\n@@@@[[/footnote]]\n> tail\n\n[[footnoteblock]]"
P_CONFIRM: the retained single break, the separator space or the footer boundary differs inside the quote at rule level.
P_CLEAR: the quote wrapper, the single break and the footer entry are byte-identical after the campaign frame mask.
REASON: REFCORR10 GENERAL decides body storage and the separator from a token-aware visible projection assuming a top-level footnote; a blockquote owner re-parses the line and gives the retained newline a second container, a combination no REFCORR8/9/10 note probe used.

## S10 — s10-fn-leading-break-in-list — leading-break footnote (no separator space) inside a list item (footnote separator rule x list)
FAMILY: notes/list
SOURCE: "[[ul]]\n[[li]]x[[footnote]]@@@@\n@@@@y[[/footnote]][[/li]]\n[[/ul]]\n[[footnoteblock]]"
P_CONFIRM: the visible projection inside the list keeps a stray separator space or loses the retained break relative to live.
P_CLEAR: the no-space leading-break footnote body and footer agree on both sides.
REASON: REFCORR10 Footnoteitem emits the space only when a non-whitespace byte occurs before the first LF; the C-R5C-P4-C05 leading-break case was settled at top level, and placing it inside a list item is a third-order sibling that re-parents the collected body.

## S11 — s11-fn-formfeed-in-quote — form-feed-flanked single-break footnote inside a quote (footnote C0 drop x contain)
FAMILY: notes/contain
SOURCE: "> [[footnote]]@@@@\u000c\n@@@@[[/footnote]]\n\n[[footnoteblock]]"
P_CONFIRM: the form-feed flank is dropped on one side but retained as a rule-level byte on the other inside the quote.
P_CLEAR: both sides drop the C0 form feed and serve the same single break and footer.
REASON: REFCORR10 GENERAL drops C0 controls other than TAB/LF/CR from the preserved placeholder body to match live purifyHtml (the form-feed witness C-R5C-P4-2); a quote owner changes the surrounding token stream so the drop is exercised in a new container.

## S12 — s12-fn-doublelf-in-list — double-LF run folded inside a list-item footnote (control for REFCORR10 single-break path x list)
FAMILY: notes/list
SOURCE: "[[ul]]\n[[li]]x[[footnote]]@@@@\n\n@@@@[[/footnote]][[/li]]\n[[/ul]]\n[[footnoteblock]]"
P_CONFIRM: the reference keeps an extra break or separator space in the list footnote where live folds the double-LF run.
P_CLEAR: both sides fold the double LF to the same stored body and footer.
REASON: the REFCORR10 general predicate requires a single authored break with a non-LF byte on each side; a double-LF run takes the trimmed visible path, and re-parenting it into a list item is the control sibling that checks the fold is container-independent.

## S13 — s13-div-ph-id-in-module — Div with a Size-token placeholder id inside a Module body (Div placeholder id x module re-parse)
FAMILY: contain/module
SOURCE: "[[module nosuchmod]]\n[[div id=\"[[size 12px]]x[[/size]]\"]]\nX[[/div]]\n[[/module]]"
P_CONFIRM: live serves id="" on the nested Div inside the module body while the reference drops the id entirely or leaves the literal Size placeholder in the attribute.
P_CLEAR: the module error wrapper, the Div id="" attribute and the body X agree after the campaign frame mask.
REASON: REFCORR10 Div preserves any 0xFF-bearing id for the render clear arm; the Module rule claims the body as a token-bearing block before the Div re-parse, so the placeholder-survival assumption is exercised in a new owner.

## S14 — s14-div-ph-id-u-prefix-in-module — u-prefixed placeholder Div id inside a Module body (REFCORR10 u- exclusion removal x nested module)
FAMILY: contain/module
SOURCE: "[[module nosuchmod]]\n[[div id=\"u-[[size 12px]]x[[/size]]\"]]\nX[[/div]]\n[[/module]]"
P_CONFIRM: the id attribute presence differs — live keeps id="" inside the module while the reference's former u- collapse drops the key.
P_CLEAR: both sides emit the same id="" attribute in the module body.
REASON: this re-enters the C-R5C-S1-1 bare shape only with the changed mechanism that REFCORR10 removed the u- prefix exclusion in Div::isolateId and REFCORR10 added module body consumption; the composition of those two edits has not been probed.

## S15 — s15-div-ph-id-plus-class-in-nested-module — placeholder Div id and class inside nested Modules (Div placeholder x REFCORR10 nested-module consumption)
FAMILY: contain/module
SOURCE: "[[module nosuchmod]]\n[[module nosuchmod2]]\n[[div id=\"[[size 12px]]x[[/size]]\"]]\nY[[/div]]\n[[/module]]\n[[/module]]"
P_CONFIRM: the residual module closer or the Div id="" attribute differs once two nested module openers consume closers around a placeholder-bearing Div.
P_CLEAR: both sides consume one closer per opener and agree on the Div attribute bytes.
REASON: REFCORR10 added a newline after every inline nested module opener so the outer lazy body stops correctly; combining that with the Div placeholder id tests both general rules on the same nested body.

## S16 — s16-raw-surplus-include-before-quad — Raw 3-run surplus closer, include splice, later 4+ run (REFCORR10 laterQuad x include)
FAMILY: raw/include
SOURCE: "A @@@@ZQ@@@ [[include muse-probe-round5d-s1-t-raw]] B @@@@ C"
P_CONFIRM: the reference's laterQuad re-association either spans the include splice or is disabled by it, producing a different Raw span and literal @ order from live.
P_CLEAR: the Raw span, the literal @ bytes around ZQ and the spliced SPLICE text agree after the serving mask.
REASON: REFCORR10 added a forward scan for a later 4+ run to claim it as the real closer (C-R5C-S1-2); an include directive splices a token placeholder between the short closer and that later run, so the forward scan sees different bytes than the bare case.

## S17 — s17-raw-surplus-include-after — Raw 2-run surplus closer with include splice then later quad (REFCORR10 surplus formula x include)
FAMILY: raw/include
SOURCE: "A @@@@ZQ@@ [[include muse-probe-round5d-s1-t-raw]] @@@@ C"
P_CONFIRM: the general surplus-closer formula emits a different count of literal @ bytes when the re-associated closer is separated from the opener by an include splice.
P_CLEAR: the literal @ count and Raw span agree on both sides.
REASON: REFCORR10 factored surplusCloser(c) as c<=3 ? c : c-4; the two-byte run is the minimal member and the include splice is a third-order neighbor of the bare c=2 shape cached in round 5c.

## S18 — s18-tableadv-data-dot-nested — data-* key with dot on a nested Tableadv table (REFCORR10 data key class x nesting)
FAMILY: table
SOURCE: "[[table]]\n[[row]]\n[[cell]]\n[[table data-foo.bar=\"V\"]]\n[[row]]\n[[cell]]N[[/cell]]\n[[/row]]\n[[/table]]\n[[/cell]]\n[[/row]]\n[[/table]]"
P_CONFIRM: the inner table's data-foo.bar key is dropped or emitted differently on the reference while live keeps it, visible in the table attributes.
P_CLEAR: both sides emit the same nested table structure and data attribute after the standard mask.
REASON: REFCORR10 widened the data-* suffix to [a-z0-9._-] with the dot as the sole new byte; the C-R5C-P3-1 witness was a top-level table, so a nested table owner is a third-order sibling of that correction.

## S19 — s19-tableadv-data-mixed-duplicate-nested — duplicate case-variant data key with dot and underscore on a nested cell (REFCORR10 fold x nesting)
FAMILY: table
SOURCE: "[[table]]\n[[row]]\n[[cell]]\n[[table]]\n[[row]]\n[[cell data-Foo.Bar=\"A\" data-foo.bar=\"B\"]]N[[/cell]]\n[[/row]]\n[[/table]]\n[[/cell]]\n[[/row]]\n[[/table]]"
P_CONFIRM: the folded duplicate key resolution on the nested cell differs between live and the reference, visible in which value survives in the cell attributes.
P_CLEAR: both sides resolve the duplicate to the same attribute after the standard mask.
REASON: REFCORR8 folds a data-* key to lower case and REFCORR10 admits the dot; duplicate case-variant keys on a nested cell combine the fold with the new class in an owner not used by either correction.

## S20 — s20-module-nested-raw-token — inline nested Module whose body holds a Raw token run, then outer closer (REFCORR10 nested-opener newline x Raw)
FAMILY: module/raw
SOURCE: "[[module nosuchmod]]\n[[module nosuchmod2]]@@X@@[[/module]]\n[[/module]]\nTAIL"
P_CONFIRM: the reference consumes a different number of closers or leaves a residual literal closer around the Raw-token body while live consumes one closer per opener.
P_CLEAR: both sides consume both closers and agree on the module error wrappers and the trailing TAIL bytes.
REASON: REFCORR10 inserts a newline after every inline nested module opener so the composition consumes closers; a Raw token run inside that inline body is a third-order sibling that was not among the cached nested-module cases.
