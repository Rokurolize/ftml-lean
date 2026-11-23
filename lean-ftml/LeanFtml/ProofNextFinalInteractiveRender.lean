/-
  LeanFtml.NextFinal.InteractiveRender — Wave 2 next-final Class A render proofs for the R4.6 interactive render stage.
  Every theorem here is general over the mirror's actual entry points and pure interactive render functions, kernel-free and inside [propext, Classical.choice, Quot.sound]; no ground pin duplicates the InteractiveRender examples.
  Named remainder R-NF-INTERACTIVE-1: the universal RenderProofBundle equality renderMirror env r conf doc opts = renderRefSpec env r conf doc opts over ReachableTok for every interactive RenderRuleId is not instantiated here; RenderProofBundle's renderRefSpec, ReachableTok and RenderEnv parameters belong to coordinator foundation tasks F1/F3 (LeanFtml.ProofInterface, LeanFtml.RenderEnv) and must be supplied by the coordinator before a bundle can be written without inventing an axiom or a stand-in.
  Named divergence witness D-NF-INTERACTIVE-1: dispatchRenderR46 is dispatchRenderR41, which routes .footnoteitem to the non-token-aware renderFootnoteitem conf doc opts (default lookup fun _ => none), while the R4.1 pilot entry point renderWithR41 routes it through dispatchRenderR41TokenAware lookup; the two therefore disagree on a stored note body whose visible projection depends on an empty-Raw placeholder, as the two witness theorems below show.
-/

import LeanFtml.InteractiveRender

namespace LeanFtml.NextFinal.InteractiveRender

set_option maxRecDepth 8192

/-! ## R4.6 stage entry points are definitional -/

/-- Stage dispatcher agreement: the R4.6 dispatcher is the R4.1 dispatcher, pointwise on every rule, configuration, document and option map. -/
theorem dispatchRenderR46_eq_dispatchRenderR41 (rid : RenderRuleId) (conf : RenderConf) (doc : DocState) (opts : OptMap) : dispatchRenderR46 rid conf doc opts = dispatchRenderR41 rid conf doc opts := rfl

/-- Entry point agreement: renderWithR46 is renderWith at the R4.6 dispatcher, for every lookup, configuration, work list and document. -/
theorem renderWithR46_eq_renderWith_dispatchRenderR46 (lookup : Nat → Option TokenEntry) (conf : RenderConf) (work : List TSeg) (doc : DocState) : renderWithR46 lookup conf work doc = renderWith dispatchRenderR46 lookup conf work doc := rfl

/-- Parse-state lookup agreement: renderStateR46 feeds renderWithR46 the state's own 0-indexed token table, for every configuration and state. -/
theorem renderStateR46_lookup_agreement (conf : RenderConf) (st : ParseState) : renderStateR46 conf st = renderWithR46 (fun k => st.tokens[k]?) conf st.work st.doc := rfl

/-- End-to-end composition: renderInteractiveE2E is the R4.6 stage prefix convCRLF then pipelineR46 followed by renderStateR46, for every configuration, tag list and source. -/
theorem renderInteractiveE2E_composition (conf : RenderConf) (tags : List (List Char)) (source : List Char) : renderInteractiveE2E conf tags source = renderStateR46 conf (runRules pipelineR46 { ParseState.ofSource (convCRLF source) with doc.page.tags := tags }) := rfl

/-! ## Determinism and composition over arbitrary lookup/work/doc/conf -/

/-- Output composition: the raw single-pass segment renderer's emitted bytes append across a split of the work list, for an arbitrary dispatcher, lookup, configuration and document. -/
theorem renderSegsLoop_output_append (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat) (lookup : Nat → Option TokenEntry) (conf : RenderConf) (doc : DocState) (w₁ w₂ : List TSeg) : (renderSegsLoop dispatch lookup conf doc (w₁ ++ w₂)).output = (renderSegsLoop dispatch lookup conf doc w₁).output ++ (renderSegsLoop dispatch lookup conf doc w₂).output := by
  induction w₁ with
  | nil => simp [renderSegsLoop]
  | cons seg rest ih =>
      cases seg with
      | text cs => simp [renderSegsLoop, ih, List.append_assoc]
      | tok k =>
          cases hlk : lookup k with
          | none => simp [renderSegsLoop, hlk, ih, List.append_assoc]
          | some entry =>
              cases hrn : renderRuleOfName entry.rule with
              | some rid => simp [renderSegsLoop, hlk, hrn, ih, List.append_assoc]
              | none => simp [renderSegsLoop, hlk, hrn, ih, List.append_assoc]

/-- Unreferenced-token irrelevance at R4.6: two lookups agreeing at every token key referenced in an arbitrary work list produce the identical R4.6 RenderOutcome. -/
theorem renderWithR46_lookup_ext (lookup₁ lookup₂ : Nat → Option TokenEntry) (conf : RenderConf) (work : List TSeg) (doc : DocState) (hagree : ∀ k, TSeg.tok k ∈ work → lookup₁ k = lookup₂ k) : renderWithR46 lookup₁ conf work doc = renderWithR46 lookup₂ conf work doc := by
  unfold renderWithR46
  exact renderWith_lookup_ext dispatchRenderR46 lookup₁ lookup₂ conf doc work hagree

/-- Completeness invariant at R4.6: if every token referenced in an arbitrary work list resolves in the lookup to a mirrored render rule, the R4.6 outcome is complete. -/
theorem renderWithR46_all_mirrored_complete (lookup : Nat → Option TokenEntry) (conf : RenderConf) (doc : DocState) (work : List TSeg) (hall : ∀ k, TSeg.tok k ∈ work → ∃ entry rid, lookup k = some entry ∧ renderRuleOfName entry.rule = some rid) : (renderWithR46 lookup conf work doc).isComplete = true := by
  unfold renderWithR46
  exact renderWith_all_mirrored_complete dispatchRenderR46 lookup conf doc work hall

/-- Soundness of exclusion at R4.6: an arbitrary referenced token resolving to an unmirrored rule name forces the R4.6 outcome to be incomplete, so the driver can never silently pass it. -/
theorem renderWithR46_unmirrored_not_complete (lookup : Nat → Option TokenEntry) (conf : RenderConf) (doc : DocState) (work : List TSeg) (k : Nat) (entry : TokenEntry) (hmem : TSeg.tok k ∈ work) (hlook : lookup k = some entry) (hunm : renderRuleOfName entry.rule = none) : (renderWithR46 lookup conf work doc).isComplete = false := by
  unfold renderWithR46
  exact renderWith_unmirrored_not_complete dispatchRenderR46 lookup conf doc work k entry hmem hlook hunm

/-- Environment independence of the pure interactive family: Anchor, Button and Date under the R4.6 dispatcher ignore both RenderConf and DocState, so their rendered bytes depend only on the option map. -/
theorem dispatchRenderR46_pure_interactive_conf_doc_independent (opts : OptMap) (conf₁ conf₂ : RenderConf) (doc₁ doc₂ : DocState) : dispatchRenderR46 .anchor conf₁ doc₁ opts = dispatchRenderR46 .anchor conf₂ doc₂ opts ∧ dispatchRenderR46 .button conf₁ doc₁ opts = dispatchRenderR46 .button conf₂ doc₂ opts ∧ dispatchRenderR46 .date conf₁ doc₁ opts = dispatchRenderR46 .date conf₂ doc₂ opts := by
  simp [dispatchRenderR46, dispatchRenderR41]

/-! ## Universal outputs for a pure interactive rule family -/

/-- Button general invalid-type law: for an arbitrary option map whose ASCII-lowercased type fails the allowlist, the full rendered output is the error block interpolating that lowercased type, independently of all other options. -/
theorem renderButton_invalid_type_law (opts : OptMap) (h : buttonAllowed (asciiLowerBytes (optStrBytes opts "type".toList)) = false) : renderButton opts = litBytes "<div class=\"error-block\"><em>" ++ asciiLowerBytes (optStrBytes opts "type".toList) ++ litBytes "</em> is not a valid button type</div>" := by
  unfold renderButton
  dsimp only
  rw [h]
  simp

/-- Button general set-tags-without-text law: for an arbitrary option map whose lowercased type is an allowed set-tags and whose text option is strictly absent (`omGet ... .isNone`, the post-REFCORR13 D10 mirror guard), the full rendered output is the dedicated set-tags error block. -/
theorem renderButton_settags_no_text_law (opts : OptMap) (hallow : buttonAllowed (asciiLowerBytes (optStrBytes opts "type".toList)) = true) (hty : (asciiLowerBytes (optStrBytes opts "type".toList) == litBytes "set-tags") = true) (htext : (omGet opts "text".toList).isNone = true) : renderButton opts = litBytes "<div class=\"error-block\">" ++ litBytes "You need to set text for set-tags button.</div>" := by
  unfold renderButton
  dsimp only
  rw [hallow, hty, htext]
  simp

/-- Button output determinism: for arbitrary option maps, equal bytes for the four options type, text, style and class plus equal text-option presence (the canonical D10 set-tags guard reads `omGet ... .isNone`) force identical rendered output, so no other option key can influence any Button branch. -/
theorem renderButton_option_determinism (opts₁ opts₂ : OptMap) (hTy : optStrBytes opts₁ "type".toList = optStrBytes opts₂ "type".toList) (hText : optStrBytes opts₁ "text".toList = optStrBytes opts₂ "text".toList) (hStyle : optStrBytes opts₁ "style".toList = optStrBytes opts₂ "style".toList) (hClass : optStrBytes opts₁ "class".toList = optStrBytes opts₂ "class".toList) (hTextPres : (omGet opts₁ "text".toList).isNone = (omGet opts₂ "text".toList).isNone) : renderButton opts₁ = renderButton opts₂ := by
  unfold renderButton
  dsimp only
  rw [hTy, hText, hStyle, hClass, hTextPres]

/-- Date general empty-timestamp law: for an arbitrary option map whose timestamp option is empty, Date renders no bytes at all, independently of the format option and every other key. -/
theorem renderDate_empty_timestamp_law (opts : OptMap) (h : (optStrBytes opts "timestamp".toList).isEmpty = true) : renderDate opts = [] := by
  unfold renderDate
  dsimp only
  rw [h]
  simp

/-- Date output determinism: for arbitrary option maps, equal bytes for the timestamp and format options force identical rendered output, so no other option key can influence any Date branch. -/
theorem renderDate_option_determinism (opts₁ opts₂ : OptMap) (hTs : optStrBytes opts₁ "timestamp".toList = optStrBytes opts₂ "timestamp".toList) (hFmt : optStrBytes opts₁ "format".toList = optStrBytes opts₂ "format".toList) : renderDate opts₁ = renderDate opts₂ := by
  unfold renderDate
  dsimp only
  rw [hTs, hFmt]

/-- Anchor general end law: for an arbitrary option map with a non-null type option equal to end, the full rendered output is the fixed closer, independently of every other option. -/
theorem renderAnchor_end_law (opts : OptMap) (hisset : intIsset opts "type".toList = true) (hend : intTypeIs opts (litBytes "end") = true) : renderAnchor opts = litBytes "</a>" := by
  have ht : optStrBytes opts "type".toList = litBytes "end" := eq_of_beq hend
  have hstart : intTypeIs opts (litBytes "start") = false := by
    unfold intTypeIs
    rw [ht]
    decide
  unfold renderAnchor
  dsimp only
  rw [hisset, hstart, hend]
  simp

/-! ## Divergence witness D-NF-INTERACTIVE-1 -/

/-- Under the default lookup fun _ => none used by dispatchRenderR41's .footnoteitem branch, a stored body holding one empty-Raw placeholder keeps that placeholder in the visible projection and emits the footnote separator space. -/
theorem renderWithR46_footnoteitem_default_lookup_witness : renderFootnoteitem {} { footnotes := [phBytes 0] } [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)] (fun _ => none) = litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++ litBytes "\"><a href=\"javascript:;\" onclick=\"" ++ litBytes "WIKIDOT.page.utils.scrollToReference(" ++ litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++ natBytes 1 ++ litBytes "</a>." ++ [32] := rfl

/-- Under a token-aware lookup that resolves slot 0 to an empty Raw token, the same stored body loses that placeholder in the visible projection and emits no separator space. -/
theorem renderWithR46_footnoteitem_raw_lookup_witness : renderFootnoteitem {} { footnotes := [phBytes 0] } [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)] (fun k => if k == 0 then some { rule := "Raw", opts := [("text".toList, OptVal.str [])] } else none) = litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++ litBytes "\"><a href=\"javascript:;\" onclick=\"" ++ litBytes "WIKIDOT.page.utils.scrollToReference(" ++ litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++ natBytes 1 ++ litBytes "</a>." := rfl

/-- The R4.6 footnoteitem dispatch is not token aware: on the witness body it differs from the R4.1 pilot's token-aware dispatch by exactly the separator byte 32. -/
theorem dispatchRenderR46_footnoteitem_token_awareness_divergence : dispatchRenderR46 .footnoteitem {} { footnotes := [phBytes 0] } [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)] ≠ dispatchRenderR41TokenAware (fun k => if k == 0 then some { rule := "Raw", opts := [("text".toList, OptVal.str [])] } else none) .footnoteitem {} { footnotes := [phBytes 0] } [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)] := by
  intro h
  dsimp [dispatchRenderR46, dispatchRenderR41, dispatchRenderR41TokenAware] at h
  change renderFootnoteitem {} { footnotes := [phBytes 0] } [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)] (fun _ => none) =
    renderFootnoteitem {} { footnotes := [phBytes 0] } [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)] (fun k => if k == 0 then some { rule := "Raw", opts := [("text".toList, OptVal.str [])] } else none) at h
  rw [renderWithR46_footnoteitem_default_lookup_witness, renderWithR46_footnoteitem_raw_lookup_witness] at h
  have hlen := congrArg List.length h
  simp only [List.length_append, List.length_cons, List.length_nil, Nat.add_zero] at hlen
  omega

#print axioms LeanFtml.NextFinal.InteractiveRender.dispatchRenderR46_eq_dispatchRenderR41
#print axioms LeanFtml.NextFinal.InteractiveRender.renderWithR46_eq_renderWith_dispatchRenderR46
#print axioms LeanFtml.NextFinal.InteractiveRender.renderStateR46_lookup_agreement
#print axioms LeanFtml.NextFinal.InteractiveRender.renderInteractiveE2E_composition
#print axioms LeanFtml.NextFinal.InteractiveRender.renderSegsLoop_output_append
#print axioms LeanFtml.NextFinal.InteractiveRender.renderWithR46_lookup_ext
#print axioms LeanFtml.NextFinal.InteractiveRender.renderWithR46_all_mirrored_complete
#print axioms LeanFtml.NextFinal.InteractiveRender.renderWithR46_unmirrored_not_complete
#print axioms LeanFtml.NextFinal.InteractiveRender.dispatchRenderR46_pure_interactive_conf_doc_independent
#print axioms LeanFtml.NextFinal.InteractiveRender.renderButton_invalid_type_law
#print axioms LeanFtml.NextFinal.InteractiveRender.renderButton_settags_no_text_law
#print axioms LeanFtml.NextFinal.InteractiveRender.renderButton_option_determinism
#print axioms LeanFtml.NextFinal.InteractiveRender.renderDate_empty_timestamp_law
#print axioms LeanFtml.NextFinal.InteractiveRender.renderDate_option_determinism
#print axioms LeanFtml.NextFinal.InteractiveRender.renderAnchor_end_law
#print axioms LeanFtml.NextFinal.InteractiveRender.renderWithR46_footnoteitem_default_lookup_witness
#print axioms LeanFtml.NextFinal.InteractiveRender.renderWithR46_footnoteitem_raw_lookup_witness
#print axioms LeanFtml.NextFinal.InteractiveRender.dispatchRenderR46_footnoteitem_token_awareness_divergence

end LeanFtml.NextFinal.InteractiveRender
