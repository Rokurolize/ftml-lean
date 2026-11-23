/-
  SpecRefcorr11.lean — REFCORR11 closed pin file for C-R5D-P2-4, the absent-type Math default (2026-11-23). This file is deliberately unimported by LeanFtml.lean and Main.lean, exactly like SpecRefcorr8.lean and SpecRefcorr9.lean, and is elaborated in isolation through the serial queue wrapper. Live Wikidot behavior is definitional; the evidence order is ftml corpus and integration pins, then frozen parity captures, then cached single-fetch live sandbox probes. The decisive capture is muse-probe-round5d-p2-r5dp2-20 in conformance-round5d-p2/captures.json (valid=true, stable=true, saved_source_matches=true, html_sha256 e504bd63f5c257493a0bd835e3359b4574ca995dfdaf283fa88623fea08d5a1f): source `[[math]]\nx\n[[/math]]` serves `<span class="equation-number">(1)</span>\n<div class="math-equation" id="equation-1">\begin{equation} x \end{equation}</div>`. The reference token at conformance-round5d-p2/ref-tokens.jsonl line 20 had type `align` with id 1, so REFCORR11 retires the REFCORR3 absent-type default and selects the fossil `equation` fallback whenever no exact lower-case `type` key is recognized. Every pin is a closed rfl reduction or by-decide computation with no unproved placeholder, no native trust shortcut and no decision-procedure trust axiom; the axiom set is within [propext, Classical.choice, Quot.sound]. All prose is flowing single-line paragraphs, never hard-wrapped.
-/

import LeanFtml.NextRules
import LeanFtml.ServingRules

set_option maxRecDepth 200000
set_option maxHeartbeats 2000000

namespace LeanFtml

private def r11pTypeOf (e : TokenEntry) : Option OptVal := omGet e.opts "type".toList

private def r11pMathType (g1 : Option (List Nat)) (g2 g3 : List Nat) : Option OptVal :=
  match (mathProcess g1 g2 g3 {}).1 with
  | some e => r11pTypeOf e
  | none => none

/- C-R5D-P2-4, conformance-round5d-p2/captures.json R5DP2-20 and ref-tokens.jsonl line 20: a bare `[[math]]` opener with no type-like key stores the `equation` environment, closing the divergence from the live \begin{equation} envelope. -/
theorem refcorr11_math_absent_type_equation :
    r11pMathType none [] (litBytes "x") = some (OptVal.str "equation".toList) := rfl

/- C-R5D-P2-4 general absent-type rule: a stray positional label (the `a` in `[[math a TYPE="align"]]`) is harmless, and a labelled opener with no type key takes the same `equation` fallback with the label preserved. -/
theorem refcorr11_math_labelled_absent_type_equation :
    r11pMathType (some (litBytes "E")) [] (litBytes "x") = some (OptVal.str "equation".toList) ∧
    (match (mathProcess (some (litBytes "E")) [] (litBytes "x") {}).1 with
     | some e => omGet e.opts "label".toList
     | none => none) = some (OptVal.str "E".toList) := ⟨rfl, rfl⟩

/- REFCORR8/9 regression: an attribute NAME that is any non-lowercase case variant of `type` is still missed by the exact lower-case lookup and still takes the fossil `equation` fallback. -/
theorem refcorr11_math_variant_name_still_equation :
    r11pMathType none (litBytes "TYPE=\"align\"") (litBytes "x") = some (OptVal.str "equation".toList) ∧
    r11pMathType none (litBytes "tYpE=\"align\"") (litBytes "x") = some (OptVal.str "equation".toList) := ⟨rfl, rfl⟩

/- REFCORR3 regression: an exact lower-case `type` key is the only selector of a non-equation environment, and its value is kept verbatim. -/
theorem refcorr11_math_exact_lowercase_type_kept :
    r11pMathType none (litBytes "type=\"align\"") (litBytes "x") = some (OptVal.str "align".toList) ∧
    r11pMathType none (litBytes "type=\"ALIGN\"") (litBytes "x") = some (OptVal.str "ALIGN".toList) := ⟨rfl, rfl⟩

/- Counter behaviour is untouched: the absent-type block still carries id 1 and moves mathId from none to some 2, and a following block receives id 2 (the live capture shows span (1) and id equation-1). -/
theorem refcorr11_math_absent_counter :
    (mathProcess none [] (litBytes "x") {}).2.mathId = some 2 ∧
    (match (mathProcess none [] (litBytes "x") {}).1 with
     | some e => omGet e.opts "id".toList
     | none => none) = some (OptVal.int 1) ∧
    let d1 := (mathProcess none [] (litBytes "x") {}).2
    (match (mathProcess none [] (litBytes "y") d1).1 with
     | some e => omGet e.opts "id".toList
     | none => none) = some (OptVal.int 2) := by
  exact ⟨rfl, rfl, rfl⟩

/- PNG-stub serving boundary: with the corrected `equation` type the renderer takes the validity branch and emits the fossil failure block, not the "Unsupported math environment" error; the live \begin{equation} ... \end{equation} envelope is the named serving-layer boundary recorded in the correction draft, not a rule-level byte. -/
theorem refcorr11_math_absent_render_valid_branch :
    renderMath ((mathProcess none [] (litBytes "x") {}).1.get!.opts) =
      litBytes "<div class=\"error-block\">The equation has not been processed correctly. Most prabably it has syntax error(s).</div>" := rfl

end LeanFtml

#print axioms LeanFtml.refcorr11_math_absent_type_equation
#print axioms LeanFtml.refcorr11_math_labelled_absent_type_equation
#print axioms LeanFtml.refcorr11_math_variant_name_still_equation
#print axioms LeanFtml.refcorr11_math_exact_lowercase_type_kept
#print axioms LeanFtml.refcorr11_math_absent_counter
#print axioms LeanFtml.refcorr11_math_absent_render_valid_branch
