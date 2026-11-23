import LeanFtml.Proof.Stage2TidyCore

set_option maxHeartbeats 8000000
set_option maxRecDepth 100000

namespace LeanFtml.Proof

open Stage2TidyCore

/-- Structural well-formedness for the Stage 2 tree type. A leaf is always
well-formed; an element or root is well-formed exactly when every child is.
This is the closedness invariant of `parseWellFormedTree`: because `HtmlNode`
stores children rather than open tags, a tree built by the frame unwinder has
no unmatched opens once the root frame has been reached. -/
def WFHtmlNode : HtmlNode → Prop
  | HtmlNode.text _ => True
  | HtmlNode.voidNode _ _ => True
  | HtmlNode.rawElem _ _ _ _ => True
  | HtmlNode.elem _ _ ch => ∀ c ∈ ch, WFHtmlNode c
  | HtmlNode.root ch => ∀ c ∈ ch, WFHtmlNode c

/-- Well-formedness of one tree-building frame: all of its accumulated
    (reversed) children are well-formed. -/
def WFFrame (f : TreeFrame) : Prop := ∀ c ∈ f.childrenRev, WFHtmlNode c

/-- Well-formedness of a whole frame stack. -/
def WFFrames (fs : List TreeFrame) : Prop := ∀ f ∈ fs, WFFrame f

/-- Adding a well-formed node to a well-formed frame stack keeps it well-formed. -/
theorem wf_addNodeToStack (fs : List TreeFrame) (n : HtmlNode)
    (hn : WFHtmlNode n) (hfs : WFFrames fs) : WFFrames (addNodeToStack fs n) := by
  cases fs with
  | nil =>
      simp [addNodeToStack, WFFrames, WFFrame, hn]
  | cons f rest =>
      intro f' hf'
      simp only [addNodeToStack, List.mem_cons] at hf'
      rcases hf' with hf' | hf'
      · subst f'
        show ∀ c ∈ n :: f.childrenRev, WFHtmlNode c
        intro c hc
        simp only [List.mem_cons] at hc
        rcases hc with rfl | hc
        · exact hn
        · exact hfs f (by simp) c hc
      · exact hfs f' (by simp [hf'])

/-- The root frame alone is well-formed. -/
theorem wf_rootFrame : WFFrames [{ name := "root", rawOpen := "", childrenRev := [] }] := by
  simp [WFFrames, WFFrame]

/-- Membership characterisation for `istack` tags, used by the T2 laws. -/
theorem pushInline_isPushed (st : RepairState) (t raw : String)
    (ht : t ∈ istackTags) : isPushed (pushInline st t raw) t = true := by
  unfold pushInline
  by_cases hcond : (istackTags.contains t && !isPushed st t) = true
  · rw [if_pos hcond]
    simp [isPushed]
  · rw [if_neg hcond]
    cases hb : isPushed st t with
    | false =>
        have hc : (istackTags.contains t && !isPushed st t) = true := by simp [ht, hb]
        exact False.elim (hcond hc)
    | true => rfl

/-- Pushing an inline tag never removes an existing istack entry. -/
theorem pushInline_istack_length (st : RepairState) (t raw : String) :
    (pushInline st t raw).istack.length ≥ st.istack.length := by
  by_cases hc : t ∈ istackTags ∧ isPushed st t = false
  · simp [pushInline, hc]
  · simp [pushInline, hc]

/-- T5 (table-cell scope wall): a non-table closer cannot see past a table
    cell that sits above it on the open stack, because `inScopeDepth` stops
    at the cell. This is the scope invariant that pins p21--p23. -/
theorem inScopeDepth_cell_top_blocks (cell : OpenEntry) (rest : List OpenEntry) (t : String)
    (hcell : (cell.actualTag == "td" || cell.actualTag == "th" ||
      cell.actualTag == "table") = true)
    (hnot : ¬ t ∈ ["td", "th", "tr", "table", "thead", "tbody", "tfoot"])
    (hm : (cell.expectClose == t) = false) :
    inScopeDepth (cell :: rest) t = none := by
  simp [inScopeDepth, inScopeDepth.loop, hcell, hnot, hm]

/-- T12 (stray block closer): a non-inline closer whose target is not in
    scope is dropped by `stepToken` with no state change at all. -/
theorem stage2_t12_stray_block_closer (st : RepairState) (t raw : String)
    (hnotInline : ¬ t ∈ inlineTags)
    (hscope : inScopeDepth st.openStack t = none) :
    stepToken st (HtmlToken.endTag t raw) = st := by
  simp [stepToken, hnotInline, hscope]

/-- T12 (stray inline closer, empty stack): `repairInlineEnd` returns the
    state unchanged when there is no open element, for every fuel value. -/
theorem stage2_t12_stray_inline_closer_empty_stack (st : RepairState) (t raw : String)
    (fuel : Nat) (hempty : st.openStack = []) :
    repairInlineEnd st t fuel = st := by
  cases fuel with
  | zero => simp [repairInlineEnd]
  | succ f => simp [repairInlineEnd, hempty]

/-- T3 anchor bound (q10): while the top open element is an anchor, a closer
    for any foreign inline tag is discarded and the anchor stays open. This is
    the differential behaviour pinned by probe q10. -/
theorem stage2_t3_anchor_bound (st : RepairState) (t araw : String) (fuel : Nat)
    (ha : st.openStack = [{ actualTag := "a", rawOpen := araw, expectClose := "a" }])
    (htinline : t ∈ inlineTags)
    (h1 : ("a" == t) = false) (h2 : (t == "a") = false) (hfuel : fuel > 0) :
    repairInlineEnd st t fuel = st := by
  cases fuel with
  | zero => omega
  | succ f => simp [repairInlineEnd, ha, htinline, h1, h2]

/-- T5 (table-cell scope wall, entry): starting a `td` clears the inline
    stack, isolating the cell from its predecessor. -/
theorem stage2_t5_td_enter_clears_istack (st : RepairState) (raw : String) :
    (stepToken st (HtmlToken.startTag "td" raw)).istack = [] := by
  simp [stepToken, pClosingBlocks, inlineTags, istackTags]

/-- T5 (table-cell scope wall, entry): the pre-cell inline stack is saved. -/
theorem stage2_t5_td_enter_saves_istack (st : RepairState) (raw : String) :
    ∃ previous, (stepToken st (HtmlToken.startTag "td" raw)).savedIstacks =
      previous :: st.savedIstacks := by
  simp [stepToken, pClosingBlocks, inlineTags, istackTags]

/-- `popDepthNoIstack` never touches the saved-istack register. -/
theorem popDepthNoIstack_savedIstacks (st : RepairState) (count : Nat) :
    (popDepthNoIstack st count).savedIstacks = st.savedIstacks := by
  induction count generalizing st with
  | zero => rfl
  | succ count ih =>
      cases hopen : st.openStack with
      | nil => simp [popDepthNoIstack, hopen]
      | cons top rest => simp [popDepthNoIstack, hopen, ih]

/-- T5 (table-cell scope wall, exit): closing an in-scope `td` restores the
    inline stack that was saved when the cell was entered. -/
theorem stage2_t5_td_exit_restores_istack (st : RepairState) (raw : String) (d : Nat)
    (hscope : inScopeDepth st.openStack "td" = some d) :
    (stepToken st (HtmlToken.endTag "td" raw)).istack =
      match st.savedIstacks with
      | prev :: _ => prev
      | [] => [] := by
  cases hopen : (popDepthNoIstack st d).openStack with
  | nil =>
      cases hsaved : st.savedIstacks with
      | nil => simp [stepToken, inlineTags, hscope, hopen, hsaved, popDepthNoIstack_savedIstacks]
      | cons prev tail => simp [stepToken, inlineTags, hscope, hopen, hsaved, popDepthNoIstack_savedIstacks]
  | cons top rest =>
      cases hsaved : st.savedIstacks with
      | nil => simp [stepToken, inlineTags, hscope, hopen, hsaved, popDepthNoIstack_savedIstacks]
      | cons prev tail => simp [stepToken, inlineTags, hscope, hopen, hsaved, popDepthNoIstack_savedIstacks]

/-- T1 (frame/tag normalization): a single NBSP character is replaced by the
    `&nbsp;` entity, every other character is emitted verbatim. -/
theorem stage2_t1_replaceNbsp_single (c : Char) :
    replaceNbsp [c] = if c.toNat == 0x00A0 then "&nbsp;".toList else [c] := by
  by_cases hc : c.toNat == 0x00A0
  · simp [replaceNbsp, replaceNbsp.loop, hc]
  · simp [replaceNbsp, replaceNbsp.loop, hc]

/-- T9 (inline-edge hoisting): an empty prunable inline is ejected, with no
    whitespace hoisted because there is no child text to carry whitespace. -/
theorem stage2_t9_hoist_empty_prunable (t raw : String)
    (ht : t ∈ prunableInlineTags) :
    hoistAndEjectInline t raw [] = (false, none, false) := by
  simp [hoistAndEjectInline, ht]

/-- Payload-substitution relation used by `stage2_parametric_in_text`. Two
    text payloads are in the same frame class when they agree on emptiness,
    on their leading ASCII-whitespace run, and on whether any non-whitespace
    content follows. These are exactly the three observations `stepToken`
    makes on a text token; the remaining characters only flow into `outRev`. -/
def SameTextFrame (s t : String) : Prop :=
  s.isEmpty = t.isEmpty ∧
  s.toList.takeWhile isAsciiWs = t.toList.takeWhile isAsciiWs ∧
  (s.toList.dropWhile isAsciiWs).isEmpty = (t.toList.dropWhile isAsciiWs).isEmpty

/-- Every field of the repair state except the output buffer is invariant
    under substituting a text token by another token in the same frame class.
    This is the token-level engine of the finite-skeleton quotient: repair
    decisions never inspect text payload bytes beyond their whitespace class. -/
theorem stage2_parametric_in_text (st : RepairState) (s t : String)
    (h : SameTextFrame s t) :
    let a := stepToken st (HtmlToken.text s)
    let b := stepToken st (HtmlToken.text t)
    a.openStack = b.openStack ∧
    a.istack = b.istack ∧
    a.savedIstacks = b.savedIstacks ∧
    a.pendingAReopen = b.pendingAReopen ∧
    a.pendingReopen = b.pendingReopen ∧
    a.reopenFrom = b.reopenFrom := by
  rcases h with ⟨hempty, hlead, hrest⟩
  by_cases hd : hasDeferred st
  · by_cases hs : s.isEmpty
    · have ht : t.isEmpty = true := by simpa [hempty] using hs
      simp [stepToken, emitStr, hd, hs, ht]
    · have ht : t.isEmpty = false := by simpa [hempty] using hs
      by_cases hr : (s.toList.dropWhile isAsciiWs).isEmpty
      · have hrt : (t.toList.dropWhile isAsciiWs).isEmpty = true := by simpa [hrest] using hr
        simp [stepToken, emitStr, hd, hs, ht, hr, hrt]
      · have hrt : (t.toList.dropWhile isAsciiWs).isEmpty = false := by simpa [hrest] using hr
        by_cases hl : (s.toList.takeWhile isAsciiWs).isEmpty
        · have hlt : (t.toList.takeWhile isAsciiWs).isEmpty = true := by simpa [hlead] using hl
          simp [stepToken, emitStr, hd, hs, ht, hr, hrt, hl, hlt]
        · have hlt : (t.toList.takeWhile isAsciiWs).isEmpty = false := by simpa [hlead] using hl
          simp [stepToken, emitStr, hlead, hd, hs, ht, hr, hrt, hl, hlt]
  · simp [stepToken, emitStr, hd]

/-- T3 (single-crossing rotation): with `em` crossed above the `strong`
    target and both tags present on the inline stack, a sufficiently fueled
    inline closer swaps the two istack slots, closes the crossed element,
    closes the target and schedules the crossed element to reopen from slot 0.
    The fuel is the concrete sufficiency witness `2`; lifting this to every
    larger fuel needs a fuel-monotonicity lemma for `repairInlineEnd`. -/
theorem stage2_t3_single_crossing_rotation (st : RepairState)
    (hstack : st.openStack = [
      { actualTag := "em", rawOpen := "<em>", expectClose := "em" },
      { actualTag := "strong", rawOpen := "<strong>", expectClose := "strong" }])
    (histack : st.istack = [
      { tag := "strong", rawOpen := "<strong>", deferred := false },
      { tag := "em", rawOpen := "<em>", deferred := false }]) :
    let r := repairInlineEnd st "strong" 2
    r.openStack = [] ∧
    r.istack = [{ tag := "em", rawOpen := "<em>", deferred := false }] ∧
    r.reopenFrom = some 0 ∧
    r.outRev = "</strong>" :: "</em>" :: st.outRev := by
  simp [repairInlineEnd, hstack, histack, isPushed, switchIstack, switchIstack.search,
    switchIstack.search.searchNode, findLastTag, findLastTag.loop, popIstackTop,
    closeOpenTop, inlineTags, istackTags]

/-- T4 (multi-element crossing): with `em` and `tt` crossed above the
    `strong` target, the crossed elements close innermost-first and the
    target stays open; the failed second istack swap keeps the deferral
    pointer. Fuel `2` is the concrete sufficiency witness for this shape. -/
theorem stage2_t4_multi_crossing_keeps_target_open (st : RepairState)
    (hstack : st.openStack = [
      { actualTag := "em", rawOpen := "<em>", expectClose := "em" },
      { actualTag := "tt", rawOpen := "<tt>", expectClose := "tt" },
      { actualTag := "strong", rawOpen := "<strong>", expectClose := "strong" }])
    (histack : st.istack = [
      { tag := "strong", rawOpen := "<strong>", deferred := false },
      { tag := "tt", rawOpen := "<tt>", deferred := false },
      { tag := "em", rawOpen := "<em>", deferred := false }]) :
    let r := repairInlineEnd st "strong" 2
    r.openStack = [{ actualTag := "strong", rawOpen := "<strong>", expectClose := "strong" }] ∧
    r.istack = [
      { tag := "em", rawOpen := "<em>", deferred := false },
      { tag := "tt", rawOpen := "<tt>", deferred := false }] ∧
    r.reopenFrom = some 0 ∧
    r.outRev = "</tt>" :: "</em>" :: st.outRev := by
  simp [repairInlineEnd, hstack, histack, isPushed, switchIstack, switchIstack.search,
    switchIstack.search.searchNode, findLastTag, findLastTag.loop, popIstackTop,
    closeOpenTop, inlineTags, istackTags]

/-- T7 (block start closes an open paragraph): starting `div` with a span
    open inside a `p` closes the inline first and then the paragraph before
    emitting the block start. -/
theorem stage2_t7_block_start_closes_p (st : RepairState)
    (hstack : st.openStack = [
      { actualTag := "span", rawOpen := "<span>", expectClose := "span" },
      { actualTag := "p", rawOpen := "<p>", expectClose := "p" }])
    (histack : st.istack = [
      { tag := "span", rawOpen := "<span>", deferred := false }])
    (hpa : st.pendingAReopen = none)
    (hscope : inScopeDepth st.openStack "p" = some 1) :
    let r := stepToken st (HtmlToken.startTag "div" "<div>")
    r.openStack = [{ actualTag := "div", rawOpen := "<div>", expectClose := "div" }] ∧
    r.outRev = "<div>" :: "</p>" :: "</span>" :: st.outRev := by
  simp [stepToken, hstack, histack, hpa, hscope, closeInlinesForBlockEnd,
    closeInlinesForBlockEndT, markDeferredOnIstack,
    markDeferredOnIstack.markFromEnd, pClosingBlocks,
    inlineTags, istackTags, inScopeDepth, inScopeDepth.loop, isPushed, pushInline]

/-- One fold step of `parseWellFormedTree`, factored out of its lambda so the
    frame invariant can be stated and proved. -/
def stage2TreeStep (frames : List TreeFrame) (tok : HtmlToken) : List TreeFrame :=
  match tok with
  | HtmlToken.text s => addNodeToStack frames (HtmlNode.text s)
  | HtmlToken.voidTag t r => addNodeToStack frames (HtmlNode.voidNode t r)
  | HtmlToken.rawElem t ro b rc => addNodeToStack frames (HtmlNode.rawElem t ro b rc)
  | HtmlToken.startTag t r => { name := t, rawOpen := r, childrenRev := [] } :: frames
  | HtmlToken.endTag t _ =>
      match frames with
      | top :: rest =>
          if !rest.isEmpty && top.name == t then
            addNodeToStack rest (HtmlNode.elem top.name top.rawOpen top.childrenRev.reverse)
          else frames
      | [] => frames

/-- Every tree fold step preserves frame well-formedness: text/void/raw and
    element nodes are leaves or built from already-well-formed children, a
    start tag opens an empty frame, and a matching end tag converts the top
    frame into a well-formed element before re-attaching it. -/
theorem stage2TreeStep_wf (frames : List TreeFrame) (tok : HtmlToken)
    (hfs : WFFrames frames) : WFFrames (stage2TreeStep frames tok) := by
  cases tok with
  | text s => exact wf_addNodeToStack frames (HtmlNode.text s) (by simp [WFHtmlNode]) hfs
  | voidTag t r => exact wf_addNodeToStack frames (HtmlNode.voidNode t r) (by simp [WFHtmlNode]) hfs
  | rawElem t ro b rc => exact wf_addNodeToStack frames (HtmlNode.rawElem t ro b rc) (by simp [WFHtmlNode]) hfs
  | startTag t r =>
      intro f hf
      simp [stage2TreeStep] at hf
      rcases hf with rfl | hf
      · simp [WFFrame]
      · exact hfs f hf
  | endTag t raw =>
      cases frames with
      | nil => simp [stage2TreeStep, WFFrames]
      | cons top rest =>
          by_cases hcond : !rest.isEmpty && top.name == t
          · simp [stage2TreeStep, hcond]
            apply wf_addNodeToStack
            · simp [WFHtmlNode]
              intro c hc
              exact hfs top (by simp) c (by simpa using hc)
            · intro f hf
              exact hfs f (by simp [hf])
          · simpa [stage2TreeStep, hcond] using hfs

/-- The fold of any token sequence over a well-formed frame stack stays
    well-formed. -/
theorem stage2_fold_frames_wf (tokens : List HtmlToken) (frames : List TreeFrame)
    (hfs : WFFrames frames) : WFFrames (tokens.foldl stage2TreeStep frames) := by
  induction tokens generalizing frames with
  | nil => simpa using hfs
  | cons tok rest ih =>
      exact ih (stage2TreeStep frames tok) (stage2TreeStep_wf frames tok hfs)

/-- `parseWellFormedTree` is exactly the fold above followed by the frame
    unwinder. -/
theorem parseWellFormedTree_eq (html : String) :
    parseWellFormedTree html =
      unwindTreeFrames ((tokenizeHtml html).foldl stage2TreeStep
        [{ name := "root", rawOpen := "", childrenRev := [] }]) := by
  rfl

/-- Well-formedness of the totalized frame unwinder for every fuel value:
    the fuel-exhaustion fallback `root []` is well-formed too, so the proof
    is unconditional even before the wrapper's fuel-sufficiency argument. -/
theorem wf_unwindTreeFramesT (fuel : Nat) (frames : List TreeFrame)
    (hfs : WFFrames frames) : WFHtmlNode (unwindTreeFramesT fuel frames) := by
  induction fuel generalizing frames with
  | zero => simp [unwindTreeFramesT, WFHtmlNode]
  | succ fuel ih =>
      cases frames with
      | nil => simp [unwindTreeFramesT, WFHtmlNode]
      | cons f rest' =>
          cases rest' with
          | nil =>
              simp [unwindTreeFramesT]
              simp [WFHtmlNode]
              intro c hc
              exact hfs f (by simp) c (by simpa using hc)
          | cons top rest =>
              simp [unwindTreeFramesT]
              apply ih
              apply wf_addNodeToStack
              · simp [WFHtmlNode]
                intro c hc
                exact hfs f (by simp) c (by simpa using hc)
              · intro f' hf'
                exact hfs f' (by simp [hf'])

/-- The original-named unwinder inherits well-formedness through its
    fuel-sufficient wrapper. -/
theorem wf_unwindTreeFrames (frames : List TreeFrame) (hfs : WFFrames frames) :
    WFHtmlNode (unwindTreeFrames frames) := by
  simp [unwindTreeFrames]
  exact wf_unwindTreeFramesT (frames.length + 1) frames hfs

/-- Headline Tier 3 law. For every string, the totalized parse produces a
    well-formed tree: the token fold preserves frame well-formedness and the
    unwinder closes every frame into a well-formed node under a root. -/
theorem stage2_well_formed (html : String) : WFHtmlNode (parseWellFormedTree html) := by
  rw [parseWellFormedTree_eq]
  apply wf_unwindTreeFrames
  apply stage2_fold_frames_wf
  simp [WFFrames, WFFrame]

/-- The block-layout-only function: parse the already-normalized string into
    a tree and run passes 4 and 5. This is exactly the Tidy layout stage with
    the earlier frame/tag/repair passes removed; the frame-comp flag is
    carried through because pass 4 gates its break-dropping on it. -/
def blockLayoutOnly (cfg : Stage2Config) (s : String) : String :=
  pass5BlockJoining (pass4WhitespaceAndPruneWith cfg.applyFrameComp s)

/-- Normalized-WF domain of `stage2_wf_identity`: a Stage-1 document already
    in tidy's canonical frame/tag and repair form, so passes 1--3 are fixed
    points. The block start is applied only when frame compensation is enabled. -/
def NormalizedWF (cfg : Stage2Config) (s : String) : Prop :=
  pass1FrameAndTagNorm s = s ∧
  (cfg.applyFrameComp = true → pass2ParagraphUnwrap s = s) ∧
  pass3RepairStack s = s

/-- On the normalized domain, the whole core collapses to block layout only.
    The named remainder (outside this theorem) is proving `NormalizedWF cfg s`
    for every Stage-1 output: that needs the string-level pass-identity
    theorems for passes 1--3, which are differential facts about Tidy's C
    scanners and are certified by the bounded oracle, not forced here. -/
theorem stage2_wf_identity (cfg : Stage2Config) (s : String)
    (h : NormalizedWF cfg s) :
    stage2TidyCore cfg s = blockLayoutOnly cfg s := by
  rcases h with ⟨h1, h2, h3⟩
  by_cases hc : cfg.applyFrameComp = true
  · simp [stage2TidyCore, blockLayoutOnly, hc, h1, h2 hc, h3]
  · simp [stage2TidyCore, blockLayoutOnly, hc, h1, h3]

/-- Canonicality of the core image used by `stage2_idempotent`: the string
    produced by one core run already satisfies every fixed-point equation
    the core's own passes impose. -/
def CoreImageCanonical (cfg : Stage2Config) (s : String) : Prop :=
  pass1FrameAndTagNorm (stage2TidyCore cfg s) = stage2TidyCore cfg s ∧
  (cfg.applyFrameComp = true →
    Stage2FrameComp.pass2ParagraphUnwrap (stage2TidyCore cfg s) = stage2TidyCore cfg s) ∧
  pass3RepairStack (stage2TidyCore cfg s) = stage2TidyCore cfg s ∧
  blockLayoutOnly cfg (stage2TidyCore cfg s) = stage2TidyCore cfg s

/-- A fixed point of every pass is a fixed point of the whole core. The
    argument `r` is a variable here, so the pass-level equations are used
    without unfolding the (large) string passes on a concrete image. -/
theorem stage2TidyCore_eq_of_pass_fixed (cfg : Stage2Config) (r : String)
    (h1 : pass1FrameAndTagNorm r = r)
    (h2 : cfg.applyFrameComp = true → Stage2FrameComp.pass2ParagraphUnwrap r = r)
    (h3 : pass3RepairStack r = r)
    (h4 : blockLayoutOnly cfg r = r) :
    stage2TidyCore cfg r = r := by
  unfold stage2TidyCore
  rw [h1]
  change pass5BlockJoining (pass4WhitespaceAndPruneWith cfg.applyFrameComp
    (pass3RepairStack (if cfg.applyFrameComp then Stage2FrameComp.pass2ParagraphUnwrap r else r))) = r
  by_cases hc : cfg.applyFrameComp = true
  · rw [if_pos hc, h2 hc, h3]
    exact h4
  · rw [if_neg hc, h3]
    exact h4

/-- Idempotence on the canonical image. The named remainder is the universal
    statement `∀ cfg s, CoreImageCanonical cfg (stage2TidyCore cfg s)`, i.e.
    the string-level fixed-point theorem for Tidy's frame/tag and repair
    passes; it is not forced with an axiom here. -/
theorem stage2_idempotent (cfg : Stage2Config) (s : String)
    (h1 : pass1FrameAndTagNorm (stage2TidyCore cfg s) = stage2TidyCore cfg s)
    (h2' : cfg.applyFrameComp = true →
      Stage2FrameComp.pass2ParagraphUnwrap (stage2TidyCore cfg s) = stage2TidyCore cfg s)
    (h3 : pass3RepairStack (stage2TidyCore cfg s) = stage2TidyCore cfg s)
    (h4 : blockLayoutOnly cfg (stage2TidyCore cfg s) = stage2TidyCore cfg s) :
    stage2TidyCore cfg (stage2TidyCore cfg s) = stage2TidyCore cfg s :=
  stage2TidyCore_eq_of_pass_fixed cfg (stage2TidyCore cfg s) h1 h2' h3 h4

-- Kernel axiom audit (Tier 3 gate G1/G6): every theorem above must print
-- inside [propext, Classical.choice, Quot.sound].
#print axioms wf_addNodeToStack
#print axioms wf_rootFrame
#print axioms pushInline_isPushed
#print axioms pushInline_istack_length
#print axioms inScopeDepth_cell_top_blocks
#print axioms stage2_t12_stray_block_closer
#print axioms stage2_t12_stray_inline_closer_empty_stack
#print axioms stage2_t3_anchor_bound
#print axioms stage2_t5_td_enter_clears_istack
#print axioms stage2_t5_td_enter_saves_istack
#print axioms popDepthNoIstack_savedIstacks
#print axioms stage2_t5_td_exit_restores_istack
#print axioms stage2_t1_replaceNbsp_single
#print axioms stage2_t9_hoist_empty_prunable
#print axioms stage2_parametric_in_text
#print axioms stage2_t3_single_crossing_rotation
#print axioms stage2_t4_multi_crossing_keeps_target_open
#print axioms stage2_t7_block_start_closes_p
#print axioms stage2TreeStep_wf
#print axioms stage2_fold_frames_wf
#print axioms parseWellFormedTree_eq
#print axioms wf_unwindTreeFramesT
#print axioms wf_unwindTreeFrames
#print axioms stage2_well_formed
#print axioms stage2_wf_identity
#print axioms stage2TidyCore_eq_of_pass_fixed
#print axioms stage2_idempotent

end LeanFtml.Proof
