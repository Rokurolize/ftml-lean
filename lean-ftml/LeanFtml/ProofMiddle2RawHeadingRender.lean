/-
  ProofMiddle2RawHeadingRender.lean — U6 of the DSH-PROOF-MIDDLE2 proof lane. All declarations live in LeanFtml.Middle2.RawHeadingRender and concern the actual entry points in LeanFtml/RawHeadingRender.lean and the five render mirrors in LeanFtml/RawHeadingRules.lean. No mirror source, Main.lean, foundation or other proof file is edited. Prose is single-line.
  Proved here are kernel-free universal theorems about dispatcher agreement, the renderWithR44/renderStateR44 entry-point shapes, lookup extensionality, exclusion invariants, the pushUnique dedup algebra, the ASCII escape byte maps, the form-indent recursion, and the option/output shapes of the Raw, Rawold, Form, Heading and Toc branches, adding value over the mirror's concrete rfl examples.
  F3-ADOPTION-REMAINDER (RawHeadingRender): the canonical RenderEnv is not threaded through the mirror renderers, so the env-parametric RenderProofBundle equality renderMirror env .rule = renderRefSpec env .rule for the Raw/Rawold/Form/Heading/Toc rules is not asserted here; the coordinator's F3 adoption must thread RenderEnv (and supply ReachableTok) before it can be stated. No renderRefSpec or ReachableTok constant is introduced here, and no such equality is claimed.
-/

import LeanFtml.RawHeadingRender

namespace LeanFtml.Middle2.RawHeadingRender

/-! ## Dispatcher agreement and branch projection -/

theorem dispatchRenderR44_eq_dispatchRenderR41 :
    dispatchRenderR44 = dispatchRenderR41 := rfl

theorem dispatchRenderR44_apply (rid : RenderRuleId) (conf : RenderConf)
    (doc : DocState) (opts : OptMap) :
    dispatchRenderR44 rid conf doc opts = dispatchRenderR41 rid conf doc opts := rfl

theorem dispatchRenderR44_raw (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR44 .raw conf doc opts = renderRaw opts := rfl

theorem dispatchRenderR44_rawold (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR44 .rawold conf doc opts = renderRawold opts := rfl

theorem dispatchRenderR44_form (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR44 .form conf doc opts = renderForm opts := rfl

theorem dispatchRenderR44_heading (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR44 .heading conf doc opts = renderHeading opts := rfl

theorem dispatchRenderR44_toc (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR44 .toc conf doc opts = renderToc opts := rfl

theorem dispatchRenderR44_raw_heading_conf_doc_irrelevant
    (rid : RenderRuleId) (conf₁ conf₂ : RenderConf) (doc₁ doc₂ : DocState)
    (opts : OptMap)
    (hrid : rid = .raw ∨ rid = .rawold ∨ rid = .form ∨ rid = .heading ∨ rid = .toc) :
    dispatchRenderR44 rid conf₁ doc₁ opts = dispatchRenderR44 rid conf₂ doc₂ opts := by
  rcases hrid with rfl | rfl | rfl | rfl | rfl <;> rfl

/-! ## renderWithR44 and renderStateR44 entry-point shapes

    These entry points use the plain dispatchRenderR41 dispatcher (they do not thread the REFCORR9 token-aware dispatch used by renderWithR41), so pointwise equality of the dispatchers yields equality of the whole outcome with the unstaged renderWith driver, but no equality with renderWithR41 is claimed. -/

theorem renderWithR44_eq_renderWith_dispatchRenderR44
    (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    renderWithR44 lookup conf work doc = renderWith dispatchRenderR44 lookup conf work doc := rfl

theorem renderWithR44_eq_renderWith_dispatchRenderR41
    (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    renderWithR44 lookup conf work doc = renderWith dispatchRenderR41 lookup conf work doc := rfl

theorem renderWithR44_output (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    (renderWithR44 lookup conf work doc).output =
      (renderWith dispatchRenderR44 lookup conf work doc).output := rfl

theorem renderWithR44_unmirrored (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    (renderWithR44 lookup conf work doc).unmirrored =
      (renderWith dispatchRenderR44 lookup conf work doc).unmirrored := rfl

theorem renderWithR44_missingKeys (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    (renderWithR44 lookup conf work doc).missingKeys =
      (renderWith dispatchRenderR44 lookup conf work doc).missingKeys := rfl

theorem renderWithR44_lookup_ext (lookup₁ lookup₂ : Nat → Option TokenEntry)
    (conf : RenderConf) (work : List TSeg) (doc : DocState)
    (hagree : ∀ k, TSeg.tok k ∈ work → lookup₁ k = lookup₂ k) :
    renderWithR44 lookup₁ conf work doc = renderWithR44 lookup₂ conf work doc := by
  exact renderWith_lookup_ext dispatchRenderR44 lookup₁ lookup₂ conf doc work hagree

theorem renderWithR44_all_mirrored_complete (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (doc : DocState) (work : List TSeg)
    (hall : ∀ k, TSeg.tok k ∈ work →
      ∃ entry rid, lookup k = some entry ∧ renderRuleOfName entry.rule = some rid) :
    (renderWithR44 lookup conf work doc).isComplete = true := by
  exact renderWith_all_mirrored_complete dispatchRenderR44 lookup conf doc work hall

theorem renderWithR44_unmirrored_not_complete (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (doc : DocState) (work : List TSeg)
    (k : Nat) (entry : TokenEntry) (hmem : TSeg.tok k ∈ work)
    (hlook : lookup k = some entry) (hunm : renderRuleOfName entry.rule = none) :
    (renderWithR44 lookup conf work doc).isComplete = false := by
  exact renderWith_unmirrored_not_complete dispatchRenderR44 lookup conf doc work k entry
    hmem hlook hunm

theorem renderStateR44_eq_renderWithR44 (conf : RenderConf) (st : ParseState) :
    renderStateR44 conf st = renderWithR44 (fun k => st.tokens[k]?) conf st.work st.doc := rfl

/-! ## pushUnique dedup invariants -/

theorem pushUnique_mem_iff {α : Type} [DecidableEq α] (xs : List α) (x y : α) :
    y ∈ pushUnique xs x ↔ y ∈ xs ∨ y = x := by
  by_cases hx : x ∈ xs
  · have hset : pushUnique xs x = xs := by simp [pushUnique, hx]
    rw [hset]
    constructor
    · intro h
      exact Or.inl h
    · intro h
      rcases h with h | rfl
      · exact h
      · exact hx
  · have hset : pushUnique xs x = xs ++ [x] := by simp [pushUnique, hx]
    rw [hset]
    simp

theorem pushUnique_idem {α : Type} [DecidableEq α] (xs : List α) (x : α) :
    pushUnique (pushUnique xs x) x = pushUnique xs x := by
  by_cases h : x ∈ xs
  · simp [pushUnique, h]
  · have hset : pushUnique xs x = xs ++ [x] := by simp [pushUnique, h]
    rw [hset]
    simp [pushUnique]

theorem pushUnique_preserves_nodup {α : Type} [DecidableEq α] (xs : List α) (x : α)
    (h : xs.Nodup) : (pushUnique xs x).Nodup := by
  by_cases hx : x ∈ xs
  · simpa [pushUnique, hx] using h
  · have hset : pushUnique xs x = xs ++ [x] := by simp [pushUnique, hx]
    rw [hset]
    have haux : ∀ (ys : List α), ys.Nodup → x ∉ ys → (ys ++ [x]).Nodup := by
      intro ys hys hxys
      induction ys with
      | nil => simp
      | cons a rest ih =>
          change (a :: (rest ++ [x])).Nodup
          rw [List.nodup_cons]
          constructor
          · intro ha
            simp only [List.mem_append, List.mem_singleton] at ha
            rcases ha with hare | hax
            · exact (List.nodup_cons.mp hys).1 hare
            · subst x
              exact hxys (by simp)
          · exact ih (List.nodup_cons.mp hys).2 (by
              intro hxr
              exact hxys (List.mem_cons_of_mem _ hxr))
    exact haux xs h hx

/-! ## Raw escape byte structural laws -/

theorem wikidotEscapeRawByte_identity (b : Nat) (h32 : b ≠ 32) (h0 : b ≠ 0)
    (h62 : b ≠ 62) (h60 : b ≠ 60) (h38 : b ≠ 38) (h34 : b ≠ 34) :
    wikidotEscapeRawByte b = [b] := by
  simp [wikidotEscapeRawByte, beq_false_of_ne h32, beq_false_of_ne h0,
    beq_false_of_ne h62, beq_false_of_ne h60, beq_false_of_ne h38, beq_false_of_ne h34]

theorem wikidotEscapeRawByte_ascii (b : Nat) (hb : b < 0x80) :
    ∀ c ∈ wikidotEscapeRawByte b, c < 0x80 := by
  intro c hc
  unfold wikidotEscapeRawByte at hc
  by_cases h32 : b == 32
  · simp only [h32, ↓reduceIte] at hc
    simp [litBytes] at hc
    omega
  · by_cases h0 : b == 0
    · simp only [h32, h0, ↓reduceIte] at hc
      simp at hc
      omega
    · by_cases h62 : b == 62
      · simp only [h32, h0, h62, ↓reduceIte] at hc
        simp [litBytes] at hc
        omega
      · by_cases h60 : b == 60
        · simp only [h32, h0, h62, h60, ↓reduceIte] at hc
          simp [litBytes] at hc
          omega
        · by_cases h38 : b == 38
          · simp only [h32, h0, h62, h60, h38, ↓reduceIte] at hc
            simp [litBytes] at hc
            omega
          · by_cases h34 : b == 34
            · simp only [h32, h0, h62, h60, h38, h34, ↓reduceIte] at hc
              simp [litBytes] at hc
              omega
            · simp only [h32, h0, h62, h60, h38, h34] at hc
              simp at hc
              omega

theorem wikidotEscapeRaw_append (bs cs : List Nat) :
    wikidotEscapeRaw (bs ++ cs) = wikidotEscapeRaw bs ++ wikidotEscapeRaw cs := by
  simp [wikidotEscapeRaw, List.flatMap_append]

theorem wikidotEscapeRaw_ascii (bs : List Nat) (h : ∀ b ∈ bs, b < 0x80) :
    ∀ c ∈ wikidotEscapeRaw bs, c < 0x80 := by
  induction bs with
  | nil => simp [wikidotEscapeRaw]
  | cons b rest ih =>
      have hb : b < 0x80 := h b (by simp)
      have hrest : ∀ x ∈ rest, x < 0x80 := fun x hx => h x (List.mem_cons_of_mem _ hx)
      have hih : ∀ c ∈ wikidotEscapeRaw rest, c < 0x80 := ih hrest
      simp only [wikidotEscapeRaw, List.flatMap_cons] at hih ⊢
      intro c hc
      simp only [List.mem_append] at hc
      rcases hc with hc | hc
      · exact wikidotEscapeRawByte_ascii b hb c hc
      · exact hih c hc

theorem escHtmlCompatByte_identity (b : Nat) (h38 : b ≠ 38) (h34 : b ≠ 34)
    (h60 : b ≠ 60) (h62 : b ≠ 62) : escHtmlCompatByte b = [b] := by
  simp [escHtmlCompatByte, beq_false_of_ne h38, beq_false_of_ne h34,
    beq_false_of_ne h60, beq_false_of_ne h62]

theorem htmlSpecialCharsCompat_append_ascii (bs cs : List Nat)
    (hbs : ∀ b ∈ bs, b < 0x80) (hcs : ∀ b ∈ cs, b < 0x80) :
    htmlSpecialCharsCompat (bs ++ cs) =
      htmlSpecialCharsCompat bs ++ htmlSpecialCharsCompat cs := by
  have hall : ∀ b ∈ bs ++ cs, b < 0x80 := by
    intro b hb
    simp only [List.mem_append] at hb
    rcases hb with hb | hb
    · exact hbs b hb
    · exact hcs b hb
  rw [htmlSpecialCharsCompat_ascii (bs ++ cs) hall,
    htmlSpecialCharsCompat_ascii bs hbs, htmlSpecialCharsCompat_ascii cs hcs]
  simp [List.flatMap_append]

/-! ## Form indentation recursion structure -/

theorem formIndentGo_no_pair (bs acc : List Nat) (fuel : Nat)
    (h10 : (bs.take 10 == litBytes "&#32;&#32;") = false)
    (h5 : (bs.take 5 == litBytes "&#32;") = false) :
    formIndentGo bs acc (fuel + 1) = acc ++ bs := by
  simp [formIndentGo, h10, h5]

theorem formIndentGo_single_step (bs acc : List Nat) (fuel : Nat)
    (h10 : (bs.take 10 == litBytes "&#32;&#32;") = false)
    (h5 : (bs.take 5 == litBytes "&#32;") = true) :
    formIndentGo bs acc (fuel + 1) = acc ++ litBytes "&#32;" ++ bs.drop 5 := by
  simp [formIndentGo, h10, h5]

theorem formIndentGo_pair_step (bs acc : List Nat) (fuel : Nat)
    (h10 : (bs.take 10 == litBytes "&#32;&#32;") = true) :
    formIndentGo bs acc (fuel + 1) =
      formIndentGo (bs.drop 10) (acc ++ litBytes "&nbsp;&#32;") fuel := by
  simp [formIndentGo, h10]

/-! ## Raw, Rawold and Form option and output laws -/

theorem renderRaw_eq_empty_or_wrapped (opts : OptMap) :
    renderRaw opts = [] ∨
      renderRaw opts = litBytes "<span style=\"white-space: pre-wrap;\">" ++
        wikidotEscapeRaw (optStrBytes opts "text".toList) ++ litBytes "</span>" := by
  by_cases h : optStrBytes opts ['t', 'e', 'x', 't'] = []
  · left
    simp [renderRaw, h]
  · right
    simp [renderRaw, h]

theorem renderRaw_congr_text (opts₁ opts₂ : OptMap)
    (h : optStrBytes opts₁ "text".toList = optStrBytes opts₂ "text".toList) :
    renderRaw opts₁ = renderRaw opts₂ := by
  unfold renderRaw
  rw [h]

theorem renderRawold_congr_text (opts₁ opts₂ : OptMap)
    (h : optStrBytes opts₁ "text".toList = optStrBytes opts₂ "text".toList) :
    renderRawold opts₁ = renderRawold opts₂ := by
  unfold renderRawold
  rw [h]

theorem renderRawold_ascii (opts : OptMap)
    (h : ∀ b ∈ optStrBytes opts "text".toList, b < 0x80) :
    renderRawold opts = (optStrBytes opts "text".toList).flatMap escHtmlCompatByte := by
  unfold renderRawold
  exact htmlSpecialCharsCompat_ascii _ h

theorem renderForm_blank (opts : OptMap) (hb : optIsset opts "blank".toList = true) :
    renderForm opts = [] := by
  unfold renderForm
  rw [hb]
  rfl

theorem renderForm_text_shape (opts : OptMap)
    (hb : optIsset opts "blank".toList = false) (ht : optIsset opts "text".toList = true) :
    renderForm opts = litBytes "<span style=\"white-space: pre-wrap;\">" ++
      formIndentGo (wikidotEscapeRaw (optStrBytes opts "text".toList)) []
        ((wikidotEscapeRaw (optStrBytes opts "text".toList)).length + 1) ++
      litBytes "</span>" := by
  unfold renderForm
  rw [hb, ht]
  rfl

/-! ## Heading and Toc option and output laws -/

theorem renderHeading_other (opts : OptMap)
    (h1 : rhTypeIs opts (litBytes "start") = false)
    (h2 : rhTypeIs opts (litBytes "start-notoc") = false)
    (h3 : rhTypeIs opts (litBytes "end") = false)
    (h4 : rhTypeIs opts (litBytes "startContent") = false)
    (h5 : rhTypeIs opts (litBytes "endContent") = false) :
    renderHeading opts = [] := by
  simp [renderHeading, h1, h2, h3, h4, h5]

theorem renderHeading_start_no_collapse_shape (opts : OptMap)
    (htype : rhTypeIs opts (litBytes "start") = true)
    (hcol : optIsset opts "collapse".toList = false) :
    renderHeading opts = [10] ++ litBytes "<h" ++ optStrBytes opts "level".toList ++
      (if optIsset opts "id".toList && !(optStrBytes opts "id".toList).isEmpty
        then litBytes " id=\"" ++ optStrBytes opts "id".toList ++ litBytes "\""
        else []) ++ litBytes "><span>" := by
  unfold renderHeading
  rw [htype, hcol]
  simp

theorem renderHeading_end_no_collapse_shape (opts : OptMap)
    (htype : rhTypeIs opts (litBytes "end") = true)
    (hcol : optIsset opts "collapse".toList = false) :
    renderHeading opts =
      litBytes "</span></h" ++ optStrBytes opts "level".toList ++ litBytes ">\n" := by
  have heq : optStrBytes opts "type".toList = litBytes "end" := eq_of_beq htype
  have hs1 : rhTypeIs opts (litBytes "start") = false := by
    unfold rhTypeIs
    rw [heq]
    rfl
  have hs2 : rhTypeIs opts (litBytes "start-notoc") = false := by
    unfold rhTypeIs
    rw [heq]
    rfl
  unfold renderHeading
  rw [hs1, hs2, htype, hcol]
  simp

theorem renderToc_other (opts : OptMap)
    (h1 : rhTypeIs opts (litBytes "list_start") = false)
    (h2 : rhTypeIs opts (litBytes "list_end") = false)
    (h3 : rhTypeIs opts (litBytes "item_start") = false)
    (h4 : rhTypeIs opts (litBytes "item_end") = false) :
    renderToc opts = [] := by
  simp [renderToc, h1, h2, h3, h4]

theorem renderToc_item_end_shape (opts : OptMap)
    (htype : rhTypeIs opts (litBytes "item_end") = true) :
    renderToc opts = tocStripDelim ++ litBytes "</a></div>" := by
  have heq : optStrBytes opts "type".toList = litBytes "item_end" := eq_of_beq htype
  have hs1 : rhTypeIs opts (litBytes "list_start") = false := by
    unfold rhTypeIs
    rw [heq]
    rfl
  have hs2 : rhTypeIs opts (litBytes "list_end") = false := by
    unfold rhTypeIs
    rw [heq]
    rfl
  have hs3 : rhTypeIs opts (litBytes "item_start") = false := by
    unfold rhTypeIs
    rw [heq]
    rfl
  unfold renderToc
  rw [hs1, hs2, hs3, htype]
  rfl

theorem renderToc_list_end_align_shape (opts : OptMap)
    (htype : rhTypeIs opts (litBytes "list_end") = true) :
    renderToc opts = [10] ++ litBytes "</div></div>" ++
      (if !rhTruthy (optStrBytes opts "align".toList)
        then litBytes "</td></tr></table>" else []) ++ litBytes "\n\n" := by
  have heq : optStrBytes opts "type".toList = litBytes "list_end" := eq_of_beq htype
  have hs1 : rhTypeIs opts (litBytes "list_start") = false := by
    unfold rhTypeIs
    rw [heq]
    rfl
  unfold renderToc
  rw [hs1, htype]
  rfl

theorem tocTitle_default_of_no_attr (opts : OptMap)
    (h : omGet opts "attr".toList = none) :
    tocTitle opts = litBytes "Table of Contents" := by
  unfold tocTitle
  rw [h]

theorem tocTitle_congr_attr (opts₁ opts₂ : OptMap)
    (h : omGet opts₁ "attr".toList = omGet opts₂ "attr".toList) :
    tocTitle opts₁ = tocTitle opts₂ := by
  unfold tocTitle
  rw [h]

#print axioms LeanFtml.Middle2.RawHeadingRender.dispatchRenderR44_eq_dispatchRenderR41
#print axioms LeanFtml.Middle2.RawHeadingRender.dispatchRenderR44_apply
#print axioms LeanFtml.Middle2.RawHeadingRender.dispatchRenderR44_raw
#print axioms LeanFtml.Middle2.RawHeadingRender.dispatchRenderR44_rawold
#print axioms LeanFtml.Middle2.RawHeadingRender.dispatchRenderR44_form
#print axioms LeanFtml.Middle2.RawHeadingRender.dispatchRenderR44_heading
#print axioms LeanFtml.Middle2.RawHeadingRender.dispatchRenderR44_toc
#print axioms LeanFtml.Middle2.RawHeadingRender.dispatchRenderR44_raw_heading_conf_doc_irrelevant
#print axioms LeanFtml.Middle2.RawHeadingRender.renderWithR44_eq_renderWith_dispatchRenderR44
#print axioms LeanFtml.Middle2.RawHeadingRender.renderWithR44_eq_renderWith_dispatchRenderR41
#print axioms LeanFtml.Middle2.RawHeadingRender.renderWithR44_output
#print axioms LeanFtml.Middle2.RawHeadingRender.renderWithR44_unmirrored
#print axioms LeanFtml.Middle2.RawHeadingRender.renderWithR44_missingKeys
#print axioms LeanFtml.Middle2.RawHeadingRender.renderWithR44_lookup_ext
#print axioms LeanFtml.Middle2.RawHeadingRender.renderWithR44_all_mirrored_complete
#print axioms LeanFtml.Middle2.RawHeadingRender.renderWithR44_unmirrored_not_complete
#print axioms LeanFtml.Middle2.RawHeadingRender.renderStateR44_eq_renderWithR44
#print axioms LeanFtml.Middle2.RawHeadingRender.pushUnique_mem_iff
#print axioms LeanFtml.Middle2.RawHeadingRender.pushUnique_idem
#print axioms LeanFtml.Middle2.RawHeadingRender.pushUnique_preserves_nodup
#print axioms LeanFtml.Middle2.RawHeadingRender.wikidotEscapeRawByte_identity
#print axioms LeanFtml.Middle2.RawHeadingRender.wikidotEscapeRawByte_ascii
#print axioms LeanFtml.Middle2.RawHeadingRender.wikidotEscapeRaw_append
#print axioms LeanFtml.Middle2.RawHeadingRender.wikidotEscapeRaw_ascii
#print axioms LeanFtml.Middle2.RawHeadingRender.escHtmlCompatByte_identity
#print axioms LeanFtml.Middle2.RawHeadingRender.htmlSpecialCharsCompat_append_ascii
#print axioms LeanFtml.Middle2.RawHeadingRender.formIndentGo_no_pair
#print axioms LeanFtml.Middle2.RawHeadingRender.formIndentGo_single_step
#print axioms LeanFtml.Middle2.RawHeadingRender.formIndentGo_pair_step
#print axioms LeanFtml.Middle2.RawHeadingRender.renderRaw_eq_empty_or_wrapped
#print axioms LeanFtml.Middle2.RawHeadingRender.renderRaw_congr_text
#print axioms LeanFtml.Middle2.RawHeadingRender.renderRawold_congr_text
#print axioms LeanFtml.Middle2.RawHeadingRender.renderRawold_ascii
#print axioms LeanFtml.Middle2.RawHeadingRender.renderForm_blank
#print axioms LeanFtml.Middle2.RawHeadingRender.renderForm_text_shape
#print axioms LeanFtml.Middle2.RawHeadingRender.renderHeading_other
#print axioms LeanFtml.Middle2.RawHeadingRender.renderHeading_start_no_collapse_shape
#print axioms LeanFtml.Middle2.RawHeadingRender.renderHeading_end_no_collapse_shape
#print axioms LeanFtml.Middle2.RawHeadingRender.renderToc_other
#print axioms LeanFtml.Middle2.RawHeadingRender.renderToc_item_end_shape
#print axioms LeanFtml.Middle2.RawHeadingRender.renderToc_list_end_align_shape
#print axioms LeanFtml.Middle2.RawHeadingRender.tocTitle_default_of_no_attr
#print axioms LeanFtml.Middle2.RawHeadingRender.tocTitle_congr_attr

end LeanFtml.Middle2.RawHeadingRender
