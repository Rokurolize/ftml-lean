/-
  LeanFtml.SpecG15 — live-confirmed paragraph behaviors from the
  BRIEF-SUSPECT-G15 suspicion hunt, restated as propositions about the
  family's mirror functions in LeanFtml.ParagraphStack.lean.

  Scope and honesty. Every statement below corresponds to a paragraph
  behavior that a fresh, valid, stable, source-matching live probe on
  sandbox-for-codex confirmed against ref-php's Paragraph/Anchor/List
  pipeline (probes muse-probe-suspect-g15-*; full chain in
  REPORT-SUSPECT-G15.md and conformance-suspect-g15/). The one suspicion
  that DIVERGED from live (explicit-list post-follower prose,
  muse-probe-suspect-g15-c3-list-explicit-tail and e1/e2/e4/e5/e8) is
  deliberately NOT stated here: a divergence gets a candidate record, not
  a confirmed proposition.

  The mirror is element-based: the scored opened/closing tokens that live
  Paragraph uses to decide bare-vs-wrapped are abstracted to the state's
  `unwrapped` flag, exactly as the G1.5 claim set C6 specifies. The
  propositions therefore assert the output-tree consequence of that flag
  and of the flush/bulk-push operations, which is the part of the behavior
  the mirror owns. Element-internal anchor chrome and the explicit-list
  post-follower marks remain deferred in ParagraphStack.lean's header.
-/
import LeanFtml.ParagraphStack

namespace LeanFtml

/-- SPEC-G15-T1 (probes muse-probe-suspect-g15-ctl-plain,
    muse-probe-suspect-g15-ctl-two-paras, muse-probe-suspect-g15-a4-anchor-mid,
    muse-probe-suspect-g15-a3-anchor-head, muse-probe-suspect-g15-b3-span-head,
    muse-probe-suspect-g15-b4-span-mid): an ordinary nonempty run flushes to
    exactly one Paragraph container holding its trailing-space-trimmed run.
    Live wraps plain runs and text-leading scored alias/anchor runs alike. -/
theorem g15_plain_run_is_one_paragraph (es : List AElem) (h : trimSpaces es ≠ []) :
    (endParagraph { initSt with current := es }).finished = [.para (trimSpaces es)] := by
  simp [initSt, endParagraph, buildParagraph, h]

/-- SPEC-G15-T2 (probes muse-probe-suspect-g15-a1-anchor-lone,
    muse-probe-suspect-g15-a2-anchor-tail, muse-probe-suspect-g15-a7-anchor-two,
    muse-probe-suspect-g15-b1-span-lone, muse-probe-suspect-g15-b2-span-tail,
    muse-probe-suspect-g15-e6-ul-span, muse-probe-suspect-g15-e7-ul-anchor):
    a run the paragraph layer leaves bare (a lone scored alias/anchor, a
    trailing scored alias/anchor, or a scored element after a list) is
    emitted as bare elements, in order, with no Paragraph container. This is
    the output-tree meaning of the mirror's `unwrapped` flag. -/
theorem g15_bare_run_flushes_bare (es : List AElem) :
    (endParagraph { initSt with current := es, unwrapped := true }).finished =
      es.map OElem.bare := by
  simp [initSt, endParagraph]

/-- SPEC-G15-T3 (probes muse-probe-suspect-g15-d1-hr-tail,
    muse-probe-suspect-g15-d3-code-tail, muse-probe-suspect-g15-c1-list-star-tail,
    muse-probe-suspect-g15-c2-list-hash-tail): an unsafe block placed in
    `finished` is preserved verbatim when the following prose run flushes;
    that run becomes exactly one new Paragraph after the bare block. Live
    wraps the prose tail after a rule line, a code block and a native list. -/
theorem g15_after_block_run_wrapped (b : AElem) (es : List AElem)
    (h : trimSpaces es ≠ []) :
    (endParagraph { initSt with finished := [.bare b], current := es }).finished =
      [.bare b, .para (trimSpaces es)] := by
  simp [initSt, endParagraph, buildParagraph, h]

/-- SPEC-G15-T4 (probes muse-probe-suspect-g15-a6-anchor-across-blank,
    muse-probe-suspect-g15-b5-span-across-blank): when the driver issues no
    break operation across the blank lines (the scored opener joins them),
    a bulk safe push onto a nonempty run appends verbatim and the single
    final flush yields one Paragraph containing both parts. -/
theorem g15_joined_run_one_paragraph (pre es : List AElem) (hne : ¬ pre = [])
    (h : trimSpaces (pre ++ es) ≠ []) :
    (endParagraph (pushSafeElements { initSt with current := pre } es)).finished =
      [.para (trimSpaces (pre ++ es))] := by
  simp [initSt, pushSafeElements, hne, endParagraph, buildParagraph, h]

/-- SPEC-G15-T5 (probes muse-probe-suspect-g15-ctl-two-paras,
    muse-probe-suspect-g15-e5-ul-tail-2para second run): a flush appends to
    the already-emitted prefix; the earlier Paragraph (or bare block)
    survives unchanged. Order preservation across successive runs. -/
theorem g15_second_run_preserves_first (first : OElem) (es : List AElem)
    (h : trimSpaces es ≠ []) :
    (endParagraph { initSt with finished := [first], current := es }).finished =
      [first, .para (trimSpaces es)] := by
  simp [initSt, endParagraph, buildParagraph, h]

/-- SPEC-G15-T6 (probes muse-probe-suspect-g15-a5-anchor-plain): an unscored
    anchor is ordinary inline content, so its run is wrapped. At the mirror
    boundary this is the same wrapped-flush claim as T1 with the run's first
    element a safe element. -/
theorem g15_unscored_run_wrapped (e : AElem) (es : List AElem)
    (h : trimSpaces (e :: es) ≠ []) :
    (endParagraph { initSt with current := e :: es }).finished =
      [.para (trimSpaces (e :: es))] := by
  simp [initSt, endParagraph, buildParagraph, h]

end LeanFtml
