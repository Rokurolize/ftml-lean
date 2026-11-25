/-
  LeanFtml.Proof.RenderBundles — Gate G5 instantiation (all 62/62 `RenderProofBundle`s
  over `renderMirrorEnv`, `renderRefSpec`, `ReachableTok` in `LeanFtml.RefRender`)
  plus Tier-2 driver composition (`renderWith_eq_ref`) and pure-rule environment
  irrelevance (`renderMirrorEnv_pure_env_irrelevant`).

  Every `RenderRuleId` constructor (Notes 6, Prose 12, InlineSimple 14, RawHeading 5,
  ListTable 4, Interactive 11, CodeEmbed 2, Serving 7, Html 1 = 62 total) receives an
  explicit `RenderProofBundle` instance proving `eq_ref` parametrically in `env : RenderEnv`.

  Token-table proof-strength note: `renderRefSpec` now has a trailing optional
  token-table lookup consumed only by `.footnoteitem` and `.gallery`. The 62
  bundles below remain the single-token/no-lookup equality instances: they do
  not claim that the deliberately unchanged `renderMirrorEnv` agrees with the
  token-aware spec under a nonempty lookup. The separate token-aware bridge
  theorems state exactly that shallower consistency claim. Residual Gallery
  limitations are the shallow (nonrecursive) `renderTokenId` fallback and
  reconstruction of `tokenSource` from parse-reachable token entries.

  Standing Tier-2 remainder (named cleanly, not claimed here):
  `RenderCore.ufffdWalk` pre-Tidy / `Stage2_TidyCore` composition.

  Axioms: `[propext, Classical.choice, Quot.sound]` only; no `sorry`, no `native_decide`,
  no `bv_decide`, no `ofReduceBool`.
-/
import LeanFtml.RefRender

namespace LeanFtml

/-! ## 1. Pure-rule environment irrelevance (53 rules) -/

/-- Whether a `RenderRuleId` is pure (reads no `RenderEnv` field).
    Exactly the 53 rules outside the 9 environment-sensitive rules
    (`.module`, `.module654`, `.freelink`, `.code`, `.math`, `.user`,
    `.image`, `.gallery`, `.file`). -/
def isPureRenderRule : RenderRuleId → Bool
  | .module | .module654 | .freelink | .code | .math
  | .user | .image | .gallery | .file => false
  | _ => true

/-- All 53 pure render rules are environment-independent across arbitrary `RenderEnv`. -/
theorem renderMirrorEnv_pure_env_irrelevant (e1 e2 : RenderEnv)
    (r : RenderRuleId) (hp : isPureRenderRule r = true)
    (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    renderMirrorEnv e1 r conf doc opts = renderMirrorEnv e2 r conf doc opts := by
  cases r <;> first | rfl | exact absurd hp (by decide)

/-! ## 2. All 62 `RenderProofBundle` instances over `renderMirrorEnv` / `renderRefSpec` -/

private theorem refEq_of_env_eq (r : RenderRuleId)
    (h : ∀ env conf doc opts,
      renderMirrorEnv env r conf doc opts = renderRefSpec env r conf doc opts) :
    RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok r :=
  ⟨fun env conf doc opts _ => h env conf doc opts⟩

private theorem lb_fn1 :
    litBytes "\" href=\"javascript:;\" class=\"footnoteref\"" ++
      litBytes " onclick=\"WIKIDOT.page.utils." =
    litBytes "\" href=\"javascript:;\" class=\"footnoteref\" onclick=\"WIKIDOT.page.utils." := by
  decide

private theorem lb_fni1 :
    litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" =
    litBytes "\"><a href=\"javascript:;\" onclick=\"WIKIDOT.page.utils.scrollToReference(" := by
  decide

private theorem lb_bib1 :
    litBytes "<span class=\"error-inline\">" ++ litBytes "Bibliography item <em>" =
    litBytes "<span class=\"error-inline\">Bibliography item <em>" := by
  decide

private theorem lb_bib2 :
    litBytes "<a href=\"javascript:;\" class=\"bibcite\" " ++ litBytes "id=\"bibcite-" =
    litBytes "<a href=\"javascript:;\" class=\"bibcite\" id=\"bibcite-" := by
  decide

private theorem lb_bib3 :
    litBytes "\" onclick=\"WIKIDOT.page.utils." ++ litBytes "scrollToReference('bibitem-" =
    litBytes "\" onclick=\"WIKIDOT.page.utils.scrollToReference('bibitem-" := by
  decide

-- Notes (6)
def bundle_footnote : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .footnote :=
  ⟨fun _ conf _ opts _ => by
    unfold renderMirrorEnv renderRefSpec dispatchRenderR41 renderFootnote refXhtmlFootnote
    dsimp only
    simp only [List.append_assoc, lb_fn1]⟩
def bundle_footnoteitem : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .footnoteitem :=
  ⟨fun _ conf doc opts _ => by
    unfold renderMirrorEnv renderRefSpec dispatchRenderR41 renderFootnoteitem refXhtmlFootnoteitem
    dsimp only
    simp only [List.append_assoc, lb_fni1]⟩

/-- Token-aware Footnoteitem bridge. Proof-strength note: this theorem says the
    reference spec and the existing token-aware mirror dispatch compute the same
    bytes for every lookup; because both sides share the mirrored footnote
    helpers, it is a consistency bridge, not independent evidence of PHP correctness. -/
theorem renderRefSpec_footnoteitem_tokenAware_eq
    (env : RenderEnv) (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (doc : DocState) (opts : OptMap) :
    renderRefSpec env .footnoteitem conf doc opts lookup =
      dispatchRenderR41TokenAware lookup .footnoteitem conf doc opts := by
  unfold renderRefSpec dispatchRenderR41TokenAware refXhtmlFootnoteitem renderFootnoteitem
  dsimp only
  simp only [List.append_assoc, lb_fni1]
def bundle_footnoteblock : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .footnoteblock :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_bibitem : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .bibitem :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_bibliography : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .bibliography :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_bibcite : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .bibcite :=
  ⟨fun _ conf doc opts _ => by
    unfold renderMirrorEnv renderRefSpec dispatchRenderR41 renderBibcite bibciteSuffix refXhtmlBibcite
    dsimp only
    simp only [List.append_assoc, lb_bib1, lb_bib2, lb_bib3]
    rfl⟩

-- Prose (12)
def bundle_paragraph : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .paragraph :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_newline : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .newline :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_break : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .break :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_center : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .center :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_horiz : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .horiz :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_separator : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .separator :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_clearfloat : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .clearfloat :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_blockquote : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .blockquote :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_note : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .note :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_divalign : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .divalign :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_comment : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .comment :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_delimiter : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .delimiter :=
  ⟨fun _ _ _ _ _ => rfl⟩

-- InlineSimple + Typography (14)
def bundle_url : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .url :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_email : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .email :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_mathinline : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .mathinline :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_interwiki : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .interwiki :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_colortext : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .colortext :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_strong : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .strong :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_emphasis : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .emphasis :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_underline : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .underline :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_strikethrough : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .strikethrough :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_tt : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .tt :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_superscript : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .superscript :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_subscript : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .subscript :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_typography : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .typography :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_tighten : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .tighten :=
  ⟨fun _ _ _ _ _ => rfl⟩

-- RawHeading (5)
def bundle_raw : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .raw :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_rawold : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .rawold :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_form : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .form :=
  ⟨fun _ _ _ _ _ => rfl⟩
private theorem lb_toc1 :
    litBytes "<table style=\"margin:0; padding:0\">" ++
      litBytes "<tr><td style=\"margin:0; padding:0\">" =
    litBytes "<table style=\"margin:0; padding:0\"><tr><td style=\"margin:0; padding:0\">" := by
  decide

private theorem lb_toc2 :
    litBytes ">" ++ litBytes "<div id=\"toc-action-bar\">" ++
      litBytes "<a href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a>" ++
      litBytes "<a style=\"display: none\" href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div>" ++
      litBytes "<div class=\"title\">" =
    litBytes "><div id=\"toc-action-bar\"><a href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.foldToc(event)\">Fold</a>" ++
      litBytes "<a style=\"display: none\" href=\"javascript:;\" " ++
      litBytes "onclick=\"WIKIDOT.page.listeners.unfoldToc(event)\">Unfold</a></div>" ++
      litBytes "<div class=\"title\">" := by
  decide

private theorem lb_toc3 :
    litBytes "<div" ++ litBytes " id=\"toc\"" = litBytes "<div id=\"toc\"" := by decide

private theorem lb_toc4 :
    litBytes "</div>" ++ litBytes "<div id=\"toc-list\">" =
    litBytes "</div><div id=\"toc-list\">" := by decide

private theorem lb_toc5 :
    litBytes "<div" ++ litBytes " style=\"margin-left: " =
    litBytes "<div style=\"margin-left: " := by decide

private theorem lb_toc6 :
    litBytes "em;\">" ++ litBytes "<a href=\"#" = litBytes "em;\"><a href=\"#" := by decide

def bundle_heading : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .heading :=
  ⟨fun _ _ _ opts _ => by
    unfold renderMirrorEnv renderRefSpec dispatchRenderR41 renderHeading refXhtmlHeading rhTypeIs
    dsimp only
    cases hcol : omGet opts "collapse".toList with
    | none => simp [hcol]
    | some v => cases v with
      | bool b => cases b <;> simp [hcol]
      | _ => simp [hcol]⟩
def bundle_toc : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .toc :=
  ⟨fun _ _ _ opts _ => by
    unfold renderMirrorEnv renderRefSpec dispatchRenderR41 renderToc refXhtmlToc rhTypeIs rhTruthy
    dsimp only
    simp only [List.append_assoc, lb_toc1, lb_toc2, lb_toc3, lb_toc4, lb_toc5, lb_toc6]
    rfl⟩

-- ListTable (4)
def bundle_list : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .list :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_deflist : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .deflist :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_table : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .table :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_tableadv : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .tableadv :=
  ⟨fun _ _ _ _ _ => rfl⟩

-- Interactive + File/Size/Span/Div + Html (12)
def bundle_equationreference : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .equationreference :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_anchor : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .anchor :=
  ⟨fun _ _ _ _ _ => rfl⟩
private theorem lb_col1 :
    litBytes "<a class=\"collapsible-block-link\" " ++ litBytes "href=\"javascript:;\">" =
    litBytes "<a class=\"collapsible-block-link\" href=\"javascript:;\">" := by decide

private theorem lb_col2 :
    litBytes "<div class=\"collapsible-block\">" ++
      litBytes "<div class=\"collapsible-block-folded\"" =
    litBytes "<div class=\"collapsible-block\"><div class=\"collapsible-block-folded\"" := by
  decide

private theorem lb_col3 :
    litBytes "</div>" ++ litBytes "<div class=\"collapsible-block-unfolded\"" =
    litBytes "</div><div class=\"collapsible-block-unfolded\"" := by decide

private theorem lb_btn1 :
    litBytes "<div class=\"error-block\">" ++
      litBytes "You need to set text for set-tags button.</div>" =
    litBytes "<div class=\"error-block\">You need to set text for set-tags button.</div>" := by
  decide

private theorem lb_btn2 :
    litBytes "href=\"javascript:;\" " ++ litBytes "onclick=\"" =
    litBytes "href=\"javascript:;\" onclick=\"" := by decide

private theorem lb_btn3 :
    litBytes "\" " ++ litBytes ">" = litBytes "\" >" := by decide

private theorem lb_mod1 :
    litBytes "<a href=\"https://www.wikidot.com/doc:modules\" " ++
      (litBytes "target=\"_blank\">check available modules</a> " ++
        litBytes "and fix this page.</div>") =
    litBytes "<a href=\"https://www.wikidot.com/doc:modules\" target=\"_blank\">" ++
      litBytes "check available modules</a> and fix this page.</div>" := by decide

def bundle_collapsible : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .collapsible :=
  ⟨fun _ _ _ opts _ => by
    unfold renderMirrorEnv renderRefSpec dispatchRenderR41 renderCollapsible refXhtmlCollapsible intTypeIs
    dsimp only
    simp only [List.append_assoc, lb_col1, lb_col2, lb_col3]
    rfl⟩
def bundle_tabview : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .tabview :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_button : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .button :=
  ⟨fun _ _ _ opts _ => by
    unfold renderMirrorEnv renderRefSpec dispatchRenderR41 renderButton refXhtmlButton
    dsimp only
    simp only [List.append_assoc, lb_btn1, lb_btn2, lb_btn3]⟩
def bundle_iframe : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .iframe :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_date : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .date :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_file : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .file :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_size : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .size :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_span : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .span :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_div : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .div :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_html : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .html :=
  ⟨fun _ _ _ opts _ => by
    dsimp only [renderMirrorEnv, renderRefSpec, dispatchRenderR41, renderHtml, refXhtmlHtml]
    rfl⟩

-- CodeEmbed (2)
def bundle_code : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .code :=
  ⟨fun _ _ _ _ _ => rfl⟩
def bundle_embed : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .embed :=
  ⟨fun _ _ _ _ _ => rfl⟩

-- Serving (7)
def bundle_freelink : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .freelink :=
  ⟨fun env _ _ opts _ => by
    unfold renderMirrorEnv renderRefSpec renderFreelinkWithEnv refXhtmlFreelink
    dsimp only
    split
    · rfl
    · split
      · simp [litBytes]
      · rfl⟩
def bundle_module : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .module :=
  ⟨fun env _ _ opts _ => by
    unfold renderMirrorEnv renderRefSpec renderModuleWithEnv refXhtmlModule
    dsimp only
    simp only [List.append_assoc, lb_mod1]⟩
def bundle_module654 : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .module654 :=
  ⟨fun env _ _ opts _ => by
    unfold renderMirrorEnv renderRefSpec renderModuleWithEnv refXhtmlModule
    dsimp only
    simp only [List.append_assoc, lb_mod1]⟩
def bundle_math : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .math :=
  ⟨fun env _ _ opts _ => by
    unfold renderMirrorEnv renderRefSpec renderMathWithEnv refXhtmlMath
    dsimp only
    simp only [List.append_assoc]
    rfl⟩
def bundle_image : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .image :=
  ⟨fun _ _ _ _ _ => rfl⟩
/- The Gallery bundle below is the single-token/no-lookup equality. Under the
   default `lookup := fun _ => none`, `galleryItemText` never consults its token
   renderer, so the mirror's no-context renderer and the spec's parse-reachable
   renderer are extensionally equal; this needs a proof because the two functions
   are not definitionally equal. The token-aware claim is carried by the separate
   `renderRefSpec_harness_gallery_tokenAware_eq` bridge, not by this bundle. -/
private theorem galleryItemText_noLookup_go (r1 r2 : TokenEntry → List Nat)
    (s : List Nat) (n : Nat) :
    galleryItemText.go r1 (fun _ => none) s n = galleryItemText.go r2 (fun _ => none) s n := by
  induction n generalizing s with
  | zero =>
      cases s with
      | nil => rw [galleryItemText.go.eq_1, galleryItemText.go.eq_1]
      | cons b rest =>
          rw [galleryItemText.go.eq_2 r1 (fun _ => none) (b :: rest) (by simp),
              galleryItemText.go.eq_2 r2 (fun _ => none) (b :: rest) (by simp)]
  | succ n ih =>
      cases s with
      | nil => rw [galleryItemText.go.eq_1, galleryItemText.go.eq_1]
      | cons b rest =>
          rw [galleryItemText.go.eq_3, galleryItemText.go.eq_3]
          split <;> rename_i h
          · simp only [galleryItemText.resolveId, List.nil_append]
            exact ih _
          · exact congrArg (fun t => b :: t) (ih rest)

private theorem galleryItemText_noLookup_canonical (r : TokenEntry → List Nat) (v : List Nat) :
    galleryItemText r (fun _ => none) v = galleryItemText (fun _ => []) (fun _ => none) v := by
  unfold galleryItemText
  split
  · rfl
  · rename_i h
    exact galleryItemText_noLookup_go r (fun _ => []) v (v.length + 1)

private theorem galleryRowStepEnv_noLookup_canonical (env : RenderEnv) (size : List Nat)
    (st : List Nat × List Nat × List Nat) (row : List Nat) (r : TokenEntry → List Nat) :
    galleryRowStepEnv env size st row (fun _ => []) (fun _ => none) =
      galleryRowStepEnv env size st row r (fun _ => none) := by
  simp [galleryRowStepEnv, galleryRowStep, galleryItemText_noLookup_canonical]

private theorem galleryBundle_equiv (env : RenderEnv) (conf : RenderConf)
    (doc : DocState) (opts : OptMap) :
    renderMirrorEnv env .gallery conf doc opts = renderRefSpec env .gallery conf doc opts := by
  unfold renderMirrorEnv renderRefSpec refXhtmlGallery renderGalleryWithEnv
  dsimp only
  cases hsrc : phpTruthyBytes (optStrBytes opts "sources".toList) with
  | false => simp only [Bool.false_eq_true, ↓reduceIte]
  | true =>
      simp only [↓reduceIte]
      apply congrArg (fun p : List Nat × List Nat × List Nat => p.2.2 ++ litBytes "</div>")
      have hf : (fun st row => galleryRowStepEnv env (gallerySize (optStrBytes opts "size".toList)) st row
            (fun _ => []) (fun _ => none)) =
          (fun st row => galleryRowStepEnv env (gallerySize (optStrBytes opts "size".toList)) st row
            (fun e => match renderRuleOfName e.rule with
              | some rid => dispatchRenderR41 rid conf doc e.opts
              | none => []) (fun _ => none)) := by
        funext st row
        exact galleryRowStepEnv_noLookup_canonical env (gallerySize (optStrBytes opts "size".toList)) st row _
      rw [hf]
      rfl

def bundle_gallery : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .gallery :=
  refEq_of_env_eq .gallery galleryBundle_equiv
def bundle_user : RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok .user :=
  ⟨fun _ _ _ _ _ => rfl⟩

/-- Unified `RenderProofBundle` family covering all 62 constructors of `RenderRuleId` (Gate G5). -/
def renderBundleAll (r : RenderRuleId) :
    RenderProofBundle renderMirrorEnv renderRefSpec ReachableTok r :=
  match r with
  | .footnote => bundle_footnote
  | .footnoteitem => bundle_footnoteitem
  | .footnoteblock => bundle_footnoteblock
  | .bibitem => bundle_bibitem
  | .bibliography => bundle_bibliography
  | .bibcite => bundle_bibcite
  | .paragraph => bundle_paragraph
  | .newline => bundle_newline
  | .break => bundle_break
  | .center => bundle_center
  | .horiz => bundle_horiz
  | .separator => bundle_separator
  | .clearfloat => bundle_clearfloat
  | .blockquote => bundle_blockquote
  | .note => bundle_note
  | .divalign => bundle_divalign
  | .comment => bundle_comment
  | .delimiter => bundle_delimiter
  | .url => bundle_url
  | .email => bundle_email
  | .mathinline => bundle_mathinline
  | .interwiki => bundle_interwiki
  | .colortext => bundle_colortext
  | .strong => bundle_strong
  | .emphasis => bundle_emphasis
  | .underline => bundle_underline
  | .strikethrough => bundle_strikethrough
  | .tt => bundle_tt
  | .superscript => bundle_superscript
  | .subscript => bundle_subscript
  | .typography => bundle_typography
  | .tighten => bundle_tighten
  | .raw => bundle_raw
  | .rawold => bundle_rawold
  | .form => bundle_form
  | .heading => bundle_heading
  | .toc => bundle_toc
  | .list => bundle_list
  | .deflist => bundle_deflist
  | .table => bundle_table
  | .tableadv => bundle_tableadv
  | .equationreference => bundle_equationreference
  | .anchor => bundle_anchor
  | .collapsible => bundle_collapsible
  | .tabview => bundle_tabview
  | .button => bundle_button
  | .iframe => bundle_iframe
  | .date => bundle_date
  | .file => bundle_file
  | .size => bundle_size
  | .span => bundle_span
  | .div => bundle_div
  | .code => bundle_code
  | .embed => bundle_embed
  | .freelink => bundle_freelink
  | .module => bundle_module
  | .module654 => bundle_module654
  | .math => bundle_math
  | .image => bundle_image
  | .gallery => bundle_gallery
  | .user => bundle_user
  | .html => bundle_html

/-! ## 3. Tier-2 render driver composition (`renderWith_eq_ref`) -/

private theorem renderSegsLoop_ext
    (d1 d2 : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry) (conf : RenderConf) (doc : DocState)
    (h : ∀ k e r, lookup k = some e → renderRuleOfName e.rule = some r →
      d1 r conf doc e.opts = d2 r conf doc e.opts)
    (work : List TSeg) :
    renderSegsLoop d1 lookup conf doc work =
      renderSegsLoop d2 lookup conf doc work := by
  induction work with
  | nil => rfl
  | cons seg rest ih =>
      dsimp only [renderSegsLoop]
      rw [ih]
      cases seg with
      | text cs => rfl
      | tok k =>
          dsimp only
          cases hl : lookup k with
          | none => simp only [hl]
          | some e =>
              simp only [hl]
              cases hr : renderRuleOfName e.rule with
              | none => simp only [hr]
              | some rid => simp only [hr, h k e rid hl hr]

private def AtomOk (lookup : Nat → Option TokenEntry) : UfffdAtom → Prop
  | .tok k e => e = lookup k
  | _ => True

private theorem atomOk_skipFakes (lookup : Nat → Option TokenEntry) (atoms : List UfffdAtom)
    (hall : ∀ a ∈ atoms, AtomOk lookup a) :
    ∀ a ∈ skipFakes atoms, AtomOk lookup a := by
  induction atoms with
  | nil => intro a ha; cases ha
  | cons hd tl ih =>
      cases hd with
      | fake =>
          exact ih (fun a ha => hall a (List.mem_cons_of_mem _ ha))
      | text _ => exact hall
      | tok _ _ => exact hall

private theorem atomOk_gatherUfffd (lookup : Nat → Option TokenEntry) (atoms : List UfffdAtom)
    (hall : ∀ a ∈ atoms, AtomOk lookup a) :
    ∀ a ∈ (gatherUfffd atoms).2.2, AtomOk lookup a := by
  induction atoms with
  | nil => intro a ha; cases ha
  | cons hd tl ih =>
      cases hd with
      | tok k e => exact hall
      | text cs =>
          exact ih (fun a ha => hall a (List.mem_cons_of_mem _ ha))
      | fake =>
          dsimp only [gatherUfffd]
          split
          · exact hall
          · exact ih (fun a ha => hall a (List.mem_cons_of_mem _ ha))

private theorem atomOk_takeInline (lookup : Nat → Option TokenEntry) (rule : String)
    (atoms : List UfffdAtom) (hall : ∀ a ∈ atoms, AtomOk lookup a)
    {inner k e rest'} (ht : takeInline rule atoms = some (inner, k, e, rest')) :
    ∀ a ∈ rest', AtomOk lookup a := by
  induction atoms generalizing inner k e rest' with
  | nil => simp [takeInline] at ht
  | cons hd tl ih =>
      cases hd with
      | fake => simp [takeInline] at ht
      | text cs =>
          dsimp only [takeInline] at ht
          cases hrec : takeInline rule tl with
          | none => simp [hrec] at ht
          | some p =>
              obtain ⟨i1, k1, e1, r1⟩ := p
              simp only [hrec, Option.some.injEq, Prod.mk.injEq] at ht
              rcases ht with ⟨_, _, _, rfl⟩
              exact ih (fun a ha => hall a (List.mem_cons_of_mem _ ha)) hrec
      | tok k0 e0 =>
          dsimp only [takeInline] at ht
          cases hu : ufffdTokInfo e0 with
          | none => simp [hu] at ht
          | some p =>
              simp only [hu] at ht
              split at ht
              · simp only [Option.some.injEq, Prod.mk.injEq] at ht
                rcases ht with ⟨_, _, _, rfl⟩
                intro a ha
                exact hall a (List.mem_cons_of_mem _ ha)
              · simp at ht

private theorem atomOk_ufffdLeakRun (lookup : Nat → Option TokenEntry) (atoms : List UfffdAtom)
    (hall : ∀ a ∈ atoms, AtomOk lookup a) :
    ∀ a ∈ (ufffdLeakRun atoms).2, AtomOk lookup a := by
  induction atoms with
  | nil => intro a ha; cases ha
  | cons hd tl ih =>
      cases hd with
      | tok k e =>
          exact ih (fun a ha => hall a (List.mem_cons_of_mem _ ha))
      | text _ => exact hall
      | fake => exact hall

private theorem atomOk_explodeUfffd_go (lookup : Nat → Option TokenEntry)
    (cs acc : List Char) :
    ∀ a ∈ explodeUfffd.go cs acc, AtomOk lookup a := by
  induction cs generalizing acc with
  | nil =>
      intro a ha
      dsimp only [explodeUfffd.go] at ha
      split at ha
      · cases ha
      · simp only [List.mem_singleton] at ha; subst ha; trivial
  | cons c rest ih =>
      intro a ha
      dsimp only [explodeUfffd.go] at ha
      split at ha
      · simp only [List.mem_append, List.mem_cons] at ha
        rcases ha with h1 | rfl | h2
        · split at h1
          · cases h1
          · simp only [List.mem_singleton] at h1; subst h1; trivial
        · trivial
        · exact ih [] a h2
      · exact ih (c :: acc) a ha

private theorem atomOk_flattenUfffd (lookup : Nat → Option TokenEntry) (work : List TSeg) :
    ∀ a ∈ flattenUfffd lookup work, AtomOk lookup a := by
  induction work with
  | nil => intro a ha; cases ha
  | cons seg rest ih =>
      intro a ha
      cases seg with
      | tok k =>
          simp only [flattenUfffd, List.mem_cons] at ha
          rcases ha with rfl | h2
          · rfl
          · exact ih a h2
      | text cs =>
          simp only [flattenUfffd, List.mem_append] at ha
          rcases ha with h1 | h2
          · exact atomOk_explodeUfffd_go lookup cs [] a h1
          · exact ih a h2

private theorem renderCaptured_ext
    (d1 d2 : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry) (conf : RenderConf) (doc : DocState)
    (h : ∀ k e r, lookup k = some e → renderRuleOfName e.rule = some r →
      d1 r conf doc e.opts = d2 r conf doc e.opts)
    (k : Nat) :
    renderCaptured d1 conf doc k (lookup k) =
      renderCaptured d2 conf doc k (lookup k) := by
  dsimp only [renderCaptured]
  cases hl : lookup k with
  | none => rfl
  | some e =>
      dsimp only
      cases hr : renderRuleOfName e.rule with
      | none => rfl
      | some rid =>
          dsimp only
          exact h k e rid hl hr

private theorem ufffdWalk_ext
    (d1 d2 : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry) (conf : RenderConf) (doc : DocState)
    (h : ∀ k e r, lookup k = some e → renderRuleOfName e.rule = some r →
      d1 r conf doc e.opts = d2 r conf doc e.opts) :
    ∀ (fuel : Nat) (atoms : List UfffdAtom) (edge : Bool)
      (owe : Option (Nat × Option TokenEntry)) (acc : List Nat),
      (∀ a ∈ atoms, AtomOk lookup a) →
      (∀ hk he, owe = some (hk, he) → he = lookup hk) →
      ufffdWalk d1 conf doc fuel atoms edge owe acc =
        ufffdWalk d2 conf doc fuel atoms edge owe acc := by
  intro fuel
  induction fuel with
  | zero => intro _ _ _ _ _ _; rfl
  | succ fuel ih =>
      intro atoms edge owe acc hall howe
      cases atoms with
      | nil =>
          dsimp only [ufffdWalk]
          cases owe with
          | none => rfl
          | some p =>
              obtain ⟨hk, he⟩ := p
              have heq := howe hk he rfl
              subst heq
              simp [renderCaptured_ext d1 d2 lookup conf doc h hk]
      | cons a rest =>
          cases a with
          | text cs =>
              dsimp only [ufffdWalk]
              exact ih (gatherUfffd (.text cs :: rest)).2.2 false owe _
                (atomOk_gatherUfffd lookup _ hall) howe
          | fake =>
              dsimp only [ufffdWalk]
              have hskip := atomOk_skipFakes lookup (.fake :: rest) hall
              cases hsk : skipFakes (.fake :: rest) with
              | nil =>
                  dsimp only
                  exact ih rest edge owe acc
                    (fun x hx => hall x (List.mem_cons_of_mem _ hx)) howe
              | cons a2 rest2 =>
                  cases a2 with
                  | tok k e =>
                      dsimp only
                      have he : e = lookup k := hskip (.tok k e) (by rw [hsk]; exact List.mem_cons_self)
                      have hrest2 : ∀ x ∈ rest2, AtomOk lookup x :=
                        fun x hx => hskip x (by rw [hsk]; exact List.mem_cons_of_mem _ hx)
                      cases hinfo : ufffdTokInfo e with
                      | none =>
                          dsimp only
                          exact ih rest edge owe acc
                            (fun x hx => hall x (List.mem_cons_of_mem _ hx)) howe
                      | some info =>
                          dsimp only
                          by_cases hbe : ufffdIsBlockEnd info
                          · simp only [hbe, ↓reduceIte]
                            cases rest2 with
                            | nil =>
                                dsimp only
                                subst he
                                simp only [renderCaptured_ext d1 d2 lookup conf doc h k]
                                exact ih [] false owe _ (fun _ hm => by cases hm) howe
                            | cons b2 rest3 =>
                                cases b2 with
                                | tok k2 e2 =>
                                    dsimp only
                                    have hrest3 : ∀ x ∈ rest3, AtomOk lookup x :=
                                      fun x hx => hrest2 x (List.mem_cons_of_mem _ hx)
                                    cases hinfo2 : ufffdTokInfo e2 with
                                    | none =>
                                        dsimp only
                                        subst he
                                        simp only [renderCaptured_ext d1 d2 lookup conf doc h k]
                                        exact ih (.tok k2 e2 :: rest3) false owe _ hrest2 howe
                                    | some info2 =>
                                        dsimp only
                                        by_cases hbs : ufffdIsBlockStart info2
                                        · simp only [hbs, ↓reduceIte]
                                          have hleak := atomOk_ufffdLeakRun lookup rest3 hrest3
                                          have howe' : ∀ hk he',
                                              (if ufffdIsHeadingEnd info && ufffdIsParaStart info2
                                               then some (k, e) else owe) = some (hk, he') →
                                              he' = lookup hk := by
                                            intro hk he' hp
                                            split at hp
                                            · simp only [Option.some.injEq, Prod.mk.injEq] at hp
                                              rcases hp with ⟨rfl, rfl⟩
                                              exact he
                                            · exact howe hk he' hp
                                          by_cases hnone : (if ufffdIsHeadingEnd info && ufffdIsParaStart info2 then some (k, e) else owe).isNone
                                          · simp only [hnone, ↓reduceIte]
                                            exact ih (ufffdLeakRun rest3).2 false _ _ hleak howe'
                                          · simp only [hnone, Bool.false_eq_true, ↓reduceIte]
                                            exact ih rest3 false _ _ hrest3 howe'
                                        · simp only [hbs, Bool.false_eq_true, ↓reduceIte]
                                          subst he
                                          simp only [renderCaptured_ext d1 d2 lookup conf doc h k]
                                          exact ih (.tok k2 e2 :: rest3) false owe _ hrest2 howe
                                | _ =>
                                    dsimp only
                                    subst he
                                    simp only [renderCaptured_ext d1 d2 lookup conf doc h k]
                                    exact ih (_ :: rest3) false owe _ hrest2 howe
                          · simp only [hbe, Bool.false_eq_true, ↓reduceIte]
                            by_cases his : ufffdIsInlineStart info
                            · simp only [his, ↓reduceIte]
                              cases hti : takeInline info.1 rest2 with
                              | none =>
                                  dsimp only
                                  exact ih rest edge owe acc
                                    (fun x hx => hall x (List.mem_cons_of_mem _ hx)) howe
                              | some q =>
                                  obtain ⟨inner, endK, endE, rest3⟩ := q
                                  dsimp only
                                  have hrest3 : ∀ x ∈ rest3, AtomOk lookup x :=
                                    atomOk_takeInline lookup info.1 rest2 hrest2 hti
                                  exact ih rest3 false owe _ hrest3 howe
                            · simp only [his, Bool.false_eq_true, ↓reduceIte]
                              exact ih rest edge owe acc
                                (fun x hx => hall x (List.mem_cons_of_mem _ hx)) howe
                  | _ =>
                      dsimp only
                      exact ih rest edge owe acc
                        (fun x hx => hall x (List.mem_cons_of_mem _ hx)) howe
          | tok k e =>
              have he : e = lookup k := hall (.tok k e) List.mem_cons_self
              have hrest : ∀ x ∈ rest, AtomOk lookup x :=
                fun x hx => hall x (List.mem_cons_of_mem _ hx)
              dsimp only [ufffdWalk]
              cases owe with
              | none =>
                  subst he
                  simp only [renderCaptured_ext d1 d2 lookup conf doc h k]
                  exact ih rest _ none _ hrest (fun _ _ hp => by cases hp)
              | some p =>
                  obtain ⟨hk, he'⟩ := p
                  have howe_p := howe hk he' rfl
                  cases hinfo : ufffdTokInfo e with
                  | none =>
                      dsimp only
                      subst he
                      simp only [renderCaptured_ext d1 d2 lookup conf doc h k]
                      exact ih rest false (some (hk, he')) _ hrest howe
                  | some info =>
                      dsimp only
                      by_cases hpe : ufffdIsParaEnd info
                      · simp only [hpe, ↓reduceIte]
                        subst howe_p
                        simp only [renderCaptured_ext d1 d2 lookup conf doc h hk]
                        exact ih rest false none _ hrest (fun _ _ hp => by cases hp)
                      · simp only [hpe, Bool.false_eq_true, ↓reduceIte]
                        subst he
                        simp only [renderCaptured_ext d1 d2 lookup conf doc h k]
                        exact ih rest _ (some (hk, he')) _ hrest howe

theorem renderWith_ext
    (d1 d2 : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState)
    (h : ∀ k e r, lookup k = some e → renderRuleOfName e.rule = some r →
      d1 r conf doc e.opts = d2 r conf doc e.opts) :
    renderWith d1 lookup conf work doc = renderWith d2 lookup conf work doc := by
  dsimp only [renderWith]
  have hseg := renderSegsLoop_ext d1 d2 lookup conf doc h work
  split
  · rw [hseg]
    congr 1
    congr 1
    dsimp only [ufffdBytes]
    split
    · rfl
    · exact ufffdWalk_ext d1 d2 lookup conf doc h _ _ false none []
        (atomOk_flattenUfffd lookup work) (fun _ _ hp => by cases hp)
  · rw [hseg]

/-- **Tier-2 Render Composition (`renderWith_eq_ref`)**: when every token in `lookup`
    satisfies `ReachableTok`, rendering with `renderMirrorEnv env` coincides with
    rendering with `renderRefSpec env` on both the regular and U+FFFD recovery paths. -/
theorem renderWith_eq_ref (env : RenderEnv)
    (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState)
    (hreach : ∀ k e r, lookup k = some e → renderRuleOfName e.rule = some r →
      ReachableTok r e.opts doc) :
    renderWith (renderMirrorEnv env) lookup conf work doc =
      renderWith (renderRefSpec env) lookup conf work doc := by
  apply renderWith_ext
  intro k e r hl hr
  exact (renderBundleAll r).eq_ref env conf doc e.opts (hreach k e r hl hr)

end LeanFtml
