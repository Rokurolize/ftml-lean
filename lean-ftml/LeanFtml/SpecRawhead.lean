/-
  SpecRawhead — CONFIRMED live behaviors of the Raw/Rawold/Form/Heading/Toc
  render mirrors, pinned by this lane's fresh saved-page probes.

  Every statement below is a concrete option-map characterization of a
  function in `LeanFtml.RawHeadingRules`; the probe page that decided it is
  named in the comment immediately above the statement (all pages are on
  sandbox-for-codex under the permanent prefix `muse-probe-suspect-rawhead-`,
  with valid/stable/source-matched captures in conformance-suspect-rawhead/).

  Only CONFIRMED behaviors are stated. The five live divergences found by the
  lane (bare three-run, cross-line closer run >= 3, multi-newline cross-line
  body, three-run cross-line opener, and the Toc `üü` marker collision) are
  recorded as candidates in conformance-suspect-rawhead/CANDIDATES.md, not
  asserted here as properties of the current mirrors.
-/

import LeanFtml.RawHeadingRules

namespace LeanFtml

/-- `muse-probe-suspect-rawhead-run3-close2` (`A @@@x@@ B`): the opener's
    surplus `@` is part of the raw body, so the render mirror escapes and
    wraps `@x` verbatim rather than dropping the leading `@`. -/
theorem spec_raw_at_prefix_body :
    renderRaw [("text".toList, OptVal.str "@x".toList)] =
      litBytes "<span style=\"white-space: pre-wrap;\">@x</span>" := rfl

/-- `muse-probe-suspect-rawhead-trail-run4` and `-trail-run6`: the surplus `@`
    of a long closer run are literal text beside the span. The escape table
    leaves `@` unchanged, which is the render-side half of that behavior
    (the parse side is the C-SUSPECT-RAWHEAD-2 correction). -/
theorem spec_raw_escape_leaves_at_literal :
    wikidotEscapeRaw (litBytes "@@") = litBytes "@@" := rfl

/-- `muse-probe-suspect-rawhead-old-five` (`A `````x````` B`): a five-backtick
    run never becomes a Rawold token on live; when a Rawold body does contain
    backticks, the bare `htmlspecialchars` mirror leaves them literal. -/
theorem spec_rawold_backticks_literal :
    renderRawold [("text".toList, OptVal.str "```x```".toList)] =
      litBytes "```x```" := by
  have htext0 : optStrBytes [("text".toList, OptVal.str "```x```".toList)]
      "text".toList = litBytes "```x```" := rfl
  have hqc : htmlSpecialCharsCompat (litBytes "```x```") =
      litBytes "```x```" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  unfold renderRawold
  simp only [htext0, hqc] <;> rfl

/-- `muse-probe-suspect-rawhead-head-space-star` (`+ * Star`): a star after the
    whitespace run is body text, so the heading is anchored and the mirror
    emits `id="toc0"` with the literal `* Star` label handled by the caller. -/
theorem spec_heading_space_star_anchored :
    renderHeading [("type".toList, OptVal.str "start".toList),
      ("level".toList, OptVal.int 1),
      ("id".toList, OptVal.str "toc0".toList)] =
      litBytes "\n<h1 id=\"toc0\"><span>" := rfl

/-- `muse-probe-suspect-rawhead-toc-level1`: despite the Toc class comment
    saying “level-2 through level-6”, live puts a level-1 heading in the TOC;
    the mirror's margin is the level itself (`$this->min` is the constant 0). -/
theorem spec_toc_level1_margin :
    renderToc [("type".toList, OptVal.str "item_start".toList),
      ("id".toList, OptVal.str "toc0".toList),
      ("level".toList, OptVal.int 1)] =
      litBytes "\n\t<div style=\"margin-left: 1em;\"><a href=\"#toc0\">" ++
        tocStripDelim := rfl

/-- `muse-probe-suspect-rawhead-toc-level1`: the second heading keeps its
    own level (2em) rather than the minimum level. -/
theorem spec_toc_level2_margin :
    renderToc [("type".toList, OptVal.str "item_start".toList),
      ("id".toList, OptVal.str "toc1".toList),
      ("level".toList, OptVal.int 2)] =
      litBytes "\n\t<div style=\"margin-left: 2em;\"><a href=\"#toc1\">" ++
        tocStripDelim := rfl

/-- `muse-probe-suspect-rawhead-head-seven` (`+++++++ seven` with `[[toc]]`):
    seven pluses are not a heading, so the TOC has no entries and the mirror's
    `list_end` still closes the table wrapper. -/
theorem spec_toc_empty_list_end :
    renderToc [("type".toList, OptVal.str "list_end".toList),
      ("level".toList, OptVal.int 0),
      ("align".toList, OptVal.str "".toList)] =
      litBytes "\n</div></div></td></tr></table>\n\n" := rfl

end LeanFtml
