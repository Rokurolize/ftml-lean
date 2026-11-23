/-
LeanFtml.Proof.FreelinkRoute — universal locator and peel laws for the Freelink hash route and plain anchor.
Every statement is about the mirror's own findSub and peel branch in LeanFtml.LinkRules, never a second hand-written copy.
The peel helper mirrors lines 1112-1118 of LinkRules.lean exactly, so component equalities transfer verbatim.
This unit imports only LeanFtml.LinkRules and is self-contained.
-/

import LeanFtml.LinkRules

namespace LeanFtml

/-- Exact mirror of the route/anchor peel branch inside freelinkProcess. -/
def freelinkRoutePeel (raw : List Nat) : List Nat × List Nat × List Nat × List Nat :=
  match findSub (litBytes "/#/") raw with
  | some i => (raw.take i, [], [35, 47] ++ raw.drop (i + 3), raw.take (i + 1))
  | none =>
      match findSub [35] raw with
      | some i => (raw.take i, rtrimBytes (raw.drop i), [], raw.take i)
      | none => (raw, [], [], raw)

/-! ## Generic list helpers -/

/-- Dropping the whole prefix leaves the second list. -/
theorem freelinkRoute_drop_length_append (pre xs : List Nat) : (pre ++ xs).drop pre.length = xs := by
  induction pre with
  | nil => simp
  | cons b pre' ih => simp

/-- Dropping prefix plus n bytes drops n bytes from the second list. -/
theorem freelinkRoute_drop_length_add_append (pre xs : List Nat) (n : Nat) :
    (pre ++ xs).drop (pre.length + n) = xs.drop n := by
  rw [← List.drop_drop]
  rw [freelinkRoute_drop_length_append]

/-- Taking the whole prefix length yields the prefix. -/
theorem freelinkRoute_take_length_append (pre xs : List Nat) : (pre ++ xs).take pre.length = pre := by
  induction pre with
  | nil => simp
  | cons b pre' ih => simp

/-- Taking one more byte than the prefix length keeps that one byte. -/
theorem freelinkRoute_take_succ_append (pre : List Nat) (x : Nat) (xs : List Nat) :
    (pre ++ x :: xs).take (pre.length + 1) = pre ++ [x] := by
  induction pre with
  | nil => simp
  | cons b pre' ih => simp [ih]

/-! ## findSub locator -/

/-- If pat occurs at i and at no earlier index, findSub returns i. -/
theorem freelinkRoute_findSub_eq_of_no_earlier (pat raw : List Nat) (i : Nat)
    (hpat : pat ≠ [])
    (hocc : (raw.drop i).take pat.length = pat)
    (hno : ∀ j, j < i → (raw.drop j).take pat.length ≠ pat) :
    findSub pat raw = some i := by
  induction i generalizing raw with
  | zero =>
      cases raw with
      | nil => simp [hpat] at hocc
      | cons x xs =>
          have hbool : ((x :: xs).take pat.length == pat) = true := by simpa using hocc
          simp [findSub, hbool]
  | succ i ih =>
      cases raw with
      | nil => simp [hpat] at hocc
      | cons b raw' =>
          have h0 : (b :: raw').take pat.length ≠ pat := hno 0 (by omega)
          have hbool0 : ((b :: raw').take pat.length == pat) = false := by simpa using h0
          simp [findSub, hbool0]
          have hocc' : (raw'.drop i).take pat.length = pat := by simpa using hocc
          have hno' : ∀ j, j < i → (raw'.drop j).take pat.length ≠ pat := by
            intro j hj
            exact hno (j + 1) (by omega)
          rw [ih raw' hocc' hno']

/-- A hash-free prefix holds no occurrence of /#/ before its own end. -/
theorem freelinkRoute_no_route_in_pre (pre suf : List Nat) (hpre : ∀ b ∈ pre, b ≠ 35)
    (j : Nat) (hj : j < pre.length) :
    ((pre ++ [47, 35, 47] ++ suf).drop j).take 3 ≠ [47, 35, 47] := by
  induction pre generalizing j with
  | nil => simp at hj
  | cons b pre' ih =>
      cases j with
      | zero =>
          intro h
          cases pre' with
          | nil => simp at h
          | cons b2 pre'' =>
              have hb2ne : b2 ≠ 35 := hpre b2 (by simp)
              simp_all
      | succ j =>
          have hpre' : ∀ x ∈ pre', x ≠ 35 := by
            intro x hx
            exact hpre x (by simp [hx])
          have hj' : j < pre'.length := by simpa using hj
          simpa using ih hpre' j hj'

/-- A hash-free prefix holds no '#' before its own end. -/
theorem freelinkRoute_no_anchor_in_pre (pre suf : List Nat) (hpre : ∀ b ∈ pre, b ≠ 35)
    (j : Nat) (hj : j < pre.length) :
    ((pre ++ [35] ++ suf).drop j).take 1 ≠ [35] := by
  induction pre generalizing j with
  | nil => simp at hj
  | cons b pre' ih =>
      cases j with
      | zero =>
          intro h
          have hbne : b ≠ 35 := hpre b (by simp)
          simp_all
      | succ j =>
          have hpre' : ∀ x ∈ pre', x ≠ 35 := by
            intro x hx
            exact hpre x (by simp [hx])
          have hj' : j < pre'.length := by simpa using hj
          simpa using ih hpre' j hj'

/-- Exact locator of the first /#/ after a hash-free prefix. -/
theorem freelinkRoute_findSub_route (pre suf : List Nat) (hpre : ∀ b ∈ pre, b ≠ 35) :
    findSub (litBytes "/#/") (pre ++ litBytes "/#/" ++ suf) = some pre.length := by
  apply freelinkRoute_findSub_eq_of_no_earlier
  · decide
  · rw [List.append_assoc]
    rw [freelinkRoute_drop_length_append, freelinkRoute_take_length_append]
  · intro j hj
    simpa [litBytes] using freelinkRoute_no_route_in_pre pre suf hpre j hj

/-- Exact locator of the first '#' after a hash-free prefix. -/
theorem freelinkRoute_findSub_anchor (pre suf : List Nat) (hpre : ∀ b ∈ pre, b ≠ 35) :
    findSub [35] (pre ++ [35] ++ suf) = some pre.length := by
  apply freelinkRoute_findSub_eq_of_no_earlier
  · decide
  · rw [List.append_assoc]
    rw [freelinkRoute_drop_length_append, freelinkRoute_take_length_append]
  · intro j hj
    exact freelinkRoute_no_anchor_in_pre pre suf hpre j hj

/-! ## Universal peel component equalities -/

/-- Route shape: the peel yields pre as raw1, no anchor, the peeled extra, and textRaw keeping the slash. -/
theorem freelinkRoute_route_components (pre suf : List Nat) (hpre : ∀ b ∈ pre, b ≠ 35) :
    freelinkRoutePeel (pre ++ litBytes "/#/" ++ suf) =
      (pre, [], [35, 47] ++ suf, pre ++ [47]) := by
  unfold freelinkRoutePeel
  rw [freelinkRoute_findSub_route pre suf hpre]
  rw [List.append_assoc]
  have ht1 : (pre ++ (litBytes "/#/" ++ suf)).take pre.length = pre :=
    freelinkRoute_take_length_append pre (litBytes "/#/" ++ suf)
  have ht2 : (pre ++ (litBytes "/#/" ++ suf)).take (pre.length + 1) = pre ++ [47] := by
    simpa [litBytes, Nat.add_assoc] using freelinkRoute_take_succ_append pre 47 (35 :: 47 :: suf)
  have hd : (pre ++ (litBytes "/#/" ++ suf)).drop (pre.length + 3) = suf := by
    rw [freelinkRoute_drop_length_add_append]
    simp [litBytes]
  simp [ht1, ht2, hd]

/-- Anchor shape with no /#/ route present: the peel keeps the rtrimmed anchor and drops the '#' from raw1. -/
theorem freelinkRoute_anchor_components (pre suf : List Nat) (hpre : ∀ b ∈ pre, b ≠ 35)
    (hnoroute : findSub (litBytes "/#/") (pre ++ [35] ++ suf) = none) :
    freelinkRoutePeel (pre ++ [35] ++ suf) = (pre, rtrimBytes ([35] ++ suf), [], pre) := by
  unfold freelinkRoutePeel
  rw [hnoroute]
  rw [freelinkRoute_findSub_anchor pre suf hpre]
  rw [List.append_assoc]
  have ht : (pre ++ ([35] ++ suf)).take pre.length = pre :=
    freelinkRoute_take_length_append pre ([35] ++ suf)
  have hd : (pre ++ ([35] ++ suf)).drop pre.length = [35] ++ suf :=
    freelinkRoute_drop_length_append pre ([35] ++ suf)
  simp

/-- No route and no anchor leaves the raw and all peel components trivial. -/
theorem freelinkRoute_plain_components (raw : List Nat)
    (h1 : findSub (litBytes "/#/") raw = none)
    (h2 : findSub [35] raw = none) :
    freelinkRoutePeel raw = (raw, [], [], raw) := by
  simp [freelinkRoutePeel, h1, h2]

#print axioms freelinkRoute_findSub_route
#print axioms freelinkRoute_findSub_anchor
#print axioms freelinkRoute_route_components
#print axioms freelinkRoute_anchor_components
#print axioms freelinkRoute_plain_components

end LeanFtml
