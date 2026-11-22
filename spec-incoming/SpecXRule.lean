/-
  SpecXRule.lean — CONFIRMED cross-rule seam behaviors, stated as Lean
  propositions about the existing mirror functions.

  Each statement names the fresh sandbox probe page(s) that pin it.
  All named pages are on sandbox-for-codex under the permanent prefix
  `muse-probe-suspect-xrule-`, with captures in
  conformance-suspect-xrule/captures-b*.json of this tree; every page
  used here is valid=true, stable=true and saved_source_matches=true.
  Earlier programme pins are named where they independently settle the
  same seam.

  The file adds no new mirror definitions. Every proposition is a
  closed computation about a mirror in FrameRules.lean, LinkRules.lean,
  FormRawRules.lean, Inline1Rules.lean or Inline3Rules.lean, so each
  proof is `rfl`. Divergences are deliberately NOT stated here: they
  and their mirror consequences are in the candidate and correction
  records under conformance-suspect-xrule/.
-/

import LeanFtml.FrameRules
import LeanFtml.LinkRules
import LeanFtml.FormRawRules
import LeanFtml.Inline1Rules
import LeanFtml.Inline3Rules

namespace LeanFtml

/-! ## Prefilter reshapes source before Code owns its body (S16)

    Probe muse-probe-suspect-xrule-x16-pre-code-3blanks keeps the
    reference's collapsed blank line inside a Code body on live:
    `[[code]]a\n\n\n\nb[[/code]]` serves one blank line, not three.
    Prefilter is rule 2 and Code is rule 4, so the compression happens
    before the body is claimed. Earlier pin: R2 frame probes. -/

theorem suspect_prefilter_compresses_blank_runs_before_code :
    compressNL ("a\n\n\n\nb".toList) = "a\n\nb".toList := rfl

/-! ## Concatlines joins a continuation into later block openers (S6, S7)

    Probes muse-probe-suspect-xrule-x6-concat-heading and
    -x7-concat-list: a line continued with a trailing backslash before
    `+ Heading` or `* item` yields one paragraph `A+ Heading` / `A* item`
    on live, byte-identical to the reference. Concatlines' only exemption
    is a standalone div opener, and the later Heading/List rules see the
    joined line. -/

theorem suspect_concat_joins_heading_opener :
    concatScan (litBytes "A\\\n+ Heading") = litBytes "A+ Heading" := rfl

theorem suspect_concat_joins_list_opener :
    concatScan (litBytes "A\\\n* item") = litBytes "A* item" := rfl

/-! ## A Raw construct that Raw declines is still joined (S17)

    Probe muse-probe-suspect-xrule-x17-concat-raw: a non-empty
    multi-line Raw body is rejected by Raw, and the later Concatlines
    pass joins the backslash continuation, leaving `@@xy@@` literal on
    both live and the reference. Raw is never re-run. -/

theorem suspect_concat_joins_declined_raw :
    concatScan (litBytes "@@x\\\ny@@") = litBytes "@@xy@@" := rfl

/-! ## An earlier placeholder is a legal Email label on live (S3, S21, S22)

    Probes muse-probe-suspect-xrule-x3-email-raw-label,
    -x21-email-url-label, -x22-email-newline-label, -x40-email-raw-shift3:
    the described Email label is a lazy tail with no delimiter guard, so
    a Url/Raw/Newline placeholder inside it is stored in the `text`
    option and its decimal index is visible in the served obfuscated
    span. The mirror's `textVal` deliberately keeps a byte-valued option
    as bytes; this theorem pins the claim, not the renderer, and shows
    the placeholder is admitted where Url and Interwiki reject it. -/

theorem suspect_email_descr_label_admits_placeholder :
    emailDescrMatch (litBytes "[a@example.com " ++ phBytes 7 ++ litBytes "]") [] =
      some ([], phBytes 0,
        [{ rule := "Email", opts :=
           [("email".toList, OptVal.str "a@example.com".toList),
            ("text".toList, OptVal.bytes (phBytes 7))] }]) := rfl

/-! ## Url and Interwiki keep their delimiter guards (S9, S10)

    Probes muse-probe-suspect-xrule-x9-iw-raw-label and
    -x10-url-raw-label: an earlier placeholder in a described label
    makes both forms literal on live, with the inner tokens rendering
    normally. These are the settled x44 guard in a different position;
    the mirror's byte classes exclude 0xFF. -/

theorem suspect_url_descr_label_rejects_placeholder :
    urlDescrMatch (litBytes "[http://example.com/a " ++ phBytes 7 ++ litBytes "]") [] = none := rfl

theorem suspect_interwiki_descr_label_rejects_placeholder :
    interwikiDescrMatch (litBytes "[wikipedia:X " ++ phBytes 7 ++ litBytes "]") [] = none := rfl

/-! ## Rawold's body class admits an earlier placeholder (S11)

    Probe muse-probe-suspect-xrule-x11-rawold-comment: a placeholder
    inside a double-backtick span is admitted by the body matcher on
    both sides (the Comment token renders to nothing there, so the live
    bytes alone do not discriminate; the x1 probe does). The theorem
    pins the matcher's class, not a rendered artifact. -/

theorem suspect_rawold_body_admits_placeholder :
    rawoldBody (litBytes "``" ++ phBytes 2 ++ litBytes "``") = some (phBytes 2) := rfl

/-! ## Tighten folds residual text, not a claimed body (S16 control)

    Probe muse-probe-suspect-xrule-x16-pre-code-3blanks again: the
    whitespace fold belongs to residual source only. A Code body is a
    token option, so it survives with exactly the shape Prefilter gave
    it; the fold helper's action on residual text is pinned here. -/

theorem suspect_tighten_folds_residual_run :
    collapsePad (litBytes "a  b") = litBytes "a b" := rfl

end LeanFtml
