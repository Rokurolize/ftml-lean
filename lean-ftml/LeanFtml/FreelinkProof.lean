/-
LeanFtml.FreelinkProof — theorems about the mirror's Freelink functions as they stand in LinkRules.lean. The lead class is Unicode White_Space together with U+FEFF, the `*` marker, and the two REFCORR11 Cf code points U+200B and U+2060. skipDefaultLead drops a canonical run of that class, and a following `_default:` is then stripped so the page slug is toUnixName of the remainder. Two or more `#` bytes in the raw target are returned literal, with no `/#/` exemption; a single `/#/` route peels into an empty anchor and a `#/` extra, and a single `#` anchor peels the other way. U+200C and U+2061, the round-5e Cf leads, are proved absent. An overlong encoding of U+00A0 is admitted by leadCpLen and rejected by the reference byte class; that divergence is recorded here and not repaired. This file is not imported by Main.lean.
-/

import LeanFtml.LinkRules

set_option maxHeartbeats 32000000

namespace LeanFtml

/-! ## Lead class -/

/-- The finite roster of code points `isDefaultLeadCp` admits: the Unicode White_Space property, U+FEFF, U+002A, U+200B and U+2060. -/
def leadRoster : List Nat :=
  [0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x20, 0x2A, 0x85, 0xA0, 0x1680,
   0x2000, 0x2001, 0x2002, 0x2003, 0x2004, 0x2005, 0x2006, 0x2007,
   0x2008, 0x2009, 0x200A, 0x200B, 0x2028, 0x2029, 0x202F, 0x205F,
   0x2060, 0x3000, 0xFEFF]

/-- Canonical UTF-8 of a code point, matching `leadCpLen` on every scalar below U+10000. -/
def encodeCp (cp : Nat) : List Nat :=
  if cp < 0x80 then [cp]
  else if cp < 0x800 then [0xC0 + cp / 64, 0x80 + cp % 64]
  else [0xE0 + cp / 4096, 0x80 + (cp / 64) % 64, 0x80 + cp % 64]

def encodeCps : List Nat → List Nat
  | [] => []
  | cp :: cps => encodeCp cp ++ encodeCps cps

def isAsciiLetter (b : Nat) : Bool :=
  (65 ≤ b && b ≤ 90) || (97 ≤ b && b ≤ 122)

/-- Bytes that cannot open a URL scheme, a hash guard, a pipe literal, or a `/#/` route. -/
def byteSafe (b : Nat) : Bool :=
  !isAsciiLetter b && b != 35 && b != 124 && b != 255 && b != 58 && b != 47

theorem range2000 (cp : Nat) :
    (0x2000 ≤ cp ∧ cp ≤ 0x200B) ↔
      cp = 0x2000 ∨ cp = 0x2001 ∨ cp = 0x2002 ∨ cp = 0x2003 ∨
      cp = 0x2004 ∨ cp = 0x2005 ∨ cp = 0x2006 ∨ cp = 0x2007 ∨
      cp = 0x2008 ∨ cp = 0x2009 ∨ cp = 0x200A ∨ cp = 0x200B := by
  constructor
  · intro h
    have h0 : cp = 0x2000 ∨ 0x2001 ≤ cp := by omega
    rcases h0 with rfl | h1
    · simp
    · have h1b : cp = 0x2001 ∨ 0x2002 ≤ cp := by omega
      rcases h1b with rfl | h2
      · simp
      · have h2b : cp = 0x2002 ∨ 0x2003 ≤ cp := by omega
        rcases h2b with rfl | h3
        · simp
        · have h3b : cp = 0x2003 ∨ 0x2004 ≤ cp := by omega
          rcases h3b with rfl | h4
          · simp
          · have h4b : cp = 0x2004 ∨ 0x2005 ≤ cp := by omega
            rcases h4b with rfl | h5
            · simp
            · have h5b : cp = 0x2005 ∨ 0x2006 ≤ cp := by omega
              rcases h5b with rfl | h6
              · simp
              · have h6b : cp = 0x2006 ∨ 0x2007 ≤ cp := by omega
                rcases h6b with rfl | h7
                · simp
                · have h7b : cp = 0x2007 ∨ 0x2008 ≤ cp := by omega
                  rcases h7b with rfl | h8
                  · simp
                  · have h8b : cp = 0x2008 ∨ 0x2009 ≤ cp := by omega
                    rcases h8b with rfl | h9
                    · simp
                    · have h9b : cp = 0x2009 ∨ 0x200A ≤ cp := by omega
                      rcases h9b with rfl | hA
                      · simp
                      · have hAb : cp = 0x200A ∨ 0x200B ≤ cp := by omega
                        rcases hAb with rfl | hB
                        · simp
                        · have : cp = 0x200B := by omega
                          simp [this]
  · intro h
    rcases h with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl <;> omega

private theorem boolOr_resolve {a b : Bool} (h : (a || b) = true) : a = true ∨ b = true := by
  cases a <;> cases b <;> simp_all

private theorem eq_of_beq {a b : Nat} (h : (a == b) = true) : a = b := by
  simpa [beq_iff_eq] using h

private theorem peel_right (cp n : Nat) (left : Bool)
    (h : (left || (cp == n)) = true) (hmem : n ∈ leadRoster) :
    left = true ∨ cp ∈ leadRoster := by
  rcases boolOr_resolve h with h | h
  · exact Or.inl h
  · exact Or.inr (by
      have : cp = n := eq_of_beq h
      simpa [this] using hmem)

private theorem range_of_and (cp : Nat)
    (h : (decide (0x2000 ≤ cp) && decide (cp ≤ 0x200B)) = true) :
    0x2000 ≤ cp ∧ cp ≤ 0x200B := by
  simpa [Bool.and_eq_true, decide_eq_true_eq] using h

/-- `isDefaultLeadCp` is membership in the finite roster. -/
theorem isDefaultLeadCp_iff_mem (cp : Nat) :
    isDefaultLeadCp cp = true ↔ cp ∈ leadRoster := by
  constructor
  · intro h
    simp only [isDefaultLeadCp] at h
    rcases peel_right cp 0xFEFF _ h (by decide) with h | hmem
    · rcases peel_right cp 0x3000 _ h (by decide) with h | hmem
      · rcases peel_right cp 0x2060 _ h (by decide) with h | hmem
        · rcases peel_right cp 0x205F _ h (by decide) with h | hmem
          · rcases peel_right cp 0x202F _ h (by decide) with h | hmem
            · rcases peel_right cp 0x2029 _ h (by decide) with h | hmem
              · rcases peel_right cp 0x2028 _ h (by decide) with h | hmem
                · rcases boolOr_resolve h with h | h
                  · rcases peel_right cp 0x1680 _ h (by decide) with h | hmem
                    · rcases peel_right cp 0xA0 _ h (by decide) with h | hmem
                      · rcases peel_right cp 0x85 _ h (by decide) with h | hmem
                        · rcases peel_right cp 0x2A _ h (by decide) with h | hmem
                          · rcases peel_right cp 0x20 _ h (by decide) with h | hmem
                            · rcases peel_right cp 0x0D _ h (by decide) with h | hmem
                              · rcases peel_right cp 0x0C _ h (by decide) with h | hmem
                                · rcases peel_right cp 0x0B _ h (by decide) with h | hmem
                                  · rcases peel_right cp 0x0A _ h (by decide) with h | hmem
                                    · have : cp = 0x09 := eq_of_beq h
                                      simpa [this] using (by decide : (0x09 : Nat) ∈ leadRoster)
                                    · exact hmem
                                  · exact hmem
                                · exact hmem
                              · exact hmem
                            · exact hmem
                          · exact hmem
                        · exact hmem
                      · exact hmem
                    · exact hmem
                  · rcases (range2000 cp).mp (range_of_and cp h) with
                      rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl <;> decide
                · exact hmem
              · exact hmem
            · exact hmem
          · exact hmem
        · exact hmem
      · exact hmem
    · exact hmem
  · intro h
    simp only [leadRoster, List.mem_cons, List.mem_nil_iff, or_false] at h
    rcases h with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl <;> decide

theorem cf_zwsp_admitted : isDefaultLeadCp 0x200B = true := by decide

theorem cf_wj_admitted : isDefaultLeadCp 0x2060 = true := by decide

theorem cf_zwnj_excluded : isDefaultLeadCp 0x200C = false := by decide

theorem cf_zwj_excluded : isDefaultLeadCp 0x200D = false := by decide

theorem cf_fa_excluded : isDefaultLeadCp 0x2061 = false := by decide

theorem cf_2062_excluded : isDefaultLeadCp 0x2062 = false := by decide

theorem cf_2063_excluded : isDefaultLeadCp 0x2063 = false := by decide

theorem cf_2064_excluded : isDefaultLeadCp 0x2064 = false := by decide

theorem nul_excluded : isDefaultLeadCp 0 = false := by decide

theorem underscore_not_lead : isDefaultLeadCp 0x5F = false := by decide

/-! ## UTF-8 of a lead code point -/

theorem encodeCp_len_pos (cp : Nat) : 0 < (encodeCp cp).length := by
  unfold encodeCp
  split
  · simp
  · split <;> simp

theorem leadCpLen_bound (bs : List Nat) : (leadCpLen bs).2 ≤ bs.length := by
  cases bs with
  | nil => simp [leadCpLen]
  | cons b rest =>
    unfold leadCpLen
    split
    · simp
    · split
      · cases rest with
        | nil => simp
        | cons _ rest2 =>
          split <;> (simp; omega)
      · split
        · cases rest with
          | nil => simp
          | cons _ rest2 =>
            cases rest2 with
            | nil => simp
            | cons _ _ =>
              split <;> (simp; omega)
        · simp

private theorem isCont_80 (r : Nat) (hr : r < 64) : isContByte (0x80 + r) = true := by
  unfold isContByte
  have hlo : decide (0x80 ≤ 0x80 + r) = true := by
    simp [decide_eq_true_eq]
    omega
  have hhi : decide (0x80 + r < 0xC0) = true := by
    simp [decide_eq_true_eq]
    omega
  simp [hlo, hhi]

theorem leadCpLen_encode (cp : Nat) (rest : List Nat) (h : cp < 0x10000) :
    leadCpLen (encodeCp cp ++ rest) = (cp, (encodeCp cp).length) := by
  by_cases h1 : cp < 0x80
  · have hlist : encodeCp cp = [cp] := by simp [encodeCp, h1]
    simp [hlist, leadCpLen, h1]
  · by_cases h2 : cp < 0x800
    · have hlist : encodeCp cp = [0xC0 + cp / 64, 0x80 + cp % 64] := by
        simp [encodeCp, h1, h2]
      have hnot : ¬ (0xC0 + cp / 64 < 0x80) := by omega
      have hlo : 0xC2 ≤ 0xC0 + cp / 64 := by omega
      have hhi : 0xC0 + cp / 64 < 0xE0 := by omega
      have hcond : (decide (0xC2 ≤ 0xC0 + cp / 64) && decide (0xC0 + cp / 64 < 0xE0)) = true := by
        simp [hlo, hhi]
      have hr : cp % 64 < 64 := Nat.mod_lt _ (by decide)
      have hcont : isContByte (0x80 + cp % 64) = true := isCont_80 _ hr
      have hq : cp / 64 < 32 := by omega
      have hmodb : (0xC0 + cp / 64) % 32 = cp / 64 := by
        have hc : 0xC0 = 6 * 32 := by decide
        rw [hc]
        exact Nat.mul_add_mod_of_lt hq
      have hmod2 : (0x80 + cp % 64) % 64 = cp % 64 := by
        have hc : 0x80 = 2 * 64 := by decide
        rw [hc]
        exact Nat.mul_add_mod_of_lt hr
      have hdec : (0xC0 + cp / 64) % 32 * 64 + (0x80 + cp % 64) % 64 = cp := by
        rw [hmodb, hmod2, Nat.mul_comm (cp / 64) 64]
        exact Nat.div_add_mod cp 64
      simp [hlist, leadCpLen, hnot, hcond, hcont, hdec]
    · have hlist : encodeCp cp =
          [0xE0 + cp / 4096, 0x80 + (cp / 64) % 64, 0x80 + cp % 64] := by
        simp [encodeCp, h1, h2]
      have hnot1 : ¬ (0xE0 + cp / 4096 < 0x80) := by omega
      have hnot2 : (decide (0xC2 ≤ 0xE0 + cp / 4096) &&
          decide (0xE0 + cp / 4096 < 0xE0)) = false := by
        have : decide (0xE0 + cp / 4096 < 0xE0) = false := by
          simp [decide_eq_false_iff_not]
          omega
        simp [this]
      have hlo : 0xE0 ≤ 0xE0 + cp / 4096 := by omega
      have hhi : 0xE0 + cp / 4096 < 0xF0 := by omega
      have hcond3 : (decide (0xE0 ≤ 0xE0 + cp / 4096) &&
          decide (0xE0 + cp / 4096 < 0xF0)) = true := by
        simp [hlo, hhi]
      have hq : cp / 4096 < 16 := by omega
      have hr : cp % 64 < 64 := Nat.mod_lt _ (by decide)
      have hr2 : (cp / 64) % 64 < 64 := Nat.mod_lt _ (by decide)
      have hc2 : isContByte (0x80 + (cp / 64) % 64) = true := isCont_80 _ hr2
      have hc3 : isContByte (0x80 + cp % 64) = true := isCont_80 _ hr
      have hmodb : (0xE0 + cp / 4096) % 16 = cp / 4096 := by
        have hc : 0xE0 = 14 * 16 := by decide
        rw [hc]
        exact Nat.mul_add_mod_of_lt hq
      have hmod2 : (0x80 + (cp / 64) % 64) % 64 = (cp / 64) % 64 := by
        have hc : 0x80 = 2 * 64 := by decide
        rw [hc]
        exact Nat.mul_add_mod_of_lt hr2
      have hmod3 : (0x80 + cp % 64) % 64 = cp % 64 := by
        have hc : 0x80 = 2 * 64 := by decide
        rw [hc]
        exact Nat.mul_add_mod_of_lt hr
      have hdec :
          (0xE0 + cp / 4096) % 16 * 4096 +
            ((0x80 + (cp / 64) % 64) % 64) * 64 +
            ((0x80 + cp % 64) % 64) = cp := by
        rw [hmodb, hmod2, hmod3]
        have h4096 : 4096 = 64 * 64 := by decide
        have hd : (cp / 64) / 64 = cp / 4096 := by
          simpa [h4096] using (Nat.div_div_eq_div_mul cp 64 64).symm
        have hmid' : 64 * (cp / 4096) + (cp / 64) % 64 = cp / 64 := by
          simpa [hd] using Nat.div_add_mod (cp / 64) 64
        have hlow' : 64 * (64 * (cp / 4096) + (cp / 64) % 64) + cp % 64 = cp := by
          simpa [hmid'] using Nat.div_add_mod cp 64
        have hdist : 64 * (64 * (cp / 4096) + (cp / 64) % 64) =
            64 * (64 * (cp / 4096)) + 64 * ((cp / 64) % 64) :=
          Nat.mul_add 64 (64 * (cp / 4096)) ((cp / 64) % 64)
        have hassoc : 64 * (64 * (cp / 4096)) = (64 * 64) * (cp / 4096) :=
          (Nat.mul_assoc 64 64 (cp / 4096)).symm
        calc
          (cp / 4096) * 4096 + ((cp / 64) % 64) * 64 + cp % 64
              = (cp / 4096) * (64 * 64) + ((cp / 64) % 64) * 64 + cp % 64 := by rw [h4096]
          _ = (64 * 64) * (cp / 4096) + 64 * ((cp / 64) % 64) + cp % 64 := by
                rw [Nat.mul_comm (cp / 4096) (64 * 64), Nat.mul_comm ((cp / 64) % 64) 64]
          _ = 64 * (64 * (cp / 4096)) + 64 * ((cp / 64) % 64) + cp % 64 := by rw [← hassoc]
          _ = 64 * (64 * (cp / 4096) + (cp / 64) % 64) + cp % 64 := by rw [← hdist]
          _ = cp := hlow'
      simp [hlist, leadCpLen, hnot1, hnot2, hcond3, hc2, hc3, hdec]

theorem roster_below :
    leadRoster.all (fun cp => decide (cp < 0x10000)) = true := by
  decide

theorem lead_cp_small (cp : Nat) (h : isDefaultLeadCp cp = true) : cp < 0x10000 := by
  have hm := (isDefaultLeadCp_iff_mem cp).mp h
  have hall := roster_below
  simp only [List.all_eq_true] at hall
  simpa [decide_eq_true_eq] using hall cp hm

theorem leadCpLen_lead (cp : Nat) (rest : List Nat) (h : isDefaultLeadCp cp = true) :
    leadCpLen (encodeCp cp ++ rest) = (cp, (encodeCp cp).length) :=
  leadCpLen_encode cp rest (lead_cp_small cp h)

/-! ## skipDefaultLead -/

theorem skipFuel_ge (fuel k : Nat) (bs : List Nat) (h : bs.length ≤ fuel) :
    skipDefaultLeadFuel (fuel + k) bs = skipDefaultLeadFuel fuel bs := by
  induction fuel generalizing k bs with
  | zero =>
      have hbs : bs = [] := List.eq_nil_of_length_eq_zero (Nat.eq_zero_of_le_zero h)
      subst hbs
      cases k with
      | zero => rfl
      | succ k => simp [skipDefaultLeadFuel, leadCpLen]
  | succ fuel ih =>
      rw [Nat.succ_add]
      simp only [skipDefaultLeadFuel]
      by_cases hgo : (leadCpLen bs).2 > 0 && isDefaultLeadCp (leadCpLen bs).1 = true
      · have hn : 0 < (leadCpLen bs).2 := by
          simp only [Bool.and_eq_true, decide_eq_true_eq] at hgo
          exact hgo.1
        have hdrop : (bs.drop (leadCpLen bs).2).length ≤ fuel := by
          rw [List.length_drop]
          have hbound := leadCpLen_bound bs
          omega
        simp [hgo, ih k _ hdrop]
      · have hf : ((leadCpLen bs).2 > 0 && isDefaultLeadCp (leadCpLen bs).1) = false := by
          cases hx : (leadCpLen bs).2 > 0 && isDefaultLeadCp (leadCpLen bs).1 <;> simp_all
        simp [hf]

theorem skipDefaultLead_unfold (bs : List Nat) :
    skipDefaultLead bs =
      let (cp, n) := leadCpLen bs
      if n > 0 && isDefaultLeadCp cp then
        skipDefaultLeadFuel (bs.length - 1) (bs.drop n)
      else bs := by
  cases bs with
  | nil => simp [skipDefaultLead, skipDefaultLeadFuel, leadCpLen]
  | cons _ _ => simp [skipDefaultLead, skipDefaultLeadFuel]

theorem drop_encode (cp : Nat) (rest : List Nat) :
    (encodeCp cp ++ rest).drop (encodeCp cp).length = rest :=
  List.drop_append_length

theorem skipDefaultLead_one (cp : Nat) (rest : List Nat) (h : isDefaultLeadCp cp = true) :
    skipDefaultLead (encodeCp cp ++ rest) = skipDefaultLead rest := by
  have hdec := leadCpLen_lead cp rest h
  have hn : 0 < (encodeCp cp).length := encodeCp_len_pos cp
  have hgo : ((encodeCp cp).length > 0 && isDefaultLeadCp cp) = true := by
    simp [hn, h]
  rw [skipDefaultLead_unfold]
  simp only [hdec, hgo, drop_encode]
  have hk : (encodeCp cp ++ rest).length - 1 =
      rest.length + ((encodeCp cp).length - 1) := by
    simp [List.length_append]
    omega
  rw [hk, skipFuel_ge rest.length ((encodeCp cp).length - 1) rest (Nat.le_refl _)]
  rfl

theorem skipDefaultLead_run (cps : List Nat) (rest : List Nat)
    (h : ∀ cp ∈ cps, isDefaultLeadCp cp = true) :
    skipDefaultLead (encodeCps cps ++ rest) = skipDefaultLead rest := by
  induction cps generalizing rest with
  | nil => simp [encodeCps]
  | cons cp cps ih =>
      have hcp := h cp (by simp)
      have htail : ∀ c ∈ cps, isDefaultLeadCp c = true :=
        fun c hc => h c (by simp [hc])
      have assoc : encodeCp cp ++ encodeCps cps ++ rest =
          encodeCp cp ++ (encodeCps cps ++ rest) := by
        simp [encodeCps, List.append_assoc]
      rw [assoc, skipDefaultLead_one cp (encodeCps cps ++ rest) hcp]
      exact ih rest htail

theorem skipDefaultLead_stop (bs : List Nat)
    (h : (leadCpLen bs).2 = 0 ∨ isDefaultLeadCp (leadCpLen bs).1 = false) :
    skipDefaultLead bs = bs := by
  rw [skipDefaultLead_unfold]
  rcases h with h0 | hlead
  · simp [h0]
  · have hf : ((leadCpLen bs).2 > 0 && isDefaultLeadCp (leadCpLen bs).1) = false := by
      cases hn : decide ((leadCpLen bs).2 > 0) <;> simp [hn, hlead, decide_eq_true_eq]
    simp [hf]

theorem skip_default_literal (suf : List Nat) :
    skipDefaultLead (litBytes "_default:" ++ suf) = litBytes "_default:" ++ suf := by
  have hdec : leadCpLen (litBytes "_default:" ++ suf) = (0x5F, 1) := by
    simp [litBytes, leadCpLen]
  rw [skipDefaultLead_stop]
  · rfl
  · rw [hdec]
    exact Or.inr underscore_not_lead

theorem skip_leads_then_default (cps suf : List Nat)
    (h : ∀ cp ∈ cps, isDefaultLeadCp cp = true) :
    skipDefaultLead (encodeCps cps ++ litBytes "_default:" ++ suf) =
      litBytes "_default:" ++ suf := by
  rw [skipDefaultLead_run cps (litBytes "_default:" ++ suf) h]
  exact skip_default_literal suf

theorem matchLitCI_refl_append (pat rest : List Nat) :
    matchLitCI pat (pat ++ rest) = some rest := by
  induction pat with
  | nil => simp [matchLitCI]
  | cons p ps ih => simp [matchLitCI, byteCiEq, ih]

/-! ## Multi-hash rejection -/

theorem freelinkProcess_multi_hash (full raw label : List Nat) (toks : List TokenEntry)
    (h : 1 < (raw.filter (· == 35)).length) :
    freelinkProcess full raw label toks = (full, toks) := by
  unfold freelinkProcess
  split
  · rfl
  · split
    · rfl
    · split
      · rfl
      · split
        · rfl
        · split
          · rfl
          · rename_i hnot
            exact hnot h

theorem findSub_missing (pat src : List Nat) (b : Nat)
    (hb : b ∈ pat) (hsrc : ∀ x ∈ src, x ≠ b) (hne : pat ≠ []) :
    findSub pat src = none := by
  induction src with
  | nil => simp [findSub, hne]
  | cons x xs ih =>
      simp only [findSub]
      have htake : ((x :: xs).take pat.length == pat) = false := by
        by_cases heq : (x :: xs).take pat.length = pat
        · have hb' : b ∈ x :: xs := List.mem_of_mem_take (by simpa [heq] using hb)
          exact (hsrc b hb' rfl).elim
        · simpa [beq_eq_false_iff_ne] using heq
      simpa [htake] using ih

theorem filter_ne_length (bs : List Nat) (h : ∀ b ∈ bs, b ≠ 35) :
    (bs.filter (· == 35)).length = 0 := by
  induction bs with
  | nil => simp
  | cons b bs ih =>
      have hb : (b == 35) = false := by simpa [beq_eq_false_iff_ne] using h b (by simp)
      simp [List.filter, hb, ih (fun x hx => h x (by simp [hx]))]

theorem filter_count_hashhash (raw : List Nat)
    (h : (findSub [35, 35] raw).isSome = true) :
    1 < (raw.filter (· == 35)).length := by
  induction raw with
  | nil => simp [findSub] at h
  | cons b bs ih =>
      simp only [findSub] at h
      by_cases ht : (b :: bs).take 2 = [35, 35]
      · cases bs with
        | nil => simp at ht
        | cons b2 rest =>
            simp at ht
            rcases ht with ⟨rfl, rfl⟩
            simp [List.filter]
            omega
      · have hne : ((b :: bs).take 2 == [35, 35]) = false := by
          simpa [beq_eq_false_iff_ne] using ht
        simp only [hne] at h
        have hlen := ih h
        simp [List.filter]
        split <;> omega

theorem freelinkProcess_hashhash (full raw label : List Nat) (toks : List TokenEntry)
    (h : (findSub (litBytes "##") raw).isSome = true) :
    freelinkProcess full raw label toks = (full, toks) := by
  have hlit : litBytes "##" = [35, 35] := by simp [litBytes]
  apply freelinkProcess_multi_hash
  rw [hlit] at h
  exact filter_count_hashhash raw h

theorem freelinkProcess_hash_lead (full anch label : List Nat) (toks : List TokenEntry)
    (b2 : Nat) (hb : b2 ≠ 32 ∧ b2 ≠ 9)
    (hFF : full.any (fun b => b == 0xFF) = false) :
    freelinkProcess full (35 :: b2 :: anch) label toks = (full, toks) := by
  have h1 : (b2 == 32) = false := by simpa [beq_eq_false_iff_ne] using hb.1
  have h2 : (b2 == 9) = false := by simpa [beq_eq_false_iff_ne] using hb.2
  unfold freelinkProcess
  simp [hFF, h1, h2]

theorem findSub_route (pre suf : List Nat) (h : ∀ b ∈ pre, b ≠ 35) :
    findSub [47, 35, 47] (pre ++ [47, 35, 47] ++ suf) = some pre.length := by
  induction pre with
  | nil => simp [findSub]
  | cons b bs ih =>
      simp only [List.cons_append, List.length_cons, findSub]
      have htake : (((b :: bs) ++ [47, 35, 47] ++ suf).take 3 == [47, 35, 47]) = false := by
        cases bs with
        | nil =>
            simp [List.take, List.append_assoc]
        | cons b2 bs2 =>
            rw [Bool.eq_false_iff]
            intro heq
            have heq' : (b :: b2 :: (bs2 ++ [47, 35, 47] ++ suf)).take 3 = [47, 35, 47] := by
              simpa [beq_iff_eq] using heq
            simp [List.take] at heq'
            have hb2 : b2 = 35 := by
              injection heq' with _ hrest
              injection hrest with hb2
              exact hb2
            exact h b2 (by simp) hb2
      have ih' := ih (fun x hx => h x (List.mem_cons_of_mem b hx))
      simp [htake, ih']

theorem route_hash_count (pre suf : List Nat)
    (hp : ∀ b ∈ pre, b ≠ 35) (hs : ∀ b ∈ suf, b ≠ 35) :
    ((pre ++ [47, 35, 47] ++ suf).filter (· == 35)).length = 1 := by
  have hp0 := filter_ne_length pre hp
  have hs0 := filter_ne_length suf hs
  simp [List.filter_append, hp0, hs0]

/-! ## A lead run is not a URL, and the page is the suffix -/

theorem roster_bytes_safe :
    leadRoster.all (fun cp => (encodeCp cp).all byteSafe) = true := by
  decide

theorem lead_bytes_safe (cp : Nat) (h : isDefaultLeadCp cp = true) :
    ∀ b ∈ encodeCp cp, byteSafe b = true := by
  have hm := (isDefaultLeadCp_iff_mem cp).mp h
  have hall := roster_bytes_safe
  simp only [List.all_eq_true] at hall
  have ht := hall cp hm
  simp only [List.all_eq_true] at ht
  exact ht

theorem encode_run_safe (cps : List Nat) (h : ∀ cp ∈ cps, isDefaultLeadCp cp = true) :
    ∀ b ∈ encodeCps cps, byteSafe b = true := by
  induction cps with
  | nil => simp [encodeCps]
  | cons cp cps ih =>
      intro b hb
      simp only [encodeCps, List.mem_append] at hb
      rcases hb with hb | hb
      · exact lead_bytes_safe cp (h cp (by simp)) b hb
      · exact ih (fun c hc => h c (by simp [hc])) b hb

private theorem and_left {a b : Bool} (h : (a && b) = true) : a = true := by
  cases a <;> cases b <;> simp_all

private theorem and_right {a b : Bool} (h : (a && b) = true) : b = true := by
  cases a <;> cases b <;> simp_all

private theorem ne_of_bne {b n : Nat} (h : (b != n) = true) : b ≠ n := by
  simpa [bne, beq_eq_false_iff_ne] using h

theorem byteSafe_letter (b : Nat) (h : byteSafe b = true) : isAsciiLetter b = false := by
  unfold byteSafe at h
  have h1 := and_left (and_left (and_left (and_left (and_left h))))
  cases hx : isAsciiLetter b with
  | true => simp [hx] at h1
  | false => exact rfl

theorem byteSafe_ne (b n : Nat) (h : byteSafe b = true)
    (hn : n = 35 ∨ n = 124 ∨ n = 255 ∨ n = 58 ∨ n = 47) : b ≠ n := by
  unfold byteSafe at h
  have h47 := ne_of_bne (and_right h)
  have h' := and_left h
  have h58 := ne_of_bne (and_right h')
  have h'' := and_left h'
  have h255 := ne_of_bne (and_right h'')
  have h''' := and_left h''
  have h124 := ne_of_bne (and_right h''')
  have h35 := ne_of_bne (and_right (and_left h'''))
  rcases hn with rfl | rfl | rfl | rfl | rfl
  · exact h35
  · exact h124
  · exact h255
  · exact h58
  · exact h47

theorem underscore_safe : byteSafe 0x5F = true := by decide

theorem prefix_letter_false (cps : List Nat) (h : ∀ cp ∈ cps, isDefaultLeadCp cp = true) :
    ∀ b ∈ encodeCps cps ++ [0x5F], isAsciiLetter b = false := by
  intro b hb
  simp only [List.mem_append, List.mem_singleton] at hb
  rcases hb with hb | rfl
  · exact byteSafe_letter b (encode_run_safe cps h b hb)
  · decide

theorem schemes_letter_head :
    freelinkSchemes.all (fun s =>
      match s with
      | c :: _ => isAsciiLetter c
      | [] => false) = true := by
  decide

theorem swap_letter (c : Nat) (hc : isAsciiLetter c = true) :
    isAsciiLetter (swapByteCase c) = true := by
  simp only [isAsciiLetter, Bool.or_eq_true, Bool.and_eq_true, decide_eq_true_eq] at hc
  rcases hc with ⟨hlo, hhi⟩ | ⟨hlo, hhi⟩
  · have hlow : decide (97 ≤ c) = false := by
      simp [decide_eq_false_iff_not]
      omega
    have hup : (decide (65 ≤ c) && decide (c ≤ 90)) = true := by simp [hlo, hhi]
    simp only [swapByteCase, hlow, ite_false, hup, ite_true]
    have : 97 ≤ c + 32 ∧ c + 32 ≤ 122 := by omega
    simp [isAsciiLetter, this]
  · have hlow : (decide (97 ≤ c) && decide (c ≤ 122)) = true := by simp [hlo, hhi]
    simp only [swapByteCase, hlow, ite_true]
    have : 65 ≤ c - 32 ∧ c - 32 ≤ 90 := by omega
    simp [isAsciiLetter, this]

theorem byteCiEq_letter_mismatch {x c : Nat}
    (hx : isAsciiLetter x = false) (hc : isAsciiLetter c = true) :
    byteCiEq x c = false := by
  rw [Bool.eq_false_iff]
  intro hbeq
  simp only [byteCiEq, Bool.or_eq_true, beq_iff_eq] at hbeq
  rcases hbeq with rfl | hswap
  · simp [hc] at hx
  · have hletter := swap_letter c hc
    rw [← hswap] at hletter
    simp [hletter] at hx

theorem isUrlTarget_nonletter (b : Nat) (rest : List Nat)
    (hb : isAsciiLetter b = false) :
    isUrlTarget (b :: rest) = false := by
  rw [Bool.eq_false_iff]
  intro hany
  unfold isUrlTarget at hany
  simp only [List.any_eq_true] at hany
  rcases hany with ⟨s, hs, hmatch⟩
  have hschemes := schemes_letter_head
  simp only [List.all_eq_true] at hschemes
  have hc := hschemes s hs
  cases s with
  | nil => simp at hc
  | cons c cs =>
      simp only at hc
      have hci : byteCiEq b c = false := byteCiEq_letter_mismatch hb hc
      simp [matchLitCI, hci] at hmatch

theorem isUrlTarget_empty : isUrlTarget [] = false := by decide

theorem dropWhile_head_false (bs : List Nat) (b : Nat) (rest : List Nat)
    (h : bs.dropWhile isTrimByte = b :: rest) : isTrimByte b = false := by
  induction bs generalizing b rest with
  | nil => simp at h
  | cons x xs ih =>
      by_cases hx : isTrimByte x = true
      · simp [List.dropWhile, hx] at h
        exact ih h
      · simp [List.dropWhile, hx] at h
        rcases h with ⟨rfl, _⟩
        cases hv : isTrimByte b <;> simp_all

theorem dropWhile_getLast_keep (ys : List Nat) (b : Nat) (hb : isTrimByte b = false) :
    ((ys ++ [b]).dropWhile isTrimByte).getLast? = some b := by
  induction ys with
  | nil => simp [List.dropWhile, hb]
  | cons y ys ih =>
      by_cases hy : isTrimByte y = true
      · simp [List.dropWhile, hy, ih]
      · have hy' : isTrimByte y = false := by cases hv : isTrimByte y <;> simp_all
        simp [List.dropWhile, hy', List.cons_append, List.getLast?_append]

theorem trim_head_of_drop (bs : List Nat) (b : Nat) (rest : List Nat)
    (h : bs.dropWhile isTrimByte = b :: rest) :
    (trimBytes bs).head? = some b := by
  have hb := dropWhile_head_false bs b rest h
  simp only [trimBytes, h, List.reverse_cons, List.head?_reverse]
  exact dropWhile_getLast_keep rest.reverse b hb

theorem rev_drop_starts (xs : List Nat) (c b : Nat)
    (h : isTrimByte c = false ∨ ∃ y ∈ xs, isTrimByte y = false) :
    ∃ zs, ((xs ++ [c, b]).dropWhile isTrimByte).reverse = b :: c :: zs := by
  induction xs with
  | nil =>
      have hc : isTrimByte c = false := by simpa using h
      refine ⟨[], ?_⟩
      simp [List.dropWhile, hc]
  | cons x xs ih =>
      by_cases hx : isTrimByte x = true
      · have h' : isTrimByte c = false ∨ ∃ y ∈ xs, isTrimByte y = false := by
          rcases h with hc | ⟨y, hy, hyt⟩
          · exact Or.inl hc
          · simp only [List.mem_cons] at hy
            rcases hy with rfl | hy
            · simp [hx] at hyt
            · exact Or.inr ⟨y, hy, hyt⟩
        simpa [List.dropWhile, hx, List.cons_append] using ih h'
      · have hx' : isTrimByte x = false := by cases hv : isTrimByte x <;> simp_all
        refine ⟨xs.reverse ++ [x], ?_⟩
        simp [List.dropWhile, hx', List.reverse_append, List.reverse_cons, List.append_assoc]

/-- The left-trim of a lead run followed by `_` stops on a non-letter, and a leading `*` exposes another non-letter. -/
theorem prefix_shape (pre post : List Nat)
    (hletters : ∀ b ∈ pre, isAsciiLetter b = false)
    (hlast : pre.getLast? = some 0x5F)
    (h5 : isTrimByte 0x5F = false) :
    ∃ b rest, (pre ++ post).dropWhile isTrimByte = b :: rest ∧
      isAsciiLetter b = false ∧ isTrimByte b = false ∧
      0x5F ∈ b :: rest ∧
      (b = 42 → ∃ c rest2, rest = c :: rest2 ∧ isAsciiLetter c = false) := by
  induction pre with
  | nil => simp at hlast
  | cons x xs ih =>
      by_cases hx : isTrimByte x = true
      · have hlast' : xs.getLast? = some 0x5F := by
          cases xs with
          | nil =>
              simp at hlast
              simp [hlast, h5] at hx
          | cons y ys =>
              simp [List.getLast?_cons] at hlast ⊢
              exact hlast
        exact ih (fun b hb => hletters b (List.mem_cons_of_mem x hb)) hlast'
      · have hx' : isTrimByte x = false := by cases hv : isTrimByte x <;> simp_all
        refine ⟨x, xs ++ post, by simp [List.dropWhile, hx'], hletters x (by simp), hx', ?_, ?_⟩
        · have hmem : 0x5F ∈ x :: xs := List.mem_of_getLast? hlast
          simp only [List.mem_cons] at hmem ⊢
          rcases hmem with rfl | hmem
          · exact Or.inl rfl
          · exact Or.inr (List.mem_append_left _ hmem)
        · intro hstar
          cases xs with
          | nil =>
              simp [hstar] at hlast
          | cons y ys =>
              exact ⟨y, ys ++ post, by simp, hletters y (by simp)⟩

/-- The target after the same trim and one-star strip `freelinkProcess` uses before the URL test. -/
def afterStar (raw : List Nat) : List Nat :=
  let leadingSpace := raw.head? == some 32 || raw.head? == some 9
  let trimmed0 := trimBytes raw
  let starUrl := !leadingSpace && trimmed0.head? == some 42
  if starUrl then trimmed0.tail else trimmed0

/-- The URL-branch condition of `freelinkProcess`, written so it matches the lets in that definition. -/
def urlBranch (raw : List Nat) : Bool :=
  let leadingSpace := raw.head? == some 32 || raw.head? == some 9
  !leadingSpace && isUrlTarget (afterStar raw)

theorem underscore_not_trim : isTrimByte 0x5F = false := by decide

theorem urlBranch_lead (cps suf : List Nat) (hlead : ∀ cp ∈ cps, isDefaultLeadCp cp = true) :
    urlBranch (encodeCps cps ++ litBytes "_default:" ++ suf) = false := by
  let pre := encodeCps cps ++ [0x5F]
  let post := litBytes "default:" ++ suf
  have hraw : encodeCps cps ++ litBytes "_default:" ++ suf = pre ++ post := by
    simp [pre, post, litBytes, List.append_assoc]
  rw [hraw]
  have hletters := prefix_letter_false cps hlead
  have hlast : pre.getLast? = some 0x5F := by simp [pre]
  obtain ⟨b, rest, hdrop, hbL, hbT, hmem, hstar⟩ :=
    prefix_shape pre post hletters hlast underscore_not_trim
  have hhead : (trimBytes (pre ++ post)).head? = some b :=
    trim_head_of_drop _ b rest hdrop
  unfold urlBranch afterStar
  by_cases hsp : ((pre ++ post).head? == some 32 || (pre ++ post).head? == some 9) = true
  · simp [hsp]
  · have hsp' : ((pre ++ post).head? == some 32 || (pre ++ post).head? == some 9) = false := by
      cases hx : ((pre ++ post).head? == some 32 || (pre ++ post).head? == some 9) <;> simp_all
    simp [hsp', hhead]
    by_cases hb42 : b = 42
    · obtain ⟨c, rest2, hrest, hc⟩ := hstar hb42
      have hkeep : isTrimByte c = false ∨ ∃ y ∈ rest2, isTrimByte y = false := by
        have h5 : 0x5F ∈ b :: rest := hmem
        simp only [hb42, List.mem_cons, hrest] at h5
        rcases h5 with h5 | h5 | h5
        · exact absurd h5 (by decide)
        · exact Or.inl (by simpa [h5] using underscore_not_trim)
        · exact Or.inr ⟨0x5F, h5, underscore_not_trim⟩
      obtain ⟨zs, htrim⟩ := rev_drop_starts rest2.reverse c b (by
        rcases hkeep with hc0 | ⟨y, hy, hyt⟩
        · exact Or.inl hc0
        · exact Or.inr ⟨y, by simpa using hy, hyt⟩)
      have hL : (pre ++ post).dropWhile isTrimByte = b :: c :: rest2 := by
        simp [hdrop, hrest]
      have htrimB : trimBytes (pre ++ post) = b :: c :: zs := by
        simp only [trimBytes, hL, List.reverse_cons, List.append_assoc, List.head?_reverse]
        simpa [List.reverse_cons, List.append_assoc] using htrim
      simp [htrimB, hb42, isUrlTarget_nonletter c zs hc]
    · have hbnot : (b == 42) = false := by simpa [beq_eq_false_iff_ne] using hb42
      have htrimB : ∃ zs, trimBytes (pre ++ post) = b :: zs := by
        have : (trimBytes (pre ++ post)).head? = some b := hhead
        cases ht : trimBytes (pre ++ post) with
        | nil => simp [ht] at this
        | cons b' zs =>
            have : b' = b := by simpa [ht] using this
            exact ⟨zs, by simp [ht, this]⟩
      obtain ⟨zs, htrimB⟩ := htrimB
      simp [htrimB, hbnot, isUrlTarget_nonletter b zs hbL]

theorem any_false_of (bs : List Nat) (p : Nat → Bool) (h : ∀ b ∈ bs, p b = false) :
    bs.any p = false := by
  induction bs with
  | nil => simp
  | cons b bs ih =>
      simp [List.any, h b (List.mem_cons_self _ _),
        ih (fun x hx => h x (List.mem_cons_of_mem _ hx))]

theorem default_bytes_ne (n : Nat) (hn : n = 35 ∨ n = 255) :
    ∀ b ∈ litBytes "_default:", b ≠ n := by
  intro b hb
  simp [litBytes] at hb
  rcases hn with rfl | rfl
  · rcases hb with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl <;> decide
  · rcases hb with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl <;> decide

theorem raw_no_hash (cps suf : List Nat)
    (hlead : ∀ cp ∈ cps, isDefaultLeadCp cp = true) (hs : ∀ b ∈ suf, b ≠ 35) :
    ∀ b ∈ encodeCps cps ++ litBytes "_default:" ++ suf, b ≠ 35 := by
  intro b hb
  simp only [List.mem_append] at hb
  rcases hb with hb | hb | hb
  · exact byteSafe_ne b 35 (encode_run_safe cps hlead b hb) (by simp)
  · exact default_bytes_ne 35 (by simp) b hb
  · exact hs b hb

theorem raw_no_ff (cps suf : List Nat)
    (hlead : ∀ cp ∈ cps, isDefaultLeadCp cp = true) (hs : ∀ b ∈ suf, b ≠ 255) :
    ∀ b ∈ encodeCps cps ++ litBytes "_default:" ++ suf, b ≠ 255 := by
  intro b hb
  simp only [List.mem_append] at hb
  rcases hb with hb | hb | hb
  · exact byteSafe_ne b 255 (encode_run_safe cps hlead b hb) (by simp)
  · exact default_bytes_ne 255 (by simp) b hb
  · exact hs b hb

theorem full_no_ff (raw : List Nat) (h : ∀ b ∈ raw, b ≠ 255) :
    (litBytes "[[[" ++ raw ++ litBytes "]]]").any (fun b => b == 255) = false := by
  apply any_false_of
  intro b hb
  simp only [List.mem_append] at hb
  rcases hb with hb | hb | hb
  · simp [litBytes] at hb
    rcases hb with rfl | rfl | rfl <;> decide
  · simpa [beq_eq_false_iff_ne] using h b hb
  · simp [litBytes] at hb
    rcases hb with rfl | rfl | rfl <;> decide

theorem any_high_false (bs : List Nat) (h : ∀ b ∈ bs, b < 128) :
    bs.any (fun b => decide (128 ≤ b)) = false := by
  apply any_false_of
  intro b hb
  simp [decide_eq_false_iff_not]
  have := h b hb
  omega

/-- A hash-free ASCII suffix after any lead run stores `toUnixName` of that suffix as the page. The URL branch is not taken: every lead byte and the `_` of `_default:` fails the scheme head. -/
theorem freelink_default_page (cps suf : List Nat)
    (hlead : ∀ cp ∈ cps, isDefaultLeadCp cp = true)
    (h35 : ∀ b ∈ suf, b ≠ 35)
    (hff : ∀ b ∈ suf, b ≠ 255)
    (hsuf : ∀ b ∈ suf, b < 128) :
    let raw := encodeCps cps ++ litBytes "_default:" ++ suf
    let full := litBytes "[[[" ++ raw ++ litBytes "]]]"
    match (freelinkProcess full raw [] []).2 with
    | [] => False
    | t :: rest =>
        rest = [] ∧ omGet t.opts ("page".toList) = some (textVal (toUnixName suf)) := by
  let raw := encodeCps cps ++ litBytes "_default:" ++ suf
  let full := litBytes "[[[" ++ raw ++ litBytes "]]]"
  have hno35 := raw_no_hash cps suf hlead h35
  have hnoff := raw_no_ff cps suf hlead hff
  have hany := full_no_ff raw hnoff
  have hhashsub : findSub [35, 35] raw = none :=
    findSub_missing [35, 35] raw 35 (by simp) hno35 (by simp)
  have hroute : findSub [47, 35, 47] raw = none :=
    findSub_missing [47, 35, 47] raw 35 (by simp) hno35 (by simp)
  have hone : findSub [35] raw = none :=
    findSub_missing [35] raw 35 (by simp) hno35 (by simp)
  have hcount : (raw.filter (· == 35)).length = 0 := filter_ne_length raw hno35
  have hurl : urlBranch raw = false := urlBranch_lead cps suf hlead
  have hskip := skip_leads_then_default cps suf hlead
  have hmatch := matchLitCI_refl_append (litBytes "_default:") suf
  have hhigh := any_high_false suf hsuf
  have hlit : litBytes "/#/" = [47, 35, 47] := by simp [litBytes]
  have hlit2 : litBytes "##" = [35, 35] := by simp [litBytes]
  unfold freelinkProcess
  simp [hany, hhashsub, hroute, hone, hcount, hurl, urlBranch, afterStar, hskip, hmatch, hhigh,
    hlit, hlit2, raw]

/-! ## Closed checks: roster pages, hash routes, Cf witnesses -/

def freelinkOpt (raw : List Nat) (key : String) : Option OptVal :=
  match (freelinkProcess (litBytes "[[[" ++ raw ++ litBytes "]]]") raw [] []).2 with
  | [t] => omGet t.opts key.toList
  | _ => none

def strOpt (raw : List Nat) (key s : String) : Bool :=
  match freelinkOpt raw key with
  | some (OptVal.str t) => t == s.toList
  | _ => false

def claimedNone (raw : List Nat) : Bool :=
  (freelinkProcess (litBytes "[[[" ++ raw ++ litBytes "]]]") raw [] []).2.isEmpty

/-- Every roster lead, alone in front of `_default:x`, stores the page `x`. -/
theorem roster_page_x :
    leadRoster.all (fun cp => strOpt (encodeCp cp ++ litBytes "_default:x") "page" "x") = true := by
  decide

/-- A run of the two REFCORR11 Cf leads still strips to page `x`. -/
theorem cf5d_run_page :
    strOpt (encodeCp 0x200B ++ encodeCp 0x2060 ++ litBytes "_default:x") "page" "x" = true := by
  decide

/-- Round-5e U+200C is not a lead: the mirror's page keeps `_default:x`. -/
theorem cf5e_zwnj_page :
    strOpt (encodeCp 0x200C ++ litBytes "_default:x") "page" "_default:x" = true := by
  decide

/-- Round-5e U+2061 is not a lead: the mirror's page keeps `_default:x`. -/
theorem cf5e_fa_page :
    strOpt (encodeCp 0x2061 ++ litBytes "_default:x") "page" "_default:x" = true := by
  decide

theorem cf_zwj_page :
    strOpt (encodeCp 0x200D ++ litBytes "_default:x") "page" "_default:x" = true := by
  decide

theorem cf_2062_page :
    strOpt (encodeCp 0x2062 ++ litBytes "_default:x") "page" "_default:x" = true := by
  decide

theorem cf_2063_page :
    strOpt (encodeCp 0x2063 ++ litBytes "_default:x") "page" "_default:x" = true := by
  decide

theorem cf_2064_page :
    strOpt (encodeCp 0x2064 ++ litBytes "_default:x") "page" "_default:x" = true := by
  decide

/-- Overlong U+00A0 (`E0 82 A0`) decodes as a lead. The reference byte class does not contain this sequence. -/
theorem overlong_nbsp_decoded :
    leadCpLen [0xE0, 0x82, 0xA0] = (0xA0, 3) := by
  decide

theorem overlong_nbsp_page :
    strOpt ([0xE0, 0x82, 0xA0] ++ litBytes "_default:x") "page" "x" = true := by
  decide

theorem canonical_nbsp_page :
    strOpt (encodeCp 0xA0 ++ litBytes "_default:x") "page" "x" = true := by
  decide

/-- Uniform multi-hash rejection on the shapes the correction rounds named. -/
theorem multi_hash_shapes :
    claimedNone (litBytes "a##b") &&
      claimedNone (litBytes "a#b#c") &&
      claimedNone (litBytes "home###") &&
      claimedNone (litBytes "foo/#/bar#baz") &&
      claimedNone (litBytes "a/#/b/#/c") &&
      claimedNone (litBytes "#a") = true := by
  decide

/-- A single `/#/` route still links, and the auto label keeps the slash the peel drops from the slug. -/
theorem single_route_shapes :
    strOpt (litBytes "foo/#/bar") "page" "foo" &&
      strOpt (litBytes "foo/#/bar") "text" "foo/" &&
      strOpt (litBytes "foo/#/bar") "extra" "#/bar" &&
      strOpt (litBytes "foo/#/bar") "anchor" "" &&
      strOpt (litBytes "foo/#/") "page" "foo" &&
      strOpt (litBytes "foo/#/") "text" "foo/" &&
      strOpt (litBytes "foo/#/") "extra" "#/" &&
      strOpt (litBytes "/#/bar") "page" "" &&
      strOpt (litBytes "/#/bar") "text" "/" &&
      strOpt (litBytes "/#/bar") "extra" "#/bar" = true := by
  decide

/-- A single hash anchor peels off the slug and keeps the `#` in the anchor option. -/
theorem single_anchor_shape :
    strOpt (litBytes "foo#bar") "page" "foo" &&
      strOpt (litBytes "foo#bar") "anchor" "#bar" &&
      strOpt (litBytes "foo#bar") "text" "foo" &&
      strOpt (litBytes "foo#bar") "extra" "" = true := by
  decide

end LeanFtml

#print axioms LeanFtml.isDefaultLeadCp_iff_mem
#print axioms LeanFtml.leadCpLen_encode
#print axioms LeanFtml.skipDefaultLead_run
#print axioms LeanFtml.skip_leads_then_default
#print axioms LeanFtml.freelinkProcess_multi_hash
#print axioms LeanFtml.freelinkProcess_hashhash
#print axioms LeanFtml.freelinkProcess_hash_lead
#print axioms LeanFtml.findSub_route
#print axioms LeanFtml.urlBranch_lead
#print axioms LeanFtml.freelink_default_page
#print axioms LeanFtml.roster_page_x
#print axioms LeanFtml.cf5d_run_page
#print axioms LeanFtml.cf5e_zwnj_page
#print axioms LeanFtml.cf5e_fa_page
#print axioms LeanFtml.overlong_nbsp_decoded
#print axioms LeanFtml.overlong_nbsp_page
#print axioms LeanFtml.multi_hash_shapes
#print axioms LeanFtml.single_route_shapes
#print axioms LeanFtml.single_anchor_shape
