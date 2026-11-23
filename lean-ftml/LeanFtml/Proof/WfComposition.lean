/-
  LeanFtml.Proof.WfComposition — Wave 3 composition lane (WF composition).

  This file composes the per-rule WFState-preservation facts that are proved on the main branch into a preservation fact about the pipeline runner runRules. WFState (LeanFtml.TokenStateProof) does not constrain st.fatal, so the fatal skip branch of runRules returns a state whose WFState is already available.

  Main-verified coverage of pipelineFull (68 rules, .include followed by the 67 rules of pipelineR317): the only proved per-rule WFState-preservation theorem on main is includeRule_preserves_wf in LeanFtml.ProofInclude, for .include. The composition remainder — the 67 rules after Include, i.e. prefilter through tighten (pipelineR317, positions 2 through 68 of pipelineFull) — has NO file-verified WFState-preservation result on main. Prefilter/delimiter preservation exists only on the unadopted origin/proof/frame-include-code prefix candidates; those are adoption-pending and were not imported here. Consequently the longest main-verified consecutive prefix of pipelineFull is [.include] (length 1), and the concrete instantiation below is proved for exactly that prefix, with no claim about the uncovered remainder.
-/
import LeanFtml.Pipeline
import LeanFtml.TokenStateProof
import LeanFtml.ProofInclude

namespace LeanFtml

/-! ## Generic composition over runRules -/

/-- If every rule in a list preserves WFState under applyRule, then running
    that list from a WF state yields a WF state. The foldl skip branch
    (s.fatal = true) is handled honestly: it returns s unchanged, whose
    WFState is the induction hypothesis's input. -/
theorem runRules_preserves_wf (rules : List RuleId)
    (h : ∀ r ∈ rules, ∀ st, WFState st → WFState (applyRule r st))
    (st : ParseState) (hwf : WFState st) : WFState (runRules rules st) := by
  induction rules generalizing st with
  | nil =>
      simpa [runRules] using hwf
  | cons r rs ih =>
      cases hb : st.fatal with
      | false =>
          simpa [runRules, hb] using
            ih (fun r' hr' => h r' (by simp [hr'])) (applyRule r st)
              (h r (by simp) st hwf)
      | true =>
          simpa [runRules, hb] using
            ih (fun r' hr' => h r' (by simp [hr'])) st hwf

/-! ## Instantiation at the longest main-verified prefix -/

/-- The single rule .include preserves WFState under applyRule, by the
    production-rule theorem includeRule_preserves_wf on main. -/
theorem applyRule_include_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (applyRule .include st) := by
  simpa [applyRule] using includeRule_preserves_wf st hwf

/-- The longest main-verified consecutive prefix of pipelineFull is
    [.include]. Running exactly that prefix from a fresh source state
    preserves WFState: wfState_ofSource supplies the initial invariant and
    the generic composition theorem carries it through the (single) rule.
    No statement is made about the remaining 67 rules. -/
theorem pipelineFull_wf_prefix (cs : List Char) :
    WFState (runRules [.include] (ParseState.ofSource cs)) := by
  apply runRules_preserves_wf
  · intro r hr st hwf
    simp at hr
    subst r
    exact applyRule_include_preserves_wf st hwf
  · exact wfState_ofSource cs

/-- The same prefix composition from an arbitrary already-WF state. -/
theorem pipelineFull_wf_prefix_of_wf (st : ParseState) (hwf : WFState st) :
    WFState (runRules [.include] st) := by
  apply runRules_preserves_wf
  · intro r hr s hs
    simp at hr
    subst r
    exact applyRule_include_preserves_wf s hs
  · exact hwf

#print axioms runRules_preserves_wf
#print axioms applyRule_include_preserves_wf
#print axioms pipelineFull_wf_prefix
#print axioms pipelineFull_wf_prefix_of_wf

end LeanFtml
