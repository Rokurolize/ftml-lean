/-
  LeanFtml.ByteCore — F1 foundation unit (proof-base-v1 / ftml-lean 4bf28f7).

  This module is the single canonical home for the byte helpers that the
  mirror had duplicated across its rule scanners. It deliberately does NOT
  rewrite the mirror's List Nat representation: the existing rules keep
  their byte lists, and this module supplies the invariant layer
  (IsByteList / IsAsciiList) plus the UTF-8 and placeholder lemmas those
  rules need. The encoder is bridged to Lean 4.36.0's own
  Init.Data.String.Decode by utf8Bytes_length_core (the mirror's utf8Bytes
  is length-identical to String.utf8EncodeChar) and by the shared UTF-8
  standard that both implement; no Mathlib, no bv_decide, no native_decide.
  All theorem axioms are within [propext, Classical.choice, Quot.sound].

  Honest bound: utf8Decode_utf8Bytes is proved here for the Basic
  Multilingual Plane (c.toNat < 0x10000, i.e. the one-, two- and three-byte
  UTF-8 forms). The astral four-byte case is an explicit open obligation
  (see UNIT.md); it is not silently assumed.
-/
import LeanFtml.TokenState
import LeanFtml.FormRawRules
import LeanFtml.RenderCore
import Init.Data.String.Decode

namespace LeanFtml

/-! ## Canonical byte helpers (unification layer) -/

/-- A byte list: every entry is a Nat below 256. Bundled inside WFState. -/
def IsByteList (bs : List Nat) : Prop := ∀ b ∈ bs, b < 256

/-- An ASCII byte list: every entry is below 0x80. This is the boundary
    at which a UTF-8 stream may be split or spliced (utf8_no_ascii_split). -/
def IsAsciiList (bs : List Nat) : Prop := ∀ b ∈ bs, b < 0x80

/-- The canonical decimal digits of a token index, as ASCII bytes. This is
    the single definition of the \xFF<dec>\xFF placeholder interior: phBytes
    from FormRawRules is [0xFF] ++ decBytes n ++ [0xFF]. -/
def decBytes (n : Nat) : List Nat := (toString n).toList.map Char.toNat

theorem phBytes_eq (n : Nat) : phBytes n = [0xFF] ++ decBytes n ++ [0xFF] := by
  rfl

/-! ## UTF-8 round trips bridged to Init.Data.String.Decode -/

theorem utf8Valid_utf8Bytes (c : Char) : utf8Valid (utf8Bytes c) = true := by
  have hv := c.valid
  simp [UInt32.isValidChar, Nat.isValidChar] at hv
  by_cases h1 : c.toNat < 0x80
  · have hb : utf8Bytes c = [c.toNat] := by simp [utf8Bytes, h1]
    rw [hb]
    simp [utf8Valid, utf8Valid.go]
    omega
  · by_cases h2 : c.toNat < 0x800
    · have hb : utf8Bytes c = [0xC0 + c.toNat / 0x40, 0x80 + c.toNat % 0x40] := by
        simp [utf8Bytes, h1, h2]
      rw [hb]
      simp [utf8Valid, utf8Valid.go, isContByte]
      all_goals repeat' split
      all_goals omega
    · by_cases h3 : c.toNat < 0x10000
      · have hb : utf8Bytes c =
            [0xE0 + c.toNat / 0x1000, 0x80 + (c.toNat / 0x40) % 0x40,
             0x80 + c.toNat % 0x40] := by
          simp [utf8Bytes, h1, h2, h3]
        rw [hb]
        simp [utf8Valid, utf8Valid.go, isContByte]
        all_goals repeat' split
        all_goals omega
      · have hb : utf8Bytes c =
            [0xF0 + c.toNat / 0x40000, 0x80 + (c.toNat / 0x1000) % 0x40,
             0x80 + (c.toNat / 0x40) % 0x40, 0x80 + c.toNat % 0x40] := by
          simp [utf8Bytes, h1, h2, h3]
        rw [hb]
        simp [utf8Valid, utf8Valid.go, isContByte]
        all_goals repeat' split
        all_goals omega

/-- Decode-after-encode for one BMP character. The hypothesis bounds the
    character to the one-, two- and three-byte UTF-8 forms; the astral
    four-byte form is a documented open remainder. -/
theorem utf8Decode_utf8Bytes (c : Char) (hc : c.toNat < 0x10000) :
    utf8Decode (utf8Bytes c) = [c] := by
  have hv := c.valid
  simp [UInt32.isValidChar, Nat.isValidChar] at hv
  by_cases h1 : c.toNat < 0x80
  · have hb : utf8Bytes c = [c.toNat] := by simp [utf8Bytes, h1]
    rw [hb]
    simp [utf8Decode, utf8Decode.go, Char.ofNat_toNat]
  · by_cases h2 : c.toNat < 0x800
    · have hb : utf8Bytes c = [0xC0 + c.toNat / 0x40, 0x80 + c.toNat % 0x40] := by
        simp [utf8Bytes, h1, h2]
      rw [hb]
      have hm1 : (192 + c.toNat / 64) % 32 = c.toNat / 64 := by omega
      have hm2 : (128 + c.toNat) % 64 = c.toNat % 64 := by omega
      have hrec : (c.toNat / 64) * 64 + c.toNat % 64 = c.toNat := by omega
      simp [utf8Decode, utf8Decode.go, isContByte]
      all_goals repeat' split
      all_goals (rw [← Char.ofNat_toNat c]; simp [hm1, hm2, hrec]; try omega)
    · have hb : utf8Bytes c =
          [0xE0 + c.toNat / 0x1000, 0x80 + (c.toNat / 0x40) % 0x40,
           0x80 + c.toNat % 0x40] := by
        simp [utf8Bytes, h1, h2, hc]
      rw [hb]
      have hm1 : (224 + c.toNat / 4096) % 16 = c.toNat / 4096 := by omega
      have hm2 : (128 + c.toNat / 64) % 64 = (c.toNat / 64) % 64 := by omega
      have hm3 : (128 + c.toNat) % 64 = c.toNat % 64 := by omega
      have hrec : (c.toNat / 4096) * 4096 + ((c.toNat / 64) % 64) * 64 +
          c.toNat % 64 = c.toNat := by omega
      simp [utf8Decode, utf8Decode.go, isContByte]
      all_goals repeat' split
      all_goals (rw [← Char.ofNat_toNat c]; simp [hm1, hm2, hm3, hrec]; try omega)

/-- The mirror's per-character encoder has the same byte length as Lean
    4.36.0 core's verified encoder (Init.Data.String.Decode). -/
theorem utf8Bytes_length_core (c : Char) :
    (utf8Bytes c).length = (String.utf8EncodeChar c).length := by
  by_cases h1 : c.toNat < 0x80
  · have h1' : c.toNat <= 127 := by omega
    simp [utf8Bytes, String.utf8EncodeChar, h1, h1']
  · by_cases h2 : c.toNat < 0x800
    · have hn : ¬ c.toNat <= 127 := by omega
      have h2' : c.toNat <= 2047 := by omega
      simp [utf8Bytes, String.utf8EncodeChar, h1, h2, hn, h2']
    · by_cases h3 : c.toNat < 0x10000
      · have hn1 : ¬ c.toNat <= 127 := by omega
        have hn2 : ¬ c.toNat <= 2047 := by omega
        have h3' : c.toNat <= 65535 := by omega
        simp [utf8Bytes, String.utf8EncodeChar, h1, h2, h3, hn1, hn2, h3']
      · have hn1 : ¬ c.toNat <= 127 := by omega
        have hn2 : ¬ c.toNat <= 2047 := by omega
        have hn3 : ¬ c.toNat <= 65535 := by omega
        simp [utf8Bytes, String.utf8EncodeChar, h1, h2, h3, hn1, hn2, hn3]

theorem isByteList_utf8Bytes (c : Char) : IsByteList (utf8Bytes c) := by
  have hv := c.valid
  simp [UInt32.isValidChar, Nat.isValidChar] at hv
  unfold IsByteList
  by_cases h1 : c.toNat < 0x80
  · simp [utf8Bytes, h1]
    omega
  · by_cases h2 : c.toNat < 0x800
    · simp [utf8Bytes, h1, h2]
      omega
    · by_cases h3 : c.toNat < 0x10000
      · simp [utf8Bytes, h1, h2, h3]
        omega
      · simp [utf8Bytes, h1, h2, h3]
        omega

/-! ## utf8_no_ascii_split — UTF-8 transparency at ASCII boundaries -/

theorem utf8Valid_append_ascii (bs1 bs2 : List Nat) (h : IsAsciiList bs1) :
    utf8Valid (bs1 ++ bs2) = utf8Valid bs2 := by
  induction bs1 with
  | nil => simp
  | cons b rest ih =>
    have hb : b < 0x80 := h b (by simp)
    have hrest : IsAsciiList rest := by intro x hx; exact h x (by simp [hx])
    have hstep : utf8Valid.go (b :: (rest ++ bs2)) (rest.length + bs2.length + 1) =
          utf8Valid.go (rest ++ bs2) (rest.length + bs2.length) := by
      conv => lhs; unfold utf8Valid.go
      simp [hb]
    rw [show utf8Valid (b :: rest ++ bs2) =
        utf8Valid.go (rest ++ bs2) (rest.length + bs2.length) by
      simpa [utf8Valid, List.length_append] using hstep]
    simpa [utf8Valid] using ih hrest

theorem utf8_no_ascii_split (pre mid post : List Nat)
    (hpre : IsAsciiList pre) (hmid : IsAsciiList mid)
    (hv : utf8Valid (pre ++ mid ++ post) = true) :
    utf8Valid mid = true ∧ utf8Valid post = true := by
  have hv1 : utf8Valid (mid ++ post) = true := by
    rw [← utf8Valid_append_ascii pre (mid ++ post) hpre]
    simpa [List.append_assoc] using hv
  constructor
  · exact utf8Valid_ascii mid hmid
  · rw [utf8Valid_append_ascii mid post hmid] at hv1
    exact hv1

theorem utf8Valid_head_ff (bs : List Nat) : utf8Valid (0xFF :: bs) = false := by
  conv => lhs; unfold utf8Valid
  conv => lhs; unfold utf8Valid.go
  simp
  try omega

end LeanFtml
