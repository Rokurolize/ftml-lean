/-
  ProofMiddle2ProseRender.lean — Wave 2 middle2 proof lane, unit U5. All declarations live in LeanFtml.Middle2.ProseRender and concern the actual R4.2 prose-render entry points in LeanFtml/ProseRender.lean and the twelve mirrors in LeanFtml/ProseRules.lean. No mirror source, Main.lean, foundation or other proof file is edited. Prose is single-line.
  Proved here are kernel-free universal mirror-internal laws: dispatcher agreement with dispatchRenderR41 (the twelve prose rules route to their render functions), renderWithR42/renderStateR42 shape equalities with renderWith and the base R41 definitions, lookup extensionality, dispatch agreement with the token-aware R41 dispatcher off the one footnoteitem branch, conf/doc independence and opts congruence on exactly the branches the mirrors read, pushUnique dedup algebra, missingKeys/unmirrored nodup invariants, and parametric characterizations of the twelve render functions that strictly generalize the mirror's ground rfl examples.
  F3-ADOPTION-REMAINDER (ProseRender): the canonical RenderEnv is not threaded through the mirror renderers, so the RenderEnv-parametric RenderProofBundle equality renderMirror env r conf doc opts = renderRefSpec env r conf doc opts is NOT asserted here; renderRefSpec and ReachableTok are section parameters of LeanFtml/ProofInterface.lean and do not exist as declarations in this tree. Coordinator F3 must thread RenderEnv through the mirror and supply the reference spec before that bundle can be instantiated. No such bundle, no invented renderRefSpec or ReachableTok constant appears in this file.
-/

import LeanFtml.ProseRender

namespace LeanFtml.Middle2.ProseRender

/-! ## 1. Dispatcher agreement -/

theorem dispatchRenderR42_eq_dispatchRenderR41 : dispatchRenderR42 = dispatchRenderR41 := rfl

theorem dispatchRenderR42_apply (rid : RenderRuleId) (conf : RenderConf)
    (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 rid conf doc opts = dispatchRenderR41 rid conf doc opts := rfl

theorem dispatchRenderR42_paragraph (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .paragraph conf doc opts = renderParagraph opts := rfl

theorem dispatchRenderR42_newline (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .newline conf doc opts = renderNewline := rfl

theorem dispatchRenderR42_break (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .break conf doc opts = renderBreak := rfl

theorem dispatchRenderR42_center (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .center conf doc opts = renderCenter opts := rfl

theorem dispatchRenderR42_horiz (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .horiz conf doc opts = renderHoriz := rfl

theorem dispatchRenderR42_separator (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .separator conf doc opts = renderSeparator := rfl

theorem dispatchRenderR42_clearfloat (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .clearfloat conf doc opts = renderClearfloat opts := rfl

theorem dispatchRenderR42_blockquote (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .blockquote conf doc opts = renderBlockquote opts := rfl

theorem dispatchRenderR42_note (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .note conf doc opts = renderNote opts := rfl

theorem dispatchRenderR42_divalign (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .divalign conf doc opts = renderDivalign opts := rfl

theorem dispatchRenderR42_comment (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .comment conf doc opts = renderComment := rfl

theorem dispatchRenderR42_delimiter (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 .delimiter conf doc opts = renderDelimiter opts := rfl

/-! ## 2. renderWithR42 / renderStateR42 shapes -/

theorem renderWithR42_eq_renderWith (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    renderWithR42 lookup conf work doc = renderWith dispatchRenderR42 lookup conf work doc := rfl

theorem renderWithR42_eq_renderWithR41_dispatch (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (work : List TSeg) (doc : DocState) :
    renderWithR42 lookup conf work doc = renderWith dispatchRenderR41 lookup conf work doc := rfl

theorem renderStateR42_eq_renderWithR42 (conf : RenderConf) (st : ParseState) :
    renderStateR42 conf st = renderWithR42 (fun k => st.tokens[k]?) conf st.work st.doc := rfl

theorem renderWithR42_lookup_ext (lookup₁ lookup₂ : Nat → Option TokenEntry)
    (conf : RenderConf) (work : List TSeg) (doc : DocState)
    (hagree : ∀ k, TSeg.tok k ∈ work → lookup₁ k = lookup₂ k) :
    renderWithR42 lookup₁ conf work doc = renderWithR42 lookup₂ conf work doc :=
  renderWith_lookup_ext dispatchRenderR42 lookup₁ lookup₂ conf doc work hagree

theorem dispatchRenderR42_eq_tokenAware_of_not_footnoteitem
    (lookup : Nat → Option TokenEntry) (rid : RenderRuleId)
    (h : rid ≠ .footnoteitem ∧ rid ≠ .gallery) (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR42 rid conf doc opts =
      dispatchRenderR41TokenAware lookup rid conf doc opts := by
  cases rid <;> simp [dispatchRenderR42, dispatchRenderR41, dispatchRenderR41TokenAware] at h ⊢

private theorem renderSegsLoop_R42_eq_R41ta (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (doc : DocState) (work : List TSeg)
    (hnoFi : ∀ k, TSeg.tok k ∈ work →
      (lookup k).bind (fun e => renderRuleOfName e.rule) ≠ some .footnoteitem ∧
      (lookup k).bind (fun e => renderRuleOfName e.rule) ≠ some .gallery) :
    renderSegsLoop dispatchRenderR42 lookup conf doc work =
    renderSegsLoop (dispatchRenderR41TokenAware lookup) lookup conf doc work := by
  induction work with
  | nil => rfl
  | cons seg rest ih =>
      have hrest : ∀ k, TSeg.tok k ∈ rest →
          (lookup k).bind (fun e => renderRuleOfName e.rule) ≠ some .footnoteitem ∧
          (lookup k).bind (fun e => renderRuleOfName e.rule) ≠ some .gallery :=
        fun k hk => hnoFi k (List.mem_cons_of_mem _ hk)
      have htail := ih hrest
      have ho := congrArg RenderOutcome.output htail
      have hu := congrArg RenderOutcome.unmirrored htail
      have hm := congrArg RenderOutcome.missingKeys htail
      cases seg with
      | text cs => simp [renderSegsLoop, ho, hu, hm]
      | tok k =>
          cases hlk : lookup k with
          | none => simp [renderSegsLoop, hlk, ho, hu, hm]
          | some entry =>
              cases hr : renderRuleOfName entry.rule with
              | none => simp [renderSegsLoop, hlk, hr, ho, hu, hm]
              | some rid =>
                  have hne : rid ≠ .footnoteitem ∧ rid ≠ .gallery := by
                    constructor
                    · intro hrid
                      have hb : (lookup k).bind (fun e => renderRuleOfName e.rule) =
                          some .footnoteitem := by simp [hlk, hr, hrid]
                      exact (hnoFi k (by simp)).1 hb
                    · intro hrid
                      have hb : (lookup k).bind (fun e => renderRuleOfName e.rule) =
                          some .gallery := by simp [hlk, hr, hrid]
                      exact (hnoFi k (by simp)).2 hb
                  have hagree := dispatchRenderR42_eq_tokenAware_of_not_footnoteitem
                    lookup rid hne conf doc entry.opts
                  simp [renderSegsLoop, hlk, hr, hagree, ho, hu, hm]

theorem renderWithR42_eq_renderWithR41_no_ufffd (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (work : List TSeg) (doc : DocState)
    (hno : work.any segHasUfffd = false)
    (hnoFi : ∀ k, TSeg.tok k ∈ work →
      (lookup k).bind (fun e => renderRuleOfName e.rule) ≠ some .footnoteitem ∧
      (lookup k).bind (fun e => renderRuleOfName e.rule) ≠ some .gallery) :
    renderWithR42 lookup conf work doc = renderWithR41 lookup conf work doc := by
  have hloop := renderSegsLoop_R42_eq_R41ta lookup conf doc work hnoFi
  simp [renderWithR42, renderWithR41, renderWith, hno, hloop]

/-! ## 3. conf/doc independence and opts congruence on the read branches -/

private def isProseRid : RenderRuleId → Bool
  | .paragraph | .newline | .break | .center | .horiz | .separator
  | .clearfloat | .blockquote | .note | .divalign | .comment | .delimiter => true
  | _ => false

theorem dispatchRenderR42_conf_doc_independent (rid : RenderRuleId)
    (conf conf' : RenderConf) (doc doc' : DocState) (opts : OptMap)
    (h : isProseRid rid = true) :
    dispatchRenderR42 rid conf doc opts = dispatchRenderR42 rid conf' doc' opts := by
  cases rid <;> simp [dispatchRenderR42, dispatchRenderR41, isProseRid] at h ⊢

theorem renderParagraph_opts_congr (opts₁ opts₂ : OptMap)
    (hs : proseTypeIs opts₁ (litBytes "start") = proseTypeIs opts₂ (litBytes "start"))
    (he : proseTypeIs opts₁ (litBytes "end") = proseTypeIs opts₂ (litBytes "end")) :
    renderParagraph opts₁ = renderParagraph opts₂ := by
  unfold renderParagraph
  rw [hs, he]

theorem renderDivalign_opts_congr (opts₁ opts₂ : OptMap)
    (hs : proseTypeIs opts₁ (litBytes "start") = proseTypeIs opts₂ (litBytes "start"))
    (he : proseTypeIs opts₁ (litBytes "end") = proseTypeIs opts₂ (litBytes "end"))
    (ha : optStrBytes opts₁ "align".toList = optStrBytes opts₂ "align".toList) :
    renderDivalign opts₁ = renderDivalign opts₂ := by
  unfold renderDivalign
  rw [hs, he]
  by_cases h : proseTypeIs opts₂ (litBytes "start") = true
  · simpa [h] using ha
  · by_cases h' : proseTypeIs opts₂ (litBytes "end") = true
    · simp [h, h']
    · simp [h, h']

theorem renderClearfloat_opts_congr (opts₁ opts₂ : OptMap)
    (hside : optStrBytes opts₁ "side".toList = optStrBytes opts₂ "side".toList) :
    renderClearfloat opts₁ = renderClearfloat opts₂ := by
  let f : List Nat → List Nat := fun side =>
    litBytes "<div style=\"clear:" ++
      (if side == litBytes ">" then litBytes "right"
       else if side == litBytes "<" then litBytes "left" else litBytes "both") ++
      litBytes "; height: 0px; font-size: 1px\"></div>\n"
  change f (optStrBytes opts₁ "side".toList) = f (optStrBytes opts₂ "side".toList)
  rw [hside]

theorem renderDelimiter_opts_congr (opts₁ opts₂ : OptMap)
    (htext : optStrBytes opts₁ "text".toList = optStrBytes opts₂ "text".toList) :
    renderDelimiter opts₁ = renderDelimiter opts₂ := by
  simpa [renderDelimiter] using htext

/-! ## 4. pushUnique dedup algebra -/

theorem pushUnique_mem_of_mem {α : Type} [DecidableEq α] (xs : List α) (x y : α)
    (h : y ∈ xs) : y ∈ pushUnique xs x := by
  by_cases hx : x ∈ xs
  · simpa [pushUnique, hx] using h
  · have hy : y ∈ xs ++ [x] := by simp [h]
    simpa [pushUnique, hx] using hy

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

theorem pushUnique_eq_self_of_mem {α : Type} [DecidableEq α] (xs : List α) (x : α)
    (hx : x ∈ xs) : pushUnique xs x = xs := by
  simp [pushUnique, hx]

private theorem nodup_append_single {α : Type} [DecidableEq α] (xs : List α) (x : α)
    (h : xs.Nodup) (hx : x ∉ xs) : (xs ++ [x]).Nodup := by
  induction xs with
  | nil => simp
  | cons a rest ih =>
      change (a :: (rest ++ [x])).Nodup
      rw [List.nodup_cons]
      constructor
      · intro ha
        simp only [List.mem_append, List.mem_singleton] at ha
        rcases ha with ha | ha
        · exact False.elim ((List.nodup_cons.mp h).1 ha)
        · subst x
          exact hx (by simp)
      · exact ih h.tail (by intro hxr; exact hx (by simp [hxr]))

theorem pushUnique_preserves_nodup {α : Type} [DecidableEq α] (xs : List α) (x : α)
    (h : xs.Nodup) : (pushUnique xs x).Nodup := by
  by_cases hx : x ∈ xs
  · simpa [pushUnique, hx] using h
  · have hset : pushUnique xs x = xs ++ [x] := by simp [pushUnique, hx]
    rw [hset]
    exact nodup_append_single xs x h hx

theorem pushUnique_foldl_nodup {α : Type} [DecidableEq α] (xs : List α) (acc : List α)
    (h : acc.Nodup) : (xs.foldl pushUnique acc).Nodup := by
  induction xs generalizing acc with
  | nil => simpa using h
  | cons x xs ih =>
      simp only [List.foldl_cons]
      exact ih (pushUnique acc x) (pushUnique_preserves_nodup acc x h)

/-! ## 5. Outcome invariants: missingKeys and unmirrored stay nodup -/

theorem renderSegsLoop_missingKeys_nodup
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry) (conf : RenderConf) (doc : DocState)
    (work : List TSeg) :
    (renderSegsLoop dispatch lookup conf doc work).missingKeys.Nodup := by
  induction work with
  | nil => simp [renderSegsLoop]
  | cons seg rest ih =>
      cases seg with
      | text cs => simpa [renderSegsLoop] using ih
      | tok k =>
          cases hlk : lookup k with
          | none =>
              by_cases hk : k ∈ (renderSegsLoop dispatch lookup conf doc rest).missingKeys
              · simpa [renderSegsLoop, hlk, hk] using ih
              · have hnd : (k :: (renderSegsLoop dispatch lookup conf doc rest).missingKeys).Nodup :=
                  List.nodup_cons.mpr ⟨hk, ih⟩
                simpa [renderSegsLoop, hlk, hk] using hnd
          | some entry =>
              cases hr : renderRuleOfName entry.rule with
              | none => simpa [renderSegsLoop, hlk, hr] using ih
              | some rid => simpa [renderSegsLoop, hlk, hr] using ih

theorem renderSegsLoop_unmirrored_nodup
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry) (conf : RenderConf) (doc : DocState)
    (work : List TSeg) :
    (renderSegsLoop dispatch lookup conf doc work).unmirrored.Nodup := by
  induction work with
  | nil => simp [renderSegsLoop]
  | cons seg rest ih =>
      cases seg with
      | text cs => simpa [renderSegsLoop] using ih
      | tok k =>
          cases hlk : lookup k with
          | none => simpa [renderSegsLoop, hlk] using ih
          | some entry =>
              cases hr : renderRuleOfName entry.rule with
              | some rid => simpa [renderSegsLoop, hlk, hr] using ih
              | none =>
                  by_cases hk : entry.rule ∈ (renderSegsLoop dispatch lookup conf doc rest).unmirrored
                  · simpa [renderSegsLoop, hlk, hr, hk] using ih
                  · have hnd : (entry.rule :: (renderSegsLoop dispatch lookup conf doc rest).unmirrored).Nodup :=
                      List.nodup_cons.mpr ⟨hk, ih⟩
                    simpa [renderSegsLoop, hlk, hr, hk] using hnd

/-! ## 6. Parametric per-rule characterizations -/

theorem renderParagraph_start_general (opts : OptMap)
    (h : proseTypeIs opts (litBytes "start") = true) :
    renderParagraph opts = litBytes "<p>" := by
  simp [renderParagraph, h]

theorem renderParagraph_end_general (opts : OptMap)
    (hs : proseTypeIs opts (litBytes "start") = false)
    (he : proseTypeIs opts (litBytes "end") = true) :
    renderParagraph opts = litBytes "</p>\n\n" := by
  simp [renderParagraph, hs, he]

theorem renderParagraph_other_general (opts : OptMap)
    (hs : proseTypeIs opts (litBytes "start") = false)
    (he : proseTypeIs opts (litBytes "end") = false) :
    renderParagraph opts = [] := by
  simp [renderParagraph, hs, he]

theorem renderCenter_start_general (opts : OptMap)
    (h : proseTypeIs opts (litBytes "start") = true) :
    renderCenter opts = litBytes "<p style=\"text-align: center;\">" := by
  simp [renderCenter, h]

theorem renderCenter_end_general (opts : OptMap)
    (hs : proseTypeIs opts (litBytes "start") = false)
    (he : proseTypeIs opts (litBytes "end") = true) :
    renderCenter opts = litBytes "</p>\n" := by
  simp [renderCenter, hs, he]

theorem renderCenter_other_general (opts : OptMap)
    (hs : proseTypeIs opts (litBytes "start") = false)
    (he : proseTypeIs opts (litBytes "end") = false) :
    renderCenter opts = [] := by
  simp [renderCenter, hs, he]

theorem renderBlockquote_start_general (opts : OptMap)
    (h : proseTypeIs opts (litBytes "start") = true) :
    renderBlockquote opts = litBytes "<blockquote>" := by
  simp [renderBlockquote, h]

theorem renderBlockquote_end_general (opts : OptMap)
    (hs : proseTypeIs opts (litBytes "start") = false)
    (he : proseTypeIs opts (litBytes "end") = true) :
    renderBlockquote opts = litBytes "</blockquote>\n" := by
  simp [renderBlockquote, hs, he]

theorem renderBlockquote_other_general (opts : OptMap)
    (hs : proseTypeIs opts (litBytes "start") = false)
    (he : proseTypeIs opts (litBytes "end") = false) :
    renderBlockquote opts = [] := by
  simp [renderBlockquote, hs, he]

theorem renderNote_start_general (opts : OptMap)
    (h : proseTypeIs opts (litBytes "start") = true) :
    renderNote opts = litBytes "<div class=\"wiki-note\">" := by
  simp [renderNote, h]

theorem renderNote_end_general (opts : OptMap)
    (hs : proseTypeIs opts (litBytes "start") = false)
    (he : proseTypeIs opts (litBytes "end") = true) :
    renderNote opts = litBytes "</div>" := by
  simp [renderNote, hs, he]

theorem renderNote_other_general (opts : OptMap)
    (hs : proseTypeIs opts (litBytes "start") = false)
    (he : proseTypeIs opts (litBytes "end") = false) :
    renderNote opts = [] := by
  simp [renderNote, hs, he]

theorem renderDivalign_start_general (opts : OptMap)
    (h : proseTypeIs opts (litBytes "start") = true) :
    renderDivalign opts =
      litBytes "<div style=\"text-align: " ++ optStrBytes opts "align".toList ++
        litBytes ";\">" := by
  simp [renderDivalign, h]

theorem renderDivalign_end_general (opts : OptMap)
    (hs : proseTypeIs opts (litBytes "start") = false)
    (he : proseTypeIs opts (litBytes "end") = true) :
    renderDivalign opts = litBytes "</div>" := by
  simp [renderDivalign, hs, he]

theorem renderDivalign_other_general (opts : OptMap)
    (hs : proseTypeIs opts (litBytes "start") = false)
    (he : proseTypeIs opts (litBytes "end") = false) :
    renderDivalign opts = [] := by
  simp [renderDivalign, hs, he]

private def clearfloatOut (side : List Nat) : List Nat :=
  litBytes "<div style=\"clear:" ++
    (if side == litBytes ">" then litBytes "right"
     else if side == litBytes "<" then litBytes "left" else litBytes "both") ++
    litBytes "; height: 0px; font-size: 1px\"></div>\n"

private theorem clearfloatOut_both (side : List Nat)
    (hr : side ≠ litBytes ">") (hl : side ≠ litBytes "<") :
    clearfloatOut side =
      litBytes "<div style=\"clear:both; height: 0px; font-size: 1px\"></div>\n" := by
  by_cases hgt : side = litBytes ">"
  · exact False.elim (hr hgt)
  · by_cases hlt : side = litBytes "<"
    · exact False.elim (hl hlt)
    · simp [clearfloatOut, hgt, hlt]
      rfl

theorem renderClearfloat_right_general (opts : OptMap)
    (h : optStrBytes opts "side".toList = litBytes ">") :
    renderClearfloat opts =
      litBytes "<div style=\"clear:right; height: 0px; font-size: 1px\"></div>\n" := by
  change clearfloatOut (optStrBytes opts "side".toList) =
    litBytes "<div style=\"clear:right; height: 0px; font-size: 1px\"></div>\n"
  rw [h]
  rfl

theorem renderClearfloat_left_general (opts : OptMap)
    (h : optStrBytes opts "side".toList = litBytes "<") :
    renderClearfloat opts =
      litBytes "<div style=\"clear:left; height: 0px; font-size: 1px\"></div>\n" := by
  change clearfloatOut (optStrBytes opts "side".toList) =
    litBytes "<div style=\"clear:left; height: 0px; font-size: 1px\"></div>\n"
  rw [h]
  rfl

theorem renderClearfloat_both_general (opts : OptMap)
    (hr : optStrBytes opts "side".toList ≠ litBytes ">")
    (hl : optStrBytes opts "side".toList ≠ litBytes "<") :
    renderClearfloat opts =
      litBytes "<div style=\"clear:both; height: 0px; font-size: 1px\"></div>\n" := by
  change clearfloatOut (optStrBytes opts "side".toList) =
    litBytes "<div style=\"clear:both; height: 0px; font-size: 1px\"></div>\n"
  exact clearfloatOut_both (optStrBytes opts "side".toList) hr hl

theorem renderDelimiter_eq_optStrBytes (opts : OptMap) :
    renderDelimiter opts = optStrBytes opts "text".toList := rfl

#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_eq_dispatchRenderR41
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_apply
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_paragraph
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_newline
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_break
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_center
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_horiz
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_separator
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_clearfloat
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_blockquote
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_note
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_divalign
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_comment
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_delimiter
#print axioms LeanFtml.Middle2.ProseRender.renderWithR42_eq_renderWith
#print axioms LeanFtml.Middle2.ProseRender.renderWithR42_eq_renderWithR41_dispatch
#print axioms LeanFtml.Middle2.ProseRender.renderStateR42_eq_renderWithR42
#print axioms LeanFtml.Middle2.ProseRender.renderWithR42_lookup_ext
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_eq_tokenAware_of_not_footnoteitem
#print axioms LeanFtml.Middle2.ProseRender.renderWithR42_eq_renderWithR41_no_ufffd
#print axioms LeanFtml.Middle2.ProseRender.dispatchRenderR42_conf_doc_independent
#print axioms LeanFtml.Middle2.ProseRender.renderParagraph_opts_congr
#print axioms LeanFtml.Middle2.ProseRender.renderDivalign_opts_congr
#print axioms LeanFtml.Middle2.ProseRender.renderClearfloat_opts_congr
#print axioms LeanFtml.Middle2.ProseRender.renderDelimiter_opts_congr
#print axioms LeanFtml.Middle2.ProseRender.pushUnique_mem_of_mem
#print axioms LeanFtml.Middle2.ProseRender.pushUnique_mem_iff
#print axioms LeanFtml.Middle2.ProseRender.pushUnique_eq_self_of_mem
#print axioms LeanFtml.Middle2.ProseRender.pushUnique_preserves_nodup
#print axioms LeanFtml.Middle2.ProseRender.pushUnique_foldl_nodup
#print axioms LeanFtml.Middle2.ProseRender.renderSegsLoop_missingKeys_nodup
#print axioms LeanFtml.Middle2.ProseRender.renderSegsLoop_unmirrored_nodup
#print axioms LeanFtml.Middle2.ProseRender.renderParagraph_start_general
#print axioms LeanFtml.Middle2.ProseRender.renderParagraph_end_general
#print axioms LeanFtml.Middle2.ProseRender.renderParagraph_other_general
#print axioms LeanFtml.Middle2.ProseRender.renderCenter_start_general
#print axioms LeanFtml.Middle2.ProseRender.renderCenter_end_general
#print axioms LeanFtml.Middle2.ProseRender.renderCenter_other_general
#print axioms LeanFtml.Middle2.ProseRender.renderBlockquote_start_general
#print axioms LeanFtml.Middle2.ProseRender.renderBlockquote_end_general
#print axioms LeanFtml.Middle2.ProseRender.renderBlockquote_other_general
#print axioms LeanFtml.Middle2.ProseRender.renderNote_start_general
#print axioms LeanFtml.Middle2.ProseRender.renderNote_end_general
#print axioms LeanFtml.Middle2.ProseRender.renderNote_other_general
#print axioms LeanFtml.Middle2.ProseRender.renderDivalign_start_general
#print axioms LeanFtml.Middle2.ProseRender.renderDivalign_end_general
#print axioms LeanFtml.Middle2.ProseRender.renderDivalign_other_general
#print axioms LeanFtml.Middle2.ProseRender.renderClearfloat_right_general
#print axioms LeanFtml.Middle2.ProseRender.renderClearfloat_left_general
#print axioms LeanFtml.Middle2.ProseRender.renderClearfloat_both_general
#print axioms LeanFtml.Middle2.ProseRender.renderDelimiter_eq_optStrBytes

end LeanFtml.Middle2.ProseRender
