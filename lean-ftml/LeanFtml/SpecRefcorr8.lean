/-
  SpecRefcorr8.lean — REFCORR8 closed pin file for the sixteen in-scope round-5 confirmations (2026-11-23). This file is deliberately unimported by LeanFtml.lean and Main.lean, exactly like SpecRefcorr6.lean and SpecRefcorr7.lean, and is elaborated in isolation through the serial queue wrapper. Live Wikidot behavior is definitional; the evidence order is ftml corpus and integration pins, then frozen parity captures, then cached single-fetch live sandbox probes. The sixteen shapes are the seventeen round-5 confirmations minus C-R5-S1-16, which the coordinator rules an owned token-numbering class and excludes from the fix and pin scope; the artifact-level analysis is recorded in coord-units/R8-E/CANONIZATION-DECISION.md. Every pin names its C-R5 candidate and its conformance record in the comment immediately above it, and every pin is a closed rfl reduction or a closed by-decide computation with no unproved placeholder, no native trust shortcut and no decision-procedure trust axiom. The axiom set of every pin is within [propext, Classical.choice, Quot.sound], verified with #print axioms in the R8-PINS wrapper log. All prose is flowing single-line paragraphs, never hard-wrapped.
-/

import LeanFtml.ListRules
import LeanFtml.LinkRules
import LeanFtml.NotesRules
import LeanFtml.NextRules
import LeanFtml.Inline1Rules
import LeanFtml.FormRawRules
import LeanFtml.TableRules
import LeanFtml.ContainRules
import LeanFtml.InteractiveRules

set_option maxRecDepth 200000

namespace LeanFtml

private def r8pSrc (bs : List Nat) : ParseState := ParseState.ofSource (bs.map Char.ofNat)

private def r8pEmptyRaw2 : List TokenEntry :=
  [{ rule := "Raw", opts := [("text".toList, OptVal.str [])] },
   { rule := "Raw", opts := [("text".toList, OptVal.str [])] }]

private def r8pGetB (o : OptMap) (k : String) : List Nat :=
  match omGet o k.toList with
  | some (OptVal.str cs) => cs.flatMap utf8Bytes
  | some (OptVal.bytes bs) => bs
  | _ => []

private def r8pListTypes (st : ParseState) : List (List Nat) :=
  (st.tokens.filter (fun t => t.rule == "List")).map (fun t => r8pGetB t.opts "type")

private def r8pListTypesOf (st : ParseState) (k : String) : List (List Nat) :=
  ((st.tokens.filter (fun t => t.rule == "List" && r8pGetB t.opts "type" == litBytes k)).map
    (fun t => r8pGetB t.opts "list_type"))

private def r8pArgVal (t : TokenEntry) (k : String) : Option (List Nat) :=
  match omGet t.opts "args".toList with
  | some (OptVal.map m) =>
      match m.find? (fun kv => kv.1 == k.toList) with
      | some (_, OptVal.bytes bs) => some bs
      | some (_, OptVal.str cs) => some (cs.flatMap utf8Bytes)
      | _ => none
  | _ => none

private def r8pVanished (t : TokenEntry) : Bool :=
  match omGet t.opts "vanished".toList with
  | some (OptVal.bool b) => b
  | _ => false

private def r8pBibEmptyFlag (t : TokenEntry) : Bool :=
  match omGet t.opts "empty".toList with
  | some (OptVal.bool b) => b
  | _ => false

private def r8pDivPairOK (res : List Nat × List TokenEntry) (k : String) (v : List Nat) : Bool :=
  match res.2[0]? with
  | some t => res.2.length == 2 && (r8pArgVal t k == some v) && (!r8pVanished t)
  | none => false

/- C-R5-R3-1, conformance-round5-r3/cases.jsonl R3-19 and captures-followup.json: two empty-Raw placeholders separated by two spaces re-trim to an empty stored footnote body, so no separator space is emitted. -/
theorem refcorr8_fn_empty_raw_retrim_no_sep :
    (footnoteProcess (phBytes 0 ++ litBytes "  " ++ phBytes 1) {} r8pEmptyRaw2).2.2.footnotes = [[]] := rfl

/- C-R5-R3-2, conformance-round5-r3/CORRECTION-C-R5-R3-2 and captures-followup.json R3-20: the same two-empty-Raw shape as a Bibitem value with a tab gap re-trims the visible remainder to nothing and sets the empty flag, while the stored bibitems state is byte-identical. -/
theorem refcorr8_bib_empty_raw_retrim_no_sep :
    let r := bibitemProcess (litBytes "lab") (phBytes 0 ++ litBytes "\t" ++ phBytes 1) {} r8pEmptyRaw2
    r.1 = phBytes 2 ++ phBytes 3 ∧
    (match r.2.1[2]? with | some t => r8pBibEmptyFlag t | none => false) = true := by
  constructor <;> rfl

/- C-R5-P2-1, conformance-round5-p2/CANDIDATES.md and captures.json R5P2-01: a leading U+000B byte before a leading _default: category is skipped, so the page slug is x and the Freelink token shape is the plain /x shape. -/
theorem refcorr8_freelink_vtab_before_default :
    (freelinkRule (r8pSrc (litBytes "[[[" ++ [11] ++ litBytes "_default:x]]]"))).tokens =
      [{ rule := "Freelink", opts :=
           [("site".toList, OptVal.null),
            ("page".toList, textVal (litBytes "x")),
            ("text".toList, textVal (litBytes "x")),
            ("anchor".toList, textVal []),
            ("extra".toList, textVal []),
            ("url".toList, OptVal.null),
            ("textFromTitle".toList, OptVal.null)] }] := rfl

/- C-R5-P2-2, conformance-round5-p2/CANDIDATES.md and captures.json R5P2-02: the two-byte U+00A0 sequence before _default: is skipped as a whole sequence, yielding the same /x Freelink token. -/
theorem refcorr8_freelink_nbsp_before_default :
    (freelinkRule (ParseState.ofSource "[[[ _default:x]]]".toList)).tokens =
      [{ rule := "Freelink", opts :=
           [("site".toList, OptVal.null),
            ("page".toList, textVal (litBytes "x")),
            ("text".toList, textVal (litBytes "x")),
            ("anchor".toList, textVal []),
            ("extra".toList, textVal []),
            ("url".toList, OptVal.null),
            ("textFromTitle".toList, OptVal.null)] }] := rfl

/- C-R5-S1-08, conformance-round5-s1/CANDIDATES.md and captures.json muse-probe-round5-s1-f3-u3000: the three-byte U+3000 sequence before _default: is skipped as a whole sequence, yielding the /x Freelink token on live. -/
theorem refcorr8_freelink_u3000_before_default :
    (freelinkRule (ParseState.ofSource "[[[　_default:x]]]".toList)).tokens =
      [{ rule := "Freelink", opts :=
           [("site".toList, OptVal.null),
            ("page".toList, textVal (litBytes "x")),
            ("text".toList, textVal (litBytes "x")),
            ("anchor".toList, textVal []),
            ("extra".toList, textVal []),
            ("url".toList, OptVal.null),
            ("textFromTitle".toList, OptVal.null)] }] := rfl

/- C-R5-P2-3, conformance-round5-p2/CANDIDATES.md and ref.jsonl line 16: the upper-case TYPE attribute name is missed by the case-sensitive lower-case type lookup and the stored type is the live equation fallback. At REFCORR8/9 time the REFCORR3 absent-type default align was deliberately not flipped; REFCORR11 C-R5D-P2-4 retires that default on fresh live evidence, so this pin keeps its own truth value (TYPE is still a case variant) while the absent-type default is now equation. -/
theorem refcorr8_math_upper_TYPE_selects_equation :
    (match (mathProcess (some (litBytes "a")) (litBytes "TYPE=\"align\"") (litBytes "x") {}).1 with
      | some e => omGet e.opts "type".toList
      | none => none) = some (OptVal.str "equation".toList) := rfl

/- C-R5-P2-4, conformance-round5-p2/CANDIDATES.md and captures.json R5P2-18: a Date token anywhere in a math-inline body joins the suppression set, so the whole formula resolves to empty bytes rather than expanding the date source. -/
theorem refcorr8_mathinline_date_token_suppresses_all :
    mathResolve (litBytes "x " ++ phBytes 0 ++ litBytes " y")
      [{ rule := "Date", opts := [] }] = [] := rfl

/- C-R5-P1-3, conformance-round5-p1/LEDGER.md L3 and captures.json dff13ed2: a scored upper-case opener with [[li]] items and an absorbed final closer takes the unclosed path, emitting an item start and a list start but no list end. -/
theorem refcorr8_list_scored_upper_opener_unclosed :
    let st := listRule (ParseState.ofSource "[[UL_]]\n[[li]]a[[/li]]\n[[/ul]]".toList)
    r8pListTypes st = [litBytes "explicit_item_start", litBytes "explicit_list_start"] ∧
    r8pListTypesOf st "explicit_list_start" = [litBytes "UL"] := by
  decide

/- C-R5-P1-4, conformance-round5-p1/LEDGER.md L4 and captures.json 66d0308d: an upper-case opener with no item and no closer keeps the literal opener text and emits no List token. -/
theorem refcorr8_list_upper_no_closer_keeps_literal_opener :
    let st := listRule (ParseState.ofSource "[[UL]]\nplain\n\nAFTER".toList)
    bytesContain (litBytes "[[UL]]") (byteForm st.work) = true ∧
    st.tokens.all (fun t => t.rule != "List") = true := by
  decide

/- C-R5-S1-01, conformance-round5-s1/CANDIDATES.md and captures.json muse-probe-round5-s1-l1-attrmix: the attributed mixed-case outer opener and nested lowercase list with a cross-type uppercase closer produce two sibling lists (ul then ol), two items and AFTER outside them. -/
theorem refcorr8_list_attrmix_cross_type_closer_siblings :
    let st := listRule (ParseState.ofSource "[[UL class=\"c\" id=\"i\" data-x=\"1\"]]\n[[li]]a\n[[ol]]\n[[li]]b[[/li]]\n[[/OL]]\n[[/li]]\n[[/ul]]AFTER".toList)
    r8pListTypes st =
      [litBytes "explicit_br_no_nl", litBytes "explicit_item_start",
       litBytes "explicit_item_end", litBytes "explicit_list_start",
       litBytes "explicit_list_end", litBytes "explicit_item_start",
       litBytes "explicit_item_end", litBytes "explicit_list_start",
       litBytes "explicit_list_end"] ∧
    r8pListTypesOf st "explicit_list_start" = [litBytes "ul", litBytes "ol"] ∧
    bytesContain (litBytes "AFTER") (byteForm st.work) = true := by
  decide

/- C-R5-S1-02, conformance-round5-s1/CANDIDATES.md and captures.json muse-probe-round5-s1-l2-deepcross: a cross-type uppercase closer at depth two pairs with the inner lowercase opener, leaving [[/li]] and [[/ul]] literal, consuming [[/ol]] and keeping AFTER. -/
theorem refcorr8_list_deepcross_closer_pairing :
    let st := listRule (ParseState.ofSource "[[ul]]\n[[li]]a\n[[ol]]\n[[li]]b[[/li]]\n[[/UL]]AFTER\n[[/ol]]\n[[/li]]\n[[/ul]]".toList)
    r8pListTypes st =
      [litBytes "explicit_none_item_start", litBytes "explicit_none_item_end",
       litBytes "explicit_list_start", litBytes "explicit_list_end",
       litBytes "explicit_item_start", litBytes "explicit_item_end",
       litBytes "explicit_list_start", litBytes "explicit_list_end"] ∧
    bytesContain (litBytes "[[/li]]") (byteForm st.work) = true ∧
    bytesContain (litBytes "[[/ul]]") (byteForm st.work) = true ∧
    bytesContain (litBytes "[[/ol]]") (byteForm st.work) = false ∧
    bytesContain (litBytes "AFTER") (byteForm st.work) = true := by
  decide

/- C-R5-S1-16 (four-adjacent U+FFFD digit run) is EXCLUDED from this pin file by the coordinator's scope decision that the digit-numbering class is owned; the artifact-level analysis is recorded in coord-units/R8-E/CANONIZATION-DECISION.md, and no pin is emitted for it. -/

/- C-R5-P3-1, conformance-round5-p3/CORRECTION-C-R5-P3-1.md and captures.json p3-08-raw-4-3: a bare three-@ closer after a 4+ opener survives as three literal @ bytes, so @@@@ZQ@@@ scans to ZQ@@@ with no Raw token claimed. -/
theorem refcorr8_raw_4opener_3closer_surplus :
    (rawScan none (litBytes "@@@@ZQ@@@") [] 10).1 = litBytes "ZQ@@@" ∧
    (rawScan none (litBytes "@@@@ZQ@@@") [] 10).2 = [] := by
  constructor <;> rfl

/- C-R5-P3-2, conformance-round5-p3/CORRECTION-C-R5-P3-2.md and captures.json p3-13-tableadv-upper-data: a data-Foo key folds to data-foo and survives, while CLASS, ID and DATA-foo stay dropped by the case-sensitive grammar. -/
theorem refcorr8_tableadv_data_foo_mixed_case_kept :
    advAttrStep "table" [] (litBytes "data-Foo", litBytes "UP") =
        [(litBytes "data-foo", litBytes "UP")] ∧
    advAttrStep "table" [] (litBytes "CLASS", litBytes "UP") = [] ∧
    advAttrStep "table" [] (litBytes "ID", litBytes "UP") = [] ∧
    advAttrStep "table" [] (litBytes "DATA-foo", litBytes "UP") = [] := by
  decide

/- C-R5-P1-1, conformance-round5-p1/LEDGER.md D2 and captures.json 0aa7b38d: a whitespace-only class value normalizes to an empty but authored-non-empty attribute, so the Div start token keeps class="" with no vanished flag and the pair stays real. -/
theorem refcorr8_div_ws_only_class_keeps_pair :
    r8pDivPairOK (divProcess [] [] (some (litBytes "class=\" \"")) [] []) "class" [] = true := rfl

/- C-R5-P1-2, conformance-round5-p1/LEDGER.md D3 and captures.json 0670e39f: two data-* keys differing only in suffix case fold to the same lower-case key and the later authored value wins, so data-foo carries 2 with no vanished flag. -/
theorem refcorr8_div_data_case_last_wins :
    r8pDivPairOK (divProcess [] [] (some (litBytes "data-Foo=\"1\" data-foo=\"2\"")) [] []) "data-foo" (litBytes "2") = true := rfl

/- C-R5-R1-1, conformance-round5-r1/MIRROR-CONSEQUENCE.md and capture f1ad87bc: an id-bearing Div start token whose raw id is the bare u- shell emits it verbatim as <div id="u-">, complementary to the in-place cov_div_id_shell_live flip. -/
theorem refcorr8_div_render_id_u_shell_kept :
    renderDiv [("type".toList, OptVal.bytes [115, 116, 97, 114, 116]),
      ("args".toList, OptVal.map [("id".toList, OptVal.bytes [117, 45])])] =
      litBytes "<div id=\"u-\">" := rfl

end LeanFtml
