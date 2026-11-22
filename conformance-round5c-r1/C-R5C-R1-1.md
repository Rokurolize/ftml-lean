# C-R5C-R1-1 — u--prefixed placeholder-bearing Div id is dropped by the reference but cleared to id="" on live

Verdict: CONFIRMED. Capture id muse-probe-round5c-r1-r5cr1-d1 (page-content sha256 2061a590abcadc604490830cf36c644802ef287f597b83cd98f5034bb4376101), valid=True, stable=True, saved_source_matches=True. Ledger row R5CR1-D1.

Minimal source: `[[div id="u-[[size 12px]]x[[/size]]"]]\nbody\n[[/div]]`. The nested size token runs before Div and injects a real 0xFF placeholder into the authored id, so the authored value begins with the two literal bytes `u-` and also carries a placeholder.

Decisive live bytes: `<div id="">\n<p>body</p>\n</div>`.

Reference bytes (ref-php harness batch.php render, ref.jsonl line for R5CR1-D1): `<div><p>body</p>\n\n</div>`.

After the standard probe.norm() mask and the campaign frame mask the live form is `<div id><p>body</p></div>` and the reference form is `<div><p>body</p></div>`; the sole surviving difference is the id key itself, `id=""` against no id attribute. Neither value carries a token-id counter digit and Stage 2 tidy never adds or removes an attribute, so this is not an owned counter or frame surface. It is distinct from the REFCORR9-fixed C-R5B-R1-1 source (a non-prefixed placeholder id, now correctly id="" on both sides): the new guarded arm in isolateId deliberately excludes u--prefixed values, and that exclusion is exactly what produces this fresh divergence.

Mechanism: `Text_Wiki_Parse_Div::isolateId` (ref-php/text-wiki/Text/Wiki/Parse/Default/Div.php:80-82) newly returns the raw 0xFF-bearing value only when `strpos($value, "\xFF") !== false && strpos($value, 'u-') !== 0`. An authored id that already starts with `u-` fails the second test and falls through to `preg_replace('/\s+/u', ' ', trim($value))`, which returns null on the invalid UTF-8 placeholder bytes; the old collapse path then returns that null as the collapsed value at line 93. The caller keeps the null id in `$args['id']`, and the final empty-value filter at lines 184-188 unsets it, so `Text_Wiki_Render_Xhtml_Div::token` sees no id argument and emits a bare `<div>`. Live instead clears the placeholder-consumed value with its key kept, as it does for the non-prefixed sibling. Owning reference files: Parse/Default/Div.php (guarded arm and the u--prefixed collapse path) and Render/Xhtml/Div.php (key-preserving 0xFF clear arm at line 63).

Candidate name: C-R5C-R1-1.
