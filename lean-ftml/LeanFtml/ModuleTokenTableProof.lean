import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml.ModuleTokenTableProof

/-- The final token table is obtained from the input by appending one suffix of at most `k` fresh entries. The suffix contents are existentially quantified; only the append shape and the count bound are asserted. -/
def TokensExtendBy (k : Nat) (toks final : List TokenEntry) : Prop :=
  ∃ suffix : List TokenEntry, final = toks ++ suffix ∧ suffix.length ≤ k

theorem extendBy_zero (toks : List TokenEntry) : TokensExtendBy 0 toks toks := by
  exact ⟨[], by simp, by simp⟩

theorem extendBy_claim (rule : String) (name attr body : List Nat) (toks : List TokenEntry) :
    TokensExtendBy 1 toks (claimModule rule name attr body toks).2 := by
  refine ⟨[{ rule := rule, opts := [("moduleName".toList, textVal name),
    ("attr".toList, textVal attr), ("module_body".toList, textVal body)] }], ?_, ?_⟩
  · rfl
  · simp

theorem extendBy_trans {a b c : List TokenEntry} {k₁ k₂ : Nat}
    (h₁ : TokensExtendBy k₁ a b) (h₂ : TokensExtendBy k₂ b c) :
    TokensExtendBy (k₁ + k₂) a c := by
  rcases h₁ with ⟨s₁, rfl, hs₁⟩
  rcases h₂ with ⟨s₂, hs₂, hs₂len⟩
  refine ⟨s₁ ++ s₂, ?_, ?_⟩
  · rw [hs₂, List.append_assoc]
  · rw [List.length_append]
    omega

theorem extendBy_mono {k₁ k₂ : Nat} (hk : k₁ ≤ k₂) {a b : List TokenEntry}
    (h : TokensExtendBy k₁ a b) : TokensExtendBy k₂ a b := by
  rcases h with ⟨s, hs, hslen⟩
  exact ⟨s, hs, Nat.le_trans hslen hk⟩

theorem extendBy_empty (k : Nat) (toks : List TokenEntry) : TokensExtendBy k toks toks :=
  extendBy_mono (Nat.zero_le k) (extendBy_zero toks)

/-- claimModule's placeholder addresses the input table length exactly. -/
theorem claimModule_placeholder (rule : String) (name attr body : List Nat)
    (toks : List TokenEntry) :
    (claimModule rule name attr body toks).1 = phBytes toks.length := rfl

/-- claimModule appends exactly one entry, whose rule field is the requested rule. -/
theorem claimModule_table (rule : String) (name attr body : List Nat)
    (toks : List TokenEntry) :
    (claimModule rule name attr body toks).2 = toks ++
      [{ rule := rule, opts := [("moduleName".toList, textVal name),
        ("attr".toList, textVal attr), ("module_body".toList, textVal body)] }] := rfl

theorem claimModule_length (rule : String) (name attr body : List Nat)
    (toks : List TokenEntry) :
    (claimModule rule name attr body toks).2.length = toks.length + 1 := by
  rw [claimModule_table, List.length_append]
  simp

/-- The defense branch of moduleTryCands: under an explicit tail match and an explicit count-above-one condition, the whole result is the rewrite with the incoming token table as its third component. -/
theorem moduleTryCands_defense_exact (src name : List Nat) (toks : List TokenEntry)
    (attrRaw rest bodyRaw rest' : List Nat) (more : List (List Nat × List Nat))
    (htail : moduleTail rest = some (bodyRaw, rest'))
    (hdef : countModuleOpeners none (src.take (src.length - rest'.length))
              (src.length - rest'.length + 1) > 1) :
    moduleTryCands src name toks ((attrRaw, rest) :: more) =
      some (rewriteModulePrefix (insertInlineOpenerNewlines
        (src.take (src.length - rest'.length))), rest', toks) := by
  simp [moduleTryCands, htail, hdef]

/-- The same branch stated only about the token component: any successful result's table equals the incoming table. -/
theorem moduleTryCands_defense_tokens (src name : List Nat) (toks : List TokenEntry)
    (attrRaw rest bodyRaw rest' : List Nat) (more : List (List Nat × List Nat))
    (htail : moduleTail rest = some (bodyRaw, rest'))
    (hdef : countModuleOpeners none (src.take (src.length - rest'.length))
              (src.length - rest'.length + 1) > 1) :
    ∀ res : List Nat × List Nat × List TokenEntry,
      moduleTryCands src name toks ((attrRaw, rest) :: more) = some res → res.2.2 = toks := by
  intro res hres
  rw [moduleTryCands_defense_exact src name toks attrRaw rest bodyRaw rest' more htail hdef] at hres
  cases hres
  rfl

/-- Any success of moduleTryCands either takes the defense branch (no claim) or the claim branch (one claim). This is proved by induction over the remaining attribute candidates; no property of the byte scanners is needed. -/
theorem moduleTryCands_extend (src name : List Nat) (toks : List TokenEntry) :
    ∀ (cands : List (List Nat × List Nat)) (res : List Nat × List Nat × List TokenEntry),
      moduleTryCands src name toks cands = some res → TokensExtendBy 1 toks res.2.2 := by
  intro cands
  induction cands with
  | nil =>
      intro res h
      simp [moduleTryCands] at h
  | cons cand more ih =>
      intro res h
      rcases cand with ⟨attrRaw, rest⟩
      cases htail : moduleTail rest with
      | none =>
          simp [moduleTryCands, htail] at h
          exact ih res h
      | some br =>
          rcases br with ⟨bodyRaw, rest'⟩
          by_cases hdef : countModuleOpeners none (src.take (src.length - rest'.length))
              (src.length - rest'.length + 1) > 1
          · rw [moduleTryCands_defense_exact src name toks attrRaw rest bodyRaw rest' more htail hdef] at h
            cases h
            exact extendBy_empty 1 toks
          · simp [moduleTryCands, htail, hdef] at h
            cases h
            exact extendBy_claim "Module" name (trimBytes attrRaw) (trimBytes bodyRaw) toks

/-- Module654 has no defense: every successful candidate claims exactly one token. -/
theorem module654TryCands_extend (name : List Nat) (toks : List TokenEntry) :
    ∀ (cands : List (List Nat × List Nat)) (res : List Nat × List Nat × List TokenEntry),
      module654TryCands name toks cands = some res → TokensExtendBy 1 toks res.2.2 := by
  intro cands
  induction cands with
  | nil =>
      intro res h
      simp [module654TryCands] at h
  | cons cand more ih =>
      intro res h
      rcases cand with ⟨attrRaw, rest⟩
      cases htail : module654Tail rest with
      | none =>
          simp [module654TryCands, htail] at h
          exact ih res h
      | some br =>
          rcases br with ⟨bodyRaw, rest'⟩
          simp [module654TryCands, htail] at h
          cases h
          exact extendBy_claim "Module654" name (trimBytes attrRaw) (trimBytes bodyRaw) toks

theorem moduleMatch_extend (src : List Nat) (toks : List TokenEntry) :
    ∀ res : List Nat × List Nat × List TokenEntry,
      moduleMatch src toks = some res → TokensExtendBy 1 toks res.2.2 := by
  intro res h
  cases hhead : moduleHead (litBytes "[[module") src with
  | none => simp [moduleMatch, hhead] at h
  | some hd =>
      rcases hd with ⟨name, cands⟩
      simp [moduleMatch, hhead] at h
      exact moduleTryCands_extend src name toks cands res h

theorem module654Match_extend (src : List Nat) (toks : List TokenEntry) :
    ∀ res : List Nat × List Nat × List TokenEntry,
      module654Match src toks = some res → TokensExtendBy 1 toks res.2.2 := by
  intro res h
  cases hhead : moduleHead (litBytes "[[module654") src with
  | none => simp [module654Match, hhead] at h
  | some hd =>
      rcases hd with ⟨name, cands⟩
      simp [module654Match, hhead] at h
      exact module654TryCands_extend name toks cands res h

/-- One Module scan pass of fuel `fuel` appends at most `fuel` entries: induction on fuel, with the claim branch paying one unit and the recursive scan paying the rest. -/
theorem moduleScanPass_extend (prev : Option Nat) (src : List Nat) (toks : List TokenEntry) :
    ∀ fuel : Nat, TokensExtendBy fuel toks (moduleScanPass prev src toks fuel).2 := by
  intro fuel
  induction fuel generalizing prev src toks with
  | zero =>
      simp [moduleScanPass]
      exact extendBy_zero toks
  | succ fuel ih =>
      cases src with
      | nil =>
          simp [moduleScanPass]
          exact extendBy_empty (fuel + 1) toks
      | cons b rest =>
          by_cases hpos : prev = none ∨ prev = some 10
          · cases hm : moduleMatch (b :: rest) toks with
            | none =>
                have hrec : TokensExtendBy fuel toks
                    (moduleScanPass (some b) rest toks fuel).2 := ih (some b) rest toks
                simpa [moduleScanPass, hpos, hm] using (extendBy_mono (Nat.le_succ fuel) hrec)
            | some res =>
                have hmext : TokensExtendBy 1 toks res.2.2 :=
                  moduleMatch_extend (b :: rest) toks res hm
                have hrec : TokensExtendBy fuel res.2.2
                    (moduleScanPass (lastConsumedByte (b :: rest) res.2.1)
                      res.2.1 res.2.2 fuel).2 :=
                  ih (lastConsumedByte (b :: rest) res.2.1) res.2.1 res.2.2
                have hcomp := extendBy_trans hmext hrec
                have hk : 1 + fuel = fuel + 1 := Nat.add_comm 1 fuel
                simpa [moduleScanPass, hpos, hm, hk] using hcomp
          · have hrec : TokensExtendBy fuel toks
                (moduleScanPass (some b) rest toks fuel).2 := ih (some b) rest toks
            simpa [moduleScanPass, hpos] using (extendBy_mono (Nat.le_succ fuel) hrec)

/-- One Module654 scan pass has the same fuel-indexed extension bound. -/
theorem module654Scan_extend (prev : Option Nat) (src : List Nat) (toks : List TokenEntry) :
    ∀ fuel : Nat, TokensExtendBy fuel toks (module654Scan prev src toks fuel).2 := by
  intro fuel
  induction fuel generalizing prev src toks with
  | zero =>
      simp [module654Scan]
      exact extendBy_zero toks
  | succ fuel ih =>
      cases src with
      | nil =>
          simp [module654Scan]
          exact extendBy_empty (fuel + 1) toks
      | cons b rest =>
          by_cases hpos : prev = none ∨ prev = some 10
          · cases hm : module654Match (b :: rest) toks with
            | none =>
                have hrec : TokensExtendBy fuel toks
                    (module654Scan (some b) rest toks fuel).2 := ih (some b) rest toks
                simpa [module654Scan, hpos, hm] using (extendBy_mono (Nat.le_succ fuel) hrec)
            | some res =>
                have hmext : TokensExtendBy 1 toks res.2.2 :=
                  module654Match_extend (b :: rest) toks res hm
                have hrec : TokensExtendBy fuel res.2.2
                    (module654Scan (lastConsumedByte (b :: rest) res.2.1)
                      res.2.1 res.2.2 fuel).2 :=
                  ih (lastConsumedByte (b :: rest) res.2.1) res.2.1 res.2.2
                have hcomp := extendBy_trans hmext hrec
                have hk : 1 + fuel = fuel + 1 := Nat.add_comm 1 fuel
                simpa [module654Scan, hpos, hm, hk] using hcomp
          · have hrec : TokensExtendBy fuel toks
                (module654Scan (some b) rest toks fuel).2 := ih (some b) rest toks
            simpa [module654Scan, hpos] using (extendBy_mono (Nat.le_succ fuel) hrec)

/-- The per-pass length bound: one Module pass with input source length L appends at most L+1 entries, because its scan is called with fuel L+1. -/
theorem modulePasses_step_length (_fuel : Nat) (src : List Nat) (toks : List TokenEntry) :
    (moduleScanPass none src toks (src.length + 1)).2.length ≤ toks.length + src.length + 1 := by
  rcases moduleScanPass_extend none src toks (src.length + 1) with ⟨s, hs, hslen⟩
  rw [hs, List.length_append]
  omega

/-- modulePasses never removes or reorders existing entries: induction on the pass fuel, using the scan extension for the current pass and the induction hypothesis for the remaining passes. -/
theorem modulePasses_extend (fuel : Nat) (src : List Nat) (toks : List TokenEntry) :
    ∃ suffix : List TokenEntry, (modulePasses fuel src toks).2 = toks ++ suffix := by
  induction fuel generalizing src toks with
  | zero =>
      refine ⟨[], ?_⟩
      simp [modulePasses]
  | succ fuel ih =>
      let step := moduleScanPass none src toks (src.length + 1)
      rcases moduleScanPass_extend none src toks (src.length + 1) with ⟨s1, hs1, hs1len⟩
      have hstep2 : step.2 = toks ++ s1 := by
        simpa [step] using hs1
      by_cases hsame : step.1 == src
      · refine ⟨s1, ?_⟩
        have hpass : (modulePasses (fuel + 1) src toks).2 = step.2 := by
          simp [modulePasses, step, hsame]
        rw [hpass, hstep2]
      · rcases ih step.1 step.2 with ⟨s2, hs2⟩
        refine ⟨s1 ++ s2, ?_⟩
        have hpass : (modulePasses (fuel + 1) src toks).2 = (modulePasses fuel step.1 step.2).2 := by
          simp [modulePasses, step, hsame]
        rw [hpass, hs2, hstep2, List.append_assoc]

/- Gap: a length bound for the whole modulePasses run depending only on the pass fuel is false. A single pass calls its scan with fuel src.length+1, so with pass fuel 1 a source of many disjoint claimable openers appends O(src.length) entries. The proved bounds are the extension of modulePasses_extend, the per-pass bound of modulePasses_step_length, and the fuel-indexed bounds of the two scanner theorems; an aggregate bound would additionally require a bound on how the intermediate source grows from pass to pass. -/
/-- Modulepre claims no tokens; the mirror's own rfl theorem restated in this namespace. -/
theorem modulepreRule_tokens (st : ParseState) :
    (modulepreRule st).tokens = st.tokens := by
  exact LeanFtml.modulepreRule_tokens st

#print axioms extendBy_zero
#print axioms extendBy_empty
#print axioms extendBy_claim
#print axioms extendBy_trans
#print axioms extendBy_mono
#print axioms claimModule_placeholder
#print axioms claimModule_table
#print axioms claimModule_length
#print axioms moduleTryCands_defense_exact
#print axioms moduleTryCands_defense_tokens
#print axioms moduleTryCands_extend
#print axioms module654TryCands_extend
#print axioms moduleMatch_extend
#print axioms module654Match_extend
#print axioms moduleScanPass_extend
#print axioms module654Scan_extend
#print axioms modulePasses_step_length
#print axioms modulePasses_extend
#print axioms modulepreRule_tokens

end LeanFtml.ModuleTokenTableProof
