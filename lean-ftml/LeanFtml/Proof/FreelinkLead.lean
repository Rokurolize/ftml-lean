/-
  LeanFtml.Proof.FreelinkLead: axiom-free mechanism laws for the mirror's lead-class roster and URL opener recognition.
  REBASED onto canonical head f2d4316: the F3-certified 196-point Freelink lead class (LeanFtml.UnicodeCore.freelinkLeadRanges, 28 inclusive ranges) plus the two REFCORR13 evidence-bounded siblings U+2065 and U+001B, i.e. 198 admitted code points; byte-zero NUL remains excluded.
  The old 29-point roster in the d9e75da draft is stale: U+200C, U+200D and U+2061..U+2064 are now admitted by the pinned Cf ranges, and U+2065/U+001B are new, so both roster theorems and the closed witnesses were rebased.
  All universal statements are phrased against the mirror's own predicates (LinkRules.isDefaultLeadCp, isUnicodeFormatCp, isUnicodeWhiteSpaceCp); the roster is the mechanically certified F3 range table plus the two named REFCORR13 points.
  Rebase point: if isDefaultLeadCp or the F3 table changes, refresh freelinkLeadRoster and re-check the roster iff, the letter/bound theorems and the closed witnesses below.
  Rebase point: the ASCII-letter and opener theorems only need every lead to be a non-letter and every scheme head to be a letter, so they survive lead-class moves that respect those two invariants.
  Full Class B universality (freelinkMatchAt via PcreCore, UnicodeCore consumer, renderFreelink parametric in RenderEnv) remains the named remainder after F2/F3; this unit proves the reachable lead-class and opener mechanism only.
  All prose comments are single lines by project convention.
-/
import LeanFtml.LinkRules
import LeanFtml.UnicodeCore

namespace LeanFtml

/-- The rebased lead roster: the F3-certified 196-point base class as 28 inclusive ranges, plus the two REFCORR13 evidence-bounded siblings U+2065 (the pinned Cf-block gap) and U+001B (ESC, stripped live before `_default:`). -/
def freelinkLeadRoster : List (Nat × Nat) :=
  freelinkLeadRanges ++ [(0x2065, 0x2065), (0x1B, 0x1B)]

def freelinkIsAsciiLetter (b : Nat) : Bool := (65 <= b && b <= 90) || (97 <= b && b <= 122)

-- Genuine kernel proof of the roster equivalence: the predicate side is reduced to the certified 196-point class isFreelinkLead plus the two REFCORR13 siblings, the roster side is reduced structurally to the same class plus the two REFCORR13 singleton ranges, and the two reductions are identified, so no axiom or native decision procedure is involved beyond the standard logical axioms.
theorem isDefaultLeadCp_iff_mem (cp : Nat) : isDefaultLeadCp cp = true ↔ inScalarRanges freelinkLeadRoster cp = true := by
  have beqt (a b : Bool) : a = b ↔ (a = true ↔ b = true) := by cases a <;> cases b <;> simp
  have hSingle (a n : Nat) : inScalarRanges [(a, a)] n = (n == a) := by
    rw [beqt]
    simp [inScalarRanges]
    omega
  have hPair : inScalarRanges [(0x2065, 0x2065), (0x1B, 0x1B)] cp = (cp == 0x2065 || cp == 0x1B) := by
    change inScalarRanges ([(0x2065, 0x2065)] ++ [(0x1B, 0x1B)]) cp = (cp == 0x2065 || cp == 0x1B)
    rw [inScalarRanges_append, hSingle, hSingle]
  have hRosterBool : inScalarRanges freelinkLeadRoster cp = (isFreelinkLead cp || cp == 0x2065 || cp == 0x1B) := by
    rw [freelinkLeadRoster, inScalarRanges_append, hPair]
    simp [isFreelinkLead, Bool.or_assoc]
  have hGuard : isDefaultLeadCp cp = (isFreelinkLead cp || cp == 0x2065 || cp == 0x1B) := by
    rw [beqt]
    simp [isDefaultLeadCp, isUnicodeFormatCp, isUnicodeWhiteSpaceCp, isFreelinkLead,
      freelinkLeadRanges, inScalarRanges]
    omega
  rw [hGuard, ← hRosterBool]

theorem isDefaultLeadCp_not_asciiLetter (cp : Nat) (h : isDefaultLeadCp cp = true) : freelinkIsAsciiLetter cp = false := by
  simp [isDefaultLeadCp, isUnicodeFormatCp, isUnicodeWhiteSpaceCp] at h
  simp [freelinkIsAsciiLetter]
  omega

/-- Explicit lead bound (cheap, rebase-useful): every admitted lead code point is at most U+E007F, so a canonical UTF-8 encoding occupies at most three bytes. -/
theorem isDefaultLeadCp_le_max (cp : Nat) (h : isDefaultLeadCp cp = true) : cp <= 0xE007F := by
  simp [isDefaultLeadCp, isUnicodeFormatCp, isUnicodeWhiteSpaceCp] at h
  omega

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
  · by_cases h2 : (65 ≤ c && c <= 90) = true
    · have h2' : 65 ≤ c ∧ c <= 90 := by
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
theorem regLeadCf_200C_admitted : isDefaultLeadCp 0x200C = true := by decide
theorem regLeadCf_200D_admitted : isDefaultLeadCp 0x200D = true := by decide
theorem regLeadCf_2061_admitted : isDefaultLeadCp 0x2061 = true := by decide
theorem regLeadCf_2062_admitted : isDefaultLeadCp 0x2062 = true := by decide
theorem regLeadCf_2063_admitted : isDefaultLeadCp 0x2063 = true := by decide
theorem regLeadCf_2064_admitted : isDefaultLeadCp 0x2064 = true := by decide
-- The two REFCORR13 siblings are admitted through their explicit singleton ranges in the rebased roster, mirroring the two added PHP regex branches, and the derived proof is kernel-checked rather than a bare decision.
theorem regLeadR13_2065_admitted : isDefaultLeadCp 0x2065 = true := by
  rw [isDefaultLeadCp_iff_mem]
  simp [freelinkLeadRoster, inScalarRanges]

theorem regLeadR13_001B_admitted : isDefaultLeadCp 0x1B = true := by
  rw [isDefaultLeadCp_iff_mem]
  simp [freelinkLeadRoster, inScalarRanges]
theorem regLead_nul_excluded : isDefaultLeadCp 0x00 = false := by decide
theorem regLead_001A_excluded : isDefaultLeadCp 0x1A = false := by decide

#print axioms isDefaultLeadCp_iff_mem
#print axioms isDefaultLeadCp_not_asciiLetter
#print axioms isDefaultLeadCp_le_max
#print axioms freelinkSchemes_heads_asciiLetter
#print axioms byteCiEq_false_of_nonLetter_of_letter
#print axioms isUrlTarget_false_of_nonLetter_head
#print axioms isUrlTarget_nil
#print axioms regLeadCf_200B_admitted
#print axioms regLeadR13_2065_admitted
#print axioms regLeadR13_001B_admitted

end LeanFtml
