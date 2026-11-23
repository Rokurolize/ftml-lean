# CANDIDATES R5E-R2 — rule-level confirmations

All five rows share one mechanism: the REFCORR11 lead-class byte ranges in ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php line 240 (mirror lean-ftml/LeanFtml/LinkRules.lean isDefaultLeadCp at lines 1041-1045) omit the code points that live Wikidot tolerates before a leading `_default:` category. Each capture is valid=true, stable=true and saved_source_matches=true. The `newpage` class is masked by probe.norm; the divergence is the href slug, a rule-level value.

## C-R5E-R2-1 — r2e-01-freelink-u200c

Minimal source: `[[[‌_default:x]]]`

Capture id `muse-probe-round5e-r2-r2e-01-freelink-u200c`, html_sha256 `f365d5c54ea25bc0fb7bcba5523e4ca8278e7ebdecb4e36571015b74cdf3d6c5`, source_sha256 `6decb45fbf327c16a3056afa799438bca4f87f009878cae8341c23bd632c1264`, valid/stable/source-matching.

Decisive live bytes after the standard mask: `<p><a href="/x">x</a></p>`. Reference bytes at ref.jsonl line 1: `<p><a href="/_default:x">x</a></p>`. Live strips the lead run together with the `_default:` category and serves the slug `x`; the reference fails to match the lead regex, falls through to transliteration, and keeps `_default:x` in the slug.

## C-R5E-R2-2 — r2e-02-freelink-u200d

Minimal source: `[[[‍_default:x]]]`

Capture id `muse-probe-round5e-r2-r2e-02-freelink-u200d`, html_sha256 `f365d5c54ea25bc0fb7bcba5523e4ca8278e7ebdecb4e36571015b74cdf3d6c5`, source_sha256 `97a6ee58031312b7d6de6fe2d18a06443408b44f3e3af5041a161059820b31df`, valid/stable/source-matching.

Decisive live bytes after the standard mask: `<p><a href="/x">x</a></p>`. Reference bytes at ref.jsonl line 2: `<p><a href="/_default:x">x</a></p>`. Live strips the lead run together with the `_default:` category and serves the slug `x`; the reference fails to match the lead regex, falls through to transliteration, and keeps `_default:x` in the slug.

## C-R5E-R2-3 — r2e-03-freelink-u2061

Minimal source: `[[[⁡_default:x]]]`

Capture id `muse-probe-round5e-r2-r2e-03-freelink-u2061`, html_sha256 `f365d5c54ea25bc0fb7bcba5523e4ca8278e7ebdecb4e36571015b74cdf3d6c5`, source_sha256 `040f0bcc6b02b8fcbe6afc7543625094ea07d76b54d8bd5348dc149ccd995384`, valid/stable/source-matching.

Decisive live bytes after the standard mask: `<p><a href="/x">x</a></p>`. Reference bytes at ref.jsonl line 3: `<p><a href="/_default:x">x</a></p>`. Live strips the lead run together with the `_default:` category and serves the slug `x`; the reference fails to match the lead regex, falls through to transliteration, and keeps `_default:x` in the slug.

## C-R5E-R2-4 — r2e-04-freelink-u2064

Minimal source: `[[[⁤_default:x]]]`

Capture id `muse-probe-round5e-r2-r2e-04-freelink-u2064`, html_sha256 `f365d5c54ea25bc0fb7bcba5523e4ca8278e7ebdecb4e36571015b74cdf3d6c5`, source_sha256 `1200e33b9883777a14ebffade941b9b375523a08e5a9a0caddf9455fe8a03cf4`, valid/stable/source-matching.

Decisive live bytes after the standard mask: `<p><a href="/x">x</a></p>`. Reference bytes at ref.jsonl line 4: `<p><a href="/_default:x">x</a></p>`. Live strips the lead run together with the `_default:` category and serves the slug `x`; the reference fails to match the lead regex, falls through to transliteration, and keeps `_default:x` in the slug.

## C-R5E-R2-5 — r2e-05-freelink-lead-mixed

Minimal source: `[[[​‌_default:x]]]`

Capture id `muse-probe-round5e-r2-r2e-05-freelink-lead-mixed`, html_sha256 `f365d5c54ea25bc0fb7bcba5523e4ca8278e7ebdecb4e36571015b74cdf3d6c5`, source_sha256 `2cdb2b49358a306f59cd0a8bcfd0043af5febf757e2aa96ff7f42d74ea0d0435`, valid/stable/source-matching.

Decisive live bytes after the standard mask: `<p><a href="/x">x</a></p>`. Reference bytes at ref.jsonl line 5: `<p><a href="/_default:x">x</a></p>`. Live strips the lead run together with the `_default:` category and serves the slug `x`; the reference fails to match the lead regex, falls through to transliteration, and keeps `_default:x` in the slug.

Owning reference file: ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php:240. Inferred mirror consequence: lean-ftml/LeanFtml/LinkRules.lean `isDefaultLeadCp` (lines 1041-1045) explicitly excludes U+200C, U+200D and U+2061..U+2064 in its comment and its range/equality clauses, so the same over-narrow lead class is transcribed there; extending it to the live-evidenced siblings would make the mirror slug agree with live. This is a source-reading inference, not an elaboration claim.
