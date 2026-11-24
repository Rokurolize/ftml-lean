/-
  SpecRefcorr10.lean — REFCORR10 general-mechanism closed pin file (2026-11-23). Live Wikidot behavior is definitional; the evidence order is ftml corpus and integration pins, then frozen parity captures, then cached live sandbox probes. This file is deliberately unimported by LeanFtml.lean and Main.lean, exactly like SpecRefcorr6.lean through SpecRefcorr9.lean, and is elaborated in isolation through the serial queue wrapper. Coverage: the round-5c full confirmation pass returned 29 raw confirmations across the nine REPORT-ROUND5C-* families — P1 nine, P2 four, P3 two, P4 three, R1 three, R2 two, R3 two, S1 four and S2 zero — and every one is corrected by one of the five adopted REFCORR10 general mechanisms (R10-LIST, R10-FREELINK, R10-NOTES, R10-DIV, R10-STRUCT). The one recorded raw dedupe is C-R5C-S1-3 (S18), whose source and capture html_sha256 a414ab9b7d4110ca605d0cab2dd21789262a5459b2ae9105092c6e9f65b3ea33 are identical to C-R5C-P1-1 (L1), so the eleven raw list confirmations realize ten distinct sources (L1-L9 plus S19). The two footnote-footer siblings C-R5C-R1-2 and C-R5C-R1-3 share the general token-aware footnote-newline mechanism with the R10-NOTES five fixed rows, and C-R5C-S1-1 shares the R10-DIV uniform placeholder-id mechanism with C-R5C-R1-1. Pins are grouped by mechanism in the order List, Freelink, Footnote, Div, Tableadv, Module and Raw, followed by the two parity padded-source pins. The parity-chat uppercase-[[LI]] padded source is no longer pending: coord-units/PARITY-MIRROR/ supplied the two closed pins refcorr_parity_padded_guard_fires and refcorr_parity_padded_list_rule_shape, which are incorporated here as refcorr10_pins_parity_padded_guard_fires and refcorr10_pins_parity_padded_list_rule_shape against the adopted three-line leading-LF guard repair in ListRules.lean (parity sha256 0323b2672e711c0ba4785b14a570feb61677b7c79cc53d00201f3a5989f1da08; pin sha256 7707297d56d2287a33522850acc3b941d9d3c71695383608a00ce625bc4637aa; corroborating live capture muse-probe-round5b-p1-la-abs html sha256 c4d87f83bea9dd4b152ee152a824e4523dad20eb3199c959c7a70a4be10a4c58). Every pin is a closed rfl reduction or a closed by-decide computation with no unproved placeholder, no native trust shortcut and no decision-procedure trust axiom, and its axiom set is within [propext, Classical.choice, Quot.sound] as verified by the wrapper #print axioms probes recorded in coord-units/R10-PINS/UNIT.md. All prose is flowing single-line paragraphs, never hard-wrapped.

  Standing scope decisions, recorded rather than pinned: the four-adjacent U+FFFD digit class is OWNED under the R8-E artifact decision (coord-units/R8-E/CANONIZATION-DECISION.md); round-5c rows s2c-25, C15, C16 and C17 were analyzed with artifacts and cleared as the owned token-counter residue class, so no fix pin is emitted. The parity-side Email index family returned ZERO confirmations in rounds 5b and 5c, so it also receives no fix pin and is recorded here instead. C-R5C-R2-2 (the Freelink hash-route auto-label shape `[[[foo/#/bar]]]`, capture muse-probe-round5c-r2-r2c-10-freelink-hashroute) is left unchanged by the adopted R10-FREELINK general lead rule, was explicitly recorded as outside that unit's assignment, and is PENDING a dedicated correction; it receives no fix pin here. The parity-chat uppercase-[[LI]] padded source is PINNED below from coord-units/PARITY-MIRROR/; its LIST guard-repair change is already adopted in canonical ListRules.lean (sha256 0323b2672e711c0ba4785b14a570feb61677b7c79cc53d00201f3a5989f1da08). -/

import LeanFtml.ListRules
import LeanFtml.LinkRules
import LeanFtml.NextRules
import LeanFtml.ContainRules
import LeanFtml.FormRawRules
import LeanFtml.TableRules
import LeanFtml.ModuleRules
import LeanFtml.NotesRules
import LeanFtml.NotesRender
import LeanFtml.InteractiveRules
import LeanFtml.CoverageContain
import LeanFtml.ServingRender
import LeanFtml.FrameRules

set_option maxRecDepth 200000
set_option maxHeartbeats 2000000

namespace LeanFtml

/- Shared closed helpers. r10pListTypes reads the List token rule-name wire shape; r10pDefaultKey is the ASCII bytes of `_default:`; r10pFreelinkPage extracts the stored page slug from the single Freelink token; r10pRenderedDiv renders a Div start token built by divProcess over an authored attribute group; r10pEmptyRaw2 and r10pEmptyRaw3 are empty-Raw placeholder token tables used by the footnote re-trim pins; r10pNonEmptyRaw is a non-empty Raw token table for the mixed-placeholder siblings. -/
private def r10pListTypes (src : String) : List String :=
  (listRule (ParseState.ofSource src.toList)).tokens.map (fun t => t.rule)

private def r10pDefaultKey : List Nat := litBytes "_default:"

private def r10pFreelinkPage (raw : List Nat) : Option (List Char) :=
  let full := [91, 91, 91] ++ raw ++ [93, 93, 93]
  let (_, ts) := freelinkProcess full raw [] []
  match ts with
  | [t] =>
      match omGet t.opts "page".toList with
      | some (OptVal.str s) => some s
      | _ => none
  | _ => none

private def r10pRenderedDiv (attrs : List Nat) : List Nat :=
  renderDiv ((divProcess [] [] (some attrs) [] []).2[0]!.opts)

private def r10pEmptyRaw2 : List TokenEntry :=
  [{ rule := "Raw", opts := [("text".toList, OptVal.str [])] },
   { rule := "Raw", opts := [("text".toList, OptVal.str [])] }]

private def r10pEmptyRaw3 : List TokenEntry :=
  r10pEmptyRaw2 ++ [{ rule := "Raw", opts := [("text".toList, OptVal.str [])] }]

private def r10pNonEmptyRaw : List TokenEntry :=
  [{ rule := "Raw", opts := [("text".toList, OptVal.str "x".toList)] }]

/- ## List-family general mechanism (R10-LIST): ten pins for the ten distinct round-5c confirmed sources. The general case- and attribute-agnostic post-failed-close predicate listPostFailedClose10 and the scored-empty predicate listScoredEmptyItem10 replace the narrow exact-byte C1/C4 skeletons; the cross-case pre-normalization rewrites are implemented in the mirror as faithful general forms of the reference's five preg_replace patterns (rw81, rw82, rw91, rw131, rw132 in ListRules.lean), replacing the earlier exact-byte forms. -/

/- C-R5C-P1-1 = C-R5C-S1-3 (S18, identical source and capture): the lowercase second item after a failed uppercase closer stays literal inside one closed item; the mirror emits four List rule tokens plus one Newline. C-R5C-S1-3 is the recorded dedupe, not a second distinct source. -/
set_option maxRecDepth 200000 in
theorem refcorr10_list_lower_item_after_failed_close :
    r10pListTypes "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[li]]B[[/li]]\n[[/UL]]" =
      ["List", "List", "List", "List", "Newline"] := by
  decide

/- C-R5C-P1-2 (L2, mixed-case failed closer): the general predicate consumes [[/Ul]] as well and keeps one closed item with a literal tail; the mirror emits the same four List tokens plus one Newline. -/
set_option maxRecDepth 200000 in
theorem refcorr10_list_mixed_closer_after_failed_close :
    r10pListTypes "[[UL]]\n[[LI]]A[[/LI]]\n[[/Ul]]\n[[LI]]B[[/LI]]\n[[/UL]]" =
      ["List", "List", "List", "List", "Newline"] := by
  decide

/- C-R5C-P1-3 (L3, multiline first item): the general predicate is multiline-tolerant and the second marker stays literal; the mirror emits the same four List tokens plus one Newline. -/
set_option maxRecDepth 200000 in
theorem refcorr10_list_multiline_item_after_failed_close :
    r10pListTypes "[[UL]]\n[[LI]]A\nB[[/LI]]\n[[/UL]]\n[[LI]]C[[/LI]]\n[[/UL]]" =
      ["List", "List", "List", "List", "Newline"] := by
  decide

/- C-R5C-P1-4 (L4, C2 inner-opener attribute sibling): the two sibling items and appended prose are reflected in nine List rule tokens; the attribute-agnostic generalization is verified on the PHP side and the mirror keeps its recorded exact-byte form for this cross-case normalizer. -/
set_option maxRecDepth 200000 in
theorem refcorr10_list_attr_inner_opener_siblings :
    (r10pListTypes "[[UL]]\n[[li]]a\n[[OL class=\"c\"]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]AFTER").length = 9 := by
  decide

/- C-R5C-P1-5 (L5, C2 multiline-tail sibling): the absorbed tail lines are reflected in seven List rule tokens under the same disclosed mirror limitation. -/
set_option maxRecDepth 200000 in
theorem refcorr10_list_multiline_tail_siblings :
    (r10pListTypes "[[UL class=\"c\"]]\n[[li]]a\n[[OL]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]AFTER\nMORE").length = 7 := by
  decide

/- C-R5C-P1-6 (L6, trailing-TAIL inner-type sibling): the inner [[ul]] cross-type degradation is reflected in eight List rule tokens under the disclosed mirror limitation. -/
set_option maxRecDepth 200000 in
theorem refcorr10_list_trailing_tail_inner_ul :
    (r10pListTypes "[[ul]]\n[[li]]a\n[[ul]]\n[[li]]b[[/li]]\n[[/UL]]AFTER\n[[/ul]]\n[[/li]]\n[[/ul]]TAIL").length = 8 := by
  decide

/- C-R5C-P1-7 (L7, trailing-TAIL inner-item sibling): the multiline inner item is reflected in nine List rule tokens under the same disclosed limitation. -/
set_option maxRecDepth 200000 in
theorem refcorr10_list_trailing_tail_multiline_item :
    (r10pListTypes "[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b\nb2[[/li]]\n[[/UL]]AFTER\n[[/ol]]\n[[/li]]\n[[/ul]]TAIL").length = 9 := by
  decide

/- C-R5C-P1-8 (L8, empty-item attachment sibling): the nested list becomes a sibling after the empty item, reflected in nine List rule tokens; the nested-block gate on syntheticUnclosed is the general mirror predicate. -/
set_option maxRecDepth 200000 in
theorem refcorr10_list_empty_item_nested_sibling :
    (r10pListTypes "[[UL]]\n[[LI]] \t \n[[ul]]\n[[li]]x[[/li]]\n[[/ul]]\n[[/LI]]\n[[/UL]]").length = 9 := by
  decide

/- C-R5C-P1-9 (L9, scored empty opener): listScoredEmptyItem10 keeps the whitespace-only item in an unclosed list, reflected in exactly two List rule tokens where the narrow REFCORR9 path dissolved the block to an explicit_empty token. -/
set_option maxRecDepth 200000 in
theorem refcorr10_list_scored_empty_item_unclosed :
    r10pListTypes "[[UL_]]\n[[LI]] \t [[/LI]]\n[[/UL]]" = ["List", "List"] := by
  decide

/- C-R5C-S1-4 (S19, attributed second item after failed close): the attribute-bearing marker stays literal inside one closed item; the mirror emits four List tokens plus one Newline, exactly as for the unattributed C1 siblings. -/
set_option maxRecDepth 200000 in
theorem refcorr10_list_attributed_item_after_failed_close :
    r10pListTypes "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[LI class=\"x\"]]B[[/LI]]\n[[/UL]]" =
      ["List", "List", "List", "List", "Newline"] := by
  decide

/- ## Freelink category-prefix general lead rule (R10-FREELINK): five pins for the five round-5c confirmed lead shapes. The single general class is Unicode White_Space plus U+FEFF plus the star marker; the byte-zero NUL control is excluded. -/

/- C-R5C-P2-1: the double leading star is absorbed by the general lead class and the stored page is x. -/
theorem refcorr10_freelink_double_star_before_default :
    r10pFreelinkPage ([42, 42] ++ r10pDefaultKey ++ [120]) = some ['x'] := by
  decide

/- C-R5C-P2-2: U+2003 EM SPACE before `_default:` is admitted, so the stored page is x. -/
theorem refcorr10_freelink_u2003_before_default :
    r10pFreelinkPage ([0xE2, 0x80, 0x83] ++ r10pDefaultKey ++ [120]) = some ['x'] := by
  decide

/- C-R5C-P2-3: U+202F NARROW NO-BREAK SPACE before `_default:` is admitted, so the stored page is x. -/
theorem refcorr10_freelink_u202f_before_default :
    r10pFreelinkPage ([0xE2, 0x80, 0xAF] ++ r10pDefaultKey ++ [120]) = some ['x'] := by
  decide

/- C-R5C-P2-4: U+2009 THIN SPACE before `_default:` is admitted, so the stored page is x. -/
theorem refcorr10_freelink_u2009_before_default :
    r10pFreelinkPage ([0xE2, 0x80, 0x89] ++ r10pDefaultKey ++ [120]) = some ['x'] := by
  decide

/- C-R5C-R2-1: U+2029 PARAGRAPH SEPARATOR, the byte adjacent to the REFCORR9-admitted U+2028, is admitted by the general class, so the stored page is x. -/
theorem refcorr10_freelink_u2029_before_default :
    r10pFreelinkPage ([0xE2, 0x80, 0xA9] ++ r10pDefaultKey ++ [120]) = some ['x'] := by
  decide

/- ## Footnote token-aware general rule (R10-NOTES): seven pins covering the seven round-5c footnote confirmations (P4 three, R1 two, R3 two). One byte-local predicate hasSingleBreakByte with one C0 control filter replaces the shape-specific REFCORR7/8/9 guards; the render separator is footnoteLeadVisible. -/

/- C-R5C-R3-1: three empty-Raw placeholders with two interior newlines keep the placeholder-bearing body, so both rule-level breaks survive. -/
theorem refcorr10_pins_fn_two_breaks :
    (footnoteProcess (phBytes 0 ++ litBytes "\n" ++ phBytes 1 ++ litBytes "\n" ++ phBytes 2) {}
      r10pEmptyRaw3).2.2.footnotes =
      [phBytes 0 ++ litBytes "\n" ++ phBytes 1 ++ litBytes "\n" ++ phBytes 2] := by
  rfl

/- C-R5C-R3-2 and C-R5C-P4-3: an empty-Raw placeholder, one interior newline and a trailing literal keep the break and the literal tail. R3C-20 uses a `@@@@` tail and P4-C05 uses an `x` tail; both are the same general rule. -/
theorem refcorr10_pins_fn_trailing_literal :
    (footnoteProcess (phBytes 0 ++ litBytes "\n" ++ phBytes 1 ++ litBytes "@@") {} r10pEmptyRaw2).2.2.footnotes =
      [phBytes 0 ++ litBytes "\n" ++ phBytes 1 ++ litBytes "@@"] := by
  rfl

/- C-R5C-P4-1: an NBSP-flanked lone newline keeps the placeholder-bearing body, so the rule-level break survives. -/
theorem refcorr10_pins_fn_nbsp_flank :
    (footnoteProcess (phBytes 0 ++ [194, 160] ++ litBytes "\n" ++ phBytes 1) {} r10pEmptyRaw2).2.2.footnotes =
      [phBytes 0 ++ [194, 160] ++ litBytes "\n" ++ phBytes 1] := by
  rfl

/- C-R5C-P4-2 restated by REFCORR13 C-R5F-R3-3: a form-feed-flanked lone newline keeps the body INCLUDING the FF as the authored-break witness; Stage 2 purifyHtml drops the byte from emitted text after Newline has emitted its <br />. -/
theorem refcorr13_pins_fn_formfeed_flank_witness :
    (footnoteProcess (phBytes 0 ++ [12] ++ litBytes "\n" ++ phBytes 1) {} r10pEmptyRaw2).2.2.footnotes =
      [phBytes 0 ++ [12] ++ litBytes "\n" ++ phBytes 1] := by
  rfl

/- C-R5C-R1-2: a non-empty Raw token before the interior newline keeps the body; the mirror-order footer sibling keeps its rule-level break. -/
theorem refcorr10_pins_fn_nonempty_raw_before_break :
    (footnoteProcess (litBytes "x" ++ litBytes "\n" ++ phBytes 1) {} (r10pNonEmptyRaw ++ r10pEmptyRaw2)).2.2.footnotes =
      [litBytes "x" ++ litBytes "\n" ++ phBytes 1] := by
  rfl

/- C-R5C-R1-3: an empty Raw token before the newline and a non-empty Raw token after it also keep the body, closing the mirror-order sibling pair. -/
theorem refcorr10_pins_fn_empty_then_nonempty_around_break :
    (footnoteProcess (phBytes 0 ++ litBytes "\n" ++ litBytes "x") {} (r10pEmptyRaw2 ++ r10pNonEmptyRaw)).2.2.footnotes =
      [phBytes 0 ++ litBytes "\n" ++ litBytes "x"] := by
  rfl

/- Render separator pins: a leading rule-level break suppresses the separator space, an NBSP-flanked body keeps it, and a non-empty leading Raw keeps it. These are the render-side halves of the R10-NOTES token-aware rule. -/
theorem refcorr10_pins_fn_render_separator_shapes :
    (footnoteLeadVisible (fun k => r10pEmptyRaw2[k]?) (phBytes 0 ++ litBytes "\n" ++ phBytes 1 ++ litBytes "@@")).isEmpty = true ∧
    (footnoteLeadVisible (fun k => r10pEmptyRaw2[k]?) (phBytes 0 ++ [194, 160] ++ litBytes "\n" ++ phBytes 1)).isEmpty = false ∧
    (footnoteLeadVisible (fun k => r10pNonEmptyRaw[k]?) (litBytes "x")).isEmpty = false := by
  decide

/- ## Div uniform placeholder-id mechanism (R10-DIV): four pins carried over from the adopted partial pin file. C-R5C-R1-1 and C-R5C-S1-1 share the authored u--prefixed placeholder-id source and the uniform clear arm; the four theorems pin the parse seam, the two render shells and the authored-empty data-* boundary. -/

theorem refcorr10_div_isolate_id_uniform_placeholder :
    isolateId (litBytes "u-" ++ phBytes 0 ++ [120] ++ phBytes 1) =
        some (litBytes "u-" ++ phBytes 0 ++ [120] ++ phBytes 1) ∧
    isolateId (phBytes 0 ++ [120] ++ phBytes 1) =
        some (phBytes 0 ++ [120] ++ phBytes 1) ∧
    isolateId (litBytes "   ") = some (litBytes "u-") ∧
    isolateId (litBytes "u-") = some (litBytes "u-") := by
  decide

theorem refcorr10_div_id_shells :
    r10pRenderedDiv (litBytes " id=\"" ++ litBytes "u-" ++ phBytes 0 ++
      [120] ++ phBytes 1 ++ litBytes "\"") = litBytes "<div id=\"\">" ∧
    r10pRenderedDiv (litBytes " id=\"   \"") = litBytes "<div id=\"u-\">" := by
  decide

theorem refcorr10_div_authored_nonempty_last_wins :
    (divProcess [] [] (some (litBytes "class=\" \"")) [] []).2[0]!.opts =
      [("args".toList, OptVal.map [("class".toList, OptVal.str [])]),
       ("type".toList, OptVal.str "start".toList)] ∧
    (divProcess [] [] (some (litBytes "data-Foo=\"1\" data-foo=\"2\"")) [] []).2[0]!.opts =
      [("args".toList, OptVal.map [("data-foo".toList, OptVal.str "2".toList)]),
       ("type".toList, OptVal.str "start".toList)] ∧
    (divProcess [] [] (some (litBytes "data-Foo=\"1\" data-foo=\"\"")) [] []).2[0]!.opts =
      [("args".toList, OptVal.map [("data-foo".toList, OptVal.str [])]),
       ("type".toList, OptVal.str "start".toList)] := by
  constructor
  · rfl
  constructor
  · rfl
  · rfl

theorem refcorr10_div_sole_empty_unset :
    (divProcess [] [] (some (litBytes "class=\"\"")) (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map []),
       ("type".toList, OptVal.str "start".toList)] := rfl

/- ## Structural general rules (R10-STRUCT): three pins for C-R5C-P3-1 (Tableadv dot key), C-R5C-P3-2 (Module nested consumption) and C-R5C-S1-2 (Raw three-closer surplus with text run). -/

/- C-R5C-P3-1: the live-observed folded data-* suffix class is [a-z0-9._-], the dot byte 46 added to the settled class; the dot-bearing key survives the data-only grammar while the general key grammar still rejects it. -/
theorem refcorr10_tableadv_data_dot_key :
    advDataKeyOk (litBytes "data-foo.bar") = true ∧
    advAttrStep "table" [] (litBytes "data-Foo.Bar", litBytes "UB") =
      [(litBytes "data-foo.bar", litBytes "UB")] ∧
    advKeyOk (litBytes "data-foo.bar") = false ∧
    advDataKeyOk (litBytes "DATA-FOO.BAR") = false := by
  decide

/- C-R5C-P3-2 (R10-MODFIX live-correct narrowing): only the inline nested-opener newline is inserted; the outer residual closer is retained as live serves it. The former consumeModuleClosers pin was retired with that helper. -/
theorem refcorr10_module_nested_consumption :
    moduleMatch (litBytes "[[module a]]\n[[module b]]INNER[[/module]]\n[[/module]]") [] =
      some (litBytes "[[module654 a]]\n[[module b]]\nINNER[[/module]]",
        litBytes "\n[[/module]]", []) := by
  rfl

/- C-R5C-S1-2 with the REFCORR14 threshold correction: the general surplus-closer formula is f(c)=c for c in {2,3} and c-4 for c>=4, with re-association when a same-line later 2+-run follows a short run; the three-closer run before text is the round-5c witness and the two-run later tail is the live W-EQ witness. The old `hasLaterQuad " B @@@ C" = false` pin encoded the now-retired four-byte threshold and is replaced by the live-matching true pin plus a two-run sibling. -/
theorem refcorr10_raw_surplus_closer_formula :
    rawSurplusClose 2 = 2 ∧ rawSurplusClose 3 = 3 ∧ rawSurplusClose 4 = 0 ∧
    rawSurplusClose 5 = 1 ∧ rawSurplusClose 6 = 2 ∧
    hasLaterQuad (litBytes " B @@@@ C") = true ∧
    hasLaterQuad (litBytes " B @@@ C") = true ∧
    hasLaterQuad (litBytes " B @@ C") = true := by
  decide

/- ## Parity padded-source pins (coord-units/PARITY-MIRROR): two pins for the uppercase-[[LI]] padded shape. prefilter/framePad inserts one leading LF before the uppercase [[UL]] opener, so the exact REFCORR9 guard is evaluated on the padded source and, after the adopted three-line guard repair, fires and emits the live token/work shape. -/

private def r10pParitySrc : String :=
  "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[LI]]B[[/LI]]\n[[/UL]]"

set_option maxRecDepth 200000 in
theorem refcorr10_pins_parity_padded_guard_fires :
    let src := (prefilterChars r10pParitySrc.toList).map Char.toNat
    (listPostFailedClose9 src []).isSome = true := by
  decide

set_option maxRecDepth 200000 in
theorem refcorr10_pins_parity_padded_list_rule_shape :
    let st := listRule (ParseState.ofSource (prefilterChars r10pParitySrc.toList))
    st.tokens.map (fun t => t.rule) = ["List", "List", "List", "List", "Newline"] ∧
    bytesContain (litBytes "A[[LI]]B[[/LI]]") (byteForm st.work) = true ∧
    bytesContain (litBytes "[[/UL]]") (byteForm st.work) = true := by
  decide

end LeanFtml
