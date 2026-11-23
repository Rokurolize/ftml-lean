/-
  LeanFtml.NotesRender — R4.1 pilot mirror of the NOTES family's six
  Xhtml render rules (Footnote, Footnoteitem, Footnoteblock, Bibitem,
  Bibliography, Bibcite), layered on top of the R3.6 parse mirror
  (`LeanFtml.NotesRules`) and the R4 render core (`LeanFtml.RenderCore`).

  Modelled directly from:
    ref-php/text-wiki/Text/Wiki/Render/Xhtml/{Footnote,Footnoteitem,
      Footnoteblock,Bibitem,Bibliography,Bibcite}.php
  together with `conformance-refphp/R2-NOTES.md`,
  `conformance-refphp/notes/CORRECTION-FNB24.md`, and `REPORT-R36.md`.

  ## Render-state dependencies (verified in ../R4-SCOPE.md)

  * Footnote: reads token `id` and `conf.footnoteIdPrefix`. (The PHP
    rule reads `Text_Wiki_Parse_Math::$equationsArray` into an unused
    local `$refs`; no observable effect.)
  * Footnoteitem: handles `type == "parabreak"` → `"\n"` (2026-11-21
    fnb24 correction), `type == "start"` (reads `doc.footnotes[id - 1]`
    to emit the separator space `' '` iff the token-aware empty-Raw
    stripped and trimmed visible body is non-empty — REFCORR9 — plus
    `conf.footnoteIdPrefix`), and `type == "end"` → `"</div>"`.
  * Footnoteblock: reads `doc.footnotes` (renders empty when no
    footnotes were collected); for `type == "start"`, defaults a
    missing/null title to `"Footnotes"`, omits `<div class="title">`
    when title is `""`, and escapes non-empty titles with PHP 8.5's
    `ENT_COMPAT` (`htmlSpecialCharsCompat`, keeping `'` raw and
    returning `""` on invalid UTF-8).
  * Bibitem: reads `id`, `empty` (PHP `empty()` semantics: separator
    `' '` iff empty flag is falsy/absent), and `conf.bibitemIdPrefix`.
  * Bibliography: handles `type == "nl"` → `"\n"`, `type == "start"`
    (default title `"Bibliography"`, omits title div on `""`, escapes
    non-empty titles with `ENT_COMPAT` (`htmlSpecialCharsCompat`,
    keeping `'` raw; corrected 2026-11-21 by the R4-CORR lane after
    live probe `muse-probe-r4c1-bib-title-apos` settled that the
    fossil's bare `htmlspecialchars` — PHP 8.5's default
    `ENT_QUOTES|ENT_SUBSTITUTE` — was a PHP-version artifact, the same
    defect the R2-notes stage corrected in `Footnoteblock`), and
    `type == "end"` → `"</div>"`.
  * Bibcite: reads token `label`, looks it up in `doc.bibitemIds`
    (`vars['bibitemIds']`), emitting the inline error span when
    undefined and the scrollToReference anchor with
    `conf.bibitemIdPrefix` when defined.
-/

import LeanFtml.TokenState
import LeanFtml.NotesRules
import LeanFtml.RenderCore
import LeanFtml.ProseRules
import LeanFtml.InlineSimpleRules
import LeanFtml.RawHeadingRules
import LeanFtml.ListTableRules
import LeanFtml.InteractiveRules
import LeanFtml.CodeEmbedRules
import LeanFtml.ServingRules
import LeanFtml.Pipeline

namespace LeanFtml

/-! ## Bibliography id lookup (dual of `NotesRules.bibSet`) -/

/-- Look up a byte-string label in `DocState.bibitemIds`
    (`vars['bibitemIds']`). Exact dual of `NotesRules.bibSet`. -/
def bibLookup : List (List Nat × Nat) → List Nat → Option Nat
  | [], _ => none
  | (k, v) :: rest, key => if k == key then some v else bibLookup rest key

/-! ## Helper: option `type` comparison -/

/-- Test whether the token's `"type"` option equals the given ASCII byte string. -/
def optTypeIs (opts : OptMap) (expected : List Nat) : Bool :=
  optStrBytes opts "type".toList == expected

/-! ## The six NOTES Xhtml render rules -/

/-- Mirror of `Text_Wiki_Render_Xhtml_Footnote::token`. -/
def renderFootnote (conf : RenderConf) (opts : OptMap) : List Nat :=
  let idBytes := optStrBytes opts "id".toList
  let pfx := conf.footnoteIdPrefix
  litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ pfx ++ idBytes ++
    litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
    litBytes " onclick=\"WIKIDOT.page.utils." ++
    litBytes "scrollToReference('footnote-" ++
    pfx ++ idBytes ++ litBytes "')\">" ++ idBytes ++ litBytes "</a></sup>"

/-! ## REFCORR9 (C-R5B-R3-1): token-aware footnote separator -/

/-- Placeholder ids referenced by a stored footnote body. Only the byte
    pattern \xFF<digits>\xFF is scanned; the token table is read only. -/
private def footnotePhIds (bs : List Nat) : List Nat :=
  go bs bs.length
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | 0xFF :: rest, fuel + 1 =>
        let (digits, tail) := rest.span (fun b => 48 <= b && b <= 57)
        match tail with
        | 0xFF :: rest2 =>
            (if digits.isEmpty then [] else
              [digits.foldl (fun a b => a * 10 + (b - 48)) 0]) ++ go rest2 fuel
        | _ => go rest fuel
    | _ :: rest, fuel + 1 => go rest fuel

/-- Materialize just the token slots the body references from the render-phase
    lookup, so the existing `stripEmptyRawPhNotes` helper is reused unchanged.
    Unreferenced slots get the default (non-Raw) entry; no token is added to or
    removed from the compared parse state. -/
private def footnoteToks (lookup : Nat → Option TokenEntry)
    (body : List Nat) : List TokenEntry :=
  let bound := (footnotePhIds body).foldl max 0 + 1
  (List.range bound).map (fun k => (lookup k).getD { rule := "", opts := [] })

/-- The visible footnote body: empty-Raw placeholders stripped, then trimmed.
    This is the same computation `NotesRules.bibitemProcess` uses for its
    `empty` flag and the adopted `Footnoteitem.php` uses for its separator. -/
def footnoteVisibleBody (lookup : Nat → Option TokenEntry) (body : List Nat) : List Nat :=
  trimBytes (stripEmptyRawPhNotes body (footnoteToks lookup body))

/- REFCORR10 — the general live separator rule. The separator space follows
   the back-reference only when the visible body (empty-Raw stripped, before
   any trim) has a non-whitespace byte before its first authored LF. A body
   whose first line is empty starts with a break and gets no space; literal
   and NBSP first-line text keeps it. Whitespace is PHP trim's byte set, so
   NBSP counts as visible text. This replaces the REFCORR9 `trim non-empty`
   test, which wrongly spaced a leading break followed by literal text. -/
def footnoteLeadVisible (lookup : Nat → Option TokenEntry) (body : List Nat) : List Nat :=
  let vis := stripEmptyRawPhNotes body (footnoteToks lookup body)
  -- REFCORR13 C-R5F-R3-3: once the single-break branch keeps a discarded C0
  -- byte as its inline break witness, the separator must not count that byte
  -- as visible text. Live excludes the whole discarded set D = [\x00-\x08
  -- \x0B\x0C\x0E-\x1A\x1C-\x1F] plus TAB/LF/CR/space, and keeps ESC 0x1B
  -- verbatim (C-R5E-P4-1). A visible lead byte is therefore ESC or any byte
  -- above 0x20; this mirrors Footnoteitem.php's revised separator class and
  -- removes the stray separator space on the SOH witness R3E-03.
  (vis.takeWhile (fun b => b != 10)).filter
    (fun b => b == 27 || b > 32)

/-- Mirror of `Text_Wiki_Render_Xhtml_Footnoteitem::token`. -/
def renderFootnoteitem (conf : RenderConf) (doc : DocState) (opts : OptMap)
    (lookup : Nat → Option TokenEntry := fun _ => none) : List Nat :=
  if optTypeIs opts (litBytes "parabreak") then
    [10]
  else if optTypeIs opts (litBytes "start") then
    let idBytes := optStrBytes opts "id".toList
    let idNat := (optNat opts "id".toList).getD 0
    let pfx := conf.footnoteIdPrefix
    let body := if idNat > 0 then (doc.footnotes[idNat - 1]?).getD [] else []
    let sep := if (footnoteLeadVisible lookup body).isEmpty then [] else [32]
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ pfx ++ idBytes ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++
      pfx ++ idBytes ++ litBytes "')\">" ++ idBytes ++ litBytes "</a>." ++ sep
  else if optTypeIs opts (litBytes "end") then
    litBytes "</div>"
  else
    []

/-- Mirror of `Text_Wiki_Render_Xhtml_Footnoteblock::token`. -/
def renderFootnoteblock (doc : DocState) (opts : OptMap) : List Nat :=
  if doc.footnotes.isEmpty then
    []
  else if optTypeIs opts (litBytes "start") then
    let title := match omGet opts "title".toList with
      | none => litBytes "Footnotes"
      | some .null => litBytes "Footnotes"
      | some v => renderOptValBytes v
    let head := litBytes "<div class=\"footnotes-footer\">"
    if title.isEmpty then head
    else head ++ litBytes "<div class=\"title\">" ++
      htmlSpecialCharsCompat title ++ litBytes "</div>"
  else if optTypeIs opts (litBytes "end") then
    litBytes "</div>"
  else
    []

/-- Mirror of `Text_Wiki_Render_Xhtml_Bibitem::token`. -/
def renderBibitem (conf : RenderConf) (opts : OptMap) : List Nat :=
  if optTypeIs opts (litBytes "start") then
    let pfx := conf.bibitemIdPrefix
    let idBytes := optStrBytes opts "id".toList
    let sep := if phpEmptyOpt (omGet opts "empty".toList) then [32] else []
    litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ pfx ++ idBytes ++
      litBytes "\">" ++ idBytes ++ [46] ++ sep
  else if optTypeIs opts (litBytes "end") then
    litBytes "</div>"
  else
    []

/-- Mirror of `Text_Wiki_Render_Xhtml_Bibliography::token`. -/
def renderBibliography (opts : OptMap) : List Nat :=
  if optTypeIs opts (litBytes "nl") then
    [10]
  else if optTypeIs opts (litBytes "start") then
    let title := match omGet opts "title".toList with
      | none => litBytes "Bibliography"
      | some .null => litBytes "Bibliography"
      | some v => renderOptValBytes v
    let head := litBytes "<div class=\"bibitems\">"
    if title.isEmpty then head
    else head ++ litBytes "<div class=\"title\">" ++
      htmlSpecialCharsCompat title ++ litBytes "</div>"
  else if optTypeIs opts (litBytes "end") then
    litBytes "</div>"
  else
    []

/-- Mirror of `Text_Wiki_Render_Xhtml_Bibcite::token`. -/
def renderBibcite (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    List Nat :=
  let label := optStrBytes opts "label".toList
  let pfx := conf.bibitemIdPrefix
  match bibLookup doc.bibitemIds label with
  | none =>
      litBytes "<span class=\"error-inline\">" ++
        litBytes "Bibliography item <em>" ++
        label ++ litBytes "</em> not found.</span>"
  | some id =>
      let idBytes := natBytes id
      litBytes "<a href=\"javascript:;\" class=\"bibcite\" " ++
        litBytes "id=\"bibcite-" ++ idBytes ++
        litBytes "\" onclick=\"WIKIDOT.page.utils." ++
        litBytes "scrollToReference('bibitem-" ++
        pfx ++ idBytes ++ litBytes "')\">" ++ idBytes ++ litBytes "</a>"

/-! ## R4.1 dispatcher and entry points -/

/-- Dispatch a mirrored `RenderRuleId` to its Xhtml render function.
    The R4.1 pilot covered the six NOTES rules; R4.2 extends the same
    dispatcher with the twelve prose-core rules of
    `LeanFtml/ProseRules.lean`, R4.3 with the fourteen
    inline-simple and typography rules of
    `LeanFtml/InlineSimpleRules.lean`, R4.4 with the five
    raw/form and heading/toc rules of
    `LeanFtml/RawHeadingRules.lean`, and R4.5 with the four list
    and table rules of `LeanFtml/ListTableRules.lean`, R4.6
    with the eleven interactive and link-pure rules of
    `LeanFtml/InteractiveRules.lean`, R4.7 with the Code
    and Embed rules of `LeanFtml/CodeEmbedRules.lean`, and
    R4.8 with the seven serving-layer and stubbed rules of
    `LeanFtml/ServingRules.lean`, so this is the combined
    dispatcher for all sixty-one rules mirrored in the tier
    (the later stages' entry points in
    `LeanFtml/ProseRender.lean`, `LeanFtml/InlineRender.lean`,
    `LeanFtml/RawHeadingRender.lean`,
    `LeanFtml/ListTableRender.lean`,
    `LeanFtml/InteractiveRender.lean`,
    `LeanFtml/CodeEmbedRender.lean`, and
    `LeanFtml/ServingRender.lean` are named for their stages
    but share this dispatch). -/
def dispatchRenderR41 :
    RenderRuleId → RenderConf → DocState → OptMap → List Nat
  | .footnote, conf, _, opts => renderFootnote conf opts
  | .footnoteitem, conf, doc, opts => renderFootnoteitem conf doc opts
  | .footnoteblock, _, doc, opts => renderFootnoteblock doc opts
  | .bibitem, conf, _, opts => renderBibitem conf opts
  | .bibliography, _, _, opts => renderBibliography opts
  | .bibcite, conf, doc, opts => renderBibcite conf doc opts
  | .paragraph, _, _, opts => renderParagraph opts
  | .newline, _, _, _ => renderNewline
  | .break, _, _, _ => renderBreak
  | .center, _, _, opts => renderCenter opts
  | .horiz, _, _, _ => renderHoriz
  | .separator, _, _, _ => renderSeparator
  | .clearfloat, _, _, opts => renderClearfloat opts
  | .blockquote, _, _, opts => renderBlockquote opts
  | .note, _, _, opts => renderNote opts
  | .divalign, _, _, opts => renderDivalign opts
  | .comment, _, _, _ => renderComment
  | .delimiter, _, _, opts => renderDelimiter opts
  | .url, _, _, opts => renderUrl opts
  | .email, _, _, opts => renderEmail opts
  | .mathinline, _, _, opts => renderMathinline opts
  | .interwiki, _, _, opts => renderInterwiki opts
  | .colortext, _, _, opts => renderColortext opts
  | .strong, _, _, opts => renderStrong opts
  | .emphasis, _, _, opts => renderEmphasis opts
  | .underline, _, _, opts => renderUnderline opts
  | .strikethrough, _, _, opts => renderStrikethrough opts
  | .tt, _, _, opts => renderTt opts
  | .superscript, _, _, opts => renderSuperscript opts
  | .subscript, _, _, opts => renderSubscript opts
  | .typography, _, _, opts => renderTypography opts
  | .tighten, _, _, _ => renderTighten
  | .raw, _, _, opts => renderRaw opts
  | .rawold, _, _, opts => renderRawold opts
  | .form, _, _, opts => renderForm opts
  | .heading, _, _, opts => renderHeading opts
  | .toc, _, _, opts => renderToc opts
  | .list, _, _, opts => renderList opts
  | .deflist, _, _, opts => renderDeflist opts
  | .table, _, _, opts => renderTable opts
  | .tableadv, _, _, opts => renderTableadv opts
  | .equationreference, conf, doc, opts => renderEquationreference conf doc opts
  | .anchor, _, _, opts => renderAnchor opts
  | .collapsible, _, _, opts => renderCollapsible opts
  | .tabview, _, _, opts => renderTabview opts
  | .button, _, _, opts => renderButton opts
  | .iframe, _, _, opts => renderIframe opts
  | .date, _, _, opts => renderDate opts
  | .file, _, _, opts => renderFile opts
  | .size, _, _, opts => renderSize opts
  | .span, _, _, opts => renderSpan opts
  | .div, _, _, opts => renderDiv opts
  | .code, _, _, opts => renderCode opts
  | .embed, _, _, opts => renderEmbed opts
  | .freelink, _, _, opts => renderFreelink opts
  | .module, _, _, opts => renderModule opts
  | .module654, _, _, opts => renderModule opts
  | .math, _, _, opts => renderMath opts
  | .image, _, _, opts => renderImage opts
  | .gallery, _, _, opts => renderGallery opts
  | .user, _, _, opts => renderUser opts

/-- REFCORR9: the R4.1 dispatcher with the render-phase token lookup threaded
    into the one rule that now needs it. Every other rule delegates unchanged,
    so the dispatcher type, token table shape and DocState are untouched. -/
def dispatchRenderR41TokenAware (lookup : Nat → Option TokenEntry) :
    RenderRuleId → RenderConf → DocState → OptMap → List Nat
  | .footnoteitem, conf, doc, opts => renderFootnoteitem conf doc opts lookup
  | rid, conf, doc, opts => dispatchRenderR41 rid conf doc opts

/-- Render from an arbitrary token lookup function (used directly by
    the conformance driver on raw `state-restricted.php` batch states
    whose token keys are cumulative process-global ids). -/
def renderWithR41 (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) : RenderOutcome :=
  renderWith (dispatchRenderR41TokenAware lookup) lookup conf work doc

/-- Render an R3 `ParseState` (0-indexed `st.tokens`) under the R4.1
    mirrored render rules. -/
def renderStateR41 (conf : RenderConf) (st : ParseState) : RenderOutcome :=
  renderWithR41 (fun k => st.tokens[k]?) conf st.work st.doc

/-- End-to-end Lean parse+render on top of the R3.6 parse pipeline
    (`convCRLF` → `pipelineR36` → `renderStateR41`). -/
def renderNotesE2E (conf : RenderConf) (tags : List (List Char))
    (source : List Char) : RenderOutcome :=
  let st0 : ParseState :=
    { ParseState.ofSource (convCRLF source) with doc.page.tags := tags }
  let st := runRules pipelineR36 st0
  renderStateR41 conf st

/-! ## Theorems: algebraic characterizations and parse→render bridges -/

/-- Parse→render bridge (last-registration-wins): after `NotesRules.bibSet`
    registers `(k, v)` in `bibitemIds`, `bibLookup` resolves `k` to `some v`. -/
theorem bibLookup_bibSet_same (m : List (List Nat × Nat)) (k : List Nat) (v : Nat) :
    bibLookup (bibSet m k v) k = some v := by
  induction m with
  | nil => simp [bibSet, bibLookup]
  | cons kv rest ih =>
      rcases kv with ⟨k', v'⟩
      by_cases h : k' == k
      · simp [bibSet, bibLookup, h]
      · simp [bibSet, bibLookup, h, ih]

/-- Parse→render bridge (label independence): registering `(k, v)` via
    `NotesRules.bibSet` does not alter `bibLookup` for any distinct label `k'`. -/
theorem bibLookup_bibSet_other (m : List (List Nat × Nat)) (k k' : List Nat)
    (v : Nat) (hne : (k == k') = false) :
    bibLookup (bibSet m k v) k' = bibLookup m k' := by
  induction m with
  | nil => simp [bibSet, bibLookup, hne]
  | cons kv rest ih =>
      rcases kv with ⟨k0, v0⟩
      by_cases h0 : k0 == k
      · have hk0 : (k0 == k') = false := by
          have heq : k0 = k := eq_of_beq h0
          subst heq
          exact hne
        simp [bibSet, bibLookup, h0, hk0, hne]
      · by_cases h1 : k0 == k'
        · simp [bibSet, bibLookup, h0, h1]
        · simp [bibSet, bibLookup, h0, h1, ih]

/-- `Footnote` renders the superscript scrollToReference anchor with `idPrefix`. -/
theorem footnote_spec (conf : RenderConf) (id : Nat) :
    renderFootnote conf [("id".toList, OptVal.int (id : Int))] =
    litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ conf.footnoteIdPrefix ++
      natBytes id ++
      litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
      litBytes " onclick=\"WIKIDOT.page.utils." ++
      litBytes "scrollToReference('footnote-" ++
      conf.footnoteIdPrefix ++ natBytes id ++ litBytes "')\">" ++
      natBytes id ++ litBytes "</a></sup>" := by
  have hnotlt : ¬ ((id : Int) < 0) := Int.not_lt.mpr (Int.natCast_nonneg id)
  simp [renderFootnote, optStrBytes, omGet, renderOptValBytes, intBytes, hnotlt]

/-- `Footnoteitem`'s `parabreak` token (2026-11-21 fnb24 correction) always
    renders as a single literal LF byte (`0x0A`), regardless of config or doc state. -/
theorem footnoteitem_parabreak (conf : RenderConf) (doc : DocState)
    (lookup : Nat → Option TokenEntry := fun _ => none) :
    renderFootnoteitem conf doc [("type".toList, OptVal.str "parabreak".toList)] lookup = [10] := by
  rfl

/-- `Footnoteitem`'s `end` token always renders `</div>`. -/
theorem footnoteitem_end (conf : RenderConf) (doc : DocState)
    (lookup : Nat → Option TokenEntry := fun _ => none) :
    renderFootnoteitem conf doc [("type".toList, OptVal.str "end".toList)] lookup =
      litBytes "</div>" := by
  rfl

/-- Helper facts for concrete `"type"` option checks (by `rfl`). -/
private theorem optTypeIs_start_parabreak (rest : OptMap) :
    optTypeIs ((['t', 'y', 'p', 'e'], OptVal.str ['s', 't', 'a', 'r', 't']) :: rest)
      (litBytes "parabreak") = false := rfl

private theorem optTypeIs_start_start (rest : OptMap) :
    optTypeIs ((['t', 'y', 'p', 'e'], OptVal.str ['s', 't', 'a', 'r', 't']) :: rest)
      (litBytes "start") = true := rfl

private theorem optTypeIs_end_start (rest : OptMap) :
    optTypeIs ((['t', 'y', 'p', 'e'], OptVal.str ['e', 'n', 'd']) :: rest)
      (litBytes "start") = false := rfl

private theorem optTypeIs_end_end (rest : OptMap) :
    optTypeIs ((['t', 'y', 'p', 'e'], OptVal.str ['e', 'n', 'd']) :: rest)
      (litBytes "end") = true := rfl

private theorem litBytes_Footnotes_ne_nil : litBytes "Footnotes" ≠ [] := by decide

/-- `Footnoteitem` `start` omits the trailing space after `.` whenever the
    stored note body at `doc.footnotes[id - 1]` is empty (or out of range). -/
theorem footnoteitem_start_empty_body (conf : RenderConf) (doc : DocState)
    (id : Nat) (hpos : id > 0)
    (hempty : (footnoteLeadVisible (fun _ => none)
      ((doc.footnotes[id - 1]?).getD [])).isEmpty = true) :
    renderFootnoteitem conf doc
      [("type".toList, OptVal.str "start".toList),
       ("id".toList, OptVal.int (id : Int))] =
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

/-- `Footnoteitem` `start` appends a single space after `.` whenever the
    stored note body at `doc.footnotes[id - 1]` is non-empty. -/
theorem footnoteitem_start_nonempty_body (conf : RenderConf) (doc : DocState)
    (id : Nat) (hpos : id > 0)
    (hne : (footnoteLeadVisible (fun _ => none)
      ((doc.footnotes[id - 1]?).getD [])).isEmpty = false) :
    renderFootnoteitem conf doc
      [("type".toList, OptVal.str "start".toList),
       ("id".toList, OptVal.int (id : Int))] =
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

/-! ## REFCORR9 mirror-gap closure (C-R5B-R3-1): token-aware separator -/

private def r9hmEmptyRaw2 : List TokenEntry :=
  [{ rule := "Raw", opts := [("text".toList, OptVal.str [])] },
   { rule := "Raw", opts := [("text".toList, OptVal.str [])] }]

private def r9hmNonEmptyRaw : List TokenEntry :=
  [{ rule := "Raw", opts := [("text".toList, OptVal.str "x".toList)] }]

/-- The REFCORR9 retained placeholder-bearing lone-newline body has an empty
    visible body, so the mirror emits no separator space, exactly as the
    adopted Footnoteitem.php does. -/
theorem refcorr9_footnoteitem_retained_newline_no_sep :
    renderFootnoteitem {} { footnotes := [phBytes 0 ++ litBytes "\n" ++ phBytes 1] }
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)]
      (fun k => r9hmEmptyRaw2[k]?) =
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++
      natBytes 1 ++ litBytes "</a>." := by
  rfl

/-- A literal visible body still gets its separator space. -/
theorem refcorr9_footnoteitem_literal_sep :
    renderFootnoteitem {} { footnotes := [litBytes "x"] }
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)]
      (fun k => r9hmEmptyRaw2[k]?) =
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++
      natBytes 1 ++ litBytes "</a>." ++ [32] := by
  rfl

/-- Control: a body holding only a non-empty Raw placeholder still gets its
    separator space, so stripping must be token-aware, not blanket. -/
theorem refcorr9_footnoteitem_nonempty_raw_sep :
    renderFootnoteitem {} { footnotes := [phBytes 0] }
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)]
      (fun k => r9hmNonEmptyRaw[k]?) =
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++
      natBytes 1 ++ litBytes "</a>." ++ [32] := by
  rfl

/-- REFCORR10: a leading break followed by a literal tail gets NO separator
    space (the general rule reads the first visible line, not the trimmed body). -/
theorem refcorr10_footnoteitem_break_then_literal_no_sep :
    renderFootnoteitem {} { footnotes := [phBytes 0 ++ litBytes "\n" ++ phBytes 1 ++ litBytes "@@"] }
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)]
      (fun k => r9hmEmptyRaw2[k]?) =
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++
      natBytes 1 ++ litBytes "</a>." := by
  rfl

/-- REFCORR10: an NBSP-flanked break keeps its separator space because NBSP
    is not in PHP trim's byte set, matching live ` &nbsp;<br />`. -/
theorem refcorr10_footnoteitem_nbsp_flank_sep :
    renderFootnoteitem {} { footnotes := [phBytes 0 ++ [194, 160] ++ litBytes "\n" ++ phBytes 1] }
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)]
      (fun k => r9hmEmptyRaw2[k]?) =
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++
      natBytes 1 ++ litBytes "</a>." ++ [32] := by
  rfl

/-- When no footnotes were collected (`doc.footnotes = []`), `Footnoteblock`
    renders empty for every token option map. -/
theorem footnoteblock_empty_doc (doc : DocState) (opts : OptMap)
    (hempty : doc.footnotes = []) :
    renderFootnoteblock doc opts = [] := by
  simp [renderFootnoteblock, hempty]

/-- When footnotes exist and `title` is `""`, `Footnoteblock` omits the
    `<div class="title">` wrapper. -/
theorem footnoteblock_title_empty (doc : DocState) (h : doc.footnotes.isEmpty = false) :
    renderFootnoteblock doc
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.str [])] =
    litBytes "<div class=\"footnotes-footer\">" := by
  simp [renderFootnoteblock, h, optTypeIs_start_start, omGet, renderOptValBytes]

/-- When footnotes exist and `title` is `null`, `Footnoteblock` emits the
    default `"Footnotes"` title div. -/
theorem footnoteblock_title_default (doc : DocState) (h : doc.footnotes.isEmpty = false) :
    renderFootnoteblock doc
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.null)] =
    litBytes "<div class=\"footnotes-footer\">" ++
      litBytes "<div class=\"title\">" ++
      htmlSpecialCharsCompat (litBytes "Footnotes") ++
      litBytes "</div>" := by
  simp [renderFootnoteblock, h, optTypeIs_start_start, omGet, litBytes_Footnotes_ne_nil]

/-- When footnotes exist, `Footnoteblock` `end` renders `</div>`. -/
theorem footnoteblock_end (doc : DocState) (h : doc.footnotes.isEmpty = false) :
    renderFootnoteblock doc [("type".toList, OptVal.str "end".toList)] =
      litBytes "</div>" := by
  simp [renderFootnoteblock, h, optTypeIs_end_start, optTypeIs_end_end]

/-- `Bibitem` `end` always renders `</div>`. -/
theorem bibitem_end (conf : RenderConf) :
    renderBibitem conf [("type".toList, OptVal.str "end".toList)] =
      litBytes "</div>" := by
  rfl

/-- `Bibitem` `start` separator law: `empty = true` omits the space after `.`,
    while `empty = false` emits a single space. -/
theorem bibitem_start_empty_sep (conf : RenderConf) (id : Nat) (isEmpty : Bool) :
    renderBibitem conf
      [("type".toList, OptVal.str "start".toList),
       ("id".toList, OptVal.int (id : Int)),
       ("empty".toList, OptVal.bool isEmpty)] =
    litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ conf.bibitemIdPrefix ++
      natBytes id ++ litBytes "\">" ++ natBytes id ++ [46] ++
      (if isEmpty then [] else [32]) := by
  have hnotlt : ¬ ((id : Int) < 0) := Int.not_lt.mpr (Int.natCast_nonneg id)
  cases isEmpty <;>
    simp [renderBibitem, optTypeIs_start_start, optStrBytes, omGet, renderOptValBytes,
          intBytes, phpEmptyOpt, hnotlt]

/-- `Bibliography` `nl` token always renders as a single literal LF byte. -/
theorem bibliography_nl :
    renderBibliography [("type".toList, OptVal.str "nl".toList)] = [10] := by
  rfl

/-- `Bibliography` `end` token always renders `</div>`. -/
theorem bibliography_end :
    renderBibliography [("type".toList, OptVal.str "end".toList)] =
      litBytes "</div>" := by
  rfl

/-- `Bibliography` `start` with `title = ""` omits the title div. -/
theorem bibliography_title_empty :
    renderBibliography
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.str [])] =
    litBytes "<div class=\"bibitems\">" := by
  rfl

/-- `Bibliography` `start` with `title = null` emits the default
    `"Bibliography"` title div. -/
theorem bibliography_title_default :
    renderBibliography
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.null)] =
    litBytes "<div class=\"bibitems\">" ++
      litBytes "<div class=\"title\">" ++
      litBytes "Bibliography" ++
      litBytes "</div>" := by
  have ht1 : optTypeIs [("type".toList, OptVal.str "start".toList),
      ("title".toList, OptVal.null)] (litBytes "nl") = false := rfl
  have ht2 : optTypeIs [("type".toList, OptVal.str "start".toList),
      ("title".toList, OptVal.null)] (litBytes "start") = true := rfl
  have hom : omGet [("type".toList, OptVal.str "start".toList),
      ("title".toList, OptVal.null)] "title".toList = some .null := rfl
  have hne : (litBytes "Bibliography").isEmpty = false := rfl
  have hascii : ∀ b ∈ litBytes "Bibliography", b < 0x80 := fun b hb => by
    have hall : (litBytes "Bibliography").all (fun x => decide (x < 0x80)) = true := rfl
    exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
  have hflat : (litBytes "Bibliography").flatMap escHtmlCompatByte = litBytes "Bibliography" := rfl
  unfold renderBibliography
  simp only [ht1, Bool.false_eq_true, ↓reduceIte, ht2, hom, hne,
             htmlSpecialCharsCompat_ascii _ hascii, hflat]

/-- `Bibcite` resolution (undefined label): when `label` is absent from
    `doc.bibitemIds`, renders the exact inline error span (`REPORT-R36.md`). -/
theorem bibcite_not_found (conf : RenderConf) (doc : DocState) (label : List Nat)
    (hmiss : bibLookup doc.bibitemIds label = none) :
    renderBibcite conf doc [("label".toList, OptVal.bytes label)] =
    litBytes "<span class=\"error-inline\">" ++
      litBytes "Bibliography item <em>" ++
      label ++ litBytes "</em> not found.</span>" := by
  simp [renderBibcite, optStrBytes, omGet, renderOptValBytes, hmiss]

/-- `Bibcite` resolution (defined label): when `label` maps to `id` in
    `doc.bibitemIds`, renders the exact scrollToReference anchor with
    `conf.bibitemIdPrefix` (`REPORT-R36.md`). -/
theorem bibcite_found (conf : RenderConf) (doc : DocState) (label : List Nat)
    (id : Nat) (hfound : bibLookup doc.bibitemIds label = some id) :
    renderBibcite conf doc [("label".toList, OptVal.bytes label)] =
    litBytes "<a href=\"javascript:;\" class=\"bibcite\" " ++
      litBytes "id=\"bibcite-" ++ natBytes id ++
      litBytes "\" onclick=\"WIKIDOT.page.utils." ++
      litBytes "scrollToReference('bibitem-" ++
      conf.bibitemIdPrefix ++ natBytes id ++ litBytes "')\">" ++
      natBytes id ++ litBytes "</a>" := by
  simp [renderBibcite, optStrBytes, omGet, renderOptValBytes, hfound]

/-! ## Worked end-to-end parse+render examples (R3.6 → R4.1)

    Kernel-reduced examples compose the NOTES parse rules (`footnoteRule`,
    `footnoteblockRule`, `bibliographyRule`, `bibciteRule`) directly into
    `renderStateR41` (the full 23-rule `pipelineR36` → `renderStateR41`
    composition is verified exhaustively at compiled speed by
    `lean-ftml-conformance-r41 --e2e-r36`). Proofs apply
    `postStripToc_no_nul` over short byte chunks so `String.toList` is
    never reduced on long strings inside Lean's kernel. -/

private theorem postStripToc_of_all_no_nul (bs : List Nat)
    (h : bs.all (fun b => b != 0) = true) : postStripToc bs = bs :=
  postStripToc_no_nul bs fun b hb => by
    have h1 := List.all_eq_true.mp h b hb
    exact ne_of_beq_false (by simpa using h1)

private theorem hscCompat_Footnotes :
    htmlSpecialCharsCompat (litBytes "Footnotes") = litBytes "Footnotes" := by
  have hascii : ∀ b ∈ litBytes "Footnotes", b < 0x80 := fun b hb => by
    have hall : (litBytes "Footnotes").all (fun x => decide (x < 0x80)) = true := rfl
    exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
  rw [htmlSpecialCharsCompat_ascii _ hascii]
  rfl

private theorem hscCompat_OBrien :
    htmlSpecialCharsCompat (litBytes "O'Brien") = litBytes "O'Brien" := by
  have hascii : ∀ b ∈ litBytes "O'Brien", b < 0x80 := fun b hb => by
    have hall : (litBytes "O'Brien").all (fun x => decide (x < 0x80)) = true := rfl
    exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
  rw [htmlSpecialCharsCompat_ascii _ hascii]
  rfl

private theorem renderFootnoteblock_title_OBrien (doc : DocState)
    (h : doc.footnotes.isEmpty = false) :
    renderFootnoteblock doc
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.str "O'Brien".toList)] =
    litBytes "<div class=\"footnotes-footer\">" ++
      litBytes "<div class=\"title\">" ++
      litBytes "O'Brien" ++
      litBytes "</div>" := by
  have ht : optTypeIs [("type".toList, OptVal.str "start".toList),
      ("title".toList, OptVal.str "O'Brien".toList)] (litBytes "start") = true := rfl
  have hom : omGet [("type".toList, OptVal.str "start".toList),
      ("title".toList, OptVal.str "O'Brien".toList)] "title".toList =
      some (OptVal.str "O'Brien".toList) := rfl
  have h1 : renderOptValBytes (OptVal.str "O'Brien".toList) = litBytes "O'Brien" := rfl
  have hne : (litBytes "O'Brien").isEmpty = false := rfl
  unfold renderFootnoteblock
  simp only [h, Bool.false_eq_true, ↓reduceIte, ht, hom, h1, hne, hscCompat_OBrien]

private theorem renderBibliography_title_OBrien :
    renderBibliography
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.str "O'Brien".toList)] =
    litBytes "<div class=\"bibitems\">" ++
      litBytes "<div class=\"title\">" ++
      litBytes "O'Brien" ++
      litBytes "</div>" := by
  have ht1 : optTypeIs [("type".toList, OptVal.str "start".toList),
      ("title".toList, OptVal.str "O'Brien".toList)] (litBytes "nl") = false := rfl
  have ht2 : optTypeIs [("type".toList, OptVal.str "start".toList),
      ("title".toList, OptVal.str "O'Brien".toList)] (litBytes "start") = true := rfl
  have hom : omGet [("type".toList, OptVal.str "start".toList),
      ("title".toList, OptVal.str "O'Brien".toList)] "title".toList =
      some (OptVal.str "O'Brien".toList) := rfl
  have hrb : renderOptValBytes (OptVal.str "O'Brien".toList) = litBytes "O'Brien" := rfl
  have hne : (litBytes "O'Brien").isEmpty = false := rfl
  have hascii : ∀ b ∈ litBytes "O'Brien", b < 0x80 := fun b hb => by
    have hall : (litBytes "O'Brien").all (fun x => decide (x < 0x80)) = true := rfl
    exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
  have hflat : (litBytes "O'Brien").flatMap escHtmlCompatByte = litBytes "O'Brien" := rfl
  unfold renderBibliography
  simp only [ht1, Bool.false_eq_true, ↓reduceIte, ht2, hom, hrb, hne,
             htmlSpecialCharsCompat_ascii _ hascii, hflat]

/-- End-to-end duplicate-label & undefined-label bibliography resolution:
    `a, a, b` registers ids `1, 2, 2` with `a → 2`; forward `((bibcite a))`
    resolves to `2` and `((bibcite z))` emits the error-inline span. -/
theorem notes_e2e_bibcite_duplicate_example :
    let src : List Char :=
      "((bibcite a)) ((bibcite z))\n".toList ++
      "[[bibliography]]\n: a : X\n: a : Y\n".toList ++
      ": b : Z\n[[/bibliography]]".toList
    let out := renderStateR41 {} (bibciteRule (bibliographyRule (ParseState.ofSource src)))
    out.isComplete = true ∧
    out.output =
      litBytes "<a href=\"javascript:;\" class=\"bibcite\" " ++
      litBytes "id=\"bibcite-" ++ natBytes 2 ++
      litBytes "\" onclick=\"WIKIDOT.page.utils." ++
      litBytes "scrollToReference('bibitem-" ++ natBytes 2 ++
      litBytes "')\">" ++ natBytes 2 ++ litBytes "</a>" ++
      litBytes " " ++
      litBytes "<span class=\"error-inline\">" ++
      litBytes "Bibliography item <em>" ++ litBytes "z" ++
      litBytes "</em> not found.</span>" ++
      litBytes "\n\n" ++
      litBytes "<div class=\"bibitems\">" ++
      litBytes "<div class=\"title\">" ++ litBytes "Bibliography" ++ litBytes "</div>" ++
      litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 1 ++
      litBytes "\">" ++ natBytes 1 ++ [46, 32] ++ litBytes "X" ++ litBytes "</div>" ++
      litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 2 ++
      litBytes "\">" ++ natBytes 2 ++ [46, 32] ++ litBytes "Y" ++ litBytes "</div>" ++
      litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 2 ++
      litBytes "\">" ++ natBytes 2 ++ [46, 32] ++ litBytes "Z" ++ litBytes "</div>" ++
      litBytes "</div>" ++ litBytes "\n" := by
  dsimp only [renderStateR41, renderWithR41, renderWith]
  have hst :
      bibciteRule (bibliographyRule (ParseState.ofSource
        ("((bibcite a)) ((bibcite z))\n".toList ++
         "[[bibliography]]\n: a : X\n: a : Y\n".toList ++
         ": b : Z\n[[/bibliography]]".toList))) =
      { work := [.tok 8, .text [' '], .tok 9, .text ['\n', '\n'],
                 .tok 6, .tok 0, .text ['X'], .tok 1,
                 .tok 2, .text ['Y'], .tok 3,
                 .tok 4, .text ['Z'], .tok 5,
                 .tok 7, .text ['\n']],
        tokens := [
          { rule := "Bibitem", opts := [("label".toList, .str ['a']),
              ("id".toList, .int 1), ("type".toList, .str "start".toList),
              ("empty".toList, .bool false)] },
          { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
          { rule := "Bibitem", opts := [("label".toList, .str ['a']),
              ("id".toList, .int 2), ("type".toList, .str "start".toList),
              ("empty".toList, .bool false)] },
          { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
          { rule := "Bibitem", opts := [("label".toList, .str ['b']),
              ("id".toList, .int 2), ("type".toList, .str "start".toList),
              ("empty".toList, .bool false)] },
          { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
          { rule := "Bibliography", opts := [("type".toList, .str "start".toList),
              ("title".toList, .null)] },
          { rule := "Bibliography", opts := [("type".toList, .str "end".toList)] },
          { rule := "Bibcite", opts := [("label".toList, .str ['a'])] },
          { rule := "Bibcite", opts := [("label".toList, .str ['z'])] }
        ],
        doc := { bibitems := [(litBytes "a", litBytes "Y"),
                              (litBytes "b", litBytes "Z")],
                 bibitemIds := [(litBytes "a", 2), (litBytes "b", 2)] } } := by
    rfl
  rw [hst]
  constructor
  · rfl
  · have hloop :
      (renderSegsLoop (dispatchRenderR41TokenAware
        (fun k =>
          [ { rule := "Bibitem", opts := [("label".toList, .str ['a']),
                ("id".toList, .int 1), ("type".toList, .str "start".toList),
                ("empty".toList, .bool false)] },
            { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibitem", opts := [("label".toList, .str ['a']),
                ("id".toList, .int 2), ("type".toList, .str "start".toList),
                ("empty".toList, .bool false)] },
            { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibitem", opts := [("label".toList, .str ['b']),
                ("id".toList, .int 2), ("type".toList, .str "start".toList),
                ("empty".toList, .bool false)] },
            { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibliography", opts := [("type".toList, .str "start".toList),
                ("title".toList, .null)] },
            { rule := "Bibliography", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibcite", opts := [("label".toList, .str ['a'])] },
            { rule := "Bibcite", opts := [("label".toList, .str ['z'])] }
          ][k]?))
        (fun k =>
          [ { rule := "Bibitem", opts := [("label".toList, .str ['a']),
                ("id".toList, .int 1), ("type".toList, .str "start".toList),
                ("empty".toList, .bool false)] },
            { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibitem", opts := [("label".toList, .str ['a']),
                ("id".toList, .int 2), ("type".toList, .str "start".toList),
                ("empty".toList, .bool false)] },
            { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibitem", opts := [("label".toList, .str ['b']),
                ("id".toList, .int 2), ("type".toList, .str "start".toList),
                ("empty".toList, .bool false)] },
            { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibliography", opts := [("type".toList, .str "start".toList),
                ("title".toList, .null)] },
            { rule := "Bibliography", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibcite", opts := [("label".toList, .str ['a'])] },
            { rule := "Bibcite", opts := [("label".toList, .str ['z'])] }
          ][k]?)
        {}
        { bibitems := [(litBytes "a", litBytes "Y"),
                       (litBytes "b", litBytes "Z")],
          bibitemIds := [(litBytes "a", 2), (litBytes "b", 2)] }
        [.tok 8, .text [' '], .tok 9, .text ['\n', '\n'],
         .tok 6, .tok 0, .text ['X'], .tok 1,
         .tok 2, .text ['Y'], .tok 3,
         .tok 4, .text ['Z'], .tok 5,
         .tok 7, .text ['\n']]).output =
      litBytes "<a href=\"javascript:;\" class=\"bibcite\" " ++
      litBytes "id=\"bibcite-" ++ natBytes 2 ++
      litBytes "\" onclick=\"WIKIDOT.page.utils." ++
      litBytes "scrollToReference('bibitem-" ++ natBytes 2 ++
      litBytes "')\">" ++ natBytes 2 ++ litBytes "</a>" ++
      litBytes " " ++
      litBytes "<span class=\"error-inline\">" ++
      litBytes "Bibliography item <em>" ++ litBytes "z" ++
      litBytes "</em> not found.</span>" ++
      litBytes "\n\n" ++
      litBytes "<div class=\"bibitems\">" ++
      litBytes "<div class=\"title\">" ++ litBytes "Bibliography" ++ litBytes "</div>" ++
      litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 1 ++
      litBytes "\">" ++ natBytes 1 ++ [46, 32] ++ litBytes "X" ++ litBytes "</div>" ++
      litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 2 ++
      litBytes "\">" ++ natBytes 2 ++ [46, 32] ++ litBytes "Y" ++ litBytes "</div>" ++
      litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 2 ++
      litBytes "\">" ++ natBytes 2 ++ [46, 32] ++ litBytes "Z" ++ litBytes "</div>" ++
      litBytes "</div>" ++ litBytes "\n" := by
      have ha : bibLookup [(litBytes "a", 2), (litBytes "b", 2)] (optStrBytes [("label".toList, .str ['a'])] "label".toList) = some 2 := rfl
      have hrb : optStrBytes [("label".toList, .str ['z'])] "label".toList = litBytes "z" := rfl
      have hz : bibLookup [(litBytes "a", 2), (litBytes "b", 2)] (litBytes "z") = none := rfl
      have hm1 : renderBibitem {} [("label".toList, .str ['a']), ("id".toList, .int 1),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] =
          litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 1 ++
          litBytes "\">" ++ natBytes 1 ++ [46, 32] := by
        have ht : optTypeIs [("label".toList, .str ['a']), ("id".toList, .int 1),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] (litBytes "start") = true := rfl
        have hid : optStrBytes [("label".toList, .str ['a']), ("id".toList, .int 1),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] "id".toList = natBytes 1 := rfl
        have hemp : phpEmptyOpt (omGet [("label".toList, .str ['a']), ("id".toList, .int 1),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] "empty".toList) = true := rfl
        simp only [renderBibitem, ht, ↓reduceIte, hid, hemp, List.nil_append, List.append_assoc]
        rfl
      have hm2 : renderBibitem {} [("label".toList, .str ['a']), ("id".toList, .int 2),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] =
          litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 2 ++
          litBytes "\">" ++ natBytes 2 ++ [46, 32] := by
        have ht : optTypeIs [("label".toList, .str ['a']), ("id".toList, .int 2),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] (litBytes "start") = true := rfl
        have hid : optStrBytes [("label".toList, .str ['a']), ("id".toList, .int 2),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] "id".toList = natBytes 2 := rfl
        have hemp : phpEmptyOpt (omGet [("label".toList, .str ['a']), ("id".toList, .int 2),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] "empty".toList) = true := rfl
        simp only [renderBibitem, ht, ↓reduceIte, hid, hemp, List.nil_append, List.append_assoc]
        rfl
      have hm3 : renderBibitem {} [("label".toList, .str ['b']), ("id".toList, .int 2),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] =
          litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 2 ++
          litBytes "\">" ++ natBytes 2 ++ [46, 32] := by
        have ht : optTypeIs [("label".toList, .str ['b']), ("id".toList, .int 2),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] (litBytes "start") = true := rfl
        have hid : optStrBytes [("label".toList, .str ['b']), ("id".toList, .int 2),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] "id".toList = natBytes 2 := rfl
        have hemp : phpEmptyOpt (omGet [("label".toList, .str ['b']), ("id".toList, .int 2),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] "empty".toList) = true := rfl
        simp only [renderBibitem, ht, ↓reduceIte, hid, hemp, List.nil_append, List.append_assoc]
        rfl
      have hnl : xhtmlPreText ['\n'] = litBytes "\n" := rfl
      have hsp : xhtmlPreText [' '] = litBytes " " := rfl
      have hnl2 : xhtmlPreText ['\n', '\n'] = litBytes "\n\n" := rfl
      have hx : xhtmlPreText ['X'] = litBytes "X" := rfl
      have hy : xhtmlPreText ['Y'] = litBytes "Y" := rfl
      have hzt : xhtmlPreText ['Z'] = litBytes "Z" := rfl
      simp only [renderSegsLoop, List.getElem?_cons_zero, List.getElem?_cons_succ,
                 renderRuleOfName, dispatchRenderR41TokenAware, dispatchRenderR41,
                 bibliography_title_default, bibliography_end, bibitem_end,
                 renderBibcite, hm1, hm2, hm3, ha, hz, hrb,
                 hnl, hsp, hnl2, hx, hy, hzt,
                 List.append_nil, List.append_assoc]
    rw [hloop]
    apply postStripToc_of_all_no_nul
    simp only [List.all_append, Bool.and_eq_true]
    repeat (apply And.intro)
    all_goals rfl

/-- End-to-end multi-paragraph footnote: `Footnoteblock` parse places a
    `Footnoteitem` `parabreak` token on the lead side of the first blank
    line, and `Footnoteitem` render emits it as a literal LF byte. -/
theorem notes_e2e_parabreak_example :
    let out := renderStateR41 {}
      (footnoteblockRule (footnoteRule (ParseState.ofSource
        ("Claim[[footnote]]p1\n\np2[[/footnote]]".toList))))
    out.isComplete = true ∧
    out.output =
      litBytes "Claim" ++
      litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ natBytes 1 ++
      litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
      litBytes " onclick=\"WIKIDOT.page.utils." ++
      litBytes "scrollToReference('footnote-" ++ natBytes 1 ++
      litBytes "')\">" ++ natBytes 1 ++ litBytes "</a></sup>" ++
      litBytes "\n" ++
      litBytes "<div class=\"footnotes-footer\">" ++
      litBytes "<div class=\"title\">" ++ litBytes "Footnotes" ++ litBytes "</div>" ++
      litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++ natBytes 1 ++
      litBytes "</a>." ++ [32] ++ litBytes "p1" ++ [10] ++
      litBytes "\n\np2\n\n" ++ litBytes "</div>" ++
      litBytes "</div>" ++ litBytes "\n" := by
  dsimp only [renderStateR41, renderWithR41, renderWith]
  have hst :
      footnoteblockRule (footnoteRule (ParseState.ofSource
        ("Claim[[footnote]]p1\n\np2[[/footnote]]".toList))) =
      { work := [.text "Claim".toList, .tok 0, .text ['\n'],
                 .tok 4, .tok 2, .text "p1".toList, .tok 1,
                 .text "\n\np2\n\n".toList, .tok 3, .tok 5, .text ['\n']],
        tokens := [
          { rule := "Footnote", opts := [("id".toList, .int 1)] },
          { rule := "Footnoteitem", opts := [("type".toList, .str "parabreak".toList)] },
          { rule := "Footnoteitem", opts := [("type".toList, .str "start".toList),
              ("id".toList, .int 1)] },
          { rule := "Footnoteitem", opts := [("type".toList, .str "end".toList),
              ("id".toList, .int 1)] },
          { rule := "Footnoteblock", opts := [("type".toList, .str "start".toList),
              ("title".toList, .null)] },
          { rule := "Footnoteblock", opts := [("type".toList, .str "end".toList)] }
        ],
        doc := { footnotes := [litBytes "p1\n\np2"] } } := by
    rfl
  rw [hst]
  constructor
  · rfl
  · have hloop :
      (renderSegsLoop (dispatchRenderR41TokenAware
        (fun k =>
          [ { rule := "Footnote", opts := [("id".toList, .int 1)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "parabreak".toList)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "start".toList),
                ("id".toList, .int 1)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "end".toList),
                ("id".toList, .int 1)] },
            { rule := "Footnoteblock", opts := [("type".toList, .str "start".toList),
                ("title".toList, .null)] },
            { rule := "Footnoteblock", opts := [("type".toList, .str "end".toList)] }
          ][k]?))
        (fun k =>
          [ { rule := "Footnote", opts := [("id".toList, .int 1)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "parabreak".toList)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "start".toList),
                ("id".toList, .int 1)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "end".toList),
                ("id".toList, .int 1)] },
            { rule := "Footnoteblock", opts := [("type".toList, .str "start".toList),
                ("title".toList, .null)] },
            { rule := "Footnoteblock", opts := [("type".toList, .str "end".toList)] }
          ][k]?)
        {}
        { footnotes := [litBytes "p1\n\np2"] }
        [.text "Claim".toList, .tok 0, .text ['\n'],
         .tok 4, .tok 2, .text "p1".toList, .tok 1,
         .text "\n\np2\n\n".toList, .tok 3, .tok 5, .text ['\n']]).output =
      litBytes "Claim" ++
      litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ natBytes 1 ++
      litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
      litBytes " onclick=\"WIKIDOT.page.utils." ++
      litBytes "scrollToReference('footnote-" ++ natBytes 1 ++
      litBytes "')\">" ++ natBytes 1 ++ litBytes "</a></sup>" ++
      litBytes "\n" ++
      litBytes "<div class=\"footnotes-footer\">" ++
      litBytes "<div class=\"title\">" ++ litBytes "Footnotes" ++ litBytes "</div>" ++
      litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++ natBytes 1 ++
      litBytes "</a>." ++ [32] ++ litBytes "p1" ++ [10] ++
      litBytes "\n\np2\n\n" ++ litBytes "</div>" ++
      litBytes "</div>" ++ litBytes "\n" := by
      have hfne : ({ footnotes := [litBytes "p1\n\np2"] } : DocState).footnotes.isEmpty = false := rfl
      have hne1 : (footnoteVisibleBody (fun _ => none)
        ((({ footnotes := [litBytes "p1\n\np2"] } : DocState).footnotes[1 - 1]?).getD [])).isEmpty = false := rfl
      have hfn1 : renderFootnote {} [("id".toList, .int 1)] =
          litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ natBytes 1 ++
          litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
          litBytes " onclick=\"WIKIDOT.page.utils." ++
          litBytes "scrollToReference('footnote-" ++ natBytes 1 ++
          litBytes "')\">" ++ natBytes 1 ++ litBytes "</a></sup>" := by
        simpa using footnote_spec {} 1
      have hfni1 (lookup : Nat → Option TokenEntry) :
          renderFootnoteitem {} { footnotes := [litBytes "p1\n\np2"] }
          [("type".toList, .str "start".toList), ("id".toList, .int 1)] lookup =
          litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
          litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
          litBytes "WIKIDOT.page.utils.scrollToReference(" ++
          litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++ natBytes 1 ++
          litBytes "</a>." ++ [32] := by
        rfl
      have hfnend (lookup : Nat → Option TokenEntry) :
          renderFootnoteitem {} { footnotes := [litBytes "p1\n\np2"] }
          [("type".toList, .str "end".toList), ("id".toList, .int 1)] lookup =
            litBytes "</div>" := by
        rfl
      have ht1 : xhtmlPreText "Claim".toList = litBytes "Claim" := rfl
      have ht2 : xhtmlPreText ['\n'] = litBytes "\n" := rfl
      have ht3 : xhtmlPreText "p1".toList = litBytes "p1" := rfl
      have ht4 : xhtmlPreText "\n\np2\n\n".toList = litBytes "\n\np2\n\n" := rfl
      simp only [renderSegsLoop, List.getElem?_cons_zero, List.getElem?_cons_succ,
                 renderRuleOfName, dispatchRenderR41TokenAware, dispatchRenderR41,
                 hfn1, footnoteitem_parabreak, hfni1,
                 hfnend, footnoteblock_title_default _ hfne, footnoteblock_end _ hfne,
                 hscCompat_Footnotes, ht1, ht2, ht3, ht4,
                 List.append_nil, List.append_assoc]
    rw [hloop]
    apply postStripToc_of_all_no_nul
    simp only [List.all_append, Bool.and_eq_true]
    repeat (apply And.intro)
    all_goals rfl

/-- End-to-end title escaping agreement: `Footnoteblock` and
    `Bibliography` both escape titles with `ENT_COMPAT` (raw apostrophe).
    Until the R4-CORR reference correction, this example asserted a
    contrast (`Bibliography` emitting `O&#039;Brien` under PHP 8.5's
    default `htmlspecialchars` flags); that earlier statement proved the
    fossil's bare-`htmlspecialchars` defect, settled against live by
    probe `muse-probe-r4c1-bib-title-apos`. -/
theorem notes_e2e_title_apostrophe_agreement :
    (renderStateR41 {}
      (footnoteblockRule (footnoteRule (ParseState.ofSource
        ("A[[footnote]]n[[/footnote]]\n\n".toList ++
         "[[footnoteblock title=\"O'Brien\"]]".toList))))).output =
      litBytes "A" ++
      litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ natBytes 1 ++
      litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
      litBytes " onclick=\"WIKIDOT.page.utils." ++
      litBytes "scrollToReference('footnote-" ++ natBytes 1 ++
      litBytes "')\">" ++ natBytes 1 ++ litBytes "</a></sup>" ++
      litBytes "\n\n\n" ++
      litBytes "<div class=\"footnotes-footer\">" ++
      litBytes "<div class=\"title\">" ++ litBytes "O'Brien" ++ litBytes "</div>" ++
      litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++ natBytes 1 ++
      litBytes "</a>." ++ [32] ++ litBytes "n\n\n" ++ litBytes "</div>" ++
      litBytes "</div>" ++ litBytes "\n" ∧
    (renderStateR41 {}
      (bibliographyRule (ParseState.ofSource
        ("[[bibliography title=\"O'Brien\"]]\n".toList ++
         ": a : A\n[[/bibliography]]".toList)))).output =
      litBytes "\n" ++
      litBytes "<div class=\"bibitems\">" ++
      litBytes "<div class=\"title\">" ++ litBytes "O'Brien" ++ litBytes "</div>" ++
      litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 1 ++
      litBytes "\">" ++ natBytes 1 ++ [46, 32] ++ litBytes "A" ++ litBytes "</div>" ++
      litBytes "</div>" ++ litBytes "\n" := by
  dsimp only [renderStateR41, renderWithR41, renderWith]
  constructor
  · have hst1 :
        footnoteblockRule (footnoteRule (ParseState.ofSource
          ("A[[footnote]]n[[/footnote]]\n\n".toList ++
           "[[footnoteblock title=\"O'Brien\"]]".toList))) =
        { work := [.text ['A'], .tok 0, .text "\n\n\n".toList,
                   .tok 3, .tok 1, .text "n\n\n".toList, .tok 2,
                   .tok 4, .text ['\n']],
          tokens := [
            { rule := "Footnote", opts := [("id".toList, .int 1)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "start".toList),
                ("id".toList, .int 1)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "end".toList),
                ("id".toList, .int 1)] },
            { rule := "Footnoteblock", opts := [("type".toList, .str "start".toList),
                ("title".toList, .str "O'Brien".toList)] },
            { rule := "Footnoteblock", opts := [("type".toList, .str "end".toList)] }
          ],
          doc := { footnotes := [litBytes "n"] } } := by
      rfl
    rw [hst1]
    have hloop1 :
      (renderSegsLoop (dispatchRenderR41TokenAware
        (fun k =>
          [ { rule := "Footnote", opts := [("id".toList, .int 1)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "start".toList),
                ("id".toList, .int 1)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "end".toList),
                ("id".toList, .int 1)] },
            { rule := "Footnoteblock", opts := [("type".toList, .str "start".toList),
                ("title".toList, .str "O'Brien".toList)] },
            { rule := "Footnoteblock", opts := [("type".toList, .str "end".toList)] }
          ][k]?))
        (fun k =>
          [ { rule := "Footnote", opts := [("id".toList, .int 1)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "start".toList),
                ("id".toList, .int 1)] },
            { rule := "Footnoteitem", opts := [("type".toList, .str "end".toList),
                ("id".toList, .int 1)] },
            { rule := "Footnoteblock", opts := [("type".toList, .str "start".toList),
                ("title".toList, .str "O'Brien".toList)] },
            { rule := "Footnoteblock", opts := [("type".toList, .str "end".toList)] }
          ][k]?)
        {}
        { footnotes := [litBytes "n"] }
        [.text ['A'], .tok 0, .text "\n\n\n".toList,
         .tok 3, .tok 1, .text "n\n\n".toList, .tok 2,
         .tok 4, .text ['\n']]).output =
      litBytes "A" ++
      litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ natBytes 1 ++
      litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
      litBytes " onclick=\"WIKIDOT.page.utils." ++
      litBytes "scrollToReference('footnote-" ++ natBytes 1 ++
      litBytes "')\">" ++ natBytes 1 ++ litBytes "</a></sup>" ++
      litBytes "\n\n\n" ++
      litBytes "<div class=\"footnotes-footer\">" ++
      litBytes "<div class=\"title\">" ++ litBytes "O'Brien" ++ litBytes "</div>" ++
      litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++ natBytes 1 ++
      litBytes "</a>." ++ [32] ++ litBytes "n\n\n" ++ litBytes "</div>" ++
      litBytes "</div>" ++ litBytes "\n" := by
      have hfne : ({ footnotes := [litBytes "n"] } : DocState).footnotes.isEmpty = false := rfl
      have hne1 : (footnoteVisibleBody (fun _ => none)
        ((({ footnotes := [litBytes "n"] } : DocState).footnotes[1 - 1]?).getD [])).isEmpty = false := rfl
      have hfn1 : renderFootnote {} [("id".toList, .int 1)] =
          litBytes "<sup class=\"footnoteref\"><a id=\"footnoteref-" ++ natBytes 1 ++
          litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
          litBytes " onclick=\"WIKIDOT.page.utils." ++
          litBytes "scrollToReference('footnote-" ++ natBytes 1 ++
          litBytes "')\">" ++ natBytes 1 ++ litBytes "</a></sup>" := by
        simpa using footnote_spec {} 1
      have hfni1 (lookup : Nat → Option TokenEntry) :
          renderFootnoteitem {} { footnotes := [litBytes "n"] }
          [("type".toList, .str "start".toList), ("id".toList, .int 1)] lookup =
          litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
          litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
          litBytes "WIKIDOT.page.utils.scrollToReference(" ++
          litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++ natBytes 1 ++
          litBytes "</a>." ++ [32] := by
        rfl
      have hfnend (lookup : Nat → Option TokenEntry) :
          renderFootnoteitem {} { footnotes := [litBytes "n"] }
          [("type".toList, .str "end".toList), ("id".toList, .int 1)] lookup =
            litBytes "</div>" := by
        rfl
      have ht1 : xhtmlPreText ['A'] = litBytes "A" := rfl
      have ht2 : xhtmlPreText "\n\n\n".toList = litBytes "\n\n\n" := rfl
      have ht3 : xhtmlPreText "n\n\n".toList = litBytes "n\n\n" := rfl
      have ht4 : xhtmlPreText ['\n'] = litBytes "\n" := rfl
      simp only [renderSegsLoop, List.getElem?_cons_zero, List.getElem?_cons_succ,
                 renderRuleOfName, dispatchRenderR41TokenAware, dispatchRenderR41,
                 hfn1, hfni1,
                 hfnend, renderFootnoteblock_title_OBrien _ hfne, footnoteblock_end _ hfne,
                 ht1, ht2, ht3, ht4,
                 List.append_nil, List.append_assoc]
    rw [hloop1]
    apply postStripToc_of_all_no_nul
    simp only [List.all_append, Bool.and_eq_true]
    repeat (apply And.intro)
    all_goals rfl
  · have hst2 :
        bibliographyRule (ParseState.ofSource
          ("[[bibliography title=\"O'Brien\"]]\n".toList ++
           ": a : A\n[[/bibliography]]".toList)) =
        { work := [.text ['\n'], .tok 2, .tok 0, .text ['A'],
                   .tok 1, .tok 3, .text ['\n']],
          tokens := [
            { rule := "Bibitem", opts := [("label".toList, .str ['a']),
                ("id".toList, .int 1), ("type".toList, .str "start".toList),
                ("empty".toList, .bool false)] },
            { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibliography", opts := [("type".toList, .str "start".toList),
                ("title".toList, .str "O'Brien".toList)] },
            { rule := "Bibliography", opts := [("type".toList, .str "end".toList)] }
          ],
          doc := { bibitems := [(litBytes "a", litBytes "A")],
                   bibitemIds := [(litBytes "a", 1)] } } := by
      rfl
    rw [hst2]
    have hloop2 :
      (renderSegsLoop (dispatchRenderR41TokenAware
        (fun k =>
          [ { rule := "Bibitem", opts := [("label".toList, .str ['a']),
                ("id".toList, .int 1), ("type".toList, .str "start".toList),
                ("empty".toList, .bool false)] },
            { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibliography", opts := [("type".toList, .str "start".toList),
                ("title".toList, .str "O'Brien".toList)] },
            { rule := "Bibliography", opts := [("type".toList, .str "end".toList)] }
          ][k]?))
        (fun k =>
          [ { rule := "Bibitem", opts := [("label".toList, .str ['a']),
                ("id".toList, .int 1), ("type".toList, .str "start".toList),
                ("empty".toList, .bool false)] },
            { rule := "Bibitem", opts := [("type".toList, .str "end".toList)] },
            { rule := "Bibliography", opts := [("type".toList, .str "start".toList),
                ("title".toList, .str "O'Brien".toList)] },
            { rule := "Bibliography", opts := [("type".toList, .str "end".toList)] }
          ][k]?)
        {}
        { bibitems := [(litBytes "a", litBytes "A")],
          bibitemIds := [(litBytes "a", 1)] }
        [.text ['\n'], .tok 2, .tok 0, .text ['A'],
         .tok 1, .tok 3, .text ['\n']]).output =
      litBytes "\n" ++
      litBytes "<div class=\"bibitems\">" ++
      litBytes "<div class=\"title\">" ++ litBytes "O'Brien" ++ litBytes "</div>" ++
      litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 1 ++
      litBytes "\">" ++ natBytes 1 ++ [46, 32] ++ litBytes "A" ++ litBytes "</div>" ++
      litBytes "</div>" ++ litBytes "\n" := by
      have hm1 : renderBibitem {} [("label".toList, .str ['a']), ("id".toList, .int 1),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] =
          litBytes "<div class=\"bibitem\" id=\"bibitem-" ++ natBytes 1 ++
          litBytes "\">" ++ natBytes 1 ++ [46, 32] := by
        have ht : optTypeIs [("label".toList, .str ['a']), ("id".toList, .int 1),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] (litBytes "start") = true := rfl
        have hid : optStrBytes [("label".toList, .str ['a']), ("id".toList, .int 1),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] "id".toList = natBytes 1 := rfl
        have hemp : phpEmptyOpt (omGet [("label".toList, .str ['a']), ("id".toList, .int 1),
          ("type".toList, .str "start".toList), ("empty".toList, .bool false)] "empty".toList) = true := rfl
        simp only [renderBibitem, ht, ↓reduceIte, hid, hemp, List.nil_append, List.append_assoc]
        rfl
      have ht1 : xhtmlPreText ['\n'] = litBytes "\n" := rfl
      have ht2 : xhtmlPreText ['A'] = litBytes "A" := rfl
      simp only [renderSegsLoop, List.getElem?_cons_zero, List.getElem?_cons_succ,
                 renderRuleOfName, dispatchRenderR41TokenAware, dispatchRenderR41,
                 renderBibliography_title_OBrien, bibliography_end, bibitem_end,
                 hm1, ht1, ht2,
                 List.append_nil, List.append_assoc]
    rw [hloop2]
    apply postStripToc_of_all_no_nul
    simp only [List.all_append, Bool.and_eq_true]
    repeat (apply And.intro)
    all_goals rfl

/-- Dispatcher-growth record (R4.7): this document was R4.1's
    no-silent-stand-in example, rejected as incomplete with
    `unmirrored = ["Code"]` while Code was unmirrored. Since
    R4.7 mirrors Code, and this token carries no `attr` (so its
    type is `""`, the plain branch), the same document now
    renders complete under the shared dispatcher. The
    no-silent-stand-in property for the remaining boundary is
    carried by `LeanFtml.CodeEmbedRender`'s
    `code_boundary_excluded` (a highlighted Code token is
    excluded by name at the R4.7 entry points). -/
theorem notes_e2e_code_mirrored_complete :
    let st0 : ParseState :=
      { work := [.tok 0, .text "\n[[footnote]]n[[/footnote]]".toList],
        tokens := [{ rule := "Code", opts := [("text".toList, .str "x".toList)] }],
        doc := {} }
    let st := footnoteblockRule (footnoteRule st0)
    let out := renderStateR41 {} st
    out.isComplete = true ∧ out.unmirrored = [] :=
  ⟨rfl, rfl⟩

end LeanFtml
