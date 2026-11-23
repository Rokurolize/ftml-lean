/-
  LeanFtml.CoverageNotes — coverage-tier classification of the NOTES
  render family (Footnote, Footnoteitem, Footnoteblock, Bibitem,
  Bibliography, Bibcite).

  The classes are the branches of the reference renderers
  (`ref-php/text-wiki/Text/Wiki/Render/Xhtml/{Footnote,Footnoteitem,
  Footnoteblock,Bibitem,Bibliography,Bibcite}.php`), read off the
  `if` cascade each `token()` actually executes. Membership is a
  decidable predicate of the token (its rule and options, as it sits
  in the token stream) and the render-time `DocState`. The partition
  theorems say every NOTES-rule input lands in exactly one class.
  Reachability is the set of tokens the parse mirrors append
  (`NotesRules.lean`); every such token, rendered against the
  document state the emitter leaves, lands in a class that is not a
  fallthrough arm.

  Branch provenance (PHP `token()`):

  * Footnote.php:39–45. No test. `$options['label']` and
    `Text_Wiki_Parse_Math::$equationsArray` are read and discarded.
    One class, `fnCite`. `id` and `id_prefix` are parameters.
  * Footnoteitem.php:43 (`type == 'parabreak'`), :46 (`type == 'start'`,
    then :62 `$body !== ''`), :67 (`type == 'end'`), and the implicit
    null return when `type` is none of those.
  * Footnoteblock.php:40 (`count($footnotes) == 0`, and this test
    dominates `type`), :43 (`type == 'start'`), :45 (`$title === null`
    defaults to "Footnotes"), :49 (`$title !== ""` emits the escaped
    title; `=== ""` omits the title div), :61 (`type == 'end'`),
    implicit null otherwise.
  * Bibitem.php:41 (`type == "start"`), :48 (`empty($options['empty'])`
    chooses the separator space), :52 (`type == "end"`), implicit null.
  * Bibliography.php:44 (`type == 'nl'`, tested before `start`),
    :48/` :50/` :54 (the same title trichotomy as Footnoteblock, default
    "Bibliography"), :68 (`type == 'end'`), implicit null. The empty-
    collection guard is commented out and is not a branch.
  * Bibcite.php:41–46. `vars['bibitemIds'][$label] === null` versus a
    stored id. No fallthrough: both arms return a string.

  Title classes follow the PHP tests (`=== null`, then `!== ""`), not
  the mirror's `renderOptValBytes` emptiness test. Those agree on the
  values the parsers store (`null`, `OptVal.str`, `OptVal.bytes`);
  `fnb_bool_false_divergence` and `bib_bool_false_divergence` record
  the one scalar where they do not (`OptVal.bool false`).
-/

import LeanFtml.NotesRender

namespace LeanFtml

/-! ## Classes -/

inductive TitleBranch where
  | default
  | blank
  | authored
  deriving DecidableEq, Repr

/-- PHP `$title === null` (a missing key reads as null) then
    `$title === ""`. Every other value, including `false`, is the
    `htmlspecialchars` arm. -/
def titleBranch : Option OptVal → TitleBranch
  | none => .default
  | some .null => .default
  | some (.str []) => .blank
  | some (.bytes []) => .blank
  | some _ => .authored

/-- The mirror's title test: null defaults, and a value whose
    `renderOptValBytes` is empty omits the title div. -/
def mirrorTitleBranch : Option OptVal → TitleBranch
  | none => .default
  | some .null => .default
  | some w => if (renderOptValBytes w).isEmpty then .blank else .authored

inductive NotesClass where
  | fnCite
  | fniParabreak
  | fniStartEmpty
  | fniStartBody
  | fniEnd
  | fniFallthrough
  | fnbNoNotes
  | fnbStartDefault
  | fnbStartBlank
  | fnbStartTitled
  | fnbEnd
  | fnbFallthrough
  | bibiStartSpace
  | bibiStartTight
  | bibiEnd
  | bibiFallthrough
  | bibNl
  | bibStartDefault
  | bibStartBlank
  | bibStartTitled
  | bibEnd
  | bibFallthrough
  | bibcMissing
  | bibcResolved
  deriving DecidableEq, Repr

def fnbFromTitle : TitleBranch → NotesClass
  | .default => .fnbStartDefault
  | .blank => .fnbStartBlank
  | .authored => .fnbStartTitled

def bibFromTitle : TitleBranch → NotesClass
  | .default => .bibStartDefault
  | .blank => .bibStartBlank
  | .authored => .bibStartTitled

/-- A class whose PHP arm does not return a string (implicit null). -/
def isFallthrough : NotesClass → Bool
  | .fniFallthrough | .fnbFallthrough | .bibiFallthrough | .bibFallthrough => true
  | _ => false

/-! ## The decision function (the renderers' cascades) -/

def fniClass (doc : DocState) (opts : OptMap) : NotesClass :=
  if optTypeIs opts (litBytes "parabreak") then
    .fniParabreak
  else if optTypeIs opts (litBytes "start") then
    let idNat := (optNat opts "id".toList).getD 0
    let body := if idNat > 0 then (doc.footnotes[idNat - 1]?).getD [] else []
    if body.isEmpty then .fniStartEmpty else .fniStartBody
  else if optTypeIs opts (litBytes "end") then
    .fniEnd
  else
    .fniFallthrough

def fnbClass (doc : DocState) (opts : OptMap) : NotesClass :=
  if doc.footnotes.isEmpty then
    .fnbNoNotes
  else if optTypeIs opts (litBytes "start") then
    fnbFromTitle (titleBranch (omGet opts "title".toList))
  else if optTypeIs opts (litBytes "end") then
    .fnbEnd
  else
    .fnbFallthrough

def bibiClass (opts : OptMap) : NotesClass :=
  if optTypeIs opts (litBytes "start") then
    if phpEmptyOpt (omGet opts "empty".toList) then .bibiStartSpace
    else .bibiStartTight
  else if optTypeIs opts (litBytes "end") then
    .bibiEnd
  else
    .bibiFallthrough

def bibClass (opts : OptMap) : NotesClass :=
  if optTypeIs opts (litBytes "nl") then
    .bibNl
  else if optTypeIs opts (litBytes "start") then
    bibFromTitle (titleBranch (omGet opts "title".toList))
  else if optTypeIs opts (litBytes "end") then
    .bibEnd
  else
    .bibFallthrough

def bibcClass (doc : DocState) (opts : OptMap) : NotesClass :=
  match bibLookup doc.bibitemIds (optStrBytes opts "label".toList) with
  | none => .bibcMissing
  | some _ => .bibcResolved

def isNotesRule : RenderRuleId → Bool
  | .footnote | .footnoteitem | .footnoteblock | .bibitem | .bibliography | .bibcite =>
      true
  | _ => false

/-- Class of one render input. `none` when the rule is outside the family. -/
def notesClassify (r : RenderRuleId) (doc : DocState) (opts : OptMap) : Option NotesClass :=
  match r with
  | .footnote => some .fnCite
  | .footnoteitem => some (fniClass doc opts)
  | .footnoteblock => some (fnbClass doc opts)
  | .bibitem => some (bibiClass opts)
  | .bibliography => some (bibClass opts)
  | .bibcite => some (bibcClass doc opts)
  | _ => none

/-- Decidable membership of class `c` for a token with rule `r`. -/
def memClass (c : NotesClass) (r : RenderRuleId) (doc : DocState) (opts : OptMap) : Bool :=
  notesClassify r doc opts == some c

/-- Decidable membership for the token `e` drawn from a token stream. -/
def tokenMem (c : NotesClass) (e : TokenEntry) (doc : DocState) : Bool :=
  match renderRuleOfName e.rule with
  | some r => memClass c r doc e.opts
  | none => false

/-- Decidable membership of class `c` for the token at index `i` of
    `stream`, under render state `doc`. An out-of-range index is not
    a member of any class. -/
def streamClassAt (c : NotesClass) (stream : List TokenEntry) (i : Nat)
    (doc : DocState) : Bool :=
  match stream[i]? with
  | some e => tokenMem c e doc
  | none => false

/-! ## Partition -/

theorem classify_isSome (r : RenderRuleId) (doc : DocState) (opts : OptMap)
    (h : isNotesRule r = true) : (notesClassify r doc opts).isSome = true := by
  cases r <;> simp_all [isNotesRule, notesClassify]

theorem notes_class_complete (r : RenderRuleId) (doc : DocState) (opts : OptMap)
    (h : isNotesRule r = true) : ∃ c, notesClassify r doc opts = some c := by
  have hs := classify_isSome r doc opts h
  match hc : notesClassify r doc opts with
  | some c => exact ⟨c, rfl⟩
  | none =>
      simp [hc] at hs

theorem notes_class_exclusive (r : RenderRuleId) (doc : DocState) (opts : OptMap)
    (c1 c2 : NotesClass) (h1 : notesClassify r doc opts = some c1)
    (h2 : notesClassify r doc opts = some c2) : c1 = c2 := by
  rw [h1] at h2
  injection h2

theorem memClass_complete (r : RenderRuleId) (doc : DocState) (opts : OptMap)
    (h : isNotesRule r = true) : ∃ c, memClass c r doc opts = true := by
  obtain ⟨c, hc⟩ := notes_class_complete r doc opts h
  refine ⟨c, ?_⟩
  simp [memClass, hc]

theorem memClass_exclusive (r : RenderRuleId) (doc : DocState) (opts : OptMap)
    (c1 c2 : NotesClass) (h1 : memClass c1 r doc opts = true)
    (h2 : memClass c2 r doc opts = true) : c1 = c2 := by
  simp [memClass] at h1 h2
  exact notes_class_exclusive r doc opts c1 c2 h1 h2

/-! ## Exclusivity the cascade itself gives -/

theorem optTypeIs_exclusive (opts : OptMap) (a b : List Nat)
    (h : optTypeIs opts a = true) (hne : a ≠ b) : optTypeIs opts b = false := by
  simp only [optTypeIs] at h ⊢
  have heq : optStrBytes opts "type".toList = a := eq_of_beq h
  rw [heq]
  cases hbeq : (a == b) with
  | false => rfl
  | true => exact absurd (eq_of_beq hbeq) hne

theorem notes_type_tags_distinct :
    litBytes "parabreak" ≠ litBytes "start" ∧
    litBytes "parabreak" ≠ litBytes "end" ∧
    litBytes "start" ≠ litBytes "end" ∧
    litBytes "nl" ≠ litBytes "start" ∧
    litBytes "nl" ≠ litBytes "end" := by
  decide

theorem fni_parabreak_dominates (doc : DocState) (opts : OptMap)
    (h : optTypeIs opts (litBytes "parabreak") = true) :
    fniClass doc opts = .fniParabreak := by
  simp [fniClass, h]

theorem fnb_empty_dominates (doc : DocState) (opts : OptMap)
    (h : doc.footnotes.isEmpty = true) : fnbClass doc opts = .fnbNoNotes := by
  simp [fnbClass, h]

theorem bib_nl_excludes_start (opts : OptMap)
    (h : optTypeIs opts (litBytes "nl") = true) :
    optTypeIs opts (litBytes "start") = false :=
  optTypeIs_exclusive opts (litBytes "nl") (litBytes "start") h
    notes_type_tags_distinct.2.2.2.1

/-! ## Title tests: PHP versus the mirror, on stored values -/

private theorem utf8Bytes_cons (c : Char) : (utf8Bytes c).isEmpty = false := by
  unfold utf8Bytes
  by_cases h1 : c.toNat < 0x80
  · simp [h1]
  · simp [h1]
    by_cases h2 : c.toNat < 0x800
    · simp [h2]
    · simp [h2]
      by_cases h3 : c.toNat < 0x10000
      · simp [h3]
      · simp [h3]

private theorem append_isEmpty_left {α : Type} (xs ys : List α)
    (h : xs.isEmpty = false) : (xs ++ ys).isEmpty = false := by
  cases xs with
  | nil => simp at h
  | cons _ _ => simp

theorem textVal_title_agrees (bs : List Nat) :
    titleBranch (some (textVal bs)) = mirrorTitleBranch (some (textVal bs)) := by
  cases hc : bs.contains 0xFF with
  | true =>
      cases bs with
      | nil => simp at hc
      | cons b rest =>
          have htv : textVal (b :: rest) = OptVal.bytes (b :: rest) := by
            unfold textVal
            rw [hc]
            simp only [↓reduceIte]
          rw [htv]
          simp [titleBranch, mirrorTitleBranch, renderOptValBytes]
  | false =>
      have htv : textVal bs = OptVal.str (utf8Decode bs) := by
        unfold textVal
        rw [hc]
        rw [ite_eq_right (by decide : ¬(false = true))]
      rw [htv]
      cases hcs : utf8Decode bs with
      | nil =>
          simp [hcs, titleBranch, mirrorTitleBranch, renderOptValBytes]
      | cons c rest =>
          have hmap : (c :: rest).flatMap utf8Bytes =
              utf8Bytes c ++ rest.flatMap utf8Bytes := rfl
          have hflat : ((c :: rest).flatMap utf8Bytes).isEmpty = false := by
            rw [hmap]
            exact append_isEmpty_left _ _ (utf8Bytes_cons c)
          simp only [hcs, titleBranch, mirrorTitleBranch, renderOptValBytes, hflat,
            Bool.false_eq_true, ↓reduceIte]

theorem titleOpt_class_agrees (g : Option (List Nat)) :
    titleBranch (some (titleOpt g)) = mirrorTitleBranch (some (titleOpt g)) := by
  unfold titleOpt
  split
  · simp [textVal_title_agrees]
  · rfl

theorem fnb_bool_false_divergence (doc : DocState)
    (h : doc.footnotes.isEmpty = false) :
    fnbClass doc
        [("type".toList, OptVal.str "start".toList),
         ("title".toList, OptVal.bool false)] = .fnbStartTitled ∧
      renderFootnoteblock doc
        [("type".toList, OptVal.str "start".toList),
         ("title".toList, OptVal.bool false)] =
        litBytes "<div class=\"footnotes-footer\">" := by
  have hs : optTypeIs
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.bool false)] (litBytes "start") = true := rfl
  have ht : omGet
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.bool false)] "title".toList =
      some (.bool false) := rfl
  refine ⟨?_, ?_⟩
  · simp only [fnbClass, h, hs, ht, titleBranch, fnbFromTitle,
      Bool.false_eq_true, ↓reduceIte]
  · simp only [renderFootnoteblock, h, hs, ht, renderOptValBytes,
      List.isEmpty_nil, Bool.false_eq_true, ↓reduceIte]

theorem bib_bool_false_divergence :
    bibClass
        [("type".toList, OptVal.str "start".toList),
         ("title".toList, OptVal.bool false)] = .bibStartTitled ∧
      renderBibliography
        [("type".toList, OptVal.str "start".toList),
         ("title".toList, OptVal.bool false)] =
        litBytes "<div class=\"bibitems\">" := by
  have hn : optTypeIs
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.bool false)] (litBytes "nl") = false := rfl
  have hs : optTypeIs
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.bool false)] (litBytes "start") = true := rfl
  have ht : omGet
      [("type".toList, OptVal.str "start".toList),
       ("title".toList, OptVal.bool false)] "title".toList =
      some (.bool false) := rfl
  refine ⟨?_, ?_⟩
  · simp only [bibClass, hn, hs, ht, titleBranch, bibFromTitle,
      Bool.false_eq_true, ↓reduceIte]
  · simp only [renderBibliography, hn, hs, ht, renderOptValBytes,
      List.isEmpty_nil, Bool.false_eq_true, ↓reduceIte]

/-! ## Token shapes the parsers append -/

def fnEntry (id : Nat) : TokenEntry :=
  { rule := "Footnote", opts := [("id".toList, OptVal.int (id : Int))] }

def fniParaEntry : TokenEntry :=
  { rule := "Footnoteitem",
    opts := [("type".toList, OptVal.str "parabreak".toList)] }

def fniStartEntry (id : Nat) : TokenEntry :=
  { rule := "Footnoteitem",
    opts := [("type".toList, OptVal.str "start".toList),
             ("id".toList, OptVal.int (id : Int))] }

def fniEndEntry (id : Nat) : TokenEntry :=
  { rule := "Footnoteitem",
    opts := [("type".toList, OptVal.str "end".toList),
             ("id".toList, OptVal.int (id : Int))] }

def fnbStartEntry (title : OptVal) : TokenEntry :=
  { rule := "Footnoteblock",
    opts := [("type".toList, OptVal.str "start".toList),
             ("title".toList, title)] }

def fnbEndEntry : TokenEntry :=
  { rule := "Footnoteblock",
    opts := [("type".toList, OptVal.str "end".toList)] }

def bibiStartEntry (label : List Nat) (id : Nat) (empty : Bool) : TokenEntry :=
  { rule := "Bibitem",
    opts := [("label".toList, textVal label),
             ("id".toList, OptVal.int (id : Int)),
             ("type".toList, OptVal.str "start".toList),
             ("empty".toList, OptVal.bool empty)] }

def bibiEndEntry : TokenEntry :=
  { rule := "Bibitem", opts := [("type".toList, OptVal.str "end".toList)] }

def bibNlEntry : TokenEntry :=
  { rule := "Bibliography",
    opts := [("type".toList, OptVal.str "nl".toList)] }

def bibStartEntry (title : OptVal) : TokenEntry :=
  { rule := "Bibliography",
    opts := [("type".toList, OptVal.str "start".toList),
             ("title".toList, title)] }

def bibEndEntry : TokenEntry :=
  { rule := "Bibliography",
    opts := [("type".toList, OptVal.str "end".toList)] }

def bibcEntry (label : List Nat) : TokenEntry :=
  { rule := "Bibcite", opts := [("label".toList, textVal label)] }

/-- A token the NOTES parse rules can append, paired with a render
    state against which that token is meaningful. Footnoteblock
    start/end tokens require a nonempty `doc.footnotes`, because
    `footnoteblockProcess` emits them only for such a collection and
    the list is still that collection at render. -/
inductive NotesReach : TokenEntry → DocState → Prop where
  | fn : ∀ doc id, NotesReach (fnEntry id) doc
  | fniPara : ∀ doc, NotesReach fniParaEntry doc
  | fniStart : ∀ doc id, NotesReach (fniStartEntry id) doc
  | fniEnd : ∀ doc id, NotesReach (fniEndEntry id) doc
  | fnbStart : ∀ doc title, doc.footnotes.isEmpty = false →
      NotesReach (fnbStartEntry title) doc
  | fnbEnd : ∀ doc, doc.footnotes.isEmpty = false →
      NotesReach fnbEndEntry doc
  | bibiStart : ∀ doc label id empty, NotesReach (bibiStartEntry label id empty) doc
  | bibiEnd : ∀ doc, NotesReach bibiEndEntry doc
  | bibNl : ∀ doc, NotesReach bibNlEntry doc
  | bibStart : ∀ doc title, NotesReach (bibStartEntry title) doc
  | bibEnd : ∀ doc, NotesReach bibEndEntry doc
  | bibc : ∀ doc label, NotesReach (bibcEntry label) doc

private theorem fniStart_class_eq (doc : DocState) (id : Nat) :
    fniClass doc (fniStartEntry id).opts =
      let idNat := (optNat (fniStartEntry id).opts "id".toList).getD 0
      let body := if idNat > 0 then (doc.footnotes[idNat - 1]?).getD [] else []
      if body.isEmpty then NotesClass.fniStartEmpty else NotesClass.fniStartBody := by
  have hp : optTypeIs (fniStartEntry id).opts (litBytes "parabreak") = false := rfl
  have hs : optTypeIs (fniStartEntry id).opts (litBytes "start") = true := rfl
  simp only [fniClass, hp, hs, Bool.false_eq_true, ↓reduceIte]

theorem notesReach_classified {e : TokenEntry} {doc : DocState}
    (h : NotesReach e doc) :
    ∃ r c, renderRuleOfName e.rule = some r ∧
      notesClassify r doc e.opts = some c ∧ isFallthrough c = false := by
  cases h with
  | fn doc id =>
      exact ⟨.footnote, .fnCite, rfl, rfl, rfl⟩
  | fniPara doc =>
      have hp : optTypeIs fniParaEntry.opts (litBytes "parabreak") = true := rfl
      refine ⟨.footnoteitem, .fniParabreak, rfl, ?_, rfl⟩
      simp only [notesClassify, fniClass, hp, ↓reduceIte]
  | fniStart doc id =>
      have hp : optTypeIs (fniStartEntry id).opts (litBytes "parabreak") = false := rfl
      have hs : optTypeIs (fniStartEntry id).opts (litBytes "start") = true := rfl
      refine ⟨.footnoteitem, fniClass doc (fniStartEntry id).opts, rfl, rfl, ?_⟩
      simp only [fniClass, hp, hs, Bool.false_eq_true, ↓reduceIte]
      by_cases hempty :
          (let idNat := (optNat (fniStartEntry id).opts "id".toList).getD 0
           let body := if idNat > 0 then (doc.footnotes[idNat - 1]?).getD [] else []
           body.isEmpty) = true
      · simp only [hempty, isFallthrough, ↓reduceIte]
      · simp only [hempty]
        rw [if_neg (by decide : ¬(false = true))]
        rfl
  | fniEnd doc id =>
      have hp : optTypeIs (fniEndEntry id).opts (litBytes "parabreak") = false := rfl
      have hs : optTypeIs (fniEndEntry id).opts (litBytes "start") = false := rfl
      have he : optTypeIs (fniEndEntry id).opts (litBytes "end") = true := rfl
      refine ⟨.footnoteitem, .fniEnd, rfl, ?_, rfl⟩
      simp only [notesClassify, fniClass, hp, hs, he, Bool.false_eq_true, ↓reduceIte]
  | fnbStart doc title hne =>
      have hs : optTypeIs (fnbStartEntry title).opts (litBytes "start") = true := rfl
      have ht : omGet (fnbStartEntry title).opts "title".toList = some title := rfl
      refine ⟨.footnoteblock, fnbFromTitle (titleBranch (some title)), rfl, ?_, ?_⟩
      · simp only [notesClassify, fnbClass, hne, hs, ht, Bool.false_eq_true, ↓reduceIte]
      · cases titleBranch (some title) <;> rfl
  | fnbEnd doc hne =>
      have hs : optTypeIs fnbEndEntry.opts (litBytes "start") = false := rfl
      have he : optTypeIs fnbEndEntry.opts (litBytes "end") = true := rfl
      refine ⟨.footnoteblock, .fnbEnd, rfl, ?_, rfl⟩
      simp only [notesClassify, fnbClass, hne, hs, he, Bool.false_eq_true, ↓reduceIte]
  | bibiStart doc label id empty =>
      refine ⟨.bibitem, bibiClass (bibiStartEntry label id empty).opts, rfl, rfl, ?_⟩
      have hs : optTypeIs (bibiStartEntry label id empty).opts (litBytes "start") = true := rfl
      cases empty with
      | false =>
          have he : phpEmptyOpt
              (omGet (bibiStartEntry label id false).opts "empty".toList) = true := rfl
          simp only [bibiClass, hs, he, isFallthrough, ↓reduceIte]
      | true =>
          have he : phpEmptyOpt
              (omGet (bibiStartEntry label id true).opts "empty".toList) = false := rfl
          simp only [bibiClass, hs, he, isFallthrough, Bool.false_eq_true, ↓reduceIte]
  | bibiEnd doc =>
      have hs : optTypeIs bibiEndEntry.opts (litBytes "start") = false := rfl
      have he : optTypeIs bibiEndEntry.opts (litBytes "end") = true := rfl
      refine ⟨.bibitem, .bibiEnd, rfl, ?_, rfl⟩
      simp only [notesClassify, bibiClass, hs, he, Bool.false_eq_true, ↓reduceIte]
  | bibNl doc =>
      have hn : optTypeIs bibNlEntry.opts (litBytes "nl") = true := rfl
      refine ⟨.bibliography, .bibNl, rfl, ?_, rfl⟩
      simp only [notesClassify, bibClass, hn, ↓reduceIte]
  | bibStart doc title =>
      have hn : optTypeIs (bibStartEntry title).opts (litBytes "nl") = false := rfl
      have hs : optTypeIs (bibStartEntry title).opts (litBytes "start") = true := rfl
      have ht : omGet (bibStartEntry title).opts "title".toList = some title := rfl
      refine ⟨.bibliography, bibFromTitle (titleBranch (some title)), rfl, ?_, ?_⟩
      · simp only [notesClassify, bibClass, hn, hs, ht, Bool.false_eq_true, ↓reduceIte]
      · cases titleBranch (some title) <;> rfl
  | bibEnd doc =>
      have hn : optTypeIs bibEndEntry.opts (litBytes "nl") = false := rfl
      have hs : optTypeIs bibEndEntry.opts (litBytes "start") = false := rfl
      have he : optTypeIs bibEndEntry.opts (litBytes "end") = true := rfl
      refine ⟨.bibliography, .bibEnd, rfl, ?_, rfl⟩
      simp only [notesClassify, bibClass, hn, hs, he, Bool.false_eq_true, ↓reduceIte]
  | bibc doc label =>
      refine ⟨.bibcite, bibcClass doc (bibcEntry label).opts, rfl, rfl, ?_⟩
      cases hlu : bibLookup doc.bibitemIds
          (optStrBytes (bibcEntry label).opts "label".toList) with
      | none =>
          simp only [bibcClass]
          rw [hlu]
          simp [isFallthrough]
      | some _ =>
          simp only [bibcClass]
          rw [hlu]
          simp [isFallthrough]

theorem notes_stream_classified (stream : List TokenEntry) (i : Nat)
    (doc : DocState) (e : TokenEntry) (he : stream[i]? = some e)
    (h : NotesReach e doc) :
    ∃ c, streamClassAt c stream i doc = true ∧ isFallthrough c = false := by
  obtain ⟨r, c, hr, hc, hf⟩ := notesReach_classified h
  refine ⟨c, ?_, hf⟩
  simp [streamClassAt, he, tokenMem, hr, memClass, hc]

/-! ## Emitters produce reachable tokens -/

theorem footnoteProcess_tokens (body : List Nat) (doc : DocState)
    (toks : List TokenEntry) :
    (footnoteProcess body doc toks).2.1 =
      toks ++ [fnEntry (doc.footnotes.length + 1)] := rfl

theorem fnb_empty_emits_nothing (g : Option (List Nat)) (toks : List TokenEntry) :
    (footnoteblockProcess g [] toks).2 = toks := rfl

def fniEmit : List (List Nat) → Nat → List TokenEntry
  | [], _ => []
  | c :: rest, i =>
      (match firstBreakSplit c with
        | some _ => [fniParaEntry, fniStartEntry i, fniEndEntry i]
        | none => [fniStartEntry i, fniEndEntry i]) ++
      fniEmit rest (i + 1)

theorem fniEmit_reach (notes : List (List Nat)) (i : Nat) (e : TokenEntry)
    (h : e ∈ fniEmit notes i) (d : DocState) : NotesReach e d := by
  induction notes generalizing i with
  | nil => simp [fniEmit] at h
  | cons c rest ih =>
      simp only [fniEmit] at h
      cases hs : firstBreakSplit c with
      | some _ =>
          rw [hs] at h
          simp only [List.mem_append, List.mem_cons, List.not_mem_nil, or_false] at h
          rcases h with h | h
          · rcases h with rfl | rfl | rfl
            · exact NotesReach.fniPara d
            · exact NotesReach.fniStart d i
            · exact NotesReach.fniEnd d i
          · exact ih (i + 1) h
      | none =>
          rw [hs] at h
          simp only [List.mem_append, List.mem_cons, List.not_mem_nil, or_false] at h
          rcases h with h | h
          · rcases h with rfl | rfl
            · exact NotesReach.fniStart d i
            · exact NotesReach.fniEnd d i
          · exact ih (i + 1) h

private theorem inside_go_tokens (notes : List (List Nat)) (i : Nat)
    (toks : List TokenEntry) (acc : List Nat) :
    (footnoteblockInside.go notes i toks acc).2 = toks ++ fniEmit notes i := by
  induction notes generalizing i toks acc with
  | nil => simp [footnoteblockInside.go, fniEmit]
  | cons c rest ih =>
      cases hs : firstBreakSplit c with
      | some _ =>
          conv =>
            lhs
            unfold footnoteblockInside.go
            rw [hs]
          rw [ih]
          simp [fniEmit, hs, fniParaEntry, fniStartEntry, fniEndEntry, List.append_assoc]
      | none =>
          conv =>
            lhs
            unfold footnoteblockInside.go
            rw [hs]
          rw [ih]
          simp [fniEmit, hs, fniStartEntry, fniEndEntry, List.append_assoc]

theorem footnoteblockInside_tokens (notes : List (List Nat)) (toks : List TokenEntry) :
    (footnoteblockInside notes toks).2 = toks ++ fniEmit notes 1 := by
  simp [footnoteblockInside, inside_go_tokens]

theorem footnoteblockProcess_reach (g : Option (List Nat)) (notes : List (List Nat))
    (toks : List TokenEntry) :
    ∃ extra, (footnoteblockProcess g notes toks).2 = toks ++ extra ∧
      ∀ e ∈ extra, ∀ doc, doc.footnotes = notes → NotesReach e doc := by
  cases h : notes.isEmpty with
  | true =>
      refine ⟨[], ?_, ?_⟩
      · simp [footnoteblockProcess, h]
      · intro e he doc hd; simp at he
  | false =>
      have htoks : (footnoteblockProcess g notes toks).2 =
          (footnoteblockInside notes toks).2 ++
            [fnbStartEntry (titleOpt g), fnbEndEntry] := by
        simp [footnoteblockProcess, h, fnbStartEntry, fnbEndEntry]
      rw [footnoteblockInside_tokens] at htoks
      refine ⟨fniEmit notes 1 ++ [fnbStartEntry (titleOpt g), fnbEndEntry], ?_, ?_⟩
      · simpa [List.append_assoc] using htoks
      · intro e he doc hd
        simp [List.mem_append, List.mem_cons] at he
        have hne : doc.footnotes.isEmpty = false := by
          have h' := h
          rw [← hd] at h'
          exact h'
        rcases he with hfni | rfl | rfl
        · exact fniEmit_reach notes 1 e hfni doc
        · exact NotesReach.fnbStart doc (titleOpt g) hne
        · exact NotesReach.fnbEnd doc hne

private theorem glue_suffix {toks t1 result : List TokenEntry}
    {mid extra : List TokenEntry}
    (hm : t1 = toks ++ mid) (hr : result = t1 ++ extra)
    (hmid : ∀ e ∈ mid, ∀ d, NotesReach e d)
    (hex : ∀ e ∈ extra, ∀ d, NotesReach e d) :
    ∃ extra', result = toks ++ extra' ∧ ∀ e ∈ extra', ∀ d, NotesReach e d := by
  refine ⟨mid ++ extra, ?_, ?_⟩
  · simp [hr, hm, List.append_assoc]
  · intro e he d
    rcases List.mem_append.mp he with h | h
    · exact hmid e h d
    · exact hex e h d

/- REFCORR7/8: the emitted Bibitem start token's `empty` flag is now
   computed from the trimmed empty-Raw-stripped content, so the structural
   description needs the same token table that `bibitemProcess` reads. -/
private def bibiPair (label content : List Nat) (doc : DocState)
    (toks : List TokenEntry) : List TokenEntry :=
  let content' := trimBytes (content.map (fun b => if b == 10 then 32 else b))
  let visible := trimBytes (stripEmptyRawPhNotes content' toks)
  [bibiStartEntry label (doc.bibitemIds.length + 1)
     visible.isEmpty, bibiEndEntry]

private theorem bibitemProcess_mid (label content : List Nat) (doc : DocState)
    (toks : List TokenEntry) :
    (bibitemProcess label content doc toks).2.1 = toks ++ bibiPair label content doc toks := by
  dsimp [bibitemProcess, bibiPair, bibiStartEntry, bibiEndEntry]
  simp [List.append_assoc]

private theorem bibiPair_reach (label content : List Nat) (doc : DocState)
    (toks : List TokenEntry) (e : TokenEntry)
    (h : e ∈ bibiPair label content doc toks) (d : DocState) :
    NotesReach e d := by
  simp [bibiPair, List.mem_cons, List.not_mem_nil, or_false] at h
  rcases h with rfl | rfl
  · exact NotesReach.bibiStart d label _ _
  · exact NotesReach.bibiEnd d

private theorem claimNl_mid (toks : List TokenEntry) :
    (claimNl toks).2 = toks ++ [bibNlEntry] := rfl

private theorem nl_reach (e : TokenEntry) (h : e ∈ [bibNlEntry]) (d : DocState) :
    NotesReach e d := by
  simp [List.mem_cons, List.not_mem_nil, or_false] at h
  subst h
  exact NotesReach.bibNl d

theorem footnoteScan_reach (fuel : Nat) (src : List Nat) (toks : List TokenEntry)
    (doc : DocState) :
    ∃ extra, (footnoteScan src toks doc fuel).2.1 = toks ++ extra ∧
      ∀ e ∈ extra, ∀ d, NotesReach e d := by
  induction fuel generalizing src toks doc with
  | zero =>
      refine ⟨[], ?_, ?_⟩
      · simp [footnoteScan]
      · intro e he d; simp at he
  | succ fuel ih =>
      cases src with
      | nil =>
          refine ⟨[], ?_, ?_⟩
          · unfold footnoteScan
            simp
          · intro e he d; simp at he
      | cons b rest =>
          cases hm : footnoteMatchAt (b :: rest) with
          | some pair =>
              rcases pair with ⟨body, r⟩
              let t1 := (footnoteProcess body doc toks).2.1
              let d1 := (footnoteProcess body doc toks).2.2
              obtain ⟨extra, heq, hmem⟩ := ih r t1 d1
              have hstep : (footnoteScan (b :: rest) toks doc (fuel + 1)).2.1 =
                  (footnoteScan r t1 d1 fuel).2.1 := by
                conv =>
                  lhs
                  unfold footnoteScan
                  rw [hm]
              have ht1 : t1 = toks ++ [fnEntry (doc.footnotes.length + 1)] :=
                footnoteProcess_tokens body doc toks
              refine glue_suffix ht1 (by rw [hstep]; exact heq)
                (by intro e he d
                    simp [List.mem_cons, List.not_mem_nil, or_false] at he
                    subst he
                    exact NotesReach.fn d (doc.footnotes.length + 1))
                hmem
          | none =>
              obtain ⟨extra, heq, hmem⟩ := ih rest toks doc
              have hstep : (footnoteScan (b :: rest) toks doc (fuel + 1)).2.1 =
                  (footnoteScan rest toks doc fuel).2.1 := by
                conv =>
                  lhs
                  unfold footnoteScan
                  rw [hm]
              exact ⟨extra, by rw [hstep, heq], hmem⟩

theorem bibciteScan_reach (fuel : Nat) (src : List Nat) (toks : List TokenEntry) :
    ∃ extra, (bibciteScan src toks fuel).2 = toks ++ extra ∧
      ∀ e ∈ extra, ∀ d, NotesReach e d := by
  induction fuel generalizing src toks with
  | zero =>
      refine ⟨[], ?_, ?_⟩
      · simp [bibciteScan]
      · intro e he d; simp at he
  | succ fuel ih =>
      cases src with
      | nil =>
          refine ⟨[], ?_, ?_⟩
          · unfold bibciteScan
            simp
          · intro e he d; simp at he
      | cons b rest =>
          cases hm : bibciteMatchAt (b :: rest) with
          | some pair =>
              rcases pair with ⟨label, r⟩
              let t1 := toks ++ [bibcEntry label]
              obtain ⟨extra, heq, hmem⟩ := ih r t1
              have hstep : (bibciteScan (b :: rest) toks (fuel + 1)).2 =
                  (bibciteScan r t1 fuel).2 := by
                conv =>
                  lhs
                  unfold bibciteScan
                  rw [hm]
                rfl
              exact glue_suffix (by rfl : t1 = toks ++ [bibcEntry label])
                (by rw [hstep]; exact heq)
                (by intro e he d
                    simp [List.mem_cons, List.not_mem_nil, or_false] at he
                    subst he
                    exact NotesReach.bibc d label)
                hmem
          | none =>
              obtain ⟨extra, heq, hmem⟩ := ih rest toks
              have hstep : (bibciteScan (b :: rest) toks (fuel + 1)).2 =
                  (bibciteScan rest toks fuel).2 := by
                conv =>
                  lhs
                  unfold bibciteScan
                  rw [hm]
              exact ⟨extra, by rw [hstep, heq], hmem⟩

theorem bibitemProcess_reach (label content : List Nat) (doc : DocState)
    (toks : List TokenEntry) :
    ∃ extra, (bibitemProcess label content doc toks).2.1 = toks ++ extra ∧
      ∀ e ∈ extra, ∀ d, NotesReach e d :=
  ⟨bibiPair label content doc toks, bibitemProcess_mid label content doc toks,
    bibiPair_reach label content doc toks⟩

theorem bibWalk_reach (fuel : Nat) (s : List Nat) (prev : BibPrev) (doc : DocState)
    (toks : List TokenEntry) :
    ∃ extra, (bibWalk s prev doc toks fuel).2.1 = toks ++ extra ∧
      ∀ e ∈ extra, ∀ d, NotesReach e d := by
  induction fuel generalizing s prev doc toks with
  | zero =>
      refine ⟨[], ?_, ?_⟩
      · simp [bibWalk]
      · intro e he d; simp at he
  | succ fuel ih =>
      cases s with
      | nil =>
          refine ⟨[], ?_, ?_⟩
          · unfold bibWalk
            simp
          · intro e he d; simp at he
      | cons b rest =>
          cases hdef : bibDefMatch (b :: rest) with
          | some triple =>
              rcases triple with ⟨label, content, len⟩
              cases prev with
              | start =>
                  let proc := bibitemProcess label content doc toks
                  obtain ⟨extra, heq, hmem⟩ := ih ((b :: rest).drop len) .def proc.2.2 proc.2.1
                  have hstep : (bibWalk (b :: rest) .start doc toks (fuel + 1)).2.1 =
                      (bibWalk ((b :: rest).drop len) .def proc.2.2 proc.2.1 fuel).2.1 := by
                    conv =>
                      lhs
                      unfold bibWalk
                    simp only [List.isEmpty_cons, hdef]
                    rfl
                  exact glue_suffix (bibitemProcess_mid label content doc toks)
                    (by rw [hstep]; exact heq)
                    (bibiPair_reach label content doc toks) hmem
              | «def» =>
                  let proc := bibitemProcess label content doc toks
                  obtain ⟨extra, heq, hmem⟩ := ih ((b :: rest).drop len) .def proc.2.2 proc.2.1
                  have hstep : (bibWalk (b :: rest) .def doc toks (fuel + 1)).2.1 =
                      (bibWalk ((b :: rest).drop len) .def proc.2.2 proc.2.1 fuel).2.1 := by
                    conv =>
                      lhs
                      unfold bibWalk
                    simp only [List.isEmpty_cons, hdef]
                    rfl
                  exact glue_suffix (bibitemProcess_mid label content doc toks)
                    (by rw [hstep]; exact heq)
                    (bibiPair_reach label content doc toks) hmem
              | res =>
                  let t0 := (claimNl toks).2
                  let proc := bibitemProcess label content doc t0
                  obtain ⟨extra, heq, hmem⟩ := ih ((b :: rest).drop len) .def proc.2.2 proc.2.1
                  have hstep : (bibWalk (b :: rest) .res doc toks (fuel + 1)).2.1 =
                      (bibWalk ((b :: rest).drop len) .def proc.2.2 proc.2.1 fuel).2.1 := by
                    conv =>
                      lhs
                      unfold bibWalk
                    simp only [List.isEmpty_cons, hdef]
                    rfl
                  have hmid : proc.2.1 = toks ++ (bibNlEntry :: bibiPair label content doc t0) := by
                    have ht0 : t0 = toks ++ [bibNlEntry] := claimNl_mid toks
                    rw [bibitemProcess_mid, ht0]
                    simp [List.append_assoc]
                  have hpair : ∀ e ∈ bibNlEntry :: bibiPair label content doc t0,
                      ∀ d, NotesReach e d := by
                    intro e he d
                    simp [List.mem_cons] at he
                    rcases he with rfl | he
                    · exact NotesReach.bibNl d
                    · exact bibiPair_reach label content doc t0 e he d
                  exact glue_suffix hmid (by rw [hstep]; exact heq) hpair hmem
          | none =>
              let text := (b :: rest).takeWhile (fun b => b != 10)
              let tail := (b :: rest).drop text.length
              let len := text.length + (if tail.isEmpty then 0 else 1)
              cases ht : (trimBytes text).isEmpty with
              | true =>
                  obtain ⟨extra, heq, hmem⟩ :=
                    ih ((b :: rest).drop len) prev doc toks
                  have hstep : (bibWalk (b :: rest) prev doc toks (fuel + 1)).2.1 =
                      (bibWalk ((b :: rest).drop len) prev doc toks fuel).2.1 := by
                    conv =>
                      lhs
                      unfold bibWalk
                    simp only [List.isEmpty_cons, Bool.false_eq_true, ↓reduceIte, hdef]
                    have htw : (b :: rest).takeWhile (fun b => b != 10) = text := rfl
                    have htail : (b :: rest).drop text.length = tail := rfl
                    have hlen : text.length + (if tail.isEmpty = true then 0 else 1) = len := rfl
                    simp only [htw, htail, ht, hlen, ↓reduceIte]
                  exact ⟨extra, by rw [hstep, heq], hmem⟩
              | false =>
                  cases prev with
                  | res =>
                      obtain ⟨extra, heq, hmem⟩ :=
                        ih ((b :: rest).drop len) .res doc toks
                      have hstep : (bibWalk (b :: rest) .res doc toks (fuel + 1)).2.1 =
                          (bibWalk ((b :: rest).drop len) .res doc toks fuel).2.1 := by
                        conv =>
                          lhs
                          unfold bibWalk
                        simp only [List.isEmpty_cons, Bool.false_eq_true, ↓reduceIte, hdef]
                        have htw : (b :: rest).takeWhile (fun b => b != 10) = text := rfl
                        have htail : (b :: rest).drop text.length = tail := rfl
                        have hlen : text.length + (if tail.isEmpty = true then 0 else 1) = len := rfl
                        simp only [htw, htail, ht, hlen, ↓reduceIte]
                        rfl
                      exact ⟨extra, by rw [hstep, heq], hmem⟩
                  | start =>
                      let t0 := (claimNl toks).2
                      obtain ⟨extra, heq, hmem⟩ :=
                        ih ((b :: rest).drop len) .res doc t0
                      have hstep : (bibWalk (b :: rest) .start doc toks (fuel + 1)).2.1 =
                          (bibWalk ((b :: rest).drop len) .res doc t0 fuel).2.1 := by
                        conv =>
                          lhs
                          unfold bibWalk
                        simp only [List.isEmpty_cons, Bool.false_eq_true, ↓reduceIte, hdef]
                        have htw : (b :: rest).takeWhile (fun b => b != 10) = text := rfl
                        have htail : (b :: rest).drop text.length = tail := rfl
                        have hlen : text.length + (if tail.isEmpty = true then 0 else 1) = len := rfl
                        simp only [htw, htail, ht, hlen, ↓reduceIte]
                        rfl
                      exact glue_suffix (claimNl_mid toks) (by rw [hstep]; exact heq)
                        nl_reach hmem
                  | «def» =>
                      let t0 := (claimNl toks).2
                      obtain ⟨extra, heq, hmem⟩ :=
                        ih ((b :: rest).drop len) .res doc t0
                      have hstep : (bibWalk (b :: rest) .def doc toks (fuel + 1)).2.1 =
                          (bibWalk ((b :: rest).drop len) .res doc t0 fuel).2.1 := by
                        conv =>
                          lhs
                          unfold bibWalk
                        simp only [List.isEmpty_cons, Bool.false_eq_true, ↓reduceIte, hdef]
                        have htw : (b :: rest).takeWhile (fun b => b != 10) = text := rfl
                        have htail : (b :: rest).drop text.length = tail := rfl
                        have hlen : text.length + (if tail.isEmpty = true then 0 else 1) = len := rfl
                        simp only [htw, htail, ht, hlen, ↓reduceIte]
                        rfl
                      exact glue_suffix (claimNl_mid toks) (by rw [hstep]; exact heq)
                        nl_reach hmem

theorem bibliographyProcess_reach (g1 : Option (List Nat)) (inner : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    ∃ extra, (bibliographyProcess g1 inner doc toks).2.1 = toks ++ extra ∧
      ∀ e ∈ extra, ∀ d, NotesReach e d := by
  obtain ⟨extra, heq, hmem⟩ :=
    bibWalk_reach (inner.length + 1) inner .start doc toks
  have htoks : (bibliographyProcess g1 inner doc toks).2.1 =
      (bibWalk inner .start doc toks (inner.length + 1)).2.1 ++
        [bibStartEntry (titleOpt g1), bibEndEntry] := by
    simp [bibliographyProcess, bibStartEntry, bibEndEntry]
  rw [heq] at htoks
  refine ⟨extra ++ [bibStartEntry (titleOpt g1), bibEndEntry], ?_, ?_⟩
  · simpa [List.append_assoc] using htoks
  · intro e he d
    simp [List.mem_append, List.mem_cons] at he
    rcases he with hx | rfl | rfl
    · exact hmem e hx d
    · exact NotesReach.bibStart d (titleOpt g1)
    · exact NotesReach.bibEnd d

end LeanFtml
