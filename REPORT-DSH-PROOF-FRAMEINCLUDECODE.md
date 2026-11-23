# REPORT-DSH-PROOF-FRAMEINCLUDECODE — Wave 2 frame-include-code proof lane

## Scope and rule list

The brief assigns the policy's Wave 2 lane `proof/frame-include-code`. From ADVISOR-PROOF-POLICY.md §4.4 the lane covers `FrameRules`, `IncludeRule` and `CodeRule`; the classification tables in §2.2 give the exact rule list: Prefilter and Delimiter (`FrameRules`, Class A), Include (`IncludeRule`, Class A), and Code (`CodeRule`, Class B, recursive `(?R)` PCRE family). No Class C rule is in this lane, so no bounded certificate is claimed here. Branch `proof/frame-include-code` was created at `origin/main` = `60897f8` (proof-base-v1 freeze plus the landed F1–F3 foundation drafts). Only new proof files were added; no mirror source, `Main.lean`, `LeanFtml.lean`, existing proof file, or `.lake` artifact was edited by this lane.

Files added: `lean-ftml/LeanFtml/Proof/FramePrefilterProof.lean` (30 theorems), `lean-ftml/LeanFtml/Proof/FrameDelimiterProof.lean` (14), `lean-ftml/LeanFtml/Proof/IncludeRuleProof.lean` (35), `lean-ftml/LeanFtml/Proof/CodeRuleProof.lean` (34), and the lane gate module `lean-ftml/LeanFtml/Proof/FrameIncludeAxiomAudit.lean`. Total: 113 kernel-checked theorems.

## Gates run and results

All Lean invocations went through `~/.local/state/wikijump/muse-bhl/tools/lean-build.sh` with workdir this clone's `lean-ftml`, strictly one at a time (the script's global flock serialized them against the other programme lanes).

| Gate | Command (through wrapper) | Result |
|---|---|---|
| Module build | `lake build LeanFtml.Proof.FramePrefilterProof LeanFtml.Proof.FrameDelimiterProof LeanFtml.Proof.IncludeRuleProof LeanFtml.Proof.CodeRuleProof` | exit 0, 65/65 jobs, all four modules built |
| Lane axiom audit | `lake env lean LeanFtml/Proof/FrameIncludeAxiomAudit.lean` | exit 0, 25 headline `#print axioms` lines, all within `[propext, Classical.choice, Quot.sound]` |
| Whole-project build | `lake build` | exit 0, 176/176 jobs, `lean-ftml` exe built |
| Static TCB scan | grep of the four proof files for `sorry`, `sorryAx`, `axiom`, `admit`, `native_decide`, `bv_decide`, `Lean.ofReduceBool`, `unsafe`, `implemented_by`, `import Mathlib` | no occurrences in code (four matches are the words in header prose only); no Mathlib import |

Representative axiom output (the full 25 lines are in the build/audit log; the pattern is uniform): `emptyWsLines_go_fuel`, `compressNL_go_fuel`, `scanGroup_fuel_indep` → `[propext, Quot.sound]`; `prefilterRule_preserves_wf`, `includeRule_preserves_wf`, `delimiter_eq_ref_kernel_free`, `codeToken_attr_has_type`, `applyCode_indices_lt` → `[propext, Classical.choice, Quot.sound]`; `prefilterRule_keeps_tokens`, `delimiterRule_tokEquiv`, `ciChar_eq_true_iff` → `[propext]`; `delimiterRule_id_restated` → no axioms. No `sorryAx`, `native_decide`, `bv_decide`, or `Lean.ofReduceBool` appears anywhere in the audit.

## Rule: Prefilter (Class A)

Proved against the actual mirror functions in `LeanFtml/FrameRules.lean`: the two fuel-bearing passes now have universal fuel-independence and sufficiency theorems — `emptyWsLines_go_fuel`, `emptyWsLines_fuel_sufficient`, `scanGroup_fuel_indep`, `compressNL_go_fuel`, `compressNL_fuel_sufficient` say that any fuel at least `s.length + 1` (the mirror's own choice) gives the same result, so the hand-compiled scanners are kernel-free total functions rather than a bounded simulation. This closes the policy's named "fuel-free equivalence of all Prefilter passes" target. The other four passes have exact structural facts (`prefilter_step12_no_cr`, `prefilter_step4_no_tab`, `framePad_shape`) and the state-level obligations `prefilterRule_preserves_wf`, `prefilterRule_ofSource_wf` (WFState creation from any `List Char`), `prefilterRule_keeps_tokens`, and `prefilterRule_no_tok_of_allText_some`.

Remains: a literal `TokEquiv σ st st` statement is false for a text-transforming pass, since Prefilter changes the work text; the token table and fatal flag are invariant, and that is what is proved instead. Full `RuleProofBundle` instantiation awaits the coordinator's `applyRuleRef` wiring (shared remainder below). No mirror or reference divergence was found.

## Rule: Delimiter (Class A)

Proved: `delimiterRule_id_restated` (the mirror's identity is rfl), `delimiterRule_preserves_wf`, `delimiterRule_preserves_reachable`, `delimiterRule_tokEquiv`, and a byte-level representability witness — `utf8Bytes_no_ff`-equivalent `delimiter_utf8Bytes_no_ff`, `textBytes_no_ff`, `utf8Bytes_ne_ff_cons`, `byteForm_of_allText`, `allText_byteForm_no_ff`, `ofSource_byteForm_no_ff`, `delimiter_ref_regex_no_match`, `delimiter_ref_regex_no_match_of_allText`. The scoped reference form `delimiterRuleRefKernelFree` is parameterized by the no-0xFF proof, and `delimiter_eq_ref_of_no_ff` / `delimiter_eq_ref_kernel_free` prove that on every representable token-free document the mirror's identity output equals that kernel-free reference form.

Remains: PHP byte strings can contain a raw undecoded `0xFF` byte, for which the reference Delimiter regex (`'/'. $wiki->delim . '/'`) does fire; the mirror's `TSeg.text` is `List Char` and no `Char` encodes to `0xFF`, so that document is unrepresentable in this model. `FrameRules.lean` itself records the byte-level PHP probe. The theorem therefore deliberately does not claim a global Boundary-A/B equality for raw `0xFF`; this is a representational gap to be handled by the coordinator, not a mirror divergence to fix here.

## Rule: Include (Class A)

Proved against the actual 5-pass loop in `LeanFtml/IncludeRule.lean`: `includeRule_preserves_wf` (WFState preservation, built on `includePassesWith_same_regs`, `includePasses_same_regs`, `refExpandPassWith_same_regs`, `refFetchWith_same_regs` and the append-only registry lemmas `addInclusionId_length`, `addInclusionMissing_length`), `includeRule_work_shape`, `includeRule_work_textOnly`, `includeRule_tokEquiv_tokenPart`, `includeRule_tokEquiv_of_work_eq`. The four byte registries (footnotes, bibitems, bibitemIds, scoredAnchors) are proved untouched by every pass and fetch; only inclusions and inclusionsNotExist accumulate, append-only.

`refResolveRef` dispatch is covered by `refResolveRef_trim_invariant`, `refResolveRef_deterministic`, `refResolveRef_empty_dispatch`, `refResolveRef_leading_colon_dispatch` (L6), `refResolveRef_pair_or_fallback` (G/R pair versus host-gate fallback), `refResolveRef_page_dispatch` (S), and `refResolveRef_same_site_shape` (positive branch exhaustiveness).

Tier-1 reconnection is explicit: `parsePageRef_spec` and `mem_takeWhile_pred` from `IncludeGrammar` become `include_pageRun_spec`, `include_pageRun_chars`, `include_pageRun_eq_parsePageRef` (each pass's `refParseBlock` page run is exactly `(parsePageRef _).1`, maximal, all chars satisfying `isPageC`); `substitute_append`, `repPass_no_occurs`, `repPass_first_occurs` from `IncludeExpr` become `refSubstitute_append`, `refSubPass_no_occurs`, `refSubPass_first_occurs` through the existing `refSubstitute_eq_substitute` / `refSubPass_eq_repPass` bridges.

Remains: `applyRuleRef` is only a section parameter of `ProofInterface` and F2 wires none, so full `applyRule .include = applyRuleRef .include` is unavailable; `include_applyRule_mirror` (mirror half is rfl) and `include_eq_ref_of` (equality conditional on the reference-side hypothesis `href`) are the strongest kernel-free forms. F1's `ReachableState` has no include-pass transition constructor, so `reachable_tokens` is discharged only conditionally by `includeRule_reachable_of`. No mirror or reference divergence was found.

## Rule: Code (Class B)

Proved against the actual mirror functions in `LeanFtml/CodeRule.lean`: `swapAsciiCase_involutive`, `ciChar_eq_true_iff`, `ciChar_refl`, `ciChar_swapAsciiCase`, `ciChar_lit_swapAsciiCase`, `matchLit_some_drop`, `matchLit_length_le`, `matchLit_length_lt`; `openerArgs_rest_length_le`; `codeToken_rule`, `codeToken_text`, `codeToken_attr_has_type` (the `type` key is always present, default `""`); `codeMatch_nil`, `codeMatch_body_invariants`, `codeMatch_consumed_pos`, `codeBody_remaining_lt`; `scan_append_only`, `scan_indices_lt`, `applyCode_append_only`, `applyCode_indices_lt` (token table append-only and every emitted placeholder index in range); `codeRule_of_no_text`, `codeRule_doc_fatal_unchanged`, `codeRule_tokens_bounded`. No ground pins, no bounded enumeration, no second hand-written copy.

Remains (Class B kernel-dependent, named in the file by `codeRule_remainder_is_named`): equivalence of the hand-coded mutual `codeMatch`/`codeBody` `(?R)` backtracking matcher to `PcreCore.runMatch` on the extracted `code` regex in `RefTables.refRuleRegexes` and to PHP 8.5 libpcre2 is not proved; F2's `PcreCore`/`RefTables` are unbuilt drafts on this branch and importing them here would either fail or require a stand-in engine. The mirror's nested bound `codeFuel n = 4*n + 16` is not claimed sufficient to enumerate all PCRE-priority parses of a recursive body, and the outer scan's `cs.length + 1` fuel-sufficiency is likewise named as a remainder because it depends on an unproved universal nested-consumption bound. Rendering is a further remainder: the built `renderCode` in `CodeEmbedRules` is environment-free and `RenderEnv.highlightCode` exists only in the unbuilt F3 draft, so no `RenderEnv`-parametric render theorem is asserted. No WFState/TokEquiv bundle is instantiated for Code; `codeRule_tokens_bounded` is the honest WF-relevant part proved without importing the F1 module here. No mirror or reference divergence was found in this lane.

## Coordination notes

The coordinator wires imports at adoption; this lane did not edit `LeanFtml.lean` or `Main.lean`. Three shared remainders need coordinator action: (R1) supply `applyRuleRef` and the `ReachableState` transition constructors so the F1 `RuleProofBundle` fields can be instantiated for these four rules; (R2) resolve the raw-`0xFF` representational gap for Delimiter at the model boundary; (R3) land F2 `PcreCore` + `RefTables` and F3 `RenderEnv` so the Code `(?R)` and render remainders can be upgraded to universal theorems modulo the certified cores. .lake build artifacts were left unstaged; only the five proof files, this report, and the brief were committed.

PARTIAL
