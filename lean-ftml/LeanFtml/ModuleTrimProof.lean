import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml.ModuleTrimProof

/-- isTrimByte is true exactly on the six PHP trim bytes: 32, 9, 10, 13, 0, 11. -/
theorem isTrimByte_true_iff (b : Nat) :
    isTrimByte b = true ↔ (((((b = 32 ∨ b = 9) ∨ b = 10) ∨ b = 13) ∨ b = 0) ∨ b = 11) := by
  simp [isTrimByte]

/-- Complement: isTrimByte is false exactly off those six bytes. -/
theorem isTrimByte_false_iff (b : Nat) :
    isTrimByte b = false ↔ (((((b ≠ 32 ∧ b ≠ 9) ∧ b ≠ 10) ∧ b ≠ 13) ∧ b ≠ 0) ∧ b ≠ 11) := by
  simp [isTrimByte]

/-- takeWhile followed by dropWhile rebuilds the list. -/
theorem takeWhile_append_dropWhile_local (p : Nat → Bool) : ∀ bs : List Nat,
    bs.takeWhile p ++ bs.dropWhile p = bs
  | [] => rfl
  | b :: bs => by
      cases hp : p b with
      | false => simp [List.takeWhile, List.dropWhile, hp]
      | true => simp [List.dropWhile, hp, takeWhile_append_dropWhile_local p bs]

/-- Applying dropWhile twice is the same as once. -/
theorem dropWhile_dropWhile (p : Nat → Bool) : ∀ bs : List Nat,
    (bs.dropWhile p).dropWhile p = bs.dropWhile p
  | [] => rfl
  | b :: bs => by
      cases hp : p b with
      | false => simp [List.dropWhile, hp]
      | true => simp [List.dropWhile, hp, dropWhile_dropWhile p bs]

/-- A list equals its dropWhile exactly when its takeWhile is empty. -/
theorem dropWhile_eq_self_iff_takeWhile_nil (p : Nat → Bool) (l : List Nat) :
    l.dropWhile p = l ↔ l.takeWhile p = [] := by
  have hsplit : l.takeWhile p ++ l.dropWhile p = l := takeWhile_append_dropWhile_local p l
  constructor
  · intro h
    have happ : l.takeWhile p ++ l = l := by simpa [h] using hsplit
    have hlen : (l.takeWhile p).length = 0 := by
      have hc := congrArg List.length happ
      simpa using hc
    cases htw : l.takeWhile p with
    | nil => rfl
    | cons a t => simp [htw] at hlen
  · intro h
    have h' : [] ++ l.dropWhile p = l := by simpa [h] using hsplit
    simpa using h'

/-- A prefix of a list whose takeWhile is empty also has empty takeWhile. -/
theorem takeWhile_empty_of_prefix (p : Nat → Bool) : ∀ (ys zs : List Nat),
    (ys ++ zs).takeWhile p = [] → ys.takeWhile p = []
  | [], zs, h => rfl
  | b :: bs, zs, h => by
      cases hp : p b with
      | false => simp [List.takeWhile, hp]
      | true => simp [hp] at h

/-- A prefix of a list fixed by dropWhile is itself fixed by dropWhile. -/
theorem dropWhile_eq_self_of_prefix (p : Nat → Bool) (ys zs : List Nat)
    (h : (ys ++ zs).dropWhile p = ys ++ zs) : ys.dropWhile p = ys := by
  have htw : (ys ++ zs).takeWhile p = [] :=
    (dropWhile_eq_self_iff_takeWhile_nil p (ys ++ zs)).1 h
  have htw' : ys.takeWhile p = [] := takeWhile_empty_of_prefix p ys zs htw
  exact (dropWhile_eq_self_iff_takeWhile_nil p ys).2 htw'

/-- Every byte of a takeWhile result satisfies the predicate. -/
theorem mem_takeWhile_of_pred (p : Nat → Bool) : ∀ (bs : List Nat) (b : Nat),
    b ∈ bs.takeWhile p → p b = true
  | [], b, h => by cases h
  | a :: as, b, h => by
      cases hp : p a with
      | false => simp [List.takeWhile, hp] at h
      | true =>
          simp [List.takeWhile, hp] at h
          cases h with
          | inl hba => subst b; exact hp
          | inr hmem => exact mem_takeWhile_of_pred p as b hmem

/-- The sublist property of dropWhile: it only deletes a prefix. -/
theorem dropWhile_sublist (p : Nat → Bool) : ∀ bs : List Nat, List.Sublist (bs.dropWhile p) bs
  | [] => .slnil
  | b :: bs => by
      cases hp : p b with
      | false => simp [List.dropWhile, hp]
      | true =>
          simpa [List.dropWhile, hp] using List.Sublist.cons b (dropWhile_sublist p bs)

/-- No leading trim byte. -/
def NoTrimStart (bs : List Nat) : Prop := bs.dropWhile isTrimByte = bs

/-- No trailing trim byte. -/
def NoTrimEnd (bs : List Nat) : Prop := bs.reverse.dropWhile isTrimByte = bs.reverse

/-- Exact decomposition: any bs is pre ++ mid ++ suf with pre and suf made only
    of trim bytes, mid = trimBytes bs, and mid free of leading/trailing trim bytes. -/
theorem trimBytes_decomposition (bs : List Nat) :
    ∃ pre mid suf : List Nat,
      bs = pre ++ mid ++ suf ∧
      trimBytes bs = mid ∧
      (∀ b ∈ pre, isTrimByte b = true) ∧
      (∀ b ∈ suf, isTrimByte b = true) ∧
      NoTrimStart mid ∧ NoTrimEnd mid := by
  let d := bs.dropWhile isTrimByte
  let A := d.reverse.takeWhile isTrimByte
  let B := d.reverse.dropWhile isTrimByte
  have hsplit1 : bs.takeWhile isTrimByte ++ d = bs := by
    simp [d]
  have hsplit2 : A ++ B = d.reverse := by
    simp [A, B]
  have hrev : B.reverse ++ A.reverse = d := by
    have hc := congrArg List.reverse hsplit2
    simpa using hc
  refine ⟨bs.takeWhile isTrimByte, B.reverse, A.reverse, ?_, ?_, ?_, ?_, ?_, ?_⟩
  · calc
      bs = bs.takeWhile isTrimByte ++ d := hsplit1.symm
      _ = bs.takeWhile isTrimByte ++ (B.reverse ++ A.reverse) := by rw [hrev]
      _ = bs.takeWhile isTrimByte ++ B.reverse ++ A.reverse := by simp [List.append_assoc]
  · rfl
  · exact mem_takeWhile_of_pred isTrimByte bs
  · intro b hb
    have hbA : b ∈ A := by simpa using hb
    exact mem_takeWhile_of_pred isTrimByte d.reverse b hbA
  · unfold NoTrimStart
    have hd : d.dropWhile isTrimByte = d := dropWhile_dropWhile isTrimByte bs
    have hpref : (B.reverse ++ A.reverse).dropWhile isTrimByte = B.reverse ++ A.reverse := by
      simpa [hrev] using hd
    exact dropWhile_eq_self_of_prefix isTrimByte B.reverse A.reverse hpref
  · unfold NoTrimEnd
    have hB : B.dropWhile isTrimByte = B := by
      simpa [B] using dropWhile_dropWhile isTrimByte d.reverse
    simpa using hB

/-- (c) trimBytes is the identity exactly on lists with no trim byte at either end. -/
theorem trimBytes_eq_self_iff (bs : List Nat) :
    trimBytes bs = bs ↔ NoTrimStart bs ∧ NoTrimEnd bs := by
  constructor
  · intro h
    rcases trimBytes_decomposition bs with ⟨pre, mid, suf, hbs, hmid, hpre, hsuf, hns, hne⟩
    have h_eq : pre ++ mid ++ suf = mid := by
      calc
        pre ++ mid ++ suf = bs := hbs.symm
        _ = trimBytes bs := h.symm
        _ = mid := hmid
    have hlen := congrArg List.length h_eq
    simp [List.append_assoc] at hlen
    have hpre0 : pre.length = 0 := by omega
    have hsuf0 : suf.length = 0 := by omega
    have hpre_nil : pre = [] := by
      cases pre with
      | nil => rfl
      | cons a t => simp at hpre0
    have hsuf_nil : suf = [] := by
      cases suf with
      | nil => rfl
      | cons a t => simp at hsuf0
    subst pre
    subst suf
    simp at hbs
    subst bs
    exact ⟨hns, hne⟩
  · intro h
    rcases h with ⟨hns, hne⟩
    unfold trimBytes
    unfold NoTrimStart at hns
    unfold NoTrimEnd at hne
    rw [hns]
    rw [hne]
    simp

/-- (b) trimBytes is idempotent. -/
theorem trimBytes_idempotent (bs : List Nat) : trimBytes (trimBytes bs) = trimBytes bs := by
  rcases trimBytes_decomposition bs with ⟨pre, mid, suf, hbs, hmid, hpre, hsuf, hns, hne⟩
  have hmid_eq : trimBytes mid = mid := (trimBytes_eq_self_iff mid).2 ⟨hns, hne⟩
  rw [hmid]
  exact hmid_eq

/-- The trimmed list has no leading trim byte. -/
theorem trimBytes_no_leading (bs : List Nat) : NoTrimStart (trimBytes bs) := by
  rcases trimBytes_decomposition bs with ⟨pre, mid, suf, hbs, hmid, hpre, hsuf, hns, hne⟩
  rw [hmid]
  exact hns

/-- The trimmed list has no trailing trim byte. -/
theorem trimBytes_no_trailing (bs : List Nat) : NoTrimEnd (trimBytes bs) := by
  rcases trimBytes_decomposition bs with ⟨pre, mid, suf, hbs, hmid, hpre, hsuf, hns, hne⟩
  rw [hmid]
  exact hne

/-- (d) trimming only deletes bytes: the trimmed list is a sublist of the input. -/
theorem trimBytes_sublist (bs : List Nat) : List.Sublist (trimBytes bs) bs := by
  unfold trimBytes
  have h1 : List.Sublist ((bs.dropWhile isTrimByte).reverse.dropWhile isTrimByte)
      (bs.dropWhile isTrimByte).reverse :=
    dropWhile_sublist isTrimByte (bs.dropWhile isTrimByte).reverse
  have h2 : List.Sublist ((bs.dropWhile isTrimByte).reverse.dropWhile isTrimByte).reverse
      (bs.dropWhile isTrimByte) := by
    simpa using h1.reverse
  have h3 : List.Sublist (bs.dropWhile isTrimByte) bs := dropWhile_sublist isTrimByte bs
  exact h2.trans h3

/-- (e) claimModule's placeholder encodes the incoming token count. -/
theorem claimModule_phBytes (rule : String) (name attr body : List Nat) (toks : List TokenEntry) :
    (claimModule rule name attr body toks).1 = phBytes toks.length := rfl

/-- (e) claimModule appends exactly one entry, with the supplied rule and values. -/
theorem claimModule_appends_one (rule : String) (name attr body : List Nat) (toks : List TokenEntry) :
    (claimModule rule name attr body toks).2 =
      toks ++ [{ rule := rule, opts := [("moduleName".toList, textVal name),
        ("attr".toList, textVal attr), ("module_body".toList, textVal body)] }] := rfl

/-- (e) the appended entry's options are exactly the supplied values. -/
theorem claimModule_token_shape (rule : String) (name attr body : List Nat) (toks : List TokenEntry) :
    ∃ e : TokenEntry,
      (claimModule rule name attr body toks).2 = toks ++ [e] ∧
      e.rule = rule ∧
      omGet e.opts "moduleName".toList = some (textVal name) ∧
      omGet e.opts "attr".toList = some (textVal attr) ∧
      omGet e.opts "module_body".toList = some (textVal body) ∧
      e.opts.length = 3 := by
  refine ⟨{ rule := rule, opts := [("moduleName".toList, textVal name),
      ("attr".toList, textVal attr), ("module_body".toList, textVal body)] },
      rfl, rfl, ?_, ?_, ?_, rfl⟩
  all_goals simp [omGet]

/-- (e) when the caller passes trimmed values, the claimed token records them. This is
    the exact shape of the claim branches of moduleTryCands and module654TryCands, where
    attr and body arrive as trimBytes attrRaw and trimBytes bodyRaw. -/
theorem claimModule_trims_are_recorded (rule : String) (name attrRaw bodyRaw : List Nat)
    (toks : List TokenEntry) :
    (claimModule rule name (trimBytes attrRaw) (trimBytes bodyRaw) toks).1 = phBytes toks.length ∧
    ∃ e : TokenEntry,
      (claimModule rule name (trimBytes attrRaw) (trimBytes bodyRaw) toks).2 = toks ++ [e] ∧
      e.rule = rule ∧
      omGet e.opts "attr".toList = some (textVal (trimBytes attrRaw)) ∧
      omGet e.opts "module_body".toList = some (textVal (trimBytes bodyRaw)) := by
  constructor
  · rfl
  · refine ⟨{ rule := rule, opts := [("moduleName".toList, textVal name),
        ("attr".toList, textVal (trimBytes attrRaw)),
        ("module_body".toList, textVal (trimBytes bodyRaw))] }, rfl, rfl, ?_, ?_⟩ <;>
      simp [omGet]

end LeanFtml.ModuleTrimProof

#print axioms LeanFtml.ModuleTrimProof.isTrimByte_true_iff
#print axioms LeanFtml.ModuleTrimProof.isTrimByte_false_iff
#print axioms LeanFtml.ModuleTrimProof.takeWhile_append_dropWhile_local
#print axioms LeanFtml.ModuleTrimProof.dropWhile_dropWhile
#print axioms LeanFtml.ModuleTrimProof.dropWhile_eq_self_iff_takeWhile_nil
#print axioms LeanFtml.ModuleTrimProof.takeWhile_empty_of_prefix
#print axioms LeanFtml.ModuleTrimProof.dropWhile_eq_self_of_prefix
#print axioms LeanFtml.ModuleTrimProof.mem_takeWhile_of_pred
#print axioms LeanFtml.ModuleTrimProof.dropWhile_sublist
#print axioms LeanFtml.ModuleTrimProof.trimBytes_decomposition
#print axioms LeanFtml.ModuleTrimProof.trimBytes_eq_self_iff
#print axioms LeanFtml.ModuleTrimProof.trimBytes_idempotent
#print axioms LeanFtml.ModuleTrimProof.trimBytes_no_leading
#print axioms LeanFtml.ModuleTrimProof.trimBytes_no_trailing
#print axioms LeanFtml.ModuleTrimProof.trimBytes_sublist
#print axioms LeanFtml.ModuleTrimProof.claimModule_phBytes
#print axioms LeanFtml.ModuleTrimProof.claimModule_appends_one
#print axioms LeanFtml.ModuleTrimProof.claimModule_token_shape
#print axioms LeanFtml.ModuleTrimProof.claimModule_trims_are_recorded
