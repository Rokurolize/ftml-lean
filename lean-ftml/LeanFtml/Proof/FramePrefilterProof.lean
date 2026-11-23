/-
  LeanFtml.Proof.FramePrefilterProof — Wave 2 `proof/frame-include-code` Prefilter unit.
  Class A rule Prefilter (lean-ftml/LeanFtml/FrameRules.lean), named target:
  fuel-free equivalence of all 6 Prefilter passes; WFState creation from any
  List Char, plus WFState preservation and TokEquiv/no-token facts.

  This file only imports the mirror and the F1 foundations; it does not edit
  any mirror source. All statements below are universal and kernel-checked. Axioms are constrained to [propext, Classical.choice, Quot.sound]; the headline theorems are printed at the end of the file for axiom hygiene.

  Fuel characterization: for each fuel-bearing pass we prove a one-step lemma
  (one more unit of fuel is inert once fuel >= input length) by plain induction
  on the fuel, then chain by a local monotonicity argument. Every recursion step strictly shortens the remaining list, which the list length lemmas below discharge.

  REMAINDER (TokEquiv identity): a literal `TokEquiv id st (prefilterRule st)` is false, because TokEquiv's segsTokEquiv demands text equality and Prefilter is a text-transforming pass. The strongest token-relevant form that is true is proved: token table and fatal flag are unchanged, and when the input is token-free the emitted work contains no TSeg.tok.
-/

import LeanFtml.FrameRules
import LeanFtml.TokenStateProof

namespace LeanFtml

/-! ## Generic list arithmetic helpers (constructive, no Classical) -/

theorem len_append_char (a b : List Char) : (a ++ b).length = a.length + b.length := by
  induction a with
  | nil => simp
  | cons c cs ih =>
      simp [ih]
      omega

theorem drop_len_eq (l : List Char) (n : Nat) : (l.drop n).length = l.length - n := by
  induction l generalizing n with
  | nil => simp
  | cons c rest ih =>
      cases n with
      | zero => simp
      | succ n => simp [ih]

theorem takeWhile_drop_len (p : Char → Bool) (s : List Char) :
    (s.takeWhile p).length + (s.drop (s.takeWhile p).length).length = s.length := by
  induction s with
  | nil => simp
  | cons c rest ih =>
      by_cases hc : p c = true
      · simp [List.takeWhile, hc] at ih ⊢
        omega
      · simp [List.takeWhile, hc]

theorem takeWhile_length_pos_of_ws (c : Char) (rest : List Char) (hcw : isPcreWs c = true) :
    0 < ((c :: rest).takeWhile isPcreWs).length := by
  simp [List.takeWhile, hcw]

theorem drop_len_lt_of_pos (run : List Char) (i : Nat) (hi : 0 < i) (hrun : 0 < run.length) :
    (run.drop i).length < run.length := by
  rw [drop_len_eq]
  omega

theorem isEmpty_true_length_zero (s : List Char) (h : s.isEmpty = true) : s.length = 0 := by
  cases s with
  | nil => rfl
  | cons c cs => simp [List.isEmpty] at h

theorem skipSpaces_snd_len_le (s : List Char) : (skipSpaces s).2.length ≤ s.length := by
  induction s with
  | nil => simp [skipSpaces]
  | cons c rest ih =>
      by_cases hc : c = ' '
      · subst c
        simp [skipSpaces]
        omega
      · simp [skipSpaces, hc]

/-! ## Step 3 (emptyWsLines) fuel sufficiency -/

theorem emptyWsLines_go_one_more (f : Nat) (s : List Char) (atStart : Bool) (acc : List Char)
    (hs : s.length ≤ f) :
    emptyWsLines.go s atStart (f + 1) acc = emptyWsLines.go s atStart f acc := by
  induction f generalizing s atStart acc with
  | zero =>
      cases s with
      | nil => rfl
      | cons c rest => simp at hs
  | succ f ih =>
      cases s with
      | nil => rfl
      | cons c rest =>
          simp at hs
          simp only [emptyWsLines.go]
          by_cases hcond : atStart && isPcreWs c
          · simp only [if_pos hcond]
            have hcw : isPcreWs c = true := by
              cases hAt : atStart with
              | false => simp [hAt] at hcond
              | true => simpa [hAt] using hcond
            by_cases hE : ((c :: rest).drop ((c :: rest).takeWhile isPcreWs).length).isEmpty
            · simp only [hE]
              apply ih
              rw [len_append_char, drop_len_eq]
              have hrest0 := isEmpty_true_length_zero ((c :: rest).drop ((c :: rest).takeWhile isPcreWs).length) hE
              omega
            · simp only [hE]
              cases hln : lastNewlineIdx ((c :: rest).takeWhile isPcreWs) with
              | none =>
                  simp only [hln]
                  apply ih
                  omega
              | some i =>
                  by_cases hi : 1 ≤ i
                  · simp only [hln, hi]
                    apply ih
                    have hdrop_lt := drop_len_lt_of_pos ((c :: rest).takeWhile isPcreWs) i
                      (by omega) (takeWhile_length_pos_of_ws c rest hcw)
                    have hsum := takeWhile_drop_len isPcreWs (c :: rest)
                    have hlen : (c :: rest).length = rest.length + 1 := rfl
                    rw [len_append_char]
                    omega
                  · simp only [hln, hi]
                    apply ih
                    omega
          · simp only [if_neg hcond]
            apply ih
            omega

theorem emptyWsLines_go_fuel (s : List Char) (atStart : Bool) (acc : List Char) (f₁ f₂ : Nat)
    (hf₁ : s.length + 1 ≤ f₁) (hf₂ : s.length + 1 ≤ f₂) :
    emptyWsLines.go s atStart f₁ acc = emptyWsLines.go s atStart f₂ acc := by
  have hmono : ∀ {a b : Nat}, a ≤ b → s.length + 1 ≤ a →
      emptyWsLines.go s atStart a acc = emptyWsLines.go s atStart b acc := by
    intro a b hab ha
    obtain ⟨k, rfl⟩ : ∃ k, b = a + k := ⟨b - a, by omega⟩
    induction k with
    | zero => rfl
    | succ k ih =>
        calc
          emptyWsLines.go s atStart a acc = emptyWsLines.go s atStart (a + k) acc := ih (by omega)
          _ = emptyWsLines.go s atStart (a + k + 1) acc := by
            symm
            apply emptyWsLines_go_one_more (a + k) s atStart acc
            omega
  by_cases hle : f₁ ≤ f₂
  · exact hmono hle hf₁
  · have hle' : f₂ ≤ f₁ := by omega
    exact (hmono hle' hf₂).symm

theorem emptyWsLines_fuel_sufficient (s : List Char) (f : Nat) (hf : s.length + 1 ≤ f) :
    emptyWsLines.go s true f [] = emptyWsLines s := by
  exact emptyWsLines_go_fuel s true [] f (s.length + 1) hf (by omega)

/-! ## Step 6 (compressNL / scanGroup) fuel sufficiency -/

theorem scanGroup_nl_eq (rest : List Char) (f : Nat) :
    scanGroup ('\n' :: rest) (f + 1) =
      (let (spaces, rest1) := skipSpaces rest
       let (k, span, fin) := scanGroup rest1 f
       (k + 1, '\n' :: spaces ++ span, fin)) := rfl

theorem scanGroup_third_len_le (s : List Char) (f : Nat) :
    (scanGroup s f).2.2.length ≤ s.length := by
  induction f generalizing s with
  | zero => simp [scanGroup]
  | succ f ih =>
      cases s with
      | nil => simp [scanGroup]
      | cons c rest =>
          by_cases hc : c = '\n'
          · subst c
            rw [scanGroup_nl_eq rest f]
            dsimp only
            change (scanGroup (skipSpaces rest).2 f).2.2.length ≤ rest.length + 1
            have hih : (scanGroup (skipSpaces rest).2 f).2.2.length ≤ (skipSpaces rest).2.length := ih (skipSpaces rest).2
            have hle := skipSpaces_snd_len_le rest
            omega
          · simp [scanGroup, hc]

theorem scanGroup_nl_third_lt (rest : List Char) :
    (scanGroup ('\n' :: rest) (('\n' :: rest).length + 1)).2.2.length < ('\n' :: rest).length := by
  change (scanGroup ('\n' :: rest) (rest.length + 2)).2.2.length < rest.length + 1
  rw [scanGroup_nl_eq rest (rest.length + 1)]
  dsimp only
  change (scanGroup (skipSpaces rest).2 (rest.length + 1)).2.2.length < rest.length + 1
  have hle : (scanGroup (skipSpaces rest).2 (rest.length + 1)).2.2.length ≤ (skipSpaces rest).2.length :=
    scanGroup_third_len_le (skipSpaces rest).2 (rest.length + 1)
  have hsle := skipSpaces_snd_len_le rest
  omega

theorem scanGroup_one_more (f : Nat) (s : List Char) (hs : s.length ≤ f) :
    scanGroup s (f + 1) = scanGroup s f := by
  induction f generalizing s with
  | zero =>
      cases s with
      | nil => simp [scanGroup]
      | cons c rest => simp at hs
  | succ f ih =>
      cases s with
      | nil => simp [scanGroup]
      | cons c rest =>
          simp at hs
          by_cases hc : c = '\n'
          · subst c
            rw [scanGroup_nl_eq rest (f + 1)]
            rw [scanGroup_nl_eq rest f]
            dsimp only
            have hle := skipSpaces_snd_len_le rest
            have hEq : scanGroup (skipSpaces rest).2 (f + 1) = scanGroup (skipSpaces rest).2 f :=
              ih (skipSpaces rest).2 (by omega)
            rw [hEq]
          · simp [scanGroup, hc]

theorem scanGroup_fuel_indep (s : List Char) (f₁ f₂ : Nat)
    (hf₁ : s.length + 1 ≤ f₁) (hf₂ : s.length + 1 ≤ f₂) :
    scanGroup s f₁ = scanGroup s f₂ := by
  have hmono : ∀ {a b : Nat}, a ≤ b → s.length + 1 ≤ a → scanGroup s a = scanGroup s b := by
    intro a b hab ha
    obtain ⟨k, rfl⟩ : ∃ k, b = a + k := ⟨b - a, by omega⟩
    induction k with
    | zero => rfl
    | succ k ih =>
        calc
          scanGroup s a = scanGroup s (a + k) := ih (by omega)
          _ = scanGroup s (a + k + 1) := by
            symm
            apply scanGroup_one_more (a + k) s
            omega
  by_cases hle : f₁ ≤ f₂
  · exact hmono hle hf₁
  · have hle' : f₂ ≤ f₁ := by omega
    exact (hmono hle' hf₂).symm

theorem compressNL_go_nl_eq (rest : List Char) (f : Nat) :
    compressNL.go ('\n' :: rest) (f + 1) =
      (let (k, span, rest') := scanGroup ('\n' :: rest) (('\n' :: rest).length + 1)
       if 3 ≤ k then '\n' :: '\n' :: compressNL.go rest' f
       else span ++ compressNL.go rest' f) := rfl

theorem compressNL_scan_rest_le (rest : List Char) (f : Nat) (hs : rest.length ≤ f) :
    (scanGroup ('\n' :: rest) (('\n' :: rest).length + 1)).2.2.length ≤ f := by
  change (scanGroup ('\n' :: rest) (rest.length + 2)).2.2.length ≤ f
  have h := scanGroup_nl_third_lt rest
  change (scanGroup ('\n' :: rest) (rest.length + 2)).2.2.length < rest.length + 1 at h
  omega

theorem compressNL_go_one_more (f : Nat) (s : List Char) (hs : s.length ≤ f) :
    compressNL.go s (f + 1) = compressNL.go s f := by
  induction f generalizing s with
  | zero =>
      cases s with
      | nil => rfl
      | cons c rest => simp at hs
  | succ f ih =>
      cases s with
      | nil => rfl
      | cons c rest =>
          simp at hs
          by_cases hc : c = '\n'
          · subst c
            rw [compressNL_go_nl_eq rest (f + 1)]
            rw [compressNL_go_nl_eq rest f]
            dsimp only
            by_cases hk : 3 ≤ (scanGroup ('\n' :: rest) (('\n' :: rest).length + 1)).1
            · simp only [if_pos hk]
              apply congrArg (fun t => '\n' :: '\n' :: t)
              apply ih
              exact compressNL_scan_rest_le rest f (by omega)
            · simp only [if_neg hk]
              apply congrArg (fun t => (scanGroup ('\n' :: rest) (('\n' :: rest).length + 1)).2.1 ++ t)
              apply ih
              exact compressNL_scan_rest_le rest f (by omega)
          · simp [compressNL.go, hc]
            apply ih
            omega

theorem compressNL_go_fuel (s : List Char) (f₁ f₂ : Nat)
    (hf₁ : s.length + 1 ≤ f₁) (hf₂ : s.length + 1 ≤ f₂) :
    compressNL.go s f₁ = compressNL.go s f₂ := by
  have hmono : ∀ {a b : Nat}, a ≤ b → s.length + 1 ≤ a → compressNL.go s a = compressNL.go s b := by
    intro a b hab ha
    obtain ⟨k, rfl⟩ : ∃ k, b = a + k := ⟨b - a, by omega⟩
    induction k with
    | zero => rfl
    | succ k ih =>
        calc
          compressNL.go s a = compressNL.go s (a + k) := ih (by omega)
          _ = compressNL.go s (a + k + 1) := by
            symm
            apply compressNL_go_one_more (a + k) s
            omega
  by_cases hle : f₁ ≤ f₂
  · exact hmono hle hf₁
  · have hle' : f₂ ≤ f₁ := by omega
    exact (hmono hle' hf₂).symm

theorem compressNL_fuel_sufficient (s : List Char) (f : Nat) (hf : s.length + 1 ≤ f) :
    compressNL.go s f = compressNL s := by
  exact compressNL_go_fuel s f (s.length + 1) hf (by omega)

/-! ## Exact structural facts for the four non-fuel passes -/

theorem prefilter_step12_no_cr (s : List Char) : '\r' ∉ convCR (convCRLF s) :=
  convCR_no_cr (convCRLF s)

theorem prefilter_step2_no_cr (s : List Char) : '\r' ∉ convCR s :=
  convCR_no_cr s

theorem prefilter_step4_no_tab (s : List Char) : '\t' ∉ expandTabs s :=
  expandTabs_no_tab s

theorem framePad_shape (s : List Char) : framePad s = '\n' :: (s ++ ['\n', '\n']) := rfl

/-! ## normSegs facts for the single-text-segment work Prefilter emits -/

theorem normSegs_single_text_fix (cs : List Char) :
    normSegs [TSeg.text cs] = normSegs (normSegs [TSeg.text cs]) := by
  cases cs with
  | nil => rfl
  | cons c rest => rfl

theorem no_tok_normSegs_single_text (cs : List Char) : ∀ k, TSeg.tok k ∉ normSegs [TSeg.text cs] := by
  cases cs with
  | nil => simp [normSegs]
  | cons c rest => simp [normSegs]

/-! ## WFState preservation and creation -/

theorem prefilterRule_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (prefilterRule st) := by
  unfold prefilterRule
  cases h : allText st.work with
  | none => simpa [h] using hwf
  | some cs =>
      simp only [h]
      unfold WFState at hwf ⊢
      rcases hwf with ⟨hseg, htok, hfoot, hbib, hbid, hanch, hdiv⟩
      refine ⟨?_, htok, hfoot, hbib, hbid, hanch, hdiv⟩
      unfold WFSegs
      constructor
      · exact normSegs_single_text_fix (prefilterChars cs)
      · intro k hk
        exact False.elim (no_tok_normSegs_single_text (prefilterChars cs) k hk)

theorem prefilterRule_ofSource_wf (cs : List Char) :
    WFState (prefilterRule (ParseState.ofSource cs)) :=
  prefilterRule_preserves_wf _ (wfState_ofSource cs)

/-! ## Token table / fatal flag invariance and the no-token fact -/

theorem prefilterRule_keeps_tokens (st : ParseState) :
    (prefilterRule st).tokens = st.tokens ∧ (prefilterRule st).fatal = st.fatal := by
  unfold prefilterRule
  cases h : allText st.work <;> simp [h]

theorem prefilterRule_no_tok_of_allText_some (st : ParseState) (cs : List Char)
    (h : allText st.work = some cs) : ∀ k, TSeg.tok k ∉ (prefilterRule st).work := by
  unfold prefilterRule
  rw [h]
  exact no_tok_normSegs_single_text (prefilterChars cs)

/-! ## Axiom visibility -/

#print axioms emptyWsLines_go_fuel
#print axioms scanGroup_fuel_indep
#print axioms compressNL_go_fuel
#print axioms prefilterRule_preserves_wf
#print axioms prefilterRule_ofSource_wf
#print axioms prefilterRule_keeps_tokens

end LeanFtml
