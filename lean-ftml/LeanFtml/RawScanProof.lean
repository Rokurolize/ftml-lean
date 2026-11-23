import LeanFtml.FormRawRules

set_option maxHeartbeats 1000000

/-! # RawScanProof — general universal laws for the Raw byte scanner

All theorems here quantify over arbitrary runs, bodies, lookbehinds and fuel. They are statements about the mirror's `rawScan`, `countRun`, `findSub`, `hasLaterQuad` and `rawSurplusClose` as they stand in `FormRawRules`. No ground case pins or bounded enumerations live here; those belong to other units. Every theorem is checked to audit inside `[propext, Classical.choice, Quot.sound]` at the foot of this file.
-/

namespace LeanFtml
namespace RawScan

/-- The Raw token whose single option is the empty text. -/
def rs_rawEmptyToken : TokenEntry :=
  { rule := "Raw", opts := [("text".toList, OptVal.str [])] }

/-- The Raw token whose single option is `text` for the given bytes. -/
def rs_rawTextToken (text : List Nat) : TokenEntry :=
  { rule := "Raw", opts := [("text".toList, textVal text)] }

/-- Lookbehind after copying `mid`: its last byte, else the incoming `prev`. -/
def rs_prevAfter (prev : Option Nat) : List Nat → Option Nat
  | [] => prev
  | b :: bs => rs_prevAfter (some b) bs

/-- `rawScan` on the empty source is the identity on the token table. -/
theorem rs_rawScan_nil (fuel : Nat) (prev : Option Nat) (toks : List TokenEntry) :
    rawScan prev [] toks fuel = ([], toks) := by
  cases fuel <;> simp [rawScan]

/-- A `Bool` disequality against `some n` is true. -/
theorem rs_option_bne_some {n : Nat} {p : Option Nat} (h : p ≠ some n) :
    (p != some n) = true := by
  cases p with
  | none => simp
  | some a =>
    have ha : a ≠ n := by
      intro e
      exact h (congrArg some e)
    simp [ha]

/-- An absent byte is not the head of a list. -/
theorem rs_ne_head_of_not_mem {b : Nat} {l : List Nat} (h : b ∉ l) :
    l.head? ≠ some b := by
  cases l with
  | nil => simp
  | cons x xs =>
    intro hx
    simp at hx
    exact h (by simp [hx])

/-- Absence from a cons transfers to its tail. -/
theorem rs_not_mem_tail {b x : Nat} {xs : List Nat} (h : b ∉ x :: xs) : b ∉ xs := by
  intro hm
  exact h (List.mem_cons_of_mem x hm)

/-- The head byte of a cons differs from an absent byte. -/
theorem rs_ne_head_byte {b x : Nat} {xs : List Nat} (h : b ∉ x :: xs) : x ≠ b := by
  intro hx
  exact h (by simp [hx])

/-- The last byte of a list absent of `b` is not `b`. -/
theorem rs_getLast?_ne_of_not_mem {b : Nat} {l : List Nat} (h : b ∉ l) :
    l.getLast? ≠ some b := by
  induction l with
  | nil => simp
  | cons x xs ih =>
    cases xs with
    | nil =>
      simp at h ⊢
      intro e
      exact h e.symm
    | cons y ys =>
      have htail : b ∉ y :: ys := rs_not_mem_tail h
      simpa using (ih htail)

/-- The maximal run at the head of `replicate n 64 ++ rest` is `n`. -/
theorem rs_countRun_at_append (n : Nat) (rest : List Nat)
    (h : rest.head? ≠ some 64) :
    countRun 64 (List.replicate n 64 ++ rest) = n := by
  induction n with
  | zero =>
    cases rest with
    | nil => simp [countRun]
    | cons x xs =>
      have hx : x ≠ 64 := by
        intro hx
        exact h (by simp [hx])
      simp [countRun, hx]
  | succ n ih =>
    simp [List.replicate_succ, countRun, ih]

/-- Dropping `n` bytes off `replicate n 64 ++ rest` leaves `rest`. -/
theorem rs_drop_replicate_append (n : Nat) (rest : List Nat) :
    (List.replicate n 64 ++ rest).drop n = rest := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp [List.replicate_succ, ih]

/-- The maximal run of `b` at the head of `replicate n b` is `n`. -/
theorem rs_countRun_replicate (b n : Nat) : countRun b (List.replicate n b) = n := by
  induction n with
  | zero => simp [countRun]
  | succ n ih => simp [List.replicate_succ, countRun, ih]

/-- A run of `n` `b` bytes before a tail contributes exactly `n` to the head run. -/
theorem rs_countRun_append (b : Nat) (n : Nat) (tail : List Nat) :
    countRun b (List.replicate n b ++ tail) = n + countRun b tail := by
  induction n with
  | zero => simp [countRun]
  | succ n ih =>
    simp [List.replicate_succ, countRun, ih, Nat.add_assoc, Nat.add_comm, Nat.add_left_comm]

/-- A pair of adjacent 64 bytes occurs at the head of a 64-run of length at least two. -/
theorem rs_findSub_pair_replicate (c : Nat) (hc : 2 ≤ c) :
    findSub [64, 64] (List.replicate c 64) = some 0 := by
  cases c with
  | zero => omega
  | succ c =>
    cases c with
    | zero => omega
    | succ c =>
      simp [findSub, List.replicate_succ]

/-- The pair `@@` first occurs at the head of the trailing run after an `@`-free prefix. -/
theorem rs_findSub_pair_append_run (mid : List Nat) (c : Nat)
    (hmid : 64 ∉ mid) (hc : 2 ≤ c) :
    findSub [64, 64] (mid ++ List.replicate c 64) = some mid.length := by
  induction mid with
  | nil =>
    simpa using (rs_findSub_pair_replicate c hc)
  | cons x xs ih =>
    have hx : x ≠ 64 := rs_ne_head_byte hmid
    have hxs : 64 ∉ xs := rs_not_mem_tail hmid
    have hstep : findSub [64, 64] (x :: xs ++ List.replicate c 64) =
        (findSub [64, 64] (xs ++ List.replicate c 64)).map (fun k => k + 1) := by
      simp [findSub, hx, Ne.symm hx]
    rw [hstep, ih hxs]
    simp

/-- The pair `bb` never occurs in a `b`-free list. -/
theorem rs_findSub_pair_absent (b : Nat) (l : List Nat) (h : b ∉ l) :
    findSub [b, b] l = none := by
  induction l with
  | nil =>
    unfold findSub
    rfl
  | cons x xs ih =>
    have hx : x ≠ b := rs_ne_head_byte h
    have hxs : b ∉ xs := rs_not_mem_tail h
    unfold findSub
    have htake : (List.take [b, b].length (x :: xs) == [b, b]) = false := by
      cases xs <;> simp [hx, Ne.symm hx]
    rw [htake]
    rw [ite_eq_right (by decide : ¬(false = true))]
    simp only [ih hxs, Option.map_none]

/-- A single absent byte never occurs as a one-byte pattern. -/
theorem rs_findSub_one_absent (b : Nat) (l : List Nat) (h : b ∉ l) :
    findSub [b] l = none := by
  induction l with
  | nil =>
    unfold findSub
    rfl
  | cons x xs ih =>
    have hx : x ≠ b := rs_ne_head_byte h
    have hxs : b ∉ xs := rs_not_mem_tail h
    unfold findSub
    have htake : (List.take [b].length (x :: xs) == [b]) = false := by
      simp [hx, Ne.symm hx]
    rw [htake]
    rw [ite_eq_right (by decide : ¬(false = true))]
    simp only [ih hxs, Option.map_none]

/-- `claimText "Raw" []` appends exactly one empty-text token. -/
theorem rs_claim_raw_empty (toks : List TokenEntry) :
    claimText "Raw" [] toks = (phBytes toks.length, toks ++ [rs_rawEmptyToken]) := by
  rfl

/-- `claimText "Raw" text` appends exactly one text token. -/
theorem rs_claim_raw_text (text : List Nat) (toks : List TokenEntry) :
    claimText "Raw" text toks = (phBytes toks.length, toks ++ [rs_rawTextToken text]) := by
  rfl

/-- A nonempty `replicate n 64` starts with one `@` byte. -/
theorem rs_replicate_at_cons (n : Nat) (rest : List Nat) (hn : 1 ≤ n) :
    List.replicate n 64 ++ rest = 64 :: (List.replicate (n - 1) 64 ++ rest) := by
  have hn' : n = (n - 1) + 1 := by omega
  rw [hn', List.replicate_succ]
  simp

/-- After peeling one `@` from a run of at least two, the head is still `@`. -/
theorem rs_head_after_at (n : Nat) (rest : List Nat) (hn : 2 ≤ n) :
    (List.replicate (n - 1) 64 ++ rest).head? = some 64 := by
  have h := rs_replicate_at_cons (n - 1) rest (by omega)
  rw [h]
  simp

/-! ## The bare-run threshold -/

/-- A bare run of `n ≤ 3` `@` bytes is copied literally and claims no token. -/
theorem rs_bare_below (n : Nat) (hn : n ≤ 3) :
    rawScan none (List.replicate n 64) [] (n + 1) = (List.replicate n 64, []) := by
  match n, hn with
  | 0, _ => simp [rawScan, List.replicate]
  | 1, _ => simp [rawScan, List.replicate]
  | 2, _ => simp [rawScan, List.replicate, countRun, findSub]
  | 3, _ => simp [rawScan, List.replicate, countRun, findSub]
  | n + 4, h => omega

/-- A run of `n ≥ 4` `@` bytes with an `@`-free tail emits one empty Raw token, then `n - 4` literal `@` bytes, then whatever the tail scan emits; the token table is threaded through the tail. -/
theorem rs_long_open
    (n : Nat) (rest : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (prev : Option Nat) (hn : 4 ≤ n) (hp : prev ≠ some 64) (hrest : 64 ∉ rest) :
    rawScan prev (List.replicate n 64 ++ rest) toks (fuel + 1) =
      (phBytes toks.length ++ List.replicate (n - 4) 64 ++
          (rawScan (some 64) rest (toks ++ [rs_rawEmptyToken]) fuel).1,
       (rawScan (some 64) rest (toks ++ [rs_rawEmptyToken]) fuel).2) := by
  have hsrc := rs_replicate_at_cons n rest (by omega)
  have hhead := rs_head_after_at n rest (by omega)
  have hpB := rs_option_bne_some (n := 64) hp
  have hangle :
      (64 == 64 && (List.replicate (n - 1) 64 ++ rest).head? == some 60 &&
        prev != some 64) = false := by
    simp [hhead]
  have hcond :
      (64 == 64 && (List.replicate (n - 1) 64 ++ rest).head? == some 64 &&
        prev != some 64) = true := by
    simp [hhead, hpB]
  have hcount := rs_countRun_at_append n rest (rs_ne_head_of_not_mem hrest)
  have hdrop := rs_drop_replicate_append n rest
  have hfind := rs_findSub_pair_absent 64 rest hrest
  rw [hsrc]
  have hcount' : countRun 64 (64 :: (List.replicate (n - 1) 64 ++ rest)) = n := by
    rw [← rs_replicate_at_cons n rest (by omega)]
    exact hcount
  have hdrop' :
      (64 :: (List.replicate (n - 1) 64 ++ rest)).drop
        (countRun 64 (64 :: (List.replicate (n - 1) 64 ++ rest))) = rest := by
    rw [hcount']
    rw [← rs_replicate_at_cons n rest (by omega)]
    exact hdrop
  have hclaim := rs_claim_raw_empty toks
  have hnot :
      (!(64 == 64 && (List.replicate (n - 1) 64 ++ rest).head? == some 64 &&
          prev != some 64)) = false := by
    rw [hcond]
    rfl
  have hne3 : (n == 3) = false := (beq_eq_false_iff_ne).mpr (by omega)
  have hdropN : (64 :: (List.replicate (n - 1) 64 ++ rest)).drop n = rest := by
    simpa [hcount'] using hdrop'
  simp only [rawScan, hangle, hnot, hcount', hdropN, hfind, hne3, hclaim]
  rw [ite_eq_right (by decide : ¬(false = true))]
  rw [ite_eq_right (by decide : ¬(false = true))]
  rw [ite_eq_left (by omega : n > 2)]
  have hd : decide (n > 2) = true := decide_eq_true (by omega)
  rw [hd]
  rw [ite_eq_left (by decide : (true && !false) = true)]
  rw [ite_eq_right (by decide : ¬(false = true))]

/-- The bare corollary of `rs_long_open`: a bare run of `n ≥ 4` `@` bytes is one empty token plus `n - 4` literal `@` bytes. -/
theorem rs_bare_above (n : Nat) (hn : 4 ≤ n) :
    rawScan none (List.replicate n 64) [] (n + 1) =
      (phBytes 0 ++ List.replicate (n - 4) 64, [rs_rawEmptyToken]) := by
  have h := rs_long_open n [] [] n none hn (by simp) (by simp)
  simp only [rs_rawScan_nil, List.append_nil, List.nil_append, List.length_nil] at h
  exact h

/-- Every bare run is literal below four and one empty token plus `n - 4` literals at or above four. -/
theorem rs_bare_threshold (n : Nat) :
    rawScan none (List.replicate n 64) [] (n + 1) =
      if n < 4 then (List.replicate n 64, [])
      else (phBytes 0 ++ List.replicate (n - 4) 64, [rs_rawEmptyToken]) := by
  by_cases hn : n < 4
  · rw [ite_eq_left hn]
    exact rs_bare_below n (by omega)
  · rw [ite_eq_right hn]
    exact rs_bare_above n (by omega)

/-- A bare run claims exactly one token if and only if its length is at least four. -/
theorem rs_bare_token_iff (n : Nat) :
    ((rawScan none (List.replicate n 64) [] (n + 1)).2.length = 1) ↔ 4 ≤ n := by
  rw [rs_bare_threshold]
  by_cases hn : n < 4
  · simp [hn]
  · simp [hn]
    omega

/-! ## Copying an `@`-free prefix / lookbehind propagation -/

/-- Before the first opener, an `@`-free prefix is copied verbatim and the lookbehind becomes its last byte. -/
theorem rs_rawScan_skip_no_at :
    ∀ (fuel : Nat) (prev : Option Nat) (mid rest : List Nat) (toks : List TokenEntry),
      64 ∉ mid → mid.length ≤ fuel →
      rawScan prev (mid ++ rest) toks fuel =
        (mid ++ (rawScan (rs_prevAfter prev mid) rest toks (fuel - mid.length)).1,
         (rawScan (rs_prevAfter prev mid) rest toks (fuel - mid.length)).2) := by
  intro fuel
  induction fuel with
  | zero =>
    intro prev mid rest toks hmem hf
    have : mid = [] := List.eq_nil_of_length_eq_zero (Nat.eq_zero_of_le_zero hf)
    simp [this, rs_prevAfter, rawScan]
  | succ fuel ih =>
    intro prev mid rest toks hmem hf
    cases mid with
    | nil => simp [rs_prevAfter]
    | cons x xs =>
      have hx : x ≠ 64 := rs_ne_head_byte hmem
      have hxs : 64 ∉ xs := rs_not_mem_tail hmem
      have hf' : xs.length ≤ fuel := by
        simp at hf
        omega
      have hangle :
          (x == 64 && (xs ++ rest).head? == some 60 && prev != some 64) = false := by
        simp [hx]
      have hcond :
          (x == 64 && (xs ++ rest).head? == some 64 && prev != some 64) = false := by
        simp [hx]
      have hstep := ih (some x) xs rest toks hxs hf'
      have hsub : fuel + 1 - (xs.length + 1) = fuel - xs.length := by omega
      have hnot :
          (!(x == 64 && (xs ++ rest).head? == some 64 && prev != some 64)) = true := by
        rw [hcond]
        rfl
      simp only [List.cons_append, rawScan, hangle, hnot, rs_prevAfter, hstep, List.length_cons]
      rw [hsub]
      rw [ite_eq_right (by decide : ¬(false = true))]
      rw [ite_eq_left (by trivial : True)]

/-- A long opener followed by a fully `@`-free tail emits exactly one empty token, `n - 4` literal `@` bytes and the copied tail. -/
theorem rs_long_open_copies
    (n : Nat) (rest : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (prev : Option Nat) (hn : 4 ≤ n) (hp : prev ≠ some 64) (hrest : 64 ∉ rest)
    (hf : rest.length ≤ fuel) :
    rawScan prev (List.replicate n 64 ++ rest) toks (fuel + 1) =
      (phBytes toks.length ++ List.replicate (n - 4) 64 ++ rest,
        toks ++ [rs_rawEmptyToken]) := by
  have h := rs_long_open n rest toks fuel prev hn hp hrest
  have hs := rs_rawScan_skip_no_at fuel (some 64) rest [] (toks ++ [rs_rawEmptyToken]) hrest hf
  simp only [List.append_nil, rs_rawScan_nil] at hs
  simp only [h, hs]

/-! ## General cross-line byte shaping -/

/-- The same cross-line shape with an empty trimmed body: a two-byte opener, one LF, and a closer run of `c ≥ 2` `@` bytes emit just the closer surplus (a single space at `c = 2`, otherwise a space plus `c - 2` literals) and claim no token. -/
theorem rs_xline_empty
    (c : Nat) (toks : List TokenEntry) (fuel : Nat)
    (hc : 2 ≤ c) (hfuel : 1 ≤ fuel) :
    rawScan none ([64, 64, 10] ++ List.replicate c 64) toks fuel =
      (32 :: (if 2 < c then 32 :: List.replicate (c - 2) 64 else []), toks) := by
  rcases fuel with _ | fuel
  · omega
  have hcount : countRun 64 (64 :: 64 :: 10 :: List.replicate c 64) = 2 := by
    have h := rs_countRun_at_append 2 (10 :: List.replicate c 64) (by simp)
    simpa using h
  have hdrop2 : (64 :: 64 :: 10 :: List.replicate c 64).drop 2 =
      10 :: List.replicate c 64 := by
    have h := rs_drop_replicate_append 2 (10 :: List.replicate c 64)
    simpa using h
  have hfind : findSub [64, 64] (10 :: List.replicate c 64) = some ([10] : List Nat).length :=
    rs_findSub_pair_append_run [10] c (by simp) hc
  have htake : (10 :: List.replicate c 64).take ([10] : List Nat).length = [10] :=
    List.take_left
  have hdrop : (10 :: List.replicate c 64).drop ([10] : List Nat).length =
      List.replicate c 64 := List.drop_left
  have hcloseRun : countRun 64 (List.replicate c 64) = c := rs_countRun_replicate 64 c
  have hdropClose : (List.replicate c 64).drop c = ([] : List Nat) := by
    simpa using (rs_drop_replicate_append c ([] : List Nat))
  have hgetLast : ([10] : List Nat).getLast? = some 10 := by rfl
  have hdropLast : ([10] : List Nat).dropLast = ([] : List Nat) := by rfl
  have hno10tail : ([] : List Nat).contains 10 = false := by rfl
  have hresthead : (64 :: (10 :: List.replicate c 64)).head? = some 64 := rfl
  have hcond :
      (64 == 64 && (64 :: (10 :: List.replicate c 64)).head? == some 64 &&
        none != some 64) = true := by
    simp [hresthead]
  have hnotcond :
      (!(64 == 64 && (64 :: (10 :: List.replicate c 64)).head? == some 64 &&
          none != some 64)) = false := by
    rw [hcond]
    rfl
  simp [rawScan, hnotcond, hcount, hdrop2, hfind, htake, hdrop, hcloseRun,
    hdropClose, hgetLast, hdropLast, hno10tail, rs_rawScan_nil, hc]

/-! ## How `hasLaterQuad` and `rawSurplusClose` bound the domain -/

/-- `hasLaterQuad` scans only up to the first LF: an `@`-free prefix before an LF cannot contain a later quad. -/
theorem rs_hasLaterQuad_go_no_at (fuel : Nat) (pre : List Nat) (tail : List Nat)
    (hpre : 64 ∉ pre) (hfuel : pre.length ≤ fuel) :
    hasLaterQuad.go fuel (pre ++ 10 :: tail) = false := by
  induction fuel generalizing pre with
  | zero =>
    have hpre0 : pre = [] := List.eq_nil_of_length_eq_zero (Nat.eq_zero_of_le_zero hfuel)
    subst pre
    simp [hasLaterQuad.go]
  | succ fuel ih =>
    cases pre with
    | nil => simp [hasLaterQuad.go]
    | cons x xs =>
      have hx : x ≠ 64 := rs_ne_head_byte hpre
      have hxs : 64 ∉ xs := rs_not_mem_tail hpre
      have hfuel' : xs.length ≤ fuel := by
        simp at hfuel
        omega
      by_cases h64 : x = 64
      · exact False.elim (hx h64)
      · by_cases h10 : x = 10
        · simp [hasLaterQuad.go, h10]
        · have hnext : hasLaterQuad.go fuel (xs ++ 10 :: tail) = false := ih xs hxs hfuel'
          simpa [hasLaterQuad.go, h64, h10] using hnext

/-- With no `@` before the first LF, `hasLaterQuad` is false. -/
theorem rs_hasLaterQuad_no_at_before_nl (pre : List Nat) (tail : List Nat)
    (hpre : 64 ∉ pre) :
    hasLaterQuad (pre ++ 10 :: tail) = false := by
  have hlen : (pre ++ 10 :: tail).length = pre.length + (tail.length + 1) := by simp
  unfold hasLaterQuad
  exact rs_hasLaterQuad_go_no_at ((pre ++ 10 :: tail).length + 1) pre tail hpre (by omega)

/-- A quad before the first LF forces `hasLaterQuad` true, whatever follows the quad. -/
theorem rs_hasLaterQuad_go_quad (fuel : Nat) (pre : List Nat) (tail : List Nat)
    (hpre64 : 64 ∉ pre) (hpre10 : 10 ∉ pre) (hfuel : pre.length + 1 ≤ fuel) :
    hasLaterQuad.go fuel (pre ++ List.replicate 4 64 ++ tail) = true := by
  induction fuel generalizing pre with
  | zero => omega
  | succ fuel ih =>
    cases pre with
    | nil =>
      have hc : 4 ≤ countRun 64 (64 :: 64 :: 64 :: 64 :: tail) := by
        simp [countRun]
      have hc2 : 2 ≤ countRun 64 (64 :: 64 :: 64 :: 64 :: tail) := by omega
      simp [hasLaterQuad.go, hc2]
    | cons x xs =>
      have hx64 : x ≠ 64 := rs_ne_head_byte hpre64
      have hx10 : x ≠ 10 := rs_ne_head_byte hpre10
      have hxs64 : 64 ∉ xs := rs_not_mem_tail hpre64
      have hxs10 : 10 ∉ xs := rs_not_mem_tail hpre10
      have hfuel' : xs.length + 1 ≤ fuel := by
        simp at hfuel
        omega
      by_cases h64 : x = 64
      · exact False.elim (hx64 h64)
      · by_cases h10 : x = 10
        · exact False.elim (hx10 h10)
        · have hnext : hasLaterQuad.go fuel (xs ++ List.replicate 4 64 ++ tail) = true :=
            ih xs hxs64 hxs10 hfuel'
          simpa [hasLaterQuad.go, h64, h10] using hnext

/-- With `@`-free, LF-free text before a quad, `hasLaterQuad` is true. -/
theorem rs_hasLaterQuad_of_quad (pre : List Nat) (tail : List Nat)
    (hpre64 : 64 ∉ pre) (hpre10 : 10 ∉ pre) :
    hasLaterQuad (pre ++ List.replicate 4 64 ++ tail) = true := by
  have hlen : (pre ++ List.replicate 4 64 ++ tail).length = pre.length + (4 + tail.length) := by
    simp
    omega
  unfold hasLaterQuad
  exact rs_hasLaterQuad_go_quad ((pre ++ List.replicate 4 64 ++ tail).length + 1)
    pre tail hpre64 hpre10 (by omega)

/-- REFCORR14 companion restatement: when no LF follows the opener run and a closer is present, the corrected `preOk` arm consults `hasLaterQuad` on the closer-free tail instead of returning true unconditionally. The former `rs_preOk_ignores_laterQuad_without_nl` pinned the now-retired newline-blind arm and is replaced by this restatement of the corrected arm; it is a structural identity under `hnl`, not a universal equivalence law. -/
theorem rs_preOk_no_nl_uses_laterQuad (run : Nat) (afterRun : List Nat)
    (hpair : ∃ cc, findSub [64, 64] afterRun = some cc)
    (hnl : findSub [10] afterRun = none) :
    (if run > 2 then
      match findSub [64, 64] afterRun, findSub [10] afterRun with
      | none, _ => false
      | some cc, none =>
          let closeRun := countRun 64 (afterRun.drop cc)
          let laterQuad := if closeRun <= 3 then hasLaterQuad (afterRun.drop (cc + closeRun)) else false
          run < 4 || !laterQuad
      | some cc, some ll =>
          run < 4 || (cc < ll &&
            !hasLaterQuad (afterRun.drop (cc + countRun 64 (afterRun.drop cc))))
     else true) =
    (if run > 2 then
      match findSub [64, 64] afterRun with
      | none => false
      | some cc =>
          let closeRun := countRun 64 (afterRun.drop cc)
          let laterQuad := if closeRun <= 3 then hasLaterQuad (afterRun.drop (cc + closeRun)) else false
          run < 4 || !laterQuad
     else true) := by
  rcases hpair with ⟨cc, hcc⟩
  by_cases hr : run > 2
  · simp [hr, hcc, hnl]
  · simp [hr]

/-- For a closer run of at most three, `rawSurplusClose` is the run length. -/
theorem rs_rawSurplusClose_small (c : Nat) (hc : c ≤ 3) : rawSurplusClose c = c := by
  unfold rawSurplusClose
  simp [hc]

/-- For a closer run of at least four, `rawSurplusClose` sheds four. -/
theorem rs_rawSurplusClose_large (c : Nat) (hc : 4 ≤ c) : rawSurplusClose c = c - 4 := by
  unfold rawSurplusClose
  have hn : ¬ c ≤ 3 := by omega
  simp [hn]

/-- `rawSurplusClose` never exceeds its input run length. -/
theorem rs_rawSurplusClose_le (c : Nat) : rawSurplusClose c ≤ c := by
  unfold rawSurplusClose
  by_cases hc : c ≤ 3
  · simp [hc]
  · simp [hc]

/-! ## Axiom audit -/

#print axioms rs_rawEmptyToken
#print axioms rs_rawTextToken
#print axioms rs_prevAfter
#print axioms rs_rawScan_nil
#print axioms rs_option_bne_some
#print axioms rs_ne_head_of_not_mem
#print axioms rs_not_mem_tail
#print axioms rs_ne_head_byte
#print axioms rs_getLast?_ne_of_not_mem
#print axioms rs_countRun_at_append
#print axioms rs_drop_replicate_append
#print axioms rs_countRun_replicate
#print axioms rs_countRun_append
#print axioms rs_findSub_pair_replicate
#print axioms rs_findSub_pair_append_run
#print axioms rs_findSub_pair_absent
#print axioms rs_findSub_one_absent
#print axioms rs_claim_raw_empty
#print axioms rs_claim_raw_text
#print axioms rs_replicate_at_cons
#print axioms rs_head_after_at
#print axioms rs_bare_below
#print axioms rs_long_open
#print axioms rs_bare_above
#print axioms rs_bare_threshold
#print axioms rs_bare_token_iff
#print axioms rs_rawScan_skip_no_at
#print axioms rs_long_open_copies
#print axioms rs_xline_empty
#print axioms rs_hasLaterQuad_go_no_at
#print axioms rs_hasLaterQuad_no_at_before_nl
#print axioms rs_hasLaterQuad_go_quad
#print axioms rs_hasLaterQuad_of_quad
#print axioms rs_preOk_no_nl_uses_laterQuad
#print axioms rs_rawSurplusClose_small
#print axioms rs_rawSurplusClose_large
#print axioms rs_rawSurplusClose_le

end RawScan
end LeanFtml
