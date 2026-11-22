/-
  LeanFtml.Tree — skeleton of the expected-semantics AST (spec layer).

  Scope of this skeleton: only the constructs that proof wave 1 (Tier 1 of
  the gap ledger) touches, plus the mapping discipline for everything else.
  Each variant names the ftml Rust type it corresponds to and the evidence
  class that justifies it (see ../SPEC-LAYER-PROPOSAL.md, rule 1: a spec
  rule with no evidence does not enter the spec).

  The full `Element<'t>` enum in ftml (src/tree/element/object.rs, ~50
  variants) is NOT mirrored here yet. Variants are added family by family,
  in gap-ledger order, as their proofs begin. Adding a variant requires a
  corpus, frozen-capture, or live-probe citation in the comment above it.

  The list/tree shape used by the depth machinery is `Forest` in
  LeanFtml.Depth: it is the defunctionalised form of ftml's
  `DepthList<L, T> = Vec<DepthItem<L, T>>` (src/parsing/depth.rs), chosen so
  that recursion and induction are structural on a single type. The
  conformance harness (../conformance/) checks the translation against the
  real Rust type on generated inputs.
-/

namespace LeanFtml

/-- List types as ftml's callers use them for `process_depths`:
    the list rule's bullet / number / token kinds, the blockquote rule's
    kind, and the table-of-contents builder's kind all instantiate the same
    generic `L`. The spec keeps `L` abstract, exactly like the Rust. -/
abbrev ListType := Nat

/-- A syntax-tree fragment for the Tier 1 families.

    This is deliberately small. `text` stands for any leaf content the
    depth, paragraph, and include machines treat opaquely (in ftml these
    are full `Element`s; the Tier 1 machines never inspect them, which is
    itself a fact the conformance harness exercises by using row indices
    as items). -/
inductive SpecTree (L T : Type) where
  /-- A leaf item: ftml `Element` treated opaquely by Tier 1 machines. -/
  | leaf : T → SpecTree L T
  /-- A list node: ftml `Element::List` / `DepthItem::List`. -/
  | list : L → List (SpecTree L T) → SpecTree L T

end LeanFtml
