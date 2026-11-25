import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml.Module654TailProof

/-!
Universal structural facts about the Module654 tail and its claim branch, stated about the mirror's own functions in ModuleRules.lean. The closer pattern is the mirror's ASCII-case-folded `[[/module]]`. The inherited 64-spelling generator in ModuleProof.lean discharges the `matchLitCI closerPat c = some []` hypothesis for the reference's closer domain; it is not duplicated here. Remainder: the converse (a case-folded match implies membership in that generator's 64-element list) is not proved here; nothing here proves moduleHead on arbitrary frames, the modulePasses fixpoint, the render handoff, or any equality with PHP or libpcre2. No evaluation.
-/

def closerPat : List Nat := litBytes "[[/module]]"

def padByte (b : Nat) : Bool := b == 32 || b == 9

theorem closerPat_len : closerPat.length = 11 := by
  decide

theorem matchLitCI_append {pat a b r : List Nat} (h : matchLitCI pat a = some r) :
    matchLitCI pat (a ++ b) = some (r ++ b) := by
  induction pat generalizing a r with
  | nil =>
      simp [matchLitCI] at h
      simp [matchLitCI, h]
  | cons p pat ih =>
      cases a with
      | nil => simp [matchLitCI] at h
      | cons x a =>
          by_cases hb : byteCiEq x p
          · have h' : matchLitCI pat a = some r := by
              simpa [matchLitCI, hb] using h
            simpa [matchLitCI, hb] using ih h'
          · simp [matchLitCI, hb] at h

theorem matchLitCI_eq_drop {pat src r : List Nat} (h : matchLitCI pat src = some r) :
    r = src.drop pat.length := by
  induction pat generalizing src r with
  | nil =>
      simpa [matchLitCI] using h.symm
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p
          · have h' : matchLitCI pat xs = some r := by
              simpa [matchLitCI, hb] using h
            have ih' := ih h'
            simpa using ih'
          · simp [matchLitCI, hb] at h

theorem matchLitCI_le_length {pat src r : List Nat} (h : matchLitCI pat src = some r) :
    pat.length ≤ src.length := by
  induction pat generalizing src r with
  | nil => simp
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p
          · have h' : matchLitCI pat xs = some r := by
              simpa [matchLitCI, hb] using h
            have ih' := ih h'
            simpa using Nat.succ_le_succ ih'
          · simp [matchLitCI, hb] at h

theorem matchLitCI_take_prefix {pat src r : List Nat} (h : matchLitCI pat src = some r) :
    matchLitCI pat (src.take pat.length) = some [] := by
  induction pat generalizing src r with
  | nil => simp [matchLitCI]
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p
          · have h' : matchLitCI pat xs = some r := by
              simpa [matchLitCI, hb] using h
            have ih' := ih h'
            simpa [matchLitCI, hb] using ih'
          · simp [matchLitCI, hb] at h

theorem findSubCI_eq_zero_of_match {pat xs r : List Nat} (h : matchLitCI pat xs = some r) :
    findSubCI pat xs = some 0 := by
  cases xs with
  | nil =>
      cases pat with
      | nil => simp [findSubCI]
      | cons _ _ => simp [matchLitCI] at h
  | cons x xs => simp [findSubCI, h]

theorem findSubCI_spec {pat xs : List Nat} {k : Nat} (h : findSubCI pat xs = some k) :
    ∃ r, matchLitCI pat (xs.drop k) = some r := by
  induction xs generalizing k with
  | nil =>
      by_cases hp : pat.isEmpty
      · have hk : k = 0 := by simpa [findSubCI, hp] using h.symm
        subst k
        refine ⟨[], ?_⟩
        cases pat with
        | nil => simp [matchLitCI]
        | cons _ _ => simp at hp
      · simp [findSubCI, hp] at h
  | cons x xs ih =>
      cases hm : matchLitCI pat (x :: xs) with
      | none =>
          cases hf : findSubCI pat xs with
          | none => simp [findSubCI, hm, hf] at h
          | some j =>
              have hk : k = j + 1 := by simpa [findSubCI, hm, hf] using h.symm
              subst k
              obtain ⟨r, hr⟩ := ih hf
              exact ⟨r, by simpa using hr⟩
      | some r0 =>
          have hk : k = 0 := by simpa [findSubCI, hm] using h.symm
          subst k
          exact ⟨r0, by simpa using hm⟩

theorem dropWhile_pad_append (pad xs : List Nat) (hpad : ∀ b ∈ pad, padByte b = true) :
    (pad ++ xs).dropWhile padByte = xs.dropWhile padByte := by
  induction pad with
  | nil => simp
  | cons b pad ih =>
      have hb : padByte b = true := hpad b (by simp)
      have hpad' : ∀ c ∈ pad, padByte c = true := by
        intro c hc
        exact hpad c (by simp [hc])
      simp [hb, ih hpad']

theorem dropWhile_pad_lf (pad body : List Nat) (hpad : ∀ b ∈ pad, padByte b = true) :
    (pad ++ 10 :: body).dropWhile (fun b => b == 32 || b == 9) = 10 :: body := by
  induction pad with
  | nil => simp
  | cons b pad ih =>
      have hb : padByte b = true := hpad b (by simp)
      have hb' : (b == 32 || b == 9) = true := by simpa [padByte] using hb
      have hpad' : ∀ c ∈ pad, padByte c = true := by
        intro c hc
        exact hpad c (by simp [hc])
      simp [hb', ih hpad']

theorem module654Tail_pad_lf (pad body : List Nat) (hpad : ∀ b ∈ pad, padByte b = true) :
    module654Tail (pad ++ 10 :: body) =
      match findSubCI closerPat body with
      | some k => some (body.take k, (body.drop k).drop 11)
      | none => some ([], body) := by
  unfold module654Tail
  rw [dropWhile_pad_lf pad body hpad]
  rfl

theorem drop_append_len (xs ys : List Nat) : (xs ++ ys).drop xs.length = ys := by
  induction xs with
  | nil => simp
  | cons _ xs ih => simp [ih]

theorem module654Tail_immediate_closer (pad c tail : List Nat)
    (hpad : ∀ b ∈ pad, padByte b = true)
    (hc : matchLitCI closerPat c = some [])
    (hlen : c.length = 11) :
    module654Tail (pad ++ 10 :: (c ++ tail)) = some ([], tail) := by
  rw [module654Tail_pad_lf pad (c ++ tail) hpad]
  have hz : findSubCI closerPat (c ++ tail) = some 0 := by
    apply findSubCI_eq_zero_of_match
    simpa using matchLitCI_append hc
  rw [hz]
  simp [hlen]

theorem module654Tail_no_closer (pad body : List Nat) (hpad : ∀ b ∈ pad, padByte b = true)
    (hnone : findSubCI closerPat body = none) :
    module654Tail (pad ++ 10 :: body) = some ([], body) := by
  rw [module654Tail_pad_lf pad body hpad, hnone]

theorem module654Tail_pad_lf_some (pad body : List Nat) (hpad : ∀ b ∈ pad, padByte b = true) :
    ∃ b r, module654Tail (pad ++ 10 :: body) = some (b, r) := by
  rw [module654Tail_pad_lf pad body hpad]
  cases h : findSubCI closerPat body with
  | none => exact ⟨[], body, rfl⟩
  | some k => exact ⟨body.take k, (body.drop k).drop 11, rfl⟩

theorem dropWhile_spaces_of_tab (pad body : List Nat)
    (hpad : ∀ b ∈ pad, padByte b = true) (htab : 9 ∈ pad) :
    ∃ suf, (pad ++ 10 :: body).dropWhile (fun b => b == 32) = 9 :: suf := by
  induction pad with
  | nil => simp at htab
  | cons b pad ih =>
      have hb_pad : padByte b = true := hpad b (by simp)
      by_cases hb32 : b == 32
      · have hbne9 : b ≠ 9 := by
          have hb_eq : b = 32 := (beq_iff_eq).mp hb32
          omega
        have hbne9' : 9 ≠ b := by
          intro h9
          exact hbne9 h9.symm
        have htab_pad : 9 ∈ pad := by
          simpa [hbne9, hbne9'] using htab
        have hpad' : ∀ c ∈ pad, padByte c = true := by
          intro c hc
          exact hpad c (by simp [hc])
        obtain ⟨suf, hsuf⟩ := ih hpad' htab_pad
        exact ⟨suf, by simpa [hb32] using hsuf⟩
      · have hb9 : b = 9 := by
          have hbor : (b == 32 || b == 9) = true := by simpa [padByte] using hb_pad
          simpa [hb32] using hbor
        subst b
        exact ⟨pad ++ 10 :: body, by simp⟩

theorem c1_moduleTail_none_of_tab (pad body : List Nat)
    (hpad : ∀ b ∈ pad, padByte b = true) (htab : 9 ∈ pad) :
    moduleTail (pad ++ 10 :: body) = none := by
  unfold moduleTail
  obtain ⟨suf, hsuf⟩ := dropWhile_spaces_of_tab pad body hpad htab
  rw [hsuf]
  rfl

theorem c1_contrast (pad body : List Nat)
    (hpad : ∀ b ∈ pad, padByte b = true) (htab : 9 ∈ pad) :
    moduleTail (pad ++ 10 :: body) = none ∧
      ∃ b r, module654Tail (pad ++ 10 :: body) = some (b, r) := by
  exact ⟨c1_moduleTail_none_of_tab pad body hpad htab,
    module654Tail_pad_lf_some pad body hpad⟩

theorem take_drop_self (xs : List Nat) (n : Nat) : xs.take n ++ xs.drop n = xs := by
  exact List.take_append_drop n xs

theorem module654Tail_result_split (pad body : List Nat)
    (hpad : ∀ b ∈ pad, padByte b = true) :
    ∀ b r, module654Tail (pad ++ 10 :: body) = some (b, r) →
      (b = [] ∧ r = body) ∨
      (∃ k, b = body.take k ∧ r = (body.drop k).drop 11 ∧
        body.take k ++ body.drop k = body) := by
  intro b r h
  rw [module654Tail_pad_lf pad body hpad] at h
  cases hf : findSubCI closerPat body with
  | none =>
      simp [hf] at h
      cases h.1
      cases h.2
      exact Or.inl ⟨rfl, rfl⟩
  | some k =>
      simp [hf] at h
      cases h.1
      cases h.2
      exact Or.inr ⟨k, rfl, by simp [List.drop_drop], take_drop_self body k⟩

theorem closer_at_offset (body : List Nat) (k : Nat)
    (hfind : findSubCI closerPat body = some k) :
    ∃ c r : List Nat, c.length = 11 ∧ matchLitCI closerPat c = some [] ∧
      body.drop k = c ++ r ∧ (body.drop k).drop 11 = r := by
  obtain ⟨r, hr⟩ := findSubCI_spec hfind
  let c := (body.drop k).take 11
  refine ⟨c, r, ?_, ?_, ?_, ?_⟩
  · have hle : 11 ≤ (body.drop k).length := by
      have hl := matchLitCI_le_length hr
      simpa [closerPat_len] using hl
    dsimp [c]
    rw [List.length_take, Nat.min_eq_left hle]
  · dsimp [c]
    exact matchLitCI_take_prefix hr
  · have hdr : r = (body.drop k).drop closerPat.length := matchLitCI_eq_drop hr
    rw [closerPat_len] at hdr
    rw [hdr]
    dsimp [c]
    exact (List.take_append_drop 11 (body.drop k)).symm
  · have hdr : r = (body.drop k).drop closerPat.length := matchLitCI_eq_drop hr
    simpa [closerPat_len] using hdr.symm

theorem claimModule654_shape (name attr body : List Nat) (toks : List TokenEntry) :
    claimModule "Module654" name attr body toks =
      (phBytes toks.length,
        toks ++ [{ rule := "Module654", opts := [("moduleName".toList, textVal name),
          ("attr".toList, textVal attr), ("module_body".toList, textVal body)] }]) := by
  rfl

theorem module654TryCands_single (src name attrRaw rest bodyRaw rest' : List Nat) (toks : List TokenEntry)
    (h : module654Tail rest = some (bodyRaw, rest'))
    (hhtml : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = false) :
    module654TryCands src name toks [(attrRaw, rest)] =
      some ([10, 10] ++ phBytes toks.length ++ [10, 10], rest',
        toks ++ [{ rule := "Module654", opts := [("moduleName".toList, textVal name),
          ("attr".toList, textVal (trimBytes attrRaw)),
          ("module_body".toList, textVal (trimBytes bodyRaw))] }]) := by
  simp [module654TryCands, h, hhtml, claimModule]

def simpleFrame (name body : List Nat) : List Nat :=
  litBytes "[[module654 " ++ name ++ litBytes "]]" ++ [10] ++ body

theorem takeWhile_name_run (name suf : List Nat)
    (hall : name.all isModuleNameByte = true)
    (hsuf : match suf with | [] => True | x :: _ => isModuleNameByte x = false) :
    (name ++ suf).takeWhile isModuleNameByte = name := by
  induction name with
  | nil =>
      cases suf with
      | nil => simp
      | cons x xs => simp [hsuf]
  | cons x xs ih =>
      have hx : isModuleNameByte x = true := (List.all_eq_true.mp hall) x (by simp)
      have hall' : xs.all isModuleNameByte = true :=
        List.all_eq_true.mpr (fun a ha => (List.all_eq_true.mp hall) a (by simp [ha]))
      simp [hx, ih hall']

theorem moduleHead_simpleFrame (name body : List Nat)
    (hname : name ≠ [] ∧ name.all isModuleNameByte = true) :
    moduleHead (litBytes "[[module654") (simpleFrame name body) =
      some (name, [([], 10 :: body)]) := by
  unfold moduleHead
  let suf : List Nat := litBytes "]]" ++ [10] ++ body
  have hm : matchLitCI (litBytes "[[module654") (simpleFrame name body) =
      some (32 :: (name ++ suf)) := by
    simp [simpleFrame, suf, litBytes, matchLitCI, byteCiEq, List.append_assoc]
  rw [hm]
  have hname_empty : name.isEmpty = false := by
    cases name with
    | nil => contradiction
    | cons _ _ => simp
  have htw : (name ++ suf).takeWhile isModuleNameByte = name := by
    apply takeWhile_name_run
    · exact hname.2
    · simp [suf, litBytes, isModuleNameByte]
  have hdrop : (name ++ suf).drop name.length = suf := drop_append_len name suf
  have htw' : (name ++ (93 :: 93 :: 10 :: body)).takeWhile isModuleNameByte = name := by
    simpa [suf, litBytes] using htw
  have hdrop' : (name ++ (93 :: 93 :: 10 :: body)).drop name.length = 93 :: 93 :: 10 :: body := by
    simp
  simp [suf, litBytes, isWsByte, hname_empty, htw', hdrop']

theorem module654Match_simpleFrame (name body : List Nat)
    (hname : name ≠ [] ∧ name.all isModuleNameByte = true) :
    module654Match (simpleFrame name body) [] =
      match findSubCI closerPat body with
      | some k =>
          some ([10, 10] ++ phBytes 0 ++ [10, 10],
            (body.drop k).drop 11,
            [{ rule := "Module654", opts := [("moduleName".toList, textVal name),
               ("attr".toList, textVal []),
               ("module_body".toList, textVal (trimBytes (body.take k)))] }])
      | none =>
          some ([10, 10] ++ phBytes 0 ++ [10, 10], body,
            [{ rule := "Module654", opts := [("moduleName".toList, textVal name),
               ("attr".toList, textVal []),
               ("module_body".toList, textVal (trimBytes []))] }]) := by
  unfold module654Match
  rw [moduleHead_simpleFrame name body hname]
  cases h : findSubCI (litBytes "[[/module]]") body with
  | none =>
      simp [module654TryCands, module654Tail, closerPat, claimModule, trimBytes, bodyHasHtmlToken, h]
  | some k =>
      simp [module654TryCands, module654Tail, closerPat, claimModule, trimBytes, bodyHasHtmlToken, h, List.drop_drop]

#print axioms closerPat_len
#print axioms matchLitCI_append
#print axioms matchLitCI_eq_drop
#print axioms matchLitCI_le_length
#print axioms matchLitCI_take_prefix
#print axioms findSubCI_eq_zero_of_match
#print axioms findSubCI_spec
#print axioms dropWhile_pad_append
#print axioms dropWhile_pad_lf
#print axioms module654Tail_pad_lf
#print axioms drop_append_len
#print axioms module654Tail_immediate_closer
#print axioms module654Tail_no_closer
#print axioms module654Tail_pad_lf_some
#print axioms dropWhile_spaces_of_tab
#print axioms c1_moduleTail_none_of_tab
#print axioms c1_contrast
#print axioms take_drop_self
#print axioms module654Tail_result_split
#print axioms closer_at_offset
#print axioms claimModule654_shape
#print axioms module654TryCands_single
#print axioms takeWhile_name_run
#print axioms moduleHead_simpleFrame
#print axioms module654Match_simpleFrame

end LeanFtml.Module654TailProof
