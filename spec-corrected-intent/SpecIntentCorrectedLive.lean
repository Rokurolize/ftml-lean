/-
  SpecIntentCorrectedLive.lean — NEW propositions proposed by this elaboration lane.

  These are NOT edits of lean-ftml/LeanFtml/SpecIntent.lean. The seven original
  blockquote and iftags intent statements are left byte-for-byte unchanged there and
  are classified FALSE against live in REPORT-SPECINTENT.md. Everything below is
  written from scratch by this lane to state what LIVE actually does, on the evidence
  of conformance-spec2-adjudicate/ (frozen live captures plus the reference's own
  outputs) and REPORT-AGY-SPEC2.md section 2.5/2.6.

  This file is a proposition file about the mirror, like the other spec files: it is
  deliberately NOT added to LeanFtml.lean's import list.
-/

import LeanFtml.SpecIntent

namespace LeanFtml.SpecIntent.CorrectedLive

open LeanFtml
open LeanFtml.SpecIntent

/-! ## Blockquote: live deletes, it does not preserve -/

/-- LIVE model: a `>`-leading line is kept only when it opens/continues a quote
    (`>` run followed by a space and a non-whitespace payload). A bare `>`,
    `> ` with empty payload, or a `>` run without a following space is DELETED.
    Ordinary prose lines are kept literally. This is the coordinator's
    adjudication: live deletes exactly as the reference does
    (`conformance-spec2-adjudicate/spec2-captures.json`: bq-mixed-mid,
    bq-lone-gt, bq-inside-div). -/
def blockquoteLineLiveIntent (line : List Nat) : Option BlockquoteOutSegment :=
  match classifyBlockquoteLine line with
  | .validQuoteWithSpace =>
      let depth := (line.takeWhile (· == 0x3E)).length
      let body := (line.dropWhile (· == 0x3E)).drop 1
      some (.quoted depth body)
  | .plainLine => some (.literalLine line)
  | .nospaceAfterGt | .emptyAfterGtSpace => none

/-- LIVE model of a whole run: map the per-line decision and drop the deleted
    lines, so the output can be shorter than the input. -/
def blockquoteRunLiveIntent (lines : List (List Nat)) : List BlockquoteOutSegment :=
  lines.filterMap blockquoteLineLiveIntent

theorem blockquoteLive_mixed_run_drops_middle_nospace :
    blockquoteRunLiveIntent [litBytes "> first", litBytes ">nospace", litBytes "> last"] =
      [.quoted 1 (litBytes "first"), .quoted 1 (litBytes "last")] := by
  decide

theorem blockquoteLive_lone_gt_is_dropped :
    blockquoteRunLiveIntent [litBytes "A", litBytes ">", litBytes "B"] =
      [.literalLine (litBytes "A"), .literalLine (litBytes "B")] := by
  decide

theorem blockquoteLive_nospace_variants_are_dropped :
    blockquoteLineLiveIntent (litBytes ">nospace") = none ∧
    blockquoteLineLiveIntent (litBytes ">>nospace") = none ∧
    blockquoteLineLiveIntent (litBytes ">") = none ∧
    blockquoteLineLiveIntent (litBytes "> ") = none := by
  decide

theorem blockquoteLive_run_length_is_at_most_input (lines : List (List Nat)) :
    (blockquoteRunLiveIntent lines).length ≤ lines.length := by
  unfold blockquoteRunLiveIntent
  induction lines with
  | nil => simp
  | cons hd tl ih =>
      cases h : blockquoteLineLiveIntent hd with
      | none =>
          simpa [h] using (Nat.le_trans ih (Nat.le_succ tl.length))
      | some seg =>
          simpa [h] using ih

/-! ## Iftags: live suppresses on empty fields, it does not keep -/

/-- LIVE splitter: `preg_split(';[, ]+;', trim($spec))` on a comma/space run,
    KEEPING empty fields. Empty, whitespace-only, leading-comma, trailing-comma
    and doubled-comma specs therefore produce at least one `[]` token, unlike
    `splitIftagsTokensIntent`, which discards empties. -/
def splitIftagsTokensLive (spec : List Nat) : List (List Nat) :=
  let rec go (cur : List Nat) (acc : List (List Nat)) : List Nat → List (List Nat)
    | [] => (cur.reverse :: acc).reverse
    | b :: rest =>
        if b == 0x2C || b == 0x20 then
          go [] (cur.reverse :: acc) rest
        else
          go (b :: cur) acc rest
  go [] [] (trimAllWs spec)

/-- LIVE spec parse over the empty-field-preserving split. -/
def parseIftagsSpecLive (spec : List Nat) : ParsedIftagsSpec :=
  (splitIftagsTokensLive spec).foldl (fun st t =>
    match t with
    | 0x2B :: r => { st with reqTags := st.reqTags ++ [r] }
    | 0x2D :: r => { st with notTags := st.notTags ++ [r] }
    | _ => { st with anyTags := st.anyTags ++ [t] }) { reqTags := [], notTags := [], anyTags := [] }

/-- LIVE evaluation. An empty `[]` token enters `$anyTags` (or `$reqTags`) and
    never matches a real page tag, so the body is suppressed. This is the
    coordinator's adjudication: live suppresses for the empty spec on a tagged
    page, for a lone comma, and for `+foo,` when the page carries `foo`
    (`conformance-spec2-adjudicate/spec2-captures.json`: if-empty-tagged,
    if-lone-comma-tagged, if-plusfoo-trail-tagged). -/
def evalIftagsLive (pageTags : List (List Nat)) (spec : List Nat) : Bool :=
  let ps := parseIftagsSpecLive spec
  let okReq := ps.reqTags.all (hasTagCI pageTags)
  let okNot := ps.notTags.all (fun t => !hasTagCI pageTags t)
  let okAny := ps.anyTags.isEmpty || ps.anyTags.any (hasTagCI pageTags)
  okReq && okNot && okAny

theorem iftagsLive_empty_and_commas_suppress_tagged :
    evalIftagsLive [litBytes "foo"] [] = false ∧
    evalIftagsLive [litBytes "foo"] (litBytes "   ") = false ∧
    evalIftagsLive [litBytes "foo"] (litBytes ",") = false ∧
    evalIftagsLive [litBytes "foo"] (litBytes ",,") = false := by
  decide

theorem iftagsLive_empty_and_commas_suppress_untagged :
    evalIftagsLive [] [] = false ∧
    evalIftagsLive [] (litBytes ",") = false := by
  decide

theorem iftagsLive_plus_trailing_comma_suppresses :
    evalIftagsLive [litBytes "foo"] (litBytes "+foo,") = false ∧
    evalIftagsLive [litBytes "foo"] (litBytes ",+foo") = false ∧
    evalIftagsLive [litBytes "foo", litBytes "bar"] (litBytes "+foo, +bar,") = false := by
  decide

theorem iftagsLive_dangling_signs_suppress :
    evalIftagsLive [litBytes "foo"] (litBytes "-,") = false ∧
    evalIftagsLive [litBytes "foo"] (litBytes "+,") = false ∧
    evalIftagsLive [] (litBytes ",-foo") = false := by
  decide

theorem iftagsLive_wellformed_tagged_keeps :
    evalIftagsLive [litBytes "foo"] (litBytes "+foo") = true ∧
    evalIftagsLive [litBytes "foo"] (litBytes "foo,") = true ∧
    evalIftagsLive [litBytes "foo"] (litBytes "-bar") = true := by
  decide

end LeanFtml.SpecIntent.CorrectedLive
