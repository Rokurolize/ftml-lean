import LeanFtml.Proof.BundlesWave2

namespace LeanFtml

def listPcre : PcreCore.PcreParsed := (refParsed .list).head!

theorem refParsed_list : refParsed .list = [listPcre] := by
  decide

def nativeScanHasHit (src : List Nat) (atStart : Bool) : Nat → Bool
  | 0 => false
  | fuel + 1 =>
      match src with
      | [] => false
      | b :: rest =>
          match (if atStart then nativeRunAt src else none) with
          | some _ => true
          | none => nativeScanHasHit rest (b == 10) fuel

def listScanFires (st : ParseState) : Prop :=
  nativeScanHasHit (byteForm st.work) true ((byteForm st.work).length + 1) = true

def listScanSpliceAgrees (st : ParseState) : Prop :=
  listNative (byteForm st.work) st.tokens =
    refWorkWith listNativeProcessRef .list st

def listExplicitInertAfterNative (st : ParseState) : Prop :=
  listExplicitPass (listNative (byteForm st.work) st.tokens).1
    (listNative (byteForm st.work) st.tokens).2 =
      listNative (byteForm st.work) st.tokens

def ListMatchingResidueScope (st : ParseState) : Prop :=
  listScanFires st ∧
  listScanSpliceAgrees st ∧
  listExplicitInertAfterNative st ∧
  WFSegs (listRule st).work (listRule st).tokens.length

theorem refWorkWith_list_eq_splice (st : ParseState) :
    refWorkWith listNativeProcessRef .list st =
      spliceMatchesWith listNativeProcessRef (byteForm st.work) st.tokens
        (PcreCore.pregMatchAll listPcre (byteForm st.work)) := by
  unfold refWorkWith
  rw [refParsed_list]
  rfl



theorem applyByteRule_congr_point (st : ParseState)
    (f g : List Nat → List TokenEntry → List Nat × List TokenEntry)
    (h : f (byteForm st.work) st.tokens = g (byteForm st.work) st.tokens) :
    applyByteRule st f = applyByteRule st g := by
  unfold applyByteRule
  rw [h]

theorem applyByteRule_const_refWith (st : ParseState)
    (href : (refWork .list st).2 ≠ []) :
    applyByteRule st (fun _ _ => refWorkWith listNativeProcessRef .list st) =
      applyRuleRefWith listNativeProcessRef .list st := by
  unfold applyByteRule applyRuleRefWith
  rw [if_neg href]

theorem applyRule_list_eq_refWith_when_ref_fires (st : ParseState)
    (href : (refWork .list st).2 ≠ [])
    (hscan : listScanSpliceAgrees st)
    (hexp : listExplicitInertAfterNative st) :
    applyRule .list st = applyRuleRefWith listNativeProcessRef .list st := by
  unfold listScanSpliceAgrees at hscan
  unfold listExplicitInertAfterNative at hexp
  have hbyte : (fun src toks =>
        let (s1, t1) := listNative src toks
        listExplicitPass s1 t1) (byteForm st.work) st.tokens =
      refWorkWith listNativeProcessRef .list st := by
    change listExplicitPass (listNative (byteForm st.work) st.tokens).1
      (listNative (byteForm st.work) st.tokens).2 = _
    exact hexp.trans hscan
  change applyByteRule st (fun src toks =>
      let (s1, t1) := listNative src toks
      listExplicitPass s1 t1) = _
  calc
    applyByteRule st (fun src toks =>
        let (s1, t1) := listNative src toks
        listExplicitPass s1 t1) =
        applyByteRule st (fun _ _ => refWorkWith listNativeProcessRef .list st) :=
      applyByteRule_congr_point st _ _ hbyte
    _ = applyRuleRefWith listNativeProcessRef .list st :=
      applyByteRule_const_refWith st href

/-- The reference-fire branch is redundant: when the bare reference makes no
    claims the sole List pattern necessarily has no matches, so scan agreement
    collapses the native pass to the identity and WF gives back the input
    segments exactly. -/
theorem applyRule_list_eq_refWith_of_residue (st : ParseState)
    (hwf : WFState st)
    (hscan : listScanSpliceAgrees st)
    (hexp : listExplicitInertAfterNative st) :
    applyRule .list st = applyRuleRefWith listNativeProcessRef .list st := by
  cases hc : (refWork .list st).2 == [] with
  | true =>
      have h0 : (refWork .list st).2 = [] := beq_iff_eq.mp hc
      rw [applyRuleRefWith_of_no_claims listNativeProcessRef .list st h0]
      have hms : PcreCore.pregMatchAll listPcre (byteForm st.work) = [] := by
        unfold refWork at h0
        rw [refParsed_list] at h0
        dsimp only [List.foldl, spliceMatches] at h0
        cases hm : PcreCore.pregMatchAll listPcre (byteForm st.work) with
        | nil => rfl
        | cons x xs =>
            exfalso
            have hne := spliceMatches_snd_ne_nil (bs := byteForm st.work)
              (base := st.tokens.length) (x :: xs) [] 0 [] (Or.inr (by simp))
            rw [← hm] at hne
            exact hne h0
      unfold listScanSpliceAgrees at hscan
      rw [refWorkWith_list_eq_splice st, hms] at hscan
      simp only [spliceMatchesWith, List.foldl_nil, List.nil_append, List.drop_zero] at hscan
      unfold listExplicitInertAfterNative at hexp
      have hbyte : (fun src toks =>
            let (s1, t1) := listNative src toks
            listExplicitPass s1 t1) (byteForm st.work) st.tokens =
          (byteForm st.work, st.tokens) := by
        change listExplicitPass (listNative (byteForm st.work) st.tokens).1
          (listNative (byteForm st.work) st.tokens).2 = _
        exact hexp.trans hscan
      change applyByteRule st (fun src toks =>
        let (s1, t1) := listNative src toks
        listExplicitPass s1 t1) = st
      exact applyByteRule_eq_self st hwf _ hbyte
  | false =>
      have href : (refWork .list st).2 ≠ [] := by
        intro h0; simp [h0] at hc
      exact applyRule_list_eq_refWith_when_ref_fires st href hscan hexp

theorem listMatchingResidueBundle :
    ScopedRuleProofBundle (applyRuleRefWith listNativeProcessRef)
      ListMatchingResidueScope .list where
  preserves_wf := fun st hwf hp => by
    exact lst_listRule_wf_of_work st hp.2.2.2 hwf
  eq_ref := fun st hwf hp => by
    exact applyRule_list_eq_refWith_of_residue st hwf hp.2.1 hp.2.2.1
  reachable_tokens := fun st hwf hp hr => by
    exact ReachableState.step .list st hwf hr


/-- A mixed explicit/native input used to show that explicit-pass inertness is
    not redundant in the matching-input residue scope. -/
def listExplicitCounterState : ParseState :=
  ParseState.ofSource "[[ul]]\n[[li]]x[[/li]]\n[[/ul]]\n* a\n".toList

set_option maxRecDepth 65536 in
theorem listExplicitCounter_scan_fires :
    listScanFires listExplicitCounterState := by
  rfl

set_option maxRecDepth 65536 in
theorem listExplicitCounter_ref_fires :
    (refWork .list listExplicitCounterState).2 ≠ [] := by
  intro hnil
  have hlen : (refWork .list listExplicitCounterState).2.length = 1 := by
    rfl
  rw [hnil] at hlen
  contradiction

set_option maxRecDepth 65536 in
theorem listExplicitCounter_scan_agrees :
    listScanSpliceAgrees listExplicitCounterState := by
  rfl

set_option maxRecDepth 65536 in
theorem listExplicitCounter_explicit_not_inert :
    ¬ listExplicitInertAfterNative listExplicitCounterState := by
  unfold listExplicitInertAfterNative
  intro h
  have hl : (listExplicitPass
      (listNative (byteForm listExplicitCounterState.work) listExplicitCounterState.tokens).1
      (listNative (byteForm listExplicitCounterState.work) listExplicitCounterState.tokens).2).2.length = 8 := by
    rfl
  have hr : (listNative (byteForm listExplicitCounterState.work)
      listExplicitCounterState.tokens).2.length = 4 := by
    rfl
  rw [h] at hl
  omega

set_option maxRecDepth 65536 in
theorem listExplicitCounter_apply_ne_refWith :
    applyRule .list listExplicitCounterState ≠
      applyRuleRefWith listNativeProcessRef .list listExplicitCounterState := by
  intro h
  have h1 : (applyRule .list listExplicitCounterState).tokens.length = 8 := by
    rfl
  have h2 : (applyRuleRefWith listNativeProcessRef .list listExplicitCounterState).tokens.length = 4 := by
    rfl
  rw [h] at h1
  omega

/-- Necessity of the explicit-pass-inertness conjunct: the scan fires, the
    reference fires, and scan-to-callback agreement holds on this witness, but
    the full mirror still differs from the callback-equipped reference because
    the explicit pass is active. -/
theorem listExplicitInertness_hypothesis_necessary :
    listScanFires listExplicitCounterState ∧
    (refWork .list listExplicitCounterState).2 ≠ [] ∧
    listScanSpliceAgrees listExplicitCounterState ∧
    ¬ listExplicitInertAfterNative listExplicitCounterState ∧
    applyRule .list listExplicitCounterState ≠
      applyRuleRefWith listNativeProcessRef .list listExplicitCounterState :=
  ⟨listExplicitCounter_scan_fires, listExplicitCounter_ref_fires,
   listExplicitCounter_scan_agrees, listExplicitCounter_explicit_not_inert,
   listExplicitCounter_apply_ne_refWith⟩

end LeanFtml
