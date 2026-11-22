/-
  LeanFtml.RawHeadingRender — R4.4 stage entry points and theorems
  for the raw/form and heading/toc Xhtml render mirror.

  The five render functions live in
  `LeanFtml/RawHeadingRules.lean`. The dispatcher is
  `LeanFtml.dispatchRenderR41` in `LeanFtml/NotesRender.lean`,
  extended in this stage to all thirty-seven mirrored rules (the
  six R4.1 NOTES rules, the twelve R4.2 prose-core rules, the
  fourteen R4.3 inline-simple and typography rules, and this
  family's five); the `R44` entry points below share that dispatch,
  exactly as the earlier stages' entry points do, so the stages can
  never disagree about a rule more than one of them mirrors.

  The end-to-end entry point runs the R4.4 stage prefix
  `LeanFtml.pipelineR44`, which is the full sixty-eight-rule
  pipeline (see `LeanFtml/Pipeline.lean`).
-/

import LeanFtml.NotesRender
import LeanFtml.RawHeadingRules
import LeanFtml.Pipeline

namespace LeanFtml

/-! ## R4.4 dispatcher and entry points -/

/-- The combined dispatcher for the thirty-seven render rules
    mirrored through R4.4 (definitionally `dispatchRenderR41`,
    extended in this stage; see its doc comment in
    `LeanFtml/NotesRender.lean`). -/
def dispatchRenderR44 :
    RenderRuleId → RenderConf → DocState → OptMap → List Nat :=
  dispatchRenderR41

/-- Render from an arbitrary token lookup function under the R4.4
    mirrored render rules (used directly by the conformance driver
    on raw `state-restricted.php` batch states whose token keys are
    cumulative process-global ids). -/
def renderWithR44 (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) : RenderOutcome :=
  renderWith dispatchRenderR44 lookup conf work doc

/-- Render an R3 `ParseState` (0-indexed `st.tokens`) under the
    R4.4 mirrored render rules. -/
def renderStateR44 (conf : RenderConf) (st : ParseState) : RenderOutcome :=
  renderWithR44 (fun k => st.tokens[k]?) conf st.work st.doc

/-- End-to-end Lean parse+render on top of the R4.4 stage prefix
    (`convCRLF` → `pipelineR44`, the full pipeline →
    `renderStateR44`). -/
def renderRawHeadingE2E (conf : RenderConf) (tags : List (List Char))
    (source : List Char) : RenderOutcome :=
  let st0 : ParseState :=
    { ParseState.ofSource (convCRLF source) with doc.page.tags := tags }
  let st := runRules pipelineR44 st0
  renderStateR44 conf st

/-! ## Theorems: per-rule characterizations on concrete option maps

    Each theorem pins one branch of one mirrored `token()` body
    against the exact byte string the reference produces. Proofs
    are by computation (`rfl`): the option maps are concrete, so
    the mirrors reduce in the kernel. -/

/-- `wikidotEscapeRaw`: a space becomes `&#32;` and an apostrophe
    stays literal (the table's explicit identity entry). -/
theorem escapeRaw_space_apos :
    wikidotEscapeRaw (litBytes "a b'c") = litBytes "a&#32;b'c" := rfl

/-- `wikidotEscapeRaw`: the HTML-significant bytes escape and a
    NUL becomes a regular space. -/
theorem escapeRaw_significant_nul :
    wikidotEscapeRaw (litBytes "<&\">" ++ [0]) =
      litBytes "&lt;&amp;&quot;&gt; " := rfl

/-- `Raw`: the body is escaped and wrapped in the pre-wrap span. -/
theorem raw_wrapped :
    renderRaw [("text".toList, OptVal.str "x y".toList)] =
    litBytes "<span style=\"white-space: pre-wrap;\">x&#32;y</span>" := rfl

/-- `Raw`: markup inside the body stays literal (only the escape
    table applies). -/
theorem raw_markup_literal :
    renderRaw [("text".toList, OptVal.str "<b>[[x]]</b>".toList)] =
    litBytes "<span style=\"white-space: pre-wrap;\">" ++
      litBytes "&lt;b&gt;[[x]]&lt;/b&gt;</span>" := rfl

/-- `Rawold`: plain text with spaces passes through untouched
    (no wrapper, no space escaping). The escape is discharged
    through `htmlSpecialCharsCompat_ascii`, the stage's
    standing pattern for the `utf8Valid`-guarded escape. -/
theorem rawold_plain_spaces :
    renderRawold [("text".toList, OptVal.str "a b".toList)] =
    litBytes "a b" := by
  have htext : optStrBytes [("text".toList, OptVal.str "a b".toList)]
      "text".toList = litBytes "a b" := rfl
  have hesc : htmlSpecialCharsCompat (litBytes "a b") =
      litBytes "a b" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  simp only [renderRawold, htext, hesc]

/-- `Rawold`: the apostrophe renders raw under the corrected
    `ENT_COMPAT` call. The statement read `it&#039;s` before
    the HTMLCHARS correction (it pinned the fossil's bare
    `htmlspecialchars()`, whose PHP 8.5 default flags escape
    the apostrophe); it is restated for that correction, on
    the probe evidence of REPORT-HTMLCHARS.md (probe
    ro-trail: live serves the trailing apostrophe raw), not
    for any change in live behaviour. -/
theorem rawold_apostrophe :
    renderRawold [("text".toList, OptVal.str "it's".toList)] =
    litBytes "it's" := by
  have htext : optStrBytes [("text".toList, OptVal.str "it's".toList)]
      "text".toList = litBytes "it's" := rfl
  have hesc : htmlSpecialCharsCompat (litBytes "it's") =
      litBytes "it's" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  simp only [renderRawold, htext, hesc]

/-- `Rawold`: angle brackets escape. -/
theorem rawold_angle :
    renderRawold [("text".toList, OptVal.str "<b>".toList)] =
    litBytes "&lt;b&gt;" := by
  have htext : optStrBytes [("text".toList, OptVal.str "<b>".toList)]
      "text".toList = litBytes "<b>" := rfl
  have hesc : htmlSpecialCharsCompat (litBytes "<b>") =
      litBytes "&lt;b&gt;" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  simp only [renderRawold, htext, hesc]

/-- `Form`: a plain line renders in the pre-wrap span. -/
theorem form_plain_line :
    renderForm [("text".toList, OptVal.str "abc".toList)] =
    litBytes "<span style=\"white-space: pre-wrap;\">abc</span>" := rfl

/-- `Form`: the `blank` placeholder token renders nothing. -/
theorem form_blank :
    renderForm [("blank".toList, OptVal.int 1)] = [] := rfl

/-- `Form`: a single leading space renders as `&#32;`. -/
theorem form_indent_one :
    renderForm [("text".toList, OptVal.str " x".toList)] =
    litBytes "<span style=\"white-space: pre-wrap;\">&#32;x</span>" := rfl

/-- `Form`: a leading pair of spaces renders as `&nbsp;&#32;`
    (live's nbsp/space alternation). -/
theorem form_indent_two :
    renderForm [("text".toList, OptVal.str "  x".toList)] =
    litBytes "<span style=\"white-space: pre-wrap;\">&nbsp;&#32;x</span>" := rfl

/-- `Form`: three leading spaces render as one pair plus the
    leftover single `&#32;`. -/
theorem form_indent_three :
    renderForm [("text".toList, OptVal.str "   x".toList)] =
    litBytes "<span style=\"white-space: pre-wrap;\">&nbsp;&#32;&#32;x</span>" :=
  rfl

set_option maxRecDepth 8192 in
/-- `Form`: four leading spaces render as two `&nbsp;&#32;` pairs.
    (Proof-local `maxRecDepth` for the composed two-step pairing
    reduction, the device R4.3 disclosed for its Interwiki
    characterizations; the statement is unchanged and the proof
    remains plain `rfl` computation.) -/
theorem form_indent_four :
    renderForm [("text".toList, OptVal.str "    x".toList)] =
    litBytes "<span style=\"white-space: pre-wrap;\">&nbsp;&#32;&nbsp;&#32;x</span>" :=
  rfl

/-- `Form`: a token with neither `blank` nor `text` (the fossil's
    begin/field/end compatibility shape) renders nothing. -/
theorem form_compat_shape :
    renderForm [("type".toList, OptVal.str "begin".toList)] = [] := rfl

/-- `Heading` `start` with an id: the anchored opener carries
    ` id="tocN"` (harness css empty, no collapse). -/
theorem heading_start_with_id :
    renderHeading [("type".toList, OptVal.str "start".toList),
      ("level".toList, OptVal.int 2),
      ("id".toList, OptVal.str "toc0".toList)] =
    litBytes "\n<h2 id=\"toc0\"><span>" := rfl

/-- `Heading` `start` with a null id: no id attribute and no
    stray space (the R2 C3 correction). -/
theorem heading_start_null_id :
    renderHeading [("type".toList, OptVal.str "start".toList),
      ("level".toList, OptVal.int 1),
      ("id".toList, OptVal.null)] =
    litBytes "\n<h1><span>" := rfl

/-- `Heading` `start-notoc`: the bare opener with no id. -/
theorem heading_start_notoc :
    renderHeading [("type".toList, OptVal.str "start-notoc".toList),
      ("level".toList, OptVal.int 3),
      ("id".toList, OptVal.null)] =
    litBytes "\n<h3><span>" := rfl

/-- `Heading` `end`: the closer plus one LF (no collapse link). -/
theorem heading_end_plain :
    renderHeading [("type".toList, OptVal.str "end".toList),
      ("level".toList, OptVal.int 2)] =
    litBytes "</span></h2>\n" := rfl

/-- `Heading` with any other `type` falls through to the empty
    string. -/
theorem heading_other :
    renderHeading [("type".toList, OptVal.str "other".toList),
      ("level".toList, OptVal.int 2)] = [] := rfl

/-- The default Toc title under `ENT_COMPAT`: pure ASCII with no
    escapable byte, so the escape is the identity. Proved through
    `htmlSpecialCharsCompat_ascii` (the `NotesRender` pattern),
    because direct kernel reduction of `utf8Valid` inside a plain
    `rfl` is prohibitively expensive. -/
private theorem hscCompat_TableOfContents :
    htmlSpecialCharsCompat (litBytes "Table of Contents") =
      litBytes "Table of Contents" := by
  have hascii : ∀ b ∈ litBytes "Table of Contents", b < 0x80 := fun b hb => by
    have hall : (litBytes "Table of Contents").all
        (fun x => decide (x < 0x80)) = true := rfl
    exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
  rw [htmlSpecialCharsCompat_ascii _ hascii]
  rfl

/-- The `Bob's <List>` title under `ENT_COMPAT`: the apostrophe
    stays raw, the angle brackets escape. Same proof pattern as
    `hscCompat_TableOfContents`. -/
private theorem hscCompat_BobsList :
    htmlSpecialCharsCompat (litBytes "Bob's <List>") =
      litBytes "Bob's &lt;List&gt;" := by
  have hascii : ∀ b ∈ litBytes "Bob's <List>", b < 0x80 := fun b hb => by
    have hall : (litBytes "Bob's <List>").all
        (fun x => decide (x < 0x80)) = true := rfl
    exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
  rw [htmlSpecialCharsCompat_ascii _ hascii]
  rfl

/-- `Toc` `list_start` with no alignment: the table wrapper is
    emitted, the div carries only `id="toc"`, and the title is the
    default. The three `list_start` theorems are proved by
    rewriting the branch conditions and the title escape with
    concrete `rfl` facts and then closing the remaining literal
    assembly by `rfl`, because a single plain `rfl` over the whole
    body would kernel-reduce `utf8Valid` (see
    `hscCompat_TableOfContents`). -/
theorem toc_list_start_plain :
    renderToc [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.list []),
      ("align".toList, OptVal.str "".toList)] =
    litBytes "<table style=\"margin:0; padding:0\">" ++
      litBytes "<tr><td style=\"margin:0; padding:0\">" ++
      litBytes "<div id=\"toc\">" ++
      litBytes "<div id=\"toc-action-bar\">" ++
      litBytes "<a href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a>" ++
      litBytes "<a style=\"display: none\" href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div>" ++
      litBytes "<div class=\"title\">Table of Contents</div>" ++
      litBytes "<div id=\"toc-list\">" := by
  have ht : rhTypeIs [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.list []),
      ("align".toList, OptVal.str "".toList)] (litBytes "list_start") = true := rfl
  have ha : optStrBytes [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.list []),
      ("align".toList, OptVal.str "".toList)] "align".toList = [] := rfl
  have htruth : rhTruthy [] = false := rfl
  have hc1 : ([] == litBytes "f<") = false := rfl
  have hc2 : ([] == litBytes "f>") = false := rfl
  have htitle : tocTitle [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.list []),
      ("align".toList, OptVal.str "".toList)] =
      litBytes "Table of Contents" := rfl
  simp only [renderToc, ht, ha, htruth, hc1, hc2, htitle,
    hscCompat_TableOfContents, Bool.not_false, Bool.false_eq_true,
    ↓reduceIte, List.nil_append, List.append_assoc]
  rfl

/-- `Toc` `list_start` floated right: no table wrapper, and the
    div carries `class="floatright"` after the id (the R2 C3
    correction: no trailing space). Same proof pattern as
    `toc_list_start_plain`. -/
theorem toc_list_start_floatright :
    renderToc [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.list []),
      ("align".toList, OptVal.str "f>".toList)] =
    litBytes "<div id=\"toc\" class=\"floatright\">" ++
      litBytes "<div id=\"toc-action-bar\">" ++
      litBytes "<a href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a>" ++
      litBytes "<a style=\"display: none\" href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div>" ++
      litBytes "<div class=\"title\">Table of Contents</div>" ++
      litBytes "<div id=\"toc-list\">" := by
  have ht : rhTypeIs [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.list []),
      ("align".toList, OptVal.str "f>".toList)] (litBytes "list_start") = true := rfl
  have ha : optStrBytes [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.list []),
      ("align".toList, OptVal.str "f>".toList)] "align".toList = litBytes "f>" := rfl
  have htruth : rhTruthy (litBytes "f>") = true := rfl
  have hc1 : (litBytes "f>" == litBytes "f<") = false := rfl
  have hc2 : (litBytes "f>" == litBytes "f>") = true := rfl
  have htitle : tocTitle [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.list []),
      ("align".toList, OptVal.str "f>".toList)] =
      litBytes "Table of Contents" := rfl
  simp only [renderToc, ht, ha, htruth, hc1, hc2, htitle,
    hscCompat_TableOfContents, Bool.false_eq_true, ↓reduceIte,
    List.append_assoc]
  rfl

/-- `Toc` `list_start` with a `title` attribute: the attribute
    wins over the default and is escaped with `ENT_COMPAT` (the
    apostrophe stays raw; the R2 C2 correction). Same proof
    pattern as `toc_list_start_plain`. -/
theorem toc_list_start_title_attr :
    renderToc [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.map
        [("title".toList, OptVal.str "Bob's <List>".toList)]),
      ("align".toList, OptVal.str "f<".toList)] =
    litBytes "<div id=\"toc\" class=\"floatleft\">" ++
      litBytes "<div id=\"toc-action-bar\">" ++
      litBytes "<a href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a>" ++
      litBytes "<a style=\"display: none\" href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div>" ++
      litBytes "<div class=\"title\">Bob's &lt;List&gt;</div>" ++
      litBytes "<div id=\"toc-list\">" := by
  have ht : rhTypeIs [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.map
        [("title".toList, OptVal.str "Bob's <List>".toList)]),
      ("align".toList, OptVal.str "f<".toList)] (litBytes "list_start") = true := rfl
  have ha : optStrBytes [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.map
        [("title".toList, OptVal.str "Bob's <List>".toList)]),
      ("align".toList, OptVal.str "f<".toList)] "align".toList = litBytes "f<" := rfl
  have htruth : rhTruthy (litBytes "f<") = true := rfl
  have hc1 : (litBytes "f<" == litBytes "f<") = true := rfl
  have htitle : tocTitle [("type".toList, OptVal.str "list_start".toList),
      ("level".toList, OptVal.int 0),
      ("attr".toList, OptVal.map
        [("title".toList, OptVal.str "Bob's <List>".toList)]),
      ("align".toList, OptVal.str "f<".toList)] =
      litBytes "Bob's <List>" := rfl
  simp only [renderToc, ht, ha, htruth, hc1, htitle, hscCompat_BobsList,
    ↓reduceIte, List.append_assoc]
  rfl

/-- `Toc` `list_end` with no alignment: the closing divs, the
    table close, and two LFs. -/
theorem toc_list_end_plain :
    renderToc [("type".toList, OptVal.str "list_end".toList),
      ("level".toList, OptVal.int 0),
      ("align".toList, OptVal.str "".toList)] =
    litBytes "\n</div></div></td></tr></table>\n\n" := rfl

/-- `Toc` `list_end` floated: no table close. -/
theorem toc_list_end_float :
    renderToc [("type".toList, OptVal.str "list_end".toList),
      ("level".toList, OptVal.int 0),
      ("align".toList, OptVal.str "f<".toList)] =
    litBytes "\n</div></div>\n\n" := rfl

/-- `Toc` `item_start`: the margin is the heading level in `em`
    (`$this->min` is the constant 0), the anchor targets the
    heading's id, and the NUL-pair marker opens the strip span. -/
theorem toc_item_start_level :
    renderToc [("type".toList, OptVal.str "item_start".toList),
      ("id".toList, OptVal.str "toc1".toList),
      ("level".toList, OptVal.int 2),
      ("count".toList, OptVal.int 1)] =
    litBytes "\n\t<div style=\"margin-left: 2em;\"><a href=\"#toc1\">" ++
      tocStripDelim := rfl

/-- `Toc` `item_end`: the NUL-pair marker closes the strip span,
    then the anchor and div close. -/
theorem toc_item_end_shape :
    renderToc [("type".toList, OptVal.str "item_end".toList),
      ("level".toList, OptVal.int 2)] =
    tocStripDelim ++ litBytes "</a></div>" := rfl

/-- `Toc` with any other `type` falls through to the empty
    string. -/
theorem toc_other :
    renderToc [("type".toList, OptVal.str "other".toList)] = [] := rfl

end LeanFtml
