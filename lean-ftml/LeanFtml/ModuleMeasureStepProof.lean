import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000
set_option maxRecDepth 400000

namespace LeanFtml
namespace ModuleMeasureStepProof

/-- Local copy of the policy measure, so this file stays standalone. It is the sum of line-start opener heads and opener heads seen after the first byte. -/
def moduleMeasure (src : List Nat) : Nat :=
  countModuleOpeners none src (src.length + 1) +
    countModuleOpeners (some 32) src (src.length + 1)

/-- Local copy of the byte-stability predicate: modulePasses stops exactly on this byte test. -/
def modulePassStable (src : List Nat) (toks : List TokenEntry) : Prop :=
  (moduleScanPass none src toks (src.length + 1)).1 = src

/-- The opener literal starts with the ASCII byte for '[', case folding fixes it. -/
theorem matchLitCI_opener_head {src rest}
    (h : matchLitCI (litBytes "[[module") src = some rest) : src.head? = some 91 := by
  cases src with
  | nil => simp [matchLitCI, litBytes] at h
  | cons b bs =>
      by_cases hb91 : b = 91
      · simp [hb91]
      · have hci : byteCiEq b 91 = false := by
          simp [byteCiEq, swapByteCase, hb91]
        have hm : matchLitCI (litBytes "[[module") (b :: bs) = none := by
          simp [matchLitCI, litBytes, hci]
        rw [hm] at h
        contradiction

/-- A successful moduleHead therefore starts with '['. -/
theorem moduleHead_head_91 {src name cands}
    (h : moduleHead (litBytes "[[module") src = some (name, cands)) : src.head? = some 91 := by
  unfold moduleHead at h
  cases hm : matchLitCI (litBytes "[[module") src with
  | none => simp [hm] at h
  | some _ => exact matchLitCI_opener_head hm

/-- Conversely, a byte string whose head is not '[' cannot open a module head. -/
theorem moduleHead_eq_none_of_head_ne_91 {xs : List Nat} (h : xs.head? ≠ some 91) :
    moduleHead (litBytes "[[module") xs = none := by
  cases xs with
  | nil => simp [moduleHead, matchLitCI, litBytes]
  | cons b bs =>
      have hb : b ≠ 91 := by simpa using h
      have hci : byteCiEq b 91 = false := by
        simp [byteCiEq, swapByteCase, hb]
      have hm : matchLitCI (litBytes "[[module") (b :: bs) = none := by
        simp [matchLitCI, litBytes, hci]
      simp [moduleHead, hm]

/-- A successful moduleMatch gives a moduleHead with at least one attribute candidate. -/
theorem moduleMatch_head_nonempty {src toks repl rest' t1}
    (h : moduleMatch src toks = some (repl, rest', t1)) :
    ∃ name attr after more,
      moduleHead (litBytes "[[module") src = some (name, (attr, after) :: more) := by
  unfold moduleMatch at h
  cases hm : moduleHead (litBytes "[[module") src with
  | none => simp [hm] at h
  | some pair =>
      rcases pair with ⟨name, cands⟩
      cases cands with
      | nil => simp [moduleTryCands, hm] at h
      | cons cand more =>
          rcases cand with ⟨attr, after⟩
          exact ⟨name, attr, after, more, by simpa [hm]⟩

/-- A head with a candidate contributes at least one to the line-start opener count. -/
theorem countModuleOpeners_pos_of_head (src name attr after more fuel)
    (h : moduleHead (litBytes "[[module") src = some (name, (attr, after) :: more))
    (hfuel : 0 < fuel) : 0 < countModuleOpeners none src fuel := by
  cases fuel with
  | zero => omega
  | succ f =>
      cases src with
      | nil => simp [moduleHead, matchLitCI, litBytes] at h
      | cons b bs =>
          simp [countModuleOpeners, h]
          omega

/-- Any successful single match happens at a source that already has positive measure. -/
theorem measure_pos_of_moduleMatch {src toks repl rest' t1}
    (h : moduleMatch src toks = some (repl, rest', t1)) : 0 < moduleMeasure src := by
  obtain ⟨name, attr, after, more, hh⟩ := moduleMatch_head_nonempty h
  have hp := countModuleOpeners_pos_of_head src name attr after more (src.length + 1) hh (by omega)
  dsimp [moduleMeasure]
  omega

/-- Every character produced by decimal digitChar is a digit. -/
theorem toDigitsCore10_isDigit (fuel n : Nat) (acc : List Char)
    (hacc : ∀ c ∈ acc, c.isDigit = true) :
    ∀ c ∈ Nat.toDigitsCore 10 fuel n acc, c.isDigit = true := by
  induction fuel generalizing n acc with
  | zero => simpa [Nat.toDigitsCore] using hacc
  | succ fuel ih =>
      intro c hc
      by_cases hzero : n / 10 = 0
      · have hc' : c = Nat.digitChar (n % 10) ∨ c ∈ acc := by
          simpa [Nat.toDigitsCore, hzero] using hc
        rcases hc' with hcchar | hcacc
        · rw [hcchar]
          have hmod : n % 10 < 10 := Nat.mod_lt n (by decide)
          simpa [hmod] using (Nat.isDigit_digitChar (n := n % 10))
        · exact hacc c hcacc
      · have hc' : c ∈ Nat.toDigitsCore 10 fuel (n / 10)
            (Nat.digitChar (n % 10) :: acc) := by
          simpa [Nat.toDigitsCore, hzero] using hc
        apply ih (n := n / 10) (acc := Nat.digitChar (n % 10) :: acc)
        · intro x hx
          have hx' : x = Nat.digitChar (n % 10) ∨ x ∈ acc := by simpa using hx
          rcases hx' with hxchar | hxacc
          · rw [hxchar]
            have hmod : n % 10 < 10 := Nat.mod_lt n (by decide)
            simpa [hmod] using (Nat.isDigit_digitChar (n := n % 10))
          · exact hacc x hxacc
        · exact hc'

/-- Every character of a decimal rendering is a digit. -/
theorem toDigits_all_isDigit (n : Nat) : ∀ c ∈ Nat.toDigits 10 n, c.isDigit = true := by
  have h := toDigitsCore10_isDigit (n + 1) n [] (by simp : ∀ c ∈ ([] : List Char), c.isDigit = true)
  simpa [Nat.toDigits] using h

/-- Every character of toString is a digit. -/
theorem toString_all_isDigit (n : Nat) : ∀ c ∈ (toString n).toList, c.isDigit = true := by
  simpa [Nat.toString_eq_ofList_toDigits] using toDigits_all_isDigit n

/-- A decimal digit byte is between '0' and '9', hence never the opener byte '['. -/
theorem digitByte_ne_91 {c : Char} (h : c.isDigit = true) : Char.toNat c ≠ 91 := by
  have hh := Char.isDigit_iff_toNat.mp h
  have h9 : ('9' : Char).toNat = 57 := by decide
  have h0 : ('0' : Char).toNat = 48 := by decide
  rw [h0, h9] at hh
  omega

/-- No byte of a placeholder is the opener byte. -/
theorem phBytes_ne_91 (n : Nat) : 91 ∉ phBytes n := by
  unfold phBytes
  intro h
  simp at h
  rcases h with ⟨c, hc, hcn⟩
  exact digitByte_ne_91 (toDigits_all_isDigit n c hc) hcn

/-- A claim replacement is a placeholder sandwiched between two newline pairs; none of its bytes is '['. -/
theorem claimRepl_ne_91 (n : Nat) : ∀ b ∈ [10, 10] ++ phBytes n ++ [10, 10], b ≠ 91 := by
  intro b hb
  have hb' : b = 10 ∨ b ∈ phBytes n ∨ b = 10 := by simpa using hb
  rcases hb' with hb10 | hbmem | hb10
  · omega
  · intro hb91
    exact phBytes_ne_91 n (by simpa [hb91] using hbmem)
  · omega

/-- No suffix of a byte string opens a module head when no byte of the string is '['. -/
def noOpenerAnywhere : List Nat → Prop
  | [] => True
  | xs@(_ :: rest) => moduleHead (litBytes "[[module") xs = none ∧ noOpenerAnywhere rest

/-- Appending a byte string that has no '[' preserves the no-opener property. -/
theorem noOpenerAnywhere_append_of_ne_91 {pre rest : List Nat}
    (hpre : ∀ b ∈ pre, b ≠ 91) (hrest : noOpenerAnywhere rest) :
    noOpenerAnywhere (pre ++ rest) := by
  induction pre with
  | nil => simpa using hrest
  | cons b bs ih =>
      have hb : b ≠ 91 := hpre b (by simp)
      constructor
      · apply moduleHead_eq_none_of_head_ne_91
        simp [hb]
      · apply ih
        intro x hx
        exact hpre x (by simp [hx])

/-- A string with no opener head anywhere has zero opener count for every predecessor byte and fuel. -/
theorem countModuleOpeners_eq_zero_of_noOpener (prev : Option Nat) (src : List Nat) (fuel : Nat)
    (hno : noOpenerAnywhere src) : countModuleOpeners prev src fuel = 0 := by
  induction fuel generalizing src prev with
  | zero => rfl
  | succ f ih =>
      cases src with
      | nil => rfl
      | cons b bs =>
          have hnone : moduleHead (litBytes "[[module") (b :: bs) = none := hno.1
          by_cases hlineB : (prev == none || prev == some 10) = true
          · have hlineP : prev = none ∨ prev = some 10 := by simpa using hlineB
            simp [countModuleOpeners, hlineP, hnone, ih (some b) bs hno.2]
          · have hlineP : ¬ (prev = none ∨ prev = some 10) := by simpa using hlineB
            simp [countModuleOpeners, hlineP, ih (some b) bs hno.2]

/-- A no-opener string has zero measure. -/
theorem measure_eq_zero_of_noOpener {src : List Nat} (hno : noOpenerAnywhere src) : moduleMeasure src = 0 := by
  dsimp [moduleMeasure]
  rw [countModuleOpeners_eq_zero_of_noOpener none src (src.length + 1) hno]
  rw [countModuleOpeners_eq_zero_of_noOpener (some 32) src (src.length + 1) hno]

/-- One-match strict-decrease law. A single plain claim (no defense, no Code re-emit) whose replacement is exactly a placeholder sandwich and whose residual contains no other opener head strictly lowers the measure. This is universal in src and the token table, but it is only a one-match, no-reemit version of the full step law. -/
theorem one_match_measure_strict_decrease {src toks repl rest' t1}
    (hm : moduleMatch src toks = some (repl, rest', t1))
    (hrepl : ∃ n, repl = [10, 10] ++ phBytes n ++ [10, 10])
    (hrest : noOpenerAnywhere rest') :
    moduleMeasure (repl ++ rest') < moduleMeasure src := by
  rcases hrepl with ⟨n, rfl⟩
  have hpos : 0 < moduleMeasure src := measure_pos_of_moduleMatch hm
  have hnpre : ∀ b ∈ [10, 10] ++ phBytes n ++ [10, 10], b ≠ 91 := claimRepl_ne_91 n
  have hno : noOpenerAnywhere ([10, 10] ++ phBytes n ++ [10, 10] ++ rest') :=
    noOpenerAnywhere_append_of_ne_91 hnpre hrest
  have hzero : moduleMeasure ([10, 10] ++ phBytes n ++ [10, 10] ++ rest') = 0 :=
    measure_eq_zero_of_noOpener hno
  omega

/-- Byte stability is automatic when a pass changes neither the bytes nor the token table: the next pass is the identical function call. Token changes come only from claims, whose replacements begin with a newline while a matched opener begins with '[', so a byte-unchanged pass has made no claim; the trivial form below records exactly the stability information needed. -/
theorem stable_of_bytes_and_tokens_unchanged (src : List Nat) (toks : List TokenEntry)
    (hbytes : (moduleScanPass none src toks (src.length + 1)).1 = src)
    (_htoks : (moduleScanPass none src toks (src.length + 1)).2 = toks) :
    modulePassStable src toks := by
  exact hbytes

/-- Concrete obstruction. The source has one line-start opener; the first pass claims it and leaves the residual opener adjacent to the consumed closer, so the replacement's trailing newline pair turns that residual opener into a line-start opener. The measure rises from 1 to 2, so no universal strict-decrease step law can hold. -/
def stepCounterexampleSrc : List Nat :=
  litBytes "[[module a]]\nX[[/module]][[module b]]"

theorem step_counterexample :
    let src := stepCounterexampleSrc
    let p := moduleScanPass none src [] (src.length + 1)
    p.1 ≠ src ∧ moduleMeasure src < moduleMeasure p.1 := by
  decide

/-- The universal strict-decrease step law is false. -/
theorem not_universal_measure_step :
    ¬ ∀ src toks,
        let p := moduleScanPass none src toks (src.length + 1)
        p.1 = src ∨ moduleMeasure p.1 < moduleMeasure src := by
  intro h
  have hc := step_counterexample
  have hs := h stepCounterexampleSrc []
  dsimp [stepCounterexampleSrc] at hc hs
  rcases hc with ⟨hne, hlt⟩
  rcases hs with heq | hdec
  · exact hne heq
  · omega

#print axioms matchLitCI_opener_head
#print axioms moduleHead_head_91
#print axioms moduleHead_eq_none_of_head_ne_91
#print axioms moduleMatch_head_nonempty
#print axioms countModuleOpeners_pos_of_head
#print axioms measure_pos_of_moduleMatch
#print axioms toDigitsCore10_isDigit
#print axioms toDigits_all_isDigit
#print axioms toString_all_isDigit
#print axioms digitByte_ne_91
#print axioms phBytes_ne_91
#print axioms claimRepl_ne_91
#print axioms noOpenerAnywhere_append_of_ne_91
#print axioms countModuleOpeners_eq_zero_of_noOpener
#print axioms measure_eq_zero_of_noOpener
#print axioms one_match_measure_strict_decrease
#print axioms stable_of_bytes_and_tokens_unchanged
#print axioms step_counterexample
#print axioms not_universal_measure_step

end ModuleMeasureStepProof
end LeanFtml
