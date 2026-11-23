# conformance-pcre2 — TCB-2 differential torture suite (F2 scratch design + pilot)

## Purpose

TCB-2 of ADVISOR-PROOF-POLICY is one ~700-LOC executable PCRE2-byte-subset engine whose fidelity to PHP 8.5 `libpcre2` must be certified orthogonally to any wikitext corpus. This directory holds the design of that torture suite and a runnable pilot that was actually executed against the installed PHP 8.5.4 / PCRE 10.46 stack. Nothing here writes to the canonical tree and no new live Wikidot probe is involved (Boundary A remains empirical and out of scope).

## Ground truth and harness

`php_oracle.php` reads `pilot_cases.json` and returns, for each `(pattern, subject)`, the PHP `preg_match` / `preg_match_all` / `preg_replace_callback` result with `PREG_OFFSET_CAPTURE` byte offsets, full-match extent, groups 1..9 and the `preg_last_error_msg()`. The observed PHP and PCRE versions are recorded verbatim in `php_results.json`. `make_lean_pilot.py` turns each case into explicit `List Nat` byte literals (no `String.toList` in the observed computation) and a single flat observation line; `run_pilot.py` elaborates that file through the coordinator serial wrapper `lean-build.sh` (one Lean process at a time) and compares the flat strings byte-for-byte. Mismatches are retained verbatim in `pilot_report.json`; none are dropped or reclassified.

## Pilot result actually observed

40 cases, 40 exact matches, 0 mismatches against PHP 8.5.4 / PCRE2 10.46 2025-08-27. Per-construct counts are in `pilot_report.json`; every syntactic construct reported by the extractor for snapshot-36 except `/u` had at least one pilot case, including `(?R)` recursion to depth 3 (five cases, including the verbatim Code.php and Divalign.php regexes), all five flags `i s m U D`, both lookahead polarities, both lookbehind polarities, backreferences, greedy/lazy/ungreedy repetition and the two driver APIs. Two divergences were found during the pilot and fixed in `PcreCore.lean` rather than hidden: zero-length matches at end-of-subject were skipped by `pregReplaceCallback`, and empty iterations that newly bind a capture were discarded by the repetition guard. Both were re-verified to 0 diffs by the final run.

## Full-suite design (not yet executed; stated honestly as remaining work)

The full suite follows policy §2.2 Class C: a finite quotient alphabet, an explicit interaction/depth bound derived from the automaton, an exhaustive zero-mismatch check with a recorded generator and cardinality, and an explicitly named remainder.

- **Alphabet quotient.** The parse-phase byte space is quotiented to a canonical sentinel-free alphabet `Σ_pcre`: `{a, b, 0, 9, LF, TAB, SP, /, [, ], (, ), {, }, @, \, X, 0xFF0\xFF}` (18 symbols). Case-folding adds one upper-case representative. The `Tableadv`/`Code`/`Div` recursion alphabet extends this with `[[`, `]]`, quoted attribute fragments and placeholders, matching the policy's 20-symbol `(?R)` alphabet.
- **Depth/length bound.** `(?R)` is generated to depth 3, because depth 2 already exposes a single continuation-failure backtrack (the historical `F-TABLEADV-1` shape) and depth 3 exposes a nested backtrack cascade. Lookaround nesting is bounded at 2; repetition at `{0,3}` plus unbounded `*`/`+` over subjects of length ≤ 8; backreference chains at 2. This yields roughly 18^6 canonical subjects per construct family after quotient deduplication, with the exact cardinality to be committed by the generator rather than estimated.
- **Coverage matrix.** For each of the 68 rules the extractor's `constructs_observed` set is intersected with `PcreCore`'s implemented constructors; the intersection is the per-rule certification target. Rules with `/u` (Include, Freelink, Div, Tableadv) are explicitly handed to F3 `UnicodeCore` and are NOT claimed certified by this byte engine.
- **Named remainder.** Above `(d=3, L=8)` the engine's agreement with libpcre2 is evidence, not proof; `libpcre2` is external C (TCB-5-class boundary). There is no claim of a universal fuel-sufficiency theorem against libpcre2 in this draft; `pcreFuel = 32768` is a certificate parameter checked by the bounded suite.

## Files

`pilot_cases.json` (corpus), `php_oracle.php` (PHP 8.5 oracle), `make_lean_pilot.py` (Lean harness generator), `PcreCorePilot.lean` (generated harness), `run_pilot.py` (driver), `php_results.json` (oracle output), `lean_pilot.log` (all 40 observed lines elab log), `pilot_report.json` (final 40/40 report), `PcreCoreTests.lean` (34 kernel-checked `by decide` construct assertions). All Lean runs use the serial wrapper; no `native_decide`, `bv_decide`, Mathlib or `sorry` appears in any Lean file here.
