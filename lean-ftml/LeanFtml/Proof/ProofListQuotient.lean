/-
  LeanFtml.Proof.ProofListQuotient — the alphabet-quotient theorem for
  the List pairing kernel (ADVISOR-PROOF-POLICY §2.1 element 1 and
  §4.4, the `ListRules` row: "the reduction to the quotient alphabet
  Σ_list").

  The pairing kernel `findPairOpener` reads an opener through exactly
  two projections: its folded tag `lowerBytes o.tag` and its raw-case
  flag `tagIsRawCase o.tag`. This file makes that a theorem. The
  class of an opener is the pair (folded tag, raw-case flag); a
  one-opener decision function `lstClassDecide` on classes is proved
  to agree with `lstOpenerStops`/`lstOpenerSkips` from
  LeanFtml.Proof.ProofList on every opener; the walk-level decision
  `lstOpenerDecision` on class lists is proved sound and complete
  against `findPairOpener`; and the headline corollary states that
  two opener stacks with the same class list have the same pairing
  outcome — same existence, same absorb/pair flag, and paired openers
  in the same class. The pairing therefore factors through the
  quotient, and the certificate alphabet Σ_list in
  LeanFtml.Proof.ProofListCert (whose block-tag symbols are exactly
  the class representatives: the three folded tags ul/ol/li, each in
  lowercase and raw-case form, as openers and as closers) covers
  every class the kernel can distinguish.
-/
import LeanFtml.Proof.ProofList

namespace LeanFtml

/-- The quotient class of an opener, for pairing purposes: its folded
    tag and its raw-case flag. -/
def lstOpenerClass (o : TagMatch) : List Nat × Bool :=
  (lowerBytes o.tag, tagIsRawCase o.tag)

/-- The class list of an opener stack. -/
def lstOpenerClasses (stack : List TagMatch) : List (List Nat × Bool) :=
  stack.map lstOpenerClass

/-- The one-opener decision on a class: `none` when the class skips
    for closer fold `ct` and closer raw-case flag `rc`, otherwise
    `some b` with `b` the class's raw-case flag (the absorb/pair
    flag `findPairOpener` returns). -/
def lstClassDecide (ct : List Nat) (rc : Bool)
    (cls : List Nat × Bool) : Option Bool :=
  if cls.2 then
    if cls.1 == ct then some true else none
  else if cls.1 == ct || rc then some false else none

theorem lst_classDecide_eq_some_iff {ct : List Nat} {rc : Bool}
    {o : TagMatch} {b : Bool} :
    lstClassDecide ct rc (lstOpenerClass o) = some b ↔
      lstOpenerStops ct rc o b := by
  unfold lstClassDecide lstOpenerClass
  dsimp only
  by_cases hraw : tagIsRawCase o.tag = true
  · rw [if_pos hraw]
    by_cases hfold : lowerBytes o.tag = ct
    · rw [if_pos (by simp [hfold])]
      constructor
      · intro h
        injection h with h1
        exact Or.inl ⟨hraw, hfold, h1.symm⟩
      · intro h
        rcases h with ⟨-, -, h3⟩ | ⟨h1, -, -⟩
        · simp [h3]
        · rw [hraw] at h1; simp at h1
    · rw [if_neg (by simp [hfold])]
      constructor
      · intro h; simp at h
      · intro h
        rcases h with ⟨-, h2, -⟩ | ⟨h1, -, -⟩
        · exact absurd h2 hfold
        · rw [hraw] at h1; simp at h1
  · have hrawf : tagIsRawCase o.tag = false :=
      lst_bool_false_of_ne_true hraw
    rw [if_neg (by simp [hrawf])]
    have htag : o.tag = lowerBytes o.tag :=
      lst_not_rawCase_tag_eq hrawf
    by_cases hstop : o.tag = ct ∨ rc = true
    · have hcond : (lowerBytes o.tag == ct || rc) = true := by
        rcases hstop with h1 | h1
        · have e : lowerBytes o.tag = ct := by
            rw [← htag]; exact h1
          simp [e]
        · simp [h1]
      rw [if_pos hcond]
      constructor
      · intro h
        injection h with h1
        exact Or.inr ⟨hrawf, hstop, h1.symm⟩
      · intro h
        rcases h with ⟨h1, -, -⟩ | ⟨-, -, h3⟩
        · rw [hrawf] at h1; simp at h1
        · simp [h3]
    · have hcond : ¬ ((lowerBytes o.tag == ct || rc) = true) := by
        intro hc
        apply hstop
        simp only [Bool.or_eq_true] at hc
        rcases hc with hc | hc
        · exact Or.inl (by rw [htag]; exact beq_iff_eq.mp hc)
        · exact Or.inr hc
      rw [if_neg hcond]
      constructor
      · intro h; simp at h
      · intro h
        rcases h with ⟨h1, -, -⟩ | ⟨-, h2, -⟩
        · rw [hrawf] at h1; simp at h1
        · exact absurd h2 hstop

theorem lst_classDecide_eq_none_iff {ct : List Nat} {rc : Bool}
    {o : TagMatch} :
    lstClassDecide ct rc (lstOpenerClass o) = none ↔
      lstOpenerSkips ct rc o := by
  unfold lstClassDecide lstOpenerClass
  dsimp only
  by_cases hraw : tagIsRawCase o.tag = true
  · rw [if_pos hraw]
    by_cases hfold : lowerBytes o.tag = ct
    · rw [if_pos (by simp [hfold])]
      constructor
      · intro h; simp at h
      · intro h
        rcases h with ⟨-, h2⟩ | ⟨h1, -, -⟩
        · exact absurd hfold h2
        · rw [hraw] at h1; simp at h1
    · rw [if_neg (by simp [hfold])]
      constructor
      · intro _
        exact Or.inl ⟨hraw, hfold⟩
      · intro _; rfl
  · have hrawf : tagIsRawCase o.tag = false :=
      lst_bool_false_of_ne_true hraw
    rw [if_neg (by simp [hrawf])]
    have htag : o.tag = lowerBytes o.tag :=
      lst_not_rawCase_tag_eq hrawf
    by_cases hstop : o.tag = ct ∨ rc = true
    · have hcond : (lowerBytes o.tag == ct || rc) = true := by
        rcases hstop with h1 | h1
        · have e : lowerBytes o.tag = ct := by
            rw [← htag]; exact h1
          simp [e]
        · simp [h1]
      rw [if_pos hcond]
      constructor
      · intro h; simp at h
      · intro h
        rcases h with ⟨h1, -⟩ | ⟨-, h2, h3⟩
        · rw [hrawf] at h1; simp at h1
        · rcases hstop with hh | hh
          · exact absurd hh h2
          · rw [hh] at h3; simp at h3
    · have hcond : ¬ ((lowerBytes o.tag == ct || rc) = true) := by
        intro hc
        apply hstop
        simp only [Bool.or_eq_true] at hc
        rcases hc with hc | hc
        · exact Or.inl (by rw [htag]; exact beq_iff_eq.mp hc)
        · exact Or.inr hc
      rw [if_neg hcond]
      constructor
      · intro _
        have hc1 : o.tag ≠ ct := fun hh => hstop (Or.inl hh)
        have hc2 : rc = false :=
          lst_bool_false_of_ne_true (fun hh => hstop (Or.inr hh))
        exact Or.inr ⟨hrawf, hc1, hc2⟩
      · intro _; rfl

/-- An opener that does not stop, at either flag, skips. (The two
    predicates of LeanFtml.Proof.ProofList are complementary.) -/
theorem lst_opener_skips_of_not_stops {ct : List Nat} {rc : Bool}
    {o : TagMatch}
    (h : ¬ (lstOpenerStops ct rc o true ∨ lstOpenerStops ct rc o false)) :
    lstOpenerSkips ct rc o := by
  by_cases hraw : tagIsRawCase o.tag = true
  · by_cases hfold : lowerBytes o.tag = ct
    · exfalso
      exact h (Or.inl (Or.inl ⟨hraw, hfold, rfl⟩))
    · exact Or.inl ⟨hraw, hfold⟩
  · have hrawf : tagIsRawCase o.tag = false :=
      lst_bool_false_of_ne_true hraw
    by_cases htag : o.tag = ct
    · exfalso
      exact h (Or.inr (Or.inr ⟨hrawf, Or.inl htag, rfl⟩))
    · by_cases hrc : rc = true
      · exfalso
        exact h (Or.inr (Or.inr ⟨hrawf, Or.inr hrc, rfl⟩))
      · have hrcf : rc = false := lst_bool_false_of_ne_true hrc
        exact Or.inr ⟨hrawf, htag, hrcf⟩

/-- The walk-level decision on class lists: the class of the deciding
    opener together with the absorb/pair flag, or `none` when every
    class skips. -/
def lstOpenerDecision : List (List Nat × Bool) → List Nat → Bool →
    Option ((List Nat × Bool) × Bool)
  | [], _, _ => none
  | cls :: rest, ct, rc =>
      match lstClassDecide ct rc cls with
      | some b => some (cls, b)
      | none => lstOpenerDecision rest ct rc

theorem lst_openerDecision_sound : ∀ (stack : List TagMatch)
    (ct : List Nat) (rc : Bool) (o : TagMatch) (b : Bool),
    findPairOpener stack ct rc = some (o, b) →
    lstOpenerDecision (lstOpenerClasses stack) ct rc =
      some (lstOpenerClass o, b) := by
  intro stack
  induction stack with
  | nil =>
      intro ct rc o b h
      simp [findPairOpener] at h
  | cons x rest ih =>
      intro ct rc o b h
      have hclasses : lstOpenerClasses (x :: rest) =
          lstOpenerClass x :: lstOpenerClasses rest := rfl
      rw [hclasses]
      have hstep : lstOpenerDecision
          (lstOpenerClass x :: lstOpenerClasses rest) ct rc =
          match lstClassDecide ct rc (lstOpenerClass x) with
          | some b' => some (lstOpenerClass x, b')
          | none => lstOpenerDecision (lstOpenerClasses rest) ct rc :=
        rfl
      rw [hstep]
      by_cases hstop : lstOpenerStops ct rc x true ∨
          lstOpenerStops ct rc x false
      · have hdec : lstClassDecide ct rc (lstOpenerClass x) =
            some (tagIsRawCase x.tag) := by
          rcases hstop with hs | hs
          · have hb := lst_openerStops_b hs
            rw [hb] at hs
            exact lst_classDecide_eq_some_iff.mpr hs
          · have hb := lst_openerStops_b hs
            rw [hb] at hs
            exact lst_classDecide_eq_some_iff.mpr hs
        rw [hdec]
        rw [lst_findPairOpener_cons_of_stops x rest ct rc hstop] at h
        simp only [Option.some.injEq, Prod.mk.injEq] at h
        obtain ⟨h1, h2⟩ := h
        subst h1
        simp [h2]
      · have hskip : lstOpenerSkips ct rc x :=
          lst_opener_skips_of_not_stops hstop
        have hdec : lstClassDecide ct rc (lstOpenerClass x) = none :=
          lst_classDecide_eq_none_iff.mpr hskip
        rw [hdec]
        rw [lst_findPairOpener_cons_of_not x rest ct rc hstop] at h
        exact ih ct rc o b h

theorem lst_openerDecision_complete : ∀ (stack : List TagMatch)
    (ct : List Nat) (rc : Bool) (cls : List Nat × Bool) (b : Bool),
    lstOpenerDecision (lstOpenerClasses stack) ct rc = some (cls, b) →
    ∃ o ∈ stack, lstOpenerClass o = cls ∧
      findPairOpener stack ct rc = some (o, b) := by
  intro stack
  induction stack with
  | nil =>
      intro ct rc cls b h
      simp [lstOpenerClasses, lstOpenerDecision] at h
  | cons x rest ih =>
      intro ct rc cls b h
      have hclasses : lstOpenerClasses (x :: rest) =
          lstOpenerClass x :: lstOpenerClasses rest := rfl
      rw [hclasses] at h
      have hstep : lstOpenerDecision
          (lstOpenerClass x :: lstOpenerClasses rest) ct rc =
          match lstClassDecide ct rc (lstOpenerClass x) with
          | some b' => some (lstOpenerClass x, b')
          | none => lstOpenerDecision (lstOpenerClasses rest) ct rc :=
        rfl
      rw [hstep] at h
      cases hdec : lstClassDecide ct rc (lstOpenerClass x) with
      | some b' =>
          rw [hdec] at h
          dsimp only at h
          simp only [Option.some.injEq, Prod.mk.injEq] at h
          obtain ⟨h1, h2⟩ := h
          subst h1; subst h2
          have hstops : lstOpenerStops ct rc x b' :=
            lst_classDecide_eq_some_iff.mp hdec
          refine ⟨x, List.mem_cons_self, rfl, ?_⟩
          exact lst_findPairOpener_eq_some_iff.mpr
            ⟨[], rest, rfl, fun y hy => by simp at hy, hstops⟩
      | none =>
          rw [hdec] at h
          have hskip : lstOpenerSkips ct rc x :=
            lst_classDecide_eq_none_iff.mp hdec
          rcases ih ct rc cls b h with ⟨o, ho, hcls, hfp⟩
          refine ⟨o, List.mem_cons_of_mem x ho, hcls, ?_⟩
          rcases lst_findPairOpener_eq_some_iff.mp hfp with
            ⟨pre, post, hrest, hskips, hstops⟩
          exact lst_findPairOpener_eq_some_iff.mpr
            ⟨x :: pre, post, by simp [hrest],
             fun y hy => by
               simp only [List.mem_cons] at hy
               rcases hy with rfl | hy
               · exact hskip
               · exact hskips y hy, hstops⟩

theorem lst_openerDecision_none_iff (stack : List TagMatch)
    (ct : List Nat) (rc : Bool) :
    lstOpenerDecision (lstOpenerClasses stack) ct rc = none ↔
      findPairOpener stack ct rc = none := by
  constructor
  · intro hd
    cases hfp : findPairOpener stack ct rc with
    | none => rfl
    | some p =>
        obtain ⟨o, b⟩ := p
        have hs := lst_openerDecision_sound stack ct rc o b hfp
        rw [hd] at hs
        simp at hs
  · intro hf
    cases hd : lstOpenerDecision (lstOpenerClasses stack) ct rc with
    | none => rfl
    | some p =>
        obtain ⟨cls, b⟩ := p
        rcases lst_openerDecision_complete stack ct rc cls b hd with
          ⟨o, -, -, hfo⟩
        rw [hf] at hfo
        simp at hfo

/-- The headline quotient theorem: the pairing outcome of an opener
    stack depends only on its class list. Two stacks with equal class
    lists agree on whether a pair exists, on the absorb/pair flag,
    and their paired openers lie in the same class. -/
theorem lst_pairing_depends_only_on_classes {s₁ s₂ : List TagMatch}
    {ct : List Nat} {rc : Bool}
    (h : lstOpenerClasses s₁ = lstOpenerClasses s₂) :
    (findPairOpener s₁ ct rc).isSome =
      (findPairOpener s₂ ct rc).isSome ∧
    ∀ o₁ b₁, findPairOpener s₁ ct rc = some (o₁, b₁) →
      ∃ o₂, findPairOpener s₂ ct rc = some (o₂, b₁) ∧
        lstOpenerClass o₂ = lstOpenerClass o₁ := by
  constructor
  · cases h₁ : findPairOpener s₁ ct rc with
    | none =>
        have hd₁ : lstOpenerDecision (lstOpenerClasses s₁) ct rc =
            none := (lst_openerDecision_none_iff s₁ ct rc).mpr h₁
        have hd₂ : lstOpenerDecision (lstOpenerClasses s₂) ct rc =
            none := by rw [← h]; exact hd₁
        have h₂ : findPairOpener s₂ ct rc = none :=
          (lst_openerDecision_none_iff s₂ ct rc).mp hd₂
        simp [h₁, h₂]
    | some p =>
        obtain ⟨o₁, b₁⟩ := p
        have hd₁ := lst_openerDecision_sound s₁ ct rc o₁ b₁ h₁
        have hd₂ : lstOpenerDecision (lstOpenerClasses s₂) ct rc =
            some (lstOpenerClass o₁, b₁) := by rw [← h]; exact hd₁
        rcases lst_openerDecision_complete s₂ ct rc
          (lstOpenerClass o₁) b₁ hd₂ with ⟨o₂, -, -, h₂⟩
        simp [h₁, h₂]
  · intro o₁ b₁ h₁
    have hd₁ := lst_openerDecision_sound s₁ ct rc o₁ b₁ h₁
    have hd₂ : lstOpenerDecision (lstOpenerClasses s₂) ct rc =
        some (lstOpenerClass o₁, b₁) := by rw [← h]; exact hd₁
    rcases lst_openerDecision_complete s₂ ct rc
      (lstOpenerClass o₁) b₁ hd₂ with ⟨o₂, -, hcls, h₂⟩
    exact ⟨o₂, h₂, hcls⟩

/-! ## Axiom audit for this file's headline theorems -/

#print axioms lst_classDecide_eq_some_iff
#print axioms lst_classDecide_eq_none_iff
#print axioms lst_openerDecision_sound
#print axioms lst_openerDecision_complete
#print axioms lst_openerDecision_none_iff
#print axioms lst_pairing_depends_only_on_classes

end LeanFtml
