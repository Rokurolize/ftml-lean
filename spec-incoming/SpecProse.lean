/-
  SpecProse.lean — CONFIRMED live behaviors of the prose core, as Lean
  propositions about the family's mirror functions.

  Every statement below names the fresh sandbox probe page(s) that pin it
  immediately above the statement. All named pages are on
  sandbox-for-codex under the kept prefix `muse-probe-suspect-prose-`;
  their captures are in conformance-suspect-prose/captures.json of this
  tree, and each is valid=true, stable=true and saved_source_matches=true.
  Earlier programme pins are named as well where they independently
  settle the same behavior.

  Scope: this file adds no new mirror definitions. It only states
  propositions about the already-validated mirrors in ProseRules.lean,
  ProseRender.lean, MiddleRules.lean, ParaRules.lean, FrameRules.lean,
  InlineSimpleRules.lean and Inline3Rules.lean. The propositions are
  closed computations, so each proof is `rfl` in the kernel.
-/

import LeanFtml.ProseRender
import LeanFtml.MiddleRules
import LeanFtml.ParaRules
import LeanFtml.FrameRules
import LeanFtml.InlineSimpleRules
import LeanFtml.Inline3Rules

namespace LeanFtml

/-! ## Typography: the odd dash table is live behavior

    Probe muse-probe-suspect-prose-typo-dash3 (`a---b`) renders
    `<p>a&#8212;-b...` on the saved page, byte-for-byte the reference's
    output: the `--` statement fires first and the `---` statement is
    dead. Probe muse-probe-suspect-prose-typo-dash2 (`a--b`) renders
    `<p>a&#8212;b...`: a two-dash run is an em dash, not an en dash.
    Earlier pins: muse-probe-r2in3-typo-typo05, -typo07. -/

/-- `--` renders the em-dash entity (probe typo-dash2). -/
theorem suspect_typo_two_dashes_emdash :
    renderTypography [("char".toList, OptVal.str "--".toList)] =
      litBytes "&#8212;" := rfl

/-- `---` also renders the em-dash entity; the parse rule never
    produces this key because the two-dash pass consumed it first
    (probe typo-dash3). -/
theorem suspect_typo_three_dashes_emdash :
    renderTypography [("char".toList, OptVal.str "---".toList)] =
      litBytes "&#8212;" := rfl

/-- The literal `>>` that survives a rejected Clearfloat side marker
    is rendered as the guillemet entity (probe cf-double-side). -/
theorem suspect_typo_guillemet_render :
    renderTypography [("char".toList, OptVal.str ">>".toList)] =
      litBytes "&#187;" := rfl

/-! ## Typography: the money branch's bare `$` is an anchor, not a unit

    Probe muse-probe-suspect-prose-typo-dollar (`10 $`) renders a
    literal dollar, so the branch that looks like a money unit in the
    pattern text is dead on authored input. Prefilter always appends
    two newlines, so the anchor's "before a final newline" position
    is never adjacent to a digit-plus-space. Earlier pin: the
    moneyCore/anchorM analysis in Inline3Rules.lean. -/

/-- The bare `$` branch matches only the empty suffix or a lone
    trailing newline; Prefilter's two trailing newlines defeat it. -/
theorem suspect_typo_dollar_anchor_dead_under_padding :
    anchorM (litBytes "\n\n") = [] := rfl

/-- Probe muse-probe-suspect-prose-typo-unit-m (`10 m`) renders an
    NBSP before the single-letter metric unit. -/
theorem suspect_typo_metric_unit_is_nbsp :
    renderTypography [("char".toList, OptVal.str " ".toList)] =
      litBytes "&#160;" := rfl

/-! ## Prefilter: tab expansion is a plain four-space replacement

    Probe muse-probe-suspect-prose-pre-tab-code keeps four literal
    spaces inside a Code body (`a    b`), where Tighten's later fold
    cannot reach them. Earlier pins: muse-probe-r2link-concat-*
    tab-backslash-newline and the R2 frame probes. -/

/-- One tab becomes exactly four spaces, not a tab stop. -/
theorem suspect_prefilter_tab_four_spaces :
    expandTabs ['\t'] = [' ', ' ', ' ', ' '] := rfl

/-! ## Horiz and Separator: the run thresholds and asymmetric padding

    Probe muse-probe-suspect-prose-horiz-3 (`---`) renders the
    typography em-dash-plus-hyphen, so three dashes are not a rule;
    four or more are. Probe muse-probe-suspect-prose-sep-5 (`=====`)
    renders the separator div, so `{4,}` is open-ended. Earlier pins:
    muse-probe-refval-horiz-p04 and muse-probe-refval-separator-p01..p03. -/

/-- Three dashes do not form a Horiz token (probe horiz-3). -/
theorem suspect_horiz_rejects_three_dashes :
    lineScan 45 false 1 "Horiz" (litBytes "---\n") [] true 20 =
      (litBytes "---\n", []) := rfl

/-- Four dashes form one Horiz token with the rule's single leading
    newline (probe muse-probe-refval-horiz-p01). -/
theorem suspect_horiz_accepts_four_dashes :
    lineScan 45 false 1 "Horiz" (litBytes "----\n") [] true 20 =
      (litBytes "\n" ++ phBytes 0 ++ litBytes "\n\n\n",
        [{ rule := "Horiz", opts := [] }]) := rfl

/-- Five equals signs form one Separator token (probe sep-5). -/
theorem suspect_separator_accepts_five :
    lineScan 61 false 1 "Separator" (litBytes "=====\n") [] true 20 =
      (litBytes "\n" ++ phBytes 0 ++ litBytes "\n\n\n",
        [{ rule := "Separator", opts := [] }]) := rfl

/-- Horiz and Separator share the constant `<hr />` / separator div
    renderers; the separator div preserves the literal `display: none:`
    typo (probes mid-horiz-br, para-sep, sep-5). -/
theorem suspect_horiz_render :
    renderHoriz = litBytes "<hr />\n" := rfl

theorem suspect_separator_render :
    renderSeparator =
      litBytes "<div class=\"content-separator\" style=\"display: none:\"></div>\n" := rfl

/-! ## Clearfloat: the optional side group is a single byte

    Probe muse-probe-suspect-prose-cf-double-side (`~~~~>>`) does not
    match Clearfloat; the trailing `>>` falls through to Typography
    as a guillemet. Probe muse-probe-suspect-prose-mid-clear-br
    (`a _\n~~~~\nb`) shows the rule's two leading newlines against
    Horiz's one (probe mid-horiz-br). Earlier pins:
    muse-probe-refval-clearfloat-p09 and -p18. -/

/-- A doubled side marker defeats the whole match. -/
theorem suspect_clearfloat_rejects_doubled_side :
    lineScan 126 true 2 "Clearfloat" (litBytes "~~~~>>\n") [] true 20 =
      (litBytes "~~~~>>\n", []) := rfl

/-- With no side byte, the stored option is PHP null and the renderer
    clears both (probe mid-clear-br). -/
theorem suspect_clearfloat_no_side_clears_both :
    renderClearfloat [("side".toList, OptVal.null)] =
      litBytes "<div style=\"clear:both; height: 0px; font-size: 1px\"></div>\n" := rfl

/-! ## Center: the body is trimmed, but a trailing `=` is kept

    Probe muse-probe-suspect-prose-ctr-trail-eq (`x\n= hello =\ny`)
    renders the centered line `hello =`, not `hello`. Earlier pin:
    muse-probe-refval-center-p05. -/

/-- The Center line-anchored pattern keeps a trailing equals sign in
    its captured body. -/
theorem suspect_center_keeps_trailing_equals :
    centerScan (litBytes "= hello =\n") [] true 20 =
      ([10, 10] ++ phBytes 0 ++ litBytes "hello =" ++ phBytes 1 ++
        [10, 10] ++ litBytes "\n",
        [{ rule := "Center",
           opts := [("type".toList, OptVal.str "start".toList)] },
         { rule := "Center",
           opts := [("type".toList, OptVal.str "end".toList)] }]) := rfl

theorem suspect_center_end_render :
    renderCenter [("type".toList, OptVal.str "end".toList)] =
      litBytes "</p>\n" := rfl

/-! ## Break: a literal single space before the underscore

    Probe muse-probe-suspect-prose-brk-two-space (`a  _\nb`) still
    fires on the last space, leaving the earlier one in Stage 1;
    live's libtidy strips it at Stage 2, a frame-level surface.
    Earlier pin: muse-probe-refval-break-p06. -/

/-- The Break pattern is the literal three bytes space, underscore,
    newline; a second space is not part of the match. -/
theorem suspect_break_two_spaces_claims_once :
    breakScan (litBytes "a  _\nb\n") [] 20 =
      (litBytes "a " ++ phBytes 0 ++ litBytes "b\n",
        [{ rule := "Break", opts := [] }]) := rfl

theorem suspect_break_render :
    renderBreak = litBytes "<br />\n" := rfl

/-! ## Paragraph: a run opening with a separator stays unwrapped

    Probe muse-probe-suspect-prose-para-sep (`====\nx`) renders a bare
    separator div followed by a paragraph for x, with no `<p>` around
    the div. Earlier pins: muse-probe-refval-separator-p01..p03. -/

/-- The skip list's separator entry suppresses the Paragraph wrapper. -/
theorem suspect_separator_run_unwrapped :
    paraProcess (phBytes 0 ++ litBytes "x\n\n")
        [{ rule := "Separator", opts := [] }] [] [] =
      (phBytes 0 ++ litBytes "x\n\n",
        [{ rule := "Separator", opts := [] }]) := rfl

theorem suspect_paragraph_end_render :
    renderParagraph [("type".toList, OptVal.str "end".toList)] =
      litBytes "</p>\n\n" := rfl

/-! ## Divprefilter and Divalign: bare prefix and alternation order

    Probe muse-probe-suspect-prose-dp-bare-prefix (`[[/div]] [[divx]]`)
    collapses the space even though `[[divx]]` is not a valid opener;
    probe muse-probe-suspect-prose-da-eqeq (`[[==]]` ... `[[/==]]`)
    forms a justify div despite `=` preceding `==` in the alternation.
    Earlier pins: muse-probe-refval-divprefilter-p14,
    muse-probe-refval-divalign-p04. Both rule bodies are byte-unchanged
    in this family, so the corresponding mirrors need no new theorem;
    the render interpolation is the one constant worth pinning. -/

theorem suspect_divalign_start_render :
    renderDivalign [("type".toList, OptVal.str "start".toList),
      ("align".toList, OptVal.str "justify".toList)] =
      litBytes "<div style=\"text-align: justify;\">" := rfl

/-! ## Delimiter: unreachable from authored source

    Probe muse-probe-suspect-prose-delim-utf8 (`ÿ`) renders the literal
    character: U+00FF is UTF-8 bytes C3 BF, never the lone FF byte the
    parse rule searches for. Lean's text alphabet cannot represent FF
    at all, so the mirror is the identity on every state. Earlier pin:
    the `delimiterRule_id` theorem in FrameRules.lean. -/

theorem suspect_delimiter_identity (st : ParseState) :
    delimiterRule st = st := rfl

theorem suspect_delimiter_renders_verbatim :
    renderDelimiter [("text".toList, OptVal.str "ab".toList)] =
      litBytes "ab" := rfl

/-! ## Tighten: tokenized bodies survive the whitespace fold

    Probe muse-probe-suspect-prose-tight-code-ws (`a  b` inside
    `[[code]]`) keeps both spaces, because Tighten folds the residual
    source only, after every other rule has replaced its body with a
    placeholder. Earlier pin: the R2 INLINE3 adhoc case adh02. -/

/-- The fold helper collapses a residual run; a Code body is not in
    the residual source and is therefore outside this function's
    input. The worked theorem below is the fold on residual text. -/
theorem suspect_tighten_folds_residual_run :
    collapsePad (litBytes "a  b") = litBytes "a b" := rfl

end LeanFtml
