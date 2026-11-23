/-
  LeanFtml.ProofInline3 — Wave 2 proof/para-inline lane, task-9.

  Unit: Inline3Rules families Tt, Superscript, Subscript and Typography.
  Policy class: ADVISOR-PROOF-POLICY.md §2.2 Class B (Base-Class PCRE and Hybrid
  Multi-Pass), kernel-free universal fragment. Tighten in the same module is a
  separate Class A unit handled by another agent; tightenBytes/tightenRule are
  not touched here.

  Proved below: exact structure of collapsePad, ttMatchAt's opening condition,
  ttScan's no-match copy law, ttProcess's claim/no-claim dichotomy with exact
  placeholder indices, supMatch/subMatch's deletion-vs-pair dichotomy, the
  algebra of UMatch combinators (singleton atomic matchers, altM append,
  optM zero, seqM membership/associativity/empty annihilation), lazyClose's
  closer witness, typoPair's no-op on a copied byte, typoNumSpace/typoUnits
  no-op laws, replaceAllB's absent-pattern law, typographyRule's exact token
  count, applyByteRule's frame/token preservation, WFBytes monotonicity and
  the non-work part of WFState preservation. All proofs use only the Lean
  kernel and the permitted axioms.

  Named remainder: the agreement of the hand-coded byte matchers with PHP 8.5
  libpcre2 (TCB-2), the PcreCore unification/coordinator scope, the byteForm /
  parseBytes round-trip obligations, and whole-rule work-segment WFState and
  TokEquiv preservation are explicitly NOT proved here; see the trailing
  remainder comment.
-/
import LeanFtml.Inline3Rules
import LeanFtml.TokenStateProof

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## Byte helpers -/

private theorem collapsePad_go_no_tab : ∀ (inRun : Bool) (bs : List Nat), 9 ∉ collapsePad.go inRun bs := by
  intro inRun bs
  induction bs generalizing inRun with
  | nil => simp [collapsePad.go]
  | cons b rest ih =>
      unfold collapsePad.go
      by_cases hb : b == 32 || b == 9
      · simp only [hb]
        cases inRun <;> simp [ih]
      · simp only [hb]
        have hbne : b ≠ 9 := by
          intro heq
          apply hb
          simp [heq]
        have hb9 : 9 ≠ b := fun h => hbne h.symm
        simp [hb9, ih]

theorem parainline_inline3_collapsePad_no_tab (bs : List Nat) : 9 ∉ collapsePad bs := by
  simpa [collapsePad] using collapsePad_go_no_tab false bs

/-! ## Tt: matcher and scanner -/

theorem parainline_inline3_ttMatchAt_open (src : List Nat) (r : List Nat × Nat)
    (h : ttMatchAt src = some r) : src.take 2 = [123, 123] := by
  by_cases heq : src.take 2 = [123, 123]
  · exact heq
  · have hno : src.take 2 != [123, 123] := by simpa using heq
    have hn : ttMatchAt src = none := by simp [ttMatchAt, hno]
    rw [hn] at h
    cases h

theorem parainline_inline3_ttMatchAt_none_of_no_open (src : List Nat)
    (h : src.take 2 != [123, 123]) : ttMatchAt src = none := by
  simp [ttMatchAt, h]

private theorem ttScan_go_all_none :
    ∀ (src : List Nat) (before : Option Nat) (toks : List TokenEntry) (fuel : Nat),
      src.length < fuel →
      (∀ s : List Nat, (∃ pre : List Nat, src = pre ++ s) → ttMatchAt s = none) →
      ttScan.go src before toks fuel = (src, toks) := by
  intro src
  induction src with
  | nil =>
      intro before toks fuel hfuel hnone
      simp [ttScan.go]
  | cons b rest ih =>
      intro before toks fuel hfuel hnone
      cases fuel with
      | zero => omega
      | succ f =>
          have hfuel' : rest.length < f := by
            simp only [List.length_cons] at hfuel
            omega
          have hnone_rest : ∀ s : List Nat, (∃ pre : List Nat, rest = pre ++ s) → ttMatchAt s = none := by
            intro s hs
            rcases hs with ⟨pre, hpre⟩
            apply hnone s
            exact ⟨b :: pre, by simp [hpre]⟩
          have hmatch : ttMatchAt (b :: rest) = none := hnone (b :: rest) ⟨[], rfl⟩
          have hrec := ih (some b) toks f hfuel' hnone_rest
          simp [ttScan.go, hmatch, hrec]

theorem parainline_inline3_ttScan_nil (toks : List TokenEntry) :
    ttScan [] toks = ([], toks) := rfl

theorem parainline_inline3_ttScan_all_none (src : List Nat) (toks : List TokenEntry)
    (h : ∀ s : List Nat, (∃ pre : List Nat, src = pre ++ s) → ttMatchAt s = none) :
    ttScan src toks = (src, toks) := by
  unfold ttScan
  exact ttScan_go_all_none src none toks (src.length + 1) (Nat.lt_succ_self _) h

/-! ## Tt: process() -/

def parainlineInline3TtStart : TokenEntry :=
  { rule := "Tt", opts := [("type".toList, OptVal.str "start".toList)] }

def parainlineInline3TtEnd : TokenEntry :=
  { rule := "Tt", opts := [("type".toList, OptVal.str "end".toList)] }

def parainlineInline3TtDegenerate (body : List Nat) : Prop :=
  let leadLen := (body.takeWhile (fun b => b == 32 || b == 9)).length
  let trailLen :=
    ((body.drop leadLen).reverse.takeWhile (fun b => b == 32 || b == 9)).length
  let core := (body.drop leadLen).take (body.length - leadLen - trailLen)
  collapsePad core = [] ∨ collapsePad core = [48]

theorem parainline_inline3_ttProcess_no_claim (body : List Nat)
    (before after : Option Nat) (tail : List Nat) (toks : List TokenEntry)
    (hdeg : parainlineInline3TtDegenerate body) :
    (ttProcess body before after tail toks).2 = toks := by
  unfold parainlineInline3TtDegenerate at hdeg
  unfold ttProcess
  dsimp at hdeg ⊢
  simp [hdeg]
  split <;> rfl

theorem parainline_inline3_ttProcess_claim (body : List Nat)
    (before after : Option Nat) (tail : List Nat) (toks : List TokenEntry)
    (hdeg : ¬ parainlineInline3TtDegenerate body) :
    (ttProcess body before after tail toks).2 =
      toks ++ [parainlineInline3TtStart, parainlineInline3TtEnd] := by
  unfold parainlineInline3TtDegenerate at hdeg
  unfold ttProcess
  dsimp at hdeg ⊢
  simp [hdeg, claimTok, parainlineInline3TtStart, parainlineInline3TtEnd, List.append_assoc]

theorem parainline_inline3_claimTok_spec (rule : String) (opts : OptMap)
    (toks : List TokenEntry) :
    (claimTok rule opts toks).1 = phBytes toks.length ∧
    (claimTok rule opts toks).2 = toks ++ [{ rule := rule, opts := opts }] := by
  constructor <;> rfl

/-! ## Superscript and Subscript -/

theorem parainline_inline3_supMatch_dichotomy (bs : List Nat) (toks : List TokenEntry) :
    supMatch bs toks = some (bs.drop 4, [], toks) ∨
    supMatch bs toks = pairClaim "Superscript" 94 bs toks := by
  unfold supMatch
  by_cases h : bs.take 4 == [94, 94, 94, 94]
  · left
    simp [h]
  · right
    simp [h]

theorem parainline_inline3_subMatch_dichotomy (bs : List Nat) (toks : List TokenEntry) :
    subMatch bs toks = some (bs.drop 4, [], toks) ∨
    subMatch bs toks = pairClaim "Subscript" 44 bs toks := by
  unfold subMatch
  by_cases h : bs.take 4 == [44, 44, 44, 44]
  · left
    simp [h]
  · right
    simp [h]

/-! ## UMatch algebra -/

theorem parainline_inline3_litM_singleton (lit bs : List Nat) : (litM lit bs).length ≤ 1 := by
  unfold litM
  by_cases h : bs.take lit.length == lit <;> simp [h]

theorem parainline_inline3_classM_singleton (set bs : List Nat) : (classM set bs).length ≤ 1 := by
  unfold classM
  cases bs with
  | nil => simp
  | cons b rest =>
      by_cases h : b ∈ set <;> simp [h]

theorem parainline_inline3_entM_singleton (tail bs : List Nat) : (entM tail bs).length ≤ 1 := by
  unfold entM
  by_cases h1 : bs.take 2 == [38, 35]
  · simp only [h1, ↓reduceIte]
    by_cases h2 : List.take tail.length (List.drop (2 + countRun 48 (List.drop 2 bs)) bs) = tail
    · simp [h2]
    · simp [h2]
  · simp [h1]

theorem parainline_inline3_anchorM_singleton (bs : List Nat) : (anchorM bs).length ≤ 1 := by
  unfold anchorM
  by_cases h : bs.isEmpty || bs == [10] <;> simp [h]

theorem parainline_inline3_altM_append (ms ns : List UMatch) (bs : List Nat) :
    altM (ms ++ ns) bs = altM ms bs ++ altM ns bs := by
  simp [altM]

theorem parainline_inline3_optM_zero (m : UMatch) (bs : List Nat) : 0 ∈ optM m bs := by
  simp [optM]

theorem parainline_inline3_optM_mem (m : UMatch) (bs : List Nat) (n : Nat) :
    n ∈ optM m bs ↔ n ∈ m bs ∨ n = 0 := by
  simp [optM]

theorem parainline_inline3_seqM_mem (a b : UMatch) (bs : List Nat) (n : Nat) :
    n ∈ seqM a b bs ↔
      ∃ la ∈ a bs, ∃ lb ∈ b (bs.drop la), lb + la = n := by
  simp [seqM]

theorem parainline_inline3_seqM_empty_right (a : UMatch) :
    seqM a (fun _ => []) = fun _ => [] := by
  funext bs
  simp [seqM]

private theorem flatMap_flatMap (xs : List Nat) (f g : Nat → List Nat) :
    (xs.flatMap f).flatMap g = xs.flatMap (fun x => (f x).flatMap g) := by
  induction xs with
  | nil => simp
  | cons x xs ih => simp [ih]

private theorem map_flatMap (xs : List Nat) (f : Nat → List Nat) (k : Nat) :
    (xs.map (fun x => x + k)).flatMap f = xs.flatMap (fun x => f (x + k)) := by
  induction xs with
  | nil => simp
  | cons x xs ih => simp [ih]

private theorem flatMap_map (xs : List Nat) (f : Nat → List Nat) (g : Nat → Nat) :
    (xs.flatMap f).map g = xs.flatMap (fun x => (f x).map g) := by
  induction xs with
  | nil => simp
  | cons x xs ih => simp [ih]

private theorem flatMap_congr_nat (xs : List Nat) (f g : Nat → List Nat)
    (h : ∀ x ∈ xs, f x = g x) : xs.flatMap f = xs.flatMap g := by
  induction xs with
  | nil => simp
  | cons x xs ih =>
      change f x ++ xs.flatMap f = g x ++ xs.flatMap g
      rw [h x (by simp), ih (fun y hy => h y (by simp [hy]))]

private theorem drop_add (bs : List Nat) (m n : Nat) : bs.drop (m + n) = (bs.drop m).drop n := by
  induction bs generalizing m with
  | nil => simp
  | cons b tl ih =>
      cases m with
      | zero => simp
      | succ m =>
          rw [Nat.succ_add]
          change tl.drop (m + n) = (tl.drop m).drop n
          exact ih m

theorem parainline_inline3_seqM_assoc (a b c : UMatch) :
    seqM (seqM a b) c = seqM a (seqM b c) := by
  funext bs
  simp only [seqM]
  rw [flatMap_flatMap]
  apply flatMap_congr_nat
  intro la hla
  rw [map_flatMap]
  rw [flatMap_map]
  apply flatMap_congr_nat
  intro lb hlb
  simp only [List.map_map]
  have hdrop : bs.drop (lb + la) = (bs.drop la).drop lb := by
    rw [Nat.add_comm lb la]
    exact drop_add bs la lb
  have hadd : (fun x : Nat => x + (lb + la)) = (fun x : Nat => x + lb + la) := by
    funext x
    omega
  rw [hdrop]
  change List.map (fun x : Nat => x + (lb + la)) (c ((bs.drop la).drop lb)) =
    List.map (fun x : Nat => x + lb + la) (c ((bs.drop la).drop lb))
  rw [hadd]

/-! ## Typography: lazy quote pairs, number-space, units -/

private theorem lazyClose_spec :
    ∀ (cls src : List Nat) (off k : Nat),
      typoPair.lazyClose cls src off = some k →
      off ≤ k ∧ (src.drop (k - off)).take cls.length == cls := by
  intro cls src
  induction src with
  | nil =>
      intro off k h
      simp [typoPair.lazyClose] at h
  | cons b rest ih =>
      intro off k h
      by_cases hcls : (b :: rest).take cls.length == cls
      · have hk : some off = some k := by simpa [typoPair.lazyClose, hcls] using h
        cases hk
        exact ⟨by omega, by simpa using hcls⟩
      · by_cases hnl : b == 10
        · simp [typoPair.lazyClose, hcls, hnl] at h
        · have h' : typoPair.lazyClose cls rest (off + 1) = some k := by
            simpa [typoPair.lazyClose, hcls, hnl] using h
          have hs := ih (off + 1) k h'
          refine ⟨?_, ?_⟩
          · omega
          · have hsub : k - off = (k - (off + 1)) + 1 := by omega
            have hdrop : (b :: rest).drop (k - off) = rest.drop (k - (off + 1)) := by
              rw [hsub]
              simp
            rw [hdrop]
            exact hs.2

theorem parainline_inline3_lazyClose_close (cls src : List Nat) (off k : Nat)
    (h : typoPair.lazyClose cls src off = some k) :
    (src.drop (k - off)).take cls.length == cls :=
  (lazyClose_spec cls src off k h).2

private theorem pregScan_cons_no_match
    (m : List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry))
    (b : Nat) (rest : List Nat) (toks : List TokenEntry)
    (h : m (b :: rest) toks = none) :
    (pregScan m (b :: rest) toks).1 = b :: (pregScan m rest toks).1 := by
  unfold pregScan
  simp [pregScan.go, h]

theorem parainline_inline3_typoPair_cons_no_open (opn cls repO repC : List Nat)
    (b : Nat) (rest : List Nat) (h : (b :: rest).take opn.length != opn) :
    typoPair opn cls repO repC (b :: rest) =
      b :: typoPair opn cls repO repC rest := by
  have hneq : List.take opn.length (b :: rest) ≠ opn := by simpa using h
  unfold typoPair
  dsimp
  apply pregScan_cons_no_match
  simp [hneq]

private theorem not_digit_of_bnot (b : Nat) (h : ! isDigitB b) : isDigitB b = false := by
  cases hb : isDigitB b <;> simp [hb] at h ⊢

private theorem typoNumSpace_go_no_digit (ph : List Nat) :
    ∀ (prev : Option Nat) (bs : List Nat),
      (∀ b ∈ bs, ! isDigitB b) →
      (prev = none ∨ ∃ b : Nat, prev = some b ∧ ! isDigitB b) →
      typoNumSpace.go ph prev bs = bs := by
  intro prev bs
  induction bs generalizing prev with
  | nil =>
      intro hbs hprev
      simp [typoNumSpace.go]
  | cons b rest ih =>
      intro hbs hprev
      have hb : ! isDigitB b := hbs b (by simp)
      have hb' : isDigitB b = false := not_digit_of_bnot b hb
      have hprevfalse : (prev.map isDigitB).getD false = false := by
        rcases hprev with rfl | ⟨p, rfl, hp⟩
        · simp
        · simp [not_digit_of_bnot p hp]
      have hnextfalse : (rest.head?.map isDigitB).getD false = false := by
        cases rest with
        | nil => simp
        | cons c cs =>
            have hc : ! isDigitB c := hbs c (by simp)
            simp [not_digit_of_bnot c hc]
      unfold typoNumSpace.go
      simp [hprevfalse, hnextfalse,
        ih (some b) (fun c hc => hbs c (by simp [hc])) (Or.inr ⟨b, rfl, hb⟩)]

theorem parainline_inline3_typoNumSpace_no_digit (ph bs : List Nat)
    (h : ∀ b ∈ bs, ! isDigitB b) : typoNumSpace ph bs = bs := by
  simpa [typoNumSpace] using typoNumSpace_go_no_digit ph none bs h (Or.inl rfl)

def parainlineInline3HasDigitSpace (bs : List Nat) : Prop :=
  ∃ d : Nat, ∃ pre suf : List Nat, bs = pre ++ d :: 32 :: suf ∧ isDigitB d

private theorem typoUnits_go_no_ds (ph : List Nat) :
    ∀ (bs : List Nat) (fuel : Nat),
      bs.length < fuel → ¬ parainlineInline3HasDigitSpace bs →
      typoUnits.go ph bs fuel = bs := by
  intro bs fuel
  induction fuel generalizing bs with
  | zero =>
      intro hlt hno
      omega
  | succ f ih =>
      intro hlt hno
      cases bs with
      | nil => simp [typoUnits.go]
      | cons b rest =>
          have hfuel' : rest.length < f := by
            simp only [List.length_cons] at hlt
            omega
          have hrestno : ¬ parainlineInline3HasDigitSpace rest := by
            intro hr
            rcases hr with ⟨d, pre, suf, hdec, hd⟩
            apply hno
            refine ⟨d, b :: pre, suf, ?_, hd⟩
            simp [hdec]
          have hcond : ¬ (isDigitB b && rest.head? == some 32) := by
            intro hc
            have hdb : isDigitB b = true := by
              cases hb : isDigitB b <;> simp [hb] at hc ⊢
            have hhead : rest.head? == some 32 := by
              cases hh : rest.head? == some 32 <;> simp [hh] at hc ⊢
            cases rest with
            | nil => simp at hhead
            | cons c cs =>
                have hc32 : c = 32 := by simpa using hhead
                subst c
                exact hno ⟨b, [], cs, by simp, hdb⟩
          simp [typoUnits.go, hcond, ih rest hfuel' hrestno]

theorem parainline_inline3_typoUnits_no_digit_space (ph bs : List Nat)
    (h : ¬ parainlineInline3HasDigitSpace bs) : typoUnits ph bs = bs := by
  simpa [typoUnits] using typoUnits_go_no_ds ph bs (bs.length + 1) (Nat.lt_succ_self _) h

/-! ## Typography: literal replacement -/

def parainlineInline3Occurs (pat bs : List Nat) : Prop :=
  ∃ pre suf : List Nat, bs = pre ++ pat ++ suf

private theorem take_eq_prefix_append_drop (xs pat : List Nat) :
    xs.take pat.length = pat → xs = pat ++ xs.drop pat.length := by
  intro h
  have hdec := List.take_append_drop pat.length xs
  calc
    xs = xs.take pat.length ++ xs.drop pat.length := hdec.symm
    _ = pat ++ xs.drop pat.length := by rw [h]

private theorem replaceAllB_go_no_occ (pat rep : List Nat) :
    ∀ (bs : List Nat) (fuel : Nat),
      bs.length < fuel → ¬ parainlineInline3Occurs pat bs →
      replaceAllB.go pat rep bs fuel = bs := by
  intro bs fuel
  induction fuel generalizing bs with
  | zero =>
      intro hlt hno
      omega
  | succ f ih =>
      intro hlt hno
      cases bs with
      | nil => simp [replaceAllB.go]
      | cons b rest =>
          have hfuel' : rest.length < f := by
            simp only [List.length_cons] at hlt
            omega
          by_cases hm : (b :: rest).take pat.length == pat
          · exfalso
            apply hno
            refine ⟨[], (b :: rest).drop pat.length, ?_⟩
            have hmeq : (b :: rest).take pat.length = pat := by simpa using hm
            exact take_eq_prefix_append_drop (b :: rest) pat hmeq
          · have hrestno : ¬ parainlineInline3Occurs pat rest := by
              intro hr
              rcases hr with ⟨pre, suf, hdec⟩
              apply hno
              exact ⟨b :: pre, suf, by simp [hdec]⟩
            simp [replaceAllB.go, hm, ih rest hfuel' hrestno]

theorem parainline_inline3_replaceAllB_no_occ (pat rep bs : List Nat)
    (h : ¬ parainlineInline3Occurs pat bs) : replaceAllB pat rep bs = bs := by
  simpa [replaceAllB] using replaceAllB_go_no_occ pat rep bs (bs.length + 1)
    (Nat.lt_succ_self _) h

/-! ## State-level preservation -/

theorem parainline_inline3_typographyRule_token_count (st : ParseState) :
    (typographyRule st).tokens.length = st.tokens.length + 13 := by
  unfold typographyRule applyByteRule
  dsimp
  simp

theorem parainline_inline3_applyByteRule_frame (st : ParseState)
    (f : List Nat → List TokenEntry → List Nat × List TokenEntry) :
    (applyByteRule st f).doc = st.doc ∧
    (applyByteRule st f).fatal = st.fatal ∧
    (applyByteRule st f).continuedDivLeads = st.continuedDivLeads := by
  simp [applyByteRule]

theorem parainline_inline3_applyByteRule_tokens (st : ParseState)
    (f : List Nat → List TokenEntry → List Nat × List TokenEntry)
    (h : (f (byteForm st.work) st.tokens).2 = st.tokens) :
    (applyByteRule st f).tokens = st.tokens := by
  unfold applyByteRule
  dsimp
  rw [h]

theorem parainline_inline3_wfBytes_mono {bs : List Nat} {n m : Nat}
    (h : WFBytes bs n) (hnm : n ≤ m) : WFBytes bs m := by
  rcases h with ⟨segs, hwf, rfl⟩
  refine ⟨segs, ?_, rfl⟩
  rcases hwf with ⟨hnorm, hidx⟩
  exact ⟨hnorm, fun k hk => Nat.lt_of_lt_of_le (hidx k hk) hnm⟩

theorem parainline_inline3_wfState_nonwork_preserved (st : ParseState)
    (f : List Nat → List TokenEntry → List Nat × List TokenEntry)
    (h : (f (byteForm st.work) st.tokens).2 = st.tokens) (hwf : WFState st) :
    (∀ t ∈ (applyByteRule st f).tokens, WFOptMap (applyByteRule st f).tokens.length t.opts) ∧
    (∀ bs ∈ (applyByteRule st f).doc.footnotes, WFBytes bs (applyByteRule st f).tokens.length) ∧
    (wfBytePairs (applyByteRule st f).tokens.length (applyByteRule st f).doc.bibitems) ∧
    (wfByteIdPairs (applyByteRule st f).tokens.length (applyByteRule st f).doc.bibitemIds) ∧
    (wfBytePairs (applyByteRule st f).tokens.length (applyByteRule st f).doc.scoredAnchors) ∧
    (∀ bs ∈ (applyByteRule st f).continuedDivLeads, WFBytes bs (applyByteRule st f).tokens.length) := by
  rw [parainline_inline3_applyByteRule_tokens st f h]
  simpa [applyByteRule] using hwf.2

theorem parainline_inline3_tt_claimed_opts_wf (n : Nat) :
    WFOptMap n [("type".toList, OptVal.str "start".toList)] ∧
    WFOptMap n [("type".toList, OptVal.str "end".toList)] := by
  simp [WFOptMap, WFOptVal]

/-! ## Named kernel-dependent remainder (not proved here)

  1. Regex-vs-PHP agreement (TCB-2): ttMatchAt's /U brace/dot enumeration,
  supMatch/subMatch's deletion alternative, typoPair's lazy closer,
  typoNumSpace's lookbehind/lookahead, typoUnits' DFS unit alternation with
  negative lookahead and the bare-$ anchor, and replaceAllB's literal
  replacement are hand-coded mirrors of PHP 8.5 libpcre2. No claim is made
  here that any of them agrees with libpcre2; only their internal kernel-free
  algebra is proved. Their certification belongs to PcreCore and the
  differential torture suite, outside this unit.
  2. Coordinator scope: PcreCore unification, the conformance suite and the
  byteForm / parseBytes round-trip obligations in TokenStateProof.lean are not
  proved here. Consequently whole-rule WFState work-segment preservation and
  TokEquiv for ttRule, superscriptRule, subscriptRule and typographyRule are
  named remainders; only the frame and non-work field preservation is proved.
  3. The Typography dead "---" statement and the no-new-dash property of the
  "--" pass are not proved here; the absent-pattern replacement law above is
  the kernel-free fragment needed for them.
  4. Tighten is a separate Class A unit (another agent); tightenBytes and
  tightenRule are untouched.
-/

#print axioms parainline_inline3_collapsePad_no_tab
#print axioms parainline_inline3_ttMatchAt_open
#print axioms parainline_inline3_ttMatchAt_none_of_no_open
#print axioms parainline_inline3_ttScan_nil
#print axioms parainline_inline3_ttScan_all_none
#print axioms parainline_inline3_ttProcess_no_claim
#print axioms parainline_inline3_ttProcess_claim
#print axioms parainline_inline3_claimTok_spec
#print axioms parainline_inline3_supMatch_dichotomy
#print axioms parainline_inline3_subMatch_dichotomy
#print axioms parainline_inline3_litM_singleton
#print axioms parainline_inline3_classM_singleton
#print axioms parainline_inline3_entM_singleton
#print axioms parainline_inline3_anchorM_singleton
#print axioms parainline_inline3_altM_append
#print axioms parainline_inline3_optM_zero
#print axioms parainline_inline3_optM_mem
#print axioms parainline_inline3_seqM_mem
#print axioms parainline_inline3_seqM_empty_right
#print axioms parainline_inline3_seqM_assoc
#print axioms parainline_inline3_lazyClose_close
#print axioms parainline_inline3_typoPair_cons_no_open
#print axioms parainline_inline3_typoNumSpace_no_digit
#print axioms parainline_inline3_typoUnits_no_digit_space
#print axioms parainline_inline3_replaceAllB_no_occ
#print axioms parainline_inline3_typographyRule_token_count
#print axioms parainline_inline3_applyByteRule_frame
#print axioms parainline_inline3_applyByteRule_tokens
#print axioms parainline_inline3_wfBytes_mono
#print axioms parainline_inline3_wfState_nonwork_preserved
#print axioms parainline_inline3_tt_claimed_opts_wf

end LeanFtml
