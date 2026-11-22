/-
  SpecNotes.lean — CONFIRMED live behaviors of the footnote and bibliography
  family, stated as Lean propositions about the family's mirror functions.

  Every statement names the fresh sandbox probe page(s) that pin it. All
  named pages are on sandbox-for-codex under the kept prefix
  `muse-probe-suspect-notes-`; their double-fetched captures, source checks
  and the byte comparison are in conformance-suspect-notes/captures.json,
  map-rest2.json and compare-report.txt of this tree (all captures
  valid=true, stable=true, saved_source_matches=true). Earlier programme
  pins are named where they independently settle the same behavior.

  Scope: no new mirror definitions. The file only states propositions about
  NotesRules.lean and NotesRender.lean, which mirror the reference rule by
  rule. The propositions are closed computations, so their proofs are `rfl`
  or one-line rewrites of the mirrors' own lemmas.
-/

import LeanFtml.NotesRules
import LeanFtml.NotesRender

namespace LeanFtml

/-! ## Note-body paragraph breaks (probes n3para, n2para-ctrl)

    Probe muse-probe-suspect-notes-n3para (`x[[footnote]]p1\n\np2\n\np3[[/footnote]]`)
    serves p1 followed by two separate `<p>` elements; the reference's
    one-off `$marked` flag marks only the first break, and the paragraph
    renderer separates the later paragraphs. The earlier pin is
    muse-probe-r2notes-fnb24 (two paragraphs). -/

/-- The Footnoteblock marking pass splits at the FIRST blank line only
    (probe n3para). -/
theorem suspect_notes_first_paragraph_break_only :
    firstBreakSplit (litBytes "p1\n\np2\n\np3") =
      some (litBytes "p1", litBytes "\n\np2\n\np3") := rfl

/-- The marked break renders as one literal LF byte (probe n3para; the
    earlier fnb24 pin). -/
theorem suspect_notes_parabreak_renders_lf :
    renderFootnoteitem {} {} [("type".toList, OptVal.str "parabreak".toList)] = [10] := rfl

/-! ## Bibliography blank residual lines (probe bib-res-blank)

    Probe muse-probe-suspect-notes-bib-res-blank
    (`[[bibliography]]\n: a : A\nfoo\n\nbar\n[[/bibliography]]\n((bibcite a))`)
    serves `1. A\nfoo bar`: the blank line emits nothing and leaves the
    previous-line classification as residual, so `bar` joins with one
    space. -/

/-- A blank residual line emits no bytes and no token and does not change
    the walk's classification state (probe bib-res-blank). -/
theorem suspect_notes_blank_residual_keeps_prev :
    bibWalk (litBytes "\n") .res {} [] 2 = ([], [], {}) := rfl

/-- ASCII whitespace runs in a residual body line collapse to one space.
    Probe bib-multi-space's definition value reaches the same one-space
    form through the later Tighten fold shared by reference and live; this
    law pins the residual-line half of that observed byte behavior. -/
theorem suspect_notes_residual_ws_collapse :
    collapseWs (litBytes "A   B") = litBytes "A B" := rfl

/-! ## Bibliography block boundaries (probes bib-indent2, bib-close-tail,
    bib-close-nbsp, fnb-title-brackets)

    The opener is line-anchored: an indented opener does not claim the
    block. The closer must end its line: trailing prose or a non-breaking
    space defeats the match. An attribute value containing `]]` is cut at
    the first `]` pair, so the default (absent) title is used. -/

/-- An indented `[[bibliography]]` is not a block opener
    (probe bib-indent2). -/
theorem suspect_notes_indented_opener_unclaimed :
    bibliographyFind (litBytes "x\n [[bibliography]]\n: a : A\n[[/bibliography]]") = none := rfl

/-- A closer followed by prose on its line does not close a block
    (probe bib-close-tail). -/
theorem suspect_notes_closer_with_tail_unclaimed :
    bibliographyFind (litBytes "[[bibliography]]\n: a : A\n[[/bibliography]] tail") = none := rfl

/-- The attribute group stops at the first `]]`, truncating a title value
    that contains it (probe fnb-title-brackets): the resulting title option
    is the empty string, which suppresses the title div. -/
theorem suspect_notes_bracket_in_title_truncates :
    titleOpt (some (litBytes " title=\"A")) = OptVal.str [] := rfl

/-! ## Bibcite label resolution (probe bibc-case-rev)

    Probe muse-probe-suspect-notes-bibc-case-rev
    (`((bibcite alpha))` with `: Alpha : Upper`) serves the not-found
    error span: the /i regex preserves the authored case in the label and
    the array lookup is case-sensitive. The opposite mismatch is the
    earlier pin bibc-10. -/

/-- A case-mismatched label does not resolve (probe bibc-case-rev). -/
theorem suspect_notes_bibc_case_sensitive_lookup :
    bibLookup [(litBytes "Alpha", 1)] (litBytes "alpha") = none := rfl

/-- The error span echoes the authored label's bytes unchanged
    (probe bibc-case-rev). -/
theorem suspect_notes_bibc_error_echoes_label (label : List Nat) :
    renderBibcite {} {} [("label".toList, OptVal.bytes label)] =
      litBytes "<span class=\"error-inline\">Bibliography item <em>" ++
      label ++ litBytes "</em> not found.</span>" := by
  exact bibcite_not_found {} {} label (by rfl)

end LeanFtml
