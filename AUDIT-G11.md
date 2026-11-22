# Audit Verdict: G1.1 — `process_depths` (`LeanFtml.Depth`)

## Scope & Method

Canonical artifacts audited (kept untouched in `lean-ftml/`):
- `lean-ftml/LeanFtml/Depth.lean` (1,111 lines; definitions `Forest`, `Frame`, `DState`, `Row`, `decrease`, `framesOf`, `adjustDown`, `newList`, `pushItem`, `adjustStack`, `step`, `runRows`, `wrapFrames`, `intoTrees`, `processDepths`; invariant `Inv`; main theorems `processDepths_placed` and `processDepths_good`).
- `lean-ftml/Conformance.lean` (60 lines; serializer and CLI driver).

Working artifacts for coordinator reproduction:
- `audit/g11/lean-ftml/` — standalone Lean 4.36.0 copy of `Depth.lean` and `Conformance.lean`, plus `AxiomCheck.lean` (`#print axioms`).
- `audit/g11/propext-only.patch` — unified diff (25 proof-term edits, zero definition or theorem-statement changes) reducing G1.1 from `[propext, Classical.choice, Quot.sound]` to `[propext]` only.
- `audit/g11/stress_test.py` — independent adversarial stress & differential harness (7,030 cases beyond the bounded box).

## Semantic & Boundary Audit

We audited `Depth.lean` directly against the specification of `src/parsing/depth.rs` and attacked every boundary condition:

1. **Empty input (`rows = []`)**: `runRows` returns `⟨[], [⟨top, .nil⟩]⟩`; `intoTrees` sees `appendForest .nil .nil = .nil` and returns `[]` (`EMPTY`). Both `processDepths_placed` (`[] = []`) and `processDepths_good` hold vacuously.
2. **Non-zero initial depth (`rows = [⟨d, ltype, id⟩]` for `d > 0`, including `ltype ≠ top` and `d = 250`)**: `adjustStack` appends `d` empty frames of `ltype` above the bottom `top` frame; `lastFrame` has `ltype = r.ltype`, so `newList` is not triggered; `pushItem` populates the top frame; `intoTrees` wraps all `d` frames into nested `.list ltype` nodes inside an outermost `top`-typed tree `T<top>[L<ltype>(...)]`. The item sits directly in a list of type `ltype` at depth `d`, no empty list node is emitted, and `decrease` is never invoked on `< 2` frames. Matches `src/parsing/depth.rs` (`DepthStack::new(top)`).
3. **Depth skips and sudden drops (`0 → 150 → 0 → 150`, `200 → 199 → 0`)**: The loop invariant `Inv` (`Depth.lean` L781–786) enforces `s.stack.length = prev + 1` and `done ≠ [] → TopNe s.stack`. Even when a depth skip leaves empty intermediate frames below the top frame, the first `decrease` pops the non-empty top frame into its parent as a `.list` node, making that parent non-empty (`decrease_topNe`) and guaranteeing the cascade invariant across arbitrarily large multi-level drops.
4. **Type flips at depth 0 vs depth > 0, and `top`-type collisions**:
   - At `depth = 0` (`stack.length = 1`): `newList` flushes a non-empty bottom frame to `finished` (or drops it if empty, as on a `depth = 0` first row with `ltype ≠ top`) and installs `[⟨r.ltype, .nil⟩]`.
   - At `depth > 0` (`stack.length ≥ 2`): `newList` is only reachable when `r.depth ≤ prev` (because `r.depth > prev` pushes frames of `r.ltype`, matching `lastFrame`), which forces `done ≠ []` and therefore `TopNe s.stack`; `decrease` safely wraps the non-empty top frame into its parent before pushing `[⟨r.ltype, .nil⟩]`.
5. **Counter saturation / integer bounds**: `Depth.lean` models `depth : Nat` (unbounded). In Rust `src/parsing/depth.rs`, `depth` is `usize`; `adjustDown` only computes `previous - depth` under `depth < previous` (no underflow), and `increase_depth` pushes one `Vec` frame per depth increment, so `usize` overflow is physically unreachable before OOM. No discrepancy exists in reachable inputs.
6. **Adversarial differential stress run (`audit/g11/stress_test.py`)**:
   - Ran the compiled Lean 4.36.0 conformance binary (`audit/g11/lean-ftml/.lake/build/bin/lean-ftml-conformance`) across **7,030 adversarial cases** outside the original bounded box: empty input, single rows at depths `{0, 1, 2, 5, 20, 100, 250}` × `ltype ∈ {0, 1, 9}`, extreme depth jumps (`0 → 150 → 0 → 150`, `200 → 199 → 0`), 60-row monotonic ascending/descending runs with type flips at every step, 5,000 fixed-seed random sequences (length ≤ 35, depth ≤ 60, up to 31 types), and 2,000 deep-flip torture sequences.
   - Compared byte-for-byte against an independent stack-machine implementation mirroring `src/parsing/depth.rs` (with explicit panic assertions on `stack.len() < 2` in `decrease_depth`) and independently verified all 5 harness invariants on every output tree: **`G11-STRESS PASS cases=7030 mismatches=0`**.
   - Combined with the canonical conformance record (**3,257,437** exhaustive box cases + **20,000** outside-box LCG cases byte-identical to real Rust `process_depths`, plus **291,453** in the earlier box; **0** live probes needed because G1.1 models Rust's internal `src/parsing/depth.rs` data structure directly), no semantic bug or unmodelled boundary condition was found.

## Stretch Item Outcome: Clean `[propext]`-Only Reduction Achieved

Baseline audit on unmodified `lean-ftml/LeanFtml/Depth.lean` under Lean 4.36.0 (`audit/g11/lean-ftml/AxiomCheck.lean`):
```
'LeanFtml.processDepths' depends on axioms: [propext]
'LeanFtml.processDepths_placed' depends on axioms: [propext, Classical.choice, Quot.sound]
'LeanFtml.processDepths_good' depends on axioms: [propext, Classical.choice, Quot.sound]
```

**Root-cause characterization**:
- **Zero definitions** in `Depth.lean` force `Classical.choice` or `Quot.sound` — `LeanFtml.processDepths` already depends on `[propext]` alone.
- **Exact `Classical.choice` source (1 site)**: Line 915 in `finish_step`, `simp at hlen` (discharging `[].length = r.depth + 1` via a `simp` lemma pulling `Classical.choice`). Replacing it with `cases hlen` eliminates `Classical.choice` completely.
- **Exact `Quot.sound` sources (24 sites)**:
  - 23 `omega` tactic invocations (lines 260, 350, 384, 521, 525, 532, 633, 654, 657, 698, 796, 800, 828, 836, 848, 854, 862, 864, 865, 877, 884, 904, 918), replaced by direct `Nat` equational/order lemmas (`Nat.add_assoc`, `Nat.add_comm`, `Nat.add_sub_cancel`, `Nat.sub_sub`, `Nat.sub_add_cancel`, `Nat.lt_of_not_le`, etc.).
  - 1 non-`omega` site at line 1104 in `processDepths_good`: `simp [processDepths, runRows, intoTrees, wrapFrames, Forest.appendForest]` rewriting under a universal quantifier `∀ p ∈ ..., ...` (which invokes `propext` + `funext` → `Quot.sound`). Introducing the binder first (`intro p hp; simp [...] at hp`) eliminates `Quot.sound` without changing line 1102's `by_cases hrows : rows = []`.

**Verification of the reduced copy (`audit/g11/lean-ftml/`, diff saved at `audit/g11/propext-only.patch`)**:
- Zero definition changes, zero theorem-statement changes; only proof terms touched. `lean-ftml/LeanFtml/Depth.lean` itself was left untouched.
- `lake build` in `audit/g11/lean-ftml/` exited 0 (`Build completed successfully (12 jobs)`), no `sorry`.
- `lake env lean AxiomCheck.lean` output:
```
'LeanFtml.processDepths' depends on axioms: [propext]
'LeanFtml.processDepths_placed' depends on axioms: [propext]
'LeanFtml.processDepths_good' depends on axioms: [propext]
```
- The compiled binary built from the `[propext]`-only `Depth.lean` passed all **7,030/7,030** adversarial stress cases with 0 mismatches.

**Verdict backing**: Canonical corpus 3,277,437 cases (3,257,437 bounded box + 20,000 outside-box LCG, plus earlier 291,453 box) + 7,030 new adversarial stress cases (0 live sandbox probes applicable to internal `depth.rs` stack machine); `[propext]`-only axiom reduction cleanly demonstrated.

CONFIRMED
