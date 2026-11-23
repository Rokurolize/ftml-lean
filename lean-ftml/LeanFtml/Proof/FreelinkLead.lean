/-
  LeanFtml.Proof.FreelinkLead: axiom-free mechanism laws for the mirror's lead-class roster and URL opener recognition.
  REFCORR12 is moving lead classes, so the universal statements are phrased against the mirror's own predicates rather than against a frozen byte table.
  Rebase point: if isDefaultLeadCp changes, refresh freelinkLeadRoster and re-check isDefaultLeadCp_iff_mem and the pinned decide witnesses below.
  Rebase point: the ASCII-letter and opener theorems only need every lead to be a non-letter and every scheme head to be a letter, so they survive lead-class moves that respect those two invariants.
  Rebase point: if freelinkSchemes, byteCiEq, swapByteCase, or matchLitCI changes, re-check freelinkSchemes_heads_asciiLetter and byteCiEq_false_of_nonLetter_of_letter.
  All prose comments are single lines by project convention.
-/
import LeanFtml.LinkRules

namespace LeanFtml

def freelinkLeadRoster : List Nat :=
  [0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x20, 0x2A, 0x85, 0xA0, 0x1680,
   0x2000, 0x2001, 0x2002, 0x2003, 0x2004, 0x2005, 0x2006, 0x2007,
   0x2008, 0x2009, 0x200A, 0x200B, 0x2028, 0x2029, 0x202F, 0x205F,
   0x2060, 0x3000, 0xFEFF]

def freelinkIsAsciiLetter (b : Nat) : Bool := (65 <= b && b <= 90) || (97 <= b && b <= 122)

theorem isDefaultLeadCp_iff_mem (cp : Nat) : isDefaultLeadCp cp = true ↔ cp ∈ freelinkLeadRoster := by
  simp only [isDefaultLeadCp, freelinkLeadRoster, beq_iff_eq, Bool.or_eq_true, Bool.and_eq_true, decide_eq_true_eq, List.mem_cons, List.mem_nil_iff, or_false]
  omega

theorem isDefaultLeadCp_not_asciiLetter (cp : Nat) (h : isDefaultLeadCp cp = true) : freelinkIsAsciiLetter cp = false := by
  have hmem : cp ∈ freelinkLeadRoster := (isDefaultLeadCp_iff_mem cp).mp h
  simp only [freelinkLeadRoster, List.mem_cons, List.mem_nil_iff] at hmem
  simp only [or_false] at hmem
  rcases hmem with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl <;> decide

def freelinkHeadIsLetter (s : List Nat) : Bool :=
  match s with
  | [] => false
  | c :: _ => freelinkIsAsciiLetter c

theorem freelinkSchemes_heads_asciiLetter : freelinkSchemes.all freelinkHeadIsLetter = true := by
  decide

theorem swapByteCase_asciiLetter {c : Nat} (hc : freelinkIsAsciiLetter c = true) : freelinkIsAsciiLetter (swapByteCase c) = true := by
  by_cases h1 : (97 ≤ c && c ≤ 122) = true
  · have h1' : 97 ≤ c ∧ c ≤ 122 := by
      simpa [Bool.and_eq_true, decide_eq_true_eq] using h1
    have hsw : swapByteCase c = c - 32 := by simp [swapByteCase, h1]
    rw [hsw]
    simp [freelinkIsAsciiLetter]
    omega
  · by_cases h2 : (65 ≤ c && c ≤ 90) = true
    · have h2' : 65 ≤ c ∧ c ≤ 90 := by
        simpa [Bool.and_eq_true, decide_eq_true_eq] using h2
      have hsw : swapByteCase c = c + 32 := by simp [swapByteCase, h1, h2]
      rw [hsw]
      simp [freelinkIsAsciiLetter]
      omega
    · have hsw : swapByteCase c = c := by simp [swapByteCase, h1, h2]
      rw [hsw]
      exact hc

theorem byteCiEq_false_of_nonLetter_of_letter {x c : Nat}
    (hx : freelinkIsAsciiLetter x = false)
    (hc : freelinkIsAsciiLetter c = true) : byteCiEq x c = false := by
  have hx' : ¬ ((65 ≤ x ∧ x ≤ 90) ∨ (97 ≤ x ∧ x ≤ 122)) := by
    intro hxletter
    have hxt : freelinkIsAsciiLetter x = true := by
      simpa [freelinkIsAsciiLetter, Bool.or_eq_true, Bool.and_eq_true, decide_eq_true_eq] using hxletter
    rw [hxt] at hx
    cases hx
  have hc' : (65 ≤ c ∧ c ≤ 90) ∨ (97 ≤ c ∧ c ≤ 122) := by
    simpa [freelinkIsAsciiLetter] using hc
  have hsc' : (65 ≤ swapByteCase c ∧ swapByteCase c ≤ 90) ∨ (97 ≤ swapByteCase c ∧ swapByteCase c ≤ 122) := by
    simpa [freelinkIsAsciiLetter] using swapByteCase_asciiLetter hc
  have hxc : x ≠ c := by
    intro heq
    subst x
    exact hx' hc'
  have hxsc : x ≠ swapByteCase c := by
    intro heq
    subst x
    exact hx' hsc'
  unfold byteCiEq
  by_cases h1 : (x == c) = true
  · have heq : x = c := (beq_iff_eq).mp h1
    exact (hxc heq).elim
  · by_cases h2 : (x == swapByteCase c) = true
    · have heq : x = swapByteCase c := (beq_iff_eq).mp h2
      exact (hxsc heq).elim
    · have h1f : (x == c) = false := by cases h : (x == c) <;> simp_all
      have h2f : (x == swapByteCase c) = false := by cases h : (x == swapByteCase c) <;> simp_all
      simp [h1f, h2f]

def freelinkSourceHeadNonLetter (xs : List Nat) : Prop :=
  match xs with
  | [] => True
  | b :: _ => freelinkIsAsciiLetter b = false

theorem any_scheme_no_match_of_head (xs : List Nat) (hhead : freelinkSourceHeadNonLetter xs) :
    ∀ ss : List (List Nat),
      ss.all freelinkHeadIsLetter = true →
      ss.any (fun s => (matchLitCI s xs).isSome) = false := by
  intro ss
  induction ss with
  | nil =>
      intro h
      rfl
  | cons s ss ih =>
      intro h
      change (freelinkHeadIsLetter s && ss.all freelinkHeadIsLetter) = true at h
      simp only [Bool.and_eq_true] at h
      rcases h with ⟨hs, hss⟩
      cases s with
      | nil =>
          simp [freelinkHeadIsLetter] at hs
      | cons c p =>
          have hc : freelinkIsAsciiLetter c = true := by simpa [freelinkHeadIsLetter] using hs
          cases xs with
          | nil =>
              have hsnone : matchLitCI (c :: p) [] = none := rfl
              have htail := ih hss
              simp [hsnone, htail]
          | cons b rest =>
              have hbnon : freelinkIsAsciiLetter b = false := by simpa [freelinkSourceHeadNonLetter] using hhead
              have hbc : byteCiEq b c = false := byteCiEq_false_of_nonLetter_of_letter hbnon hc
              have hsnone : matchLitCI (c :: p) (b :: rest) = none := by simp [matchLitCI, hbc]
              have htail := ih hss
              simp [hsnone, htail]

theorem isUrlTarget_false_of_nonLetter_head (b : Nat) (rest : List Nat)
    (hb : freelinkIsAsciiLetter b = false) : isUrlTarget (b :: rest) = false := by
  unfold isUrlTarget
  exact any_scheme_no_match_of_head (b :: rest) hb freelinkSchemes freelinkSchemes_heads_asciiLetter

theorem isUrlTarget_nil : isUrlTarget [] = false := by
  unfold isUrlTarget
  exact any_scheme_no_match_of_head [] trivial freelinkSchemes freelinkSchemes_heads_asciiLetter

theorem regLeadCf_200B_admitted : isDefaultLeadCp 0x200B = true := by decide
theorem regLeadCf_2060_admitted : isDefaultLeadCp 0x2060 = true := by decide
theorem regLeadCf_200C_excluded : isDefaultLeadCp 0x200C = false := by decide
theorem regLeadCf_200D_excluded : isDefaultLeadCp 0x200D = false := by decide
theorem regLeadCf_2061_excluded : isDefaultLeadCp 0x2061 = false := by decide
theorem regLeadCf_2062_excluded : isDefaultLeadCp 0x2062 = false := by decide
theorem regLeadCf_2063_excluded : isDefaultLeadCp 0x2063 = false := by decide
theorem regLeadCf_2064_excluded : isDefaultLeadCp 0x2064 = false := by decide

#print axioms isDefaultLeadCp_iff_mem
#print axioms isDefaultLeadCp_not_asciiLetter
#print axioms freelinkSchemes_heads_asciiLetter
#print axioms byteCiEq_false_of_nonLetter_of_letter
#print axioms isUrlTarget_false_of_nonLetter_head
#print axioms isUrlTarget_nil
#print axioms regLeadCf_200B_admitted

end LeanFtml
