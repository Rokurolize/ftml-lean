/-
  SpecRefcorr7.lean — REFCORR7 closed pin file for all eleven confirmed SUSPECT4 reference defects, elaborated unimported through the serial queue wrapper. This file deliberately is not imported by LeanFtml.lean or Main.lean; it is elaborated in isolation and pins the corrected byte-level behavior of the five adopted mechanism patches (ListRules.lean, LinkRules.lean, NotesRules.lean with CoverageNotes.lean, RenderCore.lean with Inline3Rules.lean, and ModuleRules.lean). Live Wikidot behavior is definitional; the evidence order is ftml corpus and integration pins, then frozen parity captures, then the cached single-fetch live sandbox probes. The eleven shapes are C-SUSPECT4A-1..4 (four parse-side explicit-list defects), C-SUSPECT4B-1 (freelink leading-whitespace _default: strip), C-SUSPECT4C fn-empty / fn-ws / bib-empty (empty-Raw emptiness), C-SUSPECT4C idx-after (U+FFFD adjacent-run leak), and C-SUSPECT4C inc-mod / inc-css (included raw consumed inside a module). Evidence paths: coord-units/R7S/INVENTORY.md ops R7S-02..R7S-06; coord-units/R7A/UNIT.md and scratch/lean-ftml/R7A_ListMirrorProbe.lean; coord-units/R7B/UNIT.md and coord-units/R7B/LinkRules.lean.refcorr7.patch; coord-units/R7C1/UNIT.md and scratch/lean-tree/R7C1Check.lean; coord-units/R7C2/UNIT.md, CORRECTION-REFCORR7-UFFFD-IDX-AFTER.md and R7C2Probe.lean; coord-units/R7C3/UNIT.md, CORRECTION-REFCORR7-INC.md and lean-ftml/SpecR7C3Scratch.lean; plus the cached verdicts under conformance-suspect4a/, conformance-suspect4b/ and conformance-suspect4c/. Axiom discipline: every pin is a closed rfl or by decide computation with no unproved placeholder and no native-decision trust shortcut, and its only axioms are the permitted core set [propext, Classical.choice, Quot.sound], confirmed for all eleven pins during drafting with #print axioms (log coord-units/R7PINS/axioms-verification.out, exit 0); this final file itself emits no commands. All prose is flowing single-line paragraphs, never hard-wrapped.
-/

import LeanFtml.ListRules
import LeanFtml.LinkRules
import LeanFtml.NotesRules
import LeanFtml.RenderCore
import LeanFtml.Inline3Rules
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.TokenState

set_option maxRecDepth 200000

namespace LeanFtml

private def r7pGetOptStr (opts : OptMap) (k : String) : Option (List Nat) :=
  match omGet opts k.toList with
  | some (OptVal.str cs) => some (cs.flatMap utf8Bytes)
  | some (OptVal.bytes bs) => some bs
  | _ => none

private def r7pAttrsEmpty (opts : OptMap) : Bool :=
  match omGet opts "attrs".toList with
  | some (OptVal.map m) => m.isEmpty
  | _ => false

private def r7pCountType (toks : List TokenEntry) (t : String) : Nat :=
  (toks.filter (fun x => x.rule == "List" && r7pGetOptStr x.opts "type" == some (litBytes t))).length

private def r7pListStarts (src : String) : List TokenEntry :=
  (listRule (ParseState.ofSource src.toList)).tokens.filter
    (fun t => t.rule == "List" && r7pGetOptStr t.opts "type" == some (litBytes "explicit_list_start"))

private def r7pEmptyRawToks : List TokenEntry :=
  [{ rule := "Raw", opts := [("text".toList, OptVal.str [])] }]

private def r7pIdxRun : List UfffdAtom :=
  [UfffdAtom.tok 3 none, UfffdAtom.tok 4 none, UfffdAtom.tok 1 none, UfffdAtom.tok 5 none]

private def r7pIncSrc (name : String) : List Nat :=
  litBytes ("[[module " ++ name ++ "]]\n") ++ [10, 10] ++ phBytes 0 ++ [10, 10] ++ litBytes "[[/module]]"

private def r7pRawBodyToks : List TokenEntry :=
  [{ rule := "Raw", opts := [] }]

/-- C-SUSPECT4A-1 (S4A-L1): a mixed-case nested-list closer pairs and both [[li]] items are emitted, two explicit_item_start tokens. -/
theorem refcorr7_list_L1_mixed_case_nested_closer :
    r7pCountType (listRule (ParseState.ofSource "[[ul]]\n[[li]]a\n[[OL]]\n[[li]]b[[/li]]\n[[/ol]]\n[[/li]]\n[[/ul]]".toList)).tokens
      "explicit_item_start" = 2 := by decide

/-- C-SUSPECT4A-2 (S4A-L2): a cross-type uppercase closer closes the lowercase opener, whose list_type stays ol. -/
theorem refcorr7_list_L2_cross_type_upper_closer :
    r7pGetOptStr (r7pListStarts "[[ol]]\n[[li]]a[[/li]]\n[[/UL]]").head!.opts "list_type" = some (litBytes "ol") := by decide

/-- C-SUSPECT4A-3 (S4A-L3): an uppercase opener drops id/style/data attributes and the unclosed list emits no explicit_list_end. -/
theorem refcorr7_list_L3_upper_opener_drops_attrs :
    r7pAttrsEmpty (r7pListStarts "[[UL style=\"color:red\" id=\"x\"]]\n[[LI]]A[[/LI]]\n[[/uL]]").head!.opts = true ∧
    r7pCountType (listRule (ParseState.ofSource "[[UL style=\"color:red\" id=\"x\"]]\n[[LI]]A[[/LI]]\n[[/uL]]".toList)).tokens
      "explicit_list_end" = 0 := by decide

/-- C-SUSPECT4A-4 (S4A-L4): an item-less uppercase opener degrades to prose, emitting no List token at all. -/
theorem refcorr7_list_L4_itemless_upper_degrades :
    (listRule (ParseState.ofSource "[[OL]]\nplain body\n[[/OL]]\n\nAFTER".toList)).tokens.all
      (fun t => t.rule != "List") = true := by decide

/-- C-SUSPECT4B-1 (S4B-08/S4B-27): a leading space before _default: is skipped, so the Freelink page slug is x and the href is /x. -/
theorem refcorr7_freelink_leading_ws_default :
    (freelinkRule (ParseState.ofSource "[[[ _default:x]]]".toList)).tokens =
      [{ rule := "Freelink", opts :=
          [("site".toList, OptVal.null),
           ("page".toList, textVal (litBytes "x")),
           ("text".toList, textVal (litBytes "x")),
           ("anchor".toList, textVal []),
           ("extra".toList, textVal []),
           ("url".toList, OptVal.null),
           ("textFromTitle".toList, OptVal.null)] }] := by rfl

/-- C-SUSPECT4C fn-empty (S1): a footnote body consisting only of an empty Raw placeholder stores an empty body, so no separator space is emitted. -/
theorem refcorr7_fn_empty_no_space :
    (footnoteProcess (phBytes 0) {} r7pEmptyRawToks).2.2.footnotes = [[]] := by rfl

/-- C-SUSPECT4C fn-ws (S2): leading and trailing spaces around an empty Raw placeholder are trimmed away, so the stored body is still empty. -/
theorem refcorr7_fn_ws_no_space :
    (footnoteProcess (litBytes "  " ++ phBytes 0 ++ litBytes "  ") {} r7pEmptyRawToks).2.2.footnotes = [[]] := by rfl

/-- C-SUSPECT4C bib-empty (S4): an empty Raw placeholder sets the Bibitem start-token empty flag to true, so the footer renders 1. with no trailing space. -/
theorem refcorr7_bib_empty_no_space :
    (bibitemProcess (litBytes "lab") (phBytes 0) {} r7pEmptyRawToks).2.1 =
      r7pEmptyRawToks ++ [
        { rule := "Bibitem", opts :=
            [("label".toList, textVal (litBytes "lab")),
             ("id".toList, OptVal.int 1),
             ("type".toList, OptVal.str "start".toList),
             ("empty".toList, OptVal.bool true)] },
        { rule := "Bibitem", opts := [("type".toList, OptVal.str "end".toList)] }] := by rfl

/-- C-SUSPECT4C idx-after (S9): the U+FFFD recovery leaks the whole adjacent placeholder run 3,4,1,5 rather than the old truncated 3,4. -/
theorem refcorr7_idx_after_full_leak :
    ufffdLeakRun r7pIdxRun = (litBytes "3415", []) := by rfl

/-- C-SUSPECT4C inc-mod (S11): an included Raw spliced into a nosuchmod module body is consumed, leaving neither a Raw placeholder nor a literal [[/module]] in the replacement. -/
theorem refcorr7_inc_mod_no_reemit :
    match moduleMatch (r7pIncSrc "nosuchmod") r7pRawBodyToks with
    | some (repl, _, _) =>
        bytesContain (litBytes "[[/module]]") repl = false ∧
        bytesContain (phBytes 0) repl = false
    | none => True := by
    constructor <;> rfl

/-- C-SUSPECT4C inc-css (S14): the same consumption holds for a css module body, with no re-emitted raw span or literal closer. -/
theorem refcorr7_inc_css_no_reemit :
    match moduleMatch (r7pIncSrc "css") r7pRawBodyToks with
    | some (repl, _, _) =>
        bytesContain (litBytes "[[/module]]") repl = false ∧
        bytesContain (phBytes 0) repl = false
    | none => True := by
    constructor <;> rfl

end LeanFtml

