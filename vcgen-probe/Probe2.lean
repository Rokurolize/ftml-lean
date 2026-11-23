import Std
import Std.WP

open scoped Std.WP

set_option experimental.vcgen true

/-! Probe A: the tutorial's StateM counter spec, verbatim shape. -/

structure Supply where
  counter : Nat

def mkFresh : StateM Supply Nat := do
  let n ← (·.counter) <$> get
  modify fun s => { s with counter := s.counter + 1 }
  pure n

@[spec]
theorem mkFresh_spec (c : Nat) :
    ⦃fun state => state.counter = c⦄
    mkFresh
    ⦃fun r state => r = c ∧ c < state.counter⦄ := by
  vcgen [mkFresh] with finish

/-! Probe B: the tutorial's Id + for-loop sum, verbatim. -/

def mySum (l : Array Nat) : Nat := Id.run do
  let mut out := 0
  for i in l do out := out + i
  return out

theorem mySum_correct (l : Array Nat) : mySum l = l.sum := by
  generalize h : mySum l = x
  apply Id.of_run_eq_wp h
  vcgen invariants
    · fun pref suff out => pref.sum = out
  with finish

/-! Probe C: a scanner-shaped while loop over a byte array in StateM.
    Counts byte 10 while advancing a position; the whole input stays in
    the state so the invariant can relate progress to the total. -/

structure ScanState where
  bytes : Array Nat
  pos : Nat
  count : Nat

def countNewlines : StateM ScanState Nat := do
  while h : (← get).pos < (← get).bytes.size
    invariant exit s =>
      s.count + (s.bytes.toList.drop s.pos).count 10 = s.bytes.toList.count 10
        ∧ s.pos ≤ s.bytes.size
    decreasing s => s.bytes.size - s.pos
  do
    let s ← get
    let b := s.bytes.getD s.pos 0
    set { s with pos := s.pos + 1, count := s.count + (if b = 10 then 1 else 0) }
  return (← get).count

theorem countNewlines_spec (bs : Array Nat) :
    ⦃fun s => s.bytes = bs ∧ s.pos = 0 ∧ s.count = 0⦄
    countNewlines
    ⦃fun r s => r = bs.toList.count 10⦄ := by
  vcgen [countNewlines] with finish
