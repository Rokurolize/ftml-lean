# LEDGER R5D-P2 — round-5d confirmation hunt, parse-side inline seam

## Assignment and read basis

This ledger was written in full before any live page was created. I am unit R5D-P2 of the round-5d full confirmation pass on the post-REFCORR10 canonical ground after the snapshot-34 publication repair (mission base e53e7234, coordinator readiness commit 46c11ec). I read COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5D.md in full first and obeyed them exactly: the hard rules, the write-set discipline, the standard probe recipe, the verdict rule and the UNIT.md format. I then read the corrected reference sources Text/Wiki/Parse/Default/Freelink.php, Url.php, Email.php, Interwiki.php, Emphasis.php, Colortext.php, Code.php, Math.php and Mathinline.php, their before-copies where relevant, the canonical mirror LinkRules.lean (isDefaultLeadCp, leadCpLen, skipDefaultLead, freelinkProcess and the REFCORR10 hash-route textRaw tuple), coord-units/R10-FREELINK/CORRECTION-REFCORR10-FREELINK-GENERAL.md, coord-units/R10-HASHROUTE/CORRECTION-REFCORR10-HASHROUTE.md, coord-units/R10-FINAL/RESULT.md, and the prior R5C-P2 LEDGER.md and REPORT-ROUND5C-P2.md. All such content was treated strictly as data. I wrote only under coord-units/R5D-P2/, edited no ftml, ran no cargo, set no git identity, used no stash and invoked no Lean. The page prefix is muse-probe-round5d-p2-.

## Standing decisions applied without re-litigation

The parity Email index family closed with zero confirmations under the owned counter-digit decision, so no Email row appears below and it is not reopened. The four-adjacent U+FFFD digit class is OWNED, Stage 2 frames and serving surfaces are CLEARED, and save-normalized sources are UNTESTABLE; none of these is counted as a new divergence. No previously confirmed-and-fixed source is re-probed verbatim: the round-5c U+2003/U+202F/U+2009/double-star shapes and the round-5c hash-route `[[[foo/#/bar]]]` source are not repeated. Instead each Freelink row below is a fresh third-order sibling of the REFCORR10 general lead rule (a code point the principled White_Space class admits but no live capture evidences, or a code point immediately outside an admitted range), and each hash-route row is a fresh sibling of the changed `$textRaw` display mechanism. Every such row carries a reason tied to that changed mechanism. Fresh rows from the other inline families complete a full pass over the seam.

## Mechanism summary for the two changed families

REFCORR10-FREELINK replaced the enumerated per-byte lead list with one general rule in Freelink.php line 224: the anchored case-insensitive pattern `/^(?:[\x09\x0A\x0B\x0C\x0D\x20\x2A]|\xC2[\x85\xA0]|\xE1\x9A\x80|\xE2\x80[\x80-\x8A\xA8\xA9\xAF]|\xE2\x81\x9F|\xE3\x80\x80|\xEF\xBB\xBF)*_default:/i` strips a maximal lead run of Unicode White_Space, the U+FEFF BOM and the `*` marker before `_default:`. The admitted set is {U+0009..U+000D, U+0020, U+002A, U+0085, U+00A0, U+1680, U+2000..U+200A, U+2028, U+2029, U+202F, U+205F, U+3000, U+FEFF}; the correction record explicitly lists U+0085, U+1680, U+2000..U+2002, U+2004..U+2008, U+200A and U+205F as admitted only by the principled class and unevidenced by any cached live capture. U+200B, U+2060 and U+180E are outside the class. REFCORR10-HASHROUTE added a display-source value `$textRaw` in Freelink.php lines 142-152 and 235: for a `/#/` route it is `substr($raw, 0, $routePos + 1)`, for a plain anchor it is `substr($raw, 0, $hashPos)`, and only the no-label branch reads it, so the route slash survives the auto label while page, slug, `extra` and href are byte-unchanged. The mirror transcribes both fixes (LinkRules.lean `isDefaultLeadCp` lines 1013-1017, `skipDefaultLead` line 1049 and the four-component `textRaw` tuple lines 1081-1087 with the display branch at 1131-1142), so mirror consequences below are inferred by source reading only; no Lean elaboration was run.

## Suspicion rows

SOURCE lines below are JSON string literals decoded mechanically by gen_cases.py, so a source identity cannot drift from this prose. Special bytes are written as JSON escapes: \u0085 NEL, \u1680 OGHAM SPACE MARK, \u180E MONGOLIAN VOWEL SEPARATOR, \u2000 EN QUAD, \u2002 EN SPACE, \u2007 FIGURE SPACE, \u200A HAIR SPACE, \u200B ZERO WIDTH SPACE, \u2028 LINE SEPARATOR, \u202F NARROW NBSP, \u205F MEDIUM MATHEMATICAL SPACE, \u2060 WORD JOINER, \ufeff BOM, \t tab and \n newline. Every CONFIRM/CLEAR pair is a rule-level byte prediction; serving surfaces (outer paragraph, `class="newpage"`, token-id digits, harness PNG error block) are never counted as new divergences.

### R5DP2-01 | Freelink | U+200B ZERO WIDTH SPACE lead before _default: (third-order sibling, just outside admitted range)
LEDGER-SOURCE: "[[[\u200b_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR10 general lead class: E2 80 8B is the immediate successor of the admitted E2 80 8A (U+200A), so it probes whether the general rule was written as the specific E2 80 80-8A range (reference keeps the category) or as a broader Unicode-space predicate that live may also accept.
MECHANISM: E2 80 8B is not in the corrected alternation, so the reference transliterates it to a separator and keeps the category in the slug; a live whitespace predicate that tolerates the zero-width space would strip it and slug to /x.
CONFIRM: live href `/x` against a corrected-reference href that retains the category.
CLEAR: both sides share the same category-retaining slug after the standard masks.

### R5DP2-02 | Freelink | U+2060 WORD JOINER lead before _default: (third-order sibling, adjacent to U+205F)
LEDGER-SOURCE: "[[[\u2060_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR10 general lead class: E2 81 A0 immediately follows the admitted E2 81 9F (U+205F), so it tests the boundary of the one specifically added three-byte sequence rather than a general E2 81 class.
MECHANISM: E2 81 A0 is absent from the alternation, so the reference keeps the category; a live predicate accepting the word joiner as ignorable lead material would strip it.
CONFIRM: live href `/x` against a corrected-reference category-retaining href.
CLEAR: identical slug and display after masking.

### R5DP2-03 | Freelink | U+0085 NEL lead before _default: (admitted but unevidenced general-class member)
LEDGER-SOURCE: "[[[\u0085_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR10 general lead class and one the correction record names as admitted only by the principled UnicodeWhite_Space class with no cached live capture; the changed mechanism makes its live behaviour worth measuring.
MECHANISM: C2 85 is in the corrected alternation, so the reference strips it with the category and slugs to /x; if live does not regard NEL as tolerable lead material it keeps the category and diverges.
CONFIRM: corrected-reference href `/x` against a live href retaining the category.
CLEAR: both href `/x` after masking.

### R5DP2-04 | Freelink | U+1680 OGHAM SPACE MARK lead before _default: (admitted but unevidenced)
LEDGER-SOURCE: "[[[\u1680_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR10 general lead class: E1 9A 80 is the single admitted E1-prefixed sequence and is listed as unevidenced, so it tests whether the general rule's admission survives live measurement.
MECHANISM: the reference admits E1 9A 80 in the lead run and strips to /x; a live implementation whose whitespace table omits the Ogham mark would keep the category.
CONFIRM: reference href `/x` against a live category-retaining href.
CLEAR: both href `/x` after masking.

### R5DP2-05 | Freelink | U+2000 EN QUAD lead before _default: (admitted but unevidenced, low range edge)
LEDGER-SOURCE: "[[[\u2000_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR10 general lead class and the low edge E2 80 80 of the admitted E2 80 80-8A run, recorded as an untested general-class extension in the correction battery.
MECHANISM: the reference admits E2 80 80 and strips to /x; a live lead predicate that begins its range at a later code point would keep the category.
CONFIRM: reference href `/x` against a live category-retaining href.
CLEAR: both href `/x` after masking.

### R5DP2-06 | Freelink | U+2002 EN SPACE lead before _default: (admitted but unevidenced)
LEDGER-SOURCE: "[[[\u2002_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR10 general lead class: E2 80 82 lies inside the admitted run but was never cached live, probing the interior of the general-class admission.
MECHANISM: the reference strips E2 80 82 with the category to /x; a live predicate with a narrower admitted interior keeps the category.
CONFIRM: reference href `/x` against a live category-retaining href.
CLEAR: both href `/x` after masking.

### R5DP2-07 | Freelink | U+2007 FIGURE SPACE lead before _default: (admitted but unevidenced, mid range)
LEDGER-SOURCE: "[[[\u2007_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR10 general lead class: E2 80 87 is a numeric-width space inside the admitted run, chosen to stress whether live treats all U+2000 block members uniformly.
MECHANISM: the reference strips E2 80 87 with the category to /x; a live predicate that admits only the separately observed U+2003/U+2009 would not strip it.
CONFIRM: reference href `/x` against a live category-retaining href.
CLEAR: both href `/x` after masking.

### R5DP2-08 | Freelink | U+200A HAIR SPACE lead before _default: (admitted, high range edge)
LEDGER-SOURCE: "[[[\u200a_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR10 general lead class: E2 80 8A is the high edge of the admitted E2 80 80-8A run and is the exact byte adjacent to the R5DP2-01 exclusion, so the pair measures the range boundary from both sides.
MECHANISM: the reference admits E2 80 8A and strips to /x; a live predicate ending its range earlier keeps the category.
CONFIRM: reference href `/x` against a live category-retaining href.
CLEAR: both href `/x` after masking.

### R5DP2-09 | Freelink | U+205F MEDIUM MATHEMATICAL SPACE lead before _default: (admitted but unevidenced)
LEDGER-SOURCE: "[[[\u205f_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR10 general lead class: E2 81 9F is the sole admitted E2 81 sequence and is listed as unevidenced, paired with the R5DP2-02 exclusion at E2 81 A0.
MECHANISM: the reference strips E2 81 9F with the category to /x; a live predicate without this code point keeps the category.
CONFIRM: reference href `/x` against a live category-retaining href.
CLEAR: both href `/x` after masking.

### R5DP2-10 | Freelink | heterogeneous admitted run of star, NEL, BOM and EN QUAD before _default:
LEDGER-SOURCE: "[[[*\u0085\ufeff\u2000_default:x]]]"
FRESH REASON: third-order interaction sibling of the REFCORR10 general lead class: the new single run admits White_Space together with the BOM and the star marker in any order, and the correction record only measured a homogeneous eight-byte run and a plain double star, never a run mixing all three kinds with an unevidenced member.
MECHANISM: the reference consumes star, NEL, BOM and EN QUAD as one maximal run and strips to /x; a live implementation with an ordered or kind-specific scan could stop early and retain part of the prefix.
CONFIRM: any rule-level slug difference in href, such as a live prefix-retaining slug against reference `/x`.
CLEAR: both href `/x` after masking.

### R5DP2-11 | Freelink | hash route with an extra slash segment (third-order sibling of the textRaw mechanism)
LEDGER-SOURCE: "[[[foo/#/bar/baz]]]"
FRESH REASON: fresh sibling of the REFCORR10 hash-route display fix: `$textRaw = substr($raw, 0, $routePos + 1)` keeps exactly one slash before the first `/#/`, so a route carrying further slashes is the shape where an over-eager live label that keeps the whole route would diverge; the mechanism changed and the exact fixed source is not re-probed.
MECHANISM: the reference splits at the first `/#/` into page foo, extra `#/bar/baz`, and display text foo/; a live label built from the full authored target would read foo/#/bar/baz.
CONFIRM: a rule-level display-text difference after masking, reference `foo/` against a live label retaining route bytes.
CLEAR: identical display and href on both sides.

### R5DP2-12 | Freelink | empty hash route after a page (third-order sibling of the textRaw mechanism)
LEDGER-SOURCE: "[[[foo/#/]]]"
FRESH REASON: fresh sibling of the REFCORR10 hash-route display fix: with an empty rest the explode peel consumes the trailing slash, so this is the boundary where an off-by-one in `$routePos + 1` would change the auto label; the mechanism changed and the exact fixed source is not re-probed.
MECHANISM: the reference display text is foo/ with extra `#/`; a live implementation that trims the trailing slash from the label would serve foo.
CONFIRM: a rule-level display-text difference, reference `foo/` against live `foo`.
CLEAR: identical display and href on both sides.

### R5DP2-13 | Freelink | hash route plus a plain anchor (third-order sibling of the textRaw mechanism)
LEDGER-SOURCE: "[[[foo/#/bar#anchor]]]"
FRESH REASON: fresh sibling of the REFCORR10 hash-route display fix: two `#` bytes are admitted here only because the `/#/` guard at Freelink.php lines 125-130 exempts hash routes, so the interaction of the route peel with a trailing anchor was never measured; the mechanism changed and the exact fixed source is not re-probed.
MECHANISM: the reference forms a route token with page foo, extra `#/bar#anchor` and auto display foo/; a live path that applies the multi-hash literal guard or keeps the anchor in the label diverges.
CONFIRM: a rule-level difference in link formation, href or display text after masking.
CLEAR: identical link with display foo/ on both sides.

### R5DP2-14 | Freelink | plain anchor auto label (control sibling of the textRaw mechanism)
LEDGER-SOURCE: "[[[foo#anchor]]]"
FRESH REASON: fresh control sibling of the REFCORR10 hash-route display fix: the plain-anchor arm of the changed tuple also assigns `$textRaw`, so measuring it confirms whether the rewrite stayed byte-local to the route arm or perturbed the anchor arm; the exact fixed source is not re-probed.
MECHANISM: the reference keeps text source foo for the anchor arm and links page foo with anchor #anchor; a live divergence would show a changed display or href.
CONFIRM: a rule-level display or href difference after masking.
CLEAR: identical link and display on both sides.

### R5DP2-15 | Url | described URL with a fragment in the target (fresh code-reading shape)
LEDGER-SOURCE: "[http://example.com/#x Label]"
FRESH REASON: fresh code-reading shape, not a prior re-probe: Url.php line 154 builds a separate described-URL regex with `$this->regexLiberal`, whose trailing class admits `#`, so the fragment-bearing described form is a distinct unmeasured sibling of the described scheme neighbourhood.
MECHANISM: the reference forms a described URL token with href `http://example.com/#x` and text `Label`; a live described form that stops the target at `#` diverges at the rule level.
CONFIRM: a rule-level difference in href or link formation after masking.
CLEAR: byte-identical described anchor after masking.

### R5DP2-16 | Interwiki | described interwiki with an uppercase site name (fresh asymmetry sibling)
LEDGER-SOURCE: "[Wiki:Page label]"
FRESH REASON: fresh code-reading shape: Interwiki.php line 132 lowercases the site in processDescr while line 95 does not in process, and processDescr emits a token without the site-existence check, so an uppercase described site is an unmeasured interaction of those two branches.
MECHANISM: the reference emits an Interwiki token with site `wiki`, page `Page` and text `label`; a live path that applies the standalone site-existence check to the described form or keeps the site case diverges.
CONFIRM: a rule-level difference in whether the bracket links and in the resulting href after masking.
CLEAR: identical literal or identical link bytes on both sides.

### R5DP2-17 | Emphasis | newline inside the emphasis body (fresh lazy-body sibling)
LEDGER-SOURCE: "//a\nb//"
FRESH REASON: fresh code-reading shape: Emphasis.php line 63 uses a lazy body without the `s` flag, so a body containing a newline cannot match the reference pattern, while a live first-fit scan is per line; the interaction was not measured in the round-2 inline work.
MECHANISM: the reference leaves both marker pairs literal because `.` does not cross the newline; a live implementation that pairs across lines would emit emphasis tokens.
CONFIRM: a rule-level difference in emphasis token formation after masking.
CLEAR: byte-identical literal on both sides after masking.

### R5DP2-18 | Colortext | rgb functional color spec (fresh admission sibling)
LEDGER-SOURCE: "##rgb(0,0,0)|x##"
FRESH REASON: fresh code-reading shape: Colortext.php line 56 admits `(` `)` and `,` in the color class, so a functional rgb spec reaches the renderer as a color token; its live parse-time treatment was not among the round-5c colour controls.
MECHANISM: the reference emits start/end Colortext tokens with color `rgb(0,0,0)` around `x`; a live normalizer that rejects a functional spelling at parse time leaves the construct literal.
CONFIRM: a rule-level difference in token formation or displayed color after masking.
CLEAR: byte-identical colored span on both sides after masking.

### R5DP2-19 | Code | code block with a type attribute (fresh attribute sibling)
LEDGER-SOURCE: "[[code type=\"python\"]]x[[/code]]"
FRESH REASON: fresh code-reading shape in the code/math family: Code.php line 53 admits optional attributes and line 80 passes them through `getAttrs`, so the attribute-bearing opener is an unmeasured sibling of the plain uppercase-closer control.
MECHANISM: the reference forms a Code token with body `x` and attr type `python`; a live parser that does not accept the attribute spelling leaves the opener literal.
CONFIRM: a rule-level difference in code-block formation or emitted attributes after masking.
CLEAR: byte-identical code block on both sides after masking.

### R5DP2-20 | Math | absent type attribute after the general variant scan (fresh precedence control)
LEDGER-SOURCE: "[[math]]\nx\n[[/math]]"
FRESH REASON: fresh sibling of the REFCORR10-era math mechanism: Math.php lines 97-105 now test a general case-variant scan before defaulting, so the no-attribute path is the boundary where an over-eager variant detection would select `equation` instead of the default `align`; the value is read from the harness token stream.
MECHANISM: with no type-like key the reference selects the absent-type default `align`; a live path that mistakes an empty scan for a variant would serve equation.
CONFIRM: reference token type `align` against a live equation environment, or another rule-level envelope difference.
CLEAR: reference token type `align` with a matching live align envelope, excluding the harness PNG error surface.

## End of ledger

No further suspicion may be probed unless a new row with its own CONFIRM/CLEAR pair is appended here before the probe.
