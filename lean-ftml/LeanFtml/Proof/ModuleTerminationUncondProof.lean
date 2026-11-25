/-
  LeanFtml.Proof.ModuleTerminationUncondProof — unconditional termination
  of the Module rewrite loop at the mirror's own `src.length + 1` fuel.

  The first part is the fleet's universal lexicographic scan-step development
  (copied without its unused bounded closer-completeness import), giving exact
  `[`-byte count laws and unconditional byte stability.  The second part adds
  the width-two head-charging measure used to discharge the fuel hypothesis.
-/

import LeanFtml.ModuleTerminationProof
import LeanFtml.ModuleMeasureStepProof
import LeanFtml.ModuleTokenTableProof
import LeanFtml.ModulePassTokenStabilityProof
import LeanFtml.ModuleCandidatesProof
import LeanFtml.ModuleDefenseLemmas
import LeanFtml.ModuleDefenseRewriteProof
import LeanFtml.ModuleFindSubProof

set_option maxHeartbeats 20000000
set_option maxRecDepth 400000

namespace LeanFtml.ModuleTerminationUncondProof

open ModuleMeasureStepProof ModuleTokenTableProof
  ModulePassTokenStabilityProof ModuleCandidatesProof
  ModuleDefenseLemmas ModuleDefenseRewriteProof ModuleFindSubProof

/-! ## The `[`-byte count and its exact additivity -/

/-- The number of `[` bytes (byte 91) in a byte string. -/
def count91 (src : List Nat) : Nat := src.count 91

theorem count91_append (l₁ l₂ : List Nat) :
    count91 (l₁ ++ l₂) = count91 l₁ + count91 l₂ := by
  simp [count91, List.count_append]

theorem count91_cons (b : Nat) (l : List Nat) :
    count91 (b :: l) = (if b = 91 then count91 l + 1 else count91 l) := by
  by_cases hb : b = 91 <;> simp [count91, List.count_cons, hb]

/-- A leading newline byte contributes nothing to the `[` count. -/
theorem count91_cons_ten (l : List Nat) : count91 (10 :: l) = count91 l := by
  rw [count91_cons]
  simp

theorem count91_phBytes (n : Nat) : count91 (phBytes n) = 0 := by
  rw [count91, List.count_eq_zero]
  exact phBytes_ne_91 n

theorem count91_nil : count91 ([] : List Nat) = 0 := by decide

theorem count91_take_le (n : Nat) (src : List Nat) :
    count91 (src.take n) ≤ count91 src := by
  calc count91 (src.take n) ≤ count91 (src.take n) + count91 (src.drop n) :=
        Nat.le_add_right _ _
    _ = count91 (src.take n ++ src.drop n) := (count91_append _ _).symm
    _ = count91 src := by rw [List.take_append_drop]

/-! ## Case-insensitive matching never creates or destroys a `[` -/

theorem swapByteCase_eq_91 {p : Nat} (h : swapByteCase p = 91) : p = 91 := by
  by_cases h1 : (decide (97 ≤ p) && decide (p ≤ 122)) = true
  · have hb : 97 ≤ p ∧ p ≤ 122 := by
      have h1a : decide (97 ≤ p) = true := by
        cases hd : decide (97 ≤ p) with
        | true => rfl
        | false => rw [hd] at h1; simp at h1
      have h1b : decide (p ≤ 122) = true := by
        cases hd : decide (p ≤ 122) with
        | true => rfl
        | false => rw [hd] at h1; simp at h1
      exact ⟨of_decide_eq_true h1a, of_decide_eq_true h1b⟩
    have e : swapByteCase p = p - 32 := by
      unfold swapByteCase
      rw [if_pos h1]
    omega
  · by_cases h2 : (decide (65 ≤ p) && decide (p ≤ 90)) = true
    · have hb : 65 ≤ p ∧ p ≤ 90 := by
        have h2a : decide (65 ≤ p) = true := by
          cases hd : decide (65 ≤ p) with
          | true => rfl
          | false => rw [hd] at h2; simp at h2
        have h2b : decide (p ≤ 90) = true := by
          cases hd : decide (p ≤ 90) with
          | true => rfl
          | false => rw [hd] at h2; simp at h2
        exact ⟨of_decide_eq_true h2a, of_decide_eq_true h2b⟩
      have e : swapByteCase p = p + 32 := by
        unfold swapByteCase
        rw [if_neg h1, if_pos h2]
      omega
    · have e : swapByteCase p = p := by
        unfold swapByteCase
        rw [if_neg h1, if_neg h2]
      omega

/-- Exact byte predicate underlying `matchLitCI`: a byte matches a
    pattern byte when it is that byte or its ASCII case swap. -/
theorem mtu_byteCiEq (x p : Nat) :
    byteCiEq x p = true ↔ x = p ∨ x = swapByteCase p := by
  simp [byteCiEq, beq_iff_eq]

/-- Under a case-insensitive byte match, one side is byte 91 iff the
    other is: 91 is not a letter, and case swapping only moves
    letters within the letter ranges. -/
theorem byteCiEq_eq_91 {x p : Nat} (h : byteCiEq x p = true) :
    (x = 91 ↔ p = 91) := by
  rw [mtu_byteCiEq] at h
  rcases h with rfl | h2
  · exact Iff.rfl
  · constructor
    · intro hx
      rw [hx] at h2
      exact swapByteCase_eq_91 h2.symm
    · intro hp
      rw [hp] at h2
      have h91 : swapByteCase 91 = 91 := by decide
      rw [h91] at h2
      exact h2

theorem swapByteCase_eq_93 {p : Nat} (h : swapByteCase p = 93) : p = 93 := by
  by_cases h1 : (decide (97 ≤ p) && decide (p ≤ 122)) = true
  · have hb : 97 ≤ p ∧ p ≤ 122 := by
      have h1a : decide (97 ≤ p) = true := by
        cases hd : decide (97 ≤ p) with
        | true => rfl
        | false => rw [hd] at h1; simp at h1
      have h1b : decide (p ≤ 122) = true := by
        cases hd : decide (p ≤ 122) with
        | true => rfl
        | false => rw [hd] at h1; simp at h1
      exact ⟨of_decide_eq_true h1a, of_decide_eq_true h1b⟩
    have e : swapByteCase p = p - 32 := by
      unfold swapByteCase
      rw [if_pos h1]
    omega
  · by_cases h2 : (decide (65 ≤ p) && decide (p ≤ 90)) = true
    · have hb : 65 ≤ p ∧ p ≤ 90 := by
        have h2a : decide (65 ≤ p) = true := by
          cases hd : decide (65 ≤ p) with
          | true => rfl
          | false => rw [hd] at h2; simp at h2
        have h2b : decide (p ≤ 90) = true := by
          cases hd : decide (p ≤ 90) with
          | true => rfl
          | false => rw [hd] at h2; simp at h2
        exact ⟨of_decide_eq_true h2a, of_decide_eq_true h2b⟩
      have e : swapByteCase p = p + 32 := by
        unfold swapByteCase
        rw [if_neg h1, if_pos h2]
      omega
    · have e : swapByteCase p = p := by
        unfold swapByteCase
        rw [if_neg h1, if_neg h2]
      omega

/-- Case-insensitive matching also cannot move byte 93 (`]`): it is outside
    both ASCII letter ranges. -/
theorem byteCiEq_eq_93 {x p : Nat} (h : byteCiEq x p = true) :
    (x = 93 ↔ p = 93) := by
  rw [mtu_byteCiEq] at h
  rcases h with rfl | h2
  · exact Iff.rfl
  · constructor
    · intro hx
      rw [hx] at h2
      exact swapByteCase_eq_93 h2.symm
    · intro hp
      rw [hp] at h2
      have h93 : swapByteCase 93 = 93 := by decide
      rw [h93] at h2
      exact h2

/-- A case-insensitive literal match preserves the `[` count of the
    matched prefix exactly. -/
theorem matchLitCI_count91_take {pat : List Nat} :
    ∀ {src rest : List Nat}, matchLitCI pat src = some rest →
      count91 (src.take pat.length) = count91 pat := by
  induction pat with
  | nil =>
      intro src rest _
      simp [count91]
  | cons p pat ih =>
      intro src rest h
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x src =>
          have hstep : byteCiEq x p = true ∧ matchLitCI pat src = some rest := by
            by_cases hc : byteCiEq x p = true
            · exact ⟨hc, by simpa [matchLitCI, hc] using h⟩
            · simp [matchLitCI, hc] at h
          have ih' := ih hstep.2
          have hiff := byteCiEq_eq_91 hstep.1
          have htake : (x :: src).take (p :: pat).length
              = x :: src.take pat.length := by
            simp [List.take_succ_cons]
          rw [htake, count91_cons, count91_cons, ih']
          by_cases hx : x = 91
          · rw [if_pos hx, if_pos (hiff.mp hx)]
          · rw [if_neg hx, if_neg (fun hp => hx (hiff.mpr hp))]

/-- The first two bytes of a successful `[[module` match are exactly
    `[`, `[`. -/
theorem matchLitCI_two_91 {src rest : List Nat}
    (h : matchLitCI (litBytes "[[module") src = some rest) :
    src.take 2 = [91, 91] := by
  cases src with
  | nil => simp [matchLitCI, litBytes] at h
  | cons b bs =>
      have hb : b = 91 := by
        by_cases hb91 : b = 91
        · exact hb91
        · have hci : byteCiEq b 91 = false := by
            simp [byteCiEq, swapByteCase, hb91]
          simp [matchLitCI, litBytes, hci] at h
      cases bs with
      | nil => simp [matchLitCI, litBytes, hb] at h
      | cons c cs =>
          have hc : c = 91 := by
            by_cases hc91 : c = 91
            · exact hc91
            · have hci : byteCiEq c 91 = false := by
                simp [byteCiEq, swapByteCase, hc91]
              simp [matchLitCI, litBytes, hb, hci] at h
          simp [hb, hc]

/-! ## The defense rewrite preserves `count91` and grows on change -/

/-- One strong induction proves all three facts about the defense's
    newline-insertion pass at canonical fuel: it preserves the `[`
    count, it never shrinks the text, and if the length is unchanged
    the text is unchanged. -/
theorem go_props_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat), src.length = n →
      count91 (insertInlineOpenerNewlinesGo prev src (src.length + 1))
          = count91 src ∧
        src.length
          ≤ (insertInlineOpenerNewlinesGo prev src (src.length + 1)).length ∧
        ((insertInlineOpenerNewlinesGo prev src (src.length + 1)).length
            = src.length →
          insertInlineOpenerNewlinesGo prev src (src.length + 1) = src) := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src hlen
      cases src with
      | nil => simp [insertInlineOpenerNewlinesGo, count91]
      | cons b rest =>
          have hlen' : rest.length + 1 = n := by simpa using hlen
          by_cases hstart : (prev == none || prev == some 10) = true
          · have hstartp : prev = none ∨ prev = some 10 := by simpa using hstart
            cases hm : moduleHeadEnd (b :: rest) with
            | none =>
                have ihr := ih rest.length (by omega) (some b) rest rfl
                refine ⟨?_, ?_, ?_⟩
                · have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                      ((b :: rest).length + 1)
                      = b :: insertInlineOpenerNewlinesGo (some b) rest
                          (rest.length + 1) := by
                    simp [insertInlineOpenerNewlinesGo, hstartp, hm]
                  rw [e, count91_cons, count91_cons, ihr.1]
                · have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                      ((b :: rest).length + 1)
                      = b :: insertInlineOpenerNewlinesGo (some b) rest
                          (rest.length + 1) := by
                    simp [insertInlineOpenerNewlinesGo, hstartp, hm]
                  rw [e]
                  simp only [List.length_cons]
                  omega
                · intro hlenEq
                  have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                      ((b :: rest).length + 1)
                      = b :: insertInlineOpenerNewlinesGo (some b) rest
                          (rest.length + 1) := by
                    simp [insertInlineOpenerNewlinesGo, hstartp, hm]
                  rw [e] at hlenEq ⊢
                  simp only [List.length_cons] at hlenEq
                  have := ihr.2.2 (by omega)
                  rw [this]
            | some n' =>
                have hspec := moduleHeadEnd_eq_some_spec (b :: rest) n' hm
                rcases hspec with ⟨hnpos, hnle, -⟩
                obtain ⟨after, hafter⟩ : ∃ a, a = (b :: rest).drop n' :=
                  ⟨_, rfl⟩
                have hafterlen : after.length = (b :: rest).length - n' := by
                  simp [hafter, List.length_drop]
                have hrecEq : ∀ (p : Option Nat),
                    insertInlineOpenerNewlinesGo p after ((b :: rest).length)
                      = insertInlineOpenerNewlinesGo p after
                          (after.length + 1) :=
                  fun p => go_fuel_irrelevant p after (by omega) (by omega)
                have iha := ih after.length (by omega) (some 93) after rfl
                have iha10 := ih after.length (by omega) (some 10) after rfl
                have htakelen : ((b :: rest).take n').length = n' := by
                  rw [List.length_take]
                  exact Nat.min_eq_left hnle
                have hsplit : count91 (b :: rest)
                    = count91 ((b :: rest).take n') + count91 after := by
                  have hdecomp : (b :: rest)
                      = (b :: rest).take n' ++ after := by
                    rw [hafter]
                    exact (List.take_append_drop n' (b :: rest)).symm
                  calc count91 (b :: rest)
                      = count91 ((b :: rest).take n' ++ after) :=
                        congrArg count91 hdecomp
                    _ = count91 ((b :: rest).take n') + count91 after :=
                        count91_append _ _
                have hsplitlen : (b :: rest).length
                    = ((b :: rest).take n').length + after.length := by
                  rw [htakelen, hafterlen]
                  omega
                by_cases hsn : spacesThenNewline after = true
                · refine ⟨?_, ?_, ?_⟩
                  · have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n'
                          ++ insertInlineOpenerNewlinesGo (some 93) after
                              (after.length + 1) := by
                      have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                          ((b :: rest).length + 1)
                          = (b :: rest).take n'
                            ++ insertInlineOpenerNewlinesGo (some 93) after
                                ((b :: rest).length) := by
                        have hstep := go_step_line_terminated prev (b :: rest)
                            ((b :: rest).length + 1) (by omega) hstart n' hm
                            (by rw [← hafter]; exact hsn)
                        rw [Nat.add_sub_cancel] at hstep
                        rw [← hafter] at hstep
                        exact hstep
                      rw [e0, hrecEq]
                    rw [e, count91_append, iha.1]
                    omega
                  · have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n'
                          ++ insertInlineOpenerNewlinesGo (some 93) after
                              (after.length + 1) := by
                      have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                          ((b :: rest).length + 1)
                          = (b :: rest).take n'
                            ++ insertInlineOpenerNewlinesGo (some 93) after
                                ((b :: rest).length) := by
                        have hstep := go_step_line_terminated prev (b :: rest)
                            ((b :: rest).length + 1) (by omega) hstart n' hm
                            (by rw [← hafter]; exact hsn)
                        rw [Nat.add_sub_cancel] at hstep
                        rw [← hafter] at hstep
                        exact hstep
                      rw [e0, hrecEq]
                    rw [e, List.length_append]
                    omega
                  · intro hlenEq
                    have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n'
                          ++ insertInlineOpenerNewlinesGo (some 93) after
                              (after.length + 1) := by
                      have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                          ((b :: rest).length + 1)
                          = (b :: rest).take n'
                            ++ insertInlineOpenerNewlinesGo (some 93) after
                                ((b :: rest).length) := by
                        have hstep := go_step_line_terminated prev (b :: rest)
                            ((b :: rest).length + 1) (by omega) hstart n' hm
                            (by rw [← hafter]; exact hsn)
                        rw [Nat.add_sub_cancel] at hstep
                        rw [← hafter] at hstep
                        exact hstep
                      rw [e0, hrecEq]
                    rw [e] at hlenEq ⊢
                    rw [List.length_append] at hlenEq
                    have hia : (insertInlineOpenerNewlinesGo (some 93) after
                        (after.length + 1)).length = after.length := by omega
                    rw [iha.2.2 hia, hafter]
                    exact List.take_append_drop n' (b :: rest)
                · refine ⟨?_, ?_, ?_⟩
                  · have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n' ++ [10]
                          ++ insertInlineOpenerNewlinesGo (some 10) after
                              (after.length + 1) := by
                      have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                          ((b :: rest).length + 1)
                          = (b :: rest).take n' ++ [10]
                            ++ insertInlineOpenerNewlinesGo (some 10) after
                                ((b :: rest).length) := by
                        have hsnf : spacesThenNewline after = false := by
                          cases h : spacesThenNewline after with
                          | true => exact absurd h hsn
                          | false => rfl
                        have hstep := go_step_inline_inserts_lf prev (b :: rest)
                            ((b :: rest).length + 1) (by omega) hstart n' hm
                            (by rw [← hafter]; exact hsnf)
                        rw [Nat.add_sub_cancel] at hstep
                        rw [← hafter] at hstep
                        exact hstep
                      rw [e0, hrecEq]
                    rw [e, count91_append, count91_append, iha10.1]
                    have h10 : count91 [10] = 0 := by decide
                    omega
                  · have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n' ++ [10]
                          ++ insertInlineOpenerNewlinesGo (some 10) after
                              (after.length + 1) := by
                      have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                          ((b :: rest).length + 1)
                          = (b :: rest).take n' ++ [10]
                            ++ insertInlineOpenerNewlinesGo (some 10) after
                                ((b :: rest).length) := by
                        have hsnf : spacesThenNewline after = false := by
                          cases h : spacesThenNewline after with
                          | true => exact absurd h hsn
                          | false => rfl
                        have hstep := go_step_inline_inserts_lf prev (b :: rest)
                            ((b :: rest).length + 1) (by omega) hstart n' hm
                            (by rw [← hafter]; exact hsnf)
                        rw [Nat.add_sub_cancel] at hstep
                        rw [← hafter] at hstep
                        exact hstep
                      rw [e0, hrecEq]
                    rw [e, List.length_append, List.length_append]
                    simp only [List.length_cons, List.length_nil]
                    omega
                  · intro hlenEq
                    have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n' ++ [10]
                          ++ insertInlineOpenerNewlinesGo (some 10) after
                              (after.length + 1) := by
                      have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                          ((b :: rest).length + 1)
                          = (b :: rest).take n' ++ [10]
                            ++ insertInlineOpenerNewlinesGo (some 10) after
                                ((b :: rest).length) := by
                        have hsnf : spacesThenNewline after = false := by
                          cases h : spacesThenNewline after with
                          | true => exact absurd h hsn
                          | false => rfl
                        have hstep := go_step_inline_inserts_lf prev (b :: rest)
                            ((b :: rest).length + 1) (by omega) hstart n' hm
                            (by rw [← hafter]; exact hsnf)
                        rw [Nat.add_sub_cancel] at hstep
                        rw [← hafter] at hstep
                        exact hstep
                      rw [e0, hrecEq]
                    rw [e] at hlenEq
                    rw [List.length_append, List.length_append] at hlenEq
                    simp only [List.length_cons, List.length_nil] at hlenEq
                    omega
          · have hstartf : (prev == none || prev == some 10) = false := by
              cases hc : (prev == none || prev == some 10) with
              | true => exact absurd hc hstart
              | false => rfl
            have hstartp : ¬ (prev = none ∨ prev = some 10) := by
              intro hdis
              apply hstart
              rcases hdis with rfl | rfl <;> simp
            have ihr := ih rest.length (by omega) (some b) rest rfl
            refine ⟨?_, ?_, ?_⟩
            · have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                  ((b :: rest).length + 1)
                  = b :: insertInlineOpenerNewlinesGo (some b) rest
                      (rest.length + 1) := by
                simp [insertInlineOpenerNewlinesGo, hstartp]
              rw [e, count91_cons, count91_cons, ihr.1]
            · have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                  ((b :: rest).length + 1)
                  = b :: insertInlineOpenerNewlinesGo (some b) rest
                      (rest.length + 1) := by
                simp [insertInlineOpenerNewlinesGo, hstartp]
              rw [e]
              simp only [List.length_cons]
              omega
            · intro hlenEq
              have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                  ((b :: rest).length + 1)
                  = b :: insertInlineOpenerNewlinesGo (some b) rest
                      (rest.length + 1) := by
                simp [insertInlineOpenerNewlinesGo, hstartp]
              rw [e] at hlenEq ⊢
              simp only [List.length_cons] at hlenEq
              have := ihr.2.2 (by omega)
              rw [this]

theorem insertInlineOpenerNewlines_count91 (src : List Nat) :
    count91 (insertInlineOpenerNewlines src) = count91 src :=
  (go_props_aux src.length none src rfl).1

theorem insertInlineOpenerNewlines_length_ge (src : List Nat) :
    src.length ≤ (insertInlineOpenerNewlines src).length :=
  (go_props_aux src.length none src rfl).2.1

theorem insertInlineOpenerNewlines_eq_of_length_eq {src : List Nat}
    (h : (insertInlineOpenerNewlines src).length = src.length) :
    insertInlineOpenerNewlines src = src :=
  (go_props_aux src.length none src rfl).2.2 h

theorem rewriteModulePrefix_count91 (m : List Nat) :
    count91 (rewriteModulePrefix m) = count91 m := by
  cases hb : (m.take 8 == litBytes "[[module") with
  | false =>
      simp [rewriteModulePrefix, hb]
  | true =>
      have htake : m.take 8 = litBytes "[[module" := by simpa using hb
      have c1 : count91 (litBytes "[[module654") = 2 := by decide
      have c2 : count91 (litBytes "[[module") = 2 := by decide
      calc count91 (rewriteModulePrefix m)
          = count91 (litBytes "[[module654" ++ m.drop 8) := by
            simp [rewriteModulePrefix, hb]
        _ = 2 + count91 (m.drop 8) := by rw [count91_append, c1]
        _ = count91 (m.take 8) + count91 (m.drop 8) := by rw [htake, c2]
        _ = count91 m := by rw [← count91_append, List.take_append_drop]

theorem rewriteModulePrefix_length_ge (m : List Nat) :
    m.length ≤ (rewriteModulePrefix m).length := by
  have h := rewriteModulePrefix_length m
  by_cases hb : (m.take 8 == litBytes "[[module") = true
  · rw [hb] at h
    simp at h
    omega
  · have hb' : (m.take 8 == litBytes "[[module") = false := by
      cases hbb : (m.take 8 == litBytes "[[module") with
      | true => exact absurd hbb hb
      | false => rfl
    rw [hb'] at h
    simp at h
    omega

/-- The full defense replacement preserves the `[` count. -/
theorem defense_count91 (m : List Nat) :
    count91 (rewriteModulePrefix (insertInlineOpenerNewlines m))
      = count91 m := by
  rw [rewriteModulePrefix_count91, insertInlineOpenerNewlines_count91]

theorem defense_length_ge (m : List Nat) :
    m.length ≤ (rewriteModulePrefix (insertInlineOpenerNewlines m)).length :=
  Nat.le_trans (insertInlineOpenerNewlines_length_ge m)
    (rewriteModulePrefix_length_ge _)

/-- A defense that changes the text strictly grows it. -/
theorem defense_strict_length {m : List Nat}
    (h : rewriteModulePrefix (insertInlineOpenerNewlines m) ≠ m) :
    m.length < (rewriteModulePrefix (insertInlineOpenerNewlines m)).length := by
  by_cases hi : insertInlineOpenerNewlines m = m
  · have hne : rewriteModulePrefix m ≠ m := by
      intro hcon
      apply h
      rw [hi]
      exact hcon
    have hlen := rewriteModulePrefix_length m
    cases hb : (m.take 8 == litBytes "[[module") with
    | false =>
        exfalso
        apply hne
        simp [rewriteModulePrefix, hb]
    | true =>
        rw [hb] at hlen
        simp at hlen
        have : (rewriteModulePrefix (insertInlineOpenerNewlines m)).length
            = m.length + 3 := by
          rw [hi]
          exact hlen
        omega
  · have hlt : m.length < (insertInlineOpenerNewlines m).length := by
      have hge := insertInlineOpenerNewlines_length_ge m
      by_cases hcon : (insertInlineOpenerNewlines m).length ≤ m.length
      · exfalso
        have heq : (insertInlineOpenerNewlines m).length = m.length := by omega
        exact hi (insertInlineOpenerNewlines_eq_of_length_eq heq)
      · omega
    have hge := rewriteModulePrefix_length_ge (insertInlineOpenerNewlines m)
    omega

/-! ## Decomposition of a successful tail and head -/

/-- A successful `moduleTail` splits its input into a space run, the
    byte 10, and a body start `B`; the result is then described
    exactly: either no closer (empty body, rest is `B`) or a closer
    found at `c`, whose eleven case-variant bytes have `[` count
    exactly two. -/
theorem moduleTail_spec {r bodyRaw rest' : List Nat}
    (h : moduleTail r = some (bodyRaw, rest')) :
    ∃ (wsPre B : List Nat), r = wsPre ++ 10 :: B ∧
      ((bodyRaw = [] ∧ rest' = B ∧
          findSubCI (litBytes "[[/module]]") (B.drop 1) = none) ∨
        (∃ (c : Nat) (closerVar : List Nat),
          findSubCI (litBytes "[[/module]]") (B.drop 1) = some c ∧
          bodyRaw = B.take (c + 1) ∧
          B.drop (c + 1) = closerVar ++ rest' ∧
          closerVar.length = 11 ∧ count91 closerVar = 2)) := by
  have hsplit : r = r.takeWhile (· == 32) ++ r.dropWhile (· == 32) :=
    List.takeWhile_append_dropWhile.symm
  cases haw : r.dropWhile (· == 32) with
  | nil =>
      exfalso
      simp [moduleTail, haw] at h
  | cons b B =>
      by_cases hb : b = 10
      · subst hb
        refine ⟨r.takeWhile (· == 32), B, ?_, ?_⟩
        · calc r = r.takeWhile (· == 32) ++ r.dropWhile (· == 32) := hsplit
            _ = r.takeWhile (· == 32) ++ 10 :: B := by rw [haw]
        · cases hf : findSubCI (litBytes "[[/module]]") (B.drop 1) with
          | none =>
              left
              refine ⟨?_, ?_, rfl⟩
              · have hmt : moduleTail r = some ([], B) := by
                  simp only [moduleTail, haw, hf]
                rw [hmt] at h
                exact (congrArg Prod.fst (Option.some.inj h)).symm
              · have hmt : moduleTail r = some ([], B) := by
                  simp only [moduleTail, haw, hf]
                rw [hmt] at h
                exact (congrArg Prod.snd (Option.some.inj h)).symm
          | some c =>
              right
              obtain ⟨pre, rest, hprelen, hmatch, hprerest, htake⟩ :=
                findSubCI_hit_decomp (litBytes "[[/module]]") (B.drop 1) c hf
              have hpatlen : (litBytes "[[/module]]").length = 11 := by decide
              have hprelen11 : pre.length = 11 := hprelen.trans hpatlen
              have hpre : count91 pre = 2 := by
                have h1 := matchLitCI_count91_take hmatch
                have h2 : ((B.drop 1).drop c).take (litBytes "[[/module]]").length
                    = pre := by
                  rw [← hprelen, ← hprerest]
                  exact List.take_left
                rw [h2] at h1
                have h3 : count91 (litBytes "[[/module]]") = 2 := by decide
                rw [h3] at h1
                exact h1
              have hdrop : B.drop (c + 1) = pre ++ rest := by
                have e1 : (B.drop 1).drop c = B.drop (c + 1) := by
                  rw [List.drop_drop, Nat.add_comm 1 c]
                rw [← e1]
                exact hprerest.symm
              have hrest' : rest' = rest := by
                have hmt : moduleTail r
                    = some (B.take (c + 1), (B.drop (c + 1)).drop 11) := by
                  simp only [moduleTail, haw, hf]
                rw [hmt] at h
                have h2 := congrArg Prod.snd (Option.some.inj h)
                rw [hdrop] at h2
                have h3 : (pre ++ rest).drop 11 = rest := by
                  have e : (pre ++ rest).drop pre.length = rest := List.drop_left
                  rw [hprelen11] at e
                  exact e
                exact h2.symm.trans h3
              refine ⟨c, pre, rfl, ?_, ?_, hprelen, hpre⟩
              · have hmt : moduleTail r
                    = some (B.take (c + 1), (B.drop (c + 1)).drop 11) := by
                  simp only [moduleTail, haw, hf]
                rw [hmt] at h
                exact (congrArg Prod.fst (Option.some.inj h)).symm
              · rw [hdrop, hrest']
      · exfalso
        have : moduleTail r = none := by
          simp [moduleTail, haw, hb]
        rw [this] at h
        contradiction

theorem takeWhile_drop (p : Nat → Bool) (l : List Nat) :
    l.takeWhile p ++ l.drop (l.takeWhile p).length = l := by
  induction l with
  | nil => simp
  | cons a l ih =>
      by_cases ha : p a = true
      · have h1 : (a :: l).takeWhile p = a :: l.takeWhile p := by
          simp [List.takeWhile, ha]
        rw [h1]
        simp only [List.length_cons, List.drop_succ_cons, List.cons_append]
        rw [ih]
      · have h1 : (a :: l).takeWhile p = [] := by
          simp [List.takeWhile, ha]
        rw [h1]
        simp

/-- A candidate of a successful `[[module` head sits behind a
    prefix of length at least ten (the eight head bytes, the
    whitespace byte, and a nonempty name), followed by the `]]` that
    ends the head and then the candidate's tail. -/
theorem moduleHead_cand_decomp {src name attrRaw r : List Nat}
    {cands : List (List Nat × List Nat)}
    (hhead : moduleHead (litBytes "[[module") src = some (name, cands))
    (hmem : (attrRaw, r) ∈ cands) :
    ∃ A : List Nat, src = A ++ [93, 93] ++ r ∧ 10 ≤ A.length := by
  obtain ⟨r0, hm0⟩ := moduleHead_matchLitCI_some hhead
  obtain ⟨pre, hprelen, hpresrc⟩ := matchLitCI_eq_some_decomp _ _ _ hm0
  have hprelen8 : pre.length = 8 := by
    rw [hprelen]
    decide
  cases r0 with
  | nil =>
      exfalso
      have hnone : moduleHead (litBytes "[[module") src = none := by
        unfold moduleHead
        rw [hm0]
      rw [hhead] at hnone
      contradiction
  | cons w rest2 =>
      have hw : isWsByte w = true := by
        by_cases hcon : isWsByte w = true
        · exact hcon
        · have hbf : isWsByte w = false := by
            cases h : isWsByte w with
            | true => exact absurd h hcon
            | false => rfl
          have hnone : moduleHead (litBytes "[[module") src = none := by
            unfold moduleHead
            rw [hm0]
            simp [hbf]
          rw [hhead] at hnone
          contradiction
      have hn : (rest2.takeWhile isModuleNameByte).isEmpty = false := by
        by_cases hcon : (rest2.takeWhile isModuleNameByte).isEmpty = false
        · exact hcon
        · have hnone : moduleHead (litBytes "[[module") src = none := by
            unfold moduleHead
            rw [hm0]
            simp [hw, hcon]
          rw [hhead] at hnone
          contradiction
      have hnamelen : 1 ≤ (rest2.takeWhile isModuleNameByte).length := by
        cases hnl : rest2.takeWhile isModuleNameByte with
        | nil => simp [hnl] at hn
        | cons a as => simp
      have hrest2 : rest2 = rest2.takeWhile isModuleNameByte
          ++ rest2.drop (rest2.takeWhile isModuleNameByte).length :=
        (takeWhile_drop isModuleNameByte rest2).symm
      cases hrest3 : rest2.drop (rest2.takeWhile isModuleNameByte).length with
      | nil =>
          exfalso
          have hnone : moduleHead (litBytes "[[module") src = none := by
            unfold moduleHead
            rw [hm0]
            simp [hw, hn, hrest3]
          rw [hhead] at hnone
          contradiction
      | cons b t =>
          by_cases hb : isWsByte b = true
          · -- The whitespace case: the fleet's candidate analysis applies.
            have hEq : moduleHead (litBytes "[[module") src
                = some (rest2.takeWhile isModuleNameByte,
                    (close2Suffixes t).map (fun sfx =>
                      ((b :: t).take ((b :: t).length - sfx.length),
                        sfx.drop 2))) :=
              mcp_moduleHead_ws_case_eq _ _ _ _ _ _ hm0 hw hn hrest3 hb
            have hname : name = rest2.takeWhile isModuleNameByte := by
              have h := hEq.symm.trans hhead
              exact (congrArg Prod.fst (Option.some.inj h)).symm
            have hhead2 : moduleHead (litBytes "[[module") src
                = some (rest2.takeWhile isModuleNameByte, cands) := by
              rw [hname] at hhead
              exact hhead
            obtain ⟨sfx, -, -, -, -, -, hlast⟩ :=
              mcp_moduleHead_ws_case_char _ _ _ _ _ _ cands hm0 hw hn hrest3 hb
                hhead2 hmem
            refine ⟨pre ++ [w] ++ rest2.takeWhile isModuleNameByte ++ attrRaw,
              ?_, ?_⟩
            · calc src = pre ++ w :: rest2 := hpresrc.symm
                _ = pre ++ [w] ++ (rest2.takeWhile isModuleNameByte
                      ++ (b :: t)) := by
                    rw [← hrest3, ← hrest2]
                    simp [List.append_assoc]
                _ = pre ++ [w] ++ rest2.takeWhile isModuleNameByte
                      ++ (attrRaw ++ ([93, 93] ++ r)) := by rw [← hlast]; simp only [List.append_assoc]
                _ = (pre ++ [w] ++ rest2.takeWhile isModuleNameByte ++ attrRaw)
                      ++ [93, 93] ++ r := by simp [List.append_assoc]
            · simp only [List.length_append, List.length_cons, List.length_nil,
                hprelen8]
              omega
          · have hbf : isWsByte b = false := by
              cases h : isWsByte b with
              | true => exact absurd h hb
              | false => rfl
            by_cases hclose : ((b :: t).take 2 == [93, 93]) = true
            · -- The direct `]]` case: a single candidate.
              have hEq : moduleHead (litBytes "[[module") src
                  = some (rest2.takeWhile isModuleNameByte,
                      [([], (b :: t).drop 2)]) := by
                unfold moduleHead
                rw [hm0]
                simp [hw, hn, hrest3, hbf, hclose]
                have htake2' : (b :: t).take 2 = [93, 93] := by
                  simpa using hclose
                have hcons : b :: t.take 1 = 93 :: [93] := htake2'
                exact ⟨congrArg (fun l => l.headD 0) hcons,
                  congrArg List.tail hcons⟩
              have hcands : cands = [([], (b :: t).drop 2)] := by
                have h := hEq.symm.trans hhead
                exact (congrArg Prod.snd (Option.some.inj h)).symm
              rw [hcands] at hmem
              simp at hmem
              obtain ⟨-, hr⟩ := hmem
              have htake2 : (b :: t).take 2 = [93, 93] := by simpa using hclose
              have hrest3decomp : (b :: t) = [93, 93] ++ r := by
                rw [← htake2, hr]
                cases t with
                | nil => rfl
                | cons x xs => rfl
              refine ⟨pre ++ [w] ++ rest2.takeWhile isModuleNameByte, ?_, ?_⟩
              · calc src = pre ++ w :: rest2 := hpresrc.symm
                  _ = pre ++ [w] ++ (rest2.takeWhile isModuleNameByte
                        ++ (b :: t)) := by
                      rw [← hrest3, ← hrest2]
                      simp [List.append_assoc]
                  _ = pre ++ [w] ++ rest2.takeWhile isModuleNameByte
                        ++ ([93, 93] ++ r) := by
                      rw [hrest3decomp]; simp only [List.append_assoc]
                  _ = (pre ++ [w] ++ rest2.takeWhile isModuleNameByte)
                        ++ [93, 93] ++ r := by simp [List.append_assoc]
              · simp only [List.length_append, List.length_cons,
                  List.length_nil, hprelen8]
                omega
            · exfalso
              have hnone : moduleHead (litBytes "[[module") src = none := by
                unfold moduleHead
                rw [hm0]
                simp [hw, hn, hrest3, hbf, hclose]
                intro hb93 htake1
                apply hclose
                have hcons : b :: t.take 1 = 93 :: [93] := by
                  rw [hb93, htake1]
                have htake2' : (b :: t).take 2 = [93, 93] := hcons
                rw [htake2']
                decide
              rw [hhead] at hnone
              contradiction

/-! ## The per-match lexicographic law -/

/-- Taking two bytes from an append whose left part has length at
    least two only sees the left part. -/
theorem take_two_append (a b : List Nat) (h : 2 ≤ a.length) :
    (a ++ b).take 2 = a.take 2 := by
  cases a with
  | nil => simp at h
  | cons x a =>
      cases a with
      | nil => simp at h
      | cons y a => rfl

/-- Every successful `moduleTryCands` result splits the source as
    `matched ++ rest'`, where `matched` (the text the winning
    candidate consumed) has length at least 13 and `[` count at
    least two. A defense (token table unchanged) preserves the
    matched text's `[` count and grows its length on change; a
    claim (token appended) emits a replacement whose `[` count is
    at most the matched text's minus two. The candidate hypothesis
    is the head decomposition of `moduleHead_cand_decomp`. -/
theorem moduleTryCands_lex (src name : List Nat) (toks : List TokenEntry)
    (htake2 : src.take 2 = [91, 91]) :
    ∀ (cands : List (List Nat × List Nat)),
      (∀ cand ∈ cands, ∃ A : List Nat,
        src = A ++ [93, 93] ++ cand.2 ∧ 10 ≤ A.length) →
      ∀ (repl rest' : List Nat) (t1 : List TokenEntry),
        moduleTryCands src name toks cands = some (repl, rest', t1) →
        ∃ matched : List Nat, src = matched ++ rest' ∧
          13 ≤ matched.length ∧ 2 ≤ count91 matched ∧
          ((t1 = toks ∧ count91 repl = count91 matched ∧
              matched.length ≤ repl.length ∧
              (repl ≠ matched → matched.length < repl.length)) ∨
            (t1 ≠ toks ∧ count91 repl + 2 ≤ count91 matched)) := by
  intro cands hcands
  induction cands with
  | nil =>
      intro repl rest' t1 h
      simp [moduleTryCands] at h
  | cons cand more ih =>
      rcases cand with ⟨attrRaw, r⟩
      intro repl rest' t1 h
      have ih' := ih (fun cand hmem => hcands cand (List.mem_cons_of_mem _ hmem))
      cases htail : moduleTail r with
      | none =>
          simp [moduleTryCands, htail] at h
          exact ih' repl rest' t1 h
      | some pair =>
          rcases pair with ⟨bodyRaw, r'⟩
          obtain ⟨A, hA, hA10⟩ := hcands (attrRaw, r) List.mem_cons_self
          obtain ⟨wsPre, B, hrB, htailCases⟩ := moduleTail_spec htail
          -- The full matched prefix P and its properties.
          have hAtake2 : A.take 2 = [91, 91] := by
            have e : src.take 2 = A.take 2 := by
              rw [hA,
                take_two_append _ _ (by
                  simp only [List.length_append, List.length_cons,
                    List.length_nil]
                  omega),
                take_two_append _ _ (by omega)]
            rw [htake2] at e
            exact e.symm
          have hPtake2 : (A ++ [93, 93] ++ wsPre ++ [10]).take 2 = [91, 91] := by
            rw [take_two_append _ _ (by
                  simp only [List.length_append, List.length_cons,
                    List.length_nil]
                  omega),
              take_two_append _ _ (by
                  simp only [List.length_append, List.length_cons,
                    List.length_nil]
                  omega),
              take_two_append _ _ (by omega)]
            exact hAtake2
          have hP91 : 2 ≤ count91 (A ++ [93, 93] ++ wsPre ++ [10]) := by
            have h1 := count91_take_le 2 (A ++ [93, 93] ++ wsPre ++ [10])
            rw [hPtake2] at h1
            have h2 : count91 [91, 91] = 2 := by decide
            omega
          have hPlen : 13 ≤ (A ++ [93, 93] ++ wsPre ++ [10]).length := by
            simp only [List.length_append, List.length_cons, List.length_nil]
            omega
          have hsrcPB : src = (A ++ [93, 93] ++ wsPre ++ [10]) ++ B := by
            rw [hA, hrB]
            simp [List.append_assoc]
          -- The matched text, in both tail cases.
          rcases htailCases with ⟨hbody, hr'eq, -⟩ | ⟨c, closerVar, -, hbody, hBdrop, hcloserlen, hcloser91⟩
          · -- No closer: matched is exactly P, rest' is B.
            have hlen : src.length
                = (A ++ [93, 93] ++ wsPre ++ [10]).length + B.length := by
              rw [hsrcPB]
              simp only [List.length_append, List.length_cons, List.length_nil]
            have hidx : src.length - r'.length
                = (A ++ [93, 93] ++ wsPre ++ [10]).length := by
              have hr'len : r'.length = B.length := by rw [hr'eq]
              omega
            have hmatched : src.take (src.length - r'.length)
                = A ++ [93, 93] ++ wsPre ++ [10] := by
              rw [hidx, hsrcPB, List.take_left]
            have hsrcdecomp : src
                = src.take (src.length - r'.length) ++ r' := by
              rw [hmatched, hr'eq]
              exact hsrcPB
            have hnohtml : ¬(bodyRaw ≠ [] ∧ bodyHasHtmlToken bodyRaw toks 0 = true) := by
              simp [hbody]
            by_cases hdef : 1 < countModuleOpeners none
                (src.take (src.length - r'.length)) (src.length - r'.length + 1)
            · have hdefx := moduleTryCands_defense_exact src name toks attrRaw r
                bodyRaw r' more htail hnohtml hdef
              rw [hdefx] at h
              have hinj := Option.some.inj h
              have hrepeq : repl
                  = rewriteModulePrefix (insertInlineOpenerNewlines
                      (src.take (src.length - r'.length))) :=
                (congrArg Prod.fst hinj).symm
              have hresteq : r' = rest' :=
                congrArg Prod.fst (congrArg Prod.snd hinj)
              have ht1eq : t1 = toks :=
                (congrArg Prod.snd (congrArg Prod.snd hinj)).symm
              subst hresteq
              refine ⟨src.take (src.length - r'.length), hsrcdecomp, ?_, ?_,
                Or.inl ⟨ht1eq, ?_, ?_, ?_⟩⟩
              · rw [hmatched]; exact hPlen
              · rw [hmatched]; exact hP91
              · rw [hrepeq]; exact defense_count91 _
              · rw [hrepeq]; exact defense_length_ge _
              · rw [hrepeq]
                intro hne
                exact defense_strict_length hne
            · simp [moduleTryCands, htail, hnohtml, hdef, claimModule] at h
              have ht1 : t1 ≠ toks := by
                intro hcon
                have e := h.2.2.symm
                rw [hcon] at e
                have hl := congrArg List.length e
                simp at hl
              refine ⟨src.take (src.length - r'.length), hsrcdecomp.trans (congrArg (fun x => src.take (src.length - r'.length) ++ x) h.2.1), ?_, ?_,
                Or.inr ⟨ht1, ?_⟩⟩
              · rw [hmatched]; exact hPlen
              · rw [hmatched]; exact hP91
              · rw [← h.1]
                by_cases hcode : bodyHasCodeToken bodyRaw toks 0 = true
                · rw [if_pos hcode, hbody]
                  simp only [List.nil_append]
                  rw [count91_cons_ten, count91_cons_ten, count91_append,
                    count91_phBytes, count91_cons_ten, count91_cons_ten]
                  -- authored closer is a suffix drop of P
                  have hP : count91 (A ++ [93, 93] ++ wsPre ++ [10])
                      = count91 ((A ++ [93, 93] ++ wsPre ++ [10]).take
                          ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11))
                        + count91 ((A ++ [93, 93] ++ wsPre ++ [10]).drop
                          ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11)) := by
                    rw [← count91_append, List.take_append_drop]
                  have htake91 : 2 ≤ count91 ((A ++ [93, 93] ++ wsPre ++ [10]).take
                      ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11)) := by
                    have h1 := count91_take_le 2
                      ((A ++ [93, 93] ++ wsPre ++ [10]).take
                        ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11))
                    have h2 : ((A ++ [93, 93] ++ wsPre ++ [10]).take
                        ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11)).take 2
                        = [91, 91] := by
                      rw [List.take_take]
                      have hle : 2 ≤ (A ++ [93, 93] ++ wsPre ++ [10]).length
                          - 11 := by
                        have := hPlen
                        omega
                      simp only [Nat.min_eq_left hle, Nat.min_eq_right hle]
                      exact hPtake2
                    rw [h2] at h1
                    have h3 : count91 [91, 91] = 2 := by decide
                    omega
                  have hdropEq : (src.take (src.length - r'.length)).drop
                      (src.length - r'.length - 11)
                      = (A ++ [93, 93] ++ wsPre ++ [10]).drop
                        ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11) := by
                    rw [← hidx, hmatched]
                  rw [hdropEq]
                  have hmeq : count91 (src.take (src.length - r'.length))
                      = count91 (A ++ [93, 93] ++ wsPre ++ [10]) := by
                    rw [hmatched]
                  omega
                · rw [if_neg hcode]
                  rw [count91_cons_ten, count91_cons_ten, count91_append,
                    count91_phBytes, count91_cons_ten, count91_cons_ten,
                    count91_nil]
                  rw [hmatched]
                  omega
          · -- Closer found: matched is P ++ bodyRaw ++ closerVar.
            have hBlen : B.length = (c + 1) + 11 + r'.length := by
              have e1 : (B.drop (c + 1)).length = 11 + r'.length := by
                rw [hBdrop, List.length_append, hcloserlen]
              have e2 : (B.drop (c + 1)).length = B.length - (c + 1) :=
                List.length_drop
              have e3 : (B.take (c + 1)).length = c + 1 := by
                rw [List.length_take, Nat.min_eq_left]
                omega
              have e4 : B.length = (B.take (c + 1)).length
                  + (B.drop (c + 1)).length := by
                rw [← List.length_append, List.take_append_drop]
              omega
            have hlen : src.length
                = (A ++ [93, 93] ++ wsPre ++ [10]).length + B.length := by
              rw [hsrcPB]
              simp only [List.length_append, List.length_cons, List.length_nil]
            have hidx : src.length - r'.length
                = (A ++ [93, 93] ++ wsPre ++ [10]).length + ((c + 1) + 11) := by
              omega
            have hmatched : src.take (src.length - r'.length)
                = (A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw ++ closerVar := by
              rw [hidx, hsrcPB]
              have e1 : ((A ++ [93, 93] ++ wsPre ++ [10]) ++ B).take
                    ((A ++ [93, 93] ++ wsPre ++ [10]).length + ((c + 1) + 11))
                  = (A ++ [93, 93] ++ wsPre ++ [10])
                    ++ B.take ((c + 1) + 11) := by
                rw [List.take_append]
                have ht : (A ++ [93, 93] ++ wsPre ++ [10]).take
                      ((A ++ [93, 93] ++ wsPre ++ [10]).length + ((c + 1) + 11))
                    = A ++ [93, 93] ++ wsPre ++ [10] :=
                  List.take_of_length_le (by omega)
                rw [ht]
                simp
              rw [e1]
              have e2 : B.take ((c + 1) + 11) = bodyRaw ++ closerVar := by
                have e1 : B.take ((c + 1) + 11)
                    = (B.take (c + 1) ++ B.drop (c + 1)).take ((c + 1) + 11) := by
                  rw [List.take_append_drop]
                rw [e1, List.take_append]
                have htle : (B.take (c + 1)).length = c + 1 := by
                  rw [List.length_take, Nat.min_eq_left]
                  have e3 : (B.drop (c + 1)).length = B.length - (c + 1) :=
                    List.length_drop
                  have e4 : (B.drop (c + 1)).length = 11 + r'.length := by
                    rw [hBdrop, List.length_append, hcloserlen]
                  omega
                rw [htle]
                have hsub : (c + 1) + 11 - (c + 1) = 11 := by omega
                rw [hsub, hBdrop]
                have ht1 : (B.take (c + 1)).take ((c + 1) + 11)
                    = B.take (c + 1) :=
                  List.take_of_length_le (by rw [htle]; omega)
                rw [ht1, ← hbody]
                have ht2 : (closerVar ++ r').take 11 = closerVar := by
                  rw [← hcloserlen]
                  exact List.take_left
                rw [ht2]
              rw [e2]
              simp only [List.append_assoc]
            have hsrcdecomp : src
                = src.take (src.length - r'.length) ++ r' := by
              rw [hmatched]
              have hB : B = bodyRaw ++ closerVar ++ r' := by
                have e : B = B.take (c + 1) ++ B.drop (c + 1) :=
                  (List.take_append_drop _ _).symm
                rw [e, ← hbody, hBdrop]
                simp [List.append_assoc]
              rw [hsrcPB, hB]
              simp [List.append_assoc]
            have hmatched91 : count91 (src.take (src.length - r'.length))
                = count91 (A ++ [93, 93] ++ wsPre ++ [10])
                  + count91 bodyRaw + 2 := by
              rw [hmatched, count91_append, count91_append, hcloser91]
            have hmatchedlen : 13 ≤ (src.take (src.length - r'.length)).length := by
              rw [hmatched]
              simp only [List.length_append]
              omega
            by_cases hhtml : bodyRaw ≠ [] ∧ bodyHasHtmlToken bodyRaw toks 0 = true
            · simp [moduleTryCands, htail, hhtml, claimModule] at h
              have ht1 : t1 ≠ toks := by
                intro hcon
                have e := h.2.2.symm
                rw [hcon] at e
                have hl := congrArg List.length e
                simp at hl
              refine ⟨src.take (src.length - r'.length), hsrcdecomp.trans (congrArg (fun x => src.take (src.length - r'.length) ++ x) h.2.1),
                hmatchedlen, ?_, Or.inr ⟨ht1, ?_⟩⟩
              · omega
              · rw [← h.1]
                rw [count91_cons_ten, count91_cons_ten, count91_append,
                  count91_phBytes, count91_cons_ten, count91_cons_ten,
                  count91_append]
                have hauth : (src.take (src.length - r'.length)).drop
                      (src.length - r'.length - 11)
                    = closerVar := by
                  have hidx2 : src.length - r'.length - 11
                      = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length := by
                    have e1 : (src.take (src.length - r'.length)).length
                        = src.length - r'.length := by
                      rw [List.length_take]
                      exact Nat.min_eq_left (Nat.sub_le _ _)
                    have e2 : (src.take (src.length - r'.length)).length
                        = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length
                          + 11 := by
                      rw [hmatched]
                      simp only [List.length_append, hcloserlen]
                    omega
                  rw [hidx2, hmatched]
                  exact List.drop_left
                rw [hauth, hcloser91]
                omega
            · by_cases hdef : 1 < countModuleOpeners none
                  (src.take (src.length - r'.length)) (src.length - r'.length + 1)
              · have hdefx := moduleTryCands_defense_exact src name toks attrRaw r
                  bodyRaw r' more htail hhtml hdef
                rw [hdefx] at h
                have hinj := Option.some.inj h
                have hrepeq : repl
                    = rewriteModulePrefix (insertInlineOpenerNewlines
                        (src.take (src.length - r'.length))) :=
                  (congrArg Prod.fst hinj).symm
                have hresteq : r' = rest' :=
                  congrArg Prod.fst (congrArg Prod.snd hinj)
                have ht1eq : t1 = toks :=
                  (congrArg Prod.snd (congrArg Prod.snd hinj)).symm
                subst hresteq
                refine ⟨src.take (src.length - r'.length), hsrcdecomp,
                  hmatchedlen, ?_, Or.inl ⟨ht1eq, ?_, ?_, ?_⟩⟩
                · omega
                · rw [hrepeq]; exact defense_count91 _
                · rw [hrepeq]; exact defense_length_ge _
                · rw [hrepeq]
                  intro hne
                  exact defense_strict_length hne
              · simp [moduleTryCands, htail, hhtml, hdef, claimModule] at h
                have ht1 : t1 ≠ toks := by
                  intro hcon
                  have e := h.2.2.symm
                  rw [hcon] at e
                  have hl := congrArg List.length e
                  simp at hl
                refine ⟨src.take (src.length - r'.length), hsrcdecomp.trans (congrArg (fun x => src.take (src.length - r'.length) ++ x) h.2.1),
                  hmatchedlen, ?_, Or.inr ⟨ht1, ?_⟩⟩
                · omega
                · rw [← h.1]
                  by_cases hcode : bodyHasCodeToken bodyRaw toks 0 = true
                  · rw [if_pos hcode]
                    rw [count91_cons_ten, count91_cons_ten, count91_append,
                      count91_phBytes, count91_cons_ten, count91_cons_ten,
                      count91_append]
                    have hauth : (src.take (src.length - r'.length)).drop
                          (src.length - r'.length - 11)
                        = closerVar := by
                      have hidx2 : src.length - r'.length - 11
                          = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length := by
                        have e1 : (src.take (src.length - r'.length)).length
                            = src.length - r'.length := by
                          rw [List.length_take]
                          exact Nat.min_eq_left (Nat.sub_le _ _)
                        have e2 : (src.take (src.length - r'.length)).length
                            = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length
                              + 11 := by
                          rw [hmatched]
                          simp only [List.length_append, hcloserlen]
                        omega
                      rw [hidx2, hmatched]
                      exact List.drop_left
                    rw [hauth, hcloser91]
                    omega
                  · rw [if_neg hcode]
                    rw [count91_cons_ten, count91_cons_ten, count91_append,
                      count91_phBytes, count91_cons_ten, count91_cons_ten,
                      count91_nil]
                    omega


/-- Inversion of a successful candidate scan into its defense or claiming
    replacement shape.  This is the syntactic shape needed by the width-two
    measure proof; the heavier length/count decomposition is separately given
    by `moduleTryCands_lex`. -/
theorem moduleTryCands_repl_shape (src name : List Nat) (toks : List TokenEntry) :
    ∀ (cands : List (List Nat × List Nat)) (repl rest' : List Nat)
      (t1 : List TokenEntry),
      moduleTryCands src name toks cands = some (repl, rest', t1) →
        ∃ bodyRaw r' : List Nat,
          (t1 = toks ∧ rest' = r' ∧
            repl = rewriteModulePrefix (insertInlineOpenerNewlines
              (src.take (src.length - r'.length)))) ∨
          (t1 ≠ toks ∧ rest' = r' ∧
            repl = [10, 10] ++ phBytes toks.length ++ [10, 10] ++
              (if (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) ||
                  bodyHasCodeToken bodyRaw toks 0 then
                 bodyRaw ++ (src.take (src.length - r'.length)).drop
                   (src.length - r'.length - 11)
               else [])) := by
  intro cands
  induction cands with
  | nil =>
      intro repl rest' t1 h
      simp [moduleTryCands] at h
  | cons cand more ih =>
      rcases cand with ⟨attrRaw, r⟩
      intro repl rest' t1 h
      have ih' := ih repl rest' t1
      cases htail : moduleTail r with
      | none =>
          simp [moduleTryCands, htail] at h
          exact ih' h
      | some pair =>
          rcases pair with ⟨bodyRaw, r'⟩
          by_cases hhtml : bodyRaw ≠ [] ∧ bodyHasHtmlToken bodyRaw toks 0 = true
          · simp [moduleTryCands, htail, hhtml, claimModule] at h
            have ht1 : t1 ≠ toks := by
              intro hcon
              have e := h.2.2.symm
              rw [hcon] at e
              have hl := congrArg List.length e
              simp at hl
            refine ⟨bodyRaw, r', Or.inr ⟨ht1, h.2.1.symm, ?_⟩⟩
            have hh : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = true := by
              simpa using hhtml
            rw [hh]
            simpa [List.append_assoc] using h.1.symm
          · have hh : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = false := by
              simpa using hhtml
            by_cases hdef : 1 < countModuleOpeners none
                (src.take (src.length - r'.length)) (src.length - r'.length + 1)
            · have hdefx := moduleTryCands_defense_exact src name toks attrRaw r
                bodyRaw r' more htail hhtml hdef
              rw [hdefx] at h
              have hinj := Option.some.inj h
              refine ⟨bodyRaw, r', Or.inl ⟨?_, ?_, ?_⟩⟩
              · exact (congrArg Prod.snd (congrArg Prod.snd hinj)).symm
              · exact (congrArg Prod.fst (congrArg Prod.snd hinj)).symm
              · exact (congrArg Prod.fst hinj).symm
            · simp [moduleTryCands, htail, hhtml, hdef, claimModule] at h
              have ht1 : t1 ≠ toks := by
                intro hcon
                have e := h.2.2.symm
                rw [hcon] at e
                have hl := congrArg List.length e
                simp at hl
              refine ⟨bodyRaw, r', Or.inr ⟨ht1, h.2.1.symm, ?_⟩⟩
              rw [hh]
              simpa [List.append_assoc] using h.1.symm

/-- The per-match law at the `moduleMatch` level. -/
theorem moduleMatch_lex {src : List Nat} {toks : List TokenEntry}
    {repl rest' : List Nat} {t1 : List TokenEntry}
    (h : moduleMatch src toks = some (repl, rest', t1)) :
    ∃ matched : List Nat, src = matched ++ rest' ∧
      13 ≤ matched.length ∧ 2 ≤ count91 matched ∧
      ((t1 = toks ∧ count91 repl = count91 matched ∧
          matched.length ≤ repl.length ∧
          (repl ≠ matched → matched.length < repl.length)) ∨
        (t1 ≠ toks ∧ count91 repl + 2 ≤ count91 matched)) := by
  unfold moduleMatch at h
  cases hh : moduleHead (litBytes "[[module") src with
  | none => simp [hh] at h
  | some pair =>
      rcases pair with ⟨name, cands⟩
      have ht : moduleTryCands src name toks cands = some (repl, rest', t1) := by
        simpa [hh] using h
      obtain ⟨r0, hm0⟩ := moduleHead_matchLitCI_some hh
      have htake2 : src.take 2 = [91, 91] := matchLitCI_two_91 hm0
      exact moduleTryCands_lex src name toks htake2 cands
        (fun cand hmem => moduleHead_cand_decomp hh hmem) repl rest' t1 ht

/-! ## The scan-level lexicographic law -/

/-- Strong induction over the source length: any scan pass (any
    lookbehind, any table, canonical fuel) that changes the bytes
    either drops the `[` count, or keeps it and strictly grows the
    length. -/
theorem moduleScanPass_lex_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat) (toks : List TokenEntry),
      src.length = n →
      (moduleScanPass prev src toks (src.length + 1)).1 ≠ src →
      count91 (moduleScanPass prev src toks (src.length + 1)).1 < count91 src ∨
        (count91 (moduleScanPass prev src toks (src.length + 1)).1
            = count91 src ∧
          src.length < (moduleScanPass prev src toks (src.length + 1)).1.length) := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src toks hlen hne
      cases src with
      | nil =>
          simp [moduleScanPass] at hne
      | cons b rest =>
          have hlen' : rest.length + 1 = n := by simpa using hlen
          by_cases hline : (prev == none || prev == some 10) = true
          · have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
            cases hm : moduleMatch (b :: rest) toks with
            | none =>
                have hstep : moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)
                    = (b :: (moduleScanPass (some b) rest toks
                        (rest.length + 1)).1,
                       (moduleScanPass (some b) rest toks
                        (rest.length + 1)).2) := by
                  cases hscan : moduleScanPass (some b) rest toks
                      (rest.length + 1) with
                  | mk o t =>
                      simp [moduleScanPass, hlineP, hm, hscan]
                have hstep1 : (moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)).1
                    = b :: (moduleScanPass (some b) rest toks
                        (rest.length + 1)).1 := by
                  rw [hstep]
                by_cases htail : (moduleScanPass (some b) rest toks
                    (rest.length + 1)).1 = rest
                · exfalso
                  apply hne
                  rw [hstep1, htail]
                · have ih' := ih rest.length (by omega) (some b) rest toks rfl htail
                  rcases ih' with hlt | ⟨heq, hlen2⟩
                  · left
                    rw [hstep1, count91_cons, count91_cons]
                    by_cases hb : b = 91
                    · rw [if_pos hb, if_pos hb]
                      omega
                    · rw [if_neg hb, if_neg hb]
                      exact hlt
                  · right
                    refine ⟨?_, ?_⟩
                    · rw [hstep1, count91_cons, count91_cons]
                      by_cases hb : b = 91
                      · rw [if_pos hb, if_pos hb, heq]
                      · rw [if_neg hb, if_neg hb]
                        exact heq
                    · rw [hstep1]
                      simp only [List.length_cons]
                      omega
            | some trip =>
                rcases trip with ⟨repl, rest', t1⟩
                obtain ⟨matched, hdecomp, hmlen, hm91, hbranch⟩ :=
                  moduleMatch_lex hm
                have hshort : rest'.length < (b :: rest).length :=
                  moduleMatch_rest_shorter hm
                have hnorm : moduleScanPass (lastConsumedByte (b :: rest) rest')
                      rest' t1 (rest.length + 1)
                    = moduleScanPass (lastConsumedByte (b :: rest) rest')
                        rest' t1 (rest'.length + 1) :=
                  moduleScanPass_fuel_sufficient _ _ _ _ (by
                    simp only [List.length_cons] at hshort
                    omega)
                have hstep : moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)
                    = (repl ++ (moduleScanPass
                        (lastConsumedByte (b :: rest) rest') rest' t1
                        (rest'.length + 1)).1,
                       (moduleScanPass
                        (lastConsumedByte (b :: rest) rest') rest' t1
                        (rest'.length + 1)).2) := by
                  cases hscan : moduleScanPass
                      (lastConsumedByte (b :: rest) rest') rest' t1
                      (rest'.length + 1) with
                  | mk o t =>
                      have hscan' : moduleScanPass
                            (lastConsumedByte (b :: rest) rest') rest' t1
                            (rest.length + 1) = (o, t) := by
                        rw [hnorm]
                        exact hscan
                      simp [moduleScanPass, hlineP, hm, hscan']
                have hstep1 : (moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)).1
                    = repl ++ (moduleScanPass
                        (lastConsumedByte (b :: rest) rest') rest' t1
                        (rest'.length + 1)).1 := by
                  rw [hstep]
                have hsrclen : (b :: rest).length
                    = matched.length + rest'.length := by
                  rw [hdecomp]
                  simp [List.length_append]
                have hsrc91 : count91 (b :: rest)
                    = count91 matched + count91 rest' := by
                  rw [hdecomp, count91_append]
                by_cases htail : (moduleScanPass
                    (lastConsumedByte (b :: rest) rest') rest' t1
                    (rest'.length + 1)).1 = rest'
                · -- Tail unchanged: the step is exactly this match.
                  have houtlen : (moduleScanPass prev (b :: rest) toks
                        ((b :: rest).length + 1)).1.length
                      = repl.length + rest'.length := by
                    rw [hstep1, htail]
                    simp [List.length_append]
                  have hout91 : count91 (moduleScanPass prev (b :: rest) toks
                        ((b :: rest).length + 1)).1
                      = count91 repl + count91 rest' := by
                    rw [hstep1, htail, count91_append]
                  rcases hbranch with ⟨-, hreq, hrlen, hrstrict⟩ | ⟨-, hrdrop⟩
                  · by_cases hreqm : repl = matched
                    · exfalso
                      apply hne
                      rw [hstep1, htail, hreqm]
                      exact hdecomp.symm
                    · right
                      refine ⟨?_, ?_⟩
                      · omega
                      · have h1 : matched.length < repl.length :=
                          hrstrict hreqm
                        omega
                  · left
                    omega
                · have ih' := ih rest'.length (by
                      simp only [List.length_cons] at hshort
                      omega) (lastConsumedByte (b :: rest) rest') rest' t1 rfl htail
                  have houtlen : (moduleScanPass prev (b :: rest) toks
                        ((b :: rest).length + 1)).1.length
                      = repl.length + (moduleScanPass
                          (lastConsumedByte (b :: rest) rest') rest' t1
                          (rest'.length + 1)).1.length := by
                    rw [hstep1]
                    simp [List.length_append]
                  have hout91 : count91 (moduleScanPass prev (b :: rest) toks
                        ((b :: rest).length + 1)).1
                      = count91 repl + count91 (moduleScanPass
                          (lastConsumedByte (b :: rest) rest') rest' t1
                          (rest'.length + 1)).1 := by
                    rw [hstep1, count91_append]
                  rcases ih' with hlt | ⟨heq, hlen2⟩
                  · rcases hbranch with ⟨-, hreq, -, -⟩ | ⟨-, hrdrop⟩
                    · left
                      omega
                    · left
                      omega
                  · rcases hbranch with ⟨-, hreq, hrlen, -⟩ | ⟨-, hrdrop⟩
                    · right
                      refine ⟨by omega, by omega⟩
                    · left
                      omega
          · have hnotP : ¬ (prev = none ∨ prev = some 10) := by
              simpa using hline
            have hstep : moduleScanPass prev (b :: rest) toks
                  ((b :: rest).length + 1)
                = (b :: (moduleScanPass (some b) rest toks
                    (rest.length + 1)).1,
                   (moduleScanPass (some b) rest toks
                    (rest.length + 1)).2) := by
              cases hscan : moduleScanPass (some b) rest toks
                  (rest.length + 1) with
              | mk o t =>
                  simp [moduleScanPass, hnotP, hscan]
            have hstep1 : (moduleScanPass prev (b :: rest) toks
                  ((b :: rest).length + 1)).1
                = b :: (moduleScanPass (some b) rest toks
                    (rest.length + 1)).1 := by
              rw [hstep]
            by_cases htail : (moduleScanPass (some b) rest toks
                (rest.length + 1)).1 = rest
            · exfalso
              apply hne
              rw [hstep1, htail]
            · have ih' := ih rest.length (by omega) (some b) rest toks rfl htail
              rcases ih' with hlt | ⟨heq, hlen2⟩
              · left
                rw [hstep1, count91_cons, count91_cons]
                by_cases hb : b = 91
                · rw [if_pos hb, if_pos hb]
                  omega
                · rw [if_neg hb, if_neg hb]
                  exact hlt
              · right
                refine ⟨?_, ?_⟩
                · rw [hstep1, count91_cons, count91_cons]
                  by_cases hb : b = 91
                  · rw [if_pos hb, if_pos hb, heq]
                  · rw [if_neg hb, if_neg hb]
                    exact heq
                · rw [hstep1]
                  simp only [List.length_cons]
                  omega

/-- The headline scan law, at the pass's own starting lookbehind. -/
theorem moduleScanPass_lex_step (src : List Nat) (toks : List TokenEntry)
    (hne : (moduleScanPass none src toks (src.length + 1)).1 ≠ src) :
    count91 (moduleScanPass none src toks (src.length + 1)).1 < count91 src ∨
      (count91 (moduleScanPass none src toks (src.length + 1)).1
          = count91 src ∧
        src.length < (moduleScanPass none src toks (src.length + 1)).1.length) :=
  moduleScanPass_lex_aux src.length none src toks rfl hne

/-- The `[` count never grows under a scan pass. -/
theorem moduleScanPass_count91_le (prev : Option Nat) (src : List Nat)
    (toks : List TokenEntry) :
    count91 (moduleScanPass prev src toks (src.length + 1)).1 ≤ count91 src := by
  by_cases hne : (moduleScanPass prev src toks (src.length + 1)).1 = src
  · have e : count91 (moduleScanPass prev src toks (src.length + 1)).1
        = count91 src := congrArg count91 hne
    omega
  · have h := moduleScanPass_lex_aux src.length prev src toks rfl hne
    rcases h with hlt | ⟨heq, -⟩
    · omega
    · omega

/-! ## A changed token table means a claim, and a claim costs `[`s -/

/-- If a scan pass changes the token table, some claim fired along
    the way, and the output's `[` count is at most the input's
    minus two. Proved by the same strong induction as the scan law,
    using the per-match law at the first differing step. -/
theorem moduleScanPass_claim_drops_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat) (toks : List TokenEntry),
      src.length = n →
      (moduleScanPass prev src toks (src.length + 1)).2 ≠ toks →
      count91 (moduleScanPass prev src toks (src.length + 1)).1 + 2
        ≤ count91 src := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src toks hlen htoks
      cases src with
      | nil =>
          simp [moduleScanPass] at htoks
      | cons b rest =>
          have hlen' : rest.length + 1 = n := by simpa using hlen
          by_cases hline : (prev == none || prev == some 10) = true
          · have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
            cases hm : moduleMatch (b :: rest) toks with
            | none =>
                have hstep : moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)
                    = (b :: (moduleScanPass (some b) rest toks
                        (rest.length + 1)).1,
                       (moduleScanPass (some b) rest toks
                        (rest.length + 1)).2) := by
                  cases hscan : moduleScanPass (some b) rest toks
                      (rest.length + 1) with
                  | mk o t =>
                      simp [moduleScanPass, hlineP, hm, hscan]
                have htoks' : (moduleScanPass (some b) rest toks
                    (rest.length + 1)).2 ≠ toks := by
                  intro hcon
                  apply htoks
                  rw [hstep]
                  exact hcon
                have ih' := ih rest.length (by omega) (some b) rest toks rfl htoks'
                have hstep1 : (moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)).1
                    = b :: (moduleScanPass (some b) rest toks
                        (rest.length + 1)).1 := by
                  rw [hstep]
                rw [hstep1, count91_cons, count91_cons]
                by_cases hb : b = 91
                · rw [if_pos hb, if_pos hb]
                  omega
                · rw [if_neg hb, if_neg hb]
                  exact ih'
            | some trip =>
                rcases trip with ⟨repl, rest', t1⟩
                obtain ⟨matched, hdecomp, hmlen, hm91, hbranch⟩ :=
                  moduleMatch_lex hm
                have hshort : rest'.length < (b :: rest).length :=
                  moduleMatch_rest_shorter hm
                have hnorm : moduleScanPass (lastConsumedByte (b :: rest) rest')
                      rest' t1 (rest.length + 1)
                    = moduleScanPass (lastConsumedByte (b :: rest) rest')
                        rest' t1 (rest'.length + 1) :=
                  moduleScanPass_fuel_sufficient _ _ _ _ (by
                    simp only [List.length_cons] at hshort
                    omega)
                have hstep : moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)
                    = (repl ++ (moduleScanPass
                        (lastConsumedByte (b :: rest) rest') rest' t1
                        (rest'.length + 1)).1,
                       (moduleScanPass
                        (lastConsumedByte (b :: rest) rest') rest' t1
                        (rest'.length + 1)).2) := by
                  cases hscan : moduleScanPass
                      (lastConsumedByte (b :: rest) rest') rest' t1
                      (rest'.length + 1) with
                  | mk o t =>
                      have hscan' : moduleScanPass
                            (lastConsumedByte (b :: rest) rest') rest' t1
                            (rest.length + 1) = (o, t) := by
                        rw [hnorm]
                        exact hscan
                      simp [moduleScanPass, hlineP, hm, hscan']
                have hstep1 : (moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)).1
                    = repl ++ (moduleScanPass
                        (lastConsumedByte (b :: rest) rest') rest' t1
                        (rest'.length + 1)).1 := by
                  rw [hstep]
                have hsrc91 : count91 (b :: rest)
                    = count91 matched + count91 rest' := by
                  rw [hdecomp, count91_append]
                have htail91 : count91 (moduleScanPass
                      (lastConsumedByte (b :: rest) rest') rest' t1
                      (rest'.length + 1)).1 ≤ count91 rest' :=
                  moduleScanPass_count91_le _ _ _
                rcases hbranch with ⟨ht1eq, hreq, -, -⟩ | ⟨ht1ne, hrdrop⟩
                · -- Defense here: the table change is in the tail.
                  have htoks' : (moduleScanPass
                        (lastConsumedByte (b :: rest) rest') rest' t1
                        (rest'.length + 1)).2 ≠ t1 := by
                    intro hcon
                    apply htoks
                    have e : (moduleScanPass prev (b :: rest) toks
                          ((b :: rest).length + 1)).2
                        = (moduleScanPass
                            (lastConsumedByte (b :: rest) rest') rest' t1
                            (rest'.length + 1)).2 := by
                      rw [hstep]
                    rw [e, hcon]
                    exact ht1eq
                  have ih' := ih rest'.length (by
                    simp only [List.length_cons] at hshort
                    omega) (lastConsumedByte (b :: rest) rest') rest' t1 rfl htoks'
                  rw [hstep1, count91_append]
                  omega
                · -- Claim here: this step alone pays for the drop.
                  rw [hstep1, count91_append]
                  omega
          · have hnotP : ¬ (prev = none ∨ prev = some 10) := by
              simpa using hline
            have hstep : moduleScanPass prev (b :: rest) toks
                  ((b :: rest).length + 1)
                = (b :: (moduleScanPass (some b) rest toks
                    (rest.length + 1)).1,
                   (moduleScanPass (some b) rest toks
                    (rest.length + 1)).2) := by
              cases hscan : moduleScanPass (some b) rest toks
                  (rest.length + 1) with
              | mk o t =>
                  simp [moduleScanPass, hnotP, hscan]
            have htoks' : (moduleScanPass (some b) rest toks
                (rest.length + 1)).2 ≠ toks := by
              intro hcon
              apply htoks
              rw [hstep]
              exact hcon
            have ih' := ih rest.length (by omega) (some b) rest toks rfl htoks'
            have hstep1 : (moduleScanPass prev (b :: rest) toks
                  ((b :: rest).length + 1)).1
                = b :: (moduleScanPass (some b) rest toks
                    (rest.length + 1)).1 := by
              rw [hstep]
            rw [hstep1, count91_cons, count91_cons]
            by_cases hb : b = 91
            · rw [if_pos hb, if_pos hb]
              omega
            · rw [if_neg hb, if_neg hb]
              exact ih'

/-- The stability half of the fleet's `moduleMeasureStepOK`,
    proved unconditionally for the lex law: a byte-stable pass
    outcome is a `modulePassStable` state. (If the table had
    changed, a claim would have dropped the `[` count, so the
    bytes could not have come back unchanged.) -/
theorem moduleScanPass_stable_of_bytes_eq (src : List Nat)
    (toks : List TokenEntry)
    (h1 : (moduleScanPass none src toks (src.length + 1)).1 = src) :
    modulePassStable src (moduleScanPass none src toks (src.length + 1)).2 := by
  cases hscan : moduleScanPass none src toks (src.length + 1) with
  | mk out t =>
      have hout : out = src := by
        have h := h1
        rw [hscan] at h
        exact h
      have ht : t = toks := by
        by_cases htne : t = toks
        · exact htne
        · exfalso
          have h2 := moduleScanPass_claim_drops_aux src.length none src toks rfl
            (by
              rw [hscan]
              exact htne)
          rw [hscan] at h2
          dsimp only at h2
          rw [hout] at h2
          omega
      have hst : modulePassStable src t := by
        unfold modulePassStable
        rw [ht]
        exact h1
      exact hst

/-! ## Width-two occurrence counts -/

/-- Count byte positions by a predicate on the byte and its immediate
    successor (`none` at end of string).  Unlike an arbitrary suffix
    predicate, this width-two form has an exact append decomposition with
    only one boundary position. -/
def mtuCountPair (q : Nat → Option Nat → Bool) : List Nat → Nat
  | [] => 0
  | x :: xs => (if q x xs.head? then 1 else 0) + mtuCountPair q xs

theorem mtuCountPair_cons (q : Nat → Option Nat → Bool) (x : Nat) (xs : List Nat) :
    mtuCountPair q (x :: xs) =
      (if q x xs.head? then 1 else 0) + mtuCountPair q xs := rfl

theorem mtuCountPair_le_length (q : Nat → Option Nat → Bool) (xs : List Nat) :
    mtuCountPair q xs ≤ xs.length := by
  induction xs with
  | nil => simp [mtuCountPair]
  | cons x rest ih =>
      rw [mtuCountPair_cons]
      by_cases hq : q x rest.head? <;> simp [hq] <;> omega

theorem mtuCountPair_add_le_length (q r : Nat → Option Nat → Bool) (xs : List Nat)
    (hqr : ∀ x nxt, q x nxt = true → r x nxt = true → False) :
    mtuCountPair q xs + mtuCountPair r xs ≤ xs.length := by
  induction xs with
  | nil => simp [mtuCountPair]
  | cons x rest ih =>
      rw [mtuCountPair_cons, mtuCountPair_cons]
      by_cases hq : q x rest.head?
      · have hr : r x rest.head? = false := by
          cases hrcase : r x rest.head? with
          | false => rfl
          | true => exact False.elim (hqr x rest.head? hq hrcase)
        simp [hq, hr]
        omega
      · by_cases hr : r x rest.head? <;> simp [hq, hr] <;> omega

/-- Positions inside a right-hand appended segment remain positions of the
    concatenation, with exactly the same byte-and-successor lookahead. -/
theorem mtuCountPair_append_right_le (q : Nat → Option Nat → Bool) :
    ∀ (xs ys : List Nat), mtuCountPair q ys ≤ mtuCountPair q (xs ++ ys) := by
  intro xs
  induction xs with
  | nil => intro ys; simp
  | cons a xs ih =>
      intro ys
      have hrec := ih ys
      rw [List.cons_append, mtuCountPair_cons]
      omega

/-- Width-two concatenation is additive up to the single position at the
    end of the left segment.  Both directions of the one-unit error bound are
    sometimes needed: the boundary bit can appear or disappear when the left
    segment is isolated. -/
theorem mtuCountPair_append_error_bound (q : Nat → Option Nat → Bool) :
    ∀ (xs ys : List Nat),
      mtuCountPair q (xs ++ ys) ≤ mtuCountPair q xs + mtuCountPair q ys + 1 ∧
      mtuCountPair q xs + mtuCountPair q ys ≤ mtuCountPair q (xs ++ ys) + 1 := by
  intro xs
  induction xs with
  | nil =>
      intro ys
      simp [mtuCountPair]
  | cons x xs ih =>
      intro ys
      cases xs with
      | nil =>
          change mtuCountPair q (x :: ys) ≤ mtuCountPair q [x] + mtuCountPair q ys + 1 ∧
            mtuCountPair q [x] + mtuCountPair q ys ≤ mtuCountPair q (x :: ys) + 1
          have hconcat := mtuCountPair_cons q x ys
          have hiso := mtuCountPair_cons q x []
          have hheadnil : ([] : List Nat).head? = none := rfl
          rw [hheadnil] at hiso
          have hm0 : mtuCountPair q ([] : List Nat) = 0 := rfl
          rw [hconcat, hiso, hm0]
          by_cases ha : q x ys.head? <;> by_cases hc : q x none <;>
            simp [ha, hc] <;> omega
      | cons z zs =>
          have hrec := ih ys
          have hhead : ((z :: zs) ++ ys).head? = (z :: zs).head? := by
            simp
          rw [List.cons_append, mtuCountPair_cons, mtuCountPair_cons, hhead]
          constructor <;> omega

/-- Width-two positional counts over `(xs ++ [x]) ++ ys` decompose into the
    count over the left string, the count over the right string, and the one
    boundary position `x`.  The boundary position's end-of-string value on
    the isolated left string is explicitly cancelled. -/
theorem mtuCountPair_append_snoc (q : Nat → Option Nat → Bool) :
    ∀ (xs : List Nat) (x : Nat) (ys : List Nat),
      mtuCountPair q ((xs ++ [x]) ++ ys) + (if q x none then 1 else 0) =
        mtuCountPair q (xs ++ [x]) + mtuCountPair q ys +
          (if q x ys.head? then 1 else 0) := by
  intro xs
  induction xs with
  | nil =>
      intro x ys
      by_cases hx0 : q x none <;> by_cases hxy : q x ys.head? <;>
        simp [mtuCountPair, hx0, hxy] <;> omega
  | cons a xs ih =>
      intro x ys
      have hrec := ih x ys
      have hhead : ((xs ++ [x]) ++ ys).head? = (xs ++ [x]).head? := by
        cases xs with
        | nil => simp
        | cons z zs => simp
      change mtuCountPair q (a :: ((xs ++ [x]) ++ ys)) + (if q x none then 1 else 0) =
        mtuCountPair q (a :: (xs ++ [x])) + mtuCountPair q ys +
          (if q x ys.head? then 1 else 0)
      rw [mtuCountPair_cons, mtuCountPair_cons, hhead]
      omega

/-- Forward-looking width-two positions inside a contiguous suffix are a
    subset of the positions of the whole concatenation: the suffix reaches
    the same end of list, so every successor relationship inside it is
    unchanged.  This is the key monotonicity fact for the Code-token re-emit,
    whose re-emitted body-plus-closer is a suffix of the matched text. -/
theorem mtuCountPair_suffix_le_append (q : Nat → Option Nat → Bool) :
    ∀ (xs ys : List Nat), mtuCountPair q ys ≤ mtuCountPair q (xs ++ ys) := by
  intro xs
  induction xs with
  | nil => intro ys; simp
  | cons x xs ih =>
      intro ys
      have hcons := mtuCountPair_cons q x (xs ++ ys)
      have hpos : 0 ≤ (if q x (xs ++ ys).head? then 1 else 0) := Nat.zero_le _
      have hle := ih ys
      rw [List.cons_append, hcons]
      omega

/-- If every byte of a prefix is outside the counted alphabet (uniformly in
    its successor), the prefix contributes no width-two positions at all,
    including its boundary position. -/
theorem mtuCountPair_append_eq_right_of_uncounted (q : Nat → Option Nat → Bool) :
    ∀ (pre ys : List Nat),
      (∀ x nxt, x ∈ pre → q x nxt = false) →
        mtuCountPair q (pre ++ ys) = mtuCountPair q ys := by
  intro pre
  induction pre with
  | nil => intro ys h; simp
  | cons x xs ih =>
      intro ys h
      have hx : q x ((xs ++ ys).head?) = false := h x _ (by simp)
      have hxs : ∀ z nxt, z ∈ xs → q z nxt = false := by
        intro z nxt hz
        exact h z nxt (by simp [hz])
      rw [List.cons_append, mtuCountPair_cons, hx, ih ys hxs]
      simp

/-- Whether a byte is the ASCII final byte of the case-folded literal
    `module` (`e` or `E`). -/
def mtuIsEByte (b : Nat) : Bool := b == 101 || b == 69

/-- The opener-ending pair resource: the final `e`/`E` of the opener
    literal immediately followed by whitespace. -/
def mtuOpenPair (x : Nat) (nxt : Option Nat) : Bool :=
  mtuIsEByte x && (match nxt with | some w => isWsByte w | none => false)

/-- A closing bracket byte whose successor is absent or not LF. -/
def mtuCloseOpenPair (x : Nat) (nxt : Option Nat) : Bool :=
  (x == 93) && (nxt != some 10)

/-- The unconditional pass measure. -/
def mtuMeasure (src : List Nat) : Nat :=
  mtuCountPair mtuOpenPair src + mtuCountPair mtuCloseOpenPair src

theorem mtuOpenClose_exclusive (x : Nat) (nxt : Option Nat) :
    mtuOpenPair x nxt = true → mtuCloseOpenPair x nxt = true → False := by
  intro ho hc
  simp [mtuOpenPair, mtuCloseOpenPair, mtuIsEByte] at ho hc
  rcases hc with ⟨hx, -⟩
  rcases ho with ⟨he, -⟩
  omega

theorem mtuMeasure_le_length (src : List Nat) : mtuMeasure src ≤ src.length := by
  dsimp [mtuMeasure]
  exact mtuCountPair_add_le_length mtuOpenPair mtuCloseOpenPair src
    mtuOpenClose_exclusive



/-- The single width-two termination predicate.  It counts every `[` byte,
    every opener-ending `e`+whitespace pair, and every open closing-bracket
    byte.  Since this is one count of positions, the length bound is
    immediate; no disjointness arithmetic is needed. -/
def mtuTermPair (x : Nat) (nxt : Option Nat) : Bool :=
  (x == 91) || mtuOpenPair x nxt || mtuCloseOpenPair x nxt

/-- The composite termination resource. -/
def moduleTermMeasure (src : List Nat) : Nat :=
  mtuCountPair mtuTermPair src

theorem moduleTermMeasure_le_length (src : List Nat) :
    moduleTermMeasure src ≤ src.length := by
  dsimp [moduleTermMeasure]
  exact mtuCountPair_le_length mtuTermPair src

/-- Taking no more bytes than the front list holds does not reach the back
    list. -/
theorem mtu_take_append_of_le (as bs : List Nat) (n : Nat) (h : n ≤ as.length) :
    (as ++ bs).take n = as.take n := by
  induction as generalizing n with
  | nil =>
      simp at h
      subst n
      simp
  | cons a as ih =>
      cases n with
      | zero => simp
      | succ n =>
          have h' : n ≤ as.length := Nat.succ_le_succ_iff.mp h
          simpa using ih n h'

/-- If two concatenations are equal and the right-hand prefix is no longer
    than the left-hand front list, that prefix really is the front list's
    prefix. -/
theorem mtu_prefix_of_append_eq_append {xs ys pre tail : List Nat}
    (h : xs ++ ys = pre ++ tail) (hlen : pre.length ≤ xs.length) :
    xs = pre ++ xs.drop pre.length := by
  have ht := congrArg (fun z => z.take pre.length) h
  have hleft : (xs ++ ys).take pre.length = xs.take pre.length :=
    mtu_take_append_of_le xs ys pre.length hlen
  have hright : (pre ++ tail).take pre.length = pre := List.take_left
  rw [hleft, hright] at ht
  calc xs = xs.take pre.length ++ xs.drop pre.length :=
        (List.take_append_drop pre.length xs).symm
    _ = pre ++ xs.drop pre.length := by rw [ht]

/-- A successful case-insensitive match of a pattern ending in one byte
    decomposes the source around the corresponding final source byte.  The
    preceding consumed prefix has exactly the pattern prefix's length. -/
theorem matchLitCI_snoc_decomp (pre : List Nat) :
    ∀ (p : Nat) (src rest : List Nat),
      matchLitCI (pre ++ [p]) src = some rest →
        ∃ s1 x, src = (s1 ++ [x]) ++ rest ∧ s1.length = pre.length ∧
          byteCiEq x p = true := by
  induction pre with
  | nil =>
      intro p src rest h
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x tail =>
          by_cases hci : byteCiEq x p = true
          · have hrest : tail = rest := by
              have h' : matchLitCI [p] (x :: tail) = some rest := h
              simp [matchLitCI, hci] at h'
              exact h'
            refine ⟨[], x, ?_, rfl, hci⟩
            simp [hrest]
          · simp [matchLitCI, hci] at h
  | cons q pre ih =>
      intro p src rest h
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x tail =>
          by_cases hq : byteCiEq x q = true
          · have hrec : matchLitCI (pre ++ [p]) tail = some rest := by
              have h' : matchLitCI ((q :: pre) ++ [p]) (x :: tail) = some rest := h
              simpa [matchLitCI, hq] using h'
            obtain ⟨s1, y, htail, hlen, hci⟩ := ih p tail rest hrec
            refine ⟨x :: s1, y, ?_, ?_, hci⟩
            · rw [htail]
              simp [List.cons_append, List.append_assoc]
            · simp [hlen]
          · simp [matchLitCI, hq] at h

/-- An explicit `e/E`+whitespace occurrence contributes at least one opener
    pair anywhere in a byte string. -/
theorem mtuOpenPair_occurrence_le_count (xs : List Nat) (e w : Nat) (tail : List Nat)
    (he : mtuIsEByte e = true) (hw : isWsByte w = true) :
    1 ≤ mtuCountPair mtuOpenPair ((xs ++ [e, w]) ++ tail) := by
  have hsuffix := mtuCountPair_suffix_le_append mtuOpenPair xs ([e, w] ++ tail)
  have hassoc : (xs ++ [e, w]) ++ tail = xs ++ ([e, w] ++ tail) := by
    simp [List.append_assoc]
  rw [hassoc]
  have hhead : mtuOpenPair e (some w) = true := by
    simp [mtuOpenPair, he, hw]
  have hcons := mtuCountPair_cons mtuOpenPair e ([w] ++ tail)
  have hcount : 1 ≤ mtuCountPair mtuOpenPair ([e, w] ++ tail) := by
    rw [List.cons_append, hcons]
    have hh : ([w] ++ tail).head? = some w := rfl
    rw [hh, hhead]
    simp
  omega


/-- The two disjoint resources counted by the termination predicate are
    additive against it: a `[` byte is never an opener-ending `e/E`, and every
    `[` byte or opener pair is a termination pair. -/
theorem count91_add_open_le_moduleTermMeasure (xs : List Nat) :
    count91 xs + mtuCountPair mtuOpenPair xs ≤ moduleTermMeasure xs := by
  induction xs with
  | nil => simp [count91, moduleTermMeasure, mtuCountPair]
  | cons x xs ih =>
      dsimp [moduleTermMeasure] at ih ⊢
      rw [count91_cons, mtuCountPair_cons, mtuCountPair_cons]
      by_cases h91 : x = 91
      · subst x
        have hopen : mtuOpenPair 91 xs.head? = false := by
          simp [mtuOpenPair, mtuIsEByte]
        have hterm : mtuTermPair 91 xs.head? = true := by
          simp [mtuTermPair]
        simp [hopen, hterm]
        omega
      · by_cases hopen : mtuOpenPair x xs.head? = true
        · have hterm : mtuTermPair x xs.head? = true := by
            simp [mtuTermPair, hopen]
          simp [h91, hopen, hterm]
          omega
        · have hopenf : mtuOpenPair x xs.head? = false := by
            cases h : mtuOpenPair x xs.head? with
            | true => exact absurd h hopen
            | false => rfl
          have hnonneg : 0 ≤ (if mtuTermPair x xs.head? then 1 else 0) := Nat.zero_le _
          simp [h91, hopenf]
          omega

/-- A successful Module match consumes an opener whose first two brackets
    and final `e/E`+whitespace pair all lie inside the matched prefix.  Hence
    every matched text carries at least three width-two termination units. -/
theorem moduleTermMeasure_lower_of_moduleHead_prefix
    {src matched tail name : List Nat} {cands : List (List Nat × List Nat)}
    (hhead : moduleHead (litBytes "[[module") src = some (name, cands))
    (hsrcmat : src = matched ++ tail)
    (hmlen : 13 ≤ matched.length)
    (h91 : 2 ≤ count91 matched) :
    3 ≤ moduleTermMeasure matched := by
  obtain ⟨rest1, hm00⟩ := moduleHead_matchLitCI_some hhead
  have hlit : litBytes "[[module" = litBytes "[[modul" ++ [101] := by decide
  have hm0 : matchLitCI (litBytes "[[modul" ++ [101]) src = some rest1 := by
    rwa [hlit] at hm00
  obtain ⟨s1, e, hsrc0, hs1len, hci⟩ :=
    matchLitCI_snoc_decomp (litBytes "[[modul") 101 src rest1 hm0
  rw [mtu_byteCiEq] at hci
  have he : mtuIsEByte e = true := by
    rcases hci with rfl | hswap
    · simp [mtuIsEByte]
    · have hs : swapByteCase 101 = 69 := by decide
      rw [hs] at hswap
      subst e
      simp [mtuIsEByte]
  cases rest1 with
  | nil =>
      exfalso
      have hnone : moduleHead (litBytes "[[module") src = none := by
        unfold moduleHead
        rw [hm00]
      rw [hhead] at hnone
      contradiction
  | cons w rest2 =>
      have hw : isWsByte w = true := by
        by_cases hcon : isWsByte w = true
        · exact hcon
        · have hbf : isWsByte w = false := by
            cases h : isWsByte w with
            | true => exact absurd h hcon
            | false => rfl
          have hnone : moduleHead (litBytes "[[module") src = none := by
            unfold moduleHead
            rw [hm00]
            simp [hbf]
          rw [hhead] at hnone
          contradiction
      let P := s1 ++ [e, w]
      have hsrcP : src = P ++ rest2 := by
        rw [hsrc0]
        simp [P, List.append_assoc]
      have hprelen7 : (litBytes "[[modul").length = 7 := by decide
      have hPlen : P.length = 9 := by
        simp [P, hs1len, hprelen7]
      have hconcat : matched ++ tail = P ++ rest2 := by
        rw [← hsrcmat]
        exact hsrcP
      have hPle : P.length ≤ matched.length := by omega
      have hmatchedP := mtu_prefix_of_append_eq_append hconcat hPle
      have hopen1 : 1 ≤ mtuCountPair mtuOpenPair matched := by
        rw [hmatchedP]
        exact mtuOpenPair_occurrence_le_count s1 e w (matched.drop P.length) he hw
      have hsum := count91_add_open_le_moduleTermMeasure matched
      omega

/-- The whitespace byte required by a successful Module head is inside every
    sufficiently long matched prefix, so the exact `654` rewrite really does
    destroy the opener-ending pair. -/
theorem moduleHead_matched_drop8_ws
    {src matched tail name : List Nat} {cands : List (List Nat × List Nat)}
    (hhead : moduleHead (litBytes "[[module") src = some (name, cands))
    (hsrcmat : src = matched ++ tail)
    (hmlen : 13 ≤ matched.length) :
    ∃ w rest, matched.drop 8 = w :: rest ∧ isWsByte w = true := by
  obtain ⟨rest1, hm00⟩ := moduleHead_matchLitCI_some hhead
  have hlit : litBytes "[[module" = litBytes "[[modul" ++ [101] := by decide
  have hm0 : matchLitCI (litBytes "[[modul" ++ [101]) src = some rest1 := by
    rwa [hlit] at hm00
  obtain ⟨s1, e, hsrc0, hs1len, hci⟩ :=
    matchLitCI_snoc_decomp (litBytes "[[modul") 101 src rest1 hm0
  cases rest1 with
  | nil =>
      exfalso
      have hnone : moduleHead (litBytes "[[module") src = none := by
        unfold moduleHead
        rw [hm00]
      rw [hhead] at hnone
      contradiction
  | cons w rest2 =>
      have hw : isWsByte w = true := by
        by_cases hcon : isWsByte w = true
        · exact hcon
        · have hbf : isWsByte w = false := by
            cases h : isWsByte w with
            | true => exact absurd h hcon
            | false => rfl
          have hnone : moduleHead (litBytes "[[module") src = none := by
            unfold moduleHead
            rw [hm00]
            simp [hbf]
          rw [hhead] at hnone
          contradiction
      let P := s1 ++ [e, w]
      have hsrcP : src = P ++ rest2 := by
        rw [hsrc0]
        simp [P, List.append_assoc]
      have hprelen7 : (litBytes "[[modul").length = 7 := by decide
      have hPlen : P.length = 9 := by
        simp [P, hs1len, hprelen7]
      have hconcat : matched ++ tail = P ++ rest2 := by
        rw [← hsrcmat]
        exact hsrcP
      have hPle : P.length ≤ matched.length := by omega
      have hmatchedP := mtu_prefix_of_append_eq_append hconcat hPle
      generalize hu : matched.drop P.length = u
      rw [hu] at hmatchedP
      have hPdecomp : P = (s1 ++ [e]) ++ [w] := by
        simp [P, List.append_assoc]
      have hmatchedH : matched = (s1 ++ [e]) ++ (w :: u) := by
        rw [hmatchedP, hPdecomp]
        simp [List.append_assoc]
      have hHlen : (s1 ++ [e]).length = 8 := by
        simp [hs1len, hprelen7]
      refine ⟨w, u, ?_, hw⟩
      rw [hmatchedH]
      have hdrop0 : ((s1 ++ [e]) ++ (w :: u)).drop
          ((s1 ++ [e]).length) = w :: u := List.drop_left
      rw [hHlen] at hdrop0
      exact hdrop0

/-- In a non-line-start scan step the first byte is necessarily copied:
    the guard is false, so no match is attempted at the head. -/
theorem moduleScanPass_head_copy_of_prev_nonline (b c : Nat) (cs : List Nat)
    (toks : List TokenEntry) (hb : b ≠ 10) :
    (moduleScanPass (some b) (c :: cs) toks ((c :: cs).length + 1)).1.head? = some c := by
  cases hscan : moduleScanPass (some c) cs toks (cs.length + 1) with
  | mk o t =>
      simp [moduleScanPass, hscan, hb]

theorem mtuOpenPair_not_ten (nxt : Option Nat) : mtuOpenPair 10 nxt = false := by
  simp [mtuOpenPair, mtuIsEByte]

theorem mtuCloseOpenPair_not_ten (nxt : Option Nat) : mtuCloseOpenPair 10 nxt = false := by
  simp [mtuCloseOpenPair]

/-- Tail slack lifts through one copied byte when the transformed tail keeps
    the same first byte (as every insertion-scan tail does). -/
theorem mtuCountPair_cons_copy_slack (q : Nat → Option Nat → Bool)
    (b : Nat) (rest out : List Nat)
    (hhead : out.head? = rest.head?)
    (hlen : rest.length ≤ out.length)
    (hslack : mtuCountPair q out + (out.length - rest.length) ≤ mtuCountPair q rest) :
    mtuCountPair q (b :: out) + ((b :: out).length - (b :: rest).length) ≤
      mtuCountPair q (b :: rest) := by
  rw [mtuCountPair_cons, mtuCountPair_cons, hhead]
  have hdiff : (b :: out).length - (b :: rest).length = out.length - rest.length := by
    simp only [List.length_cons]
    omega
  rw [hdiff]
  omega

/-- When a copied `]`-terminated left segment is followed by a transformed
    tail whose first byte is unchanged, tail slack lifts across the segment.
    This is the no-insertion branch of the defense newline scanner. -/
theorem mtuCountPair_copy_tail_slack (q : Nat → Option Nat → Bool) (L A outA : List Nat)
    (hend : q 93 none = true)
    (hboundary : q 93 outA.head? = q 93 A.head?)
    (hlen : A.length ≤ outA.length)
    (hslack : mtuCountPair q outA + (outA.length - A.length) ≤ mtuCountPair q A) :
    mtuCountPair q ((L ++ [93]) ++ outA) +
      (((L ++ [93]) ++ outA).length - ((L ++ [93]) ++ A).length) ≤
        mtuCountPair q ((L ++ [93]) ++ A) := by
  have hin := mtuCountPair_append_snoc q L 93 A
  have hout := mtuCountPair_append_snoc q L 93 outA
  rw [hend] at hin hout
  rw [hboundary] at hout
  have hdiff : ((L ++ [93]) ++ outA).length - ((L ++ [93]) ++ A).length =
      outA.length - A.length := by
    simp only [List.length_append, List.length_cons, List.length_nil]
    omega
  rw [hdiff]
  have hifTT : (if true = true then (1 : Nat) else 0) = 1 := rfl
  rw [hifTT] at hin hout
  omega

/-- When the defense inserts LF after a `]`-terminated opener head, that LF
    destroys exactly the open closing-bracket boundary position.  The inserted
    byte itself is uncounted, so one unit of length slack pays for the lost
    position while tail slack is preserved. -/
theorem mtuCountPair_insert_lf_tail_slack (q : Nat → Option Nat → Bool)
    (L A outA : List Nat)
    (hend : q 93 none = true)
    (hq10 : ∀ nxt, q 10 nxt = false)
    (hq93lf : q 93 (some 10) = false)
    (hbefore : q 93 A.head? = true)
    (hlen : A.length ≤ outA.length)
    (hslack : mtuCountPair q outA + (outA.length - A.length) ≤ mtuCountPair q A) :
    mtuCountPair q ((L ++ [93]) ++ ([10] ++ outA)) +
      (((L ++ [93]) ++ ([10] ++ outA)).length - ((L ++ [93]) ++ A).length) ≤
        mtuCountPair q ((L ++ [93]) ++ A) := by
  have hin := mtuCountPair_append_snoc q L 93 A
  have hout := mtuCountPair_append_snoc q L 93 ([10] ++ outA)
  simp only [hend] at hin hout
  have hhead10 : ([10] ++ outA).head? = some 10 := rfl
  rw [hhead10] at hout
  simp only [hq93lf] at hout
  simp only [hbefore] at hin
  have hm10 : mtuCountPair q ([10] ++ outA) = mtuCountPair q outA := by
    change mtuCountPair q (10 :: outA) = mtuCountPair q outA
    rw [mtuCountPair_cons, hq10 outA.head?]
    simp
  rw [hm10] at hout
  have hdiff : ((L ++ [93]) ++ ([10] ++ outA)).length - ((L ++ [93]) ++ A).length =
      outA.length - A.length + 1 := by
    simp only [List.length_append, List.length_cons, List.length_nil]
    omega
  rw [hdiff]
  have hifT : (if True then (1 : Nat) else 0) = 1 := rfl
  have hifF : (if false = true then (1 : Nat) else 0) = 0 := rfl
  rw [hifT] at hin hout
  rw [hifF] at hout
  omega

/-- A copied scan head cannot increase either width-two component.  If the
    copied byte is LF it is outside both alphabets; otherwise the tail scan
    begins out of line-start state and copies the next byte, so the pair at
    this position is unchanged. -/
theorem mtuCopy_bit_le (q : Nat → Option Nat → Bool) (b : Nat) (rest out : List Nat)
    (hq10 : ∀ nxt, q 10 nxt = false)
    (hhead : b ≠ 10 → out.head? = rest.head?) :
    (if q b out.head? then 1 else 0) ≤ (if q b rest.head? then 1 else 0) := by
  by_cases hb : b = 10
  · subst b
    simp [hq10]
  · rw [hhead hb]
    exact Nat.le_refl _

theorem mtuOpenCopy_bit_le (b : Nat) (rest out : List Nat)
    (hhead : b ≠ 10 → out.head? = rest.head?) :
    (if mtuOpenPair b out.head? then 1 else 0) ≤
      (if mtuOpenPair b rest.head? then 1 else 0) :=
  mtuCopy_bit_le mtuOpenPair b rest out mtuOpenPair_not_ten hhead

theorem mtuCloseCopy_bit_le (b : Nat) (rest out : List Nat)
    (hhead : b ≠ 10 → out.head? = rest.head?) :
    (if mtuCloseOpenPair b out.head? then 1 else 0) ≤
      (if mtuCloseOpenPair b rest.head? then 1 else 0) :=
  mtuCopy_bit_le mtuCloseOpenPair b rest out mtuCloseOpenPair_not_ten hhead


/-- Taking a positive number of bytes preserves the head byte. -/
theorem mtu_head_take_of_pos (src : List Nat) (n : Nat) (hn : 0 < n) :
    (src.take n).head? = src.head? := by
  rw [List.head?_take]
  simp [Nat.ne_of_gt hn]

/-- The newline-insertion scanner never changes the first byte of its
    subject.  Even at a detected opener head, the whole head is copied
    before any newline is inserted. -/
theorem insertGo_head_preserved (prev : Option Nat) (src : List Nat) :
    (insertInlineOpenerNewlinesGo prev src (src.length + 1)).head? = src.head? := by
  cases src with
  | nil => simp [insertInlineOpenerNewlinesGo]
  | cons b rest =>
      by_cases hstart : (prev == none || prev == some 10) = true
      · have hstartp : prev = none ∨ prev = some 10 := by simpa using hstart
        cases hm : moduleHeadEnd (b :: rest) with
        | none =>
            simp [insertInlineOpenerNewlinesGo, hstartp, hm]
        | some n =>
            have hnpos : 0 < n := (moduleHeadEnd_eq_some_spec (b :: rest) n hm).1
            have htakehead : ((b :: rest).take n).head? = some b := by
              rw [mtu_head_take_of_pos (b :: rest) n hnpos]
              rfl
            by_cases hsn : spacesThenNewline ((b :: rest).drop n) = true
            · have e := go_step_line_terminated prev (b :: rest)
                  ((b :: rest).length + 1) (by omega) hstart n hm hsn
              rw [Nat.add_sub_cancel] at e
              rw [e, List.head?_append, htakehead]
              rfl
            · have hsnf : spacesThenNewline ((b :: rest).drop n) = false := by
                cases h : spacesThenNewline ((b :: rest).drop n) with
                | true => exact absurd h hsn
                | false => rfl
              have e := go_step_inline_inserts_lf prev (b :: rest)
                  ((b :: rest).length + 1) (by omega) hstart n hm hsnf
              rw [Nat.add_sub_cancel] at e
              rw [e, List.append_assoc, List.head?_append, htakehead]
              rfl
      · have hstartp : ¬ (prev = none ∨ prev = some 10) := by
          intro hdis
          apply hstart
          rcases hdis with rfl | rfl <;> simp
        simp [insertInlineOpenerNewlinesGo, hstartp]

theorem mtuTermPair_not_ten (nxt : Option Nat) : mtuTermPair 10 nxt = false := by
  simp [mtuTermPair, mtuOpenPair, mtuCloseOpenPair, mtuIsEByte]

theorem mtuTermPair_93_none : mtuTermPair 93 none = true := by
  simp [mtuTermPair, mtuOpenPair, mtuCloseOpenPair, mtuIsEByte]

theorem mtuTermPair_93_lf : mtuTermPair 93 (some 10) = false := by
  simp [mtuTermPair, mtuOpenPair, mtuCloseOpenPair, mtuIsEByte]

theorem mtuTermPair_93_of_ne_lf (nxt : Option Nat) (h : nxt ≠ some 10) :
    mtuTermPair 93 nxt = true := by
  simp [mtuTermPair, mtuOpenPair, mtuCloseOpenPair, mtuIsEByte, h]

theorem mtuTermPair_101_none : mtuTermPair 101 none = false := by
  simp [mtuTermPair, mtuOpenPair, mtuCloseOpenPair, mtuIsEByte]

theorem mtuTermPair_101_of_ws {w : Nat} (hw : isWsByte w = true) :
    mtuTermPair 101 (some w) = true := by
  simp [mtuTermPair, mtuOpenPair, mtuCloseOpenPair, mtuIsEByte, hw]

theorem mtuTermPair_101_digit54 : mtuTermPair 101 (some 54) = false := by
  simp [mtuTermPair, mtuOpenPair, mtuCloseOpenPair, mtuIsEByte, isWsByte]

theorem moduleTermMeasure_digits654_append (A : List Nat) :
    moduleTermMeasure ([54, 53, 52] ++ A) = moduleTermMeasure A := by
  simp [moduleTermMeasure, mtuCountPair, mtuTermPair, mtuOpenPair,
    mtuCloseOpenPair, mtuIsEByte]

theorem spacesThenNewline_false_head_ne_lf {src : List Nat}
    (h : spacesThenNewline src = false) : src.head? ≠ some 10 := by
  cases src with
  | nil => simp
  | cons b rest =>
      by_cases hb : b = 10
      · subst b
        simp [spacesThenNewline] at h
      · simp [hb]

/-- The exact-lowercase `[[module` → `[[module654` rewrite destroys the
    opener-ending `e`+whitespace width-two position.  The three inserted
    digits are outside the counted alphabets, so the measure drops by exactly
    one whenever the byte after the literal is whitespace. -/
theorem rewriteModulePrefix_term_measure_exact (m : List Nat)
    (hexact : m.take 8 = litBytes "[[module")
    (hws : ∃ w rest, m.drop 8 = w :: rest ∧ isWsByte w = true) :
    moduleTermMeasure (rewriteModulePrefix m) + 1 = moduleTermMeasure m := by
  rcases hws with ⟨w, tail, hdrop, hw⟩
  have hm : m = litBytes "[[module" ++ m.drop 8 := by
    calc m = m.take 8 ++ m.drop 8 := (List.take_append_drop 8 m).symm
      _ = litBytes "[[module" ++ m.drop 8 := by rw [hexact]
  have hrewrite : rewriteModulePrefix m = litBytes "[[module654" ++ m.drop 8 := by
    have hb : (m.take 8 == litBytes "[[module") = true := by simpa [hexact]
    simp [rewriteModulePrefix, hb]
  have hlit7 : litBytes "[[module" = litBytes "[[modul" ++ [101] := by decide
  have hlit654 : litBytes "[[module654" =
      (litBytes "[[modul" ++ [101]) ++ [54, 53, 52] := by decide
  let L := litBytes "[[modul"
  have hmin : m = (L ++ [101]) ++ (w :: tail) := by
    rw [hm, hdrop, hlit7]
  have hmout : rewriteModulePrefix m =
      (L ++ [101]) ++ ([54, 53, 52] ++ (w :: tail)) := by
    rw [hrewrite, hdrop, hlit654]
    rw [List.append_assoc]
  have hin := mtuCountPair_append_snoc mtuTermPair L 101 (w :: tail)
  have hout := mtuCountPair_append_snoc mtuTermPair L 101 ([54, 53, 52] ++ (w :: tail))
  have hb_in : mtuTermPair 101 (w :: tail).head? = true := by
    have hh : (w :: tail).head? = some w := rfl
    rw [hh]
    exact mtuTermPair_101_of_ws hw
  have hb_out : mtuTermPair 101 ([54, 53, 52] ++ (w :: tail)).head? = false := by
    have hh : ([54, 53, 52] ++ (w :: tail)).head? = some 54 := rfl
    rw [hh]
    exact mtuTermPair_101_digit54
  simp only [mtuTermPair_101_none] at hin hout
  simp only [hb_in] at hin
  simp only [hb_out] at hout
  have hdigits : mtuCountPair mtuTermPair ([54, 53, 52] ++ (w :: tail)) =
      mtuCountPair mtuTermPair (w :: tail) :=
    moduleTermMeasure_digits654_append (w :: tail)
  rw [hdigits] at hout
  have hifF : (if False then (1 : Nat) else 0) = 0 := rfl
  have hifFT : (if false = true then (1 : Nat) else 0) = 0 := rfl
  have hifT : (if True then (1 : Nat) else 0) = 1 := rfl
  have hifTT : (if true = true then (1 : Nat) else 0) = 1 := rfl
  rw [hifFT] at hin hout
  rw [hifT] at hin
  have hconv : (L ++ [101] ++ ([54, 53, 52] ++ w :: tail)) =
      (L ++ [101] ++ 54 :: 53 :: 52 :: w :: tail) := rfl
  rw [hconv] at hout
  rw [hmout, hmin]
  dsimp [moduleTermMeasure]
  omega

/-- Exact-lowercase `654` insertion never increases the width-two measure.
    More precisely, the input measure is the output measure plus the single
    opener-boundary bit, whether or not that bit was whitespace-enabled. -/
theorem rewriteModulePrefix_term_measure_exact_slack (m : List Nat)
    (hexact : m.take 8 = litBytes "[[module") :
    moduleTermMeasure m =
      moduleTermMeasure (rewriteModulePrefix m) +
        (if mtuTermPair 101 (m.drop 8).head? then 1 else 0) := by
  have hm : m = litBytes "[[module" ++ m.drop 8 := by
    calc m = m.take 8 ++ m.drop 8 := (List.take_append_drop 8 m).symm
      _ = litBytes "[[module" ++ m.drop 8 := by rw [hexact]
  have hrewrite : rewriteModulePrefix m = litBytes "[[module654" ++ m.drop 8 := by
    have hb : (m.take 8 == litBytes "[[module") = true := by simpa [hexact]
    simp [rewriteModulePrefix, hb]
  have hlit7 : litBytes "[[module" = litBytes "[[modul" ++ [101] := by decide
  have hlit654 : litBytes "[[module654" =
      (litBytes "[[modul" ++ [101]) ++ [54, 53, 52] := by decide
  let L := litBytes "[[modul"
  let A := m.drop 8
  have hmin : m = (L ++ [101]) ++ A := by
    rw [hm, hlit7]
  have hmout : rewriteModulePrefix m =
      (L ++ [101]) ++ ([54, 53, 52] ++ A) := by
    rw [hrewrite, hlit654]
    rw [List.append_assoc]
  change moduleTermMeasure m = moduleTermMeasure (rewriteModulePrefix m) +
    (if mtuTermPair 101 A.head? then 1 else 0)
  have hin := mtuCountPair_append_snoc mtuTermPair L 101 A
  have hout := mtuCountPair_append_snoc mtuTermPair L 101 ([54, 53, 52] ++ A)
  have hb_out : mtuTermPair 101 ([54, 53, 52] ++ A).head? = false := by
    have hh : ([54, 53, 52] ++ A).head? = some 54 := rfl
    rw [hh]
    exact mtuTermPair_101_digit54
  simp only [mtuTermPair_101_none] at hin hout
  simp only [hb_out] at hout
  have hdigits : mtuCountPair mtuTermPair ([54, 53, 52] ++ A) =
      mtuCountPair mtuTermPair A :=
    moduleTermMeasure_digits654_append A
  rw [hdigits] at hout
  have hifFT : (if false = true then (1 : Nat) else 0) = 0 := rfl
  rw [hifFT] at hin hout
  have hconv : (L ++ [101] ++ ([54, 53, 52] ++ A)) =
      (L ++ [101] ++ 54 :: 53 :: 52 :: A) := rfl
  rw [hconv] at hout
  rw [hmout, hmin]
  dsimp [moduleTermMeasure] at hin hout ⊢
  omega

/-- Exact-lowercase `654` insertion never increases the measure. -/
theorem rewriteModulePrefix_term_measure_le_exact (m : List Nat)
    (hexact : m.take 8 = litBytes "[[module") :
    moduleTermMeasure (rewriteModulePrefix m) ≤ moduleTermMeasure m := by
  have h := rewriteModulePrefix_term_measure_exact_slack m hexact
  omega

/-- A nonexact rewrite is the identity, hence measure-preserving.  Together
    with the exact branch, the rewrite never increases the termination
    measure. -/
theorem rewriteModulePrefix_term_measure_le (m : List Nat)
    (hws : (m.take 8 == litBytes "[[module") = true →
      ∃ w rest, m.drop 8 = w :: rest ∧ isWsByte w = true) :
    moduleTermMeasure (rewriteModulePrefix m) ≤ moduleTermMeasure m := by
  cases hb : (m.take 8 == litBytes "[[module") with
  | false =>
      simp [rewriteModulePrefix, hb]
  | true =>
      have hexact : m.take 8 = litBytes "[[module" := by simpa using hb
      have hdrop1 := rewriteModulePrefix_term_measure_exact m hexact (hws hb)
      omega

theorem mtuTermPair_false_of_ne_alphabet {b : Nat} {nxt : Option Nat}
    (h91 : b ≠ 91) (h93 : b ≠ 93) (he : b ≠ 101) (hE : b ≠ 69) :
    mtuTermPair b nxt = false := by
  simp [mtuTermPair, mtuOpenPair, mtuCloseOpenPair, mtuIsEByte, h91, h93, he, hE]

theorem digitByte_ne_93 {c : Char} (h : c.isDigit = true) : Char.toNat c ≠ 93 := by
  have hh := Char.isDigit_iff_toNat.mp h
  have h9 : ('9' : Char).toNat = 57 := by decide
  have h0 : ('0' : Char).toNat = 48 := by decide
  rw [h0, h9] at hh
  omega

theorem digitByte_ne_101 {c : Char} (h : c.isDigit = true) : Char.toNat c ≠ 101 := by
  have hh := Char.isDigit_iff_toNat.mp h
  have h9 : ('9' : Char).toNat = 57 := by decide
  have h0 : ('0' : Char).toNat = 48 := by decide
  rw [h0, h9] at hh
  omega

theorem digitByte_ne_69 {c : Char} (h : c.isDigit = true) : Char.toNat c ≠ 69 := by
  have hh := Char.isDigit_iff_toNat.mp h
  have h9 : ('9' : Char).toNat = 57 := by decide
  have h0 : ('0' : Char).toNat = 48 := by decide
  rw [h0, h9] at hh
  omega

theorem phBytes_byte_ne_alphabet (n b : Nat) (hb : b ∈ phBytes n) :
    b ≠ 91 ∧ b ≠ 93 ∧ b ≠ 101 ∧ b ≠ 69 := by
  unfold phBytes at hb
  simp at hb
  rcases hb with hbff | ⟨c, hc, hcb⟩ | hbff
  · rw [hbff]
    exact ⟨by decide, by decide, by decide, by decide⟩
  · have hd := toDigits_all_isDigit n c hc
    subst b
    exact ⟨digitByte_ne_91 hd, digitByte_ne_93 hd, digitByte_ne_101 hd,
      digitByte_ne_69 hd⟩
  · rw [hbff]
    exact ⟨by decide, by decide, by decide, by decide⟩

theorem claimRepl_uncounted (n b : Nat) (nxt : Option Nat)
    (hb : b ∈ [10, 10] ++ phBytes n ++ [10, 10]) :
    mtuTermPair b nxt = false := by
  have hmem : b = 10 ∨ b ∈ phBytes n ∨ b = 10 := by simpa using hb
  rcases hmem with hb10 | hbph | hb10
  · rw [hb10]
    exact mtuTermPair_false_of_ne_alphabet (by decide) (by decide)
      (by decide) (by decide)
  · rcases phBytes_byte_ne_alphabet n b hbph with ⟨h91, h93, h101, h69⟩
    exact mtuTermPair_false_of_ne_alphabet h91 h93 h101 h69
  · rw [hb10]
    exact mtuTermPair_false_of_ne_alphabet (by decide) (by decide)
      (by decide) (by decide)

theorem bodyHasCodeToken_nil_aux (toks : List TokenEntry) (i : Nat) :
    bodyHasCodeToken ([] : List Nat) toks i = false := by
  induction toks generalizing i with
  | nil => rfl
  | cons t ts ih =>
      simp [bodyHasCodeToken, bytesContain, ih]

theorem bodyHasCodeToken_nil (toks : List TokenEntry) :
    bodyHasCodeToken ([] : List Nat) toks 0 = false :=
  bodyHasCodeToken_nil_aux toks 0

/-- LF is outside the width-two counted alphabet, so concatenation after a
    LF-terminated left segment is exactly additive. -/
theorem moduleTermMeasure_append_snoc_lf (pre ys : List Nat) :
    moduleTermMeasure ((pre ++ [10]) ++ ys) =
      moduleTermMeasure (pre ++ [10]) + moduleTermMeasure ys := by
  have h := mtuCountPair_append_snoc mtuTermPair pre 10 ys
  have hnone : mtuTermPair 10 none = false := mtuTermPair_not_ten none
  have hhead : mtuTermPair 10 ys.head? = false := mtuTermPair_not_ten ys.head?
  dsimp [moduleTermMeasure]
  simp [hnone, hhead] at h ⊢
  omega

/-- The fixed placeholder wrapper used by ordinary Module claims is invisible
    to the width-two termination measure, including its right boundary. -/
theorem moduleTermMeasure_claimPrefix_append (n : Nat) (ys : List Nat) :
    moduleTermMeasure (([10, 10] ++ phBytes n ++ [10, 10]) ++ ys) =
      moduleTermMeasure ys := by
  dsimp [moduleTermMeasure]
  exact mtuCountPair_append_eq_right_of_uncounted mtuTermPair
    ([10, 10] ++ phBytes n ++ [10, 10]) ys
    (fun b nxt hb => claimRepl_uncounted n b nxt hb)

/-- The width-two measure of one defense newline-insertion scan, plus exactly
    its length growth, never exceeds the measure of its input.  Thus every
    inserted LF pays for the width-two position it destroys; if the output is
    longer, the measure alone is strictly smaller. -/
theorem insertGo_term_slack_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat), src.length = n →
      moduleTermMeasure (insertInlineOpenerNewlinesGo prev src (src.length + 1)) +
        ((insertInlineOpenerNewlinesGo prev src (src.length + 1)).length - src.length) ≤
          moduleTermMeasure src := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src hlen
      cases src with
      | nil => simp [insertInlineOpenerNewlinesGo, moduleTermMeasure, mtuCountPair]
      | cons b rest =>
          have hlen' : rest.length + 1 = n := by simpa using hlen
          by_cases hstart : (prev == none || prev == some 10) = true
          · have hstartp : prev = none ∨ prev = some 10 := by simpa using hstart
            cases hm : moduleHeadEnd (b :: rest) with
            | none =>
                have ihr := ih rest.length (by omega) (some b) rest rfl
                have hprops := go_props_aux rest.length (some b) rest rfl
                have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                    ((b :: rest).length + 1)
                    = b :: insertInlineOpenerNewlinesGo (some b) rest
                        (rest.length + 1) := by
                  simp [insertInlineOpenerNewlinesGo, hstartp, hm]
                rw [e]
                dsimp [moduleTermMeasure]
                exact mtuCountPair_cons_copy_slack mtuTermPair b rest
                  (insertInlineOpenerNewlinesGo (some b) rest (rest.length + 1))
                  (insertGo_head_preserved (some b) rest) hprops.2.1 ihr
            | some n' =>
                rcases moduleHeadEnd_eq_some_spec (b :: rest) n' hm with
                  ⟨hnpos, hnle, c, hn'eq, htakeEnd, -⟩
                obtain ⟨after, hafter⟩ : ∃ a, a = (b :: rest).drop n' := ⟨_, rfl⟩
                have hafterlen : after.length = (b :: rest).length - n' := by
                  simp [hafter, List.length_drop]
                have hrecEq : ∀ (p : Option Nat),
                    insertInlineOpenerNewlinesGo p after ((b :: rest).length)
                      = insertInlineOpenerNewlinesGo p after (after.length + 1) :=
                  fun p => go_fuel_irrelevant p after (by omega) (by omega)
                have hexL : ∃ L, (b :: rest).take n' = L ++ [93] := by
                  refine ⟨(b :: rest).take (8 + c) ++ [93], ?_⟩
                  have hclose : litBytes "]]" = [93] ++ [93] := by decide
                  rw [htakeEnd, hclose, ← List.append_assoc]
                rcases hexL with ⟨L, hL⟩
                have hsrcdecomp : (b :: rest) = (L ++ [93]) ++ after := by
                  calc (b :: rest) = (b :: rest).take n' ++ after := by
                        have h := (List.take_append_drop n' (b :: rest)).symm
                        rwa [← hafter] at h
                    _ = (L ++ [93]) ++ after := by rw [hL]
                by_cases hsn : spacesThenNewline after = true
                · have iha := ih after.length (by omega) (some 93) after rfl
                  have hprops := go_props_aux after.length (some 93) after rfl
                  have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                      ((b :: rest).length + 1)
                      = (L ++ [93]) ++ insertInlineOpenerNewlinesGo (some 93) after
                          (after.length + 1) := by
                    have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n'
                          ++ insertInlineOpenerNewlinesGo (some 93) after
                              ((b :: rest).length) := by
                      have hstep := go_step_line_terminated prev (b :: rest)
                          ((b :: rest).length + 1) (by omega) hstart n' hm
                          (by rw [← hafter]; exact hsn)
                      rw [Nat.add_sub_cancel] at hstep
                      rw [← hafter] at hstep
                      exact hstep
                    rw [e0, hrecEq, hL]
                  rw [e, hsrcdecomp]
                  dsimp [moduleTermMeasure]
                  apply mtuCountPair_copy_tail_slack mtuTermPair L after
                    (insertInlineOpenerNewlinesGo (some 93) after (after.length + 1))
                    mtuTermPair_93_none
                  · rw [insertGo_head_preserved (some 93) after]
                  · exact hprops.2.1
                  · exact iha
                · have hsnf : spacesThenNewline after = false := by
                    cases h : spacesThenNewline after with
                    | true => exact absurd h hsn
                    | false => rfl
                  have iha := ih after.length (by omega) (some 10) after rfl
                  have hprops := go_props_aux after.length (some 10) after rfl
                  have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                      ((b :: rest).length + 1)
                      = (L ++ [93]) ++ ([10] ++ insertInlineOpenerNewlinesGo (some 10) after
                          (after.length + 1)) := by
                    have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n' ++ [10]
                          ++ insertInlineOpenerNewlinesGo (some 10) after
                              ((b :: rest).length) := by
                      have hstep := go_step_inline_inserts_lf prev (b :: rest)
                          ((b :: rest).length + 1) (by omega) hstart n' hm
                          (by rw [← hafter]; exact hsnf)
                      rw [Nat.add_sub_cancel] at hstep
                      rw [← hafter] at hstep
                      exact hstep
                    rw [e0, hrecEq, hL]
                    simp [List.append_assoc]
                  rw [e, hsrcdecomp]
                  dsimp [moduleTermMeasure]
                  apply mtuCountPair_insert_lf_tail_slack mtuTermPair L after
                    (insertInlineOpenerNewlinesGo (some 10) after (after.length + 1))
                    mtuTermPair_93_none mtuTermPair_not_ten mtuTermPair_93_lf
                  · exact mtuTermPair_93_of_ne_lf after.head?
                      (spacesThenNewline_false_head_ne_lf hsnf)
                  · exact hprops.2.1
                  · exact iha
          · have hstartp : ¬ (prev = none ∨ prev = some 10) := by
              intro hdis
              apply hstart
              rcases hdis with rfl | rfl <;> simp
            have ihr := ih rest.length (by omega) (some b) rest rfl
            have hprops := go_props_aux rest.length (some b) rest rfl
            have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                ((b :: rest).length + 1)
                = b :: insertInlineOpenerNewlinesGo (some b) rest
                    (rest.length + 1) := by
              simp [insertInlineOpenerNewlinesGo, hstartp]
            rw [e]
            dsimp [moduleTermMeasure]
            exact mtuCountPair_cons_copy_slack mtuTermPair b rest
              (insertInlineOpenerNewlinesGo (some b) rest (rest.length + 1))
              (insertGo_head_preserved (some b) rest) hprops.2.1 ihr

theorem insertInlineOpenerNewlines_term_slack (src : List Nat) :
    moduleTermMeasure (insertInlineOpenerNewlines src) +
      ((insertInlineOpenerNewlines src).length - src.length) ≤
        moduleTermMeasure src :=
  insertGo_term_slack_aux src.length none src rfl

theorem insertInlineOpenerNewlines_term_measure_le (src : List Nat) :
    moduleTermMeasure (insertInlineOpenerNewlines src) ≤ moduleTermMeasure src := by
  have h := insertInlineOpenerNewlines_term_slack src
  omega

theorem insertInlineOpenerNewlines_term_measure_strict_of_length_lt {src : List Nat}
    (hlen : src.length < (insertInlineOpenerNewlines src).length) :
    moduleTermMeasure (insertInlineOpenerNewlines src) < moduleTermMeasure src := by
  have h := insertInlineOpenerNewlines_term_slack src
  omega

theorem rewriteModulePrefix_term_measure_le_any (m : List Nat) :
    moduleTermMeasure (rewriteModulePrefix m) ≤ moduleTermMeasure m := by
  cases hb : (m.take 8 == litBytes "[[module") with
  | false =>
      simp [rewriteModulePrefix, hb]
  | true =>
      have hexact : m.take 8 = litBytes "[[module" := by simpa using hb
      exact rewriteModulePrefix_term_measure_le_exact m hexact

/-- One whole defense replacement never increases the width-two measure. -/
theorem defense_term_measure_le (m : List Nat) :
    moduleTermMeasure (rewriteModulePrefix (insertInlineOpenerNewlines m)) ≤
      moduleTermMeasure m := by
  have hins := insertInlineOpenerNewlines_term_measure_le m
  have hrew := rewriteModulePrefix_term_measure_le_any (insertInlineOpenerNewlines m)
  omega

/-- If insertion changed nothing and the exact lowercase rewrite fires on a
    valid opener (whose byte after the literal is whitespace), the rewrite
    strictly destroys the opener-ending pair.  If insertion did change, its
    own length slack already gives strict decrease. -/
theorem defense_term_measure_strict_of_changed (m : List Nat)
    (hws : ∃ w rest, m.drop 8 = w :: rest ∧ isWsByte w = true)
    (hne : rewriteModulePrefix (insertInlineOpenerNewlines m) ≠ m) :
    moduleTermMeasure (rewriteModulePrefix (insertInlineOpenerNewlines m)) <
      moduleTermMeasure m := by
  have hinsle := insertInlineOpenerNewlines_term_measure_le m
  have hrewle := rewriteModulePrefix_term_measure_le_any (insertInlineOpenerNewlines m)
  by_cases hlen : (insertInlineOpenerNewlines m).length = m.length
  · have hinseq : insertInlineOpenerNewlines m = m :=
      insertInlineOpenerNewlines_eq_of_length_eq hlen
    rw [hinseq] at hne hrewle ⊢
    cases hb : (m.take 8 == litBytes "[[module") with
    | false =>
        have hid : rewriteModulePrefix m = m := by simp [rewriteModulePrefix, hb]
        exact absurd hid hne
    | true =>
        have hexact : m.take 8 = litBytes "[[module" := by simpa using hb
        have hslack := rewriteModulePrefix_term_measure_exact_slack m hexact
        rcases hws with ⟨w, rest, hdrop, hw⟩
        have hbit : mtuTermPair 101 (m.drop 8).head? = true := by
          rw [hdrop]
          exact mtuTermPair_101_of_ws hw
        rw [hbit] at hslack
        have hifT : (if true then (1 : Nat) else 0) = 1 := rfl
        rw [hifT] at hslack
        have hinseqM := congrArg moduleTermMeasure hinseq
        omega
  · have hge := insertInlineOpenerNewlines_length_ge m
    have hgt : m.length < (insertInlineOpenerNewlines m).length := by omega
    have hstrict := insertInlineOpenerNewlines_term_measure_strict_of_length_lt hgt
    omega


/-- The per-match structural proof strengthened with the width-two measure
    slack needed by the scan induction. -/
theorem moduleTryCands_term_measure (src name : List Nat) (toks : List TokenEntry)
    {cands0 : List (List Nat × List Nat)}
    (hhead : moduleHead (litBytes "[[module") src = some (name, cands0))
    (htake2 : src.take 2 = [91, 91]) :
    ∀ (cands : List (List Nat × List Nat)),
      (∀ cand ∈ cands, ∃ A : List Nat,
        src = A ++ [93, 93] ++ cand.2 ∧ 10 ≤ A.length) →
      ∀ (repl rest' : List Nat) (t1 : List TokenEntry),
        moduleTryCands src name toks cands = some (repl, rest', t1) →
        ∃ matched : List Nat, src = matched ++ rest' ∧
          13 ≤ matched.length ∧ 2 ≤ count91 matched ∧
          3 ≤ moduleTermMeasure matched ∧
          ((t1 = toks ∧ count91 repl = count91 matched ∧
              matched.length ≤ repl.length ∧
              (repl ≠ matched → matched.length < repl.length)) ∨
            (t1 ≠ toks ∧ count91 repl + 2 ≤ count91 matched ∧
              moduleTermMeasure repl + 3 ≤ moduleTermMeasure matched)) := by
  intro cands hcands
  induction cands with
  | nil =>
      intro repl rest' t1 h
      simp [moduleTryCands] at h
  | cons cand more ih =>
      rcases cand with ⟨attrRaw, r⟩
      intro repl rest' t1 h
      have ih' := ih (fun cand hmem => hcands cand (List.mem_cons_of_mem _ hmem))
      cases htail : moduleTail r with
      | none =>
          simp [moduleTryCands, htail] at h
          exact ih' repl rest' t1 h
      | some pair =>
          rcases pair with ⟨bodyRaw, r'⟩
          obtain ⟨A, hA, hA10⟩ := hcands (attrRaw, r) List.mem_cons_self
          obtain ⟨wsPre, B, hrB, htailCases⟩ := moduleTail_spec htail
          -- The full matched prefix P and its properties.
          have hAtake2 : A.take 2 = [91, 91] := by
            have e : src.take 2 = A.take 2 := by
              rw [hA,
                take_two_append _ _ (by
                  simp only [List.length_append, List.length_cons,
                    List.length_nil]
                  omega),
                take_two_append _ _ (by omega)]
            rw [htake2] at e
            exact e.symm
          have hPtake2 : (A ++ [93, 93] ++ wsPre ++ [10]).take 2 = [91, 91] := by
            rw [take_two_append _ _ (by
                  simp only [List.length_append, List.length_cons,
                    List.length_nil]
                  omega),
              take_two_append _ _ (by
                  simp only [List.length_append, List.length_cons,
                    List.length_nil]
                  omega),
              take_two_append _ _ (by omega)]
            exact hAtake2
          have hP91 : 2 ≤ count91 (A ++ [93, 93] ++ wsPre ++ [10]) := by
            have h1 := count91_take_le 2 (A ++ [93, 93] ++ wsPre ++ [10])
            rw [hPtake2] at h1
            have h2 : count91 [91, 91] = 2 := by decide
            omega
          have hPlen : 13 ≤ (A ++ [93, 93] ++ wsPre ++ [10]).length := by
            simp only [List.length_append, List.length_cons, List.length_nil]
            omega
          have hsrcPB : src = (A ++ [93, 93] ++ wsPre ++ [10]) ++ B := by
            rw [hA, hrB]
            simp [List.append_assoc]
          -- The matched text, in both tail cases.
          rcases htailCases with ⟨hbody, hr'eq, -⟩ | ⟨c, closerVar, -, hbody, hBdrop, hcloserlen, hcloser91⟩
          · -- No closer: matched is exactly P, rest' is B.
            have hlen : src.length
                = (A ++ [93, 93] ++ wsPre ++ [10]).length + B.length := by
              rw [hsrcPB]
              simp only [List.length_append, List.length_cons, List.length_nil]
            have hidx : src.length - r'.length
                = (A ++ [93, 93] ++ wsPre ++ [10]).length := by
              have hr'len : r'.length = B.length := by rw [hr'eq]
              omega
            have hmatched : src.take (src.length - r'.length)
                = A ++ [93, 93] ++ wsPre ++ [10] := by
              rw [hidx, hsrcPB, List.take_left]
            have hsrcdecomp : src
                = src.take (src.length - r'.length) ++ r' := by
              rw [hmatched, hr'eq]
              exact hsrcPB
            have hmlen0 : 13 ≤ (src.take (src.length - r'.length)).length := by
              rw [hmatched]
              exact hPlen
            have hm91two : 2 ≤ count91 (src.take (src.length - r'.length)) := by
              rw [hmatched]
              exact hP91
            have hMlower : 3 ≤ moduleTermMeasure (src.take (src.length - r'.length)) :=
              moduleTermMeasure_lower_of_moduleHead_prefix hhead hsrcdecomp hmlen0 hm91two
            have hnohtml : ¬(bodyRaw ≠ [] ∧ bodyHasHtmlToken bodyRaw toks 0 = true) := by
              simp [hbody]
            by_cases hdef : 1 < countModuleOpeners none
                (src.take (src.length - r'.length)) (src.length - r'.length + 1)
            · have hdefx := moduleTryCands_defense_exact src name toks attrRaw r
                bodyRaw r' more htail hnohtml hdef
              rw [hdefx] at h
              have hinj := Option.some.inj h
              have hrepeq : repl
                  = rewriteModulePrefix (insertInlineOpenerNewlines
                      (src.take (src.length - r'.length))) :=
                (congrArg Prod.fst hinj).symm
              have hresteq : r' = rest' :=
                congrArg Prod.fst (congrArg Prod.snd hinj)
              have ht1eq : t1 = toks :=
                (congrArg Prod.snd (congrArg Prod.snd hinj)).symm
              subst hresteq
              refine ⟨src.take (src.length - r'.length), hsrcdecomp, ?_, ?_, hMlower,
                Or.inl ⟨ht1eq, ?_, ?_, ?_⟩⟩
              · rw [hmatched]; exact hPlen
              · rw [hmatched]; exact hP91
              · rw [hrepeq]; exact defense_count91 _
              · rw [hrepeq]; exact defense_length_ge _
              · rw [hrepeq]
                intro hne
                exact defense_strict_length hne
            · simp [moduleTryCands, htail, hnohtml, hdef, claimModule] at h
              have ht1 : t1 ≠ toks := by
                intro hcon
                have e := h.2.2.symm
                rw [hcon] at e
                have hl := congrArg List.length e
                simp at hl
              refine ⟨src.take (src.length - r'.length), hsrcdecomp.trans (congrArg (fun x => src.take (src.length - r'.length) ++ x) h.2.1), ?_, ?_, hMlower,
                Or.inr ⟨ht1, ?_, ?_⟩⟩
              · rw [hmatched]; exact hPlen
              · rw [hmatched]; exact hP91
              · rw [← h.1]
                by_cases hcode : bodyHasCodeToken bodyRaw toks 0 = true
                · rw [if_pos hcode, hbody]
                  simp only [List.nil_append]
                  rw [count91_cons_ten, count91_cons_ten, count91_append,
                    count91_phBytes, count91_cons_ten, count91_cons_ten]
                  -- authored closer is a suffix drop of P
                  have hP : count91 (A ++ [93, 93] ++ wsPre ++ [10])
                      = count91 ((A ++ [93, 93] ++ wsPre ++ [10]).take
                          ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11))
                        + count91 ((A ++ [93, 93] ++ wsPre ++ [10]).drop
                          ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11)) := by
                    rw [← count91_append, List.take_append_drop]
                  have htake91 : 2 ≤ count91 ((A ++ [93, 93] ++ wsPre ++ [10]).take
                      ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11)) := by
                    have h1 := count91_take_le 2
                      ((A ++ [93, 93] ++ wsPre ++ [10]).take
                        ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11))
                    have h2 : ((A ++ [93, 93] ++ wsPre ++ [10]).take
                        ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11)).take 2
                        = [91, 91] := by
                      rw [List.take_take]
                      have hle : 2 ≤ (A ++ [93, 93] ++ wsPre ++ [10]).length
                          - 11 := by
                        have := hPlen
                        omega
                      simp only [Nat.min_eq_left hle, Nat.min_eq_right hle]
                      exact hPtake2
                    rw [h2] at h1
                    have h3 : count91 [91, 91] = 2 := by decide
                    omega
                  have hdropEq : (src.take (src.length - r'.length)).drop
                      (src.length - r'.length - 11)
                      = (A ++ [93, 93] ++ wsPre ++ [10]).drop
                        ((A ++ [93, 93] ++ wsPre ++ [10]).length - 11) := by
                    rw [← hidx, hmatched]
                  rw [hdropEq]
                  have hmeq : count91 (src.take (src.length - r'.length))
                      = count91 (A ++ [93, 93] ++ wsPre ++ [10]) := by
                    rw [hmatched]
                  omega
                · rw [if_neg hcode]
                  rw [count91_cons_ten, count91_cons_ten, count91_append,
                    count91_phBytes, count91_cons_ten, count91_cons_ten,
                    count91_nil]
                  rw [hmatched]
                  omega
              · -- The ordinary replacement wrapper has zero measured positions.
                have hcodefalse : bodyHasCodeToken bodyRaw toks 0 = false := by
                  rw [hbody]
                  exact bodyHasCodeToken_nil toks
                rw [← h.1]
                simp [hcodefalse]
                have hzero0 : moduleTermMeasure
                    (10 :: 10 :: (phBytes toks.length ++ [10, 10])) = 0 := by
                  calc moduleTermMeasure (10 :: 10 :: (phBytes toks.length ++ [10, 10]))
                      = moduleTermMeasure (([10, 10] ++ phBytes toks.length ++ [10, 10]) ++ ([] : List Nat)) := by simp
                    _ = moduleTermMeasure ([] : List Nat) :=
                        moduleTermMeasure_claimPrefix_append toks.length ([] : List Nat)
                    _ = 0 := rfl
                rw [hzero0]
                omega
          · -- Closer found: matched is P ++ bodyRaw ++ closerVar.
            have hBlen : B.length = (c + 1) + 11 + r'.length := by
              have e1 : (B.drop (c + 1)).length = 11 + r'.length := by
                rw [hBdrop, List.length_append, hcloserlen]
              have e2 : (B.drop (c + 1)).length = B.length - (c + 1) :=
                List.length_drop
              have e3 : (B.take (c + 1)).length = c + 1 := by
                rw [List.length_take, Nat.min_eq_left]
                omega
              have e4 : B.length = (B.take (c + 1)).length
                  + (B.drop (c + 1)).length := by
                rw [← List.length_append, List.take_append_drop]
              omega
            have hlen : src.length
                = (A ++ [93, 93] ++ wsPre ++ [10]).length + B.length := by
              rw [hsrcPB]
              simp only [List.length_append, List.length_cons, List.length_nil]
            have hidx : src.length - r'.length
                = (A ++ [93, 93] ++ wsPre ++ [10]).length + ((c + 1) + 11) := by
              omega
            have hmatched : src.take (src.length - r'.length)
                = (A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw ++ closerVar := by
              rw [hidx, hsrcPB]
              have e1 : ((A ++ [93, 93] ++ wsPre ++ [10]) ++ B).take
                    ((A ++ [93, 93] ++ wsPre ++ [10]).length + ((c + 1) + 11))
                  = (A ++ [93, 93] ++ wsPre ++ [10])
                    ++ B.take ((c + 1) + 11) := by
                rw [List.take_append]
                have ht : (A ++ [93, 93] ++ wsPre ++ [10]).take
                      ((A ++ [93, 93] ++ wsPre ++ [10]).length + ((c + 1) + 11))
                    = A ++ [93, 93] ++ wsPre ++ [10] :=
                  List.take_of_length_le (by omega)
                rw [ht]
                simp
              rw [e1]
              have e2 : B.take ((c + 1) + 11) = bodyRaw ++ closerVar := by
                have e1 : B.take ((c + 1) + 11)
                    = (B.take (c + 1) ++ B.drop (c + 1)).take ((c + 1) + 11) := by
                  rw [List.take_append_drop]
                rw [e1, List.take_append]
                have htle : (B.take (c + 1)).length = c + 1 := by
                  rw [List.length_take, Nat.min_eq_left]
                  have e3 : (B.drop (c + 1)).length = B.length - (c + 1) :=
                    List.length_drop
                  have e4 : (B.drop (c + 1)).length = 11 + r'.length := by
                    rw [hBdrop, List.length_append, hcloserlen]
                  omega
                rw [htle]
                have hsub : (c + 1) + 11 - (c + 1) = 11 := by omega
                rw [hsub, hBdrop]
                have ht1 : (B.take (c + 1)).take ((c + 1) + 11)
                    = B.take (c + 1) :=
                  List.take_of_length_le (by rw [htle]; omega)
                rw [ht1, ← hbody]
                have ht2 : (closerVar ++ r').take 11 = closerVar := by
                  rw [← hcloserlen]
                  exact List.take_left
                rw [ht2]
              rw [e2]
              simp only [List.append_assoc]
            have hsrcdecomp : src
                = src.take (src.length - r'.length) ++ r' := by
              rw [hmatched]
              have hB : B = bodyRaw ++ closerVar ++ r' := by
                have e : B = B.take (c + 1) ++ B.drop (c + 1) :=
                  (List.take_append_drop _ _).symm
                rw [e, ← hbody, hBdrop]
                simp [List.append_assoc]
              rw [hsrcPB, hB]
              simp [List.append_assoc]
            have hmatched91 : count91 (src.take (src.length - r'.length))
                = count91 (A ++ [93, 93] ++ wsPre ++ [10])
                  + count91 bodyRaw + 2 := by
              rw [hmatched, count91_append, count91_append, hcloser91]
            have hmatchedlen : 13 ≤ (src.take (src.length - r'.length)).length := by
              rw [hmatched]
              simp only [List.length_append]
              omega
            have hm91two : 2 ≤ count91 (src.take (src.length - r'.length)) := by
              omega
            have hMlower : 3 ≤ moduleTermMeasure (src.take (src.length - r'.length)) :=
              moduleTermMeasure_lower_of_moduleHead_prefix hhead hsrcdecomp hmatchedlen hm91two
            by_cases hhtml : bodyRaw ≠ [] ∧ bodyHasHtmlToken bodyRaw toks 0 = true
            · simp [moduleTryCands, htail, hhtml, claimModule] at h
              have ht1 : t1 ≠ toks := by
                intro hcon
                have e := h.2.2.symm
                rw [hcon] at e
                have hl := congrArg List.length e
                simp at hl
              refine ⟨src.take (src.length - r'.length), hsrcdecomp.trans (congrArg (fun x => src.take (src.length - r'.length) ++ x) h.2.1),
                hmatchedlen, ?_, hMlower, Or.inr ⟨ht1, ?_, ?_⟩⟩
              · omega
              · rw [← h.1]
                rw [count91_cons_ten, count91_cons_ten, count91_append,
                  count91_phBytes, count91_cons_ten, count91_cons_ten,
                  count91_append]
                have hauth : (src.take (src.length - r'.length)).drop
                      (src.length - r'.length - 11)
                    = closerVar := by
                  have hidx2 : src.length - r'.length - 11
                      = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length := by
                    have e1 : (src.take (src.length - r'.length)).length
                        = src.length - r'.length := by
                      rw [List.length_take]
                      exact Nat.min_eq_left (Nat.sub_le _ _)
                    have e2 : (src.take (src.length - r'.length)).length
                        = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length
                          + 11 := by
                      rw [hmatched]
                      simp only [List.length_append, hcloserlen]
                    omega
                  rw [hidx2, hmatched]
                  exact List.drop_left
                rw [hauth, hcloser91]
                omega
              · rw [← h.1]
                have hauth : (src.take (src.length - r'.length)).drop
                      (src.length - r'.length - 11)
                    = closerVar := by
                  have hidx2 : src.length - r'.length - 11
                      = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length := by
                    have e1 : (src.take (src.length - r'.length)).length
                        = src.length - r'.length := by
                      rw [List.length_take]
                      exact Nat.min_eq_left (Nat.sub_le _ _)
                    have e2 : (src.take (src.length - r'.length)).length
                        = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length
                          + 11 := by
                      rw [hmatched]
                      simp only [List.length_append, hcloserlen]
                    omega
                  rw [hidx2, hmatched]
                  exact List.drop_left
                rw [hauth]
                have hmatched2 : src.take (src.length - r'.length)
                    = ((A ++ [93, 93] ++ wsPre) ++ [10]) ++ (bodyRaw ++ closerVar) := by
                  rw [hmatched]
                  simp [List.append_assoc]
                have hadd := moduleTermMeasure_append_snoc_lf
                  (A ++ [93, 93] ++ wsPre) (bodyRaw ++ closerVar)
                have hMm : moduleTermMeasure (src.take (src.length - r'.length))
                    = moduleTermMeasure ((A ++ [93, 93] ++ wsPre) ++ [10]) +
                      moduleTermMeasure (bodyRaw ++ closerVar) := by
                  rw [hmatched2, hadd]
                have hreplM := moduleTermMeasure_claimPrefix_append
                  toks.length (bodyRaw ++ closerVar)
                have hMP0 := moduleTermMeasure_lower_of_moduleHead_prefix
                  hhead hsrcPB hPlen hP91
                have hpassoc : A ++ [93, 93] ++ wsPre ++ [10]
                    = (A ++ [93, 93] ++ wsPre) ++ [10] := by
                  simp [List.append_assoc]
                rw [hpassoc] at hMP0
                have hreplShape :
                    (([10, 10] ++ phBytes toks.length ++ [10, 10]) ++
                      (bodyRaw ++ closerVar)) =
                      10 :: 10 :: (phBytes toks.length ++ 10 :: 10 :: (bodyRaw ++ closerVar)) := by
                  simp
                rw [hreplShape] at hreplM
                omega
            · by_cases hdef : 1 < countModuleOpeners none
                  (src.take (src.length - r'.length)) (src.length - r'.length + 1)
              · have hdefx := moduleTryCands_defense_exact src name toks attrRaw r
                  bodyRaw r' more htail hhtml hdef
                rw [hdefx] at h
                have hinj := Option.some.inj h
                have hrepeq : repl
                    = rewriteModulePrefix (insertInlineOpenerNewlines
                        (src.take (src.length - r'.length))) :=
                  (congrArg Prod.fst hinj).symm
                have hresteq : r' = rest' :=
                  congrArg Prod.fst (congrArg Prod.snd hinj)
                have ht1eq : t1 = toks :=
                  (congrArg Prod.snd (congrArg Prod.snd hinj)).symm
                subst hresteq
                refine ⟨src.take (src.length - r'.length), hsrcdecomp,
                  hmatchedlen, ?_, hMlower, Or.inl ⟨ht1eq, ?_, ?_, ?_⟩⟩
                · omega
                · rw [hrepeq]; exact defense_count91 _
                · rw [hrepeq]; exact defense_length_ge _
                · rw [hrepeq]
                  intro hne
                  exact defense_strict_length hne
              · simp [moduleTryCands, htail, hhtml, hdef, claimModule] at h
                have ht1 : t1 ≠ toks := by
                  intro hcon
                  have e := h.2.2.symm
                  rw [hcon] at e
                  have hl := congrArg List.length e
                  simp at hl
                refine ⟨src.take (src.length - r'.length), hsrcdecomp.trans (congrArg (fun x => src.take (src.length - r'.length) ++ x) h.2.1),
                  hmatchedlen, ?_, hMlower, Or.inr ⟨ht1, ?_, ?_⟩⟩
                · omega
                · rw [← h.1]
                  by_cases hcode : bodyHasCodeToken bodyRaw toks 0 = true
                  · rw [if_pos hcode]
                    rw [count91_cons_ten, count91_cons_ten, count91_append,
                      count91_phBytes, count91_cons_ten, count91_cons_ten,
                      count91_append]
                    have hauth : (src.take (src.length - r'.length)).drop
                          (src.length - r'.length - 11)
                        = closerVar := by
                      have hidx2 : src.length - r'.length - 11
                          = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length := by
                        have e1 : (src.take (src.length - r'.length)).length
                            = src.length - r'.length := by
                          rw [List.length_take]
                          exact Nat.min_eq_left (Nat.sub_le _ _)
                        have e2 : (src.take (src.length - r'.length)).length
                            = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length
                              + 11 := by
                          rw [hmatched]
                          simp only [List.length_append, hcloserlen]
                        omega
                      rw [hidx2, hmatched]
                      exact List.drop_left
                    rw [hauth, hcloser91]
                    omega
                  · rw [if_neg hcode]
                    rw [count91_cons_ten, count91_cons_ten, count91_append,
                      count91_phBytes, count91_cons_ten, count91_cons_ten,
                      count91_nil]
                    omega
                · -- Width-two measure slack: the invisible wrapper contributes
                  -- nothing, and any re-emitted body-plus-closer is already a
                  -- contiguous suffix of the consumed match.
                  rw [← h.1]
                  by_cases hcode : bodyHasCodeToken bodyRaw toks 0 = true
                  · rw [if_pos hcode]
                    have hauth : (src.take (src.length - r'.length)).drop
                          (src.length - r'.length - 11)
                        = closerVar := by
                      have hidx2 : src.length - r'.length - 11
                          = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length := by
                        have e1 : (src.take (src.length - r'.length)).length
                            = src.length - r'.length := by
                          rw [List.length_take]
                          exact Nat.min_eq_left (Nat.sub_le _ _)
                        have e2 : (src.take (src.length - r'.length)).length
                            = ((A ++ [93, 93] ++ wsPre ++ [10]) ++ bodyRaw).length
                              + 11 := by
                          rw [hmatched]
                          simp only [List.length_append, hcloserlen]
                        omega
                      rw [hidx2, hmatched]
                      exact List.drop_left
                    rw [hauth]
                    have hmatched2 : src.take (src.length - r'.length)
                        = ((A ++ [93, 93] ++ wsPre) ++ [10]) ++ (bodyRaw ++ closerVar) := by
                      rw [hmatched]
                      simp [List.append_assoc]
                    have hadd := moduleTermMeasure_append_snoc_lf
                      (A ++ [93, 93] ++ wsPre) (bodyRaw ++ closerVar)
                    have hMm : moduleTermMeasure (src.take (src.length - r'.length))
                        = moduleTermMeasure ((A ++ [93, 93] ++ wsPre) ++ [10]) +
                          moduleTermMeasure (bodyRaw ++ closerVar) := by
                      rw [hmatched2, hadd]
                    have hreplM := moduleTermMeasure_claimPrefix_append
                      toks.length (bodyRaw ++ closerVar)
                    have hMP0 := moduleTermMeasure_lower_of_moduleHead_prefix
                      hhead hsrcPB hPlen hP91
                    have hpassoc : A ++ [93, 93] ++ wsPre ++ [10]
                        = (A ++ [93, 93] ++ wsPre) ++ [10] := by
                      simp [List.append_assoc]
                    rw [hpassoc] at hMP0
                    have hreplShape :
                        (([10, 10] ++ phBytes toks.length ++ [10, 10]) ++
                          (bodyRaw ++ closerVar)) =
                          10 :: 10 :: (phBytes toks.length ++ 10 :: 10 :: (bodyRaw ++ closerVar)) := by
                      simp
                    rw [hreplShape] at hreplM
                    omega
                  · rw [if_neg hcode]
                    have hzero0 : moduleTermMeasure
                        (10 :: 10 :: (phBytes toks.length ++ [10, 10])) = 0 := by
                      calc moduleTermMeasure (10 :: 10 :: (phBytes toks.length ++ [10, 10]))
                          = moduleTermMeasure (([10, 10] ++ phBytes toks.length ++ [10, 10]) ++ ([] : List Nat)) := by simp
                        _ = moduleTermMeasure ([] : List Nat) :=
                            moduleTermMeasure_claimPrefix_append toks.length ([] : List Nat)
                        _ = 0 := rfl
                    rw [hzero0]
                    omega



/-- With three units of isolated left-segment slack, the two possible
    width-two boundary errors cannot cancel the strict decrease. -/
theorem moduleTermMeasure_append_strict_of_margin3 (A B Y Z : List Nat)
    (hleft : moduleTermMeasure B + 3 ≤ moduleTermMeasure A)
    (hright : moduleTermMeasure Z ≤ moduleTermMeasure Y) :
    moduleTermMeasure (B ++ Z) < moduleTermMeasure (A ++ Y) := by
  have hout := mtuCountPair_append_error_bound mtuTermPair B Z
  have hin := mtuCountPair_append_error_bound mtuTermPair A Y
  dsimp [moduleTermMeasure] at hleft hright hout hin ⊢
  omega

/-- If the left segment ends in LF or `]`, its isolated end position already
    accounts for every boundary contribution the concatenation can have.  In
    particular concatenating on the right needs no `+1` error term. -/
theorem moduleTermMeasure_append_left_end_le (B Z : List Nat)
    (hend : B.getLast? = some 10 ∨ B.getLast? = some 93) :
    moduleTermMeasure (B ++ Z) ≤
      moduleTermMeasure B + moduleTermMeasure Z := by
  rcases hend with hend | hend
  · obtain ⟨L, hB⟩ := List.getLast?_eq_some_iff.mp hend
    subst B
    have hs := mtuCountPair_append_snoc mtuTermPair L 10 Z
    have hnone : mtuTermPair 10 none = false := mtuTermPair_not_ten none
    have hhead : mtuTermPair 10 Z.head? = false := mtuTermPair_not_ten Z.head?
    have hs0 : mtuCountPair mtuTermPair ((L ++ [10]) ++ Z) =
        mtuCountPair mtuTermPair (L ++ [10]) + mtuCountPair mtuTermPair Z := by
      simpa [hnone, hhead] using hs
    dsimp [moduleTermMeasure]
    omega
  · obtain ⟨L, hB⟩ := List.getLast?_eq_some_iff.mp hend
    subst B
    have hs := mtuCountPair_append_snoc mtuTermPair L 93 Z
    have hnone : mtuTermPair 93 none = true := mtuTermPair_93_none
    rw [hnone] at hs
    dsimp [moduleTermMeasure]
    by_cases hb : mtuTermPair 93 Z.head?
    · have hs0 : mtuCountPair mtuTermPair ((L ++ [93]) ++ Z) + 1 =
          mtuCountPair mtuTermPair (L ++ [93]) + mtuCountPair mtuTermPair Z + 1 := by
        simpa [hnone, hb] using hs
      omega
    · have hs0 : mtuCountPair mtuTermPair ((L ++ [93]) ++ Z) + 1 =
          mtuCountPair mtuTermPair (L ++ [93]) + mtuCountPair mtuTermPair Z := by
        simpa [hnone, hb] using hs
      omega

/-- Exact same-end concatenation comparison.  Because the isolated end bit is
    the same on both sides, it cancels; the successor bit at the residual seam
    is controlled explicitly.  This is the sharp boundary step needed when the
    defense inserts no newline and only the exact lowercase prefix rewrite fires. -/
theorem moduleTermMeasure_append_strict_same_end
    (LA LB Y Z : List Nat) (x : Nat)
    (hbit : (if mtuTermPair x Z.head? then 1 else 0) ≤
      (if mtuTermPair x Y.head? then 1 else 0))
    (hleft : moduleTermMeasure (LB ++ [x]) + 1 ≤ moduleTermMeasure (LA ++ [x]))
    (hright : moduleTermMeasure Z ≤ moduleTermMeasure Y) :
    moduleTermMeasure ((LB ++ [x]) ++ Z) < moduleTermMeasure ((LA ++ [x]) ++ Y) := by
  have hout := mtuCountPair_append_snoc mtuTermPair LB x Z
  have hin := mtuCountPair_append_snoc mtuTermPair LA x Y
  dsimp [moduleTermMeasure] at hleft hright hout hin ⊢
  omega

/-- The newline-insertion scanner never alters the first ten bytes of its
    subject: before inserting anything it must first copy a detected opener
    head, and even the smallest such head is ten bytes long.  The uniformly
    quantified prefix length makes the byte-copy induction step trivial. -/
theorem insertGo_take_prefix_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat), src.length = n →
      ∀ k : Nat, k ≤ 10 →
        (insertInlineOpenerNewlinesGo prev src (src.length + 1)).take k = src.take k := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src hlen k hk
      cases src with
      | nil => simp [insertInlineOpenerNewlinesGo]
      | cons b rest =>
          have hlen0 : rest.length + 1 = n := by simpa using hlen
          by_cases hstart : (prev == none || prev == some 10) = true
          · have hstartp : prev = none ∨ prev = some 10 := by simpa using hstart
            cases hm : moduleHeadEnd (b :: rest) with
            | none =>
                have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                    ((b :: rest).length + 1)
                    = b :: insertInlineOpenerNewlinesGo (some b) rest
                        (rest.length + 1) := by
                  simp [insertInlineOpenerNewlinesGo, hstartp, hm]
                rw [e]
                cases k with
                | zero => simp
                | succ k =>
                    have ihr := ih rest.length (by omega) (some b) rest rfl k (by omega)
                    simp [List.take_cons, ihr]
            | some n' =>
                rcases moduleHeadEnd_eq_some_spec (b :: rest) n' hm with
                  ⟨hnpos, hnle, c, hn'eq, htakeEnd, hdropEq⟩
                have hn10 : 10 ≤ n' := by omega
                obtain ⟨after, hafter⟩ : ∃ a, a = (b :: rest).drop n' := ⟨_, rfl⟩
                have hafterlen : after.length = (b :: rest).length - n' := by
                  simp [hafter, List.length_drop]
                have hrecEq : ∀ (p : Option Nat),
                    insertInlineOpenerNewlinesGo p after ((b :: rest).length)
                      = insertInlineOpenerNewlinesGo p after (after.length + 1) :=
                  fun p => go_fuel_irrelevant p after (by omega) (by omega)
                by_cases hsn : spacesThenNewline after = true
                · have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                      ((b :: rest).length + 1)
                      = (b :: rest).take n' ++
                          insertInlineOpenerNewlinesGo (some 93) after
                            (after.length + 1) := by
                    have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n'
                          ++ insertInlineOpenerNewlinesGo (some 93) after
                              ((b :: rest).length) := by
                      have hstep := go_step_line_terminated prev (b :: rest)
                          ((b :: rest).length + 1) (by omega) hstart n' hm
                          (by rw [← hafter]; exact hsn)
                      rw [Nat.add_sub_cancel] at hstep
                      rw [← hafter] at hstep
                      exact hstep
                    rw [e0, hrecEq]
                  rw [e]
                  have htakelen : ((b :: rest).take n').length = n' := by
                    rw [List.length_take]
                    exact Nat.min_eq_left hnle
                  have htk : k ≤ ((b :: rest).take n').length := by omega
                  rw [mtu_take_append_of_le ((b :: rest).take n')
                    (insertInlineOpenerNewlinesGo (some 93) after (after.length + 1)) k htk]
                  rw [List.take_take]
                  have hmin : min k n' = k := by omega
                  rw [hmin]
                · have hsnf : spacesThenNewline after = false := by
                    cases h : spacesThenNewline after with
                    | true => exact absurd h hsn
                    | false => rfl
                  have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                      ((b :: rest).length + 1)
                      = (b :: rest).take n' ++ ([10] ++
                          insertInlineOpenerNewlinesGo (some 10) after
                            (after.length + 1)) := by
                    have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n' ++ [10]
                          ++ insertInlineOpenerNewlinesGo (some 10) after
                              ((b :: rest).length) := by
                      have hstep := go_step_inline_inserts_lf prev (b :: rest)
                          ((b :: rest).length + 1) (by omega) hstart n' hm
                          (by rw [← hafter]; exact hsnf)
                      rw [Nat.add_sub_cancel] at hstep
                      rw [← hafter] at hstep
                      exact hstep
                    rw [e0, hrecEq]
                    simp [List.append_assoc]
                  rw [e]
                  have htakelen : ((b :: rest).take n').length = n' := by
                    rw [List.length_take]
                    exact Nat.min_eq_left hnle
                  have htk : k ≤ ((b :: rest).take n').length := by omega
                  rw [mtu_take_append_of_le ((b :: rest).take n')
                    ([10] ++ insertInlineOpenerNewlinesGo (some 10) after (after.length + 1)) k htk]
                  rw [List.take_take]
                  have hmin : min k n' = k := by omega
                  rw [hmin]
          · have hstartp : ¬ (prev = none ∨ prev = some 10) := by
              intro hdis
              apply hstart
              rcases hdis with rfl | rfl <;> simp
            have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                ((b :: rest).length + 1)
                = b :: insertInlineOpenerNewlinesGo (some b) rest
                    (rest.length + 1) := by
              simp [insertInlineOpenerNewlinesGo, hstartp]
            rw [e]
            cases k with
            | zero => simp
            | succ k =>
                have ihr := ih rest.length (by omega) (some b) rest rfl k (by omega)
                simp [List.take_cons, ihr]

theorem insertInlineOpenerNewlines_take_prefix (src : List Nat) (k : Nat) (hk : k ≤ 10) :
    (insertInlineOpenerNewlines src).take k = src.take k :=
  insertGo_take_prefix_aux src.length none src rfl k hk


theorem mtu_take9_lit_ws_imp (xs : List Nat) (w : Nat)
    (h : xs.take 9 = litBytes "[[module" ++ [w]) :
    xs.take 8 = litBytes "[[module" ∧ xs.drop 8 = w :: xs.drop 9 := by
  have hlenlit : (litBytes "[[module").length = 8 := by decide
  have hxs : xs = litBytes "[[module" ++ (w :: xs.drop 9) := by
    calc xs = xs.take 9 ++ xs.drop 9 := (List.take_append_drop 9 xs).symm
      _ = (litBytes "[[module" ++ [w]) ++ xs.drop 9 := by rw [h]
      _ = litBytes "[[module" ++ (w :: xs.drop 9) := by
        simp [List.append_assoc]
  constructor
  · calc xs.take 8 = (litBytes "[[module" ++ (w :: xs.drop 9)).take 8 :=
        congrArg (fun z => z.take 8) hxs
      _ = litBytes "[[module" := by
        have ht := List.take_left (l₁ := litBytes "[[module") (l₂ := w :: xs.drop 9)
        simpa [hlenlit] using ht
  · calc xs.drop 8 = (litBytes "[[module" ++ (w :: xs.drop 9)).drop 8 :=
        congrArg (fun z => z.drop 8) hxs
      _ = w :: xs.drop 9 := by
        have hd := List.drop_left (l₁ := litBytes "[[module") (l₂ := w :: xs.drop 9)
        simpa [hlenlit] using hd



/-- A concatenation's last byte is the right segment's last byte whenever the
    right segment is nonempty. -/
theorem mtu_getLast_append_of_right_ne_nil (L R : List Nat) (h : R ≠ []) :
    (L ++ R).getLast? = R.getLast? := by
  rw [List.getLast?_append]
  cases hr : R.getLast? with
  | none =>
      have : R = [] := List.getLast?_eq_none_iff.mp hr
      contradiction
  | some x => simp

/-- The final byte of the newline-insertion scan is either the original final
    byte or a newline.  Insertion never rewrites or deletes the trailing byte;
    the only way it can change the end is by putting an inserted LF last. -/
theorem insertGo_end_cases_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat), src.length = n →
      (insertInlineOpenerNewlinesGo prev src (src.length + 1)).getLast? = src.getLast? ∨
        (insertInlineOpenerNewlinesGo prev src (src.length + 1)).getLast? = some 10 := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src hlen
      cases src with
      | nil => simp [insertInlineOpenerNewlinesGo]
      | cons b rest =>
          have hlen0 : rest.length + 1 = n := by simpa using hlen
          by_cases hstart : (prev == none || prev == some 10) = true
          · have hstartp : prev = none ∨ prev = some 10 := by simpa using hstart
            cases hm : moduleHeadEnd (b :: rest) with
            | none =>
                have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                    ((b :: rest).length + 1)
                    = b :: insertInlineOpenerNewlinesGo (some b) rest
                        (rest.length + 1) := by
                  simp [insertInlineOpenerNewlinesGo, hstartp, hm]
                rw [e]
                have ihr := ih rest.length (by omega) (some b) rest rfl
                have hprops := go_props_aux rest.length (some b) rest rfl
                by_cases hrestnil : rest = []
                · subst rest
                  simp [insertInlineOpenerNewlinesGo]
                · have houtne : insertInlineOpenerNewlinesGo (some b) rest
                      (rest.length + 1) ≠ [] := by
                    intro hem
                    have hl := hprops.2.1
                    rw [hem] at hl
                    simp at hl
                    exact hrestnil hl
                  have hinend : (b :: rest).getLast? = rest.getLast? := by
                    cases rest with
                    | nil => contradiction
                    | cons d ds => rfl
                  have houtend : (b :: insertInlineOpenerNewlinesGo (some b) rest
                      (rest.length + 1)).getLast? =
                      (insertInlineOpenerNewlinesGo (some b) rest
                        (rest.length + 1)).getLast? := by
                    cases hout : insertInlineOpenerNewlinesGo (some b) rest
                      (rest.length + 1) with
                    | nil => contradiction
                    | cons d ds => rfl
                  rw [hinend, houtend]
                  exact ihr
            | some n' =>
                rcases moduleHeadEnd_eq_some_spec (b :: rest) n' hm with
                  ⟨hnpos, hnle, c, hn'eq, htakeEnd, -⟩
                obtain ⟨after, hafter⟩ : ∃ a, a = (b :: rest).drop n' := ⟨_, rfl⟩
                have hafterlen : after.length = (b :: rest).length - n' := by
                  simp [hafter, List.length_drop]
                have hrecEq : ∀ (p : Option Nat),
                    insertInlineOpenerNewlinesGo p after ((b :: rest).length)
                      = insertInlineOpenerNewlinesGo p after (after.length + 1) :=
                  fun p => go_fuel_irrelevant p after (by omega) (by omega)
                have hexL : ∃ L, (b :: rest).take n' = L ++ [93] := by
                  refine ⟨(b :: rest).take (8 + c) ++ [93], ?_⟩
                  have hclose : litBytes "]]" = [93] ++ [93] := by decide
                  rw [htakeEnd, hclose, ← List.append_assoc]
                rcases hexL with ⟨L, hL⟩
                have hsrcdecomp : (b :: rest) = (L ++ [93]) ++ after := by
                  calc (b :: rest) = (b :: rest).take n' ++ after := by
                        have h := (List.take_append_drop n' (b :: rest)).symm
                        rwa [← hafter] at h
                    _ = (L ++ [93]) ++ after := by rw [hL]
                by_cases hsn : spacesThenNewline after = true
                · have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                      ((b :: rest).length + 1)
                      = (L ++ [93]) ++ insertInlineOpenerNewlinesGo (some 93) after
                          (after.length + 1) := by
                    have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n'
                          ++ insertInlineOpenerNewlinesGo (some 93) after
                              ((b :: rest).length) := by
                      have hstep := go_step_line_terminated prev (b :: rest)
                          ((b :: rest).length + 1) (by omega) hstart n' hm
                          (by rw [← hafter]; exact hsn)
                      rw [Nat.add_sub_cancel] at hstep
                      rw [← hafter] at hstep
                      exact hstep
                    rw [e0, hrecEq, hL]
                  rw [e, hsrcdecomp]
                  have iha := ih after.length (by omega) (some 93) after rfl
                  have hprops := go_props_aux after.length (some 93) after rfl
                  by_cases hafter_nil : after = []
                  · rw [hafter_nil]
                    simp [insertInlineOpenerNewlinesGo]
                  · have hrecne : insertInlineOpenerNewlinesGo (some 93) after
                        (after.length + 1) ≠ [] := by
                      intro hem
                      have hl := hprops.2.1
                      rw [hem] at hl
                      simp at hl
                      exact hafter_nil hl
                    rw [mtu_getLast_append_of_right_ne_nil (L ++ [93])
                      (insertInlineOpenerNewlinesGo (some 93) after (after.length + 1)) hrecne]
                    rw [mtu_getLast_append_of_right_ne_nil (L ++ [93]) after hafter_nil]
                    exact iha
                · have hsnf : spacesThenNewline after = false := by
                    cases h : spacesThenNewline after with
                    | true => exact absurd h hsn
                    | false => rfl
                  have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                      ((b :: rest).length + 1)
                      = (L ++ [93]) ++ ([10] ++ insertInlineOpenerNewlinesGo (some 10) after
                          (after.length + 1)) := by
                    have e0 : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n' ++ [10]
                          ++ insertInlineOpenerNewlinesGo (some 10) after
                              ((b :: rest).length) := by
                      have hstep := go_step_inline_inserts_lf prev (b :: rest)
                          ((b :: rest).length + 1) (by omega) hstart n' hm
                          (by rw [← hafter]; exact hsnf)
                      rw [Nat.add_sub_cancel] at hstep
                      rw [← hafter] at hstep
                      exact hstep
                    rw [e0, hrecEq, hL]
                    simp [List.append_assoc]
                  rw [e, hsrcdecomp]
                  have iha := ih after.length (by omega) (some 10) after rfl
                  have hprops := go_props_aux after.length (some 10) after rfl
                  by_cases hrecnil : insertInlineOpenerNewlinesGo (some 10) after
                      (after.length + 1) = []
                  · rw [hrecnil]
                    simp
                  · have haftne : after ≠ [] := by
                      intro ha
                      rw [ha] at hrecnil
                      simp [insertInlineOpenerNewlinesGo] at hrecnil
                    have hrightne : [10] ++ insertInlineOpenerNewlinesGo (some 10) after
                        (after.length + 1) ≠ [] := by simp
                    rw [mtu_getLast_append_of_right_ne_nil (L ++ [93])
                      ([10] ++ insertInlineOpenerNewlinesGo (some 10) after
                        (after.length + 1)) hrightne]
                    have hrightend : ([10] ++ insertInlineOpenerNewlinesGo (some 10) after
                        (after.length + 1)).getLast? =
                        (insertInlineOpenerNewlinesGo (some 10) after
                          (after.length + 1)).getLast? := by
                      cases hr : insertInlineOpenerNewlinesGo (some 10) after
                        (after.length + 1) with
                      | nil => contradiction
                      | cons d ds => rfl
                    rw [hrightend]
                    rw [mtu_getLast_append_of_right_ne_nil (L ++ [93]) after haftne]
                    exact iha
          · have hstartp : ¬ (prev = none ∨ prev = some 10) := by
              intro hdis
              apply hstart
              rcases hdis with rfl | rfl <;> simp
            have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                ((b :: rest).length + 1)
                = b :: insertInlineOpenerNewlinesGo (some b) rest
                    (rest.length + 1) := by
              simp [insertInlineOpenerNewlinesGo, hstartp]
            rw [e]
            have ihr := ih rest.length (by omega) (some b) rest rfl
            have hprops := go_props_aux rest.length (some b) rest rfl
            by_cases hrestnil : rest = []
            · subst rest
              simp [insertInlineOpenerNewlinesGo]
            · have houtne : insertInlineOpenerNewlinesGo (some b) rest
                  (rest.length + 1) ≠ [] := by
                intro hem
                have hl := hprops.2.1
                rw [hem] at hl
                simp at hl
                exact hrestnil hl
              have hinend : (b :: rest).getLast? = rest.getLast? := by
                cases rest with
                | nil => contradiction
                | cons d ds => rfl
              have houtend : (b :: insertInlineOpenerNewlinesGo (some b) rest
                  (rest.length + 1)).getLast? =
                  (insertInlineOpenerNewlinesGo (some b) rest
                    (rest.length + 1)).getLast? := by
                cases hout : insertInlineOpenerNewlinesGo (some b) rest
                  (rest.length + 1) with
                | nil => contradiction
                | cons d ds => rfl
              rw [hinend, houtend]
              exact ihr

theorem insertInlineOpenerNewlines_end_cases (src : List Nat) :
    (insertInlineOpenerNewlines src).getLast? = src.getLast? ∨
      (insertInlineOpenerNewlines src).getLast? = some 10 :=
  insertGo_end_cases_aux src.length none src rfl

/-- Under an exact lowercase opener head, the defense replacement has a
    boundary-independent margin of one from the `654` rewrite, plus the whole
    newline-insertion length growth.  Thus an actual insertion supplies at
    least one additional unit of slack that can pay for the single width-two
    concatenation seam. -/
theorem defense_term_measure_exact_slack_lower (m : List Nat)
    (hexact : m.take 8 = litBytes "[[module")
    (hws : ∃ w rest, m.drop 8 = w :: rest ∧ isWsByte w = true) :
    moduleTermMeasure (rewriteModulePrefix (insertInlineOpenerNewlines m)) + 1 +
      ((insertInlineOpenerNewlines m).length - m.length) ≤ moduleTermMeasure m := by
  rcases hws with ⟨w, rest, hdrop, hw⟩
  let u := insertInlineOpenerNewlines m
  have hm : m = (litBytes "[[module" ++ [w]) ++ rest := by
    calc m = m.take 8 ++ m.drop 8 := (List.take_append_drop 8 m).symm
      _ = litBytes "[[module" ++ (w :: rest) := by rw [hexact, hdrop]
      _ = (litBytes "[[module" ++ [w]) ++ rest := by simp [List.append_assoc]
  have hm9 : m.take 9 = litBytes "[[module" ++ [w] := by
    rw [hm]
    have ht := List.take_left (l₁ := litBytes "[[module" ++ [w]) (l₂ := rest)
    have hlen9 : (litBytes "[[module" ++ [w]).length = 9 := by
      have hlenlit : (litBytes "[[module").length = 8 := by decide
      simp [List.length_append, hlenlit]
    simpa [hlen9] using ht
  have hu9 : u.take 9 = litBytes "[[module" ++ [w] := by
    have hp := insertInlineOpenerNewlines_take_prefix m 9 (by omega)
    change (insertInlineOpenerNewlines m).take 9 = m.take 9 at hp
    rw [hm9] at hp
    exact hp
  obtain ⟨hu8, hudrop⟩ := mtu_take9_lit_ws_imp u w hu9
  have hrew : moduleTermMeasure (rewriteModulePrefix u) + 1 = moduleTermMeasure u :=
    rewriteModulePrefix_term_measure_exact u hu8 ⟨w, u.drop 9, hudrop, hw⟩
  have hins := insertInlineOpenerNewlines_term_slack m
  change moduleTermMeasure u + (u.length - m.length) ≤ moduleTermMeasure m at hins
  change moduleTermMeasure (rewriteModulePrefix u) + 1 + (u.length - m.length) ≤
    moduleTermMeasure m
  omega

/-- Every case-insensitive Module opener occurrence in `src` has the exact
    lowercase spelling `[[module`. This excludes the uppercase/mixed-case
    non-terminating defense orbit while allowing the exact-prefix rewrite. -/
def allModuleOpenersLower (src : List Nat) : Prop :=
  ∀ i, matchLitCI (litBytes "[[module") (src.drop i) ≠ none →
    (src.drop i).take 8 = litBytes "[[module"

theorem matchLitCI_byteCiEq_at {pat src rest : List Nat}
    (h : matchLitCI pat src = some rest) :
    ∀ (j x p : Nat), src[j]? = some x → pat[j]? = some p →
      byteCiEq x p = true := by
  induction pat generalizing src rest with
  | nil =>
      intro j x p hx hp
      simp at hp
  | cons p ps ih =>
      intro j x p' hx hp
      cases src with
      | nil => simp [matchLitCI] at h
      | cons y ys =>
          have hstep : byteCiEq y p = true ∧ matchLitCI ps ys = some rest := by
            by_cases hc : byteCiEq y p = true
            · exact ⟨hc, by simpa [matchLitCI, hc] using h⟩
            · simp [matchLitCI, hc] at h
          cases j with
          | zero =>
              simp at hx hp
              subst x
              subst p'
              exact hstep.1
          | succ j =>
              have hx' : ys[j]? = some x := by simpa using hx
              have hp' : ps[j]? = some p' := by simpa using hp
              exact ih hstep.2 j x p' hx' hp'

theorem matchLitCI_transfer_take {pat xs ys rest : List Nat}
    (h : matchLitCI pat xs = some rest)
    (htake : xs.take pat.length = ys.take pat.length) :
    ∃ rest', matchLitCI pat ys = some rest' := by
  induction pat generalizing xs ys rest with
  | nil =>
      exact ⟨ys, rfl⟩
  | cons p ps ih =>
      cases xs with
      | nil => simp [matchLitCI] at h
      | cons x xs' =>
          cases ys with
          | nil =>
              simp at htake
          | cons y ys' =>
              have hxy : x = y := by
                have ht := congrArg (fun l => l.head?) htake
                simp at ht
                exact ht
              subst y
              have hstep : byteCiEq x p = true ∧ matchLitCI ps xs' = some rest := by
                by_cases hc : byteCiEq x p = true
                · exact ⟨hc, by simpa [matchLitCI, hc] using h⟩
                · simp [matchLitCI, hc] at h
              have htailtake : xs'.take ps.length = ys'.take ps.length := by
                have ht := congrArg List.tail htake
                simp at ht
                exact ht
              obtain ⟨rest', hr⟩ := ih hstep.2 htailtake
              exact ⟨rest', by simp [matchLitCI, hstep.1, hr]⟩

theorem allModuleOpenersLower_drop {src : List Nat}
    (h : allModuleOpenersLower src) (n : Nat) :
    allModuleOpenersLower (src.drop n) := by
  intro i hi
  rw [List.drop_drop] at hi ⊢
  exact h (n + i) hi

theorem allModuleOpenersLower_take {src : List Nat}
    (h : allModuleOpenersLower src) (n : Nat) :
    allModuleOpenersLower (src.take n) := by
  intro i hi
  let pat := litBytes "[[module"
  have hpatlen : pat.length = 8 := by decide
  cases hm : matchLitCI pat ((src.take n).drop i) with
  | none => exact absurd hm hi
  | some r =>
      obtain ⟨pre, hprelen, hprerest⟩ := matchLitCI_eq_some_decomp pat _ r hm
      have hprelen8 : pre.length = 8 := by rw [hprelen, hpatlen]
      have hslen : 8 ≤ ((src.take n).drop i).length := by
        have e := congrArg List.length hprerest
        rw [List.length_append, hprelen8] at e
        omega
      have hform : (src.take n).drop i = (src.drop i).take (n - i) := by
        rw [List.drop_take]
      have hlenpref : 8 ≤ ((src.drop i).take (n - i)).length := by
        rwa [← hform]
      have hni : 8 ≤ n - i := by
        rw [List.length_take] at hlenpref
        omega
      have htake : ((src.take n).drop i).take 8 = (src.drop i).take 8 := by
        rw [hform, List.take_take]
        have hmin : min 8 (n - i) = 8 := by omega
        rw [hmin]
      have hsrcmatch : matchLitCI pat (src.drop i) ≠ none := by
        obtain ⟨r', hr'⟩ := matchLitCI_transfer_take hm htake
        intro hn
        rw [hn] at hr'
        contradiction
      have hexact := h i hsrcmatch
      rw [htake]
      exact hexact

def mtuModuleOpenerSepByte (x : Nat) : Prop :=
  ∀ p, p ∈ litBytes "[[module" → byteCiEq x p = false

theorem mtuModuleOpenerSepByte_10 : mtuModuleOpenerSepByte 10 := by
  intro p hp
  simp [litBytes] at hp
  rcases hp with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals decide

theorem mtuModuleOpenerSepByte_93 : mtuModuleOpenerSepByte 93 := by
  intro p hp
  simp [litBytes] at hp
  rcases hp with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals decide

theorem mtuModuleOpenerSepByte_52 : mtuModuleOpenerSepByte 52 := by
  intro p hp
  simp [litBytes] at hp
  rcases hp with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals decide

theorem mtuModuleOpenerSepByte_53 : mtuModuleOpenerSepByte 53 := by
  intro p hp
  simp [litBytes] at hp
  rcases hp with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals decide

theorem mtuModuleOpenerSepByte_54 : mtuModuleOpenerSepByte 54 := by
  intro p hp
  simp [litBytes] at hp
  rcases hp with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals decide

theorem allModuleOpenersLower_append_of_sep_end {a b : List Nat}
    (ha : allModuleOpenersLower a) (hb : allModuleOpenersLower b)
    (hend : ∃ x, a.getLast? = some x ∧ mtuModuleOpenerSepByte x) :
    allModuleOpenersLower (a ++ b) := by
  intro i hi
  let pat := litBytes "[[module"
  have hpatlen : pat.length = 8 := by decide
  cases hm : matchLitCI pat ((a ++ b).drop i) with
  | none =>
      exact absurd hm hi
  | some r =>
      by_cases hfull : i + 8 ≤ a.length
      · have hile : i ≤ a.length := by omega
        have hdrop : (a ++ b).drop i = a.drop i ++ b :=
          List.drop_append_of_le_length hile
        have hlenadrop : 8 ≤ (a.drop i).length := by
          rw [List.length_drop]
          omega
        have htake : ((a ++ b).drop i).take 8 = (a.drop i).take 8 := by
          rw [hdrop]
          exact List.take_append_of_le_length hlenadrop
        have hleftsome : matchLitCI pat (a.drop i) ≠ none := by
          obtain ⟨r', hr'⟩ := matchLitCI_transfer_take hm htake
          intro hn
          rw [hn] at hr'
          contradiction
        have hexact := ha i hleftsome
        rw [htake]
        exact hexact
      · by_cases hrightstart : a.length ≤ i
        · have hdropa : a.drop i = [] := by
            rw [List.drop_eq_nil_iff]
            exact hrightstart
          have hdrop : (a ++ b).drop i = b.drop (i - a.length) := by
            rw [List.drop_append, hdropa]
            simp
          rw [hdrop] at hm ⊢
          exact hb (i - a.length) (by rw [hm]; simp)
        · have ilt : i < a.length := by omega
          have igt : a.length < i + 8 := by omega
          rcases hend with ⟨e, hendE, hsep⟩
          let k := a.length - i - 1
          have hklt : k < 8 := by omega
          have hpne : pat[k]? ≠ none := by
            intro hn
            have hle : pat.length ≤ k := List.getElem?_eq_none_iff.mp hn
            omega
          cases hp : pat[k]? with
          | none => exact absurd hp hpne
          | some p =>
              have hidx0 : ((a ++ b).drop i)[k]? = (a ++ b)[i + k]? :=
                List.getElem?_drop
              have hik : i + k = a.length - 1 := by omega
              have hidx1 : (a ++ b)[i + k]? = a[a.length - 1]? := by
                rw [hik, List.getElem?_append]
                have hltlen : a.length - 1 < a.length := by omega
                simp [hltlen]
              have hlast : a[a.length - 1]? = some e := by
                rw [← List.getLast?_eq_getElem?]
                exact hendE
              have hx : ((a ++ b).drop i)[k]? = some e := by
                rw [hidx0, hidx1, hlast]
              have hci := matchLitCI_byteCiEq_at hm k e p hx hp
              have hmem : p ∈ pat := by
                rw [List.mem_iff_getElem?]
                exact ⟨k, hp⟩
              have hfalse := hsep p hmem
              rw [hfalse] at hci
              simp at hci

theorem allModuleOpenersLower_append_end10 {a b : List Nat}
    (ha : allModuleOpenersLower a) (hb : allModuleOpenersLower b)
    (hend : a.getLast? = some 10) :
    allModuleOpenersLower (a ++ b) :=
  allModuleOpenersLower_append_of_sep_end ha hb ⟨10, hend, mtuModuleOpenerSepByte_10⟩

theorem allModuleOpenersLower_append_end93 {a b : List Nat}
    (ha : allModuleOpenersLower a) (hb : allModuleOpenersLower b)
    (hend : a.getLast? = some 93) :
    allModuleOpenersLower (a ++ b) :=
  allModuleOpenersLower_append_of_sep_end ha hb ⟨93, hend, mtuModuleOpenerSepByte_93⟩

theorem allModuleOpenersLower_of_count91_eq_zero (src : List Nat)
    (h : count91 src = 0) : allModuleOpenersLower src := by
  intro i hi
  cases hm : matchLitCI (litBytes "[[module") (src.drop i) with
  | none => exact absurd hm hi
  | some r =>
      have hc := matchLitCI_count91_take hm
      have hle := count91_take_le 8 src
      have hdropcount : count91 ((src.drop i).take 8) ≤ count91 src := by
        have hle1 := count91_take_le 8 (src.drop i)
        have hle2 := count91_take_le i src
        have hsplit : count91 (src.take i) + count91 (src.drop i) = count91 src := by
          rw [← count91_append, List.take_append_drop]
        omega
      have hpat : count91 (litBytes "[[module") = 2 := by decide
      have hzero : count91 ((src.drop i).take 8) = 0 :=
        Nat.eq_zero_of_le_zero (by simpa [h] using hdropcount)
      have hlitlen : (litBytes "[[module").length = 8 := by decide
      rw [hlitlen] at hc
      rw [hc, hpat] at hzero
      simp at hzero

theorem moduleTail_end_spec {r bodyRaw rest' : List Nat}
    (h : moduleTail r = some (bodyRaw, rest')) :
    ∃ (wsPre B : List Nat), r = wsPre ++ 10 :: B ∧
      ((bodyRaw = [] ∧ rest' = B ∧
          findSubCI (litBytes "[[/module]]") (B.drop 1) = none) ∨
        (∃ (c : Nat) (closerVar : List Nat),
          findSubCI (litBytes "[[/module]]") (B.drop 1) = some c ∧
          bodyRaw = B.take (c + 1) ∧
          B.drop (c + 1) = closerVar ++ rest' ∧
          closerVar.length = 11 ∧ closerVar.getLast? = some 93)) := by
  have hsplit : r = r.takeWhile (· == 32) ++ r.dropWhile (· == 32) :=
    List.takeWhile_append_dropWhile.symm
  cases haw : r.dropWhile (· == 32) with
  | nil =>
      exfalso
      simp [moduleTail, haw] at h
  | cons b B =>
      by_cases hb : b = 10
      · subst hb
        refine ⟨r.takeWhile (· == 32), B, ?_, ?_⟩
        · calc r = r.takeWhile (· == 32) ++ r.dropWhile (· == 32) := hsplit
            _ = r.takeWhile (· == 32) ++ 10 :: B := by rw [haw]
        · cases hf : findSubCI (litBytes "[[/module]]") (B.drop 1) with
          | none =>
              left
              refine ⟨?_, ?_, rfl⟩
              · have hmt : moduleTail r = some ([], B) := by
                  simp only [moduleTail, haw, hf]
                rw [hmt] at h
                exact (congrArg Prod.fst (Option.some.inj h)).symm
              · have hmt : moduleTail r = some ([], B) := by
                  simp only [moduleTail, haw, hf]
                rw [hmt] at h
                exact (congrArg Prod.snd (Option.some.inj h)).symm
          | some c =>
              right
              obtain ⟨pre, rest, hprelen, hmatch, hprerest, htake⟩ :=
                findSubCI_hit_decomp (litBytes "[[/module]]") (B.drop 1) c hf
              have hpatlen : (litBytes "[[/module]]").length = 11 := by decide
              have hprelen11 : pre.length = 11 := hprelen.trans hpatlen
              have hdrop : B.drop (c + 1) = pre ++ rest := by
                have e1 : (B.drop 1).drop c = B.drop (c + 1) := by
                  rw [List.drop_drop, Nat.add_comm 1 c]
                rw [← e1]
                exact hprerest.symm
              have hrest' : rest' = rest := by
                have hmt : moduleTail r
                    = some (B.take (c + 1), (B.drop (c + 1)).drop 11) := by
                  simp only [moduleTail, haw, hf]
                rw [hmt] at h
                have h2 := congrArg Prod.snd (Option.some.inj h)
                rw [hdrop] at h2
                have h3 : (pre ++ rest).drop 11 = rest := by
                  have e : (pre ++ rest).drop pre.length = rest := List.drop_left
                  rw [hprelen11] at e
                  exact e
                exact h2.symm.trans h3
              have hprelast : pre.getLast? = some 93 := by
                have hpatdecomp : litBytes "[[/module]]" =
                    litBytes "[[/module]" ++ [93] := by decide
                rw [hpatdecomp] at hmatch
                obtain ⟨s1, x, hxsrc, hs1len, hci⟩ :=
                  matchLitCI_snoc_decomp (litBytes "[[/module]") 93
                    ((B.drop 1).drop c) rest hmatch
                have hpre_eq : pre = s1 ++ [x] := by
                  apply List.append_cancel_right (bs := rest)
                  exact hprerest.trans hxsrc
                have hx93 : x = 93 := (byteCiEq_eq_93 hci).mpr rfl
                rw [hpre_eq, hx93]
                rw [List.getLast?_append]
                simp
              refine ⟨c, pre, rfl, ?_, ?_, hprelen, hprelast⟩
              · have hmt : moduleTail r
                    = some (B.take (c + 1), (B.drop (c + 1)).drop 11) := by
                  simp only [moduleTail, haw, hf]
                rw [hmt] at h
                exact (congrArg Prod.fst (Option.some.inj h)).symm
              · rw [hdrop, hrest']
      · exfalso
        have : moduleTail r = none := by
          simp [moduleTail, haw, hb]
        rw [this] at h
        contradiction

theorem rewriteModulePrefix_getLast? (m : List Nat) (hm : 13 ≤ m.length) :
    (rewriteModulePrefix m).getLast? = m.getLast? := by
  cases hb : (m.take 8 == litBytes "[[module") with
  | false => simp [rewriteModulePrefix, hb]
  | true =>
      have hexact : m.take 8 = litBytes "[[module" := by simpa using hb
      have hrew : rewriteModulePrefix m = litBytes "[[module654" ++ m.drop 8 := by
        simp [rewriteModulePrefix, hb]
      have hdropne : m.drop 8 ≠ [] := by
        intro hn
        have hlen := congrArg List.length hn
        simp at hlen
        omega
      rw [hrew, mtu_getLast_append_of_right_ne_nil _ _ hdropne]
      calc (m.drop 8).getLast? = (m.take 8 ++ m.drop 8).getLast? := by
            rw [mtu_getLast_append_of_right_ne_nil _ _ hdropne]
        _ = m.getLast? := by rw [List.take_append_drop]

theorem moduleTryCands_process_shape (src name : List Nat) (toks : List TokenEntry) :
    ∀ (cands : List (List Nat × List Nat)) (repl rest' : List Nat)
      (t1 : List TokenEntry),
      moduleTryCands src name toks cands = some (repl, rest', t1) →
        ∃ attrRaw r bodyRaw r' : List Nat,
          (attrRaw, r) ∈ cands ∧ moduleTail r = some (bodyRaw, r') ∧
          rest' = r' ∧
          ((t1 = toks ∧
              repl = rewriteModulePrefix (insertInlineOpenerNewlines
                (src.take (src.length - r'.length)))) ∨
            (t1 ≠ toks ∧
              repl = [10, 10] ++ phBytes toks.length ++ [10, 10] ++
                (if (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) ||
                    bodyHasCodeToken bodyRaw toks 0 then
                   bodyRaw ++ (src.take (src.length - r'.length)).drop
                     (src.length - r'.length - 11)
                 else []))) := by
  intro cands
  induction cands with
  | nil =>
      intro repl rest' t1 h
      simp [moduleTryCands] at h
  | cons cand more ih =>
      rcases cand with ⟨attrRaw, r⟩
      intro repl rest' t1 h
      cases htail : moduleTail r with
      | none =>
          simp [moduleTryCands, htail] at h
          obtain ⟨a0, r0, body0, r0', hmem, htail0, hrest0, hrepl0⟩ :=
            ih repl rest' t1 h
          exact ⟨a0, r0, body0, r0', List.mem_cons_of_mem _ hmem,
            htail0, hrest0, hrepl0⟩
      | some pair =>
          rcases pair with ⟨bodyRaw, r'⟩
          by_cases hhtml : bodyRaw ≠ [] ∧ bodyHasHtmlToken bodyRaw toks 0 = true
          · simp [moduleTryCands, htail, hhtml, claimModule] at h
            have ht1 : t1 ≠ toks := by
              intro hcon
              have e := h.2.2.symm
              rw [hcon] at e
              have hl := congrArg List.length e
              simp at hl
            refine ⟨attrRaw, r, bodyRaw, r', List.mem_cons_self, htail,
              h.2.1.symm, Or.inr ⟨ht1, ?_⟩⟩
            have hh : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = true := by
              simpa using hhtml
            rw [hh]
            simpa [List.append_assoc] using h.1.symm
          · have hh : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = false := by
              simpa using hhtml
            by_cases hdef : 1 < countModuleOpeners none
                (src.take (src.length - r'.length)) (src.length - r'.length + 1)
            · have hdefx := moduleTryCands_defense_exact src name toks attrRaw r
                bodyRaw r' more htail hhtml hdef
              rw [hdefx] at h
              have hinj := Option.some.inj h
              refine ⟨attrRaw, r, bodyRaw, r', List.mem_cons_self, htail,
                (congrArg Prod.fst (congrArg Prod.snd hinj)).symm,
                Or.inl ⟨?_, ?_⟩⟩
              · exact (congrArg Prod.snd (congrArg Prod.snd hinj)).symm
              · exact (congrArg Prod.fst hinj).symm
            · simp [moduleTryCands, htail, hhtml, hdef, claimModule] at h
              have ht1 : t1 ≠ toks := by
                intro hcon
                have e := h.2.2.symm
                rw [hcon] at e
                have hl := congrArg List.length e
                simp at hl
              refine ⟨attrRaw, r, bodyRaw, r', List.mem_cons_self, htail,
                h.2.1.symm, Or.inr ⟨ht1, ?_⟩⟩
              rw [hh]
              simpa [List.append_assoc] using h.1.symm

theorem moduleMatch_process_shape {src repl rest' : List Nat}
    {toks t1 : List TokenEntry}
    (h : moduleMatch src toks = some (repl, rest', t1)) :
    ∃ A attrRaw r bodyRaw r' : List Nat,
      src = A ++ [93, 93] ++ r ∧ 10 ≤ A.length ∧
      moduleTail r = some (bodyRaw, r') ∧ rest' = r' ∧
      ((t1 = toks ∧
          repl = rewriteModulePrefix (insertInlineOpenerNewlines
            (src.take (src.length - r'.length)))) ∨
        (t1 ≠ toks ∧
          repl = [10, 10] ++ phBytes toks.length ++ [10, 10] ++
            (if (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) ||
                bodyHasCodeToken bodyRaw toks 0 then
               bodyRaw ++ (src.take (src.length - r'.length)).drop
                 (src.length - r'.length - 11)
             else []))) := by
  unfold moduleMatch at h
  cases hh : moduleHead (litBytes "[[module") src with
  | none => simp [hh] at h
  | some pair =>
      rcases pair with ⟨name, cands⟩
      have ht : moduleTryCands src name toks cands = some (repl, rest', t1) := by
        simpa [hh] using h
      obtain ⟨attrRaw, r, bodyRaw, r', hmem, htail, hrest, hrepl⟩ :=
        moduleTryCands_process_shape src name toks cands repl rest' t1 ht
      obtain ⟨A, hA, hA10⟩ := moduleHead_cand_decomp hh hmem
      exact ⟨A, attrRaw, r, bodyRaw, r', hA, hA10, htail, hrest, hrepl⟩

theorem swapByteCase_eq_of_not_ascii_letter {p x : Nat}
    (h : swapByteCase p = x)
    (hlow : ¬ (97 ≤ x ∧ x ≤ 122)) (hup : ¬ (65 ≤ x ∧ x ≤ 90)) : p = x := by
  by_cases h1 : (decide (97 ≤ p) && decide (p ≤ 122)) = true
  · have hb : 97 ≤ p ∧ p ≤ 122 := by
      have h1a : decide (97 ≤ p) = true := by
        cases hd : decide (97 ≤ p) with
        | true => rfl
        | false => rw [hd] at h1; simp at h1
      have h1b : decide (p ≤ 122) = true := by
        cases hd : decide (p ≤ 122) with
        | true => rfl
        | false => rw [hd] at h1; simp at h1
      exact ⟨of_decide_eq_true h1a, of_decide_eq_true h1b⟩
    have e : swapByteCase p = p - 32 := by
      unfold swapByteCase
      rw [if_pos h1]
    exfalso
    apply hup
    omega
  · by_cases h2 : (decide (65 ≤ p) && decide (p ≤ 90)) = true
    · have hb : 65 ≤ p ∧ p ≤ 90 := by
        have h2a : decide (65 ≤ p) = true := by
          cases hd : decide (65 ≤ p) with
          | true => rfl
          | false => rw [hd] at h2; simp at h2
        have h2b : decide (p ≤ 90) = true := by
          cases hd : decide (p ≤ 90) with
          | true => rfl
          | false => rw [hd] at h2; simp at h2
        exact ⟨of_decide_eq_true h2a, of_decide_eq_true h2b⟩
      have e : swapByteCase p = p + 32 := by
        unfold swapByteCase
        rw [if_neg h1, if_pos h2]
      exfalso
      apply hlow
      omega
    · have e : swapByteCase p = p := by
        unfold swapByteCase
        rw [if_neg h1, if_neg h2]
      omega

theorem byteCiEq_eq_10 {x p : Nat} (h : byteCiEq x p = true) :
    (x = 10 ↔ p = 10) := by
  rw [mtu_byteCiEq] at h
  rcases h with rfl | h2
  · exact Iff.rfl
  · constructor
    · intro hx
      have hp : p = 10 := by
        apply swapByteCase_eq_of_not_ascii_letter (x := 10)
        · rw [← hx]
          exact h2.symm
        · omega
        · omega
      exact hp
    · intro hp
      rw [hp] at h2
      have h10 : swapByteCase 10 = 10 := by decide
      rw [h10] at h2
      exact h2

def count10 (src : List Nat) : Nat := src.count 10

theorem count10_cons (b : Nat) (l : List Nat) :
    count10 (b :: l) = (if b = 10 then count10 l + 1 else count10 l) := by
  by_cases hb : b = 10 <;> simp [count10, List.count_cons, hb]

theorem matchLitCI_count10_take {pat : List Nat} :
    ∀ {src rest : List Nat}, matchLitCI pat src = some rest →
      count10 (src.take pat.length) = count10 pat := by
  induction pat with
  | nil =>
      intro src rest _
      simp [count10]
  | cons p pat ih =>
      intro src rest h
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x src =>
          have hstep : byteCiEq x p = true ∧ matchLitCI pat src = some rest := by
            by_cases hc : byteCiEq x p = true
            · exact ⟨hc, by simpa [matchLitCI, hc] using h⟩
            · simp [matchLitCI, hc] at h
          have ih' := ih hstep.2
          have hiff := byteCiEq_eq_10 hstep.1
          have htake : (x :: src).take (p :: pat).length
              = x :: src.take pat.length := by
            simp [List.take_succ_cons]
          rw [htake, count10_cons, count10_cons, ih']
          by_cases hx : x = 10
          · rw [if_pos hx, if_pos (hiff.mp hx)]
          · rw [if_neg hx, if_neg (fun hp => hx (hiff.mpr hp))]

theorem moduleScanPass_take_eq_take_of_no_lf (b0 : Nat) (hb0 : b0 ≠ 10) :
    ∀ (n : Nat) (src : List Nat) (toks : List TokenEntry),
      10 ∉ (moduleScanPass (some b0) src toks (src.length + 1)).1.take n →
      (moduleScanPass (some b0) src toks (src.length + 1)).1.take n = src.take n := by
  intro n src
  induction src generalizing n b0 with
  | nil =>
      intro toks hn
      simp [moduleScanPass]
  | cons b rest ih =>
      intro toks hn
      have hprev : ¬ ((some b0) = none ∨ (some b0) = some 10) := by
        intro hdis
        rcases hdis with hnone | hten
        · contradiction
        · exact hb0 (Option.some.inj hten)
      have hstep : moduleScanPass (some b0) (b :: rest) toks ((b :: rest).length + 1)
          = (b :: (moduleScanPass (some b) rest toks (rest.length + 1)).1,
             (moduleScanPass (some b) rest toks (rest.length + 1)).2) := by
        cases hscan : moduleScanPass (some b) rest toks (rest.length + 1) with
        | mk o t => simp [moduleScanPass, hprev, hb0, hscan]
      cases n with
      | zero => simp
      | succ m =>
          by_cases hb : b = 10
          · exfalso
            apply hn
            rw [hstep]
            simp [hb]
          · have htailn : 10 ∉ (moduleScanPass (some b) rest toks (rest.length + 1)).1.take m := by
              intro hm
              apply hn
              rw [hstep]
              simp only [List.take_succ_cons]
              simp [hm]
            have htail := ih b hb m toks htailn
            rw [hstep]
            simp only [List.take_succ_cons]
            rw [htail]

theorem moduleScanPass_copy_prefix7_of_match_prev91
    (rest : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hfuel : rest.length + 1 ≤ fuel)
    (hmatch : matchLitCI (litBytes "[module")
      (moduleScanPass (some 91) rest toks fuel).1 ≠ none) :
    (moduleScanPass (some 91) rest toks fuel).1.take 7 = rest.take 7 := by
  have hnorm : moduleScanPass (some 91) rest toks fuel =
      moduleScanPass (some 91) rest toks (rest.length + 1) :=
    moduleScanPass_fuel_sufficient _ _ _ _ (by omega)
  rw [hnorm] at hmatch ⊢
  cases hm : matchLitCI (litBytes "[module")
      (moduleScanPass (some 91) rest toks (rest.length + 1)).1 with
  | none => exact absurd hm hmatch
  | some r =>
      have hc := matchLitCI_count10_take hm
      have hpatlen : (litBytes "[module").length = 7 := by decide
      have hpat0 : count10 (litBytes "[module") = 0 := by decide
      rw [hpatlen, hpat0] at hc
      have hnolf : 10 ∉ (moduleScanPass (some 91) rest toks (rest.length + 1)).1.take 7 := by
        rw [← List.count_eq_zero]
        exact hc
      exact moduleScanPass_take_eq_take_of_no_lf 91 (by decide) 7 rest toks hnolf

theorem moduleScanPass_copy_step_of_prev_nonline (prev : Option Nat) (b : Nat)
    (rest : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hprev : prev ≠ none ∧ prev ≠ some 10) :
    (moduleScanPass prev (b :: rest) toks (fuel + 1)).1 =
      b :: (moduleScanPass (some b) rest toks fuel).1 := by
  have hnotP : ¬ (prev = none ∨ prev = some 10) := by
    intro hdis
    rcases hdis with h | h
    · exact hprev.1 h
    · exact hprev.2 h
  cases hscan : moduleScanPass (some b) rest toks fuel with
  | mk o t => simp [moduleScanPass, hnotP, hscan]

theorem moduleTermMeasure_append_strict_left1_lf (A B Y Z : List Nat)
    (hAend : A.getLast? = some 10) (hBend : B.getLast? = some 10)
    (hleft : moduleTermMeasure B + 1 ≤ moduleTermMeasure A)
    (hright : moduleTermMeasure Z ≤ moduleTermMeasure Y) :
    moduleTermMeasure (B ++ Z) < moduleTermMeasure (A ++ Y) := by
  obtain ⟨LA, hA⟩ := List.getLast?_eq_some_iff.mp hAend
  obtain ⟨LB, hB⟩ := List.getLast?_eq_some_iff.mp hBend
  subst A
  subst B
  have hout := moduleTermMeasure_append_snoc_lf LB Z
  have hin := moduleTermMeasure_append_snoc_lf LA Y
  omega

theorem moduleTermMeasure_append_strict_lf_input93 (LA LB Y Z : List Nat)
    (hleft : moduleTermMeasure (LB ++ [10]) + 2 ≤ moduleTermMeasure (LA ++ [93]))
    (hright : moduleTermMeasure Z ≤ moduleTermMeasure Y) :
    moduleTermMeasure ((LB ++ [10]) ++ Z) <
      moduleTermMeasure ((LA ++ [93]) ++ Y) := by
  have hout := moduleTermMeasure_append_snoc_lf LB Z
  have hin := mtuCountPair_append_error_bound mtuTermPair (LA ++ [93]) Y
  dsimp [moduleTermMeasure] at hleft hright hout hin ⊢
  omega

theorem defense_append_term_measure_strict (matched Y Z : List Nat)
    (hmlen : 13 ≤ matched.length)
    (hexact : matched.take 8 = litBytes "[[module")
    (hws : ∃ w rest, matched.drop 8 = w :: rest ∧ isWsByte w = true)
    (hmend : matched.getLast? = some 10 ∨ matched.getLast? = some 93)
    (hhead93 : matched.getLast? = some 93 → Z.head? = Y.head?)
    (hright : moduleTermMeasure Z ≤ moduleTermMeasure Y) :
    moduleTermMeasure
        (rewriteModulePrefix (insertInlineOpenerNewlines matched) ++ Z) <
      moduleTermMeasure (matched ++ Y) := by
  let ins := insertInlineOpenerNewlines matched
  let repl := rewriteModulePrefix ins
  have hslack := defense_term_measure_exact_slack_lower matched hexact hws
  change moduleTermMeasure repl + 1 + (ins.length - matched.length) ≤
    moduleTermMeasure matched at hslack
  have hleninsge : matched.length ≤ ins.length :=
    insertInlineOpenerNewlines_length_ge matched
  have hlenins13 : 13 ≤ ins.length := by omega
  have hrewend : repl.getLast? = ins.getLast? :=
    rewriteModulePrefix_getLast? ins hlenins13
  have hinsend := insertInlineOpenerNewlines_end_cases matched
  have hleft1 : moduleTermMeasure repl + 1 ≤ moduleTermMeasure matched := by omega
  change moduleTermMeasure (repl ++ Z) < moduleTermMeasure (matched ++ Y)
  rcases hmend with hm10 | hm93
  · have hins10 : ins.getLast? = some 10 := by
      rcases hinsend with hsame | hlf
      · rw [hm10] at hsame
        exact hsame
      · exact hlf
    have hrepl10 : repl.getLast? = some 10 := by
      rw [hrewend]
      exact hins10
    exact moduleTermMeasure_append_strict_left1_lf matched repl Y Z
      hm10 hrepl10 hleft1 hright
  · have hreplcases : repl.getLast? = some 93 ∨ repl.getLast? = some 10 := by
      rcases hinsend with hsame | hlf
      · left
        rw [hrewend]
        rw [hm93] at hsame
        exact hsame
      · right
        rw [hrewend]
        exact hlf
    rcases hreplcases with hr93 | hr10
    · obtain ⟨LA, hA⟩ := List.getLast?_eq_some_iff.mp hm93
      obtain ⟨LB, hB⟩ := List.getLast?_eq_some_iff.mp hr93
      have hbit : (if mtuTermPair 93 Z.head? then 1 else 0) ≤
          (if mtuTermPair 93 Y.head? then 1 else 0) := by
        rw [hhead93 hm93]
        exact Nat.le_refl _
      rw [hA, hB] at hleft1 ⊢
      exact moduleTermMeasure_append_strict_same_end LA LB Y Z 93
        hbit hleft1 hright
    · have hins10 : ins.getLast? = some 10 := by
        rw [← hrewend]
        exact hr10
      have hgrowpos : 0 < ins.length - matched.length := by
        by_cases heq : ins.length = matched.length
        · have hinseq : ins = matched :=
            insertInlineOpenerNewlines_eq_of_length_eq heq
          rw [hinseq, hm93] at hins10
          simp at hins10
        · omega
      have hleft2 : moduleTermMeasure repl + 2 ≤ moduleTermMeasure matched := by
        omega
      obtain ⟨LA, hA⟩ := List.getLast?_eq_some_iff.mp hm93
      obtain ⟨LB, hB⟩ := List.getLast?_eq_some_iff.mp hr10
      rw [hA, hB] at hleft2 ⊢
      exact moduleTermMeasure_append_strict_lf_input93 LA LB Y Z
        hleft2 hright

theorem mtu_take_length_sub_of_append (a b : List Nat) :
    (a ++ b).take ((a ++ b).length - b.length) = a := by
  have hlen : (a ++ b).length - b.length = a.length := by
    simp [List.length_append]
  rw [hlen]
  exact List.take_left

theorem lastConsumedByte_eq_getLast_of_append (a b : List Nat) :
    lastConsumedByte (a ++ b) b = a.getLast? := by
  unfold lastConsumedByte
  rw [mtu_take_length_sub_of_append]

theorem moduleMatch_end_table {src repl rest' : List Nat}
    {toks t1 : List TokenEntry}
    (h : moduleMatch src toks = some (repl, rest', t1)) :
    ∃ matched : List Nat, src = matched ++ rest' ∧
      (matched.getLast? = some 10 ∨ matched.getLast? = some 93) := by
  obtain ⟨A, attrRaw, r, bodyRaw, r', hA, hA10, htail, hrest, hrepl⟩ :=
    moduleMatch_process_shape h
  obtain ⟨wsPre, B, hrB, htailCases⟩ := moduleTail_end_spec htail
  subst rest'
  rcases htailCases with ⟨hbody, hr'eq, -⟩ | ⟨c, closerVar, hf, hbody, hBdrop, hcloserlen, hcloserend⟩
  · subst r'
    refine ⟨(A ++ [93, 93] ++ wsPre) ++ [10], ?_, Or.inl ?_⟩
    · rw [hA, hrB]
      simp [List.append_assoc]
    · rw [List.getLast?_append]
      simp
  · have hB : B = bodyRaw ++ closerVar ++ r' := by
      calc B = B.take (c + 1) ++ B.drop (c + 1) :=
            (List.take_append_drop (c + 1) B).symm
        _ = bodyRaw ++ (closerVar ++ r') := by rw [← hbody, hBdrop]
        _ = bodyRaw ++ closerVar ++ r' := by simp [List.append_assoc]
    refine ⟨((A ++ [93, 93] ++ wsPre) ++ [10] ++ bodyRaw) ++ closerVar, ?_, Or.inr ?_⟩
    · rw [hA, hrB, hB]
      simp [List.append_assoc]
    · have hcloserne : closerVar ≠ [] := by
        intro hn
        rw [hn] at hcloserlen
        simp at hcloserlen
      rw [mtu_getLast_append_of_right_ne_nil _ _ hcloserne]
      exact hcloserend

/-- Match-level form of the strengthened candidate measure theorem. -/
theorem moduleMatch_term_measure (src repl rest' : List Nat) (toks : List TokenEntry)
    (t1 : List TokenEntry)
    (h : moduleMatch src toks = some (repl, rest', t1)) :
    ∃ matched : List Nat, src = matched ++ rest' ∧
      13 ≤ matched.length ∧ 2 ≤ count91 matched ∧
      3 ≤ moduleTermMeasure matched ∧
      ((t1 = toks ∧ count91 repl = count91 matched ∧
          matched.length ≤ repl.length ∧
          (repl ≠ matched → matched.length < repl.length)) ∨
        (t1 ≠ toks ∧ count91 repl + 2 ≤ count91 matched ∧
          moduleTermMeasure repl + 3 ≤ moduleTermMeasure matched)) := by
  unfold moduleMatch at h
  cases hh : moduleHead (litBytes "[[module") src with
  | none => rw [hh] at h; contradiction
  | some pair =>
      rcases pair with ⟨name, cands⟩
      have ht : moduleTryCands src name toks cands = some (repl, rest', t1) := by
        simpa [hh] using h
      obtain ⟨r0, hm0⟩ := moduleHead_matchLitCI_some hh
      have htake2 : src.take 2 = [91, 91] := matchLitCI_two_91 hm0
      exact moduleTryCands_term_measure src name toks hh htake2 cands
        (fun cand hmem => moduleHead_cand_decomp hh hmem) repl rest' t1 ht

theorem moduleMatch_term_measure_with_ends
    {src repl rest' : List Nat} {toks t1 : List TokenEntry}
    (h : moduleMatch src toks = some (repl, rest', t1))
    (hlower : allModuleOpenersLower src)
    (Z : List Nat)
    (hhead93cond : lastConsumedByte src rest' = some 93 → Z.head? = rest'.head?)
    (hright : moduleTermMeasure Z ≤ moduleTermMeasure rest') :
    ∃ matched : List Nat, src = matched ++ rest' ∧
      13 ≤ matched.length ∧ 2 ≤ count91 matched ∧
      3 ≤ moduleTermMeasure matched ∧
      (matched.getLast? = some 10 ∨ matched.getLast? = some 93) ∧
      moduleTermMeasure (repl ++ Z) < moduleTermMeasure (matched ++ rest') := by
  obtain ⟨matched, hdecomp, hmlen, hm91, hmlower, hbranch⟩ :=
    moduleMatch_term_measure src repl rest' toks t1 h
  obtain ⟨matchedE, hdecompE, hmend⟩ := moduleMatch_end_table h
  have hmeq : matched = matchedE := by
    apply List.append_cancel_right (bs := rest')
    calc matched ++ rest' = src := hdecomp.symm
      _ = matchedE ++ rest' := hdecompE
  subst matchedE
  refine ⟨matched, hdecomp, hmlen, hm91, hmlower, hmend, ?_⟩
  cases hh : moduleHead (litBytes "[[module") src with
  | none =>
      simp [moduleMatch, hh] at h
  | some pair =>
      rcases pair with ⟨name, cands⟩
      obtain ⟨r0, hm0⟩ := moduleHead_matchLitCI_some hh
      have hmci : matchLitCI (litBytes "[[module") (src.drop 0) ≠ none := by
        simp
        intro hn
        rw [hm0] at hn
        cases hn
      have hexactsrc : (src.drop 0).take 8 = litBytes "[[module" :=
        hlower 0 hmci
      have hexactsrc0 : src.take 8 = litBytes "[[module" := by
        simpa using hexactsrc
      have htake8 : src.take 8 = matched.take 8 := by
        rw [hdecomp]
        exact mtu_take_append_of_le matched rest' 8 (by omega)
      have hexact : matched.take 8 = litBytes "[[module" := by
        rw [← htake8]
        exact hexactsrc0
      have hws := moduleHead_matched_drop8_ws hh hdecomp hmlen
      rcases hbranch with ⟨ht1eq, -, -, -⟩ | ⟨ht1ne, -, hm3⟩
      · obtain ⟨A, attrRaw, r, bodyRaw, r', hA, hA10, htail, hrest, hrepl⟩ :=
          moduleMatch_process_shape h
        subst r'
        rcases hrepl with ⟨-, hrepldef⟩ | ⟨hcontra, -⟩
        · have htakematched : src.take (src.length - rest'.length) = matched := by
            rw [hdecomp]
            exact mtu_take_length_sub_of_append matched rest'
          rw [htakematched] at hrepldef
          have hlast : lastConsumedByte src rest' = matched.getLast? := by
            rw [hdecomp]
            exact lastConsumedByte_eq_getLast_of_append matched rest'
          have hhead93 : matched.getLast? = some 93 → Z.head? = rest'.head? := by
            intro hm93
            apply hhead93cond
            rw [hlast]
            exact hm93
          rw [hrepldef]
          exact defense_append_term_measure_strict matched rest' Z
            hmlen hexact hws hmend hhead93 hright
        · exact absurd ht1eq hcontra
      · exact moduleTermMeasure_append_strict_of_margin3 matched repl rest' Z
          hm3 hright


theorem allModuleOpenersLower_cons_of_ne91 (b : Nat) (rest : List Nat)
    (hb : b ≠ 91) (h : allModuleOpenersLower rest) :
    allModuleOpenersLower (b :: rest) := by
  intro i hi
  cases i with
  | zero =>
      exfalso
      cases hm : matchLitCI (litBytes "[[module") (b :: rest) with
      | none => exact absurd hm hi
      | some r =>
          have hci : byteCiEq b 91 = true :=
            matchLitCI_byteCiEq_at hm 0 b 91 (by simp) (by decide)
          exact hb ((byteCiEq_eq_91 hci).mpr rfl)
  | succ i =>
      have hi' : matchLitCI (litBytes "[[module") (rest.drop i) ≠ none := by
        simpa using hi
      simpa using h i hi'

theorem allModuleOpenersLower_cons_of_copy8 (b : Nat) (rest out : List Nat)
    (hout : allModuleOpenersLower out)
    (hin : allModuleOpenersLower (b :: rest))
    (hcopy8 : matchLitCI (litBytes "[[module") (b :: out) ≠ none →
      (b :: out).take 8 = (b :: rest).take 8) :
    allModuleOpenersLower (b :: out) := by
  intro i hi
  cases i with
  | zero =>
      cases hm : matchLitCI (litBytes "[[module") (b :: out) with
      | none => exact absurd hm hi
      | some r =>
          have hne : matchLitCI (litBytes "[[module") (b :: out) ≠ none := by
            intro hn
            rw [hn] at hm
            cases hm
          have htake := hcopy8 hne
          obtain ⟨r', hr'⟩ := matchLitCI_transfer_take hm htake
          have hexin := hin 0 (by
            simp
            intro hn
            rw [hn] at hr'
            cases hr')
          have hexin0 : (b :: rest).take 8 = litBytes "[[module" := by
            simpa using hexin
          have hexout : (b :: out).take 8 = litBytes "[[module" := by
            rw [htake]
            exact hexin0
          simpa using hexout
  | succ i =>
      have hi' : matchLitCI (litBytes "[[module") (out.drop i) ≠ none := by
        simpa using hi
      simpa using hout i hi'

theorem moduleHeadEnd_take_end93 (src : List Nat) (n : Nat)
    (hm : moduleHeadEnd src = some n) :
    (src.take n).getLast? = some 93 := by
  rcases moduleHeadEnd_eq_some_spec src n hm with ⟨hnpos, hnle, c, hn, htake, hdrop⟩
  have h93ne : litBytes "]]" ≠ [] := by decide
  rw [htake]
  rw [mtu_getLast_append_of_right_ne_nil _ _ h93ne]
  decide

theorem insertGo_take_eq_take_of_no_lf (b0 : Nat) (hb0 : b0 ≠ 10) :
    ∀ (n : Nat) (src : List Nat),
      10 ∉ (insertInlineOpenerNewlinesGo (some b0) src (src.length + 1)).take n →
      (insertInlineOpenerNewlinesGo (some b0) src (src.length + 1)).take n = src.take n := by
  intro n src
  induction src generalizing n b0 with
  | nil =>
      intro hn
      simp [insertInlineOpenerNewlinesGo]
  | cons b rest ih =>
      intro hn
      have hprev : ¬ ((some b0) = none ∨ (some b0) = some 10) := by
        intro hdis
        rcases hdis with hnone | hten
        · contradiction
        · exact hb0 (Option.some.inj hten)
      have hstep : insertInlineOpenerNewlinesGo (some b0) (b :: rest)
          ((b :: rest).length + 1)
          = b :: insertInlineOpenerNewlinesGo (some b) rest (rest.length + 1) := by
        simp [insertInlineOpenerNewlinesGo, hprev, hb0]
      cases n with
      | zero => simp
      | succ m =>
          by_cases hb : b = 10
          · exfalso
            apply hn
            rw [hstep]
            simp [hb]
          · have htailn : 10 ∉ (insertInlineOpenerNewlinesGo (some b) rest
                (rest.length + 1)).take m := by
              intro hm
              apply hn
              rw [hstep]
              simp only [List.take_succ_cons]
              simp [hm]
            have htail := ih b hb m htailn
            rw [hstep]
            simp only [List.take_succ_cons]
            rw [htail]

theorem insertGo_copy_prefix7_of_match_prev91
    (rest : List Nat) (fuel : Nat)
    (hfuel : rest.length ≤ fuel)
    (hmatch : matchLitCI (litBytes "[module")
      (insertInlineOpenerNewlinesGo (some 91) rest fuel) ≠ none) :
    (insertInlineOpenerNewlinesGo (some 91) rest fuel).take 7 = rest.take 7 := by
  have hnorm : insertInlineOpenerNewlinesGo (some 91) rest fuel =
      insertInlineOpenerNewlinesGo (some 91) rest (rest.length + 1) :=
    go_fuel_irrelevant _ _ hfuel (by omega)
  rw [hnorm] at hmatch ⊢
  cases hm : matchLitCI (litBytes "[module")
      (insertInlineOpenerNewlinesGo (some 91) rest (rest.length + 1)) with
  | none => exact absurd hm hmatch
  | some r =>
      have hc := matchLitCI_count10_take hm
      have hpatlen : (litBytes "[module").length = 7 := by decide
      have hpat0 : count10 (litBytes "[module") = 0 := by decide
      rw [hpatlen, hpat0] at hc
      have hnolf : 10 ∉ (insertInlineOpenerNewlinesGo (some 91) rest
          (rest.length + 1)).take 7 := by
        rw [← List.count_eq_zero]
        exact hc
      exact insertGo_take_eq_take_of_no_lf 91 (by decide) 7 rest hnolf

theorem allModuleOpenersLower_module654 :
    allModuleOpenersLower (litBytes "[[module654") := by
  intro i hi
  cases hm : matchLitCI (litBytes "[[module") ((litBytes "[[module654").drop i) with
  | none => exact absurd hm hi
  | some r =>
      obtain ⟨pre, hprelen, hprerest⟩ := matchLitCI_eq_some_decomp _ _ _ hm
      have hpre8 : pre.length = 8 := by
        have hp : (litBytes "[[module").length = 8 := by decide
        omega
      have hlenlit : (litBytes "[[module654").length = 11 := by decide
      have hi_le : i ≤ 3 := by
        have e := congrArg List.length hprerest
        rw [List.length_append, hpre8, List.length_drop, hlenlit] at e
        omega
      cases i with
      | zero => decide
      | succ i =>
          cases i with
          | zero => simp [litBytes, matchLitCI, byteCiEq, swapByteCase] at hm
          | succ i =>
              cases i with
              | zero => simp [litBytes, matchLitCI, byteCiEq, swapByteCase] at hm
              | succ i =>
                  cases i with
                  | zero => simp [litBytes, matchLitCI, byteCiEq, swapByteCase] at hm
                  | succ i => omega

theorem mtu_rewriteModulePrefix_keep {m : List Nat}
    (h : (m.take 8 == litBytes "[[module") = false) :
    rewriteModulePrefix m = m := by
  unfold rewriteModulePrefix
  simp [h]

theorem mtu_rewriteModulePrefix_exact (rest : List Nat) :
    rewriteModulePrefix (litBytes "[[module" ++ rest) =
      litBytes "[[module654" ++ rest := by
  unfold rewriteModulePrefix
  have htake : (litBytes "[[module" ++ rest).take 8 = litBytes "[[module" := by
    simp [litBytes]
  have hdrop : (litBytes "[[module" ++ rest).drop 8 = rest := by
    simp [litBytes]
  simp [htake, hdrop]

theorem rewriteModulePrefix_preserves_lower (m : List Nat)
    (h : allModuleOpenersLower m) :
    allModuleOpenersLower (rewriteModulePrefix m) := by
  cases hb : (m.take 8 == litBytes "[[module") with
  | false =>
      rw [mtu_rewriteModulePrefix_keep hb]
      exact h
  | true =>
      have htake : m.take 8 = litBytes "[[module" := by simpa using hb
      have hmdecomp : m = litBytes "[[module" ++ m.drop 8 := by
        calc m = m.take 8 ++ m.drop 8 := (List.take_append_drop 8 m).symm
          _ = litBytes "[[module" ++ m.drop 8 := by rw [htake]
      rw [hmdecomp, mtu_rewriteModulePrefix_exact]
      exact allModuleOpenersLower_append_of_sep_end allModuleOpenersLower_module654
        (allModuleOpenersLower_drop h 8)
        ⟨52, by decide, mtuModuleOpenerSepByte_52⟩

theorem insertGo_copy_head8 (b : Nat) (rest : List Nat) :
    matchLitCI (litBytes "[[module")
        (b :: insertInlineOpenerNewlinesGo (some b) rest (rest.length + 1)) ≠ none →
      (b :: insertInlineOpenerNewlinesGo (some b) rest (rest.length + 1)).take 8 =
        (b :: rest).take 8 := by
  intro hne
  cases hm : matchLitCI (litBytes "[[module")
      (b :: insertInlineOpenerNewlinesGo (some b) rest (rest.length + 1)) with
  | none => exact absurd hm hne
  | some r =>
      simp [matchLitCI, litBytes] at hm
      have hb91 : b = 91 := (byteCiEq_eq_91 hm.1).mpr rfl
      subst b
      have htailne : matchLitCI (litBytes "[module")
          (insertInlineOpenerNewlinesGo (some 91) rest (rest.length + 1)) ≠ none := by
        intro hn
        change matchLitCI [91, 109, 111, 100, 117, 108, 101]
          (insertInlineOpenerNewlinesGo (some 91) rest (rest.length + 1)) = none at hn
        rw [hn] at hm
        cases hm.2
      have hpref := insertGo_copy_prefix7_of_match_prev91 rest (rest.length + 1)
        (by omega) htailne
      simp [List.take_succ_cons, hpref]


theorem insertGo_preserves_lower_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat), src.length = n →
      allModuleOpenersLower src →
      allModuleOpenersLower (insertInlineOpenerNewlinesGo prev src (src.length + 1)) := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src hlen hlower
      cases src with
      | nil =>
          simp [insertInlineOpenerNewlinesGo]
          intro i hi
          simp [matchLitCI, litBytes] at hi
      | cons b rest =>
          have hlenrest : rest.length + 1 = n := by simpa using hlen
          by_cases hstart : (prev == none || prev == some 10) = true
          · cases hm : moduleHeadEnd (b :: rest) with
            | none =>
                have hstartp : prev = none ∨ prev = some 10 := by simpa using hstart
                have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                    ((b :: rest).length + 1)
                    = b :: insertInlineOpenerNewlinesGo (some b) rest
                        (rest.length + 1) := by
                  simp [insertInlineOpenerNewlinesGo, hstartp, hm]
                rw [e]
                have hrestlt : rest.length < n := by omega
                have htail := ih rest.length hrestlt (some b) rest rfl
                  (allModuleOpenersLower_drop hlower 1)
                exact allModuleOpenersLower_cons_of_copy8 b rest
                  (insertInlineOpenerNewlinesGo (some b) rest (rest.length + 1))
                  htail hlower (insertGo_copy_head8 b rest)
            | some n' =>
                have hspec := moduleHeadEnd_eq_some_spec (b :: rest) n' hm
                rcases hspec with ⟨hnpos, hnle, c, hn', htake, hdropEq⟩
                have hafterlt : ((b :: rest).drop n').length < n := by
                  rw [List.length_drop]
                  omega
                have hlowerAfter : allModuleOpenersLower ((b :: rest).drop n') :=
                  allModuleOpenersLower_drop hlower n'
                have hlowerPrefix : allModuleOpenersLower ((b :: rest).take n') :=
                  allModuleOpenersLower_take hlower n'
                have hend93 := moduleHeadEnd_take_end93 (b :: rest) n' hm
                have hfuelnorm : ∀ p,
                    insertInlineOpenerNewlinesGo p ((b :: rest).drop n')
                        ((b :: rest).length)
                      = insertInlineOpenerNewlinesGo p ((b :: rest).drop n')
                          (((b :: rest).drop n').length + 1) := by
                  intro p
                  apply go_fuel_irrelevant
                  · rw [List.length_drop]
                    omega
                  · omega
                cases hsn : spacesThenNewline ((b :: rest).drop n') with
                | true =>
                    have e0 := go_step_line_terminated prev (b :: rest)
                      ((b :: rest).length + 1) (by omega) hstart n' hm hsn
                    have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n' ++ insertInlineOpenerNewlinesGo
                            (some 93) ((b :: rest).drop n')
                            (((b :: rest).drop n').length + 1) := by
                      rw [e0]
                      have hf := hfuelnorm (some 93)
                      have hfuel : (b :: rest).length + 1 - 1 = (b :: rest).length := by omega
                      rw [hfuel, hf]
                    rw [e]
                    have hrec := ih ((b :: rest).drop n').length hafterlt (some 93)
                      ((b :: rest).drop n') rfl hlowerAfter
                    exact allModuleOpenersLower_append_end93 hlowerPrefix hrec hend93
                | false =>
                    have e0 := go_step_inline_inserts_lf prev (b :: rest)
                      ((b :: rest).length + 1) (by omega) hstart n' hm hsn
                    have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                        ((b :: rest).length + 1)
                        = (b :: rest).take n' ++ [10] ++ insertInlineOpenerNewlinesGo
                            (some 10) ((b :: rest).drop n')
                            (((b :: rest).drop n').length + 1) := by
                      rw [e0]
                      have hf := hfuelnorm (some 10)
                      have hfuel : (b :: rest).length + 1 - 1 = (b :: rest).length := by omega
                      rw [hfuel, hf]
                    rw [e]
                    have hrec := ih ((b :: rest).drop n').length hafterlt (some 10)
                      ((b :: rest).drop n') rfl hlowerAfter
                    have hright : allModuleOpenersLower
                        ([10] ++ insertInlineOpenerNewlinesGo (some 10)
                          ((b :: rest).drop n')
                          (((b :: rest).drop n').length + 1)) :=
                      allModuleOpenersLower_cons_of_ne91 10 _ (by decide) hrec
                    rw [List.append_assoc]
                    exact allModuleOpenersLower_append_end93 hlowerPrefix hright hend93
          · have hstartp : ¬ (prev = none ∨ prev = some 10) := by
              intro hdis
              apply hstart
              rcases hdis with rfl | rfl <;> simp
            have e : insertInlineOpenerNewlinesGo prev (b :: rest)
                ((b :: rest).length + 1)
                = b :: insertInlineOpenerNewlinesGo (some b) rest
                    (rest.length + 1) := by
              simp [insertInlineOpenerNewlinesGo, hstartp]
            rw [e]
            have hrestlt : rest.length < n := by omega
            have htail := ih rest.length hrestlt (some b) rest rfl
              (allModuleOpenersLower_drop hlower 1)
            exact allModuleOpenersLower_cons_of_copy8 b rest
              (insertInlineOpenerNewlinesGo (some b) rest (rest.length + 1))
              htail hlower (insertGo_copy_head8 b rest)

theorem insertInlineOpenerNewlines_preserves_lower (src : List Nat)
    (h : allModuleOpenersLower src) :
    allModuleOpenersLower (insertInlineOpenerNewlines src) := by
  unfold insertInlineOpenerNewlines
  exact insertGo_preserves_lower_aux src.length none src rfl h

theorem defenseReplacement_preserves_lower (m : List Nat)
    (h : allModuleOpenersLower m) :
    allModuleOpenersLower (rewriteModulePrefix (insertInlineOpenerNewlines m)) :=
  rewriteModulePrefix_preserves_lower _
    (insertInlineOpenerNewlines_preserves_lower _ h)

theorem moduleScanPass_copy_head8 (b : Nat) (rest : List Nat) (toks : List TokenEntry) :
    matchLitCI (litBytes "[[module")
        (b :: (moduleScanPass (some b) rest toks (rest.length + 1)).1) ≠ none →
      (b :: (moduleScanPass (some b) rest toks (rest.length + 1)).1).take 8 =
        (b :: rest).take 8 := by
  intro hne
  cases hm : matchLitCI (litBytes "[[module")
      (b :: (moduleScanPass (some b) rest toks (rest.length + 1)).1) with
  | none => exact absurd hm hne
  | some r =>
      simp [matchLitCI, litBytes] at hm
      have hb91 : b = 91 := (byteCiEq_eq_91 hm.1).mpr rfl
      subst b
      have htailne : matchLitCI (litBytes "[module")
          (moduleScanPass (some 91) rest toks (rest.length + 1)).1 ≠ none := by
        intro hn
        change matchLitCI [91, 109, 111, 100, 117, 108, 101]
          (moduleScanPass (some 91) rest toks (rest.length + 1)).1 = none at hn
        rw [hn] at hm
        cases hm.2
      have hpref := moduleScanPass_copy_prefix7_of_match_prev91 rest toks
        (rest.length + 1) (by omega) htailne
      simp [List.take_succ_cons, hpref]

theorem moduleScanPass_head_eq_input_of_prev_nonline (b : Nat) (rest : List Nat)
    (toks : List TokenEntry) (hb : b ≠ 10) :
    (moduleScanPass (some b) rest toks (rest.length + 1)).1.head? = rest.head? := by
  cases rest with
  | nil => simp [moduleScanPass]
  | cons c cs =>
      have h := moduleScanPass_head_copy_of_prev_nonline b c cs toks hb
      simpa [List.length_cons] using h

theorem allModuleOpenersLower_suffix_of_append {a b : List Nat}
    (h : allModuleOpenersLower (a ++ b)) : allModuleOpenersLower b := by
  have hb : b = (a ++ b).drop a.length := by simp
  rw [hb]
  exact allModuleOpenersLower_drop h a.length

theorem count91_claimWrapper (n : Nat) :
    count91 ([10, 10] ++ phBytes n ++ [10, 10]) = 0 := by
  rw [count91_append, count91_append, count91_phBytes]
  decide

theorem claimWrapper_end10 (n : Nat) :
    ([10, 10] ++ phBytes n ++ [10, 10]).getLast? = some 10 := by
  have hne : ([10, 10] : List Nat) ≠ [] := by simp
  rw [mtu_getLast_append_of_right_ne_nil _ _ hne]
  decide

theorem moduleMatch_repl_preserves_lower {src repl rest' : List Nat}
    {toks t1 : List TokenEntry}
    (h : moduleMatch src toks = some (repl, rest', t1))
    (hlower : allModuleOpenersLower src) :
    allModuleOpenersLower repl := by
  obtain ⟨A, attrRaw, r, bodyRaw, r', hA, hA10, htail, hrest, hrepl⟩ :=
    moduleMatch_process_shape h
  subst r'
  rcases hrepl with ⟨ht1eq, hrepldef⟩ | ⟨ht1ne, hreplclaim⟩
  · rw [hrepldef]
    apply defenseReplacement_preserves_lower
    exact allModuleOpenersLower_take hlower _
  · rw [hreplclaim]
    have hWlower : allModuleOpenersLower
        ([10, 10] ++ phBytes toks.length ++ [10, 10]) :=
      allModuleOpenersLower_of_count91_eq_zero _ (count91_claimWrapper toks.length)
    have hWend := claimWrapper_end10 toks.length
    obtain ⟨wsPre, B, hrB, htailCases⟩ := moduleTail_end_spec htail
    rcases htailCases with ⟨hbody, hr'eq, -⟩ | ⟨c, closerVar, hf, hbody, hBdrop, hcloserlen, hcloserend⟩
    · subst bodyRaw
      simp [bodyHasCodeToken_nil toks]
      simpa using hWlower
    · have hB : B = bodyRaw ++ closerVar ++ rest' := by
        calc B = B.take (c + 1) ++ B.drop (c + 1) :=
              (List.take_append_drop (c + 1) B).symm
          _ = bodyRaw ++ (closerVar ++ rest') := by rw [← hbody, hBdrop]
          _ = bodyRaw ++ closerVar ++ rest' := by simp [List.append_assoc]
      let X : List Nat := A ++ [93, 93] ++ wsPre ++ [10]
      have hsrcX : src = ((X ++ bodyRaw) ++ closerVar) ++ rest' := by
        rw [hA, hrB, hB]
        simp [X, List.append_assoc]
      have htakeMatched : src.take (src.length - rest'.length) =
          (X ++ bodyRaw) ++ closerVar := by
        rw [hsrcX]
        exact mtu_take_length_sub_of_append ((X ++ bodyRaw) ++ closerVar) rest'
      have hauth : (src.take (src.length - rest'.length)).drop
            (src.length - rest'.length - 11) = closerVar := by
        have hlenmma : src.length - rest'.length =
            ((X ++ bodyRaw) ++ closerVar).length := by
          rw [hsrcX]
          simp only [List.length_append]
          omega
        rw [htakeMatched, hlenmma]
        have hidx : (((X ++ bodyRaw) ++ closerVar).length - 11) =
            (X ++ bodyRaw).length := by
          simp only [List.length_append, hcloserlen]
          omega
        rw [hidx]
        exact List.drop_left
      by_cases hcode : ((bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) ||
          bodyHasCodeToken bodyRaw toks 0) = true
      · rw [if_pos hcode, hauth]
        have hlowerMatched : allModuleOpenersLower ((X ++ bodyRaw) ++ closerVar) := by
          rw [← htakeMatched]
          exact allModuleOpenersLower_take hlower _
        have hlowerBC : allModuleOpenersLower (bodyRaw ++ closerVar) := by
          have hrew : (X ++ bodyRaw) ++ closerVar = X ++ (bodyRaw ++ closerVar) := by
            simp [List.append_assoc]
          rw [hrew] at hlowerMatched
          exact allModuleOpenersLower_suffix_of_append hlowerMatched
        exact allModuleOpenersLower_append_end10 hWlower hlowerBC hWend
      · rw [if_neg hcode]
        simpa using hWlower


theorem moduleMatch_repl_end_table {src repl rest' : List Nat}
    {toks t1 : List TokenEntry}
    (h : moduleMatch src toks = some (repl, rest', t1)) :
    repl.getLast? = some 10 ∨ repl.getLast? = some 93 := by
  obtain ⟨A, attrRaw, r, bodyRaw, r', hA, hA10, htail, hrest, hrepl⟩ :=
    moduleMatch_process_shape h
  subst r'
  rcases hrepl with ⟨ht1eq, hrepldef⟩ | ⟨ht1ne, hreplclaim⟩
  · obtain ⟨matched, hdecomp, hmlen, hm91, hmlower, hbranch⟩ :=
      moduleMatch_term_measure src repl rest' toks t1 h
    obtain ⟨matchedE, hdecompE, hmend⟩ := moduleMatch_end_table h
    have hmeq : matched = matchedE := by
      apply List.append_cancel_right (bs := rest')
      calc matched ++ rest' = src := hdecomp.symm
        _ = matchedE ++ rest' := hdecompE
    subst matchedE
    have htakematched : src.take (src.length - rest'.length) = matched := by
      rw [hdecomp]
      exact mtu_take_length_sub_of_append matched rest'
    rw [htakematched] at hrepldef
    rw [hrepldef]
    let ins := insertInlineOpenerNewlines matched
    have hleninsge : matched.length ≤ ins.length :=
      insertInlineOpenerNewlines_length_ge matched
    have hlenins13 : 13 ≤ ins.length := by omega
    have hrewend : (rewriteModulePrefix ins).getLast? = ins.getLast? :=
      rewriteModulePrefix_getLast? ins hlenins13
    have hinsend := insertInlineOpenerNewlines_end_cases matched
    rw [hrewend]
    rcases hmend with hm10 | hm93
    · rcases hinsend with hsame | hlf
      · rw [hm10] at hsame
        exact Or.inl hsame
      · exact Or.inl hlf
    · rcases hinsend with hsame | hlf
      · rw [hm93] at hsame
        exact Or.inr hsame
      · exact Or.inl hlf
  · rw [hreplclaim]
    obtain ⟨wsPre, B, hrB, htailCases⟩ := moduleTail_end_spec htail
    rcases htailCases with ⟨hbody, hr'eq, -⟩ | ⟨c, closerVar, hf, hbody, hBdrop, hcloserlen, hcloserend⟩
    · subst bodyRaw
      simp [bodyHasCodeToken_nil toks]
      exact Or.inl (claimWrapper_end10 toks.length)
    · have hB : B = bodyRaw ++ closerVar ++ rest' := by
        calc B = B.take (c + 1) ++ B.drop (c + 1) :=
              (List.take_append_drop (c + 1) B).symm
          _ = bodyRaw ++ (closerVar ++ rest') := by rw [← hbody, hBdrop]
          _ = bodyRaw ++ closerVar ++ rest' := by simp [List.append_assoc]
      let X : List Nat := A ++ [93, 93] ++ wsPre ++ [10]
      have hsrcX : src = ((X ++ bodyRaw) ++ closerVar) ++ rest' := by
        rw [hA, hrB, hB]
        simp [X, List.append_assoc]
      have htakeMatched : src.take (src.length - rest'.length) =
          (X ++ bodyRaw) ++ closerVar := by
        rw [hsrcX]
        exact mtu_take_length_sub_of_append ((X ++ bodyRaw) ++ closerVar) rest'
      have hauth : (src.take (src.length - rest'.length)).drop
            (src.length - rest'.length - 11) = closerVar := by
        have hlenmma : src.length - rest'.length =
            ((X ++ bodyRaw) ++ closerVar).length := by
          rw [hsrcX]
          simp only [List.length_append]
          omega
        rw [htakeMatched, hlenmma]
        have hidx : (((X ++ bodyRaw) ++ closerVar).length - 11) =
            (X ++ bodyRaw).length := by
          simp only [List.length_append, hcloserlen]
          omega
        rw [hidx]
        exact List.drop_left
      by_cases hcode : ((bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) ||
          bodyHasCodeToken bodyRaw toks 0) = true
      · rw [if_pos hcode, hauth]
        right
        have hcloserne : closerVar ≠ [] := by
          intro hn
          rw [hn] at hcloserlen
          simp at hcloserlen
        have hbcend : (bodyRaw ++ closerVar).getLast? = some 93 := by
          rw [mtu_getLast_append_of_right_ne_nil _ _ hcloserne]
          exact hcloserend
        have hbcne : bodyRaw ++ closerVar ≠ [] := by
          intro hn
          rw [hn] at hbcend
          simp at hbcend
        rw [mtu_getLast_append_of_right_ne_nil _ _ hbcne]
        exact hbcend
      · rw [if_neg hcode]
        simp
        exact Or.inl (claimWrapper_end10 toks.length)

theorem moduleScanPass_term_measure_aux_lower (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat) (toks : List TokenEntry),
      src.length = n → allModuleOpenersLower src →
      moduleTermMeasure (moduleScanPass prev src toks (src.length + 1)).1 ≤
        moduleTermMeasure src ∧
      ((moduleScanPass prev src toks (src.length + 1)).1 ≠ src →
        moduleTermMeasure (moduleScanPass prev src toks (src.length + 1)).1 <
          moduleTermMeasure src) := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src toks hlen hlower
      cases src with
      | nil =>
          constructor
          · simp [moduleScanPass]
          · intro hne
            simp [moduleScanPass] at hne
      | cons b rest =>
          have hlowerRest : allModuleOpenersLower rest := by
            have hr : rest = (b :: rest).drop 1 := by simp
            rw [hr]
            exact allModuleOpenersLower_drop hlower 1
          have hlenrest : rest.length + 1 = n := by simpa using hlen
          have hrestlt : rest.length < n := by omega
          have ihrest := ih rest.length hrestlt (some b) rest toks rfl hlowerRest
          by_cases hline : (prev == none || prev == some 10) = true
          · have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
            cases hm : moduleMatch (b :: rest) toks with
            | none =>
                have hstep1 : (moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)).1
                    = b :: (moduleScanPass (some b) rest toks
                        (rest.length + 1)).1 := by
                  cases hscan : moduleScanPass (some b) rest toks
                      (rest.length + 1) with
                  | mk o t =>
                      simp [moduleScanPass, hlineP, hm, hscan]
                have hbit : (if mtuTermPair b
                        (moduleScanPass (some b) rest toks (rest.length + 1)).1.head?
                      then 1 else 0) ≤
                    (if mtuTermPair b rest.head? then 1 else 0) := by
                  by_cases hb10 : b = 10
                  · subst b
                    simp [mtuTermPair, mtuOpenPair, mtuCloseOpenPair, mtuIsEByte]
                  · rw [moduleScanPass_head_eq_input_of_prev_nonline b rest toks hb10]
                    exact Nat.le_refl _
                constructor
                · rw [hstep1]
                  dsimp [moduleTermMeasure]
                  rw [mtuCountPair_cons, mtuCountPair_cons]
                  exact Nat.add_le_add hbit ihrest.1
                · intro hne
                  have htailne : (moduleScanPass (some b) rest toks
                      (rest.length + 1)).1 ≠ rest := by
                    intro heq
                    apply hne
                    rw [hstep1, heq]
                  rw [hstep1]
                  dsimp [moduleTermMeasure]
                  rw [mtuCountPair_cons, mtuCountPair_cons]
                  have htailstrict := ihrest.2 htailne
                  dsimp [moduleTermMeasure] at htailstrict
                  omega
            | some trip =>
                rcases trip with ⟨repl, rest', t1⟩
                have hshort : rest'.length < (b :: rest).length :=
                  moduleMatch_rest_shorter hm
                have hrest'lt : rest'.length < n := by omega
                have hlowerRest' : allModuleOpenersLower rest' := by
                  obtain ⟨matched, hdecomp, -, -, -, -⟩ := moduleMatch_term_measure
                    (b :: rest) repl rest' toks t1 hm
                  rw [hdecomp] at hlower
                  exact allModuleOpenersLower_suffix_of_append hlower
                have ihrest' := ih rest'.length hrest'lt
                  (lastConsumedByte (b :: rest) rest') rest' t1 rfl hlowerRest'
                have hnorm : moduleScanPass (lastConsumedByte (b :: rest) rest')
                      rest' t1 (rest.length + 1)
                    = moduleScanPass (lastConsumedByte (b :: rest) rest')
                        rest' t1 (rest'.length + 1) :=
                  moduleScanPass_fuel_sufficient _ _ _ _ (by omega)
                have hstep1 : (moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)).1
                    = repl ++ (moduleScanPass
                        (lastConsumedByte (b :: rest) rest') rest' t1
                        (rest'.length + 1)).1 := by
                  cases hscan : moduleScanPass
                      (lastConsumedByte (b :: rest) rest') rest' t1
                      (rest'.length + 1) with
                  | mk o t =>
                      have hscan' : moduleScanPass
                            (lastConsumedByte (b :: rest) rest') rest' t1
                            (rest.length + 1) = (o, t) := by
                        rw [hnorm]
                        exact hscan
                      simp [moduleScanPass, hlineP, hm, hscan']
                have hhead93cond :
                    lastConsumedByte (b :: rest) rest' = some 93 →
                      (moduleScanPass (lastConsumedByte (b :: rest) rest') rest' t1
                        (rest'.length + 1)).1.head? = rest'.head? := by
                  intro hlast
                  rw [hlast]
                  cases rest' with
                  | nil => simp [moduleScanPass]
                  | cons c cs =>
                      exact moduleScanPass_head_copy_of_prev_nonline 93 c cs t1 (by decide)
                obtain ⟨matched, hdecomp, hmlen, hm91, hm3, hmend, hstrict⟩ :=
                  moduleMatch_term_measure_with_ends hm hlower
                    (moduleScanPass (lastConsumedByte (b :: rest) rest') rest' t1
                      (rest'.length + 1)).1 hhead93cond ihrest'.1
                rw [← hdecomp] at hstrict
                constructor
                · rw [hstep1]
                  exact Nat.le_of_lt hstrict
                · intro _
                  rw [hstep1]
                  exact hstrict
          · have hnotP : ¬ (prev = none ∨ prev = some 10) := by
              simpa using hline
            have hstep1 : (moduleScanPass prev (b :: rest) toks
                  ((b :: rest).length + 1)).1
                = b :: (moduleScanPass (some b) rest toks
                    (rest.length + 1)).1 := by
              cases hscan : moduleScanPass (some b) rest toks
                  (rest.length + 1) with
              | mk o t =>
                  simp [moduleScanPass, hnotP, hscan]
            have hbit : (if mtuTermPair b
                    (moduleScanPass (some b) rest toks (rest.length + 1)).1.head?
                  then 1 else 0) ≤
                (if mtuTermPair b rest.head? then 1 else 0) := by
              by_cases hb10 : b = 10
              · subst b
                simp [mtuTermPair, mtuOpenPair, mtuCloseOpenPair, mtuIsEByte]
              · rw [moduleScanPass_head_eq_input_of_prev_nonline b rest toks hb10]
                exact Nat.le_refl _
            constructor
            · rw [hstep1]
              dsimp [moduleTermMeasure]
              rw [mtuCountPair_cons, mtuCountPair_cons]
              exact Nat.add_le_add hbit ihrest.1
            · intro hne
              have htailne : (moduleScanPass (some b) rest toks
                  (rest.length + 1)).1 ≠ rest := by
                intro heq
                apply hne
                rw [hstep1, heq]
              rw [hstep1]
              dsimp [moduleTermMeasure]
              rw [mtuCountPair_cons, mtuCountPair_cons]
              have htailstrict := ihrest.2 htailne
              dsimp [moduleTermMeasure] at htailstrict
              omega

theorem moduleScanPass_preserves_lower_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat) (toks : List TokenEntry),
      src.length = n → allModuleOpenersLower src →
      allModuleOpenersLower (moduleScanPass prev src toks (src.length + 1)).1 := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src toks hlen hlower
      cases src with
      | nil =>
          simp [moduleScanPass]
          intro i hi
          simp [matchLitCI, litBytes] at hi
      | cons b rest =>
          have hlenrest : rest.length + 1 = n := by simpa using hlen
          have hlowerRest : allModuleOpenersLower rest := by
            have hr : rest = (b :: rest).drop 1 := by simp
            rw [hr]
            exact allModuleOpenersLower_drop hlower 1
          have hrestlt : rest.length < n := by omega
          by_cases hline : (prev == none || prev == some 10) = true
          · have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
            cases hm : moduleMatch (b :: rest) toks with
            | none =>
                have hstep1 : (moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)).1
                    = b :: (moduleScanPass (some b) rest toks
                        (rest.length + 1)).1 := by
                  cases hscan : moduleScanPass (some b) rest toks
                      (rest.length + 1) with
                  | mk o t =>
                      simp [moduleScanPass, hlineP, hm, hscan]
                rw [hstep1]
                have htail := ih rest.length hrestlt (some b) rest toks rfl hlowerRest
                exact allModuleOpenersLower_cons_of_copy8 b rest
                  (moduleScanPass (some b) rest toks (rest.length + 1)).1
                  htail hlower (moduleScanPass_copy_head8 b rest toks)
            | some trip =>
                rcases trip with ⟨repl, rest', t1⟩
                have hshort : rest'.length < (b :: rest).length :=
                  moduleMatch_rest_shorter hm
                have hrest'lt : rest'.length < n := by omega
                have hlowerRest' : allModuleOpenersLower rest' := by
                  obtain ⟨matched, hdecomp, -, -, -, -⟩ := moduleMatch_term_measure
                    (b :: rest) repl rest' toks t1 hm
                  rw [hdecomp] at hlower
                  exact allModuleOpenersLower_suffix_of_append hlower
                have hnorm : moduleScanPass (lastConsumedByte (b :: rest) rest')
                      rest' t1 (rest.length + 1)
                    = moduleScanPass (lastConsumedByte (b :: rest) rest')
                        rest' t1 (rest'.length + 1) :=
                  moduleScanPass_fuel_sufficient _ _ _ _ (by omega)
                have hstep1 : (moduleScanPass prev (b :: rest) toks
                      ((b :: rest).length + 1)).1
                    = repl ++ (moduleScanPass
                        (lastConsumedByte (b :: rest) rest') rest' t1
                        (rest'.length + 1)).1 := by
                  cases hscan : moduleScanPass
                      (lastConsumedByte (b :: rest) rest') rest' t1
                      (rest'.length + 1) with
                  | mk o t =>
                      have hscan' : moduleScanPass
                            (lastConsumedByte (b :: rest) rest') rest' t1
                            (rest.length + 1) = (o, t) := by
                        rw [hnorm]
                        exact hscan
                      simp [moduleScanPass, hlineP, hm, hscan']
                rw [hstep1]
                have hrepllower := moduleMatch_repl_preserves_lower hm hlower
                have htaillower := ih rest'.length hrest'lt
                  (lastConsumedByte (b :: rest) rest') rest' t1 rfl hlowerRest'
                have hreplend := moduleMatch_repl_end_table hm
                rcases hreplend with hend10 | hend93
                · exact allModuleOpenersLower_append_end10 hrepllower htaillower hend10
                · exact allModuleOpenersLower_append_end93 hrepllower htaillower hend93
          · have hnotP : ¬ (prev = none ∨ prev = some 10) := by
              simpa using hline
            have hstep1 : (moduleScanPass prev (b :: rest) toks
                  ((b :: rest).length + 1)).1
                = b :: (moduleScanPass (some b) rest toks
                    (rest.length + 1)).1 := by
              cases hscan : moduleScanPass (some b) rest toks
                  (rest.length + 1) with
              | mk o t =>
                  simp [moduleScanPass, hnotP, hscan]
            rw [hstep1]
            have htail := ih rest.length hrestlt (some b) rest toks rfl hlowerRest
            exact allModuleOpenersLower_cons_of_copy8 b rest
              (moduleScanPass (some b) rest toks (rest.length + 1)).1
              htail hlower (moduleScanPass_copy_head8 b rest toks)

theorem moduleScanPass_preserves_allModuleOpenersLower (src : List Nat)
    (toks : List TokenEntry) (hlower : allModuleOpenersLower src) :
    allModuleOpenersLower (moduleScanPass none src toks (src.length + 1)).1 :=
  moduleScanPass_preserves_lower_aux src.length none src toks rfl hlower

theorem moduleScanPass_term_measure_le_of_lower (src : List Nat)
    (toks : List TokenEntry) (hlower : allModuleOpenersLower src) :
    moduleTermMeasure (moduleScanPass none src toks (src.length + 1)).1 ≤
      moduleTermMeasure src :=
  (moduleScanPass_term_measure_aux_lower src.length none src toks rfl hlower).1

theorem moduleScanPass_term_measure_lt_of_lower (src : List Nat)
    (toks : List TokenEntry) (hlower : allModuleOpenersLower src)
    (hne : (moduleScanPass none src toks (src.length + 1)).1 ≠ src) :
    moduleTermMeasure (moduleScanPass none src toks (src.length + 1)).1 <
      moduleTermMeasure src :=
  (moduleScanPass_term_measure_aux_lower src.length none src toks rfl hlower).2 hne

theorem modulePasses_reaches_fixpoint_of_lower_aux :
    ∀ n : Nat, ∀ (src : List Nat) (toks : List TokenEntry),
      allModuleOpenersLower src → moduleTermMeasure src < n →
      ∃ out t, modulePasses n src toks = (out, t) ∧ modulePassStable out t := by
  intro n
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro src toks hlower hmn
      cases n with
      | zero => omega
      | succ n' =>
          cases hp : moduleScanPass none src toks (src.length + 1) with
          | mk out1 t1 =>
              by_cases heq : out1 = src
              · have hpass : (moduleScanPass none src toks (src.length + 1)).1 = src := by
                  rw [hp]
                  exact heq
                have hst : modulePassStable src t1 := by
                  have h := moduleScanPass_stable_of_bytes_eq src toks hpass
                  rwa [hp] at h
                have hmp : modulePasses (n' + 1) src toks = (src, t1) := by
                  have h := modulePasses_eq_of_pass_eq n' src toks hpass
                  rwa [hp] at h
                exact ⟨src, t1, hmp, hst⟩
              · have hpassne : (moduleScanPass none src toks (src.length + 1)).1 ≠ src := by
                  rw [hp]
                  exact heq
                have hdec := moduleScanPass_term_measure_lt_of_lower src toks hlower hpassne
                rw [hp] at hdec
                dsimp only at hdec
                have hlower1 : allModuleOpenersLower out1 := by
                  have h := moduleScanPass_preserves_allModuleOpenersLower src toks hlower
                  rwa [hp] at h
                have hlt : moduleTermMeasure out1 < n' := by omega
                obtain ⟨out, t, hres, hstable⟩ := ih n' (by omega) out1 t1 hlower1 hlt
                refine ⟨out, t, ?_, hstable⟩
                have hb : (out1 == src) = false := by simp [heq]
                simp [modulePasses, hp, hb, hres]

theorem modulePasses_reaches_fixpoint_of_allModuleOpenersLower
    (src : List Nat) (toks : List TokenEntry)
    (hlower : allModuleOpenersLower src) :
    ∃ out t, modulePasses (moduleTermMeasure src + 1) src toks = (out, t) ∧
      modulePassStable out t :=
  modulePasses_reaches_fixpoint_of_lower_aux (moduleTermMeasure src + 1)
    src toks hlower (by omega)

theorem modulePasses_len_succ_fixpoint_of_allModuleOpenersLower
    (src : List Nat) (toks : List TokenEntry)
    (hlower : allModuleOpenersLower src) :
    ∃ out t, modulePasses (src.length + 1) src toks = (out, t) ∧
      modulePassStable out t :=
  modulePasses_reaches_fixpoint_of_lower_aux (src.length + 1) src toks hlower (by
    have hle := moduleTermMeasure_le_length src
    omega)

theorem moduleRule_fixpoint_of_allModuleOpenersLower (st : ParseState)
    (hlower : allModuleOpenersLower (byteForm st.work)) :
    ∃ out t, moduleRule st = { st with work := parseBytes out, tokens := t } ∧
      modulePassStable out t := by
  obtain ⟨out, t, hmp, hstable⟩ :=
    modulePasses_len_succ_fixpoint_of_allModuleOpenersLower
      (byteForm st.work) st.tokens hlower
  refine ⟨out, t, ?_, hstable⟩
  unfold moduleRule applyByteRule
  simp [hmp]

def moduleNonTermBase : List Nat := litBytes "[[MODULE a]]\n[[module c [[/module]]"

private def moduleNonTermTailPre : List Nat := litBytes "\n[[module c [[/module]]"
private def moduleNonTermBodyPre : List Nat := litBytes "[[module c "

private theorem moduleNonTermBase_head (tail : List Nat) :
    moduleHead (litBytes "[[module") (moduleNonTermBase ++ tail) =
      some ([97], [([], moduleNonTermTailPre ++ tail)]) := by
  simp [moduleHead, moduleNonTermBase, moduleNonTermTailPre, litBytes,
    matchLitCI, byteCiEq, swapByteCase, isWsByte, isModuleNameByte]

private theorem moduleNonTermBase_tail (tail : List Nat) :
    moduleTail (moduleNonTermTailPre ++ tail) = some (moduleNonTermBodyPre, tail) := by
  simp [moduleTail, moduleNonTermTailPre, moduleNonTermBodyPre, litBytes,
    matchLitCI, byteCiEq, swapByteCase, findSubCI]

private theorem moduleNonTermBase_insert :
    insertInlineOpenerNewlines moduleNonTermBase = moduleNonTermBase ++ [10] := by
  simp [insertInlineOpenerNewlines, insertInlineOpenerNewlinesGo, moduleHeadEnd,
    spacesThenNewline, moduleNonTermBase, litBytes, matchLitCI, byteCiEq,
    swapByteCase, findSub]

private theorem moduleNonTermBase_rewrite :
    rewriteModulePrefix (moduleNonTermBase ++ [10]) = moduleNonTermBase ++ [10] := by
  simp [rewriteModulePrefix, moduleNonTermBase, litBytes]

private theorem moduleNonTermBase_count :
    1 < countModuleOpeners none moduleNonTermBase (moduleNonTermBase.length + 1) := by
  decide

private theorem bytesContain_cons_false_of_not_mem (p : Nat) (ps body : List Nat)
    (hno : p ∉ body) : bytesContain (p :: ps) body = false := by
  induction body with
  | nil => simp [bytesContain]
  | cons b bs ih =>
      have hne : p ≠ b := fun h => hno (by simp [h])
      have hno' : p ∉ bs := fun h => hno (by simp [h])
      have hpref : (p :: ps).isPrefixOf (b :: bs) = false := by
        simp [List.isPrefixOf, hne]
      simp [bytesContain, hpref, ih hno']

private theorem bodyHasHtmlToken_false_of_no_255 (body : List Nat) (hno : 255 ∉ body)
    (toks : List TokenEntry) (i : Nat) : bodyHasHtmlToken body toks i = false := by
  induction toks generalizing i with
  | nil => rfl
  | cons t ts ih =>
      have hb : bytesContain (phBytes i) body = false := by
        unfold phBytes
        exact bytesContain_cons_false_of_not_mem 255 _ body hno
      simp [bodyHasHtmlToken, hb, ih (i + 1)]

private theorem moduleNonTermBase_match (tail : List Nat) (toks : List TokenEntry) :
    moduleMatch (moduleNonTermBase ++ tail) toks =
      some (moduleNonTermBase ++ [10], tail, toks) := by
  have hno255 : 255 ∉ moduleNonTermBodyPre := by decide
  have hhtml : bodyHasHtmlToken moduleNonTermBodyPre toks 0 = false :=
    bodyHasHtmlToken_false_of_no_255 _ hno255 toks 0
  rw [moduleMatch, moduleNonTermBase_head]
  simp [moduleTryCands, moduleNonTermBase_tail, hhtml, moduleNonTermBase_insert,
    moduleNonTermBase_rewrite, moduleNonTermBase_count]

private theorem moduleMatch_lf_head_none (tail : List Nat) (toks : List TokenEntry) :
    moduleMatch (10 :: tail) toks = none := by
  simp [moduleMatch, moduleHead, litBytes, matchLitCI, byteCiEq, swapByteCase]

private theorem moduleScanPass_replicate_lf_copy :
    ∀ (k fuel : Nat) (prev : Option Nat) (toks : List TokenEntry),
      k ≤ fuel →
      moduleScanPass prev (List.replicate k 10) toks fuel =
        (List.replicate k 10, toks) := by
  intro k
  induction k with
  | zero =>
      intro fuel prev toks hfuel
      cases fuel <;> rfl
  | succ k ih =>
      intro fuel prev toks hfuel
      cases fuel with
      | zero => omega
      | succ fuel =>
          rw [List.replicate_succ, moduleScanPass]
          split
          · rw [moduleMatch_lf_head_none]
            simp only
            rw [ih fuel (some 10) toks (Nat.le_of_succ_le_succ hfuel)]
          · simp only
            rw [ih fuel (some 10) toks (Nat.le_of_succ_le_succ hfuel)]

private theorem moduleNonTermBase_lastConsumed (tail : List Nat) :
    lastConsumedByte (moduleNonTermBase ++ tail) tail = some 93 := by
  unfold lastConsumedByte
  have htake : ((moduleNonTermBase ++ tail).take
      ((moduleNonTermBase ++ tail).length - tail.length)) = moduleNonTermBase := by
    have e : (moduleNonTermBase ++ tail).length - tail.length =
        moduleNonTermBase.length := by
      simp [List.length_append]
    rw [e]
    exact List.take_left
  rw [htake]
  simp [moduleNonTermBase, litBytes]

theorem moduleScanPass_nonTerm_orbit (k : Nat) (toks : List TokenEntry) :
    moduleScanPass none (moduleNonTermBase ++ List.replicate k 10) toks
      ((moduleNonTermBase ++ List.replicate k 10).length + 1) =
      (moduleNonTermBase ++ List.replicate (k + 1) 10, toks) := by
  let tail := List.replicate k 10
  change moduleScanPass none (moduleNonTermBase ++ tail) toks
      ((moduleNonTermBase ++ tail).length + 1) =
      (moduleNonTermBase ++ List.replicate (k + 1) 10, toks)
  simp [moduleScanPass, moduleNonTermBase_match, moduleNonTermBase_lastConsumed]
  have hlen : (moduleNonTermBase ++ tail).length = moduleNonTermBase.length + tail.length := by
    simp [List.length_append]
  have hcopy0 := moduleScanPass_replicate_lf_copy k
    (moduleNonTermBase.length + tail.length) (some 93) toks (by simp [tail])
  change moduleScanPass (some 93) tail toks (moduleNonTermBase.length + tail.length) = (tail, toks) at hcopy0
  have hcopy : moduleScanPass (some 93) tail toks ((moduleNonTermBase ++ tail).length) = (tail, toks) := by
    rwa [hlen]
  rw [hcopy0]
  simp [tail, List.replicate_succ, List.append_assoc, moduleNonTermBase, litBytes]


theorem modulePasses_nonTerm_orbit (fuel k : Nat) (toks : List TokenEntry) :
    modulePasses fuel (moduleNonTermBase ++ List.replicate k 10) toks =
      (moduleNonTermBase ++ List.replicate (k + fuel) 10, toks) := by
  induction fuel generalizing k with
  | zero =>
      simp [modulePasses]
  | succ fuel ih =>
      rw [modulePasses, moduleScanPass_nonTerm_orbit k toks]
      have hne : moduleNonTermBase ++ List.replicate (k + 1) 10 ≠
          moduleNonTermBase ++ List.replicate k 10 := by
        intro heq
        have hl := congrArg List.length heq
        simp [moduleNonTermBase, litBytes, List.length_append] at hl
      simp [hne]
      have hidx : k + 1 + fuel = k + (fuel + 1) := by omega
      rw [← hidx]
      exact ih (k + 1)

theorem modulePasses_not_uncond_fixpoint :
    ∃ src : List Nat, let (out, t1) := modulePasses (src.length + 1) src [];
      (moduleScanPass none out t1 (out.length + 1)).1 ≠ out := by
  refine ⟨moduleNonTermBase, ?_⟩
  dsimp
  let n := moduleNonTermBase.length + 1
  have hp : modulePasses n moduleNonTermBase [] =
      (moduleNonTermBase ++ List.replicate n 10, []) := by
    simpa [n] using modulePasses_nonTerm_orbit n 0 []
  have hs := moduleScanPass_nonTerm_orbit n []
  rw [hp]
  intro hout
  simp only at hout
  rw [hs] at hout
  have hl := congrArg List.length hout
  simp [moduleNonTermBase, litBytes, List.length_append] at hl

theorem moduleScanPass_no_universal_strict_measure :
    ¬ ∃ f : List Nat → Nat, ∀ (src : List Nat) (toks : List TokenEntry),
      let (out, _) := moduleScanPass none src toks (src.length + 1);
      out ≠ src → f out < f src := by
  rintro ⟨f, hf⟩
  let x : Nat → List Nat := fun k => moduleNonTermBase ++ List.replicate k 10
  have hstep : ∀ k, f (x (k + 1)) < f (x k) := by
    intro k
    have hs := moduleScanPass_nonTerm_orbit k []
    have hne : x (k + 1) ≠ x k := by
      intro heq
      have hl := congrArg List.length heq
      simp [x, moduleNonTermBase, litBytes, List.length_append] at hl
    have hfk := hf (x k) []
    rw [hs] at hfk
    exact hfk hne
  have hbound : ∀ k, f (x k) + k ≤ f (x 0) := by
    intro k
    induction k with
    | zero => simp
    | succ k ih =>
        have hs := hstep k
        omega
  have hb := hbound (f (x 0) + 1)
  omega

theorem moduleTermMeasure_stutter_witness :
    let s := moduleNonTermBase ++ [10]
    (moduleScanPass none s [] (s.length + 1)).1 ≠ s ∧
      moduleTermMeasure (moduleScanPass none s [] (s.length + 1)).1 =
        moduleTermMeasure s := by
  let s := moduleNonTermBase ++ [10]
  have hs : moduleScanPass none s [] (s.length + 1) =
      (moduleNonTermBase ++ [10, 10], []) := by
    simpa [s, List.replicate_succ] using moduleScanPass_nonTerm_orbit 1 []
  constructor
  · rw [hs]
    intro heq
    have hl := congrArg List.length heq
    simp [s, moduleNonTermBase, litBytes, List.length_append] at hl
  · rw [hs]
    decide


#print axioms count91_append
#print axioms count91_cons
#print axioms count91_cons_ten
#print axioms count91_phBytes
#print axioms count91_nil
#print axioms count91_take_le
#print axioms swapByteCase_eq_91
#print axioms mtu_byteCiEq
#print axioms byteCiEq_eq_91
#print axioms swapByteCase_eq_93
#print axioms byteCiEq_eq_93
#print axioms matchLitCI_count91_take
#print axioms matchLitCI_two_91
#print axioms go_props_aux
#print axioms insertInlineOpenerNewlines_count91
#print axioms insertInlineOpenerNewlines_length_ge
#print axioms insertInlineOpenerNewlines_eq_of_length_eq
#print axioms rewriteModulePrefix_count91
#print axioms rewriteModulePrefix_length_ge
#print axioms defense_count91
#print axioms defense_length_ge
#print axioms defense_strict_length
#print axioms moduleTail_spec
#print axioms takeWhile_drop
#print axioms moduleHead_cand_decomp
#print axioms take_two_append
#print axioms moduleTryCands_lex
#print axioms moduleTryCands_repl_shape
#print axioms moduleMatch_lex
#print axioms moduleScanPass_lex_aux
#print axioms moduleScanPass_lex_step
#print axioms moduleScanPass_count91_le
#print axioms moduleScanPass_claim_drops_aux
#print axioms moduleScanPass_stable_of_bytes_eq
#print axioms mtuCountPair_cons
#print axioms mtuCountPair_le_length
#print axioms mtuCountPair_add_le_length
#print axioms mtuCountPair_append_right_le
#print axioms mtuCountPair_append_error_bound
#print axioms mtuCountPair_append_snoc
#print axioms mtuCountPair_suffix_le_append
#print axioms mtuCountPair_append_eq_right_of_uncounted
#print axioms mtuOpenClose_exclusive
#print axioms mtuMeasure_le_length
#print axioms moduleTermMeasure_le_length
#print axioms mtu_take_append_of_le
#print axioms mtu_prefix_of_append_eq_append
#print axioms matchLitCI_snoc_decomp
#print axioms mtuOpenPair_occurrence_le_count
#print axioms count91_add_open_le_moduleTermMeasure
#print axioms moduleTermMeasure_lower_of_moduleHead_prefix
#print axioms moduleHead_matched_drop8_ws
#print axioms moduleScanPass_head_copy_of_prev_nonline
#print axioms mtuOpenPair_not_ten
#print axioms mtuCloseOpenPair_not_ten
#print axioms mtuCountPair_cons_copy_slack
#print axioms mtuCountPair_copy_tail_slack
#print axioms mtuCountPair_insert_lf_tail_slack
#print axioms mtuCopy_bit_le
#print axioms mtuOpenCopy_bit_le
#print axioms mtuCloseCopy_bit_le
#print axioms mtu_head_take_of_pos
#print axioms insertGo_head_preserved
#print axioms mtuTermPair_not_ten
#print axioms mtuTermPair_93_none
#print axioms mtuTermPair_93_lf
#print axioms mtuTermPair_93_of_ne_lf
#print axioms mtuTermPair_101_none
#print axioms mtuTermPair_101_of_ws
#print axioms mtuTermPair_101_digit54
#print axioms moduleTermMeasure_digits654_append
#print axioms spacesThenNewline_false_head_ne_lf
#print axioms rewriteModulePrefix_term_measure_exact
#print axioms rewriteModulePrefix_term_measure_exact_slack
#print axioms rewriteModulePrefix_term_measure_le_exact
#print axioms rewriteModulePrefix_term_measure_le
#print axioms mtuTermPair_false_of_ne_alphabet
#print axioms digitByte_ne_93
#print axioms digitByte_ne_101
#print axioms digitByte_ne_69
#print axioms phBytes_byte_ne_alphabet
#print axioms claimRepl_uncounted
#print axioms bodyHasCodeToken_nil_aux
#print axioms bodyHasCodeToken_nil
#print axioms moduleTermMeasure_append_snoc_lf
#print axioms moduleTermMeasure_claimPrefix_append
#print axioms insertGo_term_slack_aux
#print axioms insertInlineOpenerNewlines_term_slack
#print axioms insertInlineOpenerNewlines_term_measure_le
#print axioms insertInlineOpenerNewlines_term_measure_strict_of_length_lt
#print axioms rewriteModulePrefix_term_measure_le_any
#print axioms defense_term_measure_le
#print axioms defense_term_measure_strict_of_changed
#print axioms moduleTryCands_term_measure
#print axioms moduleTermMeasure_append_strict_of_margin3
#print axioms moduleTermMeasure_append_left_end_le
#print axioms moduleTermMeasure_append_strict_same_end
#print axioms insertGo_take_prefix_aux
#print axioms insertInlineOpenerNewlines_take_prefix
#print axioms mtu_take9_lit_ws_imp
#print axioms mtu_getLast_append_of_right_ne_nil
#print axioms insertGo_end_cases_aux
#print axioms insertInlineOpenerNewlines_end_cases
#print axioms defense_term_measure_exact_slack_lower
#print axioms matchLitCI_byteCiEq_at
#print axioms matchLitCI_transfer_take
#print axioms allModuleOpenersLower_drop
#print axioms allModuleOpenersLower_take
#print axioms mtuModuleOpenerSepByte_10
#print axioms mtuModuleOpenerSepByte_93
#print axioms mtuModuleOpenerSepByte_52
#print axioms mtuModuleOpenerSepByte_53
#print axioms mtuModuleOpenerSepByte_54
#print axioms allModuleOpenersLower_append_of_sep_end
#print axioms allModuleOpenersLower_append_end10
#print axioms allModuleOpenersLower_append_end93
#print axioms allModuleOpenersLower_of_count91_eq_zero
#print axioms moduleTail_end_spec
#print axioms rewriteModulePrefix_getLast?
#print axioms moduleTryCands_process_shape
#print axioms moduleMatch_process_shape
#print axioms swapByteCase_eq_of_not_ascii_letter
#print axioms byteCiEq_eq_10
#print axioms count10_cons
#print axioms matchLitCI_count10_take
#print axioms moduleScanPass_take_eq_take_of_no_lf
#print axioms moduleScanPass_copy_prefix7_of_match_prev91
#print axioms moduleScanPass_copy_step_of_prev_nonline
#print axioms moduleTermMeasure_append_strict_left1_lf
#print axioms moduleTermMeasure_append_strict_lf_input93
#print axioms defense_append_term_measure_strict
#print axioms mtu_take_length_sub_of_append
#print axioms lastConsumedByte_eq_getLast_of_append
#print axioms moduleMatch_end_table
#print axioms moduleMatch_term_measure
#print axioms moduleMatch_term_measure_with_ends
#print axioms allModuleOpenersLower_cons_of_ne91
#print axioms allModuleOpenersLower_cons_of_copy8
#print axioms moduleHeadEnd_take_end93
#print axioms insertGo_take_eq_take_of_no_lf
#print axioms insertGo_copy_prefix7_of_match_prev91
#print axioms allModuleOpenersLower_module654
#print axioms mtu_rewriteModulePrefix_keep
#print axioms mtu_rewriteModulePrefix_exact
#print axioms rewriteModulePrefix_preserves_lower
#print axioms insertGo_copy_head8
#print axioms insertGo_preserves_lower_aux
#print axioms insertInlineOpenerNewlines_preserves_lower
#print axioms defenseReplacement_preserves_lower
#print axioms moduleScanPass_copy_head8
#print axioms moduleScanPass_head_eq_input_of_prev_nonline
#print axioms allModuleOpenersLower_suffix_of_append
#print axioms count91_claimWrapper
#print axioms claimWrapper_end10
#print axioms moduleMatch_repl_preserves_lower
#print axioms moduleMatch_repl_end_table
#print axioms moduleScanPass_term_measure_aux_lower
#print axioms moduleScanPass_preserves_lower_aux
#print axioms moduleScanPass_preserves_allModuleOpenersLower
#print axioms moduleScanPass_term_measure_le_of_lower
#print axioms moduleScanPass_term_measure_lt_of_lower
#print axioms modulePasses_reaches_fixpoint_of_lower_aux
#print axioms modulePasses_reaches_fixpoint_of_allModuleOpenersLower
#print axioms modulePasses_len_succ_fixpoint_of_allModuleOpenersLower
#print axioms moduleRule_fixpoint_of_allModuleOpenersLower
#print axioms moduleScanPass_nonTerm_orbit
#print axioms modulePasses_nonTerm_orbit
#print axioms modulePasses_not_uncond_fixpoint
#print axioms moduleScanPass_no_universal_strict_measure
#print axioms moduleTermMeasure_stutter_witness

end LeanFtml.ModuleTerminationUncondProof
