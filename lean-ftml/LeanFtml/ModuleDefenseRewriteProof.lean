import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml

namespace ModuleDefenseRewriteProof

/-! Universal match-level facts about the REFCORR10-MODFIX defense rewrite. Everything here is about the mirror's own functions in `ModuleRules.lean`; no reference or evaluation claim is made. The equational base for `rewriteModulePrefix` (exact on an exactly-lowercase head, identity otherwise) is the inherited `ModuleProof.rewriteModulePrefix_exact` / `rewriteModulePrefix_keep`; this file keeps a single-import surface and derives its new consequences directly from the definition rather than restating those two lemmas as new results. -/

/-- Byte length of the lowercase opener literal. -/
private theorem litModule8 : (litBytes "[[module").length = 8 := by decide

/-- Byte length of the renamed opener literal. -/
private theorem litModule654_11 : (litBytes "[[module654").length = 11 := by decide

/-- The first eight bytes of the renamed literal are the lowercase opener literal. -/
private theorem litModule654_take8 : (litBytes "[[module654").take 8 = litBytes "[[module" := by decide

/-- The exact-head check yields the canonical decomposition of the subject. This is the hypothesis form of the inherited exact lemma, used only as a local step. -/
private theorem head_exact_decomp (m : List Nat) (h : (m.take 8 == litBytes "[[module") = true) :
    m = litBytes "[[module" ++ m.drop 8 := by
  have hEq : m.take 8 = litBytes "[[module" := by simpa using h
  calc
    m = m.take 8 ++ m.drop 8 := (List.take_append_drop 8 m).symm
    _ = litBytes "[[module" ++ m.drop 8 := by rw [hEq]

/-- Taking fewer bytes than the front list holds does not reach the back list. -/
private theorem take_append_of_le (as bs : List Nat) (n : Nat) (h : n ≤ as.length) :
    (as ++ bs).take n = as.take n := by
  induction as generalizing n with
  | nil =>
      simp at h
      subst n
      simp
  | cons a as ih =>
      cases n with
      | zero => simp
      | succ n =>
          have h' : n ≤ as.length := Nat.succ_le_succ_iff.mp h
          simpa using ih n h'

/-- Taking exactly the front list's length returns the front list. -/
private theorem take_append_self (as bs : List Nat) : (as ++ bs).take as.length = as := by
  induction as with
  | nil => simp
  | cons a as ih => simp [ih]

/-- A case-insensitive literal match against its own exact bytes consumes them exactly. -/
private theorem matchLitCI_prefix_self (p rest : List Nat) : matchLitCI p (p ++ rest) = some rest := by
  induction p with
  | nil => simp [matchLitCI]
  | cons p ps ih =>
      have hp : byteCiEq p p = true := by
        unfold byteCiEq
        simp
      simp [matchLitCI, hp, ih]

/-! ## (a) The defense branch of `moduleTryCands` -/

/-- At the first candidate, when its tail yields a match and the opener count exceeds one, `moduleTryCands` returns exactly the rewrite of the matched text with the residual and an unchanged token table. No later candidate is consulted and no token is claimed. -/
theorem moduleTryCands_defense_unchanged_tokens
    (src name : List Nat) (toks : List TokenEntry)
    (attrRaw rest bodyRaw rest' : List Nat) (more : List (List Nat × List Nat))
    (htail : moduleTail rest = some (bodyRaw, rest'))
    (hNoHtml : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = false)
    (hdef : countModuleOpeners none (src.take (src.length - rest'.length))
              (src.length - rest'.length + 1) > 1) :
    moduleTryCands src name toks ((attrRaw, rest) :: more) =
      some (rewriteModulePrefix (insertInlineOpenerNewlines (src.take (src.length - rest'.length))),
        rest', toks) := by
  simp [moduleTryCands, htail, hNoHtml, hdef]

/-- Lifting (a) to `moduleMatch`: a head that presents the first candidate in the defense condition makes the whole match return the rewritten text, the residual, and the original token table. -/
theorem moduleMatch_defense_unchanged_tokens
    (src : List Nat) (toks : List TokenEntry)
    (name attrRaw rest bodyRaw rest' : List Nat) (more : List (List Nat × List Nat))
    (hhead : moduleHead (litBytes "[[module") src = some (name, (attrRaw, rest) :: more))
    (htail : moduleTail rest = some (bodyRaw, rest'))
    (hNoHtml : (bodyRaw != [] && bodyHasHtmlToken bodyRaw toks 0) = false)
    (hdef : countModuleOpeners none (src.take (src.length - rest'.length))
              (src.length - rest'.length + 1) > 1) :
    moduleMatch src toks =
      some (rewriteModulePrefix (insertInlineOpenerNewlines (src.take (src.length - rest'.length))),
        rest', toks) := by
  unfold moduleMatch
  rw [hhead]
  exact moduleTryCands_defense_unchanged_tokens src name toks attrRaw rest bodyRaw rest' more htail hNoHtml hdef

/-! ## (b) New consequences of `rewriteModulePrefix` -/

/-- Length law: an exact-head rewrite appends three bytes (`[[module654` replaces `[[module`), every other head leaves the length alone. -/
theorem rewriteModulePrefix_length (m : List Nat) :
    (rewriteModulePrefix m).length =
      (if (m.take 8 == litBytes "[[module") then m.length + 3 else m.length) := by
  cases hb : (m.take 8 == litBytes "[[module") with
  | false =>
      simp [rewriteModulePrefix, hb]
  | true =>
      have hdecomp : m = litBytes "[[module" ++ m.drop 8 := head_exact_decomp m hb
      have hm8 : 8 ≤ m.length := by
        rw [hdecomp, List.length_append, litModule8]
        omega
      simp [rewriteModulePrefix, hb, List.length_append, litModule654_11, List.length_drop]
      omega

/-- Non-creation: when the head is not the exact lowercase literal, the output head is not either. -/
theorem rewriteModulePrefix_no_new_lower_head (m : List Nat)
    (h : (m.take 8 == litBytes "[[module") = false) :
    ((rewriteModulePrefix m).take 8 == litBytes "[[module") = false := by
  simp [rewriteModulePrefix, h]

/-- Exact preservation of the lowercase-head predicate: the output begins with the exact lowercase opener literal if and only if the input did. This rules out both creating and destroying that head. -/
theorem rewriteModulePrefix_startsLower_iff (m : List Nat) :
    (((rewriteModulePrefix m).take 8 == litBytes "[[module") = true) ↔
      ((m.take 8 == litBytes "[[module") = true) := by
  cases hb : (m.take 8 == litBytes "[[module") with
  | false =>
      have hout : ((rewriteModulePrefix m).take 8 == litBytes "[[module") = false := by
        simp [rewriteModulePrefix, hb]
      constructor
      · intro hA
        simp [hout] at hA
      · intro hB
        simp [hb] at hB
  | true =>
      have hdecomp : m = litBytes "[[module" ++ m.drop 8 := head_exact_decomp m hb
      have hrewrite : rewriteModulePrefix m = litBytes "[[module654" ++ m.drop 8 := by
        rw [hdecomp]
        unfold rewriteModulePrefix
        have htake : ((litBytes "[[module" ++ m.drop 8).take 8 == litBytes "[[module") = true := by
          simp [litBytes]
        rw [htake]
        simp [litBytes]
      have hout : ((rewriteModulePrefix m).take 8 == litBytes "[[module") = true := by
        rw [hrewrite]
        rw [take_append_of_le (litBytes "[[module654") (m.drop 8) 8 (by rw [litModule654_11]; decide)]
        rw [litModule654_take8]
        simp
      constructor
      · intro _
        rfl
      · intro _
        exact hout

/-- When the rewrite fires, its first eleven bytes are exactly the renamed literal `[[module654`. -/
theorem rewriteModulePrefix_exact_head11 (m : List Nat)
    (h : (m.take 8 == litBytes "[[module") = true) :
    (rewriteModulePrefix m).take 11 = litBytes "[[module654" := by
  have hdecomp : m = litBytes "[[module" ++ m.drop 8 := head_exact_decomp m h
  rw [hdecomp]
  unfold rewriteModulePrefix
  have htake : ((litBytes "[[module" ++ m.drop 8).take 8 == litBytes "[[module") = true := by
    simp [litBytes]
  rw [htake]
  simp [litBytes]

/-- A renamed head is not a claimable Module opener: `moduleHead` on the rewritten text returns none, because the byte after the eight literal bytes is `6` and not whitespace. This is the mirror's own fixpoint argument that the defense creates no fresh occurrence. -/
theorem rewriteModulePrefix_exact_not_claimable (m : List Nat)
    (h : (m.take 8 == litBytes "[[module") = true) :
    moduleHead (litBytes "[[module") (rewriteModulePrefix m) = none := by
  have hdecomp : m = litBytes "[[module" ++ m.drop 8 := head_exact_decomp m h
  rw [hdecomp]
  unfold rewriteModulePrefix
  have htake : ((litBytes "[[module" ++ m.drop 8).take 8 == litBytes "[[module") = true := by
    simp [litBytes]
  rw [htake]
  simp
  have hdrop : (litBytes "[[module" ++ m.drop 8).drop 8 = m.drop 8 := by
    simp [litBytes]
  rw [hdrop]
  have hlit : litBytes "[[module654" = litBytes "[[module" ++ litBytes "654" := by decide
  rw [hlit, List.append_assoc]
  unfold moduleHead
  rw [matchLitCI_prefix_self]
  have h654 : litBytes "654" = [54, 53, 52] := by decide
  rw [h654]
  simp [isWsByte]

/-- Case-sensitivity consequence in Prop form: any head that is not exactly the lowercase literal is left byte-for-byte alone. Upper and mixed-case spellings of the opener satisfy this hypothesis, so they are unchanged. -/
theorem rewriteModulePrefix_nonexact_head_kept (m : List Nat)
    (hne : m.take 8 ≠ litBytes "[[module") :
    rewriteModulePrefix m = m := by
  have hfalse : (m.take 8 == litBytes "[[module") = false := by
    cases hb : (m.take 8 == litBytes "[[module") with
    | false => rfl
    | true =>
        have hEq : m.take 8 = litBytes "[[module" := by simpa using hb
        exact (hne hEq).elim
  simp [rewriteModulePrefix, hfalse]

/-- Defense-composition instantiation: the case-sensitivity law holds for the full defense replacement `rewriteModulePrefix` after `insertInlineOpenerNewlines`, conditional on the head of the newline-inserted text. -/
theorem defenseRewrite_no_new_lower_head (matched : List Nat)
    (h : ((insertInlineOpenerNewlines matched).take 8 == litBytes "[[module") = false) :
    (((rewriteModulePrefix (insertInlineOpenerNewlines matched)).take 8 == litBytes "[[module") = false) :=
  rewriteModulePrefix_no_new_lower_head (insertInlineOpenerNewlines matched) h

/-! ## Named gaps

1. The defense hypothesis `countModuleOpeners none matched (matched.length + 1) > 1` is taken as a premise. Nothing here relates the counter's value to the number of genuine opener heads in `matched`, and nothing proves that the reference's `preg_match_all` agrees with `countModuleOpeners`.

2. `insertInlineOpenerNewlines` stays opaque inside the defense replacement. No head-preservation lemma (its first eight bytes equal the input's first eight bytes) is proved, so non-creation of a lowercase head is unconditional for `rewriteModulePrefix` itself and only conditional for the composition. Closing that gap needs the head-end and fuel step lemmas for the newline-insertion scanner.

3. Only the byte predicate "first eight bytes equal the exact lowercase literal" is used. No theorem characterizes the full case-fold equivalence class that `matchLitCI` accepts, so upper and mixed-case spellings are expressed as the negation of that exact predicate rather than as an enumerated class.

4. Every statement is about the mirror's own functions. No Boundary-B claim (mirror equals PHP reference) is made; empirical conformance remains the evidence for that boundary.

-/

#print axioms moduleTryCands_defense_unchanged_tokens
#print axioms moduleMatch_defense_unchanged_tokens
#print axioms rewriteModulePrefix_length
#print axioms rewriteModulePrefix_no_new_lower_head
#print axioms rewriteModulePrefix_startsLower_iff
#print axioms rewriteModulePrefix_exact_head11
#print axioms rewriteModulePrefix_exact_not_claimable
#print axioms rewriteModulePrefix_nonexact_head_kept
#print axioms defenseRewrite_no_new_lower_head

end ModuleDefenseRewriteProof

end LeanFtml
