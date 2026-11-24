/-
  LeanFtml.Proof.BundlesWave1 — RuleProofBundle generic composition and scoped
  Delimiter bundle (G4/G5 packaging, updated in Bundles wave 2).

  What is proved here:
  1. Generic composition theorems over the real F2 extracted-reference runner
     `RefApply.runRulesRef` and `RefApply.applyRuleRef`:
     - `runRules_eq_ref_of_bundles`: unconditional `RuleProofBundle applyRuleRef`
       composition across any rule list, including the fatal-skip branch.
     - `runRules_eq_ref_of_scoped_bundles`: scoped `ScopedRuleProofBundle
       applyRuleRef P` composition when every rule in the list preserves `P`
       on `WFState` inputs.
  2. The Delimiter `ScopedRuleProofBundle` (`delimiter_scoped_bundle`,
     `delimiterScopedBundleRef`, `delimiterTokenFreeBundleRef`) instantiated
     directly against F2's real `RefApply.applyRuleRef`.
  3. Necessity of scoping: `delimiter_applyRuleRef_ne_on_tokenized_wf` exhibits
     a well-formed tokenized state `st0` (`WFState st0`) on which
     `applyRule .delimiter st0 ≠ applyRuleRef .delimiter st0` (tokens length
     1 vs 3), proving why the wave-1 Delimiter identity had to be scoped when
     retiring the `applyRuleRefW1` / `runRulesRefW1` scaffold.
  4. The WF + TokenFree composition prefix of `pipelineFull.take 3`
     (`[.include, .prefilter, .delimiter]`), establishing `pipelineFull_pos3_delimiter_eq_ref`.

  No new axioms, no `sorry`, no `native_decide`, no `bv_decide`; all theorem
  axioms are within `[propext, Classical.choice, Quot.sound]`.
-/
import LeanFtml.ProofInterface
import LeanFtml.RefApply
import LeanFtml.Proof.FrameDelimiterProof
import LeanFtml.Proof.FramePrefilterProof
import LeanFtml.Proof.WfComposition

namespace LeanFtml

/-! ## 1. Generic bundle composition against real `RefApply.runRulesRef` -/

/-- Generic composition of unconditional `RuleProofBundle`s into a pipeline
    equality targeting the real F2 runner `RefApply.runRulesRef`. -/
theorem runRules_eq_ref_of_bundles (rules : List RuleId) :
    (∀ r ∈ rules, RuleProofBundle applyRuleRef r) →
    ∀ (st : ParseState), WFState st →
    runRules rules st = runRulesRef rules st := by
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
          have e2 : runRulesRef (r :: rs) st = runRulesRef rs st := by
            simp [runRulesRef, hf]
          rw [e1, e2]
          exact ih hsub st hwf
      | false =>
          have heq : applyRule r st = applyRuleRef r st := hb.eq_ref st hwf
          have hwf' : WFState (applyRule r st) := hb.preserves_wf st hwf
          have step := ih hsub (applyRule r st) hwf'
          have e1 : runRules (r :: rs) st = runRules rs (applyRule r st) := by
            simp [runRules, hf]
          have e2 : runRulesRef (r :: rs) st = runRulesRef rs (applyRule r st) := by
            have e2' : runRulesRef (r :: rs) st = runRulesRef rs (applyRuleRef r st) := by
              simp [runRulesRef, hf]
            rwa [← heq] at e2'
          rw [e1, e2]
          exact step

/-- Generic composition of `ScopedRuleProofBundle`s over invariant `P`. -/
theorem runRules_eq_ref_of_scoped_bundles (P : ParseState → Prop)
    (rules : List RuleId) :
    (∀ r ∈ rules, ScopedRuleProofBundle applyRuleRef P r) →
    (∀ r ∈ rules, ∀ st, WFState st → P st → P (applyRule r st)) →
    ∀ (st : ParseState), WFState st → P st →
    runRules rules st = runRulesRef rules st := by
  induction rules with
  | nil => intro _ _ st _ _; rfl
  | cons r rs ih =>
      intro h hp st hwf hpst
      have hb : ScopedRuleProofBundle applyRuleRef P r := h r List.mem_cons_self
      have hsub : ∀ r' ∈ rs, ScopedRuleProofBundle applyRuleRef P r' :=
        fun r' hr' => h r' (List.mem_cons_of_mem r hr')
      have hpsub : ∀ r' ∈ rs, ∀ s, WFState s → P s → P (applyRule r' s) :=
        fun r' hr' => hp r' (List.mem_cons_of_mem r hr')
      cases hf : st.fatal with
      | true =>
          have e1 : runRules (r :: rs) st = runRules rs st := by
            simp [runRules, hf]
          have e2 : runRulesRef (r :: rs) st = runRulesRef rs st := by
            simp [runRulesRef, hf]
          rw [e1, e2]
          exact ih hsub hpsub st hwf hpst
      | false =>
          have heq : applyRule r st = applyRuleRef r st := hb.eq_ref st hwf hpst
          have hwf' : WFState (applyRule r st) := hb.preserves_wf st hwf hpst
          have hp' : P (applyRule r st) := hp r List.mem_cons_self st hwf hpst
          have step := ih hsub hpsub (applyRule r st) hwf' hp'
          have e1 : runRules (r :: rs) st = runRules rs (applyRule r st) := by
            simp [runRules, hf]
          have e2 : runRulesRef (r :: rs) st = runRulesRef rs (applyRule r st) := by
            have e2' : runRulesRef (r :: rs) st = runRulesRef rs (applyRuleRef r st) := by
              simp [runRulesRef, hf]
            rwa [← heq] at e2'
          rw [e1, e2]
          exact step

/-! ## 2. Real-runner Delimiter no-match and scoping theorems -/

private theorem mem_of_drop_eq_cons {α : Type} {l rest : List α} {b : α} {n : Nat}
    (h : l.drop n = b :: rest) : b ∈ l := by
  have h1 : b ∈ l.drop n := by rw [h]; exact List.mem_cons_self
  exact List.mem_of_mem_drop h1

/-- When `pb` is absent from `subj` and case-insensitivity is off, PcreCore's
    single-byte matcher `runMatch` never succeeds. -/
theorem pcreRunMatch_byte_not_mem (fl : PcreCore.Flags) (hci : fl.ci = false)
    (whole : PcreCore.RE) (subj : List Nat) (anchor pos : Nat)
    (caps : PcreCore.Caps) (fuel : Nat) (pb : Nat) (hnot : pb ∉ subj) :
    PcreCore.runMatch fl whole subj anchor [.node (.byte pb)] pos caps fuel = [] := by
  cases fuel with
  | zero => rfl
  | succ f =>
      dsimp only [PcreCore.runMatch]
      cases hd : subj.drop pos with
      | nil => simp
      | cons b _ =>
          have hb : b ∈ subj := mem_of_drop_eq_cons hd
          have hne : pb ≠ b := fun h => hnot (h ▸ hb)
          have hbm : PcreCore.byteMatchCI fl.ci pb b = false := by
            simp [PcreCore.byteMatchCI, hci, hne]
          simp [hbm]

theorem pcreFirstAnchored_byte_not_mem (fl : PcreCore.Flags) (hci : fl.ci = false)
    (subj : List Nat) (anchor pos : Nat) (pb : Nat) (hnot : pb ∉ subj) :
    PcreCore.pcreFirstAnchored { ast := .byte pb, flags := fl } subj anchor pos = none := by
  unfold PcreCore.pcreFirstAnchored PcreCore.pcreEndsAnchored
  rw [pcreRunMatch_byte_not_mem fl hci (.byte pb) subj anchor pos [] PcreCore.pcreFuel pb hnot]
  rfl

theorem pcreSearchAnchored_go_byte_not_mem (fl : PcreCore.Flags) (hci : fl.ci = false)
    (subj : List Nat) (anchor pb : Nat) (hnot : pb ∉ subj) :
    ∀ fuel pos,
      PcreCore.searchAnchored.go { ast := .byte pb, flags := fl } subj anchor fuel pos = none := by
  intro fuel
  induction fuel with
  | zero => intro pos; rfl
  | succ f ih =>
      intro pos
      dsimp only [PcreCore.searchAnchored.go]
      rw [pcreFirstAnchored_byte_not_mem fl hci subj anchor pos pb hnot]
      exact ih (pos + 1)

theorem pregMatchAll_byte_not_mem (fl : PcreCore.Flags) (hci : fl.ci = false)
    (subj : List Nat) (pb : Nat) (hnot : pb ∉ subj) :
    PcreCore.pregMatchAll { ast := .byte pb, flags := fl } subj = [] := by
  unfold PcreCore.pregMatchAll
  cases h : subj.length + 1 with
  | zero => rfl
  | succ f =>
      dsimp only [PcreCore.pregMatchAll.go]
      unfold PcreCore.searchAnchored
      rw [pcreSearchAnchored_go_byte_not_mem fl hci subj 0 pb hnot]

/-- Parsed primary pattern of `delimiter` in `RefTables`: literal `0xFF`. -/
theorem refParsed_delimiter :
    refParsed .delimiter = [{ ast := .byte 255, flags := {} }] := by
  decide

/-- On any state whose byteForm has no `0xFF` byte, the real F2 `applyRuleRef .delimiter`
    makes zero claims and returns `st` unchanged. -/
theorem applyRuleRef_delimiter_of_no_ff (st : ParseState)
    (hnoff : 0xFF ∉ byteForm st.work) :
    applyRuleRef .delimiter st = st := by
  apply applyRuleRef_of_no_claims
  dsimp only [refWork]
  rw [refParsed_delimiter]
  dsimp only [List.foldl]
  rw [pregMatchAll_byte_not_mem {} rfl (byteForm st.work) 255 hnoff]
  rfl

/-- Token-free representable documents have no `0xFF` in `byteForm st.work`,
    so `applyRuleRef .delimiter` is the identity on them. -/
theorem applyRuleRef_delimiter_of_tokenFree (st : ParseState)
    (hfree : ∃ cs : List Char, allText st.work = some cs) :
    applyRuleRef .delimiter st = st := by
  obtain ⟨cs, hcs⟩ := hfree
  exact applyRuleRef_delimiter_of_no_ff st (allText_byteForm_no_ff st.work cs hcs)

/-! ## 3. Counterexample showing scoping necessity on tokenized WF states -/

private def tokenizedDelimiterWitness : ParseState :=
  { work := [TSeg.tok 0], tokens := [{ rule := "Raw", opts := [] }], doc := {} }

private theorem tokenizedDelimiterWitness_wf : WFState tokenizedDelimiterWitness := by
  refine ⟨⟨rfl, ?_⟩, ?_, ?_, ?_, ?_, ?_, ?_⟩
  · intro k hk
    simp only [tokenizedDelimiterWitness, List.mem_singleton, TSeg.tok.injEq] at hk
    subst hk
    decide
  · intro t ht opts
    simp only [tokenizedDelimiterWitness, List.mem_singleton] at ht
    subst ht
    intro hkv
    cases hkv
  · intro bs hbs; simp [tokenizedDelimiterWitness] at hbs
  · simp [tokenizedDelimiterWitness, wfBytePairs]
  · simp [tokenizedDelimiterWitness, wfByteIdPairs]
  · simp [tokenizedDelimiterWitness, wfBytePairs]
  · intro bs hbs; simp [tokenizedDelimiterWitness] at hbs

private theorem tokenizedDelimiterWitness_ref_tokens_len :
    (applyRuleRef .delimiter tokenizedDelimiterWitness).tokens.length = 3 := by
  decide

/-- Scoping necessity witness: on a well-formed tokenized state (`WFState`),
    `applyRule .delimiter` leaves tokens unchanged (length 1) while
    `applyRuleRef .delimiter` claims the placeholder delimiters `\xFF` (length 3). -/
theorem delimiter_applyRuleRef_ne_on_tokenized_wf :
    ∃ st : ParseState, WFState st ∧ applyRule .delimiter st ≠ applyRuleRef .delimiter st := by
  refine ⟨tokenizedDelimiterWitness, tokenizedDelimiterWitness_wf, ?_⟩
  intro h
  have h1 : (applyRule .delimiter tokenizedDelimiterWitness).tokens.length = 1 := rfl
  have h2 : (applyRuleRef .delimiter tokenizedDelimiterWitness).tokens.length = 3 :=
    tokenizedDelimiterWitness_ref_tokens_len
  rw [h] at h1
  omega

/-! ## 4. Scoped Delimiter bundle instantiated at real `RefApply.applyRuleRef` -/

/-- Scoped Delimiter bundle parameterized over any reference function acting as the
    identity whenever `P st` holds. -/
theorem delimiter_scoped_bundle (applyRuleRef : RuleId → ParseState → ParseState)
    (P : ParseState → Prop)
    (hdel : ∀ st, WFState st → P st → applyRuleRef .delimiter st = st) :
    ScopedRuleProofBundle applyRuleRef P .delimiter where
  preserves_wf := fun st hwf _ => by
    simpa [applyRule] using delimiterRule_preserves_wf st hwf
  eq_ref := fun st hwf hp => by
    have h1 : applyRule .delimiter st = st := delimiterRule_id_restated st
    have h2 : applyRuleRef .delimiter st = st := hdel st hwf hp
    rw [h1, h2]
  reachable_tokens := fun st _ _ hr => by
    simpa [applyRule] using delimiterRule_preserves_reachable st hr

/-- Scoped Delimiter bundle instantiated directly at F2's `RefApply.applyRuleRef`
    under the byte-level `0xFF ∉ byteForm st.work` invariant. -/
theorem delimiterScopedBundleRef :
    ScopedRuleProofBundle applyRuleRef (fun st => 0xFF ∉ byteForm st.work) .delimiter :=
  delimiter_scoped_bundle applyRuleRef (fun st => 0xFF ∉ byteForm st.work)
    (fun st _ hnoff => applyRuleRef_delimiter_of_no_ff st hnoff)

/-- Scoped Delimiter bundle instantiated at `RefApply.applyRuleRef` under token-freeness. -/
theorem delimiterTokenFreeBundleRef :
    ScopedRuleProofBundle applyRuleRef (fun st => ∃ cs : List Char, allText st.work = some cs)
      .delimiter :=
  delimiter_scoped_bundle applyRuleRef (fun st => ∃ cs : List Char, allText st.work = some cs)
    (fun st _ hfree => applyRuleRef_delimiter_of_tokenFree st hfree)

/-- Singleton pipeline `[.delimiter]` runs identically on mirror and real `RefApply.runRulesRef`
    whenever `0xFF ∉ byteForm st.work`. -/
theorem runRules_delimiter_eq_ref (st : ParseState) (hwf : WFState st)
    (hnoff : 0xFF ∉ byteForm st.work) :
    runRules [.delimiter] st = runRulesRef [.delimiter] st :=
  runRules_eq_ref_of_scoped_bundles (fun s => 0xFF ∉ byteForm s.work) [.delimiter]
    (fun r hr => by
      have hr' : r = .delimiter := List.mem_singleton.mp hr
      subst hr'
      exact delimiterScopedBundleRef)
    (fun r hr s _ hs => by
      have hr' : r = .delimiter := List.mem_singleton.mp hr
      subst hr'
      simpa [applyRule, delimiterRule] using hs)
    st hwf hnoff

/-! ## 5. Pipeline prefix3 WF + TokenFree reachability at position 3 -/

/-- Prefilter preserves WFState under the `applyRule` dispatch. -/
theorem applyRule_prefilter_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (applyRule .prefilter st) := by
  simpa [applyRule] using prefilterRule_preserves_wf st hwf

/-- Delimiter preserves WFState under the `applyRule` dispatch. -/
theorem applyRule_delimiter_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (applyRule .delimiter st) := by
  simpa [applyRule] using delimiterRule_preserves_wf st hwf

/-- Every rule of the three-rule prefix preserves WFState under `applyRule`. -/
theorem applyRule_prefix3_preserves_wf {r : RuleId}
    (hr : r ∈ [.include, .prefilter, .delimiter])
    (st : ParseState) (hwf : WFState st) : WFState (applyRule r st) := by
  rw [List.mem_cons, List.mem_cons, List.mem_singleton] at hr
  rcases hr with rfl | rfl | rfl
  · exact applyRule_include_preserves_wf st hwf
  · exact applyRule_prefilter_preserves_wf st hwf
  · exact applyRule_delimiter_preserves_wf st hwf

/-- The extended prefix is literally the head of `pipelineFull`. -/
theorem pipelineFull_take_three :
    pipelineFull.take 3 = [.include, .prefilter, .delimiter] := rfl

/-- The WF composition prefix of `pipelineFull`, extended to the first three rules. -/
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

/-- Representable token-free state invariant feeding Delimiter at pipeline position 3. -/
def TokenFree (st : ParseState) : Prop :=
  ∃ cs : List Char, allText st.work = some cs

private theorem normSegs_single_text_allText (cs : List Char) :
    ∃ cs', allText (normSegs [TSeg.text cs]) = some cs' := by
  cases cs <;> simp [normSegs, allText]

theorem tokenFree_ofSource (cs : List Char) : TokenFree (ParseState.ofSource cs) :=
  normSegs_single_text_allText cs

theorem includeRule_preserves_tokenFree (st : ParseState) :
    TokenFree st → TokenFree (applyRule .include st) := by
  unfold TokenFree
  rintro ⟨cs, hcs⟩
  simpa [applyRule, includeRule, hcs] using
    normSegs_single_text_allText (includePasses 5 cs st.doc).1

theorem prefilterRule_preserves_tokenFree (st : ParseState) :
    TokenFree st → TokenFree (applyRule .prefilter st) := by
  unfold TokenFree
  rintro ⟨cs, hcs⟩
  simpa [applyRule, prefilterRule, hcs] using
    normSegs_single_text_allText (prefilterChars cs)

/-- Pipeline position-2 output (`[.include, .prefilter]`) is unconditionally `TokenFree`. -/
theorem pipelineFull_prefix2_tokenFree (cs : List Char) :
    TokenFree (runRules [.include, .prefilter] (ParseState.ofSource cs)) := by
  have h0 : TokenFree (ParseState.ofSource cs) := tokenFree_ofSource cs
  have h1 : TokenFree (applyRule .include (ParseState.ofSource cs)) :=
    includeRule_preserves_tokenFree _ h0
  have hfat1 : (ParseState.ofSource cs).fatal = false := rfl
  have h2 : TokenFree (let s1 := applyRule .include (ParseState.ofSource cs);
      if s1.fatal then s1 else applyRule .prefilter s1) := by
    cases hfat2 : (applyRule .include (ParseState.ofSource cs)).fatal
    · simpa [hfat2] using prefilterRule_preserves_tokenFree _ h1
    · simpa [hfat2] using h1
  simpa [runRules, hfat1] using h2

/-- Pipeline position 3 discharge: after running `.include` and `.prefilter` from any
    source `cs`, `applyRule .delimiter` coincides with the real F2 `RefApply.applyRuleRef .delimiter`. -/
theorem pipelineFull_pos3_delimiter_eq_ref (cs : List Char) :
    let st2 := runRules [.include, .prefilter] (ParseState.ofSource cs)
    applyRule .delimiter st2 = applyRuleRef .delimiter st2 := by
  intro st2
  have htf : TokenFree st2 := pipelineFull_prefix2_tokenFree cs
  have h1 : applyRule .delimiter st2 = st2 := delimiterRule_id_restated st2
  have h2 : applyRuleRef .delimiter st2 = st2 := applyRuleRef_delimiter_of_tokenFree st2 htf
  rw [h1, h2]

-- Axiom audit for headline theorems.
#print axioms runRules_eq_ref_of_bundles
#print axioms runRules_eq_ref_of_scoped_bundles
#print axioms delimiter_applyRuleRef_ne_on_tokenized_wf
#print axioms delimiterScopedBundleRef
#print axioms delimiterTokenFreeBundleRef
#print axioms runRules_delimiter_eq_ref
#print axioms applyRule_prefilter_preserves_wf
#print axioms applyRule_delimiter_preserves_wf
#print axioms pipelineFull_take_three
#print axioms pipelineFull_wf_prefix3
#print axioms pipelineFull_wf_prefix3_of_wf
#print axioms pipelineFull_prefix2_tokenFree
#print axioms pipelineFull_pos3_delimiter_eq_ref

end LeanFtml
