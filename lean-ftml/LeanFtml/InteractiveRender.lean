/-
  LeanFtml.InteractiveRender — R4.6 stage entry points and
  theorems for the interactive and link-pure Xhtml render
  mirror, plus Size, Span, and Div.

  The eleven render functions live in
  `LeanFtml/InteractiveRules.lean`. The dispatcher is
  `LeanFtml.dispatchRenderR41` in `LeanFtml/NotesRender.lean`,
  extended in this stage to all fifty-two mirrored rules (the
  six R4.1 NOTES rules, the twelve R4.2 prose-core rules, the
  fourteen R4.3 inline-simple and typography rules, the five
  R4.4 raw/form and heading/toc rules, the four R4.5 list and
  table rules, and this family's eleven); the `R46` entry
  points below share that dispatch, exactly as the earlier
  stages' entry points do, so the stages can never disagree
  about a rule more than one of them mirrors.

  The end-to-end entry point runs the R4.6 stage prefix
  `LeanFtml.pipelineR46`, which is the full sixty-eight-rule
  pipeline (see `LeanFtml/Pipeline.lean`).

  Proof devices used in this stage (all statement-preserving,
  following the earlier stages' disclosed patterns):

  - The two `Equationreference` theorems carry a proof-local
    `set_option maxRecDepth 8192` (the R4.3 Interwiki
    precedent): the registry lookup's elaborator defeq chain
    exceeds the default recursion depth.
  - Theorems whose plain `rfl` would kernel-reduce
    `utf8Valid` (inside `htmlSpecialCharsCompat`) on a multi-byte
    string, or a composed chain of fueled passes, are proved by
    branch rewriting (the `NotesRender` / `RawHeadingRender`
    pattern): concrete branch facts and escape identities are
    established as `rfl` haves or through the `*_ascii`
    characterizations, then `simp only` assembles the literal
    output. The Collapsible label passes (`replaceByteAll`
    chains) are likewise stepped one pass at a time.
  - The Collapsible characterizations state the labels in
    their post-`str_replace` form (spaces as `&nbsp;`): the
    reference's `wikidotLabel` routes the default labels
    through the same replacement passes as custom text
    (`ref-php` `Collapsible.php`, verified against the R2
    battery's live captures in
    `conformance-refphp/contain/collapsible/SECTION.md`).
    Expected outputs below are chunked at the render bodies'
    own concatenation boundaries so the closing defeq is by
    congruence on identical append trees.
-/

import LeanFtml.NotesRender
import LeanFtml.InteractiveRules
import LeanFtml.Pipeline

namespace LeanFtml

/-! ## R4.6 dispatcher and entry points -/

/-- The combined dispatcher for the fifty-two render rules
    mirrored through R4.6 (definitionally `dispatchRenderR41`,
    extended in this stage; see its doc comment in
    `LeanFtml/NotesRender.lean`). -/
def dispatchRenderR46 :
    RenderRuleId → RenderConf → DocState → OptMap → List Nat :=
  dispatchRenderR41

/-- Render from an arbitrary token lookup function under the
    R4.6 mirrored render rules (used directly by the conformance
    driver on raw `state-restricted.php` batch states whose
    token keys are cumulative process-global ids). -/
def renderWithR46 (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) : RenderOutcome :=
  renderWith dispatchRenderR46 lookup conf work doc

/-- Render an R3 `ParseState` (0-indexed `st.tokens`) under the
    R4.6 mirrored render rules. -/
def renderStateR46 (conf : RenderConf) (st : ParseState) : RenderOutcome :=
  renderWithR46 (fun k => st.tokens[k]?) conf st.work st.doc

/-- End-to-end Lean parse+render on top of the R4.6 stage prefix
    (`convCRLF` → `pipelineR46`, the full pipeline →
    `renderStateR46`). -/
def renderInteractiveE2E (conf : RenderConf) (tags : List (List Char))
    (source : List Char) : RenderOutcome :=
  let st0 : ParseState :=
    { ParseState.ofSource (convCRLF source) with doc.page.tags := tags }
  let st := runRules pipelineR46 st0
  renderStateR46 conf st

/-! ## Private proof helpers for the Collapsible labels

    `htmlSpecialCharsCompat` (RenderCore) is the `ENT_COMPAT`
    escape of `Collapsible::wikidotLabel`; its `utf8Valid`
    guard is discharged through `RenderCore`'s public
    `htmlSpecialCharsCompat_ascii` characterization and, for
    the en-dash-prefixed default hide label, through a restated
    private induction over `utf8Valid.go`. -/

/-- Restated copy of `RenderCore`'s private ASCII induction
    for `utf8Valid.go` (that lemma is module-private there),
    needed for the en-dash step below. -/
private theorem utf8Valid_go_ascii' :
    ∀ (bs : List Nat) (fuel : Nat),
      bs.length ≤ fuel → (∀ b ∈ bs, b < 0x80) → utf8Valid.go bs fuel = true
  | [], _, _, _ => rfl
  | _ :: _, 0, hle, _ => by simp at hle
  | b :: rest, fuel + 1, hle, hall => by
      have hb : b < 0x80 := hall b (List.mem_cons_self ..)
      have hrest : ∀ x ∈ rest, x < 0x80 :=
        fun x hx => hall x (List.mem_cons_of_mem _ hx)
      have hle' : rest.length ≤ fuel := Nat.le_of_succ_le_succ hle
      unfold utf8Valid.go
      simp only [hb, ↓reduceIte]
      exact utf8Valid_go_ascii' rest fuel hle' hrest

/-- One manual `utf8Valid.go` step over the en dash's
    three-byte sequence (`E2 80 93`, the `0xE1 ≤ b < 0xED`
    branch with two continuation bytes), landing in the ASCII
    induction. -/
private theorem utf8Valid_go_endash (bs : List Nat) (fuel : Nat)
    (hle : bs.length ≤ fuel) (hall : ∀ b ∈ bs, b < 0x80) :
    utf8Valid.go (0xE2 :: 0x80 :: 0x93 :: bs) (fuel + 3) = true := by
  unfold utf8Valid.go
  exact utf8Valid_go_ascii' bs (fuel + 2)
    (Nat.le_succ_of_le (Nat.le_succ_of_le hle)) hall

/-- The default hide label's text (en dash plus ASCII) is
    valid UTF-8. -/
private theorem utf8Valid_hide :
    utf8Valid ([0xE2, 0x80, 0x93] ++ litBytes " hide block") = true :=
  utf8Valid_go_endash (litBytes " hide block") (litBytes " hide block").length
    (Nat.le_refl _) (fun b hb => by
      have hall : (litBytes " hide block").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb))

/-- The `ENT_COMPAT` escape is the identity on the default
    show label's text (pure ASCII, no escapable byte). -/
private theorem hscCompat_show :
    htmlSpecialCharsCompat (litBytes "+ show block") =
      litBytes "+ show block" := by
  have hascii : ∀ b ∈ litBytes "+ show block", b < 0x80 := fun b hb => by
    have hall : (litBytes "+ show block").all
        (fun x => decide (x < 0x80)) = true := rfl
    exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
  rw [htmlSpecialCharsCompat_ascii _ hascii]
  rfl

/-- The `ENT_COMPAT` escape is the identity on the default
    hide label's text (the en dash passes through the bytewise
    escape untouched). -/
private theorem hscCompat_hide :
    htmlSpecialCharsCompat ([0xE2, 0x80, 0x93] ++ litBytes " hide block") =
      [0xE2, 0x80, 0x93] ++ litBytes " hide block" := by
  have hv : utf8Valid ([226, 128, 147] ++ litBytes " hide block") = true :=
    utf8Valid_hide
  simp only [htmlSpecialCharsCompat, hv, ↓reduceIte]
  rfl

/-! ## Theorems: per-rule characterizations on concrete option maps

    Each theorem pins one branch of one mirrored `token()` body
    against the exact byte string the reference produces. -/

set_option maxRecDepth 8192 in
/- `Equationreference` with a registered label: the eref anchor
    carries the registered id in both the scroll target and the
    link text. -/
theorem eref_found :
    renderEquationreference {} { equations := [("eq1".toList, 3)] }
      [("label".toList, OptVal.str "eq1".toList)] =
    litBytes "<a class=\"eref\" href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'equation-3')\">3</a>" := rfl

set_option maxRecDepth 8192 in
/- `Equationreference` with an unregistered label: the id is
    empty in both places (PHP's missing-entry `null`). -/
theorem eref_missing :
    renderEquationreference {} {}
      [("label".toList, OptVal.str "nope".toList)] =
    litBytes "<a class=\"eref\" href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'equation-')\"></a>" := rfl

/-- `Anchor` named branch on a plain ASCII name. -/
theorem anchor_name_plain :
    renderAnchor [("name".toList, OptVal.str "toc0".toList)] =
    litBytes "<a name=\"toc0\"></a>" := rfl

/-- `Anchor` named branch: a Latin-1 letter in the name becomes
    its named entity under `htmlentities` (here U+00E9 is
    `&eacute;`). -/
theorem anchor_name_entity :
    renderAnchor [("name".toList, OptVal.str "café".toList)] =
    litBytes "<a name=\"caf&eacute;\"></a>" := rfl

/-- `Anchor` `start` without an `attrs` option: the default
    lone empty `href`. -/
theorem anchor_start_default :
    renderAnchor [("type".toList, OptVal.str "start".toList)] =
    litBytes "<a href=\"\">" := rfl

/-- `Anchor` `start` with an attribute map. -/
theorem anchor_start_attrs :
    renderAnchor [("type".toList, OptVal.str "start".toList),
      ("attrs".toList, OptVal.map
        [("href".toList, OptVal.str "/x".toList)])] =
    litBytes "<a href=\"/x\">" := rfl

/-- `Anchor` `end`. -/
theorem anchor_end :
    renderAnchor [("type".toList, OptVal.str "end".toList)] =
    litBytes "</a>" := rfl

/-- `Anchor` `invalid_named`: brackets around the javascript
    anchor, the text escaped `ENT_COMPAT`. -/
theorem anchor_invalid_named :
    renderAnchor [("type".toList, OptVal.str "invalid_named".toList),
      ("lead".toList, OptVal.str "".toList),
      ("text".toList, OptVal.str "a<b".toList),
      ("trail".toList, OptVal.str "".toList)] =
    litBytes "[<a href=\"javascript:;\">a&lt;b</a>]" := rfl

/-- `Anchor` `literal`: the escaped text alone. -/
theorem anchor_literal :
    renderAnchor [("type".toList, OptVal.str "literal".toList),
      ("text".toList, OptVal.str "x&y".toList)] =
    litBytes "x&amp;y" := rfl

/-- `Anchor` with an unhandled `type` value falls through to
    the named branch. -/
theorem anchor_type_fallthrough :
    renderAnchor [("type".toList, OptVal.str "weird".toList),
      ("name".toList, OptVal.str "n1".toList)] =
    litBytes "<a name=\"n1\"></a>" := rfl

/-- `wikidotLabel` default show label: the default text goes
    through the same `str_replace` passes as custom text, so
    its spaces are `&nbsp;`. Proved by stepping the passes one
    at a time (a single composed `rfl` over the pass chain is
    prohibitively expensive, the `date_epoch` composition
    phenomenon). -/
theorem collapsible_label_default_show :
    wikidotLabel none true = litBytes "+&nbsp;show&nbsp;block" := by
  have hs1 : replaceByteAll 32 (litBytes "&nbsp;") (litBytes "+ show block") =
      litBytes "+&nbsp;show&nbsp;block" := rfl
  have hs2 : replaceByteAll 9 (litBytes "&nbsp;&nbsp;&nbsp;&nbsp;")
      (litBytes "+&nbsp;show&nbsp;block") =
      litBytes "+&nbsp;show&nbsp;block" := rfl
  have hs3 : replaceByteAll 10 [32] (litBytes "+&nbsp;show&nbsp;block") =
      litBytes "+&nbsp;show&nbsp;block" := rfl
  have hs4 : replaceByteAll 13 [] (litBytes "+&nbsp;show&nbsp;block") =
      litBytes "+&nbsp;show&nbsp;block" := rfl
  unfold wikidotLabel
  simp only [↓reduceIte, hscCompat_show, hs1, hs2, hs3, hs4]
  rfl

/-- `wikidotLabel` default hide label: the en dash is emitted
    as its UTF-8 bytes, untouched by the escaping, and the
    spaces are `&nbsp;` as in the show label. -/
theorem collapsible_label_default_hide :
    wikidotLabel none false =
    [0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block" := by
  have hs1 : replaceByteAll 32 (litBytes "&nbsp;")
      ([0xE2, 0x80, 0x93] ++ litBytes " hide block") =
      [0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block" := rfl
  have hs2 : replaceByteAll 9 (litBytes "&nbsp;&nbsp;&nbsp;&nbsp;")
      ([0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block") =
      [0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block" := rfl
  have hs3 : replaceByteAll 10 [32]
      ([0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block") =
      [0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block" := rfl
  have hs4 : replaceByteAll 13 []
      ([0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block") =
      [0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block" := rfl
  unfold wikidotLabel
  simp only [Bool.false_eq_true, ↓reduceIte, hscCompat_hide, hs1, hs2, hs3, hs4]
  rfl

/-- `wikidotLabel`: spaces become `&nbsp;` and a tab becomes
    four of them. -/
theorem collapsible_label_spaces :
    wikidotLabel (some (litBytes "a b\tc")) true =
    litBytes "a&nbsp;b&nbsp;&nbsp;&nbsp;&nbsp;c" := by
  have hascii : ∀ b ∈ litBytes "a b\tc", b < 0x80 := fun b hb => by
    have hall : (litBytes "a b\tc").all
        (fun x => decide (x < 0x80)) = true := rfl
    exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
  have hesc : htmlSpecialCharsCompat (litBytes "a b\tc") =
      litBytes "a b\tc" := by
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hs1 : replaceByteAll 32 (litBytes "&nbsp;") (litBytes "a b\tc") =
      litBytes "a&nbsp;b\tc" := rfl
  have hs2 : replaceByteAll 9 (litBytes "&nbsp;&nbsp;&nbsp;&nbsp;")
      (litBytes "a&nbsp;b\tc") =
      litBytes "a&nbsp;b&nbsp;&nbsp;&nbsp;&nbsp;c" := rfl
  have hs3 : replaceByteAll 10 [32]
      (litBytes "a&nbsp;b&nbsp;&nbsp;&nbsp;&nbsp;c") =
      litBytes "a&nbsp;b&nbsp;&nbsp;&nbsp;&nbsp;c" := rfl
  have hs4 : replaceByteAll 13 []
      (litBytes "a&nbsp;b&nbsp;&nbsp;&nbsp;&nbsp;c") =
      litBytes "a&nbsp;b&nbsp;&nbsp;&nbsp;&nbsp;c" := rfl
  have hcond : ((litBytes "a b\tc").isEmpty ||
      (litBytes "a b\tc" == [48])) = false := rfl
  unfold wikidotLabel
  simp only [hcond, Bool.false_eq_true, ↓reduceIte, hesc, hs1, hs2, hs3, hs4]
  rfl

/-- `wikidotLabel` keeps a plain apostrophe raw: the reference's
    `ENT_COMPAT` escape leaves `'` untouched (unlike the former
    `ENT_QUOTES` `&#039;`), and there are no spaces to replace. -/
theorem collapsible_label_apostrophe :
    wikidotLabel (some (litBytes "it's")) true = litBytes "it's" := by
  have hascii : ∀ b ∈ litBytes "it's", b < 0x80 := fun b hb => by
    have hall : (litBytes "it's").all
        (fun x => decide (x < 0x80)) = true := rfl
    exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
  have hesc : htmlSpecialCharsCompat (litBytes "it's") = litBytes "it's" := by
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hs1 : replaceByteAll 32 (litBytes "&nbsp;") (litBytes "it's") =
      litBytes "it's" := rfl
  have hs2 : replaceByteAll 9 (litBytes "&nbsp;&nbsp;&nbsp;&nbsp;")
      (litBytes "it's") = litBytes "it's" := rfl
  have hs3 : replaceByteAll 10 [32] (litBytes "it's") = litBytes "it's" := rfl
  have hs4 : replaceByteAll 13 [] (litBytes "it's") = litBytes "it's" := rfl
  have hcond : ((litBytes "it's").isEmpty ||
      (litBytes "it's" == [48])) = false := rfl
  unfold wikidotLabel
  simp only [hcond, Bool.false_eq_true, ↓reduceIte, hesc, hs1, hs2, hs3, hs4]
  rfl

/-- `Collapsible` `start`, folded, default labels, hide link at
    the top. The expected bytes are chunked at the render
    body's own concatenation boundaries. -/
theorem collapsible_start_default :
    renderCollapsible [("args".toList, OptVal.map []),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<div class=\"collapsible-block\">" ++
      litBytes "<div class=\"collapsible-block-folded\"" ++
      litBytes "><a class=\"collapsible-block-link\" " ++
      litBytes "href=\"javascript:;\">" ++
      litBytes "+&nbsp;show&nbsp;block" ++
      litBytes "</a></div>" ++
      litBytes "<div class=\"collapsible-block-unfolded\"" ++
      litBytes " style=\"display:none\"" ++
      litBytes ">" ++
      litBytes "<div class=\"collapsible-block-unfolded-link\">" ++
      litBytes "<a class=\"collapsible-block-link\" " ++
      litBytes "href=\"javascript:;\">" ++
      ([0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block") ++
      litBytes "</a></div>" ++
      litBytes "<div class=\"collapsible-block-content\">" := by
  have hom : omGet [("args".toList, OptVal.map []),
      ("type".toList, OptVal.str "start".toList)] "args".toList =
      some (OptVal.map []) := rfl
  have hoptShow : optBytesOpt [] "show".toList = none := rfl
  have hoptHide : optBytesOpt [] "hide".toList = none := rfl
  have hoptFold : optBytesOpt [] "folded".toList = none := rfl
  have hoptLoc : optBytesOpt [] "hideLocation".toList = none := rfl
  have ht1 : intTypeIs [("args".toList, OptVal.map []),
      ("type".toList, OptVal.str "start".toList)] (litBytes "start") =
      true := rfl
  have hloc : (litBytes "top" == litBytes "top" ||
      litBytes "top" == litBytes "both") = true := rfl
  unfold renderCollapsible
  simp only [hom, hoptShow, hoptHide, hoptFold, hoptLoc, ht1, hloc,
    ↓reduceIte, collapsible_label_default_show,
    collapsible_label_default_hide, List.append_nil, List.append_assoc]

/-- `Collapsible` `start` with `folded="no"`: the folded link
    is hidden and the unfolded block is not. -/
theorem collapsible_start_unfolded :
    renderCollapsible
      [("args".toList, OptVal.map
        [("folded".toList, OptVal.str "no".toList)]),
       ("type".toList, OptVal.str "start".toList)] =
    litBytes "<div class=\"collapsible-block\">" ++
      litBytes "<div class=\"collapsible-block-folded\"" ++
      litBytes " style=\"display:none\"" ++
      litBytes "><a class=\"collapsible-block-link\" " ++
      litBytes "href=\"javascript:;\">" ++
      litBytes "+&nbsp;show&nbsp;block" ++
      litBytes "</a></div>" ++
      litBytes "<div class=\"collapsible-block-unfolded\"" ++
      litBytes ">" ++
      litBytes "<div class=\"collapsible-block-unfolded-link\">" ++
      litBytes "<a class=\"collapsible-block-link\" " ++
      litBytes "href=\"javascript:;\">" ++
      ([0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block") ++
      litBytes "</a></div>" ++
      litBytes "<div class=\"collapsible-block-content\">" := by
  have hom : omGet [("args".toList, OptVal.map
        [("folded".toList, OptVal.str "no".toList)]),
      ("type".toList, OptVal.str "start".toList)] "args".toList =
      some (OptVal.map [("folded".toList, OptVal.str "no".toList)]) := rfl
  have hoptShow : optBytesOpt [("folded".toList, OptVal.str "no".toList)]
      "show".toList = none := rfl
  have hoptHide : optBytesOpt [("folded".toList, OptVal.str "no".toList)]
      "hide".toList = none := rfl
  have hoptFold : optBytesOpt [("folded".toList, OptVal.str "no".toList)]
      "folded".toList = some (litBytes "no") := rfl
  have hoptLoc : optBytesOpt [("folded".toList, OptVal.str "no".toList)]
      "hideLocation".toList = none := rfl
  have hdisj : (litBytes "no" == litBytes "no" ||
      litBytes "no" == litBytes "false") = true := rfl
  have ht1 : intTypeIs [("args".toList, OptVal.map
        [("folded".toList, OptVal.str "no".toList)]),
      ("type".toList, OptVal.str "start".toList)] (litBytes "start") =
      true := rfl
  have hloc : (litBytes "top" == litBytes "top" ||
      litBytes "top" == litBytes "both") = true := rfl
  unfold renderCollapsible
  simp only [hom, hoptShow, hoptHide, hoptFold, hoptLoc, hdisj, ht1, hloc,
    Bool.not_true, Bool.false_eq_true, ↓reduceIte,
    collapsible_label_default_show, collapsible_label_default_hide,
    List.append_nil, List.append_assoc]

/-- `Collapsible` `end` with `hideLocation="bottom"`: the
    unfolded-link block follows the content close. -/
theorem collapsible_end_bottom :
    renderCollapsible
      [("args".toList, OptVal.map
        [("hideLocation".toList, OptVal.str "bottom".toList)]),
       ("type".toList, OptVal.str "end".toList)] =
    litBytes "</div>" ++
      litBytes "<div class=\"collapsible-block-unfolded-link\">" ++
      litBytes "<a class=\"collapsible-block-link\" " ++
      litBytes "href=\"javascript:;\">" ++
      ([0xE2, 0x80, 0x93] ++ litBytes "&nbsp;hide&nbsp;block") ++
      litBytes "</a></div>" ++
      litBytes "</div></div>" := by
  have hom : omGet [("args".toList, OptVal.map
        [("hideLocation".toList, OptVal.str "bottom".toList)]),
      ("type".toList, OptVal.str "end".toList)] "args".toList =
      some (OptVal.map
        [("hideLocation".toList, OptVal.str "bottom".toList)]) := rfl
  have hoptHide : optBytesOpt
      [("hideLocation".toList, OptVal.str "bottom".toList)]
      "hide".toList = none := rfl
  have hoptLoc : optBytesOpt
      [("hideLocation".toList, OptVal.str "bottom".toList)]
      "hideLocation".toList = some (litBytes "bottom") := rfl
  have ht1 : intTypeIs [("args".toList, OptVal.map
        [("hideLocation".toList, OptVal.str "bottom".toList)]),
      ("type".toList, OptVal.str "end".toList)] (litBytes "start") =
      false := rfl
  have ht2 : intTypeIs [("args".toList, OptVal.map
        [("hideLocation".toList, OptVal.str "bottom".toList)]),
      ("type".toList, OptVal.str "end".toList)] (litBytes "end") =
      true := rfl
  have hlocv : (litBytes "bottom" == litBytes "bottom") = true := rfl
  have hloc2 : (litBytes "bottom" == litBytes "bottom" ||
      litBytes "bottom" == litBytes "both") = true := rfl
  unfold renderCollapsible
  simp only [hom, hoptHide, hoptLoc, ht1, ht2, hlocv, hloc2,
    Bool.true_or, Bool.false_eq_true, ↓reduceIte,
    collapsible_label_default_hide, List.append_nil, List.append_assoc]

/-- `Collapsible` `end`, default (top): no link block. -/
theorem collapsible_end_top :
    renderCollapsible [("args".toList, OptVal.map []),
      ("type".toList, OptVal.str "end".toList)] =
    litBytes "</div>" ++
      litBytes "</div></div>" := by
  have hom : omGet [("args".toList, OptVal.map []),
      ("type".toList, OptVal.str "end".toList)] "args".toList =
      some (OptVal.map []) := rfl
  have hoptFold : optBytesOpt [] "folded".toList = none := rfl
  have hoptLoc : optBytesOpt [] "hideLocation".toList = none := rfl
  have ht1 : intTypeIs [("args".toList, OptVal.map []),
      ("type".toList, OptVal.str "end".toList)] (litBytes "start") =
      false := rfl
  have ht2 : intTypeIs [("args".toList, OptVal.map []),
      ("type".toList, OptVal.str "end".toList)] (litBytes "end") =
      true := rfl
  have hlocF : (litBytes "top" == litBytes "bottom" ||
      litBytes "top" == litBytes "both") = false := rfl
  unfold renderCollapsible
  simp only [hom, hoptFold, hoptLoc, ht1, ht2, hlocF,
    Bool.false_eq_true, ↓reduceIte, List.append_nil, List.append_assoc]

set_option maxRecDepth 8192 in
/- `Tabview` `start` with one selected tab: the two script
    tags, the navset opener, and the tab item. -/
theorem tabview_start_one :
    renderTabview
      [("type".toList, OptVal.str "start".toList),
       ("tabs".toList, OptVal.list
        [OptVal.map [("title".toList, OptVal.str "One".toList),
          ("tabId".toList, OptVal.int 0)]]),
       ("tabviewId".toList, OptVal.int 3)] =
    litBytes "<script type=\"text/javascript\" " ++
      litBytes "src=\"/common--javascript/yahooui/element-beta-min.js\">" ++
      litBytes "</script>" ++ [10] ++
      litBytes "<script type=\"text/javascript\" " ++
      litBytes "src=\"/common--javascript/yahooui/tabview-min.js\">" ++
      litBytes "</script>" ++
      litBytes "<div id=\"wiki-tabview-3\" class=\"yui-navset\">" ++
      litBytes "<ul class=\"yui-nav\">" ++
      litBytes "<li class=\"selected\">" ++
      litBytes "<a href=\"javascript:;\"><em>One</em></a></li>" ++
      litBytes "</ul><div class=\"yui-content\">" := rfl

/-- A tab entry with an empty title emits the bare anchor. -/
theorem tabview_tab_empty_title :
    tabviewTabItem (OptVal.map
      [("title".toList, OptVal.str "".toList),
       ("tabId".toList, OptVal.int 1)]) =
    litBytes "<li><a href=\"javascript:;\"></a></li>" := rfl

/-- A tab entry with no title defaults to `untitled`. The
    label's `ENT_COMPAT` escape is discharged through
    `htmlSpecialCharsCompat_ascii` (a plain `rfl` would
    kernel-reduce `utf8Valid` on the eight-byte label). -/
theorem tabview_tab_untitled :
    tabviewTabItem (OptVal.map [("tabId".toList, OptVal.int 0)]) =
    litBytes "<li" ++
      litBytes " class=\"selected\"" ++
      litBytes "><a href=\"javascript:;\"><em>" ++
      litBytes "untitled" ++
      litBytes "</em></a></li>" := by
  have htab : omGet [("tabId".toList, OptVal.int 0)] "tabId".toList =
      some (OptVal.int 0) := rfl
  have htitle : optBytesOpt [("tabId".toList, OptVal.int 0)]
      "title".toList = none := rfl
  have hzero : ((0 : Int) == 0) = true := rfl
  have hne : (litBytes "untitled").isEmpty = false := rfl
  have hqc : htmlSpecialCharsCompat (litBytes "untitled") =
      litBytes "untitled" := by
    have hascii : ∀ b ∈ litBytes "untitled", b < 0x80 := fun b hb => by
      have hall : (litBytes "untitled").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  unfold tabviewTabItem
  simp only [htab, htitle, hzero, hne, hqc, Bool.false_eq_true,
    ↓reduceIte, List.append_nil, List.append_assoc]

/-- `Tabview` `tabStart` for the first tab: no hidden style. -/
theorem tabview_tabstart_first :
    renderTabview [("type".toList, OptVal.str "tabStart".toList),
      ("tabviewId".toList, OptVal.int 3),
      ("tabId".toList, OptVal.int 0)] =
    litBytes "<div id=\"wiki-tab-3-0\">" := rfl

/-- `Tabview` `tabStart` for a later tab: hidden. -/
theorem tabview_tabstart_later :
    renderTabview [("type".toList, OptVal.str "tabStart".toList),
      ("tabviewId".toList, OptVal.int 3),
      ("tabId".toList, OptVal.int 2)] =
    litBytes "<div id=\"wiki-tab-3-2\" style=\"display:none\">" := rfl

/-- `Tabview` shared `tabStart` without a `tabId` (the token
    the parse claims first): the id suffix is empty and there
    is no style. -/
theorem tabview_tabstart_shared :
    renderTabview [("type".toList, OptVal.str "tabStart".toList),
      ("tabviewId".toList, OptVal.int 3)] =
    litBytes "<div id=\"wiki-tab-3-\">" := rfl

/-- `Tabview` `tabEnd`. -/
theorem tabview_tabend :
    renderTabview [("type".toList, OptVal.str "tabEnd".toList),
      ("tabviewId".toList, OptVal.int 3)] =
    litBytes "</div>" := rfl

set_option maxRecDepth 8192 in
/- `Tabview` `end`: the closers and the YUI bootstrap script. -/
theorem tabview_end :
    renderTabview [("type".toList, OptVal.str "end".toList),
      ("tabviewId".toList, OptVal.int 3)] =
    litBytes "</div></div>" ++
      litBytes "<script type=\"text/javascript\">" ++ [10] ++
      litBytes "(function(){" ++ [10] ++ [9] ++
      litBytes "var tabView3 = new YAHOO.widget.TabView(" ++
      litBytes "'wiki-tabview-3');" ++ [10] ++
      litBytes "})();" ++ [10] ++ litBytes "</script>" := rfl

/-- `Button` `edit` with no attributes: the default class and
    the default text. Both escapes (the class's and the
    text's) are `ENT_COMPAT` since the HTMLCHARS correction
    made Button's class/style calls explicit, discharged
    through the `*_ascii` characterizations. -/
theorem button_edit_default :
    renderButton [("type".toList, OptVal.str "edit".toList)] =
    litBytes "<a class=\"" ++
      litBytes "wiki-standalone-button" ++
      litBytes "\" " ++
      litBytes "href=\"javascript:;\" " ++
      litBytes "onclick=\"" ++
      litBytes "WIKIDOT.page.listeners.editClick(event)" ++
      litBytes "\" " ++
      litBytes ">" ++
      litBytes "edit" ++
      litBytes "</a>" := by
  have hty : asciiLowerBytes (optStrBytes
      [("type".toList, OptVal.str "edit".toList)] "type".toList) =
      litBytes "edit" := rfl
  have hallow : buttonAllowed (litBytes "edit") = true := rfl
  have hnt : (litBytes "edit" == litBytes "set-tags") = false := rfl
  have htext : optStrBytes [("type".toList, OptVal.str "edit".toList)]
      "text".toList = [] := rfl
  have hstyle : optStrBytes [("type".toList, OptVal.str "edit".toList)]
      "style".toList = [] := rfl
  have hclass : optStrBytes [("type".toList, OptVal.str "edit".toList)]
      "class".toList = [] := rfl
  have htruth : phpTruthyBytes [] = false := rfl
  have hqs : htmlSpecialCharsCompat (litBytes "wiki-standalone-button") =
      litBytes "wiki-standalone-button" := by
    have hascii : ∀ b ∈ litBytes "wiki-standalone-button", b < 0x80 :=
      fun b hb => by
        have hall : (litBytes "wiki-standalone-button").all
            (fun x => decide (x < 0x80)) = true := rfl
        exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hqc : htmlSpecialCharsCompat (litBytes "edit") =
      litBytes "edit" := by
    have hascii : ∀ b ∈ litBytes "edit", b < 0x80 := fun b hb => by
      have hall : (litBytes "edit").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hon : buttonOnclick (litBytes "edit") =
      litBytes "WIKIDOT.page.listeners.editClick(event)" := rfl
  have hdef : buttonDefaultText (litBytes "edit") =
      litBytes "edit" := rfl
  unfold renderButton
  simp only [hty, hallow, hnt, htext, hstyle, hclass, htruth, hqs, hqc,
    hon, hdef, Bool.not_true, Bool.false_and, Bool.false_eq_true,
    ↓reduceIte, List.append_nil, List.append_assoc]

/-- `Button` with class, style, and text (the REFVAL battery's
    bt-03 shape). -/
theorem button_edit_full :
    renderButton [("text".toList, OptVal.str "Edit".toList),
      ("class".toList, OptVal.str "c".toList),
      ("style".toList, OptVal.str "s".toList),
      ("type".toList, OptVal.str "edit".toList)] =
    litBytes "<a class=\"" ++
      litBytes "c" ++
      litBytes "\" " ++
      litBytes "style=\"" ++
      litBytes "s" ++
      litBytes "\" " ++
      litBytes "href=\"javascript:;\" " ++
      litBytes "onclick=\"" ++
      litBytes "WIKIDOT.page.listeners.editClick(event)" ++
      litBytes "\" " ++
      litBytes ">" ++
      litBytes "Edit" ++
      litBytes "</a>" := by
  have hty : asciiLowerBytes (optStrBytes
      [("text".toList, OptVal.str "Edit".toList),
       ("class".toList, OptVal.str "c".toList),
       ("style".toList, OptVal.str "s".toList),
       ("type".toList, OptVal.str "edit".toList)] "type".toList) =
      litBytes "edit" := rfl
  have hallow : buttonAllowed (litBytes "edit") = true := rfl
  have hnt : (litBytes "edit" == litBytes "set-tags") = false := rfl
  have htext : optStrBytes [("text".toList, OptVal.str "Edit".toList),
      ("class".toList, OptVal.str "c".toList),
      ("style".toList, OptVal.str "s".toList),
      ("type".toList, OptVal.str "edit".toList)] "text".toList =
      litBytes "Edit" := rfl
  have hstyle : optStrBytes [("text".toList, OptVal.str "Edit".toList),
      ("class".toList, OptVal.str "c".toList),
      ("style".toList, OptVal.str "s".toList),
      ("type".toList, OptVal.str "edit".toList)] "style".toList =
      litBytes "s" := rfl
  have hclass : optStrBytes [("text".toList, OptVal.str "Edit".toList),
      ("class".toList, OptVal.str "c".toList),
      ("style".toList, OptVal.str "s".toList),
      ("type".toList, OptVal.str "edit".toList)] "class".toList =
      litBytes "c" := rfl
  have htruthT : phpTruthyBytes (litBytes "Edit") = true := rfl
  have htruthC : phpTruthyBytes (litBytes "c") = true := rfl
  have htruthS : phpTruthyBytes (litBytes "s") = true := rfl
  have hqsC : htmlSpecialCharsCompat (litBytes "c") =
      litBytes "c" := rfl
  have hqsS : htmlSpecialCharsCompat (litBytes "s") =
      litBytes "s" := rfl
  have hqc : htmlSpecialCharsCompat (litBytes "Edit") =
      litBytes "Edit" := by
    have hascii : ∀ b ∈ litBytes "Edit", b < 0x80 := fun b hb => by
      have hall : (litBytes "Edit").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hon : buttonOnclick (litBytes "edit") =
      litBytes "WIKIDOT.page.listeners.editClick(event)" := rfl
  unfold renderButton
  simp only [hty, hallow, hnt, htext, hstyle, hclass, htruthT, htruthC,
    htruthS, hqsC, hqsS, hqc, hon, Bool.not_true, Bool.false_and,
    Bool.false_eq_true, ↓reduceIte, List.append_nil, List.append_assoc]

/-- `Button` with an uppercase type: the allowlist test and
    the handler lookup run on the lowercased type. -/
theorem button_upper_type :
    renderButton [("type".toList, OptVal.str "EDIT".toList)] =
    litBytes "<a class=\"" ++
      litBytes "wiki-standalone-button" ++
      litBytes "\" " ++
      litBytes "href=\"javascript:;\" " ++
      litBytes "onclick=\"" ++
      litBytes "WIKIDOT.page.listeners.editClick(event)" ++
      litBytes "\" " ++
      litBytes ">" ++
      litBytes "edit" ++
      litBytes "</a>" := by
  have hty : asciiLowerBytes (optStrBytes
      [("type".toList, OptVal.str "EDIT".toList)] "type".toList) =
      litBytes "edit" := rfl
  have hallow : buttonAllowed (litBytes "edit") = true := rfl
  have hnt : (litBytes "edit" == litBytes "set-tags") = false := rfl
  have htext : optStrBytes [("type".toList, OptVal.str "EDIT".toList)]
      "text".toList = [] := rfl
  have hstyle : optStrBytes [("type".toList, OptVal.str "EDIT".toList)]
      "style".toList = [] := rfl
  have hclass : optStrBytes [("type".toList, OptVal.str "EDIT".toList)]
      "class".toList = [] := rfl
  have htruth : phpTruthyBytes [] = false := rfl
  have hqs : htmlSpecialCharsCompat (litBytes "wiki-standalone-button") =
      litBytes "wiki-standalone-button" := by
    have hascii : ∀ b ∈ litBytes "wiki-standalone-button", b < 0x80 :=
      fun b hb => by
        have hall : (litBytes "wiki-standalone-button").all
            (fun x => decide (x < 0x80)) = true := rfl
        exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hqc : htmlSpecialCharsCompat (litBytes "edit") =
      litBytes "edit" := by
    have hascii : ∀ b ∈ litBytes "edit", b < 0x80 := fun b hb => by
      have hall : (litBytes "edit").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hon : buttonOnclick (litBytes "edit") =
      litBytes "WIKIDOT.page.listeners.editClick(event)" := rfl
  have hdef : buttonDefaultText (litBytes "edit") =
      litBytes "edit" := rfl
  unfold renderButton
  simp only [hty, hallow, hnt, htext, hstyle, hclass, htruth, hqs, hqc,
    hon, hdef, Bool.not_true, Bool.false_and, Bool.false_eq_true,
    ↓reduceIte, List.append_nil, List.append_assoc]

/-- `Button` with an unknown type: the error block names the
    lowercased type. -/
theorem button_invalid_type :
    renderButton [("type".toList, OptVal.str "Bogus".toList)] =
    litBytes "<div class=\"error-block\"><em>bogus</em> " ++
      litBytes "is not a valid button type</div>" := rfl

/-- `Button` `set-tags` without text: its dedicated error. -/
theorem button_settags_notext :
    renderButton [("type".toList, OptVal.str "set-tags".toList)] =
    litBytes "<div class=\"error-block\">" ++
      litBytes "You need to set text for set-tags button.</div>" := rfl

/-- `Button` `set-tags` with text renders the anchor. -/
theorem button_settags_text :
    renderButton [("text".toList, OptVal.str "Tag it".toList),
      ("type".toList, OptVal.str "set-tags".toList)] =
    litBytes "<a class=\"" ++
      litBytes "wiki-standalone-button" ++
      litBytes "\" " ++
      litBytes "href=\"javascript:;\" " ++
      litBytes "onclick=\"" ++
      litBytes "WIKIDOT.page.listeners.updateTagsByButton(event, '')" ++
      litBytes "\" " ++
      litBytes ">" ++
      litBytes "Tag it" ++
      litBytes "</a>" := by
  have hty : asciiLowerBytes (optStrBytes
      [("text".toList, OptVal.str "Tag it".toList),
       ("type".toList, OptVal.str "set-tags".toList)] "type".toList) =
      litBytes "set-tags" := rfl
  have hallow : buttonAllowed (litBytes "set-tags") = true := rfl
  have hst : (litBytes "set-tags" == litBytes "set-tags") = true := rfl
  have htext : optStrBytes [("text".toList, OptVal.str "Tag it".toList),
      ("type".toList, OptVal.str "set-tags".toList)] "text".toList =
      litBytes "Tag it" := rfl
  have hstyle : optStrBytes [("text".toList, OptVal.str "Tag it".toList),
      ("type".toList, OptVal.str "set-tags".toList)] "style".toList =
      [] := rfl
  have hclass : optStrBytes [("text".toList, OptVal.str "Tag it".toList),
      ("type".toList, OptVal.str "set-tags".toList)] "class".toList =
      [] := rfl
  have htruth : phpTruthyBytes (litBytes "Tag it") = true := rfl
  have htruthE : phpTruthyBytes [] = false := rfl
  have hqs : htmlSpecialCharsCompat (litBytes "wiki-standalone-button") =
      litBytes "wiki-standalone-button" := by
    have hascii : ∀ b ∈ litBytes "wiki-standalone-button", b < 0x80 :=
      fun b hb => by
        have hall : (litBytes "wiki-standalone-button").all
            (fun x => decide (x < 0x80)) = true := rfl
        exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hqc : htmlSpecialCharsCompat (litBytes "Tag it") =
      litBytes "Tag it" := by
    have hascii : ∀ b ∈ litBytes "Tag it", b < 0x80 := fun b hb => by
      have hall : (litBytes "Tag it").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hon : buttonOnclick (litBytes "set-tags") =
      litBytes "WIKIDOT.page.listeners.updateTagsByButton(event, '')" := rfl
  unfold renderButton
  simp only [hty, hallow, hst, htext, hstyle, hclass, htruth, htruthE,
    hqs, hqc, hon, Bool.not_true, Bool.not_false, Bool.true_and,
    Bool.false_eq_true, ↓reduceIte, List.append_nil, List.append_assoc]

/-- `Iframe` with a `src` and a `null` attribute: every option
    renders, nulls as empty values. The attribute values'
    `ENT_COMPAT` escapes are discharged through
    `htmlSpecialCharsCompat_ascii`. -/
theorem iframe_src_null_attr :
    renderIframe [("src".toList, OptVal.str "http://x".toList),
      ("align".toList, OptVal.null)] =
    litBytes "<iframe " ++
      litBytes "src=\"http://x\"" ++ [32] ++
      litBytes "align=\"\"" ++
      litBytes "></iframe>" := by
  have hpart1 : iframePart ("src".toList,
      OptVal.str "http://x".toList) =
      litBytes "src=\"http://x\"" := by
    have hval : renderOptValBytes (OptVal.str "http://x".toList) =
        litBytes "http://x" := rfl
    have hcond : ("src".toList == "src".toList) = true := rfl
    have henc : percentEncodeNonAscii (litBytes "http://x") =
        litBytes "http://x" := rfl
    have hqc : htmlSpecialCharsCompat (litBytes "http://x") =
        litBytes "http://x" := by
      have hascii : ∀ b ∈ litBytes "http://x", b < 0x80 := fun b hb => by
        have hall : (litBytes "http://x").all
            (fun x => decide (x < 0x80)) = true := rfl
        exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
      rw [htmlSpecialCharsCompat_ascii _ hascii]
      rfl
    have hkey : "src".toList.flatMap utf8Bytes = litBytes "src" := rfl
    unfold iframePart
    simp only [hval, hcond, henc, hqc, hkey, ↓reduceIte,
      List.append_nil, List.append_assoc]
    rfl
  have hpart2 : iframePart ("align".toList, OptVal.null) =
      litBytes "align=\"\"" := by
    have hval : renderOptValBytes OptVal.null = [] := rfl
    have hcond : ("align".toList == "src".toList) = false := rfl
    have hqc : htmlSpecialCharsCompat [] = [] := rfl
    have hkey : "align".toList.flatMap utf8Bytes =
        litBytes "align" := rfl
    unfold iframePart
    simp only [hval, hcond, hqc, hkey, Bool.false_eq_true,
      ↓reduceIte, List.append_nil, List.append_assoc]
    rfl
  have hmap : [("src".toList, OptVal.str "http://x".toList),
      ("align".toList, OptVal.null)].map iframePart =
      [litBytes "src=\"http://x\"", litBytes "align=\"\""] := by
    simp only [List.map_cons, List.map_nil, hpart1, hpart2]
  unfold renderIframe
  simp only [hmap, joinSpaceBytes, List.append_nil, List.append_assoc]

/-- `Iframe`: a non-ASCII byte in the `src` is
    percent-encoded before escaping. -/
theorem iframe_src_nonascii :
    renderIframe [("src".toList, OptVal.str "café".toList)] =
    litBytes "<iframe " ++
      litBytes "src=\"caf%C3%A9\"" ++
      litBytes "></iframe>" := by
  have hpart : iframePart ("src".toList, OptVal.str "café".toList) =
      litBytes "src=\"caf%C3%A9\"" := by
    have hval : renderOptValBytes (OptVal.str "café".toList) =
        [99, 97, 102, 195, 169] := rfl
    have hcond : ("src".toList == "src".toList) = true := rfl
    have henc : percentEncodeNonAscii [99, 97, 102, 195, 169] =
        litBytes "caf%C3%A9" := rfl
    have hqc : htmlSpecialCharsCompat (litBytes "caf%C3%A9") =
        litBytes "caf%C3%A9" := by
      have hascii : ∀ b ∈ litBytes "caf%C3%A9", b < 0x80 := fun b hb => by
        have hall : (litBytes "caf%C3%A9").all
            (fun x => decide (x < 0x80)) = true := rfl
        exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
      rw [htmlSpecialCharsCompat_ascii _ hascii]
      rfl
    have hkey : "src".toList.flatMap utf8Bytes = litBytes "src" := rfl
    unfold iframePart
    simp only [hval, hcond, henc, hqc, hkey, ↓reduceIte,
      List.append_nil, List.append_assoc]
    rfl
  have hmap : [("src".toList, OptVal.str "café".toList)].map iframePart =
      [litBytes "src=\"caf%C3%A9\""] := by
    simp only [List.map_cons, List.map_nil, hpart]
  unfold renderIframe
  simp only [hmap, joinSpaceBytes, List.append_nil, List.append_assoc]

/-- `Date` at the epoch. Proved by branch rewriting: the
    composed `canonTimestamp`/`phpIntCast`/`formatTimestamp`
    chain exceeds the elaborator's recursion depth in a single
    `rfl`, though every step is instant on its own. -/
theorem date_epoch :
    renderDate [("timestamp".toList, OptVal.str "0".toList)] =
    litBytes "<span class=\"odate time_0\">" ++
      litBytes "01 Jan 1970 00:00</span>" := by
  have hraw : optStrBytes [("timestamp".toList, OptVal.str "0".toList)]
      "timestamp".toList = litBytes "0" := rfl
  have hts : canonTimestamp (litBytes "0") = litBytes "0" := rfl
  have hcast : phpIntCast (litBytes "0") = 0 := rfl
  have hfmt : formatTimestamp 0 = litBytes "01 Jan 1970 00:00" := rfl
  have hform : optStrBytes [("timestamp".toList, OptVal.str "0".toList)]
      "format".toList = [] := rfl
  have hne : (litBytes "0").isEmpty = false := rfl
  unfold renderDate
  simp only [hraw, hts, hcast, hfmt, hform, hne, Bool.false_eq_true,
    ↓reduceIte, List.append_assoc]
  rfl

/-- `Date` on the battery's canonical timestamp. -/
theorem date_basic :
    renderDate [("timestamp".toList,
      OptVal.str "1216153821".toList)] =
    litBytes "<span class=\"odate time_1216153821\">" ++
      litBytes "15 Jul 2008 20:30</span>" := rfl

/-- `Date` with a format: the format changes only the class,
    percent-encoded (`%Y` becomes `format_%25Y`). -/
theorem date_format_class :
    renderDate [("timestamp".toList,
        OptVal.str "1216153821".toList),
      ("format".toList, OptVal.str "%Y".toList)] =
    litBytes "<span class=\"odate time_1216153821 format_%25Y\">" ++
      litBytes "15 Jul 2008 20:30</span>" := rfl

/-- `Date` one day before the epoch (floor division on a
    negative timestamp). -/
theorem date_negative_day :
    renderDate [("timestamp".toList, OptVal.str "-86400".toList)] =
    litBytes "<span class=\"odate time_-86400\">" ++
      litBytes "31 Dec 1969 00:00</span>" := rfl

/-- `Date` with an empty timestamp renders nothing. -/
theorem date_empty :
    renderDate [("timestamp".toList, OptVal.str "".toList)] =
    [] := rfl

/-- `canonTimestamp` clamps an over-range magnitude to the
    signed 64-bit bound. -/
theorem date_canon_clamp :
    canonTimestamp (litBytes "99999999999999999999999") =
    litBytes "9223372036854775807" := rfl

/-- `canonTimestamp` drops leading zeros and keeps the sign. -/
theorem date_canon_leading_zeros :
    canonTimestamp (litBytes "-000123") = litBytes "-123" := rfl

/-- `File` with a plain name: the base slash plus the name.
    The two `ENT_COMPAT` escapes are discharged through
    `htmlSpecialCharsCompat_ascii`. -/
theorem file_plain :
    renderFile [("file".toList, OptVal.str "a.txt".toList),
      ("anchor".toList, OptVal.str "a.txt".toList)] =
    litBytes "<a href=\"" ++
      litBytes "/a.txt" ++
      litBytes "\">" ++
      litBytes "a.txt" ++
      litBytes "</a>" := by
  have hfile : optStrBytes [("file".toList, OptVal.str "a.txt".toList),
      ("anchor".toList, OptVal.str "a.txt".toList)] "file".toList =
      litBytes "a.txt" := rfl
  have hanchor : optStrBytes [("file".toList, OptVal.str "a.txt".toList),
      ("anchor".toList, OptVal.str "a.txt".toList)] "anchor".toList =
      litBytes "a.txt" := rfl
  have hcont : (litBytes "a.txt").contains 47 = false := rfl
  have henc : encodeFilePath (litBytes "a.txt") =
      litBytes "a.txt" := rfl
  have hqc1 : htmlSpecialCharsCompat
      (litBytes "/" ++ encodeFilePath (litBytes "a.txt")) =
      litBytes "/a.txt" := by
    rw [henc]
    show htmlSpecialCharsCompat (litBytes "/a.txt") = litBytes "/a.txt"
    have hascii : ∀ b ∈ litBytes "/a.txt", b < 0x80 := fun b hb => by
      have hall : (litBytes "/a.txt").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hqc2 : htmlSpecialCharsCompat (litBytes "a.txt") =
      litBytes "a.txt" := by
    have hascii : ∀ b ∈ litBytes "a.txt", b < 0x80 := fun b hb => by
      have hall : (litBytes "a.txt").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  unfold renderFile
  simp only [hfile, hanchor, hcont, hqc1, hqc2, Bool.false_eq_true,
    ↓reduceIte, List.append_nil, List.append_assoc]

/-- `File` with a path: the `/local--files/` prefix, one
    leading slash stripped. -/
theorem file_path :
    renderFile [("file".toList, OptVal.str "/dir/a.txt".toList),
      ("anchor".toList, OptVal.str "Label".toList)] =
    litBytes "<a href=\"" ++
      litBytes "/local--files/dir/a.txt" ++
      litBytes "\">" ++
      litBytes "Label" ++
      litBytes "</a>" := by
  have hfile : optStrBytes [("file".toList, OptVal.str "/dir/a.txt".toList),
      ("anchor".toList, OptVal.str "Label".toList)] "file".toList =
      litBytes "/dir/a.txt" := rfl
  have hanchor : optStrBytes [("file".toList, OptVal.str "/dir/a.txt".toList),
      ("anchor".toList, OptVal.str "Label".toList)] "anchor".toList =
      litBytes "Label" := rfl
  have hcont : (litBytes "/dir/a.txt").contains 47 = true := rfl
  have hcont' : (47 :: litBytes "dir/a.txt").contains 47 = true := rfl
  have hcons : litBytes "/dir/a.txt" = 47 :: litBytes "dir/a.txt" := rfl
  have henc : encodeFilePath (litBytes "dir/a.txt") =
      litBytes "dir/a.txt" := rfl
  have hqc1 : htmlSpecialCharsCompat
      (litBytes "/local--files/" ++ encodeFilePath (litBytes "dir/a.txt")) =
      litBytes "/local--files/dir/a.txt" := by
    rw [henc]
    show htmlSpecialCharsCompat (litBytes "/local--files/dir/a.txt") =
      litBytes "/local--files/dir/a.txt"
    have hascii : ∀ b ∈ litBytes "/local--files/dir/a.txt", b < 0x80 :=
      fun b hb => by
        have hall : (litBytes "/local--files/dir/a.txt").all
            (fun x => decide (x < 0x80)) = true := rfl
        exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hqc2 : htmlSpecialCharsCompat (litBytes "Label") =
      litBytes "Label" := by
    have hascii : ∀ b ∈ litBytes "Label", b < 0x80 := fun b hb => by
      have hall : (litBytes "Label").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  unfold renderFile
  simp only [hfile, hanchor, hcont, hcont', hcons, hqc1, hqc2,
    ↓reduceIte, List.append_nil, List.append_assoc]

/-- `File`: a space in the name is percent-encoded. -/
theorem file_space :
    renderFile [("file".toList, OptVal.str "a b.txt".toList),
      ("anchor".toList, OptVal.str "a b.txt".toList)] =
    litBytes "<a href=\"" ++
      litBytes "/a%20b.txt" ++
      litBytes "\">" ++
      litBytes "a b.txt" ++
      litBytes "</a>" := by
  have hfile : optStrBytes [("file".toList, OptVal.str "a b.txt".toList),
      ("anchor".toList, OptVal.str "a b.txt".toList)] "file".toList =
      litBytes "a b.txt" := rfl
  have hanchor : optStrBytes [("file".toList, OptVal.str "a b.txt".toList),
      ("anchor".toList, OptVal.str "a b.txt".toList)] "anchor".toList =
      litBytes "a b.txt" := rfl
  have hcont : (litBytes "a b.txt").contains 47 = false := rfl
  have henc : encodeFilePath (litBytes "a b.txt") =
      litBytes "a%20b.txt" := rfl
  have hqc1 : htmlSpecialCharsCompat
      (litBytes "/" ++ encodeFilePath (litBytes "a b.txt")) =
      litBytes "/a%20b.txt" := by
    rw [henc]
    show htmlSpecialCharsCompat (litBytes "/a%20b.txt") =
      litBytes "/a%20b.txt"
    have hascii : ∀ b ∈ litBytes "/a%20b.txt", b < 0x80 := fun b hb => by
      have hall : (litBytes "/a%20b.txt").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  have hqc2 : htmlSpecialCharsCompat (litBytes "a b.txt") =
      litBytes "a b.txt" := by
    have hascii : ∀ b ∈ litBytes "a b.txt", b < 0x80 := fun b hb => by
      have hall : (litBytes "a b.txt").all
          (fun x => decide (x < 0x80)) = true := rfl
      exact of_decide_eq_true (List.all_eq_true.mp hall b hb)
    rw [htmlSpecialCharsCompat_ascii _ hascii]
    rfl
  unfold renderFile
  simp only [hfile, hanchor, hcont, hqc1, hqc2, Bool.false_eq_true,
    ↓reduceIte, List.append_nil, List.append_assoc]

/-- `Size` `start` and `end`. -/
theorem size_shapes :
    renderSize [("size".toList, OptVal.str "12px".toList),
      ("type".toList, OptVal.str "start".toList)] =
      litBytes "<span style=\"font-size:12px;\">" ∧
    renderSize [("type".toList, OptVal.str "end".toList)] =
      litBytes "</span>" := ⟨rfl, rfl⟩

/-- `Span` `start` with no attributes: the bare opener. -/
theorem span_start_bare :
    renderSpan [("args".toList, OptVal.map []),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<span>" := rfl

/-- `Span` `start` with a class: the value is escaped. -/
theorem span_start_class :
    renderSpan [("args".toList, OptVal.map
        [("class".toList, OptVal.str "a\"b".toList)]),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<span class=\"a&quot;b\">" := rfl

/-- `Span` `end`. -/
theorem span_end :
    renderSpan [("type".toList, OptVal.str "end".toList)] =
    litBytes "</span>" := rfl

/-- `Div` `start` with no attributes: the bare opener (the
    R4-C3-corrected shape, no stray space). -/
theorem div_start_bare :
    renderDiv [("args".toList, OptVal.map []),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<div>" := rfl

/-- `Div` `start` with a class: REFCORR4 Batch C escapes the
    value with ENT_COMPAT, so an apostrophe stays raw while a
    double quote becomes `&quot;`. -/
theorem div_start_class_escaped :
    renderDiv [("args".toList, OptVal.map
        [("class".toList, OptVal.str "a\"b".toList)]),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<div class=\"a&quot;b\">" := rfl

/-- REFCORR4 Batch C: a value carrying a placeholder is cleared
    with its key kept. REFCORR8 C-R5-R1-1 narrows this: only the 0xFF
    placeholder arm clears, so the non-placeholder bare `u-` id shell is
    emitted verbatim while the placeholder-bearing class still clears. -/
theorem div_start_placeholder_attrs_cleared :
    renderDiv [("args".toList, OptVal.map
        [("class".toList, OptVal.bytes [97, 0xFF, 48, 0xFF, 99]),
         ("id".toList, OptVal.str "u-".toList)]),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<div class=\"\" id=\"u-\">" := rfl

/-- REFCORR9 C-R5B-R1-1: a 0xFF placeholder-bearing authored id retains its
    marker through `isolateId`, so the unchanged render clear arm emits an
    empty value with the key kept, matching live `<div id="">` on capture
    muse-probe-round5b-r1-r5br1-p2 (page-content sha256
    2061a590abcadc604490830cf36c644802ef287f597b83cd98f5034bb4376101).
    Complementary to `cov_div_id_shell_live`, which pins the whitespace-only
    authored id `<div id="u-">` of R5R1-D1 and is deliberately unchanged. -/
theorem div_start_placeholder_id_cleared :
    renderDiv [("args".toList, OptVal.map
        [("id".toList, OptVal.bytes [0xFF, 48, 0xFF, 120, 0xFF, 49, 0xFF])]),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<div id=\"\">" := rfl

/-- `Div` `end`. -/
theorem div_end :
    renderDiv [("type".toList, OptVal.str "end".toList)] =
    litBytes "</div>" := rfl

/-- `Div` `start` with several attributes: the fragment
    follows the stored order, which the parse builds as
    live's emission order (id before class; REFCORR2
    correction C-STAGE2-1). -/
theorem div_start_id_class_order :
    renderDiv [("args".toList, OptVal.map
        [("id".toList, OptVal.str "u-b".toList),
         ("class".toList, OptVal.str "a".toList)]),
      ("type".toList, OptVal.str "start".toList)] =
    litBytes "<div id=\"u-b\" class=\"a\">" := rfl

/-- A `vanished`-flagged `Div` `start` emits nothing
    (REFCORR2 correction C-STAGE2-2). -/
theorem div_vanished_start :
    renderDiv [("args".toList, OptVal.map []),
      ("type".toList, OptVal.str "start".toList),
      ("vanished".toList, OptVal.bool true)] = [] := rfl

/-- A `vanished`-flagged `Div` `end` emits nothing
    (REFCORR2 correction C-STAGE2-2). -/
theorem div_vanished_end :
    renderDiv [("type".toList, OptVal.str "end".toList),
      ("vanished".toList, OptVal.bool true)] = [] := rfl

end LeanFtml
