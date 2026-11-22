# Proposed structure for the expected-semantics layer

Status: PROPOSAL for the owner's review at the inventory milestone. No proofs have been started. Decisions flagged ◆ are the owner's (or are decided by evidence gathered in the first proof wave and reported back).

## The problem, honestly

"Prove the Rust equals the PHP" cannot be the theorem statement: the PHP that survives (gabrys/wikidot Text_Wiki) is a fossil that provably disagrees with live Wikidot in places, and live behavior is the definition. So the proof has three layers, and only the middle one is mathematics:

1. **Evidence layer** (not formal): pins, frozen captures, live probes. Each expected-behavior claim carries a provenance pointer to one of these.
2. **Spec layer** (Lean): an executable AST semantics, `Spec.parse : String → SpecTree` (plus `Spec.preprocess`, `Spec.include`), written to *be* the evidence layer's claims in executable form. Where PHP structure and live behavior agree, the spec follows the PHP's evident structure (two-stage inline pairing, body-scan closers) because that structure is what makes the live quirks derivable rather than enumerated. Where they disagree, the spec follows live, and the disagreement is logged as a finding.
3. **Implementation layer** (Lean model of ftml): a model of the Rust pipeline close enough that equivalence `Model.parse = Spec.parse` is a meaningful claim, kept honest by a conformance bridge (below).

## Proposed Lean project

- Location: ~/workspace/ftml-lean-equivalence/lean-ftml/ (VM-first, mirroring lean-sql-opt's placement; WSL copy when DSH lanes join). Lean 4.36.0, no dependencies beyond the toolchain, lake build green, no sorry, axiom audit at most propext — the lean-sql-opt house standard, verbatim.
- Modules (one per pipeline stage, mirroring INVENTORY.md §1): `Spec/Tree.lean` (spec AST), `Spec/Preprocess.lean`, `Spec/Include.lean`, `Spec/Token.lean`, `Spec/Parse.lean` (per-family files under `Spec/Rules/`), `Model/…` (same shape, modeling the Rust), `Equiv/…` (one equivalence file per gap-ledger family, named by ledger ID so the ledger and the proof corpus stay in sync mechanically).

## The bridge problem (the central honesty decision) ◆

A Lean model of Rust code can drift from the Rust. Three options:

- **A. Hand model + conformance corpus (recommended for wave 1).** The Model layer is written from the Rust source; a differential harness runs the spec/model (compiled from Lean) against real ftml on the full 2,797-case corpus plus generated inputs, and any mismatch invalidates the model, not the proof. This is exactly how the existing E harnesses earn trust (enumeration on the real code), extended: proofs are about the model, conformance is about the model↔code link, and the link is continuously tested rather than proved. Honest, achievable, and it reuses the corpus.
- **B. Extracted model.** Mechanically translate the Rust subset to Lean. No such extractor exists in the house; building one is a project of its own and the recursive-Vec experience with Kani (abandoned at 3 rows) is a warning about the shape of this code.
- **C. Verify the Rust directly (Kani/Creusot-style).** Already falsified as the primary route by the process_depths experience; may still serve for small leaf properties.

Recommendation: A, with the conformance corpus treated as part of the proof corpus's CI (a family is PROVEN only when its theorems build AND its conformance slice is green). If the owner wants B/C for a specific family, that is a per-family decision recorded in the ledger.

## Spec-writing rules (so the spec cannot quietly become "whatever ftml does")

1. Every spec rule cites its evidence (corpus case path, frozen pool ID, or probe page + capture file) in a comment at the rule. A rule with no evidence does not enter the spec; it enters the ledger as a question.
2. Adjudication order is the standing one: existing pins first, then frozen captures, then a fresh live probe. Probe once, cache, reuse.
3. Where live behavior is known only at render level (the frozen pool gives HTML, not ASTs), the spec rule is stated at render level for that family until a parse-level probe (saved page → tree comparison) pins the AST. tree.json alone is ftml's own claim and cannot be its own evidence.
4. The two-stage inline-scope model (ruling 2026-11-04) is the canonical example: stage 1 in Spec/Parse, stage 2 in the render semantics, and the equivalence theorem states which stage each observable belongs to.

## First proof wave (proposed, not started)

Tier 1 of the ledger, in order: G1.1 process_depths (smallest total function, E-mapped, no spec ambiguity — the spec IS the E property), then G1.2 block-end closers, then G1.3/G1.4 include (grammar adjudication first, likely needing live probes), G1.5 paragraph-stack correctness, G1.6 seam adjudication formalized. In parallel, G0.1/G0.2: the Tree spec for just the constructs those families touch, and the conformance harness skeleton. Tier 2/3 families follow once the bridge has earned trust on Tier 1.

## Scope questions for the owner ◆ — ALL SETTLED 2026-11-19

The owner approved this proposal as written ("Start proof wave 1 as proposed"), so: Q1 yes (modules parse-only, evaluation dispositioned to deepwell), Q2 parse-only for now (render equivalence not in scope), Q3 yes (Wikijump as delta semantics after Wikidot), Q4 yes (bridge option A is the standing honesty model; first exercised by G1.1, which matched the real Rust on 3,277,437 inputs).

One deviation from this proposal's own text, recorded honestly: the "axiom audit at most propext" house standard was NOT met by G1.1 (audit: [propext, Classical.choice, Quot.sound], no sorryAx; Quot.sound enters through the omega tactic itself). See GAP-LEDGER.md G1.1 for the remainder and the pending owner decision on the stricter bar.
