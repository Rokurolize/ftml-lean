import LeanFtml.FormRawRules
import LeanFtml.RawScanProof

set_option maxHeartbeats 1000000

/-! # RawCrosslineProof — the general cross-line Raw body-claim law

This lane proves the universal cross-line span law over an arbitrary non-empty body with no `@` and no interior LF, one terminal LF, and a closer run of `c ≥ 2` `@` bytes. The mirror claims the body bytes and emits the closer surplus. All helper names are `rx_`-prefixed and all theorems are axiom-audited at the foot of the file. No ground pins, no `sorry`, no native decision procedures live here.
-/

namespace LeanFtml
open RawScan
namespace RawCrossline

/-- Dropping the last byte of a list with one byte appended restores the original list. -/
theorem rx_dropLast_append_singleton (l : List Nat) (a : Nat) :
    (l ++ [a]).dropLast = l := by
  induction l with
  | nil => rfl
  | cons y ys ih =>
    cases ys with
    | nil => simp
    | cons z zs => simpa using ih

/-- The last byte of a list with one byte appended is that appended byte. -/
theorem rx_getLast_append_singleton (l : List Nat) (a : Nat) :
    (l ++ [a]).getLast? = some a := by
  induction l with
  | nil => rfl
  | cons y ys ih =>
    cases ys with
    | nil => simp
    | cons z zs => simpa using ih

/-- A Bool `contains` is false exactly when the byte is absent from the list. -/
theorem rx_contains_false_of_not_mem (a : Nat) (l : List Nat) (h : a ∉ l) :
    l.contains a = false := by
  induction l with
  | nil => rfl
  | cons y ys ih =>
    have hy : y ≠ a := by
      intro e
      exact h (by simp [e])
    have hys : a ∉ ys := by
      intro hm
      exact h (by simp [hm])
    simp [Ne.symm hy, hys]

/-- The mirror's `textVal` takes the string branch when byte 0xFF is absent. -/
theorem rx_textVal_str_of_no_ff (l : List Nat) (h : 255 ∉ l) :
    textVal l = OptVal.str (utf8Decode l) := by
  unfold textVal
  rw [rx_contains_false_of_not_mem 255 l h]
  simp

/-- The general cross-line body-claim law: an opener of exactly two `@` bytes, an `@`-free and LF-free nonempty body, one terminal LF, and a closer run of `c ≥ 2` bytes claim the body and emit `c - 2` surplus bytes. The token option is the mirror's own `textVal`, so no restriction on 0xFF is needed. -/
theorem rx_xline_claim (mid : List Nat) (c : Nat) (toks : List TokenEntry) (fuel : Nat)
    (hmid64 : 64 ∉ mid) (hmid10 : 10 ∉ mid) (hmidne : mid ≠ [])
    (hc : 2 ≤ c) (hfuel : 1 ≤ fuel) :
    rawScan none ([64, 64] ++ mid ++ [10] ++ List.replicate c 64) toks fuel =
      (phBytes toks.length ++
        (if 2 < c then 32 :: List.replicate (c - 2) 64 else []),
       toks ++ [rs_rawTextToken mid]) := by
  rcases fuel with _ | fuel
  · omega
  cases mid with
  | nil => simp at hmidne
  | cons x xs =>
    have hx64 : x ≠ 64 := rs_ne_head_byte hmid64
    have hxs64 : 64 ∉ xs := rs_not_mem_tail hmid64
    have hx10 : x ≠ 10 := rs_ne_head_byte hmid10
    have hxs10 : 10 ∉ xs := rs_not_mem_tail hmid10
    have hcount : countRun 64 (64 :: 64 :: x :: (xs ++ 10 :: List.replicate c 64)) = 2 := by
      have h := rs_countRun_at_append 2 (x :: (xs ++ 10 :: List.replicate c 64))
        (by simp [hx64])
      simpa using h
    have hdrop2 : (64 :: 64 :: x :: (xs ++ 10 :: List.replicate c 64)).drop 2 =
        x :: (xs ++ 10 :: List.replicate c 64) := by
      simp
    have hpairFree : 64 ∉ (x :: xs) ++ [10] := by
      simpa using hmid64
    have hfind : findSub [64, 64] (x :: (xs ++ 10 :: List.replicate c 64)) =
        some (((x :: xs) ++ [10]).length) := by
      have h := rs_findSub_pair_append_run ((x :: xs) ++ [10]) c hpairFree hc
      simpa [List.append_assoc] using h
    have hcloseRun : countRun 64 (List.replicate c 64) = c := rs_countRun_replicate 64 c
    have hdropClose : (List.replicate c 64).drop c = ([] : List Nat) := by
      simp
    have hgetLast : (x :: (xs ++ [10])).getLast? = some 10 := by
      simpa using (rx_getLast_append_singleton (x :: xs) 10)
    have hdropLast : (x :: (xs ++ [10])).dropLast = x :: xs := by
      simpa using (rx_dropLast_append_singleton (x :: xs) 10)
    have hno10tail : (x :: (xs ++ [10])).dropLast.contains 10 = false := by
      rw [hdropLast]
      exact rx_contains_false_of_not_mem 10 (x :: xs) hmid10
    have htakeN : List.take (xs.length + 1) (xs ++ 10 :: List.replicate c 64) =
        xs ++ [10] := by
      have h : List.take ((xs ++ [10]).length) ((xs ++ [10]) ++ List.replicate c 64) =
          xs ++ [10] := List.take_left
      simpa [List.append_assoc] using h
    have hclaim : claimText "Raw" (x :: xs) toks =
        (phBytes toks.length, toks ++ [rs_rawTextToken (x :: xs)]) :=
      rs_claim_raw_text (x :: xs) toks
    simp [rawScan, hcount, hdrop2, hfind, htakeN, hcloseRun, hdropClose,
      hgetLast, hdropLast, Ne.symm hx10, hxs10, rs_rawScan_nil, hclaim, hc]

/-- The exact requested form of the cross-line claim: when 0xFF is absent from the body, the claimed option is `OptVal.str (utf8Decode mid)`. This is a plain corollary of `rx_xline_claim` and the decoder lemma. -/
theorem rx_xline_claim_str (mid : List Nat) (c : Nat) (toks : List TokenEntry) (fuel : Nat)
    (hmid64 : 64 ∉ mid) (hmid10 : 10 ∉ mid) (hmidff : 255 ∉ mid) (hmidne : mid ≠ [])
    (hc : 2 ≤ c) (hfuel : 1 ≤ fuel) :
    rawScan none ([64, 64] ++ mid ++ [10] ++ List.replicate c 64) toks fuel =
      (phBytes toks.length ++
        (if 2 < c then 32 :: List.replicate (c - 2) 64 else []),
       toks ++ [TokenEntry.mk "Raw" [("text".toList, OptVal.str (utf8Decode mid))]]) := by
  rw [rx_xline_claim mid c toks fuel hmid64 hmid10 hmidne hc hfuel]
  unfold rs_rawTextToken textVal
  rw [rx_contains_false_of_not_mem 255 mid hmidff]
  simp

/-- The empty-body cross-line surplus law restated in this namespace: a two-byte opener, one LF and a closer run of `c ≥ 2` bytes emit only the closer surplus and claim no token. It complements the nonempty-body law and is independent of it. -/
theorem rx_xline_empty_surplus (c : Nat) (toks : List TokenEntry) (fuel : Nat)
    (hc : 2 ≤ c) (hfuel : 1 ≤ fuel) :
    rawScan none ([64, 64, 10] ++ List.replicate c 64) toks fuel =
      (32 :: (if 2 < c then 32 :: List.replicate (c - 2) 64 else []), toks) :=
  rs_xline_empty c toks fuel hc hfuel

#print axioms rx_dropLast_append_singleton
#print axioms rx_getLast_append_singleton
#print axioms rx_contains_false_of_not_mem
#print axioms rx_textVal_str_of_no_ff
#print axioms rx_xline_claim
#print axioms rx_xline_claim_str
#print axioms rx_xline_empty_surplus

end RawCrossline
end LeanFtml
