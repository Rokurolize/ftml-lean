# Pre-probe ledger — round-5g unit R5G-S1, cross-rule seams around the REFCORR8/9/10/11/12/13 corrections (written before any live probe)

Read basis: canonical base e53e7234 on the post-REFCORR13, snapshot-37 published ground announced ready by the creation of COORD-UNITS/PROTOCOL-R5G.md; the two governing protocols COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5G.md were read in full first. The corrected mechanisms were read firsthand from conformance-refcorr13/CORRECTION-REFCORR13-{FREELINK,LIST,FOOTNOTE-BREAK-WITNESS,MATH-ENV-ALPHABET}.md, conformance-refcorr13/CORRECTION-AGY2-R13-{D08,D10-D11,D12,D13,D14}.md and coord-units/R13-ATTR/CORRECTION-REFCORR13-GENERAL.md, and the corrected PHP sources were read firsthand: Parse/Default/Freelink.php (the REFCORR13 two-member lead extension U+2065 and ESC, byte-oriented UTF-8 lead regex, the external-URL branch with peeled anchor and /#/ route, the empty-pipe slug fallback and the freelink_transliterate table), Render/Xhtml/Freelink.php (non-ASCII-only bytewise percent encode of url+anchor+extra), Parse/Default/Footnote.php (the REFCORR13 authored-break predicate evaluated on the control-bearing body before the D drop) and Render/Xhtml/Footnoteitem.php (the widened visible-lead separator class keeping ESC), Render/Xhtml/Math.php (the AGY2 star-strip plus six-name AMS allowlist with no trim and no case folding), Render/Xhtml/Button.php (the D10 !isset set-tags guard plus the falsy default), Parse/Default/Tabview.php (the D11 falsy-zero title default), Parse/Default/List.php (R13-S1 nested-boundary case symmetry, R13-S2 closer-tail whitespace strip, R13-S3 whole-tail footnoteblock hoist) and the Div/Span/Image attribute normalizers under REFCORR13-GENERAL (primitive D removed, ESC and DEL kept, verbatim href percent-encodes non-printable bytes). The mirror was read at LinkRules.lean, ListRules.lean, NotesRules.lean, NotesRender.lean, ServingRules.lean, ContainRules.lean, ParaRules.lean and InteractiveRules.lean. The four-adjacent U+FFFD digit class, the parity Email index family, Stage 2 frames and serving surfaces are standing owned or cleared classes and are not re-litigated. Pages are muse-probe-round5g-s1-* on sandbox-for-codex, left in place and listed in map.json. Every row is a NEW shape combining two or more corrected mechanisms or a third-order neighbor of a generalized rule; no previously confirmed minimal shape is re-run as-is. P_CONFIRM is the live rule-level byte that would make the reference defective; P_CLEAR is the live byte showing the corrected reference agrees. Source identities in cases.jsonl are generated from the SOURCE lines below by gen_cases.py so they cannot drift from this prose. P_CONFIRM and P_CLEAR are pre-probe predictions only; the verdict follows the valid/stable/source-matching capture and the standard mask.
## S01 — s01-fl-esc-lead-url — U+001B ESC lead before a bare external URL (REFCORR13 lead class x REFCORR13 external-URL branch)
FAMILY: freelink
SOURCE: "[[[\u001bhttps://example.com/x]]]"
P_CONFIRM: live tolerates the newly-admitted ESC lead and still classifies the target as an external URL, serving href https://example.com/x, while the reference's lead strip runs only on a _default: slug so the ESC prefix makes freelink_is_url fail and the target slugifies to a local page link.
P_CLEAR: both sides serve the same external href https://example.com/x with the same label after the standard mask.
REASON: REFCORR13 added ESC to the single lead predicate but only tested it before _default:; whether that tolerance also precedes the external-URL detection is an unmeasured third-order sibling of the C-R5F-S2-1 lead witness and the external-URL branch is newly corrected in the same cycle.
## S02 — s02-fl-u2065-lead-url — U+2065 lead before a bare external URL with a described label (REFCORR13 U+2065 lead x external URL)
FAMILY: freelink
SOURCE: "[[[\u2065https://example.com/y|L]]]"
P_CONFIRM: live strips the newly-admitted U+2065 lead and serves the external href https://example.com/y with label L, while the reference keeps the lead so the URL test fails and a local slug link is served.
P_CLEAR: both sides serve the same external href https://example.com/y with label L after the standard mask.
REASON: U+2065 was admitted in REFCORR13 only on the measured _default: witness; combining it with the external-URL branch, which runs earlier in process(), tests whether the two corrected mechanisms compose in the order the reference assumes.
## S03 — s03-fl-esc-in-url — ESC byte inside an external URL path (Freelink non-ASCII-only encoder x Anchor non-printable encoder)
FAMILY: freelink/attr
SOURCE: "[[[https://example.com/a\u001bb]]]"
P_CONFIRM: live encodes the interior ESC as %1B (as the REFCORR13 Anchor verbatim-href encoder does for every non-printable byte) or drops it, while the reference Freelink encoder only rewrites non-ASCII bytes >= 0x80 and leaves a raw ESC in the href.
P_CLEAR: both sides emit the same href bytes for the ESC-bearing URL after the standard mask.
REASON: REFCORR13-GENERAL widened the Anchor verbatim-href encoder from non-ASCII to every non-printable byte while the Freelink external-URL encoder was widened only for non-ASCII; an interior C0 byte in a Freelink URL is the direct seam between the two corrected encoders.
## S04 — s04-fl-esc-lead-route-pipe — ESC lead with a /#/ hash route and an empty pipe label (REFCORR13 lead x REFCORR10 route x REFCORR13 empty-pipe fallback)
FAMILY: freelink
SOURCE: "[[[\u001b_default:x/#/sec|]]]"
P_CONFIRM: the reference peels the ESC lead from $slugSource, keeps the /#/ route in the href and fills the empty pipe label from the slug, but live's lead tolerance or route peel order yields a different href suffix or label.
P_CLEAR: both sides serve href /x#//sec with the same slug-derived label after the standard mask.
REASON: three corrected mechanisms meet in one source: the new ESC lead member, the REFCORR10 /#/ route peel and the REFCORR13 empty-pipe slug fallback; the prior Cf-lead route witness used U+200B and a described label, not the newly-admitted lead with an empty pipe.
## S05 — s05-fl-nonascii-frag-pipe — non-ASCII external URL with a # fragment and empty pipe label (REFCORR13 percent-encode x fragment retention x empty-pipe fallback)
FAMILY: freelink
SOURCE: "[[[https://example.com/caf\u00e9#sec|]]]"
P_CONFIRM: the reference percent-encodes caf\u00e9 to caf%C3%A9, keeps #sec in the href and falls back to the slugified URL label, while live differs on any of the three rule-level values.
P_CLEAR: both sides emit the same percent-encoded href with retained fragment and the same fallback label after the standard mask.
REASON: the three external-URL corrections (bytewise percent encoding, peeled fragment retention and empty-pipe slug label) were each measured on separate cached witnesses; combining them exercises their composition in one href for the first time.
## S06 — s06-fl-u2065-multihash — U+2065 lead on a two-hash target (REFCORR13 lead x REFCORR11 uniform multi-hash guard)
FAMILY: freelink
SOURCE: "[[[\u2065foo#a#b]]]"
P_CONFIRM: the reference rejects the two-hash target uniformly before lead handling and leaves the literal form, while live admits the target because the newly-tolerated lead changes route or hash parsing.
P_CLEAR: both sides leave the same literal triple-bracket bytes after the standard mask.
REASON: REFCORR11 made two-hash rejection uniform and REFCORR13 generalized the lead class; putting a newly-admitted lead ahead of a rejected multi-hash slug checks that the guard is independent of the extended lead predicate.
## S07 — s07-fn-break-list-hoist — FF-plus-LF authored break in a footnote inside a failed-closer list tail with footnoteblock hoist (REFCORR13 break witness x REFCORR13 list hoist)
FAMILY: notes/list
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[footnote]]B\u000c\nC[[/footnote]]\n[[LI]]D[[/LI]]\n[[/UL]]\n[[footnoteblock]]"
P_CONFIRM: the reference hoists the footnoteblock past the list end while keeping the FF witness that produces the rule-level <br /> in the collected footnote body, but live places the footer or the break witness at a different rule level.
P_CLEAR: both sides show the same one-item list, the same FF-witness <br /> in the footnote body and the same footer placement after the owned counter-digit and frame masks.
REASON: R13-S3 changed the footnoteblock hoist to token identity over the whole tail and the REFCORR13 notes fix changed when a discarded C0 byte counts as a break witness; their seam in a preserved literal tail is a two-mechanism third-order sibling.
## S08 — s08-fn-esc-sep-list — ESC-leading footnote body collected in a hoisted list tail (REFCORR13 separator class x REFCORR13 list hoist)
FAMILY: notes/list
SOURCE: "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[footnote]]\u001bX[[/footnote]]\n[[LI]]B[[/LI]]\n[[/UL]]\n[[footnoteblock]]"
P_CONFIRM: the reference keeps ESC in the visible lead so it still emits the separator space and hoists the footer, while live either drops the space or relocates the ESC-bearing footer.
P_CLEAR: both sides emit the same ESC-bearing footnote entry with the same separator space and footer placement after the owned counter-digit and frame masks.
REASON: the REFCORR13 footnoteitem separator widened the class to keep ESC as a visible lead byte; stacking it with the REFCORR13 whole-tail hoist tests whether the collected body state survives relocation.
## S09 — s09-list-closer-ff-break — FF immediately after a stripped nested closer run (REFCORR13 S2 residual-whitespace strip x REFCORR13 break witness)
FAMILY: list/notes
SOURCE: "[[UL]]\n[[LI]]A[[ul]]\n[[LI]]in[[/LI]]\n[[/ul]]\u000c\n[[LI]]out[[/LI]]\n[[/UL]]"
P_CONFIRM: the reference's R13-S2 closer-strip regex consumes the FF as part of the trailing \s* run so no break witness remains, while live keeps the FF as an inline witness and renders a rule-level <br />.
P_CLEAR: both sides emit the same list structure with the same inline whitespace after the campaign frame mask.
REASON: R13-S2 added a trailing \s* to the closer strip and the notes fix made a bare discarded C0 byte a real break witness; a discarded byte in exactly the stripped position is their byte-edge seam.
## S10 — s10-math-esc-type — ESC byte inside a Math environment type value (REFCORR13 attribute D keeps ESC x AGY2 Math allowlist)
FAMILY: math/attr
SOURCE: "[[math type=\"al\u001bign\"]]\nx\n[[/math]]"
P_CONFIRM: the reference strips only stars and checks the exact allowlist with no trim, so the ESC-bearing value is rejected with the ESC in the error text, while live drops the discarded-class ESC before validation and accepts the align envelope, or spells the error differently.
P_CLEAR: both sides emit the same error-block bytes for the ESC-bearing environment name after the standard mask.
REASON: REFCORR13-GENERAL keeps ESC in attribute values as a surviving byte while the AGY2 Math validator applies a star-strip plus exact allowlist with no byte filtering; the two corrected byte policies disagree about an interior ESC.
## S11 — s11-math-multistar — multiple stars around a valid Math environment name (AGY2 star-strip third-order sibling)
FAMILY: math
SOURCE: "[[math type=\"**align**\"]]\nx\n[[/math]]"
P_CONFIRM: the reference strips every star and accepts the align envelope, while live strips only one star or treats a doubled star as a distinct environment and rejects it.
P_CLEAR: both sides take the same valid align branch and emit the same fossil PNG-stub failure surface after the standard mask.
REASON: AGY2 D08 measured a single trailing star in align* and a single interior star in a*b; a multi-star value is the unmeasured third-order member of the strip-every-star rule.
## S12 — s12-math-star-digit — star-stripped Math name that becomes digit-bearing (AGY2 star-strip x REFCORR13 digit rejection)
FAMILY: math
SOURCE: "[[math type=\"align*2\"]]\nx\n[[/math]]"
P_CONFIRM: the reference strips the star to align2 and rejects it with Unsupported math environment "align2", while live's star handling and digit rejection compose differently and accept or spell the name differently.
P_CLEAR: both sides emit the same Unsupported math environment "align2" error bytes after the standard mask.
REASON: R13-MATHNOTES rejected the digit-bearing align2 and AGY2 D08 introduced star stripping; a value that becomes align2 only after stripping composes both corrected validators in one name.
## S13 — s13-btn-settags-space0 — space-padded zero text on a set-tags button (AGY2 D10 falsy guard x attribute whitespace)
FAMILY: button
SOURCE: "[[button set-tags text=\" 0 \"]]"
P_CONFIRM: the reference's !isset guard passes a present value and PHP then treats the non-exact string " 0 " as truthy, emitting a label with the spaces, while live trims to "0" and applies the falsy default, emitting an empty label.
P_CLEAR: both sides emit the same set-tags anchor label bytes after the standard mask.
REASON: D10 established that present-but-falsy text passes the guard and reproduces the empty anchor; a space-padded zero separates a trim-then-falsy live rule from a raw falsy PHP test and is a third-order sibling of the m08a/m08b witnesses.
## S14 — s14-btn-settags-esc — ESC-only text on a set-tags button (REFCORR13 attribute D keeps ESC x AGY2 D10 falsy default)
FAMILY: button/attr
SOURCE: "[[button set-tags text=\"\u001b\"]]"
P_CONFIRM: the reference keeps ESC as a present value that is truthy in PHP and emits an ESC-bearing label, while live drops the discarded-class byte and takes the falsy default to an empty label.
P_CLEAR: both sides emit the same set-tags anchor bytes after the standard mask.
REASON: REFCORR13-GENERAL keeps ESC in normalized attribute values while the D10 falsy default fires on a byte-emptied value; an ESC-only text is the seam between the two corrected policies.
## S15 — s15-tabview-space0 — space-padded zero tab title (AGY2 D11 falsy title x attribute whitespace)
FAMILY: tabview
SOURCE: "[[tabview]][[tab 0 ]]body[[/tab]][[/tabview]]"
P_CONFIRM: the reference trims the title and applies the D11 falsy test so the padded zero defaults to untitled, while live keeps the trimmed "0" as a visible label or trims differently.
P_CLEAR: both sides emit the same untitled tab label after the standard mask.
REASON: D11 measured exact "0" and "" as untitled after trim; a space-padded zero is a third-order sibling that separates trim-then-falsy from other orderings and was not in the agy-hunt battery.
## S16 — s16-span-esc-type — ESC byte inside a Span type attribute (REFCORR13 D keeps ESC x Span normalizer)
FAMILY: span/attr
SOURCE: "[[span type=\"a\u001bb\"]]x[[/span]]"
P_CONFIRM: the reference normalizer removes class D but keeps ESC and emits type="a\u001bb", while live drops ESC as a residual C0 byte and emits type="ab".
P_CLEAR: both sides emit the same ESC-bearing type value after the standard mask.
REASON: REFCORR13-GENERAL narrowed the Span technical-value dropped class to D, which keeps ESC; the prior R5F-S1 Div witness covered ESC in a Div value but the Span type consumer was not measured for the retained byte.
## S17 — s17-img-esc-class — ESC byte inside an Image class technical attribute (REFCORR13 image D-removal x notes ESC-kept)
FAMILY: image/attr
SOURCE: "[[image IMG.png class=\"a\u001bb\"]]cap"
P_CONFIRM: the reference applies D removal and trailing-W rtrim to the class and keeps ESC, emitting class="a\u001bb", while live drops ESC in the image consumer as a residual C0 byte.
P_CLEAR: both sides emit the same ESC-bearing class value after the standard mask.
REASON: the prior R5F-S1 image witness measured an interior FF (a D member) being discarded on live; ESC is the byte that REFCORR13 explicitly keeps in D, so an interior ESC in the same consumer is its complementary third-order sibling.
## S18 — s18-div-esc-placeholder-id — ESC plus a nested placeholder in a Div id (REFCORR13 id isolation x D keeps ESC)
FAMILY: div/attr
SOURCE: "[[div id=\"a\u001b[[size 12px]]q[[/size]]\"]]\nbody\n[[/div]]"
P_CONFIRM: the reference keeps the key, isolates the nested placeholder u and keeps ESC in the surviving id bytes, while live clears the whole 0xFF-bearing value or drops ESC differently, yielding a different id signature.
P_CLEAR: both sides emit the same id signature after the standard mask.
REASON: REFCORR13-GENERAL combines id placeholder isolation with the narrowed D class that keeps ESC; the prior S1 placeholder witness used trailing spaces and an all-0xFF value, not a surviving ESC byte beside an isolated placeholder.
