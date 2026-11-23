/-
  LeanFtml.Proof.BundlesWave1 — Bundles wave 1 (G4/G5 packaging).

  This file opens the bundle-packaging programme of ADVISOR-PROOF-POLICY
  §1.3 / §4.3: it supplies the generic composition machinery for
  RuleProofBundle (LeanFtml.ProofInterface) and the wave's single complete
  bundle instantiation, for the Delimiter rule.

  What is proved here:
  1. runRulesRef, the reference-side counterpart of Pipeline.runRules, and
     the generic composition theorem runRules_eq_ref_of_bundles: any list
     of rules carrying RuleProofBundles relative to one reference function
     composes, kernel-checked, including the fatal-skip branch (a fatal
     state takes no further rules on either side).
  2. The complete Delimiter RuleProofBundle, in two forms: delimiter_bundle,
     parameterized over any reference function whose Delimiter component is
     the identity on WF states (the one property F2's extracted applyRuleRef
     must and will discharge for this rule), and delimiterBundleW1, its
     instantiation at the wave-1 concrete reference applyRuleRefW1.
  3. The WF composition prefix of pipelineFull extended from [.include] to
     [.include, .prefilter, .delimiter] (= pipelineFull.take 3), composing
     includeRule_preserves_wf (ProofInclude), prefilterRule_preserves_wf
     (Proof.FramePrefilterProof), and delimiterRule_preserves_wf
     (Proof.FrameDelimiterProof) through Proof.WfComposition's
     runRules_preserves_wf.

  What is NOT claimed here: pipelineFull_eq_ref is not claimed. Exactly one
  of the 68 parse rules (Delimiter) carries a bundle after this wave; the
  remaining 67 are unbundled, each for a recorded reason (see
  REPORT-BUNDLES-WAVE1.md): the concrete extracted applyRuleRef and
  renderRefSpec do not exist on main yet (F2/F3 scope), ReachableState
  lacks the transition constructors of the recorded F1 remainder R1, and
  several families still lack an unconditional preserves_wf. The Delimiter
  bundle itself carries the frame package's named representational
  remainder R2: a PHP byte string may carry a raw undecoded 0xFF byte,
  which the mirror's List Char alphabet cannot represent; on representable
  documents the reference Delimiter regex (a single literal 0xFF byte)
  provably never matches, so the reference arm is the identity.

  No new axioms, no sorry, no native_decide, no bv_decide; all theorem
  axioms are within [propext, Classical.choice, Quot.sound].
-/
import LeanFtml.ProofInterface
import LeanFtml.Proof.FrameDelimiterProof
import LeanFtml.Proof.FramePrefilterProof
import LeanFtml.Proof.WfComposition

namespace LeanFtml

/-! ## 1. The reference runner and the generic composition theorem -/

/-- The reference-side runner: the exact counterpart of Pipeline.runRules
    with the reference function in place of applyRule, including the same
    fatal skip, so the composition theorem compares like with like. -/
def runRulesRef (applyRuleRef : RuleId → ParseState → ParseState)
    (rules : List RuleId) (st : ParseState) : ParseState :=
  rules.foldl (fun s r => if s.fatal then s else applyRuleRef r s) st

/-- Generic composition of RuleProofBundles into a pipeline equality. If
    every rule in the list carries a bundle relative to one reference
    function, then running the list on the mirror equals running it on the
    reference, from any WF state. The induction maintains WFState through
    each bundle's preserves_wf; the fatal branch is honest, since a fatal
    state is returned unchanged by both runners. -/
theorem runRules_eq_ref_of_bundles (applyRuleRef : RuleId → ParseState → ParseState)
    (rules : List RuleId) :
    (∀ r ∈ rules, RuleProofBundle applyRuleRef r) →
    ∀ (st : ParseState), WFState st →
    runRules rules st = runRulesRef applyRuleRef rules st := by
  induction rules with
  | nil => intro _ st _; rfl
  | cons r rs ih =>
      intro h st hwf
      have hb : RuleProofBundle applyRuleRef r := h r List.mem_cons_self
      have hsub : ∀ r' ∈ rs, RuleProofBundle applyRuleRef r' :=
        fun r' hr' => h r' (List.mem_cons_of_mem r hr')
      cases hf : st.fatal with
      | true =>
          have e1 : runRules (r :: rs) st = runRules rs st := by
            simp [runRules, hf]
          have e2 : runRulesRef applyRuleRef (r :: rs) st
              = runRulesRef applyRuleRef rs st := by
            simp [runRulesRef, hf]
          rw [e1, e2]
          exact ih hsub st hwf
      | false =>
          have heq : applyRule r st = applyRuleRef r st := hb.eq_ref st hwf
          have hwf' : WFState (applyRule r st) := hb.preserves_wf st hwf
          have step := ih hsub (applyRule r st) hwf'
          have e1 : runRules (r :: rs) st = runRules rs (applyRule r st) := by
            simp [runRules, hf]
          have e2 : runRulesRef applyRuleRef (r :: rs) st
              = runRulesRef applyRuleRef rs (applyRule r st) := by
            have e2' : runRulesRef applyRuleRef (r :: rs) st
                = runRulesRef applyRuleRef rs (applyRuleRef r st) := by
              simp [runRulesRef, hf]
            rwa [← heq] at e2'
          rw [e1, e2]
          exact step

/-! ## 2. The Delimiter bundle -/

/-- The complete Delimiter RuleProofBundle, relative to any reference
    function whose Delimiter component is the identity on WF states. That
    single hypothesis is exactly the reference fact for this rule: the PHP
    Delimiter regex is a single literal 0xFF byte, which provably never
    occurs in the byte form of a representable document
    (Proof.FrameDelimiterProof.delimiter_ref_regex_no_match), so the
    reference callback fires zero times and the reference returns the state
    unchanged; the mirror is likewise the identity
    (delimiterRule_id_restated). The raw undecoded 0xFF document, not
    representable in the mirror's List Char alphabet, is the named
    remainder R2 and is outside this bundle's claim, exactly as the frame
    package framed it. The three fields are the frame package's proved
    theorems delimiterRule_preserves_wf, the identity equality, and
    delimiterRule_preserves_reachable, transported across the applyRule
    dispatch. -/
theorem delimiter_bundle (applyRuleRef : RuleId → ParseState → ParseState)
    (hdel : ∀ st, WFState st → applyRuleRef .delimiter st = st) :
    RuleProofBundle applyRuleRef .delimiter where
  preserves_wf := fun st hwf => by
    simpa [applyRule] using delimiterRule_preserves_wf st hwf
  eq_ref := fun st hwf => by
    have h1 : applyRule .delimiter st = st := delimiterRule_id_restated st
    have h2 : applyRuleRef .delimiter st = st := hdel st hwf
    rw [h1, h2]
  reachable_tokens := fun st _hwf hr => by
    simpa [applyRule] using delimiterRule_preserves_reachable st hr

/-- The wave-1 concrete reference function, present so the generic
    composition theorem has a concrete first instantiation. Its Delimiter
    component is the identity, the kernel-checked reference arm justified
    above and in Proof.FrameDelimiterProof. Every other component is
    definitionally the mirror's own applyRule: NO bundle is instantiated at
    any other rule against this function in this wave, so no
    reference-equality claim is made or used for them. When F2 lands the
    extracted applyRuleRef, this scaffold is retired and the bundle is
    re-instantiated against it via delimiter_bundle, whose only hypothesis
    is the Delimiter identity property. -/
def applyRuleRefW1 : RuleId → ParseState → ParseState
  | .delimiter, st => st
  | r, st => applyRule r st

/-- The Delimiter identity property of applyRuleRefW1, by computation. -/
theorem applyRuleRefW1_delimiter (st : ParseState) :
    applyRuleRefW1 .delimiter st = st := rfl

/-- The wave's one complete bundle instantiation: Delimiter at the wave-1
    concrete reference. -/
theorem delimiterBundleW1 : RuleProofBundle applyRuleRefW1 .delimiter :=
  delimiter_bundle applyRuleRefW1 (fun st _ => applyRuleRefW1_delimiter st)

/-- First instantiation of the generic composition theorem: the singleton
    pipeline [.delimiter] runs identically on mirror and reference. -/
theorem runRules_delimiter_eq_ref (st : ParseState) (hwf : WFState st) :
    runRules [.delimiter] st = runRulesRef applyRuleRefW1 [.delimiter] st :=
  runRules_eq_ref_of_bundles applyRuleRefW1 [.delimiter]
    (fun r hr => by
      have hr' : r = .delimiter := List.mem_singleton.mp hr
      subst hr'
      exact delimiterBundleW1) st hwf

/-! ## 3. The WF composition prefix extended to pipelineFull.take 3 -/

/-- Prefilter preserves WFState under the applyRule dispatch. -/
theorem applyRule_prefilter_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (applyRule .prefilter st) := by
  simpa [applyRule] using prefilterRule_preserves_wf st hwf

/-- Delimiter preserves WFState under the applyRule dispatch. -/
theorem applyRule_delimiter_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (applyRule .delimiter st) := by
  simpa [applyRule] using delimiterRule_preserves_wf st hwf

/-- Every rule of the three-rule prefix preserves WFState under applyRule. -/
theorem applyRule_prefix3_preserves_wf {r : RuleId}
    (hr : r ∈ [.include, .prefilter, .delimiter])
    (st : ParseState) (hwf : WFState st) : WFState (applyRule r st) := by
  rw [List.mem_cons, List.mem_cons, List.mem_singleton] at hr
  rcases hr with rfl | rfl | rfl
  · exact applyRule_include_preserves_wf st hwf
  · exact applyRule_prefilter_preserves_wf st hwf
  · exact applyRule_delimiter_preserves_wf st hwf

/-- The extended prefix is literally the head of pipelineFull. -/
theorem pipelineFull_take_three :
    pipelineFull.take 3 = [.include, .prefilter, .delimiter] := rfl

/-- The WF composition prefix of pipelineFull, extended from [.include]
    (Proof.WfComposition.pipelineFull_wf_prefix) to the first three rules:
    running [.include, .prefilter, .delimiter] from a fresh source state
    preserves WFState. No statement is made about the remaining 65 rules. -/
theorem pipelineFull_wf_prefix3 (cs : List Char) :
    WFState (runRules [.include, .prefilter, .delimiter]
      (ParseState.ofSource cs)) := by
  apply runRules_preserves_wf
  · intro r hr st hwf
    exact applyRule_prefix3_preserves_wf hr st hwf
  · exact wfState_ofSource cs

/-- The same three-rule prefix composition from an arbitrary WF state. -/
theorem pipelineFull_wf_prefix3_of_wf (st : ParseState) (hwf : WFState st) :
    WFState (runRules [.include, .prefilter, .delimiter] st) := by
  apply runRules_preserves_wf
  · intro r hr s hs
    exact applyRule_prefix3_preserves_wf hr s hs
  · exact hwf

-- Axiom audit for the headline theorems of this unit.
#print axioms runRules_eq_ref_of_bundles
#print axioms delimiter_bundle
#print axioms delimiterBundleW1
#print axioms runRules_delimiter_eq_ref
#print axioms applyRule_prefilter_preserves_wf
#print axioms applyRule_delimiter_preserves_wf
#print axioms pipelineFull_take_three
#print axioms pipelineFull_wf_prefix3
#print axioms pipelineFull_wf_prefix3_of_wf

end LeanFtml
