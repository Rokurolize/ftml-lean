# REPORT-DSH-PROOF-DIVATTR — proof/divattr proof lane

Branch `proof/divattr` of Rokurolize/ftml-lean, workdir `lean-ftml`, Lean 4.36.0. Scope: the hand-rolled Div attribute grammar in this branch's mirror. The full bundle form waits for the foundation kernels and is named as the remainder below.

## Policy read and adjudication of the inherited draft

The programme policy is `ADVISOR-PROOF-POLICY.md` at `/home/roku/.local/state/wikijump/muse-bhl/agy-proof-policy/ADVISOR-PROOF-POLICY.md`. Its classification puts the full `Div`/`Span`/`Size`/`Divalign` `(?R)` equivalence in Class B (§2.2), behind `PcreCore` and `UnicodeCore`, and its §4.3 row for `proof/divattr` names no keeper from the inherited draft (a clean start) with the new target of a shared attribute/ID theorem plus the `(?R)` equivalence after foundation units F2 and F3. §4.6 G4 excludes ground `rfl`/`decide` pins from the proof count, §2.1 requires a proof-grade bounded enumeration to state its generator, cardinality and remainder, and §1 warns that ground pins and abstract coverage enums are not universal proofs. The brief narrows this lane to the attribute and id parsing laws that the hand-rolled grammar makes provable now, and forbids mirror, `Main.lean` and import edits.

The inherited draft was a single 1188-line file `lean-ftml/LeanFtml/DivAttrProof.lean` added by commit `d4066ea` on top of `f7a117c`. It contained five groups: `normalizeValue`/`keptByte`/`collapseSpaces`/`rtrimSpaceTab` laws; `isolateId` laws; `divArgs`/`divArgsOrder` dispatch and `divAuthoredNonEmpty` laws; seven ground `divProcess` rfl pins plus a REFCORR12 divergence witness; and three finite-domain `decide` certificates with a cardinality theorem. Against this branch's mirror it did not compile: six errors remained after the stale `.lake` oleans were rebuilt through the mandated wrapper (a trim-shell subgoal, three failed rewrites in the `id`/`data-*` laws, a `maxRecDepth` failure on `dom_card`, and a failed `rcases` in `enum_ranked_order`).

Adjudication: the policy names no keeper for this lane, so nothing was inherited on authority. I kept only the universal mechanism-level statements that independently satisfy the brief's scope and repaired them; I reclassified or dropped everything whose only claim is a ground computation. Concretely: kept and repaired the value-normalization, id-isolation, attribute-dispatch, emission-order and authored-record laws; kept the finite-domain checks as explicitly labelled bounded certificates, not universal theorems; kept the seven `divProcess` rfl equalities and the form-feed/NBSP/SOH computations only as regression pins excluded from the proof count; kept the REFCORR12 witness as a divergence record with its line stopped. No mirror source, `Main.lean`, or existing non-proof file was edited. The draft was split into disjoint proof files so the remaining units could be worked in parallel; `DivAttrProof.lean` is now the integration module that imports them.

## What is now proved

Universal theorems about this branch's actual functions, grouped by module:

- `LeanFtml/DivAttrNormalize.lean`: the kept-byte characterisation of the C0/DEL filter, the exact equation `normalizeValue_eq` (filter then space-run collapse then leading trim), control-byte and no-leading-space consequences, the trailing-space law `normalize_trailing`, and the `class`-only `rtrimSpaceTab` law `rtrim_trailing`.
- `LeanFtml/DivAttrId.lean`: `isolateId` empty and placeholder retention, the PHP-trim-only id shell `isolateId_trim_shell`, with the form-feed, NBSP and SOH cases marked as boundary regression pins rather than universal claims.
- `LeanFtml/DivAttrArgs.lean`: accepted spellings in `divArgs` (`id`, `class`, `style`, `role`, `type`, `data-*`), rejection of every other spelling, `data-*` lowercase folding with the case-sensitive prefix allowlist, case-variant duplicate-last-wins with the first occurrence's emit position, the ranked-then-authored `divArgsOrder` law, id omission on isolation to empty, `divAuthoredNonEmpty` monotonicity, and `divAttrFragment` placeholder suppression.
- `LeanFtml/DivAttrPins.lean`: `refcorr12_dispatch`, the universal trailing-space mechanism statement for `type`/`style`/`role`/`data-*` against this mirror.

## What is now certified, and its limit

`LeanFtml/DivAttrCerts.lean` holds three bounded certificates over explicit generators: `checkSingletons` over `domKeys × domVals`, `checkDups` over `dataCaseKeys × dataCaseKeys × domVals × domVals`, and `checkPerms` over all permutations of `rankedKeys`. `dom_card` records the cardinalities. These are exhaustive over the named finite domains only: they certify this mirror's own function on those inputs, not equivalence to PHP 8.5, and inputs outside the domains are the named remainder. The generator, cardinality and content hash are recorded in the gate section below.

## Divergence witness and rebase points

Minimal REFCORR12 witness (recorded, line stopped, mirror untouched): `normalizeValue` of `  t  ` stores `t ` (one trailing space survives on `type`); the live capture `muse-probe-round5e-r1-r5er1-d6` serves `type="t"`. The one-byte right-trim that live applies to kept Div values is not a theorem of this mirror; `refcorr12_type_witness` states the mirror side exactly. The coordinator's correction round owns that fix.

Likely rebase points under the in-flight REFCORR12 attribute work and the foundation kernels: any change to `normalizeValue`'s trailing-space policy invalidates `normalize_trailing`, `rtrim_trailing`, `refcorr12_dispatch` and the witness; any change to `isolateId`'s placeholder or trim-shell arms invalidates the id laws; an F3 `UnicodeCore` rebuild of `isolateId` invalidates the whole id module; an F2 `PcreCore` adoption replaces the `data-*` allowlist proofs with extracted-regex correspondence; and the `divProcess` pins are regression-only and must be regenerated after any scanner edit.

## Remainder

Not proved here, by scope: the `RuleProofBundle`/`RenderProofBundle` module contract, `Div`/`Span`/`Size`/`Divalign` `(?R)` equivalence to `PcreCore`, the `UnicodeCore` rebuild of `isolateId` over all 1,112,064 Unicode scalars, and all cross-rule pipeline and render composition. Module evaluation is out of scope programme-wide. No live probe was needed for this lane; the divergence witness uses the cached capture named above.

## Gates and axiom audit

Build gate: `~/.local/state/wikijump/muse-bhl/tools/lean-build.sh <repo>/lean-ftml lake build LeanFtml.DivAttrProof` through the mandated wrapper, one invocation at a time. Result: exit 0, `Build completed successfully (41 jobs)`, with `LeanFtml.DivAttrProof` built and all five family modules imported; only unrelated pre-existing linter warnings from mirror files remain. The inherited single-file draft failed at the same gate with six errors.

Axiom audit: an external scratch module imports `LeanFtml.DivAttrProof` and runs `#print axioms` on all 107 public theorems (24 in `DivAttrNormalize`, 22 in `DivAttrId`, 47 in `DivAttrArgs`, 5 in `DivAttrCerts`, 9 in `DivAttrPins`, 0 in the integration module; plus two private helpers, `beqNat` and `pairMap`), via the same wrapper at exit 0 with zero errors. All 107 results are inside the allowed ceiling: 8 depend on no axioms, 15 on `[propext]`, 1 on `[propext, Quot.sound]`, and 83 on `[propext, Classical.choice, Quot.sound]`. No `sorryAx`, `native_decide`, `bv_decide`, `Lean.ofReduceBool`, `unsafe` or other axiom appears. Source scan over all six modules finds no forbidden mechanism: no `sorry`, `sorryAx`, `native_decide`, `bv_decide`, `Lean.ofReduceBool`, `unsafe`, `axiom`, `opaque` or `admit`; only kernel `decide`, `rfl`, `simp`, `rw` and `omega` are used.

Independent read-only review found no false or over-claimed theorem and no duplicate declaration name in the `DivAttrProof` import closure. It did find one documentation-only divergence outside this lane: `ContainRules.lean:618` still says `data-*` duplicates are first-wins while the code at lines 637–643 and `divArgs_data_last` implement last-wins (REFCORR8 C-R5-P1-2). The theorem matches the code; the stale comment belongs to the coordinator lane and was not edited here.

Certificate record: `DivAttrCerts.lean` SHA-256 `0d60b58142c0d23a7390141febd2b28da781d636958e8798f837723dd4889407`; generators `domKeys` (12 keys), `domVals` (11 values), `dataCaseKeys` (3), `rankedKeys` (5, giving 120 permutations); `dom_card` proves those cardinalities; remainder is every input outside those finite domains and all PHP differential comparison.

## Status

PARTIAL: the hand-rolled attribute and id parsing laws are proved in their strongest current-tree forms, and the finite-domain checks are certified as bounded evidence, while the full bundle form is an explicitly named remainder and the REFCORR12 right-trim divergence is recorded and stopped.
