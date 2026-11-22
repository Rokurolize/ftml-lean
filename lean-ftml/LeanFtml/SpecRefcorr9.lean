/-
  SpecRefcorr9.lean — REFCORR9 closed pin file for the sixteen unique round-5b confirmations (2026-11-23). This file is deliberately unimported by LeanFtml.lean and Main.lean, exactly like SpecRefcorr6.lean, SpecRefcorr7.lean and SpecRefcorr8.lean, and is elaborated in isolation through the serial queue wrapper. Live Wikidot behavior is definitional; the evidence order is ftml corpus and integration pins, then frozen parity captures, then cached single-fetch live sandbox probes. The raw round-5b pass returned eighteen confirmations across the nine REPORT-ROUND5B-* reports; deduplication collapses C-R5B-P1-1 with C-R5B-S1-01 (identical capture html_sha256 c4d87f83bea9dd4b152ee152a824e4523dad20eb3199c959c7a70a4be10a4c58 and source_sha256 f519e283b30cdb7091ec13c64547901b3e752b0adf19d50db065bcf05269d344) and C-R5B-R3-1 with C-R5B-P4-1 (same footnote single-newline shape), leaving sixteen unique confirmations, one closed theorem each. Pins are grouped by mechanism in the order List, Freelink, Math, Div parse, Raw, Tableadv, Module, Footnote and Div render. Every pin is a closed rfl reduction or a closed by-decide computation with no unproved placeholder, no native trust shortcut and no decision-procedure trust axiom, and its axiom set is within [propext, Classical.choice, Quot.sound] as verified by #print axioms in the R9-PINS wrapper logs. All prose is flowing single-line paragraphs, never hard-wrapped.
-/

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

set_option maxRecDepth 200000
set_option maxHeartbeats 2000000

namespace LeanFtml

/- Shared closed helpers. r9pEmptyRaw2 is the two empty-Raw placeholder token table used by the footnote re-trim pins; r9pGetB and r9pListTypes read the List option wire shape; r9pDefaultKey is the ASCII bytes of `_default:`; r9pFreelinkPage extracts the stored page slug from the single Freelink token; r9pRenderedDiv renders a Div start token built by divProcess over an authored attribute group. -/
private def r9pEmptyRaw2 : List TokenEntry :=
  [{ rule := "Raw", opts := [("text".toList, OptVal.str [])] },
   { rule := "Raw", opts := [("text".toList, OptVal.str [])] }]

private def r9pGetB (o : OptMap) (k : String) : List Nat :=
  match omGet o k.toList with
  | some (OptVal.str cs) => cs.flatMap utf8Bytes
  | some (OptVal.bytes bs) => bs
  | _ => []

private def r9pListTypes (st : ParseState) : List (List Nat) :=
  (st.tokens.filter (fun t => t.rule == "List")).map (fun t => r9pGetB t.opts "type")

private def r9pDefaultKey : List Nat := litBytes "_default:"

private def r9pFreelinkPage (raw : List Nat) : Option (List Char) :=
  let full := [91, 91, 91] ++ raw ++ [93, 93, 93]
  let (_, ts) := freelinkProcess full raw [] []
  match ts with
  | [t] =>
      match omGet t.opts "page".toList with
      | some (OptVal.str s) => some s
      | _ => none
  | _ => none

private def r9pRenderedDiv (attrs : List Nat) : List Nat :=
  renderDiv ((divProcess [] [] (some attrs) [] []).2[0]!.opts)

/- ## List-family mechanism (R9-A): four pins. -/

/- C-R5B-P1-1 = C-R5B-S1-01, conformance-round5b-p1/captures.json muse-probe-round5b-p1-la-abs and conformance-round5b-s1/CANDIDATE-C-R5B-S1-01.md: after the failed uppercase closer the second uppercase LI stays literal inside item A with one literal [[/UL]]; the mirror emits four List rule tokens plus one Newline and keeps the literal residue bytes in the work form. -/
set_option maxRecDepth 200000 in
theorem refcorr9_list_upper_li_after_failed_closer :
    let st := listRule (ParseState.ofSource
      "[[UL]]\n[[LI]]A[[/LI]]\n[[/UL]]\n[[LI]]B[[/LI]]\n[[/UL]]".toList)
    st.tokens.map (fun t => t.rule) = ["List", "List", "List", "List", "Newline"] ∧
    bytesContain (litBytes "[[LI]]B[[/LI]]") (byteForm st.work) = true ∧
    bytesContain (litBytes "[[/UL]]") (byteForm st.work) = true := by
  decide

/- C-R5B-P1-2, conformance-round5b-p1/LEDGER.md LB-S1IN and captures.json muse-probe-round5b-p1-lb-s1in: the uppercase inner [[OL]] misses the REFCORR8 lowercase-inner normalization, so the mirror emits seven List rule tokens for the two sibling items. -/
set_option maxRecDepth 200000 in
theorem refcorr9_list_upper_inner_open_siblings :
    (listRule (ParseState.ofSource
      "[[UL class=\"c\"]]\n[[li]]a\n[[OL]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]AFTER".toList)).tokens.map
      (fun t => t.rule) =
      ["List", "List", "List", "List", "List", "List", "List"] := by
  decide

/- C-R5B-P1-3, conformance-round5b-p1/LEDGER.md LC-S1TAIL and captures.json muse-probe-round5b-p1-lc-s1tail: an appended TAIL prevents the REFCORR8 S1-02 anchored rewrite, so the mirror emits eight List rule tokens. -/
set_option maxRecDepth 200000 in
theorem refcorr9_list_s1_tail_after_cross_closer :
    (listRule (ParseState.ofSource
      "[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b[[/li]]\n[[/UL]]AFTER\n[[/ol]]\n[[/li]]\n[[/ul]]TAIL".toList)).tokens.map
      (fun t => t.rule) =
      ["List", "List", "List", "List", "List", "List", "List", "List"] := by
  decide

/- C-R5B-P1-4, conformance-round5b-p1/LEDGER.md LE-EMPTYITEM and captures.json muse-probe-round5b-p1-le-emptyitem: the uppercase opener with an empty item collapses to one break, so the mirror emits exactly three List rule tokens and no extra Newline. -/
set_option maxRecDepth 200000 in
theorem refcorr9_list_upper_empty_item_one_break :
    (listRule (ParseState.ofSource "[[UL]]\n[[LI]][[/LI]]\n[[/UL]]\n".toList)).tokens.map
      (fun t => t.rule) = ["List", "List", "List"] := by
  decide

/- ## Freelink category-prefix mechanism (R9-B): four pins. -/

/- C-R5B-P2-1, conformance-round5b-p2/captures.json R5BP2-01 and ref.jsonl line 1: a leading U+000C form-feed byte before `_default:` is skipped, so the stored Freelink page is x. -/
theorem refcorr9_freelink_ff_before_default :
    r9pFreelinkPage ([12] ++ r9pDefaultKey ++ [120]) = some ['x'] := by
  decide

/- C-R5B-P2-2, conformance-round5b-p2/captures.json R5BP2-03 and ref.jsonl line 3: the three-byte U+2028 line separator before `_default:` is skipped as a whole sequence, so the stored page is x. -/
theorem refcorr9_freelink_u2028_before_default :
    r9pFreelinkPage ([0xE2, 0x80, 0xA8] ++ r9pDefaultKey ++ [120]) = some ['x'] := by
  decide

/- C-R5B-P2-3, conformance-round5b-p2/captures.json R5BP2-05 and ref.jsonl line 5: the three-byte U+FEFF BOM before `_default:` is skipped as a whole sequence, so the stored page is x. -/
theorem refcorr9_freelink_bom_before_default :
    r9pFreelinkPage ([0xEF, 0xBB, 0xBF] ++ r9pDefaultKey ++ [120]) = some ['x'] := by
  decide

/- C-R5B-P2-4, conformance-round5b-p2/captures.json R5BP2-06 and ref.jsonl line 6: a star immediately before `_default:` is consumed by the narrow ordering rule, so the stored page is x. -/
theorem refcorr9_freelink_star_before_default :
    r9pFreelinkPage ([42] ++ r9pDefaultKey ++ [120]) = some ['x'] := by
  decide

/- ## Math mixed-case attribute-name mechanism (R9-C): two pins. -/

/- C-R5B-P2-5, conformance-round5b-p2/CANDIDATES.md R5BP2-08 and tokens.jsonl: a mixed-case `tYpE` attribute NAME is a case variant of `type`, so the generalized fallback selects the live equation environment while the exact lower-case key and value rules are untouched. -/
theorem refcorr9_math_mixed_tYpE_equation :
    (match (mathProcess none (litBytes "tYpE=\"align\"") (litBytes "x") {}).1 with
     | some e => omGet e.opts "type".toList
     | none => none) = some (OptVal.str "equation".toList) := rfl

/- C-R5B-P2-6, conformance-round5b-p2/CANDIDATES.md R5BP2-09 and tokens.jsonl: the capital-T `Type` spelling takes the same generalized fallback branch. -/
theorem refcorr9_math_mixed_Type_equation :
    (match (mathProcess none (litBytes "Type=\"align\"") (litBytes "x") {}).1 with
     | some e => omGet e.opts "type".toList
     | none => none) = some (OptVal.str "equation".toList) := rfl

/- ## Div authored-empty data-* mechanism (R9-D): one pin. -/

/- C-R5B-P1-5, conformance-round5b-p1/captures.json muse-probe-round5b-p1-db-dataempty and ref.jsonl line 8: a case-variant duplicate with an empty last value keeps `data-foo=""` in the Div start token args map with no vanished flag and the unchanged [rule, options] wire shape. -/
theorem refcorr9_div_authored_empty_data_kept :
    (divProcess [] [] (some (litBytes " data-Foo=\"1\" data-foo=\"\""))
      (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("data-foo".toList, OptVal.str [])]),
       ("type".toList, OptVal.str "start".toList)] := rfl

/- ## Raw two-byte closer mechanism (R9-E): one pin. -/

/- C-R5B-P3-1, conformance-round5b-p3/CORRECTION-C-R5B-P3-1.md and captures.json p3b-04-raw-4-2: a four-byte opener with a two-byte closer leaves both closer @ bytes literal, so `@@@@ZQ@@` scans to byte form ZQ@@ and claims no Raw token; the REFCORR8 three-byte case stays ZQ@@@. -/
theorem refcorr9_raw_four_open_two_close_literal :
    byteForm (rawRule (ParseState.ofSource "@@@@ZQ@@".toList)).work = litBytes "ZQ@@" ∧
    (rawRule (ParseState.ofSource "@@@@ZQ@@".toList)).tokens = [] ∧
    byteForm (rawRule (ParseState.ofSource "@@@@ZQ@@@".toList)).work = litBytes "ZQ@@@" := by
  decide

/- ## Tableadv data-* underscore mechanism (R9-F): one pin. -/

/- C-R5B-P3-2, conformance-round5b-p3/CORRECTION-C-R5B-P3-2.md and captures.json p3b-07-tableadv-data-underscore: `data-Foo_Bar` folds to `data-foo_bar` and survives the data-only key grammar, while the general key grammar still rejects the underscore and the DATA- prefix is still dropped. -/
theorem refcorr9_tableadv_data_underscore_folded :
    advAttrKeyOk (litBytes "data-foo_bar") = true ∧
    advAttrStep "table" [] (litBytes "data-Foo_Bar", litBytes "UB") =
      [(litBytes "data-foo_bar", litBytes "UB")] ∧
    advKeyOk (litBytes "data-foo_bar") = false ∧
    advAttrStep "table" [] (litBytes "DATA-Foo_Bar", litBytes "UB") = [] := by
  decide

/- ## Module authored-closer mechanism (R9-G): one pin. -/

private def r9pCodeToks : List TokenEntry := [{ rule := "Code", opts := [] }]

private def r9pModuleSrc (closer : String) : List Nat :=
  litBytes "[[module nosuchmod]]\n" ++ phBytes 0 ++ litBytes "\n" ++ litBytes closer

/- C-R5B-P3-3, conformance-round5b-p3/CORRECTION-C-R5B-P3-3.md and captures.json p3b-12-module-upper-closer: a Code-bearing module body re-emits the authored uppercase closer byte-for-byte instead of a hard-coded lowercase literal, while a lowercase closer is unchanged and a Raw-token body still consumes the closer with no re-emit. -/
theorem refcorr9_module_authored_upper_closer :
    (moduleMatch (r9pModuleSrc "[[/MODULE]]") r9pCodeToks).map (fun x => x.1) =
      some ([10, 10] ++ phBytes 1 ++ [10, 10] ++ phBytes 0 ++ [10] ++
        litBytes "[[/MODULE]]") ∧
    (moduleMatch (r9pModuleSrc "[[/module]]") r9pCodeToks).map (fun x => x.1) =
      some ([10, 10] ++ phBytes 1 ++ [10, 10] ++ phBytes 0 ++ [10] ++
        litBytes "[[/module]]") ∧
    (moduleMatch (r9pModuleSrc "[[/MODULE]]") [{ rule := "Raw", opts := [] }]).map (fun x => x.1) =
      some ([10, 10] ++ phBytes 1 ++ [10, 10]) := by
  decide

/- ## Footnote single-newline mechanism (R9-H parse plus R9-HM render): one pin for the deduplicated C-R5B-P4-1 = C-R5B-R3-1 confirmation. -/

private def r9pNonEmptyRaw : List TokenEntry :=
  [{ rule := "Raw", opts := [("text".toList, OptVal.str "x".toList)] }]

/- C-R5B-P4-1 = C-R5B-R3-1, conformance-round5b-p4/C02 and F02, conformance-round5b-r3/R3B-03 and captures: a lone newline between two empty-Raw placeholders is retained in the stored footnote body and the token-aware render emits the footer `1</a>.` with no separator space, while a non-empty Raw placeholder still gets the space. -/
set_option maxRecDepth 200000 in
theorem refcorr9_fn_lone_newline_no_sep :
    (footnoteProcess (phBytes 0 ++ litBytes "\n" ++ phBytes 1) {} r9pEmptyRaw2).2.2.footnotes =
      [phBytes 0 ++ litBytes "\n" ++ phBytes 1] ∧
    renderFootnoteitem {} { footnotes := [phBytes 0 ++ litBytes "\n" ++ phBytes 1] }
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)]
      (fun k => r9pEmptyRaw2[k]?) =
      litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++
      natBytes 1 ++ litBytes "</a>." ∧
    renderFootnoteitem {} { footnotes := [phBytes 0] }
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int 1)]
      (fun k => r9pNonEmptyRaw[k]?) =
      litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ natBytes 1 ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++ natBytes 1 ++ litBytes "')\">" ++
      natBytes 1 ++ litBytes "</a>." ++ [32] := by
  decide

/- ## Div placeholder-bearing id render mechanism (R9-I): one pin. -/

private def r9pPhIdAttrs : List Nat :=
  litBytes " id=\"" ++ phBytes 0 ++ [120] ++ phBytes 1 ++ litBytes "\""

private def r9pWsIdAttrs : List Nat := litBytes " id=\"   \""

/- C-R5B-R1-1, conformance-round5b-r1/C-R5B-R1-1.md and comparison.json R5BR1-P2: a 0xFF placeholder-bearing authored id survives isolateId and renders as `<div id="">`, while the whitespace-only authored id still serves the bare `id="u-"` shell, so the two REFCORR8/REFCORR9 shapes stay distinct. -/
theorem refcorr9_div_placeholder_id_cleared :
    isolateId (phBytes 0 ++ [120] ++ phBytes 1) = some (phBytes 0 ++ [120] ++ phBytes 1) ∧
    isolateId (litBytes "   ") = some (litBytes "u-") ∧
    r9pRenderedDiv r9pPhIdAttrs = litBytes "<div id=\"\">" ∧
    r9pRenderedDiv r9pWsIdAttrs = litBytes "<div id=\"u-\">" := by
  decide

/- The coordinator's standing scope decisions are recorded rather than pinned. The four-adjacent U+FFFD digit class is OWNED under the R8-E artifact decision (coord-units/R8-E/CANONIZATION-DECISION.md, WORKBOARD R8-E): round-5b rows S2 s2b-17 and P4 C06/C19 were analyzed with artifacts and cleared as the owned token-counter class, so no fix pin is emitted. The parity-side Email index family returned ZERO confirmations in R5B-P2 and R5B-R2 (owned +1 counter digits wrapped in U+FFFD with byte-reversed decimal digits only), so it also receives no fix pin and is recorded here instead. -/

end LeanFtml
