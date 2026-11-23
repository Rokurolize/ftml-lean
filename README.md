# ftml-lean: a Lean formalization of Wikidot parsing and rendering, against a PHP reference

This repository holds the proof programme whose goal is to establish, as far as the methods allow, that ftml (the Rust Wikidot parser and renderer used by Wikijump) behaves the way live Wikidot behaves. The claim is decomposed into three links, each carried by a different method. A PHP reference reconstruction of Wikidot's Text_Wiki behaviour is validated empirically against live Wikidot (probes, frozen captures, and a real-page corpus); a Lean mirror of that reference is proved equal to it in Lean 4; and ftml itself is held to the reference and the mirror by byte-exact differential conformance, with every divergence recorded as a numbered item on the ftml worklist.

The canonical publication of the PHP reference is the companion repository, Rokurolize/wikidot-php-reference, released as numbered snapshots. This repository holds the Lean side, a vendored copy of the reference, and the programme's own records.

## Layout

- `lean-ftml/` is the Lean project (Lake, toolchain leanprover/lean4:v4.36.0). The library root is `lean-ftml/LeanFtml.lean`; the mirror of the reference rules lives under `lean-ftml/LeanFtml/`, and the proof packages live under `lean-ftml/LeanFtml/Proof/` and the `Proof*` umbrella modules.
- `ref-php/` is the vendored copy of the PHP reference, kept byte-identical to the published snapshot it corresponds to.
- The programme records sit at the repository root. `STATE.md` is the living state of the programme. `COMPLETION-WBS.md` is the completion map and states the completion test. `GAP-LEDGER.md` is the numbered register of gaps, witnesses, and remainders. `WORKLIST-FTML.md` is the worklist handed to the ftml side. `GRAMMAR-INCLUDE.md` is the settled grammar for the include rule.
- `BRIEF-*.md` files are the tasking documents given to the agents that did the work; `REPORT-*.md` files are their delivered reports and the adjudication records. `conformance-*/` directories are the evidence outputs of the differential conformance runs. `tools/` holds the programme's own tooling.
- `ADVISOR-PROOF-POLICY.md` is the adopted architecture for the proof work: the two boundaries (empirical against live, formal against the reference), the foundation cores (ByteCore, PcreCore, UnicodeCore), the mechanically extracted RefTables, and the seven machine-checkable gates that define completion of the proof deliverable.
- `DECISION-21-AGY.md` is the current governing decision for the reference-validation package: a bounded closeout ending in a measured holdout gate, in place of open-ended adversarial hunting.

## State as of 2026-11-23

The reference is published through snapshot-38. The proof foundations are frozen at the tag `proof-base-v1` and have landed on main, with two UTF-8 round-trip bridge obligations honestly open. Thirteen proof packages (email, notes, divattr, raw, freelink, frame-include-code, next-final, block-middle, para-inline, composition, module, middle2, stage2, and the tableadv repair) have been delivered, independently re-verified from clean extractions, and adopted as PARTIAL with their remainders named; all are wired into the library, and main builds green from a clean extraction at 530 jobs. The Stage 2 tidy model's re-scoped certificate shows zero gaps over 21,672 reachable skeletons, with one 52-case family carried as a named residual. Reference validation (WBS package 2.1) is executing the bounded closeout directed by `DECISION-21-AGY.md`: a record repair and mechanical triage, one surgical correction round published as snapshot-39, and an untouched 150-page real-corpus holdout that must score at or under 2.0 percent divergent pages for the package to close.

## Working rules

Proof discipline: no `sorry` anywhere; theorems audit within Lean's standard core axioms (`propext`, `Classical.choice`, `Quot.sound`); `native_decide` and `bv_decide` are banned. Ground example pins are regression tests, never counted as proof. A family counts as proven only when its theorems build from a clean extraction and its conformance slice is green. Landings on this repository go through a branch and a pull request, as the reference's publications already do; lane work lives on `proof/*` branches until it is adopted onto main.
