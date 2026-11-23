import LeanFtml.FormRawRules
import LeanFtml.RawHeadingRules

/-!
# RawProof — the composite Raw model, as theorems about the mirror

The settled Raw model is the corrected scanner's byte shaping plus exactly one empty Raw token for a maximal run of four or more '@' bytes, and that empty token renders as nothing. These theorems are about `rawScan` and `renderRaw` as they stand in the mirror. A run produces that empty token when the lookbehind is clear and the run is bare, or when a second run of four or more is the closer; a run of four or more whose closer is a run of two or three, with no newline and no later re-association, cancels to literal bytes and claims no token (the round-5 4+3 shape `@@@@ZQ@@@` and its 4+2 sibling). The one place this mirror does not implement the reference's later-quad re-association is recorded by `raw_later_quad_mirror` and `raw_later_quad_ne_reference`.
-/

namespace LeanFtml

/-- The token `claimText "Raw" []` appends: `text` is the empty string. -/
def rawEmptyToken : TokenEntry :=
  { rule := "Raw", opts := [("text".toList, OptVal.str [])] }

/-- The token `claimText "Raw" text` appends. -/
def rawTextToken (text : List Nat) : TokenEntry :=
  { rule := "Raw", opts := [("text".toList, textVal text)] }

/-- Lookbehind after copying `mid`: the last byte of `mid`, or `prev` when `mid` is empty. -/
def prevAfter (prev : Option Nat) : List Nat → Option Nat
  | [] => prev
  | b :: bs => prevAfter (some b) bs

theorem rawScan_nil (fuel : Nat) (prev : Option Nat) (toks : List TokenEntry) :
    rawScan prev [] toks fuel = ([], toks) := by
  cases fuel <;> simp [rawScan]

theorem option_bne_some {n : Nat} {p : Option Nat} (h : p ≠ some n) :
    (p != some n) = true := by
  cases p with
  | none => simp
  | some a =>
    have : a ≠ n := by
      intro e
      exact h (congrArg some e)
    simp [this]

theorem ne_head_of_not_mem {b : Nat} {l : List Nat} (h : b ∉ l) : l.head? ≠ some b := by
  cases l with
  | nil => simp
  | cons x xs =>
    intro hx
    simp at hx
    exact h (by simp [hx])

theorem not_mem_tail {b x : Nat} {xs : List Nat} (h : b ∉ x :: xs) : b ∉ xs := by
  intro hm
  exact h (List.mem_cons_of_mem x hm)

theorem ne_head_byte {b x : Nat} {xs : List Nat} (h : b ∉ x :: xs) : x ≠ b := by
  intro hx
  exact h (by simp [hx])

theorem countRun_at_append (n : Nat) (rest : List Nat) (h : rest.head? ≠ some 64) :
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

theorem drop_replicate_append (n : Nat) (rest : List Nat) :
    (List.replicate n 64 ++ rest).drop n = rest := by
  induction n with
  | zero => simp
  | succ n ih =>
    simp [List.replicate_succ, ih]

theorem findSub_pair_absent (b : Nat) (l : List Nat) (h : b ∉ l) :
    findSub [b, b] l = none := by
  induction l with
  | nil =>
    unfold findSub
    rfl
  | cons x xs ih =>
    have hx : x ≠ b := ne_head_byte h
    have hxs : b ∉ xs := not_mem_tail h
    unfold findSub
    have htake : (List.take [b, b].length (x :: xs) == [b, b]) = false := by
      cases xs <;> simp [hx]
    rw [htake]
    rw [ite_eq_right (by decide : ¬(false = true))]
    simp only [ih hxs, Option.map_none]

theorem findSub_one_absent (b : Nat) (l : List Nat) (h : b ∉ l) :
    findSub [b] l = none := by
  induction l with
  | nil =>
    unfold findSub
    rfl
  | cons x xs ih =>
    have hx : x ≠ b := ne_head_byte h
    have hxs : b ∉ xs := not_mem_tail h
    unfold findSub
    have htake : (List.take [b].length (x :: xs) == [b]) = false := by
      simp [hx]
    rw [htake]
    rw [ite_eq_right (by decide : ¬(false = true))]
    simp only [ih hxs, Option.map_none]

theorem claim_raw_empty (toks : List TokenEntry) :
    claimText "Raw" [] toks = (phBytes toks.length, toks ++ [rawEmptyToken]) := by
  rfl

theorem claim_raw_text (text : List Nat) (toks : List TokenEntry) :
    claimText "Raw" text toks = (phBytes toks.length, toks ++ [rawTextToken text]) := by
  rfl

theorem replicate_at_cons (n : Nat) (rest : List Nat) (hn : 1 ≤ n) :
    List.replicate n 64 ++ rest = 64 :: (List.replicate (n - 1) 64 ++ rest) := by
  have hn' : n = (n - 1) + 1 := by omega
  rw [hn', List.replicate_succ]
  simp

theorem head_after_at (n : Nat) (rest : List Nat) (hn : 2 ≤ n) :
    (List.replicate (n - 1) 64 ++ rest).head? = some 64 := by
  have h := replicate_at_cons (n - 1) rest (by omega)
  rw [h]
  simp

/-! ## Named shapes (kernel computation) -/

theorem raw_bare3_no_token :
    rawScan none [64, 64, 64] [] 4 = ([64, 64, 64], []) := by
  rfl

theorem raw_bare4_one_empty :
    rawScan none [64, 64, 64, 64] [] 5 = (phBytes 0, [rawEmptyToken]) := by
  rfl

theorem raw_bare5_one_empty :
    rawScan none (List.replicate 5 64) [] 6 = (phBytes 0 ++ [64], [rawEmptyToken]) := by
  rfl

theorem raw_bare6_one_empty :
    rawScan none (List.replicate 6 64) [] 7 =
      (phBytes 0 ++ [64, 64], [rawEmptyToken]) := by
  rfl

/-- Round-5 4+3 shape: `@@@@ZQ@@@` is the literal bytes `ZQ@@@` and claims no token. -/
theorem raw_shape_4_3 :
    rawScan none (List.replicate 4 64 ++ [90, 81] ++ List.replicate 3 64) [] 10 =
      ([90, 81, 64, 64, 64], []) := by
  rfl

/-- Round-5b 4+2 sibling: `@@@@ZQ@@` is the literal bytes `ZQ@@` and claims no token. -/
theorem raw_shape_4_2 :
    rawScan none (List.replicate 4 64 ++ [90, 81] ++ [64, 64]) [] 9 =
      ([90, 81, 64, 64], []) := by
  rfl

/-- A five-opener two-closer sibling keeps one literal opener '@': `@@@@@ZQ@@` is `@ZQ@@`. -/
theorem raw_shape_5_2 :
    rawScan none (List.replicate 5 64 ++ [90, 81] ++ [64, 64]) [] 10 =
      ([64, 90, 81, 64, 64], []) := by
  rfl

/-- Plain body: `@@ZQ@@` claims one Raw token whose text is the body, and the output is that placeholder. -/
theorem raw_shape_body :
    rawScan none ([64, 64] ++ [90, 81] ++ [64, 64]) [] 7 =
      (phBytes 0, [rawTextToken [90, 81]]) := by
  rfl

/-- An isolated '@' inside the body stays in the token text: `@@a@b@@` claims `a@b`. -/
theorem raw_shape_isolated_at :
    rawScan none (litBytes "@@a@b@@") [] 8 =
      (phBytes 0, [rawTextToken (litBytes "a@b")]) := by
  rfl

/-- Three-run opener: `@@@ZQ@@` claims the body `@ZQ`. -/
theorem raw_shape_open3 :
    rawScan none (List.replicate 3 64 ++ [90, 81] ++ [64, 64]) [] 8 =
      (phBytes 0, [rawTextToken [64, 90, 81]]) := by
  rfl

/-- Single surplus closer: `@@ZQ@@@` claims `ZQ` and leaves one literal '@'. -/
theorem raw_shape_trail1 :
    rawScan none ([64, 64] ++ [90, 81] ++ List.replicate 3 64) [] 8 =
      (phBytes 0 ++ [64], [rawTextToken [90, 81]]) := by
  rfl

/-- Two empty tokens around a body: `@@@@x@@@@` is placeholder, `x`, placeholder. -/
theorem raw_shape_two_empty :
    rawScan none (litBytes "@@@@x@@@@") [] 10 =
      (phBytes 0 ++ litBytes "x" ++ phBytes 1, [rawEmptyToken, rawEmptyToken]) := by
  rfl

/-- Six and six: `@@@@@@x@@@@@@` is one empty token, `@@`, `x`, one empty token, `@@`. -/
theorem raw_shape_two_empty_six :
    rawScan none (litBytes "@@@@@@x@@@@@@") [] 14 =
      (phBytes 0 ++ litBytes "@@x" ++ phBytes 1 ++ litBytes "@@",
        [rawEmptyToken, rawEmptyToken]) := by
  rfl

/-- Long closer after a short opener: `@@x@@@@` claims `x` and leaves two literal '@'. -/
theorem raw_shape_trail4 :
    rawScan none (litBytes "@@x@@@@") [] 8 =
      (phBytes 0 ++ litBytes "@@", [rawTextToken (litBytes "x")]) := by
  rfl

/-! ## Cross-line byte shaping -/

theorem raw_xline_empty :
    rawScan none [64, 64, 10, 64, 64] [] 6 = ([32], []) := by
  rfl

theorem raw_xline_body :
    rawScan none [64, 64, 90, 10, 64, 64] [] 7 =
      (phBytes 0, [rawTextToken [90]]) := by
  rfl

theorem raw_xline_open3 :
    rawScan none (List.replicate 3 64 ++ [90, 10, 64, 64]) [] 8 =
      (phBytes 0, [rawTextToken [64, 90]]) := by
  rfl

theorem raw_xline_close3 :
    rawScan none [64, 64, 90, 10, 64, 64, 64] [] 8 =
      (phBytes 0 ++ [32, 64], [rawTextToken [90]]) := by
  rfl

theorem raw_xline_empty_close3 :
    rawScan none [64, 64, 10, 64, 64, 64] [] 7 = ([32, 32, 64], []) := by
  rfl

/-- A run of four or more stops at the newline: `@@@@\n@@` is one empty token and then the literal tail. -/
theorem raw_quad_stops_at_newline :
    rawScan none (List.replicate 4 64 ++ [10, 64, 64]) [] 8 =
      (phBytes 0 ++ [10, 64, 64], [rawEmptyToken]) := by
  rfl

/-- Two newlines in the body abort the span: `@@Z\n\n@@` stays literal and claims nothing. -/
theorem raw_xline_two_nl_aborts :
    rawScan none [64, 64, 90, 10, 10, 64, 64] [] 8 =
      ([64, 64, 90, 10, 10, 64, 64], []) := by
  rfl

/-! ## Render elision -/

theorem renderRaw_elides_empty_token :
    renderRaw rawEmptyToken.opts = [] := by
  rfl

theorem renderRaw_elides (opts : OptMap)
    (h : (optStrBytes opts "text".toList).isEmpty = true) :
    renderRaw opts = [] := by
  unfold renderRaw
  rw [h]
  rfl

theorem renderRaw_wraps_body :
    renderRaw [("text".toList, OptVal.str "ZQ".toList)] =
      litBytes "<span style=\"white-space: pre-wrap;\">ZQ</span>" := by
  rfl

theorem renderRaw_does_not_escape_at :
    wikidotEscapeRaw [64, 64] = [64, 64] := by
  rfl

theorem raw_bare4_renders_empty :
    renderRaw (rawScan none [64, 64, 64, 64] [] 5).2[0]!.opts = [] := by
  rfl

/-! ## Divergence witness

`@@@@a@@@b@@@@` is the shortest source on which a 4+ opener, a one-byte body, a three-run closer, one non-'@' separator and a later 4-run sit on one line. The mirror's `preOk` arm `some _, none => true` ignores `hasLaterQuad` when the tail has no newline, so the lead≥2 branch fires. The reference's `laterQuad` flag takes the empty-Raw early exit instead. The right-hand side of the inequality is the reference byte shape from PHP 8.5.4 `state-restricted.php Raw` on this source (one empty Raw, the literal `a`, one Raw whose text is `@b`, then `@@`). -/

theorem raw_later_quad_mirror :
    rawScan none (litBytes "@@@@a@@@b@@@@") [] 14 =
      (litBytes "a@@@b" ++ phBytes 0, [rawEmptyToken]) := by
  rfl

theorem raw_later_quad_ne_reference :
    (rawScan none (litBytes "@@@@a@@@b@@@@") [] 14).1 ≠
      phBytes 0 ++ litBytes "a" ++ phBytes 1 ++ litBytes "@@" := by
  decide

theorem raw_round5_later_quad_mirror :
    rawScan none (litBytes "A @@@@ZQ@@@ B @@@@ C") [] 21 =
      (litBytes "A ZQ@@@ B " ++ phBytes 0 ++ litBytes " C", [rawEmptyToken]) := by
  rfl

/-! ## General threshold -/

theorem raw_bare_below (n : Nat) (hn : n ≤ 3) :
    rawScan none (List.replicate n 64) [] (n + 1) = (List.replicate n 64, []) := by
  match n, hn with
  | 0, _ => simp [rawScan, List.replicate]
  | 1, _ => simp [rawScan, List.replicate]
  | 2, _ => simp [rawScan, List.replicate, countRun, findSub]
  | 3, _ => simp [rawScan, List.replicate, countRun, findSub]
  | n + 4, h => omega

set_option maxHeartbeats 800000 in
theorem raw_long_open
    (n : Nat) (rest : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (prev : Option Nat) (hn : 4 ≤ n) (hp : prev ≠ some 64) (hrest : 64 ∉ rest) :
    rawScan prev (List.replicate n 64 ++ rest) toks (fuel + 1) =
      (phBytes toks.length ++ List.replicate (n - 4) 64 ++
          (rawScan (some 64) rest (toks ++ [rawEmptyToken]) fuel).1,
       (rawScan (some 64) rest (toks ++ [rawEmptyToken]) fuel).2) := by
  have hsrc := replicate_at_cons n rest (by omega)
  have hhead := head_after_at n rest (by omega)
  have hpB := option_bne_some (n := 64) hp
  have hcond :
      (64 == 64 && (List.replicate (n - 1) 64 ++ rest).head? == some 64 &&
        prev != some 64) = true := by
    simp [hhead, hpB]
  have hcount := countRun_at_append n rest (ne_head_of_not_mem hrest)
  have hdrop := drop_replicate_append n rest
  have hfind := findSub_pair_absent 64 rest hrest
  rw [hsrc]
  have hcount' : countRun 64 (64 :: (List.replicate (n - 1) 64 ++ rest)) = n := by
    rw [← replicate_at_cons n rest (by omega)]
    exact hcount
  have hdrop' :
      (64 :: (List.replicate (n - 1) 64 ++ rest)).drop
        (countRun 64 (64 :: (List.replicate (n - 1) 64 ++ rest))) = rest := by
    rw [hcount']
    rw [← replicate_at_cons n rest (by omega)]
    exact hdrop
  have hclaim := claim_raw_empty toks
  have hnot :
      (!(64 == 64 && (List.replicate (n - 1) 64 ++ rest).head? == some 64 &&
          prev != some 64)) = false := by
    rw [hcond]
    rfl
  have hne3 : (n == 3) = false := (beq_eq_false_iff_ne).mpr (by omega)
  have hdropN : (64 :: (List.replicate (n - 1) 64 ++ rest)).drop n = rest := by
    simpa [hcount'] using hdrop'
  simp only [rawScan, hnot, hcount', hdropN, hfind, hne3, hclaim]
  -- The opener test is true, so the copy arm is gone; `n ≥ 4` makes `preOk` false (no `@@` in `rest`) and `n == 3` false, leaving the empty-token arm.
  rw [ite_eq_right (by decide : ¬(false = true))]
  rw [ite_eq_left (by omega : n > 2)]
  have hd : decide (n > 2) = true := decide_eq_true (by omega)
  rw [hd]
  rw [ite_eq_left (by decide : (true && !false) = true)]
  rw [ite_eq_right (by decide : ¬(false = true))]

theorem raw_bare_above (n : Nat) (hn : 4 ≤ n) :
    rawScan none (List.replicate n 64) [] (n + 1) =
      (phBytes 0 ++ List.replicate (n - 4) 64, [rawEmptyToken]) := by
  have h := raw_long_open n [] [] n none hn (by simp) (by simp)
  simp only [rawScan_nil, List.append_nil, List.nil_append, List.length_nil] at h
  exact h

/-- A bare run of `n` '@' bytes, clear lookbehind: literal when `n < 4`, and exactly one empty Raw token plus `n - 4` literal '@' bytes when `n ≥ 4`. -/
theorem raw_bare_threshold (n : Nat) :
    rawScan none (List.replicate n 64) [] (n + 1) =
      if n < 4 then (List.replicate n 64, [])
      else (phBytes 0 ++ List.replicate (n - 4) 64, [rawEmptyToken]) := by
  by_cases hn : n < 4
  · rw [ite_eq_left hn]
    exact raw_bare_below n (by omega)
  · rw [ite_eq_right hn]
    exact raw_bare_above n (by omega)

theorem raw_bare_token_iff (n : Nat) :
    ((rawScan none (List.replicate n 64) [] (n + 1)).2.length = 1) ↔ 4 ≤ n := by
  rw [raw_bare_threshold]
  by_cases hn : n < 4
  · simp [hn]
  · simp [hn]
    omega

/-! ## Copying a '@'-free prefix -/

theorem rawScan_skip_no_at :
    ∀ (fuel : Nat) (prev : Option Nat) (mid rest : List Nat) (toks : List TokenEntry),
      64 ∉ mid → mid.length ≤ fuel →
      rawScan prev (mid ++ rest) toks fuel =
        (mid ++ (rawScan (prevAfter prev mid) rest toks (fuel - mid.length)).1,
         (rawScan (prevAfter prev mid) rest toks (fuel - mid.length)).2) := by
  intro fuel
  induction fuel with
  | zero =>
    intro prev mid rest toks hmem hf
    have : mid = [] := List.eq_nil_of_length_eq_zero (Nat.eq_zero_of_le_zero hf)
    simp [this, prevAfter, rawScan]
  | succ fuel ih =>
    intro prev mid rest toks hmem hf
    cases mid with
    | nil => simp [prevAfter]
    | cons x xs =>
      have hx : x ≠ 64 := ne_head_byte hmem
      have hxs : 64 ∉ xs := not_mem_tail hmem
      have hf' : xs.length ≤ fuel := by
        simp at hf
        omega
      have hcond :
          (x == 64 && (xs ++ rest).head? == some 64 && prev != some 64) = false := by
        simp [hx]
      have hstep := ih (some x) xs rest toks hxs hf'
      have hsub : fuel + 1 - (xs.length + 1) = fuel - xs.length := by omega
      have hnot :
          (!(x == 64 && (xs ++ rest).head? == some 64 && prev != some 64)) = true := by
        rw [hcond]
        rfl
      simp only [List.cons_append, rawScan, hnot, prevAfter, hstep, List.length_cons]
      rw [hsub]
      rw [ite_eq_left (by trivial : True)]

theorem raw_long_open_copies
    (n : Nat) (rest : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (prev : Option Nat) (hn : 4 ≤ n) (hp : prev ≠ some 64) (hrest : 64 ∉ rest)
    (hf : rest.length ≤ fuel) :
    rawScan prev (List.replicate n 64 ++ rest) toks (fuel + 1) =
      (phBytes toks.length ++ List.replicate (n - 4) 64 ++ rest,
        toks ++ [rawEmptyToken]) := by
  have h := raw_long_open n rest toks fuel prev hn hp hrest
  have hs := rawScan_skip_no_at fuel (some 64) rest [] (toks ++ [rawEmptyToken]) hrest hf
  simp only [List.append_nil, rawScan_nil] at hs
  simp only [h, hs]

/-! ## Bounded enumeration

`predictView` is the composite reading on one opener run, one '@'-free body and one closer run, with no newline: a bare merged run under the 4+ threshold, a short opener claiming the body, a 4+ opener cancelling against a two- or three-run closer, or a 4+ opener and a 4+ closer as two empty tokens. The domain is every opener length and closer length below 7 and every body in {empty, `Z`, `ZZ`}. -/

def scanView (p : List Nat × List TokenEntry) : List Nat × List (List Nat) :=
  (p.1, p.2.map fun t => optStrBytes t.opts "text".toList)

def predictView (r c : Nat) (mid : List Nat) : List Nat × List (List Nat) :=
  let thresh (k : Nat) : List Nat × List (List Nat) :=
    if k ≥ 4 then (phBytes 0 ++ List.replicate (k - 4) 64, [[]])
    else (List.replicate k 64, [])
  if mid.isEmpty then
    thresh (r + c)
  else if r ≥ 4 && c ≥ 4 then
    (phBytes 0 ++ List.replicate (r - 4) 64 ++ mid ++ phBytes 1 ++
        List.replicate (c - 4) 64, [[], []])
  else if r ≥ 4 && c ≥ 2 then
    (List.replicate (r - 4) 64 ++ mid ++ List.replicate c 64, [])
  else if r ≥ 4 then
    (phBytes 0 ++ List.replicate (r - 4) 64 ++ mid ++ List.replicate c 64, [[]])
  else if r ≥ 2 && c ≥ 4 then
    let text := (if r = 3 then [64] else []) ++ mid
    (phBytes 0 ++ List.replicate (c - 2) 64, [text])
  else if r ≥ 2 && c ≥ 2 then
    let text := (if r = 3 then [64] else []) ++ mid
    let trail := if c = 3 then [64] else []
    (phBytes 0 ++ trail, [text])
  else if r ≥ 2 then
    (List.replicate r 64 ++ mid ++ List.replicate c 64, [])
  else
    let tail := thresh c
    (List.replicate r 64 ++ mid ++ tail.1, tail.2)

def rawEnumMids : List (List Nat) := [[], [90], [90, 90]]

def rawEnumOk : Bool :=
  (List.range 7).all fun r =>
    (List.range 7).all fun c =>
      rawEnumMids.all fun mid =>
        let src := List.replicate r 64 ++ mid ++ List.replicate c 64
        scanView (rawScan none src [] (src.length + 1)) == predictView r c mid

set_option maxHeartbeats 2000000 in
theorem raw_span_enum : rawEnumOk = true := by
  decide

#print axioms rawScan_nil
#print axioms option_bne_some
#print axioms ne_head_of_not_mem
#print axioms not_mem_tail
#print axioms ne_head_byte
#print axioms countRun_at_append
#print axioms drop_replicate_append
#print axioms findSub_pair_absent
#print axioms findSub_one_absent
#print axioms claim_raw_empty
#print axioms claim_raw_text
#print axioms replicate_at_cons
#print axioms head_after_at
#print axioms raw_bare3_no_token
#print axioms raw_bare4_one_empty
#print axioms raw_bare5_one_empty
#print axioms raw_bare6_one_empty
#print axioms raw_shape_4_3
#print axioms raw_shape_4_2
#print axioms raw_shape_5_2
#print axioms raw_shape_body
#print axioms raw_shape_isolated_at
#print axioms raw_shape_open3
#print axioms raw_shape_trail1
#print axioms raw_shape_two_empty
#print axioms raw_shape_two_empty_six
#print axioms raw_shape_trail4
#print axioms raw_xline_empty
#print axioms raw_xline_body
#print axioms raw_xline_open3
#print axioms raw_xline_close3
#print axioms raw_xline_empty_close3
#print axioms raw_quad_stops_at_newline
#print axioms raw_xline_two_nl_aborts
#print axioms renderRaw_elides_empty_token
#print axioms renderRaw_elides
#print axioms renderRaw_wraps_body
#print axioms renderRaw_does_not_escape_at
#print axioms raw_bare4_renders_empty
#print axioms raw_later_quad_mirror
#print axioms raw_later_quad_ne_reference
#print axioms raw_round5_later_quad_mirror
#print axioms raw_bare_below
#print axioms raw_long_open
#print axioms raw_bare_above
#print axioms raw_bare_threshold
#print axioms raw_bare_token_iff
#print axioms rawScan_skip_no_at
#print axioms raw_long_open_copies
#print axioms raw_span_enum

end LeanFtml
