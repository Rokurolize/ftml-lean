import LeanFtml.ContainRules
import LeanFtml.InteractiveRules

/-! Div attribute value normalization laws, rebased onto current canonical ground (post REFCORR12 right-trim, post REFCORR13 narrowed dropped-control class). `normalizeValue` now filters by `! isLiveDroppedControl`, collapses runs of space/tab/CR/LF, drops leading spaces, THEN right-trims the whole PCRE byte-whitespace set with `rtrimAttrWs`. The old draft's trailing-space-survival law is false on this ground; `normalize_trailing` is restated as a uniform right-trim. Universal in the mirror functions; no PHP comparison is claimed. -/

namespace LeanFtml

/-- A byte the current Div normalizer keeps: not in the live-dropped C0 class (below 0x20 except TAB, LF, CR, ESC). -/
def keptByte (b : Nat) : Bool := ! isLiveDroppedControl b

theorem keptByte_ge {b : Nat} (h : 32 ≤ b) : keptByte b = true := by
  unfold keptByte isLiveDroppedControl
  have hlt : (decide (b < 32)) = false := by simpa using Nat.not_lt.mpr h
  simp [hlt]

theorem keptByte_space : keptByte 32 = true := keptByte_ge (Nat.le_refl _)

/-- Run collapse used to state `normalizeValue` once the filter is applied. The test is the mirror's four-byte whitespace test; TAB, LF and CR survive the narrowed REFCORR13 filter and are collapsed here rather than dropped there. -/
def collapseSpaces : List Nat → List Nat := go false
where
  go (inRun : Bool) : List Nat → List Nat
    | [] => []
    | b :: rest =>
        if b == 32 || b == 9 || b == 13 || b == 10 then
          if inRun then go true rest else 32 :: go true rest
        else b :: go false rest

/-- The mirror's own `normalizeValue.go` and `collapseSpaces.go` are the same recursion. -/
theorem go_eq_collapse :
    ∀ (bs : List Nat) (inRun : Bool),
      normalizeValue.go bs inRun = collapseSpaces.go inRun bs
  | [], inRun => by cases inRun <;> rfl
  | b :: rest, inRun => by
      cases inRun <;> simp [normalizeValue.go, collapseSpaces.go, go_eq_collapse rest]

theorem filter_eq_self_of {α} (p : α → Bool) :
    ∀ (l : List α), (∀ a ∈ l, p a = true) → l.filter p = l
  | [], _ => rfl
  | a :: rest, h => by
      simp [List.filter, h a (List.mem_cons_self ..),
        filter_eq_self_of p rest (fun x hx => h x (List.mem_cons_of_mem _ hx))]

theorem mem_of_dropWhile {α} (p : α → Bool) (a : α) :
    ∀ (l : List α), a ∈ l.dropWhile p → a ∈ l
  | [], h => by simp at h
  | b :: rest, h => by
      simp only [List.dropWhile] at h
      split at h
      · exact List.mem_cons_of_mem _ (mem_of_dropWhile p a rest h)
      · exact h

theorem divAttr_dropWhile_head_not {α} (p : α → Bool) (l : List α) (a : α)
    (h : (l.dropWhile p).head? = some a) : p a = false := by
  induction l with
  | nil => simp at h
  | cons c rest ih =>
      simp only [List.dropWhile] at h
      split at h
      · exact ih h
      · rename_i hp
        simp only [List.head?_cons, Option.some.injEq] at h
        subst h
        exact hp

theorem dropWhile_id_of_all {α} (p : α → Bool) :
    ∀ (l : List α), (∀ a ∈ l, p a = false) → l.dropWhile p = l
  | [], _ => rfl
  | a :: rest, h => by
      simp [List.dropWhile, h a (List.mem_cons_self ..)]

theorem dropWhile_space_id (rest : List Nat)
    (h : ∀ b, rest.head? = some b → b ≠ 32) :
    rest.dropWhile (· == 32) = rest := by
  cases rest with
  | nil => rfl
  | cons b bs =>
      have hb : b ≠ 32 := h b (by simp)
      have hb32 : (b == 32) = false := by simpa [beq_eq_false_iff_ne] using hb
      simp [List.dropWhile, hb32]

theorem dropWhile_one_space (rest : List Nat)
    (h : ∀ b, rest.head? = some b → b ≠ 32) :
    (32 :: rest).dropWhile (· == 32) = rest := by
  have hstop := dropWhile_space_id rest h
  simp [List.dropWhile, hstop]

theorem mem_replicate_space {n b : Nat} (h : b ∈ List.replicate n 32) : b = 32 :=
  (List.mem_replicate.mp h).2

/-- Exact equation for the rebased normalizer: filter, collapse, leading-space trim, then the REFCORR12 whole-set right-trim. -/
theorem normalizeValue_eq (v : List Nat) :
    normalizeValue v =
      rtrimAttrWs ((collapseSpaces (v.filter keptByte)).dropWhile (· == 32)) := by
  unfold normalizeValue keptByte collapseSpaces
  change rtrimAttrWs ((normalizeValue.go (v.filter (fun b => ! isLiveDroppedControl b)) false).dropWhile (· == 32)) =
         rtrimAttrWs ((collapseSpaces.go false (v.filter (fun b => ! isLiveDroppedControl b))).dropWhile (· == 32))
  rw [go_eq_collapse]

theorem collapseSpaces_reps_true (m : Nat) :
    collapseSpaces.go true (List.replicate m 32) = [] := by
  induction m with
  | zero => rfl
  | succ m ih => simp [List.replicate_succ, collapseSpaces.go, ih]

theorem collapseSpaces_reps_false (m : Nat) :
    collapseSpaces.go false (List.replicate m 32) =
      if m = 0 then [] else [32] := by
  cases m with
  | zero => rfl
  | succ m =>
      simp [List.replicate_succ, collapseSpaces.go, collapseSpaces_reps_true m]

theorem collapseSpaces_append_core (core rest : List Nat)
    (h : ∀ b ∈ core, b ≠ 32 ∧ b ≠ 9 ∧ b ≠ 13 ∧ b ≠ 10) :
    collapseSpaces.go false (core ++ rest) =
      core ++ collapseSpaces.go false rest := by
  induction core with
  | nil => simp
  | cons b bs ih =>
      have hb := h b (by simp)
      have e32 : (b == 32) = false := by simpa [beq_eq_false_iff_ne] using hb.1
      have e9 : (b == 9) = false := by simpa [beq_eq_false_iff_ne] using hb.2.1
      have e13 : (b == 13) = false := by simpa [beq_eq_false_iff_ne] using hb.2.2.1
      have e10 : (b == 10) = false := by simpa [beq_eq_false_iff_ne] using hb.2.2.2
      have hbs : ∀ x ∈ bs, x ≠ 32 ∧ x ≠ 9 ∧ x ≠ 13 ∧ x ≠ 10 :=
        fun x hx => h x (by simp [hx])
      simp [collapseSpaces.go, e32, e9, e13, e10, ih hbs]

theorem collapseSpaces_true_spaces (k : Nat) (rest : List Nat) :
    collapseSpaces.go true (List.replicate k 32 ++ rest) =
      collapseSpaces.go true rest := by
  induction k with
  | zero => simp
  | succ k ih => simp [List.replicate_succ, collapseSpaces.go, ih]

theorem collapseSpaces_true_core (core rest : List Nat)
    (h : ∀ b ∈ core, b ≠ 32 ∧ b ≠ 9 ∧ b ≠ 13 ∧ b ≠ 10) (hne : core ≠ []) :
    collapseSpaces.go true (core ++ rest) =
      core ++ collapseSpaces.go false rest := by
  cases core with
  | nil => exact absurd rfl hne
  | cons b bs =>
      have hb := h b (by simp)
      have e32 : (b == 32) = false := by simpa [beq_eq_false_iff_ne] using hb.1
      have e9 : (b == 9) = false := by simpa [beq_eq_false_iff_ne] using hb.2.1
      have e13 : (b == 13) = false := by simpa [beq_eq_false_iff_ne] using hb.2.2.1
      have e10 : (b == 10) = false := by simpa [beq_eq_false_iff_ne] using hb.2.2.2
      have hbs : ∀ x ∈ bs, x ≠ 32 ∧ x ≠ 9 ∧ x ≠ 13 ∧ x ≠ 10 :=
        fun x hx => h x (by simp [hx])
      simp [collapseSpaces.go, e32, e9, e13, e10, collapseSpaces_append_core bs rest hbs]

theorem collapse_sandwich (n : Nat) (core rest : List Nat)
    (hno : ∀ b ∈ core, b ≠ 32 ∧ b ≠ 9 ∧ b ≠ 13 ∧ b ≠ 10) (hne : core ≠ []) :
    collapseSpaces (List.replicate n 32 ++ (core ++ rest)) =
      (if n = 0 then [] else [32]) ++ (core ++ collapseSpaces rest) := by
  cases n with
  | zero =>
      simp [collapseSpaces, collapseSpaces_append_core core rest hno]
  | succ k =>
      have htrue : collapseSpaces.go true (List.replicate k 32 ++ (core ++ rest)) =
          core ++ collapseSpaces.go false rest := by
        rw [collapseSpaces_true_spaces, collapseSpaces_true_core core rest hno hne]
      simp [collapseSpaces, List.replicate_succ, collapseSpaces.go, htrue]

theorem rtrimAttrWs_snoc_space (core : List Nat)
    (h : ∀ b ∈ core, isWsByte b = false) :
    rtrimAttrWs (core ++ [32]) = core := by
  unfold rtrimAttrWs
  simp only [List.reverse_append, List.reverse_singleton, List.singleton_append]
  have h32 : isWsByte 32 = true := by decide
  have hstop : ∀ b ∈ core.reverse, isWsByte b = false := by
    intro b hb
    exact h b (List.mem_reverse.mp hb)
  have hdrop : (32 :: core.reverse).dropWhile isWsByte = core.reverse := by
    simp [List.dropWhile, h32, dropWhile_id_of_all _ _ hstop]
  simp [hdrop]

theorem rtrimSpaceTab_id_of_all (bs : List Nat)
    (h : ∀ b ∈ bs, b ≠ 32 ∧ b ≠ 9) : rtrimSpaceTab bs = bs := by
  unfold rtrimSpaceTab
  have hstop : ∀ b ∈ bs.reverse, (b == 32 || b == 9) = false := by
    intro b hb
    have hm : b ∈ bs := List.mem_reverse.mp hb
    have ⟨hn32, hn9⟩ := h b hm
    have e1 : (b == 32) = false := by simpa [beq_eq_false_iff_ne] using hn32
    have e2 : (b == 9) = false := by simpa [beq_eq_false_iff_ne] using hn9
    simp [e1, e2]
  simp [dropWhile_id_of_all _ _ hstop]

/-- Narrowed-ground uniform right-trim law. A printable-ASCII core (33..126, no whitespace byte) flanked by space runs normalizes to the bare core on current canonical ground: leading spaces are dropped, the trailing run collapses to one space, and the REFCORR12 `rtrimAttrWs` removes it. This replaces the draft's false `normalize_trailing` trailing-space-survival claim. -/
theorem normalize_trailing (core : List Nat) (n m : Nat)
    (hc : ∀ b ∈ core, 33 ≤ b ∧ b < 127) (hne : core ≠ []) (hm : 0 < m) :
    normalizeValue (List.replicate n 32 ++ (core ++ List.replicate m 32)) = core := by
  have hno : ∀ b ∈ core, b ≠ 32 ∧ b ≠ 9 ∧ b ≠ 13 ∧ b ≠ 10 := by
    intro b hb
    have hc' := hc b hb
    omega
  have hws : ∀ b ∈ core, isWsByte b = false := by
    intro b hb
    have hc' := hc b hb
    simp [isWsByte] <;> omega
  have hkeep : ∀ b ∈ List.replicate n 32 ++ (core ++ List.replicate m 32), keptByte b = true := by
    intro b hb
    rcases List.mem_append.mp hb with hsp | hrest
    · have hb32 : b = 32 := mem_replicate_space hsp
      subst hb32
      exact keptByte_space
    · rcases List.mem_append.mp hrest with hc' | hsp
      · exact keptByte_ge (by have := (hc b hc').1; omega)
      · have hb32 : b = 32 := mem_replicate_space hsp
        subst hb32
        exact keptByte_space
  rw [normalizeValue_eq]
  have hfilt := filter_eq_self_of keptByte _ hkeep
  rw [hfilt]
  have hs := collapse_sandwich n core (List.replicate m 32) hno hne
  have hrep : collapseSpaces (List.replicate m 32) = [32] := by
    have hm' : ¬ m = 0 := Nat.ne_of_gt hm
    simpa [collapseSpaces, hm'] using collapseSpaces_reps_false m
  rw [hs, hrep]
  have hhead : ∀ b, (core ++ [32]).head? = some b → b ≠ 32 := by
    cases core with
    | nil => exact absurd rfl hne
    | cons c cs =>
        intro b hb
        simp at hb
        subst hb
        have hc' := hno c (by simp)
        exact hc'.1
  cases n with
  | zero =>
      change rtrimAttrWs (List.dropWhile (fun x => x == 32) ([] ++ (core ++ [32]))) = core
      rw [List.nil_append, dropWhile_space_id (core ++ [32]) hhead]
      exact rtrimAttrWs_snoc_space core hws
  | succ k =>
      change rtrimAttrWs (List.dropWhile (fun x => x == 32) ([32] ++ (core ++ [32]))) = core
      rw [List.singleton_append, dropWhile_one_space (core ++ [32]) hhead]
      exact rtrimAttrWs_snoc_space core hws

/-- Class's redundant extra `rtrimSpaceTab`, on the now-uniformly-right-trimmed value: it is the identity on the printable-ASCII core. -/
theorem rtrim_trailing (core : List Nat) (n m : Nat)
    (hc : ∀ b ∈ core, 33 ≤ b ∧ b < 127) (hne : core ≠ []) (hm : 0 < m) :
    rtrimSpaceTab (normalizeValue (List.replicate n 32 ++ (core ++ List.replicate m 32))) =
      core := by
  rw [normalize_trailing core n m hc hne hm]
  apply rtrimSpaceTab_id_of_all
  intro b hb
  have hc' := hc b hb
  constructor <;> omega

end LeanFtml
