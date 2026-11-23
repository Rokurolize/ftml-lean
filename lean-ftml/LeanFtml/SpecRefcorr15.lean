/-
  SpecRefcorr15.lean — REFCORR15-FINAL closed regression pins covering all
  Class 1 (Math +5 AMS envs, Image style trim, Embed sanitizer, Gallery ltrim)
  and diagnostic (Raw @<...>@, Freelink /path + 60-char slug cap, Emphasis,
  Strikethrough Span-end guard, Iftags [[#if ...]]) mirrors on Lean 4.37.0-rc1.
-/

import LeanFtml.ParaRules
import LeanFtml.ServingRules
import LeanFtml.CodeEmbedRender
import LeanFtml.FormRawRules
import LeanFtml.LinkRules
import LeanFtml.Inline2Rules
import LeanFtml.NextRules

namespace LeanFtml

-- Class 1 Math +5 AMS environments
theorem r15_math_alignat_valid : mathTypeValid (litBytes "alignat") = true := rfl
theorem r15_math_alignat_star_valid : mathTypeValid (litBytes "alignat*") = true := rfl
theorem r15_math_gathered_valid : mathTypeValid (litBytes "gathered") = true := rfl
theorem r15_math_aligned_valid : mathTypeValid (litBytes "aligned") = true := rfl
theorem r15_math_alignedat_valid : mathTypeValid (litBytes "alignedat") = true := rfl
theorem r15_math_cases_valid : mathTypeValid (litBytes "cases") = true := rfl

-- Class 1 Image style full trim vs link right-trim
theorem r15_image_style_trims_lead :
    imageTrimAttr (litBytes "style") (litBytes " color:red ") = litBytes "color:red" := rfl

theorem r15_image_link_keeps_lead :
    imageTrimAttr (litBytes "link") (litBytes " a ") = litBytes " a" := rfl

-- Class 1 Embed event boundary + single-quote + data: scheme -> empty
theorem r15_embed_underscore_event_caught :
    hasEventAttr
      (litBytes "<iframe src=\"http://wikimapia.org/s/x\" _onclick=\"evil()\"></iframe>") =
      true := by
  decide

theorem r15_embed_data_scheme_caught :
    valueHasBadScheme (litBytes "data:text/html,hi") = true := by
  decide

set_option maxRecDepth 8192 in
theorem r15_embed_srcdoc_sq_js_empty :
    renderEmbedWith [anyiframeFixture]
      [("content".toList,
        .str "<iframe src=\"http://example.com\" srcdoc='javascript:alert(1)'></iframe>".toList)] =
      [] := rfl

set_option maxRecDepth 8192 in
theorem r15_embed_srcdoc_sq_vbs_empty :
    renderEmbedWith [anyiframeFixture]
      [("content".toList,
        .str "<iframe src=\"http://example.com\" srcdoc='vbscript:msgbox(1)'></iframe>".toList)] =
      [] := rfl

set_option maxRecDepth 8192 in
theorem r15_embed_srcdoc_data_empty :
    renderEmbedWith [anyiframeFixture]
      [("content".toList,
        .str "<iframe src=\"http://example.com\" srcdoc=\"data:text/html,hi\"></iframe>".toList)] =
      [] := rfl

-- Class 1 Gallery link ltrim
theorem r15_gallery_lead_space_js :
    gallerySanitizeHref (litBytes "  javascript:alert(1)") = [35] := rfl

theorem r15_gallery_tab_js :
    gallerySanitizeHref (litBytes "\tjavascript:alert(1)") = [35] := rfl

theorem r15_gallery_lead_space_vbs :
    gallerySanitizeHref (litBytes "  vbscript:msgbox(1)") = [35] := rfl

-- Diagnostic Raw @<...>@ + AT4 @<@@@@>@
theorem r15_raw_angle_basic :
    rawScan none (litBytes "@<x>@") [] 6 =
      (phBytes 0, [{ rule := "Raw", opts := [("text".toList, OptVal.str "x".toList)] }]) := rfl

theorem r15_raw_angle_at4 :
    rawScan none (litBytes "@<@@@@>@") [] 9 =
      (phBytes 0, [{ rule := "Raw", opts := [("text".toList, OptVal.str "@@@@".toList)] }]) := rfl

-- Diagnostic Freelink /path + 60-char slug cap
theorem r15_freelink_abs_path :
    (freelinkProcess (litBytes "[[[/scp-9179/offset/1|NEXT]]]")
      (litBytes "/scp-9179/offset/1") (litBytes "|NEXT") []).2 =
      [{ rule := "Freelink", opts :=
          [("site".toList, OptVal.null),
           ("page".toList, OptVal.str []),
           ("text".toList, OptVal.str "NEXT".toList),
           ("anchor".toList, OptVal.str []),
           ("extra".toList, OptVal.str []),
           ("url".toList, OptVal.str "/scp-9179/offset/1".toList),
           ("textFromTitle".toList, OptVal.null)] }] := rfl

theorem r15_freelink_slug_cap_60 :
    (capSlug60 (toUnixName (litBytes
      "Interlude - Excerpt from an Auction Catalog, Marshall Carter and Dark, 2012"))).length =
      60 := rfl

theorem r15_freelink_slug_cap_trailing_dash :
    capSlug60 (toUnixName (litBytes
      "The Previous Segment Was Brought to You by a Grant from the Wondertainment Holiday Fund and by Viewers Like You")) =
      litBytes "the-previous-segment-was-brought-to-you-by-a-grant-from-the" := rfl

-- Diagnostic Emphasis & Strikethrough Span-end guard
theorem r15_emphasis_quad_empty :
    emphasisMatch (litBytes "////") [] = some ([], [], []) := rfl

theorem r15_strikethrough_skips_span_end :
    let toks : List TokenEntry :=
      [{ rule := "Span", opts := [("type".toList, OptVal.str "end".toList)] }]
    let inp := litBytes "--" ++ phBytes 0 ++ litBytes " --y--"
    (pregScan strikethroughMatch inp toks).1 =
      litBytes "--" ++ phBytes 0 ++ litBytes " " ++ phBytes 1 ++ litBytes "y" ++ phBytes 2 := rfl

-- Diagnostic Iftags [[#if ...]]
theorem r15_iftags_hash_if_d42 :
    evalHashIf (litBytes "[[div [[#if {$nohide} |  | class=\"colmod-link-end\" ]] ]]") =
      litBytes "[[div  ]]" := rfl

end LeanFtml
