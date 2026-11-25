/- # ModuleLexStepProof: a universal lexicographic step law for the
    Module scan pass.

    The adopted policy's proposed termination measure for the Module
    family, `moduleMeasure` (line-start opener heads counted under
    two initial predecessor bytes), is REFUTED on main:
    `ModuleMeasureStepProof.not_universal_measure_step` shows one
    `moduleScanPass` raising it 1 -> 2, because a claim replacement
    ends in `[10, 10]`, promoting a previously mid-line opener to a
    line start. This file replaces that step law with a true one.

    The potential is the number of `[` bytes, `count91 src`, paired
    lexicographically with negative length:

    * a CLAIM consumes a matched text whose head contributes two
      `[` bytes, and emits a replacement (`[10, 10]`, a placeholder
      of digits and `0xFF` delimiters, `[10, 10]`, and optionally the
      body and authored closer verbatim) whose `[` count is at most
      the matched text's minus two;
    * a DEFENSE emits `rewriteModulePrefix
      (insertInlineOpenerNewlines matched)`, which preserves the
      `[` count exactly (insertions add only byte 10; the
      `[[module` -> `[[module654` rename keeps both `[` bytes), and
      strictly grows the length whenever it changes the text;
    * a copy step moves one byte verbatim.

    Single-byte counting is exactly additive over appends, so no
    window or straddle analysis is needed. The headline scan law
    (`moduleScanPass_lex_step`) is universal: it holds for every
    source and token table. The driver theorem
    (`modulePasses_reaches_fixpoint_of_lex`) then mirrors the
    fleet's conditional fixpoint driver with the potential
    `count91 src * (B + 1) + (B - src.length)`: under the single
    remaining hypothesis that pass outputs stay within a length
    bound `B` along the run, `modulePasses` reaches a byte-stable
    fixpoint (in the fleet's `modulePassStable` sense, whose
    stability component is proved here unconditionally in
    `moduleScanPass_stable_of_bytes_eq`). The one obligation left
    open for unconditional termination at the mirror's own fuel
    `src.length + 1` is that length bound: the head-charging
    argument that each opener head is renamed at most once and
    receives at most one inserted newline across a whole run.

    The file closes with a sharpened counterexample family for the
    old measure: a three-module chain on which the old measure
    still rises 1 -> 2 and which needs exactly two changing
    passes, kernel-checked by `decide`, while the new potential
    strictly drops on the first pass. -/

import LeanFtml.ModuleTerminationProof
import LeanFtml.ModuleMeasureStepProof
import LeanFtml.ModuleTokenTableProof
import LeanFtml.ModulePassTokenStabilityProof
import LeanFtml.ModuleCandidatesProof
import LeanFtml.ModuleDefenseLemmas
import LeanFtml.ModuleDefenseRewriteProof
import LeanFtml.ModuleFindSubProof
import LeanFtml.ModuleCloserCompletenessProof

namespace LeanFtml

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

/-- Under a case-insensitive byte match, one side is byte 91 iff the
    other is: 91 is not a letter, and case swapping only moves
    letters within the letter ranges. -/
theorem byteCiEq_eq_91 {x p : Nat} (h : byteCiEq x p = true) :
    (x = 91 ↔ p = 91) := by
  rw [cert_byteCiEq] at h
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

/-! ## The driver: fixpoint under a run length bound -/

/-- The lexicographic potential against a length bound `B`: each
    `[` is worth `B + 1` lengths, so a claim (one `[` fewer, in
    fact two) always pays for any bounded length growth, and a
    defense pays through the remaining length headroom. -/
def lexPotential (B : Nat) (src : List Nat) : Nat :=
  count91 src * (B + 1) + (B - src.length)

theorem modulePasses_reaches_fixpoint_of_lex_aux (B : Nat)
    (hB : ∀ (s : List Nat) (t : List TokenEntry), s.length ≤ B →
      (moduleScanPass none s t (s.length + 1)).1.length ≤ B) :
    ∀ n : Nat, ∀ (src : List Nat) (toks : List TokenEntry),
      src.length ≤ B → lexPotential B src < n →
      ∃ out t, modulePasses n src toks = (out, t) ∧
        modulePassStable out t := by
  intro n
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro src toks hsrcB hpot
      cases n with
      | zero => omega
      | succ n' =>
          cases hp : moduleScanPass none src toks (src.length + 1) with
          | mk out1 t1 =>
              by_cases heq : out1 = src
              · have hpass : (moduleScanPass none src toks
                    (src.length + 1)).1 = src := by
                  rw [hp]
                  exact heq
                have hst : modulePassStable src t1 := by
                  have h := moduleScanPass_stable_of_bytes_eq src toks hpass
                  rwa [hp] at h
                have hmp : modulePasses (n' + 1) src toks = (src, t1) := by
                  have h := modulePasses_eq_of_pass_eq n' src toks hpass
                  rwa [hp] at h
                exact ⟨src, t1, hmp, hst⟩
              · have hlex := moduleScanPass_lex_aux src.length none src toks rfl
                  (by
                    rw [hp]
                    exact heq)
                rw [hp] at hlex
                dsimp only at hlex
                have hout1len : out1.length ≤ B := by
                  have h := hB src toks hsrcB
                  rwa [hp] at h
                have hpot' : lexPotential B out1 < n' := by
                  unfold lexPotential at hpot ⊢
                  rcases hlex with hlt | ⟨heqc, hlen⟩
                  · have hkey : (count91 out1 + 1) * (B + 1)
                        ≤ count91 src * (B + 1) :=
                      Nat.mul_le_mul (by omega) (Nat.le_refl _)
                    rw [Nat.add_mul, Nat.one_mul] at hkey
                    omega
                  · have hmul : count91 out1 * (B + 1)
                        = count91 src * (B + 1) := by rw [heqc]
                    omega
                obtain ⟨out, t, hres, hstable⟩ :=
                  ih n' (by omega) out1 t1 hout1len hpot'
                refine ⟨out, t, ?_, hstable⟩
                have hb : (out1 == src) = false := by simp [heq]
                simp [modulePasses, hp, hb, hres]

/-- Conditional fixpoint theorem for the Module rewrite sequence,
    with the true step law: given a length bound `B` closed under
    one pass, `modulePasses` at fuel `lexPotential B src + 1`
    reaches a byte-stable fixpoint. The sole remaining obligation
    for unconditional termination at the mirror's own fuel
    `src.length + 1` is the bound `B` itself (the head-charging
    argument); the step law, previously the refuted half of the
    fleet's `moduleMeasureStepOK`, is now proved. -/
theorem modulePasses_reaches_fixpoint_of_lex (B : Nat)
    (hB : ∀ (s : List Nat) (t : List TokenEntry), s.length ≤ B →
      (moduleScanPass none s t (s.length + 1)).1.length ≤ B)
    (src : List Nat) (toks : List TokenEntry) (hsrc : src.length ≤ B) :
    ∃ out t, modulePasses (lexPotential B src + 1) src toks = (out, t) ∧
      modulePassStable out t :=
  modulePasses_reaches_fixpoint_of_lex_aux B hB (lexPotential B src + 1)
    src toks hsrc (by omega)

/-! ## The sharpened counterexample family for the old measure -/

/-- A three-module chain: two claimable modules with bodies, then a
    bare trailing module. One pass claims only the first module and
    promotes the second to a line start; the trailing module is
    promoted by the second pass but can never be claimed (its tail
    is empty), so the chain takes exactly two changing passes. -/
def chainSrc3 : List Nat :=
  litBytes "[[module a]]\nX[[/module]][[module b]]\nY[[/module]][[module c]]"

/-- The old measure still rises 1 -> 2 on the chain's first pass:
    the refutation is not an artifact of the two-module example. -/
theorem chain3_measure_rises :
    moduleMeasure chainSrc3 = 1 ∧
    moduleMeasure (moduleScanPass none chainSrc3 [] (chainSrc3.length + 1)).1
      = 2 := by
  decide

/-- The chain's pass structure, kernel-checked: exactly two
    changing passes to the fixpoint, stability there, agreement of
    all larger fuels, and a strict `[`-count drop on the first
    pass (the new law, on the same source where the old measure
    rises). -/
theorem chain3_pass_structure :
    (modulePasses 1 chainSrc3 []).1 ≠ (modulePasses 2 chainSrc3 []).1 ∧
    (modulePasses 2 chainSrc3 []).1 = (modulePasses 9 chainSrc3 []).1 ∧
    (moduleScanPass none (modulePasses 2 chainSrc3 []).1
        (modulePasses 2 chainSrc3 []).2
        ((modulePasses 2 chainSrc3 []).1.length + 1)).1
      = (modulePasses 2 chainSrc3 []).1 ∧
    count91 (moduleScanPass none chainSrc3 [] (chainSrc3.length + 1)).1
      < count91 chainSrc3 := by
  decide

/-- The chain's fixpoint is stable in the fleet's sense. -/
theorem chain3_fixpoint_stable :
    modulePassStable (modulePasses 2 chainSrc3 []).1
      (modulePasses 2 chainSrc3 []).2 :=
  chain3_pass_structure.2.2.1

end LeanFtml
