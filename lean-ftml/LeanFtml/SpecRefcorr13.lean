/-
  SpecRefcorr13.lean — REFCORR13 closed pin file for C-R5F-P2-2 and
  C-R5F-R3-3 (2026-11-23). This file is deliberately unimported by
  LeanFtml.lean and Main.lean, exactly like SpecRefcorr6 through
  SpecRefcorr11, and is elaborated in isolation through the serial queue
  wrapper. Live Wikidot behavior is definitional; the evidence order is the
  ftml corpus and integration pins, frozen parity captures, then the cached
  round-5f sandbox probes. C-R5F-P2-2: live rejects digit-bearing Math
  environment names (witness `align2` in conformance-round5f-p2), so the
  accepted alphabet narrows from `^[a-z][a-z0-9]*$` to `^[a-z]+$`. C-R5F-R3-3:
  live keeps a bare form feed as the authored-break witness before a single
  LF (witness R3F-16 in conformance-round5f-r3), so the discarded C0 drop is
  moved after the break predicate and the render separator excludes FF.
  Every pin is a closed rfl reduction or a closed by-decide computation with
  no unproved placeholder, no native trust shortcut and no decision-procedure
  trust axiom; the axiom set is within [propext, Classical.choice, Quot.sound].
  All prose is flowing single-line paragraphs, never hard-wrapped.
-/

import LeanFtml.NextRules
import LeanFtml.ServingRules
import LeanFtml.ServingRender
import LeanFtml.NotesRules
import LeanFtml.NotesRender

namespace LeanFtml

private def r13EmptyRaw : List TokenEntry :=
  [ { rule := "Raw", opts := [("text".toList, OptVal.str [])] },
    { rule := "Raw", opts := [("text".toList, OptVal.str [])] },
    { rule := "Raw", opts := [("text".toList, OptVal.str [])] } ]

-- C-R5F-P2-2: the environment-name alphabet is letters only.
theorem refcorr13_math_digit_name_invalid :
    mathTypeValid (litBytes "align2") = false := rfl

theorem refcorr13_math_digitfree_name_valid :
    mathTypeValid (litBytes "align") = true := rfl

theorem refcorr13_math_gather_valid :
    mathTypeValid (litBytes "gather") = true := rfl

theorem refcorr13_math_empty_invalid :
    mathTypeValid [] = false := rfl

theorem refcorr13_math_upper_invalid :
    mathTypeValid (litBytes "ALIGN") = false := rfl

theorem refcorr13_math_align2_unsupported :
    renderMath [("content".toList, .str "x".toList),
        ("type".toList, .str "align2".toList)] =
      litBytes "<div class=\"error-block\">Unsupported math " ++
        litBytes "environment \"align2\"</div>" := rfl

-- REFCORR11 absent-type and counter pins still hold (NO FLIP).
theorem refcorr13_math_absent_defaults_equation :
    (match (mathProcess none [] (litBytes "x") {}).1 with
     | some e => omGet e.opts "type".toList
     | none => none) = some (OptVal.str "equation".toList) := rfl

theorem refcorr13_math_counter_on_digit_name :
    (mathProcess none (litBytes "type=\"align2\"") (litBytes "x") {}).2.mathId = some 2 := rfl

-- C-R5F-R3-3: the FF witness survives the break predicate and is stored.
theorem refcorr13_fn_bare_ff_before_lf_keeps_witness :
    (footnoteProcess ([12] ++ litBytes "\n" ++ litBytes "X") {} r13EmptyRaw).2.2.footnotes =
      [[12, 10, 88]] := rfl

theorem refcorr13_fn_ff_flank_keeps_witness :
    (footnoteProcess (phBytes 0 ++ [12] ++ litBytes "\n" ++ phBytes 1) {} r13EmptyRaw).2.2.footnotes =
      [phBytes 0 ++ [12] ++ litBytes "\n" ++ phBytes 1] := rfl

-- REFCORR10/11 fallback pins still hold (NO FLIP): no single authored break.
theorem refcorr13_fn_ff_double_lf_folds :
    (footnoteProcess (phBytes 0 ++ [12] ++ litBytes "\n\n" ++ phBytes 1) {} r13EmptyRaw).2.2.footnotes = [[]] := rfl

theorem refcorr13_fn_ff_no_lf_folds :
    (footnoteProcess (phBytes 0 ++ [12] ++ phBytes 1) {} r13EmptyRaw).2.2.footnotes = [[]] := rfl

-- REFCORR12 ESC pins still hold (NO FLIP).
theorem refcorr13_fn_esc_kept :
    (footnoteProcess (litBytes "A" ++ [27] ++ litBytes "B") {} r13EmptyRaw).2.2.footnotes =
      [[65, 27, 66]] := rfl

theorem refcorr13_discarded_class_unchanged :
    isLiveDroppedControl 12 = true ∧ isLiveDroppedControl 27 = false := by
  exact ⟨rfl, rfl⟩

-- The render separator excludes FF just as Footnoteitem.php's
-- `[^ \t\n\r\x0B\x0C]` class does, so the bare witness emits no space.
theorem refcorr13_lead_visible_excludes_ff :
    (footnoteLeadVisible (fun k => r13EmptyRaw[k]?) ([12, 10, 88])).isEmpty = true := rfl

theorem refcorr13_lead_visible_keeps_nbsp :
    (footnoteLeadVisible (fun k => r13EmptyRaw[k]?) ([194, 160, 10, 88])).isEmpty = false := rfl

-- The fossil separator class excluded only VT and FF; live excludes the whole
-- discarded set, so an SOH witness (cached R3E-03) supplies no separator space.
theorem refcorr13_lead_visible_excludes_soh :
    (footnoteLeadVisible (fun k => r13EmptyRaw[k]?) ([1, 10, 88])).isEmpty = true := rfl

-- ESC is NOT in the discarded set and stays visible on a literal ESC body.
theorem refcorr13_lead_visible_keeps_esc :
    (footnoteLeadVisible (fun k => r13EmptyRaw[k]?) ([27, 10, 88])).isEmpty = false := rfl

end LeanFtml
