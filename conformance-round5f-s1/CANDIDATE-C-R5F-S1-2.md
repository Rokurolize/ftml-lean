# CANDIDATE-C-R5F-S1-2 — Span attribute values must pass through the shared normalizer (S09, S10)

## Witnesses

S09 `s09-span-data-trailws`, capture `muse-probe-round5f-s1-s09-span-data-trailws`, html_sha256 0f7390135f0d06a0d999559c8fc525321ffe942545731e7f007ee97cbe5cd46f, ref.jsonl row 9, first_diff 14. Minimal source `[[span data-x="  x  "]]b[[/span]]`. Decisive live bytes `<span data-x="x">b</span>` with the leading and trailing W run removed; reference bytes `<span data-x="  x  ">b</span>` with the authored spaces kept verbatim.

S10 `s10-span-class-trailws`, capture `muse-probe-round5f-s1-s10-span-class-trailws`, html_sha256 73290068b81ad4e7059a0ca0192897f8597f76d4dbcbed46b598c55c6ae46bf0, ref.jsonl row 10, first_diff 13. Minimal source `[[span class="  c  "]]b[[/span]]`. Decisive live bytes `<span class="c">b</span>` versus reference `<span class="  c  ">b</span>`.

Both captures are valid, stable and saved-source-matching. The divergence survives the campaign frame mask; the span bodies and the anchor structure are identical, so it isolates to the attribute value.

## Owning reference file and mechanism

`ref-php/text-wiki/Text/Wiki/Parse/Default/Span.php`, `process` lines 109-129: the whitelist branches assign `$args[$key] = $value` for class/style/role/type and `$args[strtolower($key)] = $value` for data-*, with no call to any normalizer. `getAttrs` (Parse.php lines 224-247) returns the raw bytes before the closing quote, so both leading and trailing spaces survive to the renderer. REFCORR12-GENERAL and CORRECTION-R12A-DIV state one right-trim rule over the whole Div/Span/Image family, and REFCORR12-R12A-SPAN added key retention and the uniform 0xFF clear arm but never routed the Span value through the normalizer; C-R5E-R1-1 established the same trailing-space defect on Div `type` and was fixed there. The live Span consumer applies the same normalization, so the Span path is the unfixed half of the general rule. The id branch and the R12A-SPAN data-* key retention must stay unchanged.

## Mirror consequence (inferred by source reading, no elaboration run)

`lean-ftml/LeanFtml/InteractiveRules.lean::spanAttrFragment` lines 974-981 emits the raw value with only the 0xFF clear arm; `lean-ftml/LeanFtml/ContainRules.lean::spanProcess` (line 273 onward) builds `restArgs` with `textVal v` directly from `getAttrsBytes`, so the mirror reproduces the same raw attribute bytes. The symmetric repair is to pass every kept Span value through the same `normalizeValue` / `rtrimAttrWs` pipeline used by Div (ContainRules.lean lines 567 and 581) before `textVal`, while preserving the authored-nonempty data-* key record and the id branch. One wrapped closed pin over the two witness values is recommended; no Lean invocation was run in this unit.

## Scope

This is a Span-consumer gap, not a change to the shared getAttrs parser (which must keep seeing authored bytes for every acceptance guard) and not a change to Image's deliberately raw title/alt text family. The two witnesses share one mechanism and are deduplicated into this single candidate class. Full evidence: LEDGER.md S09/S10, LEDGER-TABLE.md, comparison.json, verdicts.json, CAPTURE-INDEX.md, captures.json, ref.jsonl.
