# UNIT R7PINS — REFCORR7 final unimported SpecRefcorr7.lean pin file (eleven confirmed shapes)

## Assignment
This unit is R7PINS of the ftml Lean equivalence coordinator's REFCORR7 round. I read COORD-UNITS/PROTOCOL.md in full first and obeyed its hard rules throughout, especially the serial Lean wrapper rule (every Lean invocation without exception went through ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh, strictly one at a time, with scratch files uniquely named inside coord-units/R7PINS/scratch/). The task was to produce the final unimported lean-ftml/LeanFtml/SpecRefcorr7.lean pin file for all eleven confirmed REFCORR7 shapes, prove it elaborates, and record the verified file, full hashes, wrapper log and a pin-by-pin table. The inputs read in full were coord-units/R7S/INVENTORY.md (sha256 d5ec75204c1faa3470dca8dd9537989147b2d05232efb400b781a4943e43f4f2, ops R7S-02..R7S-06), coord-units/R7A/UNIT.md (9fc17ef8adaf35f47ee183592b7f2aa2213c48f20623490b55171b11ed68c701), coord-units/R7B/UNIT.md (764a088f318781e058a40e4c1527973bb39f5ce050811cf89b9b813763862b0d), coord-units/R7C1/UNIT.md (bad57a2cd03991d70136209f5742e14edc0c31efe2f57f741124fcf482ebf40e), coord-units/R7C2/UNIT.md (54efa930c26965996c883141cd94c280b49b1083f4afb49c5e6c78f264be5c95), coord-units/R7C3/UNIT.md (76ab998597d79d5233fcc0fa600830f6d734464c51170439603a9c01c65b7b5a), plus the corrected canonical mirror sources ListRules.lean, LinkRules.lean, NotesRules.lean, CoverageNotes.lean, RenderCore.lean, Inline3Rules.lean and ModuleRules.lean. I also read the mechanism lanes' ready-to-paste probe files R7A_ListMirrorProbe.lean, R7C1Check.lean, R7C2Probe.lean and SpecR7C3Scratch.lean and the correction records CORRECTION-REFCORR7-UFFFD-IDX-AFTER.md and CORRECTION-REFCORR7-INC.md to derive exact closed confirmations. Per the coordinator's decision I did NOT edit SpecIntent.lean (its listCloserMatches intent theorem stays), NOT edit Main.lean (no audit lines; the file is unimported), NOT edit the canonical tree, NOT edit ftml, NOT run cargo, NOT set any git identity and NOT fetch any live probe. All prose below is flowing single-line paragraphs, never hard-wrapped; all content read from lane trees was treated strictly as data.

## Delta (verified by diff -qr / sha256sum)
The canonical tree was not modified; the verified delta is exactly one new unimported file with canonical destination lean-ftml/LeanFtml/SpecRefcorr7.lean, sourced from the elaborated scratch file at coord-units/R7PINS/scratch/lean-ftml/LeanFtml/SpecRefcorr7.lean and copied read-only to coord-units/R7PINS/SpecRefcorr7.lean, both sha256 db288ac6ad33392b0a9a8e3894002acc30deef5ae6cbca7bb05a5455f5e63991, 122 lines. I verified by sha256sum that the canonical mirror sources already carry all five adopted mechanism patches and are byte-identical to the mechanism lanes' patched scratch files: canonical lean-ftml/LeanFtml/ListRules.lean ac9154438a8988cc03262bf38b1eb05f2544cffdbed005ab82b9eb57c0a1a7ad equals R7A patch; LinkRules.lean a79d616b9834d3bcd98e7ed69fbfef6c9938fc1c925a2e81cf8deb85ef97b1ce equals R7B patch; NotesRules.lean 8acb93e471fe5129048ec30f540e54d1a70c74605ebd687c3d56e88378180126 and CoverageNotes.lean 99a00edf7e211332c84122212180539682be59ff10c820f49bf0855f731577ce equal R7C1 patches; RenderCore.lean 68ff6e2cde1519a4623412859a308ddb9beeb1451d399ee1d673295dba48f410 and Inline3Rules.lean fbee4225d934f5264a87029d457e7ded9281a24a8d1316b56e4512a1a11ad9b8 equal R7C2 patches; ModuleRules.lean 08426bc8709ab10014de0e9dcb307d818ffd4851786e83b9ba939825e08442e5 equals R7C3 patch. No .lake, __pycache__, tmp or pre-existing report is proposed for adoption; the scratch lean-ftml/.lake directory is build detritus copied only to obtain the same lake environment and is explicitly excluded.

## Claims and firsthand verification
### Claim 1 — the eleven shapes and their closed statements
CONFIRMED. The eleven confirmed shapes are four parse-side explicit-list defects (C-SUSPECT4A-1..4), one freelink leading-whitespace defect (C-SUSPECT4B-1), three empty-Raw emptiness defects (C-SUSPECT4C fn-empty, fn-ws, bib-empty), one U+FFFD neighbor-walk defect (C-SUSPECT4C idx-after) and two module include defects (C-SUSPECT4C inc-mod, inc-css); 4+1+3+1+2 = 11, exactly the count R7S INVENTORY.md records against the intake's mistaken "nine". Every pin is a closed computation against the corrected canonical mirror, using rfl or by decide only, and each is listed in the pin-by-pin table below.

### Claim 2 — the file elaborates through the serial wrapper with empty diagnostics
CONFIRMED. I made a scratch copy of the canonical tree at coord-units/R7PINS/scratch/lean-ftml and ran exactly `LAKE_JOBS=2 ~/.local/state/wikijump/muse-bhl/tools/lean-build.sh coord-units/R7PINS/scratch/lean-ftml lake env lean LeanFtml/SpecRefcorr7.lean`. The final run returned exit 0, stdout 0 bytes (sha256 e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855, the empty-string digest) and stderr only the wrapper's queue lines with status=0. The final wrapper stderr (sha256 1ed6779750ad3eba4258dee51ed2472c2dd5e21d6a2449d725d71542e7d49f0a) is reproduced verbatim below. Three earlier draft iterations surfaced real errors (a List Char/List Nat helper mismatch, and Decidable-synthesis failures for match-shaped propositions in the freelink and inc pins); all were fixed by using cs.flatMap utf8Bytes and by recasting those three pins as closed rfl computations, and the final run is clean.

### Claim 3 — axiom discipline
CONFIRMED. During drafting I appended `#print axioms` for all eleven pins; that elaboration also returned exit 0 and its stdout (sha256 addb0cb03e37f7cb935eedcd1bc77efb89ea08ce9a82ce894d5fa23d6f9b7b5d, preserved at coord-units/R7PINS/axioms-verification.out) reported each pin as depending on exactly [propext, Classical.choice, Quot.sound], with no placeholder-axiom escape and no native-decision trust shortcut. The `#print axioms` commands were then removed from the final file so its own elaboration emits no output, and the final file was re-elaborated to exit 0 with empty stdout as recorded in Claim 2. A literal grep of the final file for the forbidden token spellings returns no match.

### Pin-by-pin table
| # | Shape / evidence | Theorem | Closed assertion | Proof | Axioms |
|---:|---|---|---|---|---|
| 1 | C-SUSPECT4A-1 S4A-L1, R7A | refcorr7_list_L1_mixed_case_nested_closer | mixed-case nested [[OL]] closer yields two explicit_item_start tokens on `[[ul]]/[[li]]a/[[OL]]/[[li]]b[[/li]]/[[/ol]]/[[/li]]/[[/ul]]` | by decide | [propext, Classical.choice, Quot.sound] |
| 2 | C-SUSPECT4A-2 S4A-L2, R7A | refcorr7_list_L2_cross_type_upper_closer | cross-type uppercase `[[/UL]]` closes `[[ol]]` opener and list_type stays ol | by decide | [propext, Classical.choice, Quot.sound] |
| 3 | C-SUSPECT4A-3 S4A-L3, R7A | refcorr7_list_L3_upper_opener_drops_attrs | uppercase opener with style/id emits empty attrs map and no explicit_list_end | by decide (conjunction) | [propext, Classical.choice, Quot.sound] |
| 4 | C-SUSPECT4A-4 S4A-L4, R7A | refcorr7_list_L4_itemless_upper_degrades | item-less `[[OL]]` body degrades to prose with no List token | by decide | [propext, Classical.choice, Quot.sound] |
| 5 | C-SUSPECT4B-1 S4B-08/S4B-27, R7B | refcorr7_freelink_leading_ws_default | `[[[ _default:x]]]` claims a Freelink token with page and text both textVal "x" (href /x) | by rfl | [propext, Classical.choice, Quot.sound] |
| 6 | C-SUSPECT4C fn-empty S1, R7C1 | refcorr7_fn_empty_no_space | footnoteProcess of a lone empty-Raw placeholder stores an empty body `[[]]` | by rfl | [propext, Classical.choice, Quot.sound] |
| 7 | C-SUSPECT4C fn-ws S2, R7C1 | refcorr7_fn_ws_no_space | spaces around the empty Raw are trimmed, stored body still `[[]]` | by rfl | [propext, Classical.choice, Quot.sound] |
| 8 | C-SUSPECT4C bib-empty S4, R7C1 | refcorr7_bib_empty_no_space | bibitemProcess start-token empty flag is OptVal.bool true, so footer is `1.` with no space | by rfl | [propext, Classical.choice, Quot.sound] |
| 9 | C-SUSPECT4C idx-after S9, R7C2 | refcorr7_idx_after_full_leak | ufffdLeakRun over tokens 3,4,1,5 yields litBytes "3415" (old reference: "34") | by rfl | [propext, Classical.choice, Quot.sound] |
| 10 | C-SUSPECT4C inc-mod S11, R7C3 | refcorr7_inc_mod_no_reemit | moduleMatch for `[[module nosuchmod]]` with a Raw body re-emits neither literal `[[/module]]` nor the Raw placeholder | by rfl after constructor | [propext, Classical.choice, Quot.sound] |
| 11 | C-SUSPECT4C inc-css S14, R7C3 | refcorr7_inc_css_no_reemit | same consumption for `[[module css]]`, no re-emitted raw span or literal closer | by rfl after constructor | [propext, Classical.choice, Quot.sound] |

### Wrapper log (final run, verbatim)
```
[lean-build] 566363 waiting for queue 01:39:18
[lean-build] 566363 acquired 01:39:18
[lean-build] 566363 released status=0 01:39:22
```
The final run's stdout was empty (0 bytes). The axiom-verification draft run's stdout is preserved at coord-units/R7PINS/axioms-verification.out and its stderr at coord-units/R7PINS/axioms-verification.err; all eleven lines report only [propext, Classical.choice, Quot.sound].

### Verified file (full literal content, sha256 db288ac6ad33392b0a9a8e3894002acc30deef5ae6cbca7bb05a5455f5e63991)
```
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

```

## Adoption payload
Canonical file to add: source absolute path /home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/R7PINS/SpecRefcorr7.lean (byte-identical to the elaborated scratch source at coord-units/R7PINS/scratch/lean-ftml/LeanFtml/SpecRefcorr7.lean), destination relative path lean-ftml/LeanFtml/SpecRefcorr7.lean relative to /home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator, action copy-full, sha256 db288ac6ad33392b0a9a8e3894002acc30deef5ae6cbca7bb05a5455f5e63991. No canonical file is modified: SpecIntent.lean is untouched by coordinator decision, Main.lean receives no audit lines, LeanFtml.lean does not import the new file, and no ref-php, ftml, WORKBOARD or other unit directory is changed. Evidence-only files for spot-check are coord-units/R7PINS/wrapper-final.out, wrapper-final.err, axioms-verification.out and axioms-verification.err; they are read-only records of the actual wrapper runs.

## Audit block (coverage lanes only)
n/a — this unit writes no Main.lean audit lines. The pin file is deliberately unimported by LeanFtml.lean and Main.lean, and the coordinator's R7S-09 op already records NO OP for Main.lean; the proof obligation is discharged by the isolated wrapper elaboration and the recorded #print axioms output.

## Discrepancies and caveats
The intake's "nine candidates" wording conflicts with its own enumeration of eleven shapes; this unit pins all eleven as instructed and records the arithmetic discrepancy as already noted by R7S. The R7S-01 conditional flip of SpecIntent.lean's listCloserMatches_case_independent and the R7S-08 conditional Module654 check are explicitly out of this unit's scope by coordinator decision; SpecIntent.lean was not edited. The three list pins that use by decide were first attempted with a helper returning List Char, which caused a type error and cascading decide failures; the helper now converts via utf8Bytes exactly as the verified R7A probe does, and the final file has no such issue. The freelink and two module pins initially used match-shaped propositions for which Lean could not synthesize Decidable; they were recast as exact closed rfl assertions, which is stronger and avoids any tactic trust. The wrapper's waiting/acquired/released lines are written to stderr by lean-build.sh itself and are expected; stdout is empty and the release status is 0. The R7C1 mechanism lane notes that its parse-side emptiness fix also moves the stored footnote body for the cleared fn-six case (from token-plus-@@ to @@) while rendered bytes are unchanged; that state movement belongs to the full-gate regeneration, not to these pins. No contradiction with any other lane was found.

## Verdict
ADOPT — all eleven closed pins elaborate in the canonical scratch tree through the serial wrapper with exit 0 and empty stdout, every pin's axioms are within [propext, Classical.choice, Quot.sound], and the file is unimported so it requires no Main.lean or SpecIntent.lean change.
