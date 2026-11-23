/-
  LeanFtml.RawEquiv — composite emit laws and a processRef-shaped equivalence for the Raw family.
  This module proves the process() callback half of the Raw/Rawold boundary, machine-checked against the mirror's own claimText.
  The regex/scanner half is the mirror's own trusted (TCB-4) code and is taken as given here; it is not re-proved.
  There is no in-tree applyRuleRef or ProofInterface yet (foundation unit F1 has not landed), so the statement below is the processRef-shaped statement the current tree allows, not a full Boundary-B equivalence.
  Token-index shifting is deliberately left to the separate TokEquiv concern; the laws below only record that claim placeholders depend on toks.length.
  Every theorem here audits inside [propext, Classical.choice, Quot.sound] with no sorry, native_decide, bv_decide, or Lean.ofReduceBool.
-/

import LeanFtml.RawHeadingRules
import LeanFtml.FormRawRules

namespace LeanFtml
namespace RawEquiv

/-! ## Composite emit laws for renderRaw -/

/-- renderRaw is exactly its if-then-else characterization; this is the definition unfolded once. -/
theorem re_renderRaw_characterization (opts : OptMap) :
    renderRaw opts =
      if (optStrBytes opts "text".toList).isEmpty then []
      else litBytes "<span style=\"white-space: pre-wrap;\">" ++
        wikidotEscapeRaw (optStrBytes opts "text".toList) ++
        litBytes "</span>" := by
  rfl

/-- Elision: whenever the text option's bytes are empty, the composite renderer emits no bytes. -/
theorem re_renderRaw_elides_empty (opts : OptMap)
    (h : (optStrBytes opts "text".toList).isEmpty = true) :
    renderRaw opts = [] := by
  unfold renderRaw
  rw [ite_eq_left h]

/-- Emission: whenever the text option's bytes are nonempty, the composite renderer emits the fixed pre-wrap span around wikidotEscapeRaw of those bytes. -/
theorem re_renderRaw_emits_span (opts : OptMap)
    (h : (optStrBytes opts "text".toList).isEmpty = false) :
    renderRaw opts =
      litBytes "<span style=\"white-space: pre-wrap;\">" ++
      wikidotEscapeRaw (optStrBytes opts "text".toList) ++
      litBytes "</span>" := by
  unfold renderRaw
  rw [ite_eq_right (by
    intro ht
    rw [h] at ht
    contradiction)]

/-! ## wikidotEscapeRaw leaves '@' (byte 64) unchanged -/

/-- The escape table fixes the '@' byte to itself, by direct computation of the per-byte map. -/
theorem re_wikidotEscapeRawByte_at : wikidotEscapeRawByte 64 = [64] := by
  rfl

/-- The escape distributes over append, by induction on the prefix. -/
theorem re_wikidotEscapeRaw_append (xs ys : List Nat) :
    wikidotEscapeRaw (xs ++ ys) = wikidotEscapeRaw xs ++ wikidotEscapeRaw ys := by
  induction xs with
  | nil =>
      simp [wikidotEscapeRaw]
  | cons x xs ih =>
      change wikidotEscapeRawByte x ++ wikidotEscapeRaw (xs ++ ys) =
        (wikidotEscapeRawByte x ++ wikidotEscapeRaw xs) ++ wikidotEscapeRaw ys
      rw [ih, List.append_assoc]

/-- The escape of a lone '@' byte is the literal '@' byte. -/
theorem re_wikidotEscapeRaw_single_at : wikidotEscapeRaw [64] = [64] := by
  change wikidotEscapeRawByte 64 ++ wikidotEscapeRaw [] = [64]
  simp [re_wikidotEscapeRawByte_at, wikidotEscapeRaw]

/-- General flatMap law: appending an '@' byte to any byte list appends exactly one literal '@' to the escape, so escaped '@' bytes are preserved verbatim. -/
theorem re_wikidotEscapeRaw_at_append (bs : List Nat) :
    wikidotEscapeRaw (bs ++ [64]) = wikidotEscapeRaw bs ++ [64] := by
  rw [re_wikidotEscapeRaw_append, re_wikidotEscapeRaw_single_at]

/-! ## An empty Raw token produced by the composite scanner renders to no bytes -/

/-- The option map that claimText attaches to a claimed token. -/
def re_textOpts (text : List Nat) : OptMap :=
  [("text".toList, textVal text)]

/-- The token appended by claimText carries exactly re_textOpts as its options. -/
theorem re_claimText_token_opts (rule : String) (text : List Nat) (toks : List TokenEntry) :
    (claimText rule text toks).2 = toks ++ [{ rule := rule, opts := re_textOpts text }] := by
  rfl

/-- utf8Decode of the empty byte string is the empty character string. -/
theorem re_utf8Decode_nil : utf8Decode [] = [] := by
  rfl

/-- The text option of an empty claim computes to no bytes. -/
theorem re_emptyOptStrBytes :
    optStrBytes [("text".toList, textVal ([] : List Nat))] "text".toList = [] := by
  simp [optStrBytes, renderOptValBytes, textVal, omGet, re_utf8Decode_nil]

/-- An empty text value renders to no bytes: optStrBytes of the empty claim option map is empty, so renderRaw takes the elision branch. -/
theorem re_emptyRawToken_renders_nil :
    renderRaw [("text".toList, textVal ([] : List Nat))] = [] := by
  unfold renderRaw
  rw [ite_eq_left (by
    rw [re_emptyOptStrBytes]
    rfl)]

/-- The empty Raw token that the composite scanner appends via claimText "Raw" [] has options re_textOpts [], which renders to no bytes. -/
theorem re_composite_emptyRaw_renders_nil :
    renderRaw (re_textOpts []) = [] := by
  simpa [re_textOpts] using re_emptyRawToken_renders_nil

/-! ## processRef-shaped equivalence (process() callback half only) -/

/-- A locally defined PHP-shaped process() reference spec for the Raw family: claim one token whose only option is text, returning the placeholder bytes for the current token-table length and the extended table. -/
def re_processRef (rule : String) (text : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let idx := toks.length
  let opts : OptMap := [("text".toList, textVal text)]
  let tok : TokenEntry := { rule := rule, opts := opts }
  (phBytes idx, toks ++ [tok])

/-- The mirror's claimText for "Raw" equals the processRef spec. -/
theorem re_claimText_eq_processRef_raw (text : List Nat) (toks : List TokenEntry) :
    claimText "Raw" text toks = re_processRef "Raw" text toks := by
  rfl

/-- The mirror's claimText for "Rawold" equals the processRef spec. -/
theorem re_claimText_eq_processRef_rawold (text : List Nat) (toks : List TokenEntry) :
    claimText "Rawold" text toks = re_processRef "Rawold" text toks := by
  rfl

/-- The empty-text case: claimText with no text equals the processRef spec for any rule. -/
theorem re_claimText_eq_processRef_empty (rule : String) (toks : List TokenEntry) :
    claimText rule [] toks = re_processRef rule [] toks := by
  rfl

/-! ## General token-index law: placeholders depend only on toks.length -/

/-- The placeholder of a claim is definitionally phBytes of the current table length. -/
theorem re_claimText_ph_eq_phBytes (rule : String) (text : List Nat) (toks : List TokenEntry) :
    (claimText rule text toks).1 = phBytes toks.length := by
  rfl

/-- At a fixed table length n, the emitted placeholder is phBytes n regardless of rule and text. -/
theorem re_claimText_ph_len (n : Nat) (rule : String) (text : List Nat) (toks : List TokenEntry)
    (h : toks.length = n) :
    (claimText rule text toks).1 = phBytes n := by
  simp [claimText, h]

/-- Equal-length token tables give equal placeholders across arbitrary rules and texts; token-index shifting is a separate TokEquiv concern, not a process() concern. -/
theorem re_claimText_ph_independent (r₁ r₂ : String) (t₁ t₂ : List Nat)
    (toks₁ toks₂ : List TokenEntry) (hlen : toks₁.length = toks₂.length) :
    (claimText r₁ t₁ toks₁).1 = (claimText r₂ t₂ toks₂).1 := by
  simp [claimText, phBytes, hlen]

#print axioms re_renderRaw_characterization
#print axioms re_renderRaw_elides_empty
#print axioms re_renderRaw_emits_span
#print axioms re_wikidotEscapeRawByte_at
#print axioms re_wikidotEscapeRaw_append
#print axioms re_wikidotEscapeRaw_single_at
#print axioms re_wikidotEscapeRaw_at_append
#print axioms re_claimText_token_opts
#print axioms re_utf8Decode_nil
#print axioms re_emptyOptStrBytes
#print axioms re_emptyRawToken_renders_nil
#print axioms re_composite_emptyRaw_renders_nil
#print axioms re_claimText_eq_processRef_raw
#print axioms re_claimText_eq_processRef_rawold
#print axioms re_claimText_eq_processRef_empty
#print axioms re_claimText_ph_eq_phBytes
#print axioms re_claimText_ph_len
#print axioms re_claimText_ph_independent

end RawEquiv
end LeanFtml
