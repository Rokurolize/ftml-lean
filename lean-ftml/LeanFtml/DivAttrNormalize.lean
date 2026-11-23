import LeanFtml.ContainRules
import LeanFtml.InteractiveRules

/-! Div attribute value normalization laws: the kept-byte control filter, space-run collapse and leading trim behind `normalizeValue`, trailing-space survival, and the `class` `rtrimSpaceTab` law. Universal in the mirror functions; no PHP comparison is claimed. -/

namespace LeanFtml

/-- A byte the Div normalizer keeps: not a C0 control and not DEL. -/
def keptByte (b : Nat) : Bool := !(b < 32 || b == 127)

theorem keptByte_ge {b : Nat} (h1 : 32 ≤ b) (h2 : b ≠ 127) : keptByte b = true := by
  unfold keptByte
  have hlt : decide (b < 32) = false := by simpa using Nat.not_lt.mpr h1
  have hne : (b == 127) = false := by simpa [beq_eq_false_iff_ne] using h2
  simp [hlt, hne]

theorem keptByte_of_true {b : Nat} (h : keptByte b = true) : 32 ≤ b ∧ b ≠ 127 := by
  unfold keptByte at h
  have hnot : (decide (b < 32) || (b == 127)) = false := by
    simpa [Bool.not_eq_true] using h
  have hor := Bool.or_eq_false_iff.mp hnot
  have hlt : ¬ b < 32 := by simpa using hor.1
  have hne : b ≠ 127 := by simpa [beq_eq_false_iff_ne] using hor.2
  exact ⟨Nat.le_of_not_lt hlt, hne⟩

/-- After the control filter, tab, LF and CR are already gone, so the collapse test is the space test. -/
theorem wsTest_eq_space {b : Nat} (h : 32 ≤ b) :
    (b == 32 || b == 9 || b == 13 || b == 10) = (b == 32) := by
  have h9 : b ≠ 9 := by omega
  have h13 : b ≠ 13 := by omega
  have h10 : b ≠ 10 := by omega
  have e9 : (b == 9) = false := by simpa [beq_eq_false_iff_ne] using h9
  have e13 : (b == 13) = false := by simpa [beq_eq_false_iff_ne] using h13
  have e10 : (b == 10) = false := by simpa [beq_eq_false_iff_ne] using h10
  simp [e9, e13, e10]

/-- Space-run collapse used to state `normalizeValue` once controls are gone. One leading space of a run is kept; a run already open is skipped. -/
def collapseSpaces : List Nat → List Nat := go false
where
  go (inRun : Bool) : List Nat → List Nat
    | [] => []
    | b :: rest =>
        if b == 32 then
          if inRun then go true rest else 32 :: go true rest
        else b :: go false rest

theorem go_eq_collapse :
    ∀ (bs : List Nat) (inRun : Bool),
      (∀ b ∈ bs, 32 ≤ b ∧ b ≠ 127) →
      normalizeValue.go bs inRun = collapseSpaces.go inRun bs
  | [], inRun, _ => by cases inRun <;> rfl
  | b :: rest, inRun, hall => by
      have hb : 32 ≤ b ∧ b ≠ 127 := hall b (by simp)
      have hrest : ∀ x ∈ rest, 32 ≤ x ∧ x ≠ 127 :=
        fun x hx => hall x (by simp [hx])
      have hws := wsTest_eq_space hb.1
      cases inRun with
      | false =>
          by_cases h32 : b = 32
          · have hb32 : (b == 32) = true := by simpa using h32
            unfold normalizeValue.go
            rw [hws]
            simp only [hb32, ↓reduceIte]
            rw [go_eq_collapse rest true hrest]
            simp [collapseSpaces.go, hb32]
          · have hb32 : (b == 32) = false := by simpa [beq_eq_false_iff_ne] using h32
            unfold normalizeValue.go
            rw [hws]
            simp only [hb32]
            rw [go_eq_collapse rest false hrest]
            simp [collapseSpaces.go, hb32]
      | true =>
          by_cases h32 : b = 32
          · have hb32 : (b == 32) = true := by simpa using h32
            unfold normalizeValue.go
            rw [hws]
            simp only [hb32, ↓reduceIte]
            rw [go_eq_collapse rest true hrest]
            simp [collapseSpaces.go, hb32]
          · have hb32 : (b == 32) = false := by simpa [beq_eq_false_iff_ne] using h32
            unfold normalizeValue.go
            rw [hws]
            simp only [hb32]
            rw [go_eq_collapse rest false hrest]
            simp [collapseSpaces.go, hb32]

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

theorem dropWhile_head_not {α} (p : α → Bool) (l : List α) (a : α)
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

/-- `normalizeValue` is the control filter, then space-run collapse, then a leading-space trim. Tab, LF and CR never reach the collapse: they are controls. -/
theorem normalizeValue_eq (v : List Nat) :
    normalizeValue v =
      (collapseSpaces (v.filter keptByte)).dropWhile (· == 32) := by
  have hfilt : v.filter (fun b => !(b < 32 || b == 127)) = v.filter keptByte := rfl
  have hall : ∀ b ∈ v.filter keptByte, 32 ≤ b ∧ b ≠ 127 := by
    intro b hb
    have hp : keptByte b = true := (List.mem_filter.mp hb).2
    exact keptByte_of_true hp
  unfold normalizeValue
  rw [hfilt]
  have hgo := go_eq_collapse (v.filter keptByte) false hall
  simp [collapseSpaces, hgo]

theorem collapse_mem_kept :
    ∀ (inRun : Bool) (bs : List Nat) (b : Nat),
      (∀ x ∈ bs, 32 ≤ x ∧ x ≠ 127) →
      b ∈ collapseSpaces.go inRun bs → 32 ≤ b ∧ b ≠ 127
  | _, [], _, _, h => by simp [collapseSpaces.go] at h
  | inRun, c :: rest, b, hall, hmem => by
      have hc := hall c (by simp)
      have hrest : ∀ x ∈ rest, 32 ≤ x ∧ x ≠ 127 :=
        fun x hx => hall x (by simp [hx])
      simp only [collapseSpaces.go] at hmem
      by_cases h32 : c = 32
      · have hb32 : (c == 32) = true := by simpa using h32
        cases inRun with
        | true =>
            simp only [hb32, ↓reduceIte] at hmem
            exact collapse_mem_kept true rest b hrest hmem
        | false =>
            simp only [hb32, ↓reduceIte] at hmem
            rcases List.mem_cons.mp hmem with rfl | htail
            · exact ⟨Nat.le_refl _, by decide⟩
            · exact collapse_mem_kept true rest b hrest htail
      · have hb32 : (c == 32) = false := by simpa [beq_eq_false_iff_ne] using h32
        simp only [hb32] at hmem
        rcases List.mem_cons.mp hmem with rfl | htail
        · exact hc
        · exact collapse_mem_kept false rest b hrest htail

/-- Every byte of a normalized value is a kept byte: no C0 control and no DEL. -/
theorem normalizeValue_no_ctrl (v : List Nat) {b : Nat} (hb : b ∈ normalizeValue v) :
    ¬ (b < 32 ∨ b = 127) := by
  rw [normalizeValue_eq] at hb
  have hsub : b ∈ collapseSpaces (v.filter keptByte) := mem_of_dropWhile (· == 32) b _ hb
  have hall : ∀ x ∈ v.filter keptByte, 32 ≤ x ∧ x ≠ 127 := by
    intro x hx
    exact keptByte_of_true (List.mem_filter.mp hx).2
  have hk := collapse_mem_kept false (v.filter keptByte) b hall
    (by simpa [collapseSpaces] using hsub)
  exact fun h => by
    rcases h with hlt | heq
    · exact Nat.not_le.mpr hlt hk.1
    · exact hk.2 heq

/-- A normalized value does not start with a space. The trim is leading only. -/
theorem normalizeValue_no_lead (v : List Nat) (a : Nat)
    (h : (normalizeValue v).head? = some a) :
    a ≠ 32 := by
  rw [normalizeValue_eq] at h
  have hp := dropWhile_head_not (· == 32) _ a h
  simpa using hp

theorem collapseSpaces_reps_true (m : Nat) :
    collapseSpaces.go true (List.replicate m 32) = [] := by
  induction m with
  | zero => rfl
  | succ m ih =>
      simp [List.replicate_succ, collapseSpaces.go, ih]

theorem collapseSpaces_reps_false (m : Nat) :
    collapseSpaces.go false (List.replicate m 32) =
      if m = 0 then [] else [32] := by
  cases m with
  | zero => rfl
  | succ m =>
      simp [List.replicate_succ, collapseSpaces.go, collapseSpaces_reps_true m]

theorem collapseSpaces_append_core (core rest : List Nat)
    (h : ∀ b ∈ core, b ≠ 32) :
    collapseSpaces.go false (core ++ rest) =
      core ++ collapseSpaces.go false rest := by
  induction core with
  | nil => simp
  | cons b bs ih =>
      have hb : b ≠ 32 := h b (by simp)
      have hb32 : (b == 32) = false := by simpa [beq_eq_false_iff_ne] using hb
      have hbs : ∀ x ∈ bs, x ≠ 32 := fun x hx => h x (by simp [hx])
      simp [collapseSpaces.go, hb32, ih hbs]

theorem collapseSpaces_true_spaces (k : Nat) (rest : List Nat) :
    collapseSpaces.go true (List.replicate k 32 ++ rest) =
      collapseSpaces.go true rest := by
  induction k with
  | zero => simp
  | succ k ih =>
      simp [List.replicate_succ, collapseSpaces.go, ih]

theorem collapseSpaces_true_core (core rest : List Nat)
    (h : ∀ b ∈ core, b ≠ 32) (hne : core ≠ []) :
    collapseSpaces.go true (core ++ rest) =
      core ++ collapseSpaces.go false rest := by
  cases core with
  | nil => exact absurd rfl hne
  | cons b bs =>
      have hb : b ≠ 32 := h b (by simp)
      have hb32 : (b == 32) = false := by simpa [beq_eq_false_iff_ne] using hb
      have hbs : ∀ x ∈ bs, x ≠ 32 := fun x hx => h x (by simp [hx])
      simp [collapseSpaces.go, hb32, collapseSpaces_append_core bs rest hbs]

theorem collapse_sandwich (n : Nat) (core rest : List Nat)
    (hno : ∀ b ∈ core, b ≠ 32) (hne : core ≠ []) :
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

/-- A core that contains no space, flanked by space runs, normalizes to the core plus one trailing space. Leading spaces disappear; the trailing run collapses to one space and is kept. This is the REFCORR12 mechanism on `type`, `style`, `role` and `data-*`. -/
theorem normalize_trailing (core : List Nat) (n m : Nat)
    (hc : ∀ b ∈ core, 32 < b ∧ b ≠ 127) (hne : core ≠ []) (hm : 0 < m) :
    normalizeValue (List.replicate n 32 ++ (core ++ List.replicate m 32)) =
      core ++ [32] := by
  have hno : ∀ b ∈ core, b ≠ 32 := fun b hb => by have := (hc b hb).1; omega
  have hkeep : ∀ b ∈ List.replicate n 32 ++ (core ++ List.replicate m 32),
      keptByte b = true := by
    intro b hb
    rcases List.mem_append.mp hb with hsp | hrest
    · have hb32 : b = 32 := mem_replicate_space hsp
      subst hb32
      exact keptByte_ge (Nat.le_refl _) (by decide)
    · rcases List.mem_append.mp hrest with hc' | hsp
      · exact keptByte_ge (Nat.le_of_lt (hc b hc').1) (hc b hc').2
      · have hb32 : b = 32 := mem_replicate_space hsp
        subst hb32
        exact keptByte_ge (Nat.le_refl _) (by decide)
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
        exact hno c (by simp)
  cases n with
  | zero =>
      simpa using dropWhile_space_id (core ++ [32]) hhead
  | succ k =>
      simpa using dropWhile_one_space (core ++ [32]) hhead

theorem dropWhile_id_of_all {α} (p : α → Bool) :
    ∀ (l : List α), (∀ a ∈ l, p a = false) → l.dropWhile p = l
  | [], _ => rfl
  | a :: rest, h => by
      simp [List.dropWhile, h a (List.mem_cons_self ..)]

/-- Class's extra `rtrim` removes the single trailing space the normalizer left, when the core itself does not end in space or tab. -/
theorem rtrimSpaceTab_snoc_space (core : List Nat)
    (h : ∀ b ∈ core, b ≠ 32 ∧ b ≠ 9) :
    rtrimSpaceTab (core ++ [32]) = core := by
  unfold rtrimSpaceTab
  simp only [List.reverse_append, List.reverse_singleton, List.singleton_append]
  have h32 : (32 == 32 || 32 == 9) = true := by decide
  have hstop : ∀ b ∈ core.reverse, (b == 32 || b == 9) = false := by
    intro b hb
    have hm : b ∈ core := List.mem_reverse.mp hb
    have ⟨hn32, hn9⟩ := h b hm
    have e1 : (b == 32) = false := by simpa [beq_eq_false_iff_ne] using hn32
    have e2 : (b == 9) = false := by simpa [beq_eq_false_iff_ne] using hn9
    simp [e1, e2]
  have hdrop : (32 :: core.reverse).dropWhile (fun b => b == 32 || b == 9) =
      core.reverse := by
    simp [List.dropWhile, dropWhile_id_of_all _ _ hstop]
  simp [hdrop]

theorem rtrim_trailing (core : List Nat) (n m : Nat)
    (hc : ∀ b ∈ core, 32 < b ∧ b ≠ 127) (hne : core ≠ []) (hm : 0 < m) :
    rtrimSpaceTab (normalizeValue (List.replicate n 32 ++ (core ++ List.replicate m 32))) =
      core := by
  have hne9 : ∀ b ∈ core, b ≠ 32 ∧ b ≠ 9 := fun b hb =>
    ⟨by have := (hc b hb).1; omega, by have := (hc b hb).1; omega⟩
  rw [normalize_trailing core n m hc hne hm, rtrimSpaceTab_snoc_space core hne9]

end LeanFtml
