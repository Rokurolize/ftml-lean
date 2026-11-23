import LeanFtml.ModuleRules

namespace LeanFtml.ModuleLastByteProof

/-!
Universal facts about `lastConsumedByte`, the lookbehind carrier shared by
`modulepreScan`, `moduleScanPass`, `module654Scan`, `countModuleOpeners` and
`insertInlineOpenerNewlinesGo`. Every statement is about the definitions in
`ModuleRules.lean` on arbitrary byte lists: no corpus, no evaluation, no
assumption about how a match function computes its residual beyond what is
stated explicitly as a hypothesis.
-/

/-- The definition, stated as a theorem for use in rewriting. -/
theorem lastConsumedByte_eq_take (src rest' : List Nat) :
    lastConsumedByte src rest' = (src.take (src.length - rest'.length)).getLast? := rfl

/-- Residual-split form: for any decomposition `src = pre ++ rest'`, the
    carried byte is `pre.getLast?`. This includes `pre = []`, where both
    sides are `none`. -/
theorem lastConsumedByte_append (pre rest' : List Nat) :
    lastConsumedByte (pre ++ rest') rest' = pre.getLast? := by
  simp [lastConsumedByte, List.length_append]

/-- The same statement with the decomposition supplied as a hypothesis. -/
theorem lastConsumedByte_of_suffix (src pre rest' : List Nat)
    (h : src = pre ++ rest') :
    lastConsumedByte src rest' = pre.getLast? := by
  rw [h]
  exact lastConsumedByte_append pre rest'

/-- Nonempty consumed prefix: the result is `some` of that prefix's last
    byte, the exact form the scanners carry as their `prev` argument. -/
theorem lastConsumedByte_append_of_ne_nil (pre rest' : List Nat) (hpre : pre ≠ []) :
    lastConsumedByte (pre ++ rest') rest' = some (pre.getLast hpre) := by
  rw [lastConsumedByte_append]
  exact List.getLast?_eq_some_getLast hpre

/-- Empty residual: the whole subject is consumed. -/
theorem lastConsumedByte_nil (src : List Nat) :
    lastConsumedByte src [] = src.getLast? := by
  simp [lastConsumedByte]

/-- Empty consumed prefix: nothing precedes the residual. -/
theorem lastConsumedByte_self (src : List Nat) :
    lastConsumedByte src src = none := by
  simp [lastConsumedByte]

/-- A residual at least as long as the subject consumes no byte, so the
    carried lookbehind is `none`. -/
theorem lastConsumedByte_eq_none_of_length_le (src rest' : List Nat)
    (h : src.length ≤ rest'.length) :
    lastConsumedByte src rest' = none := by
  simp [lastConsumedByte, Nat.sub_eq_zero_of_le h]

/-- The line-start guard, literally the condition tested by every
    Module-family scanner before attempting a match. -/
def lineStartGuard (prev : Option Nat) : Bool :=
  prev == none || prev == some 10

/-- The guard is true exactly for `none` (subject start) and `some 10`
    (the byte just consumed was LF). -/
theorem lineStartGuard_eq_true_iff (prev : Option Nat) :
    lineStartGuard prev = true ↔ prev = none ∨ prev = some 10 := by
  cases prev with
  | none => simp [lineStartGuard]
  | some n => simp [lineStartGuard]

/-- Its complement: every other predecessor is `some n` with `n ≠ 10`. -/
theorem lineStartGuard_eq_false_iff (prev : Option Nat) :
    lineStartGuard prev = false ↔ ∃ n, prev = some n ∧ n ≠ 10 := by
  cases prev with
  | none => simp [lineStartGuard]
  | some n => simp [lineStartGuard]

/-- Every Module-family scan starts with `prev = none`, a line start. -/
theorem lineStartGuard_none : lineStartGuard none = true := by
  simp [lineStartGuard]

/-- After any copied byte `b`, the guard is true exactly when `b` is LF. -/
theorem lineStartGuard_some (n : Nat) :
    lineStartGuard (some n) = true ↔ n = 10 := by
  simp [lineStartGuard]

/-- `prev` is the lookbehind of `src` inside `subject`: the bytes before
    `src` are `pre`, and `prev = pre.getLast?`. Thus `prev = none` says the
    scan is at the subject start, and `prev = some 10` says it is right
    after an LF byte. -/
def Lookbehind (prev : Option Nat) (subject src : List Nat) : Prop :=
  ∃ pre tail, subject = pre ++ src ++ tail ∧ prev = pre.getLast?

/-- For a known consumed prefix, the guard is true exactly when the prefix
    is empty (subject start) or ends in the LF byte 10. -/
theorem lineStartGuard_iff_pre_line_start (prev : Option Nat) (pre : List Nat)
    (hprev : prev = pre.getLast?) :
    lineStartGuard prev = true ↔ pre = [] ∨ ∃ q, pre = q ++ [10] := by
  rw [lineStartGuard_eq_true_iff, hprev]
  constructor
  · intro h
    rcases h with h | h
    · exact Or.inl (List.getLast?_eq_none_iff.mp h)
    · exact Or.inr (List.getLast?_eq_some_iff.mp h)
  · intro h
    rcases h with h | h
    · left
      rw [h]
      simp
    · rcases h with ⟨q, rfl⟩
      right
      simp

/-- Copy step: the scanners' `b :: ... (some b) rest ...` branches consume
    one byte `b`, so the lookbehind of the remainder is `some b`. -/
theorem lookbehind_cons_step (subject : List Nat)
    (pre : List Nat) (b : Nat) (rest tail : List Nat)
    (hsub : subject = pre ++ (b :: rest) ++ tail) :
    Lookbehind (some b) subject rest := by
  refine ⟨pre ++ [b], tail, ?_, ?_⟩
  · calc
      subject = pre ++ (b :: rest) ++ tail := hsub
      _ = (pre ++ [b]) ++ rest ++ tail := by simp [List.append_assoc]
  · simp [List.getLast?_append]

/-- Match step: when the match consumes the nonempty prefix `mid` of `src`
    and leaves `rest'`, the scanners carry `lastConsumedByte src rest'`;
    this is the lookbehind of `rest'` in the same subject. -/
theorem lookbehind_match_step (prev : Option Nat) (subject src : List Nat)
    (hLB : Lookbehind prev subject src) (mid rest' : List Nat)
    (hsrc : src = mid ++ rest') (hmid : mid ≠ []) :
    Lookbehind (lastConsumedByte src rest') subject rest' := by
  rcases hLB with ⟨pre, tail, hsub, hprev⟩
  refine ⟨pre ++ mid, tail, ?_, ?_⟩
  · calc
      subject = pre ++ src ++ tail := hsub
      _ = (pre ++ mid) ++ rest' ++ tail := by rw [hsrc]; simp [List.append_assoc]
  · rw [hsrc, lastConsumedByte_append, List.getLast?_append]
    have hmidsome : ∃ b, mid.getLast? = some b := by
      refine ⟨mid.getLast hmid, ?_⟩
      exact List.getLast?_eq_some_getLast hmid
    rcases hmidsome with ⟨b, hb⟩
    rw [hb]
    simp

/-- Guard at a match successor, stated without any hypothesis on how the
    residual was obtained: it is the line-start test on the consumed span. -/
theorem lineStartGuard_after_match (mid rest' : List Nat) :
    lineStartGuard (lastConsumedByte (mid ++ rest') rest') = true ↔
      mid = [] ∨ ∃ q, mid = q ++ [10] := by
  apply lineStartGuard_iff_pre_line_start
  exact lastConsumedByte_append mid rest'

/-!
Named gap: `lookbehind_match_step` assumes the match residual `rest'` is a
proper suffix of `src` (`src = mid ++ rest'` with `mid` nonempty). The
mirror's match functions build their residual with `drop` from `moduleHead`,
`moduleTail` and `module654Tail`, but no universal suffix lemma for those
matchers is proved in this file. Every theorem above is either unconditional
or carries its hypothesis explicitly; nothing is assumed silently.
-/

#print axioms lastConsumedByte_eq_take
#print axioms lastConsumedByte_append
#print axioms lastConsumedByte_of_suffix
#print axioms lastConsumedByte_append_of_ne_nil
#print axioms lastConsumedByte_nil
#print axioms lastConsumedByte_self
#print axioms lastConsumedByte_eq_none_of_length_le
#print axioms lineStartGuard_eq_true_iff
#print axioms lineStartGuard_eq_false_iff
#print axioms lineStartGuard_none
#print axioms lineStartGuard_some
#print axioms lineStartGuard_iff_pre_line_start
#print axioms lookbehind_cons_step
#print axioms lookbehind_match_step
#print axioms lineStartGuard_after_match

end LeanFtml.ModuleLastByteProof
