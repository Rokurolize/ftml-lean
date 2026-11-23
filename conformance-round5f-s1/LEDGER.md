# Pre-probe ledger — round-5f unit R5F-S1, cross-rule seams around the REFCORR8/9/10/11/12 corrections (written before any live probe)

Read basis: canonical base e53e7234 on the post-REFCORR12, snapshot-36 published ground announced ready by the creation of COORD-UNITS/PROTOCOL-R5F.md. The two governing protocols COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5F.md were read in full first. The correction mechanisms were read firsthand from conformance-refcorr12/CORRECTION-REFCORR12-{FREELINK,GENERAL,LIST,NOTES-CONTROL}.md and CORRECTION-R12A-{DIV,IMAGE,SPAN}.md plus VERDICT.md, and the corrected PHP sources were read firsthand: Freelink.php (the single 196-code-point Cf/White_Space/BOM/star lead predicate, byte-oriented UTF-8 with no /u, uniform multi-hash rejection, route peel and described-label branch), Div.php (normalizeValue C0/DEL drop plus W collapse, ltrim and new REFCORR12 rtrim over six ctype_space bytes, isolateId placeholder retention), Span.php and Render/Xhtml/Span.php (data-* authored-nonempty key retention and uniform 0xFF clear arm, but no normalizeValue call), Image.php (technical link/width/class rtrim versus raw title/alt/style/height/size), List.php (REFCORR12 general failed-closer adjacency with nested raw-case flatten, literal-tail absorption and footnoteblock hoist), Footnote.php/Bibitem.php/Bibliography.php (narrowed live-discarded C0 set D with ESC kept), Tighten.php and harness/batch.php. The mirror was read at LinkRules.lean, ContainRules.lean, InteractiveRules.lean, ParaRules.lean, NotesRules.lean and ListRules.lean. The four-adjacent U+FFFD digit class, the parity Email index family, Stage 2 frames and serving surfaces are standing owned or cleared classes and are not re-litigated. Pages are muse-probe-round5f-s1-* on sandbox-for-codex, left in place and listed in map.json. Every row is a NEW shape combining two corrected mechanisms or a third-order neighbor of a general rule; no previously confirmed minimal shape is re-run as-is. P_CONFIRM is the live rule-level byte that would make the reference defective; P_CLEAR is the live byte showing the corrected reference already matches. SOURCE lines are JSON string literals; cases.jsonl is derived from them by gen_cases.py so identities cannot drift.
## S01 — s01-fl-astral-cf-lead — astral U+1D173 Cf lead before _default: (REFCORR12 general Cf class, third-order sibling)
FAMILY: freelink
SOURCE: "[[[\ud834\udd73_default:x]]]"
P_CONFIRM: live leaves the triple-bracket literal or serves href /_default:x because its lead strip does not admit the astral musical-control Cf byte range, while the reference's new general predicate strips F0 9D 85 B3 and serves href /x.
P_CLEAR: both sides serve href /x with the same display text after the standard mask.
REASON: REFCORR12 widened the lead class to the full pinned Unicode 17.0 Cf set including astral members F0 9D 85 B3..BA, but every round-5e witness was a BMP Cf or White_Space byte; an astral Cf lead is an unmeasured third-order member of the same generalized predicate.
## S02 — s02-fl-tag-cf-lead — astral tag-space U+E0020 lead before _default: (REFCORR12 general Cf class, third-order sibling)
FAMILY: freelink
SOURCE: "[[[\udb40\udc20_default:x]]]"
P_CONFIRM: live does not strip the four-byte tag Cf lead and serves href /_default:x or the literal form while the reference's general predicate admits F3 A0 80 A0 and serves href /x.
P_CLEAR: both sides serve href /x with the same display text after the standard mask.
REASON: the REFCORR12 range table admits the astral tag characters U+E0020..U+E007F by generalization from the pinned Cf property, with no direct live witness in the round-5e battery; this probes a different four-byte Cf subrange than S01.
## S03 — s03-fl-ufff9-cf-lead — U+FFF9 interlinear annotation anchor lead before _default: (REFCORR12 Cf tail range)
FAMILY: freelink
SOURCE: "[[[\ufff9_default:x]]]"
P_CONFIRM: live keeps the EF BF B9 lead so the page slug retains a non-ASCII prefix or the form stays literal, while the reference strips it as a Cf member and serves href /x.
P_CLEAR: both sides serve href /x with the same display text after the standard mask.
REASON: U+FFF9..U+FFFB are in the pinned Cf class added by the REFCORR12 general rule but are annotation controls a Wikidot preprocessor may consume before Freelink sees them; a cross-mechanism seam between the new lead class and prefilter control handling.
## S04 — s04-fl-cf-route-described — admitted Cf lead combined with a /#/ hash route and a described label (REFCORR12 lead x REFCORR10 route x described branch)
FAMILY: freelink
SOURCE: "[[[\u200b_default:x/#/sec | L]]]"
P_CONFIRM: the reference strips the lead from $slugSource after the route peel and serves href /x#/sec while live's route peel or lead strip ordering yields a different href or anchor suffix.
P_CLEAR: both sides serve the same href with anchor suffix and the same described label after the standard mask.
REASON: the REFCORR12 lead strip runs on $slugSource after the REFCORR10 /#/ peel while $textRaw is captured before it; a described label on a routed target exercises the interaction of the corrected lead class with the corrected route peel and the pipe branch in one source.
## S05 — s05-fl-cf-multihash — admitted Cf lead on a two-hash target (REFCORR12 lead class x REFCORR11 uniform hash guard)
FAMILY: freelink
SOURCE: "[[[\u200cfoo#a#b]]]"
P_CONFIRM: the reference rejects the two-hash target before any lead handling and leaves the literal form while live admits the target because the leading Cf byte changes route parsing.
P_CLEAR: both sides leave the same literal triple-bracket bytes after the standard mask.
REASON: REFCORR11 made the two-hash rejection uniform and REFCORR12 generalized the lead class; putting an admitted Cf byte ahead of a rejected multi-hash slug checks that the guard is independent of the new lead predicate.
## S06 — s06-fl-u2028-lead — U+2028 LINE SEPARATOR as White_Space lead before _default: (REFCORR12 White_Space class x line breaking)
FAMILY: freelink
SOURCE: "[[[\u2028_default:x]]]"
P_CONFIRM: live treats U+2028 as a physical line break before the Freelink regex and leaves a broken literal while the reference strips it as a pinned White_Space lead and serves href /x.
P_CLEAR: both sides serve href /x with the same display text after the standard mask.
REASON: U+2028 is in the REFCORR12 pinned White_Space set but is also a Unicode line separator; a live preprocessor that splits on it would remove the very lead the general predicate expects, a third-order sibling not covered by BMP space leads.
## S07 — s07-div-attr-esc — ESC 0x1B inside a Div normalized attribute value (REFCORR12 NOTES ESC-kept x ATTR C0/DEL drop)
FAMILY: contain/notes
SOURCE: "[[div type=\"A\u001bB\"]]\nbody\n[[/div]]"
P_CONFIRM: live keeps the ESC byte in the emitted type value as it does in a footnote body after REFCORR12-NOTES, while Div::normalizeValue drops the whole C0 range 0x00-0x1F and emits type="AB".
P_CLEAR: both sides emit type="AB" with the same div body after the standard mask.
REASON: REFCORR12-NOTES established that live retains ESC 0x1B in text bodies and narrowed the discarded C0 set accordingly, but the separate attribute normalizer still drops every C0 byte; the two corrected mechanisms disagree about ESC and this is their direct seam.
## S08 — s08-div-attr-del — DEL 0x7F inside a Div data-* attribute value (REFCORR12 ATTR normalizer C0/DEL drop, third-order byte)
FAMILY: contain
SOURCE: "[[div data-x=\"A\u007fB\"]]\nbody\n[[/div]]"
P_CONFIRM: live keeps DEL 0x7F in the data-* value while the reference normalizer's explicit 0x7F drop emits data-x="AB", a rule-level value difference.
P_CLEAR: both sides emit data-x="AB" after the standard mask.
REASON: the REFCORR12 attribute normalizer drops C0 and DEL bytes as one class, but the REFCORR12 notes rule only narrowed bytes below 0x20; DEL is outside both live witnesses, so whether live discards it in an attribute is unmeasured.
## S09 — s09-span-data-trailws — trailing spaces in a Span data-* value (REFCORR12 GENERAL rtrim x R12A-SPAN no-normalize path)
FAMILY: contain/inline
SOURCE: "[[span data-x=\"  x  \"]]b[[/span]]"
P_CONFIRM: live right-trims the authored data-* value to x per the REFCORR12 general attribute rule while the reference Span path emits the raw captured value with both leading and trailing spaces.
P_CLEAR: both sides emit data-x="  x  " byte-for-byte after the standard mask.
REASON: REFCORR12-GENERAL claims one right-trim rule for Div and Span, and REFCORR12-R12A-SPAN added only key retention, not a normalizeValue call; this probes whether the general trim actually reaches the Span consumer.
## S10 — s10-span-class-trailws — trailing spaces in a Span class value (REFCORR12 GENERAL rtrim x R12A-SPAN no-normalize path)
FAMILY: contain/inline
SOURCE: "[[span class=\"  c  \"]]b[[/span]]"
P_CONFIRM: live normalizes the class value to c while the reference Span path emits the raw two leading and two trailing spaces.
P_CLEAR: both sides emit class="  c  " after the standard mask.
REASON: the class key is the one Div branch that had a caller rtrim before REFCORR12; probing it on Span separates a genuinely shared normalizer from a Div-local one and is a direct third-order sibling of S09.
## S11 — s11-span-ph-data-trailws — placeholder-bearing Span data-* with trailing spaces (R12A-SPAN key retention x REFCORR12 rtrim)
FAMILY: contain/inline
SOURCE: "[[span data-x=\"[[size 12px]]q[[/size]]  \"]]b[[/span]]"
P_CONFIRM: the reference keeps the key and clears the whole 0xFF-bearing value to data-x="" while live keeps an empty value with the trailing spaces already trimmed, or drops the key, yielding a different attribute set.
P_CLEAR: both sides emit data-x="" with the key kept after the standard mask.
REASON: R12A-SPAN retains an authored-nonempty data-* key whose captured value empties after a nested rule and clears any 0xFF value in the renderer; adding trailing W bytes combines key retention with the general trim in one value.
## S12 — s12-image-title-esc — ESC 0x1B in an Image title text attribute (REFCORR12 IMAGE text-family verbatim x NOTES ESC kept)
FAMILY: image/notes
SOURCE: "[[image IMG.png title=\"T\u001bZ\"]]cap"
P_CONFIRM: the reference emits the raw title value with ESC intact while live drops ESC in the served title or folds it with the residual C0 filter, a rule-level attribute difference.
P_CLEAR: both sides emit the same title with ESC intact after the standard mask.
REASON: REFCORR12-IMAGE deliberately keeps title/alt/style/height/size authored whitespace verbatim while REFCORR12-NOTES narrowed the live-discarded C0 set to keep ESC; checking an ESC inside a kept text attribute tests whether the two live rules agree on the same byte.
## S13 — s13-image-class-ff — form feed inside an Image class technical attribute (REFCORR12 IMAGE W-set trim x NOTES D-set drop)
FAMILY: image/notes
SOURCE: "[[image IMG.png class=\"thi\fck\"]]cap"
P_CONFIRM: the reference keeps the FF byte in the emitted class because its rtrim only removes trailing W bytes, while live drops the interior FF as a member of the live-discarded C0 set D.
P_CLEAR: both sides emit the same class value after the standard mask.
REASON: the REFCORR12 Image trim removes a trailing W run and leaves interior bytes alone, while REFCORR12-NOTES established that FF is unconditionally discarded from live text; an interior FF in a technical attribute is a cross-mechanism byte edge.
## S14 — s14-list-trail-fl-cf — admitted Cf-lead freelink in the literal tail of a failed-closer list (REFCORR12 LIST tail absorption x FREELINK lead class)
FAMILY: list/freelink
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[[\u200c_default:x]]]\n[[LI]]B[[/LI]]\n[[/UL]]"
P_CONFIRM: the reference keeps the freelink placeholder inside the absorbing item's literal body and strips the Cf lead to serve href /x while live's tail absorption leaves the unstripped target or relocates the link outside the item.
P_CLEAR: both sides emit the same one-item list with the /x link inside it after the standard mask.
REASON: the REFCORR12 LIST rule appends the whole failed-closer tail literally into the absorbing item before token resolution, and the REFCORR12 FREELINK rule strips a Cf lead on $slugSource; their seam measures whether the lead strip survives literal-tail absorption.
## S15 — s15-list-trail-esc-footnote — ESC-bearing footnote in the literal tail with a footnoteblock hoist (REFCORR12 LIST hoist x NOTES ESC-kept)
FAMILY: list/notes
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[footnote]]E\u001bF[[/footnote]]\n[[LI]]B[[/LI]]\n[[/UL]]\n[[footnoteblock]]"
P_CONFIRM: the reference hoists the footnoteblock past the list end while keeping the ESC in the collected body, but live places the footer or the ESC-bearing body at a different rule level.
P_CLEAR: both sides show the same one-item list, the same ESC-bearing footnote body and the same footer placement after the owned counter-digit and frame masks.
REASON: REFCORR12 introduced token-identity footnoteblock hoisting and REFCORR12-NOTES introduced ESC retention in the same footnote body class; stacking them in the preserved literal tail is a two-mechanism third-order sibling.
## S16 — s16-list-lower-nested-rawcase — lowercase nested [[ul]] inside a raw-case failed-closer [[UL]] (REFCORR12 LIST flatten tag discriminator)
FAMILY: list/contain
SOURCE: "[[UL]]\n[[LI]]outer[[ul]]\n[[LI]]in[[/LI]]\n[[/ul]][[/LI]]\n[[/UL]]\n[[LI]]tail[[/LI]]\n[[/UL]]"
P_CONFIRM: the reference strips only raw-case ul/ol tags from the pre-closer region and keeps the lowercase pair as literal tags inside a sibling item while live keeps a genuine nested lowercase list or flattens differently.
P_CLEAR: both sides emit the same sibling-item list with identical literal nested tags after the campaign frame mask.
REASON: the REFCORR12 flatten callback returns the match unchanged when the tag name is lowercase, so a lowercase nested list inside a raw-case skeleton takes the opposite branch from the confirmed uppercase flatten witness; the discriminator boundary is a third-order sibling of REFCORR12-LIST.
## S17 — s17-bibitem-esc — ESC 0x1B inside a bibliography bibitem body (REFCORR12 NOTES narrowed D set x Bibliography residual fold)
FAMILY: notes
SOURCE: "[[bibliography]]\n[[bibitem k]]A\u001bB[[/bibitem]]\n[[/bibliography]]\n[[bibcite k]]"
P_CONFIRM: the reference keeps ESC in the stored bibitem body and emits it through the bibliography footer while live drops it or folds it at the residual whitespace stage, a rule-level byte difference.
P_CLEAR: both sides emit the same ESC-bearing bibitem entry and citation after the owned counter-digit and campaign frame masks.
REASON: REFCORR12-NOTES narrowed the discarded C0 set in Footnote.php and Bibitem.php to keep ESC, and separately added a D drop before the Bibliography whitespace fold; this probes the bibitem-to-bibliography path with the retained byte, which the round-5e footnote witnesses did not cover.
## S18 — s18-footnote-nel — U+0085 NEL inside a footnote body (REFCORR12 White_Space class x NOTES narrowed D set)
FAMILY: notes/freelink
SOURCE: "[[footnote]]A\u0085B[[/footnote]][[footnoteblock]]"
P_CONFIRM: the reference keeps the two-byte UTF-8 NEL sequence because the narrowed D class only covers single C0 bytes below 0x20, while live drops or rewrites it as a Unicode White_Space/format control.
P_CLEAR: both sides emit the same NEL-bearing footnote body after the standard mask.
REASON: U+0085 is both a pinned REFCORR12 White_Space member and a C1 control; the REFCORR12 notes rule reasons only about single C0 bytes below 0x20, so a two-byte C1 space in a footnote is a genuine cross-mechanism boundary.
