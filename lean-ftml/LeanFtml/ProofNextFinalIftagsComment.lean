import LeanFtml.NextRules

/-!
ProofNextFinalIftagsComment — Wave 2 next-final proof lane, Class B rules Iftags and Comment (ADVISOR-PROOF-POLICY.md §2.2 Class B, §4.4 lane proof/next-final). This file proves only KERNEL-FREE universal theorems about the mirror's actual functions in LeanFtml/NextRules.lean: arbitrary-input state preservation for iftagsRule/commentRule, the case-insensitive byte-equality laws, splitSpec nonemptiness, the iftagsGate Bool disjunction, the conditional identity of commentRule under the no-guard test plus the byte-form bridge, commentRule token-table monotonicity (the initial table stays a prefix), the lastNlBefore bound, and leftmost non-overlap offset monotonicity of commentMatches (offsets nondecreasing; strict increase needs a nonempty-match obligation, since commentMatchAt's minimum length is regex-dependent).
Kernel-dependent remainders are named, not asserted: iftagsMatcherCorrespondence names the equivalence of the hand-compiled iftagsPattern/iftagsBody backtracking enumerations (Iftags' (?R) body recursion) to PHP 8.5 libpcre2 on the extracted regex; commentMatcherCorrespondence names the equivalence of commentMatchAt/commentMatches to PCRE2 /(\n)?\[!--(.*?)--\]/si; byteFormParseBytesIdentity names the Tier-1 parseBytes/byteForm round-trip needed for full rule identity; commentMatchNonempty names the positive minimum-length fact needed to upgrade offset nondecrease to strictness. Conditional reductions are proved from these obligations. Module evaluation is out of scope. All theorems stay within [propext, Classical.choice, Quot.sound]; no sorry, no native_decide, no bv_decide, no placeholder axioms.
-/

namespace LeanFtml.NextFinal.IftagsComment

set_option maxHeartbeats 800000

open LeanFtml

/-! ## Named open obligations (kernel-dependent remainders) -/

/-- Remainder R-IFTAGS-MATCHER: the head match enumerated by iftagsPattern at fuel codeFuel(src.length) agrees with PCRE2 on the extracted Iftags regex (including the (?R) body recursion). The oracle is an abstract matcher returning the same (group 1, body, rest) shape; PCRE2 itself is not a Lean term. -/
def iftagsMatcherCorrespondence
    (oracle : List Nat → Option (Option (List Nat) × List Nat × List Nat)) : Prop :=
  ∀ src : List Nat, (iftagsPattern src (codeFuel src.length)).head? = oracle src

/-- Remainder R-COMMENT-MATCHER: commentMatchAt and commentMatches agree with PCRE2's preg_match_all for /(\n)?\[!--(.*?)--\]/si on the extracted regex. -/
def commentMatcherCorrespondence
    (oracle : List Nat → Option (List Nat)) : Prop :=
  ∀ src : List Nat, commentMatchAt src = oracle src

/-- Remainder R-BYTEFORM-BRIDGE: the Tier-1 round-trip parseBytes (byteForm segs) = segs on all reachable segment lists. Needed to lift rule-level byte identity to state identity. -/
def byteFormParseBytesIdentity : Prop :=
  ∀ segs : List TSeg, parseBytes (byteForm segs) = segs

/-- Remainder R-COMMENT-NONEMPTY: every full Comment match has positive length (the pattern needs the opener and closer). Needed to upgrade offset nondecrease to strictness. -/
def commentMatchNonempty : Prop :=
  ∀ (src : List Nat) (full : List Nat), commentMatchAt src = some full → 0 < full.length

/-! ## Iftags and Comment state-field preservation (kernel-free, all inputs) -/

theorem iftagsRule_tokens (st : ParseState) : (iftagsRule st).tokens = st.tokens := rfl

theorem iftagsRule_doc (st : ParseState) : (iftagsRule st).doc = st.doc := rfl

theorem iftagsRule_fatal (st : ParseState) : (iftagsRule st).fatal = st.fatal := rfl

theorem iftagsRule_continuedDivLeads (st : ParseState) :
    (iftagsRule st).continuedDivLeads = st.continuedDivLeads := rfl

theorem iftagsRule_work_eq (st : ParseState) :
    (iftagsRule st).work =
      parseBytes (iftagsScan
        (st.doc.page.tags.map (fun cs => cs.flatMap utf8Bytes))
        (evalHashIf (byteForm st.work)) ((evalHashIf (byteForm st.work)).length + 1)) := rfl

theorem commentRule_doc (st : ParseState) : (commentRule st).doc = st.doc := rfl

theorem commentRule_fatal (st : ParseState) : (commentRule st).fatal = st.fatal := rfl

theorem commentRule_continuedDivLeads (st : ParseState) :
    (commentRule st).continuedDivLeads = st.continuedDivLeads := rfl

/-! ## Case-insensitive byte equality (kernel-free) -/

theorem byteCiEq_refl (b : Nat) : byteCiEq b b = true := by
  simp [byteCiEq]

theorem zip_all_byteCiEq_refl (a : List Nat) :
    (a.zip a).all (fun (x, y) => byteCiEq x y) = true := by
  induction a with
  | nil => simp
  | cons x xs ih => simp [byteCiEq_refl, ih]

theorem ciBytesEq_refl (a : List Nat) : ciBytesEq a a = true := by
  simp [ciBytesEq, zip_all_byteCiEq_refl]

theorem ciBytesEq_length (a b : List Nat) (h : ciBytesEq a b = true) :
    a.length = b.length := by
  unfold ciBytesEq at h
  by_cases hlen : a.length == b.length
  · simpa using hlen
  · have hf : False := by simpa [hlen] using h
    exact False.elim hf

/-! ## splitSpec is never empty (kernel-free) -/

theorem splitSpec_go_nonempty (pref : List Nat) (cur : List Nat)
    (acc : List (List Nat)) (inSep : Bool) :
    (splitSpec.go pref cur acc inSep).isEmpty = false := by
  induction pref generalizing cur acc inSep with
  | nil => simp [splitSpec.go]
  | cons b rest ih =>
      by_cases hsep : b == 44 || b == 32
      · by_cases hin : inSep
        · simpa [splitSpec.go, hsep, hin] using ih (cur := cur) (acc := acc) (inSep := true)
        · simpa [splitSpec.go, hsep, hin] using ih (cur := []) (acc := cur.reverse :: acc) (inSep := true)
      · simpa [splitSpec.go, hsep] using ih (cur := b :: cur) (acc := acc) (inSep := false)

theorem splitSpec_nonempty (s : List Nat) : (splitSpec s).isEmpty = false := by
  unfold splitSpec
  simpa using splitSpec_go_nonempty s [] [] false

/-! ## iftagsGate totality (kernel-free) -/

theorem iftagsGate_det (tags : List (List Nat)) (spec : Option (List Nat)) :
    iftagsGate tags spec = true ∨ iftagsGate tags spec = false := by
  cases h : iftagsGate tags spec <;> simp

/-! ## Conditional reductions from the named obligations -/

theorem commentRule_id_of_guard_and_bridge (st : ParseState)
    (hguard : (findSub (litBytes "[!--") (byteForm st.work)).isNone = true)
    (hbridge : parseBytes (byteForm st.work) = st.work) :
    commentRule st = st := by
  unfold commentRule applyByteRule
  simp [hguard, hbridge]

theorem iftagsRule_work_of_scan_id_and_bridge (st : ParseState)
    (hif : evalHashIf (byteForm st.work) = byteForm st.work)
    (hs : iftagsScan (st.doc.page.tags.map (fun cs => cs.flatMap utf8Bytes))
            (byteForm st.work) ((byteForm st.work).length + 1) = byteForm st.work)
    (hbridge : parseBytes (byteForm st.work) = st.work) :
    (iftagsRule st).work = st.work := by
  unfold iftagsRule applyByteRule
  simp [hif, hs, hbridge]

/-! ## commentRule token-table monotonicity (kernel-free, all inputs) -/

/-- The token update of one Comment fold step only ever appends at most one token. -/
theorem ite_commentClaim_prefix (t : List TokenEntry) (full : List Nat) (indented : Bool) :
    ∃ suff, (if indented then claimText "Comment" full t else ([], t)).2 = t ++ suff := by
  cases indented with
  | false => exact ⟨[], by simp⟩
  | true => exact ⟨[{ rule := "Comment", opts := [("text".toList, textVal full)] }], by simp [claimText]⟩

/-- Generic foldl lemma: if a step's token component only grows by appending, the same holds for the whole fold. -/
theorem foldl_step_prefix
    (step : (List Nat × List TokenEntry × Nat) → (Nat × List Nat) →
      (List Nat × List TokenEntry × Nat))
    (hstep : ∀ acc m, ∃ suff, (step acc m).2.1 = acc.2.1 ++ suff)
    (toks : List TokenEntry) (mtchs : List (Nat × List Nat))
    (out : List Nat) (cursor : Nat) (suff : List TokenEntry) :
    ∃ suff', (mtchs.foldl step (out, toks ++ suff, cursor)).2.1 = toks ++ suff' := by
  induction mtchs generalizing out cursor suff with
  | nil => exact ⟨suff, rfl⟩
  | cons m ms ih =>
      rw [List.foldl_cons]
      obtain ⟨suff1, hs1⟩ := hstep (out, toks ++ suff, cursor) m
      obtain ⟨suff2, hs2⟩ := ih
        (out := (step (out, toks ++ suff, cursor) m).1)
        (cursor := (step (out, toks ++ suff, cursor) m).2.2)
        (suff := suff ++ suff1)
      have hstate : step (out, toks ++ suff, cursor) m =
          ((step (out, toks ++ suff, cursor) m).1,
           toks ++ (suff ++ suff1),
           (step (out, toks ++ suff, cursor) m).2.2) := by
        apply Prod.ext
        · rfl
        · apply Prod.ext
          · simpa [List.append_assoc] using hs1
          · rfl
      rw [hstate]
      exact ⟨suff2, hs2⟩

/-- The fold step of commentRule, definitionally equal to its inline lambda. -/
def commentRuleStep (src : List Nat) (p : List Nat × List TokenEntry × Nat)
    (m : Nat × List Nat) : List Nat × List TokenEntry × Nat :=
  let (out, t, cursor) := p
  let (start, full) := m
  let ls := lastNlBefore src start
  let pfx := (src.drop ls).take (start - ls)
  let endPos := start + full.length
  let tailEnd := match findSub [10] (src.drop endPos) with
    | some k => endPos + k
    | none => src.length
  let tail := (src.drop endPos).take (tailEnd - endPos)
  let indented := !pfx.isEmpty &&
    pfx.all (fun b => b == 32 || b == 9) && tail.all (fun b => b == 32 || b == 9)
  let removeFrom := if indented then ls else start
  let (repl, t') := if indented then claimText "Comment" full t else ([], t)
  (out ++ (src.drop cursor).take (removeFrom - cursor) ++ repl, t', endPos)

theorem commentRuleStep_tokens_prefix (src : List Nat)
    (acc : List Nat × List TokenEntry × Nat) (m : Nat × List Nat) :
    ∃ suff, (commentRuleStep src acc m).2.1 = acc.2.1 ++ suff := by
  dsimp [commentRuleStep]
  exact ite_commentClaim_prefix acc.2.1 m.2 _

theorem commentRule_tokens_prefix (st : ParseState) :
    ∃ suff, (commentRule st).tokens = st.tokens ++ suff := by
  unfold commentRule applyByteRule
  dsimp
  split
  · exact ⟨[], by simp⟩
  · change ∃ suff,
      ((commentMatches (byteForm st.work)).foldl
        (commentRuleStep (byteForm st.work))
        (([], st.tokens, 0) : List Nat × List TokenEntry × Nat)).2.1 = st.tokens ++ suff
    simpa using (foldl_step_prefix (commentRuleStep (byteForm st.work))
      (commentRuleStep_tokens_prefix (byteForm st.work)) st.tokens
      (commentMatches (byteForm st.work)) [] 0 [])

/-! ## lastNlBefore bound (kernel-free, all inputs) -/

theorem lastNlBefore_go_bound (pref : List Nat) (i acc : Nat) (hacc : acc ≤ i) :
    lastNlBefore.go pref i acc ≤ i + pref.length := by
  induction pref generalizing i acc with
  | nil => simpa [lastNlBefore.go] using hacc
  | cons b rest ih =>
      by_cases hb : b == 10
      · have h' := ih (i := i + 1) (acc := i + 1) (by omega)
        simp [lastNlBefore.go, hb]
        omega
      · have h' := ih (i := i + 1) (acc := acc) (by omega)
        simp [lastNlBefore.go, hb]
        omega

theorem lastNlBefore_le_start (src : List Nat) (start : Nat) :
    lastNlBefore src start ≤ start := by
  unfold lastNlBefore
  have h := lastNlBefore_go_bound (src.take start) 0 0 (by omega)
  have htlen : (src.take start).length ≤ start := List.length_take_le start src
  omega

/-! ## commentMatches leftmost non-overlap offset monotonicity (kernel-free) -/

def OffMono (l : List (Nat × List Nat)) : Prop :=
  l.Pairwise (fun a b => a.1 ≤ b.1)

theorem commentMatches_go_offsets_inc (s : List Nat) (off : Nat) (fuel : Nat)
    (acc : List (Nat × List Nat))
    (hacc : OffMono acc.reverse)
    (hoff : ∀ m ∈ acc, m.1 ≤ off) :
    OffMono (commentMatches.go s off fuel acc) := by
  induction fuel generalizing s off acc with
  | zero => simpa [commentMatches.go] using hacc
  | succ fuel ih =>
      cases s with
      | nil => simpa [commentMatches.go] using hacc
      | cons b rest =>
          match hmt : commentMatchAt (b :: rest) with
          | some full =>
              have hcross : ∀ a ∈ acc.reverse, ∀ z ∈ [(off, full)], a.1 ≤ z.1 := by
                intro a ha z hz
                simp at hz
                subst z
                exact hoff a (List.mem_reverse.mp ha)
              have hinc : OffMono (acc.reverse ++ [(off, full)]) :=
                List.pairwise_append.mpr ⟨hacc, by simp, hcross⟩
              have hinc' : OffMono ((off, full) :: acc).reverse := by
                simpa using hinc
              have hoff' : ∀ m ∈ (off, full) :: acc, m.1 ≤ off + full.length := by
                intro m hm'
                simp at hm'
                rcases hm' with rfl | hm'
                · omega
                · have hmle := hoff m hm'
                  omega
              simpa [commentMatches.go, hmt] using
                ih (s := (b :: rest).drop full.length) (off := off + full.length)
                   (acc := (off, full) :: acc) hinc' hoff'
          | none =>
              have hoff' : ∀ m ∈ acc, m.1 ≤ off + 1 := by
                intro m hm'
                have hmle := hoff m hm'
                omega
              simpa [commentMatches.go, hmt] using
                ih (s := rest) (off := off + 1) (acc := acc) hacc hoff'

theorem commentMatches_offsets_monotone (src : List Nat) : OffMono (commentMatches src) := by
  unfold commentMatches
  exact commentMatches_go_offsets_inc src 0 (src.length + 1) []
    (by simp [OffMono]) (by simp)

end LeanFtml.NextFinal.IftagsComment

#print axioms LeanFtml.NextFinal.IftagsComment.iftagsRule_tokens
#print axioms LeanFtml.NextFinal.IftagsComment.iftagsRule_doc
#print axioms LeanFtml.NextFinal.IftagsComment.iftagsRule_fatal
#print axioms LeanFtml.NextFinal.IftagsComment.iftagsRule_continuedDivLeads
#print axioms LeanFtml.NextFinal.IftagsComment.iftagsRule_work_eq
#print axioms LeanFtml.NextFinal.IftagsComment.commentRule_doc
#print axioms LeanFtml.NextFinal.IftagsComment.commentRule_fatal
#print axioms LeanFtml.NextFinal.IftagsComment.commentRule_continuedDivLeads
#print axioms LeanFtml.NextFinal.IftagsComment.byteCiEq_refl
#print axioms LeanFtml.NextFinal.IftagsComment.zip_all_byteCiEq_refl
#print axioms LeanFtml.NextFinal.IftagsComment.ciBytesEq_refl
#print axioms LeanFtml.NextFinal.IftagsComment.ciBytesEq_length
#print axioms LeanFtml.NextFinal.IftagsComment.splitSpec_go_nonempty
#print axioms LeanFtml.NextFinal.IftagsComment.splitSpec_nonempty
#print axioms LeanFtml.NextFinal.IftagsComment.iftagsGate_det
#print axioms LeanFtml.NextFinal.IftagsComment.commentRule_id_of_guard_and_bridge
#print axioms LeanFtml.NextFinal.IftagsComment.iftagsRule_work_of_scan_id_and_bridge
#print axioms LeanFtml.NextFinal.IftagsComment.ite_commentClaim_prefix
#print axioms LeanFtml.NextFinal.IftagsComment.foldl_step_prefix
#print axioms LeanFtml.NextFinal.IftagsComment.commentRuleStep_tokens_prefix
#print axioms LeanFtml.NextFinal.IftagsComment.commentRule_tokens_prefix
#print axioms LeanFtml.NextFinal.IftagsComment.lastNlBefore_go_bound
#print axioms LeanFtml.NextFinal.IftagsComment.lastNlBefore_le_start
#print axioms LeanFtml.NextFinal.IftagsComment.commentMatches_go_offsets_inc
#print axioms LeanFtml.NextFinal.IftagsComment.commentMatches_offsets_monotone
