import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml

namespace ModuleDefenseLemmas

/-- Take across an append when the prefix length is at most the requested index. -/
theorem take_append_eq (as bs : List Nat) (n : Nat) (h : as.length ≤ n) :
    (as ++ bs).take n = as ++ bs.take (n - as.length) := by
  induction as generalizing n with
  | nil => simp
  | cons a as ih =>
      cases n with
      | zero => simp at h
      | succ n =>
          have h' : as.length ≤ n := Nat.succ_le_succ_iff.mp h
          simpa using ih n h'

/-- Drop across an append when the prefix length is at most the requested index. -/
theorem drop_append_eq (as bs : List Nat) (n : Nat) (h : as.length ≤ n) :
    (as ++ bs).drop n = bs.drop (n - as.length) := by
  induction as generalizing n with
  | nil => simp
  | cons a as ih =>
      cases n with
      | zero => simp at h
      | succ n =>
          have h' : as.length ≤ n := Nat.succ_le_succ_iff.mp h
          simpa using ih n h'

/-- A successful case-insensitive literal match consumes exactly the literal length. -/
theorem matchLitCI_eq_some_decomp (pat src rest : List Nat) (h : matchLitCI pat src = some rest) :
    ∃ pre : List Nat, pre.length = pat.length ∧ pre ++ rest = src := by
  induction pat generalizing src with
  | nil =>
      exact ⟨[], by simp, by simpa [matchLitCI] using h.symm⟩
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p
          · have htail : matchLitCI pat xs = some rest := by simpa [matchLitCI, hb] using h
            rcases ih xs htail with ⟨pre, hlen, happ⟩
            exact ⟨x :: pre, by simp [hlen], by simp [happ]⟩
          · simp [matchLitCI, hb] at h

/-- A successful substring search locates the pattern: the prefix plus the pattern is a prefix, and the hit fits inside the list. -/
theorem findSub_take_append (pat xs : List Nat) (c : Nat) (h : findSub pat xs = some c) :
    xs.take (c + pat.length) = xs.take c ++ pat ∧ c + pat.length ≤ xs.length := by
  induction xs generalizing c with
  | nil =>
      cases pat with
      | nil =>
          have hc : 0 = c := by simpa [findSub] using h
          subst c
          simp
      | cons p pat => simp [findSub] at h
  | cons x xs ih =>
      by_cases hpref : (x :: xs).take pat.length == pat
      · have hc : 0 = c := by simpa [findSub, hpref] using h
        subst c
        have htake : (x :: xs).take pat.length = pat := by simpa using hpref
        constructor
        · simpa using htake
        · rw [← htake, List.length_take]
          simpa using (Nat.min_le_right pat.length (x :: xs).length)
      · cases hfound : findSub pat xs with
        | none => simp [findSub, hpref, hfound] at h
        | some c' =>
            have hcsucc : c' + 1 = c := by simpa [findSub, hpref, hfound] using h
            subst c
            rcases ih c' hfound with ⟨htake, hlen⟩
            constructor
            · have heq : c' + 1 + pat.length = (c' + pat.length) + 1 := by omega
              rw [heq]
              simp [htake]
            · simpa [Nat.add_assoc, Nat.add_comm, Nat.add_left_comm] using Nat.succ_le_succ hlen

/-- Exact characterization of the lookahead: true exactly when the list begins with a (possibly empty) run of spaces followed by a newline. -/
theorem spacesThenNewline_eq_true_iff (bs : List Nat) :
    spacesThenNewline bs = true ↔ ∃ (k : Nat) (t : List Nat), bs = List.replicate k 32 ++ 10 :: t := by
  induction bs with
  | nil =>
      constructor
      · intro h
        simp [spacesThenNewline] at h
      · rintro ⟨k, t, h⟩
        cases k <;> simp at h
  | cons b rest ih =>
      by_cases h10 : b = 10
      · subst b
        constructor
        · intro _; exact ⟨0, rest, by simp⟩
        · intro _; simp [spacesThenNewline]
      · by_cases h32 : b = 32
        · subst b
          constructor
          · intro h
            have hr : spacesThenNewline rest = true := by simpa [spacesThenNewline] using h
            rcases ih.mp hr with ⟨k, t, ht⟩
            exact ⟨k + 1, t, by simp [List.replicate, ht]⟩
          · rintro ⟨k, t, h⟩
            cases k with
            | zero => simp at h
            | succ k =>
                have hr : rest = List.replicate k 32 ++ 10 :: t := by simpa [List.replicate] using h
                have : spacesThenNewline rest = true := ih.mpr ⟨k, t, hr⟩
                simpa [spacesThenNewline] using this
        · constructor
          · intro h
            simp [spacesThenNewline, h10, h32] at h
          · rintro ⟨k, t, h⟩
            exfalso
            cases k with
            | zero =>
                simp at h
                exact h10 h.1
            | succ k =>
                simp [List.replicate] at h
                exact h32 h.1

/-- Soundness of the head end scanner: a successful result n is a positive in-range length whose prefix ends in `]]` and whose drop is the tail after that head, located by the first `]]` at offset c after the eight literal bytes. -/
theorem moduleHeadEnd_eq_some_spec (src : List Nat) (n : Nat) (h : moduleHeadEnd src = some n) :
    0 < n ∧ n ≤ src.length ∧
      (∃ c : Nat, n = 8 + c + 2 ∧
        src.take n = src.take (8 + c) ++ litBytes "]]" ∧
        src.drop n = (src.drop 8).drop (c + 2)) := by
  have hlit8 : (litBytes "[[module").length = 8 := by decide
  have hlit2 : (litBytes "]]").length = 2 := by decide
  unfold moduleHeadEnd at h
  cases hm : matchLitCI (litBytes "[[module") src with
  | none => simp [hm] at h
  | some tailSrc =>
      rcases matchLitCI_eq_some_decomp (litBytes "[[module") src tailSrc hm with ⟨pre, hprelen, hpreappend⟩
      have hpre8 : pre.length = 8 := by omega
      subst src
      simp [hm] at h
      have hdrop8 : (pre ++ tailSrc).drop 8 = tailSrc := by
        simp [hpre8]
      cases hf : findSub (litBytes "]]") ((pre ++ tailSrc).drop 8) with
      | none => simp [hf] at h
      | some c =>
          have hres : ¬ 93 ∈ (((pre ++ tailSrc).drop 8).take c) ∧ 8 + c + 2 = n := by
            simpa [hf] using h
          have hn : n = 8 + c + 2 := hres.2.symm
          subst n
          rw [hdrop8] at hf
          rw [hdrop8]
          rcases findSub_take_append (litBytes "]]") tailSrc c hf with ⟨htake0, hlen0⟩
          have htake : tailSrc.take (c + 2) = tailSrc.take c ++ litBytes "]]" := by simpa [hlit2] using htake0
          have hlen : c + 2 ≤ tailSrc.length := by simpa [hlit2] using hlen0
          have htakeN : (pre ++ tailSrc).take (8 + c + 2) = pre ++ tailSrc.take (c + 2) := by
            have htmp := take_append_eq pre tailSrc (8 + c + 2) (by omega)
            simpa [hpre8, Nat.add_assoc, Nat.add_comm, Nat.add_left_comm] using htmp
          have htakePre : (pre ++ tailSrc).take (8 + c) = pre ++ tailSrc.take c := by
            have htmp := take_append_eq pre tailSrc (8 + c) (by omega)
            simpa [hpre8] using htmp
          have hdropN : (pre ++ tailSrc).drop (8 + c + 2) = tailSrc.drop (c + 2) := by
            have htmp := drop_append_eq pre tailSrc (8 + c + 2) (by omega)
            simpa [hpre8, Nat.add_assoc, Nat.add_comm, Nat.add_left_comm] using htmp
          refine ⟨by omega, ?_, ⟨c, rfl, ?_, hdropN⟩⟩
          · have hsrclen : (pre ++ tailSrc).length = 8 + tailSrc.length := by simp [hpre8]
            omega
          · rw [htakeN, htakePre, htake]
            rw [List.append_assoc]

/-- A detected head strictly shortens the subject, so each recursive step consumes at least one byte. -/
theorem go_head_consumes (src : List Nat) (n : Nat) (hm : moduleHeadEnd src = some n) :
    0 < n ∧ (src.drop n).length < src.length := by
  rcases moduleHeadEnd_eq_some_spec src n hm with ⟨hnpos, hnle, htend, hdrop⟩
  constructor
  · exact hnpos
  · rw [List.length_drop]
    omega

/-- One step at a line-start head whose tail is spaces-then-newline copies the head unchanged. -/
theorem go_step_line_terminated (prev : Option Nat) (src : List Nat) (fuel : Nat)
    (hfuel : 0 < fuel) (hstart : prev == none || prev == some 10) (n : Nat)
    (hm : moduleHeadEnd src = some n) (hsn : spacesThenNewline (src.drop n) = true) :
    insertInlineOpenerNewlinesGo prev src fuel =
      src.take n ++ insertInlineOpenerNewlinesGo (some 93) (src.drop n) (fuel - 1) := by
  cases src with
  | nil =>
      rcases moduleHeadEnd_eq_some_spec [] n hm with ⟨hnpos, hnle, htend⟩
      simp at hnle
      omega
  | cons b rest =>
      cases fuel with
      | zero => simp at hfuel
      | succ fuel' =>
          have hstartp : prev = none ∨ prev = some 10 := by simpa using hstart
          rcases hstartp with rfl | rfl <;> simp [insertInlineOpenerNewlinesGo, hm, hsn]

/-- One step at a line-start inline head inserts exactly one LF right after the head. -/
theorem go_step_inline_inserts_lf (prev : Option Nat) (src : List Nat) (fuel : Nat)
    (hfuel : 0 < fuel) (hstart : prev == none || prev == some 10) (n : Nat)
    (hm : moduleHeadEnd src = some n) (hsn : spacesThenNewline (src.drop n) = false) :
    insertInlineOpenerNewlinesGo prev src fuel =
      src.take n ++ [10] ++ insertInlineOpenerNewlinesGo (some 10) (src.drop n) (fuel - 1) := by
  cases src with
  | nil =>
      rcases moduleHeadEnd_eq_some_spec [] n hm with ⟨hnpos, hnle, htend⟩
      simp at hnle
      omega
  | cons b rest =>
      cases fuel with
      | zero => simp at hfuel
      | succ fuel' =>
          have hstartp : prev = none ∨ prev = some 10 := by simpa using hstart
          rcases hstartp with rfl | rfl <;> simp [insertInlineOpenerNewlinesGo, hm, hsn]

/-- Exhaustive one-step shape: at a detected line-start head an LF is inserted exactly in the false branch of spacesThenNewline, and nowhere else in that step. -/
theorem go_step_shape (prev : Option Nat) (src : List Nat) (fuel : Nat)
    (hfuel : 0 < fuel) (hstart : prev == none || prev == some 10) (n : Nat)
    (hm : moduleHeadEnd src = some n) :
    (spacesThenNewline (src.drop n) = true ∧
      insertInlineOpenerNewlinesGo prev src fuel =
        src.take n ++ insertInlineOpenerNewlinesGo (some 93) (src.drop n) (fuel - 1)) ∨
    (spacesThenNewline (src.drop n) = false ∧
      insertInlineOpenerNewlinesGo prev src fuel =
        src.take n ++ [10] ++ insertInlineOpenerNewlinesGo (some 10) (src.drop n) (fuel - 1)) := by
  cases hs : spacesThenNewline (src.drop n) <;>
    simp [hs, go_step_line_terminated prev src fuel hfuel hstart n hm,
      go_step_inline_inserts_lf prev src fuel hfuel hstart n hm]

/-- Fuel irrelevance by strong induction on the subject length: every recursive call goes to a strictly shorter subject, so any fuel at least the subject length computes the same answer. -/
theorem go_fuel_irrelevant_aux : ∀ (N : Nat) (prev : Option Nat) (src : List Nat),
    src.length = N → ∀ {f g : Nat}, N ≤ f → N ≤ g →
      insertInlineOpenerNewlinesGo prev src f = insertInlineOpenerNewlinesGo prev src g := by
  intro N
  induction N using Nat.strongRecOn with
  | ind N ih =>
      intro prev src hsrc f g hf hg
      cases src with
      | nil =>
          cases f <;> cases g <;> simp [insertInlineOpenerNewlinesGo]
      | cons b rest =>
          have hN_eq : N = rest.length + 1 := by simpa using hsrc.symm
          have hNpos : 0 < N := by omega
          cases f with
          | zero => omega
          | succ f' =>
              cases g with
              | zero => omega
              | succ g' =>
                  by_cases hstart : prev == none || prev == some 10
                  · have hstartp : prev = none ∨ prev = some 10 := by simpa using hstart
                    cases hm : moduleHeadEnd (b :: rest) with
                    | none =>
                        have hf' : rest.length ≤ f' := by omega
                        have hg' : rest.length ≤ g' := by omega
                        have hrec := ih rest.length (by omega) (some b) rest rfl hf' hg'
                        simpa [insertInlineOpenerNewlinesGo, hstartp, hm] using hrec
                    | some n =>
                        have hspec := moduleHeadEnd_eq_some_spec (b :: rest) n hm
                        rcases hspec with ⟨hnpos, hnle, htend, hdrop⟩
                        let after : List Nat := (b :: rest).drop n
                        have hafter_eq : after.length = N - n := by simp [after, hsrc]
                        have hafterlt : after.length < N := by
                          rw [hafter_eq]
                          exact Nat.sub_lt_of_pos_le hnpos (by simpa [hsrc] using hnle)
                        have hf' : after.length ≤ f' := by omega
                        have hg' : after.length ≤ g' := by omega
                        by_cases hsn : spacesThenNewline after
                        · have hrec := ih after.length hafterlt (some 93) after rfl hf' hg'
                          simpa [insertInlineOpenerNewlinesGo, hstartp, hm, after, hsn] using hrec
                        · have hrec := ih after.length hafterlt (some 10) after rfl hf' hg'
                          simpa [insertInlineOpenerNewlinesGo, hstartp, hm, after, hsn] using hrec
                  · have hstartp : ¬ (prev = none ∨ prev = some 10) := by simpa using hstart
                    have hf' : rest.length ≤ f' := by omega
                    have hg' : rest.length ≤ g' := by omega
                    have hrec := ih rest.length (by omega) (some b) rest rfl hf' hg'
                    simpa [insertInlineOpenerNewlinesGo, hstartp] using hrec

/-- Fuel at least the subject length gives one canonical result, independent of the exact fuel. -/
theorem go_fuel_irrelevant (prev : Option Nat) (src : List Nat) {f g : Nat}
    (hf : src.length ≤ f) (hg : src.length ≤ g) :
    insertInlineOpenerNewlinesGo prev src f = insertInlineOpenerNewlinesGo prev src g :=
  go_fuel_irrelevant_aux src.length prev src rfl hf hg

/-- Fuel src.length + 1 never truncates a pass: any extra fuel computes the same replacement. -/
theorem insertInlineOpenerNewlines_fuel_sufficient (src : List Nat) (k : Nat) :
    insertInlineOpenerNewlinesGo none src (src.length + 1 + k) = insertInlineOpenerNewlines src := by
  unfold insertInlineOpenerNewlines
  symm
  apply go_fuel_irrelevant
  · omega
  · omega

#print axioms take_append_eq
#print axioms drop_append_eq
#print axioms matchLitCI_eq_some_decomp
#print axioms findSub_take_append
#print axioms spacesThenNewline_eq_true_iff
#print axioms moduleHeadEnd_eq_some_spec
#print axioms go_head_consumes
#print axioms go_step_line_terminated
#print axioms go_step_inline_inserts_lf
#print axioms go_step_shape
#print axioms go_fuel_irrelevant_aux
#print axioms go_fuel_irrelevant
#print axioms insertInlineOpenerNewlines_fuel_sufficient

end ModuleDefenseLemmas

end LeanFtml
