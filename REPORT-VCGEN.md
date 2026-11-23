# Std.Do and `vcgen` / `mvcgen` in Lean 4 (≈4.22–4.36) — Research Report

## Summary

`Std.Do` is Lean core's Hoare-logic / weakest-precondition framework for (mostly) monadic `do`-notation programs. It landed **experimentally in Lean 4.22.0 (2025-08-14)** via PR **#8995 by Sebastian Graf (`sgraf812`, Lean FRO)**, with the tactic **`mvcgen`**. A SymM/`grind`-based reimplementation appeared as **`mvcgen'` in 4.31.0**, was renamed **`vcgen`** in June 2026, and **shipped in 4.35.0 (2026-10-12) as the successor of `mvcgen`, which was deprecated (#14874)**. `vcgen` is **still documented as experimental**. In the process the assertion language was generalised: the `mvcgen`-era `Std.Do.SPred`/`PostShape`/`WPMonad` theory became the `Std.WP` theory in which assertions live in **any `CompleteLattice`**, a program type carries a **`WP`** interpretation, and a triple also carries an explicit **exception postcondition**.

Confidence: high for §§1–4 and 6 (official reference manual, tutorials and release notes, read live 2026-11-23); medium for §5 and parts of §7, where the official documentation is largely silent and the limits below are inferred from documented mechanisms (flagged as such).

---

## Findings

### 1. What is `Std.Do`? Theory, authorship, landing in Lean core

**What it is.** A program logic + verification-condition generator (VCG) in Lean's standard library (`Std`) for imperative-style programs written with `do`-notation, and — since `vcgen` — for any program type with a weakest-precondition interpretation.

**Landing / authorship**

- Release notes, *Lean 4.22.0 (2025-08-14)* — https://lean-lang.org/doc/reference/latest/releases/v4.22.0/ (index):
  > “Experimental: monadic verification framework — #8995 introduces a Hoare logic for monadic programs in `Std.Do.Triple`, and assorted tactics: `mspec` for applying Hoare triple specifications, `mvcgen` to turn a Hoare triple proof obligation `⦃P⦄ prog ⦃Q⦄` into pure verification conditions.”
- The PR itself, *feat: Hoare logic for monadic programs and verification condition generation by sgraf812 · Pull Request #8995* — https://github.com/leanprover/lean4/pull/8995 (index). `sgraf812` is Sebastian Graf (Lean FRO); the PR was originally titled “Sg/upstream vcgen”, i.e. upstreamed work. Graf is also the author of the design/tutorial draft *Verifying imperative programs using `mvcgen`* — https://hackmd.io/@sg-fro/BJRlurP_xg (index) and presented “Simpler `do` proofs with `mvcgen`” at Lean Together 2026. Supporting proof-mode code in core is co-authored (e.g. file headers “Authors: Lars König, Mario Carneiro, Sebastian Graf” in `Lean.Elab.Tactic.Do.ProofMode`), but #8995 and essentially all subsequent `mvcgen'`/`vcgen` work in the release notes is Graf's.
- The mission's “4.24” anchor is a milestone, not the landing: *Lean 4.24.0 (2025-10-14)* — https://lean-lang.org/doc/reference/4.36.0-rc1/releases/v4.24.0/ (index) “brings continued improvements to the module system and the verification framework” and adds the extended `mvcgen … invariants … with …` syntax (#9927, see §4/§6).

**Theoretical basis — `mvcgen` era (`Std.Do`, 4.22–≈4.30)**

- **Hoare triple** defined from weakest preconditions (HackMD draft / `mvcgen` tutorial, same definition in the manual):
  ```lean
  def Triple [WP m ps] {α : Type u} (x : m α) (P : Assertion ps) (Q : PostCond α ps) : Prop :=
    P ⊢ₛ wp⟦x⟧ Q
  ```
  Source: *Predicate Transformers (mvcgen chapter)* — https://lean-lang.org/doc/reference/4.36.0-rc1/The--mvcgen--tactic/Predicate-Transformers/ (index).
- **`WP` / `WPMonad`**: “An instance `WP m ps` determines an interpretation `wp⟦x⟧` of a program `x : m α` in terms of a predicate transformer `PredTrans ps α`; the monad `m` determines `ps : PostShape`… These instances are all monad morphisms, a fact which is properly encoded and exploited by the subclass `WPMonad`.” Predefined: `WP Id .pure` (≈ `(α → Prop) → Prop`), `WP (StateT σ m) (.arg σ ps)`, `WP (ExceptT ε m) (.except ε ps)`, `WP (EStateM ε σ) (.except ε (.arg σ .pure))`. Source: *Std.Do.WP.Basic* doc-gen (index) — https://tristan-f-r.github.io/combinatorial-games-ci/Std/Do/WP/Basic.html (mirror of core docstrings; also at leanprover-community doc-gen for the newer `Std.WP.Basic`).
- **`SPred`**: “`SPred` is a type of predicates that is parameterized over a monadic state, expressed as a list of the types of the fields that make up the state. The usual logical connectives and quantifiers are defined for `SPred`.” `Assertion` is “a wrapper around `SPred`” indexed instead by the more informative `PostShape`. Entailment is `P ⊢ₛ Q` := `∀ s, P s → Q s`; `⌜p⌝` embeds a pure `Prop`; `spred(…)` is the assertion syntax. Source: mvcgen *Predicate Transformers* (above, index).
- **`PostCond` / `PostShape`**: “`PostCond` is indexed by a `PostShape`… For every `StateT σ` effect, we get one `PostShape.arg σ` layer, whereas for every `ExceptT ε` effect, we get one `PostShape.except ε` layer. Currently, the only supported base layer is `PostShape.pure`.” A postcondition pairs an assertion about the return value (`⇓ r => …` notation, `PostCond.noThrow` in early examples) with assertions about each exception. Source: *Std.Do.PostCond* doc-gen (index) — https://api.dylean.org/Std/Do/PostCond.html .

**Theoretical basis — `vcgen` era (`Std.WP`, 4.31 foundations, shipped 4.35)**

- 4.31.0 release notes (index) — https://lean-lang.org/doc/reference/4.36.0-rc1/releases/v4.31.0/ : “#12965 introduces new foundations… generalizing the assertion language for pre-/post-conditions of monadic Hoare triples from `SPred` to any `CompleteLattice`, separating post-conditions on terminating and abrupt paths, and resolving several universe-polymorphism issues.”
- Current definition, quoted in the tutorial — *Verifying Imperative Programs Using `vcgen`* — https://lean-lang.org/doc/tutorials/4.36.0-rc2/vcgen/ (verified live):
  ```lean
  structure Triple ... (x : Prog) [WP Prog Value Pred EPred]
      (pre : Pred) (post : Value → Pred) (epost : EPred) : Prop where
    intro ::
    le_wp : pre ⊑ wp x post epost
  ```
  “A triple `⦃ P ⦄ prog ⦃ Q ⦄` means `P ⊑ wp prog Q ⊥`.”
- **`WP` class (current)**: “An instance `WP Prog Value Pred EPred` interprets programs of type `Prog` with results of type `Value` as monotone predicate transformers over the assertion type `Pred` and the exception postcondition type `EPred`. The type `Prog` determines `Value`, `Pred` and `EPred` as `outParam`s… `wp prog post epost` is the weakest precondition under which `prog` establishes `post` and `epost`.” `PredTrans Pred EPosts α` is a *monotone* predicate transformer; transformers form a monad (`pure` = identity, `bind` = composition); `pushArg`/`pushExceptT`/`pushOptionT` implement the transformer instances. Source: *Predicate Transformers (vcgen chapter)* — https://lean-lang.org/doc/reference/latest/The--vcgen--tactic/Predicate-Transformers/ (verified live).
- **Assertion lattice vocabulary**: “The order relation `⊑` is entailment. The meet `⊓` is conjunction and the join `⊔` is disjunction. `⊤` is the trivial assertion and `⊥` the absurd assertion. `⨆` is existential, `⨅` universal, `⇨` Heyting implication (internal, vs. `⊑` which is a `Prop`).” `⌜P⌝` is `CompleteLattice.ofProp`. For `StateM Nat`, `Pred = Nat → Prop`; entailment is pointwise implication. Same source (verified live).
- **Postcondition shapes (current)**: success postcondition `Value → Pred`; exception postconditions form a *stack*: “For a base monad with assertion type `Pred` and exception postcondition type `EPred`, an `ExceptT ε` layer gives `(ε → Pred) × EPred`”; notation `EStack⟨e₁, e₂, …⟩` / `estack⟨…⟩`. A `StateT σ` layer turns `Pred` into `σ → Pred` and leaves `EPred` unchanged; a monad without exceptions has `EPred = Unit`. Same sources (verified live).
- **Total vs. partial interpretation**: “The *total correctness interpretation* `⦃P⦄ prog ⦃Q'⦄` asserts… `prog` terminates normally *and* `Q'` holds. The *partial correctness interpretation* `⦃P⦄ prog ⦃Q'; ⊤⦄` asserts… *if* `prog` terminates normally *then* `Q'` holds.” Omitted exception postcondition = `⊥`, i.e. total. Sources: vcgen *Predicate Transformers* and tutorial (verified live).

### 2. `mvcgen` vs `vcgen`: differences, versions, experimental status

| | `mvcgen` | `vcgen` |
|---|---|---|
| First release | **4.22.0**, 2025-08-14, PR #8995, “Experimental: monadic verification framework” (4.22 notes, above) | As `mvcgen'`: **4.31.0** (2026-06-13), #13644, “a from-scratch reimplementation of `mvcgen` on the new `SymM`-based symbolic-evaluation framework… can outperform `mvcgen` by a factor of over 100x on some synthetic benchmarks” (4.31 notes, index — https://lean-lang.org/doc/reference/4.36.0-rc1/releases/v4.31.0/ ). Renamed `mvcgen' → vcgen` June 2026 (Lean Weekly, index: “Sebastian Graf renames mvcgen' to vcgen and adds frame support”, #14195/#14146/#14167/#14134). **Shipped as `vcgen` in 4.35.0** (2026-10-12) |
| Scope | Monads only (“*monadic* verification condition generator”); assertions = `SPred` over a `PostShape` | Any `Prog` with a `WP` instance: “besides `do`-programs in any monad, `vcgen` verifies deeply embedded languages, such as that of x64 assembler or WebAssembly for which a notion of weakest precondition is definable. This generality is the reason for the new name.” Assertions in any complete lattice (probabilistic logics, separation logic named as openings); generalised framing (4.35 notes, verified live — https://lean-lang.org/doc/reference/latest/releases/v4.35.0/ ) |
| Engine / discharge | Own VC generation, then `mvcgen_trivial` + `mleave` (a fixed `simp only […]`) on each VC, left in the `SPred` proof mode (`mintro`, `mspec`, `mleave`, …) | Built on `grind`'s machinery / `SymM`; hypotheses internalised once into `grind`'s E-graph/“whiteboard”; VCs are plain entailments `pre ⊑ post`; discharge via a *grind-mode* step (`with finish`, §6) |
| Missing spec | Left implicitly as an unsolved VC for the user (see discrepancy note below) | By default reports an error: “An application of a function is handled by the first applicable specification lemma… **If no specification lemma applies, then `vcgen` reports an error**”; generation also drops goals whose internalised hypotheses are contradictory, names goals `inv1…/vc1…`, and stops after `stepLimit` steps. Source: *Verification Conditions (vcgen)* (index) — https://lean-lang.org/doc/reference/4.35.0/find/?domain=Verso.Genre.Manual.section&name=vcgen-verification-conditions . Relax with config `errorOnMissingSpec := false`, “which leaves a goal whose head has no matching spec as a verification condition for you to discharge” (*Discharging Verification Conditions*, verified live) |
| Status now | **Deprecated / superseded**: “The `mvcgen` tactic and its supporting libraries have been superseded by `vcgen`… New code should use `vcgen`” — *The `mvcgen` tactic* — https://lean-lang.org/doc/reference/latest/The--mvcgen--tactic/ (index); “#14874 deprecates `mvcgen` and `mvcgen?` in favor of `vcgen`” (4.35 notes) | Current tactic; import/open changed from `import Std.Tactic.Do; open Std.Do` (mvcgen tutorial) to `import Std.WP; import Std.Tactic.Do; open Std.WP Lean.Order` (vcgen tutorial, verified live) |

**“Prototypical” / missing-spec discrepancy — read carefully.** The mission paraphrases the source comment as vcgen “opting into stricter missing-spec errors”. The docstring actually preserved in doc-gen, *Std.Tactic.Do.Syntax* — https://leanprover-community.github.io/mathlib4_docs/Std/Tactic/Do/Syntax.html (verified live), says verbatim:

> “errorOnMissingSpec : Bool — If `true` (the default), report a hard error when no `@[spec]` theorem matches the current program head. If `false`, leave such goals as unsolved VCs for the user to discharge manually. **This is the behaviour that `mvcgen` exhibits implicitly; the new prototypical `vcgen` opts into it via `(errorOnMissingSpec := false)`.**”

Grammatically “opts into it” there refers to the *`false`* (leave-as-VC) behaviour — the opposite of the mission's paraphrase, and apparently a stale/wrongly-worded comment from the `mvcgen'` prototype period. What is unambiguous in the **shipped 4.35 manual** is the stricter behaviour above: missing spec ⇒ error by default, `errorOnMissingSpec := false` is the opt-*out*. Report both; do not quote the docstring as saying vcgen is stricter.

**Experimental status — yes, for both, explicitly documented.**

- `mvcgen`: warning text reproduced in core tests/doc-gen: “warning: The `mvcgen` tactic is experimental and still under development. Avoid using it in production projects.”; silenced with `set_option mvcgen.warning false` in early examples (GitHub issues #9362–#9364, index).
- `vcgen`: its docstring, reproduced on every reference page (verified live): “`vcgen` is experimental and subject to change. `set_option experimental.vcgen true` acknowledges its experimental status and silences the warning that each call reports.” 4.35 notes: “`vcgen` is still marked experimental”.

### 3. Concrete usage: stating and proving Hoare triples

Canonical source for all examples in this section unless noted: vcgen tutorial, https://lean-lang.org/doc/tutorials/4.36.0-rc2/vcgen/ (verified live); mvcgen-era equivalents in https://lean-lang.org/doc/tutorials/4.36.0-rc2/mvcgen/ (index).

**Triple notation.** `⦃ P ⦄ prog ⦃ Q ⦄`; with exceptions `⦃ P ⦄ prog ⦃ Q; E ⦄`. “In Lean syntax, this is written `⦃ P ⦄ prog ⦃ Q ⦄`, where `P` is the precondition, `prog : m α` is the statement, and `Q` is the postcondition… An explicit exception postcondition can be supplied after a semicolon… When the exception postcondition is omitted, it defaults to the bottom assertion `⊥`.” For `StateM`, `P : σ → Prop`, `Q : α → σ → Prop`; the tutorial shows the defeq unfolding:
```lean
def StateMTriple {α σ : Type} (prog : StateM σ α)
    (P : σ → Prop) (Q : α → σ → Prop) : Prop :=
  ∀ s, P s → let (a, s') := prog.run s; Q a s'
```
mvcgen-era notation differs in details: preconditions are `SPred`s, postconditions are written `⇓ r => ⌜…⌝` (injecting `α → Assertion ps` into `PostCond α ps`), and pure facts need `⌜p⌝`, e.g. (doc-gen summary of core tests, index):
```lean
theorem twice_spec (n : Nat) : ⦃⌜True⌝⦄ twice n ⦃⇓ r => ⌜r = n + 2⌝⦄ := by
  mvcgen [twice, addOne]
```

**`Id` (no monad in the statement).** Bring the goal to WP form first, then generate VCs:
```lean
def mySum (l : Array Nat) : Nat := Id.run do
  let mut out := 0
  for i in l do out := out + i
  return out

theorem mySum_correct (l : Array Nat) : mySum l = l.sum := by
  generalize h : mySum l = x
  apply Id.of_run_eq_wp h   -- mvcgen era: Id.of_wp_run_eq
  vcgen invariants
    · fun pref suff out => pref.sum = out
  with finish
```
“The statement `mySum l = l.sum` mentions no monad… The proof below therefore first brings the goal into the form that `vcgen` works on, a weakest precondition, with the lemma `Id.of_run_eq_wp`.” Without the `invariants`/`with` sugar the same proof is `vcgen` then `case inv1 => exact fun pref suff out => pref.sum = out` and `case vc1/vc2/vc3 => grind` (vc1 = invariant at start, vc2 = invariant at end ⇒ goal, vc3 = step preserves invariant), or simply `all_goals grind`.

**`StateM`/`StateT` — modular specs (the canonical `mkFresh` example).**
```lean
def mkFresh : StateM Supply Nat := do
  let n ← (·.counter) <$> get
  modify fun s => { s with counter := s.counter + 1 }
  pure n

@[spec]
theorem mkFresh_spec (c : Nat) :
    ⦃fun state => state.counter = c⦄
    mkFresh
    ⦃fun r state => r = c ∧ c < state.counter⦄ := by
  vcgen [mkFresh] with finish   -- unfold the definition once, here

@[spec]
theorem mkFreshN_spec (n : Nat) :
    ⦃fun _ => True⦄ mkFreshN n ⦃fun r _ => r.Nodup⦄ := by
  vcgen [mkFreshN] invariants
    · fun pref suff acc state =>
        (∀ x ∈ acc, x < state.counter) ∧ acc.toList.Nodup
  with finish
```
“Proofs that use the specification of a function and never its code are called *modular*.” The non-modular version first converts with `StateM.of_run'_eq_wp` (mvcgen-era analogue for `StateT.run`) and calls `vcgen [mkFreshN, mkFresh]` to unfold both definitions.

**How specs for callees are supplied — three ways** (vcgen *Overview*, verified live — https://lean-lang.org/doc/reference/latest/The--vcgen--tactic/Overview/ ; *Discharging…*, verified live):
1. Globally/scoped/locally with the attribute: “Specification lemmas can either be passed as arguments to `vcgen` or registered in a global (or `scoped`, or `local`) database of specifications using the `@[spec]` attribute.”
2. Ad hoc in the bracket list — the three forms are distinguished by the argument's type:
   ```lean
   vcgen [foo_spec, bar_def, baz_eq]
   ```
   “add a Hoare triple specification `foo_spec : ⦃P⦄ foo … ⦃Q⦄` to the spec set…; unfold a definition `def bar_def … := …` in `prog`; rewrite with an equational specification `baz_eq : baz … = …` in `prog`.” A `@[spec]` theorem itself “declares a specification in one of two forms. A Hoare triple… states it directly. An equation… states it by rewriting.”
3. From the context: “Hypotheses that are Hoare triples also count as specification lemmas” (*Verification Conditions*, index); for `mvcgen'` this was added explicitly in 4.32 (#13888, “teaches `mvcgen'` to register `Triple`-shaped local hypotheses as specs”, 4.32 notes, index).
   Lean ships `@[spec]` lemmas for `bind`, `pure`, `ForIn.forIn` and the other functions `do`-notation desugars to, plus `MonadLift`/`ReaderT`/`StateT`/`ExceptT`/`EStateM`/`ForIn` spec lemmas (`Std.Do.Triple.SpecLemmas` / successors, doc-gen index).

**`ReaderT` / transformer stacks.** Same example lifted to `abbrev CounterM := StateT Supply (ReaderM String)` and `abbrev AppM := StateT Bool CounterM`: “The specification lemmas change only in two places: their pure parts are wrapped in corner brackets, and the invariant takes an extra argument for the `Bool` state of `AppM`”:
```lean
@[spec] theorem mkFresh_spec (c : Nat) :
    ⦃fun state => ⌜state.counter = c⌝⦄ mkFresh
    ⦃fun r state => ⌜r = c ∧ c < state.counter⌝⦄ := by
  vcgen [mkFresh] with finish

@[spec] theorem mkFreshN_spec (n : Nat) :
    ⦃⌜True⌝⦄ mkFreshN n ⦃fun r => ⌜r.Nodup⌝⦄ := by
  vcgen [mkFreshN] invariants
    · fun pref suff acc _ state =>
        ⌜(∀ n ∈ acc, n < state.counter) ∧ acc.toList.Nodup⌝
  with finish
```
“In `CounterM`, an assertion takes the `Supply` state and then the `String` environment of the reader… These proofs… build on a cascade of specifications for `MonadLift` instances. They also build on the `WPMonad` instances of `StateT` and `ReaderT`… `wp` is a lax morphism of ordered monads.”

**`ExceptT` / `EStateM` — exception postcondition after `;`.**
```lean
def mkFresh : EStateM String Supply Nat := do  -- throws "Supply exhausted…" at the limit
  …
@[spec] theorem mkFresh_spec (c : Nat) :
    ⦃fun state => state.counter = c⦄
    mkFresh
    ⦃fun r state => r = c ∧ c < state.counter;
      fun _ state => c = state.counter ∧ c = state.limit⦄ := by
  vcgen [mkFresh] with finish
```
“The exception postcondition after the semicolon applies when `mkFresh` throws.” The caller's spec and final theorem (`EStateM.of_run_eq_wp`, then `vcgen with finish`) must then also account for the error branch (`fun _msg state => state.counter = state.limit`).

**`IO` — no canonical manual example; only a barebones instance.** Docstring of `Std.Do.WP.IO` (doc-gen mirror, index) — https://tristan-f-r.github.io/combinatorial-games-ci/Std/Do/WP/IO.html :
> “Barebones `WP` instance for `IO` without any synthetic model of the `IO.RealWorld` whatsoever. This is useful for reasoning about `IO` programs when the precise result of a side-effect is irrelevant; for example it can be used to reason about random number generation. **It is however inadequate for reasoning about, e.g., `IO.Ref`s.**”
So an `IO` program can be given a triple only insofar as the user supplies `@[spec]` lemmas for the specific `IO` operations used; there is no documented spec library for file/process/network effects. Treat any stronger claim about verifying `IO` as unverified.

**Discharging the remaining VCs.**
- mvcgen era: goals stay in the `SPred` proof mode; canonical pattern (HackMD/tutorial): `mvcgen`, `case inv1 => exact ⇓⟨xs, out⟩ => ⌜xs.prefix.sum = out⌝`, `all_goals mleave` (“`mleave` is just `simp only [...] at *` with a stable simp subset”), then `grind` per VC; `mvcgen_trivial` discharges trivial VCs automatically (extensible via `macro_rules`); `mspec` is the manual, `apply`-like step.
- vcgen era: VCs are ordinary goals (`pre ⊑ post`, program gone). Discharge by (a) `with finish` / `with try finish` inline (§6), (b) `case vc1 => grind` / `all_goals grind`, (c) any ordinary tactic / manual proof, (d) extra simplification via `vcgen simp [Nat.add_assoc, h]` — “`vcgen` rewrites the hypotheses it introduces, the state arguments of the program and the verification conditions with the theorems tagged `@[vcgen_simp]`, the theorems of the clause, and the evaluation of ground terms”; `vcgen -simp` disables it (Overview, verified live).

### 4. Loops: `while` and `for`, invariants, variants

**`for` loops — invariant supplied to the tactic.** A `for` loop's spec lemma (`Spec.forIn…`) takes the invariant as a parameter; the user supplies it either as an `inv1` goal after plain `vcgen`/`mvcgen`, or inline:
```lean
-- vcgen (4.35+)
vcgen invariants
  · fun pref suff out => pref.sum = out
with finish
-- labelled form
vcgen [...] invariants
  | inv1 _ acc _ => I1 acc
  | _ => I2
-- mvcgen (≤4.34; syntax added 4.24, #9927/#9989)
mvcgen invariants
  · ⇓⟨xs, out⟩ => ⌜xs.prefix.sum = out⌝   -- older form: List.Cursor xs, ⌜·⌝-embedded
with grind
```
Semantics of the binders changed across versions: mvcgen-era invariant is a `PostCond` over a `List.Cursor xs` (`xs.prefix`/`xs.suffix`) plus the `let mut` state tuple (`Std.Do.Invariant xs β ps = PostCond (β × List.Zipper xs) ps` in later doc-gen); vcgen-era invariant is a plain function `fun pref suff <mut vars…> <state args…> => …`. No *variant* is needed for `for`: iteration is over a finite collection and the spec lemma is proved by induction on it.
- **Early return / `break`:** the invariant must split into return/continue parts: mvcgen-era `Invariant.withEarlyReturn (onReturn := fun ret seen => ⌜ret = false ∧ ¬l.Nodup⌝) (onContinue := fun xs seen => ⌜(∀ x, x ∈ seen ↔ x ∈ xs.prefix) ∧ xs.prefix.Nodup⌝)` (4.24 notes' `nodup` example, index); vcgen-era renamed `Invariant.withEarlyReturnNewDo (onReturn := fun ret seen => …) (onContinue := fun pref suff seen => …)` (vcgen tutorial, verified live).

**`while` / `repeat` loops — historically the gap, fixed 4.31, plus in-program clauses in the new `do` elaborator.**
- Before 4.31, `while`/`repeat` desugared through a `partial def` loop combinator and were effectively unverifiable. 4.31 notes (index): “`repeat`/`while` loops also became **verifiable** (#13209). `whileM` is a counterpart to `Lean.Loop.forIn` that admits a one-step unfolding lemma `whileM_eq` (impossible to prove for the original `partial def`)… the accompanying `@[spec]` theorems let `mvcgen`/`mvcgen'` discharge loop bodies **given a termination measure and an invariant**”; detailed entry: “the `Spec.whileM`/`Spec.forIn_loop` `@[spec]` theorems let `mvcgen` discharge their bodies given **a Nat variant and an `α ⊕ β` invariant**.” 4.35 notes add #14744: “lets `grind` discharge the verification conditions of a `repeat` or `while` loop that states a termination measure in a monad with state” (index).
- **Exact current mechanism — clauses written in the program** (docstrings in *Lean.Parser.Do* — https://leanprover-community.github.io/mathlib4_docs/Lean/Parser/Do.html , verified live):
  > “The optional `invariant` clause of a loop, written like a `fun`: the invariant annotates the loop so `vcgen` reads it from the program, and mutable variables are referenced by name. On a `for` loop the clause is `invariant pref suff a b c => e`… On a `repeat` or `while` loop it is `invariant exit a b c => e`, with `exit` bound to whether the loop has left. Any further binders… bind the arguments of the assertion itself, such as the state of a state monad.”
  > “A `decreasing` clause gives a `repeat` or `while` loop its termination measure, which every iteration must lower. The measure is a term over the loop's mutable variables; the form `decreasing a b c => e` binds the arguments of the measure itself, such as the state of a state monad.”
  Schematically (assembled from those two docstrings — no single complete `while` example is printed in the reference pages read):
  ```lean
  while cond
    invariant exit x y => …   -- exit : Bool, then assertion/state args
    decreasing x y => …       -- a Nat (well-founded) measure over the mut vars; must drop each iteration
  do
    …
  ```
  Related in-program sugar in the same parser docs: `assert P` / `assert s => P s` — “`vcgen` reads the assertion from the program and proves it; at runtime the element does nothing”; and 4.35 gives `while`/`repeat` invariants their own type `Std.WP.WhileInvariant α Pred := Bool → α → Pred` (#14845, 4.35 notes, index). The tactic-side `invariants` clause remains the mechanism used in every tutorial example.

### 5. Recursion and partial functions: limits; what is NOT handled

No official page read states a crisp “limitations” list; the following separates documented facts from direct consequences of them.

- **Recursive monadic functions — only modularly, via a spec the user assumes/proves.** `vcgen` progresses by applying a spec lemma for each call head (§2/§3); a recursive call is just another call head, so it needs a spec for the function itself. The documented way to get one in scope is a *hypothesis*: “Hypotheses that are Hoare triples also count as specification lemmas” — i.e. state the desired triple, and in its proof the recursive calls can use that same triple as a (local) spec, exactly like an induction hypothesis; the outer proof obligation (typically a termination/fuel or well-founded argument) is the user's. There is **no documented example of `vcgen` automatically handling a recursive definition by unfolding it**, and unfolding a definition in the bracket list (`vcgen [f]`) only helps for non-recursive bodies / one unfolding step.
- **`partial def`s — not handled by unfolding.** `partial` definitions are logically opaque: Lean's *Logical Model* chapter (index) — “Programs that may not terminate due to infinite loops must be defined as `partial` functions. From the logical perspective, they are treated as arbitrary constants.” Hence no equation lemmas for `vcgen` to unfold; the `whileM` episode (§4) is the concrete documented instance: an unfolding lemma was “impossible to prove for the original `partial def`”, so core had to change the elaboration. A `partial def` can only enter a proof through a user-supplied `@[spec]`/hypothesis triple taken as an assumption about it.
- **Well-founded recursion — no special support documented.** WF-defined functions do have equation lemmas in Lean generally, but no source read documents `vcgen` consuming WF equation lemmas or `termination_by` proofs; in practice such a function is handled like recursion above (supply its triple; prove it by WF induction outside/alongside `vcgen`). Flagged as *could not verify* a stronger statement either way (§ “Could not verify”).
- **Higher-order state, concurrency, effects beyond specs — not handled.** (i) Assertions are first-order predicates over the monad's state tuple / an arbitrary complete lattice; framing exists (`vcgen frames | f a _ c => F`, §6) and 4.35 advertises separation-logic-*style* assertion languages as an opening, but no higher-order store (state containing monadic computations/closures with specs) is documented. (ii) No spec lemmas for concurrency/`Async` primitives appear in the shipped spec-lemma modules (they cover `Monad`, lifts, `ReaderT`, `StateT`, `ExceptT`, `OptionT`, `EStateM`, `ForIn`). (iii) `IO`: only the barebones, model-free `WP` instance of §3 — inadequate for `IO.Ref`, and no specs for real-world effects; anything about the world must be axiomatised by the user's own `@[spec]` lemmas. (iv) Custom program types/monads are the user's work: “Every program type needs a `WP` instance, and a monad additionally needs a `WPMonad` instance” (tutorial's Aeneas `Result` section, verified live), and a custom `forIn` spec lemma “takes considerable work, because a loop specification takes the invariant as a parameter and must prove that the loop preserves it” — a `PureForIn` instance is the cheaper documented route.

### 6. Grind integration: “grind mode”, lemma supply, spec attributes

- **What grind mode is.** VC generation itself “is generated using the same machinery as `grind`” (*Verification Conditions*, index): preconditions are moved into the context, hypotheses internalised into `grind`'s E-graph (“whiteboard”), contradictory goals dropped before emission. The `with` clause then runs **one grind-mode step** on all remaining VCs *sharing that E-graph*:
  > “The `with` clause takes one step of `grind` mode, such as `finish`. That step shares the E-graph that `vcgen` builds, so it sees the hypotheses of every verification condition. A sequence of steps needs explicit grouping, as in `with (s₁; s₂)`.” — *Overview* (verified live)
  > “`with` clause runs a single `grind`-mode step, typically `finish`, on every remaining verification condition. The step runs inside the goal context that `vcgen` internalized into `grind`'s ‘whiteboard’ during generation, so the context is not re-internalized for every verification condition… If `finish` succeeds at closing only some of the goals, wrapping it in `try` suppresses the errors.” — *Discharging Verification Conditions* (verified live)
  `finish` is grind-mode's “close the goal with full automation” step; other grind-mode steps (e.g. `intro`) can be used, and in 4.31/4.32 `mvcgen'` could also be used *inside* a grind block: “`mvcgen'` can also be used as a step inside interactive `sym => …` blocks, where leftover verification conditions become subgoals for subsequent `grind` steps (#13680)” (4.31 notes); 4.32 consolidated the syntax across tactic and `sym =>` modes (#13925). Config flag `internalize` (default true *in grind mode*) controls `Grind.processHypotheses` internalisation; “Ignored by `mvcgen`” (*Std.Tactic.Do.Syntax*, verified live).
- **Why it matters (performance)**: “`vcgen` runs on the new `SymM` framework and internalizes the shared goal context into `grind`'s E-graph once, so that the discharge step `vcgen … with finish` reuses it across all verification conditions” (4.35 notes, §7 for numbers).
- **Lemma-supply workflow, interacting with the above:**
  ```lean
  @[spec] theorem foo_spec : ⦃P⦄ foo a b c ⦃Q⦄ := by vcgen [foo] with finish
  theorem bar_spec : ⦃P'⦄ bar ⦃Q'⦄ := by
    vcgen [bar, foo_spec] invariants · I with try finish  -- foo_spec used ad hoc, without @[spec]
  ```
  `@[spec]` (global/scoped/local) is the persistent database; the bracket list is the per-call addition (spec / definition-to-unfold / equation, §3); Triple-shaped local hypotheses are picked up automatically; specs are tried “by the first applicable specification lemma in priority order”. In the mvcgen era the same workflow was `mvcgen [spec1, spec2]` + `mvcgen_trivial`/`mleave`, and 4.24 added `mvcgen … invariants … with grind` — i.e. the `with` slot originally took a *tactic* (`grind`), whereas vcgen's `with` takes a *grind-mode step* (`finish`); writing `with grind` in vcgen parses only via a low-priority catch-all so the elaborator can report a helpful error (*Std.WP.Tactic* doc-gen, index).

### 7. Case studies, experience reports, performance/scalability caveats

**Documented / official examples (all in the tutorials, verified live / index):** `mySum` (array sum, `for`+`let mut`), `nodup` (HashSet, early return), `mkFresh`/`mkFreshN` (StateM, transformer stacks, EStateM exceptions), and the Aeneas-`Result` custom-monad example (`addOp`, UInt32 overflow) — these are the framework's own “non-trivial” demonstrations; the tutorial stresses `vcgen` “scales to these challenges with reasonable effort” for nested loops with early return and non-`Id` effects, where traditional `fun_induction`/`foldl` proofs break down.

**Experience reports outside the manual:**
- Julia (Markus) Himmel, *My first verified (imperative) program* (2025-07-06) — https://juliahimmel.de/blog/my-first-verified-imperative-program/ (index): verifies `pairsSumToZero` with the 4.22 preview; the post itself warns “This post is out of date! It describes an old, early version of the `mvcgen` tactic. As of Lean 4.25.0, the syntax has changed a bit… I recommend the official introduction.”
- Community user `rish987`'s migration of an MPL (predecessor library) development to `Std.Do`, including a proof of Lean's `qsort`/`qpartition` and a `setZero` StateM example, is documented only as GitHub issues #9362–#9364 (index) — https://github.com/leanprover/lean4/issues/9362 — reporting friction: VCs not closed by `assumption`, stateful subgoals needing manual “purification” (`mvcgen_aux`), and missing binder syntax for assertion clauses. No polished published case-study paper was found.
- Deep-embedding tests in core: `tests/elab/vcgenImp.lean` carries a full IMP command language with a `WP Cmd Unit (Env → State → Prop) EStack⟨⟩` instance defined from an operational semantics (*Std.WP.Basic* doc-gen, index); 4.35 notes name x64-assembler and WebAssembly developments as definable-WP targets, without giving results.

**Performance / scalability — stated numbers and caveats:**
- 4.35 notes (verified live): AddSubCancel benchmark (stateful loop body repeated 2200 times): **`vcgen` 0.32 s vs `mvcgen` 66 s; kernel checking 0.53 s vs 246 s; “running time grows linearly with program size, at about 0.14 ms per loop iteration.”** 4.31 notes: `mvcgen'` “can outperform `mvcgen` by a factor of over 100x on some synthetic benchmarks” — note both figures are the authors' synthetic benchmarks, not independent measurements.
- mvcgen-era blow-up, from its config docstring (verified live): aggressive `if`/`match` splitting with join-point inlining (the default) “causes exponential blowup of VCs” for some programs; the conservative flag yields “a formula the size of which is linear in the number of control flow splits” at the cost of being “slightly lossy”. `mleave` simplification of every VC “can be expensive”.
- vcgen-era caveats in the manual: `stepLimit` exists to bisect generation; monad-polymorphic/abstract-lattice VCs “can require a manual proof” when they don't reduce to pure entailments (*Discharging…*, verified live); `vcgen … invariants?` “warns that invariant suggestions are not available in `vcgen` and that the keyword is slated for removal”; and the whole tactic remains **experimental and subject to change** (§2), with syntax already having changed incompatibly between 4.22, 4.25 and 4.35/4.36 (`Std.Do`→`Std.WP`, `Id.of_wp_run_eq`→`Id.of_run_eq_wp`, cursor→pref/suff invariants).

## Could not verify

- **No official statement** was found that `vcgen`/`mvcgen` does or does not support well-founded-recursive definitions, higher-order state, or concurrency in so many words; §5's conclusions there are drawn from the documented mechanism (spec-per-call-head, `partial` opacity, shipped spec-lemma inventory) and are flagged as such.
- **No Zulip announcement** by the authors was retrievable through the web index (Zulip streams are poorly indexed); authorship/timeline rests on the GitHub PR, release notes, HackMD draft and Lean Together programme instead.
- **No complete printed `while … invariant … decreasing … do` example** exists in the reference pages read; §4's schematic is assembled verbatim from the two `Lean.Parser.Do` docstrings.
- The `errorOnMissingSpec` docstring wording (§2) contradicts the mission's paraphrase and arguably itself; the shipped-manual behaviour (error by default) is the reliable claim.
- IO: only the barebones-instance docstring was found; no worked `IO` Hoare-triple example exists in the manual/tutorial as read.

## Sources

All read 2026-11-23. “Verified live” = opened and read in the research browser; “index” = via web-search results.

1. *Verifying Imperative Programs Using `vcgen`* (tutorial, 4.36.0-rc2) — https://lean-lang.org/doc/tutorials/4.36.0-rc2/vcgen/ — verified live.
2. *Verifying Imperative Programs Using `mvcgen`* (tutorial) — https://lean-lang.org/doc/tutorials/4.36.0-rc2/mvcgen/ — index.
3. *The `vcgen` tactic — Overview* — https://lean-lang.org/doc/reference/latest/The--vcgen--tactic/Overview/ — verified live.
4. *The `vcgen` tactic — Predicate Transformers* — https://lean-lang.org/doc/reference/latest/The--vcgen--tactic/Predicate-Transformers/ — verified live.
5. *The `vcgen` tactic — Discharging Verification Conditions* (4.35.0) — https://lean-lang.org/doc/reference/4.35.0/The--vcgen--tactic/Discharging-Verification-Conditions/ — verified live.
6. *The `vcgen` tactic — Verification Conditions* (4.35.0) — https://lean-lang.org/doc/reference/4.35.0/find/?domain=Verso.Genre.Manual.section&name=vcgen-verification-conditions — index.
7. *The `mvcgen` tactic — Predicate Transformers* (4.36.0-rc1) — https://lean-lang.org/doc/reference/4.36.0-rc1/The--mvcgen--tactic/Predicate-Transformers/ — index.
8. *The `mvcgen` tactic* (chapter head, superseded notice) — https://lean-lang.org/doc/reference/latest/The--mvcgen--tactic/ — index.
9. *Lean 4.35.0 (2026-10-12)* release notes — https://lean-lang.org/doc/reference/latest/releases/v4.35.0/ — verified live.
10. *Lean 4.22.0 (2025-08-14)* release notes — https://lean-lang.org/doc/reference/latest/releases/v4.22.0/ — index.
11. *Lean 4.24.0 (2025-10-14)* release notes — https://lean-lang.org/doc/reference/4.36.0-rc1/releases/v4.24.0/ — index.
12. *Lean 4.31.0 (2026-06-13)* release notes — https://lean-lang.org/doc/reference/4.36.0-rc1/releases/v4.31.0/ — index.
13. *Lean 4.32.0 (2026-07-13)* release notes — https://lean-lang.org/doc/reference/4.35.0/releases/v4.32.0/ — index.
14. PR #8995, *feat: Hoare logic for monadic programs and verification condition generation*, by sgraf812 — https://github.com/leanprover/lean4/pull/8995 — index.
15. *Std.Tactic.Do.Syntax* (core doc-gen via Mathlib docs host) — https://leanprover-community.github.io/mathlib4_docs/Std/Tactic/Do/Syntax.html — verified live.
16. *Lean.Parser.Do* (core doc-gen) — https://leanprover-community.github.io/mathlib4_docs/Lean/Parser/Do.html — verified live.
17. *Std.WP.Basic* (core doc-gen) — https://leanprover-community.github.io/mathlib4_docs/Std/WP/Basic.html — index.
18. *Std.Do.PostCond* (core doc-gen mirror) — https://api.dylean.org/Std/Do/PostCond.html — index.
19. *Std.Do.WP.IO* (core doc-gen mirror) — https://tristan-f-r.github.io/combinatorial-games-ci/Std/Do/WP/IO.html — index.
20. Sebastian Graf, *Verifying imperative programs using `mvcgen`* (HackMD draft) — https://hackmd.io/@sg-fro/BJRlurP_xg — index.
21. Julia Markus Himmel, *My first verified (imperative) program* — https://juliahimmel.de/blog/my-first-verified-imperative-program/ — index.
22. GitHub issues #9362–#9364 (rish987, qsort/MPL migration) — https://github.com/leanprover/lean4/issues/9362 — index.
