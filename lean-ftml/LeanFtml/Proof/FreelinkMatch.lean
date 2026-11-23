/-
LeanFtml.Proof.FreelinkMatch — universal laws for the Freelink opener recognizer.
Every statement is about the mirror's own freelinkMatchAt in LeanFtml.LinkRules, never about a second hand-written copy.
The recognizer is a lazy target run with the label-present branch tried before the absent branch at each target length.
This unit imports only LeanFtml.LinkRules and is self-contained.
-/

import LeanFtml.LinkRules

namespace LeanFtml

/-- Mirror of the per-index candidate function inside freelinkMatchAt, so its output can be reasoned about on its own. -/
def freelinkMatchCandidate (src r0 : List Nat) (i : Nat) :
    Option (List Nat × List Nat × List Nat × List Nat) :=
  let l1 := i + 1
  let g1 := r0.take l1
  let after1 := r0.drop l1
  let present : Option (List Nat × List Nat × List Nat × List Nat) :=
    match after1 with
    | 124 :: after2 =>
        let lab := after2.takeWhile isFreeByte
        let after3 := after2.drop lab.length
        if after3.take 3 == [93, 93, 93] then
          some (src.take (src.length - (after3.drop 3).length), g1, 124 :: lab, after3.drop 3)
        else none
    | _ => none
  match present with
  | some m => some m
  | none =>
      if after1.take 3 == [93, 93, 93] then
        some (src.take (src.length - (after1.drop 3).length), g1, [], after1.drop 3)
      else none

/-! ## Generic list helpers -/

/-- A successful exact-literal match returns a true prefix of the source. -/
theorem freelinkMatch_matchLit_prefix (pat src r : List Nat)
    (h : matchLitBytes pat src = some r) : pat ++ r = src := by
  induction pat generalizing src with
  | nil =>
      simp [matchLitBytes] at h
      simp [h]
  | cons p pat' ih =>
      cases src with
      | nil => simp [matchLitBytes] at h
      | cons x xs =>
          by_cases hxp : x = p
          · subst x
            simp [matchLitBytes] at h
            simpa using congrArg (List.cons p) (ih xs h)
          · simp [matchLitBytes, hxp] at h

/-- If findSome? returns some b, some selected element produced it. -/
theorem freelinkMatch_findSome_mem {α β : Type} (f : α → Option β) :
    ∀ (l : List α) (b : β), l.findSome? f = some b → ∃ a ∈ l, f a = some b := by
  intro l
  induction l with
  | nil =>
      intro b h
      simp [List.findSome?] at h
  | cons x xs ih =>
      intro b h
      rcases hfx : f x with _ | y
      · simp [List.findSome?, hfx] at h
        rcases ih b h with ⟨a, ha, hfa⟩
        exact ⟨a, by simp [ha], hfa⟩
      · simp [List.findSome?, hfx] at h
        subst b
        exact ⟨x, by simp, hfx⟩

/-- Three closing brackets force at least three bytes present. -/
theorem freelinkMatch_length_ge_of_take3 (l : List Nat) (h : l.take 3 = [93, 93, 93]) :
    3 <= l.length := by
  cases l with
  | nil => simp at h
  | cons b1 l1 =>
      cases l1 with
      | nil => simp at h
      | cons b2 l2 =>
          cases l2 with
          | nil => simp at h
          | cons b3 l3 => simp

/-- Taking no more bytes than present keeps the full requested length. -/
theorem freelinkMatch_take_length_eq (l : List Nat) (n : Nat) (h : n <= l.length) :
    (l.take n).length = n := by
  induction l generalizing n with
  | nil => simp at h ⊢; omega
  | cons x xs ih =>
      cases n with
      | zero => simp
      | succ n =>
          simp only [List.length_cons, Nat.succ_le_succ_iff] at h
          simpa using ih n h

/-- Every byte kept by takeWhile satisfies the predicate. -/
theorem freelinkMatch_takeWhile_all (p : Nat → Bool) (l : List Nat) :
    ∀ b ∈ l.takeWhile p, p b = true := by
  induction l with
  | nil => simp
  | cons x xs ih =>
      by_cases hx : p x
      · simp [List.takeWhile, hx]
        intro b hb
        simp_all
      · simp [List.takeWhile, hx]

/-- takeWhile never keeps more bytes than the original list has. -/
theorem freelinkMatch_takeWhile_length_le (p : Nat → Bool) (l : List Nat) :
    (l.takeWhile p).length <= l.length := by
  induction l with
  | nil => simp
  | cons x xs ih =>
      by_cases hx : p x
      · simp [List.takeWhile, hx]
        omega
      · simp [List.takeWhile, hx]

/-- A prefix of length within the takeWhile run consists only of predicate bytes. -/
theorem freelinkMatch_take_takeWhile_all (p : Nat → Bool) (l : List Nat) (n : Nat)
    (h : n <= (l.takeWhile p).length) : ∀ b ∈ l.take n, p b = true := by
  induction l generalizing n with
  | nil => simp
  | cons x xs ih =>
      cases n with
      | zero => simp
      | succ n =>
          by_cases hx : p x
          · simp [List.takeWhile, hx] at h ⊢
            intro b hb
            have hn' : n <= (xs.takeWhile p).length := by omega
            have ih' := ih n hn'
            simp_all
          · simp [List.takeWhile, hx] at h

/-- A suffix dropped at index k is reconstructed by take at the complementary length. -/
theorem freelinkMatch_suffix_take_drop (src : List Nat) (k : Nat) (hk : k <= src.length) :
    src.take (src.length - (src.drop k).length) ++ src.drop k = src := by
  rw [List.length_drop]
  have h1 : src.length - (src.length - k) = k := by omega
  rw [h1]
  exact List.take_append_drop k src

/-- Dropping past the three opener bytes lands in the match remainder. -/
theorem freelinkMatch_drop_prefix (r0 : List Nat) (n : Nat) :
    (litBytes "[[[" ++ r0).drop (n + 3) = r0.drop n := by
  simp [litBytes]

/-! ## Unfolding and absence -/

/-- Unfolding the recognizer with a successful opener match. -/
theorem freelinkMatch_unfold (src r0 : List Nat)
    (h : matchLitBytes (litBytes "[[[") src = some r0) :
    freelinkMatchAt src =
      (List.range (r0.takeWhile isFreeByte).length).findSome? (freelinkMatchCandidate src r0) := by
  unfold freelinkMatchAt
  rw [h]
  rfl

/-- No opener literal means no match. -/
theorem freelinkMatch_no_opener (src : List Nat)
    (h : matchLitBytes (litBytes "[[[") src = none) :
    freelinkMatchAt src = none := by
  simp [freelinkMatchAt, h]

/-- A source whose first byte is not an opener bracket has no match. -/
theorem freelinkMatch_no_opener_head (b : Nat) (rest : List Nat) (h : b ≠ 91) :
    freelinkMatchAt (b :: rest) = none := by
  simp [freelinkMatchAt, matchLitBytes, litBytes, h]

/-- The empty source has no match. -/
theorem freelinkMatch_nil : freelinkMatchAt [] = none := by
  rfl

/-! ## Universal shape of a successful candidate -/

/-- The label-present branch wins inside a candidate whenever its guard holds. -/
theorem freelinkMatch_candidate_present_priority (src r0 : List Nat) (i : Nat)
    (a2 lab : List Nat)
    (hdrop : r0.drop (i + 1) = 124 :: a2)
    (hlab : a2.takeWhile isFreeByte = lab)
    (hclose : (a2.drop lab.length).take 3 = [93, 93, 93]) :
    ∃ full g1 rest, freelinkMatchCandidate src r0 i = some (full, g1, 124 :: lab, rest) := by
  refine ⟨src.take (src.length - ((a2.drop lab.length).drop 3).length),
    r0.take (i + 1), (a2.drop lab.length).drop 3, ?_⟩
  simp [freelinkMatchCandidate, hdrop, hlab, hclose]

/-- Any successful candidate has a nonempty free target, a well-formed label, and an exact prefix/suffix split. -/
theorem freelinkMatchCandidate_shape (src r0 : List Nat) (i : Nat)
    (hi : i < (r0.takeWhile isFreeByte).length)
    (hsrc : src = litBytes "[[[" ++ r0)
    (full g1 label rest : List Nat)
    (h : freelinkMatchCandidate src r0 i = some (full, g1, label, rest)) :
    full ++ rest = src ∧
      (0 < g1.length ∧ (∀ b ∈ g1, isFreeByte b = true)) ∧
      (label = [] ∨ ∃ lab, label = 124 :: lab ∧ ∀ b ∈ lab, isFreeByte b = true) := by
  have hle : i + 1 <= (r0.takeWhile isFreeByte).length := by omega
  have htwlen := freelinkMatch_takeWhile_length_le isFreeByte r0
  have hr0 : i + 1 <= r0.length := by omega
  have htlen : (r0.take (i + 1)).length = i + 1 := freelinkMatch_take_length_eq r0 (i + 1) hr0
  have hg1free : ∀ b ∈ r0.take (i + 1), isFreeByte b = true :=
    freelinkMatch_take_takeWhile_all isFreeByte r0 (i + 1) hle
  unfold freelinkMatchCandidate at h
  dsimp only at h
  rcases hdrop : r0.drop (i + 1) with _ | ⟨b, a2⟩
  · simp [hdrop] at h
  · by_cases hb : b = 124
    · subst b
      by_cases hclose : (a2.drop (a2.takeWhile isFreeByte).length).take 3 = [93, 93, 93]
      · simp [hdrop, hclose] at h
        rcases h with ⟨rfl, rfl, rfl, rfl⟩
        have ha2rel : (r0.drop (i + 1)).drop 1 = a2 := by
          simpa using congrArg List.tail hdrop
        have ha2 : a2 = r0.drop (i + 2) := by
          rw [← ha2rel, List.drop_drop]
        have hx : a2.drop ((a2.takeWhile isFreeByte).length + 3) =
            r0.drop ((i + 2) + ((a2.takeWhile isFreeByte).length + 3)) := by
          rw [ha2, List.drop_drop]
        have hsrcdrop := freelinkMatch_drop_prefix r0 ((i + 2) + ((a2.takeWhile isFreeByte).length + 3))
        have hsrc_drop_k : src.drop (((i + 2) + ((a2.takeWhile isFreeByte).length + 3)) + 3) =
            a2.drop ((a2.takeWhile isFreeByte).length + 3) := by
          rw [hsrc]
          rw [hsrcdrop]
          exact hx.symm
        have ha2len : 3 <= (a2.drop (a2.takeWhile isFreeByte).length).length :=
          freelinkMatch_length_ge_of_take3 (a2.drop (a2.takeWhile isFreeByte).length) hclose
        rw [List.length_drop] at ha2len
        have ha2len_eq : a2.length = r0.length - (i + 2) := by
          rw [ha2, List.length_drop]
        have hkcore : (i + 2) + ((a2.takeWhile isFreeByte).length + 3) <= r0.length := by omega
        have hk : (((i + 2) + ((a2.takeWhile isFreeByte).length + 3)) + 3) <= src.length := by
          rw [hsrc]
          simp [litBytes]
          omega
        have hlenx : a2.length - ((a2.takeWhile isFreeByte).length + 3) =
            (src.drop (((i + 2) + ((a2.takeWhile isFreeByte).length + 3)) + 3)).length := by
          rw [hsrc_drop_k, List.length_drop]
        constructor
        · rw [hlenx, ← hsrc_drop_k]
          exact freelinkMatch_suffix_take_drop src (((i + 2) + ((a2.takeWhile isFreeByte).length + 3)) + 3) hk
        constructor
        · constructor
          · rw [htlen]
            omega
          · exact hg1free
        · right
          refine ⟨a2.takeWhile isFreeByte, rfl, ?_⟩
          exact freelinkMatch_takeWhile_all isFreeByte a2
      · simp [hdrop, hclose] at h
    · by_cases hclose : (b :: a2).take 3 = [93, 93, 93]
      · simp [hdrop, hb, hclose] at h
        rcases h with ⟨rfl, rfl, rfl, rfl⟩
        have ha2rel : (r0.drop (i + 1)).drop 1 = a2 := by
          simpa using congrArg List.tail hdrop
        have ha2 : a2 = r0.drop (i + 2) := by
          rw [← ha2rel, List.drop_drop]
        have hx : a2.drop 2 = r0.drop ((i + 2) + 2) := by
          rw [ha2, List.drop_drop]
        have hsrcdrop := freelinkMatch_drop_prefix r0 ((i + 2) + 2)
        have hsrc_drop_k : src.drop (((i + 2) + 2) + 3) = a2.drop 2 := by
          rw [hsrc]
          rw [hsrcdrop]
          exact hx.symm
        have ha1len : 3 <= (b :: a2).length := freelinkMatch_length_ge_of_take3 (b :: a2) hclose
        have ha2lenle : 2 <= a2.length := by
          simp only [List.length_cons, Nat.succ_le_succ_iff] at ha1len
          omega
        have ha2len_eq : a2.length = r0.length - (i + 2) := by
          rw [ha2, List.length_drop]
        have hkcore : (i + 2) + 2 <= r0.length := by omega
        have hk : (((i + 2) + 2) + 3) <= src.length := by
          rw [hsrc]
          simp [litBytes]
          omega
        have hlenx : a2.length - 2 = (src.drop (((i + 2) + 2) + 3)).length := by
          rw [hsrc_drop_k, List.length_drop]
        constructor
        · rw [hlenx, ← hsrc_drop_k]
          exact freelinkMatch_suffix_take_drop src (((i + 2) + 2) + 3) hk
        constructor
        · constructor
          · rw [htlen]
            omega
          · exact hg1free
        · left
          rfl
      · simp [hdrop, hb] at h
        rcases h with ⟨hcond, htuple⟩
        have hcontra : (b :: a2).take 3 = [93, 93, 93] := by
          simp [hcond.1, hcond.2]
        exact (hclose hcontra).elim

/-! ## Universal shape of a successful recognizer call -/

/-- Every successful recognised match splits the source exactly and has the PCRE group shapes. -/
theorem freelinkMatch_some_shape (src full g1 label rest : List Nat)
    (h : freelinkMatchAt src = some (full, g1, label, rest)) :
    full ++ rest = src ∧
      (0 < g1.length ∧ (∀ b ∈ g1, isFreeByte b = true)) ∧
      (label = [] ∨ ∃ lab, label = 124 :: lab ∧ ∀ b ∈ lab, isFreeByte b = true) := by
  unfold freelinkMatchAt at h
  rcases hm : matchLitBytes (litBytes "[[[") src with _ | r0
  · simp [hm] at h
  · have hsrc : src = litBytes "[[[" ++ r0 := by
      exact (freelinkMatch_matchLit_prefix (litBytes "[[[") src r0 hm).symm
    rw [hm] at h
    change (List.range (r0.takeWhile isFreeByte).length).findSome?
      (freelinkMatchCandidate src r0) = some (full, g1, label, rest) at h
    rcases freelinkMatch_findSome_mem (freelinkMatchCandidate src r0)
        (List.range (r0.takeWhile isFreeByte).length) (full, g1, label, rest) h with
      ⟨i, himem, hi⟩
    have hi_lt : i < (r0.takeWhile isFreeByte).length := List.mem_range.mp himem
    exact freelinkMatchCandidate_shape src r0 i hi_lt hsrc full g1 label rest hi

/-! ## Closed regression witnesses -/

/-- Regression check: a labelled Freelink match claims the label including its leading pipe. -/
theorem freelinkMatch_regression_labeled :
    freelinkMatchAt (litBytes "[[[a|b]]]") =
      some (litBytes "[[[a|b]]]", litBytes "a", litBytes "|b", []) := by
  decide

/-- Regression check: an unlabelled Freelink match has an empty group two. -/
theorem freelinkMatch_regression_unlabeled :
    freelinkMatchAt (litBytes "[[[a]]]") =
      some (litBytes "[[[a]]]", litBytes "a", [], []) := by
  decide

/-- Regression check: a missing closer yields no match. -/
theorem freelinkMatch_regression_no_closer :
    freelinkMatchAt (litBytes "[[[abc") = none := by
  decide

#print axioms freelinkMatch_no_opener
#print axioms freelinkMatch_some_shape
#print axioms freelinkMatch_candidate_present_priority
#print axioms freelinkMatch_regression_labeled
#print axioms freelinkMatch_regression_unlabeled

end LeanFtml
