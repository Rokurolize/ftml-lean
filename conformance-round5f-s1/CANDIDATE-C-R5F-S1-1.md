# CANDIDATE-C-R5F-S1-1 — Div attribute values must retain ESC and DEL (S07, S08)

## Witnesses

S07 `s07-div-attr-esc`, capture `muse-probe-round5f-s1-s07-div-attr-esc`, html_sha256 d88f3e6ef211544782d1f1bbc6a0babe2a387bd2b5b4638a82ce941694b9739f, ref.jsonl row 7, first_diff 12. Minimal source `[[div type="A\x1bB"]]\nbody\n[[/div]]`. Decisive live bytes `<div type="A\x1bB">` with ESC 0x1B retained; reference bytes `<div type="AB">` with ESC dropped.

S08 `s08-div-attr-del`, capture `muse-probe-round5f-s1-s08-div-attr-del`, html_sha256 93fad04fe2d3a1a8c110226caee8aec8b51faacdb7d21760f5ffb7844d0a3125, ref.jsonl row 8, first_diff 14. Minimal source `[[div data-x="A\x7fB"]]\nbody\n[[/div]]`. Decisive live bytes `<div data-x="A\x7fB">` with DEL 0x7F retained; reference bytes `<div data-x="AB">` with DEL dropped.

Both captures are valid=true, stable=true and saved_source_matches=true. The difference survives probe.norm, the inter-tag frame mask, the token-digit mask and the single-<p> frame mask; the div bodies are byte-identical after the campaign mask, so the divergence isolates to the attribute value.

## Owning reference file and mechanism

`ref-php/text-wiki/Text/Wiki/Parse/Default/Div.php`, `normalizeValue` lines 57-72. Line 58 applies `preg_replace('/[\x00-\x1F\x7F]/', '', $value)` before the whitespace collapse and the REFCORR12 trailing rtrim. That class removes every C0 byte including ESC (27) and DEL (127), while the live renderer emits both verbatim in the same attribute position. REFCORR12-NOTES narrowed the live-discarded C0 set D to keep ESC in footnote, bibitem and Bibliography text, but the attribute normalizer was left at the wider C0/DEL class; these two witnesses show the same byte survives on live in the attribute family too. W and leading/trailing-space handling on both sides is already correct and must not move.

## Mirror consequence (inferred by source reading, no elaboration run)

`lean-ftml/LeanFtml/ContainRules.lean::normalizeValue` line 582 transcribes the same wide drop as `v.filter (fun b => !(b < 32 || b == 127))`, so the mirror carries the identical defect for `type`, `style`, `role`, `data-*` and the `class` caller. The fix is to narrow that filter to the live-discarded set D (bytes below 0x20 except TAB 9, LF 10, CR 13 and ESC 27) and to stop dropping DEL, leaving `rtrimAttrWs` at line 567 and the class caller's `rtrimSpaceTab` unchanged. One wrapped closed pin over the two witness values is recommended; no Lean invocation was run in this unit.

## Scope

No new rule outside the Div/Span/Image attribute family is implicated. The two witnesses share one mechanism and are deduplicated into this single candidate class. Full evidence: LEDGER.md S07/S08, LEDGER-TABLE.md, comparison.json, verdicts.json, CAPTURE-INDEX.md, captures.json, ref.jsonl.
