/-
  LeanFtml.Proof.ByteBridge — Wave 3 composition lane, task-4 (bridge assessment).

  This file proves GENUINE NARROW instances of the two F1 headline byte-bridge obligations recorded unproved at LeanFtml/TokenStateProof.lean:158-167: parseBytes_byteForm_id (segs) (n) (h : WFSegs segs n) : parseBytes (byteForm segs) = segs, and byteForm_parseBytes_id (bs) (n) (h : WFBytes bs n) : byteForm (parseBytes bs) = bs.

  The narrow classes proved here are (a) segment lists made only of token references, and (b) a single nonempty all-ASCII text segment. Both are instances of WFSegs whose byte form contains no non-ASCII UTF-8 sequence, so the list-level UTF-8 round trip that blocks the full obligations is not needed for them. No untrusted axioms or placeholder tactics are used; every theorem below rests on main results already in this tree. Prose is written on single lines, per the programme's convention.
-/
import LeanFtml.TokenState
import LeanFtml.FormRawRules
import LeanFtml.ByteCore
import LeanFtml.TokenStateProof
import LeanFtml.RawBridgeProof
import LeanFtml.DivAttrId

namespace LeanFtml.Proof.ByteBridge

set_option maxHeartbeats 1000000

/-! ## The ASCII instance of the list-level UTF-8 round trip -/

/-- The mirror's `utf8Bytes` collapses to the identity byte map on an ASCII character list. Main-equivalent to the singleton form in `ByteCore.utf8Decode_utf8Bytes` but proved by direct computation here. -/
private theorem flatMap_utf8Bytes_ascii (cs : List Char) (h : ∀ c ∈ cs, c.toNat < 0x80) :
    cs.flatMap utf8Bytes = cs.map (fun c => c.toNat) := by
  induction cs with
  | nil => rfl
  | cons c cs ih =>
      have hc : c.toNat < 0x80 := h c (by simp)
      have hcs : ∀ x ∈ cs, x.toNat < 0x80 := by intro x hx; exact h x (by simp [hx])
      simp [utf8Bytes, hc, ih hcs]

/-- The first blocker lemma, discharged for all-ASCII input: `utf8Decode (cs.flatMap utf8Bytes) = cs`. It is the exact ASCII restriction of the missing general list-level round trip named in the `TokenStateProof` header. -/
theorem utf8Decode_flatMap_ascii (cs : List Char) (h : ∀ c ∈ cs, c.toNat < 0x80) :
    utf8Decode (cs.flatMap utf8Bytes) = cs := by
  rw [flatMap_utf8Bytes_ascii cs h, utf8Decode_ascii]
  · rw [List.map_map]
    apply List.map_id''
    intro c
    simp [Function.comp, Char.ofNat_toNat]
  · intro b hb
    rcases List.mem_map.mp hb with ⟨c, hc, rfl⟩
    exact h c hc

/-! ## Structural facts about `parseBytes.go` -/

/-- On a byte stretch with no 0xFF delimiter, `parseBytes.go` accumulates the bytes in reverse and emits a single text segment decoded from their forward order. The hypothesis `hfuel` is the standard "fuel at least the remaining length" invariant. -/
private theorem go_no_ff (bs acc : List Nat) (segs : List TSeg) (fuel : Nat)
    (hfuel : bs.length ≤ fuel) (hnoff : 0xFF ∉ bs) :
    parseBytes.go bs acc segs fuel =
      normSegs (segs ++ (if (acc.reverse ++ bs).isEmpty then []
        else [TSeg.text (utf8Decode (acc.reverse ++ bs))])) := by
  induction bs generalizing acc segs fuel with
  | nil => simp [parseBytes.go]
  | cons b rest ih =>
      cases fuel with
      | zero => simp at hfuel
      | succ f =>
        have hbff : b ≠ 0xFF := by intro hb; exact hnoff (by simp [hb])
        have hrestnoff : 0xFF ∉ rest := by intro hb; exact hnoff (by simp [hb])
        have hfuel' : rest.length ≤ f := by simpa using hfuel
        simp [parseBytes.go, hbff]
        rw [ih (b :: acc) segs f hfuel' hrestnoff]
        simp [List.reverse_cons, List.append_assoc]

/-- At a well-formed placeholder the accumulator text is flushed and one token segment is emitted, with the suffix keeping its own fuel. This is the accumulator/segment-prefix generalisation of main's `RawBridge.rb_parseBytes_phBytes_step`. -/
private theorem go_token_step (k : Nat) (rest acc : List Nat) (segs : List TSeg) (f : Nat) :
    parseBytes.go (phBytes k ++ rest) acc segs (f + 1) =
      parseBytes.go rest []
        (segs ++ (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)]) ++ [TSeg.tok k]) f := by
  have hpos : 0 < ((Nat.toDigits 10 k).map Char.toNat).length := by
    simpa using (Nat.length_toDigits_pos (b := 10) (n := k))
  simp [parseBytes.go, phBytes]
  rw [RawBridge.rb_readPlaceholder_head ((Nat.toDigits 10 k).map Char.toNat) rest k
    (RawBridge.rb_toDigits_digit_bytes k) (RawBridge.rb_toDigits_decimal_fold k) hpos]

/-! ## Narrowing 1: token-only segment lists -/

/-- A token-only list has no UTF-8 at all, so `parseBytes.go` can be evaluated by repeatedly applying the placeholder step; the emitted list is already canonical. -/
private theorem go_tokens (ks : List Nat) (acc : List Nat) (segs : List TSeg) (f : Nat)
    (hfuel : (ks.flatMap phBytes).length ≤ f) :
    parseBytes.go (ks.flatMap phBytes) acc segs f =
      normSegs (segs ++ (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)]) ++ ks.map TSeg.tok) := by
  induction ks generalizing acc segs f with
  | nil => simp [parseBytes.go]
  | cons k ks ih =>
      change parseBytes.go (phBytes k ++ ks.flatMap phBytes) acc segs f =
        normSegs (segs ++ (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)]) ++ (k :: ks).map TSeg.tok)
      change (phBytes k ++ ks.flatMap phBytes).length ≤ f at hfuel
      cases f with
      | zero =>
          simp only [List.length_append] at hfuel
          have hkpos : 0 < (phBytes k).length := RawBridge.rb_phBytes_length_pos k
          omega
      | succ f' =>
        have hfuel' : (ks.flatMap phBytes).length ≤ f' := by
          simp only [List.length_append] at hfuel
          have hkpos : 0 < (phBytes k).length := RawBridge.rb_phBytes_length_pos k
          omega
        rw [go_token_step]
        rw [ih [] (segs ++ (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)]) ++ [TSeg.tok k]) f' hfuel']
        simp [List.append_assoc]

/-- A token-reference list is already in canonical segment form. -/
private theorem normSegs_tokens (ks : List Nat) : normSegs (ks.map TSeg.tok) = ks.map TSeg.tok := by
  induction ks with
  | nil => rfl
  | cons k ks ih => simp [normSegs, ih]

/-- The byte form of a token-reference list is the flatMap of `phBytes`. -/
private theorem byteForm_tokens (ks : List Nat) : byteForm (ks.map TSeg.tok) = ks.flatMap phBytes := by
  induction ks with
  | nil => rfl
  | cons k ks ih =>
      change segBytes (TSeg.tok k) ++ byteForm (ks.map TSeg.tok) = phBytes k ++ ks.flatMap phBytes
      rw [ih]
      rfl

/-- First F1 obligation, narrowed to token-only segment lists. -/
theorem parseBytes_byteForm_id_of_toks (ks : List Nat) :
    parseBytes (byteForm (ks.map TSeg.tok)) = ks.map TSeg.tok := by
  unfold parseBytes
  rw [byteForm_tokens]
  rw [go_tokens ks [] [] ((ks.flatMap phBytes).length + 1) (by omega)]
  exact normSegs_tokens ks

/-- First F1 obligation, narrowed to an arbitrary WFSegs whose segments are all token references. -/
theorem parseBytes_byteForm_id_of_toks_WF (segs : List TSeg) (n : Nat) (h : WFSegs segs n)
    (hks : ∃ ks : List Nat, segs = ks.map TSeg.tok) :
    parseBytes (byteForm segs) = segs := by
  rcases hks with ⟨ks, rfl⟩
  exact parseBytes_byteForm_id_of_toks ks

/-- Second F1 obligation, narrowed to the byte form of a token-only segment list. -/
theorem byteForm_parseBytes_id_of_toks (ks : List Nat) :
    byteForm (parseBytes (ks.flatMap phBytes)) = ks.flatMap phBytes := by
  rw [← byteForm_tokens ks, parseBytes_byteForm_id_of_toks]

/-! ## Narrowing 2: a single all-ASCII text segment -/

/-- First F1 obligation, narrowed to one nonempty all-ASCII text segment. Nonemptiness is implied by WFSegs canonicality; it is stated explicitly to make the decode step exact. -/
theorem parseBytes_byteForm_id_of_ascii_text (cs : List Char)
    (h : ∀ c ∈ cs, c.toNat < 0x80) (hne : cs ≠ []) :
    parseBytes (byteForm [TSeg.text cs]) = [TSeg.text cs] := by
  rw [byteForm_text, flatMap_utf8Bytes_ascii cs h]
  let bs := cs.map (fun c => c.toNat)
  have hbsascii : ∀ b ∈ bs, b < 0x80 := by
    intro b hb
    rcases List.mem_map.mp hb with ⟨c, hc, rfl⟩
    exact h c hc
  have hnoff : 0xFF ∉ bs := by
    intro hb
    have := hbsascii 0xFF hb
    omega
  have hne_bs : bs.isEmpty = false := by
    cases cs with
    | nil => contradiction
    | cons c cs' => simp [bs]
  change parseBytes.go bs [] [] (bs.length + 1) = [TSeg.text cs]
  rw [go_no_ff bs [] [] (bs.length + 1) (by omega) hnoff]
  have hdec : utf8Decode bs = cs := by
    rw [utf8Decode_ascii bs hbsascii]
    simp [bs, List.map_map]
    apply List.map_id''
    intro c
    simp [Function.comp, Char.ofNat_toNat]
  simp [hne_bs, hdec, normSegs]

/-- First F1 obligation, narrowed to a WFSegs whose single text segment is nonempty and all-ASCII. -/
theorem parseBytes_byteForm_id_of_ascii_text_WF (segs : List TSeg) (n : Nat) (h : WFSegs segs n)
    (hcs : ∃ cs : List Char, segs = [TSeg.text cs] ∧ (∀ c ∈ cs, c.toNat < 0x80) ∧ cs ≠ []) :
    parseBytes (byteForm segs) = segs := by
  rcases hcs with ⟨cs, rfl, hascii, hne⟩
  exact parseBytes_byteForm_id_of_ascii_text cs hascii hne

/-- Second F1 obligation, narrowed to a single all-ASCII text segment's byte form. -/
theorem byteForm_parseBytes_id_of_ascii_text (cs : List Char)
    (h : ∀ c ∈ cs, c.toNat < 0x80) (hne : cs ≠ []) :
    byteForm (parseBytes (cs.flatMap utf8Bytes)) = cs.flatMap utf8Bytes := by
  rw [← byteForm_text cs, parseBytes_byteForm_id_of_ascii_text cs h hne]

/-- Single-token instance, restated directly from main's `RawBridge.rb_parseBytes_phBytes`. -/
theorem parseBytes_byteForm_id_of_single_tok (k : Nat) :
    parseBytes (byteForm [TSeg.tok k]) = [TSeg.tok k] := by
  simpa [byteForm, segBytes, phBytes] using RawBridge.rb_parseBytes_phBytes k

/-- Second F1 obligation, single-token byte string instance. -/
theorem byteForm_parseBytes_id_of_single_tok (k : Nat) :
    byteForm (parseBytes (phBytes k)) = phBytes k := by
  rw [RawBridge.rb_parseBytes_phBytes]
  simp [byteForm, segBytes, phBytes]

/-! ## Axiom audit -/

#print axioms utf8Decode_flatMap_ascii
#print axioms parseBytes_byteForm_id_of_toks
#print axioms byteForm_parseBytes_id_of_toks
#print axioms parseBytes_byteForm_id_of_ascii_text
#print axioms byteForm_parseBytes_id_of_ascii_text
#print axioms parseBytes_byteForm_id_of_single_tok
#print axioms byteForm_parseBytes_id_of_single_tok

end LeanFtml.Proof.ByteBridge
