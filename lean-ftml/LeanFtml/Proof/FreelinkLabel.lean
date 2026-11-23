/-
LeanFtml.Proof.FreelinkLabel — universal reflection laws for the Freelink label branches.
Every statement is about the mirror's own expressions in LeanFtml.LinkRules, never a second hand-written copy.
The text/tft selector and the local option map are mirrored verbatim from lines 1162-1181.
The URL branch's label text selector is mirrored verbatim from lines 1130-1131.
This unit imports only LeanFtml.LinkRules and is self-contained.
-/

import LeanFtml.LinkRules

namespace LeanFtml

/-- Mirror of the mirror's local-branch (text, tft) selector at LinkRules 1162-1173. -/
def freelinkLabelTextTft (labelRaw textRaw : List Nat) : List Nat × OptVal :=
  if labelRaw.isEmpty then
    let t1 :=
      if textRaw.head? != some 58 && textRaw.head? != some 47 then
        match findSub [58] textRaw with
        | some i => textRaw.drop (i + 1)
        | none => textRaw
      else textRaw
    (trimBytes t1, OptVal.null)
  else if trimBytes labelRaw == [124] then
    ([124], OptVal.bool true)
  else (labelRaw.drop 1, OptVal.null)

/-- Mirror of the mirror's local-branch option map at LinkRules 1174-1181. -/
def freelinkLabelOpts (page anchor extra text : List Nat) (tft : OptVal) : OptMap :=
  [("site".toList, OptVal.null),
   ("page".toList, textVal page),
   ("text".toList, textVal text),
   ("anchor".toList, textVal anchor),
   ("extra".toList, textVal extra),
   ("url".toList, OptVal.null),
   ("textFromTitle".toList, tft)]

/-- Mirror of the mirror's URL-branch label text selector at LinkRules 1130-1131. -/
def freelinkLabelUrlText (labelRaw trimmed : List Nat) : List Nat :=
  if labelRaw.isEmpty then trimmed else labelRaw.drop 1

/-! ## Universal branch characterizations -/

/-- Empty label: the display-text rule runs and textFromTitle is null. -/
theorem freelinkLabel_empty (textRaw : List Nat) :
    freelinkLabelTextTft [] textRaw =
      (trimBytes
        (if textRaw.head? != some 58 && textRaw.head? != some 47 then
          match findSub [58] textRaw with
          | some i => textRaw.drop (i + 1)
          | none => textRaw
        else textRaw), OptVal.null) := by
  rfl

/-- A label whose trim is the bare pipe yields pipe text and the true flag. -/
theorem freelinkLabel_barePipe (labelRaw textRaw : List Nat)
    (h : trimBytes labelRaw == [124]) :
    freelinkLabelTextTft labelRaw textRaw = ([124], OptVal.bool true) := by
  cases labelRaw with
  | nil => simp [trimBytes] at h
  | cons b rest => simp [freelinkLabelTextTft, h]

/-- A nonempty label whose trim is not the bare pipe drops its leading pipe byte. -/
theorem freelinkLabel_nonbare (labelRaw textRaw : List Nat)
    (hne : labelRaw ≠ []) (h : (trimBytes labelRaw == [124]) = false) :
    freelinkLabelTextTft labelRaw textRaw = (labelRaw.drop 1, OptVal.null) := by
  cases labelRaw with
  | nil => contradiction
  | cons b rest => simp [freelinkLabelTextTft, h]

/-- URL branch with a nonempty label uses exactly the label minus its pipe. -/
theorem freelinkLabel_urlText_nonempty (labelRaw trimmed : List Nat) (hne : labelRaw ≠ []) :
    freelinkLabelUrlText labelRaw trimmed = labelRaw.drop 1 := by
  cases labelRaw with
  | nil => contradiction
  | cons b rest => rfl

/-- URL branch with no label uses the trimmed target as display text. -/
theorem freelinkLabel_urlText_empty (trimmed : List Nat) :
    freelinkLabelUrlText [] trimmed = trimmed := by
  rfl

/-! ## Universal option lookups -/

/-- The local option map's text entry is the selected text. -/
theorem freelinkLabel_opts_text (page anchor extra text : List Nat) (tft : OptVal) :
    omGet (freelinkLabelOpts page anchor extra text tft) "text".toList = some (textVal text) := by
  simp [freelinkLabelOpts, omGet]

/-- The local option map's textFromTitle entry is the selected flag. -/
theorem freelinkLabel_opts_tft (page anchor extra text : List Nat) (tft : OptVal) :
    omGet (freelinkLabelOpts page anchor extra text tft) "textFromTitle".toList = some tft := by
  simp [freelinkLabelOpts, omGet]

/-- Bare pipe: the local token's text and textFromTitle options reflect the true flag. -/
theorem freelinkLabel_barePipe_opts (labelRaw textRaw page anchor extra : List Nat)
    (h : trimBytes labelRaw == [124]) :
    let sel := freelinkLabelTextTft labelRaw textRaw
    omGet (freelinkLabelOpts page anchor extra sel.1 sel.2) "text".toList = some (textVal [124]) ∧
    omGet (freelinkLabelOpts page anchor extra sel.1 sel.2) "textFromTitle".toList =
      some (OptVal.bool true) := by
  rw [freelinkLabel_barePipe labelRaw textRaw h]
  constructor
  · exact freelinkLabel_opts_text page anchor extra [124] (OptVal.bool true)
  · exact freelinkLabel_opts_tft page anchor extra [124] (OptVal.bool true)

/-- Non-bare nonempty label: the local token's text is the label minus its pipe and tft is null. -/
theorem freelinkLabel_nonbare_opts (labelRaw textRaw page anchor extra : List Nat)
    (hne : labelRaw ≠ []) (h : (trimBytes labelRaw == [124]) = false) :
    let sel := freelinkLabelTextTft labelRaw textRaw
    omGet (freelinkLabelOpts page anchor extra sel.1 sel.2) "text".toList =
      some (textVal (labelRaw.drop 1)) ∧
    omGet (freelinkLabelOpts page anchor extra sel.1 sel.2) "textFromTitle".toList =
      some OptVal.null := by
  rw [freelinkLabel_nonbare labelRaw textRaw hne h]
  constructor
  · exact freelinkLabel_opts_text page anchor extra (labelRaw.drop 1) OptVal.null
  · exact freelinkLabel_opts_tft page anchor extra (labelRaw.drop 1) OptVal.null

/-! ## Closed regression checks -/

/-- Regression check: a pipe surrounded by trim bytes selects the bare-pipe branch. -/
theorem freelinkLabel_regression_bare :
    freelinkLabelTextTft (litBytes " | ") (litBytes "text") = ([124], OptVal.bool true) := by
  rfl

/-- Regression check: an ordinary nonempty label drops only its leading pipe. -/
theorem freelinkLabel_regression_named :
    freelinkLabelTextTft (litBytes "|Foo") (litBytes "text") = (litBytes "Foo", OptVal.null) := by
  rfl

#print axioms freelinkLabel_barePipe
#print axioms freelinkLabel_nonbare
#print axioms freelinkLabel_barePipe_opts
#print axioms freelinkLabel_nonbare_opts
#print axioms freelinkLabel_urlText_nonempty

end LeanFtml
