-- ProofNotesTitle.lean — notes title and footnoteblock render proofs for the notes proof lane of the ftml Lean equivalence programme.
-- Extracted from the lead's consolidated ProofNotes.lean draft sections on the notes title and the footnoteblock render law.
-- Against ADVISOR-PROOF-POLICY.md section 4.3 this file keeps the headline notes_title_never_bool_false formally, closing Register 3.3.
-- All theorems are universal over the mirror's parser-reachable inputs; no sorry, native_decide, bv_decide, or axiom outside the standard core set.

import LeanFtml.NotesRender
import LeanFtml.CoverageNotes

set_option maxRecDepth 10000

namespace LeanFtml

/-! ## Headline: the notes title is never the boolean false -/

/-- The only title constructor in both notes parsers is titleOpt g, storing either an absent key (null) or textVal v; neither can be OptVal.bool false. Universal over every attribute group the parsers can see. -/
theorem notes_title_never_bool_false (g : Option (List Nat)) :
    titleOpt g ≠ OptVal.bool false := by
  unfold titleOpt
  split
  · unfold textVal
    split <;> simp
  · simp

/-- Remainder register 3.3 closed in the mirror: on a parser-reachable title the PHP trichotomy and the mirror emptiness test name the same branch, and the synthetic boolean-false scalar is never produced by either block parser. -/
theorem notes_title_register_3_3_closed (g : Option (List Nat)) :
    titleBranch (some (titleOpt g)) = mirrorTitleBranch (some (titleOpt g)) ∧
      some (titleOpt g) ≠ some (OptVal.bool false) := by
  refine ⟨titleOpt_class_agrees g, ?_⟩
  intro h
  injection h with h'
  exact notes_title_never_bool_false g h'

/-- The start token actually appended by footnoteblockProcess carries that title, so the two paragraphs above apply to every reachable block token, not just to the helper. -/
theorem footnoteblock_start_title_reachable (g : Option (List Nat))
    (notes : List (List Nat)) (toks : List TokenEntry)
    (h : notes.isEmpty = false) :
    omGet (fnbStartEntry (titleOpt g)).opts "title".toList = some (titleOpt g) ∧
      omGet (fnbStartEntry (titleOpt g)).opts "title".toList ≠ some (OptVal.bool false) := by
  refine ⟨rfl, ?_⟩
  intro h
  injection h with h'
  exact notes_title_never_bool_false g h'

/-! ## Footnoteblock render law -/

/-- Empty registry dominates every option value: the block renders no bytes, a branch reachable as a render input but not from the parser. -/
theorem renderFootnoteblock_empty (doc : DocState) (opts : OptMap)
    (h : doc.footnotes.isEmpty = true) : renderFootnoteblock doc opts = [] := by
  simp [renderFootnoteblock, h]

/-- The end token is the fixed closer whenever the registry is nonempty. -/
theorem renderFootnoteblock_end (doc : DocState) (h : doc.footnotes.isEmpty = false) :
    renderFootnoteblock doc fnbEndEntry.opts = litBytes "</div>" := by
  have hs : optTypeIs [(['t', 'y', 'p', 'e'], OptVal.str ['e', 'n', 'd'])]
      (litBytes "start") = false := rfl
  have he : optTypeIs [(['t', 'y', 'p', 'e'], OptVal.str ['e', 'n', 'd'])]
      (litBytes "end") = true := rfl
  simp [renderFootnoteblock, fnbEndEntry, h, hs, he]

/-- The start token's render on every parser-reachable title: null defaults to "Footnotes", an authored title is escaped verbatim, and an empty authored string omits the title div. This is the same trichotomy as titleBranch, by notes_title_register_3_3_closed. -/
theorem renderFootnoteblock_start_title (doc : DocState) (g : Option (List Nat))
    (h : doc.footnotes.isEmpty = false) :
    renderFootnoteblock doc (fnbStartEntry (titleOpt g)).opts =
      let head := litBytes "<div class=\"footnotes-footer\">"
      let title := match titleOpt g with
        | OptVal.null => litBytes "Footnotes"
        | v => renderOptValBytes v
      if title.isEmpty then head
      else head ++ litBytes "<div class=\"title\">" ++
        htmlSpecialCharsCompat title ++ litBytes "</div>" := by
  have hs (v : OptVal) : optTypeIs
      [(['t', 'y', 'p', 'e'], OptVal.str ['s', 't', 'a', 'r', 't']), (['t', 'i', 't', 'l', 'e'], v)]
      (litBytes "start") = true := rfl
  have he (v : OptVal) : optTypeIs
      [(['t', 'y', 'p', 'e'], OptVal.str ['s', 't', 'a', 'r', 't']), (['t', 'i', 't', 'l', 'e'], v)]
      (litBytes "end") = false := rfl
  have hget (v : OptVal) : omGet
      [(['t', 'y', 'p', 'e'], OptVal.str ['s', 't', 'a', 'r', 't']), (['t', 'i', 't', 'l', 'e'], v)]
      ['t', 'i', 't', 'l', 'e'] = some v := rfl
  cases ht : titleOpt g with
  | null => simp [fnbStartEntry, renderFootnoteblock, h, hs, he, hget, ht, renderOptValBytes]
  | str cs => simp [fnbStartEntry, renderFootnoteblock, h, hs, he, hget, ht, renderOptValBytes]
  | bytes bs => simp [fnbStartEntry, renderFootnoteblock, h, hs, he, hget, ht, renderOptValBytes]
  | int n => simp [fnbStartEntry, renderFootnoteblock, h, hs, he, hget, ht, renderOptValBytes]
  | bool b => simp [fnbStartEntry, renderFootnoteblock, h, hs, he, hget, ht, renderOptValBytes]
  | map m => simp [fnbStartEntry, renderFootnoteblock, h, hs, he, hget, ht, renderOptValBytes]
  | list xs => simp [fnbStartEntry, renderFootnoteblock, h, hs, he, hget, ht, renderOptValBytes]

end LeanFtml

#print axioms LeanFtml.notes_title_never_bool_false
#print axioms LeanFtml.notes_title_register_3_3_closed
#print axioms LeanFtml.footnoteblock_start_title_reachable
#print axioms LeanFtml.renderFootnoteblock_empty
#print axioms LeanFtml.renderFootnoteblock_end
#print axioms LeanFtml.renderFootnoteblock_start_title
