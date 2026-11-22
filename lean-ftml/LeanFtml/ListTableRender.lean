/-
  LeanFtml.ListTableRender — R4.5 stage entry points and theorems
  for the list and table Xhtml render mirror.

  The four render functions live in
  `LeanFtml/ListTableRules.lean`. The dispatcher is
  `LeanFtml.dispatchRenderR41` in `LeanFtml/NotesRender.lean`,
  extended in this stage to all forty-one mirrored rules (the six
  R4.1 NOTES rules, the twelve R4.2 prose-core rules, the fourteen
  R4.3 inline-simple and typography rules, the five R4.4 raw/form
  and heading/toc rules, and this family's four); the `R45` entry
  points below share that dispatch, exactly as the earlier stages'
  entry points do, so the stages can never disagree about a rule
  more than one of them mirrors.

  The end-to-end entry point runs the R4.5 stage prefix
  `LeanFtml.pipelineR45`, which is the full sixty-eight-rule
  pipeline (see `LeanFtml/Pipeline.lean`).

  No enumeration discipline is needed for this family: each
  renderer is a flat per-token function (the parse rule encodes
  all nesting in the token stream), so the characterizations
  below are plain `rfl` computations on concrete option maps.
  The one place a plain `rfl` could have hit the kernel cost
  R4.4 recorded for `utf8Valid` inside an escape is the explicit
  list attribute value; the value characterized here is one byte,
  and the reduction was measured firsthand to stay trivial (the
  isolated escape equality and the whole theorem each check by
  `rfl` in well under a second), so no proof device is needed.
-/

import LeanFtml.NotesRender
import LeanFtml.ListTableRules
import LeanFtml.Pipeline

namespace LeanFtml

/-! ## R4.5 dispatcher and entry points -/

/-- The combined dispatcher for the forty-one render rules
    mirrored through R4.5 (definitionally `dispatchRenderR41`,
    extended in this stage; see its doc comment in
    `LeanFtml/NotesRender.lean`). -/
def dispatchRenderR45 :
    RenderRuleId → RenderConf → DocState → OptMap → List Nat :=
  dispatchRenderR41

/-- Render from an arbitrary token lookup function under the R4.5
    mirrored render rules (used directly by the conformance driver
    on raw `state-restricted.php` batch states whose token keys are
    cumulative process-global ids). -/
def renderWithR45 (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) : RenderOutcome :=
  renderWith dispatchRenderR45 lookup conf work doc

/-- Render an R3 `ParseState` (0-indexed `st.tokens`) under the
    R4.5 mirrored render rules. -/
def renderStateR45 (conf : RenderConf) (st : ParseState) : RenderOutcome :=
  renderWithR45 (fun k => st.tokens[k]?) conf st.work st.doc

/-- End-to-end Lean parse+render on top of the R4.5 stage prefix
    (`convCRLF` → `pipelineR45`, the full pipeline →
    `renderStateR45`). -/
def renderListTableE2E (conf : RenderConf) (tags : List (List Char))
    (source : List Char) : RenderOutcome :=
  let st0 : ParseState :=
    { ParseState.ofSource (convCRLF source) with doc.page.tags := tags }
  let st := runRules pipelineR45 st0
  renderStateR45 conf st

/-! ## Theorems: per-rule characterizations on concrete option maps

    Each theorem pins one branch of one mirrored `token()` body
    against the exact byte string the reference produces. Proofs
    are by computation (`rfl`): the option maps are concrete, so
    the mirrors reduce in the kernel. -/

/-- `List` `bullet_list_start` at the top level: the bare opener
    with its newline (no leading newline at level 0). -/
theorem list_bullet_start_top :
    renderList [("type".toList, OptVal.str "bullet_list_start".toList),
      ("level".toList, OptVal.int 0),
      ("in_sublist".toList, OptVal.bool false)] =
    litBytes "<ul>\n" := rfl

/-- `List` `number_list_start` nested one level, not inside a
    wrapper: the opener is preceded by a newline (the child list
    opens on a new line inside its parent item). -/
theorem list_number_start_nested :
    renderList [("type".toList, OptVal.str "number_list_start".toList),
      ("level".toList, OptVal.int 1),
      ("in_sublist".toList, OptVal.bool false)] =
    litBytes "\n<ol>\n" := rfl

/-- `List` `number_list_start` inside a sublist wrapper: no
    leading newline even at a deeper level. -/
theorem list_number_start_in_sublist :
    renderList [("type".toList, OptVal.str "number_list_start".toList),
      ("level".toList, OptVal.int 2),
      ("in_sublist".toList, OptVal.bool true)] =
    litBytes "<ol>\n" := rfl

/-- `List` `number_list_start` with a `format` option (never set
    by the active parse; mirrored for totality): the raw
    ` type="..."` attribute follows the tag name. -/
theorem list_number_start_format :
    renderList [("type".toList, OptVal.str "number_list_start".toList),
      ("level".toList, OptVal.int 0),
      ("in_sublist".toList, OptVal.bool false),
      ("format".toList, OptVal.str "a".toList)] =
    litBytes "<ol type=\"a\">\n" := rfl

/-- `List` `bullet_list_end` at the top level with an item tail:
    the last item closes before the list, with no trailing
    newline. -/
theorem list_bullet_end_top_item :
    renderList [("type".toList, OptVal.str "bullet_list_end".toList),
      ("level".toList, OptVal.int 0),
      ("in_sublist".toList, OptVal.bool false),
      ("tail".toList, OptVal.str "item".toList)] =
    litBytes "</li>\n</ul>" := rfl

/-- `List` `bullet_list_end` at the top level with a sublist
    tail: no item close (the wrapper's close precedes it), and a
    trailing newline even at level 0. -/
theorem list_bullet_end_top_sublist :
    renderList [("type".toList, OptVal.str "bullet_list_end".toList),
      ("level".toList, OptVal.int 0),
      ("in_sublist".toList, OptVal.bool true),
      ("tail".toList, OptVal.str "sublist".toList)] =
    litBytes "</ul>\n" := rfl

/-- `List` `number_list_end` nested with an item tail: the item
    close, the list close, and a trailing newline. -/
theorem list_number_end_nested_item :
    renderList [("type".toList, OptVal.str "number_list_end".toList),
      ("level".toList, OptVal.int 1),
      ("in_sublist".toList, OptVal.bool false),
      ("tail".toList, OptVal.str "item".toList)] =
    litBytes "</li>\n</ol>\n" := rfl

/-- `List` `sublist_start`: the inline wrapper opener for a
    skipped depth level. -/
theorem list_sublist_start_shape :
    renderList [("type".toList, OptVal.str "sublist_start".toList),
      ("level".toList, OptVal.int 2)] =
    litBytes "<li style=\"list-style: none; display: inline\">\n" := rfl

/-- `List` `sublist_end`: the wrapper close (no item close, the
    list end supplies its own). -/
theorem list_sublist_end_shape :
    renderList [("type".toList, OptVal.str "sublist_end".toList),
      ("level".toList, OptVal.int 2)] =
    litBytes "</li>\n" := rfl

/-- `List` item start at count 0: the bare `<li>` (no preceding
    item to close). -/
theorem list_item_start_first :
    renderList [("type".toList, OptVal.str "bullet_item_start".toList),
      ("level".toList, OptVal.int 0),
      ("count".toList, OptVal.int 0),
      ("first".toList, OptVal.bool true)] =
    litBytes "<li>" := rfl

/-- `List` item start at count 2: the previous item closes first
    (item endings are emitted by the next item start). -/
theorem list_item_start_later :
    renderList [("type".toList, OptVal.str "number_item_start".toList),
      ("level".toList, OptVal.int 0),
      ("count".toList, OptVal.int 2),
      ("first".toList, OptVal.bool false)] =
    litBytes "</li>\n<li>" := rfl

/-- `List` item end renders nothing (the close is emitted by the
    next item start or the list end). -/
theorem list_item_end_empty :
    renderList [("type".toList, OptVal.str "bullet_item_end".toList),
      ("level".toList, OptVal.int 0),
      ("count".toList, OptVal.int 0)] =
    litBytes "" := rfl

/-- `List` `explicit_list_start` with no attributes: the bare
    opener of an explicit `[[ul]]` block. -/
theorem list_explicit_start_plain :
    renderList [("type".toList, OptVal.str "explicit_list_start".toList),
      ("list_type".toList, OptVal.str "ul".toList),
      ("attrs".toList, OptVal.map []),
      ("scored".toList, OptVal.bool false)] =
    litBytes "<ul>\n" := rfl

/-- `List` `explicit_list_start` with a class attribute: the
    stored attribute renders as ` class="x"` between the tag name
    and the closing bracket. Plain `rfl` suffices here (the
    attribute value is one byte, so the `utf8Valid` reduction
    inside the `ENT_COMPAT` escape stays trivial; the expensive
    long-string case is the one R4.4's Toc theorems route around
    through `htmlSpecialCharsCompat_ascii`). -/
theorem list_explicit_start_attrs :
    renderList [("type".toList, OptVal.str "explicit_list_start".toList),
      ("list_type".toList, OptVal.str "ol".toList),
      ("attrs".toList, OptVal.map
        [("class".toList, OptVal.str "x".toList)]),
      ("scored".toList, OptVal.bool false)] =
    litBytes "<ol class=\"x\">\n" := rfl

/-- `List` `explicit_list_end` with a trail: the closer followed
    by the token's trail bytes. -/
theorem list_explicit_end_trail :
    renderList [("type".toList, OptVal.str "explicit_list_end".toList),
      ("list_type".toList, OptVal.str "ul".toList),
      ("trail".toList, OptVal.str "\n".toList),
      ("scored".toList, OptVal.bool false)] =
    litBytes "</ul>\n" := rfl

/-- `List` `explicit_item_start` with no attributes and no lead:
    the bare `<li>`. -/
theorem list_explicit_item_start_plain :
    renderList [("type".toList, OptVal.str "explicit_item_start".toList),
      ("attrs".toList, OptVal.map []),
      ("lead".toList, OptVal.str "".toList)] =
    litBytes "<li>" := rfl

/-- `List` `explicit_item_end` with a newline lead (the shape for
    an item holding a native list): the lead precedes the close. -/
theorem list_explicit_item_end_lead :
    renderList [("type".toList, OptVal.str "explicit_item_end".toList),
      ("lead".toList, OptVal.str "\n".toList)] =
    litBytes "\n</li>\n" := rfl

/-- `List` `explicit_none_item_start`: the unstyled-item opener
    for a text-bodied explicit block. -/
theorem list_explicit_none_start :
    renderList [("type".toList,
      OptVal.str "explicit_none_item_start".toList)] =
    litBytes "<li style=\"list-style: none\">" := rfl

/-- `List` `explicit_none_item_end`. -/
theorem list_explicit_none_end :
    renderList [("type".toList,
      OptVal.str "explicit_none_item_end".toList)] =
    litBytes "</li>\n" := rfl

/-- `List` `explicit_inline_wrapper_end`: a newline, the close,
    and a newline (the start shape is `list_sublist_start_shape`'s
    string, shared with `sublist_start`). -/
theorem list_explicit_wrapper_end :
    renderList [("type".toList,
      OptVal.str "explicit_inline_wrapper_end".toList),
      ("newline".toList, OptVal.bool true),
      ("lead_nl".toList, OptVal.bool true)] =
    litBytes "\n</li>\n" := rfl

/-- `List` `explicit_br_no_nl`: a break with no newline. -/
theorem list_explicit_br_no_nl_shape :
    renderList [("type".toList, OptVal.str "explicit_br_no_nl".toList)] =
    litBytes "<br />" := rfl

/-- `List` `explicit_raw_nl`: a bare newline. -/
theorem list_explicit_raw_nl_shape :
    renderList [("type".toList, OptVal.str "explicit_raw_nl".toList)] =
    litBytes "\n" := rfl

/-- `List` with any other `type` (including `explicit_empty`)
    falls through to the empty string. -/
theorem list_other :
    renderList [("type".toList, OptVal.str "explicit_empty".toList)] =
    litBytes "" := rfl

/-- `Deflist` `list_start`: the bare `<dl>` with its newline. -/
theorem deflist_start_shape :
    renderDeflist [("type".toList, OptVal.str "list_start".toList)] =
    litBytes "<dl>\n" := rfl

/-- `Deflist` `list_end`: `</dl>` with exactly one newline (the
    R2 C1 correction). -/
theorem deflist_end_shape :
    renderDeflist [("type".toList, OptVal.str "list_end".toList)] =
    litBytes "</dl>\n" := rfl

/-- `Deflist` `term_start` / `term_end`. -/
theorem deflist_term_shapes :
    renderDeflist [("type".toList, OptVal.str "term_start".toList)] =
      litBytes "<dt>" ∧
    renderDeflist [("type".toList, OptVal.str "term_end".toList)] =
      litBytes "</dt>\n" := ⟨rfl, rfl⟩

/-- `Deflist` `narr_start` / `narr_end`. -/
theorem deflist_narr_shapes :
    renderDeflist [("type".toList, OptVal.str "narr_start".toList)] =
      litBytes "<dd>" ∧
    renderDeflist [("type".toList, OptVal.str "narr_end".toList)] =
      litBytes "</dd>\n" := ⟨rfl, rfl⟩

/-- `Deflist` with any other `type` falls through to the empty
    string. -/
theorem deflist_other :
    renderDeflist [("type".toList, OptVal.str "other".toList)] =
    litBytes "" := rfl

/-- `Table` `table_start`: the harness's one configured class in
    this family, `wiki-content-table`, and no format fragment. -/
theorem table_start_class :
    renderTable [("type".toList, OptVal.str "table_start".toList),
      ("rows".toList, OptVal.int 2),
      ("cols".toList, OptVal.int 3)] =
    litBytes "<table class=\"wiki-content-table\">\n" := rfl

/-- `Table` `table_start` with a `format` fragment (never set by
    the active parse; mirrored for totality): the fragment, with
    its leading space, follows the class. -/
theorem table_start_format :
    renderTable [("type".toList, OptVal.str "table_start".toList),
      ("rows".toList, OptVal.int 1),
      ("cols".toList, OptVal.int 1),
      ("format".toList, OptVal.str "x".toList)] =
    litBytes "<table class=\"wiki-content-table\" x>\n" := rfl

/-- `Table` `table_end`: the bare closer, no newline. -/
theorem table_end_shape :
    renderTable [("type".toList, OptVal.str "table_end".toList)] =
    litBytes "</table>" := rfl

/-- `Table` `caption_start` / `caption_end` (the caption path the
    R2 C1 correction preserved). -/
theorem table_caption_shapes :
    renderTable [("type".toList, OptVal.str "caption_start".toList)] =
      litBytes "<caption>\n" ∧
    renderTable [("type".toList, OptVal.str "caption_end".toList)] =
      litBytes "</caption>\n" := ⟨rfl, rfl⟩

/-- `Table` `row_start` / `row_end`. -/
theorem table_row_shapes :
    renderTable [("type".toList, OptVal.str "row_start".toList)] =
      litBytes "<tr>\n" ∧
    renderTable [("type".toList, OptVal.str "row_end".toList)] =
      litBytes "</tr>\n" := ⟨rfl, rfl⟩

/-- `Table` plain cell start: a null attr and span 1 give the
    bare `<td>` (no stray attribute space, the R2 C1 correction). -/
theorem table_cell_plain :
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.null),
      ("span".toList, OptVal.int 1)] =
    litBytes "<td>" := rfl

/-- `Table` header cell start: the `~ ` marker's `header` attr
    gives `<th>`. -/
theorem table_cell_header :
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.str "header".toList),
      ("span".toList, OptVal.int 1)] =
    litBytes "<th>" := rfl

/-- `Table` cell start with a column span: ` colspan="3"` after
    the tag name. -/
theorem table_cell_span :
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.null),
      ("span".toList, OptVal.int 3)] =
    litBytes "<td colspan=\"3\">" := rfl

/-- `Table` cell start with a row span (never set by the active
    parse; mirrored for totality): ` rowspan="2"`. -/
theorem table_cell_rowspan :
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.null),
      ("span".toList, OptVal.int 1),
      ("rowspan".toList, OptVal.int 2)] =
    litBytes "<td rowspan=\"2\">" := rfl

/-- `Table` aligned cell start: the `= ` marker's `center` attr
    gives the text-align style (and no style on a header cell,
    whose branch this theorem's plain-cell shape exercises). -/
theorem table_cell_align :
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.str "center".toList),
      ("span".toList, OptVal.int 1)] =
    litBytes "<td style=\"text-align: center;\">" := rfl

/-- `Table` header cell start with an alignment-shaped attr is
    impossible from the parse (the marker is a single prefix), but
    the renderer's branch order puts the header test first: a
    `header` attr with a span still emits no style. -/
theorem table_cell_header_span :
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.str "header".toList),
      ("span".toList, OptVal.int 2)] =
    litBytes "<th colspan=\"2\">" := rfl

/-- `Table` cell ends: `</th>` for a header cell, `</td>`
    otherwise, each with its newline (kept by the R2 C1
    correction). -/
theorem table_cell_end_shapes :
    renderTable [("type".toList, OptVal.str "cell_end".toList),
      ("attr".toList, OptVal.str "header".toList),
      ("span".toList, OptVal.int 1)] =
      litBytes "</th>\n" ∧
    renderTable [("type".toList, OptVal.str "cell_end".toList),
      ("attr".toList, OptVal.null),
      ("span".toList, OptVal.int 1)] =
      litBytes "</td>\n" := ⟨rfl, rfl⟩

/-- `Table` with any other `type` falls through to the empty
    string. -/
theorem table_other :
    renderTable [("type".toList, OptVal.str "other".toList)] =
    litBytes "" := rfl

/-- `Tableadv` `start` with no attributes: the bare opener (the
    advanced form carries no automatic class). -/
theorem tableadv_start_plain :
    renderTableadv [("type".toList, OptVal.str "start".toList),
      ("attrs".toList, OptVal.map [])] =
    litBytes "<table>\n" := rfl

/-- `Tableadv` `start` with a class attribute: the stored
    attribute renders after the tag name, escaped with
    `ENT_COMPAT` (no apostrophe here, so the bytes are unchanged). -/
theorem tableadv_start_attrs :
    renderTableadv [("type".toList, OptVal.str "start".toList),
      ("attrs".toList, OptVal.map
        [("class".toList, OptVal.str "x".toList)])] =
    litBytes "<table class=\"x\">\n" := rfl

/-- `Tableadv` `rowStart` / `rowEnd` / `end` shapes. -/
theorem tableadv_row_end_shapes :
    renderTableadv [("type".toList, OptVal.str "rowStart".toList),
        ("attrs".toList, OptVal.map [])] =
        litBytes "<tr>\n" ∧
      renderTableadv [("type".toList, OptVal.str "rowEnd".toList)] =
        litBytes "</tr>\n" ∧
      renderTableadv [("type".toList, OptVal.str "end".toList)] =
        litBytes "</table>" := ⟨rfl, rfl, rfl⟩

/-- `Tableadv` plain cell start and end: `<td>` and `</td>` with
    the close's newline. -/
theorem tableadv_cell_plain :
    renderTableadv [("type".toList, OptVal.str "cellStart".toList),
        ("header".toList, OptVal.bool false),
        ("attrs".toList, OptVal.map [])] =
        litBytes "<td>" ∧
      renderTableadv [("type".toList, OptVal.str "cellEnd".toList),
        ("header".toList, OptVal.bool false)] =
        litBytes "</td>\n" := ⟨rfl, rfl⟩

/-- `Tableadv` header cell start and end: the token's `header`
    flag (set from the authored closer name) selects `th`. -/
theorem tableadv_cell_header :
    renderTableadv [("type".toList, OptVal.str "cellStart".toList),
        ("header".toList, OptVal.bool true),
        ("attrs".toList, OptVal.map [])] =
        litBytes "<th>" ∧
      renderTableadv [("type".toList, OptVal.str "cellEnd".toList),
        ("header".toList, OptVal.bool true)] =
        litBytes "</th>\n" := ⟨rfl, rfl⟩

/-- `Tableadv` cell start with two attributes: the fragment
    follows the reference's wikidot rank (C-R45-1), so the
    `data-name` pair precedes the "other" `colspan` pair even
    though the token stores them in the opposite order, and the
    apostrophe is raw under `ENT_COMPAT` (REFCORR3
    C-SUSPECT-LISTTABLE-7). -/
theorem tableadv_cell_attrs_order :
    renderTableadv [("type".toList, OptVal.str "cellStart".toList),
      ("header".toList, OptVal.bool false),
      ("attrs".toList, OptVal.map
        [("colspan".toList, OptVal.str "2".toList),
         ("data-name".toList, OptVal.str "it's".toList)])] =
    litBytes "<td data-name=\"it's\" colspan=\"2\">" := rfl

/-- `Tableadv` with any other `type` falls through to the empty
    string. -/
theorem tableadv_other :
    renderTableadv [("type".toList, OptVal.str "other".toList),
      ("attrs".toList, OptVal.map [])] =
    litBytes "" := rfl

end LeanFtml
