import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml.ModuleCodeGateProof

/-!
Universal structural facts about the REFCORR7/9 Code-only body re-emit gate in `ModuleRules.lean`: `bytesContain`, `bodyHasCodeToken`, and the re-emit branch of `moduleTryCands`. Everything here is interface-free: no `RenderEnv`, no `ModuleManager`, no reference kernel. The claim-level result is conditional on a single candidate with empty residual and a non-triggered defense; its two hypotheses are named gaps below. All declarations sit in this sub-namespace so other proof files are untouched.
-/

/-! ## Infix containment over byte lists -/

theorem gate_isPrefixOf_iff_exists_append (pat xs : List Nat) :
    pat.isPrefixOf xs = true ↔ ∃ t, xs = pat ++ t := by
  induction pat generalizing xs with
  | nil => simp
  | cons p ps ih =>
      cases xs with
      | nil => simp
      | cons x xs' =>
          constructor
          · intro h
            have hp_and : (p == x) = true ∧ ps.isPrefixOf xs' = true := by
              simpa [List.isPrefixOf] using h
            have hpx : p = x := by simpa using hp_and.1
            subst x
            obtain ⟨t, ht⟩ := (ih xs').mp hp_and.2
            subst xs'
            exact ⟨t, rfl⟩
          · rintro ⟨t, ht⟩
            change x :: xs' = p :: (ps ++ t) at ht
            injection ht with hx hxs
            subst x
            subst xs'
            have hps : ps.isPrefixOf (ps ++ t) = true := (ih (ps ++ t)).mpr ⟨t, rfl⟩
            simp [List.isPrefixOf, hps]

theorem gate_isPrefixOf_append (pat xs ys : List Nat) (h : pat.isPrefixOf xs = true) :
    pat.isPrefixOf (xs ++ ys) = true := by
  obtain ⟨t, ht⟩ := (gate_isPrefixOf_iff_exists_append pat xs).mp h
  subst xs
  exact (gate_isPrefixOf_iff_exists_append pat (pat ++ t ++ ys)).mpr
    ⟨t ++ ys, by simp [List.append_assoc]⟩

theorem gate_bytesContain_append (pat body tail : List Nat) (h : bytesContain pat body = true) :
    bytesContain pat (body ++ tail) = true := by
  induction body with
  | nil => simp [bytesContain] at h
  | cons b bs ih =>
      simp [bytesContain] at h ⊢
      rcases h with hp | hb
      · have hpB : pat.isPrefixOf (b :: bs) = true := by simpa using hp
        have htailB : pat.isPrefixOf ((b :: bs) ++ tail) = true :=
          gate_isPrefixOf_append pat (b :: bs) tail hpB
        exact Or.inl (by simpa using htailB)
      · exact Or.inr (ih hb)

theorem gate_bytesContain_prepend (pat pre body : List Nat) (h : bytesContain pat body = true) :
    bytesContain pat (pre ++ body) = true := by
  induction pre with
  | nil => simpa
  | cons b pre ih =>
      simp [bytesContain]
      exact Or.inr ih

theorem gate_bytesContain_iff_exists (pat body : List Nat) (hpos : 0 < pat.length) :
    bytesContain pat body = true ↔ ∃ pre suf, body = pre ++ pat ++ suf := by
  cases pat with
  | nil => simp at hpos
  | cons p ps =>
      induction body with
      | nil =>
          constructor
          · intro h; simp [bytesContain] at h
          · rintro ⟨pre, suf, h⟩
            have hl := congrArg List.length h
            simp at hl
      | cons b bs ih =>
          constructor
          · intro h
            simp [bytesContain] at h
            rcases h with hp | hb
            · have hpB : (p :: ps).isPrefixOf (b :: bs) = true := by simpa using hp
              obtain ⟨t, ht⟩ := (gate_isPrefixOf_iff_exists_append (p :: ps) (b :: bs)).mp hpB
              exact ⟨[], t, ht⟩
            · obtain ⟨pre, suf, hs⟩ := ih.mp hb
              exact ⟨b :: pre, suf, by simpa [hs]⟩
          · rintro ⟨pre, suf, h⟩
            cases pre with
            | nil =>
                simp at h
                rcases h with ⟨hb_eq, hbs_eq⟩
                subst b
                subst bs
                have hpref : (p :: ps).isPrefixOf ((p :: ps) ++ suf) = true :=
                  (gate_isPrefixOf_iff_exists_append (p :: ps) ((p :: ps) ++ suf)).mpr ⟨suf, rfl⟩
                simp [bytesContain, hpref]
            | cons q qs =>
                simp at h
                rcases h with ⟨hb_eq, hbs_eq⟩
                have hbs_eq' : bs = qs ++ p :: ps ++ suf := by
                  simpa [List.append_assoc] using hbs_eq
                have hrec : bytesContain (p :: ps) bs = true := ih.mpr ⟨qs, suf, hbs_eq'⟩
                subst b
                subst bs
                simp [bytesContain, hrec]

theorem gate_bytesContain_self (pat tail : List Nat) (hpos : 0 < pat.length) :
    bytesContain pat (pat ++ tail) = true :=
  (gate_bytesContain_iff_exists pat (pat ++ tail) hpos).mpr ⟨[], tail, rfl⟩

theorem gate_bytesContain_false_of_no_occurrence (pat body : List Nat) (hpos : 0 < pat.length)
    (hno : ¬ ∃ pre suf, body = pre ++ pat ++ suf) : bytesContain pat body = false := by
  cases hb : bytesContain pat body with
  | false => rfl
  | true => exact False.elim (hno ((gate_bytesContain_iff_exists pat body hpos).mp hb))

theorem gate_phBytes_pos (n : Nat) : 0 < (phBytes n).length := by
  simp [phBytes]

/-! ## The Code-token gate -/

theorem gate_bodyHasCodeToken_nil (body : List Nat) (i : Nat) :
    bodyHasCodeToken body [] i = false := by
  rfl

theorem gate_bodyHasCodeToken_false_no_code (body : List Nat) (toks : List TokenEntry) (i : Nat)
    (h : ∀ t ∈ toks, t.rule ≠ "Code") : bodyHasCodeToken body toks i = false := by
  induction toks generalizing i with
  | nil => rfl
  | cons t ts ih =>
      have ht : t.rule ≠ "Code" := h t (by simp)
      have hbeq : (t.rule == "Code") = false := by simpa using ht
      have hts : ∀ u ∈ ts, u.rule ≠ "Code" := by
        intro u hu
        exact h u (by simp [hu])
      have htail : bodyHasCodeToken body ts (i + 1) = false := ih (i + 1) hts
      simp [bodyHasCodeToken, hbeq, htail]

theorem gate_bodyHasCodeToken_true_head (body : List Nat) (t : TokenEntry) (ts : List TokenEntry) (i : Nat)
    (hrule : t.rule = "Code") (hb : bytesContain (phBytes i) body = true) :
    bodyHasCodeToken body (t :: ts) i = true := by
  have hbeq : (t.rule == "Code") = true := by simpa [hrule]
  simp [bodyHasCodeToken, hbeq, hb]

theorem gate_bodyHasCodeToken_append_tokens_preserves (body : List Nat) (toks more : List TokenEntry) (i : Nat)
    (h : bodyHasCodeToken body toks i = true) :
    bodyHasCodeToken body (toks ++ more) i = true := by
  induction toks generalizing i with
  | nil => cases h
  | cons t ts ih =>
      simp [bodyHasCodeToken] at h ⊢
      rcases h with hhead | htail
      · exact Or.inl hhead
      · exact Or.inr (ih (i + 1) htail)

theorem gate_bodyHasCodeToken_append_tokens_detect (body : List Nat) (toks more : List TokenEntry) (i : Nat)
    (h : bodyHasCodeToken body more (i + toks.length) = true) :
    bodyHasCodeToken body (toks ++ more) i = true := by
  induction toks generalizing i with
  | nil => simpa using h
  | cons t ts ih =>
      have hidx' : i + (ts.length + 1) = (i + 1) + ts.length := by omega
      have h' : bodyHasCodeToken body more ((i + 1) + ts.length) = true := by
        simpa [hidx'] using h
      simp [bodyHasCodeToken]
      exact Or.inr (ih (i + 1) h')

theorem gate_bodyHasCodeToken_append_body_true (body tail : List Nat) (toks : List TokenEntry) (i : Nat)
    (h : bodyHasCodeToken body toks i = true) :
    bodyHasCodeToken (body ++ tail) toks i = true := by
  induction toks generalizing i with
  | nil => cases h
  | cons t ts ih =>
      simp [bodyHasCodeToken] at h ⊢
      rcases h with hhead | htail
      · exact Or.inl ⟨hhead.1, gate_bytesContain_append (phBytes i) body tail hhead.2⟩
      · exact Or.inr (ih (i + 1) htail)

theorem gate_bodyHasCodeToken_false_no_ph (body : List Nat) (toks : List TokenEntry) (i : Nat)
    (h : ∀ j, bytesContain (phBytes j) body = false) :
    bodyHasCodeToken body toks i = false := by
  induction toks generalizing i with
  | nil => rfl
  | cons t ts ih =>
      simp [bodyHasCodeToken, h i, ih (i + 1)]

/-! ## Exact behavior on the concrete Code/Raw placeholder frames -/

def gateCodeTok : List TokenEntry := [{ rule := "Code", opts := [] }]

def gateRawTok : List TokenEntry := [{ rule := "Raw", opts := [] }]

theorem gate_code_body_detected (c : List Nat) :
    bodyHasCodeToken (phBytes 0 ++ [10] ++ c) gateCodeTok 0 = true := by
  have hb : bytesContain (phBytes 0) (phBytes 0 ++ [10] ++ c) = true :=
    gate_bytesContain_self (phBytes 0) ([10] ++ c) (gate_phBytes_pos 0)
  simpa [gateCodeTok] using
    (gate_bodyHasCodeToken_true_head (phBytes 0 ++ [10] ++ c)
      ({ rule := "Code", opts := [] } : TokenEntry) [] 0 rfl hb)

theorem gate_raw_body_not_detected (c : List Nat) :
    bodyHasCodeToken (phBytes 0 ++ [10] ++ c) gateRawTok 0 = false := by
  simp [gateRawTok, bodyHasCodeToken]

theorem gate_all_raw_false (body : List Nat) :
    bodyHasCodeToken body gateRawTok 0 = false := by
  simp [gateRawTok, bodyHasCodeToken]

theorem gate_no_ph_body_not_detected :
    bodyHasCodeToken ([10, 20, 30] : List Nat) gateCodeTok 0 = false := by
  have hb : bytesContain (phBytes 0) ([10, 20, 30] : List Nat) = false := by
    decide
  simp [gateCodeTok, bodyHasCodeToken, hb]

theorem gate_code_present_without_ph_not_detected (body : List Nat)
    (hno : ¬ ∃ pre suf, body = pre ++ phBytes 0 ++ suf) :
    bodyHasCodeToken body gateCodeTok 0 = false := by
  have hb : bytesContain (phBytes 0) body = false :=
    gate_bytesContain_false_of_no_occurrence (phBytes 0) body (gate_phBytes_pos 0) hno
  simp [gateCodeTok, bodyHasCodeToken, hb]

theorem gate_later_code_token_detected (body : List Nat) (hb : bytesContain (phBytes 1) body = true) :
    bodyHasCodeToken body (gateRawTok ++ gateCodeTok) 0 = true := by
  have h1 : bodyHasCodeToken body gateCodeTok 1 = true := by
    simp [gateCodeTok, bodyHasCodeToken, hb]
  simpa using (gate_bodyHasCodeToken_append_tokens_detect body gateRawTok gateCodeTok 0 h1)

/-! ## The claim-level re-emit gate -/

def gatePrefix (name attr body : List Nat) (toks : List TokenEntry) : List Nat :=
  [10, 10] ++ (claimModule "Module" name attr body toks).1 ++ [10, 10]

theorem gate_append_cancel_left {a b c : List Nat} (h : a ++ b = a ++ c) : b = c :=
  List.append_cancel_left h

theorem moduleTryCands_single_code_reemit
    (src name attrRaw rest bodyRaw : List Nat) (toks : List TokenEntry)
    (hTail : moduleTail rest = some (bodyRaw, []))
    (hNoHtml : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = false)
    (hDef : countModuleOpeners none src (src.length + 1) ≤ 1)
    (hGate : bodyHasCodeToken bodyRaw toks 0 = true) :
    moduleTryCands src name toks [(attrRaw, rest)] =
      some (gatePrefix name (trimBytes attrRaw) (trimBytes bodyRaw) toks ++
              (bodyRaw ++ src.drop (src.length - 11)),
            [], (claimModule "Module" name (trimBytes attrRaw) (trimBytes bodyRaw) toks).2) := by
  have hnot : ¬ countModuleOpeners none src (src.length + 1) > 1 := by omega
  simp [moduleTryCands, hTail, hNoHtml, hnot, gatePrefix, hGate, List.take_length, List.append_assoc]

theorem moduleTryCands_single_no_code_no_reemit
    (src name attrRaw rest bodyRaw : List Nat) (toks : List TokenEntry)
    (hTail : moduleTail rest = some (bodyRaw, []))
    (hNoHtml : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = false)
    (hDef : countModuleOpeners none src (src.length + 1) ≤ 1)
    (hGate : bodyHasCodeToken bodyRaw toks 0 = false) :
    moduleTryCands src name toks [(attrRaw, rest)] =
      some (gatePrefix name (trimBytes attrRaw) (trimBytes bodyRaw) toks,
            [], (claimModule "Module" name (trimBytes attrRaw) (trimBytes bodyRaw) toks).2) := by
  have hnot : ¬ countModuleOpeners none src (src.length + 1) > 1 := by omega
  simp [moduleTryCands, hTail, hNoHtml, hnot, gatePrefix, hGate, List.take_length, List.append_assoc]

theorem moduleTryCands_single_code_reemit_iff
    (src name attrRaw rest bodyRaw : List Nat) (toks : List TokenEntry)
    (hTail : moduleTail rest = some (bodyRaw, []))
    (hNoHtml : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = false)
    (hDef : countModuleOpeners none src (src.length + 1) ≤ 1)
    (hsrc : 11 ≤ src.length) :
    moduleTryCands src name toks [(attrRaw, rest)] =
      some (gatePrefix name (trimBytes attrRaw) (trimBytes bodyRaw) toks ++
              (bodyRaw ++ src.drop (src.length - 11)),
            [], (claimModule "Module" name (trimBytes attrRaw) (trimBytes bodyRaw) toks).2) ↔
    bodyHasCodeToken bodyRaw toks 0 = true := by
  constructor
  · intro hEq
    by_cases hg : bodyHasCodeToken bodyRaw toks 0 = true
    · exact hg
    · have hgf : bodyHasCodeToken bodyRaw toks 0 = false := by
        cases h : bodyHasCodeToken bodyRaw toks 0 <;> simp_all
      have hnot : ¬ countModuleOpeners none src (src.length + 1) > 1 := by omega
      have hprefEq :
          gatePrefix name (trimBytes attrRaw) (trimBytes bodyRaw) toks ++ ([] : List Nat) =
          gatePrefix name (trimBytes attrRaw) (trimBytes bodyRaw) toks ++
            (bodyRaw ++ src.drop (src.length - 11)) := by
        simpa [moduleTryCands, hTail, hNoHtml, hnot, gatePrefix, hgf, List.take_length] using hEq
      have hnil : ([] : List Nat) = bodyRaw ++ src.drop (src.length - 11) :=
        gate_append_cancel_left hprefEq
      have hlen := congrArg List.length hnil
      have hcloser : (src.drop (src.length - 11)).length = 11 := by
        rw [List.length_drop]
        omega
      simp [List.length_append, hcloser] at hlen
  · intro hg
    exact moduleTryCands_single_code_reemit src name attrRaw rest bodyRaw toks hTail hNoHtml hDef hg

/-! ## Axiom audit -/

#print axioms gate_isPrefixOf_iff_exists_append
#print axioms gate_isPrefixOf_append
#print axioms gate_bytesContain_append
#print axioms gate_bytesContain_prepend
#print axioms gate_bytesContain_iff_exists
#print axioms gate_bytesContain_self
#print axioms gate_bytesContain_false_of_no_occurrence
#print axioms gate_phBytes_pos
#print axioms gate_bodyHasCodeToken_nil
#print axioms gate_bodyHasCodeToken_false_no_code
#print axioms gate_bodyHasCodeToken_true_head
#print axioms gate_bodyHasCodeToken_append_tokens_preserves
#print axioms gate_bodyHasCodeToken_append_tokens_detect
#print axioms gate_bodyHasCodeToken_append_body_true
#print axioms gate_bodyHasCodeToken_false_no_ph
#print axioms gate_code_body_detected
#print axioms gate_raw_body_not_detected
#print axioms gate_all_raw_false
#print axioms gate_no_ph_body_not_detected
#print axioms gate_code_present_without_ph_not_detected
#print axioms gate_later_code_token_detected
#print axioms gate_append_cancel_left
#print axioms moduleTryCands_single_code_reemit
#print axioms moduleTryCands_single_no_code_no_reemit
#print axioms moduleTryCands_single_code_reemit_iff

end LeanFtml.ModuleCodeGateProof
