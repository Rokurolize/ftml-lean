# Pre-probe ledger — round-5h unit R5H-S1, cross-rule seams around the REFCORR8/9/10/11/12/13/14 corrections (written before any live probe)

Read basis: canonical base e53e7234 on the post-REFCORR14, snapshot-38 published ground announced ready by the creation of COORD-UNITS/PROTOCOL-R5H.md; the two governing protocols COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5H.md were read in full first. Corrected mechanisms were read firsthand from the canonical reference sources under ref-php/text-wiki/Text/Wiki: Parse/Default/Freelink.php (REFCORR13 two-code-point lead extension U+2065 and ESC on top of the REFCORR12 general Cf+White_Space lead predicate, REFCORR11 uniform multi-hash guard, REFCORR10 /#/ hash-route peel, REFCORR13 empty-pipe slug fallback, bare-URL external branch with the REFCORR3 star new-tab marker, transliteration table and bytewise non-ASCII href encoder), Render/Xhtml/Freelink.php (REFCORR13 D06/D07 fragment-retention plus non-ASCII-only bytewise encode of url+anchor+extra), Parse/Default/Anchor.php and Render/Xhtml/Anchor.php (REFCORR13-GENERAL verbatim-href encoder of every non-printable byte, REFCORR12 data-* lowercasing, REFCORR9 id u- shell, REFCORR13 D-set that keeps ESC and DEL and discards the other C0/C1 bytes), Render/Xhtml/Div.php and Span.php (REFCORR12 uniform 0xFF placeholder arm), Render/Xhtml/Image.php (non-ASCII-only src/href encoder), Render/Xhtml/Button.php and Parse/Default/Button.php (REFCORR13 AGY2 D10 isset guard plus falsy default with no label trim), Parse/Default/Tabview.php (REFCORR13 AGY2 D11 falsy-zero title default plus whitespace collapse), Render/Xhtml/Footnoteitem.php (REFCORR13 C-R5F-R3-3 separator class that keeps ESC and excludes the rest of the discarded D set), Render/Xhtml/Math.php (AGY2 D08 strip-every-star plus six-name allowlist with no trim and no case folding), Parse/Default/Raw.php (REFCORR14 same-line later-run threshold two and newline-free preOk consultation, composed with the REFCORR10 surplus-closer formula and REFCORR5/6 run shaping), and Render/Xhtml/Raw.php (wikidotEscapeRaw wrapper). The mirror was read at LinkRules.lean, FormRawRules.lean, InteractiveRules.lean, NotesRules.lean, ContainRules.lean and ServingRules.lean. Standing scope decisions applied without re-litigation: the four-adjacent U+FFFD digit class is OWNED, the parity Email index family is closed with owned counter digits, Stage 2 purifyHtml frames and all serving surfaces (module placeholders, wdfiles hosts, random tab ids, external LatexRenderer stub) are CLEARED, and save-normalized sources are UNTESTABLE. No previously confirmed minimal shape is re-probed unchanged; each suspicion below combines two or more corrected mechanisms or is a distinct third-order sibling with a changed-mechanism reason. All writes are under coord-units/R5H-S1/.
## S01 — s01-fl-url-frag-ctl — freelink (REFCORR13 non-ASCII href encoder x REFCORR13 D06 fragment retention)
FAMILY: freelink
SOURCE: "[[[https://ex.test/a\u0001b#sec|L]]]"
P_CONFIRM: the reference encoder rewrites only bytes >= 0x80 so the href keeps a raw SOH byte before a retained #sec fragment, while live percent-encodes the interior C0 byte as %01 in the same href.
P_CLEAR: both sides serve href https://ex.test/a%01b#sec (or both keep the raw SOH) with label L after the standard frame mask.
REASON: C-R5G-S1-1 measured an interior ESC with no fragment; adding the REFCORR13 D06 peeled-fragment suffix tests whether the bytewise encoder and the retained anchor compose over the same href string, an unmeasured seam of two mechanisms corrected in the same cycle.
## S02 — s02-fl-star-url-esc — freelink (REFCORR3 star new-tab marker x REFCORR6 transliteration x REFCORR13 encoder)
FAMILY: freelink
SOURCE: "[[[*https://ex.test/caf\u00e9\u001b|L]]]"
P_CONFIRM: the reference star branch adds target=_blank after transliteration and encodes the non-ASCII caf\u00e9 but leaves the trailing ESC raw, while live encodes or drops the ESC and changes the target attribute or label composition.
P_CLEAR: both sides serve the same percent-encoded starred external href with the same target=_blank and label after the frame mask.
REASON: the star new-tab marker was corrected in REFCORR3 and the href encoder in REFCORR13, but the star branch was pinned only on a plain URL; a starred URL carrying both a transliterated byte and a discarded-class C0 byte is the seam of the star option and the two byte policies.
## S03 — s03-anchor-multi-attr — attr/anchor (REFCORR13 verbatim-href encoder x REFCORR13 D-set x REFCORR12 data lowercase x REFCORR9 id u-shell)
FAMILY: attr/anchor
SOURCE: "[[a href=\"#a\u001bb\" data-X=\"\u0001v\" id=\"q\u001b\"]]t[[/a]]"
P_CONFIRM: the reference percent-encodes ESC in the verbatim href, strips SOH from the data value while lowercasing its key, and keeps ESC in the u- prefixed id, while live differs on any of the three byte decisions.
P_CLEAR: both sides emit the same href, data-x and id attribute bytes after the frame mask.
REASON: four attribute corrections from REFCORR9/12/13 are applied by buildAnchorAttrs in one opener; prior witnesses measured each policy on a single attribute, so their co-occurrence on one tag is a genuine cross-rule seam.
## S04 — s04-span-esc-del — attr/span (REFCORR12/13 discarded-D set keeps ESC and DEL, composed across class and style)
FAMILY: attr/span
SOURCE: "[[span class=\"a\u001bb\" style=\"x\u007fy\"]]t[[/span]]"
P_CONFIRM: the reference keeps ESC in class and DEL in style through normalizeAttrValue and emits both verbatim, while live discards one or both surviving bytes from one of the two attributes.
P_CLEAR: both sides emit the same class and style attribute bytes after the frame mask.
REASON: REFCORR13 narrowed D to keep ESC and DEL on a single measured attribute; measuring the two surviving bytes together in two different attributes checks that the narrowed D set is applied uniformly, a third-order sibling of the single-attribute witness.
## S05 — s05-img-src-ctl — attr/image (Image non-ASCII-only src encoder x REFCORR13 D-set)
FAMILY: attr/image
SOURCE: "[[image src=\"https://ex.test/a\u001bb.png\" alt=\"x\u001by\"]]"
P_CONFIRM: the reference Image encoder rewrites only non-ASCII bytes so the src keeps a raw SOH byte while the alt keeps a raw ESC byte, while live percent-encodes the control byte in the emitted src or alters the alt bytes.
P_CLEAR: both sides emit the same src and alt bytes after the owned wdfiles-host serving mask.
REASON: the Image src encoder was corrected in the R2-PARA cycle to match the Freelink non-ASCII-only encoder, and the D-set was narrowed in REFCORR13; a control byte in an external image src is the seam between these two encoders and mirrors the confirmed Freelink interior-control shape on a different rule.
## S06 — s06-btn-edit-padzero — button (REFCORR13 AGY2 D10 isset guard x falsy default table, on a typed button with a default)
FAMILY: button
SOURCE: "[[button edit text=\" 0 \"]]"
P_CONFIRM: the reference isset guard passes the present value and the falsy test then keeps the space-padded \" 0 \" label because PHP treats it as truthy, while live trims the label to 0 or applies the empty-label default.
P_CLEAR: both sides emit the same edit-button label bytes after the frame mask.
REASON: the confirmed C-R5G-S1-2 trim seam was measured on set-tags, which has no defaultText entry; edit has a defaultText entry, so the D10 guard and the falsy default table compose differently and this is a changed-mechanism sibling, not a re-run of the confirmed shape.
## S07 — s07-btn-class-ctl — button (REFCORR13 D10 guard x button class escape x REFCORR13-GENERAL D-set)
FAMILY: button
SOURCE: "[[button tags class=\"a\u001bb\" text=\"x\"]]"
P_CONFIRM: the reference htmlspecialchars the class value with the ESC surviving the D-set, while live strips the ESC from the class or changes the guard outcome.
P_CLEAR: both sides emit the same class attribute and label after the frame mask.
REASON: the button class path was never measured under the REFCORR13 D-set; it composes the D10 isset guard with the attribute surviving-byte policy on a non-text attribute.
## S08 — s08-tabview-title-padzero — tabview (REFCORR13 AGY2 D11 falsy title x whitespace collapse)
FAMILY: tabview
SOURCE: "[[tabview]][[tab title=\" 0 \" ]]x[[/tab]][[/tabview]]"
P_CONFIRM: the reference trims the title to 0 and then applies the PHP falsy test so it defaults to untitled, while live keeps a visible 0 label or defaults on a different predicate.
P_CLEAR: both sides emit the same untitled (or 0) tab label after the frame mask.
REASON: D11 was measured on the exact positional 0 and title=\"0\" forms; a space-padded zero composes the falsy default with the whitespace-collapse branch of _tabTitle and is an unmeasured third-order member.
## S09 — s09-fn-lead-soh — notes (REFCORR13 discarded-D set x REFCORR13 footnoteitem separator decision)
FAMILY: notes
SOURCE: "[[footnote]]\u0001X[[/footnote]][[footnoteblock]]"
P_CONFIRM: the reference separator regex excludes SOH from the visible-lead class so no separator space is emitted, while live treats the discarded SOH differently and emits or omits the space differently.
P_CLEAR: both sides emit the same footnote entry with the same separator space after the owned counter-digit and frame masks.
REASON: the REFCORR13 separator witness used ESC (kept) and FF (discarded) on a break line; a leading SOH that is discarded by the D set but not a break witness is the seam between the D-set and the separator predicate.
## S10 — s10-fn-esc-break — notes (REFCORR13 authored-break witness x ESC kept x REFCORR10 separator)
FAMILY: notes
SOURCE: "[[footnote]]\u001bX\u000c\nY[[/footnote]][[footnoteblock]]"
P_CONFIRM: the reference keeps ESC as the visible lead and emits the separator space while the FF+LF produces the inline break witness, while live differs on the space, the break token or the entry placement.
P_CLEAR: both sides emit the same ESC-bearing footnote entry, separator space and break after the owned masks.
REASON: the REFCORR13 footnote fix and the REFCORR13 separator widening were measured on separate cached witnesses; placing an ESC lead on the same body that carries the FF break composes the break witness and the separator decision in one note.
## S11 — s11-math-trail-ctl — math (REFCORR13 D-set x AGY2 D08 strip-star allowlist)
FAMILY: math
SOURCE: "[[math type=\"align\u0001\"]]\nx\n[[/math]]"
P_CONFIRM: the reference strips only stars and rejects align<SOH> with the control byte visible in the error block, while live discards the SOH before validation and accepts the align envelope or spells the name differently.
P_CLEAR: both sides emit the same Unsupported math environment error bytes for the control-bearing name after the frame mask.
REASON: R5G-S1 S10 tested an ESC inserted inside al-ign; a trailing SOH after a valid name is a distinct position where the discarded-D set and the exact allowlist compose differently and was not measured.
## S12 — s12-raw-multi-short — raw (REFCORR14 threshold-two later-run x REFCORR10 surplus-closer formula)
FAMILY: raw
SOURCE: "@@@@a@@@b@@@c@@"
P_CONFIRM: the reference takes the empty-Raw early exit at the first four-run because a later two-plus run exists, then re-scans and shapes a Raw span differently from live, which associates the short runs into one or more spans with different @ surplus bytes.
P_CLEAR: both sides emit the same literal-plus-span bytes after the frame mask.
REASON: REFCORR14 lowered the later-run threshold to two on the W-EQ single-short-closer witness; a chain of two short runs followed by a final closer exercises the same-line scan loop with the REFCORR10 surplus-closer formula and was not measured.
## S13 — s13-raw-xline-short — raw (cross-line empty-Raw branch x REFCORR14 threshold-two)
FAMILY: raw
SOURCE: "@@@@\n@@a@@@b@@"
P_CONFIRM: the reference takes the cross-line empty-Raw branch first and then the same-line later-run consultation at the re-scanned short run, while live treats the cross-line and same-line associations in a different order and emits a different span or literal @ count.
P_CLEAR: both sides emit the same space-plus-span-plus-literal bytes after the frame mask.
REASON: REFCORR14 changed the newline-free preOk arm only; a cross-line empty Raw immediately followed by a short same-line closer sits exactly on the boundary between the untouched cross-line branch and the corrected newline-free consultation.
## S14 — s14-table-hdr-ctl — table (REFCORR8 upper-data x REFCORR9 data-underscore x REFCORR13 discarded-D set)
FAMILY: table
SOURCE: "[[table]]\n|= h\u0001x | normal |\n| d_y | plain |\n[[/table]]"
P_CONFIRM: the reference keeps or escapes the header-cell control byte under the table upper-data rule while the data cell keeps the underscore, while live discards the control byte or treats the underscore differently in the same table.
P_CLEAR: both sides emit the same header and data cell bytes after the frame mask.
REASON: REFCORR8 corrected the upper-data header path and REFCORR9 corrected data-cell underscore spelling, but their co-occurrence with a discarded-D control byte in one header cell was not measured; this is a genuine cross-rule table seam.
## S15 — s15-fl-mixedlead — freelink (REFCORR12 general Cf lead x REFCORR13 ESC x _default strip)
FAMILY: freelink
SOURCE: "[[[\u200b\u001b_default:x|L]]]"
P_CONFIRM: the reference byte-oriented lead regex consumes the mixed U+200B plus ESC run before _default: and serves href /x, while live rejects or only partially consumes the mixed Cf+ESC run and serves a different href.
P_CLEAR: both sides serve href /x with label L after the frame mask.
REASON: REFCORR12 measured a mixed Cf-only run and REFCORR13 measured ESC alone; a run that mixes a Cf byte and the newly admitted ESC before _default: tests that the general predicate and the two-code-point extension compose, which neither witness covered.
## S16 — s16-div-id-nonascii — attr/div (REFCORR9 id u-shell x REFCORR13 normalizeAttrValue non-ASCII policy x REFCORR12 D-set)
FAMILY: attr/div
SOURCE: "[[div id=\"caf\u00e9\"]]t[[/div]]"
P_CONFIRM: the reference u- prefixes the id and keeps the non-ASCII bytes through normalizeAttrValue, while live transliterates, strips or differently prefixes the non-ASCII id value.
P_CLEAR: both sides emit the same id attribute bytes after the frame mask.
REASON: the u- shell was corrected in REFCORR9 and the attribute value normalization in REFCORR12/13, but the id witnesses used ASCII and control bytes only; a non-ASCII id value is the seam between the u-shell isolation and the byte-surviving normalizer.
