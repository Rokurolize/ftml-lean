# REPORT-PROOF-MODULE — Module parse proofs

## Finding

The Module family's two corrected parse mechanisms hold of the mirror's own functions on the finite domains below, and the R3.3 module conformance slice re-runs green. No mirror/reference divergence turned up, so `ModuleRules.lean` is unchanged. Module evaluation is out of scope and is not attempted.

The proofs live in `lean-ftml/LeanFtml/ModuleProof.lean`. The file is not imported by `LeanFtml.lean`; the coordinator wires the import at adoption. It elaborates with `lake env lean LeanFtml/ModuleProof.lean` through `lean-build.sh`.

## REFCORR9, the authored closer

`closerSpellings` is the 64 case spellings of `[[/module]]`: the bytes `[` `[` `/` and the two closing brackets stay fixed, and each of the six letters `m o d u l e` is independently lower or upper. `closerSpellings_length` is 64, `closerSpellings_len11` says every member has length 11, and `closerSpellings_ci` says `matchLitCI (litBytes "[[/module]]")` accepts every member and consumes it exactly.

On the frame `[[module nosuchmod]]`, a newline, the Code placeholder `phBytes 0`, a newline, and the spelling `c`, with the token table `[{rule := "Code"}]`:

- `reemitOk_all` and `reemitOk_spec`: `moduleMatch` returns replacement `[10, 10] ++ phBytes 1 ++ [10, 10] ++ phBytes 0 ++ [10] ++ c`, residual `[]`, and rules `["Code", "Module"]`. The input Code token is kept and the claim is appended, which is `claimModule`.
- `reemit_is_authored_drop`: because the residual is empty, the matched text is the whole frame, and `codeFrame_last` plus `drop_last` show the carried suffix equals `src.drop (src.length - 11)`. That is the expression `matched.drop (matched.length - 11)` in the Code branch of `moduleTryCands`.
- `reemit_upper_not_lower`: `[[/MODULE]]` is one of the 64, it is not the lowercase literal, and it is re-emitted byte for byte.
- `rawOk_all`: the same frame with a Raw token returns only the placeholder wrapper. The closer is consumed and not re-emitted.

The same 64 spellings separate the two tails. `tail_survives_all` and `immediateOk_all`: Module's `(.+?)` search starts one byte into the body, so a closer sitting on that first byte stays in the residual and the body is empty. `tail654_consumes_all` and `immediate654Ok_all`: Module654's `(.*?)` search starts at the body, so the same closer is consumed as an empty body and the rule is `Module654`. `tab_distinguishes_all`: a tab before the newline makes `moduleTail` return `none` and `module654Tail` still consume the closer (correction C1).

## REFCORR10, the defense

The prefix rewrites are equational, for an arbitrary tail. `rewriteModulePrefix_exact` sends a leading `[[module` to `[[module654` and leaves the rest. `rewriteModulePrefix_keep` is the identity when those eight bytes are not that literal. `rewrite_upper_kept` is the concrete case `[[MODULE rest`, which the case-sensitive check does not touch. `rewrite654Prefix_exact` and `rewrite654Prefix_keep` are the Modulepre direction, eleven bytes, `[[module654` back to `[[module`.

The nested-opener behavior is a 32-element product. Names are `a` and `Z`, bodies are empty and `X`, and each of the two closers is `[[/module]]` or `[[/MODULE]]`. `nestedCases_length` is 32.

- `inline_nested_all`: source `[[module o]]`, newline, `[[module i]]`, body, closer 1, newline, closer 2. `moduleMatch` claims nothing. The replacement is `[[module654 o]]`, newline, `[[module i]]`, an inserted newline, the body, and closer 1. The residual is the newline and closer 2.
- `line_nested_all`: the same 32 sources with an authored newline after the inner `]]`. The defense renames only the leading `[[module` and inserts no extra newline. The residual is again the outer closer.

Both agree with the existing `rfl` pin `moduleMatch_inline_defense_example` on the shape that pin uses (`a`, `b`, body `INNER`, lowercase closers).

## Axiom audit

`#print axioms` on every theorem in `ModuleProof.lean`, from an elaboration that exited 0:

`closerSpellings_length` and `closerSpellings_len11` depend on no axioms. `drop_len`, `take_len`, and `drop_last` depend only on `propext`. Every other theorem depends on `[propext, Classical.choice, Quot.sound]`. `Classical.choice` is the `String.toList` axiom inside `litBytes`. `sorryAx` is absent. `native_decide` is absent, and `Lean.trustCompiler` is not added. The kernel `decide` calls are the exhaustive scans of the 64 spellings and the 32 nested sources.

## Conformance

Re-ran the R3.3 module slice locally. Corpus `conformance-r33/module-all-cases.jsonl`, 204 lines. PHP 8.5.4 (cli, built Nov 19 2026 00:22:49, NTS) via `ref-php/harness/state-restricted.php` with rules `Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654`. Lean driver `.lake/build/bin/lean-ftml-conformance-r33`, built by `lake build lean-ftml-conformance-r33`. `conformance-r33/compare.py` reports `SUMMARY: 204/204 cases match`. Both drivers exited 0 with empty stderr.

## Remainder

These are not proved, and they are the reason the statements above are bounded.

- There is no theorem that `matchLitCI moduleCloser c = some []` implies `c ∈ closerSpellings`. Every generated spelling matches, and the generator is the case product of the six letters, but the converse is not a theorem.
- `reemit_is_authored_drop` uses the empty residual of this frame, so the matched text is the whole source. There is no theorem that, for an arbitrary source, every `moduleHead` candidate rest is a suffix and the eleven bytes before that rest are the closer `findSubCI` found.
- `insertInlineOpenerNewlines` and the defense claim are proved on the 32-element name/body/closer product, not for arbitrary names, bodies, or the other 62 closer spellings.
- `countModuleOpeners`, `modulePasses`, and the reference's do/while fixpoint are not given their own theorems. A count above 1 on the Code frame would have taken the defense branch and failed `reemitOk_all`, so that count is covered only inside those decides.
- Nothing here equates the mirror's functions to the PCRE engine beyond the equations of those functions. The 204-case slice is the empirical check.
- Module evaluation stays out of scope.

COMPLETE
