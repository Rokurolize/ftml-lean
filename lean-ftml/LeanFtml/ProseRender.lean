/-
  LeanFtml.ProseRender — R4.2 stage entry points and theorems for the
  prose-core Xhtml render mirror.

  The twelve render functions live in `LeanFtml/ProseRules.lean`.
  The dispatcher is `LeanFtml.dispatchRenderR41` in
  `LeanFtml/NotesRender.lean`, extended in this stage to all eighteen
  mirrored rules (the six R4.1 NOTES rules plus the twelve prose-core
  rules); the `R42` entry points below share that dispatch, exactly as
  the R4.1 entry points do, so the two stages can never disagree
  about a rule both mirror.

  The end-to-end entry point runs the R4.2 stage prefix
  `LeanFtml.pipelineR42` (the full pipeline's first fifty-four rules,
  ending at Paragraph, the family's last rule in pipeline order).
-/

import LeanFtml.NotesRender
import LeanFtml.ProseRules
import LeanFtml.Pipeline

namespace LeanFtml

/-! ## R4.2 dispatcher and entry points -/

/-- The combined dispatcher for the eighteen render rules mirrored
    through R4.2 (definitionally `dispatchRenderR41`, extended in
    this stage; see its doc comment in `LeanFtml/NotesRender.lean`). -/
def dispatchRenderR42 :
    RenderRuleId → RenderConf → DocState → OptMap → List Nat :=
  dispatchRenderR41

/-- Render from an arbitrary token lookup function under the R4.2
    mirrored render rules (used directly by the conformance driver on
    raw `state-restricted.php` batch states whose token keys are
    cumulative process-global ids). -/
def renderWithR42 (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) : RenderOutcome :=
  renderWith dispatchRenderR42 lookup conf work doc

/-- Render an R3 `ParseState` (0-indexed `st.tokens`) under the R4.2
    mirrored render rules. -/
def renderStateR42 (conf : RenderConf) (st : ParseState) : RenderOutcome :=
  renderWithR42 (fun k => st.tokens[k]?) conf st.work st.doc

/-- End-to-end Lean parse+render on top of the R4.2 stage prefix
    (`convCRLF` → `pipelineR42` → `renderStateR42`). -/
def renderProseE2E (conf : RenderConf) (tags : List (List Char))
    (source : List Char) : RenderOutcome :=
  let st0 : ParseState :=
    { ParseState.ofSource (convCRLF source) with doc.page.tags := tags }
  let st := runRules pipelineR42 st0
  renderStateR42 conf st

/-! ## Theorems: per-rule characterizations on concrete option maps

    Each theorem pins one branch of one mirrored `token()` body
    against the exact byte string the reference produces. Proofs are
    by computation (`rfl`): the option maps are concrete, so the
    mirrors reduce in the kernel. -/

/-- `Paragraph` `start` renders `<p>` (harness `css` conf is empty). -/
theorem paragraph_start :
    renderParagraph [("type".toList, OptVal.str "start".toList)] =
      litBytes "<p>" := rfl

/-- `Paragraph` `end` renders `</p>` followed by two LFs. -/
theorem paragraph_end :
    renderParagraph [("type".toList, OptVal.str "end".toList)] =
      litBytes "</p>\n\n" := rfl

/-- `Paragraph` with any other `type` falls through to the empty
    string (PHP `null` concatenation). -/
theorem paragraph_other :
    renderParagraph [("type".toList, OptVal.str "other".toList)] = [] := rfl

/-- `Newline` renders the constant `<br />\n`. -/
theorem newline_const :
    renderNewline = litBytes "<br />\n" := rfl

/-- `Break` renders the constant `<br />\n` (harness `css` conf is
    empty). -/
theorem break_const :
    renderBreak = litBytes "<br />\n" := rfl

/-- `Center` `start` renders the centered-paragraph opener. -/
theorem center_start :
    renderCenter [("type".toList, OptVal.str "start".toList)] =
      litBytes "<p style=\"text-align: center;\">" := rfl

/-- `Center` `end` renders `</p>` followed by one LF (the REFVAL
    correction). -/
theorem center_end :
    renderCenter [("type".toList, OptVal.str "end".toList)] =
      litBytes "</p>\n" := rfl

/-- `Center` with any other `type` falls through to the empty string. -/
theorem center_other :
    renderCenter [("type".toList, OptVal.str "other".toList)] = [] := rfl

/-- `Horiz` renders the constant `<hr />\n` (harness `css` conf is
    empty). -/
theorem horiz_const :
    renderHoriz = litBytes "<hr />\n" := rfl

/-- `Separator` renders the constant corrected separator div. -/
theorem separator_const :
    renderSeparator =
      litBytes "<div class=\"content-separator\" style=\"display: none:\"></div>\n" := rfl

/-- `Clearfloat` with `side = ">"` clears right. -/
theorem clearfloat_right :
    renderClearfloat [("side".toList, OptVal.str ">".toList)] =
      litBytes "<div style=\"clear:right; height: 0px; font-size: 1px\"></div>\n" := rfl

/-- `Clearfloat` with `side = "<"` clears left. -/
theorem clearfloat_left :
    renderClearfloat [("side".toList, OptVal.str "<".toList)] =
      litBytes "<div style=\"clear:left; height: 0px; font-size: 1px\"></div>\n" := rfl

/-- `Clearfloat` with the empty `side` the parse rule stores when its
    optional direction group does not participate clears both. -/
theorem clearfloat_both_empty :
    renderClearfloat [("side".toList, OptVal.str "".toList)] =
      litBytes "<div style=\"clear:both; height: 0px; font-size: 1px\"></div>\n" := rfl

/-- `Clearfloat` with no `side` option at all clears both. -/
theorem clearfloat_both_absent :
    renderClearfloat [] =
      litBytes "<div style=\"clear:both; height: 0px; font-size: 1px\"></div>\n" := rfl

/-- `Blockquote` `start` renders `<blockquote>` (harness `css` conf
    is empty; the `level` option is never read). -/
theorem blockquote_start :
    renderBlockquote [("type".toList, OptVal.str "start".toList),
      ("level".toList, OptVal.int 2)] =
      litBytes "<blockquote>" := rfl

/-- `Blockquote` `end` renders `</blockquote>` followed by one LF. -/
theorem blockquote_end :
    renderBlockquote [("type".toList, OptVal.str "end".toList),
      ("level".toList, OptVal.int 2)] =
      litBytes "</blockquote>\n" := rfl

/-- `Blockquote` with any other `type` falls through to the empty
    string. -/
theorem blockquote_other :
    renderBlockquote [("type".toList, OptVal.str "other".toList)] = [] := rfl

/-- `Note` `start` renders the wiki-note div opener. -/
theorem note_start :
    renderNote [("type".toList, OptVal.str "start".toList)] =
      litBytes "<div class=\"wiki-note\">" := rfl

/-- `Note` `end` renders `</div>`. -/
theorem note_end :
    renderNote [("type".toList, OptVal.str "end".toList)] =
      litBytes "</div>" := rfl

/-- `Note` with any other `type` falls through to the empty string. -/
theorem note_other :
    renderNote [("type".toList, OptVal.str "other".toList)] = [] := rfl

/-- `Divalign` `start` interpolates the raw `align` option bytes. -/
theorem divalign_start :
    renderDivalign [("type".toList, OptVal.str "start".toList),
      ("align".toList, OptVal.str "right".toList)] =
      litBytes "<div style=\"text-align: right;\">" := rfl

/-- `Divalign` `end` renders `</div>`. -/
theorem divalign_end :
    renderDivalign [("type".toList, OptVal.str "end".toList)] =
      litBytes "</div>" := rfl

/-- `Divalign` with any other `type` falls through to the empty
    string. -/
theorem divalign_other :
    renderDivalign [("type".toList, OptVal.str "other".toList),
      ("align".toList, OptVal.str "right".toList)] = [] := rfl

/-- `Comment` renders the constant empty string. -/
theorem comment_const :
    renderComment = [] := rfl

/-- `Delimiter` returns the token's `text` option verbatim; the parse
    rule stores the delimiter byte itself there. -/
theorem delimiter_text_bytes :
    renderDelimiter [("text".toList, OptVal.bytes [255])] = [255] := rfl

/-- `Delimiter` on a string `text` option returns its UTF-8 bytes. -/
theorem delimiter_text_str :
    renderDelimiter [("text".toList, OptVal.str "ab".toList)] =
      litBytes "ab" := rfl

end LeanFtml
