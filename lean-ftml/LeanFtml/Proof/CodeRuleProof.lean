/-
  LeanFtml.Proof.CodeRuleProof — Wave 2 proof/frame-include-code, Class B rule Code.
  Kernel-free universal obligations for the mirror's actual functions in LeanFtml.CodeRule.
  Build graph note: this lane may import only modules already wired into LeanFtml.lean; the F1 draft LeanFtml.TokenStateProof (WFState/ReachableState/TokEquiv), the F2 draft LeanFtml.PcreCore and LeanFtml.RefTables, and the F3 draft LeanFtml.RenderEnv are not built on this branch, so their names are deliberately not imported and the corresponding obligations are stated as explicit remainders at the end of this file rather than faked.
  Prose is flowing paragraphs on single lines. Axiom discipline: Lean core only, no Mathlib, no sorry, no axiom, no native_decide, no bv_decide, no Lean.ofReduceBool; the allowed axioms are [propext, Classical.choice, Quot.sound].
-/
import LeanFtml.CodeRule

namespace LeanFtml

/-! ## Character-level facts (PCRE /i ASCII folding) -/

theorem char_le_iff_toNat_le (a b : Char) : a ≤ b ↔ a.toNat ≤ b.toNat := by
  change a.val ≤ b.val ↔ a.val.toNat ≤ b.val.toNat
  exact UInt32.le_iff_toNat_le

theorem char_ofNat_toNat_of_isValid (n : Nat) (h : n.isValidChar) : (Char.ofNat n).toNat = n := by
  simp [Char.ofNat, h, Char.ofNatAux, Char.toNat]

theorem aChar_toNat : 'a'.toNat = 97 := by decide
theorem zChar_toNat : 'z'.toNat = 122 := by decide
theorem AChar_toNat : 'A'.toNat = 65 := by decide
theorem ZChar_toNat : 'Z'.toNat = 90 := by decide

theorem swapAsciiCase_low (c : Char) (h : 'a' ≤ c ∧ c ≤ 'z') : swapAsciiCase c = Char.ofNat (c.toNat - 32) := by
  simp [swapAsciiCase, h]

theorem swapAsciiCase_up (c : Char) (h1 : ¬ ('a' ≤ c ∧ c ≤ 'z')) (h : 'A' ≤ c ∧ c ≤ 'Z') : swapAsciiCase c = Char.ofNat (c.toNat + 32) := by
  simp [swapAsciiCase, h1, h]

theorem swapAsciiCase_other (c : Char) (h1 : ¬ ('a' ≤ c ∧ c ≤ 'z')) (h2 : ¬ ('A' ≤ c ∧ c ≤ 'Z')) : swapAsciiCase c = c := by
  simp [swapAsciiCase, h1, h2]

/-- The mirror's ASCII case swap is an involution on every Char: an ASCII letter is sent to its opposite case and back, and every other character is fixed. This is the kernel-free algebraic fact underlying PCRE /i for the Code opener and closer literals. -/
theorem swapAsciiCase_involutive (c : Char) : swapAsciiCase (swapAsciiCase c) = c := by
  by_cases hl : 'a' ≤ c ∧ c ≤ 'z'
  · have hnlo : 97 ≤ c.toNat := by simpa [char_le_iff_toNat_le, aChar_toNat] using hl.1
    have hnhi : c.toNat ≤ 122 := by simpa [char_le_iff_toNat_le, zChar_toNat] using hl.2
    have hv : (c.toNat - 32).isValidChar := by
      unfold Nat.isValidChar
      left
      omega
    have htn : (Char.ofNat (c.toNat - 32)).toNat = c.toNat - 32 := char_ofNat_toNat_of_isValid (c.toNat - 32) hv
    have hnl2 : ¬ ('a' ≤ Char.ofNat (c.toNat - 32) ∧ Char.ofNat (c.toNat - 32) ≤ 'z') := by
      intro hh
      have h1 : 97 ≤ (Char.ofNat (c.toNat - 32)).toNat := by simpa [char_le_iff_toNat_le, aChar_toNat] using hh.1
      rw [htn] at h1
      omega
    have hu2 : 'A' ≤ Char.ofNat (c.toNat - 32) ∧ Char.ofNat (c.toNat - 32) ≤ 'Z' := by
      constructor
      · have h' : 65 ≤ c.toNat - 32 := by omega
        simpa [char_le_iff_toNat_le, AChar_toNat, htn] using h'
      · have h' : c.toNat - 32 ≤ 90 := by omega
        simpa [char_le_iff_toNat_le, ZChar_toNat, htn] using h'
    rw [swapAsciiCase_low c hl, swapAsciiCase_up _ hnl2 hu2, htn]
    have hback : c.toNat - 32 + 32 = c.toNat := by omega
    rw [hback, Char.ofNat_toNat]
  · by_cases hu : 'A' ≤ c ∧ c ≤ 'Z'
    · have hnlo : 65 ≤ c.toNat := by simpa [char_le_iff_toNat_le, AChar_toNat] using hu.1
      have hnhi : c.toNat ≤ 90 := by simpa [char_le_iff_toNat_le, ZChar_toNat] using hu.2
      have hv : (c.toNat + 32).isValidChar := by
        unfold Nat.isValidChar
        left
        omega
      have htn : (Char.ofNat (c.toNat + 32)).toNat = c.toNat + 32 := char_ofNat_toNat_of_isValid (c.toNat + 32) hv
      have hl2 : 'a' ≤ Char.ofNat (c.toNat + 32) ∧ Char.ofNat (c.toNat + 32) ≤ 'z' := by
        constructor
        · have h' : 97 ≤ c.toNat + 32 := by omega
          simpa [char_le_iff_toNat_le, aChar_toNat, htn] using h'
        · have h' : c.toNat + 32 ≤ 122 := by omega
          simpa [char_le_iff_toNat_le, zChar_toNat, htn] using h'
      rw [swapAsciiCase_up c hl hu, swapAsciiCase_low _ hl2, htn]
      have hback : c.toNat + 32 - 32 = c.toNat := by omega
      rw [hback, Char.ofNat_toNat]
    · simp [swapAsciiCase, hl, hu]

/-- Unfolding ciChar: a case-insensitive character match succeeds exactly when the two characters are equal or the subject is the literal's case-swapped form. -/
theorem ciChar_eq_true_iff (c lit : Char) : ciChar c lit = true ↔ c = lit ∨ c = swapAsciiCase lit := by
  simp [ciChar]

theorem ciChar_refl (c : Char) : ciChar c c = true := by
  simp [ciChar]

theorem ciChar_swapAsciiCase (c : Char) : ciChar (swapAsciiCase c) c = true := by
  rw [ciChar_eq_true_iff]
  exact Or.inr rfl

theorem ciChar_lit_swapAsciiCase (c : Char) : ciChar c (swapAsciiCase c) = true := by
  rw [ciChar_eq_true_iff]
  exact Or.inr (swapAsciiCase_involutive c).symm

/-! ## Case-insensitive literal prefix matching -/

theorem matchLit_cons_pos (c l : Char) (s p : List Char) (hci : ciChar c l = true) : matchLit (c :: s) (l :: p) = matchLit s p := by
  simp [matchLit, hci]

theorem matchLit_cons_neg (c l : Char) (s p : List Char) (hci : ¬ ciChar c l = true) : matchLit (c :: s) (l :: p) = none := by
  simp [matchLit, hci]

/-- Every successful literal match consumes exactly the pattern's length: the residual is s.drop p.length. -/
theorem matchLit_some_drop (s p : List Char) : ∀ rest, matchLit s p = some rest → rest = s.drop p.length := by
  induction p generalizing s with
  | nil =>
      intro rest h
      simp [matchLit] at h
      subst rest
      rfl
  | cons l p ih =>
      cases s with
      | nil => simp [matchLit]
      | cons c s' =>
          by_cases hci : ciChar c l = true
          · simp [matchLit, hci]
            intro rest h
            simpa using ih (s := s') rest h
          · simp [matchLit, hci]

/-- A successful literal match cannot consume more characters than the subject holds. -/
theorem matchLit_length_le (s p : List Char) : ∀ rest, matchLit s p = some rest → p.length ≤ s.length := by
  induction p generalizing s with
  | nil =>
      intro rest h
      simp
  | cons l p ih =>
      cases s with
      | nil => simp [matchLit]
      | cons c s' =>
          by_cases hci : ciChar c l = true
          · simp [matchLit, hci]
            intro rest h
            have hp := ih (s := s') rest h
            omega
          · simp [matchLit, hci]

/-- A nonempty pattern's successful match strictly shortens the subject; this is the lemma that bounds the closer tail enumeration of codeBody. -/
theorem matchLit_length_lt (s p : List Char) (hp : p ≠ []) (rest : List Char) (h : matchLit s p = some rest) : rest.length < s.length := by
  have hd := matchLit_some_drop s p rest h
  have hl := matchLit_length_le s p rest h
  rw [hd]
  have hpos : 0 < p.length := by
    cases p with
    | nil => contradiction
    | cons x xs => simp
  simp [List.length_drop]
  omega

/-! ## The token built by process() -/

theorem omGet_append_of_none (m : OptMap) (k : List Char) (v : OptVal) (h : omGet m k = none) : omGet (m ++ [(k, v)]) k = some v := by
  induction m with
  | nil => simp [omGet]
  | cons kv m ih =>
      by_cases hkv : kv.1 == k
      · simp [omGet, hkv] at h
      · simp [omGet, hkv, ih (by simpa [omGet, hkv] using h)]

theorem codeToken_rule (g1 : Option (List Char)) (body : List Char) : (codeToken g1 body).rule = "Code" := rfl

theorem codeToken_text (g1 : Option (List Char)) (body : List Char) : omGet (codeToken g1 body).opts "text".toList = some (OptVal.str body) := by
  simp [codeToken, omGet]

/-- The process() token always carries an attr map with a type key: an empty trimmed argument group yields exactly {type: ""}; a nonempty group uses getAttrs' result if it already has a type key and otherwise appends the default. -/
theorem codeToken_attr_has_type (g1 : Option (List Char)) (body : List Char) : ∃ attr : OptMap, omGet (codeToken g1 body).opts "attr".toList = some (OptVal.map attr) ∧ ∃ v, omGet attr "type".toList = some v := by
  unfold codeToken
  dsimp
  by_cases hargs : (trimChars (g1.getD [])).isEmpty
  · refine ⟨[("type".toList, OptVal.str [])], ?_, ?_⟩
    · simp [hargs, omGet]
    · exact ⟨OptVal.str [], by simp [omGet]⟩
  · cases htype : omGet (getAttrs (trimChars (g1.getD []))) "type".toList with
    | none =>
        refine ⟨getAttrs (trimChars (g1.getD [])) ++ [("type".toList, OptVal.str [])], ?_, ?_⟩
        · simp at htype
          simp [hargs, omGet, htype]
        · exact ⟨OptVal.str [], omGet_append_of_none _ _ _ htype⟩
    | some v =>
        refine ⟨getAttrs (trimChars (g1.getD [])), ?_, ?_⟩
        · simp at htype
          simp [hargs, omGet, htype]
        · exact ⟨v, htype⟩

/-! ## Mutual matcher invariants -/

theorem codeMatch_nil (atLineStart : Bool) (fuel : Nat) : codeMatch [] atLineStart fuel = [] := by
  cases fuel with
  | zero => rfl
  | succ fuel =>
      by_cases hls : atLineStart = true
      · simp [codeMatch, hls, matchLit]
      · simp [codeMatch, hls]

/-! ## Segment helpers used by the scan invariants -/

theorem tok_mem_normSegs (k : Nat) (ss : List TSeg) : TSeg.tok k ∈ normSegs ss → TSeg.tok k ∈ ss := by
  induction ss with
  | nil => simp [normSegs]
  | cons s ss ih =>
      cases s with
      | tok n =>
          intro hm
          simp [normSegs] at hm ⊢
          rcases hm with rfl | hm
          · exact Or.inl rfl
          · exact Or.inr (ih hm)
      | text cs =>
          cases cs with
          | nil => simpa [normSegs] using ih
          | cons c cs' =>
              cases h : normSegs ss with
              | nil => simp [normSegs, h]
              | cons t ts =>
                  cases t with
                  | text cs2 =>
                      intro hm
                      simp [normSegs, h] at hm ⊢
                      exact ih (by simp [h, hm])
                  | tok n =>
                      intro hm
                      simp [normSegs, h] at hm ⊢
                      rcases hm with hkn | hm
                      · subst k
                        exact ih (by simp [h])
                      · exact ih (by simp [h, hm])

theorem tok_mem_pushText (k : Nat) (ss : List TSeg) (cs : List Char) : TSeg.tok k ∈ pushText ss cs → TSeg.tok k ∈ ss := by
  unfold pushText
  split
  · intro h
    exact h
  · intro h
    have h' := tok_mem_normSegs k (ss ++ [TSeg.text cs]) h
    simpa using h'

/-! ## applyCode scan invariants -/

/-- Every scan step appends zero or one token to the table: the final table is the input table plus a suffix. -/
theorem scan_append_only (rest : List Char) (prev : Option Char) (toks : List TokenEntry) (out : List TSeg) (buf : List Char) (fuel : Nat) : ∃ added, (applyCode.scan rest prev toks out buf fuel).2 = toks ++ added := by
  induction fuel generalizing rest prev toks out buf with
  | zero =>
      cases rest with
      | nil =>
          refine ⟨[], ?_⟩
          simpa using (show (applyCode.scan [] prev toks out buf 0).2 = toks from rfl)
      | cons c rest' =>
          refine ⟨[], ?_⟩
          simpa using (show (applyCode.scan (c :: rest') prev toks out buf 0).2 = toks from rfl)
  | succ fuel ih =>
      cases rest with
      | nil =>
          refine ⟨[], ?_⟩
          simpa using (show (applyCode.scan [] prev toks out buf (fuel + 1)).2 = toks from rfl)
      | cons c rest' =>
          by_cases hls : prev = none ∨ prev = some '\n'
          · cases hcm : codeMatch (c :: rest') true (codeFuel (c :: rest').length) with
            | nil =>
                have hcm' : codeMatch (c :: rest') true (codeFuel (rest'.length + 1)) = [] := by simpa using hcm
                simpa [applyCode.scan, hls, hcm'] using ih rest' (some c) toks out (buf ++ [c])
            | cons m ms =>
                rcases m with ⟨consumed, g1, body, g3⟩
                let entry := codeToken g1 body
                let idx := toks.length
                let out' := pushTok (pushText (pushText out buf) "\n\n".toList) idx
                have hcm' : codeMatch (c :: rest') true (codeFuel (rest'.length + 1)) = (consumed, g1, body, g3) :: ms := by simpa using hcm
                rcases ih ((c :: rest').drop consumed) ((c :: rest').take consumed).getLast? (toks ++ [entry]) out' g3 with ⟨added, hadd⟩
                refine ⟨[entry] ++ added, ?_⟩
                simpa [applyCode.scan, hls, hcm', entry, idx, out', List.append_assoc] using hadd
          · simpa [applyCode.scan, hls] using ih rest' (some c) toks out (buf ++ [c])

/-- Every token reference in emitted work points into the grown table: no placeholder escapes beyond the appended entries. -/
theorem scan_indices_lt (rest : List Char) (prev : Option Char) (toks : List TokenEntry) (out : List TSeg) (buf : List Char) (fuel : Nat)
    (hout : ∀ k, TSeg.tok k ∈ out → k < toks.length) :
    ∀ k, TSeg.tok k ∈ (applyCode.scan rest prev toks out buf fuel).1 → k < (applyCode.scan rest prev toks out buf fuel).2.length := by
  induction fuel generalizing rest prev toks out buf with
  | zero =>
      cases rest with
      | nil =>
          intro k hk
          change TSeg.tok k ∈ pushText out buf at hk
          change k < toks.length
          exact hout k (tok_mem_pushText k out buf hk)
      | cons c rest' =>
          intro k hk
          change TSeg.tok k ∈ pushText out buf at hk
          change k < toks.length
          exact hout k (tok_mem_pushText k out buf hk)
  | succ fuel ih =>
      cases rest with
      | nil =>
          intro k hk
          change TSeg.tok k ∈ pushText out buf at hk
          change k < toks.length
          exact hout k (tok_mem_pushText k out buf hk)
      | cons c rest' =>
          by_cases hls : prev = none ∨ prev = some '\n'
          · cases hcm : codeMatch (c :: rest') true (codeFuel (c :: rest').length) with
            | nil =>
                have hcm' : codeMatch (c :: rest') true (codeFuel (rest'.length + 1)) = [] := by simpa using hcm
                simpa [applyCode.scan, hls, hcm'] using ih rest' (some c) toks out (buf ++ [c]) hout
            | cons m ms =>
                rcases m with ⟨consumed, g1, body, g3⟩
                let entry := codeToken g1 body
                let idx := toks.length
                let out' := pushTok (pushText (pushText out buf) "\n\n".toList) idx
                have hcm' : codeMatch (c :: rest') true (codeFuel (rest'.length + 1)) = (consumed, g1, body, g3) :: ms := by simpa using hcm
                have hout' : ∀ k, TSeg.tok k ∈ out' → k < (toks ++ [entry]).length := by
                  intro k hk
                  simp [out', pushTok] at hk
                  rcases hk with hk | hk
                  · have hk1 := tok_mem_pushText k (pushText out buf) "\n\n".toList hk
                    have hk2 := tok_mem_pushText k out buf hk1
                    have hk3 := hout k hk2
                    simp
                    omega
                  · subst k
                    simp [idx]
                simpa [applyCode.scan, hls, hcm', entry, idx, out'] using
                  (ih ((c :: rest').drop consumed) ((c :: rest').take consumed).getLast? (toks ++ [entry]) out' g3 hout')
          · simpa [applyCode.scan, hls] using ih rest' (some c) toks out (buf ++ [c]) hout

theorem applyCode_append_only (cs : List Char) (toks : List TokenEntry) : ∃ added, (applyCode cs toks).2 = toks ++ added :=
  scan_append_only cs none toks [] [] (cs.length + 1)

theorem applyCode_indices_lt (cs : List Char) (toks : List TokenEntry) : ∀ k, TSeg.tok k ∈ (applyCode cs toks).1 → k < (applyCode cs toks).2.length :=
  scan_indices_lt cs none toks [] [] (cs.length + 1) (by simp)

/-! ## What codeRule preserves without the unbuilt WF layer -/

theorem codeRule_of_no_text (st : ParseState) (h : allText st.work = none) : codeRule st = st := by
  simp [codeRule, h]

theorem codeRule_doc_fatal_unchanged (st : ParseState) : (codeRule st).doc = st.doc ∧ (codeRule st).fatal = st.fatal := by
  cases h : allText st.work with
  | none => simp [codeRule, h]
  | some cs => simp [codeRule, h]

/-- Conditional token-reference bound for codeRule: if the incoming state's work references only existing tokens, the emitted work references only the grown table. With WFState imported at integration this is the work-side half of WF preservation; the other half (canonical normSegs form and option-map monotonicity) is not claimed here. -/
theorem codeRule_tokens_bounded (st : ParseState) (hin : ∀ k, TSeg.tok k ∈ st.work → k < st.tokens.length) : ∀ k, TSeg.tok k ∈ (codeRule st).work → k < (codeRule st).tokens.length := by
  cases h : allText st.work with
  | none =>
      intro k hk
      have hk' : TSeg.tok k ∈ st.work := by simpa [codeRule, h] using hk
      have hlt := hin k hk'
      simpa [codeRule, h] using hlt
  | some cs =>
      intro k hk
      have hk' : TSeg.tok k ∈ (applyCode cs st.tokens).1 := by simpa [codeRule, h] using hk
      have hlt := applyCode_indices_lt cs st.tokens k hk'
      simpa [codeRule, h] using hlt

/-! ## Named kernel-dependent remainder and axiom audit -/

/-- REMAINDER (Class B kernel-dependent, not proved here): equivalence of the hand-coded mutual codeMatch/codeBody (?R) backtracking matcher to PcreCore.runMatch on the extracted code regex in RefTables.refRuleRegexes ("code", byte list with (?R)) and to PHP 8.5 libpcre2 is not established by this file. REBASE NOTE (PROOF-REB2): codeMatch/codeBody body invariants, consumed-position, remaining-length laws are recorded as a named remainder (R3) rather than as proved theorems; the four theorem names formerly cited for these laws in the inherited lane report were withdrawn as nonexistent in the source. PcreCore and RefTables are unbuilt F2 drafts on this branch; introducing them here would require importing unbuilt modules or inventing a stand-in engine. The mirror's nested bound codeFuel n = 4*n+16 is NOT claimed sufficient to enumerate all PCRE-priority parses of a recursive body. The outer scan's fuel-sufficiency claim (cs.length+1 never truncates a step) depends on a universal consumption bound for the nested matcher and is likewise an explicitly named remainder here; what is proved for applyCode is the append-only token table and the bound that every emitted placeholder index is inside the grown table. Rendering is a further remainder: the built mirror's renderCode (LeanFtml.CodeEmbedRules, opts : OptMap) : List Nat is environment-free and does not consult RenderEnv.highlightCode, which exists only in the unbuilt F3 draft; no RenderEnv-parametric renderCode theorem is asserted here. -/
theorem codeRule_remainder_is_named : True := trivial

#print axioms swapAsciiCase_involutive
#print axioms ciChar_eq_true_iff
#print axioms matchLit_some_drop
#print axioms codeToken_attr_has_type
#print axioms applyCode_indices_lt
#print axioms codeRule_tokens_bounded

end LeanFtml
