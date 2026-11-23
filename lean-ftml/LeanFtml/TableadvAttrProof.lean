import LeanFtml.TableadvCellProof

/-! TableadvAttrProof.lean — REFCORR8 fold and REFCORR10 attribute-class lemmas (`data-` kept/dropped, `DATA-` dropped) split from TableadvProof.lean. -/

namespace LeanFtml

/-! ## REFCORR8 fold and REFCORR10 class -/

def tableadvDataClass (b : Nat) : Bool :=
  (97 ≤ b && b ≤ 122) || (48 ≤ b && b ≤ 57) || b == 45 || b == 95 || b == 46

theorem isPrefixOf_self_append (p s : List Nat) : p.isPrefixOf (p ++ s) = true := by
  induction p with
  | nil => simp
  | cons b bs ih => simp [List.isPrefixOf, ih]

theorem advDataKeyOk_suffix (s : List Nat) :
    advDataKeyOk (litBytes "data-" ++ s) = s.all tableadvDataClass := by
  simp only [advDataKeyOk, isPrefixOf_self_append, drop_app]
  apply congrArg (fun f => s.all f)
  funext x
  apply Bool.eq_iff_iff.mpr
  constructor <;> intro h
  · unfold tableadvDataClass at h ⊢
    simp only [Bool.and_eq_true, Bool.or_eq_true, beq_iff_eq, decide_eq_true_eq] at h ⊢
    omega
  · unfold tableadvDataClass at h
    simp only [Bool.and_eq_true, Bool.or_eq_true, beq_iff_eq, decide_eq_true_eq] at h ⊢
    omega

theorem lower_data_prefix (s : List Nat) :
    lowerBytes (litBytes "data-" ++ s) = litBytes "data-" ++ lowerBytes s := by
  have hlit : lowerBytes (litBytes "data-") = litBytes "data-" := by decide
  simpa [lowerBytes, List.map_append] using congrArg (fun t => t ++ lowerBytes s) hlit

theorem fold_data_suffix (s : List Nat) :
    foldDataKeyAdv (litBytes "data-" ++ s) = litBytes "data-" ++ lowerBytes s := by
  simp [foldDataKeyAdv, isPrefixOf_self_append, lower_data_prefix]

theorem data_lit : litBytes "data-" = [100, 97, 116, 97, 45] := by decide

theorem data_pref_ne (s name : List Nat) (hn : name.head? ≠ some 100) :
    (litBytes "data-" ++ s = name) → False := by
  intro h
  have := congrArg List.head? h
  simp [data_lit] at this
  exact hn this.symm

theorem data_pref_beq_false (s name : List Nat) (hn : name.head? ≠ some 100) :
    ((litBytes "data-" ++ s) == name) = false := by
  cases hbeq : ((litBytes "data-" ++ s) == name) with
  | false => rfl
  | true =>
      exact (data_pref_ne s name hn (by simpa [beq_iff_eq] using hbeq)).elim

theorem norm_UB : normalizeValueAdv (litBytes "UB") = litBytes "UB" := by decide

theorem ub_nonempty : (litBytes "UB").isEmpty = false := by decide

/-- Every suffix: a lower-case `data-` prefix is folded, then kept exactly when the folded suffix lies in `[a-z0-9._-]`. `UB` is unchanged by normalization. An upper-case letter in the suffix is outside the class and inside the fold, which is the REFCORR8 step; `.` and `_` are in the class, which is the REFCORR10 step. -/
theorem advAttrStep_data_keep (s : List Nat)
    (h : (lowerBytes s).all tableadvDataClass = true) :
    advAttrStep "table" [] (litBytes "data-" ++ s, litBytes "UB") =
      [(litBytes "data-" ++ lowerBytes s, litBytes "UB")] := by
  have hk : advAttrKeyOk (litBytes "data-" ++ lowerBytes s) = true := by
    simp [advAttrKeyOk, isPrefixOf_self_append, advDataKeyOk_suffix, h]
  have hs : isSafeAttrB (litBytes "data-" ++ lowerBytes s) = true := by
    simp [isSafeAttrB, isPrefixOf_self_append]
  have htitle := data_pref_beq_false (lowerBytes s) (litBytes "title") (by decide)
  have hhidden := data_pref_beq_false (lowerBytes s) (litBytes "hidden") (by decide)
  have hcol := data_pref_beq_false (lowerBytes s) (litBytes "colspan") (by decide)
  have hrow := data_pref_beq_false (lowerBytes s) (litBytes "rowspan") (by decide)
  have hid := data_pref_beq_false (lowerBytes s) (litBytes "id") (by decide)
  unfold advAttrStep
  simp only [fold_data_suffix, hk, hs, htitle, hhidden, hcol, hrow, hid, norm_UB,
    ub_nonempty, omSetB, show ("table" == "cell") = false by decide, Bool.not_true,
    Bool.not_false, Bool.or_false, Bool.and_false, Bool.false_and]
  simp [Bool.false_eq_true, if_false, norm_UB, ub_nonempty, Bool.and_false]

theorem advAttrStep_data_drop (s : List Nat)
    (h : (lowerBytes s).all tableadvDataClass = false) :
    advAttrStep "table" [] (litBytes "data-" ++ s, litBytes "UB") = [] := by
  have hk : advAttrKeyOk (litBytes "data-" ++ lowerBytes s) = false := by
    simp [advAttrKeyOk, isPrefixOf_self_append, advDataKeyOk_suffix, h]
  unfold advAttrStep
  simp only [fold_data_suffix, hk, Bool.not_false, ite_true]

theorem data_prefix_upper_rejected (s : List Nat) :
    (litBytes "data-").isPrefixOf (litBytes "DATA-" ++ s) = false := by
  rw [show litBytes "data-" = [100, 97, 116, 97, 45] by decide]
  rw [show litBytes "DATA-" = [68, 65, 84, 65, 45] by decide]
  simp [List.isPrefixOf]

/-- An upper-case `DATA-` prefix is not folded and is dropped, for every suffix and every value. -/
theorem advAttrStep_DATA_drop (s v : List Nat) :
    advAttrStep "table" [] (litBytes "DATA-" ++ s, v) = [] := by
  have hfold : foldDataKeyAdv (litBytes "DATA-" ++ s) = litBytes "DATA-" ++ s := by
    simp [foldDataKeyAdv, data_prefix_upper_rejected]
  have hkey : advKeyOk (litBytes "DATA-" ++ s) = false := by
    rw [show litBytes "DATA-" = [68, 65, 84, 65, 45] by decide]
    simp [advKeyOk]
  have hok : advAttrKeyOk (litBytes "DATA-" ++ s) = false := by
    simp [advAttrKeyOk, data_prefix_upper_rejected, hkey]
  simp [advAttrStep, hfold, hok]

theorem tableadvDataClass_members :
    tableadvDataClass 46 = true ∧ tableadvDataClass 95 = true ∧
    tableadvDataClass 45 = true ∧ tableadvDataClass 43 = false ∧
    tableadvDataClass 65 = false ∧ tableadvDataClass 97 = true := by
  decide

def tadvAlph : List Nat := [97, 65, 122, 90, 48, 57, 45, 95, 46, 43, 32, 93]

def tadvExact : Nat → List (List Nat)
  | 0 => [[]]
  | n + 1 => (tadvExact n).flatMap fun s => tadvAlph.map fun b => s ++ [b]

def tadvUpTo (n : Nat) : List (List Nat) :=
  (List.range (n + 1)).flatMap tadvExact

set_option maxRecDepth 100000 in
theorem tadvUpTo_two_length : (tadvUpTo 2).length = 157 := by decide

set_option maxHeartbeats 2000000 in
set_option maxRecDepth 100000 in
theorem tadv_suffix_domain :
    (tadvUpTo 2).all (fun s =>
      let keep := (lowerBytes s).all tableadvDataClass
      let stepped := advAttrStep "table" [] (litBytes "data-" ++ s, litBytes "UB")
      let expect := if keep then [(lowerBytes (litBytes "data-" ++ s), litBytes "UB")] else []
      let upper := advAttrStep "table" [] (litBytes "DATA-" ++ s, litBytes "UB")
      (stepped == expect) && (upper == [])) = true := by
  decide

end LeanFtml
