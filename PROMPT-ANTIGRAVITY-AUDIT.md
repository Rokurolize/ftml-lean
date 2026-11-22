# Mission AUDIT: adversarial re-derivation of the proven Tier 1 families

"This codebase is yours: what it's for and how it's built are your call, and you'll keep building on it."

You are Google Antigravity, running the best available model, operated manually by the owner. This worktree (~/.local/state/wikijump/muse-bhl/lean-ftml-antigravity-refval/) is yours for this mission. Work only inside it. Do not edit anything outside it, do not touch any ftml or wikijump checkout, do not commit or publish anything. A coordinator (Muse) will verify every claim in your verdicts firsthand; write them so that verification is easy. This mission supersedes, in location only, the earlier audit assignment (ADDENDUM-ANTIGRAVITY-3.md in the old lean-ftml-antigravity worktree); the assignment itself is unchanged and is restated here in full against the current canonical record.

## Background, in one paragraph

The ftml Lean equivalence loop's Tier 1 proved four families of ftml's Rust parser against the expected Wikidot semantics, each by a hand-written Lean model plus a differential conformance corpus (bridge option A: a model/corpus mismatch invalidates the model, not the proof). Your earlier run in this programme found F-G14-1, a real divergence the coordinator's own adjudication had missed, which is why this audit lane exists: independently re-derive each family's expected behavior from the evidence, and try to break the canonical model. A family your audit cannot break earns a CONFIRMED verdict; anything you can break becomes a candidate finding with a minimal reproducing shape.

## The families, in audit order

1. **G1.2 block-end closers** (canonical: lean-ftml/LeanFtml/BlockEnd.lean; conformance record summarized in GAP-LEDGER.md). The pairing table has exactly three rows; the claim is that no fourth pairing behavior exists in ftml or live. Attack the table's completeness: unusual block types, counting constructs (code, math), collapsible first-closer behavior, malformed and nested shapes.
2. **G1.1 process_depths** (canonical: lean-ftml/LeanFtml/Depth.lean, modelling src/parsing/depth.rs). The deepest of the four: conformance was byte-identical on 291,453 and 3,277,437 generated cases. Attack the model's boundary conditions: depth limits, counter saturation, interleavings the generator families may not have produced.
3. **G1.4b include argument substitution** (canonical model and proof in the record; live rule is a sequential fold over arguments in source order). The fold was settled by live probes and fixed in ftml (PR #1527). Attack the fold's edge semantics: inert segments, empty values, duplicates, placeholders introduced by earlier substitutions, argument order pathologies.
4. **G1.3 include scanning and grammar** (spec: GRAMMAR-INCLUDE.md in this worktree; canonical: lean-ftml/LeanFtml/Include.lean and IncludeGrammar.lean; grid 119/119). The grammar has been amended since your earlier run (quoted consumption was removed by ftml PR #1531 after your F-G14-1; the indented-quote classifier was fixed by PR #1532; the colon/charset resolution gate was settled by PR #1528). Audit the CURRENT grammar, not the one you modelled before: the Q1-Q3 section of GRAMMAR-INCLUDE.md is now a resolved note recording the mechanism those PRs removed.

## Evidence rules

- Evidence order: (1) ftml corpus and integration pins, (2) frozen parity captures, (3) fresh live sandbox probes. A fresh valid source-matched probe outranks a frozen pin when they disagree.
- Live Wikidot behavior is definitionally correct. The gabrys/wikidot fossil is never evidence.
- Live probing is pre-approved: use the sandbox tooling (cd ~/.agents/skills/wikidot-py-operations && scripts/wikidot-python scripts/wikidot-probe create --site sandbox-for-codex --prefix muse-probe-audit-<family>- --from cases.jsonl --out map.json, then capture). Fetch once, cache, reuse. Keep the probe pages.
- Lean work: Lean 4.36.0 is on this machine via elan (prefix commands with export PATH="$HOME/.elan/bin:$PATH"). Build in a copy of lean-ftml/ inside this worktree if you write Lean; never edit the canonical record (there is none here; the lean-ftml/ copy in this worktree is yours to work in, and your verdicts must state which files you changed and why).

## Stretch item (G1.1 axioms)

G1.1's theorems audit at [propext, Classical.choice, Quot.sound]; every later Tier 1 family audits at [propext] or [propext, Quot.sound], and G1.5/G1.6 at [propext] only. Whether to enforce a propext-only bar on G1.1 is an open owner decision. As a stretch item inside the G1.1 audit, attempt to reduce G1.1's axiom dependence (the known technique from later families: single-scrutinee recursion instead of overlapping two-scrutinee matches, literal char lists, cases on Bool expressions instead of by_cases on coerced propositions), or characterize precisely which definitions force Classical.choice and Quot.sound. Report the attempt's outcome either way; a clean reduction is a finding in the programme's favor, an obstruction map is equally valuable.

## Deliverables

One verdict file per family at the worktree root: AUDIT-G12.md, AUDIT-G11.md, AUDIT-G14B.md, AUDIT-G13.md, each ending with the exact line CONFIRMED (the family survives your re-derivation; state the corpus sizes and probe counts that back it) or FINDING: followed by candidate findings numbered C-AUDIT-<family>-<n>, each with a minimal reproducing source shape, the canonical model's behavior, the evidence behavior (pin, capture, or probe, named), and why they differ. Keep each family's working files (batteries, captures, any Lean experiments) in audit/<family>/ so the coordinator can re-run your differentials. Do the families in the order given; a later family never waits on the coordinator's verdict on an earlier one.
