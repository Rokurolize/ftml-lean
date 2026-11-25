import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000
set_option maxRecDepth 400000

namespace LeanFtml.ModulePassTokenStabilityProof

/-! Parse-only token stability for the Module pass. The termination file's fixpoint notion is byte stability of moduleScanPass; this file studies the stronger full-state notion that would also require token-table stability. All statements are about the mirror functions in ModuleRules.lean and no module evaluation is involved. -/

/-! ## Local facts about the opener literal and the claim replacement -/

theorem matchLitCI_head_fixed {p : Nat} (hfix : swapByteCase p = p)
    {pat src rest : List Nat} (h : matchLitCI (p :: pat) src = some rest) :
    src.head? = some p := by
  cases src with
  | nil => simp [matchLitCI] at h
  | cons x xs =>
      by_cases hx : byteCiEq x p
      · have hxp : x = p := by
          simpa [byteCiEq, hfix] using hx
        simp [hxp]
      · simp [matchLitCI, hx] at h

theorem litBytes_module_head {src rest : List Nat}
    (h : matchLitCI (litBytes "[[module") src = some rest) :
    src.head? = some 91 := by
  have hfix : swapByteCase 91 = 91 := by decide
  have hlit : litBytes "[[module" = 91 :: litBytes "[module" := by decide
  rw [hlit] at h
  exact matchLitCI_head_fixed hfix h

theorem moduleHead_matchLitCI_some {lit src name cands}
    (h : moduleHead lit src = some (name, cands)) :
    ∃ r, matchLitCI lit src = some r := by
  unfold moduleHead at h
  cases hm0 : matchLitCI lit src with
  | none => simp [hm0] at h
  | some r => exact ⟨r, rfl⟩

theorem moduleMatch_head_91 {src toks repl rest' t1}
    (h : moduleMatch src toks = some (repl, rest', t1)) :
    src.head? = some 91 := by
  unfold moduleMatch at h
  cases hh : moduleHead (litBytes "[[module") src with
  | none => simp [hh] at h
  | some pair =>
      obtain ⟨r, hr⟩ := moduleHead_matchLitCI_some hh
      exact litBytes_module_head hr

theorem claimModule_table_grows (rule : String) (name attr body : List Nat)
    (toks : List TokenEntry) :
    (claimModule rule name attr body toks).2 ≠ toks := by
  intro h
  have hl := congrArg List.length h
  simp [claimModule] at hl

/-! ## A claim branch is recognised by its token table and begins with LF -/

theorem moduleTryCands_tokens_or_head (src name : List Nat) (toks : List TokenEntry) :
    ∀ (cands : List (List Nat × List Nat)) (repl rest' : List Nat) (t1 : List TokenEntry),
      moduleTryCands src name toks cands = some (repl, rest', t1) →
      t1 = toks ∨ repl.head? = some 10 := by
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
          exact ih repl rest' t1 h
      | some pair =>
          rcases pair with ⟨bodyRaw, r'⟩
          by_cases hhtml : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = true
          · simp [moduleTryCands, htail, hhtml, claimModule] at h
            right
            rw [← h.1]
            simp
          · by_cases hdef : 1 < countModuleOpeners none
                (src.take (src.length - r'.length)) (src.length - r'.length + 1)
            · simp [moduleTryCands, htail, hhtml, hdef] at h
              exact Or.inl h.2.2.symm
            · simp [moduleTryCands, htail, hhtml, hdef, claimModule] at h
              right
              rw [← h.1]
              simp

theorem moduleTryCands_claim_appends (src name : List Nat) (toks : List TokenEntry) :
    ∀ (cands : List (List Nat × List Nat)) (repl rest' : List Nat) (t1 : List TokenEntry),
      moduleTryCands src name toks cands = some (repl, rest', t1) →
      t1 ≠ toks → ∃ e : TokenEntry, t1 = toks ++ [e] := by
  intro cands
  induction cands with
  | nil =>
      intro repl rest' t1 h ht1
      simp [moduleTryCands] at h
  | cons cand more ih =>
      rcases cand with ⟨attrRaw, r⟩
      intro repl rest' t1 h ht1
      cases htail : moduleTail r with
      | none =>
          simp [moduleTryCands, htail] at h
          exact ih repl rest' t1 h ht1
      | some pair =>
          rcases pair with ⟨bodyRaw, r'⟩
          by_cases hhtml : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = true
          · simp [moduleTryCands, htail, hhtml, claimModule] at h
            exact ⟨_, h.2.2.symm⟩
          · by_cases hdef : 1 < countModuleOpeners none
                (src.take (src.length - r'.length)) (src.length - r'.length + 1)
            · simp [moduleTryCands, htail, hhtml, hdef] at h
              exact False.elim (ht1 h.2.2.symm)
            · simp [moduleTryCands, htail, hhtml, hdef, claimModule] at h
              exact ⟨_, h.2.2.symm⟩

theorem moduleMatch_claim_head {src toks repl rest' t1}
    (h : moduleMatch src toks = some (repl, rest', t1)) (ht1 : t1 ≠ toks) :
    repl.head? = some 10 := by
  unfold moduleMatch at h
  cases hh : moduleHead (litBytes "[[module") src with
  | none => simp [hh] at h
  | some pair =>
      rcases pair with ⟨name, cands⟩
      have ht : moduleTryCands src name toks cands = some (repl, rest', t1) := by
        simpa [hh] using h
      rcases moduleTryCands_tokens_or_head src name toks cands repl rest' t1 ht with heq | hhead
      · exact False.elim (ht1 heq)
      · exact hhead

theorem moduleMatch_claim_appends {src toks repl rest' t1}
    (h : moduleMatch src toks = some (repl, rest', t1)) (ht1 : t1 ≠ toks) :
    ∃ e : TokenEntry, t1 = toks ++ [e] := by
  unfold moduleMatch at h
  cases hh : moduleHead (litBytes "[[module") src with
  | none => simp [hh] at h
  | some pair =>
      rcases pair with ⟨name, cands⟩
      have ht : moduleTryCands src name toks cands = some (repl, rest', t1) := by
        simpa [hh] using h
      exact moduleTryCands_claim_appends src name toks cands repl rest' t1 ht ht1

/-! ## Byte divergence caused by a claim at a line-start head -/

theorem claim_branch_output_differs_top (prev : Option Nat) (src : List Nat)
    (toks : List TokenEntry) (fuel : Nat) (out : List Nat) (t : List TokenEntry)
    (hline : (prev == none || prev == some 10) = true)
    (hclaim : ∃ repl rest' t1,
      moduleMatch src toks = some (repl, rest', t1) ∧ t1 ≠ toks)
    (hs : moduleScanPass prev src toks (fuel + 1) = (out, t)) :
    out ≠ src := by
  rcases hclaim with ⟨repl, rest', t1, hm, ht1⟩
  have hrepl := moduleMatch_claim_head hm ht1
  have hhead := moduleMatch_head_91 hm
  have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
  cases src with
  | nil => simp at hhead
  | cons b rest =>
      have hb : b = 91 := by simpa using hhead
      let o := (moduleScanPass (lastConsumedByte (b :: rest) rest') rest' t1 fuel).1
      let tt := (moduleScanPass (lastConsumedByte (b :: rest) rest') rest' t1 fuel).2
      have hpair : repl ++ o = out ∧ tt = t := by
        simpa [moduleScanPass, hlineP, hm, o, tt] using hs
      intro heq
      have hout_head : out.head? = some 10 := by
        rw [← hpair.1]
        cases repl with
        | nil => simp at hrepl
        | cons r rs => simpa using hrepl
      rw [heq] at hout_head
      simp [hb] at hout_head

/-! ## Whole-pass partial law under the no-earlier-change hypothesis -/

/-- The scan path reaches a claim with every earlier emission copied verbatim. There is deliberately no constructor for a byte-changing defense branch before the claim: such a branch is exactly what the full law cannot rule out. -/
inductive ReachesClaim : Option Nat → List Nat → List TokenEntry → Nat → Prop where
  | at_head (prev : Option Nat) (src : List Nat) (toks : List TokenEntry)
      (fuel : Nat) (repl rest' : List Nat) (t1 : List TokenEntry) :
      (prev == none || prev == some 10) = true →
      moduleMatch src toks = some (repl, rest', t1) →
      t1 ≠ toks →
      ReachesClaim prev src toks (fuel + 1)
  | copy_none (prev : Option Nat) (toks : List TokenEntry)
      (fuel : Nat) (b : Nat) (rest : List Nat) :
      (prev == none || prev == some 10) = true →
      moduleMatch (b :: rest) toks = none →
      ReachesClaim (some b) rest toks fuel →
      ReachesClaim prev (b :: rest) toks (fuel + 1)
  | copy_notline (prev : Option Nat) (toks : List TokenEntry)
      (fuel : Nat) (b : Nat) (rest : List Nat) :
      (prev == none || prev == some 10) = false →
      ReachesClaim (some b) rest toks fuel →
      ReachesClaim prev (b :: rest) toks (fuel + 1)

theorem reachesClaim_output_differs {prev src toks fuel out t}
    (hrc : ReachesClaim prev src toks fuel)
    (hs : moduleScanPass prev src toks fuel = (out, t)) : out ≠ src := by
  revert out t
  induction hrc with
  | at_head prev src toks fuel repl rest' t1 hline hm ht1 =>
      intro out t hs
      exact claim_branch_output_differs_top prev src toks fuel out t hline
        ⟨repl, rest', t1, hm, ht1⟩ hs
  | copy_none prev toks fuel b rest hline hm hrec ih =>
      intro out t hs
      have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
      cases hs' : moduleScanPass (some b) rest toks fuel with
      | mk o tt =>
          have ihne : o ≠ rest := ih (out := o) (t := tt) hs'
          have hp : b :: o = out ∧ tt = t := by
            simpa [moduleScanPass, hlineP, hm, hs'] using hs
          intro heq
          exact ihne (List.cons.inj (hp.1.trans heq)).2
  | copy_notline prev toks fuel b rest hnot hrec ih =>
      intro out t hs
      have hnotP : ¬ (prev = none ∨ prev = some 10) := by
        intro h
        cases h with
        | inl hnone =>
            subst prev
            simp at hnot
        | inr hsome =>
            subst prev
            simp at hnot
      cases hs' : moduleScanPass (some b) rest toks fuel with
      | mk o tt =>
          have ihne : o ≠ rest := ih (out := o) (t := tt) hs'
          have hp : b :: o = out ∧ tt = t := by
            simpa [moduleScanPass, hnotP, hs'] using hs
          intro heq
          exact ihne (List.cons.inj (hp.1.trans heq)).2

theorem moduleScanPass_bytes_eq_no_claim_on_verbatim_path {prev src toks fuel out t}
    (hs : moduleScanPass prev src toks fuel = (out, t)) (heq : out = src) :
    ¬ ReachesClaim prev src toks fuel := by
  intro hrc
  exact (reachesClaim_output_differs hrc hs) heq

/-! ## Token-table stability with an explicit no-claim hypothesis -/

/-- The scan path contains no claim branch; copies and byte-changing defense branches are allowed because neither extends the token table. -/
inductive ScanNoClaim : Option Nat → List Nat → List TokenEntry → Nat → Prop where
  | zero (prev : Option Nat) (src : List Nat) (toks : List TokenEntry) :
      ScanNoClaim prev src toks 0
  | nil (prev : Option Nat) (toks : List TokenEntry) (fuel : Nat) :
      ScanNoClaim prev [] toks (fuel + 1)
  | copy_line (prev : Option Nat) (toks : List TokenEntry)
      (fuel : Nat) (b : Nat) (rest : List Nat) :
      (prev == none || prev == some 10) = true →
      moduleMatch (b :: rest) toks = none →
      ScanNoClaim (some b) rest toks fuel →
      ScanNoClaim prev (b :: rest) toks (fuel + 1)
  | copy_notline (prev : Option Nat) (toks : List TokenEntry)
      (fuel : Nat) (b : Nat) (rest : List Nat) :
      (prev == none || prev == some 10) = false →
      ScanNoClaim (some b) rest toks fuel →
      ScanNoClaim prev (b :: rest) toks (fuel + 1)
  | defense (prev : Option Nat) (toks : List TokenEntry)
      (fuel : Nat) (b : Nat) (rest : List Nat)
      (repl rest' : List Nat) (t1 : List TokenEntry) :
      (prev == none || prev == some 10) = true →
      moduleMatch (b :: rest) toks = some (repl, rest', t1) →
      t1 = toks →
      ScanNoClaim (lastConsumedByte (b :: rest) rest') rest' t1 fuel →
      ScanNoClaim prev (b :: rest) toks (fuel + 1)

theorem scanNoClaim_tokens {prev src toks fuel out t}
    (h : ScanNoClaim prev src toks fuel)
    (hs : moduleScanPass prev src toks fuel = (out, t)) : t = toks := by
  revert out t
  induction h with
  | zero prev src toks =>
      intro out t hs
      have h' : toks = t := by simpa [moduleScanPass] using congrArg Prod.snd hs
      exact h'.symm
  | nil prev toks fuel =>
      intro out t hs
      have h' : toks = t := by simpa [moduleScanPass] using congrArg Prod.snd hs
      exact h'.symm
  | copy_line prev toks fuel b rest hline hm hrec ih =>
      intro out t hs
      have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
      cases hs' : moduleScanPass (some b) rest toks fuel with
      | mk o tt =>
          have ihres : tt = toks := ih (out := o) (t := tt) hs'
          have hp : b :: o = out ∧ tt = t := by
            simpa [moduleScanPass, hlineP, hm, hs'] using hs
          exact hp.2.symm.trans ihres
  | copy_notline prev toks fuel b rest hnot hrec ih =>
      intro out t hs
      have hnotP : ¬ (prev = none ∨ prev = some 10) := by
        intro h
        cases h with
        | inl hnone =>
            subst prev
            simp at hnot
        | inr hsome =>
            subst prev
            simp at hnot
      cases hs' : moduleScanPass (some b) rest toks fuel with
      | mk o tt =>
          have ihres : tt = toks := ih (out := o) (t := tt) hs'
          have hp : b :: o = out ∧ tt = t := by
            simpa [moduleScanPass, hnotP, hs'] using hs
          exact hp.2.symm.trans ihres
  | defense prev toks fuel b rest repl rest' t1 hline hm ht1 hrec ih =>
      intro out t hs
      have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
      cases hs' : moduleScanPass (lastConsumedByte (b :: rest) rest') rest' t1 fuel with
      | mk o tt =>
          have ihres : tt = t1 := ih (out := o) (t := tt) hs'
          have hp : repl ++ o = out ∧ tt = t := by
            simpa [moduleScanPass, hlineP, hm, hs'] using hs
          exact hp.2.symm.trans (ihres.trans ht1)

theorem moduleScanPass_bytes_eq_tokens_eq_of_no_claim {prev src toks fuel out t}
    (hs : moduleScanPass prev src toks fuel = (out, t))
    (_heq : out = src) (hnc : ScanNoClaim prev src toks fuel) : t = toks :=
  scanNoClaim_tokens hnc hs

/-! ## Obstruction to the unconditional law -/

/-! The unconditional strengthening `out = src → t = toks` is not proved here. A claim branch always changes the head byte of the text it replaces (LF 10 against opener byte 91), and a claim reached through copied bytes therefore always changes the pass output. What the mirror also permits, however, is an earlier byte-changing defense branch (rewriteModulePrefix inserts `654`, and insertInlineOpenerNewlines inserts LFs): that shifts the output relative to the input, so the head-byte argument no longer applies at a later claim, and for arbitrary byte sources the shifted replacement bytes can coincide with source bytes. Ruling that compensation out needs a whole-rewrite-sequence length or amortisation invariant; no such invariant is established here, and none is asserted. The proved partial law is therefore the byte-stability-excludes-claim statement on the verbatim path above, plus token stability under the explicit no-claim hypothesis. -/

#print axioms matchLitCI_head_fixed
#print axioms litBytes_module_head
#print axioms moduleHead_matchLitCI_some
#print axioms moduleMatch_head_91
#print axioms claimModule_table_grows
#print axioms moduleTryCands_tokens_or_head
#print axioms moduleTryCands_claim_appends
#print axioms moduleMatch_claim_head
#print axioms moduleMatch_claim_appends
#print axioms claim_branch_output_differs_top
#print axioms reachesClaim_output_differs
#print axioms moduleScanPass_bytes_eq_no_claim_on_verbatim_path
#print axioms scanNoClaim_tokens
#print axioms moduleScanPass_bytes_eq_tokens_eq_of_no_claim

end LeanFtml.ModulePassTokenStabilityProof
