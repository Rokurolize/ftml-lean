import Std
import Std.WP

open scoped Std.WP

set_option experimental.vcgen true
set_option experimental.intrinsic true

/-! Probe B fixed: Id + for-loop sum (tutorial example). -/

def mySum (l : Array Nat) : Nat := Id.run do
  let mut out := 0
  for i in l do out := out + i
  return out

theorem mySum_correct (l : Array Nat) : mySum l = l.sum := by
  generalize h : mySum l = x
  apply Std.WP.Id.of_run_eq_wp h
  vcgen invariants
    · fun pref suff out => pref.sum = out
  with finish

/-! Probe C redesigned: scanner-shaped while loop. The byte array is a
    parameter (in scope for the invariant); the state carries only the
    position and the running count. The invariant is stated over the
    consumed prefix. -/

structure ScanState where
  pos : Nat
  count : Nat

def countNewlines (bs : Array Nat) : StateM ScanState Nat := do
  while h : (← get).pos < bs.size
    invariant exit s =>
      s.count = (bs.toList.take s.pos).count 10 ∧ s.pos ≤ bs.size
        ∧ (exit = true → s.pos = bs.size)
    decreasing s => bs.size - s.pos
  do
    let s ← get
    let b := bs.getD s.pos 0
    set { s with pos := s.pos + 1, count := s.count + (if b = 10 then 1 else 0) }
  return (← get).count

theorem countNewlines_spec (bs : Array Nat) :
    ⦃fun s => s.pos = 0 ∧ s.count = 0⦄
    countNewlines bs
    ⦃fun r s => r = (bs.toList.take s.pos).count 10 ∧ s.pos = bs.size⦄ := by
  vcgen [countNewlines] with finish
