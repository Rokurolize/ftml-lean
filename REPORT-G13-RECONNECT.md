# REPORT-G13-RECONNECT

C-AUDIT-G13-3 is closed. No headline theorem in `lean-ftml/LeanFtml/IncludeGrammar.lean` certifies a function the tree does not call. The proof-scope comment in that file now names the one remaining headline theorem, `parsePageRef_spec`, and records where the other five facts live. `parsePageRef_spec` is textually the same theorem. The capstone pipeline's reachable behavior is unchanged: the conformance tallies below match the recorded baseline.

The five restated facts are theorems about `refFindCandidate` and `refResolveRef` in `LeanFtml/IncludeRule.lean`. They cannot sit in `IncludeGrammar.lean`: `IncludeRule.lean` imports `IncludeGrammar.lean`, and a reverse import would cycle. `IncludeGrammar.lean` still holds `scanPrefix`, `startsWithCI`, `isPageC`, and `parsePageRef`, which still have callers.

## Disposition

| Former theorem | What it certified | Disposition |
| --- | --- | --- |
| `matchOpener_adjacent` | `matchOpener` / `openerOk` | Removed, with `isWsC`. Nothing outside the theorems called either function. Restated on `refFindCandidate` as `refFindCandidate_adjacent`, with `refFindCandidate_success_shape` and `refFindCandidate_skips_gt` carrying the non-vacuous content. |
| `matchOpener_spaced_none` | same functions | Removed. Restated as `refFindCandidate_spaced_none`. |
| `stripGt_split` | `stripGt` (and `dropBlanks`) | Removed. The only caller was `ConformanceG14`'s depth-not-zero arm. `findMatch` returns only depth 0, so that arm was unreachable. The arm is now the same resume the total-failure path already used (`go ce acc fuel`), and the functions are gone. |
| `origOffset_mem` | `origOffset` / `Seg` | Removed. Same unreachable arm was their only caller. |
| `parseSiteRef_spec` | `parseSiteRef` / `isSiteC` | Removed. Nothing called `parseSiteRef`. Restated as `refResolveRef_pair_spec`. |
| `parsePageRef_spec` | `parsePageRef` | Kept. `ConformanceG14.parseBlockFrag` calls `parsePageRef`. The capstone block scan is `takeWhile isPageC` inside `refParseBlock`, the same character class. |

### What the restated facts say

`refFindCandidate` returns `(lineStart, 0, 0, lineStart + 9)` or skips the line. It never returns a positive prefix length, and it rejects every line whose blank/`>` lead contains `>`.

- `refFindCandidate_success_shape`: a hit has prefix length 0, depth 0, match end nine characters later, no `>` in the lead, a `[[` prefix, case-insensitive `include`, and one PCRE whitespace character after that word.
- `refFindCandidate_adjacent`: if a hit had prefix length greater than 0, the character before that length would be `>`. The live scanner never produces such a hit (`success_shape` gives prefix length 0, and `0 < plen` contradicts that), so the old implication holds of every value `refFindCandidate` returns. The proof is that contradiction. The content that is not vacuous is `success_shape` together with `skips_gt`.
- `refFindCandidate_skips_gt`: a line start whose lead contains `>` is not returned as a candidate at that offset.
- `refFindCandidate_spaced_none`: a line whose pre-`[[` segment is blanks, one `>`, then at least one blank, is not a candidate at offset 0. The conclusion is `≠ some (0, plen, depth, mend)`, not `= none`: the tail after that line can still contain a later include, and the live scanner continues past the skipped line. The old `matchOpener` looked at one line only, so it could conclude `none`.

`refResolveRef_pair_spec`: a cross-site hit `some (some site, page)` splits the trimmed run into `':' :: (sitePart ++ ':' :: pagePart)` with both parts non-empty, every site character passing `isIncHostC`, every page character passing `isIncTargetC`, `site = refCanonicalSite sitePart`, and `page = refNormalize pagePart`. The returned site is the canonicalized slice, not the raw slice. That is why the old equation "the returned site is the raw `:`-delimited piece" is not restated: `refCanonicalSite` can shorten a `.wikidot.com` host. The host gate is `isIncHostC` (`[A-Za-z0-9.-]`), which is the gate `refResolveRef` actually tests. The old `isSiteC` class was wider (`_` was included) and is gone with `parseSiteRef`.

`refResolveRef` is now `go` on the trimmed run, with equation lemmas for the empty, colon, and other-cons arms. The colon arm still requires a non-empty host-gate site and a non-empty target-gate page, and otherwise falls through to the whole-run page rule; a non-colon run is only that page rule. The existing `rfl` examples of `refResolveRef` (`refResolveRef_cross_site_example` through `refResolveRef_dotted_site_example`) compile against this definition. `refFindCandidate`'s runtime definition is unchanged.

## Call-graph evidence

Capstone path, the one `ConformanceCapstone.lean` runs:

- `ConformanceCapstone` line 167 calls `runRules pipelineFull`.
- `Pipeline.applyRule` on `.include` is `includeRule` (`Pipeline.lean` line 123).
- `includeRule` (`IncludeRule.lean` line 762) calls `includePasses 5`.
- `includePasses` calls `includePassesWith`, which calls `refExpandPassWith`.
- `refExpandPassWith.go` (line 713) calls `refFindCandidate`. On a hit it calls `refFindIncludeEnd`, then `refParseBlock` (line 719), which takes the page run with `takeWhile isPageC` (line 384). Resolution is `refResolveRef` (line 725). Failure resumes at `refNextLineStart` (lines 721 and 727). Success fetches with `refFetchWith`.

`refFindCandidate` calls `startsWithCI` from `IncludeGrammar.lean`. `ConformanceG14.driverOpener` also calls `scanPrefix` and `startsWithCI`. `ConformanceG14.parseBlockFrag` calls `parsePageRef` (line 455). `ConformanceG14.findMatch` keeps a match only when `depth == 0` (line 520). `scanAll`'s other arm (line 571) does not parse a quoted include.

Searched the Lean tree for `matchOpener`, `openerOk`, `stripGt`, `origOffset`, `parseSiteRef`, `isSiteC`, `isWsC`, and `dropBlanks`. The only remaining occurrences are comments in `IncludeGrammar.lean`, `IncludeRule.lean`, and `ConformanceG14.lean`. No definition and no call remain.

## Axiom audit

From the library build of `Main.lean` (`#print axioms`), every reconnected theorem and the kept headline theorem:

| Theorem | Axioms |
| --- | --- |
| `parsePageRef_spec` | `[propext]` |
| `refFindCandidate_success_shape` | `[propext]` |
| `refFindCandidate_adjacent` | `[propext]` |
| `refFindCandidate_skips_gt` | `[propext, Quot.sound]` |
| `refFindCandidate_spaced_none` | `[propext, Classical.choice, Quot.sound]` |
| `refResolveRef_pair_spec` | `[propext, Classical.choice, Quot.sound]` |

The build log contains no `sorryAx`. `Quot.sound` is the `omega` axiom. `Classical.choice` is in the allowed set.

## Gates

Library: `LAKE_JOBS=2 lake build lean-ftml lean-ftml-conformance-capstone lean-ftml-conformance-g14` from `lean-ftml/`, with `PATH` including `$HOME/.elan/bin`. Exit 0. That is the library, the `Main` executable that prints the axiom audit, the capstone driver, and the edited G14 driver.

Retirement (`python3 retirement_check.py` in `conformance-capstone/`): exit 0. 8/8 RETIRED on the originating comparison sets, 0 still open. The 67-rule control leaves `smoke-include`, `iw43-61-include-site-pair`, and `x30` STILL OPEN. Full canonical state is 8/8 against a fresh PHP run and 8/8 against the R3.17 recorded fixture, with inclusion registries in the comparison: `smoke-include` reports `inclusions=[1156]`; `iw43-61-include-site-pair` reports `inclusionsNotExist=[':wikipedia:albert-einstein']`; `x30` reports `inclusionsNotExist=['wikipedia:albert-einstein']`.

This worktree was copied without `materials/` and `conformance-r317/`. Those two directories are symlinks to `/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-capstone-gates/` so the check's existing paths resolve. No file outside this worktree was edited. No PHP file was edited.

Pooled parse: fresh run of `lean-ftml-conformance-capstone` on the retained `conformance-capstone/pooled-cases.jsonl` (4205 cases), compared with `compare.canon_state` to the retained `pooled-php-full.jsonl`. Inclusion components were compared on the 4200 records where both sides carry the keys. Result: PASS 4204/4205. The only mismatch is `a34`, on `tokens`. The retained PHP artifact was not regenerated.

Include fuzz, `python3 fuzz_capstone.py` from `conformance-capstone/`:

- seed 7: 500/500 agree, 0 disagreements
- seed 20261121: 500/500 agree, 0 disagreements

COMPLETE
