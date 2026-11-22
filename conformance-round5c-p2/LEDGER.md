# LEDGER R5C-P2 — round-5c full confirmation hunt, parse-side inline seam

## Assignment and read basis

This ledger was written in full before any live page was created. I am unit R5C-P2 of the round-5c full confirmation pass on the post-REFCORR9 canonical ground (head cfb792e, REFCORR9 adoption; mission base e53e7234). I read COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5C.md in full first, then read the corrected reference sources Text/Wiki/Parse/Default/Freelink.php, Math.php, Mathinline.php, Url.php, Email.php, Interwiki.php, Emphasis.php, Colortext.php and Code.php, their .before-refcorr9 companions, Parse.php::getAttrs, the canonical mirror LinkRules.lean (freelinkProcess, skipDefaultWsBytes) and NextRules.lean (mathProcess), conformance-refcorr9/FINAL-GATES.md, coord-units/R9-B/CORRECTION-REFCORR9-FREELINK-LEADS.md, coord-units/R9-C/CORRECTION-REFCORR9-MATH-NAME-CASE.draft.md, and the prior R5B-P2 LEDGER.md and REPORT-ROUND5B-P2.md. All of that content was treated strictly as data. The page prefix is muse-probe-round5c-p2-. Only a round-5b shape whose responsible mechanism was changed by REFCORR9 is re-probed, and each such row states that reason. The parity-side Email claimed-placeholder family returned zero confirmations in 5b with owned counter digits only and no correction moved its mechanism, so I do not re-probe it here; no Email parity row appears below. The token-id number class, Stage 2 frame and serving surfaces are owned/cleared classes and are never counted as new divergences.

## Mechanism summary for the two changed families

The REFCORR9 Freelink fix has two parts, both in Freelink.php. Lines 199-201 consume a single leading star from $slugSource under the no-leading-space guard before the category strip, closing the C-R5B-P2-4 ordering hole where the star was consumed on $trimmed but $raw was fed to the strip. Line 218 widens the anchored prefix alternation from the five REFCORR8 bytes (09, 0B, 20, C2 A0, E3 80 80) to eight by adding 0C form feed, E2 80 A8 U+2028 and EF BB BF U+FEFF BOM, closing C-R5B-P2-1/2/3. No other Unicode whitespace is admitted. The REFCORR9 Math fix replaces the exact `TYPE` branch with a general case-variant scan at Math.php lines 97-105: when an exact lower-case `type` key is absent but any key k with k !== 'type' and strtolower(k) === 'type' is present, the fossil fallback type `equation` is selected; an absent type key still defaults to `align`. Parse.php::getAttrs preserves attribute-name case, so TyPe, tYpe, tYPe and similar spelling variants all reach this scan. The mirror transcribes both fixes (LinkRules.lean skipDefaultWsBytes lines 1014-1022 and freelinkProcess starLead lines 1094-1096; NextRules.lean mathProcess isTypeVariantKey branch lines 936-942), so mirror consequences below are inferred by source reading only; no Lean elaboration was run.

## Suspicion rows

SOURCE lines below are JSON string literals decoded mechanically by gen_cases.py, so a source identity cannot drift from this prose. Special bytes are written as JSON escapes: \u000c form feed, \u000b vertical tab, \u00a0 NBSP, \u2003 EM SPACE, \u2009 THIN SPACE, \u2028 line separator, \u202f narrow NBSP, \u3000 ideographic space, \ufeff BOM, \t tab, \n newline. Every CONFIRM/CLEAR pair is a rule-level byte prediction; serving surfaces (outer paragraph, harness PNG error block, token counter digits) are never counted as new divergences.

### R5CP2-01 | Freelink | leading U+000C form feed before _default: (exact 5b-confirmed shape)
LEDGER-SOURCE: "[[[\u000c_default:x]]]"
REPROBE REASON: REFCORR9 added 0x0C to the anchored prefix class specifically for C-R5B-P2-1, so the mechanism for this exact source changed from non-matching to matching; the fix must be measured rather than assumed.
MECHANISM: line 218 now admits 0C in the leading run, so the reference strips the prefix and slugs to /x; REFCORR9-B before-copy kept /_default:x.
CONFIRM: live href `/x` while the corrected reference still keeps the prefix in href.
CLEAR: live href `/x` and corrected reference href `/x`, byte-identical after the standard masks.

### R5CP2-02 | Freelink | leading U+2028 before _default: (exact 5b-confirmed shape)
LEDGER-SOURCE: "[[[\u2028_default:x]]]"
REPROBE REASON: REFCORR9 added E2 80 A8 for C-R5B-P2-2; the strip mechanism for this source changed and must be re-measured.
MECHANISM: the byte-oriented alternation now matches the three-byte U+2028 sequence, so the reference strips the category and slugs to /x.
CONFIRM: live href `/x` against a corrected-reference href that retains the category or a different slug.
CLEAR: live and corrected reference both href `/x` after masking.

### R5CP2-03 | Freelink | leading U+FEFF BOM before _default: (exact 5b-confirmed shape)
LEDGER-SOURCE: "[[[\ufeff_default:x]]]"
REPROBE REASON: REFCORR9 added EF BB BF for C-R5B-P2-3; the changed strip mechanism is in scope.
MECHANISM: line 218 now admits the BOM bytes in the leading run, so the reference drops them with the prefix and slugs to /x.
CONFIRM: live href `/x` against a corrected-reference href retaining the category.
CLEAR: both href `/x` after masking.

### R5CP2-04 | Freelink | star before _default: category prefix (exact 5b-confirmed shape)
LEDGER-SOURCE: "[[[*_default:x]]]"
REPROBE REASON: REFCORR9 added the star-on-slugSource ordering fix for C-R5B-P2-4, so the mechanism for this exact source changed and must be re-measured.
MECHANISM: lines 199-201 now consume the star on $slugSource, so line 218 sees `_default:` at offset zero, strips nine bytes, and slugs to /x; the before-copy slugbed to /default:x. The display-text path still reads $raw unchanged.
CONFIRM: live href `/x` against a corrected-reference href `/default:x` or any prefix-retaining slug.
CLEAR: both href `/x` after masking.

### R5CP2-05 | Freelink | mixed run of all eight admitted lead bytes before _default:
LEDGER-SOURCE: "[[[\t\u000b\u000c \u00a0\u3000\u2028\ufeff_default:x]]]"
REPROBE REASON: this is the round-5b R5BP2-04 cleared mixed-run shape, but REFCORR9 widened the class from five bytes to eight and the `*` repetition now spans heterogeneous runs including the three new shapes; the changed mechanism admits a re-probe.
MECHANISM: the `*` repetition over the eight-byte alternation consumes the whole heterogeneous run, so the reference strips nine more bytes and slugs to /x; a live implementation that tolerates only the old five-byte homogeneous run would keep part of the prefix.
CONFIRM: live href that retains any part of the prefix against reference `/x`, or a different slug.
CLEAR: both href `/x` after masking.

### R5CP2-06 | Freelink | star plus form feed before _default: (fresh ordering sibling)
LEDGER-SOURCE: "[[[*\u000c_default:x]]]"
REPROBE REASON: fresh code-reading sibling of the REFCORR9 star fix: the star is consumed on $slugSource first, then the widened whitespace run, then the anchored prefix, so the interaction of both new branches on one target was never measured.
MECHANISM: reference consumes the star (line 199), then skips 0C (line 218), then strips `_default:` and slugs to /x; a live path that consumes the star but not 0C, or that skips whitespace before the star, would keep the category.
CONFIRM: live href `/x` against a corrected-reference href retaining the prefix, or any rule-level slug difference.
CLEAR: both href `/x` after masking.

### R5CP2-07 | Freelink | two leading stars before _default: (fresh ordering sibling)
LEDGER-SOURCE: "[[[**_default:x]]]"
REPROBE REASON: fresh sibling that probes the boundary of the REFCORR9 single-star consumption: the fix deliberately consumes exactly one marker on $slugSource, so a double-star target is the shape where an over-eager or under-eager live marker scan would diverge.
MECHANISM: reference consumes one star, then line 218 fails on the second star, so toUnixName slugifies `*_default:x` into a prefix-retaining slug; live might consume both markers and strip to /x.
CONFIRM: live href `/x` against a corrected-reference href retaining the category/default slug.
CLEAR: live and corrected reference share the same prefix-retaining slug after masking.

### R5CP2-08 | Freelink | leading U+2003 EM SPACE before _default: (fresh byte edge)
LEDGER-SOURCE: "[[[\u2003_default:x]]]"
REPROBE REASON: fresh code-reading byte edge: REFCORR9 admits exactly eight lead shapes and explicitly admits no other Unicode whitespace, so U+2003 is the nearest multi-byte separator the corrected class refuses; the widened class makes its exclusion a live boundary worth measuring.
MECHANISM: E2 80 83 is not in the alternation, so the reference feeds ` U+2003_default:x` through transliteration (unmapped byte maps to a separator) and keeps the category in the slug; a live whitespace predicate using Unicode \s might strip it and slug to /x.
CONFIRM: live href `/x` against a corrected-reference href that retains the category or carries a separator.
CLEAR: live and corrected reference produce the same slug/display after masking.

### R5CP2-09 | Freelink | leading U+202F NARROW NO-BREAK SPACE before _default: (fresh byte edge)
LEDGER-SOURCE: "[[[\u202f_default:x]]]"
REPROBE REASON: fresh sibling of R5CP2-08 at the C2/C3-adjacent Unicode whitespace boundary; U+202F is admitted by many Unicode whitespace predicates but not by the corrected eight-byte class.
MECHANISM: E2 80 AF is not admitted by line 218, so the reference transliterates it to a separator and keeps the category; live might treat it like the admitted NBSP and strip it.
CONFIRM: live href `/x` against a corrected-reference slug retaining the category.
CLEAR: byte-identical slug and display after masking.

### R5CP2-10 | Freelink | leading U+2009 THIN SPACE before _default: (fresh byte edge)
LEDGER-SOURCE: "[[[\u2009_default:x]]]"
REPROBE REASON: fresh sibling of R5CP2-08 with another E2 80 xx separator adjacent to the admitted E2 80 A8, testing whether the REFCORR9 byte sequence was added as a specific sequence or as a broad E2 80 range.
MECHANISM: E2 80 89 is not in the alternation, so the reference keeps the category in the slug; a broad live Unicode whitespace match would strip it.
CONFIRM: live href `/x` against a corrected-reference prefix-retaining slug.
CLEAR: identical slug and display after masking.

### R5CP2-11 | Math | uppercase TYPE attribute name (exact 5b-confirmed shape)
LEDGER-SOURCE: "[[math a TYPE=\"align\"]]\nx\n[[/math]]"
REPROBE REASON: REFCORR9 R9-C rewrote the exact-uppercase branch into a general case-variant scan, so the mechanism for this confirmed source changed and must be re-measured.
MECHANISM: the variant scan at lines 97-105 sees TYPE (strtolower equals type, key not exactly type) and selects equation, matching live's fossil fallback.
CONFIRM: reference token type align or a non-equation rule-level value while live serves the equation envelope.
CLEAR: reference token type equation and live equation envelope, ignoring the harness PNG surface.

### R5CP2-12 | Math | mixed-case tYpE attribute name (exact 5b-confirmed shape)
LEDGER-SOURCE: "[[math a tYpE=\"align\"]]\nx\n[[/math]]"
REPROBE REASON: REFCORR9 added this exact spelling to the general variant class; changed mechanism, in scope.
MECHANISM: tYpE is a case variant, so the scan selects equation on the reference side, matching live.
CONFIRM: reference token type align while live serves equation.
CLEAR: reference type equation with live equation envelope.

### R5CP2-13 | Math | title-case Type attribute name (exact 5b-confirmed shape)
LEDGER-SOURCE: "[[math a Type=\"align\"]]\nx\n[[/math]]"
REPROBE REASON: REFCORR9 generalised the NAME-case branch; changed mechanism, in scope.
MECHANISM: Type is a case variant, so the reference selects equation, matching live.
CONFIRM: reference type align while live serves equation.
CLEAR: reference type equation with live equation envelope.

### R5CP2-14 | Math | mixed-case TyPe attribute name (fresh variant sibling)
LEDGER-SOURCE: "[[math a TyPe=\"align\"]]\nx\n[[/math]]"
REPROBE REASON: fresh code-reading sibling: the new scan is over strtolower($key), so a spelling never listed in the 5b ledger (TyPe) must take the same branch; this probes whether the correction is general or was only pinned for the three named spellings.
MECHANISM: TyPe lowercases to type but is not exactly type, so the reference selects equation; live's case-sensitive lookup should miss it and serve equation.
CONFIRM: reference token type align while live serves equation, or vice versa at the rule level.
CLEAR: reference type equation with live equation envelope.

### R5CP2-15 | Math | mixed-case tYpe attribute name (fresh variant sibling)
LEDGER-SOURCE: "[[math a tYpe=\"align\"]]\nx\n[[/math]]"
REPROBE REASON: fresh variant sibling of R5CP2-14 that differs only in which letter is capitalized, stressing the strtolower comparison from the other side.
MECHANISM: tYpe is a case variant, so the reference selects equation.
CONFIRM: reference type align while live serves equation.
CLEAR: reference type equation with live equation envelope.

### R5CP2-16 | Math | exact lowercase type plus a case variant (precedence sibling)
LEDGER-SOURCE: "[[math a type=\"gather\" tYpE=\"align\"]]\nx\n[[/math]]"
REPROBE REASON: fresh precedence shape created by the general variant scan: the exact key and a variant now both have meaning, so which one wins is an ordering question the two-branch mechanism raises.
MECHANISM: lines 104-105 test array_key_exists('type') first, so the exact lowercase value gather wins and the variant scan is never reached; the reference emits type gather.
CONFIRM: live rule-level type not gather while the reference emits gather, or a different envelope after masking.
CLEAR: reference type gather with a matching live gather envelope.

### R5CP2-17 | Math | exact lowercase type with uppercase value (fresh value sibling)
LEDGER-SOURCE: "[[math a type=\"ALIGN\"]]\nx\n[[/math]]"
REPROBE REASON: fresh code-reading sibling of the REFCORR3 value path that the REFCORR9 rewrite left untouched: the exact key must keep its value verbatim for the renderer to reject the uppercase spelling, so the rewrite must not have folded value case.
MECHANISM: the exact key is present, so the reference keeps value ALIGN verbatim and the render rejects it with an error block; the counter still advances.
CONFIRM: a rule-level value divergence beyond the harness PNG error-block envelope.
CLEAR: reference value ALIGN with the matching live error surface after masking.

### R5CP2-18 | Url | uppercase HTTP scheme in a described URL (fresh code-reading shape)
LEDGER-SOURCE: "[HTTP://example.com Label]"
REPROBE REASON: fresh code-reading shape, not a round-5b re-probe: 5b R5BP2-15 measured the bare uppercase form, but processDescr builds a separate scheme regex at Url.php line 154 with no case-insensitive flag, so the described form is a distinct, unmeasured sibling of the corrected-case neighborhood.
MECHANISM: the scheme list is preg_quoted into a case-sensitive regex, so the reference leaves `[HTTP://example.com Label]` literal and forms no described URL token; a live case-insensitive scheme match would emit an anchor.
CONFIRM: live `<a href="HTTP://example.com">` anchor where the reference is literal.
CLEAR: literal text on both sides after masking.

### R5CP2-19 | Interwiki | digit-initial standalone page name (fresh code-reading shape)
LEDGER-SOURCE: "[wiki:123]"
REPROBE REASON: fresh code-reading shape from Interwiki.php line 40: the page pattern `[A-Za-z0-9_\/=&~#.:;\-\+]+` admits a digit-initial page while the neighbouring Freelink anchor path is alpha-initial, so the boundary is worth measuring on the corrected inline seam.
MECHANISM: the reference forms an Interwiki token for site wiki page 123; if the site is not configured, process() returns the match literal, so the decisive value is whether live keeps or links the bracket.
CONFIRM: a rule-level difference in whether the bracket forms a link after masking.
CLEAR: identical literal or identical link bytes on both sides.

### R5CP2-20 | Code | uppercase closer on a code block (fresh sibling of the corrected closer family)
LEDGER-SOURCE: "[[code]]x[[/CODE]]"
REPROBE REASON: fresh code-reading sibling in the code/math family: Code.php line 53 uses an `msi` regex, so the uppercase closer is admitted at parse time on the reference, and the REFCORR9 uppercase-closer correction on the Module seam makes the analogous Code spelling worth measuring.
MECHANISM: the case-insensitive closer matches, so the reference forms a Code token with body x; live might require the exact lowercase closer and leave the opener literal.
CONFIRM: live leaves `[[code]]x[[/CODE]]` literal while the reference forms a code block, or a different rule-level body after masking.
CLEAR: both form the same code block after masking.

## End of ledger

No further suspicion may be probed unless a new row with its own CONFIRM/CLEAR pair is appended here before the probe.
