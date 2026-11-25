/-
  LeanFtml.Proof.UnicodeCoreProof — G2 bridge proofs connecting the certified
  TCB-3 tables in `LeanFtml.UnicodeCore` to `TokenState.utf8Valid` and every
  `/u` consumer in the mirror (`LinkRules`, `ContainRules`, `TableRules`,
  `IncludeRule`).

  All proofs run strictly in Lean's kernel using standard core axioms only
  (`propext`, `Classical.choice`, `Quot.sound`); no `sorry`, no `native_decide`,
  no `bv_decide`. Notice that `ContainRules.isolateId` only guards on
  `v.contains 255` rather than full `utf8Valid v`: for non-`0xFF` invalid UTF-8
  bytes, PHP `preg_replace('/\s+/u', ...)` returns `NULL`, so `isolateId`
  coincidence carries the explicit `utf8Valid` precondition documented below.
-/
import LeanFtml.UnicodeCore
import LeanFtml.TokenState
import LeanFtml.LinkRules
import LeanFtml.ContainRules
import LeanFtml.TableRules
import LeanFtml.IncludeRule

namespace LeanFtml

/-! ## Helper lemmas -/

private theorem bool_eq_iff (a b : Bool) : a = b ↔ (a = true ↔ b = true) := by
  cases a <;> cases b <;> simp

private theorem contains_iff_mem (xs : List Nat) (x : Nat) :
    xs.contains x = true ↔ x ∈ xs :=
  List.contains_iff_mem

/-! ## 1. UTF-8 validity bridges (`TokenState.utf8Valid`) -/

/-- Any byte list containing the placeholder sentinel `0xFF` fails strict UTF-8
    validation (`utf8Valid.go`). -/
theorem utf8Valid_go_contains_ff :
    ∀ (fuel : Nat) (bs : List Nat), bs.contains 0xFF = true → utf8Valid.go bs fuel = false
  | 0, [], h => by simp [List.contains, List.elem] at h
  | 0, _ :: _, _ => by simp [utf8Valid.go]
  | fuel + 1, [], h => by simp [List.contains, List.elem] at h
  | fuel + 1, b :: rest, h => by
      have hbmem : 0xFF = b ∨ 0xFF ∈ rest :=
        List.mem_cons.mp ((contains_iff_mem (b :: rest) 0xFF).mp h)
      by_cases hbff : b = 0xFF
      · subst hbff
        unfold utf8Valid.go
        simp
      · have hrest_mem : 0xFF ∈ rest := by
          rcases hbmem with h0 | h1
          · exact False.elim (hbff h0.symm)
          · exact h1
        have hrest : rest.contains 0xFF = true := (contains_iff_mem rest 0xFF).mpr hrest_mem
        unfold utf8Valid.go
        by_cases h1 : b < 0x80
        · simp only [h1, ↓reduceIte]
          exact utf8Valid_go_contains_ff fuel rest hrest
        · by_cases h2 : 0xC2 ≤ b && b < 0xE0
          · simp only [h1, ↓reduceIte, h2]
            cases rest with
            | nil => simp
            | cons b2 rest' =>
                dsimp only
                by_cases hc2 : isContByte b2 = true
                · have hb2ne : b2 ≠ 0xFF := by
                    simp [isContByte] at hc2
                    omega
                  have htail : rest'.contains 0xFF = true := by
                    rw [contains_iff_mem]
                    rcases List.mem_cons.mp hrest_mem with rfl | ht
                    · exact False.elim (hb2ne rfl)
                    · exact ht
                  simp [hc2, utf8Valid_go_contains_ff fuel rest' htail]
                · simp [hc2]
          · by_cases h3 : b == 0xE0
            · simp only [h1, ↓reduceIte, h2, Bool.false_eq_true, h3]
              cases rest with
              | nil => simp
              | cons b2 tl =>
                  cases tl with
                  | nil => simp
                  | cons b3 rest' =>
                      dsimp only
                      by_cases hc : (0xA0 ≤ b2 && b2 < 0xC0 && isContByte b3) = true
                      · have hb2r : 0xA0 ≤ b2 ∧ b2 < 0xC0 := by
                          simp [Bool.and_eq_true] at hc
                          omega
                        have hb3r : 0x80 ≤ b3 ∧ b3 < 0xC0 := by
                          simp [Bool.and_eq_true, isContByte] at hc
                          exact hc.2
                        have htail : rest'.contains 0xFF = true := by
                          rw [contains_iff_mem]
                          rcases List.mem_cons.mp hrest_mem with rfl | ht
                          · omega
                          · rcases List.mem_cons.mp ht with rfl | ht2
                            · omega
                            · exact ht2
                        have hstep := utf8Valid_go_contains_ff fuel rest' htail
                        simp [hc, hstep]
                      · have hcf : (0xA0 ≤ b2 && b2 < 0xC0 && isContByte b3) = false := by
                          cases hv : (0xA0 ≤ b2 && b2 < 0xC0 && isContByte b3) <;> simp_all
                        simp [hcf]
            · by_cases h4 : 0xE1 ≤ b && b < 0xED
              · simp only [h1, ↓reduceIte, h2, Bool.false_eq_true, h3, h4]
                cases rest with
                | nil => simp
                | cons b2 tl =>
                    cases tl with
                    | nil => simp
                    | cons b3 rest' =>
                        dsimp only
                        by_cases hc : (isContByte b2 && isContByte b3) = true
                        · have hb2r : 0x80 ≤ b2 ∧ b2 < 0xC0 := by
                            simp [Bool.and_eq_true, isContByte] at hc
                            exact hc.1
                          have hb3r : 0x80 ≤ b3 ∧ b3 < 0xC0 := by
                            simp [Bool.and_eq_true, isContByte] at hc
                            exact hc.2
                          have htail : rest'.contains 0xFF = true := by
                            rw [contains_iff_mem]
                            rcases List.mem_cons.mp hrest_mem with rfl | ht
                            · omega
                            · rcases List.mem_cons.mp ht with rfl | ht2
                              · omega
                              · exact ht2
                          have hstep := utf8Valid_go_contains_ff fuel rest' htail
                          simp [hc, hstep]
                        · have hcf : (isContByte b2 && isContByte b3) = false := by
                            cases hv : (isContByte b2 && isContByte b3) <;> simp_all
                          simp [hcf]
              · by_cases h5 : b == 0xED
                · simp only [h1, ↓reduceIte, h2, Bool.false_eq_true, h3, h4, h5]
                  cases rest with
                  | nil => simp
                  | cons b2 tl =>
                      cases tl with
                      | nil => simp
                      | cons b3 rest' =>
                          dsimp only
                          by_cases hc : (0x80 ≤ b2 && b2 < 0xA0 && isContByte b3) = true
                          · have hb2r : 0x80 ≤ b2 ∧ b2 < 0xA0 := by
                              simp [Bool.and_eq_true] at hc
                              omega
                            have hb3r : 0x80 ≤ b3 ∧ b3 < 0xC0 := by
                              simp [Bool.and_eq_true, isContByte] at hc
                              exact hc.2
                            have htail : rest'.contains 0xFF = true := by
                              rw [contains_iff_mem]
                              rcases List.mem_cons.mp hrest_mem with rfl | ht
                              · omega
                              · rcases List.mem_cons.mp ht with rfl | ht2
                                · omega
                                · exact ht2
                            have hstep := utf8Valid_go_contains_ff fuel rest' htail
                            simp [hc, hstep]
                          · have hcf : (0x80 ≤ b2 && b2 < 0xA0 && isContByte b3) = false := by
                              cases hv : (0x80 ≤ b2 && b2 < 0xA0 && isContByte b3) <;> simp_all
                            simp [hcf]
                · by_cases h6 : 0xEE ≤ b && b < 0xF0
                  · simp only [h1, ↓reduceIte, h2, Bool.false_eq_true, h3, h4, h5, h6]
                    cases rest with
                    | nil => simp
                    | cons b2 tl =>
                        cases tl with
                        | nil => simp
                        | cons b3 rest' =>
                            dsimp only
                            by_cases hc : (isContByte b2 && isContByte b3) = true
                            · have hb2r : 0x80 ≤ b2 ∧ b2 < 0xC0 := by
                                simp [Bool.and_eq_true, isContByte] at hc
                                exact hc.1
                              have hb3r : 0x80 ≤ b3 ∧ b3 < 0xC0 := by
                                simp [Bool.and_eq_true, isContByte] at hc
                                exact hc.2
                              have htail : rest'.contains 0xFF = true := by
                                rw [contains_iff_mem]
                                rcases List.mem_cons.mp hrest_mem with rfl | ht
                                · omega
                                · rcases List.mem_cons.mp ht with rfl | ht2
                                  · omega
                                  · exact ht2
                              have hstep := utf8Valid_go_contains_ff fuel rest' htail
                              simp [hc, hstep]
                            · have hcf : (isContByte b2 && isContByte b3) = false := by
                                cases hv : (isContByte b2 && isContByte b3) <;> simp_all
                              simp [hcf]
                  · by_cases h7 : b == 0xF0
                    · simp only [h1, ↓reduceIte, h2, Bool.false_eq_true, h3, h4, h5, h6, h7]
                      cases rest with
                      | nil => simp
                      | cons b2 tl =>
                          cases tl with
                          | nil => simp
                          | cons b3 tl2 =>
                              cases tl2 with
                              | nil => simp
                              | cons b4 rest' =>
                                  dsimp only
                                  by_cases hc : (0x90 ≤ b2 && b2 < 0xC0 && isContByte b3 && isContByte b4) = true
                                  · have hb2r : 0x90 ≤ b2 ∧ b2 < 0xC0 := by
                                      simp [Bool.and_eq_true] at hc
                                      omega
                                    have hb3r : 0x80 ≤ b3 ∧ b3 < 0xC0 := by
                                      simp [Bool.and_eq_true, isContByte] at hc
                                      exact hc.1.2
                                    have hb4r : 0x80 ≤ b4 ∧ b4 < 0xC0 := by
                                      simp [Bool.and_eq_true, isContByte] at hc
                                      exact hc.2
                                    have htail : rest'.contains 0xFF = true := by
                                      rw [contains_iff_mem]
                                      rcases List.mem_cons.mp hrest_mem with rfl | ht
                                      · omega
                                      · rcases List.mem_cons.mp ht with rfl | ht2
                                        · omega
                                        · rcases List.mem_cons.mp ht2 with rfl | ht3
                                          · omega
                                          · exact ht3
                                    have hstep := utf8Valid_go_contains_ff fuel rest' htail
                                    simp [hc, hstep]
                                  · have hcf : (0x90 ≤ b2 && b2 < 0xC0 && isContByte b3 && isContByte b4) = false := by
                                      cases hv : (0x90 ≤ b2 && b2 < 0xC0 && isContByte b3 && isContByte b4) <;> simp_all
                                    simp [hcf]
                    · by_cases h8 : 0xF1 ≤ b && b < 0xF4
                      · simp only [h1, ↓reduceIte, h2, Bool.false_eq_true, h3, h4, h5, h6, h7, h8]
                        cases rest with
                        | nil => simp
                        | cons b2 tl =>
                            cases tl with
                            | nil => simp
                            | cons b3 tl2 =>
                                cases tl2 with
                                | nil => simp
                                | cons b4 rest' =>
                                    dsimp only
                                    by_cases hc : (isContByte b2 && isContByte b3 && isContByte b4) = true
                                    · have hb2r : 0x80 ≤ b2 ∧ b2 < 0xC0 := by
                                        simp [Bool.and_eq_true, isContByte] at hc
                                        exact hc.1.1
                                      have hb3r : 0x80 ≤ b3 ∧ b3 < 0xC0 := by
                                        simp [Bool.and_eq_true, isContByte] at hc
                                        exact hc.1.2
                                      have hb4r : 0x80 ≤ b4 ∧ b4 < 0xC0 := by
                                        simp [Bool.and_eq_true, isContByte] at hc
                                        exact hc.2
                                      have htail : rest'.contains 0xFF = true := by
                                        rw [contains_iff_mem]
                                        rcases List.mem_cons.mp hrest_mem with rfl | ht
                                        · omega
                                        · rcases List.mem_cons.mp ht with rfl | ht2
                                          · omega
                                          · rcases List.mem_cons.mp ht2 with rfl | ht3
                                            · omega
                                            · exact ht3
                                      have hstep := utf8Valid_go_contains_ff fuel rest' htail
                                      simp [hc, hstep]
                                    · have hcf : (isContByte b2 && isContByte b3 && isContByte b4) = false := by
                                        cases hv : (isContByte b2 && isContByte b3 && isContByte b4) <;> simp_all
                                      simp [hcf]
                      · by_cases h9 : b == 0xF4
                        · simp only [h1, ↓reduceIte, h2, Bool.false_eq_true, h3, h4, h5, h6, h7, h8, h9]
                          cases rest with
                          | nil => simp
                          | cons b2 tl =>
                              cases tl with
                              | nil => simp
                              | cons b3 tl2 =>
                                  cases tl2 with
                                  | nil => simp
                                  | cons b4 rest' =>
                                      dsimp only
                                      by_cases hc : (0x80 ≤ b2 && b2 < 0x90 && isContByte b3 && isContByte b4) = true
                                      · have hb2r : 0x80 ≤ b2 ∧ b2 < 0x90 := by
                                          simp [Bool.and_eq_true] at hc
                                          omega
                                        have hb3r : 0x80 ≤ b3 ∧ b3 < 0xC0 := by
                                          simp [Bool.and_eq_true, isContByte] at hc
                                          exact hc.1.2
                                        have hb4r : 0x80 ≤ b4 ∧ b4 < 0xC0 := by
                                          simp [Bool.and_eq_true, isContByte] at hc
                                          exact hc.2
                                        have htail : rest'.contains 0xFF = true := by
                                          rw [contains_iff_mem]
                                          rcases List.mem_cons.mp hrest_mem with rfl | ht
                                          · omega
                                          · rcases List.mem_cons.mp ht with rfl | ht2
                                            · omega
                                            · rcases List.mem_cons.mp ht2 with rfl | ht3
                                              · omega
                                              · exact ht3
                                        have hstep := utf8Valid_go_contains_ff fuel rest' htail
                                        simp [hc, hstep]
                                      · have hcf : (0x80 ≤ b2 && b2 < 0x90 && isContByte b3 && isContByte b4) = false := by
                                          cases hv : (0x80 ≤ b2 && b2 < 0x90 && isContByte b3 && isContByte b4) <;> simp_all
                                        simp [hcf]
                        · simp only [h1, ↓reduceIte, h2, Bool.false_eq_true, h3, h4, h5, h6, h7, h8, h9]

/-- Any byte list containing `0xFF` fails `utf8Valid`. -/
theorem utf8Valid_contains_ff (bs : List Nat) (h : bs.contains 0xFF = true) :
    utf8Valid bs = false :=
  utf8Valid_go_contains_ff bs.length bs h

private theorem utf8Valid_go_ascii_all :
    ∀ (bs : List Nat) (fuel : Nat), bs.length ≤ fuel → (∀ b ∈ bs, b < 0x80) →
      utf8Valid.go bs fuel = true
  | [], _, _, _ => by simp [utf8Valid.go]
  | b :: rest, 0, hlen, _ => by simp at hlen
  | b :: rest, fuel + 1, hlen, hascii => by
      have hb : b < 0x80 := hascii b (by simp)
      have hrest : ∀ x ∈ rest, x < 0x80 := fun x hx => hascii x (by simp [hx])
      have hlen' : rest.length ≤ fuel := by simpa using hlen
      unfold utf8Valid.go
      simp [hb, utf8Valid_go_ascii_all rest fuel hlen' hrest]

/-- Every ASCII byte list passes strict UTF-8 validation. -/
theorem utf8Valid_ascii_all (bs : List Nat) (h : ∀ b ∈ bs, b < 0x80) :
    utf8Valid bs = true :=
  utf8Valid_go_ascii_all bs bs.length (Nat.le_refl _) h

private theorem utf8Valid_go_utf8Bytes_cons (c : Char) (rest : List Nat) (fuel : Nat)
    (hrest : utf8Valid.go rest fuel = true) :
    utf8Valid.go (utf8Bytes c ++ rest) (fuel + 1) = true := by
  have hv := c.valid
  simp [UInt32.isValidChar, Nat.isValidChar] at hv
  by_cases h1 : c.toNat < 0x80
  · have hb : utf8Bytes c = [c.toNat] := by simp [utf8Bytes, h1]
    rw [hb, List.singleton_append]
    conv => lhs; unfold utf8Valid.go
    simp [h1, hrest]
  · by_cases h2 : c.toNat < 0x800
    · let b1 := 0xC0 + c.toNat / 0x40
      let b2 := 0x80 + c.toNat % 0x40
      have hb : utf8Bytes c = [b1, b2] := by simp [utf8Bytes, h1, h2, b1, b2]
      have hb1a : ¬ b1 < 0x80 := by omega
      have hb1b : 0xC2 ≤ b1 ∧ b1 < 0xE0 := by omega
      have hb2 : isContByte b2 = true := by simp [isContByte]; omega
      rw [hb]
      unfold utf8Valid.go
      simp [hb1a, hb1b, hb2, hrest]
    · by_cases h3 : c.toNat < 0x10000
      · let b1 := 0xE0 + c.toNat / 0x1000
        let b2 := 0x80 + (c.toNat / 0x40) % 0x40
        let b3 := 0x80 + c.toNat % 0x40
        have hb : utf8Bytes c = [b1, b2, b3] := by simp [utf8Bytes, h1, h2, h3, b1, b2, b3]
        have hb1a : ¬ b1 < 0x80 := by omega
        have hb1b : ¬ (0xC2 ≤ b1 ∧ b1 < 0xE0) := by omega
        have hb3 : isContByte b3 = true := by simp [isContByte]; omega
        have hb2 : isContByte b2 = true := by simp [isContByte]; omega
        rw [hb]
        unfold utf8Valid.go
        by_cases he0 : b1 = 0xE0
        · have hb2r : 0xA0 ≤ b2 ∧ b2 < 0xC0 := by omega
          simp [hb1a, hb1b, he0, hb2r, hb3, hrest]
        · by_cases hed : b1 = 0xED
          · have hb2r : 0x80 ≤ b2 ∧ b2 < 0xA0 := by omega
            simp [hb1a, hb1b, he0, hed, show ¬ (0xE1 ≤ b1 ∧ b1 < 0xED) by omega, hb2r, hb3, hrest]
          · by_cases he1 : 0xE1 ≤ b1 ∧ b1 < 0xED
            · simp [hb1a, hb1b, he0, he1, hb2, hb3, hrest]
            · have hee : 0xEE ≤ b1 ∧ b1 < 0xF0 := by omega
              simp [hb1a, hb1b, he0, he1, hed, hee, hb2, hb3, hrest]
      · let b1 := 0xF0 + c.toNat / 0x40000
        let b2 := 0x80 + (c.toNat / 0x1000) % 0x40
        let b3 := 0x80 + (c.toNat / 0x40) % 0x40
        let b4 := 0x80 + c.toNat % 0x40
        have hb : utf8Bytes c = [b1, b2, b3, b4] := by
          simp [utf8Bytes, h1, h2, h3, b1, b2, b3, b4]
        have hb1a : ¬ b1 < 0x80 := by omega
        have hb1b : ¬ (0xC2 ≤ b1 ∧ b1 < 0xE0) := by omega
        have hb1e1 : ¬ (0xE1 ≤ b1 ∧ b1 < 0xED) := by omega
        have hb1ee : ¬ (0xEE ≤ b1 ∧ b1 < 0xF0) := by omega
        have hb2 : isContByte b2 = true := by simp [isContByte]; omega
        have hb3 : isContByte b3 = true := by simp [isContByte]; omega
        have hb4 : isContByte b4 = true := by simp [isContByte]; omega
        rw [hb]
        unfold utf8Valid.go
        by_cases hf0 : b1 = 0xF0
        · have hb2r : 0x90 ≤ b2 ∧ b2 < 0xC0 := by omega
          simp [hb1a, hb1b, show b1 ≠ 0xE0 by omega, hb1e1, show b1 ≠ 0xED by omega, hb1ee,
            hf0, hb2r, hb3, hb4, hrest]
        · by_cases hf4 : b1 = 0xF4
          · have hb2r : 0x80 ≤ b2 ∧ b2 < 0x90 := by omega
            simp [hb1a, hb1b, show b1 ≠ 0xE0 by omega, hb1e1, show b1 ≠ 0xED by omega, hb1ee,
              hf0, show ¬ (0xF1 ≤ b1 ∧ b1 < 0xF4) by omega, hf4, hb2r, hb3, hb4, hrest]
          · have hf1 : 0xF1 ≤ b1 ∧ b1 < 0xF4 := by omega
            simp [hb1a, hb1b, show b1 ≠ 0xE0 by omega, hb1e1, show b1 ≠ 0xED by omega, hb1ee,
              hf0, hf1, hb2, hb3, hb4, hrest]

private theorem utf8Valid_go_fuel_mono :
    ∀ (fuel₁ fuel₂ : Nat) (bs : List Nat),
      fuel₁ ≤ fuel₂ → utf8Valid.go bs fuel₁ = true → utf8Valid.go bs fuel₂ = true
  | _, _, [], _, _ => by simp [utf8Valid.go]
  | 0, _, _ :: _, _, h => by simp [utf8Valid.go] at h
  | fuel₁ + 1, 0, _ :: _, hle, _ => by omega
  | fuel₁ + 1, fuel₂ + 1, b :: rest, hle, h => by
      have hle' : fuel₁ ≤ fuel₂ := by omega
      unfold utf8Valid.go at h ⊢
      by_cases h1 : b < 0x80
      · simp only [h1, ↓reduceIte] at h ⊢
        exact utf8Valid_go_fuel_mono fuel₁ fuel₂ rest hle' h
      · simp only [h1, ↓reduceIte] at h ⊢
        by_cases h2 : 0xC2 ≤ b && b < 0xE0
        · simp only [h2, ↓reduceIte] at h ⊢
          cases rest with
          | nil => simp at h
          | cons b2 rest' =>
              simp only [Bool.and_eq_true] at h ⊢
              exact ⟨h.1, utf8Valid_go_fuel_mono fuel₁ fuel₂ rest' hle' h.2⟩
        · simp only [h2, Bool.false_eq_true, ↓reduceIte] at h ⊢
          by_cases h3 : b == 0xE0
          · simp only [h3, ↓reduceIte] at h ⊢
            cases rest with
            | nil => simp at h
            | cons b2 tl =>
                cases tl with
                | nil => simp at h
                | cons b3 rest' =>
                    simp only [Bool.and_eq_true] at h ⊢
                    exact ⟨h.1, utf8Valid_go_fuel_mono fuel₁ fuel₂ rest' hle' h.2⟩
          · simp only [h3, Bool.false_eq_true, ↓reduceIte] at h ⊢
            by_cases h4 : 0xE1 ≤ b && b < 0xED
            · simp only [h4, ↓reduceIte] at h ⊢
              cases rest with
              | nil => simp at h
              | cons b2 tl =>
                  cases tl with
                  | nil => simp at h
                  | cons b3 rest' =>
                      simp only [Bool.and_eq_true] at h ⊢
                      exact ⟨h.1, utf8Valid_go_fuel_mono fuel₁ fuel₂ rest' hle' h.2⟩
            · simp only [h4, Bool.false_eq_true, ↓reduceIte] at h ⊢
              by_cases h5 : b == 0xED
              · simp only [h5, ↓reduceIte] at h ⊢
                cases rest with
                | nil => simp at h
                | cons b2 tl =>
                    cases tl with
                    | nil => simp at h
                    | cons b3 rest' =>
                        simp only [Bool.and_eq_true] at h ⊢
                        exact ⟨h.1, utf8Valid_go_fuel_mono fuel₁ fuel₂ rest' hle' h.2⟩
              · simp only [h5, Bool.false_eq_true, ↓reduceIte] at h ⊢
                by_cases h6 : 0xEE ≤ b && b < 0xF0
                · simp only [h6, ↓reduceIte] at h ⊢
                  cases rest with
                  | nil => simp at h
                  | cons b2 tl =>
                      cases tl with
                      | nil => simp at h
                      | cons b3 rest' =>
                          simp only [Bool.and_eq_true] at h ⊢
                          exact ⟨h.1, utf8Valid_go_fuel_mono fuel₁ fuel₂ rest' hle' h.2⟩
                · simp only [h6, Bool.false_eq_true, ↓reduceIte] at h ⊢
                  by_cases h7 : b == 0xF0
                  · simp only [h7, ↓reduceIte] at h ⊢
                    cases rest with
                    | nil => simp at h
                    | cons b2 tl =>
                        cases tl with
                        | nil => simp at h
                        | cons b3 tl2 =>
                            cases tl2 with
                            | nil => simp at h
                            | cons b4 rest' =>
                                simp only [Bool.and_eq_true] at h ⊢
                                exact ⟨h.1, utf8Valid_go_fuel_mono fuel₁ fuel₂ rest' hle' h.2⟩
                  · simp only [h7, Bool.false_eq_true, ↓reduceIte] at h ⊢
                    by_cases h8 : 0xF1 ≤ b && b < 0xF4
                    · simp only [h8, ↓reduceIte] at h ⊢
                      cases rest with
                      | nil => simp at h
                      | cons b2 tl =>
                          cases tl with
                          | nil => simp at h
                          | cons b3 tl2 =>
                              cases tl2 with
                              | nil => simp at h
                              | cons b4 rest' =>
                                  simp only [Bool.and_eq_true] at h ⊢
                                  exact ⟨h.1, utf8Valid_go_fuel_mono fuel₁ fuel₂ rest' hle' h.2⟩
                    · simp only [h8, Bool.false_eq_true, ↓reduceIte] at h ⊢
                      by_cases h9 : b == 0xF4
                      · simp only [h9, ↓reduceIte] at h ⊢
                        cases rest with
                        | nil => simp at h
                        | cons b2 tl =>
                            cases tl with
                            | nil => simp at h
                            | cons b3 tl2 =>
                                cases tl2 with
                                | nil => simp at h
                                | cons b4 rest' =>
                                    simp only [Bool.and_eq_true] at h ⊢
                                    exact ⟨h.1, utf8Valid_go_fuel_mono fuel₁ fuel₂ rest' hle' h.2⟩
                      · simp [h9] at h

private theorem utf8Bytes_len_pos (c : Char) : 1 ≤ (utf8Bytes c).length := by
  by_cases h1 : c.toNat < 0x80
  · simp [utf8Bytes, h1]
  · by_cases h2 : c.toNat < 0x800
    · simp [utf8Bytes, h1, h2]
    · by_cases h3 : c.toNat < 0x10000
      · simp [utf8Bytes, h1, h2, h3]
      · simp [utf8Bytes, h1, h2, h3]

private theorem length_le_flatMap_utf8Bytes :
    ∀ cs : List Char, cs.length ≤ (cs.flatMap utf8Bytes).length
  | [] => by simp
  | c :: cs => by
      have h1 := utf8Bytes_len_pos c
      have h2 := length_le_flatMap_utf8Bytes cs
      rw [List.flatMap_cons, List.length_append, List.length_cons]
      omega

private theorem utf8Valid_go_flatMap_utf8Bytes :
    ∀ cs : List Char, utf8Valid.go (cs.flatMap utf8Bytes) cs.length = true
  | [] => by simp [utf8Valid.go]
  | c :: cs => by
      simpa [List.flatMap_cons] using
        utf8Valid_go_utf8Bytes_cons c (cs.flatMap utf8Bytes) cs.length
          (utf8Valid_go_flatMap_utf8Bytes cs)

/-- Every UTF-8 encoding of a Lean character list (including astral 4-byte
    characters) passes strict UTF-8 validation. -/
theorem utf8Valid_flatMap_utf8Bytes (cs : List Char) :
    utf8Valid (cs.flatMap utf8Bytes) = true :=
  utf8Valid_go_fuel_mono cs.length (cs.flatMap utf8Bytes).length (cs.flatMap utf8Bytes)
    (length_le_flatMap_utf8Bytes cs) (utf8Valid_go_flatMap_utf8Bytes cs)

/-! ## 2. Freelink lead class and transliteration bridges (`LinkRules`) -/

/-- `LinkRules.isDefaultLeadCp` coincides with the F3-certified
    `UnicodeCore.isFreelinkLead` for every natural code point. -/
theorem linkRules_isDefaultLeadCp_eq_unicodeCore (cp : Nat) :
    isDefaultLeadCp cp = isFreelinkLead cp := by
  rw [bool_eq_iff]
  simp [isDefaultLeadCp, isUnicodeFormatCp, isUnicodeWhiteSpaceCp,
    isFreelinkLead, freelinkLeadRanges, inScalarRanges]
  omega

private theorem find_append_fst {α : Type} (p : α → Bool) (xs ys : List α) :
    (xs ++ ys).find? p = match xs.find? p with | some x => some x | none => ys.find? p := by
  induction xs with
  | nil => simp
  | cons x xs ih =>
      by_cases hx : p x = true
      · simp [hx]
      · have hx' : p x = false := by cases h : p x <;> simp_all
        simp [hx', ih]

set_option maxRecDepth 8192 in
private theorem linkRules_transTable_prefix_eq :
    (transTable.map (fun kv => (kv.1, kv.2.map Char.toNat))).take 466 =
      scalarTranslitTable.take 466 := by
  rfl

set_option maxRecDepth 8192 in
private theorem linkRules_transTable_drop_eq :
    (transTable.map (fun kv => (kv.1, kv.2.map Char.toNat))).drop 466 =
      [(8490, [107]), (8491, [97])] := by
  rfl

set_option maxRecDepth 8192 in
private theorem scalarTranslitTable_drop_eq :
    scalarTranslitTable.drop 466 = [(8491, [97]), (8490, [107])] := by
  rfl

private theorem find_map_transTable (n : Nat) :
    (transTable.find? (fun kv => kv.1 == n)).map (fun kv => kv.2.map Char.toNat) =
      ((transTable.map (fun kv => (kv.1, kv.2.map Char.toNat))).find? (fun p => p.1 == n)).map
        Prod.snd := by
  induction transTable with
  | nil => rfl
  | cons kv rest ih =>
      by_cases h : kv.1 == n
      · simp [h]
      · have hf : (kv.1 == n) = false := by cases hv : (kv.1 == n) <;> simp_all
        simpa [hf] using ih

private theorem find_tail_pair (n : Nat) :
    (([(8490, [107]), (8491, [97])] : List (Nat × List Nat)).find? (fun p => p.1 == n)).map Prod.snd =
      (([(8491, [97]), (8490, [107])] : List (Nat × List Nat)).find? (fun p => p.1 == n)).map Prod.snd := by
  by_cases h1 : (8490 == n) = true
  · have hn : n = 8490 := (beq_iff_eq.mp h1).symm
    subst hn
    decide
  · have hf1 : (8490 == n) = false := by cases hv : (8490 == n) <;> simp_all
    by_cases h2 : (8491 == n) = true
    · have hn : n = 8491 := (beq_iff_eq.mp h2).symm
      subst hn
      decide
    · have hf2 : (8491 == n) = false := by cases hv : (8491 == n) <;> simp_all
      simp [List.find?, hf1, hf2]

/-- `LinkRules.transTable` lookup produces the exact same replacement byte
    sequence as `UnicodeCore.scalarTranslitTable` for every code point `n`. -/
theorem linkRules_transTable_eq_scalarTranslit (n : Nat) :
    (transTable.find? (fun kv => kv.1 == n)).map (fun kv => kv.2.map Char.toNat) =
      (scalarTranslitTable.find? (fun p => p.1 == n)).map Prod.snd := by
  rw [find_map_transTable]
  have hL : transTable.map (fun kv => (kv.1, kv.2.map Char.toNat)) =
      scalarTranslitTable.take 466 ++ [(8490, [107]), (8491, [97])] := by
    rw [← List.take_append_drop 466 (transTable.map (fun kv => (kv.1, kv.2.map Char.toNat))),
      linkRules_transTable_prefix_eq, linkRules_transTable_drop_eq]
  have hR : scalarTranslitTable =
      scalarTranslitTable.take 466 ++ [(8491, [97]), (8490, [107])] := by
    conv => lhs; rw [← List.take_append_drop 466 scalarTranslitTable, scalarTranslitTable_drop_eq]
  rw [hL]
  conv => rhs; rw [hR]
  rw [find_append_fst, find_append_fst]
  cases (scalarTranslitTable.take 466).find? (fun p => p.1 == n) with
  | some p => rfl
  | none => exact find_tail_pair n

set_option maxRecDepth 8192 in
private theorem scalarTranslitTable_keys_ge_C0 :
    ∀ p ∈ scalarTranslitTable, 0xC0 ≤ p.1 := by
  decide

private theorem find?_pred_true {α : Type} {p : α → Bool} {xs : List α} {a : α}
    (h : xs.find? p = some a) : p a = true := by
  induction xs with
  | nil => simp at h
  | cons x xs ih =>
      simp only [List.find?] at h
      split at h
      · injection h with ha
        subst ha
        assumption
      · exact ih h

private theorem find?_mem {α : Type} {p : α → Bool} {xs : List α} {a : α}
    (h : xs.find? p = some a) : a ∈ xs := by
  induction xs with
  | nil => simp at h
  | cons x xs ih =>
      simp only [List.find?] at h
      split at h
      · injection h with ha
        subst ha
        exact List.mem_cons_self
      · exact List.mem_cons_of_mem x (ih h)

private theorem transTable_find_none_of_asciiPassthrough (n : Nat)
    (hp : translitAsciiPassthrough n = true) :
    scalarTranslitTable.find? (fun p => p.1 == n) = none := by
  cases hf : scalarTranslitTable.find? (fun p => p.1 == n) with
  | none => rfl
  | some p =>
      have hmem : p ∈ scalarTranslitTable := find?_mem hf
      have hge := scalarTranslitTable_keys_ge_C0 p hmem
      have hpred : (p.1 == n) = true := @find?_pred_true (Nat × List Nat) (fun q => q.1 == n) scalarTranslitTable p hf
      have heq : p.1 = n := beq_iff_eq.mp hpred
      simp [translitAsciiPassthrough] at hp
      omega

/-- On every Unicode character, the per-character arm of
    `LinkRules.transliterate` equals `UnicodeCore.translitScalar`. -/
theorem linkRules_transliterate_step_eq_translitScalar (c : Char) :
    (let b := c.toNat
     if (0x41 <= b && b <= 0x5A) || (0x61 <= b && b <= 0x7A) ||
        (0x30 <= b && b <= 0x39) ||
        b == 0x23 || b == 0x3A || b == 0x2F || b == 0x20 ||
        b == 0x5F || b == 0x2D then [b]
     else match transTable.find? (fun kv => kv.1 == c.toNat) with
       | some (_, v) => v.map Char.toNat
       | none => [32]) = translitScalar c.toNat := by
  dsimp only
  have hpass : ((0x41 <= c.toNat && c.toNat <= 0x5A) || (0x61 <= c.toNat && c.toNat <= 0x7A) ||
        (0x30 <= c.toNat && c.toNat <= 0x39) ||
        c.toNat == 0x23 || c.toNat == 0x3A || c.toNat == 0x2F || c.toNat == 0x20 ||
        c.toNat == 0x5F || c.toNat == 0x2D) = translitAsciiPassthrough c.toNat := by
    rw [bool_eq_iff]
    simp [translitAsciiPassthrough]
    omega
  rw [hpass]
  have htab := linkRules_transTable_eq_scalarTranslit c.toNat
  by_cases hp : translitAsciiPassthrough c.toNat = true
  · have hnone := transTable_find_none_of_asciiPassthrough c.toNat hp
    simp [translitScalar, hp, hnone]
  · have hpf : translitAsciiPassthrough c.toNat = false := by
      cases h : translitAsciiPassthrough c.toNat <;> simp_all
    simp only [hpf, Bool.false_eq_true, ↓reduceIte, translitScalar]
    cases hf : transTable.find? (fun kv => kv.1 == c.toNat) with
    | none =>
        simp [hf] at htab
        cases hf2 : scalarTranslitTable.find? (fun p => p.1 == c.toNat) with
        | none => rfl
        | some p => simp [hf2] at htab
    | some kv =>
        simp [hf] at htab
        cases hf2 : scalarTranslitTable.find? (fun p => p.1 == c.toNat) with
        | none => simp [hf2] at htab
        | some p =>
            simp [hf2] at htab
            exact htab

/-- Full `LinkRules.transliterate` equals `flatMap` of
    `UnicodeCore.translitScalar` over `utf8Decode bs`. -/
theorem linkRules_transliterate_eq_flatMap (bs : List Nat) :
    transliterate bs = (utf8Decode bs).flatMap (fun c => translitScalar c.toNat) := by
  unfold transliterate
  congr 1
  funext c
  exact linkRules_transliterate_step_eq_translitScalar c

/-! ## 3. Unicode whitespace bridges (`ContainRules` / `Div` & `TableRules` / `Tableadv`) -/

/-- `ContainRules.isWsU` equals `UnicodeCore.isSpaceU` for every `Char`. -/
theorem containRules_isWsU_eq_unicodeCore (c : Char) :
    isWsU c = isSpaceU c.toNat := by
  rw [bool_eq_iff]
  simp [isWsU, isSpaceU, scalarSpaceRanges, inScalarRanges]
  omega

private theorem collapseWsU_go_true_dropWhile :
    ∀ rest : List Char,
      collapseWsU.go rest true = collapseWsU (rest.dropWhile isWsU)
  | [] => rfl
  | c :: rest => by
      cases hw : isWsU c with
      | true =>
          simp [collapseWsU, collapseWsU.go, hw, collapseWsU_go_true_dropWhile rest]
      | false =>
          simp [collapseWsU, collapseWsU.go, hw]

private theorem dropWhile_isWsU_eq_dropWhile_isSpaceU (xs : List Char) :
    xs.dropWhile isWsU = xs.dropWhile (fun c => isSpaceU c.toNat) := by
  induction xs with
  | nil => rfl
  | cons c rest ih =>
      simp [List.dropWhile, containRules_isWsU_eq_unicodeCore, ih]

/-- `collapseWsU` implements the maximal-run `/\s+/u → ' '` recurrence, not
    merely the one-step state-machine unfolding: after a Unicode whitespace
    character, the whole following `isSpaceU` run is consumed before recursion
    resumes.  This is the strengthened form of the former hypothesis-gated
    one-step bridge. -/
theorem containRules_collapseWsU_step_isSpaceU (c : Char) (rest : List Char) :
    collapseWsU (c :: rest) =
      if isSpaceU c.toNat then
        ' ' :: collapseWsU (rest.dropWhile (fun d => isSpaceU d.toNat))
      else c :: collapseWsU rest := by
  cases hw : isWsU c with
  | true =>
      have hu : isSpaceU c.toNat = true := by
        rw [← containRules_isWsU_eq_unicodeCore c, hw]
      simp [collapseWsU, collapseWsU.go, hw, hu,
        collapseWsU_go_true_dropWhile, dropWhile_isWsU_eq_dropWhile_isSpaceU]
  | false =>
      have hu : isSpaceU c.toNat = false := by
        rw [← containRules_isWsU_eq_unicodeCore c, hw]
      simp [collapseWsU, collapseWsU.go, hw, hu]

/-- Compatibility form of the original one-step state-machine unfolding.  It
    is retained so the Stage 2(c) local fact remains available verbatim while
    the named bridge above carries the strengthened maximal-run content. -/
theorem containRules_collapseWsU_go_step_isSpaceU (c : Char) (rest : List Char) (inRun : Bool) :
    collapseWsU.go (c :: rest) inRun =
      if isSpaceU c.toNat then
        (if inRun then collapseWsU.go rest true else ' ' :: collapseWsU.go rest true)
      else c :: collapseWsU.go rest false := by
  simp [collapseWsU.go, containRules_isWsU_eq_unicodeCore]

/-- On placeholder-free non-empty input, `ContainRules.isolateId` detects
    leading whitespace via `UnicodeCore.isSpaceU` (subject to `utf8Valid v` for
    PHP `/u` parity on non-`0xFF` bytes). -/
theorem containRules_isolateId_leading_isSpaceU (v : List Nat)
    (hne : v.isEmpty = false) (hnoff : v.contains 255 = false) :
    isolateId v =
      let cs := utf8Decode v
      let leading := match cs with
        | c :: _ => isSpaceU c.toNat
        | [] => false
      let collapsed := collapseWsU (trimChars cs)
      if collapsed.isEmpty then some (litBytes "u-")
      else if (litBytes "u-").isPrefixOf v then
        some (collapsed.flatMap utf8Bytes)
      else
        some (litBytes "u-" ++ (if leading then [32] else []) ++
          collapsed.flatMap utf8Bytes) := by
  unfold isolateId
  simp only [hne, Bool.false_eq_true, ↓reduceIte, hnoff]
  cases utf8Decode v with
  | nil => rfl
  | cons c rest => simp [containRules_isWsU_eq_unicodeCore c]

/-- Any `0xFF` placeholder inside `TableRules.normalizeValueAdv` survives
    control-byte stripping and forces `utf8Valid` false, yielding `[]`. -/
theorem tableRules_normalizeValueAdv_contains_ff (v : List Nat)
    (hff : v.contains 0xFF = true) :
    normalizeValueAdv v = [] := by
  have hmem : 0xFF ∈ v := (contains_iff_mem v 0xFF).mp hff
  have hkeep : (!(0xFF < 0x20 || (0xFF : Nat) == 0x7F)) = true := by decide
  have hmem' : 0xFF ∈ v.filter (fun b => !(b < 0x20 || b == 0x7F)) :=
    List.mem_filter.mpr ⟨hmem, hkeep⟩
  have hff' : (v.filter (fun b => !(b < 0x20 || b == 0x7F))).contains 0xFF = true :=
    (contains_iff_mem _ 0xFF).mpr hmem'
  have hinv := utf8Valid_contains_ff _ hff'
  dsimp only [normalizeValueAdv]
  rw [hinv]
  rfl

private theorem char_eq_iff_toNat (c d : Char) : c = d ↔ c.toNat = d.toNat := by
  constructor
  · intro h
    rw [h]
  · intro h
    rw [← Char.ofNat_toNat c, ← Char.ofNat_toNat d, h]

private theorem isPhpTrim_eq_false_of_ge80 (c : Char) (hge : 0x80 ≤ c.toNat) :
    isPhpTrim c = false := by
  cases hp : isPhpTrim c with
  | false => rfl
  | true =>
      exfalso
      simp [isPhpTrim, Bool.or_eq_true, beq_iff_eq, char_eq_iff_toNat] at hp
      omega

private theorem trimByte_toNat_eq_isPhpTrim_fin :
    ∀ k : Fin 128, isTrimByte k.1 = isPhpTrim (Char.ofNat k.1) := by
  decide

private theorem isTrimByte_toNat_eq_isPhpTrim_of_lt80 (c : Char) (hlt : c.toNat < 0x80) :
    isTrimByte c.toNat = isPhpTrim c := by
  have hfin := trimByte_toNat_eq_isPhpTrim_fin ⟨c.toNat, hlt⟩
  have hcc : Char.ofNat c.toNat = c := Char.ofNat_toNat c
  rw [hcc] at hfin
  exact hfin

private theorem dropWhile_isTrimByte_utf8Bytes_append (c : Char) (tail : List Nat) :
    (utf8Bytes c ++ tail).dropWhile isTrimByte =
      if isPhpTrim c then tail.dropWhile isTrimByte else utf8Bytes c ++ tail := by
  by_cases htrim : isPhpTrim c = true
  · have hlt : c.toNat < 0x80 := by
      by_cases hlt0 : c.toNat < 0x80
      · exact hlt0
      · have hge : 0x80 ≤ c.toNat := by omega
        have hf := isPhpTrim_eq_false_of_ge80 c hge
        rw [hf] at htrim
        cases htrim
    have hbyte : isTrimByte c.toNat = true := by
      rw [isTrimByte_toNat_eq_isPhpTrim_of_lt80 c hlt]
      exact htrim
    have hb : utf8Bytes c = [c.toNat] := by simp [utf8Bytes, hlt]
    rw [hb]
    simp [List.dropWhile, hbyte, htrim]
  · have htrimfalse : isPhpTrim c = false := by
      cases hp : isPhpTrim c
      · rfl
      · exact False.elim (htrim hp)
    by_cases hlt : c.toNat < 0x80
    · have hbytefalse : isTrimByte c.toNat = false := by
        rw [isTrimByte_toNat_eq_isPhpTrim_of_lt80 c hlt]
        exact htrimfalse
      have hb : utf8Bytes c = [c.toNat] := by simp [utf8Bytes, hlt]
      rw [hb]
      simp [List.dropWhile, hbytefalse, htrimfalse]
    · have hn1 : ¬ c.toNat < 0x80 := hlt
      by_cases h2 : c.toNat < 0x800
      · have hb : utf8Bytes c = [0xC0 + c.toNat / 0x40, 0x80 + c.toNat % 0x40] := by
          simp [utf8Bytes, hn1, h2]
        have hfirstfalse : isTrimByte (0xC0 + c.toNat / 0x40) = false := by
          simp [isTrimByte]
          omega
        rw [hb]
        simp [List.dropWhile, hfirstfalse, htrimfalse]
      · by_cases h3 : c.toNat < 0x10000
        · have hb : utf8Bytes c =
              [0xE0 + c.toNat / 0x1000, 0x80 + (c.toNat / 0x40) % 0x40,
               0x80 + c.toNat % 0x40] := by
            simp [utf8Bytes, hn1, h2, h3]
          have hfirstfalse : isTrimByte (0xE0 + c.toNat / 0x1000) = false := by
            simp [isTrimByte]
            omega
          rw [hb]
          simp [List.dropWhile, hfirstfalse, htrimfalse]
        · have hb : utf8Bytes c =
              [0xF0 + c.toNat / 0x40000, 0x80 + (c.toNat / 0x1000) % 0x40,
               0x80 + (c.toNat / 0x40) % 0x40, 0x80 + c.toNat % 0x40] := by
            simp [utf8Bytes, hn1, h2, h3]
          have hfirstfalse : isTrimByte (0xF0 + c.toNat / 0x40000) = false := by
            simp [isTrimByte]
            omega
          rw [hb]
          simp [List.dropWhile, hfirstfalse, htrimfalse]

private theorem dropWhile_isTrimByte_reverseUtf8Bytes_append (c : Char) (tail : List Nat) :
    ((utf8Bytes c).reverse ++ tail).dropWhile isTrimByte =
      if isPhpTrim c then tail.dropWhile isTrimByte else (utf8Bytes c).reverse ++ tail := by
  by_cases htrim : isPhpTrim c = true
  · have hlt : c.toNat < 0x80 := by
      by_cases hlt0 : c.toNat < 0x80
      · exact hlt0
      · have hge : 0x80 ≤ c.toNat := by omega
        have hf := isPhpTrim_eq_false_of_ge80 c hge
        rw [hf] at htrim
        cases htrim
    have hbyte : isTrimByte c.toNat = true := by
      rw [isTrimByte_toNat_eq_isPhpTrim_of_lt80 c hlt]
      exact htrim
    have hb : utf8Bytes c = [c.toNat] := by simp [utf8Bytes, hlt]
    rw [hb]
    simp [List.dropWhile, hbyte, htrim]
  · have htrimfalse : isPhpTrim c = false := by
      cases hp : isPhpTrim c
      · rfl
      · exact False.elim (htrim hp)
    by_cases hlt : c.toNat < 0x80
    · have hbytefalse : isTrimByte c.toNat = false := by
        rw [isTrimByte_toNat_eq_isPhpTrim_of_lt80 c hlt]
        exact htrimfalse
      have hb : utf8Bytes c = [c.toNat] := by simp [utf8Bytes, hlt]
      rw [hb]
      simp [List.dropWhile, hbytefalse, htrimfalse]
    · have hn1 : ¬ c.toNat < 0x80 := hlt
      by_cases h2 : c.toNat < 0x800
      · have hb : utf8Bytes c = [0xC0 + c.toNat / 0x40, 0x80 + c.toNat % 0x40] := by
          simp [utf8Bytes, hn1, h2]
        have hfirstfalse : isTrimByte (0x80 + c.toNat % 0x40) = false := by
          simp [isTrimByte]
          omega
        rw [hb]
        simp [List.dropWhile, hfirstfalse, htrimfalse]
      · by_cases h3 : c.toNat < 0x10000
        · have hb : utf8Bytes c =
              [0xE0 + c.toNat / 0x1000, 0x80 + (c.toNat / 0x40) % 0x40,
               0x80 + c.toNat % 0x40] := by
            simp [utf8Bytes, hn1, h2, h3]
          have hfirstfalse : isTrimByte (0x80 + c.toNat % 0x40) = false := by
            simp [isTrimByte]
            omega
          rw [hb]
          simp [List.dropWhile, hfirstfalse, htrimfalse]
        · have hb : utf8Bytes c =
              [0xF0 + c.toNat / 0x40000, 0x80 + (c.toNat / 0x1000) % 0x40,
               0x80 + (c.toNat / 0x40) % 0x40, 0x80 + c.toNat % 0x40] := by
            simp [utf8Bytes, hn1, h2, h3]
          have hfirstfalse : isTrimByte (0x80 + c.toNat % 0x40) = false := by
            simp [isTrimByte]
            omega
          rw [hb]
          simp [List.dropWhile, hfirstfalse, htrimfalse]

private theorem list_snoc_induction {α : Type} {motive : List α → Prop}
    (hnil : motive [])
    (hsnoc : ∀ xs x, motive xs → motive (xs ++ [x])) :
    ∀ xs, motive xs := by
  intro xs
  have hrev : ∀ ys : List α, motive ys.reverse := by
    intro ys
    induction ys with
    | nil => simpa using hnil
    | cons x tail ih =>
        simpa [List.reverse_cons] using hsnoc tail.reverse x ih
  have hx := hrev xs.reverse
  simpa using hx

private theorem dropWhile_isTrimByte_flatMap_utf8Bytes (cs : List Char) :
    (cs.flatMap utf8Bytes).dropWhile isTrimByte =
      (cs.dropWhile isPhpTrim).flatMap utf8Bytes := by
  induction cs with
  | nil => rfl
  | cons c rest ih =>
      rw [List.flatMap_cons]
      rw [dropWhile_isTrimByte_utf8Bytes_append c (rest.flatMap utf8Bytes)]
      by_cases htrim : isPhpTrim c = true
      · simp [List.dropWhile, htrim, ih]
      · have htrimfalse : isPhpTrim c = false := by
          cases hp : isPhpTrim c
          · rfl
          · exact False.elim (htrim hp)
        simp [List.dropWhile, htrimfalse, List.flatMap_cons]

private theorem trimRight_utf8Bytes_snoc (cs : List Char) (c : Char) :
    (((cs.flatMap utf8Bytes) ++ utf8Bytes c).reverse.dropWhile isTrimByte).reverse =
      if isPhpTrim c then
        ((cs.flatMap utf8Bytes).reverse.dropWhile isTrimByte).reverse
      else
        (cs.flatMap utf8Bytes) ++ utf8Bytes c := by
  rw [List.reverse_append]
  rw [dropWhile_isTrimByte_reverseUtf8Bytes_append c ((cs.flatMap utf8Bytes).reverse)]
  by_cases htrim : isPhpTrim c = true
  · simp [htrim]
  · have htrimfalse : isPhpTrim c = false := by
      cases hp : isPhpTrim c
      · rfl
      · exact False.elim (htrim hp)
    simp [htrimfalse, List.reverse_append]

private theorem trimRight_isTrimByte_flatMap_utf8Bytes (cs : List Char) :
    ((cs.flatMap utf8Bytes).reverse.dropWhile isTrimByte).reverse =
      ((cs.reverse.dropWhile isPhpTrim).reverse).flatMap utf8Bytes := by
  induction cs using list_snoc_induction with
  | hnil => rfl
  | hsnoc xs x ih =>
      have hcat : (xs ++ [x]).flatMap utf8Bytes =
          xs.flatMap utf8Bytes ++ utf8Bytes x := by
        simp [List.flatMap_append]
      rw [hcat]
      rw [trimRight_utf8Bytes_snoc xs x]
      by_cases htrim : isPhpTrim x = true
      · simp [List.reverse_append, List.dropWhile, htrim, ih]
      · have htrimfalse : isPhpTrim x = false := by
          cases hp : isPhpTrim x
          · rfl
          · exact False.elim (htrim hp)
        simp [List.reverse_append, List.dropWhile, htrimfalse, List.flatMap_append]

/-- Byte-level PHP `trimBytes` is exactly character-level PHP `trimChars`
    transported through UTF-8 encoding.  The proof is inductive at both edges:
    ASCII trim bytes are precisely the one-byte PHP trim characters, while all
    bytes of a non-ASCII UTF-8 sequence lie outside the trim byte set. -/
theorem trimBytes_flatMap_utf8Bytes (cs : List Char) :
    trimBytes (cs.flatMap utf8Bytes) = (trimChars cs).flatMap utf8Bytes := by
  unfold trimBytes trimChars
  rw [dropWhile_isTrimByte_flatMap_utf8Bytes cs]
  exact trimRight_isTrimByte_flatMap_utf8Bytes (cs.dropWhile isPhpTrim)


/-- For stripped attribute bytes, `TableRules.normalizeValueAdv` is,
    on the UTF-8-valid branch, the UTF-8 encoding of the character-level PHP trim of the Unicode
    whitespace collapse.  This replaces the former thin `trimBytes` unfolding:
    the byte/character trim transport is proved inductively above, and the
    collapse predicate is the certified `isSpaceU` through the strengthened
    whitespace bridge.  The statement is unconditional: the invalid-UTF-8
    branch is the exact empty-output implementation branch. -/
theorem tableRules_normalizeValueAdv_valid (v : List Nat) :
    normalizeValueAdv v =
      if utf8Valid (v.filter (fun b => !(b < 0x20 || b == 0x7F))) = true then
        (trimChars (collapseWsU (utf8Decode (v.filter (fun b => !(b < 0x20 || b == 0x7F)))))).flatMap
          utf8Bytes
      else [] := by
  dsimp only [normalizeValueAdv]
  cases hv : utf8Valid (v.filter (fun b => !(b < 0x20 || b == 0x7F))) with
  | true => simp [hv, trimBytes_flatMap_utf8Bytes]
  | false => simp [hv]

/-- Compatibility form of the original Stage 2(c) reduction.  The strengthened
    theorem immediately implies this byte-level shape, so no prior content is
    lost. -/
theorem tableRules_normalizeValueAdv_valid_trimBytesForm (v : List Nat)
    (hvalid : utf8Valid (v.filter (fun b => !(b < 0x20 || b == 0x7F))) = true) :
    normalizeValueAdv v =
      trimBytes ((collapseWsU (utf8Decode (v.filter (fun b => !(b < 0x20 || b == 0x7F))))).flatMap
        utf8Bytes) := by
  dsimp only [normalizeValueAdv]
  rw [hvalid]
  rfl

/-! ## 4. Include reference normalization bridge (`IncludeRule`) -/

private def incKeepNatAscii (n : Nat) : Bool :=
  (97 ≤ n && n ≤ 122) || (48 ≤ n && n ≤ 57) ||
  n == 32 || n == 58 || n == 45 || n == 95

private theorem incKeepNatAscii_eq_unicodeCore_fin :
    ∀ k : Fin 128, ¬ (65 ≤ k.1 ∧ k.1 ≤ 90) → incKeepNatAscii k.1 = isIncNormKeepU k.1 := by
  decide

private theorem isIncNormKeep_lt80_fin :
    ∀ k : Fin 128, isIncNormKeep (Char.ofNat k.1) = incKeepNatAscii k.1 := by
  decide

private theorem asciiLowerC_not_upper_fin :
    ∀ k : Fin 128, ¬ (65 ≤ (asciiLowerC (Char.ofNat k.1)).toNat ∧
      (asciiLowerC (Char.ofNat k.1)).toNat ≤ 90) := by
  decide

private theorem char_le_iff_toNat (a b : Char) : a ≤ b ↔ a.toNat ≤ b.toNat := by
  rw [Char.le_def, UInt32.le_iff_toNat_le]
  rfl

private theorem isIncNormKeep_ge80 (c : Char) (hge : 0x80 ≤ c.toNat) :
    isIncNormKeep c = isIncNormKeepU c.toNat := by
  have ha : ('a' : Char).toNat = 97 := rfl
  have hz : ('z' : Char).toNat = 122 := rfl
  have h0 : ('0' : Char).toNat = 48 := rfl
  have h9 : ('9' : Char).toNat = 57 := rfl
  have hna : ¬ ('a' ≤ c ∧ c ≤ 'z') := by
    rw [char_le_iff_toNat, char_le_iff_toNat, ha, hz]; omega
  have hn0 : ¬ ('0' ≤ c ∧ c ≤ '9') := by
    rw [char_le_iff_toNat, char_le_iff_toNat, h0, h9]; omega
  have hnaf : ('a' ≤ c && c ≤ 'z') = false := by
    cases h : ('a' ≤ c && c ≤ 'z')
    · rfl
    · exact False.elim (hna (by simp [Bool.and_eq_true] at h; exact h))
  have hn0f : ('0' ≤ c && c ≤ '9') = false := by
    cases h : ('0' ≤ c && c ≤ '9')
    · rfl
    · exact False.elim (hn0 (by simp [Bool.and_eq_true] at h; exact h))
  have hsp : (c == ' ') = false := by
    cases h : (c == ' ')
    · rfl
    · have : c.toNat = (' ' : Char).toNat := congrArg Char.toNat (beq_iff_eq.mp h)
      have : (' ' : Char).toNat = 32 := rfl
      omega
  have hco : (c == ':') = false := by
    cases h : (c == ':')
    · rfl
    · have : c.toNat = (':' : Char).toNat := congrArg Char.toNat (beq_iff_eq.mp h)
      have : (':' : Char).toNat = 58 := rfl
      omega
  have hda : (c == '-') = false := by
    cases h : (c == '-')
    · rfl
    · have : c.toNat = ('-' : Char).toNat := congrArg Char.toNat (beq_iff_eq.mp h)
      have : ('-' : Char).toNat = 45 := rfl
      omega
  have hun : (c == '_') = false := by
    cases h : (c == '_')
    · rfl
    · have : c.toNat = ('_' : Char).toNat := congrArg Char.toNat (beq_iff_eq.mp h)
      have : ('_' : Char).toNat = 95 := rfl
      omega
  have hg : decide (c.toNat ≥ 0x80) = true := decide_eq_true hge
  simp [isIncNormKeep, hnaf, hn0f, hsp, hco, hda, hun, hg]

/-- `IncludeRule.isIncNormKeep` equals `UnicodeCore.isIncNormKeepU` for every
    non-uppercase `Char` (uppercase ASCII `'A'..'Z'` is lowercased by
    `asciiLowerC` before `isIncNormKeep` runs in `refNormalize`). -/
theorem includeRule_isIncNormKeep_eq_unicodeCore (c : Char)
    (hnotupper : ¬ (65 ≤ c.toNat ∧ c.toNat ≤ 90)) :
    isIncNormKeep c = isIncNormKeepU c.toNat := by
  by_cases hc : c.toNat < 0x80
  · have hcc : Char.ofNat c.toNat = c := Char.ofNat_toNat c
    have h1 := isIncNormKeep_lt80_fin ⟨c.toNat, hc⟩
    have h2 := incKeepNatAscii_eq_unicodeCore_fin ⟨c.toNat, hc⟩ hnotupper
    rw [hcc] at h1
    exact h1.trans h2
  · exact isIncNormKeep_ge80 c (by omega)

/-- `IncludeRule.isIncNormKeep (asciiLowerC c)` equals
    `UnicodeCore.isIncNormKeepU (asciiLowerC c).toNat` for every `Char`. -/
theorem includeRule_isIncNormKeep_asciiLower (c : Char) :
    isIncNormKeep (asciiLowerC c) = isIncNormKeepU (asciiLowerC c).toNat := by
  by_cases hc : c.toNat < 0x80
  · have hnotup := asciiLowerC_not_upper_fin ⟨c.toNat, hc⟩
    have hcc : Char.ofNat c.toNat = c := Char.ofNat_toNat c
    rw [hcc] at hnotup
    exact includeRule_isIncNormKeep_eq_unicodeCore (asciiLowerC c) hnotup
  · have hA : ('A' : Char).toNat = 65 := rfl
    have hZ : ('Z' : Char).toNat = 90 := rfl
    have hnot : ¬ ('A' ≤ c ∧ c ≤ 'Z') := by
      rw [char_le_iff_toNat, char_le_iff_toNat, hA, hZ]; omega
    have hnotf : ('A' ≤ c && c ≤ 'Z') = false := by
      cases h : ('A' ≤ c && c ≤ 'Z')
      · rfl
      · exact False.elim (hnot (by simp [Bool.and_eq_true] at h; exact h))
    have hlow : asciiLowerC c = c := by simp [asciiLowerC, hnotf]
    rw [hlow]
    exact isIncNormKeep_ge80 c (by omega)

/-- The normalization map step (`s2 → s3`) inside `IncludeRule.refNormalize`
    expressed directly against `UnicodeCore.isIncNormKeepU`. -/
theorem includeRule_refNormalize_step (s1 : List Char) :
    (s1.map asciiLowerC).map (fun c => if isIncNormKeep c then c else '-') =
      s1.map (fun c =>
        let d := asciiLowerC c
        if isIncNormKeepU d.toNat then d else '-') := by
  induction s1 with
  | nil => rfl
  | cons c cs ih =>
      simp only [List.map_cons]
      rw [includeRule_isIncNormKeep_asciiLower c, ih]

#print axioms utf8Valid_contains_ff
#print axioms utf8Valid_ascii_all
#print axioms utf8Valid_flatMap_utf8Bytes
#print axioms linkRules_isDefaultLeadCp_eq_unicodeCore
#print axioms linkRules_transTable_eq_scalarTranslit
#print axioms linkRules_transliterate_step_eq_translitScalar
#print axioms linkRules_transliterate_eq_flatMap
#print axioms containRules_isWsU_eq_unicodeCore
#print axioms containRules_collapseWsU_step_isSpaceU
#print axioms containRules_collapseWsU_go_step_isSpaceU
#print axioms containRules_isolateId_leading_isSpaceU
#print axioms tableRules_normalizeValueAdv_contains_ff
#print axioms trimBytes_flatMap_utf8Bytes
#print axioms tableRules_normalizeValueAdv_valid
#print axioms tableRules_normalizeValueAdv_valid_trimBytesForm
#print axioms includeRule_isIncNormKeep_eq_unicodeCore
#print axioms includeRule_isIncNormKeep_asciiLower
#print axioms includeRule_refNormalize_step

end LeanFtml
