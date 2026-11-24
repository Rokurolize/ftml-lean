/-
  LeanFtml.ProofInterface — F1 foundation unit (proof-base-v1 / ftml-lean 4bf28f7).

  The uniform module contract of ADVISOR-PROOF-POLICY §1.3 and §4.1: every
  parse-rule proof lane instantiates RuleProofBundle r and every render-rule
  proof lane instantiates RenderProofBundle r. The reference-side functions
  applyRuleRef, renderMirror, renderRefSpec and the reachability predicate
  ReachableTok are parameters of the enclosing section: they are supplied by
  F2 (PcreCore/RefTables) and F3 (RenderEnv refactor) and do not exist at
  proof-base-v1. Keeping them as parameters lets this interface elaborate
  now without inventing an axiom or a stand-in definition. The render Env
  is abstract here because LeanFtml.RenderEnv lands with F3.
-/
import LeanFtml.ByteCore
import LeanFtml.TokenStateProof
import LeanFtml.Pipeline
import LeanFtml.RenderCore

namespace LeanFtml

/-! ## Tier 1 — per-rule parse proof contract -/

section ParseProof
variable (applyRuleRef : RuleId → ParseState → ParseState)

/-- The three obligations every parse rule r must discharge (policy §1.3):
    well-formedness preservation, direct equality against the extracted
    reference rule, and reachability preservation under the token-index
    state machine. -/
structure RuleProofBundle (r : RuleId) where
  preserves_wf :
    ∀ (st : ParseState), WFState st → WFState (applyRule r st)
  eq_ref :
    ∀ (st : ParseState), WFState st → applyRule r st = applyRuleRef r st
  reachable_tokens :
    ∀ (st : ParseState), WFState st → ReachableState st →
      ReachableState (applyRule r st)

/-- Scoped parse-rule proof bundle: holds for every well-formed state satisfying
    side-condition `P` (e.g., token-free or `0xFF`-free states for `delimiter`). -/
structure ScopedRuleProofBundle (P : ParseState → Prop) (r : RuleId) where
  preserves_wf :
    ∀ (st : ParseState), WFState st → P st → WFState (applyRule r st)
  eq_ref :
    ∀ (st : ParseState), WFState st → P st → applyRule r st = applyRuleRef r st
  reachable_tokens :
    ∀ (st : ParseState), WFState st → P st → ReachableState st →
      ReachableState (applyRule r st)

/-- Any unconditional `RuleProofBundle` lifts to a `ScopedRuleProofBundle` for any
    scope predicate `P`. -/
def RuleProofBundle.toScoped {r : RuleId} (b : RuleProofBundle applyRuleRef r)
    (P : ParseState → Prop) : ScopedRuleProofBundle applyRuleRef P r where
  preserves_wf := fun st hwf _ => b.preserves_wf st hwf
  eq_ref := fun st hwf _ => b.eq_ref st hwf
  reachable_tokens := fun st hwf _ hr => b.reachable_tokens st hwf hr

end ParseProof

/-! ## Tier 2 — per-rule render proof contract -/

section RenderProof
universe u
variable {Env : Type u}
variable (renderMirror : Env → RenderRuleId → RenderConf → DocState →
    OptMap → List Nat)
variable (renderRefSpec : Env → RenderRuleId → RenderConf → DocState →
    OptMap → List Nat)
variable (ReachableTok : RenderRuleId → OptMap → DocState → Prop)

/-- The render obligation every render rule r must discharge (policy §1.3),
    stated parametrically over all Env (instantiate Env with LeanFtml.RenderEnv from F3) so that the eight external or
    serving rules make every external call explicitly on both sides. -/
structure RenderProofBundle (r : RenderRuleId) where
  eq_ref :
    ∀ (env : Env) (conf : RenderConf) (doc : DocState) (opts : OptMap),
      ReachableTok r opts doc →
        renderMirror env r conf doc opts = renderRefSpec env r conf doc opts

end RenderProof

/-! ## Trivial non-instantiability disclaimer

No bundle is instantiated here. A bundle is evidence that its three (or
one) fields have been proved for a concrete rule; inventing one without a
proof would introduce an untrusted axiom. F1 supplies only the interface.
-/

end LeanFtml
