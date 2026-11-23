import LeanFtml.FormRawRules

/-!
# RawBridgeProof — rule-level emit laws for the Raw family
This module proves only emit-side, structure-revealing facts about the rule-level byte bridge of `rawRule` and `rawoldRule`.
The Tier-1 round trip `parseBytes (byteForm segs) = normSegs segs` is a named coordinator foundation item (F1) and is deliberately not attempted here.
Every statement below is general and free of ground case pins.
-/

namespace LeanFtml

namespace RawBridge

/-! ## Transparency of the rule-level byte bridge -/

/-- The work field of any byte-rule application is the parse of the scanner's emitted bytes. -/
theorem rb_applyByteRule_work (st : ParseState) (f : List Nat → List TokenEntry → List Nat × List TokenEntry) :
    (applyByteRule st f).work = parseBytes (f (byteForm st.work) st.tokens).1 := by
  simp [applyByteRule]

/-- The token field of any byte-rule application is exactly the scanner's emitted table. -/
theorem rb_applyByteRule_tokens (st : ParseState) (f : List Nat → List TokenEntry → List Nat × List TokenEntry) :
    (applyByteRule st f).tokens = (f (byteForm st.work) st.tokens).2 := by
  simp [applyByteRule]

/-- A byte-rule application leaves the document state untouched. -/
theorem rb_applyByteRule_doc (st : ParseState) (f : List Nat → List TokenEntry → List Nat × List TokenEntry) :
    (applyByteRule st f).doc = st.doc := by
  rfl

/-- A byte-rule application leaves the fatal flag untouched. -/
theorem rb_applyByteRule_fatal (st : ParseState) (f : List Nat → List TokenEntry → List Nat × List TokenEntry) :
    (applyByteRule st f).fatal = st.fatal := by
  rfl

/-- A byte-rule application leaves the continuation-lead side channel untouched. -/
theorem rb_applyByteRule_leads (st : ParseState) (f : List Nat → List TokenEntry → List Nat × List TokenEntry) :
    (applyByteRule st f).continuedDivLeads = st.continuedDivLeads := by
  rfl

/-- `rawRule` is `applyByteRule` applied to the Raw scanner at fuel `src.length + 1`. -/
theorem rb_rawRule_eq (st : ParseState) :
    rawRule st = applyByteRule st (fun src toks => rawScan none src toks (src.length + 1)) := by
  rfl

/-- `rawoldRule` is `applyByteRule` applied to the Rawold scanner at fuel `src.length + 1`. -/
theorem rb_rawoldRule_eq (st : ParseState) :
    rawoldRule st = applyByteRule st (fun src toks => rawoldScan none src toks (src.length + 1)) := by
  rfl

/-- The work field of `rawRule`, expanded. -/
theorem rb_rawRule_work (st : ParseState) :
    (rawRule st).work = parseBytes (rawScan none (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).1 := by
  simp [rb_rawRule_eq, rb_applyByteRule_work]

/-- The token field of `rawRule`, expanded. -/
theorem rb_rawRule_tokens (st : ParseState) :
    (rawRule st).tokens = (rawScan none (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).2 := by
  simp [rb_rawRule_eq, rb_applyByteRule_tokens]

/-- The work field of `rawoldRule`, expanded. -/
theorem rb_rawoldRule_work (st : ParseState) :
    (rawoldRule st).work = parseBytes (rawoldScan none (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).1 := by
  simp [rb_rawoldRule_eq, rb_applyByteRule_work]

/-- The token field of `rawoldRule`, expanded. -/
theorem rb_rawoldRule_tokens (st : ParseState) :
    (rawoldRule st).tokens = (rawoldScan none (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).2 := by
  simp [rb_rawoldRule_eq, rb_applyByteRule_tokens]

/-! ## Placeholder bytes are the byte form of a token segment -/

/-- A placeholder byte string is exactly the byte form of the corresponding token segment. -/
theorem rb_phBytes_eq_segBytes (k : Nat) : phBytes k = segBytes (TSeg.tok k) := by
  rfl

/-- A placeholder byte string has positive length. -/
theorem rb_phBytes_length_pos (k : Nat) : 0 < (phBytes k).length := by
  simp [phBytes]

/-- Claiming a text appends exactly one token entry, so the claimed index is the new entry's position. -/
theorem rb_claimText_index (rule : String) (text : List Nat) (toks : List TokenEntry) :
    (claimText rule text toks).2.length = toks.length + 1 := by
  simp [claimText]

/-- The placeholder returned by a claim indexes the entry that claim just appended. -/
theorem rb_claimText_ph (rule : String) (text : List Nat) (toks : List TokenEntry) :
    (claimText rule text toks).1 = phBytes toks.length := by
  rfl

/-! ## Decimal digits of a placeholder -/

/-- Every byte of the decimal rendering of `k` is an ASCII decimal digit byte. -/
theorem rb_toString_digit_bytes (k : Nat) :
    ∀ d ∈ (toString k).toList.map Char.toNat, 48 ≤ d ∧ d ≤ 57 := by
  intro d hd
  rcases List.mem_map.mp hd with ⟨c, hc, rfl⟩
  have hc' : c ∈ Nat.toDigits 10 k := by
    simpa [Nat.toString_eq_ofList_toDigits] using hc
  have hcbool : c.isDigit := Nat.isDigit_of_mem_toDigits (b := 10) (n := k) (by decide) (by decide) hc'
  have hcprop : '0'.toNat ≤ c.toNat ∧ c.toNat ≤ '9'.toNat := Char.isDigit_iff_toNat.mp hcbool
  simpa using hcprop

/-- Folding the byte rendering of `k` in base ten recovers `k`; this bridges the mirror's byte fold to the core library's verified decimal parser. -/
theorem rb_fold_eq_ofDigitChars (l : List Char) (init : Nat) :
    (l.map Char.toNat).foldl (fun a d => a * 10 + (d - 48)) init =
      Nat.ofDigitChars 10 l init := by
  induction l generalizing init with
  | nil => rfl
  | cons c cs ih =>
      simp [Nat.ofDigitChars_cons, ih, Nat.mul_comm]

/-- The decimal digits of `k`, read by the mirror's fold, evaluate back to `k`. -/
theorem rb_decimal_fold (k : Nat) :
    ((toString k).toList.map Char.toNat).foldl (fun a d => a * 10 + (d - 48)) 0 = k := by
  rw [rb_fold_eq_ofDigitChars]
  rw [Nat.toString_eq_ofList_toDigits, String.toList_ofList]
  exact Nat.ofDigitChars_ten_toDigits

/-- The digit and fold facts restated on `Nat.toDigits 10 k`, the normal form `simp` reaches from `toString`. -/
theorem rb_toDigits_digit_bytes (k : Nat) :
    ∀ d ∈ (Nat.toDigits 10 k).map Char.toNat, 48 ≤ d ∧ d ≤ 57 := by
  simpa [Nat.toString_eq_ofList_toDigits] using rb_toString_digit_bytes k

/-- The fold fact restated on `Nat.toDigits 10 k`. -/
theorem rb_toDigits_decimal_fold (k : Nat) :
    ((Nat.toDigits 10 k).map Char.toNat).foldl (fun a d => a * 10 + (d - 48)) 0 = k := by
  simpa [Nat.toString_eq_ofList_toDigits, String.toList_ofList] using rb_decimal_fold k

/-- Dropping a prefix of exactly its own length leaves the suffix. -/
theorem rb_drop_prefix (pre suf : List Nat) : (pre ++ suf).drop pre.length = suf := by
  induction pre with
  | nil => simp
  | cons p ps ih => simp [ih]

/-- Taking while the byte is a decimal digit stops exactly at the 0xFF delimiter that follows the digits. -/
theorem rb_takeWhile_digits_ff (D rest : List Nat) (hD : ∀ d ∈ D, 48 ≤ d ∧ d ≤ 57) :
    (D ++ 0xFF :: rest).takeWhile (fun b => 48 ≤ b && b ≤ 57) = D := by
  induction D with
  | nil => simp
  | cons d ds ih =>
      have hd : 48 ≤ d ∧ d ≤ 57 := hD d (by simp)
      have hds : ∀ x ∈ ds, 48 ≤ x ∧ x ≤ 57 := by
        intro x hx
        exact hD x (by simp [hx])
      simp [hd.1, hd.2, ih hds]

/-! ## Reading placeholders back -/

/-- Reading a well-formed placeholder body with explicit digit, fold, and nonemptiness hypotheses. -/
theorem rb_readPlaceholder_head (D rest : List Nat) (k : Nat)
    (hD : ∀ d ∈ D, 48 ≤ d ∧ d ≤ 57)
    (hfold : D.foldl (fun a d => a * 10 + (d - 48)) 0 = k)
    (hpos : 0 < D.length) :
    readPlaceholder (0xFF :: (D ++ 0xFF :: rest)) = some (k, rest) := by
  have htake : (D ++ 0xFF :: rest).takeWhile (fun b => 48 ≤ b && b ≤ 57) = D :=
    rb_takeWhile_digits_ff D rest hD
  have hne : D.isEmpty = false := by
    cases D with
    | nil => simp at hpos
    | cons d ds => rfl
  unfold readPlaceholder
  simp [htake, hne, rb_drop_prefix D (0xFF :: rest), hfold]

/-- A placeholder followed by arbitrary bytes decodes as the claimed index and the untouched suffix. -/
theorem rb_readPlaceholder_phBytes (k : Nat) (rest : List Nat) :
    readPlaceholder (phBytes k ++ rest) = some (k, rest) := by
  have hpos : 0 < ((toString k).toList.map Char.toNat).length := by
    simpa [Nat.toString_eq_ofList_toDigits, String.toList_ofList] using
      (Nat.length_toDigits_pos (b := 10) (n := k))
  rw [phBytes]
  simp only [List.cons_append, List.nil_append, List.append_assoc]
  exact rb_readPlaceholder_head ((toString k).toList.map Char.toNat) rest k
    (rb_toString_digit_bytes k) (rb_decimal_fold k) hpos

/-- The placeholder produced by any Raw-family claim decodes back at the head of the rewritten byte string. -/
theorem rb_readPlaceholder_claim (rule : String) (text : List Nat) (toks : List TokenEntry) (rest : List Nat) :
    readPlaceholder ((claimText rule text toks).1 ++ rest) = some (toks.length, rest) := by
  rw [rb_claimText_ph]
  exact rb_readPlaceholder_phBytes toks.length rest

/-! ## Placeholders are inert to the Raw scanner -/

/-- A placeholder byte string never contains the `@` byte (64): its end bytes are 0xFF and its interior bytes are decimal digits 48 through 57. -/
theorem rb_phBytes_no_at (k : Nat) : 64 ∉ phBytes k := by
  intro h
  rw [phBytes] at h
  simp only [List.mem_append, List.mem_singleton] at h
  rcases h with h | h
  · rcases h with h | h
    · omega
    · have hd := rb_toString_digit_bytes k 64 h
      omega
  · omega

/-- The Raw scanner copies a lone placeholder through unchanged when fuel suffices; placeholders cannot open a span. -/
theorem rb_rawScan_phBytes_passthrough (k : Nat) (prev : Option Nat) (toks : List TokenEntry) (fuel : Nat)
    (hf : (phBytes k).length ≤ fuel) :
    rawScan prev (phBytes k) toks fuel = (phBytes k, toks) :=
  rawScan_no_at fuel prev (phBytes k) toks (rb_phBytes_no_at k) hf

/-! ## The emit side of `parseBytes` -/

/-- With no following bytes, a placeholder parses to exactly one token segment. -/
theorem rb_parseBytes_phBytes (k : Nat) : parseBytes (phBytes k) = [TSeg.tok k] := by
  have hpos : 0 < ((Nat.toDigits 10 k).map Char.toNat).length := by
    simpa using (Nat.length_toDigits_pos (b := 10) (n := k))
  simp [parseBytes, parseBytes.go, phBytes]
  rw [rb_readPlaceholder_head ((Nat.toDigits 10 k).map Char.toNat) [] k
    (rb_toDigits_digit_bytes k) (rb_toDigits_decimal_fold k) hpos]
  rfl

/-- Unfolding one step of the parse makes the claimed token segment explicit at the head; the suffix keeps its own fuel. -/
theorem rb_parseBytes_phBytes_step (k : Nat) (rest : List Nat) :
    parseBytes (phBytes k ++ rest) =
      parseBytes.go rest [] [TSeg.tok k] ((phBytes k ++ rest).length) := by
  have hpos : 0 < ((Nat.toDigits 10 k).map Char.toNat).length := by
    simpa using (Nat.length_toDigits_pos (b := 10) (n := k))
  simp [parseBytes, parseBytes.go, phBytes]
  rw [rb_readPlaceholder_head ((Nat.toDigits 10 k).map Char.toNat) rest k
    (rb_toDigits_digit_bytes k) (rb_toDigits_decimal_fold k) hpos]

#print axioms rb_applyByteRule_work
#print axioms rb_applyByteRule_tokens
#print axioms rb_applyByteRule_doc
#print axioms rb_applyByteRule_fatal
#print axioms rb_applyByteRule_leads
#print axioms rb_rawRule_eq
#print axioms rb_rawoldRule_eq
#print axioms rb_rawRule_work
#print axioms rb_rawRule_tokens
#print axioms rb_rawoldRule_work
#print axioms rb_rawoldRule_tokens
#print axioms rb_phBytes_eq_segBytes
#print axioms rb_phBytes_length_pos
#print axioms rb_claimText_index
#print axioms rb_claimText_ph
#print axioms rb_toString_digit_bytes
#print axioms rb_fold_eq_ofDigitChars
#print axioms rb_decimal_fold
#print axioms rb_toDigits_digit_bytes
#print axioms rb_toDigits_decimal_fold
#print axioms rb_drop_prefix
#print axioms rb_takeWhile_digits_ff
#print axioms rb_readPlaceholder_head
#print axioms rb_readPlaceholder_phBytes
#print axioms rb_readPlaceholder_claim
#print axioms rb_phBytes_no_at
#print axioms rb_rawScan_phBytes_passthrough
#print axioms rb_parseBytes_phBytes
#print axioms rb_parseBytes_phBytes_step

end RawBridge

end LeanFtml
