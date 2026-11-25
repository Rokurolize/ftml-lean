/-
LeanFtml.ProofParaTighten — Wave 2 proof/para-inline lane (task-2).
Policy class: ADVISOR-PROOF-POLICY.md §2.2 Class A (Inline3Rules Tighten, a 5-step deterministic pass over bytes + token table).
Proved here (kernel-free, axiom-pure): exact stepwise specs for every pass (newline deletion filter, whitespace fold, discarded-control drop, empty-Raw placeholder stripping, color edge hoist/eject, edge-space deletion), fuel-sufficiency for the three scanners, tightenBytes = composition of its passes, unconditional token-table/doc/fatal preservation for tightenRule, a conditional WFState preservation theorem, and a conditional TokEquiv theorem.
Named remainder (not proved, not axiomatized): the WFSegs-of-work premise in the conditional WF theorem is exactly the unproved Tier-1 byteForm/parseBytes bridge recorded as an obligation in TokenStateProof.lean; it needs the general UTF-8 round trip, which is a foundation (coordinator) item, not this lane's kernel-free scope. Regex-vs-PcreCore/libpcre2 agreement is TCB-2 and coordinator scope; no such claim is made here.
All theorem axioms are within [propext, Classical.choice, Quot.sound].
-/
import LeanFtml.Inline3Rules
import LeanFtml.TokenStateProof
import LeanFtml.ByteCore

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## Shared predicates -/

def nonPadB (b : Nat) : Bool := !(b == 32 || b == 9)

/-! ## Whitespace fold (collapsePad) -/

private theorem parainline_tighten_collapsePad_go_true (bs : List Nat) :
    collapsePad.go true bs = collapsePad (bs.dropWhile (fun b => b == 32 || b == 9)) := by
  induction bs with
  | nil => rfl
  | cons b rest ih =>
      cases hb1 : b == 32 <;> cases hb2 : b == 9 <;>
        simp [collapsePad, collapsePad.go, hb1, hb2, ih]

theorem parainline_tighten_collapsePad_spec (bs : List Nat) :
    collapsePad bs =
      match bs with
      | [] => []
      | b :: rest =>
          if b == 32 || b == 9 then
            32 :: collapsePad (rest.dropWhile (fun b => b == 32 || b == 9))
          else b :: collapsePad rest := by
  cases bs with
  | nil => rfl
  | cons b rest =>
      cases hb1 : b == 32 <;> cases hb2 : b == 9 <;>
        simp [collapsePad, collapsePad.go, hb1, hb2,
          parainline_tighten_collapsePad_go_true]

private theorem parainline_tighten_collapsePad_go_no_tab (inRun : Bool) (bs : List Nat) :
    9 ∉ collapsePad.go inRun bs := by
  induction bs generalizing inRun with
  | nil => simp [collapsePad.go]
  | cons b rest ih =>
      cases inRun <;> by_cases hb32 : b = 32 <;> by_cases hb9 : b = 9 <;>
        simp [collapsePad.go, hb32, hb9, ih] <;> omega

theorem parainline_tighten_collapsePad_no_tab (bs : List Nat) : 9 ∉ collapsePad bs := by
  exact parainline_tighten_collapsePad_go_no_tab false bs

private theorem parainline_tighten_collapsePad_go_filter (inRun : Bool) (bs : List Nat) :
    (collapsePad.go inRun bs).filter nonPadB = bs.filter nonPadB := by
  induction bs generalizing inRun with
  | nil => simp [collapsePad.go]
  | cons b rest ih =>
      cases inRun <;> cases hb1 : b == 32 <;> cases hb2 : b == 9 <;>
        simp [collapsePad.go, nonPadB, hb1, hb2, ih]

theorem parainline_tighten_collapsePad_filter (bs : List Nat) :
    (collapsePad bs).filter nonPadB = bs.filter nonPadB := by
  exact parainline_tighten_collapsePad_go_filter false bs

/-! ## Global literal replacement (replaceAllB) -/

theorem parainline_tighten_replaceAllB_nil (pat rep : List Nat) :
    replaceAllB pat rep [] = [] := rfl

private theorem parainline_tighten_replaceAllB_go_same (pat rep : List Nat)
    (hpat : 0 < pat.length) :
    ∀ (src : List Nat) (f f' : Nat), src.length + 1 ≤ f → src.length + 1 ≤ f' →
      replaceAllB.go pat rep src f = replaceAllB.go pat rep src f' := by
  intro src f f' hf hf'
  induction f generalizing src f' with
  | zero => omega
  | succ f ih =>
      cases src with
      | nil => simp [replaceAllB.go]
      | cons b rest =>
          have hf_rest : rest.length + 1 ≤ f := by
            simp [List.length_cons] at hf
            omega
          cases f' with
          | zero => omega
          | succ f' =>
              have hf_rest' : rest.length + 1 ≤ f' := by
                simp [List.length_cons] at hf'
                omega
              cases hm : (b :: rest).take pat.length == pat
              · simp [replaceAllB.go, hm]
                rw [ih rest f' hf_rest hf_rest']
              · have hf_drop_f : (List.drop pat.length (b :: rest)).length + 1 ≤ f := by
                  simp [List.length_drop]
                  omega
                have hf_drop_f' : (List.drop pat.length (b :: rest)).length + 1 ≤ f' := by
                  simp [List.length_drop]
                  omega
                simp [replaceAllB.go, hm]
                rw [ih (List.drop pat.length (b :: rest)) f' hf_drop_f hf_drop_f']

theorem parainline_tighten_replaceAllB_match (pat rep : List Nat)
    (hpat : 0 < pat.length) (src : List Nat)
    (h : src.take pat.length == pat) :
    replaceAllB pat rep src = rep ++ replaceAllB pat rep (src.drop pat.length) := by
  unfold replaceAllB
  cases src with
  | nil =>
      cases pat with
      | nil => simp at hpat
      | cons p ps => simp at h
  | cons b rest =>
      have hf_drop : (List.drop pat.length (b :: rest)).length + 1 ≤ rest.length + 1 := by
        simp [List.length_drop]
        omega
      simp [replaceAllB.go, h]
      rw [parainline_tighten_replaceAllB_go_same pat rep hpat
        (List.drop pat.length (b :: rest)) (rest.length + 1)
        ((List.drop pat.length (b :: rest)).length + 1) hf_drop (Nat.le_refl _)]
      simp [List.length_drop]

theorem parainline_tighten_replaceAllB_nomatch (pat rep : List Nat) (b : Nat) (rest : List Nat)
    (h : ((b :: rest).take pat.length == pat) = false) :
    replaceAllB pat rep (b :: rest) = b :: replaceAllB pat rep rest := by
  unfold replaceAllB
  simp [replaceAllB.go, h]

/-! ## Edge-space deletion around placeholders (dropAfterPh / dropBeforePh) -/

theorem parainline_tighten_dropAfterPh_nil (ph : List Nat) : dropAfterPh ph [] = [] := rfl

theorem parainline_tighten_dropAfterPh_cons_nomatch (ph : List Nat) (b : Nat) (rest : List Nat)
    (h : ((b :: rest).take ph.length == ph) = false) :
    dropAfterPh ph (b :: rest) = b :: dropAfterPh ph rest := by
  unfold dropAfterPh
  simp [dropAfterPh.go, h]

theorem parainline_tighten_dropAfterPh_cons_match (ph : List Nat)
    (b : Nat) (rest : List Nat) (h : (b :: rest).take ph.length == ph) :
    dropAfterPh ph (b :: rest) =
      ph ++ dropAfterPh.go ph (List.drop ph.length (b :: rest)) true (rest.length + 1) := by
  unfold dropAfterPh
  simp [dropAfterPh.go, h]

theorem parainline_tighten_dropBeforePh_nil (ph : List Nat) : dropBeforePh ph [] = [] := rfl

theorem parainline_tighten_dropBeforePh_cons_pad (ph : List Nat) (b : Nat) (rest : List Nat)
    (hb : (b == 32 || b == 9) = true) :
    dropBeforePh ph (b :: rest) = dropBeforePh.go ph rest [b] (rest.length + 1) := by
  unfold dropBeforePh
  simp [dropBeforePh.go, hb]

theorem parainline_tighten_dropBeforePh_cons_ph (ph : List Nat)
    (b : Nat) (rest : List Nat)
    (hbnp : (b == 32 || b == 9) = false)
    (h : (b :: rest).take ph.length == ph) :
    dropBeforePh ph (b :: rest) =
      ph ++ dropBeforePh.go ph (List.drop ph.length (b :: rest)) [] (rest.length + 1) := by
  unfold dropBeforePh
  simp [dropBeforePh.go, hbnp, h]

theorem parainline_tighten_dropBeforePh_cons_other (ph : List Nat) (b : Nat) (rest : List Nat)
    (hbnp : (b == 32 || b == 9) = false)
    (h : ((b :: rest).take ph.length == ph) = false) :
    dropBeforePh ph (b :: rest) = b :: dropBeforePh ph rest := by
  unfold dropBeforePh
  simp [dropBeforePh.go, hbnp, h]

/-! ## Color pass (tightenColorPass) -/

def parainline_tighten_colorStep (tok : TokenEntry) (i : Nat) (bs : List Nat) : List Nat :=
  if tok.rule == "Colortext" then
    match omGet tok.opts "type".toList with
    | some (OptVal.str v) =>
        if v == "start".toList then
          replaceAllB (phBytes i ++ [32]) ([32] ++ phBytes i) bs
        else if v == "end".toList then
          replaceAllB ([32] ++ phBytes i) (phBytes i ++ [32]) bs
        else bs
    | _ => bs
  else bs

theorem parainline_tighten_colorPass_nil (bs : List Nat) (i : Nat) :
    tightenColorPass bs [] i = bs := rfl

theorem parainline_tighten_colorPass_cons (bs : List Nat) (tok : TokenEntry)
    (rest : List TokenEntry) (i : Nat) :
    tightenColorPass bs (tok :: rest) i =
      tightenColorPass (parainline_tighten_colorStep tok i bs) rest (i + 1) := rfl

theorem parainline_tighten_colorStep_noncolortext (tok : TokenEntry) (bs : List Nat) (i : Nat)
    (h : (tok.rule == "Colortext") = false) :
    parainline_tighten_colorStep tok i bs = bs := by
  simp [parainline_tighten_colorStep, h]

theorem parainline_tighten_colorStep_start (bs : List Nat) (i : Nat) (opts : OptMap)
    (h : omGet opts "type".toList = some (OptVal.str "start".toList)) :
    parainline_tighten_colorStep { rule := "Colortext", opts := opts } i bs =
      replaceAllB (phBytes i ++ [32]) ([32] ++ phBytes i) bs := by
  unfold parainline_tighten_colorStep
  rw [h]
  simp

theorem parainline_tighten_colorStep_end (bs : List Nat) (i : Nat) (opts : OptMap)
    (h : omGet opts "type".toList = some (OptVal.str "end".toList)) :
    parainline_tighten_colorStep { rule := "Colortext", opts := opts } i bs =
      replaceAllB ([32] ++ phBytes i) (phBytes i ++ [32]) bs := by
  unfold parainline_tighten_colorStep
  rw [h]
  simp

theorem parainline_tighten_colorPass_id_of_no_colortext (bs : List Nat)
    (toks : List TokenEntry) (i : Nat)
    (h : ∀ t ∈ toks, (t.rule == "Colortext") = false) :
    tightenColorPass bs toks i = bs := by
  induction toks generalizing i with
  | nil => rfl
  | cons tok rest ih =>
      have ht : (tok.rule == "Colortext") = false := h tok (by simp)
      have hrest : ∀ t ∈ rest, (t.rule == "Colortext") = false :=
        fun t ht' => h t (by simp [ht'])
      simp [tightenColorPass, parainline_tighten_colorStep, ht, ih (i + 1) hrest]

/-! ## Edge pass (tightenEdgePass) -/

def parainline_tighten_edgeStep (tok : TokenEntry) (i : Nat) (bs : List Nat) : List Nat :=
  let ph := phBytes i
  if tok.rule == "Newline" then
    dropAfterPh ph (dropBeforePh ph bs)
  else if tok.rule == "Paragraph" then
    match omGet tok.opts "type".toList with
    | some (OptVal.str v) =>
        if v == "start".toList then dropAfterPh ph bs
        else if v == "end".toList then dropBeforePh ph bs
        else bs
    | _ => bs
  else bs

theorem parainline_tighten_edgePass_nil (bs : List Nat) (i : Nat) :
    tightenEdgePass bs [] i = bs := rfl

theorem parainline_tighten_edgePass_cons (bs : List Nat) (tok : TokenEntry)
    (rest : List TokenEntry) (i : Nat) :
    tightenEdgePass bs (tok :: rest) i =
      tightenEdgePass (parainline_tighten_edgeStep tok i bs) rest (i + 1) := rfl

theorem parainline_tighten_edgeStep_newline (bs : List Nat) (i : Nat) (opts : OptMap) :
    parainline_tighten_edgeStep { rule := "Newline", opts := opts } i bs =
      dropAfterPh (phBytes i) (dropBeforePh (phBytes i) bs) := by
  simp [parainline_tighten_edgeStep]

theorem parainline_tighten_edgeStep_paragraph_start (bs : List Nat) (i : Nat) (opts : OptMap)
    (h : omGet opts "type".toList = some (OptVal.str "start".toList)) :
    parainline_tighten_edgeStep { rule := "Paragraph", opts := opts } i bs =
      dropAfterPh (phBytes i) bs := by
  unfold parainline_tighten_edgeStep
  rw [show ("Paragraph" == "Newline") = false by rfl]
  rw [h]
  simp

theorem parainline_tighten_edgeStep_paragraph_end (bs : List Nat) (i : Nat) (opts : OptMap)
    (h : omGet opts "type".toList = some (OptVal.str "end".toList)) :
    parainline_tighten_edgeStep { rule := "Paragraph", opts := opts } i bs =
      dropBeforePh (phBytes i) bs := by
  unfold parainline_tighten_edgeStep
  rw [show ("Paragraph" == "Newline") = false by rfl]
  rw [h]
  simp

theorem parainline_tighten_edgeStep_other (tok : TokenEntry) (bs : List Nat) (i : Nat)
    (hr : (tok.rule == "Newline") = false) (hp : (tok.rule == "Paragraph") = false) :
    parainline_tighten_edgeStep tok i bs = bs := by
  simp [parainline_tighten_edgeStep, hr, hp]

theorem parainline_tighten_edgePass_id_of_no_edge (bs : List Nat)
    (toks : List TokenEntry) (i : Nat)
    (h : ∀ t ∈ toks, (t.rule == "Newline") = false ∧ (t.rule == "Paragraph") = false) :
    tightenEdgePass bs toks i = bs := by
  induction toks generalizing i with
  | nil => rfl
  | cons tok rest ih =>
      have ht := h tok (by simp)
      have hrest : ∀ t ∈ rest, (t.rule == "Newline") = false ∧ (t.rule == "Paragraph") = false :=
        fun t ht' => h t (by simp [ht'])
      simp [tightenEdgePass, parainline_tighten_edgeStep, ht.1, ht.2, ih (i + 1) hrest]

/-! ## Empty-Raw placeholder stripping -/

theorem parainline_tighten_isEmptyRawTok_none (toks : List TokenEntry) (id : Nat)
    (h : toks[id]? = none) : isEmptyRawTok toks id = false := by
  simp [isEmptyRawTok, h]

theorem parainline_tighten_isEmptyRawTok_empty_str :
    isEmptyRawTok [{ rule := "Raw", opts := [("text".toList, OptVal.str [])] }] 0 = true := rfl

theorem parainline_tighten_isEmptyRawTok_nonraw :
    isEmptyRawTok [{ rule := "Tt", opts := [] }] 0 = false := rfl

/-- The two components of `List.span` reconstruct the input. `List.span`
    is implemented through `span.loop` with a reversed accumulator, so this
    is the convenient accumulator-general form. -/
private theorem spanLoopAppend (p : Nat → Bool) : ∀ (l acc : List Nat),
    (List.span.loop p l acc).1 ++ (List.span.loop p l acc).2 = acc.reverse ++ l := by
  intro l
  induction l with
  | nil => intro acc; rfl
  | cons a as ih =>
      intro acc
      by_cases h : p a = true
      · simp only [List.span.loop, h]
        simpa using ih (a :: acc)
      · simp only [List.span.loop, h]

private theorem parainline_tighten_stripEmptyRawPh_go_eq_self (toks : List TokenEntry)
    (hno : ∀ id, isEmptyRawTok toks id = false) :
    ∀ (bs : List Nat) (fuel : Nat), bs.length ≤ fuel →
      stripEmptyRawPh.go bs fuel toks = bs := by
  intro bs fuel hf
  induction fuel generalizing bs with
  | zero =>
      cases bs with
      | nil => rfl
      | cons b rest => simp at hf
  | succ fuel ih =>
      cases bs with
      | nil => rfl
      | cons b rest =>
          have hrest : rest.length ≤ fuel := by
            simp [List.length_cons] at hf
            omega
          unfold stripEmptyRawPh.go
          by_cases hb : b = 0xFF
          · subst b
            cases hspan : rest.span (fun b => 48 <= b && b <= 57) with
            | mk digits tail =>
                cases tail with
                | nil =>
                    simp [hspan, ih rest hrest]
                | cons t tail2 =>
                    by_cases ht : t = 0xFF
                    · have hid : isEmptyRawTok toks
                          (digits.foldl (fun a d => a * 10 + (d - 48)) 0) = false := hno _
                      -- REFCORR22: the keep branch now emits the whole
                      -- placeholder and continues after it, so the no-op
                      -- law must reconstruct `rest` from the span parts.
                      have hspanEq : digits ++ (255 :: tail2) = rest := by
                        have h := spanLoopAppend
                          (fun b => 48 <= b && b <= 57) rest []
                        simp only [List.reverse_nil, List.nil_append] at h
                        have hspanLoop := hspan
                        simp only [List.span] at hspanLoop
                        rw [hspanLoop] at h
                        rw [ht] at h
                        simpa using h
                      have hrest_eq : rest = digits ++ (255 :: tail2) := hspanEq.symm
                      have htail2 : tail2.length ≤ fuel := by
                        rw [hrest_eq] at hrest
                        simp [List.length_append] at hrest
                        omega
                      have hgo := ih tail2 htail2
                      simp [hspan, ht, hid, hgo]
                      rw [hrest_eq]
                    · simp [hspan, ht, ih rest hrest]
          · simp [hb, ih rest hrest]

theorem parainline_tighten_stripEmptyRawPh_eq_self (bs : List Nat) (toks : List TokenEntry)
    (hno : ∀ id, isEmptyRawTok toks id = false) :
    stripEmptyRawPh bs toks = bs := by
  unfold stripEmptyRawPh
  exact parainline_tighten_stripEmptyRawPh_go_eq_self toks hno bs bs.length (Nat.le_refl _)

/-! ## U+FFFD detection -/

theorem parainline_tighten_hasUfffdBytes_nil : hasUfffdBytes [] = false := rfl

theorem parainline_tighten_hasUfffdBytes_prefix (bs : List Nat) :
    hasUfffdBytes ([0xEF, 0xBF, 0xBD] ++ bs) = true := rfl

/-! ## Discarded controls and newline deletion -/

theorem parainline_tighten_discarded_control_spec (b : Nat) :
    isDiscardedControl b = true ↔
      b ≤ 8 ∨ (11 ≤ b ∧ b ≤ 12) ∨ (14 ≤ b ∧ b ≤ 26) ∨ (28 ≤ b ∧ b ≤ 31) := by
  unfold isDiscardedControl
  simp
  omega

theorem parainline_tighten_stripDiscardedControls_spec (bs : List Nat) :
    stripDiscardedControls bs = bs.filter (fun b => ! isDiscardedControl b) := rfl

theorem parainline_tighten_stripDiscardedControls_preserves (bs : List Nat) (b : Nat)
    (hb : isDiscardedControl b = false) :
    b ∈ bs ↔ b ∈ stripDiscardedControls bs := by
  simp [stripDiscardedControls, hb]

theorem parainline_tighten_newline_filter_no_lf (bs : List Nat) :
    ∀ b ∈ bs.filter (fun b => b != 10), b != 10 := by
  intro b hb
  simp at hb
  simpa using hb.2

theorem parainline_tighten_newline_filter_preserves (bs : List Nat) (b : Nat)
    (hb : b != 10) : b ∈ bs ↔ b ∈ bs.filter (fun b => b != 10) := by
  simp [hb]

/-! ## Tighten byte composition -/

theorem parainline_tighten_bytes_eq_composition (bs : List Nat) (toks : List TokenEntry) :
    tightenBytes bs toks =
      tightenEdgePass
        (collapsePad
          (tightenColorPass
            (collapsePad
              (stripDiscardedControls
                ((if hasUfffdBytes bs then bs else stripEmptyRawPh bs toks).filter
                  (fun b => b != 10))))
            toks 0))
        toks 0 := by
  rfl

/-! ## tightenRule: unconditional state-component preservation -/

theorem parainline_tighten_rule_preserves_tokens (st : ParseState) :
    (tightenRule st).tokens = st.tokens := by
  rfl

theorem parainline_tighten_rule_preserves_doc (st : ParseState) :
    (tightenRule st).doc = st.doc := by
  rfl

theorem parainline_tighten_rule_preserves_fatal (st : ParseState) :
    (tightenRule st).fatal = st.fatal := by
  rfl

theorem parainline_tighten_rule_preserves_continued_div_leads (st : ParseState) :
    (tightenRule st).continuedDivLeads = st.continuedDivLeads := by
  rfl

theorem parainline_tighten_rule_work (st : ParseState) :
    (tightenRule st).work = parseBytes (tightenBytes (byteForm st.work) st.tokens) := by
  rfl

/-! ## tightenRule: conditional WFState and TokEquiv -/

theorem parainline_tighten_rule_preserves_wf (st : ParseState) (hwf : WFState st)
    (hwork : WFSegs (parseBytes (tightenBytes (byteForm st.work) st.tokens)) st.tokens.length) :
    WFState (tightenRule st) := by
  unfold WFState at hwf ⊢
  unfold tightenRule applyByteRule
  dsimp
  exact ⟨hwork, hwf.2.1, hwf.2.2.1, hwf.2.2.2.1, hwf.2.2.2.2.1,
    hwf.2.2.2.2.2.1, hwf.2.2.2.2.2.2⟩

theorem parainline_tighten_rule_tok_equiv_cond (σ : Nat → Nat) (st : ParseState)
    (hseg : segsTokEquiv σ st.work (tightenRule st).work) :
    TokEquiv σ st (tightenRule st) := by
  refine ⟨hseg, rfl, ?_, rfl⟩
  intro i hi
  rfl

theorem parainline_tighten_rule_tok_table_component (st : ParseState) :
    (tightenRule st).tokens.length = st.tokens.length ∧
    (∀ i (hi : i < st.tokens.length),
      ((tightenRule st).tokens.get ⟨i, hi⟩).rule = (st.tokens.get ⟨i, hi⟩).rule) ∧
    (tightenRule st).fatal = st.fatal := by
  refine ⟨rfl, ?_, rfl⟩
  intro i hi
  rfl

/-! ## Axiom audit -/

#print axioms LeanFtml.parainline_tighten_collapsePad_spec
#print axioms LeanFtml.parainline_tighten_collapsePad_no_tab
#print axioms LeanFtml.parainline_tighten_collapsePad_filter
#print axioms LeanFtml.parainline_tighten_replaceAllB_match
#print axioms LeanFtml.parainline_tighten_replaceAllB_nomatch
#print axioms LeanFtml.parainline_tighten_dropAfterPh_cons_nomatch
#print axioms LeanFtml.parainline_tighten_dropAfterPh_cons_match
#print axioms LeanFtml.parainline_tighten_dropBeforePh_cons_ph
#print axioms LeanFtml.parainline_tighten_colorPass_id_of_no_colortext
#print axioms LeanFtml.parainline_tighten_edgePass_id_of_no_edge
#print axioms LeanFtml.parainline_tighten_stripEmptyRawPh_eq_self
#print axioms LeanFtml.parainline_tighten_discarded_control_spec
#print axioms LeanFtml.parainline_tighten_bytes_eq_composition
#print axioms LeanFtml.parainline_tighten_rule_preserves_tokens
#print axioms LeanFtml.parainline_tighten_rule_preserves_wf
#print axioms LeanFtml.parainline_tighten_rule_tok_equiv_cond

end LeanFtml
