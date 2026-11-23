/-
  PROOF-INCLUDE — connection-only theorems linking the Tier 1 Include
  proofs (Include.lean, IncludeGrammar.lean, IncludeExpr.lean) to the
  production IncludeRule.lean multi-pass loop. No production definition
  is changed; every theorem below is proved from the existing definitions.
-/
import LeanFtml.IncludeRule
import LeanFtml.TokenStateProof
import LeanFtml.ProofInterface

namespace LeanFtml

set_option maxRecDepth 100000
set_option maxHeartbeats 1000000

/-! ## A. Segment well-formedness at the includeRule output -/

theorem normSegs_single_idem (cs : List Char) :
    normSegs (normSegs [TSeg.text cs]) = normSegs [TSeg.text cs] := by
  cases cs <;> rfl

theorem WFSegs_single_text (cs : List Char) (n : Nat) :
    WFSegs (normSegs [TSeg.text cs]) n := by
  constructor
  · exact (normSegs_single_idem cs).symm
  · intro k hk
    cases cs <;> simp [normSegs] at hk

/-! ## B. Doc-state field preservation through fetch, pass and loop -/

theorem refFetchWith_doc_fields (pages : List (List Char × List Char))
    (resolved : Option (List Char) × List Char)
    (args : List (List Char × List Char)) (doc : DocState) :
    (refFetchWith pages resolved args doc).2.footnotes = doc.footnotes ∧
    (refFetchWith pages resolved args doc).2.bibitems = doc.bibitems ∧
    (refFetchWith pages resolved args doc).2.bibitemIds = doc.bibitemIds ∧
    (refFetchWith pages resolved args doc).2.scoredAnchors = doc.scoredAnchors := by
  rcases resolved with ⟨siteOpt, pageName⟩
  unfold refFetchWith
  dsimp
  cases siteOpt with
  | none =>
      cases h : lookupPage pages pageName with
      | none => simp [h]
      | some s => simp [h]
  | some site =>
      cases h : lookupPage pages (':' :: (site ++ ':' :: pageName)) with
      | none => simp [h]
      | some s => simp [h]

theorem refExpandPassWith_go_doc_fields (pages : List (List Char × List Char))
    (src : List Char) :
    ∀ (pos : Nat) (out : List Char) (doc : DocState) (fuel : Nat),
      (refExpandPassWith.go pages src pos out doc fuel).2.footnotes = doc.footnotes ∧
      (refExpandPassWith.go pages src pos out doc fuel).2.bibitems = doc.bibitems ∧
      (refExpandPassWith.go pages src pos out doc fuel).2.bibitemIds = doc.bibitemIds ∧
      (refExpandPassWith.go pages src pos out doc fuel).2.scoredAnchors = doc.scoredAnchors := by
  intro pos out doc fuel
  induction fuel generalizing pos out doc with
  | zero =>
      simp [refExpandPassWith.go]
  | succ fuel ih =>
      rw [refExpandPassWith.go]
      cases hc : refFindCandidate src pos with
      | none => simp [hc]
      | some cand =>
        obtain ⟨ls, plen, depth, mend⟩ := cand
        cases he : refFindIncludeEnd src mend with
        | none => simp [hc, he]
        | some cend =>
          cases hb : refParseBlock (src.drop mend) with
          | none =>
            simp [hc, he, hb]
            exact ih (refNextLineStart src ls)
              (out ++ (src.drop pos).take (refNextLineStart src ls - pos)) doc
          | some blk =>
            obtain ⟨blockEndRel, refRun, args⟩ := blk
            cases hr : refResolveRef refRun with
            | none =>
              simp [hc, he, hb, hr]
              exact ih (refNextLineStart src ls)
                (out ++ (src.drop pos).take (refNextLineStart src ls - pos)) doc
            | some resolved =>
              let doc' := (refFetchWith pages resolved args doc).2
              simp [hc, he, hb, hr, doc']
              have hf := refFetchWith_doc_fields pages resolved args doc
              have hrec := ih (mend + blockEndRel)
                (out ++ ((src.drop pos).take (ls - pos) ++ (refFetchWith pages resolved args doc).1))
                doc'
              exact ⟨hrec.1.trans hf.1, hrec.2.1.trans hf.2.1,
                hrec.2.2.1.trans hf.2.2.1, hrec.2.2.2.trans hf.2.2.2⟩

theorem refExpandPassWith_doc_fields (pages : List (List Char × List Char))
    (src : List Char) (doc : DocState) :
    (refExpandPassWith pages src doc).2.footnotes = doc.footnotes ∧
    (refExpandPassWith pages src doc).2.bibitems = doc.bibitems ∧
    (refExpandPassWith pages src doc).2.bibitemIds = doc.bibitemIds ∧
    (refExpandPassWith pages src doc).2.scoredAnchors = doc.scoredAnchors := by
  unfold refExpandPassWith
  exact refExpandPassWith_go_doc_fields pages src 0 [] doc (src.length + 2)

theorem includePassesWith_doc_fields (pages : List (List Char × List Char)) :
    ∀ (n : Nat) (src : List Char) (doc : DocState),
      (includePassesWith pages n src doc).2.footnotes = doc.footnotes ∧
      (includePassesWith pages n src doc).2.bibitems = doc.bibitems ∧
      (includePassesWith pages n src doc).2.bibitemIds = doc.bibitemIds ∧
      (includePassesWith pages n src doc).2.scoredAnchors = doc.scoredAnchors := by
  intro n
  induction n with
  | zero =>
      intro src doc
      simp [includePassesWith]
  | succ n ih =>
      intro src doc
      cases hpass : refExpandPassWith pages src doc with
      | mk src' doc' =>
        have h1 : doc'.footnotes = doc.footnotes ∧
            doc'.bibitems = doc.bibitems ∧
            doc'.bibitemIds = doc.bibitemIds ∧
            doc'.scoredAnchors = doc.scoredAnchors := by
          simpa [hpass] using refExpandPassWith_doc_fields pages src doc
        by_cases hsame : src' == src
        · simp [includePassesWith, hpass, hsame]
          exact h1
        · simp [includePassesWith, hpass, hsame]
          have h2 := ih src' doc'
          exact ⟨h2.1.trans h1.1, h2.2.1.trans h1.2.1,
            h2.2.2.1.trans h1.2.2.1, h2.2.2.2.trans h1.2.2.2⟩

/-! ## C. WFState preservation by the production rule -/

theorem includeRule_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (includeRule st) := by
  unfold includeRule
  cases h : allText st.work with
  | none => simpa [h] using hwf
  | some cs =>
    dsimp [includePasses]
    have hdoc := includePassesWith_doc_fields refPageMap 5 cs st.doc
    unfold WFState at hwf ⊢
    rcases hwf with ⟨hseg, htok, hfoot, hbib, hbibid, hanchor, hlead⟩
    refine ⟨WFSegs_single_text (includePassesWith refPageMap 5 cs st.doc).1
      st.tokens.length, ?_, ?_, ?_, ?_, ?_, ?_⟩
    · simpa using htok
    · simpa [hdoc.1] using hfoot
    · simpa [hdoc.2.1] using hbib
    · simpa [hdoc.2.2.1] using hbibid
    · simpa [hdoc.2.2.2] using hanchor
    · simpa using hlead

/-! ## D. Pass-loop effect on the parse state -/

theorem addInclusionId_append_only (ids : List Nat) (pid : Nat) :
    addInclusionId ids pid = ids ∨ addInclusionId ids pid = ids ++ [pid] := by
  unfold addInclusionId
  by_cases hmem : pid ∈ ids
  · left
    simp [List.contains_eq_mem, hmem]
  · right
    simp [List.contains_eq_mem, hmem]

theorem addInclusionMissing_append_only (names : List (List Char)) (display : List Char) :
    addInclusionMissing names display = names ∨
      addInclusionMissing names display = names ++ [display] := by
  unfold addInclusionMissing
  by_cases hmem : display ∈ names
  · left
    simp [List.contains_eq_mem, hmem]
  · right
    simp [List.contains_eq_mem, hmem]

theorem includePassesWith_succ_of_unchanged (pages : List (List Char × List Char))
    (src : List Char) (doc : DocState) (n : Nat)
    (h : (refExpandPassWith pages src doc).1 = src) :
    includePassesWith pages (n + 1) src doc = refExpandPassWith pages src doc := by
  cases hsplit : refExpandPassWith pages src doc with
  | mk src' doc' =>
    have hEq : src' = src := by simpa [hsplit] using h
    subst src'
    simpa [includePassesWith, hsplit]

theorem includePassesWith_early_stop_source (pages : List (List Char × List Char))
    (src : List Char) (doc : DocState) (n : Nat)
    (h : (refExpandPassWith pages src doc).1 = src) :
    (includePassesWith pages (n + 1) src doc).1 = src := by
  rw [includePassesWith_succ_of_unchanged pages src doc n h]
  exact h

/-! ## E. Resolution-mode priority -/

theorem refResolveRef_same_site_spec {run page : List Char}
    (h : refResolveRef run = some (none, page)) :
    (trimChars run).all isIncTargetC = true ∧ page = refNormalize (trimChars run) := by
  unfold refResolveRef at h
  cases htrim : trimChars run with
  | nil =>
      simp [refResolveRef.go, htrim] at h
  | cons c rest =>
      by_cases hc : c = ':'
      · subst c
        cases hsplit : splitFirstColon rest with
        | none =>
            by_cases hall : (':' :: rest).all isIncTargetC = true
            · simp [refResolveRef.go, htrim, hsplit, hall] at h
              cases h
              exact ⟨by simpa [htrim] using hall, rfl⟩
            · simp [refResolveRef.go, htrim, hsplit, hall] at h
        | some parts =>
            obtain ⟨sitePart, pagePart⟩ := parts
            by_cases hgate :
                (!sitePart.isEmpty && !pagePart.isEmpty &&
                  pagePart.all isIncTargetC && sitePart.all isIncHostC) = true
            · simp [refResolveRef.go, htrim, hsplit, hgate] at h
            · by_cases hall : (':' :: rest).all isIncTargetC = true
              · simp [refResolveRef.go, htrim, hsplit, hgate, hall] at h
                cases h
                exact ⟨by simpa [htrim] using hall, rfl⟩
              · simp [refResolveRef.go, htrim, hsplit, hgate, hall] at h
      · by_cases hall : (c :: rest).all isIncTargetC = true
        · simp [refResolveRef.go, htrim, hc, hall] at h
          cases h
          exact ⟨by simpa [htrim] using hall, rfl⟩
        · simp [refResolveRef.go, htrim, hc, hall] at h

/-! ## F. Tier 1 reuse at the production call sites -/

theorem refSubstitute_append (content : List Char)
    (args₁ args₂ : List (List Char × List Char)) :
    refSubstitute content (args₁ ++ args₂) =
      refSubstitute (refSubstitute content args₁) args₂ := by
  simp only [refSubstitute_eq_substitute]
  exact substitute_append content args₁ args₂

theorem refParseBlock_refRun_maximal (text : List Char) :
    let ws1 := (text.takeWhile isIncGramWs).length
    let refRun := (text.drop ws1).takeWhile isPageC
    text.drop ws1 = refRun ++ (parsePageRef (text.drop ws1)).2 ∧
    ((parsePageRef (text.drop ws1)).2 = [] ∨
      ∃ c r, (parsePageRef (text.drop ws1)).2 = c :: r ∧ isPageC c = false) := by
  dsimp
  have hs := parsePageRef_spec (text.drop (text.takeWhile isIncGramWs).length)
  simpa [parsePageRef] using hs

/-! ## G. Tier 1 terminator scan vs the production candidate scan -/

theorem findSubChar_go_take (s pat : List Char) :
    ∀ (fuel i j : Nat),
      findSubChar.go s pat i fuel = some j → (s.drop j).take pat.length == pat := by
  intro fuel
  induction fuel with
  | zero =>
      intro i j h
      rw [findSubChar_go_zero] at h
      cases h
  | succ fuel ih =>
      intro i j h
      rw [findSubChar_go_succ] at h
      by_cases hlen : i + pat.length > s.length
      · rw [if_pos hlen] at h
        cases h
      · rw [if_neg hlen] at h
        by_cases heq : ((s.drop i).take pat.length == pat) = true
        · rw [if_pos heq] at h
          cases h
          exact heq
        · have heqf : ((s.drop i).take pat.length == pat) = false := by
            cases hb : ((s.drop i).take pat.length == pat) with
            | true => exact absurd hb heq
            | false => rfl
          rw [if_neg (by simpa [heqf])] at h
          exact ih (i + 1) j h

theorem findSubChar_take (s pat : List Char) (fromPos j : Nat)
    (h : findSubChar s pat fromPos = some j) :
    (s.drop j).take pat.length == pat := by
  unfold findSubChar at h
  exact findSubChar_go_take s pat (s.length + 2) fromPos j h

theorem drop_eq_brackets_of_take (s : List Char) (j : Nat)
    (h : ((s.drop j).take 2 == [']', ']']) = true) :
    s.drop j = ']' :: ']' :: s.drop (j + 2) := by
  have ht : (s.drop j).take 2 = [']', ']'] := beq_iff_eq.mp h
  calc
    s.drop j = (s.drop j).take 2 ++ (s.drop j).drop 2 :=
      (List.take_append_drop 2 (s.drop j)).symm
    _ = [']', ']'] ++ (s.drop j).drop 2 := by rw [ht]
    _ = ']' :: ']' :: s.drop (j + 2) := by simp [List.drop_drop]

theorem refFindIncludeEnd_termAt {src : List Char} {start e : Nat}
    (h : refFindIncludeEnd src start = some e) :
    termAt (src.drop (e - 2)) = true := by
  unfold refFindIncludeEnd at h
  have hsound : ∀ (fuel i e : Nat),
      refFindIncludeEnd.go src i fuel = some e → termAt (src.drop (e - 2)) = true := by
    intro fuel
    induction fuel with
    | zero =>
        intro i e hg
        simp [refFindIncludeEnd.go] at hg
    | succ fuel ih =>
        intro i e hg
        cases hf : findSubChar src [']', ']'] i with
        | none =>
            simp [refFindIncludeEnd.go, hf] at hg
        | some j =>
            have htake := findSubChar_take src [']', ']'] i j hf
            have hdrop := drop_eq_brackets_of_take src j htake
            by_cases hge : j + 2 ≥ src.length
            · have hg' : refFindIncludeEnd.go src i (fuel + 1) = some (j + 2) := by
                simp [refFindIncludeEnd.go, hf, hge]
              rw [hg'] at hg
              injection hg with heq
              subst heq
              have off : j + 2 - 2 = j := by omega
              rw [off, hdrop]
              have hnil : src.drop (j + 2) = [] := by
                apply List.eq_nil_of_length_eq_zero
                rw [List.length_drop]
                omega
              simp [termAt, hnil]
            · by_cases hnl : src[j + 2]? == some '\n'
              · have hg' : refFindIncludeEnd.go src i (fuel + 1) = some (j + 2) := by
                  simp [refFindIncludeEnd.go, hf, hge, hnl]
                rw [hg'] at hg
                injection hg with heq
                subst heq
                have off : j + 2 - 2 = j := by omega
                rw [off, hdrop]
                have hnl' : src[j + 2]? = some '\n' := beq_iff_eq.mp hnl
                simp [termAt, hnl']
              · have hg' : refFindIncludeEnd.go src i (fuel + 1) =
                    refFindIncludeEnd.go src (j + 1) fuel := by
                  simp [refFindIncludeEnd.go, hf, hge, hnl]
                rw [hg'] at hg
                exact ih (j + 1) e hg
  exact hsound (src.length + 2) start e h

end LeanFtml
