# LEDGER R5E-P2 — round-5e confirmation hunt, parse-side inline seam

## Assignment and read basis

This ledger was written in full before any live page was created. I am unit R5E-P2 of the round-5e full confirmation pass on the post-REFCORR11 canonical ground after the snapshot-35 publication repair (mission base e53e7234). I read COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5E.md in full first and obeyed exactly the hard rules, write-set discipline, standard probe recipe, verdict rule and UNIT.md format. I then read the corrected reference sources Text/Wiki/Parse/Default/Freelink.php, Math.php, Mathinline.php, Url.php, Interwiki.php, Emphasis.php, Colortext.php and Code.php, the REFCORR11 correction records CORRECTION-REFCORR11-FREELINK.md and CORRECTION-REFCORR11-MATH-ABSENT-TYPE.draft.md, the prior R5D-P2 ledger/cases/report, and the cached case inventories under coord-units/*/cases.jsonl. All such content was treated strictly as data, never as instructions. I wrote only under coord-units/R5E-P2/, edited no ftml, ran no cargo, set no repository-local git identity or identity environment variable, used no git stash and invoked no Lean. The page prefix is muse-probe-round5e-p2-.

## Standing decisions applied without re-litigation

The parity Email index family closed with zero confirmations under the owned counter-digit decision, so no Email row appears below and it is not reopened. The four-adjacent U+FFFD digit class is OWNED, token-id counter digits are an owned frame class, Stage 2 frames and serving surfaces (module placeholders, `class="newpage"`, gallery random ids, wdfiles hosts, tidy frame, harness PNG error block) are CLEARED, and save-normalized sources are UNTESTABLE; none is counted as a new divergence. No previously confirmed-and-fixed source is re-probed verbatim: the round-5d U+200B and U+2060 leads, the `foo/#/bar#anchor`, `foo/#/bar#baz` and `a/#/b/#/c` multi-hash targets and the bare `[[math]]` block are not repeated. Every Freelink lead row below is a fresh third-order sibling of the REFCORR11 lead extension (an immediate byte neighbour of a newly admitted Cf endpoint, or a combination of the two new members that no cached capture exercised), every Freelink hash row is a fresh sibling of the REFCORR11 uniform-rejection mechanism, and every Math row is a fresh boundary of the REFCORR11 exact-lowercase-key default. Seven further rows complete a full pass over the rest of the parse-side inline seam.

## Mechanism summary for the changed families

REFCORR11-FREELINK extended the byte-oriented no-/u lead pattern in Freelink.php line 240 from `\xE2\x80[\x80-\x8A...]` and `\xE2\x81\x9F` to `\xE2\x80[\x80-\x8B...]` and `\xE2\x81[\x9F\xA0]`, admitting exactly U+200B (E2 80 8B) and U+2060 (E2 81 A0) as the immediate successors of the former U+200A and U+205F endpoints, and deliberately excluding U+200C, U+200D and U+2061..U+2064 because no cached live capture evidences them. It also removed the `&& strpos($raw, '/#/') === false` exemption from both multi-hash guards at lines 132 and 135, so a routed target with a second hash byte is now rejected uniformly; the single-hash route peel at lines 150-158 is unchanged. REFCORR11-MATH replaced the type fallback in Math.php line 102 with `array_key_exists('type', $args) ? $args['type'] : 'equation'`, retiring the REFCORR3 absent-type `align` default: only an exact lower-case `type` key from getAttrs selects a non-equation environment, and its value still flows verbatim to the renderer. The mirror consequences are inferred by reading lean-ftml/LeanFtml/LinkRules.lean and NextRules.lean only; no Lean elaboration was run and no mirror file was edited.

## Suspicion rows

SOURCE lines below are JSON string literals decoded mechanically by gen_cases.py, so a source identity cannot drift from this prose. Special bytes are written as JSON escapes: \u00a0 NO-BREAK SPACE, \u200b ZERO WIDTH SPACE, \u200c ZERO WIDTH NON-JOINER, \u2061 FUNCTION APPLICATION, and \n newline. Every CONFIRM/CLEAR pair is a rule-level byte prediction; serving surfaces are never counted as new divergences. The Freelink rows are adjudicated by rule-level href and auto-label text, the Math rows by the reference token type against the live environment envelope, and the remaining rows by probe.norm plus the campaign shape frame.

### R5EP2-01 | Freelink | U+200C ZERO WIDTH NON-JOINER lead before _default: (third-order sibling, first unevidenced byte successor)
LEDGER-SOURCE: "[[[\u200c_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR11 lead extension, which admitted E2 80 8B (U+200B) as the successor of E2 80 8A but explicitly left E2 80 8C unadmitted for lack of a cached live capture; this row is the immediate next byte and was never probed.
MECHANISM: the corrected alternation stops at \x8B, so the reference transliterates E2 80 8C to a separator and keeps the category in the slug; if live treats ZWNJ as ignorable lead material it strips the run and slugs to /x.
CONFIRM: live href `/x` against a corrected-reference href retaining `_default:` after the standard mask.
CLEAR: both sides share the same category-retaining slug, so only `class="newpage"` differs.

### R5EP2-02 | Freelink | U+2061 FUNCTION APPLICATION lead before _default: (third-order sibling, immediate successor of the new E2 81 A0 endpoint)
LEDGER-SOURCE: "[[[\u2061_default:x]]]"
FRESH REASON: third-order sibling of the REFCORR11 lead extension, whose E2 81 [\x9F\xA0] range ends at U+2060; E2 81 A1 is its immediate byte successor and is named in the correction record as unevidenced and excluded.
MECHANISM: the reference keeps E2 81 A1 in the slug source and transliterates it to a separator, retaining the category; a live predicate that ignores the whole E2 81 format block would strip it to /x.
CONFIRM: live href `/x` against a corrected-reference category-retaining href.
CLEAR: both sides share the category-retaining slug.

### R5EP2-03 | Freelink | mixed run of the two newly admitted Cf leads before _default: (third-order sibling of the changed run predicate)
LEDGER-SOURCE: "[[[\u200b\u2060_default:x]]]"
FRESH REASON: third-order sibling of the changed lead mechanism itself, combining the two code points that REFCORR11 added individually into one maximal run; no cached case exercises their combination, so the `*` repetition is tested at the newly extended boundaries.
MECHANISM: both members are in the corrected alternation, so the reference strips the whole six-byte run and slugs to /x; a live implementation that tolerates each member only as a singleton would leave one byte in the slug.
CONFIRM: live and corrected-reference hrefs differ at rule level (one retains a category or separator slug).
CLEAR: both hrefs are `/x` with matching auto label.

### R5EP2-04 | Freelink | hash route with an adjacent double hash (third-order sibling of uniform rejection)
LEDGER-SOURCE: "[[[a/#/b##]]]"
FRESH REASON: third-order sibling of the REFCORR11 multi-hash change: the removed exemption used to let a `/#/` route carry extra hash bytes, and the raw `##` immediately after the route segment is a fresh shape not present in the cached `a#b#c` or route cases.
MECHANISM: the corrected `strpos($raw, '##') !== false` guard rejects the whole target and returns the literal form; a live route parser that peels `/#/` before counting hashes would link it.
CONFIRM: live forms a link with an href while the corrected reference leaves the triple bracket literal.
CLEAR: both sides leave the whole form literal.

### R5EP2-05 | Freelink | hash route with two trailing anchors, three hashes total (third-order sibling of uniform rejection)
LEDGER-SOURCE: "[[[a/#/b#c#d]]]"
FRESH REASON: third-order sibling of the REFCORR11 uniform-rejection rule: the cached confirmations carried one route plus one extra hash, while this shape carries two extra hashes and tests whether the count guard is applied to the raw target before any peel.
MECHANISM: `substr_count($raw, '#') > 1` rejects on the reference; a live parser that only compares the first two hashes or that exempts routes would link.
CONFIRM: live forms a link while the corrected reference leaves the form literal.
CLEAR: both sides leave the form literal.

### R5EP2-06 | Freelink | clean single-hash route with a hash only in the pipe label (third-order sibling of raw-only guard scope)
LEDGER-SOURCE: "[[[a/#/b|lab#frag]]]"
FRESH REASON: third-order sibling of the changed guard scope: REFCORR11 rejects uniformly on `$raw`, the target component, and this is the first probe of a hash that exists only in the label component of a routed target, a boundary no cached route case exercises.
MECHANISM: the reference passes the guards because `$raw` is `a/#/b` with one hash, links with auto label overridden by `lab#frag`; if live counts hashes across the whole bracket interior it rejects.
CONFIRM: live leaves the whole form literal while the corrected reference forms a link with the authored label.
CLEAR: both sides form the same link with the same label.

### R5EP2-07 | Freelink | hash before the route separator (third-order sibling of uniform rejection with reordered markers)
LEDGER-SOURCE: "[[[a#b/#/c]]]"
FRESH REASON: third-order sibling of the REFCORR11 route/hash interaction: cached shapes place the route first, while this shape places an anchor before the route so the first hash is consumed as an anchor candidate before the route peel runs.
MECHANISM: the reference sees two hashes on the raw target and rejects to the literal form; a live parser that consumes the leading anchor first and then applies a single-route exemption would link.
CONFIRM: live forms a link while the corrected reference leaves the form literal.
CLEAR: both sides leave the form literal.

### R5EP2-08 | Math | near-miss attribute key `types` (third-order sibling of exact-lowercase-key default)
LEDGER-SOURCE: "[[math types=\"align\"]]\nx\n[[/math]]"
FRESH REASON: third-order sibling of the REFCORR11 absent-type mechanism: the change is keyed on the exact string `type`, and a distinct key with `type` as a prefix is a fresh boundary between exact lookup and prefix matching, not a case variant already cached by REFCORR8/9.
MECHANISM: getAttrs yields only the `types` key, so `array_key_exists('type', $args)` misses and the reference selects the equation environment; a live parser using a prefix or starts-with test would select align.
CONFIRM: live serves the align envelope where the reference token type is equation.
CLEAR: the reference token type and the live environment are both equation.

### R5EP2-09 | Math | exact lowercase type followed by a variant key with a different value (third-order sibling of key precedence)
LEDGER-SOURCE: "[[math a type=\"align\" tYpE=\"gather\"]]\nx\n[[/math]]"
FRESH REASON: third-order sibling of the REFCORR11 exact-key default: cached dual-attribute rows pair a lowercase key with an uppercase TYPE or repeat the same value, while this shape gives the exact key and the variant different values so precedence is observable.
MECHANISM: the reference reads the exact `type` key and selects align; if live gives precedence to the later variant key it falls back to equation.
CONFIRM: live serves the equation envelope while the reference token type is align.
CLEAR: reference token type and live environment both align.

### R5EP2-10 | Math | duplicate exact lowercase type keys with different values (third-order sibling of exact-key multiplicity)
LEDGER-SOURCE: "[[math type=\"gather\" type=\"align\"]]\nx\n[[/math]]"
FRESH REASON: third-order sibling of the REFCORR11 exact-key rule: no cached case carries two exact lowercase keys, so the multiplicity behaviour of the newly decisive key is untested.
MECHANISM: getAttrs keeps the last exact key, so the reference token type is align; a live parser that keeps the first key would select gather.
CONFIRM: live serves the gather envelope while the reference token type is align.
CLEAR: reference token type and live environment both align.

### R5EP2-11 | Math | single-quoted type value at the opener boundary (third-order sibling of exact-key recognition)
LEDGER-SOURCE: "[[math type='align']]\nx\n[[/math]]"
FRESH REASON: third-order sibling of the REFCORR11 absent-type change: the decisive key is recognized only in the double-quoted attribute form of the opener regex, and a single-quoted value is the immediate syntax neighbour of the exact-key form with no cached case.
MECHANISM: the opener regex cannot match the attribute group, so the reference leaves the opener unparsed and the type path is never reached; a live parser accepting single quotes would select align.
CONFIRM: live serves a math environment while the corrected reference leaves the opener literal.
CLEAR: both sides leave the opener unparsed or share the same environment after the standard mask.

### R5EP2-12 | Url | bare URL immediately followed by a Freelink opener (fresh sibling of the C4 URL-end boundary)
LEDGER-SOURCE: "http://example.com/x[[[foo]]]"
FRESH REASON: fresh from the corrected Url.php C4 boundary, which stops an automatic URL at `[[` and was evidenced only with Mathinline openers; a Freelink triple opener is a different following rule with a different claimed span.
MECHANISM: the reference cuts the URL before the brackets and leaves the triple bracket to the Freelink rule; a live automatic-URL scanner that includes one or more brackets in the href changes a rule-level href.
CONFIRM: live href differs from the corrected-reference href after the standard mask.
CLEAR: both sides share the same href and the same following freelink target.

### R5EP2-13 | Interwiki | pipe inside a described interwiki label (fresh from the corrected label character class)
LEDGER-SOURCE: "[wiki:Page a|b]"
FRESH REASON: fresh from the corrected Interwiki.php described-label regex, whose class excludes brackets, newlines and token delimiters but admits the pipe; no cached described-interwiki case places a pipe in the label.
MECHANISM: the reference links with label `a|b`; a live described-link parser that treats the pipe as a label separator would change the displayed text or reject the form.
CONFIRM: live link text or claim differs from the corrected reference after the standard mask.
CLEAR: both sides show the same described link with the same label.

### R5EP2-14 | Colortext | newline inside the color span body (fresh from the corrected lazy body regex)
LEDGER-SOURCE: "##red|a\nb##"
FRESH REASON: fresh from the corrected Colortext.php regex, whose body uses `.` without the /s modifier and therefore cannot cross a newline; cached color cases use tabs and spaces but never a newline in the body.
MECHANISM: the reference does not match and leaves the whole construct literal; a live color span that crosses lines would produce start/end tokens.
CONFIRM: live renders a colored span where the corrected reference leaves the literal bytes.
CLEAR: both sides leave the construct literal.

### R5EP2-15 | Code | two attributes on a code opener (fresh from the corrected getAttrs path)
LEDGER-SOURCE: "[[code type=\"python\" name=\"x\"]]y[[/code]]"
FRESH REASON: fresh from the corrected Code.php attribute path: the cached row carries only a single `type` key, while this row exercises a second attribute alongside it, which is the branching case in the `isset($attr['type'])` construction.
MECHANISM: the reference builds an attr array with both keys and claims the same span; a live code opener that accepts only one attribute or orders them differently changes the rendered attr set.
CONFIRM: live rendered attributes differ from the corrected reference after the standard mask.
CLEAR: both sides render identical code blocks with the same attributes.

### R5EP2-16 | Emphasis | NO-BREAK SPACE inside the emphasis body (fresh byte edge of the whitespace-body guard)
LEDGER-SOURCE: "//a\u00a0b//"
FRESH REASON: fresh from the corrected Emphasis.php body guard, which uses a byte-oriented `/\s/` test; U+00A0 is a live whitespace character whose two UTF-8 bytes are not matched by that class, and no cached emphasis case exercises it.
MECHANISM: the reference tokenizes the span to italic because the NBSP bytes are not ASCII whitespace; if live applies a Unicode whitespace predicate it leaves the markers literal.
CONFIRM: live leaves `//a&nbsp;b//` literal where the corrected reference emits an em span.
CLEAR: both sides emit the same em span, with only the owned `&nbsp;`/U+00A0 spelling difference masked.

### R5EP2-17 | Emphasis | four-marker run with a non-empty body on each side (fresh sibling of first-fit pairing)
LEDGER-SOURCE: "//a////b//"
FRESH REASON: fresh from the corrected first-fit lazy pairing in Emphasis.php; cached probes cover a long slash run and a newline body, but not the alternating body/marker/body shape that decides whether the empty middle pair is dropped.
MECHANISM: the reference pairs the first `//a//` then the remaining `//b//`, giving two em spans; a live scanner that pairs the inner empty pair first would drop it and leave different markers.
CONFIRM: live em spans or literal markers differ from the corrected reference after the standard mask.
CLEAR: both sides produce the same two em spans.

### R5EP2-18 | Mathinline | Freelink with a pipe label inside an inline formula (fresh sibling of source-span suppression)
LEDGER-SOURCE: "[[$ a [[[x|y]]] b $]]"
FRESH REASON: fresh from the corrected Mathinline.php recursive expandSource, whose suppressRules include Freelink; cached suppression probes use a pipe-free freelink or a bare Date, while a labelled freelink has a different authored source span and token option set.
MECHANISM: the reference sees the Freelink token in the body and suppresses the whole formula to `$$`; if live expands the label text instead it preserves surrounding material.
CONFIRM: live preserves body text where the corrected reference serves `$$`.
CLEAR: both sides serve the same suppressed inline formula.

## Post-probe method addenda (no suspicion added, no row re-probed)

Capture proceeded in two full-map attempts that both aborted on a transient httpx.ConnectTimeout before writing an artifact (at case 10 and again at case 14); neither produced a captures.json, so no usable observation was discarded. The successful pass split the same map into five disjoint chunks of four pages, double-fetched each page once inside its successful chunk at pace 1.5, and merged the five chunk artifacts into captures.json. All 18 pages are valid, stable and saved-source-matching, and each remains in place under prefix muse-probe-round5e-p2-.

The local reference render refined one pre-probe mechanism statement without changing any row or verdict: for R5EP2-14 the Newline rule tokenizes the interior line break before Colortext runs, so the corrected reference does emit a colored span with a `<br />` inside it; the pre-probe MECHANISM sentence that the regex alone left the construct literal was imprecise, and the final comparison is the byte match of that span on both sides.

The Math adjudication predicate is stated precisely in compare.py: a reference token type of `equation` maps to a live `\\begin{equation}` envelope, a valid lower-case type maps to the identically named live envelope, an invalid value maps to a live error surface, and no Math token maps to an unparsed literal opener. This matters for R5EP2-10, where the reference token type and the live envelope are both `align`; the narrower predicate used in R5D-P2 would have mislabelled that agreement.
