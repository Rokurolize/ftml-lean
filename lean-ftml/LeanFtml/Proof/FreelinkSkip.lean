/-
LeanFtml.Proof.FreelinkSkip — universal mechanism laws for the Freelink general lead class.
All statements are about the mirror's own functions in LeanFtml.LinkRules, never about a second hand-written copy.
This unit is self-contained: it imports only LeanFtml.LinkRules and keeps its own roster copy under a distinct name.
The roster is the 29-code-point set on which isDefaultLeadCp is true, with the U+2000..U+200B range expanded.
-/

import LeanFtml.LinkRules

namespace LeanFtml

/-! ## Local roster copy and canonical UTF-8 helpers -/

/-- Local copy of the general lead roster, independent of other proof units. Kept as a Prop so finite case analysis is possible. -/
def freelinkDecodeRoster (cp : Nat) : Prop :=
  cp = 0x09 ∨ cp = 0x0A ∨ cp = 0x0B ∨ cp = 0x0C ∨ cp = 0x0D ∨
  cp = 0x20 ∨ cp = 0x2A ∨ cp = 0x85 ∨ cp = 0xA0 ∨ cp = 0x1680 ∨
  cp = 0x2000 ∨ cp = 0x2001 ∨ cp = 0x2002 ∨ cp = 0x2003 ∨ cp = 0x2004 ∨ cp = 0x2005 ∨
  cp = 0x2006 ∨ cp = 0x2007 ∨ cp = 0x2008 ∨ cp = 0x2009 ∨ cp = 0x200A ∨ cp = 0x200B ∨
  cp = 0x2028 ∨ cp = 0x2029 ∨ cp = 0x202F ∨ cp = 0x205F ∨ cp = 0x2060 ∨ cp = 0x3000 ∨
  cp = 0xFEFF

/-- Canonical UTF-8 encoding of a code point, matching leadCpLen's decoder exactly. -/
def encodeCp (cp : Nat) : List Nat :=
  if cp < 0x80 then [cp]
  else if cp < 0x800 then [0xC0 + cp / 0x40, 0x80 + cp % 0x40]
  else if cp < 0x10000 then
    [0xE0 + cp / 0x1000, 0x80 + (cp / 0x40) % 0x40, 0x80 + cp % 0x40]
  else
    [0xF0 + cp / 0x40000, 0x80 + (cp / 0x1000) % 0x40,
     0x80 + (cp / 0x40) % 0x40, 0x80 + cp % 0x40]

/-- UTF-8 encoding of a list of code points by concatenation. -/
def encodeCps : List Nat → List Nat
  | [] => []
  | cp :: rest => encodeCp cp ++ encodeCps rest

/-- Every canonical encoding occupies at least one byte. -/
theorem freelink_encodeCp_len_pos (cp : Nat) : 0 < (encodeCp cp).length := by
  unfold encodeCp
  split
  · simp
  · split
    · simp
    · split
      · simp
      · simp

/-- Roster membership implies the mirror's own lead predicate is true. -/
theorem freelink_roster_isLead (cp : Nat) (h : freelinkDecodeRoster cp) : isDefaultLeadCp cp = true := by
  rcases h with
    rfl | rfl | rfl | rfl | rfl |
    rfl | rfl | rfl | rfl | rfl |
    rfl | rfl | rfl | rfl | rfl | rfl |
    rfl | rfl | rfl | rfl | rfl | rfl |
    rfl | rfl | rfl | rfl | rfl | rfl |
    rfl
  all_goals decide

/-! ## Bound on leadCpLen -/

/-- The decoded length never exceeds the number of bytes inspected. -/
theorem freelink_leadCpLen_bound (bs : List Nat) : (leadCpLen bs).2 <= bs.length := by
  cases bs with
  | nil => simp [leadCpLen]
  | cons b rest =>
      cases rest with
      | nil =>
          simp [leadCpLen]
          repeat (split <;> simp)
      | cons b2 rest' =>
          cases rest' with
          | nil =>
              simp [leadCpLen]
              split
              · simp
              · split
                · split <;> simp
                · simp
          | cons b3 rest'' =>
              simp [leadCpLen]
              split
              · simp
              · split
                · split <;> simp
                · split
                  · split <;> simp
                  · simp

/-- A nonempty byte list always decodes to a positive code-unit length. -/
theorem freelink_leadCpLen_pos (bs : List Nat) (hne : bs ≠ []) : 0 < (leadCpLen bs).2 := by
  cases bs with
  | nil => contradiction
  | cons b rest =>
      cases rest with
      | nil =>
          simp [leadCpLen]
          repeat (split <;> simp)
      | cons b2 rest' =>
          cases rest' with
          | nil =>
              simp [leadCpLen]
              split
              · simp
              · split
                · split <;> simp
                · simp
          | cons b3 rest'' =>
              simp [leadCpLen]
              split
              · simp
              · split
                · split <;> simp
                · split
                  · split <;> simp
                  · simp

/-- leadCpLen of an encoded roster code point followed by anything is that code point and its byte count. -/
theorem freelink_leadCpLen_encodeCp (cp : Nat) (h : freelinkDecodeRoster cp) (rest : List Nat) :
    leadCpLen (encodeCp cp ++ rest) = (cp, (encodeCp cp).length) := by
  rcases h with
    rfl | rfl | rfl | rfl | rfl |
    rfl | rfl | rfl | rfl | rfl |
    rfl | rfl | rfl | rfl | rfl | rfl |
    rfl | rfl | rfl | rfl | rfl | rfl |
    rfl | rfl | rfl | rfl | rfl | rfl |
    rfl
  all_goals rfl

/-! ## Fuel invariance -/

/-- One unfolding step of the fuel-indexed skip. -/
theorem freelink_skipFuel_succ (fuel : Nat) (bs : List Nat) :
    skipDefaultLeadFuel (Nat.succ fuel) bs =
      (let (cp, n) := leadCpLen bs
       if n > 0 && isDefaultLeadCp cp then skipDefaultLeadFuel fuel (bs.drop n) else bs) := rfl

/-- The fuel-indexed skip keeps [] at []. -/
theorem freelink_skipFuel_nil (k : Nat) : skipDefaultLeadFuel k [] = [] := by
  induction k with
  | zero => rfl
  | succ k ih => simp [skipDefaultLeadFuel, leadCpLen]

/-- One extra fuel step changes nothing once fuel is at least the input length. -/
theorem freelink_skipFuel_step (fuel : Nat) (bs : List Nat) (h : bs.length <= fuel) :
    skipDefaultLeadFuel (fuel + 1) bs = skipDefaultLeadFuel fuel bs := by
  induction fuel generalizing bs with
  | zero =>
      cases bs with
      | nil => simp [freelink_skipFuel_nil]
      | cons b rest => simp at h
  | succ f ih =>
      cases bs with
      | nil => rw [freelink_skipFuel_nil, freelink_skipFuel_nil]
      | cons b rest =>
          rw [freelink_skipFuel_succ, freelink_skipFuel_succ]
          dsimp only
          split
          · simp_all
            have hnpos : 0 < (leadCpLen (b :: rest)).2 :=
              freelink_leadCpLen_pos (b :: rest) (by simp)
            have hbnd := freelink_leadCpLen_bound (b :: rest)
            have hdrop : (((b :: rest).drop (leadCpLen (b :: rest)).2).length) <= f := by
              rw [List.length_drop]
              simp only [List.length_cons] at h hbnd ⊢
              omega
            exact ih ((b :: rest).drop (leadCpLen (b :: rest)).2) hdrop
          · simp_all

/-- Extra fuel beyond the input length is inert. -/
theorem freelink_skipFuel_ge (fuel k : Nat) (bs : List Nat) (h : bs.length <= fuel) :
    skipDefaultLeadFuel (fuel + k) bs = skipDefaultLeadFuel fuel bs := by
  induction k with
  | zero => simp
  | succ k ih =>
      rw [Nat.add_succ]
      rw [freelink_skipFuel_step (fuel + k) bs (by omega)]
      exact ih

/-! ## skipDefaultLead unfolding and stripping -/

/-- skipDefaultLead is the fuel-indexed skip seeded with the input length. -/
theorem freelink_skipDefaultLead_eq (bs : List Nat) :
    skipDefaultLead bs = skipDefaultLeadFuel bs.length bs := rfl

/-- One-step unfolding of skipDefaultLead on a cons. -/
theorem freelink_skipDefaultLead_cons_step (b : Nat) (rest : List Nat) :
    skipDefaultLead (b :: rest) =
      (let (cp, n) := leadCpLen (b :: rest)
       if n > 0 && isDefaultLeadCp cp then skipDefaultLeadFuel rest.length ((b :: rest).drop n) else b :: rest) := by
  simp [freelink_skipDefaultLead_eq, freelink_skipFuel_succ]

/-- General prefix strip: one encoded lead code point at the front is consumed. -/
theorem freelink_skip_prefix (e : List Nat) (cp n : Nat)
    (hdec : ∀ rest : List Nat, leadCpLen (e ++ rest) = (cp, n))
    (hn : 0 < n) (heq : e.length = n) (hlead : isDefaultLeadCp cp = true)
    (rest : List Nat) :
    skipDefaultLead (e ++ rest) = skipDefaultLead rest := by
  rw [freelink_skipDefaultLead_eq]
  have hlen0 : (e ++ rest).length = n + rest.length := by simp [heq]
  have hlen : (e ++ rest).length = Nat.succ (n + rest.length - 1) := by omega
  rw [hlen]
  rw [freelink_skipFuel_succ]
  dsimp only
  rw [hdec rest]
  simp [hn, hlead]
  have hdrop : (e ++ rest).drop n = rest := by
    rw [← heq]
    induction e with
    | nil => simp
    | cons x xs ih => simp
  rw [hdrop]
  have hf : n + rest.length - 1 = rest.length + (n - 1) := by omega
  rw [hf]
  exact freelink_skipFuel_ge rest.length (n - 1) rest (by omega)

/-- One roster lead code point at the front is consumed. -/
theorem freelink_skipDefaultLead_one (cp : Nat) (h : freelinkDecodeRoster cp) (rest : List Nat) :
    skipDefaultLead (encodeCp cp ++ rest) = skipDefaultLead rest := by
  exact freelink_skip_prefix (encodeCp cp) cp ((encodeCp cp).length)
    (fun r => freelink_leadCpLen_encodeCp cp h r)
    (freelink_encodeCp_len_pos cp) rfl (freelink_roster_isLead cp h) rest

/-- A whole run of roster lead code points is consumed. -/
theorem freelink_skipDefaultLead_run (cps : List Nat) (h : ∀ cp ∈ cps, freelinkDecodeRoster cp)
    (rest : List Nat) :
    skipDefaultLead (encodeCps cps ++ rest) = skipDefaultLead rest := by
  induction cps with
  | nil => simp [encodeCps]
  | cons cp cps' ih =>
      simp only [encodeCps, List.append_assoc]
      rw [freelink_skipDefaultLead_one cp (h cp (by simp))]
      exact ih (by
        intro x hx
        exact h x (by simp [hx]))

/-- If the decoded length is zero the input is already final. -/
theorem freelink_skipDefaultLead_stop_len (bs : List Nat) (h : (leadCpLen bs).2 = 0) :
    skipDefaultLead bs = bs := by
  cases bs with
  | nil => rfl
  | cons b rest => simp [skipDefaultLead, skipDefaultLeadFuel, h]

/-- If the head code point is not a lead the input is final. -/
theorem freelink_skipDefaultLead_stop_nonlead (bs : List Nat)
    (h : isDefaultLeadCp (leadCpLen bs).1 = false) :
    skipDefaultLead bs = bs := by
  cases bs with
  | nil => rfl
  | cons b rest => simp [skipDefaultLead, skipDefaultLeadFuel, h]

/-- A lead run before a literal _default: is fully stripped, leaving the literal. -/
theorem freelink_skipDefaultLead_default (cps : List Nat) (suf : List Nat)
    (h : ∀ cp ∈ cps, freelinkDecodeRoster cp) :
    skipDefaultLead (encodeCps cps ++ litBytes "_default:" ++ suf) = litBytes "_default:" ++ suf := by
  rw [List.append_assoc]
  rw [freelink_skipDefaultLead_run cps h (litBytes "_default:" ++ suf)]
  apply freelink_skipDefaultLead_stop_nonlead
  rfl

#print axioms freelink_leadCpLen_bound
#print axioms freelink_leadCpLen_encodeCp
#print axioms freelink_skipFuel_ge
#print axioms freelink_skipDefaultLead_run
#print axioms freelink_skipDefaultLead_default

end LeanFtml
