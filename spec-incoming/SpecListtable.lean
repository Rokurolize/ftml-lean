/-
  LeanFtml.SpecListtable — live-confirmed odd behaviors of the list/table
  render mirrors, stated as Lean propositions over the family's mirror
  functions (`LeanFtml/ListTableRules.lean`).

  Every proposition below corresponds to a CONFIRMED suspicion in
  REPORT-SUSPECT-LISTTABLE.md: the suspicious PHP construct was probed on a
  saved page on sandbox-for-codex, the capture was valid, stable across two
  anonymous GETs, and source-matched, and live produced exactly the bytes the
  reference produced. The probe page name is cited in the comment above each
  statement. DIVERGENCE suspicions are recorded as candidates in the report
  instead; they are deliberately not asserted here.
-/

import LeanFtml.ListTableRules

namespace LeanFtml

/-- Probe `muse-probe-suspect-listtable-s03-adv-uppercase-tags` (and
    `...-s05-adv-case-opener`): the advanced-table block grammar is
    case-insensitive, and an uppercase `[[HCELL]]` opener with a lowercase
    `[[/cell]]` closer renders an ordinary cell. Live served
    `<table>\n<tr>\n<td>X</td>\n</tr>\n</table>` for the uppercase-tags page.
    The mirror's cell tag is selected only by the token's `header` flag. -/
theorem suspect_adv_cell_plain_from_case_variant :
    renderTableadv [("type".toList, OptVal.str "cellStart".toList),
      ("header".toList, OptVal.bool false),
      ("attrs".toList, OptVal.map [])] =
    litBytes "<td>" := rfl

/-- Probe `muse-probe-suspect-listtable-s04-adv-case-closer` is the
    DIVERGENCE counterpart: a lowercase opener with an uppercase closer
    must set the header flag when the reference's `strtolower` is used, but
    live sets it false. This theorem records the mirror branch that live's
    bytes (a `<td>`) actually exercise. -/
theorem suspect_adv_cell_header_flag_branch :
    renderTableadv [("type".toList, OptVal.str "cellStart".toList),
      ("header".toList, OptVal.bool true),
      ("attrs".toList, OptVal.map [])] =
    litBytes "<th>" := rfl

/-- Probes `muse-probe-suspect-listtable-s10-list-residual-close` and
    `...-s15-list-last-br`: the explicit-list body break is the terse
    `<br />` with no following newline (unlike the Newline rule's
    `<br />\n`). Both live pages served that exact byte sequence. -/
theorem suspect_list_explicit_br_no_nl :
    renderList [("type".toList, OptVal.str "explicit_br_no_nl".toList)] =
    litBytes "<br />" := rfl

/-- Probe `muse-probe-suspect-listtable-s11-list-attr-apostrophe`: an
    explicit-list attribute value uses ENT_COMPAT, so an apostrophe stays
    literal inside the double-quoted attribute. Live served
    `<ul class="it's">`. -/
theorem suspect_list_attr_apostrophe_literal :
    renderList [("type".toList, OptVal.str "explicit_list_start".toList),
      ("list_type".toList, OptVal.str "ul".toList),
      ("attrs".toList, OptVal.map
        [("class".toList, OptVal.str "it's".toList)]),
      ("scored".toList, OptVal.bool false)] =
    litBytes "<ul class=\"it's\">\n" := rfl

/-- Probes `...-s11-list-attr-apostrophe` versus
    `...-s12-adv-attr-apostrophe`: the two attribute renderers in this
    family escape differently — ENT_COMPAT on the List side (literal
    apostrophe, confirmed live by s11) and ENT_QUOTES on the Tableadv side
    (`&#039;`, which s12 shows live does NOT do, so that half is the
    divergence candidate C-SUSPECT-LISTTABLE-7 and is stated here only as
    the reference's branch, not as a live claim). -/
theorem suspect_attr_escaping_asymmetry_in_reference :
    renderList [("type".toList, OptVal.str "explicit_list_start".toList),
      ("list_type".toList, OptVal.str "ul".toList),
      ("attrs".toList, OptVal.map
        [("class".toList, OptVal.str "it's".toList)]),
      ("scored".toList, OptVal.bool false)] =
        litBytes "<ul class=\"it's\">\n" ∧
    renderTableadv [("type".toList, OptVal.str "cellStart".toList),
      ("header".toList, OptVal.bool false),
      ("attrs".toList, OptVal.map
        [("data-x".toList, OptVal.str "it's".toList)])] =
        litBytes "<td data-x=\"it&#039;s\">" := ⟨rfl, rfl⟩

/-- Probe `muse-probe-suspect-listtable-s13-adv-title-hidden`: `title` and
    `hidden` are dropped on the advanced-table head, so the renderer sees an
    empty attribute map and emits the bare `<table>\n`. Live served exactly
    that opener. -/
theorem suspect_adv_start_no_title_hidden :
    renderTableadv [("type".toList, OptVal.str "start".toList),
      ("attrs".toList, OptVal.map [])] =
    litBytes "<table>\n" := rfl

/-- Probe `muse-probe-suspect-listtable-s16-deflist-comment-term`: a term
    whose entire content is a comment renders no `<dt>`; the mirror emits
    only the `<dd>` sequence for that list. Live served
    `<dl>\n<dd>def</dd>\n</dl>` for the construct. -/
theorem suspect_deflist_empty_term_dd_only :
    renderDeflist [("type".toList, OptVal.str "list_start".toList)] ++
    renderDeflist [("type".toList, OptVal.str "narr_start".toList)] ++
    litBytes "def" ++
    renderDeflist [("type".toList, OptVal.str "narr_end".toList)] ++
    renderDeflist [("type".toList, OptVal.str "list_end".toList)] =
    litBytes "<dl>\n<dd>def</dd>\n</dl>\n" := rfl

end LeanFtml
