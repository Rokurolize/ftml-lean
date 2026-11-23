import LeanFtml.ContainRules
import LeanFtml.InteractiveRules

/-! Div id isolation laws against the current mirror `isolateId` (LeanFtml/ContainRules.lean:522).
Universal mechanism-level laws (hold for every input, in brief scope):
  empty ids isolate to the empty value; placeholder-bearing ids are retained verbatim; all-trim-byte ids isolate to the bare `u-` shell.
Regression pins (concrete ground witnesses, not universal proofs):
  isolateId_formfeed, isolateId_nbsp and isolateId_soh fix only the observed form-feed, NBSP and SOH boundary outputs. -/

namespace LeanFtml

/-! ## id isolation -/

/-- Bool `if` elaborates as `ite (cond = true)`, so a rewritten condition stays a proposition. -/
theorem boolIf_false {α : Type} {a b : α} : (if false = true then a else b) = b :=
  ite_eq_right (by decide)

theorem boolIf_true {α : Type} {a b : α} : (if true = true then a else b) = a :=
  ite_eq_left (by decide)

theorem orFF : (false || false) = false := by decide
theorem orFFF : ((false || false) || false) = false := by decide
theorem orFFT : ((false || false) || true) = true := by decide
theorem orTFF : ((true || false) || false) = true := by decide
theorem orFTF : ((false || true) || false) = true := by decide

theorem utf8Decode_go_ascii :
    ∀ (bs : List Nat) (fuel : Nat),
      bs.length ≤ fuel → (∀ b ∈ bs, b < 0x80) →
      utf8Decode.go bs fuel = bs.map Char.ofNat
  | [], _, _, _ => by simp [utf8Decode.go]
  | _ :: _, 0, hle, _ => by simp at hle
  | b :: rest, fuel + 1, hle, hall => by
      have hb : b < 0x80 := hall b (List.mem_cons_self ..)
      have hrest : ∀ x ∈ rest, x < 0x80 :=
        fun x hx => hall x (List.mem_cons_of_mem _ hx)
      have hle' : rest.length ≤ fuel := Nat.le_of_succ_le_succ hle
      unfold utf8Decode.go
      simp only [hb, ↓reduceIte]
      exact congrArg (Char.ofNat b :: ·)
        (utf8Decode_go_ascii rest fuel hle' hrest)

theorem utf8Decode_ascii (bs : List Nat) (h : ∀ b ∈ bs, b < 0x80) :
    utf8Decode bs = bs.map Char.ofNat :=
  utf8Decode_go_ascii bs bs.length (Nat.le_refl _) h

theorem utf8Decode_lit (s : String) (h : ∀ c ∈ s.toList, c.toNat < 0x80) :
    utf8Decode (litBytes s) = s.toList := by
  have hall : ∀ b ∈ litBytes s, b < 0x80 := by
    intro b hb
    simp [litBytes, List.mem_map] at hb
    obtain ⟨c, hc, rfl⟩ := hb
    exact h c hc
  rw [utf8Decode_ascii _ hall]
  simp only [litBytes, List.map_map]
  apply List.map_id''
  intro c
  simp [Function.comp, Char.ofNat_toNat]

private theorem beqNat {a b : Nat} (h : (a == b) = true) : a = b := beq_iff_eq.mp h

theorem trimByte_lt {b : Nat} (h : isTrimByte b = true) : b < 128 := by
  simp only [isTrimByte] at h
  rcases Bool.or_eq_true_iff.mp h with h | h
  · rcases Bool.or_eq_true_iff.mp h with h | h
    · rcases Bool.or_eq_true_iff.mp h with h | h
      · rcases Bool.or_eq_true_iff.mp h with h | h
        · rcases Bool.or_eq_true_iff.mp h with h | h
          · have := beqNat h; subst this; decide
          · have := beqNat h; subst this; decide
        · have := beqNat h; subst this; decide
      · have := beqNat h; subst this; decide
    · have := beqNat h; subst this; decide
  · have := beqNat h; subst this; decide

theorem isPhpTrim_trimByte {b : Nat} (h : isTrimByte b = true) :
    isPhpTrim (Char.ofNat b) = true := by
  simp only [isTrimByte] at h
  rcases Bool.or_eq_true_iff.mp h with h | h
  · rcases Bool.or_eq_true_iff.mp h with h | h
    · rcases Bool.or_eq_true_iff.mp h with h | h
      · rcases Bool.or_eq_true_iff.mp h with h | h
        · rcases Bool.or_eq_true_iff.mp h with h | h
          · have := beqNat h; subst this; decide
          · have := beqNat h; subst this; decide
        · have := beqNat h; subst this; decide
      · have := beqNat h; subst this; decide
    · have := beqNat h; subst this; decide
  · have := beqNat h; subst this; decide

theorem dropWhile_all {α} (p : α → Bool) :
    ∀ (l : List α), (∀ a ∈ l, p a = true) → l.dropWhile p = []
  | [], _ => rfl
  | a :: rest, h => by
      simp [List.dropWhile, h a (List.mem_cons_self ..),
        dropWhile_all p rest (fun x hx => h x (List.mem_cons_of_mem _ hx))]

theorem trimChars_all (cs : List Char) (h : ∀ c ∈ cs, isPhpTrim c = true) :
    trimChars cs = [] := by
  unfold trimChars
  simp [dropWhile_all isPhpTrim cs h]

theorem contains_false_of_ne {a : Nat} :
    ∀ (v : List Nat), (∀ b ∈ v, b ≠ a) → v.contains a = false
  | [], _ => by simp
  | c :: rest, h => by
      have hc : c ≠ a := h c (List.mem_cons_self ..)
      have hc' : (a == c) = false := by simpa [beq_eq_false_iff_ne] using hc.symm
      have hr := contains_false_of_ne rest (fun b hb => h b (List.mem_cons_of_mem _ hb))
      rw [List.contains_cons, hc', hr]
      exact orFF

theorem isPhpTrim_mapped (v : List Nat) (h : ∀ b ∈ v, isTrimByte b = true) :
    ∀ c ∈ v.map Char.ofNat, isPhpTrim c = true := by
  intro c hc
  obtain ⟨b, hb, rfl⟩ := List.mem_map.mp hc
  exact isPhpTrim_trimByte (h b hb)

theorem isolateId_empty : isolateId [] = some [] := rfl

/-- A placeholder-bearing id is retained verbatim, including a body that already starts with `u-`. The render clear arm then emits an empty value with the key kept. -/
theorem isolateId_placeholder (v : List Nat) (hne : v.isEmpty = false)
    (h : v.contains 255 = true) : isolateId v = some v := by
  unfold isolateId
  rw [hne, h, boolIf_false, boolIf_true]

/-- A non-empty id whose every byte is a PHP `trim` byte (space, tab, LF, CR, NUL, VT) isolates to the bare `u-` shell. Form feed is not in that set. -/
theorem isolateId_trim_shell (v : List Nat) (hne : v.isEmpty = false)
    (hall : ∀ b ∈ v, isTrimByte b = true) :
    isolateId v = some (litBytes "u-") := by
  have h255 : v.contains 255 = false :=
    contains_false_of_ne v (fun b hb => by
      have hlt := trimByte_lt (hall b hb)
      omega)
  have hascii : ∀ b ∈ v, b < 0x80 := fun b hb => trimByte_lt (hall b hb)
  have hdec : utf8Decode v = v.map Char.ofNat := utf8Decode_ascii v hascii
  have htrim : trimChars (utf8Decode v) = [] := by
    rw [hdec]
    exact trimChars_all _ (isPhpTrim_mapped v hall)
  unfold isolateId
  rw [hne, h255, boolIf_false, boolIf_false, hdec]
  have htrim' : trimChars (v.map Char.ofNat) = [] := by simpa [hdec] using htrim
  have hempty : (collapseWsU (trimChars (v.map Char.ofNat))).isEmpty = true := by
    rw [htrim']
    unfold collapseWsU
    rfl
  simp [collapseWsU, collapseWsU.go, htrim']

/-- Form feed is Unicode whitespace and a C0 control, but not a PHP trim byte, so a form-feed-only id is not the bare shell. -/
theorem isolateId_formfeed : isolateId [12] = some [117, 45, 32, 32] := by decide

/-- U+00A0 is Unicode whitespace that PHP `trim` keeps, so an NBSP-only id is not the bare shell either. -/
theorem isolateId_nbsp : isolateId [0xC2, 0xA0] = some [117, 45, 32, 32] := by decide

/-- `isolateId` does not run the attribute control filter. A SOH byte is prefixed, not dropped. -/
theorem isolateId_soh : isolateId [1] = some [117, 45, 1] := by decide

end LeanFtml
