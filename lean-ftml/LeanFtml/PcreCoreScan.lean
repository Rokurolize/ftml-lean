/-
  LeanFtml.PcreCoreScan — the do-notation `StateM` search driver over
  PcreCore (F2, BRIEF-F2-PCCRECORE component 1).

  PILOT PLUMBING.  This module applies the method PILOT-VCGEN-437
  established on Lean 4.37.0-rc1: the procedural program is a
  `StateM` loop whose state carries the problem in list-shaped form
  (here: the whole subject plus the scan position — positions are
  `Nat`, and every invariant is stated through `pcreFirst` at a
  position, so no array-index bridging lemmas arise); correctness is
  a Hoare triple proved by `vcgen +jp` (the dispatch here is a single
  two-way match, but the flag is kept as the pilot's standing
  instruction for dispatch-heavy code), discharged by `grind`
  supplied with the pure reference's equation lemmas plus the two
  hand-proved search facts below (`searchRef_step_some`,
  `searchRef_eq_of_none_prefix` — the pilot predicted roughly one
  hand proof per loop pattern).  The run equality goes through a
  separately proved wp statement and `Std.WP.StateM.of_run_eq_wp`,
  because a StateM triple is not defeq to the wp at a point on rc1.

  The pure reference is `searchFrom`: the first position at or after
  `pos` whose `pcreFirst` succeeds, scanning through the end of the
  subject (position `subj.length` included, since PHP counts empty
  matches at the end).  `searchM` is the scan loop that
  `pregReplaceCallback` and `pregMatchAll` perform inline; here it is
  a named, certified entry point the bundles can cite.
-/
import Std
import Std.WP
import LeanFtml.PcreCore

open scoped Std.WP

set_option experimental.vcgen true
set_option experimental.intrinsic true

namespace LeanFtml

open PcreCore

/-- Fuel-indexed pure search: the first position at or after `pos`,
    trying at most `fuel` positions, whose match succeeds. -/
def searchRef (p : PcreParsed) (subj : List Nat) (pos : Nat) :
    Nat → Option (Nat × MResult)
  | 0 => none
  | fuel + 1 => match pcreFirst p subj pos with
    | some res => some (pos, res)
    | none => searchRef p subj (pos + 1) fuel

/-- The first match of `p` at or after `pos`, scanning to the end of
    the subject. -/
def searchFrom (p : PcreParsed) (subj : List Nat) (pos : Nat) :
    Option (Nat × MResult) :=
  searchRef p subj pos (subj.length + 1 - pos)

/-- One search step at a failing position. -/
theorem searchRef_step_none (p : PcreParsed) (subj : List Nat)
    (pos fuel : Nat) (h : pcreFirst p subj pos = none) :
    searchRef p subj pos (fuel + 1) = searchRef p subj (pos + 1) fuel := by
  simp [searchRef, h]

/-- One search step at a succeeding position. -/
theorem searchRef_step_some (p : PcreParsed) (subj : List Nat)
    (pos fuel : Nat) (res : MResult) (h : pcreFirst p subj pos = some res) :
    searchRef p subj pos (fuel + 1) = some (pos, res) := by
  simp [searchRef, h]

/-- Past the end of the subject the search finds nothing. -/
theorem searchFrom_gt (p : PcreParsed) (subj : List Nat) (pos : Nat)
    (h : subj.length < pos) : searchFrom p subj pos = none := by
  have hf : subj.length + 1 - pos = 0 := by omega
  simp [searchFrom, hf, searchRef]

/-- The search from `start` equals the search from `start + k` when
    every position in between fails.  This is the loop's one genuine
    hand proof: the fuel decreases in lockstep with the position, so
    induction on `k` generalizing `start` aligns the two fuel
    expressions at every step. -/
theorem searchRef_eq_of_none_prefix (p : PcreParsed) (subj : List Nat) :
    ∀ (k start : Nat), start + k ≤ subj.length + 1 →
      (∀ q, start ≤ q → q < start + k → pcreFirst p subj q = none) →
      searchRef p subj (start + k) (subj.length + 1 - (start + k)) =
        searchRef p subj start (subj.length + 1 - start) := by
  intro k
  induction k with
  | zero => intro start _ _; rfl
  | succ k ih =>
      intro start hbound hfail
      have hstep : searchRef p subj start (subj.length + 1 - start) =
          searchRef p subj (start + 1) (subj.length + 1 - (start + 1)) := by
        have hle : start ≤ subj.length := by omega
        have hf : subj.length + 1 - start = (subj.length - start) + 1 := by omega
        have hf2 : subj.length + 1 - (start + 1) = subj.length - start := by omega
        rw [hf, searchRef_step_none p subj start (subj.length - start)
          (hfail start (by omega) (by omega)), hf2]
      have hih := ih (start + 1) (by omega) (fun q hq1 hq2 =>
        hfail q (by omega) (by omega))
      have harg : start + (k + 1) = (start + 1) + k := by omega
      rw [harg, hih, hstep]

/-- The same prefix fact at the `searchFrom` level. -/
theorem searchFrom_eq_of_none_prefix (p : PcreParsed) (subj : List Nat)
    (k : Nat) (hk : k ≤ subj.length + 1)
    (hfail : ∀ q, q < k → pcreFirst p subj q = none) :
    searchFrom p subj k = searchFrom p subj 0 := by
  have hk' : 0 + k ≤ subj.length + 1 := by omega
  have h := searchRef_eq_of_none_prefix p subj k 0 hk'
    (fun q _ hq => hfail q (by omega))
  rw [Nat.zero_add] at h
  exact h

/-- `searchFrom` at a succeeding position, with the fuel arithmetic
    discharged once here so vcgen's discharge never has to synthesize
    it. -/
theorem searchFrom_step_some (p : PcreParsed) (subj : List Nat)
    (pos : Nat) (hpos : pos ≤ subj.length) (res : MResult)
    (h : pcreFirst p subj pos = some res) :
    searchFrom p subj pos = some (pos, res) := by
  have hf : subj.length + 1 - pos = (subj.length - pos) + 1 := by omega
  unfold searchFrom
  rw [hf]
  exact searchRef_step_some p subj pos (subj.length - pos) res h

/-- `searchFrom` at a failing position steps to the next position. -/
theorem searchFrom_step_none (p : PcreParsed) (subj : List Nat)
    (pos : Nat) (hpos : pos ≤ subj.length)
    (h : pcreFirst p subj pos = none) :
    searchFrom p subj pos = searchFrom p subj (pos + 1) := by
  have hf : subj.length + 1 - pos = (subj.length - pos) + 1 := by omega
  have hf2 : subj.length + 1 - (pos + 1) = subj.length - pos := by omega
  unfold searchFrom
  rw [hf, hf2]
  exact searchRef_step_none p subj pos (subj.length - pos) h

/-- Procedural search state: the subject (read-only in the loop, but
    carried in the state so the invariant names it), the scan
    position, and the result once found. -/
structure SearchState where
  subj : List Nat
  pos : Nat
  found : Option (Nat × MResult)
deriving DecidableEq

/-- The procedural first-match search, in do-notation `StateM`
    style: step the position until `pcreFirst` succeeds or the
    subject is exhausted.  `subj0` is a ghost parameter in the
    pilot's sense: the code reads only the state, but the invariant
    names the original problem. -/
def searchM (p : PcreParsed) (subj0 : List Nat) :
    StateM SearchState (Option (Nat × MResult)) := do
  while h : (← get).found = none ∧ (← get).pos ≤ subj0.length
    invariant exit s =>
      s.subj = subj0 ∧
      (∀ q, q < s.pos → pcreFirst p subj0 q = none) ∧
      (match s.found with
       | none => searchFrom p subj0 s.pos = searchFrom p subj0 0
       | some f => some f = searchFrom p subj0 0) ∧
      (exit = true → s.found ≠ none ∨ s.pos > subj0.length)
    decreasing s => (subj0.length + 1 - s.pos) * 2 +
      (if s.found = none then 1 else 0)
  do
    let s ← get
    match pcreFirst p s.subj s.pos with
    | some res => set (⟨s.subj, s.pos, some (s.pos, res)⟩ : SearchState)
    | none => set (⟨s.subj, s.pos + 1, none⟩ : SearchState)
  let sf ← get
  return sf.found

theorem searchM_spec (p : PcreParsed) (subj0 : List Nat) :
    ⦃fun s => s.subj = subj0 ∧ s.pos = 0 ∧ s.found = none⦄
    searchM p subj0
    ⦃fun r _ => r = searchFrom p subj0 0⦄ := by
  vcgen +jp [searchM]
  all_goals (try grind [searchRef_step_none, searchRef_step_some,
    searchFrom_step_none, searchFrom_step_some,
    searchFrom_eq_of_none_prefix, searchFrom_gt])
  all_goals (try grind [searchRef, searchFrom, searchRef_step_none,
    searchRef_step_some, searchFrom_step_none, searchFrom_step_some,
    searchFrom_eq_of_none_prefix, searchFrom_gt])

/-- The wp form of the search correctness statement at the initial
    state, proved by the same vcgen battery (the bridge to the run
    equality, per the pilot's plumbing note). -/
theorem searchM_wp (p : PcreParsed) (subj0 : List Nat) :
    Std.WP.wp (searchM p subj0)
      (fun a _ => a = searchFrom p subj0 0) ()
      ⟨subj0, 0, none⟩ := by
  vcgen +jp [searchM]
  all_goals (try grind [searchRef_step_none, searchRef_step_some,
    searchFrom_step_none, searchFrom_step_some,
    searchFrom_eq_of_none_prefix, searchFrom_gt])
  all_goals (try grind [searchRef, searchFrom, searchRef_step_none,
    searchRef_step_some, searchFrom_step_none, searchFrom_step_some,
    searchFrom_eq_of_none_prefix, searchFrom_gt])

/-- Run the procedural search on a fresh state. -/
def runSearch (p : PcreParsed) (subj : List Nat) :
    Option (Nat × MResult) :=
  ((searchM p subj).run ⟨subj, 0, none⟩).1

/-- Headline agreement: the procedural `StateM` search computes
    exactly the pure first-match search. -/
theorem runSearch_eq (p : PcreParsed) (subj : List Nat) :
    runSearch p subj = searchFrom p subj 0 := by
  have h := Std.WP.StateM.of_run_eq_wp (prog := searchM p subj)
    (s := (⟨subj, 0, none⟩ : SearchState))
    (x := (searchM p subj).run ⟨subj, 0, none⟩) rfl
    (P := fun q : Option (Nat × MResult) × SearchState =>
      q.1 = searchFrom p subj 0)
  exact h (searchM_wp p subj)

end LeanFtml
