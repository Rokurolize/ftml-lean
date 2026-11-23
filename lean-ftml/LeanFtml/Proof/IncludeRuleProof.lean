/-
  LeanFtml.Proof.IncludeRuleProof — Class A parse-rule proof for Include
  (proof/frame-include-code, proof-base-v1 + F1-F3 foundation drafts).

  This unit reconnects the self-contained Tier-1 results (Include.lean,
  IncludeGrammar.lean, IncludeExpr.lean) to the concrete functions the
  capstone IncludeRule.lean actually runs: the 5-pass whole-document loop
  (includePasses / includePassesWith / refExpandPassWith), the four-way
  refResolveRef dispatch (leading colon L6, cross-site pair G/R, same-site
  page S, character gate Q), and the ParseState invariants WFState / TokEquiv
  from F1. Every theorem is a kernel-checked universal statement about the
  shipped mirror functions; none introduces an untrusted placeholder and no
  reference function is fabricated.

  Reconnections proved here, by exact Tier-1 name after import:

  * parsePageRef_spec and mem_takeWhile_pred (IncludeGrammar.lean) certify
    the page-reference run that refParseBlock (inside each expansion pass)
    scans with takeWhile isPageC: the run is exactly (parsePageRef _).1, is
    maximal, and every character in it satisfies isPageC.
  * substitute_append / repPass_no_occurs / repPass_first_occurs
    (IncludeExpr.lean) are lifted through the already-proved
    refSubstitute_eq_substitute / refSubPass_eq_repPass bridges onto the
    mirror's refSubstitute / refSubPass, giving order-sensitive argument
    fold laws for the actual fetch path.
  * refResolveRef_pair_spec, already in IncludeRule.lean, is the cross-site
    half of the dispatch; the three dispatch theorems below close the
    remaining arms (L6 leading colon, host-gate fallback, same-site page)
    and the trim-invariance/determinism facts.

  Invariants proved here:

  * includePassesWith_same_regs: every pass and every fixpoint step of the
    5-pass loop leaves footnotes, bibitems, bibitemIds and scoredAnchors
    untouched (only inclusions / inclusionsNotExist accumulate), and
    addInclusionId / addInclusionMissing only grow their registries.
  * includeRule_preserves_wf: WFState preservation at pipeline position 1.
  * includeRule_work_shape / includeRule_work_textOnly: a token-free input
    yields a single canonical text segment, never a token reference.
  * includeRule_tokEquiv_tokenPart / includeRule_tokEquiv_of_work_eq: the
    token-index half of TokEquiv is the identity; the full relation is the
    identity whenever the expansion leaves the work text unchanged.

  Named remainders (see REPORT handoff; not silently stubbed):

  * R-INCLUDE-REF: applyRuleRef is a section parameter in ProofInterface and
    F2 does not wire a reference rule. eq_ref is therefore proved in its
    strongest kernel-free form, conditional on the reference side (see
    include_eq_ref_of). The mirror half is rfl (include_applyRule_mirror).
  * R-INCLUDE-REACH: the F1 ReachableState inductive has only ofSource and
    addToken constructors, none for an include-pass text/doc transition, so
    the reachable_tokens bundle field is not discharged here; its strongest
    kernel-free form is conditional (includeRule_reachable_of).
  * REBASE NOTE (PROOF-REB2): the append-only registry claim is discharged only as length monotonicity (addInclusionId_length, addInclusionMissing_length). The elementwise prefix form (old registry is a prefix of the grown registry) is an optional strengthening if cheap and is not claimed here; R1 covers the applyRuleRef and ReachableState transition constructors needed for the full bundle.

  Axiom discipline: core Init/Std only; the proofs use pattern matching,
  induction, omega and simp. No untrusted axioms and no native/bv decision
  procedures. Headline axiom prints are at the end of the file.
-/
import LeanFtml.IncludeRule
import LeanFtml.TokenStateProof
import LeanFtml.ProofInterface
import LeanFtml.Pipeline

namespace LeanFtml

open scoped List

/-! ## Segment-shape helpers for the canonical text output -/

/-- normSegs of a single text segment never produces a token reference. -/
theorem normSegs_single_text_no_tok (cs : List Char) (k : Nat) :
    TSeg.tok k ∉ normSegs [TSeg.text cs] := by
  cases cs with
  | nil => simp [normSegs]
  | cons c t => simp [normSegs]

/-- normSegs of a single text segment is in canonical (fixed-point) form. -/
theorem normSegs_single_text_canonical (cs : List Char) :
    normSegs [TSeg.text cs] = normSegs (normSegs [TSeg.text cs]) := by
  cases cs with
  | nil => simp [normSegs]
  | cons c t => simp [normSegs]

/-- A token-free input to includeRule: the output work and doc are exactly
    the 5-pass expansion result repacked as one canonical text segment. -/
theorem includeRule_of_allText (st : ParseState) (cs : List Char)
    (h : allText st.work = some cs) :
    includeRule st =
      { st with
        work := normSegs [TSeg.text (includePasses 5 cs st.doc).1]
        doc := (includePasses 5 cs st.doc).2 } := by
  simp [includeRule, h]

/-- The output work shape of includeRule on a token-free input. -/
theorem includeRule_work_shape (st : ParseState) (cs : List Char)
    (h : allText st.work = some cs) :
    (includeRule st).work = normSegs [TSeg.text (includePasses 5 cs st.doc).1] := by
  rw [includeRule_of_allText st cs h]

/-- Include expands to plain text at pipeline position 1: on a token-free
    input its output work contains no token reference at all. -/
theorem includeRule_work_textOnly (st : ParseState) (cs : List Char)
    (h : allText st.work = some cs) (k : Nat) :
    TSeg.tok k ∉ (includeRule st).work := by
  rw [includeRule_work_shape st cs h]
  exact normSegs_single_text_no_tok (includePasses 5 cs st.doc).1 k

/-! ## Document-registry invariant across the 5-pass loop -/

/-- The four byte-string registries WFState tracks in DocState. Equal
    SameRegs means the byte-level WF obligations transfer unchanged. -/
def SameRegs (d₁ d₂ : DocState) : Prop :=
  d₁.footnotes = d₂.footnotes ∧ d₁.bibitems = d₂.bibitems ∧
  d₁.bibitemIds = d₂.bibitemIds ∧ d₁.scoredAnchors = d₂.scoredAnchors

theorem SameRegs_refl (d : DocState) : SameRegs d d := ⟨rfl, rfl, rfl, rfl⟩

theorem SameRegs_trans {a b c : DocState} (hab : SameRegs a b)
    (hbc : SameRegs b c) : SameRegs a c :=
  ⟨hab.1.trans hbc.1, hab.2.1.trans hbc.2.1,
   hab.2.2.1.trans hbc.2.2.1, hab.2.2.2.trans hbc.2.2.2⟩

/-- One fetch touches only inclusions / inclusionsNotExist. -/
theorem refFetchWith_same_regs (pages : List (List Char × List Char))
    (resolved : Option (List Char) × List Char)
    (args : List (List Char × List Char)) (doc : DocState) :
    SameRegs doc (refFetchWith pages resolved args doc).2 := by
  unfold refFetchWith
  dsimp only
  split <;> simp [SameRegs]

/-- Equation theorems for the one-pass loop, written out so the SameRegs
    induction can rewrite only the outer call and keep the scanner opaque. -/
theorem refExpandPassWith_go_zero (pages : List (List Char × List Char))
    (src : List Char) (pos : Nat) (out : List Char) (doc : DocState) :
    refExpandPassWith.go pages src pos out doc 0 = (out ++ src.drop pos, doc) := rfl

theorem refExpandPassWith_go_succ (pages : List (List Char × List Char))
    (src : List Char) (pos : Nat) (out : List Char) (doc : DocState) (fuel : Nat) :
    refExpandPassWith.go pages src pos out doc (Nat.succ fuel) =
      match refFindCandidate src pos with
      | none => (out ++ src.drop pos, doc)
      | some (ls, plen, depth, matchEnd) =>
        match refFindIncludeEnd src matchEnd with
        | none => (out ++ src.drop pos, doc)
        | some _candEnd =>
          match refParseBlock (src.drop matchEnd) with
          | none =>
            let resume := refNextLineStart src ls
            refExpandPassWith.go pages src resume
              (out ++ (src.drop pos).take (resume - pos)) doc fuel
          | some (blockEndRel, refRun, args) =>
            let blockEnd := matchEnd + blockEndRel
            match refResolveRef refRun with
            | none =>
              let resume := refNextLineStart src ls
              refExpandPassWith.go pages src resume
                (out ++ (src.drop pos).take (resume - pos)) doc fuel
            | some resolved =>
              let (fetched, doc') := refFetchWith pages resolved args doc
              refExpandPassWith.go pages src blockEnd
                (out ++ (src.drop pos).take (ls - pos) ++ fetched) doc' fuel := rfl

/-- Every recursive step of one expansion pass preserves SameRegs from
    whatever document it starts with. The extra d0 parameter lets the
    fetch branch compose SameRegs with transitivity. -/
theorem refExpandPassWith_go_same_regs (pages : List (List Char × List Char))
    (src : List Char) :
    ∀ (pos : Nat) (out : List Char) (doc : DocState) (fuel : Nat) (d0 : DocState),
      SameRegs d0 doc →
      SameRegs d0 (refExpandPassWith.go pages src pos out doc fuel).2 := by
  intro pos out doc fuel
  induction fuel generalizing pos out doc with
  | zero =>
      intro d0 h
      rw [refExpandPassWith_go_zero]
      exact h
  | succ fuel ih =>
      intro d0 h
      rw [refExpandPassWith_go_succ]
      cases h1 : refFindCandidate src pos with
      | none =>
          simpa [h1] using h
      | some cand =>
          rcases cand with ⟨ls, plen, depth, matchEnd⟩
          cases h2 : refFindIncludeEnd src matchEnd with
          | none =>
              simpa [h1, h2] using h
          | some candEnd =>
              cases h3 : refParseBlock (src.drop matchEnd) with
              | none =>
                  simpa [h1, h2, h3] using (ih (refNextLineStart src ls)
                    (out ++ (src.drop pos).take (refNextLineStart src ls - pos)) doc d0 h)
              | some blk =>
                  rcases blk with ⟨blockEndRel, refRun, args⟩
                  cases h4 : refResolveRef refRun with
                  | none =>
                      simpa [h1, h2, h3, h4] using (ih (refNextLineStart src ls)
                        (out ++ (src.drop pos).take (refNextLineStart src ls - pos)) doc d0 h)
                  | some resolved =>
                      let fw := refFetchWith pages resolved args doc
                      have hfw : SameRegs d0 fw.2 :=
                        SameRegs_trans h (by simpa [fw] using
                          refFetchWith_same_regs pages resolved args doc)
                      simpa [h1, h2, h3, h4, fw] using (ih (matchEnd + blockEndRel)
                        (out ++ (src.drop pos).take (ls - pos) ++ fw.1) fw.2 d0 hfw)

/-- One whole-document expansion pass preserves the four byte registries. -/
theorem refExpandPassWith_same_regs (pages : List (List Char × List Char))
    (src : List Char) (doc : DocState) :
    SameRegs doc (refExpandPassWith pages src doc).2 := by
  simpa [refExpandPassWith] using
    (refExpandPassWith_go_same_regs pages src 0 [] doc (src.length + 2) doc
      (SameRegs_refl doc))

/-- The bounded 5-pass fixpoint loop preserves the four byte registries at
    every step, including early termination and the pass-5 cutoff. -/
theorem includePassesWith_same_regs (pages : List (List Char × List Char)) :
    ∀ (max : Nat) (src : List Char) (doc : DocState),
      SameRegs doc (includePassesWith pages max src doc).2 := by
  intro max
  induction max with
  | zero =>
      intro src doc
      simp [includePassesWith, SameRegs]
  | succ max ih =>
      intro src doc
      rw [includePassesWith]
      dsimp only
      by_cases hsame : ((refExpandPassWith pages src doc).1 == src) = true
      · rw [if_pos hsame]
        simpa using refExpandPassWith_same_regs pages src doc
      · rw [if_neg hsame]
        let fw := refExpandPassWith pages src doc
        simpa [fw] using SameRegs_trans (refExpandPassWith_same_regs pages src doc)
          (ih fw.1 fw.2)

/-- The reference page map instance of the loop registry invariant. -/
theorem includePasses_same_regs (max : Nat) (src : List Char) (doc : DocState) :
    SameRegs doc (includePasses max src doc).2 := by
  simpa [includePasses] using includePassesWith_same_regs refPageMap max src doc

/-- The two Include document registries are append-only: an inclusion id is
    never removed. -/
theorem addInclusionId_length (ids : List Nat) (pid : Nat) :
    ids.length ≤ (addInclusionId ids pid).length := by
  unfold addInclusionId
  split <;> simp

/-- The missing-page display registry is append-only. -/
theorem addInclusionMissing_length (names : List (List Char)) (display : List Char) :
    names.length ≤ (addInclusionMissing names display).length := by
  unfold addInclusionMissing
  split <;> simp

/-! ## WFState preservation -/

/-- Include preserves the Tier-1 well-formedness invariant at pipeline
    position 1. Tokens are untouched, the four byte registries are untouched
    by includePassesWith_same_regs, and the new work is one canonical text
    segment with no token reference. -/
theorem includeRule_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (includeRule st) := by
  cases h : allText st.work with
  | none =>
      simpa [includeRule, h] using hwf
  | some cs =>
      rw [includeRule_of_allText st cs h]
      let fw := includePasses 5 cs st.doc
      have hregs : SameRegs st.doc fw.2 := by
        simpa [fw] using includePasses_same_regs 5 cs st.doc
      change WFState { st with work := normSegs [TSeg.text fw.1], doc := fw.2 }
      unfold WFState at hwf ⊢
      refine ⟨?_, ?_, ?_, ?_, ?_, ?_, ?_⟩
      · constructor
        · exact normSegs_single_text_canonical fw.1
        · intro k hk
          exact (normSegs_single_text_no_tok fw.1 k hk).elim
      · simpa using hwf.2.1
      · rw [← hregs.1]
        exact hwf.2.2.1
      · rw [← hregs.2.1]
        exact hwf.2.2.2.1
      · rw [← hregs.2.2.1]
        exact hwf.2.2.2.2.1
      · rw [← hregs.2.2.2]
        exact hwf.2.2.2.2.2.1
      · simpa using hwf.2.2.2.2.2.2

/-! ## TokEquiv (token-index identity) -/

/-- The token-index half of TokEquiv is literally the identity under
    includeRule: the token table and the fatal flag are unchanged. -/
theorem includeRule_tokEquiv_tokenPart (st : ParseState) :
    (includeRule st).tokens = st.tokens ∧ (includeRule st).fatal = st.fatal :=
  ⟨includeRule_tokens st, includeRule_fatal st⟩

/-- Full TokEquiv identity under the identity renaming, whenever the
    expansion leaves the work text unchanged (e.g. no candidate fires). The
    work clause is the only place expansion could differ; the token table,
    per-index rule names and fatal flag are the identity by
    includeRule_tokens / includeRule_fatal. -/
theorem includeRule_tokEquiv_of_work_eq (st : ParseState)
    (hwork : (includeRule st).work = st.work) :
    TokEquiv (fun k => k) st (includeRule st) := by
  unfold TokEquiv
  constructor
  · rw [hwork]
    exact segsTokEquiv_refl (fun k => k) (fun k => rfl) st.work
  · refine ⟨(congrArg List.length (includeRule_tokens st)).symm, ?_, ?_⟩
    · intro i hi
      simpa [includeRule_tokens st]
    · exact (includeRule_fatal st).symm

/-! ## Reconnection to the Tier-1 grammar / expression theorems -/

/-- The page-reference run that refParseBlock scans with takeWhile isPageC
    is exactly (parsePageRef _).1 of the same input (IncludeGrammar.lean). -/
theorem include_pageRun_eq_parsePageRef (text : List Char) :
    (parsePageRef (text.drop (text.takeWhile isIncGramWs).length)).1 =
      (text.drop (text.takeWhile isIncGramWs).length).takeWhile isPageC := rfl

/-- The maximal-split characterization of that page run is precisely the
    Tier-1 theorem parsePageRef_spec applied to the pass's input suffix. -/
theorem include_pageRun_spec (text : List Char) :
    let l := text.drop (text.takeWhile isIncGramWs).length
    l = (parsePageRef l).1 ++ (parsePageRef l).2 ∧
    ((parsePageRef l).2 = [] ∨
      ∃ c r, (parsePageRef l).2 = c :: r ∧ isPageC c = false) := by
  exact parsePageRef_spec _

/-- Every character of the scanned page run passes the page-character
    grammar class (Tier-1 mem_takeWhile_pred). -/
theorem include_pageRun_chars (text : List Char) :
    ∀ c ∈ (text.drop (text.takeWhile isIncGramWs).length).takeWhile isPageC,
      isPageC c = true := by
  intro c hc
  exact mem_takeWhile_pred hc

/-- Order-sensitive argument fold law on the mirror's refSubstitute, lifted
    from Tier-1 substitute_append through refSubstitute_eq_substitute. -/
theorem refSubstitute_append (content : List Char)
    (a₁ a₂ : List (List Char × List Char)) :
    refSubstitute content (a₁ ++ a₂) =
      refSubstitute (refSubstitute content a₁) a₂ := by
  simp [refSubstitute_eq_substitute, substitute_append]

/-- A key whose placeholder never occurs leaves the mirror's refSubPass
    untouched (Tier-1 repPass_no_occurs, via refSubPass_eq_repPass). -/
theorem refSubPass_no_occurs (l key val : List Char)
    (h : ∀ n, ¬ AtHead (placeholder key) (l.drop n)) :
    refSubPass l key val = l := by
  rw [refSubPass_eq_repPass]
  exact repPass_no_occurs l h

/-- The first-occurrence split law on the mirror's refSubPass (Tier-1
    repPass_first_occurs, via refSubPass_eq_repPass). -/
theorem refSubPass_first_occurs (l key val : List Char) (n : Nat)
    (hfirst : AtHead (placeholder key) (l.drop n))
    (hbefore : ∀ m, m < n → ¬ AtHead (placeholder key) (l.drop m)) :
    refSubPass l key val =
      l.take n ++ val ++ refSubPass (l.drop (n + (placeholder key).length)) key val := by
  rw [refSubPass_eq_repPass, refSubPass_eq_repPass]
  exact repPass_first_occurs l n hfirst hbefore

/-! ## refResolveRef dispatch: totality, exhaustiveness, determinism -/

/-- The result depends only on the trimmed reference run, not on the
    surrounding whitespace of the block's page_ref token. -/
theorem refResolveRef_trim_invariant {r₁ r₂ : List Char}
    (h : trimChars r₁ = trimChars r₂) : refResolveRef r₁ = refResolveRef r₂ := by
  unfold refResolveRef
  rw [h]

/-- Determinism (totality is by the defining function): equal reference
    runs resolve identically. -/
theorem refResolveRef_deterministic {r₁ r₂ : List Char} (h : r₁ = r₂) :
    refResolveRef r₁ = refResolveRef r₂ := by
  rw [h]

/-- The empty trimmed run resolves to none (dispatch arm 0). -/
theorem refResolveRef_empty_dispatch : refResolveRef.go [] = none := rfl

/-- L6 leading-colon arm (no second colon): resolves as a same-site page
    iff the whole run passes the target charset gate. -/
theorem refResolveRef_leading_colon_dispatch {run rest : List Char}
    (htrim : trimChars run = ':' :: rest)
    (hnocolon : splitFirstColon rest = none) :
    refResolveRef run =
      if (':' :: rest).all isIncTargetC then
        some (none, refNormalize (':' :: rest))
      else none := by
  unfold refResolveRef
  rw [htrim, refResolveRef.go.eq_2, hnocolon]

/-- Cross-site pair arm G/R with a second colon: either a host-gated pair
    or, on gate failure, the same-site fallback (S/L6). Together with the
    leading-colon and page arms this exhausts every dispatch branch. -/
theorem refResolveRef_pair_or_fallback {run rest sitePart pagePart : List Char}
    (htrim : trimChars run = ':' :: rest)
    (hsplit : splitFirstColon rest = some (sitePart, pagePart))
    (hall : (':' :: rest).all isIncTargetC = true) :
    refResolveRef run =
      if (!sitePart.isEmpty && !pagePart.isEmpty &&
          pagePart.all isIncTargetC && sitePart.all isIncHostC) then
        some (some (refCanonicalSite sitePart), refNormalize pagePart)
      else some (none, refNormalize (':' :: rest)) := by
  unfold refResolveRef
  rw [htrim, refResolveRef.go.eq_2, hsplit, if_pos hall]

/-- Same-site page arm S (any trimmed run whose head is not a colon). -/
theorem refResolveRef_page_dispatch {run : List Char} {c : Char} {rest : List Char}
    (htrim : trimChars run = c :: rest) (hne : c ≠ ':') :
    refResolveRef run =
      if (c :: rest).all isIncTargetC then
        some (none, refNormalize (c :: rest))
      else none := by
  unfold refResolveRef
  rw [htrim, refResolveRef.go.eq_3 c rest (fun h' => hne h')]

/-- Branch exhaustiveness, positive form: every same-site success comes
    from a non-empty all-target run passed through refNormalize. -/
theorem refResolveRef_same_site_shape {run page : List Char}
    (h : refResolveRef run = some (none, page)) :
    ∃ s : List Char, s ≠ [] ∧ (∀ c ∈ s, isIncTargetC c = true) ∧
      page = refNormalize s := by
  unfold refResolveRef at h
  cases htrim : trimChars run with
  | nil =>
      rw [htrim, refResolveRef.go.eq_1] at h
      cases h
  | cons c rest =>
      by_cases hc : c = ':'
      · subst hc
        rw [htrim, refResolveRef.go.eq_2] at h
        cases hsplit : splitFirstColon rest with
        | none =>
            rw [hsplit] at h
            by_cases hall : (':' :: rest).all isIncTargetC = true
            · rw [if_pos hall] at h
              have hp := (Prod.mk.inj (Option.some.inj h)).2
              exact ⟨':' :: rest, by simp, List.all_eq_true.mp hall, hp.symm⟩
            · rw [if_neg hall] at h
              cases h
        | some parts =>
            obtain ⟨sitePart, pagePart⟩ := parts
            rw [hsplit] at h
            dsimp only at h
            by_cases hgate : (!sitePart.isEmpty && !pagePart.isEmpty &&
                pagePart.all isIncTargetC && sitePart.all isIncHostC) = true
            · rw [if_pos hgate] at h
              cases h
            · rw [if_neg hgate] at h
              by_cases hall : (':' :: rest).all isIncTargetC = true
              · rw [if_pos hall] at h
                have hp := (Prod.mk.inj (Option.some.inj h)).2
                exact ⟨':' :: rest, by simp, List.all_eq_true.mp hall, hp.symm⟩
              · rw [if_neg hall] at h
                cases h
      · rw [htrim, refResolveRef.go.eq_3 c rest (fun h' => hc h')] at h
        by_cases hall : (c :: rest).all isIncTargetC = true
        · rw [if_pos hall] at h
          have hp := (Prod.mk.inj (Option.some.inj h)).2
          exact ⟨c :: rest, by simp, List.all_eq_true.mp hall, hp.symm⟩
        · rw [if_neg hall] at h
          cases h

/-! ## Strongest kernel-free eq_ref form (reference side is F2-owned) -/

/-- Mirror half of applyRule .include equality is rfl. -/
theorem include_applyRule_mirror (st : ParseState) :
    applyRule .include st = includeRule st := rfl

/-- Strongest reachable eq_ref statement. applyRuleRef is a section
    parameter of ProofInterface (F2 does not wire one), so equality is
    conditional on the reference side; the mirror side is rfl above. The
    reference-side remainder R-INCLUDE-REF is exactly the obligation
    `href` supplied by F2 at adoption time. -/
theorem include_eq_ref_of
    (applyRuleRef : RuleId → ParseState → ParseState)
    (href : ∀ (st : ParseState), WFState st → applyRuleRef .include st = includeRule st)
    (st : ParseState) (hwf : WFState st) :
    applyRule .include st = applyRuleRef .include st := by
  rw [include_applyRule_mirror, href st hwf]

/-- Strongest reachable reachable_tokens form. The F1 ReachableState
    inductive has no include-pass transition constructor (R-INCLUDE-REACH),
    so the step is conditional on the F2/F3 transition lemma. -/
theorem includeRule_reachable_of
    (hstep : ∀ (st : ParseState), WFState st → ReachableState st →
      ReachableState (includeRule st))
    (st : ParseState) (hwf : WFState st) (hr : ReachableState st) :
    ReachableState (applyRule .include st) := by
  simpa [applyRule] using hstep st hwf hr

/-! ## Axiom audit of the headline theorems -/

#print axioms includeRule_preserves_wf
#print axioms includeRule_work_textOnly
#print axioms includePassesWith_same_regs
#print axioms refResolveRef_pair_or_fallback
#print axioms refResolveRef_same_site_shape
#print axioms refSubstitute_append
#print axioms include_eq_ref_of

end LeanFtml
