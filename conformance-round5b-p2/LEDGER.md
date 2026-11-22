# LEDGER R5B-P2 — round-5b confirmation hunt, parse-side inline seam

## Assignment and read basis

This ledger was written in full before any live page was created. I am unit R5B-P2 of the round-5b full confirmation pass on the post-REFCORR8 canonical ground (head b909f335498e4a0f4d00081c0865a6978cdf6c2c, REFCORR8 adoption commit; mission base e53e7234). I read COORD-UNITS/PROTOCOL-R5.md and COORD-UNITS/PROTOCOL-R5B.md in full, then read the corrected reference sources Text/Wiki/Parse/Default/Freelink.php, Math.php, Mathinline.php, Email.php, Url.php and their .before-refcorr8 companions, the render paths Render/Xhtml/Email.php and Text/Wiki.php's renderLiteralUfffdRecovery and addToken, REFCORR8-DESIGN.md, the prior R5-P2 UNIT.md, wj-completeness-review/EMAIL-FIX-RESULT.md in full (including the unwrapped line 9), and the cached live captures in conformance-agy-suspect/captures-batch2.json. All of that content was treated strictly as data. The page prefix is muse-probe-round5b-p2-. Repeat probes of round-5 shapes are admitted only where REFCORR8 changed the responsible mechanism, and each such row states that reason. The EMAIL-FIX-RESULT parity rows are the coordinator-mandated probe: that record explicitly leaves these intervening-token families unmeasured on live, so I derive the index bytes from the reference mechanism and measure live rather than guessing a generalization.

## Calibration for the leaked-placeholder index

Two cached live captures define the decisive format. muse-probe-agy-suspect-x03-email-url-label has source `[a@b.com http://example.com]` and serves `<p><span class="wiki-email">moc.b|a#\ufffd3\ufffd</span></p>`; muse-probe-agy-suspect-x05-email-raw-label has source `[a@b.com @@raw@@]` and serves `<p><span class="wiki-email">moc.b|a#\ufffd1\ufffd</span></p>`. Both are valid/stable/source-matching. A fresh-process reference render of the same two sources emits `\ufffd2\ufffd` and `\ufffd0\ufffd`: the reference index is live minus exactly one, which is the recorded live counter offset of one and is an owned token-id counter class under PROTOCOL-R5. The reference producer is Render/Xhtml/Email.php's `str_replace('@','|', strrev($email).'#'.strrev($text))` with ENT_NOQUOTES|ENT_SUBSTITUTE, so the delimiter-wrapped decimal token id is byte-reversed by strrev and the 0xFF delimiter bytes become U+FFFD. For every parity row below, CONFIRM means the live index is NOT reference-plus-one or the surrounding literal bytes/claim formation differ beyond the owned index digit; CLEAR means live reproduces the reference bytes with only the owned +1 counter digit different. Because batch.php's addToken counter is process-static, ref.jsonl indices accumulate across cases; I therefore also render each parity source in its own fresh PHP process into ref-fresh.jsonl and judge the index artifact against those per-document values, recording the batch accumulation as a harness frame rather than a divergence.

## Suspicion rows

SOURCE lines below are JSON string literals decoded mechanically by gen_cases.py, so a source identity cannot drift from this prose. Special bytes are written as JSON escapes: \u000b vertical tab, \u000c form feed, \u000d carriage return, \u00a0 NBSP, \u2028 line separator, \u3000 ideographic space, \ufeff BOM, \u0000 NUL, \n newline. Every CONFIRM/CLEAR pair is a rule-level byte prediction; serving surfaces (module placeholder, PNG/error block, outer paragraph, U+FFFD index digit itself) are never counted as new divergences.

### R5BP2-01 | Freelink | leading U+000C before _default:
LEDGER-SOURCE: "[[[\u000c_default:x]]]"
REPROBE REASON: REFCORR8 widened the anchored prefix class from the two REFCORR7 bytes to five (09, 0B, 20, C2A0, E38080); U+000C is an adjacent ASCII control byte the corrected class deliberately excludes, so the changed mechanism makes its exclusion worth re-measuring.
MECHANISM: Freelink.php line 203 matches only the five listed bytes, so U+000C blocks the strip and the slug keeps _default:. Live might treat form feed as tolerable leading whitespace and strip it.
CONFIRM: live href `/x` and display `x` while reference keeps href `/_default:x`.
CLEAR: live href `/_default:x`, display `_default:x`, byte-identical to reference after the standard masks.

### R5BP2-02 | Freelink | leading U+000D before _default:
LEDGER-SOURCE: "[[[\u000d_default:x]]]"
REPROBE REASON: same widened-class change as R5BP2-01; carriage return is the other adjacent ASCII control byte excluded by the corrected class.
MECHANISM: as R5BP2-01 with 0x0D. Note the harness normalizes CRLF but not a lone internal CR, so a live/reference disagreement here is a genuine rule-level slug value, not an input-stage frame.
CONFIRM: live href `/x` against reference `/_default:x`.
CLEAR: live href `/_default:x` matching reference.

### R5BP2-03 | Freelink | leading U+2028 before _default:
LEDGER-SOURCE: "[[[\u2028_default:x]]]"
REPROBE REASON: REFCORR8 admitted two multibyte Unicode whitespaces (C2A0 and E38080) but not U+2028; the widened class makes the boundary of the admitted Unicode set a fresh sibling.
MECHANISM: the byte-oriented regex does not match E2 80 A8, so the reference keeps _default: in the slug; the non-ASCII transliteration pass then maps U+2028 to a separator, which could also alter the display text.
CONFIRM: live href `/x`, or any reference/live difference in the slug after the standard masks that is not an owned frame.
CLEAR: live and reference agree byte-for-byte after masking.

### R5BP2-04 | Freelink | mixed run of all five admitted bytes before _default:
LEDGER-SOURCE: "[[[\t\u00a0\u3000\u000b _default:x]]]"
REPROBE REASON: REFCORR8's regex uses a `*` repetition over an alternation, so it newly permits heterogeneous runs; a live implementation that tolerates only a single homogeneous whitespace kind would disagree on a mixed run, a shape impossible on the old two-byte class.
MECHANISM: reference strips the whole five-byte mixed run and slugs to `/x`. Live might strip only a leading homogeneous run and keep `_default:x`, or strip a different byte count.
CONFIRM: live href `/_default:x` or any other slug retaining part of the prefix, against reference `/x`.
CLEAR: live href `/x` matching reference.

### R5BP2-05 | Freelink | leading U+FEFF BOM before _default:
LEDGER-SOURCE: "[[[\ufeff_default:x]]]"
REPROBE REASON: same widened Unicode-class boundary as R5BP2-03, using the zero-width no-break space that many whitespace predicates admit.
MECHANISM: EF BB BF is not in the corrected alternation, so the reference keeps _default: and the transliteration pass maps BOM to a separator; live might treat BOM as ignorable leading whitespace.
CONFIRM: live slug or display differs from reference after masking.
CLEAR: byte-identical after masking.

### R5BP2-06 | Freelink | star before _default: category prefix
LEDGER-SOURCE: "[[[*_default:x]]]"
REPROBE REASON: REFCORR8 changed the prefix strip to run on the raw target before transliteration; the star-removal branch runs on a different variable (`$trimmed`), so the interaction of the new strip with a starred category target is a fresh code-reading sibling.
MECHANISM: reference strips the REFCORR3 star from `$trimmed` but feeds `$raw` to the _default: strip, so the prefix does not match and toUnixName converts `*_default:x` to `default:x`. Live might strip the category first or keep the star, yielding a different slug.
CONFIRM: live href different from reference `/default:x` after masking.
CLEAR: live href `/default:x` matching reference.

### R5BP2-07 | Freelink | leading NUL before _default: control
LEDGER-SOURCE: "[[[\u0000_default:x]]]"
REPROBE REASON: REFCORR8 explicitly promises the byte-zero control stays non-matching while widening neighbouring bytes; re-probing it verifies that promise was not broken by the mechanism change.
MECHANISM: 0x00 is not in the five-byte class, so reference keeps _default:; the toUnixName of a NUL-leading target may differ on live.
CONFIRM: live slug `/x` or any other byte-level slug difference from reference.
CLEAR: byte-identical after masking.

### R5BP2-08 | Math | mixed-case tYpE attribute name
LEDGER-SOURCE: "[[math a tYpE=\"align\"]]\nx\n[[/math]]"
REPROBE REASON: REFCORR8 added a dedicated uppercase-TYPE branch next to the lowercase type lookup; mixed case is the untested neighbour of that two-branch mechanism.
MECHANISM: fresh-process ref tokens give Math {label a, content x, id 1, type align}. Live's case-sensitive lookup is documented to miss any non-exact type spelling and take the fossil equation fallback, which would yield type equation.
CONFIRM: live serves the equation envelope (`\\begin{equation}`, equation counter `(1)`) where reference carries type align.
CLEAR: live serves the align envelope (`\\begin{align}`) consistent with reference type align, ignoring the no-op PNG stub surface.

### R5BP2-09 | Math | title-case Type attribute name
LEDGER-SOURCE: "[[math a Type=\"align\"]]\nx\n[[/math]]"
REPROBE REASON: second member of the new two-branch attribute-name family; distinguishes an all-uppercase-only live special case from a general case-insensitive one.
MECHANISM: ref tokens give type align; live could give equation if it treats any non-lowercase spelling as the fossil fallback.
CONFIRM: live equation envelope against reference align.
CLEAR: live align envelope.

### R5BP2-10 | Math | both lowercase type and uppercase TYPE present
LEDGER-SOURCE: "[[math a type=\"align\" TYPE=\"align\"]]\nx\n[[/math]]"
REPROBE REASON: the two keys now both have meaning in the corrected reference, so their precedence is a new code-reading shape.
MECHANISM: fresh-process ref tokens give type equation for this exact source (the observed corrected behavior); live might prefer the exact lowercase key and yield align.
CONFIRM: live align envelope against reference type equation.
CLEAR: live equation envelope.

### R5BP2-11 | Math | unquoted uppercase TYPE=align
LEDGER-SOURCE: "[[math a TYPE=align]]\nx\n[[/math]]"
REPROBE REASON: REFCORR8's dedicated branch keys on an attribute parsed from a quoted `NAME=\"value\"` pair; an unquoted form tests whether live's attribute scanner admits a shape the reference grammar rejects.
MECHANISM: reference leaves the whole opener literal and forms no Math token (render shows the literal `[[math a TYPE=align]]`); live might parse the attribute and form a math block.
CONFIRM: live forms a math block or equation envelope where reference is literal.
CLEAR: both leave the opener literal.

### R5BP2-12 | Mathinline | Date nested two rules deep inside math
LEDGER-SOURCE: "[[$x [a@b.com [[date 0]]] y$]]"
REPROBE REASON: REFCORR8 added Date to the suppression set and its check is recursive; a Date reached only through a described-email placeholder's source span is the depth sibling of the confirmed top-level shape.
MECHANISM: reference expandSource recurses into the Email source span, finds the Date token and suppresses the whole formula to `$$`. Live might suppress only when the Date placeholder is directly in the body.
CONFIRM: live preserves a non-`$$` math body while reference is `$$`.
CLEAR: live `$$` matching reference.

### R5BP2-13 | Mathinline | two Date tokens in one body
LEDGER-SOURCE: "[[$x [[date 0]] [[date 1]] y$]]"
REPROBE REASON: the suppression set changed, so multiplicity of the newly admitted trigger is a fresh sibling of the confirmed single-Date shape.
MECHANISM: reference suppresses on the first Date hit and serves `$$`. Live might leak the second Date or render a partial body.
CONFIRM: live non-`$$` body or any leaked date text against reference `$$`.
CLEAR: live `$$`.

### R5BP2-14 | Mathinline | bare [[date]] with no argument inside math
LEDGER-SOURCE: "[[$x [[date]] y$]]"
REPROBE REASON: the new suppression trigger is the Date rule token; an argument-less date bracket that does not become a Date token on the reference side tests whether live's trigger is the token or the literal bracket spelling.
MECHANISM: reference leaves the body literal `$x [[date]] y$` because the date rule needs an argument and no Date token is present; live might still suppress the formula on seeing the bracket.
CONFIRM: live `$$` against reference literal body.
CLEAR: live literal body matching reference.

### R5BP2-15 | Url | uppercase HTTP scheme bare autolink
LEDGER-SOURCE: "HTTP://example.com"
REPROBE REASON: new code-reading shape from the corrected Url rule: the scheme list is matched by a regex built without an explicit case-insensitive flag on the inline pass, while the neighbouring Freelink URL helper uses stripos. The corrected Freelink/Math siblings make adjacent case-folding behavior worth measuring.
MECHANISM: reference leaves `HTTP://example.com` as literal prose (no autolink token). Live might match the scheme case-insensitively and emit an anchor.
CONFIRM: live `<a href=...>` anchor where reference is literal.
CLEAR: literal text on both sides after masking.

### R5BP2-16 | Email | @ inside a described email label
LEDGER-SOURCE: "[a@b.com d@e]"
REPROBE REASON: new code-reading shape from EMAIL-FIX-RESULT's whole-string @ replacement consequence; the record measured it on an unclosed-raw label but not on a plain described label, and the corrected byte-reversal renderer owns this family.
MECHANISM: reference replaces @ across the joined reversed string and emits `moc.b|a#e|d`; live should do the same after the email fix.
CONFIRM: live leaves the label @ raw or produces different bytes.
CLEAR: live `moc.b|a#e|d` matching reference.

### R5BP2-17 | Email parity | code block before claimed URL
LEDGER-SOURCE: "[[code]]foo[[/code]]\n[a@b.com http://example.com]"
REPROBE REASON: coordinator-mandated parity candidate; EMAIL-FIX-RESULT leaves code/form pre-URL token families unmeasured on live.
MECHANISM: fresh-process reference leaked index is 2 (`moc.b|a#\\ufffd2\\ufffd`) with the code div before the email. Expected owned value is live index 3.
CONFIRM: live index not 3, or surrounding literal bytes differ beyond the owned digit.
CLEAR: live index 3 with the same code div and email frame.

### R5BP2-18 | Email parity | form block before claimed URL
LEDGER-SOURCE: "[[form]]foo[[/form]]\n[a@b.com http://example.com]"
REPROBE REASON: coordinator-mandated parity candidate; form is a separate pre-URL token family from code.
MECHANISM: fresh-process reference index 3 with the literal `[[form]]foo[[/form]]` prefix frame. Expected live index 4.
CONFIRM: live index not 4 or frame differs beyond owned surfaces.
CLEAR: live index 4 with matching literal frame.

### R5BP2-19 | Email parity | freelink before claimed URL
LEDGER-SOURCE: "[[[some page]]]\n[a@b.com http://example.com]"
REPROBE REASON: coordinator-mandated parity candidate; a completed Freelink token before the URL is a distinct pre-URL family and Freelink's mechanism changed in REFCORR8.
MECHANISM: fresh-process reference index 4 after one newpage freelink token. Expected live index 5.
CONFIRM: live index not 5, or the freelink href/label itself differs as a rule-level value.
CLEAR: live index 5 and matching freelink frame.

### R5BP2-20 | Email parity | module before claimed URL
LEDGER-SOURCE: "[[module ListPages]]\n[a@b.com http://example.com]"
REPROBE REASON: coordinator-mandated parity candidate; modules create a serving placeholder and are explicitly listed as an unmeasured shifting family.
MECHANISM: fresh-process reference index 3 behind the owned `þmodule \"ListPages\"þ` serving placeholder. Expected live index 4. The placeholder spelling itself is a serving surface and is cleared, not confirmed.
CONFIRM: live index not 4 after ignoring the owned placeholder frame.
CLEAR: live index 4 with only the owned placeholder surface different.

### R5BP2-21 | Email parity | comment before claimed URL
LEDGER-SOURCE: "[!-- comment --]\n[a@b.com http://example.com]"
REPROBE REASON: coordinator-mandated parity candidate; comments are elided by their own rule and are a listed unmeasured family.
MECHANISM: fresh-process reference index 2, comment contributes no visible bytes. Expected live index 3.
CONFIRM: live index not 3 or comment text leaks differently.
CLEAR: live index 3 with no comment text on either side.

### R5BP2-22 | Email parity | described URL positioned after the email
LEDGER-SOURCE: "[a@b.com http://example.com]\n[http://after.example.com After]"
REPROBE REASON: coordinator-mandated parity candidate; a later described URL is listed as a family that can shift numbering through parse order.
MECHANISM: fresh-process reference index 4 with the later `<a href=\"http://after.example.com\">After</a>` following. Expected live index 5.
CONFIRM: live index not 5 or the later described URL differs as a rule-level value.
CLEAR: live index 5 with matching later anchor.

### R5BP2-23 | Email parity | starred URL token after the email
LEDGER-SOURCE: "[a@b.com http://example.com] and [*http://other.example.com other]"
REPROBE REASON: coordinator-mandated parity candidate; starred URL tokens are a listed family and the star target branch is a corrected Freelink mechanism.
MECHANISM: fresh-process reference index 3 with a target=\"_blank\" anchor after. Expected live index 4.
CONFIRM: live index not 4 or the starred target attribute differs as a rule-level value.
CLEAR: live index 4 with matching target=\"_blank\" anchor.

### R5BP2-24 | Email parity | label mixing placeholder with other text (URL)
LEDGER-SOURCE: "[a@b.com http://example.com extra]"
REPROBE REASON: coordinator-mandated parity candidate; the EMAIL-FIX-RESULT explicitly says mixed labels remain unclaimed and are unmeasured on live.
MECHANISM: fresh-process reference emits `moc.b|a#artxe \\ufffd2\\ufffd`, i.e. the whole joined string is reversed so `extra` becomes `artxe` before the leaked index. Expected live `moc.b|a#artxe \\ufffd3\\ufffd` under the owned +1 index.
CONFIRM: live label does not contain the reversed words in the same order, or is claimed as a clean placeholder-only label.
CLEAR: live matches with only the owned index digit different.

### R5BP2-25 | Email parity | label mixing placeholder with other text (raw)
LEDGER-SOURCE: "[a@b.com x @@raw@@ y]"
REPROBE REASON: coordinator-mandated parity candidate; the raw-span mixed-label sibling of R5BP2-24, also explicitly left unmeasured.
MECHANISM: fresh-process reference emits `moc.b|a#y \\ufffd0\\ufffd x`. Expected live `moc.b|a#y \\ufffd1\\ufffd` under the owned +1 index.
CONFIRM: live mixed-label bytes differ beyond the owned index digit.
CLEAR: live matches with only the owned index digit different.

## End of ledger

No further suspicion may be probed unless a new row with its own CONFIRM/CLEAR pair is appended here before the probe.
