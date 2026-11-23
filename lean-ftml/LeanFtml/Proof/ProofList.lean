/-
  LeanFtml.Proof.ProofList — the List family's Class C universal core
  (ADVISOR-PROOF-POLICY §2.2 Class C and §4.4, the `ListRules` row).

  The policy's Class C shape for `List` explicit blocks is a hybrid:
  a universal core proved in Lean, plus a proof-grade bounded
  enumeration (the certificate lives in LeanFtml.Proof.ProofListCert,
  with the differential run recorded there). This file is the
  universal core:

  * the raw-case pairing asymmetry of the explicit-block automaton,
    as an exact characterization of `findPairOpener` (the first
    non-skipping stack element decides: it either absorbs the closer
    when it is a raw-case opener whose folded tag matches, or pairs
    when it is a lowercase opener) and its corollaries for `findPair`
    (a paired opener is never raw-case, is an opener, and both
    partners are members of the tag list);
  * the native `*`/`#` list core: `lineItem`'s exact shape,
    `nativeRunAt`/`nativeRunExtend` partition and conservation,
    `collectRawItems` bounds and item typing, the `rawSurvive`
    backward fixpoint's length and all-survive laws, and
    `filterNativeItems` as a sublist that is the identity when every
    item survives;
  * the depth-stack token discipline: `emitList`/`addTok` append
    exactly one token, and `closeListLevel` pops exactly one level;
  * `listRule`'s well-formedness preservation in the conditional
    form the programme uses while the F1 byte bridges are open (the
    shape of `brk_rule_wf_conditional` in LeanFtml.ProofBreak): the
    work-side obligation is the single hypothesis `hnew`, and the
    token-side obligations are stated exactly, because `List`'s byte
    function is not append-only on the nose (it rewrites stored
    tokens' `trail` options through `setTrail`). The unconditional
    statement and `TokEquiv` preservation for `listRule` are named
    remainders in REPORT-PROOF-LIST.md.
-/
import LeanFtml.ListRules
import LeanFtml.Pipeline
import LeanFtml.ProofInterface

namespace LeanFtml

/-! ## 1. `lowerBytes` and `tagIsRawCase` facts -/

theorem lst_lowerBytes_length (bs : List Nat) :
    (lowerBytes bs).length = bs.length := by
  simp [lowerBytes]

/-- Projections out of a `Bool.and` that evaluates to `true`. -/
theorem lst_and_eq_true_left {a b : Bool} (h : (a && b) = true) :
    a = true := by
  cases a with
  | true => rfl
  | false => simp at h

theorem lst_and_eq_true_right {a b : Bool} (h : (a && b) = true) :
    b = true := by
  cases b with
  | true => rfl
  | false => simp at h

theorem lst_lowerBytes_idempotent (bs : List Nat) :
    lowerBytes (lowerBytes bs) = lowerBytes bs := by
  induction bs with
  | nil => rfl
  | cons b bs ih =>
      have e0 : lowerBytes (b :: bs) =
          (if (decide (65 ≤ b) && decide (b ≤ 90)) = true then b + 32
            else b) :: lowerBytes bs := rfl
      rw [e0]
      have e1 : lowerBytes
          ((if (decide (65 ≤ b) && decide (b ≤ 90)) = true then b + 32
              else b) :: lowerBytes bs) =
          (if (decide (65 ≤
              (if (decide (65 ≤ b) && decide (b ≤ 90)) = true then b + 32
                else b)) &&
            decide ((if (decide (65 ≤ b) && decide (b ≤ 90)) = true
                then b + 32 else b) ≤ 90)) = true
            then (if (decide (65 ≤ b) && decide (b ≤ 90)) = true
                then b + 32 else b) + 32
            else (if (decide (65 ≤ b) && decide (b ≤ 90)) = true
                then b + 32 else b)) :: lowerBytes (lowerBytes bs) := rfl
      rw [e1, ih]
      by_cases h : 65 ≤ b ∧ b ≤ 90
      · have ec : (decide (65 ≤ b) && decide (b ≤ 90)) = true := by
          simp [h]
        rw [if_pos ec]
        have e2 : ¬ ((decide (65 ≤ b + 32) &&
            decide (b + 32 ≤ 90)) = true) := by
          intro hc
          have hle : b + 32 ≤ 90 :=
            of_decide_eq_true (lst_and_eq_true_right hc)
          omega
        rw [if_neg e2]
      · have ec : ¬ ((decide (65 ≤ b) && decide (b ≤ 90)) = true) := by
          intro hc
          apply h
          exact ⟨of_decide_eq_true (lst_and_eq_true_left hc),
            of_decide_eq_true (lst_and_eq_true_right hc)⟩
        rw [if_neg ec, if_neg ec]

theorem lst_tagIsRawCase_eq_false {t : List Nat} :
    tagIsRawCase t = false ↔ lowerBytes t = t := by
  cases hbeq : (t == lowerBytes t) with
  | true =>
      have h1 : t = lowerBytes t := beq_iff_eq.mp hbeq
      have h2 : tagIsRawCase t = false := by
        have hrfl : tagIsRawCase t = !(t == lowerBytes t) := rfl
        rw [hrfl, hbeq, Bool.not_true]
      rw [h2]
      constructor
      · intro _; exact h1.symm
      · intro _; rfl
  | false =>
      have h1 : t ≠ lowerBytes t := by
        intro hh
        rw [beq_iff_eq.mpr hh] at hbeq
        exact Bool.noConfusion hbeq
      have h2 : tagIsRawCase t = true := by
        have hrfl : tagIsRawCase t = !(t == lowerBytes t) := rfl
        rw [hrfl, hbeq, Bool.not_false]
      constructor
      · intro h
        rw [h2] at h
        exact Bool.noConfusion h
      · intro h
        exact absurd h.symm h1

theorem lst_tagIsRawCase_eq_true {t : List Nat} :
    tagIsRawCase t = true ↔ t ≠ lowerBytes t := by
  cases hbeq : (t == lowerBytes t) with
  | true =>
      have h1 : t = lowerBytes t := beq_iff_eq.mp hbeq
      have h2 : tagIsRawCase t = false := by
        have hrfl : tagIsRawCase t = !(t == lowerBytes t) := rfl
        rw [hrfl, hbeq, Bool.not_true]
      constructor
      · intro h
        rw [h2] at h
        exact Bool.noConfusion h
      · intro h
        exact absurd h1 h
  | false =>
      have h1 : t ≠ lowerBytes t := by
        intro hh
        rw [beq_iff_eq.mpr hh] at hbeq
        exact Bool.noConfusion hbeq
      have h2 : tagIsRawCase t = true := by
        have hrfl : tagIsRawCase t = !(t == lowerBytes t) := rfl
        rw [hrfl, hbeq, Bool.not_false]
      rw [h2]
      constructor
      · intro _; exact h1
      · intro _; rfl

/-- A `Bool` that is not `true` is `false` (core Lean has no
    `by_contra`-free one-liner for this, so it is proved once here). -/
theorem lst_bool_false_of_ne_true {b : Bool} (h : ¬ b = true) :
    b = false := by
  generalize hgb : b = b'
  cases b' with
  | false => rfl
  | true => exact absurd hgb h

/-- A tag that is not raw-case is its own lowercase fold. This is the
    fact that lets the pairing decision read a lowercase opener's tag
    through its fold alone (the quotient theorem in
    LeanFtml.Proof.ProofListQuotient). -/
theorem lst_not_rawCase_tag_eq {t : List Nat}
    (h : tagIsRawCase t = false) : t = lowerBytes t :=
  (lst_tagIsRawCase_eq_false.mp h).symm

/-! ## 2. The pairing kernel: `findPairOpener` characterized exactly -/

/-- The stack elements `findPairOpener` walks past for closer fold
    `ct` and closer raw-case flag `rc`: a raw-case opener whose fold
    differs from `ct`, or a lowercase opener whose tag differs from
    `ct` while the closer is not raw-case. -/
def lstOpenerSkips (ct : List Nat) (rc : Bool) (o : TagMatch) : Prop :=
  (tagIsRawCase o.tag = true ∧ lowerBytes o.tag ≠ ct) ∨
  (tagIsRawCase o.tag = false ∧ o.tag ≠ ct ∧ rc = false)

/-- The stack element `findPairOpener` stops at: a raw-case opener
    whose fold matches absorbs the closer (`b = true`); a lowercase
    opener whose tag matches, or any lowercase opener when the closer
    is raw-case, pairs with it (`b = false`). -/
def lstOpenerStops (ct : List Nat) (rc : Bool) (o : TagMatch)
    (b : Bool) : Prop :=
  (tagIsRawCase o.tag = true ∧ lowerBytes o.tag = ct ∧ b = true) ∨
  (tagIsRawCase o.tag = false ∧ (o.tag = ct ∨ rc = true) ∧ b = false)

theorem lst_openerStops_b {ct : List Nat} {rc : Bool} {o : TagMatch}
    {b : Bool} (h : lstOpenerStops ct rc o b) :
    b = tagIsRawCase o.tag := by
  rcases h with ⟨h1, -, h3⟩ | ⟨h1, -, h3⟩ <;> simp [h1, h3]

theorem lst_opener_not_skips_of_stops {ct : List Nat} {rc : Bool}
    {o : TagMatch} {b : Bool} (h : lstOpenerStops ct rc o b) :
    ¬ lstOpenerSkips ct rc o := by
  rcases h with ⟨h1, h2, -⟩ | ⟨h1, h2, -⟩
  · intro hs
    rcases hs with ⟨h3, h4⟩ | ⟨h3, -, -⟩
    · exact h4 h2
    · rw [h1] at h3; simp at h3
  · intro hs
    rcases hs with ⟨h3, -⟩ | ⟨-, h3, h4⟩
    · rw [h1] at h3; simp at h3
    · rcases h2 with h2 | h2
      · exact h3 h2
      · rw [h2] at h4; simp at h4

/-- One step of `findPairOpener` on a cons stack whose head stops:
    the head decides, with its own raw-case flag. (Stated without an
    `if` over the stops disjunction, whose `Decidable` instance is
    not available for the predicate form.) -/
theorem lst_findPairOpener_cons_of_stops (x : TagMatch)
    (rest : List TagMatch) (ct : List Nat) (rc : Bool)
    (h : lstOpenerStops ct rc x true ∨ lstOpenerStops ct rc x false) :
    findPairOpener (x :: rest) ct rc = some (x, tagIsRawCase x.tag) := by
  have hstep : findPairOpener (x :: rest) ct rc =
      if tagIsRawCase x.tag then
        if lowerBytes x.tag == ct then some (x, true)
        else findPairOpener rest ct rc
      else if x.tag == ct || rc then some (x, false)
      else findPairOpener rest ct rc := rfl
  rw [hstep]
  by_cases hraw : tagIsRawCase x.tag = true
  · rw [if_pos hraw]
    rcases h with (⟨-, h2, -⟩ | ⟨h1, -, -⟩) | (⟨-, -, h3⟩ | ⟨h1, -, -⟩)
    · rw [if_pos (by simp [h2]), hraw]
    · rw [hraw] at h1; exact Bool.noConfusion h1
    · exact Bool.noConfusion h3
    · rw [hraw] at h1; exact Bool.noConfusion h1
  · have hrawf : tagIsRawCase x.tag = false :=
      lst_bool_false_of_ne_true hraw
    rw [if_neg (by simp [hrawf])]
    rcases h with (⟨h1, -, -⟩ | ⟨-, -, h3⟩) | (⟨-, -, h3⟩ | ⟨-, h2, -⟩)
    · rw [hrawf] at h1; exact Bool.noConfusion h1
    · exact Bool.noConfusion h3
    · exact Bool.noConfusion h3
    · have hcond : (x.tag == ct || rc) = true := by
        rcases h2 with h2 | h2
        · simp [h2]
        · simp [h2]
      rw [if_pos hcond, hrawf]

/-- One step of `findPairOpener` on a cons stack whose head does not
    stop: the walk continues on the tail. -/
theorem lst_findPairOpener_cons_of_not (x : TagMatch)
    (rest : List TagMatch) (ct : List Nat) (rc : Bool)
    (h : ¬ (lstOpenerStops ct rc x true ∨
      lstOpenerStops ct rc x false)) :
    findPairOpener (x :: rest) ct rc = findPairOpener rest ct rc := by
  have hstep : findPairOpener (x :: rest) ct rc =
      if tagIsRawCase x.tag then
        if lowerBytes x.tag == ct then some (x, true)
        else findPairOpener rest ct rc
      else if x.tag == ct || rc then some (x, false)
      else findPairOpener rest ct rc := rfl
  rw [hstep]
  by_cases hraw : tagIsRawCase x.tag = true
  · rw [if_pos hraw]
    have hfold : lowerBytes x.tag ≠ ct := by
      intro hf
      exact h (Or.inl (Or.inl ⟨hraw, hf, rfl⟩))
    rw [if_neg (by simp [hfold])]
  · have hrawf : tagIsRawCase x.tag = false :=
      lst_bool_false_of_ne_true hraw
    rw [if_neg (by simp [hrawf])]
    have hcond : ¬ ((x.tag == ct || rc) = true) := by
      intro hc
      apply h
      refine Or.inr (Or.inr ⟨hrawf, ?_, rfl⟩)
      simp only [Bool.or_eq_true] at hc
      rcases hc with hc | hc
      · exact Or.inl (beq_iff_eq.mp hc)
      · exact Or.inr hc
    rw [if_neg hcond]

theorem lst_findPairOpener_eq_some_iff {stack : List TagMatch}
    {ct : List Nat} {rc : Bool} {o : TagMatch} {b : Bool} :
    findPairOpener stack ct rc = some (o, b) ↔
      ∃ pre post : List TagMatch, stack = pre ++ o :: post ∧
        (∀ x ∈ pre, lstOpenerSkips ct rc x) ∧
        lstOpenerStops ct rc o b := by
  induction stack with
  | nil =>
      constructor
      · intro h; simp [findPairOpener] at h
      · rintro ⟨pre, post, h, -, -⟩
        cases pre with
        | nil => simp at h
        | cons x pre' => simp at h
  | cons x rest ih =>
      constructor
      · intro h
        by_cases hstop : lstOpenerStops ct rc x true ∨
            lstOpenerStops ct rc x false
        · rw [lst_findPairOpener_cons_of_stops x rest ct rc hstop] at h
          simp only [Option.some.injEq, Prod.mk.injEq] at h
          obtain ⟨h1, h2⟩ := h
          subst h1
          refine ⟨[], rest, rfl, fun y hy => by simp at hy, ?_⟩
          have hb : b = tagIsRawCase x.tag := h2.symm
          rcases hstop with hs | hs
          · have hb2 : b = true := hb.trans (lst_openerStops_b hs).symm
            rw [hb2]; exact hs
          · have hb2 : b = false := hb.trans (lst_openerStops_b hs).symm
            rw [hb2]; exact hs
        · rw [lst_findPairOpener_cons_of_not x rest ct rc hstop] at h
          rcases ih.mp h with ⟨pre, post, hrest, hskips, hstops⟩
          refine ⟨x :: pre, post, by simp [hrest], ?_, hstops⟩
          intro y hy
          simp only [List.mem_cons] at hy
          rcases hy with rfl | hy
          · refine Classical.byContradiction (fun hskip => ?_)
            apply hstop
            by_cases hraw : tagIsRawCase y.tag = true
            · have hfold : lowerBytes y.tag = ct := by
                refine Classical.byContradiction (fun hf => ?_)
                exact hskip (Or.inl ⟨hraw, hf⟩)
              exact Or.inl (Or.inl ⟨hraw, hfold, rfl⟩)
            · have hrawf : tagIsRawCase y.tag = false :=
                lst_bool_false_of_ne_true hraw
              have htag : y.tag = ct ∨ rc = true := by
                refine Classical.byContradiction (fun hc => ?_)
                have hc1 : y.tag ≠ ct := fun hh => hc (Or.inl hh)
                have hc2 : rc = false := by
                  generalize hrc : rc = b
                  cases b with
                  | false => rfl
                  | true => exact (hc (Or.inr hrc)).elim
                exact hskip (Or.inr ⟨hrawf, hc1, hc2⟩)
              exact Or.inr (Or.inr ⟨hrawf, htag, rfl⟩)
          · exact hskips y hy
      · rintro ⟨pre, post, hstack, hskips, hstops⟩
        cases pre with
        | nil =>
            simp only [List.nil_append] at hstack
            injection hstack with h1 h2
            rw [h1, h2]
            -- o stops, so the head decides with o's own flag
            have hstop' : lstOpenerStops ct rc o true ∨
                lstOpenerStops ct rc o false := by
              by_cases hb2 : b = true
              · exact Or.inl (by rwa [hb2] at hstops)
              · have hb3 : b = false := lst_bool_false_of_ne_true hb2
                exact Or.inr (by rwa [hb3] at hstops)
            rw [lst_findPairOpener_cons_of_stops o post ct rc hstop']
            congr 1
            exact Prod.ext rfl (lst_openerStops_b hstops).symm
        | cons y pre' =>
            simp only [List.cons_append] at hstack
            injection hstack with h1 h2
            subst h1
            have hskip : lstOpenerSkips ct rc x :=
              hskips x (by simp)
            have hnot : ¬ (lstOpenerStops ct rc x true ∨
                lstOpenerStops ct rc x false) := by
              rintro (hs | hs) <;>
                exact lst_opener_not_skips_of_stops hs hskip
            rw [lst_findPairOpener_cons_of_not x rest ct rc hnot]
            apply ih.mpr
            refine ⟨pre', post, h2, ?_, hstops⟩
            intro z hz
            exact hskips z (List.mem_cons_of_mem x hz)

theorem lst_findPairOpener_none_iff {stack : List TagMatch}
    {ct : List Nat} {rc : Bool} :
    findPairOpener stack ct rc = none ↔
      ∀ o ∈ stack, lstOpenerSkips ct rc o := by
  induction stack with
  | nil =>
      constructor
      · intro _ o ho; simp at ho
      · intro _; rfl
  | cons x rest ih =>
      constructor
      · intro h y hy
        simp only [List.mem_cons] at hy
        have hnot : ¬ (lstOpenerStops ct rc x true ∨
            lstOpenerStops ct rc x false) := by
          intro hc
          rw [lst_findPairOpener_cons_of_stops x rest ct rc hc] at h
          simp at h
        rw [lst_findPairOpener_cons_of_not x rest ct rc hnot] at h
        rcases hy with rfl | hy
        · refine Classical.byContradiction (fun hskip => ?_)
          apply hnot
          by_cases hraw : tagIsRawCase y.tag = true
          · have hfold : lowerBytes y.tag = ct := by
              refine Classical.byContradiction (fun hf => ?_)
              exact hskip (Or.inl ⟨hraw, hf⟩)
            exact Or.inl (Or.inl ⟨hraw, hfold, rfl⟩)
          · have hrawf : tagIsRawCase y.tag = false :=
              lst_bool_false_of_ne_true hraw
            have htag : y.tag = ct ∨ rc = true := by
              refine Classical.byContradiction (fun hc => ?_)
              have hc1 : y.tag ≠ ct := fun hh => hc (Or.inl hh)
              have hc2 : rc = false := by
                generalize hrc : rc = b
                cases b with
                | false => rfl
                | true => exact (hc (Or.inr hrc)).elim
              exact hskip (Or.inr ⟨hrawf, hc1, hc2⟩)
            exact Or.inr (Or.inr ⟨hrawf, htag, rfl⟩)
        · exact ih.mp h y hy
      · intro h
        have hskip : lstOpenerSkips ct rc x := h x (by simp)
        have hnot : ¬ (lstOpenerStops ct rc x true ∨
            lstOpenerStops ct rc x false) := by
          rintro (hs | hs) <;>
            exact lst_opener_not_skips_of_stops hs hskip
        rw [lst_findPairOpener_cons_of_not x rest ct rc hnot]
        exact ih.mpr (fun y hy => h y (List.mem_cons_of_mem x hy))

theorem lst_findPairOpener_mem {stack : List TagMatch}
    {ct : List Nat} {rc : Bool} {o : TagMatch} {b : Bool}
    (h : findPairOpener stack ct rc = some (o, b)) : o ∈ stack := by
  rcases lst_findPairOpener_eq_some_iff.mp h with
    ⟨pre, post, hstack, -, -⟩
  rw [hstack]
  simp

theorem lst_findPairOpener_pair_not_rawCase {stack : List TagMatch}
    {ct : List Nat} {rc : Bool} {o : TagMatch}
    (h : findPairOpener stack ct rc = some (o, false)) :
    tagIsRawCase o.tag = false := by
  rcases lst_findPairOpener_eq_some_iff.mp h with
    ⟨-, -, -, -, hstops⟩
  have hb := lst_openerStops_b hstops
  simp [hb]

theorem lst_findPairOpener_absorb_spec {stack : List TagMatch}
    {ct : List Nat} {rc : Bool} {o : TagMatch}
    (h : findPairOpener stack ct rc = some (o, true)) :
    tagIsRawCase o.tag = true ∧ lowerBytes o.tag = ct := by
  rcases lst_findPairOpener_eq_some_iff.mp h with
    ⟨-, -, -, -, hstops⟩
  rcases hstops with ⟨h1, h2, -⟩ | ⟨h1, -, h3⟩
  · exact ⟨h1, h2⟩
  · simp at h3

/-! ## 3. `findPair` corollaries

`findPair` walks the tag list with an opener stack. Its one general
law set: a returned pair's opener is never raw-case, is an opener,
and both partners occur in the tag list, the closer as a non-opener;
a tag list of nothing but openers pairs nothing. REFCORR16: the
walk takes the source as well, and a closer whose partner is an
inner opener may instead pair with the stack's outermost opener
(the same-type, item-less override); the outermost opener is in
the stack, is an opener, and is never raw-case under the override's
own condition, so the law set is unchanged. -/

/-- Membership of the stack's last element (the REFCORR16
    override returns it as a pair opener). -/
theorem lst_getLast_mem : ∀ {l : List TagMatch} {a : TagMatch},
    l.getLast? = some a → a ∈ l := by
  intro l
  induction l with
  | nil =>
      intro a h
      simp at h
  | cons x xs ih =>
      intro a h
      cases xs with
      | nil =>
          simp at h
          subst h
          exact List.mem_cons_self
      | cons y ys =>
          have h' : (x :: y :: ys).getLast? = (y :: ys).getLast? := rfl
          rw [h'] at h
          exact List.mem_cons_of_mem x (ih h)

theorem lst_findPair_go_spec : ∀ (src : List Nat) (ts : List TagMatch)
    (stack : List TagMatch) (o c : TagMatch),
    (∀ x ∈ stack, x.isOpen = true) →
    findPair.go src ts stack = some (o, c) →
    tagIsRawCase o.tag = false ∧ o.isOpen = true ∧ c.isOpen = false ∧
    (o ∈ stack ∨ o ∈ ts) ∧ c ∈ ts := by
  intro src ts
  induction ts with
  | nil =>
      intro stack o c _ h
      simp [findPair.go] at h
  | cons t rest ih =>
      intro stack o c hstack h
      have hstep : findPair.go src (t :: rest) stack =
          if t.isOpen then findPair.go src rest (t :: stack)
          else match findPairOpener stack (lowerBytes t.tag)
              (tagIsRawCase t.tag) with
            | some (op, true) => findPair.go src rest stack
            | some (op, false) =>
                match stack.getLast? with
                | some bottom =>
                    if bottom.start != op.start &&
                        !tagIsRawCase bottom.tag &&
                        lowerBytes t.tag == bottom.tag &&
                        !(existsLitCI (litBytes "[[/li]]")
                          ((src.drop bottom.start).take
                            (t.start - bottom.start))) then
                      some (bottom, t)
                    else some (op, t)
                | none => some (op, t)
            | none => findPair.go src rest stack := rfl
      rw [hstep] at h
      by_cases ht : t.isOpen = true
      · rw [if_pos ht] at h
        have hstack' : ∀ x ∈ t :: stack, x.isOpen = true := by
          intro x hx
          simp only [List.mem_cons] at hx
          rcases hx with rfl | hx
          · exact ht
          · exact hstack x hx
        rcases ih (t :: stack) o c hstack' h with
          ⟨h1, h2, h3, h4, h5⟩
        refine ⟨h1, h2, h3, ?_, List.mem_cons_of_mem t h5⟩
        rcases h4 with h4 | h4
        · simp only [List.mem_cons] at h4
          rcases h4 with rfl | h4
          · exact Or.inr (List.mem_cons_self)
          · exact Or.inl h4
        · exact Or.inr (List.mem_cons_of_mem t h4)
      · have htf : t.isOpen = false := lst_bool_false_of_ne_true ht
        rw [if_neg (by simp [htf])] at h
        cases hpo : findPairOpener stack (lowerBytes t.tag)
            (tagIsRawCase t.tag) with
        | none =>
            rw [hpo] at h
            rcases ih stack o c hstack h with ⟨h1, h2, h3, h4, h5⟩
            exact ⟨h1, h2, h3,
              h4.imp_right (List.mem_cons_of_mem t),
              List.mem_cons_of_mem t h5⟩
        | some p =>
            obtain ⟨op, fl⟩ := p
            cases fl with
            | true =>
                rw [hpo] at h
                rcases ih stack o c hstack h with ⟨h1, h2, h3, h4, h5⟩
                exact ⟨h1, h2, h3,
                  h4.imp_right (List.mem_cons_of_mem t),
                  List.mem_cons_of_mem t h5⟩
            | false =>
                rw [hpo] at h
                cases hlast : stack.getLast? with
                | none =>
                    try rw [hlast] at h
                    dsimp only at h
                    simp only [Option.some.injEq, Prod.mk.injEq] at h
                    obtain ⟨h1, h2⟩ := h
                    subst h1; subst h2
                    refine ⟨lst_findPairOpener_pair_not_rawCase hpo,
                      hstack op (lst_findPairOpener_mem hpo), htf,
                      Or.inl (lst_findPairOpener_mem hpo),
                      List.mem_cons_self⟩
                | some bottom =>
                    try rw [hlast] at h
                    dsimp only at h
                    by_cases hcond : (bottom.start != op.start &&
                        !tagIsRawCase bottom.tag &&
                        lowerBytes t.tag == bottom.tag &&
                        !(existsLitCI (litBytes "[[/li]]")
                          ((src.drop bottom.start).take
                            (t.start - bottom.start)))) = true
                    · rw [if_pos hcond] at h
                      simp only [Option.some.injEq, Prod.mk.injEq] at h
                      obtain ⟨h1, h2⟩ := h
                      subst h1; subst h2
                      have hmem : bottom ∈ stack := lst_getLast_mem hlast
                      have hnotraw : tagIsRawCase bottom.tag = false := by
                        cases htr : tagIsRawCase bottom.tag with
                        | false => rfl
                        | true => simp [htr] at hcond
                      refine ⟨hnotraw, hstack bottom hmem, htf,
                        Or.inl hmem, List.mem_cons_self⟩
                    · rw [if_neg hcond] at h
                      simp only [Option.some.injEq, Prod.mk.injEq] at h
                      obtain ⟨h1, h2⟩ := h
                      subst h1; subst h2
                      refine ⟨lst_findPairOpener_pair_not_rawCase hpo,
                        hstack op (lst_findPairOpener_mem hpo), htf,
                        Or.inl (lst_findPairOpener_mem hpo),
                        List.mem_cons_self⟩

theorem lst_findPair_pair_not_rawCase {src : List Nat} {tags : List TagMatch}
    {o c : TagMatch} (h : findPair src tags = some (o, c)) :
    tagIsRawCase o.tag = false :=
  (lst_findPair_go_spec src tags [] o c (fun x hx => by simp at hx) h).1

theorem lst_findPair_opener_isOpen {src : List Nat} {tags : List TagMatch}
    {o c : TagMatch} (h : findPair src tags = some (o, c)) :
    o.isOpen = true :=
  (lst_findPair_go_spec src tags [] o c (fun x hx => by simp at hx) h).2.1

theorem lst_findPair_closer_not_open {src : List Nat} {tags : List TagMatch}
    {o c : TagMatch} (h : findPair src tags = some (o, c)) :
    c.isOpen = false :=
  (lst_findPair_go_spec src tags [] o c (fun x hx => by simp at hx) h).2.2.1

theorem lst_findPair_mem {src : List Nat} {tags : List TagMatch} {o c : TagMatch}
    (h : findPair src tags = some (o, c)) : o ∈ tags ∧ c ∈ tags := by
  have hspec := lst_findPair_go_spec src tags [] o c
    (fun x hx => by simp at hx) h
  exact ⟨hspec.2.2.2.1.elim (fun hx => by simp at hx) id, hspec.2.2.2.2⟩

theorem lst_findPair_none_of_all_open {src : List Nat} {tags : List TagMatch}
    (h : ∀ t ∈ tags, t.isOpen = true) : findPair src tags = none := by
  cases hfind : findPair src tags with
  | none => rfl
  | some p =>
      obtain ⟨o, c⟩ := p
      have hspec := lst_findPair_go_spec src tags [] o c
        (fun x hx => by simp at hx) hfind
      have hct := h c hspec.2.2.2.2
      rw [hspec.2.2.1] at hct
      simp at hct

/-! ## 4. The native `*`/`#` core -/

theorem lst_firstLine_spec {s line rest : List Nat}
    (h : firstLine s = some (line, rest)) : s = line ++ rest := by
  unfold firstLine at h
  rcases Option.map_eq_some_iff.mp h with ⟨i, -, hfi⟩
  injection hfi with h1 h2
  subst h1; subst h2
  exact (List.take_append_drop (i + 1) s).symm

theorem lst_nativeRunExtend_conservation : ∀ (f : Nat) (m : Nat)
    (acc rest run rest' : List Nat),
    nativeRunExtend m acc rest f = some (run, rest') →
    acc ++ rest = run ++ rest' := by
  intro f
  induction f with
  | zero =>
      intro m acc rest run rest' h
      simp [nativeRunExtend] at h
  | succ f ih =>
      intro m acc rest run rest' h
      have hstep : nativeRunExtend m acc rest (f + 1) =
          if lookaheadBlocks m rest then
            match firstLine rest with
            | some (line, rest'') => nativeRunExtend m (acc ++ line) rest'' f
            | none => none
          else some (acc, rest) := rfl
      rw [hstep] at h
      by_cases hb : lookaheadBlocks m rest
      · rw [if_pos hb] at h
        cases hfl : firstLine rest with
        | none => rw [hfl] at h; simp at h
        | some lr =>
            obtain ⟨line, rest''⟩ := lr
            rw [hfl] at h
            have ih' := ih m (acc ++ line) rest'' run rest' h
            have hpart := lst_firstLine_spec hfl
            calc acc ++ rest = acc ++ (line ++ rest'') := by rw [hpart]
              _ = (acc ++ line) ++ rest'' := by rw [List.append_assoc]
              _ = run ++ rest' := ih'
      · rw [if_neg hb] at h
        simp only [Option.some.injEq, Prod.mk.injEq] at h
        obtain ⟨h1, h2⟩ := h
        subst h1; subst h2
        rfl

theorem lst_nativeRunAt_spec {s run rest : List Nat}
    (h : nativeRunAt s = some (run, rest)) :
    s = run ++ rest ∧ (s.take 2 = [42, 32] ∨ s.take 2 = [35, 32]) := by
  cases s with
  | nil => simp [nativeRunAt] at h
  | cons a s' =>
      cases s' with
      | nil => simp [nativeRunAt] at h
      | cons b s'' =>
          by_cases hb : b = 32
          · subst hb
            have hstep : nativeRunAt (a :: 32 :: s'') =
                if a == 42 || a == 35 then
                  match firstLine (a :: 32 :: s'') with
                  | some (line, rest0) =>
                      nativeRunExtend a line rest0 (rest0.length + 1)
                  | none => none
                else none := rfl
            rw [hstep] at h
            by_cases hm : a = 42 ∨ a = 35
            · have hcond : (a == 42 || a == 35) = true := by
                rcases hm with rfl | rfl <;> simp
              rw [if_pos hcond] at h
              cases hfl : firstLine (a :: 32 :: s'') with
              | none => rw [hfl] at h; simp at h
              | some lr =>
                  obtain ⟨line, rest0⟩ := lr
                  rw [hfl] at h
                  have hcons := lst_nativeRunExtend_conservation
                    (rest0.length + 1) a line rest0 run rest h
                  have hpart := lst_firstLine_spec hfl
                  refine ⟨?_, ?_⟩
                  · rw [hpart]; exact hcons
                  · rcases hm with rfl | rfl <;> simp
            · have hcond : ¬ ((a == 42 || a == 35) = true) := by
                intro hc
                apply hm
                simp only [Bool.or_eq_true] at hc
                rcases hc with hc | hc
                · exact Or.inl (beq_iff_eq.mp hc)
                · exact Or.inr (beq_iff_eq.mp hc)
              rw [if_neg hcond] at h
              simp at h
          · simp [nativeRunAt, hb] at h

theorem lst_lineItem_spec {line : List Nat} {it : RawItem}
    (h : lineItem line = some it) :
    it.depth = (line.takeWhile (· == 32)).length ∧
    ∃ body : List Nat, line.drop it.depth = it.typ :: 32 :: body ∧
      it.body = ltrimSpaceTab body ∧ (it.typ = 42 ∨ it.typ = 35) := by
  have h0 := h
  have hdef : lineItem line =
      match line.drop (line.takeWhile (· == 32)).length with
      | m :: 32 :: body =>
          if (m == 42 || m == 35) = true then
            some ({ depth := (line.takeWhile (· == 32)).length, typ := m, body := ltrimSpaceTab body } : RawItem)
          else none
      | _ => none := rfl
  rw [hdef] at h
  cases hd : line.drop (line.takeWhile (· == 32)).length with
  | nil => simp [hd] at h
  | cons m tl =>
      cases tl with
      | nil => simp [hd] at h
      | cons b body =>
          by_cases hb : b = 32
          · subst hb
            rw [hd] at h
            have h' : (if (m == 42 || m == 35) = true then
                some ({ depth := (line.takeWhile (· == 32)).length, typ := m, body := ltrimSpaceTab body } : RawItem)
                else none) = some it := h
            by_cases hm : m = 42 ∨ m = 35
            · have hcond : (m == 42 || m == 35) = true := by
                rcases hm with rfl | rfl <;> simp
              rw [if_pos hcond] at h'
              simp only [Option.some.injEq] at h'
              subst h'
              exact ⟨rfl, body, hd, rfl, hm⟩
            · have hcond : ¬ ((m == 42 || m == 35) = true) := by
                intro hc
                apply hm
                simp only [Bool.or_eq_true] at hc
                rcases hc with hc | hc
                · exact Or.inl (beq_iff_eq.mp hc)
                · exact Or.inr (beq_iff_eq.mp hc)
              rw [if_neg hcond] at h'
              simp at h'
          · simp [lineItem, hd, hb] at h0

theorem lst_collectRawItems_go_length : ∀ (f : Nat) (s : List Nat),
    (collectRawItems.go s f).length ≤ f := by
  intro f
  induction f with
  | zero =>
      intro s
      cases s with
      | nil => simp [collectRawItems.go]
      | cons b s' => simp [collectRawItems.go]
  | succ f ih =>
      intro s
      cases s with
      | nil => simp [collectRawItems.go]
      | cons b s' =>
          have hstep : collectRawItems.go (b :: s') (f + 1) =
              match firstLine (b :: s') with
              | some (line, rest) =>
                  (match lineItem (line.dropLast) with
                   | some it => [it]
                   | none => []) ++ collectRawItems.go rest f
              | none => match lineItem (b :: s') with
                        | some it => [it]
                        | none => [] := rfl
          rw [hstep]
          cases hfl : firstLine (b :: s') with
          | none =>
              dsimp only
              cases lineItem (b :: s') with
              | none => simp
              | some it =>
                  simp only [List.length_cons, List.length_nil]; omega
          | some lr =>
              obtain ⟨line, rest⟩ := lr
              dsimp only
              have ih' := ih rest
              cases lineItem (line.dropLast) with
              | none =>
                  simp only [List.length_append, List.length_nil]; omega
              | some it =>
                  simp only [List.length_append, List.length_cons,
                    List.length_nil]; omega

theorem lst_collectRawItems_length (run : List Nat) :
    (collectRawItems run).length ≤ run.length + 1 :=
  lst_collectRawItems_go_length (run.length + 1) run

theorem lst_collectRawItems_go_typ : ∀ (f : Nat) (s : List Nat)
    (it : RawItem), it ∈ collectRawItems.go s f →
    it.typ = 42 ∨ it.typ = 35 := by
  intro f
  induction f with
  | zero =>
      intro s it hit
      cases s with
      | nil => simp [collectRawItems.go] at hit
      | cons b s' => simp [collectRawItems.go] at hit
  | succ f ih =>
      intro s it hit
      cases s with
      | nil => simp [collectRawItems.go] at hit
      | cons b s' =>
          have hstep : collectRawItems.go (b :: s') (f + 1) =
              match firstLine (b :: s') with
              | some (line, rest) =>
                  (match lineItem (line.dropLast) with
                   | some it => [it]
                   | none => []) ++ collectRawItems.go rest f
              | none => match lineItem (b :: s') with
                        | some it => [it]
                        | none => [] := rfl
          rw [hstep] at hit
          cases hfl : firstLine (b :: s') with
          | none =>
              rw [hfl] at hit
              dsimp only at hit
              cases hli : lineItem (b :: s') with
              | none =>
                  rw [hli] at hit
                  dsimp only at hit
                  simp at hit
              | some it' =>
                  rw [hli] at hit
                  dsimp only at hit
                  simp only [List.mem_singleton] at hit
                  subst hit
                  rcases lst_lineItem_spec hli with ⟨-, -, -, -, htyp⟩
                  exact htyp
          | some lr =>
              obtain ⟨line, rest⟩ := lr
              rw [hfl] at hit
              dsimp only at hit
              cases hli : lineItem (line.dropLast) with
              | none =>
                  rw [hli] at hit
                  dsimp only at hit
                  simp only [List.nil_append] at hit
                  exact ih rest it hit
              | some it' =>
                  rw [hli] at hit
                  dsimp only at hit
                  simp only [List.singleton_append, List.mem_cons] at hit
                  rcases hit with rfl | hit
                  · rcases lst_lineItem_spec hli with ⟨-, -, -, -, htyp⟩
                    exact htyp
                  · exact ih rest it hit

theorem lst_collectRawItems_typ {run : List Nat} {it : RawItem}
    (h : it ∈ collectRawItems run) : it.typ = 42 ∨ it.typ = 35 :=
  lst_collectRawItems_go_typ (run.length + 1) run it h

theorem lst_rawSurvive_length (items : List RawItem) :
    (rawSurvive items).length = items.length := by
  induction items with
  | nil => rfl
  | cons it rest ih => simp [rawSurvive, ih]

theorem lst_rawSurvive_all_true : ∀ {items : List RawItem},
    (∀ it ∈ items, (trimBytes it.body).isEmpty = false) →
    rawSurvive items = items.map (fun _ => true) := by
  intro items
  induction items with
  | nil => intro _; rfl
  | cons it rest ih =>
      intro h
      have hrest : ∀ it' ∈ rest, (trimBytes it'.body).isEmpty = false :=
        fun it' hit' => h it' (List.mem_cons_of_mem it hit')
      have hhead : (trimBytes it.body).isEmpty = false :=
        h it List.mem_cons_self
      simp [rawSurvive, ih hrest, hhead]

theorem lst_filterNativeItems_go_sublist :
    ∀ (items : List RawItem) (flags : List Bool),
    flags.length = items.length →
    (filterNativeItems.go items flags).Sublist items := by
  intro items
  induction items with
  | nil =>
      intro flags _
      exact List.Sublist.slnil
  | cons it rest ih =>
      intro flags hlen
      cases flags with
      | nil => simp at hlen
      | cons keep flags' =>
          have hlen' : flags'.length = rest.length := by
            simpa using hlen
          have hstep : filterNativeItems.go (it :: rest) (keep :: flags') =
              if keep then it :: filterNativeItems.go rest flags'
              else filterNativeItems.go rest flags' := rfl
          by_cases hkeep : keep = true
          · rw [hstep, if_pos hkeep]
            exact List.Sublist.cons_cons it (ih flags' hlen')
          · have hkeepf : keep = false :=
              lst_bool_false_of_ne_true hkeep
            rw [hstep, if_neg (by simp [hkeepf])]
            exact List.Sublist.cons it (ih flags' hlen')

theorem lst_filterNativeItems_sublist (items : List RawItem) :
    (filterNativeItems items).Sublist items := by
  have hlen : (rawSurvive items).length = items.length :=
    lst_rawSurvive_length items
  exact lst_filterNativeItems_go_sublist items (rawSurvive items) hlen

theorem lst_filterNativeItems_go_of_all_true :
    ∀ (items : List RawItem) (flags : List Bool),
    flags.length = items.length → (∀ b ∈ flags, b = true) →
    filterNativeItems.go items flags = items := by
  intro items
  induction items with
  | nil =>
      intro flags hlen _
      cases flags with
      | nil => rfl
      | cons b flags' => simp at hlen
  | cons it rest ih =>
      intro flags hlen hall
      cases flags with
      | nil => simp at hlen
      | cons keep flags' =>
          have hlen' : flags'.length = rest.length := by
            simpa using hlen
          have hkeep : keep = true := hall keep (by simp)
          have hstep : filterNativeItems.go (it :: rest) (keep :: flags') =
              if keep then it :: filterNativeItems.go rest flags'
              else filterNativeItems.go rest flags' := rfl
          rw [hstep, hkeep]
          simp only [if_true]
          rw [ih flags' hlen' (fun b hb => hall b (List.mem_cons_of_mem keep hb))]

theorem lst_filterNativeItems_of_all_nonempty {items : List RawItem}
    (h : ∀ it ∈ items, (trimBytes it.body).isEmpty = false) :
    filterNativeItems items = items := by
  have hlen : (rawSurvive items).length = items.length :=
    lst_rawSurvive_length items
  have hall : ∀ b ∈ rawSurvive items, b = true := by
    rw [lst_rawSurvive_all_true h]
    intro b hb
    simp only [List.mem_map] at hb
    obtain ⟨-, -, hb⟩ := hb
    exact hb.symm
  exact lst_filterNativeItems_go_of_all_true items (rawSurvive items) hlen hall

/-! ## 5. Token discipline of the depth stack -/

theorem lst_addTok_tokens (rule : String) (opts : OptMap)
    (toks : List TokenEntry) :
    (addTok rule opts toks).2 = toks ++ [{ rule := rule, opts := opts }] :=
  rfl

theorem lst_addTok_length (rule : String) (opts : OptMap)
    (toks : List TokenEntry) :
    (addTok rule opts toks).2.length = toks.length + 1 := by
  rw [lst_addTok_tokens]; simp

theorem lst_emitList_tokens (out : List Nat) (toks : List TokenEntry)
    (opts : OptMap) :
    (emitList out toks opts).2 = toks ++ [{ rule := "List", opts := opts }] :=
  rfl

theorem lst_emitList_length (out : List Nat) (toks : List TokenEntry)
    (opts : OptMap) :
    (emitList out toks opts).2.length = toks.length + 1 := by
  rw [lst_emitList_tokens]; simp

theorem lst_emitList_out (out : List Nat) (toks : List TokenEntry)
    (opts : OptMap) :
    (emitList out toks opts).1 = out ++ phBytes toks.length := rfl

/-- `closeListLevel` pops exactly one level: the surviving stack is
    the old stack minus its last element. -/
theorem lst_closeListLevel_stack {out : List Nat}
    {toks : List TokenEntry} {stack : List ListLevel} (hne : stack ≠ []) :
    (closeListLevel out toks stack).2.2 =
      stack.take (stack.length - 1) := by
  have hlen : 0 < stack.length :=
    Nat.pos_of_ne_zero (fun hz => hne (List.length_eq_zero_iff.mp hz))
  have hget : stack[stack.length - 1]? =
      some stack[stack.length - 1] := by
    rw [List.getElem?_eq_getElem (by omega : stack.length - 1 <
      stack.length)]
  unfold closeListLevel
  dsimp only
  rw [hget]


/-! ## 6. `listRule` as an `applyByteRule`, and conditional WF

`listRule` does not preserve the token table on the nose: the
explicit pass rewrites stored tokens' `trail` options in place
(`setTrail`), so token-side well-formedness of the result is a real
obligation, not a definitional one. The theorem below is the exact
conditional form the current model reaches: the work-side
well-formedness (which waits on the F1 byte bridges) and the
result's token-opts well-formedness are the hypotheses; token-table
growth is the third hypothesis; and the five document-side
components are proved, by monotonicity of the byte-string
predicates in the token bound, since `applyByteRule` leaves `doc`
and `continuedDivLeads` untouched. -/

/-- The byte function of the `List` rule, named so the rule's
    `applyByteRule` form can be stated. -/
def lstListByteFn (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let (s1, t1) := listNative src toks
  listExplicitPass s1 t1

theorem lst_listRule_eq (st : ParseState) :
    listRule st = applyByteRule st lstListByteFn := rfl

theorem lst_listRule_other_fields (st : ParseState) :
    (listRule st).doc = st.doc ∧ (listRule st).fatal = st.fatal ∧
    (listRule st).continuedDivLeads = st.continuedDivLeads :=
  ⟨rfl, rfl, rfl⟩

theorem lst_wfSegs_mono {segs : List TSeg} {m n : Nat}
    (h : WFSegs segs m) (hmn : m ≤ n) : WFSegs segs n :=
  ⟨h.1, fun k hk => Nat.lt_of_lt_of_le (h.2 k hk) hmn⟩

theorem lst_wfBytes_mono {bs : List Nat} {m n : Nat}
    (hmn : m ≤ n) (h : WFBytes bs m) : WFBytes bs n := by
  obtain ⟨segs, hsegs, hform⟩ := h
  exact ⟨segs, lst_wfSegs_mono hsegs hmn, hform⟩

theorem lst_listRule_wf_conditional (st : ParseState)
    (hnew : WFSegs (listRule st).work (listRule st).tokens.length)
    (hlen : st.tokens.length ≤ (listRule st).tokens.length)
    (hopts : ∀ t ∈ (listRule st).tokens,
      WFOptMap (listRule st).tokens.length t.opts)
    (hwf : WFState st) : WFState (listRule st) := by
  obtain ⟨-, -, hfoot, hbib, hbibid, hanch, hleads⟩ := hwf
  refine ⟨hnew, hopts, ?_, ?_, ?_, ?_, ?_⟩
  · intro bs hbs
    exact lst_wfBytes_mono hlen (hfoot bs hbs)
  · exact fun p hp => ⟨lst_wfBytes_mono hlen (hbib p hp).1,
      lst_wfBytes_mono hlen (hbib p hp).2⟩
  · exact fun p hp => ⟨lst_wfBytes_mono hlen (hbibid p hp).1,
      Nat.lt_of_lt_of_le (hbibid p hp).2 hlen⟩
  · exact fun p hp => ⟨lst_wfBytes_mono hlen (hanch p hp).1,
      lst_wfBytes_mono hlen (hanch p hp).2⟩
  · intro bs hbs
    exact lst_wfBytes_mono hlen (hleads bs hbs)

/-! ## Axiom audit for this file's headline theorems -/

#print axioms lst_lowerBytes_idempotent
#print axioms lst_findPairOpener_eq_some_iff
#print axioms lst_findPairOpener_none_iff
#print axioms lst_findPair_pair_not_rawCase
#print axioms lst_findPair_none_of_all_open
#print axioms lst_firstLine_spec
#print axioms lst_nativeRunAt_spec
#print axioms lst_lineItem_spec
#print axioms lst_collectRawItems_length
#print axioms lst_collectRawItems_typ
#print axioms lst_rawSurvive_length
#print axioms lst_rawSurvive_all_true
#print axioms lst_filterNativeItems_sublist
#print axioms lst_filterNativeItems_of_all_nonempty
#print axioms lst_addTok_length
#print axioms lst_emitList_length
#print axioms lst_closeListLevel_stack
#print axioms lst_listRule_wf_conditional

end LeanFtml
