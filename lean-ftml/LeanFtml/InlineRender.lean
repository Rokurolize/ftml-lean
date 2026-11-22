/-
  LeanFtml.InlineRender — R4.3 stage entry points and theorems for
  the inline-simple and typography Xhtml render mirror.

  The fourteen render functions live in
  `LeanFtml/InlineSimpleRules.lean`. The dispatcher is
  `LeanFtml.dispatchRenderR41` in `LeanFtml/NotesRender.lean`,
  extended in this stage to all thirty-two mirrored rules (the six
  R4.1 NOTES rules, the twelve R4.2 prose-core rules, and this
  family's fourteen); the `R43` entry points below share that
  dispatch, exactly as the earlier stages' entry points do, so the
  stages can never disagree about a rule more than one of them
  mirrors.

  The end-to-end entry point runs the R4.3 stage prefix
  `LeanFtml.pipelineR43`, which is the full sixty-eight-rule
  pipeline: the family's last rule, Tighten (position 68), rewrites
  the whole residual stream, so no shorter prefix produces the
  states this family's render branches must match (see
  `LeanFtml/Pipeline.lean`).
-/

import LeanFtml.NotesRender
import LeanFtml.InlineSimpleRules
import LeanFtml.Pipeline

namespace LeanFtml

/-! ## R4.3 dispatcher and entry points -/

/-- The combined dispatcher for the thirty-two render rules mirrored
    through R4.3 (definitionally `dispatchRenderR41`, extended in
    this stage; see its doc comment in `LeanFtml/NotesRender.lean`). -/
def dispatchRenderR43 :
    RenderRuleId → RenderConf → DocState → OptMap → List Nat :=
  dispatchRenderR41

/-- Render from an arbitrary token lookup function under the R4.3
    mirrored render rules (used directly by the conformance driver on
    raw `state-restricted.php` batch states whose token keys are
    cumulative process-global ids). -/
def renderWithR43 (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) : RenderOutcome :=
  renderWith dispatchRenderR43 lookup conf work doc

/-- Render an R3 `ParseState` (0-indexed `st.tokens`) under the R4.3
    mirrored render rules. -/
def renderStateR43 (conf : RenderConf) (st : ParseState) : RenderOutcome :=
  renderWithR43 (fun k => st.tokens[k]?) conf st.work st.doc

/-- End-to-end Lean parse+render on top of the R4.3 stage prefix
    (`convCRLF` → `pipelineR43`, the full pipeline → `renderStateR43`). -/
def renderInlineE2E (conf : RenderConf) (tags : List (List Char))
    (source : List Char) : RenderOutcome :=
  let st0 : ParseState :=
    { ParseState.ofSource (convCRLF source) with doc.page.tags := tags }
  let st := runRules pipelineR43 st0
  renderStateR43 conf st

/-! ## Theorems: per-rule characterizations on concrete option maps

    Each theorem pins one branch of one mirrored `token()` body
    against the exact byte string the reference produces. Proofs are
    by computation (`rfl`): the option maps are concrete, so the
    mirrors reduce in the kernel. The exceptions are the `Url` and
    known-site `Interwiki` theorems, whose escapes have been
    `htmlSpecialCharsCompat` since the HTMLCHARS correction: that
    escape guards on `utf8Valid`, whose kernel reduction is
    prohibitively expensive, so those proofs follow the programme's
    standing pattern (branch facts by `rfl`, escapes discharged
    through `htmlSpecialCharsCompat_ascii`). -/

/-- `Url` inline form: a plain ASCII href and label render as the
    bare anchor (harness `css` conf empty, no target). The Url
    theorems of this section are proved by the stage's standing
    pattern (branch facts by `rfl`, the `ENT_COMPAT` escapes by
    `htmlSpecialCharsCompat_ascii`), because a plain `rfl` over
    the whole body would kernel-reduce `utf8Valid` inside the
    escape. -/
theorem url_inline_plain :
    renderUrl [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "http://a".toList)] =
    litBytes "<a href=\"http://a\">http://a</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "http://a".toList)] "href".toList =
      litBytes "http://a" := rfl
  have henc : percentEncodeNonAscii (litBytes "http://a") =
      litBytes "http://a" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "http://a") =
      litBytes "http://a" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "http://a" == litBytes "#") = false := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "http://a".toList)] "text".toList =
      litBytes "http://a" := rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "http://a".toList)] "target".toList =
      [] := rfl
  have htruth : phpTruthyBytes [] = false := rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "http://a".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htarget0,
    htruth, htype, Bool.false_eq_true, ↓reduceIte, List.nil_append,
    List.append_assoc]
  rfl

/-- `Url` described form with the starred-link target: the target
    attribute is emitted (the href is neither an anchor nor a
    `mailto:`). -/
theorem url_descr_target :
    renderUrl [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "http://x".toList),
      ("text".toList, OptVal.str "Label".toList),
      ("target".toList, OptVal.str "_blank".toList)] =
    litBytes "<a href=\"http://x\" target=\"_blank\">Label</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "http://x".toList),
      ("text".toList, OptVal.str "Label".toList),
      ("target".toList, OptVal.str "_blank".toList)] "href".toList =
      litBytes "http://x" := rfl
  have henc : percentEncodeNonAscii (litBytes "http://x") =
      litBytes "http://x" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "http://x") =
      litBytes "http://x" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "http://x" == litBytes "#") = false := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "http://x".toList),
      ("text".toList, OptVal.str "Label".toList),
      ("target".toList, OptVal.str "_blank".toList)] "text".toList =
      litBytes "Label" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "Label") =
      litBytes "Label" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "http://x".toList),
      ("text".toList, OptVal.str "Label".toList),
      ("target".toList, OptVal.str "_blank".toList)] "target".toList =
      litBytes "_blank" := rfl
  have htruth : phpTruthyBytes (litBytes "_blank") = true := rfl
  have htargetE : htmlSpecialCharsCompat (litBytes "_blank") =
      litBytes "_blank" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "http://x".toList),
      ("text".toList, OptVal.str "Label".toList),
      ("target".toList, OptVal.str "_blank".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htargetE, htype, Bool.false_eq_true,
    Bool.true_eq_false, ↓reduceIte, List.nil_append, List.append_assoc]
  rfl

/-- `Url` with href exactly `"#"`: the href becomes `javascript:;`. -/
theorem url_hash_becomes_javascript :
    renderUrl [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList)] =
    litBytes "<a href=\"javascript:;\">Top</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList)] "href".toList =
      litBytes "#" := rfl
  have henc : percentEncodeNonAscii (litBytes "#") =
      litBytes "#" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "#") =
      litBytes "#" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "#" == litBytes "#") = true := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList)] "text".toList =
      litBytes "Top" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "Top") =
      litBytes "Top" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList)] "target".toList =
      [] := rfl
  have htruth : phpTruthyBytes [] = false := rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htype, Bool.false_eq_true, ↓reduceIte,
    List.nil_append, List.append_assoc]
  rfl

/-- `Url` ordering quirk, faithful to the reference: the
    `"#"` → `javascript:;` substitution runs before the anchor is
    assembled, and the authored target is emitted unchanged, so a
    starred `"#"` link keeps its `target="_blank"`. -/
theorem url_hash_target_kept :
    renderUrl [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList),
      ("target".toList, OptVal.str "_blank".toList)] =
    litBytes "<a href=\"javascript:;\" target=\"_blank\">Top</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList),
      ("target".toList, OptVal.str "_blank".toList)] "href".toList =
      litBytes "#" := rfl
  have henc : percentEncodeNonAscii (litBytes "#") =
      litBytes "#" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "#") =
      litBytes "#" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "#" == litBytes "#") = true := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList),
      ("target".toList, OptVal.str "_blank".toList)] "text".toList =
      litBytes "Top" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "Top") =
      litBytes "Top" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList),
      ("target".toList, OptVal.str "_blank".toList)] "target".toList =
      litBytes "_blank" := rfl
  have htruth : phpTruthyBytes (litBytes "_blank") = true := rfl
  have htargetE : htmlSpecialCharsCompat (litBytes "_blank") =
      litBytes "_blank" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList),
      ("target".toList, OptVal.str "_blank".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htargetE, htype, Bool.false_eq_true, ↓reduceIte,
    List.nil_append, List.append_assoc]
  rfl

/-- `Url` on-page anchor: the authored target is kept (the reference
    no longer suppresses it when the href starts with `#`). -/
theorem url_anchor_target_kept :
    renderUrl [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#sec".toList),
      ("text".toList, OptVal.str "S".toList),
      ("target".toList, OptVal.str "_blank".toList)] =
    litBytes "<a href=\"#sec\" target=\"_blank\">S</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#sec".toList),
      ("text".toList, OptVal.str "S".toList),
      ("target".toList, OptVal.str "_blank".toList)] "href".toList =
      litBytes "#sec" := rfl
  have henc : percentEncodeNonAscii (litBytes "#sec") =
      litBytes "#sec" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "#sec") =
      litBytes "#sec" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "#sec" == litBytes "#") = false := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#sec".toList),
      ("text".toList, OptVal.str "S".toList),
      ("target".toList, OptVal.str "_blank".toList)] "text".toList =
      litBytes "S" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "S") =
      litBytes "S" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#sec".toList),
      ("text".toList, OptVal.str "S".toList),
      ("target".toList, OptVal.str "_blank".toList)] "target".toList =
      litBytes "_blank" := rfl
  have htruth : phpTruthyBytes (litBytes "_blank") = true := rfl
  have htargetE : htmlSpecialCharsCompat (litBytes "_blank") =
      litBytes "_blank" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#sec".toList),
      ("text".toList, OptVal.str "S".toList),
      ("target".toList, OptVal.str "_blank".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htargetE, htype, Bool.false_eq_true, ↓reduceIte,
    List.nil_append, List.append_assoc]
  rfl

/-- `Url` `mailto:` link: the authored target is kept. -/
theorem url_mailto_target_kept :
    renderUrl [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "mailto:a@b.c".toList),
      ("text".toList, OptVal.str "Mail".toList),
      ("target".toList, OptVal.str "_blank".toList)] =
    litBytes "<a href=\"mailto:a@b.c\" target=\"_blank\">Mail</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "mailto:a@b.c".toList),
      ("text".toList, OptVal.str "Mail".toList),
      ("target".toList, OptVal.str "_blank".toList)] "href".toList =
      litBytes "mailto:a@b.c" := rfl
  have henc : percentEncodeNonAscii (litBytes "mailto:a@b.c") =
      litBytes "mailto:a@b.c" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "mailto:a@b.c") =
      litBytes "mailto:a@b.c" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "mailto:a@b.c" == litBytes "#") = false := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "mailto:a@b.c".toList),
      ("text".toList, OptVal.str "Mail".toList),
      ("target".toList, OptVal.str "_blank".toList)] "text".toList =
      litBytes "Mail" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "Mail") =
      litBytes "Mail" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "mailto:a@b.c".toList),
      ("text".toList, OptVal.str "Mail".toList),
      ("target".toList, OptVal.str "_blank".toList)] "target".toList =
      litBytes "_blank" := rfl
  have htruth : phpTruthyBytes (litBytes "_blank") = true := rfl
  have htargetE : htmlSpecialCharsCompat (litBytes "_blank") =
      litBytes "_blank" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "mailto:a@b.c".toList),
      ("text".toList, OptVal.str "Mail".toList),
      ("target".toList, OptVal.str "_blank".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htargetE, htype, Bool.false_eq_true, ↓reduceIte,
    List.nil_append, List.append_assoc]
  rfl

/-- `Url` `mailto:` handling is case-insensitive in the reference
    (PHP `strtolower` on the seven-byte prefix); the authored target
    is kept either way. -/
theorem url_mailto_upper_target_kept :
    renderUrl [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "MAILTO:a@b.c".toList),
      ("text".toList, OptVal.str "Mail".toList),
      ("target".toList, OptVal.str "_blank".toList)] =
    litBytes "<a href=\"MAILTO:a@b.c\" target=\"_blank\">Mail</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "MAILTO:a@b.c".toList),
      ("text".toList, OptVal.str "Mail".toList),
      ("target".toList, OptVal.str "_blank".toList)] "href".toList =
      litBytes "MAILTO:a@b.c" := rfl
  have henc : percentEncodeNonAscii (litBytes "MAILTO:a@b.c") =
      litBytes "MAILTO:a@b.c" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "MAILTO:a@b.c") =
      litBytes "MAILTO:a@b.c" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "MAILTO:a@b.c" == litBytes "#") = false := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "MAILTO:a@b.c".toList),
      ("text".toList, OptVal.str "Mail".toList),
      ("target".toList, OptVal.str "_blank".toList)] "text".toList =
      litBytes "Mail" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "Mail") =
      litBytes "Mail" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "MAILTO:a@b.c".toList),
      ("text".toList, OptVal.str "Mail".toList),
      ("target".toList, OptVal.str "_blank".toList)] "target".toList =
      litBytes "_blank" := rfl
  have htruth : phpTruthyBytes (litBytes "_blank") = true := rfl
  have htargetE : htmlSpecialCharsCompat (litBytes "_blank") =
      litBytes "_blank" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "MAILTO:a@b.c".toList),
      ("text".toList, OptVal.str "Mail".toList),
      ("target".toList, OptVal.str "_blank".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htargetE, htype, Bool.false_eq_true, ↓reduceIte,
    List.nil_append, List.append_assoc]
  rfl

/-- `Url` label escaping under the corrected `ENT_COMPAT` call:
    the apostrophe renders raw. The statement read `it&#039;s`
    before the HTMLCHARS correction (it pinned the fossil's
    bare `htmlspecialchars()`, whose PHP 8.5 default flags
    escape the apostrophe); it is restated for that
    correction, on the probe evidence of REPORT-HTMLCHARS.md
    (the url-text and url-href probes: live spells the
    apostrophe raw at every Url site), not for any change in
    live behaviour. -/
theorem url_text_apostrophe :
    renderUrl [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "it's".toList)] =
    litBytes "<a href=\"http://a\">it's</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "it's".toList)] "href".toList =
      litBytes "http://a" := rfl
  have henc : percentEncodeNonAscii (litBytes "http://a") =
      litBytes "http://a" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "http://a") =
      litBytes "http://a" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "http://a" == litBytes "#") = false := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "it's".toList)] "text".toList =
      litBytes "it's" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "it's") =
      litBytes "it's" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "it's".toList)] "target".toList =
      [] := rfl
  have htruth : phpTruthyBytes [] = false := rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "it's".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htype, Bool.false_eq_true, ↓reduceIte,
    List.nil_append, List.append_assoc]
  rfl

/-- `Url` href escaping: a query ampersand becomes `&amp;`. -/
theorem url_href_ampersand :
    renderUrl [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "http://a/?x=1&y=2".toList),
      ("text".toList, OptVal.str "L".toList)] =
    litBytes "<a href=\"http://a/?x=1&amp;y=2\">L</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "http://a/?x=1&y=2".toList),
      ("text".toList, OptVal.str "L".toList)] "href".toList =
      litBytes "http://a/?x=1&y=2" := rfl
  have henc : percentEncodeNonAscii (litBytes "http://a/?x=1&y=2") =
      litBytes "http://a/?x=1&y=2" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "http://a/?x=1&y=2") =
      litBytes "http://a/?x=1&amp;y=2" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "http://a/?x=1&amp;y=2" == litBytes "#") =
      false := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "http://a/?x=1&y=2".toList),
      ("text".toList, OptVal.str "L".toList)] "text".toList =
      litBytes "L" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "L") =
      litBytes "L" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "http://a/?x=1&y=2".toList),
      ("text".toList, OptVal.str "L".toList)] "target".toList =
      [] := rfl
  have htruth : phpTruthyBytes [] = false := rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "http://a/?x=1&y=2".toList),
      ("text".toList, OptVal.str "L".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htype, Bool.false_eq_true, ↓reduceIte,
    List.nil_append, List.append_assoc]
  rfl

/-- `Url` href percent-encoding (F-R2-68): non-ASCII bytes become
    uppercase percent triplets before escaping. -/
theorem url_href_nonascii_percent :
    renderUrl [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.bytes
        [104, 116, 116, 112, 58, 47, 47, 97, 47, 0xC3, 0xA9]),
      ("text".toList, OptVal.str "L".toList)] =
    litBytes "<a href=\"http://a/%C3%A9\">L</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.bytes
        [104, 116, 116, 112, 58, 47, 47, 97, 47, 0xC3, 0xA9]),
      ("text".toList, OptVal.str "L".toList)] "href".toList =
      [104, 116, 116, 112, 58, 47, 47, 97, 47, 0xC3, 0xA9] := rfl
  have henc : percentEncodeNonAscii
        [104, 116, 116, 112, 58, 47, 47, 97, 47, 0xC3, 0xA9] =
      litBytes "http://a/%C3%A9" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "http://a/%C3%A9") =
      litBytes "http://a/%C3%A9" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "http://a/%C3%A9" == litBytes "#") =
      false := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.bytes
        [104, 116, 116, 112, 58, 47, 47, 97, 47, 0xC3, 0xA9]),
      ("text".toList, OptVal.str "L".toList)] "text".toList =
      litBytes "L" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "L") =
      litBytes "L" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.bytes
        [104, 116, 116, 112, 58, 47, 47, 97, 47, 0xC3, 0xA9]),
      ("text".toList, OptVal.str "L".toList)] "target".toList =
      [] := rfl
  have htruth : phpTruthyBytes [] = false := rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.bytes
        [104, 116, 116, 112, 58, 47, 47, 97, 47, 0xC3, 0xA9]),
      ("text".toList, OptVal.str "L".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htype, Bool.false_eq_true, ↓reduceIte,
    List.nil_append, List.append_assoc]
  rfl

/-- `Url` footnote type: the anchor is wrapped in `<sup>` (the
    harness `css_footnote` conf is empty). -/
theorem url_footnote_wrap :
    renderUrl [("type".toList, OptVal.str "footnote".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "1".toList)] =
    litBytes "<sup><a href=\"http://a\">1</a></sup>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "footnote".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "1".toList)] "href".toList =
      litBytes "http://a" := rfl
  have henc : percentEncodeNonAscii (litBytes "http://a") =
      litBytes "http://a" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "http://a") =
      litBytes "http://a" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "http://a" == litBytes "#") = false := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "footnote".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "1".toList)] "text".toList =
      litBytes "1" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "1") =
      litBytes "1" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "footnote".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "1".toList)] "target".toList =
      [] := rfl
  have htruth : phpTruthyBytes [] = false := rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "footnote".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "1".toList)]
      (litBytes "footnote") = true := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htype, Bool.false_eq_true, ↓reduceIte,
    List.nil_append, List.append_assoc]
  rfl

/-- `Email`: both parts are byte-reversed, joined by `#`, and every
    `@` in the concatenation becomes `|`. -/
theorem email_reversed :
    renderEmail [("email".toList, OptVal.str "ab@cd".toList),
      ("text".toList, OptVal.str "xy".toList)] =
    litBytes "<span class=\"wiki-email\">dc|ba#yx</span>" := rfl

/-- `Mathinline`: `<` and the apostrophe escape through the `strtr`
    table (the apostrophe as `&#39;`, not `&#039;`). -/
theorem mathinline_escapes :
    renderMathinline [("content".toList, OptVal.str "a<b'c".toList)] =
    litBytes "<span class=\"math-inline\">$a&lt;b&#39;c$</span>" := rfl

/-- `Mathinline`: a NUL byte in the content becomes a single space. -/
theorem mathinline_nul_space :
    renderMathinline [("content".toList, OptVal.bytes [120, 0, 121])] =
    litBytes "<span class=\"math-inline\">$x y$</span>" := rfl

/-- `Mathinline`: `&` and `"` escape as `&amp;` and `&quot;`. -/
theorem mathinline_amp_quote :
    renderMathinline [("content".toList, OptVal.str "&\"".toList)] =
    litBytes "<span class=\"math-inline\">$&amp;&quot;$</span>" := rfl

set_option maxRecDepth 8192 in
/- `Interwiki` known site: the page fills the template's `%s` slot
    and the `window.open` onclick fragment is emitted for the class
    target conf `'_blank'`. -/
theorem interwiki_wikipedia :
    renderInterwiki [("site".toList, OptVal.str "wikipedia".toList),
      ("page".toList, OptVal.str "Some_Page".toList),
      ("text".toList, OptVal.str "Some_Page".toList)] =
    litBytes "<a href=\"https://en.wikipedia.org/wiki/Some_Page\" " ++
    litBytes "onclick=\"window.open(this.href, '_blank'); return false;\">" ++
    litBytes "Some_Page</a>" := by
  have hsite : optStrBytes [("site".toList, OptVal.str "wikipedia".toList),
      ("page".toList, OptVal.str "Some_Page".toList),
      ("text".toList, OptVal.str "Some_Page".toList)] "site".toList =
      litBytes "wikipedia" := rfl
  have hpage : optStrBytes [("site".toList, OptVal.str "wikipedia".toList),
      ("page".toList, OptVal.str "Some_Page".toList),
      ("text".toList, OptVal.str "Some_Page".toList)] "page".toList =
      litBytes "Some_Page" := rfl
  have htext0 : optStrBytes [("site".toList, OptVal.str "wikipedia".toList),
      ("page".toList, OptVal.str "Some_Page".toList),
      ("text".toList, OptVal.str "Some_Page".toList)] "text".toList =
      litBytes "Some_Page" := rfl
  have hlookup : bytesTableLookup interwikiSites (litBytes "wikipedia") =
      some (litBytes "https://en.wikipedia.org/wiki/%s") := rfl
  have hfind : (findSub [37, 115]
      (litBytes "https://en.wikipedia.org/wiki/%s")).isSome = true := rfl
  have hsprintf : sprintfPercentS
      (litBytes "https://en.wikipedia.org/wiki/%s")
      (litBytes "Some_Page") =
      litBytes "https://en.wikipedia.org/wiki/Some_Page" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "Some_Page") =
      litBytes "Some_Page" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  unfold renderInterwiki
  simp only [hsite, hpage, htext0, hlookup, hfind, hsprintf, htext,
    ↓reduceIte, List.nil_append, List.append_assoc]
  rfl

set_option maxRecDepth 8192 in
/- `Interwiki`: the page is inserted into the href raw (a space in
    a google query page is not encoded or escaped). -/
theorem interwiki_page_raw :
    renderInterwiki [("site".toList, OptVal.str "google".toList),
      ("page".toList, OptVal.str "a b".toList),
      ("text".toList, OptVal.str "G".toList)] =
    litBytes "<a href=\"https://www.google.com/search?q=a b\" " ++
    litBytes "onclick=\"window.open(this.href, '_blank'); return false;\">" ++
    litBytes "G</a>" := by
  have hsite : optStrBytes [("site".toList, OptVal.str "google".toList),
      ("page".toList, OptVal.str "a b".toList),
      ("text".toList, OptVal.str "G".toList)] "site".toList =
      litBytes "google" := rfl
  have hpage : optStrBytes [("site".toList, OptVal.str "google".toList),
      ("page".toList, OptVal.str "a b".toList),
      ("text".toList, OptVal.str "G".toList)] "page".toList =
      litBytes "a b" := rfl
  have htext0 : optStrBytes [("site".toList, OptVal.str "google".toList),
      ("page".toList, OptVal.str "a b".toList),
      ("text".toList, OptVal.str "G".toList)] "text".toList =
      litBytes "G" := rfl
  have hlookup : bytesTableLookup interwikiSites (litBytes "google") =
      some (litBytes "https://www.google.com/search?q=%s") := rfl
  have hfind : (findSub [37, 115]
      (litBytes "https://www.google.com/search?q=%s")).isSome =
      true := rfl
  have hsprintf : sprintfPercentS
      (litBytes "https://www.google.com/search?q=%s")
      (litBytes "a b") =
      litBytes "https://www.google.com/search?q=a b" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "G") =
      litBytes "G" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  unfold renderInterwiki
  simp only [hsite, hpage, htext0, hlookup, hfind, hsprintf, htext,
    ↓reduceIte, List.nil_append, List.append_assoc]
  rfl

/-- `Interwiki` unknown site: REFCORR4 Batch C escapes the
    fallback text with ENT_COMPAT (probe p16/f10). -/
theorem interwiki_unknown_site_escaped :
    renderInterwiki [("site".toList, OptVal.str "nosuch".toList),
      ("page".toList, OptVal.str "P".toList),
      ("text".toList, OptVal.str "<b>&".toList)] =
    litBytes "&lt;b&gt;&amp;" := rfl

set_option maxRecDepth 8192 in
/- `Interwiki` label escaping under the corrected `ENT_COMPAT`
    call: the apostrophe renders raw. The statement read
    `it&#039;s` before the HTMLCHARS correction (it pinned the
    fossil's bare `htmlspecialchars()`, whose PHP 8.5 default
    flags escape the apostrophe); it is restated for that
    correction, on the probe evidence of REPORT-HTMLCHARS.md
    (the iw-text probe: live spells a described label's
    apostrophe raw), not for any change in live behaviour. -/
theorem interwiki_text_apostrophe :
    renderInterwiki [("site".toList, OptVal.str "dictionary".toList),
      ("page".toList, OptVal.str "word".toList),
      ("text".toList, OptVal.str "it's".toList)] =
    litBytes "<a href=\"https://dictionary.reference.com/browse/word\" " ++
    litBytes "onclick=\"window.open(this.href, '_blank'); return false;\">" ++
    litBytes "it's</a>" := by
  have hsite : optStrBytes [("site".toList, OptVal.str "dictionary".toList),
      ("page".toList, OptVal.str "word".toList),
      ("text".toList, OptVal.str "it's".toList)] "site".toList =
      litBytes "dictionary" := rfl
  have hpage : optStrBytes [("site".toList, OptVal.str "dictionary".toList),
      ("page".toList, OptVal.str "word".toList),
      ("text".toList, OptVal.str "it's".toList)] "page".toList =
      litBytes "word" := rfl
  have htext0 : optStrBytes [("site".toList, OptVal.str "dictionary".toList),
      ("page".toList, OptVal.str "word".toList),
      ("text".toList, OptVal.str "it's".toList)] "text".toList =
      litBytes "it's" := rfl
  have hlookup : bytesTableLookup interwikiSites
      (litBytes "dictionary") =
      some (litBytes "https://dictionary.reference.com/browse/%s") := rfl
  have hfind : (findSub [37, 115]
      (litBytes "https://dictionary.reference.com/browse/%s")).isSome =
      true := rfl
  have hsprintf : sprintfPercentS
      (litBytes "https://dictionary.reference.com/browse/%s")
      (litBytes "word") =
      litBytes "https://dictionary.reference.com/browse/word" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "it's") =
      litBytes "it's" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  unfold renderInterwiki
  simp only [hsite, hpage, htext0, hlookup, hfind, hsprintf, htext,
    ↓reduceIte, List.nil_append, List.append_assoc]
  rfl

/-- `normalizeColor`: a bare uppercase 3-hex spec folds to the
    `#`-prefixed lowercase form. -/
theorem normalizeColor_hex3_upper :
    normalizeColor (litBytes "ABC") = some (litBytes "#abc") := rfl

/-- `normalizeColor`: a named color passes through lowercased. -/
theorem normalizeColor_named :
    normalizeColor (litBytes "ReD") = some (litBytes "red") := rfl

/-- `normalizeColor`: a spec carrying a byte outside the admission
    class is rejected. -/
theorem normalizeColor_rejects_semicolon :
    normalizeColor (litBytes "a;b") = none := rfl

/-- `Colortext` named color, start token. -/
theorem colortext_named_start :
    renderColortext [("type".toList, OptVal.str "start".toList),
      ("color".toList, OptVal.str "red".toList)] =
    litBytes "<span style=\"color: red\">" := rfl

/-- `Colortext` named color, end token. -/
theorem colortext_named_end :
    renderColortext [("type".toList, OptVal.str "end".toList),
      ("color".toList, OptVal.str "red".toList)] =
    litBytes "</span>" := rfl

/-- `Colortext` bare 3-hex spec: the rendered style carries the
    folded `#abc`. -/
theorem colortext_hex3_start :
    renderColortext [("type".toList, OptVal.str "start".toList),
      ("color".toList, OptVal.str "abc".toList)] =
    litBytes "<span style=\"color: #abc\">" := rfl

/-- `Colortext` `#`-prefixed uppercase 6-hex spec folds to
    lowercase. -/
theorem colortext_hex6_start :
    renderColortext [("type".toList, OptVal.str "start".toList),
      ("color".toList, OptVal.str "#A1B2C3".toList)] =
    litBytes "<span style=\"color: #a1b2c3\">" := rfl

/-- `Colortext` whitespace-only spec: admitted as the empty spec,
    rendered with no space after the colon. -/
theorem colortext_ws_only_start :
    renderColortext [("type".toList, OptVal.str "start".toList),
      ("color".toList, OptVal.str "  ".toList)] =
    litBytes "<span style=\"color:\">" := rfl

/-- `Colortext` inadmissible spec, start token: the literal opener
    form `##<raw>|` is restored. -/
theorem colortext_invalid_start :
    renderColortext [("type".toList, OptVal.str "start".toList),
      ("color".toList, OptVal.str "a;b".toList)] =
    litBytes "##a;b|" := rfl

/-- `Colortext` inadmissible spec, end token: the literal closer
    form `##` is restored. -/
theorem colortext_invalid_end :
    renderColortext [("type".toList, OptVal.str "end".toList),
      ("color".toList, OptVal.str "a;b".toList)] =
    litBytes "##" := rfl

/-- `Colortext` space runs in the spec collapse to single spaces
    before admission. -/
theorem colortext_collapses_runs :
    renderColortext [("type".toList, OptVal.str "start".toList),
      ("color".toList, OptVal.str "rgb(1,  2)".toList)] =
    litBytes "<span style=\"color: rgb(1, 2)\">" := rfl

/-- `Colortext` with a type other than start/end falls through to
    the empty string on an admitted spec. -/
theorem colortext_other_type :
    renderColortext [("type".toList, OptVal.str "other".toList),
      ("color".toList, OptVal.str "red".toList)] =
    [] := rfl

/-- `Strong` start token. -/
theorem strong_start :
    renderStrong [("type".toList, OptVal.str "start".toList)] =
    litBytes "<strong>" := rfl

/-- `Strong` end token. -/
theorem strong_end :
    renderStrong [("type".toList, OptVal.str "end".toList)] =
    litBytes "</strong>" := rfl

/-- `Strong` with any other type falls through to the empty string. -/
theorem strong_other :
    renderStrong [("type".toList, OptVal.str "other".toList)] = [] := rfl

/-- `Emphasis` start token. -/
theorem emphasis_start :
    renderEmphasis [("type".toList, OptVal.str "start".toList)] =
    litBytes "<em>" := rfl

/-- `Emphasis` end token. -/
theorem emphasis_end :
    renderEmphasis [("type".toList, OptVal.str "end".toList)] =
    litBytes "</em>" := rfl

/-- `Underline` start token: the fixed underline style span. -/
theorem underline_start :
    renderUnderline [("type".toList, OptVal.str "start".toList)] =
    litBytes "<span style=\"text-decoration: underline;\">" := rfl

/-- `Underline` end token. -/
theorem underline_end :
    renderUnderline [("type".toList, OptVal.str "end".toList)] =
    litBytes "</span>" := rfl

/-- `Strikethrough` start token: the fixed line-through style span. -/
theorem strikethrough_start :
    renderStrikethrough [("type".toList, OptVal.str "start".toList)] =
    litBytes "<span style=\"text-decoration: line-through;\">" := rfl

/-- `Strikethrough` end token. -/
theorem strikethrough_end :
    renderStrikethrough [("type".toList, OptVal.str "end".toList)] =
    litBytes "</span>" := rfl

/-- `Tt` start token. -/
theorem tt_start :
    renderTt [("type".toList, OptVal.str "start".toList)] =
    litBytes "<tt>" := rfl

/-- `Tt` end token. -/
theorem tt_end :
    renderTt [("type".toList, OptVal.str "end".toList)] =
    litBytes "</tt>" := rfl

/-- `Superscript` start token. -/
theorem superscript_start :
    renderSuperscript [("type".toList, OptVal.str "start".toList)] =
    litBytes "<sup>" := rfl

/-- `Superscript` end token. -/
theorem superscript_end :
    renderSuperscript [("type".toList, OptVal.str "end".toList)] =
    litBytes "</sup>" := rfl

/-- `Subscript` start token. -/
theorem subscript_start :
    renderSubscript [("type".toList, OptVal.str "start".toList)] =
    litBytes "<sub>" := rfl

/-- `Subscript` end token. -/
theorem subscript_end :
    renderSubscript [("type".toList, OptVal.str "end".toList)] =
    litBytes "</sub>" := rfl

/-- `Typography`: the double-backtick key renders `&#8220;`. -/
theorem typography_ldquo :
    renderTypography [("char".toList, OptVal.str "``".toList)] =
    litBytes "&#8220;" := rfl

/-- `Typography`: the double-apostrophe key renders `&#8221;`. -/
theorem typography_rdquo :
    renderTypography [("char".toList, OptVal.str "''".toList)] =
    litBytes "&#8221;" := rfl

/-- `Typography`: the double-comma key renders `&#8222;`. -/
theorem typography_lowquo :
    renderTypography [("char".toList, OptVal.str ",,".toList)] =
    litBytes "&#8222;" := rfl

/-- `Typography`: the single-backtick key renders `&#8216;`. -/
theorem typography_lsquo :
    renderTypography [("char".toList, OptVal.str "`".toList)] =
    litBytes "&#8216;" := rfl

/-- `Typography`: the apostrophe key renders `&#8217;`. -/
theorem typography_apos :
    renderTypography [("char".toList, OptVal.str "'".toList)] =
    litBytes "&#8217;" := rfl

/-- `Typography`: the `<<` key renders `&#171;`. -/
theorem typography_laquo :
    renderTypography [("char".toList, OptVal.str "<<".toList)] =
    litBytes "&#171;" := rfl

/-- `Typography`: the `>>` key renders `&#187;`. -/
theorem typography_raquo :
    renderTypography [("char".toList, OptVal.str ">>".toList)] =
    litBytes "&#187;" := rfl

/-- `Typography`: the single-space key (byte 32) renders `&#160;`. -/
theorem typography_nbsp :
    renderTypography [("char".toList, OptVal.str " ".toList)] =
    litBytes "&#160;" := rfl

/-- `Typography`: the ellipsis key renders `&#8230;`. -/
theorem typography_ellipsis :
    renderTypography [("char".toList, OptVal.str "...".toList)] =
    litBytes "&#8230;" := rfl

/-- `Typography`: the triple-dash key renders `&#8212;`. -/
theorem typography_emdash_long :
    renderTypography [("char".toList, OptVal.str "---".toList)] =
    litBytes "&#8212;" := rfl

/-- `Typography`: the double-dash key renders the same `&#8212;`. -/
theorem typography_emdash :
    renderTypography [("char".toList, OptVal.str "--".toList)] =
    litBytes "&#8212;" := rfl

/-- `Typography`: a key outside the constant table renders the
    empty string (the PHP undefined-key path). -/
theorem typography_unknown :
    renderTypography [("char".toList, OptVal.str "x".toList)] =
    [] := rfl

/-- `Tighten` renders the constant empty string. -/
theorem tighten_const :
    renderTighten = [] := rfl

end LeanFtml
