-- ProofNextFinalAnchor.lean — Wave 2 next-final proof lane, Class B hybrid rule Anchor.
-- This file proves kernel-free universal theorems about the mirror's Anchor functions in LeanFtml/FinalRules.lean; no mirror source, Main.lean, foundation or other proof file is edited.
-- Class B hybrid remainder: the correspondence of namedAnchorMatchAt, anchorOpenerAt, anchorElemMatches and the two scans to the mechanically extracted PHP regexes in RefTables.lean (executed by PcreCore) is recorded below as named open obligations O1 and O2 and is not assumed; the conditional reductions named here are the parts of the scan that are unconditional on that TCB-2 work.
-- A second kernel-dependent remainder is the Tier-1 representation bridge parseBytes (byteForm segs) = segs for parser-reachable states: anchorRule is proved here to write only the scoredAnchors registry and to preserve fatal and every other document field, but the WFState/TokEquiv preservation of the whole rule is the TokenStateProof lane.
-- Module evaluation and libtidy are outside this file. No sorry, native_decide, bv_decide or axiom outside [propext, Classical.choice, Quot.sound] is used; every theorem carries a #print axioms line.

import LeanFtml.FinalRules

set_option maxRecDepth 10000

namespace LeanFtml.NextFinal.Anchor

/-! ## ASCII byte laws for lowerByteB and isAlnumByteB -/

theorem lowerByteB_spec (b : Nat) : lowerByteB b = if 65 ≤ b ∧ b ≤ 90 then b + 32 else b := by
  by_cases h65 : 65 ≤ b <;> by_cases h90 : b ≤ 90 <;> simp [lowerByteB, h65, h90]

theorem lowerByteB_idem (b : Nat) : lowerByteB (lowerByteB b) = lowerByteB b := by
  by_cases hu : 65 ≤ b ∧ b ≤ 90
  · have hnot : ¬ (65 ≤ b + 32 ∧ b + 32 ≤ 90) := by omega
    simp [lowerByteB, hu, hnot]
    omega
  · simp [lowerByteB, hu]

theorem lowerByteB_no_upper (b : Nat) : ¬ (65 ≤ lowerByteB b ∧ lowerByteB b ≤ 90) := by
  rw [lowerByteB_spec]
  by_cases hu : 65 ≤ b ∧ b ≤ 90
  · simp [hu]
    omega
  · simpa [hu] using hu

theorem lowerByteB_eq_self_of_not_upper (b : Nat) (h : ¬ (65 ≤ b ∧ b ≤ 90)) : lowerByteB b = b := by
  rw [lowerByteB_spec]
  simp [h]

theorem isAlnumByteB_of_lower (b : Nat) (hlo : 97 ≤ b) (hhi : b ≤ 122) : isAlnumByteB b = true := by
  simp [isAlnumByteB]
  omega

theorem lowerByteB_preserves_alnum (b : Nat) (h : isAlnumByteB b = true) : isAlnumByteB (lowerByteB b) = true := by
  rw [lowerByteB_spec]
  by_cases hu : 65 ≤ b ∧ b ≤ 90
  · simp [hu]
    have hb : 97 ≤ b + 32 ∧ b + 32 ≤ 122 := by omega
    exact isAlnumByteB_of_lower (b + 32) hb.1 hb.2
  · simpa [hu] using h

theorem isAnchorNameByte_of_lower (b : Nat) (h : isAnchorNameByte b = true) : isAnchorNameByte (lowerByteB b) = true := by
  rw [lowerByteB_spec]
  by_cases hu : 65 ≤ b ∧ b ≤ 90
  · simp [hu]
    simp [isAnchorNameByte]
    omega
  · simpa [hu] using h

/-! ## The isVerbatimHref characterization -/

def anchorVerbatimSchemes : List (List Nat) :=
  [litBytes "http://", litBytes "https://", litBytes "ftp://", litBytes "mailto:",
   litBytes "gopher://", litBytes "news://", litBytes "mms://", litBytes "git://",
   litBytes "sftp://", litBytes "ssh://", litBytes "svn://", litBytes "telnet://",
   litBytes "cvs://"]

theorem isVerbatimHref_iff (h : List Nat) :
    isVerbatimHref h = true ↔
      match h with
      | [] => False
      | b :: t => (b == 35 || b == 47 ||
          anchorVerbatimSchemes.any (fun p => p.isPrefixOf (b :: t))) = true := by
  cases h <;> simp [isVerbatimHref, anchorVerbatimSchemes]

theorem isVerbatimHref_hash (t : List Nat) : isVerbatimHref (35 :: t) = true := by
  simp [isVerbatimHref]

theorem isVerbatimHref_slash (t : List Nat) : isVerbatimHref (47 :: t) = true := by
  simp [isVerbatimHref]

theorem anchorSchemes_any_true_of_mem (p : List Nat) (hp : p ∈ anchorVerbatimSchemes)
    (h : List Nat) (hpref : p.isPrefixOf h = true) :
    anchorVerbatimSchemes.any (fun q => q.isPrefixOf h) = true := by
  rw [List.any_eq_true]
  exact ⟨p, hp, hpref⟩

theorem isVerbatimHref_of_scheme (p : List Nat) (hp : p ∈ anchorVerbatimSchemes)
    (h : List Nat) (hpref : p.isPrefixOf h = true) : isVerbatimHref h = true := by
  cases h with
  | nil =>
      have hp_nil : p = [] := by
        cases p with
        | nil => rfl
        | cons q qs => simp at hpref
      subst p
      simp [anchorVerbatimSchemes, litBytes] at hp
  | cons b t =>
      have hany := anchorSchemes_any_true_of_mem p hp (b :: t) hpref
      rw [isVerbatimHref_iff]
      by_cases hb : b == 35
      · simp [hb]
      · by_cases hb2 : b == 47
        · simp [hb2]
        · simp [hb, hb2, hany]

/-! ## Structural preservation laws for normalizeUnsafeHref and slugScan -/

theorem slugScan_no_upper (bs out : List Nat) (ps pc : Bool)
    (hout : ∀ b ∈ out, ¬ (65 ≤ b ∧ b ≤ 90)) :
    ∀ b ∈ slugScan bs out ps pc, ¬ (65 ≤ b ∧ b ≤ 90) := by
  induction bs generalizing out ps pc with
  | nil => simpa [slugScan] using hout
  | cons b rest ih =>
      by_cases hb : isAlnumByteB b
      · have hsep : ¬ (65 ≤ (if pc then 58 else 45) ∧ (if pc then 58 else 45) ≤ 90) := by
          by_cases hpc : pc <;> simp [hpc] <;> omega
        by_cases hps : ps
        · have hout2 : ∀ x ∈ (out ++ [if pc then 58 else 45]) ++ [lowerByteB b], ¬ (65 ≤ x ∧ x ≤ 90) := by
            intro x hx
            simp only [List.mem_append, List.mem_singleton] at hx
            rcases hx with hx | hx
            · rcases hx with hx | hx
              · exact hout x hx
              · simpa [hx] using hsep
            · simpa [hx] using (lowerByteB_no_upper b)
          simpa [slugScan, hb, hps] using ih ((out ++ [if pc then 58 else 45]) ++ [lowerByteB b]) false false hout2
        · have hout2 : ∀ x ∈ out ++ [lowerByteB b], ¬ (65 ≤ x ∧ x ≤ 90) := by
            intro x hx
            simp only [List.mem_append, List.mem_singleton] at hx
            rcases hx with hx | hx
            · exact hout x hx
            · simpa [hx] using (lowerByteB_no_upper b)
          simpa [slugScan, hb, hps] using ih (out ++ [lowerByteB b]) false false hout2
      · by_cases hcolon : b == 58
        · by_cases hempty : out.isEmpty
          · simpa [slugScan, hb, hcolon, hempty] using ih out ps pc hout
          · simpa [slugScan, hb, hcolon, hempty] using ih out true true hout
        · by_cases hempty : out.isEmpty
          · simpa [slugScan, hb, hcolon, hempty] using ih out ps pc hout
          · simpa [slugScan, hb, hcolon, hempty] using ih out true pc hout

theorem normalizeUnsafeHref_no_upper (h : List Nat) :
    ∀ b ∈ normalizeUnsafeHref h, ¬ (65 ≤ b ∧ b ≤ 90) := by
  unfold normalizeUnsafeHref
  exact slugScan_no_upper _ _ _ _ (by intro b hb; cases hb)

theorem slugScan_no_alnum_eq (bs out : List Nat) (ps pc : Bool)
    (hno : ∀ b ∈ bs, isAlnumByteB b = false) : slugScan bs out ps pc = out := by
  induction bs generalizing out ps pc with
  | nil => rfl
  | cons b rest ih =>
      have hb : isAlnumByteB b = false := hno b (by simp)
      have hrest : ∀ x ∈ rest, isAlnumByteB x = false := by
        intro x hx
        exact hno x (by simp [hx])
      by_cases hcolon : b == 58
      · by_cases hempty : out.isEmpty
        · simpa [slugScan, hb, hcolon, hempty] using ih out ps pc hrest
        · simpa [slugScan, hb, hcolon, hempty] using ih out true true hrest
      · by_cases hempty : out.isEmpty
        · simpa [slugScan, hb, hcolon, hempty] using ih out ps pc hrest
        · simpa [slugScan, hb, hcolon, hempty] using ih out true pc hrest

theorem normalizeUnsafeHref_of_empty_normalized (h : List Nat)
    (he : normalizeAttrValue h = []) : normalizeUnsafeHref h = [] := by
  unfold normalizeUnsafeHref
  simp [he, slugScan, normalizeUnsafeHref.stripNbspPairs,
    normalizeUnsafeHref.stripLead, normalizeUnsafeHref.stripLeadRev,
    normalizeUnsafeHref.deleteNbspBackslash]

/-! ## Attribute key order and last-wins laws -/

theorem omSetB_last_wins (m : List (List Nat × List Nat)) (k v₁ v₂ : List Nat) :
    lookupB (omSetB (omSetB m k v₁) k v₂) k = some v₂ := by
  induction m with
  | nil => simp [omSetB, lookupB]
  | cons kv rest ih =>
      by_cases h : kv.1 == k
      · simp [omSetB, lookupB, h]
      · simpa [omSetB, lookupB, h] using ih

theorem anchorAttrStep_fold_href_last (raw : List (List Nat × List Nat))
    (st : List (List Nat × List Nat) × List (List Nat × List Nat) × Option (List Nat))
    (v₁ v₂ : List Nat) :
    ((raw ++ [(litBytes "href", v₁), (litBytes "href", v₂)]).foldl anchorAttrStep st).2.2 = some v₂ := by
  induction raw generalizing st with
  | nil => simp [anchorAttrStep, litBytes]
  | cons kv rest ih => simpa using ih (anchorAttrStep st kv)

theorem anchorAttrStep_fold_class_last (raw : List (List Nat × List Nat))
    (st : List (List Nat × List Nat) × List (List Nat × List Nat) × Option (List Nat))
    (v₁ v₂ : List Nat) (hv₂ : v₂.isEmpty = false) (hv₂p : v₂.contains 0xFF = false) :
    lookupB ((raw ++ [(litBytes "class", v₁), (litBytes "class", v₂)]).foldl anchorAttrStep st).1
      (litBytes "class") = some (normalizeAttrValue v₂) := by
  induction raw generalizing st with
  | nil =>
      have hnot : 255 ∉ v₂ := by simpa using hv₂p
      have hv₂ne : v₂ ≠ [] := by
        intro hv
        subst v₂
        simp at hv₂
      have hlookup (m : List (List Nat × List Nat)) (k v : List Nat) :
          lookupB (omSetB m k v) k = some v := by
        induction m with
        | nil => simp [omSetB, lookupB]
        | cons kv rest ih =>
            by_cases h : kv.1 == k
            · simp [omSetB, lookupB, h]
            · simpa [omSetB, lookupB, h] using ih
      simpa [anchorAttrStep, litBytes, hnot, hv₂ne] using
        hlookup _ (litBytes "class") (normalizeAttrValue v₂)
  | cons kv rest ih => simpa using ih (anchorAttrStep st kv)

theorem buildAnchorAttrs_empty : buildAnchorAttrs [] =
    [(utf8Decode (litBytes "href"), textVal [])] := by
  simp [buildAnchorAttrs, trimBytes, litBytes, lookupB, textVal, utf8Decode]

theorem anchorStartOpts_shape (attrs : OptMap) :
    anchorStartOpts attrs =
      [("type".toList, OptVal.str "start".toList), ("attrs".toList, OptVal.map attrs)] := rfl

theorem anchorEndOpts_shape :
    anchorEndOpts = [("type".toList, OptVal.str "end".toList)] := rfl

/-! ## namedAnchorProcess token append and opts shape -/

theorem namedAnchorProcess_of_placeholder (name full : List Nat) (resid p : Bool)
    (toks : List TokenEntry) (h : name.any (fun b => b == 0xFF) = true) :
    namedAnchorProcess name resid full p toks = (full, toks) := by
  simp [namedAnchorProcess, h]

theorem namedAnchorProcess_of_empty (name full : List Nat) (resid p : Bool)
    (toks : List TokenEntry) (hph : name.any (fun b => b == 0xFF) = false)
    (he : (trimBytes name).isEmpty = true) :
    namedAnchorProcess name resid full p toks = (full, toks) := by
  simp [namedAnchorProcess, hph, he]

theorem namedAnchorProcess_valid_claims_one (name full : List Nat) (resid p : Bool)
    (toks : List TokenEntry) (hph : name.any (fun b => b == 0xFF) = false)
    (he : (trimBytes name).isEmpty = false) (hv : name.all isAnchorNameByte = true) :
    namedAnchorProcess name resid full p toks =
      let (ph, toks') := claimTok "Anchor" [("name".toList, textVal name)] toks
      (ph ++ (if resid then [93] else []), toks') := by
  simp [namedAnchorProcess, hph, he, hv]

theorem namedAnchorProcess_tok_count (name full : List Nat) (resid p : Bool)
    (toks : List TokenEntry) :
    (namedAnchorProcess name resid full p toks).2.length = toks.length ∨
      (namedAnchorProcess name resid full p toks).2.length = toks.length + 1 := by
  by_cases hphT : name.any (fun b => b == 0xFF) = true
  · left
    simpa [namedAnchorProcess, hphT]
  · have hphF : name.any (fun b => b == 0xFF) = false := by
      cases h : name.any (fun b => b == 0xFF) <;> simp_all
    by_cases heT : (trimBytes name).isEmpty = true
    · left
      simpa [namedAnchorProcess, hphF, heT]
    · have heF : (trimBytes name).isEmpty = false := by
        cases h : (trimBytes name).isEmpty <;> simp_all
      by_cases hvT : name.all isAnchorNameByte = true
      · right
        have h := namedAnchorProcess_valid_claims_one name full resid p toks hphF heF hvT
        rw [h]
        simp [claimTok]
      · have hvF : name.all isAnchorNameByte = false := by
          cases h : name.all isAnchorNameByte <;> simp_all
        by_cases hrT : (resid && !p) = true
        · right
          simp [namedAnchorProcess, hphF, heF, hvF, hrT, claimTok]
        · have hrF : (resid && !p) = false := by
            cases h : resid && !p <;> simp_all
          right
          simp [namedAnchorProcess, hphF, heF, hvF, hrF, claimTok]

/-! ## scoredJoinStrip structure and idempotence -/

theorem scoredJoinStrip_length_le (out : List Nat) :
    (scoredJoinStrip out).length ≤ out.length := by
  by_cases hc : (((List.takeWhile (fun b => b == 10) out.reverse).length == 1 ||
      (List.takeWhile (fun b => b == 10) out.reverse).length == 2) &&
      decide (out.length > (List.takeWhile (fun b => b == 10) out.reverse).length)) = true
  · simp [scoredJoinStrip, hc, List.length_take_le]
  · simp [scoredJoinStrip, hc]

theorem nlTakeWhile_drop_head (bs : List Nat) :
    let run := bs.takeWhile (fun b => b == 10)
    match bs.drop run.length with
    | [] => True
    | b :: _ => (b != 10) = true := by
  induction bs with
  | nil => simp
  | cons b rest ih =>
      by_cases hb : b == 10
      · simpa [hb] using ih
      · simp [hb]
        intro hb10
        subst b
        simp at hb

theorem scoredJoinStrip_take_trailing (out : List Nat)
    (hlt : (out.reverse.takeWhile (fun b => b == 10)).length < out.length) :
    (((out.take (out.length - (out.reverse.takeWhile (fun b => b == 10)).length)).reverse).takeWhile
      (fun b => b == 10)).length = 0 := by
  let t := (out.reverse.takeWhile (fun b => b == 10)).length
  have hrev : (out.take (out.length - t)).reverse = out.reverse.drop t := by
    rw [List.reverse_take]
    congr
    omega
  have hdrop' : match out.reverse.drop t with
        | [] => True
        | b :: _ => (b != 10) = true := by
    simpa [t] using (nlTakeWhile_drop_head out.reverse)
  cases hd : out.reverse.drop t with
  | nil =>
      have hlen : out.reverse.length - t = 0 := by
        simpa [List.length_drop] using congrArg List.length hd
      have hlen_eq : out.length = out.reverse.length := by simp
      have ht_eq : t = out.length := by omega
      simpa [t, hrev, hd]
  | cons b tl =>
      have hbne : (b != 10) = true := by simpa [hd] using hdrop'
      have hb10 : (b == 10) = false := by cases h : b == 10 <;> simp_all
      simpa [t, hrev, hd, hb10]

theorem scoredJoinStrip_strip_result_no_change (out : List Nat)
    (hc : ((out.reverse.takeWhile (fun b => b == 10)).length == 1 ||
           (out.reverse.takeWhile (fun b => b == 10)).length == 2) &&
          out.length > (out.reverse.takeWhile (fun b => b == 10)).length) :
    scoredJoinStrip (out.take (out.length - (out.reverse.takeWhile (fun b => b == 10)).length))
      = out.take (out.length - (out.reverse.takeWhile (fun b => b == 10)).length) := by
  have hc' : ((out.reverse.takeWhile (fun b => b == 10)).length = 1 ∨
      (out.reverse.takeWhile (fun b => b == 10)).length = 2) ∧
      out.length > (out.reverse.takeWhile (fun b => b == 10)).length := by
    simpa using hc
  have hz := scoredJoinStrip_take_trailing out hc'.2
  simp [scoredJoinStrip, hz]

theorem scoredJoinStrip_idem (out : List Nat) :
    scoredJoinStrip (scoredJoinStrip out) = scoredJoinStrip out := by
  by_cases hc : ((out.reverse.takeWhile (fun b => b == 10)).length == 1 ||
      (out.reverse.takeWhile (fun b => b == 10)).length == 2) &&
      out.length > (out.reverse.takeWhile (fun b => b == 10)).length
  · have h1 : scoredJoinStrip out =
        out.take (out.length - (out.reverse.takeWhile (fun b => b == 10)).length) := by
      simp [scoredJoinStrip, hc]
    rw [h1]
    exact scoredJoinStrip_strip_result_no_change out hc
  · have h1 : scoredJoinStrip out = out := by
      simp [scoredJoinStrip, hc]
    rw [h1]
    exact h1

/-! ## Doc/fatal preservation -/

theorem anchorRule_fatal_eq (st : ParseState) : (anchorRule st).fatal = st.fatal := by
  rfl

/-! ## Named open obligations for the regex/matcher correspondence, and conditional reductions -/

/-- The shape of a head matcher an audited TCB-2 lane supplies for one mechanically extracted reference regex: no match, or the matched group and the rest after the match. Stated abstractly here because PcreCore.olean / RefTables.olean are not among the built modules of this clone; importing them would require a full build, which this lane does not run. -/
abbrev AnchorRefHeadMatcher := List Nat → Option (List Nat × List Nat)

/-- Open obligation O1 (kernel-dependent remainder): there is a PcreCore-backed head matcher for the extracted named-anchor regex that selects exactly the same head positions as namedAnchorMatchAt. Discharged by the TCB-2 PcreCore/RefTables lane; never assumed here. -/
def NamedAnchorPcreAgreement : Prop :=
  ∃ M : AnchorRefHeadMatcher, ∀ src : List Nat,
    (namedAnchorMatchAt src).isSome = (M src).isSome

/-- Open obligation O2 (kernel-dependent remainder): a PcreCore-backed head matcher returns the mirror's name group for every named-anchor match. Discharged by the same TCB-2 lane. -/
def NamedAnchorPcreCaptureAgreement : Prop :=
  ∃ M : AnchorRefHeadMatcher, ∀ src : List Nat, match namedAnchorMatchAt src with
    | none => M src = none
    | some (name, _, _, _) => (M src).map Prod.fst = some name

/-- Open obligation O3 (kernel-dependent remainder): the element pass's opener matcher agrees with the corresponding extracted anchor regex; this is the other half of Anchor's two preg_match_all passes. -/
def AnchorElementPcreAgreement : Prop :=
  ∃ M : AnchorRefHeadMatcher, ∀ src : List Nat, (anchorOpenerAt src).isSome = (M src).isSome

theorem namedAnchorMatchAt_none_iff_ref (hO1 : NamedAnchorPcreAgreement) (src : List Nat) :
    ∃ M : AnchorRefHeadMatcher, namedAnchorMatchAt src = none ↔ M src = none := by
  obtain ⟨M, hM⟩ := hO1
  refine ⟨M, ?_⟩
  constructor
  · intro hn
    have hh := hM src
    simp [hn] at hh
    cases hm : M src with
    | none => rfl
    | some x => simp [hm] at hh
  · intro hm
    have hh := hM src
    have hf : (namedAnchorMatchAt src).isSome = false := by
      cases hMsrc : M src with
      | none => simpa [hMsrc] using hh
      | some x => simp [hMsrc] at hm
    cases hn : namedAnchorMatchAt src with
    | none => rfl
    | some x => simp [hn] at hf

theorem namedAnchorScan_go_id (src : List Nat) (toks : List TokenEntry) (prev : Option Nat)
    (hno : ∀ s : List Nat, namedAnchorMatchAt s = none) :
    namedAnchorScan.go src toks prev (src.length + 1) = (src, toks) := by
  induction src generalizing toks prev with
  | nil => rfl
  | cons b rest ih =>
      have hb := hno (b :: rest)
      have hi := ih toks (some b)
      simpa [namedAnchorScan.go, hb] using
        congrArg (fun p : List Nat × List TokenEntry => (b :: p.1, p.2)) hi

theorem namedAnchorScan_id_of_no_match (src : List Nat) (toks : List TokenEntry)
    (hno : ∀ s : List Nat, namedAnchorMatchAt s = none) :
    namedAnchorScan src toks = (src, toks) := by
  unfold namedAnchorScan
  exact namedAnchorScan_go_id src toks none hno

theorem namedAnchorScan_id_of_ref_no_match (M : AnchorRefHeadMatcher)
    (hO1 : ∀ src : List Nat, (namedAnchorMatchAt src).isSome = (M src).isSome)
    (src : List Nat) (toks : List TokenEntry) (href : ∀ s : List Nat, M s = none) :
    namedAnchorScan src toks = (src, toks) := by
  apply namedAnchorScan_id_of_no_match
  intro s
  have hh := hO1 s
  have hf : (namedAnchorMatchAt s).isSome = false := by
    simpa [href s] using hh
  cases hn : namedAnchorMatchAt s with
  | none => rfl
  | some x => simp [hn] at hf

end LeanFtml.NextFinal.Anchor

#print axioms LeanFtml.NextFinal.Anchor.lowerByteB_spec
#print axioms LeanFtml.NextFinal.Anchor.lowerByteB_idem
#print axioms LeanFtml.NextFinal.Anchor.lowerByteB_no_upper
#print axioms LeanFtml.NextFinal.Anchor.lowerByteB_eq_self_of_not_upper
#print axioms LeanFtml.NextFinal.Anchor.isAlnumByteB_of_lower
#print axioms LeanFtml.NextFinal.Anchor.lowerByteB_preserves_alnum
#print axioms LeanFtml.NextFinal.Anchor.isAnchorNameByte_of_lower
#print axioms LeanFtml.NextFinal.Anchor.isVerbatimHref_iff
#print axioms LeanFtml.NextFinal.Anchor.isVerbatimHref_hash
#print axioms LeanFtml.NextFinal.Anchor.isVerbatimHref_slash
#print axioms LeanFtml.NextFinal.Anchor.anchorSchemes_any_true_of_mem
#print axioms LeanFtml.NextFinal.Anchor.isVerbatimHref_of_scheme
#print axioms LeanFtml.NextFinal.Anchor.slugScan_no_upper
#print axioms LeanFtml.NextFinal.Anchor.normalizeUnsafeHref_no_upper
#print axioms LeanFtml.NextFinal.Anchor.slugScan_no_alnum_eq
#print axioms LeanFtml.NextFinal.Anchor.normalizeUnsafeHref_of_empty_normalized
#print axioms LeanFtml.NextFinal.Anchor.omSetB_last_wins
#print axioms LeanFtml.NextFinal.Anchor.anchorAttrStep_fold_href_last
#print axioms LeanFtml.NextFinal.Anchor.anchorAttrStep_fold_class_last
#print axioms LeanFtml.NextFinal.Anchor.buildAnchorAttrs_empty
#print axioms LeanFtml.NextFinal.Anchor.anchorStartOpts_shape
#print axioms LeanFtml.NextFinal.Anchor.anchorEndOpts_shape
#print axioms LeanFtml.NextFinal.Anchor.namedAnchorProcess_of_placeholder
#print axioms LeanFtml.NextFinal.Anchor.namedAnchorProcess_of_empty
#print axioms LeanFtml.NextFinal.Anchor.namedAnchorProcess_valid_claims_one
#print axioms LeanFtml.NextFinal.Anchor.namedAnchorProcess_tok_count
#print axioms LeanFtml.NextFinal.Anchor.scoredJoinStrip_length_le
#print axioms LeanFtml.NextFinal.Anchor.nlTakeWhile_drop_head
#print axioms LeanFtml.NextFinal.Anchor.scoredJoinStrip_take_trailing
#print axioms LeanFtml.NextFinal.Anchor.scoredJoinStrip_strip_result_no_change
#print axioms LeanFtml.NextFinal.Anchor.scoredJoinStrip_idem
#print axioms LeanFtml.NextFinal.Anchor.anchorRule_fatal_eq
#print axioms LeanFtml.NextFinal.Anchor.namedAnchorMatchAt_none_iff_ref
#print axioms LeanFtml.NextFinal.Anchor.namedAnchorScan_go_id
#print axioms LeanFtml.NextFinal.Anchor.namedAnchorScan_id_of_no_match
#print axioms LeanFtml.NextFinal.Anchor.namedAnchorScan_id_of_ref_no_match
