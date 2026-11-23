/-
  SpecRefcorr13Agy2.lean — REFCORR13 R13-AGY2 closed regression pins for the
  AGY-HUNT confirmed divergences D08, D10, D11, D13 and D14 (2026-11-23).
  This file is deliberately unimported by LeanFtml.lean and Main.lean and is
  elaborated in isolation through the serial queue wrapper, exactly like
  SpecRefcorr13. Live Wikidot behavior is definitional; every witness here
  comes from the frozen agy-proof-policy/conformance-agy-hunt captures and
  the cached round-5f Math capture, never from a new live probe. D08
  SUPERSEDES the R13-MATHNOTES `^[a-z]+$` acceptance rule: live strips every
  `*` and then checks a fixed AMS allowlist. D10 changes the Button guard
  from falsy text to absent text; D11 changes the Tabview title guard from
  strict empty to PHP falsy; D13 supplies the harness page-title oracle;
  D14 extends the measured module allowlist. Every pin is a closed rfl
  reduction or a closed by-decide computation with no unproved placeholder,
  no native trust shortcut and no decision-procedure trust axiom; the axiom
  set stays within [propext, Classical.choice, Quot.sound]. All prose is
  flowing single-line paragraphs, never hard-wrapped.
-/

import LeanFtml.NextRules
import LeanFtml.ServingRules
import LeanFtml.ServingRender
import LeanFtml.RenderEnv
import LeanFtml.InteractiveRules
import LeanFtml.InteractiveRender
import LeanFtml.ContainRules
import LeanFtml.CoverageServe

namespace LeanFtml

-- D08: starred AMS names are accepted after stripping; arbitrary names and
-- digit-bearing names are rejected. The align2 rejection is shared with,
-- and subsumed by, R13-MATHNOTES rather than layered on top of its regex.
theorem agy2_math_align_star_valid :
    mathTypeValid (litBytes "align*") = true := rfl

theorem agy2_math_gather_star_valid :
    mathTypeValid (litBytes "gather*") = true := rfl

theorem agy2_math_equation_star_valid :
    mathTypeValid (litBytes "equation*") = true := rfl

theorem agy2_math_foobar_invalid :
    mathTypeValid (litBytes "foobar") = false := rfl

theorem agy2_math_flalign_invalid :
    mathTypeValid (litBytes "flalign") = false := rfl

theorem agy2_math_align2_invalid :
    mathTypeValid (litBytes "align2") = false := rfl

theorem agy2_math_trailing_space_invalid :
    mathTypeValid (litBytes "align ") = false := rfl

theorem agy2_math_star_middle_stripped :
    mathStripStar (litBytes "a*b") = litBytes "ab" := rfl

theorem agy2_math_star_middle_error :
    renderMath [("content".toList, .str "x".toList),
        ("type".toList, .str "a*b".toList)] =
      litBytes "<div class=\"error-block\">Unsupported math " ++
        litBytes "environment \"ab\"</div>" := rfl

-- D10: a present-but-falsy text is an ordinary render, an absent key is the
-- dedicated error. The two falsy spellings produce byte-identical anchors.
theorem agy2_button_text_zero_renders_anchor :
    renderButton [("type".toList, .str "set-tags".toList),
        ("text".toList, .str "0".toList)] =
      renderButton [("type".toList, .str "set-tags".toList),
        ("text".toList, .str "".toList)] := rfl

theorem agy2_button_absent_text_error :
    renderButton [("type".toList, .str "set-tags".toList)] =
      litBytes "<div class=\"error-block\">" ++
        litBytes "You need to set text for set-tags button.</div>" := rfl

theorem agy2_button_mode_of_text_zero :
    buttonModeOf [("type".toList, .str "set-tags".toList),
        ("text".toList, .str "0".toList)] = .ok .setTags false false false := rfl

-- D11: PHP falsy title defaulting for the positional and named zero forms.
theorem agy2_tab_zero_untitled :
    tabTitle (litBytes "0") = litBytes "untitled" := rfl

theorem agy2_tab_title_zero_untitled :
    tabTitle (litBytes "  0  ") = litBytes "untitled" := rfl

theorem agy2_tab_nonzero_kept :
    tabTitle (litBytes "1") = litBytes "1" := rfl

-- D14: the nine measured standard modules are available; genuinely absent
-- names still take the "No such module" error path.
theorem agy2_module_newpage_available :
    moduleAvailableNames.contains (asciiLowerBytes (litBytes "NewPage")) = true := rfl

theorem agy2_module_pagetags_unavailable :
    moduleAvailableNames.contains (asciiLowerBytes (litBytes "PageTags")) = false := rfl

theorem agy2_harness_module_newpage :
    harnessEnv.moduleAvailable (litBytes "NewPage") = true := by decide

-- D13: the pre-created target page exists and its authored title is now a
-- measurable RenderEnv oracle instead of an undefined stub.
theorem agy2_harness_target_exists :
    harnessEnv.pageExists (litBytes "muse-probe-agy-hunt-title-target") = true := by decide

theorem agy2_harness_target_title :
    harnessEnv.pageTitle (litBytes "muse-probe-agy-hunt-title-target") =
      some (litBytes "Hunt's \"Title\" & <Test>") := rfl

end LeanFtml
