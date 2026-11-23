/-
  LeanFtml.Proof.F1Bridges — discharge of the two F1 headline bridge obligations.

  TokenStateProof.lean (proof-base-v1) recorded the two Tier-1 bridge theorems parseBytes_byteForm_id and byteForm_parseBytes_id as open obligations, blocked on the list-level UTF-8 round trips utf8Decode (cs.flatMap utf8Bytes) = cs and, for valid byte strings, (utf8Decode bs).flatMap utf8Bytes = bs. This unit proves both round trips in full, for arbitrary characters including the astral four-byte forms that ByteCore's singleton lemma left open, and discharges the two obligations under their exact recorded names and statements. The UTF-8 round trips are proved by induction on the fuel parameter, with utf8Decode.go and utf8Valid.go marching in lockstep; no kernel reduction of utf8Valid on concrete inputs is used anywhere, so the measured kernel-reduction trap does not arise. The parse side is a single induction over the segment list through parseBytes.go, with the accumulator invariant that the reversed accumulator is the UTF-8 encoding of a character list. All axioms are within [propext, Classical.choice, Quot.sound]; no sorryAx, native_decide, ofReduceBool, or bv_decide.
-/
import LeanFtml.TokenState
import LeanFtml.FormRawRules
import LeanFtml.ByteCore
import LeanFtml.TokenStateProof
import LeanFtml.RawBridgeProof

namespace LeanFtml

/-! ## Auxiliary character facts -/

/-- The UTF-8 encoding of a character is never empty. -/
theorem utf8Bytes_ne_nil (c : Char) : utf8Bytes c ≠ [] := by
  by_cases h1 : c.toNat < 0x80
  · simp [utf8Bytes, h1]
  · by_cases h2 : c.toNat < 0x800
    · simp [utf8Bytes, h1, h2]
    · by_cases h3 : c.toNat < 0x10000
      · simp [utf8Bytes, h1, h2, h3]
      · simp [utf8Bytes, h1, h2, h3]

/-- A codepoint that is a valid character value decodes back to itself. -/
theorem toNat_ofNat_of_isValidChar (m : Nat) (h : Nat.isValidChar m) :
    (Char.ofNat m).toNat = m := by
  simp only [Char.ofNat, h, dif_pos]
  rfl

/-- A list of length zero is empty. -/
theorem eq_nil_of_length_eq_zero {α : Type} {l : List α} (h : l.length = 0) :
    l = [] := by
  cases l with
  | nil => rfl
  | cons x xs => simp at h

/-- Every character's codepoint is a valid character value in the
    `Nat.isValidChar` form. -/
theorem isValidChar_toNat (c : Char) : Nat.isValidChar c.toNat := by
  have hv := c.valid
  simp [UInt32.isValidChar, Nat.isValidChar] at hv
  exact hv

/-! ## The list-level UTF-8 round trip: decode after encode -/

/-- Fuel-indexed form of the first missing list-level fact: decoding the
    UTF-8 encoding of a character list returns the list. The induction is
    on the fuel, with the byte string and the character list generalised;
    each character case consumes its one to four bytes and appeals to the
    induction hypothesis on the tail. -/
theorem utf8Decode_go_flatMap_utf8Bytes : ∀ (f : Nat) (cs : List Char) (bs : List Nat),
    bs = cs.flatMap utf8Bytes → bs.length ≤ f → utf8Decode.go bs f = cs := by
  intro f
  induction f with
  | zero =>
      intro cs bs hbs hf
      have hlen : bs.length = 0 := by omega
      cases bs with
      | cons b rest => simp at hlen
      | nil =>
          cases cs with
          | nil => rfl
          | cons c cs' =>
              have hpos : 0 < (utf8Bytes c).length :=
                Nat.pos_of_ne_zero (fun h => utf8Bytes_ne_nil c (eq_nil_of_length_eq_zero h))
              have h2 : (utf8Bytes c).length + (cs'.flatMap utf8Bytes).length = 0 := by
                have h3 : ((c :: cs').flatMap utf8Bytes).length = 0 := by
                  rw [← hbs]; rfl
                have hfm : (c :: cs').flatMap utf8Bytes =
                    utf8Bytes c ++ cs'.flatMap utf8Bytes := rfl
                rw [hfm, List.length_append] at h3
                exact h3
              omega
  | succ f ih =>
      intro cs bs hbs hf
      cases cs with
      | nil =>
          have h1 : bs = [] := by
            simpa using hbs
          rw [h1]
          rfl
      | cons c cs' =>
          have hv := c.valid
          simp [UInt32.isValidChar, Nat.isValidChar] at hv
          have hfm : (c :: cs').flatMap utf8Bytes =
              utf8Bytes c ++ cs'.flatMap utf8Bytes := rfl
          by_cases h1 : c.toNat < 0x80
          · have hb : utf8Bytes c = [c.toNat] := by simp [utf8Bytes, h1]
            have hf' : (cs'.flatMap utf8Bytes).length ≤ f := by
              have hbl : bs.length = ((c :: cs').flatMap utf8Bytes).length := by
                rw [hbs]
              have hlen : ((c :: cs').flatMap utf8Bytes).length
                  = (utf8Bytes c).length + (cs'.flatMap utf8Bytes).length := by
                rw [hfm, List.length_append]
              have hpos : 0 < (utf8Bytes c).length :=
                Nat.pos_of_ne_zero (fun hh => utf8Bytes_ne_nil c (eq_nil_of_length_eq_zero hh))
              omega
            have hstep : utf8Decode.go (c.toNat :: cs'.flatMap utf8Bytes) (f + 1)
                = Char.ofNat c.toNat :: utf8Decode.go (cs'.flatMap utf8Bytes) f := by
              simp [utf8Decode.go, h1]
            rw [hbs, hfm, hb]
            show utf8Decode.go (c.toNat :: cs'.flatMap utf8Bytes) (f + 1) = c :: cs'
            rw [hstep, Char.ofNat_toNat, ih cs' _ rfl hf']
          · by_cases h2 : c.toNat < 0x800
            · have hb : utf8Bytes c = [0xC0 + c.toNat / 0x40, 0x80 + c.toNat % 0x40] := by
                simp [utf8Bytes, h1, h2]
              have hf' : (cs'.flatMap utf8Bytes).length ≤ f := by
                have hbl : bs.length = ((c :: cs').flatMap utf8Bytes).length := by
                  rw [hbs]
                have hlen : ((c :: cs').flatMap utf8Bytes).length
                    = (utf8Bytes c).length + (cs'.flatMap utf8Bytes).length := by
                  rw [hfm, List.length_append]
                have hpos : 0 < (utf8Bytes c).length :=
                  Nat.pos_of_ne_zero (fun hh => utf8Bytes_ne_nil c (eq_nil_of_length_eq_zero hh))
                omega
              have hstep : utf8Decode.go
                    ((0xC0 + c.toNat / 0x40) :: (0x80 + c.toNat % 0x40) ::
                      cs'.flatMap utf8Bytes) (f + 1)
                  = Char.ofNat ((0xC0 + c.toNat / 0x40) % 32 * 64 +
                      (0x80 + c.toNat % 0x40) % 64)
                    :: utf8Decode.go (cs'.flatMap utf8Bytes) f := by
                have e1 : ¬ (0xC0 + c.toNat / 0x40 < 0x80) := by omega
                have e2 : 0xC2 ≤ 0xC0 + c.toNat / 0x40 := by omega
                have e3 : 0xC0 + c.toNat / 0x40 < 0xE0 := by omega
                have e4 : isContByte (0x80 + c.toNat % 0x40) = true := by
                  simp [isContByte]
                  omega
                simp [utf8Decode.go, e1, e2, e3, e4]
              have hval : (0xC0 + c.toNat / 0x40) % 32 * 64 +
                  (0x80 + c.toNat % 0x40) % 64 = c.toNat := by omega
              rw [hbs, hfm, hb]
              show utf8Decode.go
                  ((0xC0 + c.toNat / 0x40) :: (0x80 + c.toNat % 0x40) ::
                    cs'.flatMap utf8Bytes) (f + 1) = c :: cs'
              rw [hstep, hval, Char.ofNat_toNat, ih cs' _ rfl hf']
            · by_cases h3 : c.toNat < 0x10000
              · have hb : utf8Bytes c =
                    [0xE0 + c.toNat / 0x1000, 0x80 + (c.toNat / 0x40) % 0x40,
                     0x80 + c.toNat % 0x40] := by
                  simp [utf8Bytes, h1, h2, h3]
                have hf' : (cs'.flatMap utf8Bytes).length ≤ f := by
                  have hbl : bs.length = ((c :: cs').flatMap utf8Bytes).length := by
                    rw [hbs]
                  have hlen : ((c :: cs').flatMap utf8Bytes).length
                      = (utf8Bytes c).length + (cs'.flatMap utf8Bytes).length := by
                    rw [hfm, List.length_append]
                  have hpos : 0 < (utf8Bytes c).length :=
                    Nat.pos_of_ne_zero (fun hh => utf8Bytes_ne_nil c (eq_nil_of_length_eq_zero hh))
                  omega
                have hstep : utf8Decode.go
                      ((0xE0 + c.toNat / 0x1000) :: (0x80 + (c.toNat / 0x40) % 0x40) ::
                        (0x80 + c.toNat % 0x40) :: cs'.flatMap utf8Bytes) (f + 1)
                    = Char.ofNat ((0xE0 + c.toNat / 0x1000) % 16 * 4096 +
                        (0x80 + (c.toNat / 0x40) % 0x40) % 64 * 64 +
                        (0x80 + c.toNat % 0x40) % 64)
                      :: utf8Decode.go (cs'.flatMap utf8Bytes) f := by
                  have e1 : ¬ (0xE0 + c.toNat / 0x1000 < 0x80) := by omega
                  have e2 : ¬ (0xE0 + c.toNat / 0x1000 < 0xE0) := by omega
                  have e3 : 0xE0 ≤ 0xE0 + c.toNat / 0x1000 := by omega
                  have e4 : 0xE0 + c.toNat / 0x1000 < 0xF0 := by omega
                  have e5 : isContByte (0x80 + (c.toNat / 0x40) % 0x40) = true := by
                    simp [isContByte]
                    omega
                  have e6 : isContByte (0x80 + c.toNat % 0x40) = true := by
                    simp [isContByte]
                    omega
                  simp [utf8Decode.go, e1, e2, e3, e4, e5, e6]
                have hm1 : (0xE0 + c.toNat / 0x1000) % 16 = c.toNat / 0x1000 := by omega
                have hm2 : (0x80 + (c.toNat / 0x40) % 0x40) % 64 = (c.toNat / 0x40) % 0x40 := by
                  omega
                have hm3 : (0x80 + c.toNat % 0x40) % 64 = c.toNat % 0x40 := by omega
                have hval : (0xE0 + c.toNat / 0x1000) % 16 * 4096 +
                    (0x80 + (c.toNat / 0x40) % 0x40) % 64 * 64 +
                    (0x80 + c.toNat % 0x40) % 64 = c.toNat := by
                  rw [hm1, hm2, hm3]
                  omega
                rw [hbs, hfm, hb]
                show utf8Decode.go
                    ((0xE0 + c.toNat / 0x1000) :: (0x80 + (c.toNat / 0x40) % 0x40) ::
                      (0x80 + c.toNat % 0x40) :: cs'.flatMap utf8Bytes) (f + 1) = c :: cs'
                rw [hstep, hval, Char.ofNat_toNat, ih cs' _ rfl hf']
              · have hb : utf8Bytes c =
                    [0xF0 + c.toNat / 0x40000, 0x80 + (c.toNat / 0x1000) % 0x40,
                     0x80 + (c.toNat / 0x40) % 0x40, 0x80 + c.toNat % 0x40] := by
                  simp [utf8Bytes, h1, h2, h3]
                have hf' : (cs'.flatMap utf8Bytes).length ≤ f := by
                  have hbl : bs.length = ((c :: cs').flatMap utf8Bytes).length := by
                    rw [hbs]
                  have hlen : ((c :: cs').flatMap utf8Bytes).length
                      = (utf8Bytes c).length + (cs'.flatMap utf8Bytes).length := by
                    rw [hfm, List.length_append]
                  have hpos : 0 < (utf8Bytes c).length :=
                    Nat.pos_of_ne_zero (fun hh => utf8Bytes_ne_nil c (eq_nil_of_length_eq_zero hh))
                  omega
                have hstep : utf8Decode.go
                      ((0xF0 + c.toNat / 0x40000) :: (0x80 + (c.toNat / 0x1000) % 0x40) ::
                        (0x80 + (c.toNat / 0x40) % 0x40) :: (0x80 + c.toNat % 0x40) ::
                        cs'.flatMap utf8Bytes) (f + 1)
                    = Char.ofNat ((0xF0 + c.toNat / 0x40000) % 8 * 262144 +
                        (0x80 + (c.toNat / 0x1000) % 0x40) % 64 * 4096 +
                        (0x80 + (c.toNat / 0x40) % 0x40) % 64 * 64 +
                        (0x80 + c.toNat % 0x40) % 64)
                      :: utf8Decode.go (cs'.flatMap utf8Bytes) f := by
                  have e1 : ¬ (0xF0 + c.toNat / 0x40000 < 0x80) := by omega
                  have e2 : ¬ (0xF0 + c.toNat / 0x40000 < 0xE0) := by omega
                  have e3 : ¬ (0xF0 + c.toNat / 0x40000 < 0xF0) := by omega
                  have e4 : 0xF0 ≤ 0xF0 + c.toNat / 0x40000 := by omega
                  have e5 : 0xF0 + c.toNat / 0x40000 < 0xF5 := by omega
                  have e6 : isContByte (0x80 + (c.toNat / 0x1000) % 0x40) = true := by
                    simp [isContByte]
                    omega
                  have e7 : isContByte (0x80 + (c.toNat / 0x40) % 0x40) = true := by
                    simp [isContByte]
                    omega
                  have e8 : isContByte (0x80 + c.toNat % 0x40) = true := by
                    simp [isContByte]
                    omega
                  simp [utf8Decode.go, e1, e2, e3, e4, e5, e6, e7, e8]
                have hm1 : (0xF0 + c.toNat / 0x40000) % 8 = c.toNat / 0x40000 := by omega
                have hm2 : (0x80 + (c.toNat / 0x1000) % 0x40) % 64 =
                    (c.toNat / 0x1000) % 0x40 := by omega
                have hm3 : (0x80 + (c.toNat / 0x40) % 0x40) % 64 =
                    (c.toNat / 0x40) % 0x40 := by omega
                have hm4 : (0x80 + c.toNat % 0x40) % 64 = c.toNat % 0x40 := by omega
                have hval : (0xF0 + c.toNat / 0x40000) % 8 * 262144 +
                    (0x80 + (c.toNat / 0x1000) % 0x40) % 64 * 4096 +
                    (0x80 + (c.toNat / 0x40) % 0x40) % 64 * 64 +
                    (0x80 + c.toNat % 0x40) % 64 = c.toNat := by
                  rw [hm1, hm2, hm3, hm4]
                  omega
                rw [hbs, hfm, hb]
                show utf8Decode.go
                    ((0xF0 + c.toNat / 0x40000) :: (0x80 + (c.toNat / 0x1000) % 0x40) ::
                      (0x80 + (c.toNat / 0x40) % 0x40) :: (0x80 + c.toNat % 0x40) ::
                      cs'.flatMap utf8Bytes) (f + 1) = c :: cs'
                rw [hstep, hval, Char.ofNat_toNat, ih cs' _ rfl hf']

/-- The first missing list-level fact, discharged in full: decoding the
    UTF-8 encoding of any character list returns the list. -/
theorem utf8Decode_flatMap_utf8Bytes (cs : List Char) :
    utf8Decode (cs.flatMap utf8Bytes) = cs :=
  utf8Decode_go_flatMap_utf8Bytes _ cs _ rfl (Nat.le_refl _)

/-- The singleton round trip for every character, including the astral
    four-byte forms left open by `ByteCore.utf8Decode_utf8Bytes`. -/
theorem utf8Decode_utf8Bytes_all (c : Char) : utf8Decode (utf8Bytes c) = [c] := by
  have h := utf8Decode_flatMap_utf8Bytes [c]
  simpa using h

/-! ## One-step equations for `utf8Valid.go` -/

theorem utf8Valid_go_step_ascii (b : Nat) (rest : List Nat) (f : Nat) (h : b < 0x80) :
    utf8Valid.go (b :: rest) (f + 1) = utf8Valid.go rest f := by
  conv => lhs; unfold utf8Valid.go
  simp [h]

theorem utf8Valid_go_step_two (b b2 : Nat) (rest : List Nat) (f : Nat)
    (h1 : ¬ b < 0x80) (h2 : 0xC2 ≤ b) (h3 : b < 0xE0) :
    utf8Valid.go (b :: b2 :: rest) (f + 1)
      = (isContByte b2 && utf8Valid.go rest f) := by
  conv => lhs; unfold utf8Valid.go
  simp [h1, h2, h3]

theorem utf8Valid_go_step_e0 (b2 b3 : Nat) (rest : List Nat) (f : Nat) :
    utf8Valid.go (0xE0 :: b2 :: b3 :: rest) (f + 1)
      = (0xA0 ≤ b2 && b2 < 0xC0 && isContByte b3 && utf8Valid.go rest f) := by
  conv => lhs; unfold utf8Valid.go
  simp

theorem utf8Valid_go_step_e1 (b b2 b3 : Nat) (rest : List Nat) (f : Nat)
    (h1 : ¬ b < 0x80) (h2 : ¬ b < 0xE0) (h3 : b ≠ 0xE0) (h4 : 0xE1 ≤ b) (h5 : b < 0xED) :
    utf8Valid.go (b :: b2 :: b3 :: rest) (f + 1)
      = (isContByte b2 && isContByte b3 && utf8Valid.go rest f) := by
  conv => lhs; unfold utf8Valid.go
  simp [h1, h2, h3, h4, h5]

theorem utf8Valid_go_step_ed (b2 b3 : Nat) (rest : List Nat) (f : Nat) :
    utf8Valid.go (0xED :: b2 :: b3 :: rest) (f + 1)
      = (0x80 ≤ b2 && b2 < 0xA0 && isContByte b3 && utf8Valid.go rest f) := by
  conv => lhs; unfold utf8Valid.go
  simp

theorem utf8Valid_go_step_ee (b b2 b3 : Nat) (rest : List Nat) (f : Nat)
    (h1 : ¬ b < 0x80) (h2 : ¬ b < 0xE0) (h3 : b ≠ 0xE0) (h4 : ¬ b < 0xED)
    (h5 : b ≠ 0xED) (h6 : 0xEE ≤ b) (h7 : b < 0xF0) :
    utf8Valid.go (b :: b2 :: b3 :: rest) (f + 1)
      = (isContByte b2 && isContByte b3 && utf8Valid.go rest f) := by
  conv => lhs; unfold utf8Valid.go
  simp [h1, h2, h3, h4, h5, h6, h7]

theorem utf8Valid_go_step_f0 (b2 b3 b4 : Nat) (rest : List Nat) (f : Nat) :
    utf8Valid.go (0xF0 :: b2 :: b3 :: b4 :: rest) (f + 1)
      = (0x90 ≤ b2 && b2 < 0xC0 && isContByte b3 && isContByte b4 &&
          utf8Valid.go rest f) := by
  conv => lhs; unfold utf8Valid.go
  simp

theorem utf8Valid_go_step_f1 (b b2 b3 b4 : Nat) (rest : List Nat) (f : Nat)
    (h1 : ¬ b < 0x80) (h2 : ¬ b < 0xE0) (h3 : b ≠ 0xE0) (h4 : ¬ b < 0xED)
    (h5 : b ≠ 0xED) (h6 : ¬ b < 0xF0) (h7 : b ≠ 0xF0) (h8 : 0xF1 ≤ b) (h9 : b < 0xF4) :
    utf8Valid.go (b :: b2 :: b3 :: b4 :: rest) (f + 1)
      = (isContByte b2 && isContByte b3 && isContByte b4 && utf8Valid.go rest f) := by
  conv => lhs; unfold utf8Valid.go
  simp [h1, h2, h3, h4, h5, h6, h7, h8, h9]

theorem utf8Valid_go_step_f4 (b2 b3 b4 : Nat) (rest : List Nat) (f : Nat) :
    utf8Valid.go (0xF4 :: b2 :: b3 :: b4 :: rest) (f + 1)
      = (0x80 ≤ b2 && b2 < 0x90 && isContByte b3 && isContByte b4 &&
          utf8Valid.go rest f) := by
  conv => lhs; unfold utf8Valid.go
  simp

/-! ## One-step equations for `utf8Decode.go` -/

theorem utf8Decode_go_step_ascii (b : Nat) (rest : List Nat) (f : Nat) (h : b < 0x80) :
    utf8Decode.go (b :: rest) (f + 1) = Char.ofNat b :: utf8Decode.go rest f := by
  conv => lhs; unfold utf8Decode.go
  simp [h]

theorem utf8Decode_go_step_two (b b2 : Nat) (rest : List Nat) (f : Nat)
    (h1 : ¬ b < 0x80) (h2 : 0xC2 ≤ b) (h3 : b < 0xE0) (hc : isContByte b2 = true) :
    utf8Decode.go (b :: b2 :: rest) (f + 1)
      = Char.ofNat ((b % 32) * 64 + (b2 % 64)) :: utf8Decode.go rest f := by
  conv => lhs; unfold utf8Decode.go
  simp [h1, h2, h3, hc]

theorem utf8Decode_go_step_three (b b2 b3 : Nat) (rest : List Nat) (f : Nat)
    (h1 : ¬ b < 0x80) (h2 : ¬ b < 0xE0) (h3 : 0xE0 ≤ b) (h4 : b < 0xF0)
    (hc2 : isContByte b2 = true) (hc3 : isContByte b3 = true) :
    utf8Decode.go (b :: b2 :: b3 :: rest) (f + 1)
      = Char.ofNat ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64))
        :: utf8Decode.go rest f := by
  conv => lhs; unfold utf8Decode.go
  simp [h1, h2, h3, h4, hc2, hc3]

theorem utf8Decode_go_step_four (b b2 b3 b4 : Nat) (rest : List Nat) (f : Nat)
    (h1 : ¬ b < 0x80) (h2 : ¬ b < 0xE0) (h3 : ¬ b < 0xF0) (h4 : 0xF0 ≤ b) (h5 : b < 0xF5)
    (hc2 : isContByte b2 = true) (hc3 : isContByte b3 = true) (hc4 : isContByte b4 = true) :
    utf8Decode.go (b :: b2 :: b3 :: b4 :: rest) (f + 1)
      = Char.ofNat ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64))
        :: utf8Decode.go rest f := by
  conv => lhs; unfold utf8Decode.go
  simp [h1, h2, h3, h4, h5, hc2, hc3, hc4]

/-! ## Byte reconstruction: encoding a decoded character returns its bytes -/

theorem utf8Bytes_ofNat_one (b : Nat) (h : b < 0x80) :
    utf8Bytes (Char.ofNat b) = [b] := by
  have htm : (Char.ofNat b).toNat = b :=
    toNat_ofNat_of_isValidChar b (by simp only [Nat.isValidChar]; omega)
  simp [utf8Bytes, htm, h]

theorem utf8Bytes_ofNat_two (b b2 : Nat) (hb : 0xC2 ≤ b ∧ b < 0xE0)
    (hc : isContByte b2 = true) :
    utf8Bytes (Char.ofNat ((b % 32) * 64 + (b2 % 64))) = [b, b2] := by
  have hb2r : 0x80 ≤ b2 ∧ b2 < 0xC0 := by
    have h := hc
    simp [isContByte] at h
    exact h
  have htm : (Char.ofNat ((b % 32) * 64 + (b2 % 64))).toNat
      = (b % 32) * 64 + (b2 % 64) :=
    toNat_ofNat_of_isValidChar _ (by simp only [Nat.isValidChar]; omega)
  have hdig1 : ((b % 32) * 64 + (b2 % 64)) / 0x40 = b % 32 := by omega
  have hdig2 : ((b % 32) * 64 + (b2 % 64)) % 0x40 = b2 % 64 := by omega
  have hb' : 0xC0 + b % 32 = b := by omega
  have hb2' : 0x80 + b2 % 64 = b2 := by omega
  simp [utf8Bytes, htm, hdig1, hdig2, hb', hb2',
    show ¬ ((b % 32) * 64 + (b2 % 64)) < 0x80 by omega,
    show ((b % 32) * 64 + (b2 % 64)) < 0x800 by omega]

theorem utf8Bytes_ofNat_three (b b2 b3 : Nat) (hb : 0xE0 ≤ b ∧ b < 0xF0)
    (hc2 : isContByte b2 = true) (hc3 : isContByte b3 = true)
    (hlo : 0x800 ≤ (b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64))
    (hvalid : Nat.isValidChar ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64))) :
    utf8Bytes (Char.ofNat ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64))) = [b, b2, b3] := by
  have hb2r : 0x80 ≤ b2 ∧ b2 < 0xC0 := by
    have h := hc2
    simp [isContByte] at h
    exact h
  have hb3r : 0x80 ≤ b3 ∧ b3 < 0xC0 := by
    have h := hc3
    simp [isContByte] at h
    exact h
  have htm : (Char.ofNat ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64))).toNat
      = (b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64) :=
    toNat_ofNat_of_isValidChar _ hvalid
  have hdig1 : ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64)) / 0x1000 = b % 16 := by omega
  have hdig2 : (((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64)) / 0x40) % 0x40 = b2 % 64 := by
    omega
  have hdig3 : ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64)) % 0x40 = b3 % 64 := by omega
  have hb' : 0xE0 + b % 16 = b := by omega
  have hb2' : 0x80 + b2 % 64 = b2 := by omega
  have hb3' : 0x80 + b3 % 64 = b3 := by omega
  simp [utf8Bytes, htm, hdig1, hdig2, hdig3, hb', hb2', hb3',
    show ¬ ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64)) < 0x80 by omega,
    show ¬ ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64)) < 0x800 by omega,
    show ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64)) < 0x10000 by omega]

theorem utf8Bytes_ofNat_four (b b2 b3 b4 : Nat) (hb : 0xF0 ≤ b ∧ b < 0xF5)
    (hc2 : isContByte b2 = true) (hc3 : isContByte b3 = true) (hc4 : isContByte b4 = true)
    (hlo : 0x10000 ≤ (b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64))
    (hvalid : Nat.isValidChar
      ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64))) :
    utf8Bytes (Char.ofNat ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64)))
      = [b, b2, b3, b4] := by
  have hb2r : 0x80 ≤ b2 ∧ b2 < 0xC0 := by
    have h := hc2
    simp [isContByte] at h
    exact h
  have hb3r : 0x80 ≤ b3 ∧ b3 < 0xC0 := by
    have h := hc3
    simp [isContByte] at h
    exact h
  have hb4r : 0x80 ≤ b4 ∧ b4 < 0xC0 := by
    have h := hc4
    simp [isContByte] at h
    exact h
  have htm : (Char.ofNat ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64))).toNat
      = (b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64) :=
    toNat_ofNat_of_isValidChar _ hvalid
  have hdig1 : ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64)) / 0x40000
      = b % 8 := by omega
  have hdig2 : (((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64)) / 0x1000)
      % 0x40 = b2 % 64 := by omega
  have hdig3 : (((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64)) / 0x40)
      % 0x40 = b3 % 64 := by omega
  have hdig4 : ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64)) % 0x40
      = b4 % 64 := by omega
  have hb' : 0xF0 + b % 8 = b := by omega
  have hb2' : 0x80 + b2 % 64 = b2 := by omega
  have hb3' : 0x80 + b3 % 64 = b3 := by omega
  have hb4' : 0x80 + b4 % 64 = b4 := by omega
  simp [utf8Bytes, htm, hdig1, hdig2, hdig3, hdig4, hb', hb2', hb3', hb4',
    show ¬ ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64)) < 0x80 by omega,
    show ¬ ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64)) < 0x800 by omega,
    show ¬ ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64)) < 0x10000 by omega]

/-! ## Per-shape composition for the encode-after-decode direction -/

theorem decode_flatMap_three (b b2 b3 : Nat) (rest : List Nat) (f : Nat)
    (hb : 0xE0 ≤ b ∧ b < 0xF0) (hc2 : isContByte b2 = true) (hc3 : isContByte b3 = true)
    (hlo : 0x800 ≤ (b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64))
    (hvalid : Nat.isValidChar ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64)))
    (hstep : utf8Decode.go (b :: b2 :: b3 :: rest) (f + 1)
      = Char.ofNat ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64))
        :: utf8Decode.go rest f)
    (hih : (utf8Decode.go rest f).flatMap utf8Bytes = rest) :
    (utf8Decode.go (b :: b2 :: b3 :: rest) (f + 1)).flatMap utf8Bytes
      = b :: b2 :: b3 :: rest := by
  rw [hstep]
  simp [utf8Bytes_ofNat_three b b2 b3 hb hc2 hc3 hlo hvalid, hih]

theorem decode_flatMap_four (b b2 b3 b4 : Nat) (rest : List Nat) (f : Nat)
    (hb : 0xF0 ≤ b ∧ b < 0xF5)
    (hc2 : isContByte b2 = true) (hc3 : isContByte b3 = true) (hc4 : isContByte b4 = true)
    (hlo : 0x10000 ≤ (b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64))
    (hvalid : Nat.isValidChar
      ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64)))
    (hstep : utf8Decode.go (b :: b2 :: b3 :: b4 :: rest) (f + 1)
      = Char.ofNat ((b % 8) * 262144 + (b2 % 64) * 4096 + (b3 % 64) * 64 + (b4 % 64))
        :: utf8Decode.go rest f)
    (hih : (utf8Decode.go rest f).flatMap utf8Bytes = rest) :
    (utf8Decode.go (b :: b2 :: b3 :: b4 :: rest) (f + 1)).flatMap utf8Bytes
      = b :: b2 :: b3 :: b4 :: rest := by
  rw [hstep]
  simp [utf8Bytes_ofNat_four b b2 b3 b4 hb hc2 hc3 hc4 hlo hvalid, hih]

/-! ## The list-level UTF-8 round trip: encode after decode on valid strings -/

/-- Peeling a two-factor conjunction out of a `Bool` equality, in the
    form the branch analysis of `utf8Valid.go` produces. (`Bool.and_eq_true`
    is an equality of propositions, not an `Iff`, in this toolchain.) -/
theorem and_true_mp {a b : Bool} (h : (a && b) = true) : a = true ∧ b = true := by
  rw [Bool.and_eq_true] at h
  exact h

/-- Fuel-indexed form of the second missing list-level fact: on a byte
    string that `utf8Valid.go` accepts and that contains no delimiter byte,
    decoding and re-encoding returns the string. The induction is on the
    fuel; the case analysis follows `utf8Valid.go`'s branch structure, and
    in each branch `utf8Decode.go` takes the corresponding step and the
    decoded character re-encodes to exactly the consumed bytes. The
    no-delimiter hypothesis is what the parse side needs (text spans of a
    byte form contain no 0xFF); validity alone would suffice for the round
    trip, but the hypothesis is carried because the branch analysis uses
    it to exclude the delimiter in the fall-through case. -/
theorem utf8Valid_go_decode_flatMap : ∀ (f : Nat) (bs : List Nat),
    bs.length ≤ f → utf8Valid.go bs f = true → 0xFF ∉ bs →
    (utf8Decode.go bs f).flatMap utf8Bytes = bs := by
  intro f
  induction f with
  | zero =>
      intro bs hf _ _
      cases bs with
      | nil => rfl
      | cons b rest => simp at hf
  | succ f ih =>
      intro bs hf hv hff
      cases bs with
      | nil => rfl
      | cons b rest =>
          have hf0 : rest.length ≤ f := by
            have h := hf
            simp only [List.length_cons] at h
            omega
          have hff0 : 0xFF ∉ rest := fun hm => hff (by simp [hm])
          by_cases h1 : b < 0x80
          · have hv' : utf8Valid.go rest f = true := by
              have h := hv
              rwa [utf8Valid_go_step_ascii b rest f h1] at h
            rw [utf8Decode_go_step_ascii b rest f h1]
            simp [utf8Bytes_ofNat_one b h1, ih rest hf0 hv' hff0]
          · by_cases h2 : 0xC2 ≤ b ∧ b < 0xE0
            · cases rest with
              | nil =>
                  exfalso
                  simp [utf8Valid.go, h1, h2.1, h2.2] at hv
              | cons b2 rest' =>
                  have hv' : (isContByte b2 && utf8Valid.go rest' f) = true := by
                    have h := hv
                    rwa [utf8Valid_go_step_two b b2 rest' f h1 h2.1 h2.2] at h
                  rw [Bool.and_eq_true] at hv'
                  have hf' : rest'.length ≤ f := by
                    have h := hf
                    simp only [List.length_cons] at h
                    omega
                  have hff' : 0xFF ∉ rest' := fun hm => hff (by simp [hm])
                  rw [utf8Decode_go_step_two b b2 rest' f h1 h2.1 h2.2 hv'.1]
                  simp [utf8Bytes_ofNat_two b b2 h2 hv'.1, ih rest' hf' hv'.2 hff']
            · by_cases h3 : b = 0xE0
              · subst h3
                cases rest with
                | nil =>
                    exfalso
                    simp [utf8Valid.go] at hv
                | cons b2 rest'' =>
                    cases rest'' with
                    | nil =>
                        exfalso
                        simp [utf8Valid.go] at hv
                    | cons b3 rest' =>
                        have hv' : (0xA0 ≤ b2 && b2 < 0xC0 && isContByte b3 &&
                            utf8Valid.go rest' f) = true := by
                          have h := hv
                          rwa [utf8Valid_go_step_e0 b2 b3 rest' f] at h
                        have hA : (0xA0 ≤ b2 && b2 < 0xC0 && isContByte b3) = true ∧
                            utf8Valid.go rest' f = true := and_true_mp hv'
                        have hB : (0xA0 ≤ b2 && b2 < 0xC0) = true ∧
                            isContByte b3 = true := and_true_mp hA.1
                        have hC := and_true_mp hB.1
                        have hb2lo : 0xA0 ≤ b2 := of_decide_eq_true hC.1
                        have hb2hi : b2 < 0xC0 := of_decide_eq_true hC.2
                        have hc2 : isContByte b2 = true := by
                          simp [isContByte]
                          exact ⟨by omega, by omega⟩
                        have hf' : rest'.length ≤ f := by
                          have h := hf
                          simp only [List.length_cons] at h
                          omega
                        have hff' : 0xFF ∉ rest' := fun hm => hff (by simp [hm])
                        have hstep := utf8Decode_go_step_three 0xE0 b2 b3 rest' f
                          (by omega) (by omega) (by omega) (by omega) hc2 hB.2
                        exact decode_flatMap_three 0xE0 b2 b3 rest' f ⟨by omega, by omega⟩
                          hc2 hB.2 (by omega) (by simp only [Nat.isValidChar]; omega) hstep
                          (ih rest' hf' hA.2 hff')
              · by_cases h4 : 0xE1 ≤ b ∧ b < 0xED
                · cases rest with
                  | nil =>
                      exfalso
                      simp [utf8Valid.go, h1, h4.1, h4.2,
                        show ¬ b < 0xE0 by omega, show b ≠ 0xE0 by omega] at hv
                  | cons b2 rest'' =>
                      cases rest'' with
                      | nil =>
                          exfalso
                          simp [utf8Valid.go, h1, h4.1, h4.2,
                            show ¬ b < 0xE0 by omega, show b ≠ 0xE0 by omega] at hv
                      | cons b3 rest' =>
                          have hv' : (isContByte b2 && isContByte b3 &&
                              utf8Valid.go rest' f) = true := by
                            have h := hv
                            rwa [utf8Valid_go_step_e1 b b2 b3 rest' f h1
                              (by omega) (by omega) h4.1 h4.2] at h
                          have hA : (isContByte b2 && isContByte b3) = true ∧
                              utf8Valid.go rest' f = true := and_true_mp hv'
                          have hB : isContByte b2 = true ∧ isContByte b3 = true :=
                            and_true_mp hA.1
                          have hf' : rest'.length ≤ f := by
                            have h := hf
                            simp only [List.length_cons] at h
                            omega
                          have hff' : 0xFF ∉ rest' := fun hm => hff (by simp [hm])
                          have hstep := utf8Decode_go_step_three b b2 b3 rest' f h1
                            (by omega) (by omega) (by omega) hB.1 hB.2
                          exact decode_flatMap_three b b2 b3 rest' f
                            ⟨by omega, by omega⟩ hB.1 hB.2 (by omega) (by simp only [Nat.isValidChar]; omega)
                            hstep (ih rest' hf' hA.2 hff')
                · by_cases h5 : b = 0xED
                  · subst h5
                    cases rest with
                    | nil =>
                        exfalso
                        simp [utf8Valid.go] at hv
                    | cons b2 rest'' =>
                        cases rest'' with
                        | nil =>
                            exfalso
                            simp [utf8Valid.go] at hv
                        | cons b3 rest' =>
                            have hv' : (0x80 ≤ b2 && b2 < 0xA0 && isContByte b3 &&
                                utf8Valid.go rest' f) = true := by
                              have h := hv
                              rwa [utf8Valid_go_step_ed b2 b3 rest' f] at h
                            have hA : (0x80 ≤ b2 && b2 < 0xA0 && isContByte b3) = true ∧
                                utf8Valid.go rest' f = true := and_true_mp hv'
                            have hB : (0x80 ≤ b2 && b2 < 0xA0) = true ∧
                                isContByte b3 = true := and_true_mp hA.1
                            have hC := and_true_mp hB.1
                            have hb2lo : 0x80 ≤ b2 := of_decide_eq_true hC.1
                            have hb2hi : b2 < 0xA0 := of_decide_eq_true hC.2
                            have hc2 : isContByte b2 = true := by
                              simp [isContByte]
                              exact ⟨by omega, by omega⟩
                            have hf' : rest'.length ≤ f := by
                              have h := hf
                              simp only [List.length_cons] at h
                              omega
                            have hff' : 0xFF ∉ rest' := fun hm => hff (by simp [hm])
                            have hstep := utf8Decode_go_step_three 0xED b2 b3 rest' f
                              (by omega) (by omega) (by omega) (by omega) hc2 hB.2
                            exact decode_flatMap_three 0xED b2 b3 rest' f
                              ⟨by omega, by omega⟩ hc2 hB.2 (by omega) (by simp only [Nat.isValidChar]; omega)
                              hstep (ih rest' hf' hA.2 hff')
                  · by_cases h6 : 0xEE ≤ b ∧ b < 0xF0
                    · cases rest with
                      | nil =>
                          exfalso
                          simp [utf8Valid.go, h1, h6.1, h6.2,
                            show ¬ b < 0xE0 by omega, show b ≠ 0xE0 by omega,
                            show ¬ b < 0xED by omega, show b ≠ 0xED by omega] at hv
                      | cons b2 rest'' =>
                          cases rest'' with
                          | nil =>
                              exfalso
                              simp [utf8Valid.go, h1, h6.1, h6.2,
                                show ¬ b < 0xE0 by omega, show b ≠ 0xE0 by omega,
                                show ¬ b < 0xED by omega, show b ≠ 0xED by omega] at hv
                          | cons b3 rest' =>
                              have hv' : (isContByte b2 && isContByte b3 &&
                                  utf8Valid.go rest' f) = true := by
                                have h := hv
                                rwa [utf8Valid_go_step_ee b b2 b3 rest' f h1
                                  (by omega) (by omega) (by omega) (by omega)
                                  h6.1 h6.2] at h
                              have hA : (isContByte b2 && isContByte b3) = true ∧
                                  utf8Valid.go rest' f = true := and_true_mp hv'
                              have hB : isContByte b2 = true ∧ isContByte b3 = true :=
                                and_true_mp hA.1
                              have hf' : rest'.length ≤ f := by
                                have h := hf
                                simp only [List.length_cons] at h
                                omega
                              have hff' : 0xFF ∉ rest' := fun hm => hff (by simp [hm])
                              have hstep := utf8Decode_go_step_three b b2 b3 rest' f h1
                                (by omega) (by omega) (by omega) hB.1 hB.2
                              exact decode_flatMap_three b b2 b3 rest' f
                                ⟨by omega, by omega⟩ hB.1 hB.2 (by omega) (by simp only [Nat.isValidChar]; omega) hstep (ih rest' hf' hA.2 hff')
                    · by_cases h7 : b = 0xF0
                      · subst h7
                        cases rest with
                        | nil =>
                            exfalso
                            simp [utf8Valid.go] at hv
                        | cons b2 rest'' =>
                            cases rest'' with
                            | nil =>
                                exfalso
                                simp [utf8Valid.go] at hv
                            | cons b3 rest''' =>
                                cases rest''' with
                                | nil =>
                                    exfalso
                                    simp [utf8Valid.go] at hv
                                | cons b4 rest' =>
                                    have hv' : (0x90 ≤ b2 && b2 < 0xC0 && isContByte b3 &&
                                        isContByte b4 && utf8Valid.go rest' f) = true := by
                                      have h := hv
                                      rwa [utf8Valid_go_step_f0 b2 b3 b4 rest' f] at h
                                    have hA : (0x90 ≤ b2 && b2 < 0xC0 && isContByte b3 &&
                                        isContByte b4) = true ∧
                                        utf8Valid.go rest' f = true :=
                                      and_true_mp hv'
                                    have hB : (0x90 ≤ b2 && b2 < 0xC0 && isContByte b3) = true ∧
                                        isContByte b4 = true := and_true_mp hA.1
                                    have hC : (0x90 ≤ b2 && b2 < 0xC0) = true ∧
                                        isContByte b3 = true := and_true_mp hB.1
                                    have hD := and_true_mp hC.1
                                    have hb2lo : 0x90 ≤ b2 := of_decide_eq_true hD.1
                                    have hb2hi : b2 < 0xC0 := of_decide_eq_true hD.2
                                    have hc2 : isContByte b2 = true := by
                                      simp [isContByte]
                                      exact ⟨by omega, by omega⟩
                                    have hf' : rest'.length ≤ f := by
                                      have h := hf
                                      simp only [List.length_cons] at h
                                      omega
                                    have hff' : 0xFF ∉ rest' := fun hm => hff (by simp [hm])
                                    have hstep := utf8Decode_go_step_four 0xF0 b2 b3 b4 rest' f
                                      (by omega) (by omega) (by omega) (by omega) (by omega)
                                      hc2 hC.2 hB.2
                                    exact decode_flatMap_four 0xF0 b2 b3 b4 rest' f
                                      ⟨by omega, by omega⟩ hc2 hC.2 hB.2 (by omega) (by simp only [Nat.isValidChar]; omega) hstep (ih rest' hf' hA.2 hff')
                      · by_cases h8 : 0xF1 ≤ b ∧ b < 0xF4
                        · cases rest with
                          | nil =>
                              exfalso
                              simp [utf8Valid.go, h1, h8.1, h8.2,
                                show ¬ b < 0xE0 by omega, show b ≠ 0xE0 by omega,
                                show ¬ b < 0xED by omega, show b ≠ 0xED by omega,
                                show ¬ b < 0xF0 by omega, show b ≠ 0xF0 by omega] at hv
                          | cons b2 rest'' =>
                              cases rest'' with
                              | nil =>
                                  exfalso
                                  simp [utf8Valid.go, h1, h8.1, h8.2,
                                    show ¬ b < 0xE0 by omega, show b ≠ 0xE0 by omega,
                                    show ¬ b < 0xED by omega, show b ≠ 0xED by omega,
                                    show ¬ b < 0xF0 by omega, show b ≠ 0xF0 by omega] at hv
                              | cons b3 rest''' =>
                                  cases rest''' with
                                  | nil =>
                                      exfalso
                                      simp [utf8Valid.go, h1, h8.1, h8.2,
                                        show ¬ b < 0xE0 by omega, show b ≠ 0xE0 by omega,
                                        show ¬ b < 0xED by omega, show b ≠ 0xED by omega,
                                        show ¬ b < 0xF0 by omega, show b ≠ 0xF0 by omega] at hv
                                  | cons b4 rest' =>
                                      have hv' : (isContByte b2 && isContByte b3 &&
                                          isContByte b4 && utf8Valid.go rest' f) = true := by
                                        have h := hv
                                        rwa [utf8Valid_go_step_f1 b b2 b3 b4 rest' f h1
                                          (by omega) (by omega) (by omega) (by omega)
                                          (by omega) (by omega) h8.1 h8.2] at h
                                      have hA : (isContByte b2 && isContByte b3 &&
                                          isContByte b4) = true ∧
                                          utf8Valid.go rest' f = true :=
                                        and_true_mp hv'
                                      have hB : (isContByte b2 && isContByte b3) = true ∧
                                          isContByte b4 = true := and_true_mp hA.1
                                      have hC : isContByte b2 = true ∧ isContByte b3 = true :=
                                        and_true_mp hB.1
                                      have hf' : rest'.length ≤ f := by
                                        have h := hf
                                        simp only [List.length_cons] at h
                                        omega
                                      have hff' : 0xFF ∉ rest' := fun hm => hff (by simp [hm])
                                      have hstep := utf8Decode_go_step_four b b2 b3 b4 rest' f
                                        h1 (by omega) (by omega) (by omega) (by omega)
                                        hC.1 hC.2 hB.2
                                      exact decode_flatMap_four b b2 b3 b4 rest' f
                                        ⟨by omega, by omega⟩ hC.1 hC.2 hB.2 (by omega) (by simp only [Nat.isValidChar]; omega) hstep (ih rest' hf' hA.2 hff')
                        · by_cases h9 : b = 0xF4
                          · subst h9
                            cases rest with
                            | nil =>
                                exfalso
                                simp [utf8Valid.go] at hv
                            | cons b2 rest'' =>
                                cases rest'' with
                                | nil =>
                                    exfalso
                                    simp [utf8Valid.go] at hv
                                | cons b3 rest''' =>
                                    cases rest''' with
                                    | nil =>
                                        exfalso
                                        simp [utf8Valid.go] at hv
                                    | cons b4 rest' =>
                                        have hv' : (0x80 ≤ b2 && b2 < 0x90 && isContByte b3 &&
                                            isContByte b4 && utf8Valid.go rest' f) = true := by
                                          have h := hv
                                          rwa [utf8Valid_go_step_f4 b2 b3 b4 rest' f] at h
                                        have hA : (0x80 ≤ b2 && b2 < 0x90 && isContByte b3 &&
                                            isContByte b4) = true ∧
                                            utf8Valid.go rest' f = true :=
                                          and_true_mp hv'
                                        have hB : (0x80 ≤ b2 && b2 < 0x90 && isContByte b3) = true ∧
                                            isContByte b4 = true := and_true_mp hA.1
                                        have hC : (0x80 ≤ b2 && b2 < 0x90) = true ∧
                                            isContByte b3 = true := and_true_mp hB.1
                                        have hD := and_true_mp hC.1
                                        have hb2lo : 0x80 ≤ b2 := of_decide_eq_true hD.1
                                        have hb2hi : b2 < 0x90 := of_decide_eq_true hD.2
                                        have hc2 : isContByte b2 = true := by
                                          simp [isContByte]
                                          exact ⟨by omega, by omega⟩
                                        have hf' : rest'.length ≤ f := by
                                          have h := hf
                                          simp only [List.length_cons] at h
                                          omega
                                        have hff' : 0xFF ∉ rest' := fun hm => hff (by simp [hm])
                                        have hstep := utf8Decode_go_step_four 0xF4 b2 b3 b4 rest' f
                                          (by omega) (by omega) (by omega) (by omega) (by omega)
                                          hc2 hC.2 hB.2
                                        exact decode_flatMap_four 0xF4 b2 b3 b4 rest' f
                                          ⟨by omega, by omega⟩ hc2 hC.2 hB.2 (by omega) (by simp only [Nat.isValidChar]; omega) hstep (ih rest' hf' hA.2 hff')
                          · exfalso
                            have hbc : b < 0xC2 ∨ 0xF5 ≤ b := by omega
                            cases rest with
                            | nil =>
                                cases hbc with
                                | inl hlt =>
                                    have g1 : ¬ (0xC2 ≤ b) := by omega
                                    have g2 : b ≠ 0xE0 := by omega
                                    have g3 : ¬ (0xE1 ≤ b) := by omega
                                    have g4 : b ≠ 0xED := by omega
                                    have g5 : ¬ (0xEE ≤ b) := by omega
                                    have g6 : b ≠ 0xF0 := by omega
                                    have g7 : ¬ (0xF1 ≤ b) := by omega
                                    have g8 : b ≠ 0xF4 := by omega
                                    simp [utf8Valid.go, h1, g1, g2, g3, g4, g5, g6, g7, g8] at hv
                                | inr hge =>
                                    have g1 : ¬ (b < 0xE0) := by omega
                                    have g2 : b ≠ 0xE0 := by omega
                                    have g3 : ¬ (b < 0xED) := by omega
                                    have g4 : b ≠ 0xED := by omega
                                    have g5 : ¬ (b < 0xF0) := by omega
                                    have g6 : b ≠ 0xF0 := by omega
                                    have g7 : ¬ (b < 0xF4) := by omega
                                    have g8 : b ≠ 0xF4 := by omega
                                    simp [utf8Valid.go, h1, g1, g2, g3, g4, g5, g6, g7, g8] at hv
                            | cons b2 rest' =>
                                cases rest' with
                                | nil =>
                                    cases hbc with
                                    | inl hlt =>
                                        have g1 : ¬ (0xC2 ≤ b) := by omega
                                        have g2 : b ≠ 0xE0 := by omega
                                        have g3 : ¬ (0xE1 ≤ b) := by omega
                                        have g4 : b ≠ 0xED := by omega
                                        have g5 : ¬ (0xEE ≤ b) := by omega
                                        have g6 : b ≠ 0xF0 := by omega
                                        have g7 : ¬ (0xF1 ≤ b) := by omega
                                        have g8 : b ≠ 0xF4 := by omega
                                        simp [utf8Valid.go, h1, g1, g2, g3, g4, g5, g6, g7, g8] at hv
                                    | inr hge =>
                                        have g1 : ¬ (b < 0xE0) := by omega
                                        have g2 : b ≠ 0xE0 := by omega
                                        have g3 : ¬ (b < 0xED) := by omega
                                        have g4 : b ≠ 0xED := by omega
                                        have g5 : ¬ (b < 0xF0) := by omega
                                        have g6 : b ≠ 0xF0 := by omega
                                        have g7 : ¬ (b < 0xF4) := by omega
                                        have g8 : b ≠ 0xF4 := by omega
                                        simp [utf8Valid.go, h1, g1, g2, g3, g4, g5, g6, g7, g8] at hv
                                | cons b3 rest'' =>
                                    cases rest'' with
                                    | nil =>
                                        cases hbc with
                                        | inl hlt =>
                                            have g1 : ¬ (0xC2 ≤ b) := by omega
                                            have g2 : b ≠ 0xE0 := by omega
                                            have g3 : ¬ (0xE1 ≤ b) := by omega
                                            have g4 : b ≠ 0xED := by omega
                                            have g5 : ¬ (0xEE ≤ b) := by omega
                                            have g6 : b ≠ 0xF0 := by omega
                                            have g7 : ¬ (0xF1 ≤ b) := by omega
                                            have g8 : b ≠ 0xF4 := by omega
                                            simp [utf8Valid.go, h1, g1, g2, g3, g4, g5, g6, g7, g8] at hv
                                        | inr hge =>
                                            have g1 : ¬ (b < 0xE0) := by omega
                                            have g2 : b ≠ 0xE0 := by omega
                                            have g3 : ¬ (b < 0xED) := by omega
                                            have g4 : b ≠ 0xED := by omega
                                            have g5 : ¬ (b < 0xF0) := by omega
                                            have g6 : b ≠ 0xF0 := by omega
                                            have g7 : ¬ (b < 0xF4) := by omega
                                            have g8 : b ≠ 0xF4 := by omega
                                            simp [utf8Valid.go, h1, g1, g2, g3, g4, g5, g6, g7, g8] at hv
                                    | cons b4 rest''' =>
                                        cases hbc with
                                        | inl hlt =>
                                            have g1 : ¬ (0xC2 ≤ b) := by omega
                                            have g2 : b ≠ 0xE0 := by omega
                                            have g3 : ¬ (0xE1 ≤ b) := by omega
                                            have g4 : b ≠ 0xED := by omega
                                            have g5 : ¬ (0xEE ≤ b) := by omega
                                            have g6 : b ≠ 0xF0 := by omega
                                            have g7 : ¬ (0xF1 ≤ b) := by omega
                                            have g8 : b ≠ 0xF4 := by omega
                                            simp [utf8Valid.go, h1, g1, g2, g3, g4, g5, g6, g7, g8] at hv
                                        | inr hge =>
                                            have g1 : ¬ (b < 0xE0) := by omega
                                            have g2 : b ≠ 0xE0 := by omega
                                            have g3 : ¬ (b < 0xED) := by omega
                                            have g4 : b ≠ 0xED := by omega
                                            have g5 : ¬ (b < 0xF0) := by omega
                                            have g6 : b ≠ 0xF0 := by omega
                                            have g7 : ¬ (b < 0xF4) := by omega
                                            have g8 : b ≠ 0xF4 := by omega
                                            simp [utf8Valid.go, h1, g1, g2, g3, g4, g5, g6, g7, g8] at hv

/-- The second missing list-level fact, discharged for the byte strings
    the parse side produces: a valid byte string with no delimiter byte
    re-encodes to itself after decoding. -/
theorem flatMap_utf8Bytes_utf8Decode_of_valid (bs : List Nat)
    (hv : utf8Valid bs = true) (hff : 0xFF ∉ bs) :
    (utf8Decode bs).flatMap utf8Bytes = bs :=
  utf8Valid_go_decode_flatMap bs.length bs (Nat.le_refl _) hv hff

/-! ## The parse side: `parseBytes.go` over a byte form -/

/-- The flush expression of `parseBytes.go` at an accumulator whose reverse
    is the UTF-8 encoding of `ds` is the single text segment for `ds` (or
    nothing when `ds` is empty). -/
theorem flush_eq_of_reverse_flatMap (acc : List Nat) (ds : List Char)
    (h : acc.reverse = ds.flatMap utf8Bytes) :
    (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)])
      = (if ds.isEmpty then [] else [TSeg.text ds]) := by
  cases ds with
  | nil =>
      have hacc : acc = [] := by
        have h1 : acc.reverse = [] := by simpa using h
        cases acc with
        | nil => rfl
        | cons a as => simp at h1
      simp [hacc]
  | cons d ds' =>
      have hne1 : acc.isEmpty = false := by
        cases acc with
        | nil =>
            exfalso
            rw [List.reverse_nil] at h
            have h2 : ((d :: ds').flatMap utf8Bytes).length = 0 := by
              rw [← h]; rfl
            have hpos : 0 < (utf8Bytes d).length :=
              Nat.pos_of_ne_zero (fun hh => utf8Bytes_ne_nil d (eq_nil_of_length_eq_zero hh))
            have h3 : (utf8Bytes d).length = 0 := by
              have hfm : (d :: ds').flatMap utf8Bytes =
                  utf8Bytes d ++ ds'.flatMap utf8Bytes := rfl
              rw [hfm, List.length_append] at h2
              omega
            exact utf8Bytes_ne_nil d (eq_nil_of_length_eq_zero h3)
        | cons a as => rfl
      have hne2 : (d :: ds').isEmpty = false := rfl
      have hdec : utf8Decode acc.reverse = d :: ds' := by
        rw [h]
        exact utf8Decode_flatMap_utf8Bytes _
      simp [hne1, hne2, hdec]

/-- Walking a delimiter-free byte stretch through `parseBytes.go` moves it
    onto the accumulator (reversed) and spends exactly its length in fuel. -/
theorem parseBytes_go_append_no_ff : ∀ (bs₁ bs₂ acc : List Nat) (segs : List TSeg)
    (fuel : Nat), 0xFF ∉ bs₁ → bs₁.length ≤ fuel →
    parseBytes.go (bs₁ ++ bs₂) acc segs fuel =
      parseBytes.go bs₂ (bs₁.reverse ++ acc) segs (fuel - bs₁.length) := by
  intro bs₁
  induction bs₁ with
  | nil =>
      intro bs₂ acc segs fuel _ _
      simp
  | cons b rest ih =>
      intro bs₂ acc segs fuel hnoff hf
      cases fuel with
      | zero =>
          have h2 : (b :: rest).length = rest.length + 1 := rfl
          omega
      | succ f =>
          have hbff : b ≠ 0xFF := fun hb => hnoff (by simp [hb])
          have hrest : 0xFF ∉ rest := fun hb => hnoff (by simp [hb])
          have hf' : rest.length ≤ f := by
            have h2 : (b :: rest).length = rest.length + 1 := rfl
            omega
          have hstep : parseBytes.go ((b :: rest) ++ bs₂) acc segs (f + 1)
              = parseBytes.go (rest ++ bs₂) (b :: acc) segs f := by
            simp [parseBytes.go, hbff]
          rw [hstep, ih bs₂ (b :: acc) segs f hrest hf']
          have hrev : (b :: rest).reverse ++ acc = rest.reverse ++ (b :: acc) := by
            simp [List.reverse_cons, List.append_assoc]
          have hfuel : f + 1 - (b :: rest).length = f - rest.length := by
            have h2 : (b :: rest).length = rest.length + 1 := rfl
            omega
          rw [hrev, hfuel]

/-- At a well-formed placeholder, `parseBytes.go` flushes the accumulator
    and emits one token segment. -/
theorem parseBytes_go_token_step (k : Nat) (rest acc : List Nat) (segs : List TSeg)
    (f : Nat) :
    parseBytes.go (phBytes k ++ rest) acc segs (f + 1) =
      parseBytes.go rest []
        (segs ++ (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)]) ++
          [TSeg.tok k]) f := by
  have hpos : 0 < ((Nat.toDigits 10 k).map Char.toNat).length := by
    simpa using (Nat.length_toDigits_pos (b := 10) (n := k))
  simp [parseBytes.go, phBytes]
  rw [RawBridge.rb_readPlaceholder_head ((Nat.toDigits 10 k).map Char.toNat) rest k
    (RawBridge.rb_toDigits_digit_bytes k) (RawBridge.rb_toDigits_decimal_fold k) hpos]

/-- `normSegs` is unchanged by inserting an empty text segment anywhere. -/
theorem normSegs_append_empty_text (l₁ l₂ : List TSeg) :
    normSegs (l₁ ++ TSeg.text [] :: l₂) = normSegs (l₁ ++ l₂) := by
  induction l₁ with
  | nil => simp [normSegs]
  | cons s l₁ ih =>
      cases s with
      | tok k => simp [normSegs, ih]
      | text cs =>
          cases cs with
          | nil =>
              show normSegs (l₁ ++ TSeg.text [] :: l₂) = normSegs (l₁ ++ l₂)
              exact ih
          | cons c cs' =>
              show (match normSegs (l₁ ++ TSeg.text [] :: l₂) with
                | TSeg.text cs'' :: rest' => TSeg.text ((c :: cs') ++ cs'') :: rest'
                | rest' => TSeg.text (c :: cs') :: rest')
                = (match normSegs (l₁ ++ l₂) with
                | TSeg.text cs'' :: rest' => TSeg.text ((c :: cs') ++ cs'') :: rest'
                | rest' => TSeg.text (c :: cs') :: rest')
              rw [ih]

/-- `normSegs` merges two adjacent text segments exactly as it merges
    their concatenation. -/
theorem normSegs_append_merge_text (pre : List TSeg) (a b : List Char)
    (rest : List TSeg) :
    normSegs (pre ++ [TSeg.text a, TSeg.text b] ++ rest) =
      normSegs (pre ++ [TSeg.text (a ++ b)] ++ rest) := by
  induction pre with
  | nil =>
      cases a with
      | nil => rfl
      | cons x xs =>
          cases b with
          | nil => simp [normSegs]
          | cons y ys =>
              cases h : normSegs rest with
              | nil => simp [normSegs, h]
              | cons s ss =>
                  cases s with
                  | tok k => simp [normSegs, h]
                  | text cs => simp [normSegs, h, List.append_assoc]
  | cons s pre ih =>
      cases s with
      | tok k =>
          show TSeg.tok k :: normSegs (pre ++ [TSeg.text a, TSeg.text b] ++ rest)
            = TSeg.tok k :: normSegs (pre ++ [TSeg.text (a ++ b)] ++ rest)
          rw [ih]
      | text cs =>
          cases cs with
          | nil =>
              show normSegs (pre ++ [TSeg.text a, TSeg.text b] ++ rest)
                = normSegs (pre ++ [TSeg.text (a ++ b)] ++ rest)
              exact ih
          | cons c cs' =>
              show (match normSegs (pre ++ [TSeg.text a, TSeg.text b] ++ rest) with
                | TSeg.text cs'' :: rest' => TSeg.text ((c :: cs') ++ cs'') :: rest'
                | rest' => TSeg.text (c :: cs') :: rest')
                = (match normSegs (pre ++ [TSeg.text (a ++ b)] ++ rest) with
                | TSeg.text cs'' :: rest' => TSeg.text ((c :: cs') ++ cs'') :: rest'
                | rest' => TSeg.text (c :: cs') :: rest')
              rw [ih]

/-- The master parse lemma: `parseBytes.go` over the byte form of a
    segment list returns the canonical form of the already-emitted prefix,
    the flushed accumulator text, and the segment list itself. The
    accumulator invariant is that its reverse is the UTF-8 encoding of a
    character list `ds`, which is what makes the flush decode exactly. -/
theorem parseBytes_go_byteForm : ∀ (segs : List TSeg) (ds : List Char) (acc : List Nat)
    (pre : List TSeg) (fuel : Nat),
    acc.reverse = ds.flatMap utf8Bytes →
    (byteForm segs).length + 1 ≤ fuel →
    parseBytes.go (byteForm segs) acc pre fuel =
      normSegs (pre ++ (if ds.isEmpty then [] else [TSeg.text ds]) ++ segs) := by
  intro segs
  induction segs with
  | nil =>
      intro ds acc pre fuel hacc _
      have hflush : (if acc = [] then [] else [TSeg.text (utf8Decode acc.reverse)])
          = (if ds = [] then [] else [TSeg.text ds]) := by
        have h := flush_eq_of_reverse_flatMap acc ds hacc
        simpa using h
      simp [parseBytes.go, byteForm, hflush]
  | cons s segs ih =>
      intro ds acc pre fuel hacc hf
      cases s with
      | text cs =>
          have hbf : byteForm (TSeg.text cs :: segs)
              = cs.flatMap utf8Bytes ++ byteForm segs := rfl
          rw [hbf] at hf ⊢
          rw [List.length_append] at hf
          have hnoff : 0xFF ∉ cs.flatMap utf8Bytes := by
            intro hmem
            rcases List.mem_flatMap.mp hmem with ⟨c, _, hcb⟩
            exact utf8Bytes_no_ff c hcb
          have hf1 : (cs.flatMap utf8Bytes).length ≤ fuel := by omega
          rw [parseBytes_go_append_no_ff _ _ _ _ _ hnoff hf1]
          have hacc' : ((cs.flatMap utf8Bytes).reverse ++ acc).reverse
              = (ds ++ cs).flatMap utf8Bytes := by
            simp [List.reverse_append, hacc]
          have hf' : (byteForm segs).length + 1
              ≤ fuel - (cs.flatMap utf8Bytes).length := by
            omega
          rw [ih (ds ++ cs) _ _ _ hacc' hf']
          by_cases hcs : cs = []
          · subst hcs
            simp only [List.append_nil]
            exact (normSegs_append_empty_text
              (pre ++ (if ds.isEmpty then [] else [TSeg.text ds])) segs).symm
          · by_cases hds : ds = []
            · subst hds
              simp [hcs]
            · cases ds with
              | nil => simp at hds
              | cons d ds' =>
                  cases cs with
                  | nil => simp at hcs
                  | cons c cs' =>
                      have hm := (normSegs_append_merge_text pre (d :: ds')
                        (c :: cs') segs).symm
                      simp only [List.append_assoc] at hm
                      show normSegs (pre ++
                          [TSeg.text ((d :: ds') ++ (c :: cs'))] ++ segs)
                        = normSegs (pre ++ [TSeg.text (d :: ds')] ++
                          (TSeg.text (c :: cs') :: segs))
                      simp only [List.append_assoc]
                      exact hm
      | tok k =>
          have hbf : byteForm (TSeg.tok k :: segs) = phBytes k ++ byteForm segs := rfl
          rw [hbf] at hf ⊢
          cases fuel with
          | zero =>
              have h1 : (phBytes k).length + (byteForm segs).length + 1 ≤ 0 := by
                rwa [List.length_append] at hf
              omega
          | succ f =>
              rw [parseBytes_go_token_step, flush_eq_of_reverse_flatMap acc ds hacc]
              have hf' : (byteForm segs).length + 1 ≤ f := by
                have hph : 0 < (phBytes k).length := RawBridge.rb_phBytes_length_pos k
                have h := hf
                rw [List.length_append] at h
                omega
              rw [ih [] [] _ _ rfl hf']
              simp [List.append_assoc]

/-! ## The two headline obligations, discharged -/

/-- First F1 bridge obligation, in the exact form recorded at
    `TokenStateProof.lean`: splitting the byte form of a well-formed
    segment list returns the list. -/
theorem parseBytes_byteForm_id (segs : List TSeg) (n : Nat) (h : WFSegs segs n) :
    parseBytes (byteForm segs) = segs := by
  have hgo := parseBytes_go_byteForm segs [] [] [] ((byteForm segs).length + 1)
    rfl (Nat.le_refl _)
  show parseBytes.go (byteForm segs) [] [] ((byteForm segs).length + 1) = segs
  rw [hgo]
  simpa using h.1.symm

/-- Second F1 bridge obligation, in the exact form recorded at
    `TokenStateProof.lean`: the byte form of the split of a well-formed
    byte string is the string. It follows from the first obligation and
    the image witness in `WFBytes`. -/
theorem byteForm_parseBytes_id (bs : List Nat) (n : Nat) (h : WFBytes bs n) :
    byteForm (parseBytes bs) = bs := by
  obtain ⟨segs, hWF, rfl⟩ := h
  rw [parseBytes_byteForm_id segs n hWF]

/-! ## Axiom audit -/

#print axioms utf8Decode_flatMap_utf8Bytes
#print axioms flatMap_utf8Bytes_utf8Decode_of_valid
#print axioms parseBytes_byteForm_id
#print axioms byteForm_parseBytes_id

end LeanFtml
