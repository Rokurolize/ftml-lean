# Pre-probe ledger — round-5e unit R5E-S1, cross-rule seams around the REFCORR8/9/10/11 corrections (written before any live probe)

Read basis: canonical base e53e7234 on the post-REFCORR11, snapshot-35 repaired ground announced ready by the creation of COORD-UNITS/PROTOCOL-R5E.md. The two governing protocols COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5E.md were read in full first. The correction mechanisms were read firsthand from conformance-refcorr11/CORRECTION-REFCORR11-{C0DROP,CONCATLINES,FREELINK,GENERAL-CONTROL,IMAGE,MATH-ABSENT-TYPE}.md, RECONCILIATION.md and PINS.md, and the corrected PHP sources were read firsthand: Footnote.php (unconditional C0 filter), Bibitem.php, Freelink.php (two Cf leads plus uniform multi-hash guards), Concatlines.php and Paragraph.php (continued-div lead registry), Image.php (link rtrim), Math.php (absent-type equation), Mathinline.php (suppress rules), Tighten.php (discarded C0 class), List.php generalized C1 adjacency and harness/batch.php. The four-adjacent U+FFFD digit class and Stage 2/serving surfaces are standing owned or cleared classes and are not re-litigated. Pages are muse-probe-round5e-s1-* on sandbox-for-codex, left in place and listed in map.json. Each row is a NEW sibling shape combining two corrected mechanisms or a third-order neighbor; the only re-entry of a previously confirmed bare shape (S01) carries a named changed mechanism (REFCORR11 generalized adjacency and final-closer leftover split). P_CONFIRM is the live rule-level byte that would make the reference defective; P_CLEAR is the live byte showing the corrected reference already matches. SOURCE lines are JSON string literals; cases.jsonl is derived from them by gen_cases.py so identities cannot drift.
## S01 — s01-list-ft-gap-footnoteblock — footnoteblock between failed closer and post-closer LI (REFCORR11 generalized C1 + leftover split)
FAMILY: list/notes
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[footnote]]gap[[/footnote]]\n[[footnoteblock]]\n[[LI]]B[[/LI]]\n[[/UL]]"
P_CONFIRM: live closes one item and emits the collected footnoteblock after the list with the post-closer [[LI]]B[[/LI]] literal inside the item, while the reference's greedy last-closer split folds the blocked footnoteblock placeholder into the literal item tail or relocates it.
P_CLEAR: both sides produce the same one-item list, the same literal post-closer bytes and the same footnote footer placement after the campaign frame mask.
REASON: REFCORR11 replaced the rigid C1 adjacency regex with an any-bytes tail and a greedy split at the last following block closer; a [[footnoteblock]] collected between the failed closer and the LI is a changed mechanism third-order sibling of the previously confirmed bare footnote gap, so this re-entry has a named reason.

## S02 — s02-list-ft-gap-ff-body — form feed in the collected footnote between failed closer and post-closer LI (list x general-control)
FAMILY: list/notes/C0
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[footnote]]g\fap[[/footnote]]\n[[LI]]B[[/LI]]\n[[/UL]]\n[[footnoteblock]]"
P_CONFIRM: live drops the form feed from the footnote body while the REFCORR11 generalized adjacency keeps the collected placeholder-bearing body verbatim in the literal item tail, so the literal bytes differ at rule level.
P_CLEAR: both sides drop the form feed, produce the same one-item literal tail and the same footnote footer after the campaign frame mask.
REASON: REFCORR11 made the footnote C0 filter unconditional and generalized the failed-closer adjacency; no probe has placed a control-bearing footnote body inside the literal tail the new adjacency preserves, which is a genuine cross-rule seam.

## S03 — s03-list-ft-gap-two-footnotes — two collected footnotes between failed closer and post-closer LI (list adjacency x footnote counter)
FAMILY: list/notes
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[footnote]]one[[/footnote]]\n[[footnote]]two[[/footnote]]\n[[LI]]B[[/LI]]\n[[/UL]]\n[[footnoteblock]]"
P_CONFIRM: the two footnote collection points are numbered or placed differently because the new any-bytes tail absorbs both placeholders before the final closer split, while live leaves the footer ordering and literal tail intact.
P_CLEAR: both sides show the same two-entry footer, the same one-item list and the same literal post-closer bytes after the owned counter-digit and frame masks.
REASON: The REFCORR11 any-bytes adjacency tolerates arbitrary intervening material; stacking two footnote collection points in that gap tests whether the general rule preserves their document-order numbering and footer placement, a third-order sibling not covered by the single-footnote witness.

## S04 — s04-list-nested-failed-closer-ft — nested UL inside OL with a footnote after the failed outer closer (list case stack x notes x adjacency)
FAMILY: list/notes
SOURCE: "[[OL]]\n[[LI]]outer[[UL]]\n[[LI]]in[[/LI]]\n[[/UL]]\n[[/LI]]\n[[/OL]]\n[[footnote]]note[[/footnote]]\n[[LI]]tail[[/LI]]\n[[/UL]]\n[[footnoteblock]]"
P_CONFIRM: the case-stack pairing and the generalized failed-closer literal tail disagree, producing a different number of list items or a different footnote footer position.
P_CLEAR: both sides produce the same nested list structure, literal tail and single footnote footer after the campaign frame mask.
REASON: REFCORR10 refined raw-case LI pairing and REFCORR11 generalized the post-failed-close tail; running both on a mixed-tag nested stack with a footnote marker combines the two corrected mechanisms in a shape no prior lane probed.

## S05 — s05-fl-zwsp-described — U+200B zero-width-space lead before _default: with a described pipe label (Freelink Cf extension x described branch)
FAMILY: freelink
SOURCE: "[[[\u200b_default:x | Label]]]"
P_CONFIRM: the reference's byte-count lead strip leaves a trailing target space or a shifted slug in the described-link href while live serves the clean href /x with label Label.
P_CLEAR: both sides serve href /x with display text Label after the standard mask.
REASON: REFCORR11 added U+200B to the lead run as a byte-successor of U+200A but only proved it with a bare target; the described-label path uses the separate label branch and a trailing target space before the pipe, so the two mechanisms interact at an unprobed byte edge.

## S06 — s06-fl-wj-described — U+2060 word-joiner lead before _default: with a described pipe label (Freelink Cf extension x described branch)
FAMILY: freelink
SOURCE: "[[[\u2060_default:x | Label]]]"
P_CONFIRM: the E2 81 A0 lead is consumed on one side but not the other in the described-link target, shifting the slug or the label cut.
P_CLEAR: both sides serve href /x with display text Label after the standard mask.
REASON: REFCORR11 added U+2060 alongside U+200B on a bare target only; pairing it with a described label tests the same new lead class against the pipe cut, a direct third-order sibling of the confirmed bare Cf cases.

## S07 — s07-fl-lead-in-described-label — U+200B lead placed in the described label rather than the target (Freelink lead class x display branch)
FAMILY: freelink
SOURCE: "[[[_default:x | \u200bLabel]]]"
P_CONFIRM: the reference applies the lead strip to the label text and drops the zero-width byte while live preserves the authored label byte verbatim in the anchor text.
P_CLEAR: both sides keep the lead byte in the displayed label and serve the same href after the standard mask.
REASON: The REFCORR10/11 lead strip is defined on $slugSource, which is the target after route peel; placing the admitted Cf byte in the label exercises the untouched display branch and checks that the strip does not leak across the pipe.

## S08 — s08-fl-multihash-described — uniform multi-hash rejection with a described pipe label (REFCORR11 hash guard x described branch)
FAMILY: freelink
SOURCE: "[[[foo/#/bar#baz | L]]]"
P_CONFIRM: the reference rejects the two-hash route target and leaves the whole triple bracket literal while live forms a described link, or the label cut differs on the rejected form.
P_CLEAR: both sides leave the same literal triple-bracket bytes after the standard mask.
REASON: REFCORR11 removed the /#/ exemption from both hash guards but only on bare targets; a described label runs the same rejection before the label branch and tests that the guard is uniform on the raw target independent of the pipe.

## S09 — s09-ff-footnote-in-quote-doublelf — form feed before a double-LF run in a footnote nested inside a quote (general-control x container)
FAMILY: notes/contain/C0
SOURCE: "[[quote]]\n[[footnote]]g\f\n\nh[[/footnote]]\n[[/quote]]\n[[footnoteblock]]"
P_CONFIRM: the footnote body inside the quote keeps the form feed on one side or emits a different separator space and break count on the other.
P_CLEAR: both sides drop the form feed and emit the same quote wrapper, break count and footnote footer after the campaign frame mask.
REASON: REFCORR11 made the footnote control filter branch-free while the quote container adds its own placeholder-driven paragraph run; the combination is a third-order sibling of the confirmed plain footnote form-feed cases.

## S10 — s10-esc-footnote-nolf — ESC 0x1B in a no-authored-LF footnote body (footnote general-control class x Tighten retained ESC)
FAMILY: notes/C0
SOURCE: "[[footnote]]A\u001bB[[/footnote]][[footnoteblock]]"
P_CONFIRM: live keeps the ESC byte in the emitted footnote body as the Size D7 and Tighten residual rules do, while the reference's REFCORR11 footnote filter drops 0x1B because the 0x0E-0x1F range includes it, yielding a rule-level byte difference.
P_CLEAR: both sides drop the ESC in the footnote body and emit the same concatenated body and footer after the campaign frame mask.
REASON: This is the deferred class difference named in CORRECTION-REFCORR11-C0DROP and RECONCILIATION.md: the footnote helper drops ESC but Tighten and Size keep it, and no live footnote-with-ESC capture existed. A fresh probe with a no-LF body resolves that exact cross-rule seam and is not a previously confirmed-and-fixed shape.

## S11 — s11-esc-footnote-doublelf — ESC 0x1B before a double-LF run in a footnote body (footnote general-control class x authored-break branch)
FAMILY: notes/C0
SOURCE: "[[footnote]]A\u001b\n\nB[[/footnote]][[footnoteblock]]"
P_CONFIRM: live keeps the ESC byte while the reference's fallback branch drops it, so the stored body and footer differ at rule level.
P_CLEAR: both sides drop the ESC and emit the same folded body and footer after the campaign frame mask.
REASON: Same deferred ESC-width seam as S10 but on the double-LF fallback branch, which REFCORR11 separately rewrote; probing both branches decides whether the wider footnote class is a real defect or an unobserved serving surface.

## S12 — s12-ff-bibitem-in-quote — form feed in a bibitem body nested inside a quote (Bibitem general-control x container)
FAMILY: notes/contain/C0
SOURCE: "[[quote]]\n[[bibliography]]\n[[bibitem k]]A\fB[[/bibitem]]\n[[/bibliography]]\n[[/quote]]"
P_CONFIRM: the bibitem body keeps the form feed or emits a separator space on one side while the quote wrapper on the other side drops it.
P_CLEAR: both sides drop the form feed and emit the same bibliography entry and quote wrapper after the campaign frame mask.
REASON: REFCORR11 applied the unconditional control filter to Bibitem as well as Footnote; nesting the entry in a quote exercises the bibitem strip-and-retrim path beside a container paragraph run, a third-order sibling of the plain bibliography witness.

## S13 — s13-contdiv-in-quote — continued-div opener with a bare lead inside a quote (REFCORR11 continued block boundary x container)
FAMILY: contain/para
SOURCE: "[[quote]]\nalpha\\\n[[div]]\nbravo[[/div]]\n[[/quote]]"
P_CONFIRM: the lead text stays wrapped in a paragraph on one side while the other leaves it bare, or the div opener lands inside the quote wrapper differently.
P_CLEAR: both sides leave the lead bare and emit the same div and quote structure after the campaign frame mask.
REASON: REFCORR11 registers a continued-div lead globally in Concatlines and suppresses the paragraph wrapper only for a run containing a Div token whose plain text equals a recorded lead; a quote container changes that run, so the registry match is a genuine cross-rule seam.

## S14 — s14-contdiv-in-listitem — continued-div opener inside a list item lead (REFCORR11 continued block boundary x list item body)
FAMILY: list/contain/para
SOURCE: "[[UL]]\n[[LI]]alpha\\\n[[div]]\nbravo[[/div]][[/LI]]\n[[/UL]]"
P_CONFIRM: the lead text inside the item keeps a paragraph wrapper or the div opener is absorbed into the item body differently on the two sides.
P_CLEAR: both sides emit the same list item, bare lead and nested div after the campaign frame mask.
REASON: The list rule rewrites raw-case LI bodies and token placeholders before Paragraph runs, so a recorded continued-div lead inside an item tests whether the global lead registry still matches the rewritten run, a third-order sibling of the S13 container seam.

## S15 — s15-contdiv-in-footnote — continued-div opener inside a footnote body (REFCORR11 continued block boundary x collected footnote)
FAMILY: notes/contain/para
SOURCE: "[[footnote]]alpha\\\n[[div]]\nbravo[[/div]][[/footnote]][[footnoteblock]]"
P_CONFIRM: the collected footnote reparse changes the recorded lead so one side wraps the lead in a paragraph while the other leaves it bare, or the footer placement differs.
P_CLEAR: both sides emit the same bare lead, div and footnote footer after the campaign frame mask.
REASON: The footnote body is stored and re-parsed by Footnoteblock, so a continued-div lead collected inside it may not survive into the same Paragraph run; this combines the continued-boundary correction with the notes collection mechanism.

## S16 — s16-contdiv-lead-freelink — continued-div lead whose plain text is a Freelink token (REFCORR11 lead registry x Freelink placeholder)
FAMILY: contain/freelink
SOURCE: "[[[x]]]\\\n[[div]]\nbravo[[/div]]"
P_CONFIRM: the recorded raw lead contains the triple-bracket source but Paragraph sees only a placeholder after tokenization, so one side keeps the paragraph wrapper while live leaves the lead bare.
P_CLEAR: both sides leave the same lead text bare and emit the same div and link after the campaign frame mask.
REASON: Concatlines records the raw line before other rules tokenize it, while Paragraph strips placeholders before comparing against the lead registry; a Freelink in the lead is a third-order sibling that the plain-text div-opener witness never exercised.

## S17 — s17-image-link-trailws-caption — trailing-space Image link followed by caption text (REFCORR11 Image href rtrim x paragraph caption)
FAMILY: image/para
SOURCE: "[[image IMG.png link=\"http://example.com/x \"]]caption"
P_CONFIRM: the reference trims the link attribute at parse time and the caption text is wrapped differently from live, or the trailing space survives in one href.
P_CLEAR: both sides serve the trimmed href and the same caption paragraph after the campaign frame mask.
REASON: REFCORR11 rtrims the Image link value at the attribute consumer; caption text after the image stays ordinary source and re-enters Paragraph, so the seam between the trimmed attribute and the caption run was not part of the bare-link witness.

## S18 — s18-image-link-trailws-in-div-caption — trailing-space Image link inside a div caption (REFCORR11 Image href rtrim x div container)
FAMILY: image/contain
SOURCE: "[[div class=\"caption\"]]\n[[image IMG.png link=\"http://example.com/x \"]]\n[[/div]]"
P_CONFIRM: the div wrapper or the href differs because the image token and its trimmed link interact with the div body's paragraph handling.
P_CLEAR: both sides emit the same div wrapper, trimmed href and body after the campaign frame mask.
REASON: The Image rtrim is applied at parse time while Div preserves placeholder bodies and the continued-boundary correction also reads div openers; nesting a trailing-space-link image in a caption div exercises both corrected paths in one run.

## S19 — s19-image-link-multitab-trailws — multi-byte trailing whitespace run on an Image link with a caption (REFCORR11 rtrim class consequence)
FAMILY: image
SOURCE: "[[image IMG.png link=\"http://example.com/x \t \"]]cap"
P_CONFIRM: the reference's rtrim class misses one of the authored trailing bytes and emits a different href from live.
P_CLEAR: both sides serve the same href with the entire trailing run removed after the campaign frame mask.
REASON: REFCORR11 generalized the rtrim to the full ctype_space class but only a single authored space was cached live; a mixed space-tab-space run is the mechanism consequence the general rule claims and is a fair third-order probe.

## S20 — s20-math-type-plus-mathinline — exact lowercase type Math block followed by a mathinline formula (REFCORR11 absent-type default x inline rule)
FAMILY: math
SOURCE: "[[math type=\"align\"]]\nx\n[[/math]]\n[[$y$]]"
P_CONFIRM: the exact-type selection or the counter id differs when a mathinline formula follows the block, changing the equation envelope or inline span at rule level.
P_CLEAR: both sides emit the same equation envelope, counter span and inline span after the owned counter-digit and frame masks.
REASON: REFCORR11 retired the absent-type align default while Mathinline has its own independent suppress and content path; placing an exact type block next to an inline formula tests that the type decision does not leak across the two rules.

## S21 — s21-math-absent-inline-date — absent-type Math block followed by a mathinline containing a Date suppressor (REFCORR11 absent-type default x REFCORR8 Date suppression)
FAMILY: math
SOURCE: "[[math]]\nx\n[[/math]]\n[[$ [[date 0]] $]]"
P_CONFIRM: the equation default counter or the inline suppression decision differs on the two sides, changing the envelope or the inline span bytes.
P_CLEAR: both sides emit the equation envelope with the same id and the suppressed inline span after the owned counter-digit and frame masks.
REASON: Two separate correction families act on adjacent blocks: the REFCORR11 absent-type default sets the block type and the REFCORR8 recursive Date suppression empties the inline formula; their interaction on one page was not probed by either correction.

## S22 — s22-fl-lead-inside-mathinline — U+200B-lead described Freelink inside a mathinline formula (REFCORR11 Cf lead x REFCORR6 suppression)
FAMILY: math/freelink
SOURCE: "[[$ [[[\u200b_default:x | L]]] $]]"
P_CONFIRM: one side forms a Freelink token and suppresses the whole formula to $$ while the other leaves the triple bracket literal in the inline span, a rule-level content difference.
P_CLEAR: both sides suppress the formula to the same inline span after the standard mask.
REASON: Mathinline's suppressRules checks the Freelink token type, so whether the newly admitted Cf lead forms a link decides suppression; this combines the REFCORR11 lead extension with the recursive suppression path on the same source.

