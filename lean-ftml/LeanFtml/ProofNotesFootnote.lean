/-
  ProofNotesFootnote.lean — the footnote slice of the notes proof lane, rebased from branch proof/notes at 2396b73 onto the post-REFCORR12 / post-REFCORR13-MATHNOTES canonical ground.
  Per ADVISOR-PROOF-POLICY.md section 4.3 this file keeps the inherited diagnostics: the live C0 class, the stored footnote body and registry, empty-Raw strip purity, token-aware emptiness, the mirror/reference diagnostic, the footnoteitem separator render predicates and the round-5e control shapes.
  The self-referential mirror-versus-second-hand-copy equivalence line stays dropped under the section 4.3 keep/drop table.
  Rebase changes: R12-NOTES narrows the dropped C0 class to exclude ESC 27, so the dropped-byte and shield-byte lists are narrowed and the ESC-as-dropped facts are restated over the narrowed class; R13-MATHNOTES moves the discarded-C0 drop into the fallback branch of footnoteProcess, so the stored-body model and its rfl laws follow the control-bearing preStrip on the single-break branch and the re-trimmed visible projection otherwise. The two ESC witnesses of the pre-rebase branch are retired or restated over the narrowed class and no divergence is claimed on the rebased ground.
  The remaining proof-policy targets, RuleProofBundle/RenderProofBundle packaging and the TokEquiv component, are remainders recorded in REPORT-PROOF-EXCERPT.md; this file does not claim them.
  No sorry, no native_decide, no bv_decide, no axiom outside [propext, Classical.choice, Quot.sound].
-/

import LeanFtml.NotesRender

set_option maxRecDepth 10000

namespace LeanFtml

/-! ## Retained diagnostic: the live C0 class -/

/-- Live's dropped C0 byte, as a proposition: below 0x20, except TAB, LF, CR and ESC. -/
theorem isLiveDroppedControl_iff (b : Nat) :
    isLiveDroppedControl b = true ↔ b < 32 ∧ b ≠ 9 ∧ b ≠ 10 ∧ b ≠ 13 ∧ b ≠ 27 := by
  simp [isLiveDroppedControl, Bool.and_eq_true, bne_iff_ne, decide_eq_true_eq, and_assoc]

/-- The 28 dropped bytes below 0x20 on the narrowed R12-NOTES class, decided exhaustively. ESC 27 is excluded; the tail is 14..26 followed by 28..31. -/
theorem c0_dropped_bytes :
    (List.range 32).filter isLiveDroppedControl =
      [0, 1, 2, 3, 4, 5, 6, 7, 8, 11, 12] ++ List.range' 14 13 ++ [28, 29, 30, 31] := by
  decide

/-- R12-NOTES restatement of the old `esc_is_dropped` witness: ESC is now kept verbatim in a note body. -/
theorem esc_is_kept : isLiveDroppedControl 27 = false := by decide

theorem del_is_kept : isLiveDroppedControl 127 = false := by decide

theorem tab_lf_cr_kept :
    isLiveDroppedControl 9 = false ∧
      isLiveDroppedControl 10 = false ∧
      isLiveDroppedControl 13 = false := by
  decide

/-- A shield byte survives PHP `trim` (so it can protect a trailing LF) and is deleted by the narrowed C0 filter. ESC 27 survives `trim` too but is no longer in the dropped class, so it is not a shield byte on the rebased ground. -/
def shieldByte (b : Nat) : Bool :=
  isLiveDroppedControl b && !isTrimByte b

theorem shield_bytes :
    (List.range 32).filter shieldByte =
      [1, 2, 3, 4, 5, 6, 7, 8, 12] ++ List.range' 14 13 ++ [28, 29, 30, 31] := by
  decide

theorem shield_ge_32 (b : Nat) (h : 32 ≤ b) : shieldByte b = false := by
  have hlt : decide (b < 32) = false := decide_eq_false (Nat.not_lt.mpr h)
  simp [shieldByte, isLiveDroppedControl, hlt]

theorem stripLiveDroppedControls_pure {bs : List Nat} {b : Nat}
    (h : b ∈ stripLiveDroppedControls bs) : isLiveDroppedControl b = false := by
  have ⟨_, hp⟩ := List.mem_filter.mp h
  simpa [stripLiveDroppedControls, Bool.not_eq_true] using hp

/-! ## Retained diagnostic: stored footnote body and registry -/

/-- The control-BEARING trimmed body, which both branches read. R13-MATHNOTES moved the discarded-C0 drop out of this value and into the fallback branch, so a bare dropped byte before a single LF stays an inline break witness. -/
def footnotePure (body : List Nat) : List Nat :=
  trimBytes body

/-- Mirror `footnoteProcess` content on the rebased ground: keep the control-bearing `footnotePure` when it has an interior single break, otherwise the re-trimmed visible projection with the narrowed C0 class dropped. -/
def footnoteStored (body : List Nat) (toks : List TokenEntry) : List Nat :=
  let pure := footnotePure body
  if hasSingleBreakByte pure then pure
  else trimBytes (stripEmptyRawPhNotes (stripLiveDroppedControls pure) toks)

theorem footnote_keeps_on_break (body : List Nat) (toks : List TokenEntry)
    (h : hasSingleBreakByte (footnotePure body) = true) :
    footnoteStored body toks = footnotePure body := by
  simp [footnoteStored, h]

theorem footnote_folds_without_break (body : List Nat) (toks : List TokenEntry)
    (h : hasSingleBreakByte (footnotePure body) = false) :
    footnoteStored body toks =
      trimBytes (stripEmptyRawPhNotes (stripLiveDroppedControls (footnotePure body)) toks) := by
  simp [footnoteStored, h]

theorem footnoteProcess_footnotes (body : List Nat) (doc : DocState) (toks : List TokenEntry) :
    (footnoteProcess body doc toks).2.2.footnotes =
      doc.footnotes ++ [footnoteStored body toks] := rfl

theorem footnoteProcess_placeholder (body : List Nat) (doc : DocState) (toks : List TokenEntry) :
    (footnoteProcess body doc toks).1 = phBytes toks.length := rfl

/-- The claimed token carries only the one-plus-count id, in the same append order as the registry. -/
theorem footnoteProcess_token (body : List Nat) (doc : DocState) (toks : List TokenEntry) :
    (footnoteProcess body doc toks).2.1 =
      toks ++ [{ rule := "Footnote", opts := [("id".toList, OptVal.int ((doc.footnotes.length + 1 : Nat) : Int))] }] := rfl

/-- Registry monotonicity: one stored note per claim, at the id the token reports. -/
theorem footnote_registry_monotone (body : List Nat) (doc : DocState) (toks : List TokenEntry) :
    (footnoteProcess body doc toks).2.2.footnotes.length = doc.footnotes.length + 1 := by
  simp [footnoteProcess]

/-! ## Retained diagnostic: empty-Raw strip purity -/

theorem go_zero (bs : List Nat) (toks : List TokenEntry) :
    stripEmptyRawPhNotes.go bs 0 toks = [] := by
  cases bs <;> rfl

theorem go_nil (fuel : Nat) (toks : List TokenEntry) :
    stripEmptyRawPhNotes.go [] fuel toks = [] :=
  stripEmptyRawPhNotes.go.eq_1 fuel toks

theorem go_nonff {b : Nat} {rest : List Nat} {fuel : Nat} {toks : List TokenEntry}
    (h : b ≠ 0xFF) :
    stripEmptyRawPhNotes.go (b :: rest) (fuel + 1) toks =
      b :: stripEmptyRawPhNotes.go rest fuel toks :=
  stripEmptyRawPhNotes.go.eq_4 toks b rest fuel h

theorem span_loop_spec (p : Nat → Bool) (acc as : List Nat) :
    (List.span.loop p as acc).1 ++ (List.span.loop p as acc).2 = acc.reverse ++ as := by
  induction as generalizing acc with
  | nil => rw [List.span.loop.eq_1]
  | cons a as ih =>
      rw [List.span.loop.eq_2]
      split
      · simpa [List.reverse_cons, List.append_assoc] using ih (a :: acc)
      · simp

theorem span_append (p : Nat → Bool) (l : List Nat) :
    (l.span p).1 ++ (l.span p).2 = l := by
  simpa [List.span] using span_loop_spec p [] l

theorem mem_suffix_of_span {rest digits tail : List Nat} {t : Nat} {rest2 : List Nat}
    (hspan : rest.span (fun b => decide (48 ≤ b) && decide (b ≤ 57)) = (digits, tail))
    (htail : tail = t :: rest2) {x : Nat} (hx : x ∈ rest2) : x ∈ rest := by
  have happ := span_append (fun b => decide (48 ≤ b) && decide (b ≤ 57)) rest
  rw [hspan, htail] at happ
  have : x ∈ digits ++ (t :: rest2) := List.mem_append_right _ (List.mem_cons_of_mem t hx)
  simpa [happ] using this

theorem go_pure (toks : List TokenEntry) (fuel : Nat) (bs : List Nat)
    (hpure : ∀ x ∈ bs, isLiveDroppedControl x = false) {b : Nat}
    (hb : b ∈ stripEmptyRawPhNotes.go bs fuel toks) : isLiveDroppedControl b = false := by
  induction fuel generalizing bs b with
  | zero =>
      rw [go_zero] at hb
      cases hb
  | succ fuel ih =>
      cases bs with
      | nil =>
          rw [go_nil] at hb
          cases hb
      | cons hd tl =>
          by_cases hff : hd = 0xFF
          · subst hff
            rw [stripEmptyRawPhNotes.go.eq_3 toks tl fuel] at hb
            generalize hsp : tl.span (fun b => decide (48 ≤ b) && decide (b ≤ 57)) = sp at hb
            dsimp only at hb
            rcases sp with ⟨digits, tail⟩
            cases tail with
            | nil =>
                simp at hb
                rcases hb with rfl | hb
                · exact hpure 255 List.mem_cons_self
                · exact ih tl (fun x hx => hpure x (List.mem_cons_of_mem _ hx)) hb
            | cons tc rest2 =>
                by_cases ht : tc = 0xFF
                · subst ht
                  dsimp only at hb
                  by_cases hdrop :
                      (!digits.isEmpty && isEmptyRawTokNotes toks
                        (digits.foldl (fun a b => a * 10 + (b - 48)) 0)) = true
                  · simp [hdrop] at hb
                    exact ih rest2
                      (fun x hx => hpure x
                        (List.mem_cons_of_mem _ (mem_suffix_of_span hsp rfl hx))) hb
                  · simp [hdrop] at hb
                    rcases hb with rfl | hb
                    · exact hpure 255 List.mem_cons_self
                    · exact ih tl (fun x hx => hpure x (List.mem_cons_of_mem _ hx)) hb
                · simp [ht] at hb
                  rcases hb with rfl | hb
                  · exact hpure 255 List.mem_cons_self
                  · exact ih tl (fun x hx => hpure x (List.mem_cons_of_mem _ hx)) hb
          · rw [go_nonff hff] at hb
            simp only [List.mem_cons] at hb
            rcases hb with hbd | hb
            · rw [hbd]
              exact hpure hd List.mem_cons_self
            · exact ih tl (fun x hx => hpure x (List.mem_cons_of_mem _ hx)) hb

theorem stripEmptyRawPhNotes_pure {bs : List Nat} {toks : List TokenEntry}
    (hpure : ∀ x ∈ bs, isLiveDroppedControl x = false) {b : Nat}
    (hb : b ∈ stripEmptyRawPhNotes bs toks) : isLiveDroppedControl b = false :=
  go_pure toks bs.length bs hpure hb

theorem trimBytes_subset {b : Nat} {bs : List Nat} (h : b ∈ trimBytes bs) : b ∈ bs := by
  simp only [trimBytes] at h
  have h1 : b ∈ (bs.dropWhile isTrimByte).reverse.dropWhile isTrimByte :=
    List.mem_reverse.mp h
  have h2 : b ∈ (bs.dropWhile isTrimByte).reverse :=
    List.dropWhile_subset isTrimByte h1
  have h3 : b ∈ bs.dropWhile isTrimByte := List.mem_reverse.mp h2
  exact List.dropWhile_subset isTrimByte h3

/-- R13-MATHNOTES restatement: the single-break branch deliberately KEEPS a discarded control byte as the inline break witness, so control purity holds only on the fallback branch (and is no longer claimed for every stored body). -/
theorem footnoteStored_control_pure_fallback (body : List Nat) (toks : List TokenEntry)
    (hbr : hasSingleBreakByte (footnotePure body) = false) {b : Nat}
    (h : b ∈ footnoteStored body toks) : isLiveDroppedControl b = false := by
  rw [footnote_folds_without_break body toks hbr] at h
  have hsub : b ∈ stripEmptyRawPhNotes (stripLiveDroppedControls (footnotePure body)) toks :=
    trimBytes_subset h
  exact stripEmptyRawPhNotes_pure
    (fun x hx => stripLiveDroppedControls_pure hx) hsub

/-! ## Retained diagnostic: token-aware emptiness -/

def emptyRawPair : List TokenEntry :=
  [{ rule := "Raw", opts := [("text".toList, OptVal.str [])] },
   { rule := "Raw", opts := [("text".toList, OptVal.str [])] }]

/-- A single LF between two empty-Raw placeholders is stored intact, while the visible projection is empty. -/
theorem token_aware_break_keeps_visible_empty :
    let body := phBytes 0 ++ [10] ++ phBytes 1
    footnoteStored body emptyRawPair = body ∧
      trimBytes (stripEmptyRawPhNotes body emptyRawPair) = [] ∧
      hasSingleBreakByte body = true := by
  decide

/-! ## Retained diagnostic: the one minimal mirror/reference witness -/

/-- Local step of the reference regex `/[^\n]\n(?!\n)/`, kept only to state the witness. -/
def herePhp (b : Nat) (rest : List Nat) : Bool :=
  match rest with
  | [] => false
  | c :: post =>
      if c == 10 then
        match post with
        | [] => b != 10
        | d :: _ => b != 10 && d != 10
      else
        false

def phpBreak : List Nat → Bool
  | [] => false
  | b :: rest => herePhp b rest || phpBreak rest

def refStored (body : List Nat) (toks : List TokenEntry) : List Nat :=
  let pure := footnotePure body
  if phpBreak pure then pure
  else trimBytes (stripEmptyRawPhNotes (stripLiveDroppedControls pure) toks)

/-- The pre-rebase `esc_shield_diverges` witness is RETIRED: on the R12-narrowed class ESC 27 is kept, so the shape X LF ESC is no longer a shield shape and both sides store [88,10,27]. Restated over the narrowed class with a still-dropped shield byte (FF 12): the R13 re-trim ordering makes the mirror and the reference agree on the single-break branch. -/
theorem shield_control_agrees :
    footnoteStored (litBytes "X" ++ [10, 12]) [] = [88, 10, 12] ∧
      refStored (litBytes "X" ++ [10, 12]) [] = [88, 10, 12] := by
  decide

/- Bounded diagnostic over all 256 possible trailing bytes, restated over the narrowed class: on the rebased ground the mirror and reference models agree on every suffix byte, so no disagreement class remains. Generator `List.range 256`, cardinality 256, reducer `decide`. -/
set_option maxHeartbeats 4000000 in
theorem x_lf_suffix_class :
    (List.range 256).all (fun s =>
        let leanB := footnoteStored [88, 10, s] []
        let refB := refStored [88, 10, s] []
        leanB == refB) = true := by
  decide

/-! ## Retained diagnostic: footnoteitem separator render -/

theorem optTypeIs_start_parabreak (rest : OptMap) :
    optTypeIs ((['t', 'y', 'p', 'e'], OptVal.str ['s', 't', 'a', 'r', 't']) :: rest)
      (litBytes "parabreak") = false := rfl

theorem optTypeIs_start_start (rest : OptMap) :
    optTypeIs ((['t', 'y', 'p', 'e'], OptVal.str ['s', 't', 'a', 'r', 't']) :: rest)
      (litBytes "start") = true := rfl

theorem footnoteitem_start_no_space (conf : RenderConf) (doc : DocState) (id : Nat)
    (lookup : Nat → Option TokenEntry) (hpos : id > 0)
    (hempty : (footnoteLeadVisible lookup ((doc.footnotes[id - 1]?).getD [])).isEmpty = true) :
    renderFootnoteitem conf doc
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int (id : Int))] lookup =
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ conf.footnoteIdPrefix ++
      natBytes id ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++
      conf.footnoteIdPrefix ++ natBytes id ++ litBytes "')\">" ++ natBytes id ++
      litBytes "</a>." := by
  have hge : (id : Int) ≥ 0 := Int.natCast_nonneg id
  have hnotlt : ¬ ((id : Int) < 0) := Int.not_lt.mpr hge
  simp [renderFootnoteitem, optTypeIs_start_parabreak, optTypeIs_start_start,
    optStrBytes, omGet, renderOptValBytes, optNat, intBytes, hpos, hge, hnotlt, hempty]

theorem footnoteitem_start_space (conf : RenderConf) (doc : DocState) (id : Nat)
    (lookup : Nat → Option TokenEntry) (hpos : id > 0)
    (hne : (footnoteLeadVisible lookup ((doc.footnotes[id - 1]?).getD [])).isEmpty = false) :
    renderFootnoteitem conf doc
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int (id : Int))] lookup =
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ conf.footnoteIdPrefix ++
      natBytes id ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++
      conf.footnoteIdPrefix ++ natBytes id ++ litBytes "')\">" ++ natBytes id ++
      litBytes "</a>." ++ [32] := by
  have hge : (id : Int) ≥ 0 := Int.natCast_nonneg id
  have hnotlt : ¬ ((id : Int) < 0) := Int.not_lt.mpr hge
  simp [renderFootnoteitem, optTypeIs_start_parabreak, optTypeIs_start_start,
    optStrBytes, omGet, renderOptValBytes, optNat, intBytes, hpos, hge, hnotlt, hne]

/-! ## Retained diagnostic: round-5e shapes -/

/-- R12-NOTES restatement of the old `r5e_esc_interior_dropped` witness over the narrowed class: ESC is kept verbatim by both sides, while a still-dropped interior control (FF 12) is removed by both on the no-break fallback. -/
theorem r5e_interior_over_narrowed_class :
    footnoteStored (litBytes "A" ++ [27] ++ litBytes "B") [] = litBytes "A" ++ [27] ++ litBytes "B" ∧
      refStored (litBytes "A" ++ [27] ++ litBytes "B") [] = litBytes "A" ++ [27] ++ litBytes "B" ∧
      footnoteStored (litBytes "A" ++ [12] ++ litBytes "B") [] = litBytes "AB" ∧
      refStored (litBytes "A" ++ [12] ++ litBytes "B") [] = litBytes "AB" := by
  decide

/-- R13-MATHNOTES reordering: a discarded control that is the only non-LF witness before a single LF is now retained by BOTH models on the single-break branch (it yields the live rule-level `<br />`). The pre-rebase claim that both sides fold to the literal tail is retired. -/
theorem r5e_control_witness_agrees :
    footnoteStored ([12, 10] ++ litBytes "X") [] = [12, 10] ++ litBytes "X" ∧
      refStored ([12, 10] ++ litBytes "X") [] = [12, 10] ++ litBytes "X" ∧
      footnoteStored ([1, 10] ++ litBytes "X") [] = [1, 10] ++ litBytes "X" ∧
      refStored ([1, 10] ++ litBytes "X") [] = [1, 10] ++ litBytes "X" := by
  decide

/-! ## Footnote render law -/

/-- The Footnote render is a fixed template in exactly one token datum, the coerced `id` option; no document state and no external kernel is consulted. -/
theorem renderFootnote_template (conf : RenderConf) (opts : OptMap) :
    renderFootnote conf opts =
      litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ conf.footnoteIdPrefix ++
      optStrBytes opts "id".toList ++
      litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
      litBytes " onclick=\"WIKIDOT.page.utils." ++
      litBytes "scrollToReference('footnote-" ++
      conf.footnoteIdPrefix ++ optStrBytes opts "id".toList ++ litBytes "')\">" ++
      optStrBytes opts "id".toList ++ litBytes "</a></sup>" := rfl

/-- On the token shape `footnoteProcess` actually appends, the template's id datum is the decimal bytes of the one-plus registry count. -/
theorem renderFootnote_process_id (conf : RenderConf) (body : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    renderFootnote conf [("id".toList, OptVal.int ((doc.footnotes.length + 1 : Nat) : Int))] =
      litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ conf.footnoteIdPrefix ++
      natBytes (doc.footnotes.length + 1) ++
      litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
      litBytes " onclick=\"WIKIDOT.page.utils." ++
      litBytes "scrollToReference('footnote-" ++
      conf.footnoteIdPrefix ++ natBytes (doc.footnotes.length + 1) ++ litBytes "')\">" ++
      natBytes (doc.footnotes.length + 1) ++ litBytes "</a></sup>" := by
  simpa using (footnote_spec conf (doc.footnotes.length + 1))

end LeanFtml

#print axioms LeanFtml.isLiveDroppedControl_iff
#print axioms LeanFtml.c0_dropped_bytes
#print axioms LeanFtml.esc_is_kept
#print axioms LeanFtml.del_is_kept
#print axioms LeanFtml.tab_lf_cr_kept
#print axioms LeanFtml.shieldByte
#print axioms LeanFtml.shield_bytes
#print axioms LeanFtml.shield_ge_32
#print axioms LeanFtml.stripLiveDroppedControls_pure
#print axioms LeanFtml.footnotePure
#print axioms LeanFtml.footnoteStored
#print axioms LeanFtml.footnote_keeps_on_break
#print axioms LeanFtml.footnote_folds_without_break
#print axioms LeanFtml.footnoteProcess_footnotes
#print axioms LeanFtml.footnoteProcess_placeholder
#print axioms LeanFtml.footnoteProcess_token
#print axioms LeanFtml.footnote_registry_monotone
#print axioms LeanFtml.go_zero
#print axioms LeanFtml.go_nil
#print axioms LeanFtml.go_nonff
#print axioms LeanFtml.span_loop_spec
#print axioms LeanFtml.span_append
#print axioms LeanFtml.mem_suffix_of_span
#print axioms LeanFtml.go_pure
#print axioms LeanFtml.stripEmptyRawPhNotes_pure
#print axioms LeanFtml.trimBytes_subset
#print axioms LeanFtml.footnoteStored_control_pure_fallback
#print axioms LeanFtml.emptyRawPair
#print axioms LeanFtml.token_aware_break_keeps_visible_empty
#print axioms LeanFtml.herePhp
#print axioms LeanFtml.phpBreak
#print axioms LeanFtml.refStored
#print axioms LeanFtml.shield_control_agrees
#print axioms LeanFtml.x_lf_suffix_class
#print axioms LeanFtml.optTypeIs_start_parabreak
#print axioms LeanFtml.optTypeIs_start_start
#print axioms LeanFtml.footnoteitem_start_no_space
#print axioms LeanFtml.footnoteitem_start_space
#print axioms LeanFtml.r5e_interior_over_narrowed_class
#print axioms LeanFtml.r5e_control_witness_agrees
#print axioms LeanFtml.renderFootnote_template
#print axioms LeanFtml.renderFootnote_process_id
