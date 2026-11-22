/-
  SpecBlock.lean — CONFIRMED live behaviors of the Blockquote, Iftags and
  Comment families, as Lean propositions about the family's mirror
  functions. Every statement names the fresh sandbox probe page (or pages)
  that pin it immediately above the statement; all named pages are on
  sandbox-for-codex under the kept prefix `muse-probe-suspect-block-`,
  captured in this tree's conformance-suspect-block/captures*.json with
  valid=true, stable=true and saved_source_matches=true. The two
  coordinator leads are settled by these fresh captures: `>nospace` renders
  nothing (bq-nospace-only, bq-nospace-then-text, bq-nospace-run) and a
  trailing comma in an Iftags spec poisons the any-tag path
  (if-trail-plus-tagged, if-trail-plus-untag), while a trailing comma after
  a bare tag is harmless (if-trail-bare-tagged). No divergence was found,
  so no C-SUSPECT-BLOCK candidate is asserted here.

  This file adds no new mirror definitions. It states closed computations
  about LeanFtml.BlockRules (bqLine, blockquoteProcess), LeanFtml.NextRules
  (splitSpec, iftagsGate, iftagsPattern, iftagsScan, commentMatchAt,
  commentMatches, lastNlBefore) and LeanFtml.ProseRules (renderBlockquote,
  renderComment). No ftml file was edited and no cargo was run.
-/

import LeanFtml.BlockRules
import LeanFtml.ProseRules

namespace LeanFtml

/-! ## Blockquote -/

/-- Probe `muse-probe-suspect-block-bq-nospace-only`: the inner line
    grammar requires a space after the marker run, so a no-space line is
    not a quote line. -/
theorem suspect_bq_nospace_line_unmatched :
    bqLine (litBytes ">nospace\n") = none := rfl

/-- Probe `muse-probe-suspect-block-bq-multi-nospace`: the space is
    required after the whole contiguous marker run, not after one marker. -/
theorem suspect_bq_multi_marker_nospace_unmatched :
    bqLine (litBytes ">>>nospace\n") = none := rfl

/-- Probes `muse-probe-suspect-block-bq-raw-nospace` (coordinator x07) and
    `...-bq-comment-after-marker`: the space requirement is byte-level, so a
    line whose non-space content is a Raw placeholder or an already-removed
    Comment span is deleted just like plain `>nospace`. -/
theorem suspect_bq_nonspace_content_still_unmatched :
    bqLine (litBytes ">@@hello@@\n") = none := rfl

/-- Probe `muse-probe-suspect-block-bq-comment-tail-text`: after Comment
    removes the span, the surviving double space still satisfies the single
    literal space and the first space becomes body text. -/
theorem suspect_bq_comment_tail_leaves_spaced_marker :
    bqLine (litBytes ">  q\n") = some (1, litBytes " q\n") := rfl

/-- Probe `muse-probe-suspect-block-bq-space-control`: one literal space
    after the markers is enough to produce a body line. -/
theorem suspect_bq_space_after_marker_required :
    bqLine (litBytes "> nospace\n") = some (1, litBytes "nospace\n") := rfl

/-- Probes `muse-probe-suspect-block-bq-nospace-only` and
    `...-bq-nospace-run`: an all-unmatched run is replaced by two newlines
    with no Blockquote token, so the line is silently deleted. -/
theorem suspect_bq_nospace_run_emits_no_tokens :
    blockquoteProcess (litBytes ">nospace\n") [] = ([10, 10], []) := rfl

theorem suspect_bq_nospace_multi_run_emits_no_tokens :
    blockquoteProcess (litBytes ">one\n>two\n") [] = ([10, 10], []) := rfl

/-- Probe `muse-probe-suspect-block-bq-spaced-marker`: a space between
    marker runs makes the second run ordinary body text at level one. -/
theorem suspect_bq_spaced_marker_is_level_one_body :
    bqLine (litBytes "> > q\n") = some (1, litBytes "> q\n") := rfl

/-- Probe `muse-probe-suspect-block-bq-nbsp-only`: PHP trim()'s byte set
    excludes the UTF-8 non-breaking space, so an NBSP-only body keeps its
    quote. Live spells the byte as `&nbsp;`, a serializer surface. -/
theorem suspect_bq_nbsp_body_survives_ascii_trim :
    bqLine ([62, 32, 194, 160, 10]) = some (1, [194, 160, 10]) := rfl

theorem suspect_bq_nbsp_not_removed_by_trim :
    trimBytes [194, 160, 10] = [194, 160] := rfl

/-- Probe `muse-probe-suspect-block-bq-space-control` and the R2-BLOCK
    depth probes: the R2-BLOCK C1 render correction leaves `level` unused. -/
theorem suspect_bq_render_ignores_level :
    renderBlockquote [("type".toList, OptVal.str "start".toList),
      ("level".toList, OptVal.int 2)] = litBytes "<blockquote>" := rfl

/-! ## Iftags -/

/-- Probe `muse-probe-suspect-block-if-trail-plus-tagged`: preg_split keeps
    the trailing empty field. -/
theorem suspect_if_trailing_comma_keeps_empty_spec_field :
    splitSpec (litBytes "+alpha,") = [litBytes "+alpha", []] := rfl

/-- Probes `...-if-trail-plus-tagged` and `...-if-trail-plus-untag`: the
    empty field is an any-tag condition, so a satisfied required tag cannot
    keep the body. -/
theorem suspect_if_trailing_comma_plus_drops_body :
    iftagsGate [litBytes "alpha"] (some (litBytes "+alpha,")) = false := rfl

theorem suspect_if_plain_plus_keeps_body :
    iftagsGate [litBytes "alpha"] (some (litBytes "+alpha")) = true := rfl

/-- Probe `...-if-trail-bare-tagged`: the any-tag loop returns at its first
    hit, so an empty field after a matching bare tag is harmless. -/
theorem suspect_if_trailing_comma_bare_keeps_body :
    iftagsGate [litBytes "alpha"] (some (litBytes "alpha,")) = true := rfl

/-- Probes `...-if-lead-comma-tagged`, `...-if-double-comma-tagged`,
    `...-if-trail-minus-tagged` and `...-if-trail-forbid-hit-tagged`. -/
theorem suspect_if_leading_comma_drops_body :
    iftagsGate [litBytes "alpha"] (some (litBytes ",+alpha")) = false := rfl

theorem suspect_if_doubled_comma_drops_body :
    iftagsGate [litBytes "alpha"] (some (litBytes "+alpha,,")) = false := rfl

theorem suspect_if_trailing_comma_forbidden_drops_body :
    iftagsGate [litBytes "alpha"] (some (litBytes "-beta,")) = false := rfl

theorem suspect_if_trailing_comma_forbidden_hit_drops_body :
    iftagsGate [litBytes "alpha"] (some (litBytes "-alpha,")) = false := rfl

/-- Probe `muse-probe-suspect-block-if-comma-space-multi-tagged` (page
    tagged alpha and beta): a comma-and-space run is one separator, so both
    required tags are recognised and the body is kept. -/
theorem suspect_if_comma_space_run_splits_cleanly :
    splitSpec (litBytes "+alpha, +beta") = [litBytes "+alpha", litBytes "+beta"] := rfl

theorem suspect_if_comma_space_multi_keeps_body :
    iftagsGate [litBytes "alpha", litBytes "beta"]
      (some (litBytes "+alpha, +beta")) = true := rfl

/-- Probe `muse-probe-suspect-block-if-only-comma-tagged`: a spec of only a
    comma splits to two empty any-tags and drops the body. -/
theorem suspect_if_only_comma_splits_to_two_empty_fields :
    splitSpec (litBytes ",") = [[], []] := rfl

theorem suspect_if_only_comma_drops_body :
    iftagsGate [litBytes "alpha"] (some (litBytes ",")) = false := rfl

/-- Probes `muse-probe-suspect-block-if-trail-forbid-untag` and
    `...-if-lead-forbid-untag`, the coordinator's exact p28 and f08 shapes. -/
theorem suspect_if_trailing_comma_forbidden_untagged_drops_body :
    iftagsGate [] (some (litBytes "-foo,")) = false := rfl

theorem suspect_if_leading_comma_forbidden_untagged_drops_body :
    iftagsGate [] (some (litBytes ",-foo")) = false := rfl

/-- Probes `...-if-dangling-minus-tagged` and `...-if-dangling-minus-untag`:
    a bare minus is a forbidden empty tag, which no page tag matches. -/
theorem suspect_if_dangling_minus_keeps_body :
    iftagsGate [] (some (litBytes "-")) = true := rfl

/-- Probe `...-if-empty-untag`: the empty spec splits to one empty any-tag. -/
theorem suspect_if_empty_spec_drops_body :
    iftagsGate [] (some (litBytes "")) = false := rfl

/-- Probe `...-if-case-plus-tagged`: tag matching is ASCII case-insensitive. -/
theorem suspect_if_case_insensitive_tag :
    iftagsGate [litBytes "alpha"] (some (litBytes "+ALPHA")) = true := rfl

/-- Probe `...-if-newline-tagged`: the opener spec admits a newline but the
    split is only on comma and space, so the two conditions are one token. -/
theorem suspect_if_newline_spec_drops_body :
    iftagsGate [litBytes "alpha"] (some (litBytes "+alpha\n+beta")) = false := rfl

/-- Probe `...-if-nospace-tagged`: the opener requires whitespace before
    the spec, so the fused spelling has no match at all. -/
theorem suspect_if_fused_opener_has_no_match :
    iftagsPattern (litBytes "[[iftags+alpha]]KEEP[[/iftags]]") 1 = [] := rfl

/-- Probe `...-if-spec-comment-tagged`: Iftags runs before Comment and its
    `[^\]]*` cannot cross the comment's `]`, so the opener never matches. -/
theorem suspect_if_comment_in_spec_blocks_opener :
    iftagsPattern (litBytes "[[iftags [!--x--]+alpha]]KEEP[[/iftags]]") 1 = [] := rfl

/- The nested-gate result of probe `muse-probe-suspect-block-if-nested-tagged`
   is recorded in the report from the live capture and the reference render;
   it is not restated as a closed `rfl` here because enumerating the mirror's
   recursive Iftags body candidates for that 58-byte source exceeds this
   tree's kernel-reduction budget. No mirror definition was changed. -/

/-! ## Comment -/

/-- Probe `...-cm-basic-inline`: the ordinary span is matched and removed. -/
theorem suspect_cm_span_matched :
    commentMatchAt (litBytes "[!-- hide --]") =
      some (litBytes "[!-- hide --]") := rfl

/-- Probes `...-cm-own-line` and `...-cm-two-lines`: the leading newline is
    part of the match, so a comment-only line consumes it. -/
theorem suspect_cm_match_consumes_leading_newline :
    commentMatches (litBytes "a\n[!-- hide --]\nb") =
      [(1, litBytes "\n[!-- hide --]")] := rfl

theorem suspect_cm_two_inline_spans :
    (commentMatches (litBytes "[!-- a --]X[!-- b --]Y")).length = 2 := rfl

/-- Probe `...-cm-nested`: the first closer wins and the leftover `--]`
    is later spelled as an em dash plus `]`. -/
theorem suspect_cm_nesting_first_closer_wins :
    (commentMatches (litBytes "a[!--x[!--y--]z--]b")).head?.map (fun p => p.2) =
      some (litBytes "[!--x[!--y--]") := rfl

/-- Probe `...-cm-extra-hyphen`: the lazy body absorbs the extra hyphen. -/
theorem suspect_cm_extra_hyphen_absorbed_by_body :
    (commentMatches (litBytes "A[!-- hide ---]B")).head?.map (fun p => p.2) =
      some (litBytes "[!-- hide ---]") := rfl

/-- Probe `...-cm-unterminated`: without a closer there is no match. -/
theorem suspect_cm_unterminated_has_no_match :
    commentMatchAt (litBytes "A[!-- hide B") = none := rfl

/-- Probe `...-cm-multiline`: the `s` modifier makes the body dot-all. -/
theorem suspect_cm_multiline_body :
    commentMatchAt (litBytes "[!-- a\nb --]\nX") =
      some (litBytes "[!-- a\nb --]") := rfl

/-- Probe `...-cm-indented`: the indented-only branch measures a whitespace
    prefix back to the previous newline; NBSP is not in that class
    (probe `...-cm-nbsp-indent`). -/
theorem suspect_cm_indented_prefix_offset :
    lastNlBefore (litBytes "a\n  [!--c--]\nb") 4 = 2 := rfl

theorem suspect_cm_render_is_empty :
    renderComment = [] := rfl

end LeanFtml
