import LeanFtml.ContainRules
import LeanFtml.InteractiveRules

/-!
Div attribute and id proofs. Theorems are about the mirror functions `normalizeValue`, `rtrimSpaceTab`, `isolateId`, `divArgs`, `divArgsOrder`, `divAuthoredNonEmpty`, `divProcess`, `divAttrFragment` and `renderDiv`. The REFCORR8 whitespace and duplicate-attribute rules, the PHP-trim whitespace-only id shell, and the uppercase `data-*` shape shared with Tableadv are proved for every value. The REFCORR12 attribute unit's mechanism, as this mirror implements it, is that a trailing space run collapses to one space and survives on `style`, `role`, `type` and `data-*`, while `class` alone right-trims it. The uniform right-trim live applies to every kept Div value is not a theorem of this mirror; the witness is recorded below and is not patched here.
-/

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
            simp only [hb32, ↓reduceIte]
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
            simp only [hb32, ↓reduceIte]
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
        simp only [hb32, ↓reduceIte] at hmem
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
    simp [List.dropWhile, h32, dropWhile_id_of_all _ _ hstop]
  simp [hdrop]

theorem rtrim_trailing (core : List Nat) (n m : Nat)
    (hc : ∀ b ∈ core, 32 < b ∧ b ≠ 127) (hne : core ≠ []) (hm : 0 < m) :
    rtrimSpaceTab (normalizeValue (List.replicate n 32 ++ (core ++ List.replicate m 32))) =
      core := by
  have hne9 : ∀ b ∈ core, b ≠ 32 ∧ b ≠ 9 := fun b hb =>
    ⟨by have := (hc b hb).1; omega, by have := (hc b hb).1; omega⟩
  rw [normalize_trailing core n m hc hne hm, rtrimSpaceTab_snoc_space core hne9]

/-! ## id isolation -/

/-- Bool `if` elaborates as `ite (cond = true)`, so a rewritten condition stays a proposition. -/
theorem boolIf_false {α : Type} {a b : α} : (if false = true then a else b) = b :=
  ite_eq_right (by decide)

theorem boolIf_true {α : Type} {a b : α} : (if true = true then a else b) = a :=
  ite_eq_left (by decide)

theorem orFF : (false || false) = false := by decide
theorem orFFF : ((false || false) || false) = false := by decide
theorem orFFT : ((false || false) || true) = true := by decide
theorem orTFF : ((true || false) || false) = true := by decide
theorem orFTF : ((false || true) || false) = true := by decide

theorem utf8Decode_go_ascii :
    ∀ (bs : List Nat) (fuel : Nat),
      bs.length ≤ fuel → (∀ b ∈ bs, b < 0x80) →
      utf8Decode.go bs fuel = bs.map Char.ofNat
  | [], _, _, _ => by simp [utf8Decode.go]
  | _ :: _, 0, hle, _ => by simp at hle
  | b :: rest, fuel + 1, hle, hall => by
      have hb : b < 0x80 := hall b (List.mem_cons_self ..)
      have hrest : ∀ x ∈ rest, x < 0x80 :=
        fun x hx => hall x (List.mem_cons_of_mem _ hx)
      have hle' : rest.length ≤ fuel := Nat.le_of_succ_le_succ hle
      unfold utf8Decode.go
      simp only [hb, ↓reduceIte]
      exact congrArg (Char.ofNat b :: ·)
        (utf8Decode_go_ascii rest fuel hle' hrest)

theorem utf8Decode_ascii (bs : List Nat) (h : ∀ b ∈ bs, b < 0x80) :
    utf8Decode bs = bs.map Char.ofNat :=
  utf8Decode_go_ascii bs bs.length (Nat.le_refl _) h

theorem utf8Decode_lit (s : String) (h : ∀ c ∈ s.toList, c.toNat < 0x80) :
    utf8Decode (litBytes s) = s.toList := by
  have hall : ∀ b ∈ litBytes s, b < 0x80 := by
    intro b hb
    simp [litBytes, List.mem_map] at hb
    obtain ⟨c, hc, rfl⟩ := hb
    exact h c hc
  rw [utf8Decode_ascii _ hall]
  simp only [litBytes, List.map_map]
  apply List.map_id''
  intro c
  simp [Function.comp, Char.ofNat_toNat]

private theorem beqNat {a b : Nat} (h : (a == b) = true) : a = b := beq_iff_eq.mp h

theorem trimByte_lt {b : Nat} (h : isTrimByte b = true) : b < 128 := by
  simp only [isTrimByte] at h
  rcases Bool.or_eq_true_iff.mp h with h | h
  · rcases Bool.or_eq_true_iff.mp h with h | h
    · rcases Bool.or_eq_true_iff.mp h with h | h
      · rcases Bool.or_eq_true_iff.mp h with h | h
        · rcases Bool.or_eq_true_iff.mp h with h | h
          · have := beqNat h; subst this; decide
          · have := beqNat h; subst this; decide
        · have := beqNat h; subst this; decide
      · have := beqNat h; subst this; decide
    · have := beqNat h; subst this; decide
  · have := beqNat h; subst this; decide

theorem isPhpTrim_trimByte {b : Nat} (h : isTrimByte b = true) :
    isPhpTrim (Char.ofNat b) = true := by
  simp only [isTrimByte] at h
  rcases Bool.or_eq_true_iff.mp h with h | h
  · rcases Bool.or_eq_true_iff.mp h with h | h
    · rcases Bool.or_eq_true_iff.mp h with h | h
      · rcases Bool.or_eq_true_iff.mp h with h | h
        · rcases Bool.or_eq_true_iff.mp h with h | h
          · have := beqNat h; subst this; decide
          · have := beqNat h; subst this; decide
        · have := beqNat h; subst this; decide
      · have := beqNat h; subst this; decide
    · have := beqNat h; subst this; decide
  · have := beqNat h; subst this; decide

theorem dropWhile_all {α} (p : α → Bool) :
    ∀ (l : List α), (∀ a ∈ l, p a = true) → l.dropWhile p = []
  | [], _ => rfl
  | a :: rest, h => by
      simp [List.dropWhile, h a (List.mem_cons_self ..),
        dropWhile_all p rest (fun x hx => h x (List.mem_cons_of_mem _ hx))]

theorem trimChars_all (cs : List Char) (h : ∀ c ∈ cs, isPhpTrim c = true) :
    trimChars cs = [] := by
  unfold trimChars
  simp [dropWhile_all isPhpTrim cs h]

theorem contains_false_of_ne {a : Nat} :
    ∀ (v : List Nat), (∀ b ∈ v, b ≠ a) → v.contains a = false
  | [], _ => by simp
  | c :: rest, h => by
      have hc : c ≠ a := h c (List.mem_cons_self ..)
      have hc' : (a == c) = false := by simpa [beq_eq_false_iff_ne] using hc.symm
      have hr := contains_false_of_ne rest (fun b hb => h b (List.mem_cons_of_mem _ hb))
      rw [List.contains_cons, hc', hr]
      exact orFF

theorem isPhpTrim_mapped (v : List Nat) (h : ∀ b ∈ v, isTrimByte b = true) :
    ∀ c ∈ v.map Char.ofNat, isPhpTrim c = true := by
  intro c hc
  obtain ⟨b, hb, rfl⟩ := List.mem_map.mp hc
  exact isPhpTrim_trimByte (h b hb)

theorem isolateId_empty : isolateId [] = some [] := rfl

/-- A placeholder-bearing id is retained verbatim, including a body that already starts with `u-`. The render clear arm then emits an empty value with the key kept. -/
theorem isolateId_placeholder (v : List Nat) (hne : v.isEmpty = false)
    (h : v.contains 255 = true) : isolateId v = some v := by
  unfold isolateId
  rw [hne, h, boolIf_false, boolIf_true]

/-- A non-empty id whose every byte is a PHP `trim` byte (space, tab, LF, CR, NUL, VT) isolates to the bare `u-` shell. Form feed is not in that set. -/
theorem isolateId_trim_shell (v : List Nat) (hne : v.isEmpty = false)
    (hall : ∀ b ∈ v, isTrimByte b = true) :
    isolateId v = some (litBytes "u-") := by
  have h255 : v.contains 255 = false :=
    contains_false_of_ne v (fun b hb => by
      have hlt := trimByte_lt (hall b hb)
      omega)
  have hascii : ∀ b ∈ v, b < 0x80 := fun b hb => trimByte_lt (hall b hb)
  have hdec : utf8Decode v = v.map Char.ofNat := utf8Decode_ascii v hascii
  have htrim : trimChars (utf8Decode v) = [] := by
    rw [hdec]
    exact trimChars_all _ (isPhpTrim_mapped v hall)
  unfold isolateId
  rw [hne, h255, boolIf_false, boolIf_false, hdec]
  have htrim' : trimChars (v.map Char.ofNat) = [] := by simpa [hdec] using htrim
  have hempty : (collapseWsU (trimChars (v.map Char.ofNat))).isEmpty = true := by
    rw [htrim']
    unfold collapseWsU
    rfl
  simp only [htrim', hempty, boolIf_true]

/-- Form feed is Unicode whitespace and a C0 control, but not a PHP trim byte, so a form-feed-only id is not the bare shell. -/
theorem isolateId_formfeed : isolateId [12] = some [117, 45, 32, 32] := by decide

/-- U+00A0 is Unicode whitespace that PHP `trim` keeps, so an NBSP-only id is not the bare shell either. -/
theorem isolateId_nbsp : isolateId [0xC2, 0xA0] = some [117, 45, 32, 32] := by decide

/-- `isolateId` does not run the attribute control filter. A SOH byte is prefixed, not dropped. -/
theorem isolateId_soh : isolateId [1] = some [117, 45, 1] := by decide

/-! ## divArgs dispatch -/

theorem find_one_no (k k' : List Nat) (val : Option (List Nat))
    (h : (k == k') = false) :
    ([(k, val)].find? (fun kv => kv.1 == k')) = none := by
  simp [List.find?, h]

theorem find_one_yes (k : List Nat) (val : Option (List Nat)) :
    ([(k, val)].find? (fun kv => kv.1 == k)) = some (k, val) := by
  simp [List.find?]

theorem filterMap_cons_none {α β} (f : α → Option β) (a : α) (l : List α)
    (h : f a = none) : (a :: l).filterMap f = l.filterMap f := by
  simp [List.filterMap, h]

theorem filterMap_cons_some {α β} (f : α → Option β) (a : α) (l : List α) (b : β)
    (h : f a = some b) : (a :: l).filterMap f = b :: l.filterMap f := by
  simp [List.filterMap, h]

theorem omSetOpt_empty (k : List Nat) (v : Option (List Nat)) :
    omSetOpt [] k v = [(k, v)] := by
  simp [omSetOpt, List.find?]

theorem omSetOpt_overwrite (k : List Nat) (v1 v2 : Option (List Nat)) :
    omSetOpt [(k, v1)] k v2 = [(k, v2)] := by
  simp [omSetOpt, List.find?]

theorem omSetOpt_push (k k' : List Nat) (v v' : Option (List Nat))
    (h : (k == k') = false) :
    omSetOpt [(k, v)] k' v' = [(k, v), (k', v')] := by
  simp [omSetOpt, List.find?, h]

theorem data_not_prefix_ranked :
    (litBytes "data-").isPrefixOf (litBytes "id") = false ∧
    (litBytes "data-").isPrefixOf (litBytes "class") = false ∧
    (litBytes "data-").isPrefixOf (litBytes "style") = false ∧
    (litBytes "data-").isPrefixOf (litBytes "role") = false ∧
    (litBytes "data-").isPrefixOf (litBytes "type") = false := by
  decide

theorem ne_ranked_of_data (k name : List Nat)
    (hp : (litBytes "data-").isPrefixOf k = true)
    (hn : (litBytes "data-").isPrefixOf name = false) :
    (k == name) = false := by
  by_cases h : k == name
  · have heq : k = name := by simpa [beq_iff_eq] using h
    rw [heq] at hp
    simp [hp] at hn
  · simpa using h

theorem isPrefixOf_append (p rest : List Nat) : p.isPrefixOf (p ++ rest) = true := by
  induction p with
  | nil => rfl
  | cons a as ih => simp [List.isPrefixOf, ih]

theorem prefix_split (p k : List Nat) (h : p.isPrefixOf k = true) :
    k = p ++ k.drop p.length := by
  induction p generalizing k with
  | nil => simp
  | cons a as ih =>
      cases k with
      | nil => simp [List.isPrefixOf] at h
      | cons b bs =>
          simp only [List.isPrefixOf, Bool.and_eq_true] at h
          obtain ⟨hab, hpre⟩ := h
          have : a = b := beq_iff_eq.mp hab
          subst this
          rw [List.cons_append, List.length_cons, List.drop_succ_cons]
          exact congrArg (a :: ·) (ih bs hpre)

theorem asciiLower_append (a b : List Nat) :
    asciiLower (a ++ b) = asciiLower a ++ asciiLower b := by
  simp [asciiLower]

theorem asciiLower_data_lit : asciiLower (litBytes "data-") = litBytes "data-" := by
  decide

theorem asciiLower_keeps_data (k : List Nat)
    (h : (litBytes "data-").isPrefixOf k = true) :
    (litBytes "data-").isPrefixOf (asciiLower k) = true := by
  have hk := prefix_split (litBytes "data-") k h
  rw [hk, asciiLower_append, asciiLower_data_lit]
  exact isPrefixOf_append _ _

theorem divArgsOrder_one_type (val : Option (List Nat)) :
    divArgsOrder [(litBytes "type", val)] = [(litBytes "type", val)] := by
  unfold divArgsOrder
  have hid : (litBytes "type" == litBytes "id") = false := by decide
  have hcl : (litBytes "type" == litBytes "class") = false := by decide
  have hst : (litBytes "type" == litBytes "style") = false := by decide
  have hro : (litBytes "type" == litBytes "role") = false := by decide
  have hty : (litBytes "type" == litBytes "type") = true := by decide
  have hpre : (litBytes "data-").isPrefixOf (litBytes "type") = false := by decide
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hpre]

theorem divArgsOrder_one_style (val : Option (List Nat)) :
    divArgsOrder [(litBytes "style", val)] = [(litBytes "style", val)] := by
  unfold divArgsOrder
  have hid : (litBytes "style" == litBytes "id") = false := by decide
  have hcl : (litBytes "style" == litBytes "class") = false := by decide
  have hst : (litBytes "style" == litBytes "style") = true := by decide
  have hro : (litBytes "style" == litBytes "role") = false := by decide
  have hty : (litBytes "style" == litBytes "type") = false := by decide
  have hpre : (litBytes "data-").isPrefixOf (litBytes "style") = false := by decide
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hpre]

theorem divArgsOrder_one_role (val : Option (List Nat)) :
    divArgsOrder [(litBytes "role", val)] = [(litBytes "role", val)] := by
  unfold divArgsOrder
  have hid : (litBytes "role" == litBytes "id") = false := by decide
  have hcl : (litBytes "role" == litBytes "class") = false := by decide
  have hst : (litBytes "role" == litBytes "style") = false := by decide
  have hro : (litBytes "role" == litBytes "role") = true := by decide
  have hty : (litBytes "role" == litBytes "type") = false := by decide
  have hpre : (litBytes "data-").isPrefixOf (litBytes "role") = false := by decide
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hpre]

theorem divArgsOrder_one_class (val : Option (List Nat)) :
    divArgsOrder [(litBytes "class", val)] = [(litBytes "class", val)] := by
  unfold divArgsOrder
  have hid : (litBytes "class" == litBytes "id") = false := by decide
  have hcl : (litBytes "class" == litBytes "class") = true := by decide
  have hst : (litBytes "class" == litBytes "style") = false := by decide
  have hro : (litBytes "class" == litBytes "role") = false := by decide
  have hty : (litBytes "class" == litBytes "type") = false := by decide
  have hpre : (litBytes "data-").isPrefixOf (litBytes "class") = false := by decide
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hpre]

theorem divArgsOrder_one_id (val : Option (List Nat)) :
    divArgsOrder [(litBytes "id", val)] = [(litBytes "id", val)] := by
  unfold divArgsOrder
  have hid : (litBytes "id" == litBytes "id") = true := by decide
  have hcl : (litBytes "id" == litBytes "class") = false := by decide
  have hst : (litBytes "id" == litBytes "style") = false := by decide
  have hro : (litBytes "id" == litBytes "role") = false := by decide
  have hty : (litBytes "id" == litBytes "type") = false := by decide
  have hpre : (litBytes "data-").isPrefixOf (litBytes "id") = false := by decide
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hpre]

theorem divArgsOrder_one_data (k : List Nat) (val : Option (List Nat))
    (hp : (litBytes "data-").isPrefixOf k = true) :
    divArgsOrder [(k, val)] = [(k, val)] := by
  unfold divArgsOrder
  have hid := ne_ranked_of_data k (litBytes "id") hp data_not_prefix_ranked.1
  have hcl := ne_ranked_of_data k (litBytes "class") hp data_not_prefix_ranked.2.1
  have hst := ne_ranked_of_data k (litBytes "style") hp data_not_prefix_ranked.2.2.1
  have hro := ne_ranked_of_data k (litBytes "role") hp data_not_prefix_ranked.2.2.2.1
  have hty := ne_ranked_of_data k (litBytes "type") hp data_not_prefix_ranked.2.2.2.2
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hp, List.filter]

theorem lit_type_ascii : ∀ c ∈ "type".toList, c.toNat < 0x80 := by decide
theorem lit_style_ascii : ∀ c ∈ "style".toList, c.toNat < 0x80 := by decide
theorem lit_role_ascii : ∀ c ∈ "role".toList, c.toNat < 0x80 := by decide
theorem lit_class_ascii : ∀ c ∈ "class".toList, c.toNat < 0x80 := by decide
theorem lit_id_ascii : ∀ c ∈ "id".toList, c.toNat < 0x80 := by decide
theorem lit_data_ascii : ∀ c ∈ "data-foo".toList, c.toNat < 0x80 := by decide
theorem lit_datax_ascii : ∀ c ∈ "data-x".toList, c.toNat < 0x80 := by decide

private theorem pairMap (k : List Nat) (v : Option (List Nat)) (s : String)
    (h : utf8Decode k = s.toList) :
    [(k, v)].map (fun p => (utf8Decode p.1, p.2)) = [(s.toList, v)] := by
  simp [List.map_singleton, h]

theorem divArgs_type (v : List Nat) :
    divArgs [(litBytes "type", v)] =
      [("type".toList, some (normalizeValue v))] := by
  have hid : (litBytes "type" == litBytes "id") = false := by decide
  have hcl : (litBytes "type" == litBytes "class") = false := by decide
  have hst : (litBytes "type" == litBytes "style") = false := by decide
  have hro : (litBytes "type" == litBytes "role") = false := by decide
  have hty : (litBytes "type" == litBytes "type") = true := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, hst, hro, hty, boolIf_false, boolIf_false, orFFT, boolIf_true,
    omSetOpt_empty, divArgsOrder_one_type]
  exact pairMap _ _ "type" (utf8Decode_lit "type" lit_type_ascii)

theorem divArgs_style (v : List Nat) :
    divArgs [(litBytes "style", v)] =
      [("style".toList, some (normalizeValue v))] := by
  have hid : (litBytes "style" == litBytes "id") = false := by decide
  have hcl : (litBytes "style" == litBytes "class") = false := by decide
  have hst : (litBytes "style" == litBytes "style") = true := by decide
  have hro : (litBytes "style" == litBytes "role") = false := by decide
  have hty : (litBytes "style" == litBytes "type") = false := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, hst, hro, hty, boolIf_false, boolIf_false, orTFF, boolIf_true,
    omSetOpt_empty, divArgsOrder_one_style]
  exact pairMap _ _ "style" (utf8Decode_lit "style" lit_style_ascii)

theorem divArgs_role (v : List Nat) :
    divArgs [(litBytes "role", v)] =
      [("role".toList, some (normalizeValue v))] := by
  have hid : (litBytes "role" == litBytes "id") = false := by decide
  have hcl : (litBytes "role" == litBytes "class") = false := by decide
  have hst : (litBytes "role" == litBytes "style") = false := by decide
  have hro : (litBytes "role" == litBytes "role") = true := by decide
  have hty : (litBytes "role" == litBytes "type") = false := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, hst, hro, hty, boolIf_false, boolIf_false, orFTF, boolIf_true,
    omSetOpt_empty, divArgsOrder_one_role]
  exact pairMap _ _ "role" (utf8Decode_lit "role" lit_role_ascii)

theorem divArgs_class (v : List Nat) :
    divArgs [(litBytes "class", v)] =
      [("class".toList, some (rtrimSpaceTab (normalizeValue v)))] := by
  have hid : (litBytes "class" == litBytes "id") = false := by decide
  have hcl : (litBytes "class" == litBytes "class") = true := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, boolIf_false, boolIf_true, omSetOpt_empty, divArgsOrder_one_class]
  exact pairMap _ _ "class" (utf8Decode_lit "class" lit_class_ascii)

theorem divArgs_data (k v : List Nat) (hp : (litBytes "data-").isPrefixOf k = true) :
    divArgs [(k, v)] =
      [(utf8Decode (asciiLower k), some (normalizeValue v))] := by
  have hid := ne_ranked_of_data k (litBytes "id") hp data_not_prefix_ranked.1
  have hcl := ne_ranked_of_data k (litBytes "class") hp data_not_prefix_ranked.2.1
  have hst := ne_ranked_of_data k (litBytes "style") hp data_not_prefix_ranked.2.2.1
  have hro := ne_ranked_of_data k (litBytes "role") hp data_not_prefix_ranked.2.2.2.1
  have hty := ne_ranked_of_data k (litBytes "type") hp data_not_prefix_ranked.2.2.2.2
  have hlow := asciiLower_keeps_data k hp
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, hst, hro, hty, hp, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_true, omSetOpt_empty, divArgsOrder_one_data (asciiLower k) _ hlow,
    List.map_singleton]

theorem divArgs_id_keep (v idv : List Nat) (h : isolateId v = some idv)
    (hne : idv.isEmpty = false) :
    divArgs [(litBytes "id", v)] = [("id".toList, some idv)] := by
  have hid : (litBytes "id" == litBytes "id") = true := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  have hnot : ¬ (idv.isEmpty = true) := by rw [hne]; decide
  rw [hid, h, boolIf_true, ite_eq_right hnot, omSetOpt_empty, divArgsOrder_one_id]
  exact pairMap _ _ "id" (utf8Decode_lit "id" lit_id_ascii)

theorem divArgs_id_omit (v : List Nat) (h : isolateId v = some []) :
    divArgs [(litBytes "id", v)] = [] := by
  have hid : (litBytes "id" == litBytes "id") = true := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, h, boolIf_true, boolIf_true]
  simp [divArgsOrder]

theorem divArgs_reject (k v : List Nat)
    (hid : (k == litBytes "id") = false) (hcl : (k == litBytes "class") = false)
    (hst : (k == litBytes "style") = false) (hro : (k == litBytes "role") = false)
    (hty : (k == litBytes "type") = false)
    (hd : (litBytes "data-").isPrefixOf k = false) :
    divArgs [(k, v)] = [] := by
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, hst, hro, hty, hd, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_false]
  simp [divArgsOrder]

theorem asciiLower_data_foo : asciiLower (litBytes "data-Foo") = litBytes "data-foo" := by
  decide

theorem asciiLower_data_FOO : asciiLower (litBytes "data-FOO") = litBytes "data-foo" := by
  decide

theorem asciiLower_data_foo_low : asciiLower (litBytes "data-foo") = litBytes "data-foo" := by
  decide

/-- The Tableadv-adjacent shape on Div: a mixed-case `data-Foo` suffix folds to `data-foo`, while `CLASS`, `ID` and `DATA-foo` miss the case-sensitive allowlist and the case-sensitive `data-` prefix. -/
theorem div_tableadv_adjacent (v : List Nat) :
    divArgs [(litBytes "data-Foo", v)] =
      [("data-foo".toList, some (normalizeValue v))] ∧
    divArgs [(litBytes "CLASS", v)] = [] ∧
    divArgs [(litBytes "ID", v)] = [] ∧
    divArgs [(litBytes "DATA-foo", v)] = [] := by
  refine ⟨?_, ?_, ?_, ?_⟩
  · have hp : (litBytes "data-").isPrefixOf (litBytes "data-Foo") = true := by decide
    rw [divArgs_data _ v hp, asciiLower_data_foo, utf8Decode_lit "data-foo" lit_data_ascii]
  · exact divArgs_reject (litBytes "CLASS") v (by decide) (by decide) (by decide)
      (by decide) (by decide) (by decide)
  · exact divArgs_reject (litBytes "ID") v (by decide) (by decide) (by decide)
      (by decide) (by decide) (by decide)
  · exact divArgs_reject (litBytes "DATA-foo") v (by decide) (by decide) (by decide)
      (by decide) (by decide) (by decide)

theorem find_two_no (k1 k2 key : List Nat) (v1 v2 : Option (List Nat))
    (h1 : (k1 == key) = false) (h2 : (k2 == key) = false) :
    ([(k1, v1), (k2, v2)].find? (fun kv => kv.1 == key)) = none := by
  rw [List.find?_cons, h1, List.find?_cons, h2, List.find?_nil]

theorem divArgsOrder_two_data (k1 k2 : List Nat) (v1 v2 : Option (List Nat))
    (h1 : (litBytes "data-").isPrefixOf k1 = true)
    (h2 : (litBytes "data-").isPrefixOf k2 = true) :
    divArgsOrder [(k1, v1), (k2, v2)] = [(k1, v1), (k2, v2)] := by
  unfold divArgsOrder
  have zid1 := ne_ranked_of_data k1 (litBytes "id") h1 data_not_prefix_ranked.1
  have zcl1 := ne_ranked_of_data k1 (litBytes "class") h1 data_not_prefix_ranked.2.1
  have zst1 := ne_ranked_of_data k1 (litBytes "style") h1 data_not_prefix_ranked.2.2.1
  have zro1 := ne_ranked_of_data k1 (litBytes "role") h1 data_not_prefix_ranked.2.2.2.1
  have zty1 := ne_ranked_of_data k1 (litBytes "type") h1 data_not_prefix_ranked.2.2.2.2
  have zid2 := ne_ranked_of_data k2 (litBytes "id") h2 data_not_prefix_ranked.1
  have zcl2 := ne_ranked_of_data k2 (litBytes "class") h2 data_not_prefix_ranked.2.1
  have zst2 := ne_ranked_of_data k2 (litBytes "style") h2 data_not_prefix_ranked.2.2.1
  have zro2 := ne_ranked_of_data k2 (litBytes "role") h2 data_not_prefix_ranked.2.2.2.1
  have zty2 := ne_ranked_of_data k2 (litBytes "type") h2 data_not_prefix_ranked.2.2.2.2
  have fid := find_two_no k1 k2 (litBytes "id") v1 v2 zid1 zid2
  have fcl := find_two_no k1 k2 (litBytes "class") v1 v2 zcl1 zcl2
  have fst := find_two_no k1 k2 (litBytes "style") v1 v2 zst1 zst2
  have fro := find_two_no k1 k2 (litBytes "role") v1 v2 zro1 zro2
  have fty := find_two_no k1 k2 (litBytes "type") v1 v2 zty1 zty2
  rw [List.filterMap_cons_none
        (f := fun k => List.find? (fun kv => kv.1 == k) [(k1, v1), (k2, v2)])
        (a := litBytes "id") fid,
      List.filterMap_cons_none
        (f := fun k => List.find? (fun kv => kv.1 == k) [(k1, v1), (k2, v2)])
        (a := litBytes "class") fcl,
      List.filterMap_cons_none
        (f := fun k => List.find? (fun kv => kv.1 == k) [(k1, v1), (k2, v2)])
        (a := litBytes "style") fst,
      List.filterMap_cons_none
        (f := fun k => List.find? (fun kv => kv.1 == k) [(k1, v1), (k2, v2)])
        (a := litBytes "role") fro,
      List.filterMap_cons_none
        (f := fun k => List.find? (fun kv => kv.1 == k) [(k1, v1), (k2, v2)])
        (a := litBytes "type") fty,
      List.filterMap_nil, List.nil_append]
  rw [List.filter_cons, h1, boolIf_true, List.filter_cons, h2, boolIf_true, List.filter_nil]

/-- Case-variant `data-*` keys are last-wins on the lowercased key, and the first occurrence keeps the emit position. -/
theorem divArgs_data_last (k1 k2 v1 v2 : List Nat)
    (h1 : (litBytes "data-").isPrefixOf k1 = true)
    (h2 : (litBytes "data-").isPrefixOf k2 = true)
    (heq : asciiLower k1 = asciiLower k2) :
    divArgs [(k1, v1), (k2, v2)] =
      [(utf8Decode (asciiLower k1), some (normalizeValue v2))] := by
  have hid1 := ne_ranked_of_data k1 (litBytes "id") h1 data_not_prefix_ranked.1
  have hcl1 := ne_ranked_of_data k1 (litBytes "class") h1 data_not_prefix_ranked.2.1
  have hst1 := ne_ranked_of_data k1 (litBytes "style") h1 data_not_prefix_ranked.2.2.1
  have hro1 := ne_ranked_of_data k1 (litBytes "role") h1 data_not_prefix_ranked.2.2.2.1
  have hty1 := ne_ranked_of_data k1 (litBytes "type") h1 data_not_prefix_ranked.2.2.2.2
  have hid2 := ne_ranked_of_data k2 (litBytes "id") h2 data_not_prefix_ranked.1
  have hcl2 := ne_ranked_of_data k2 (litBytes "class") h2 data_not_prefix_ranked.2.1
  have hst2 := ne_ranked_of_data k2 (litBytes "style") h2 data_not_prefix_ranked.2.2.1
  have hro2 := ne_ranked_of_data k2 (litBytes "role") h2 data_not_prefix_ranked.2.2.2.1
  have hty2 := ne_ranked_of_data k2 (litBytes "type") h2 data_not_prefix_ranked.2.2.2.2
  have hlow := asciiLower_keeps_data k1 h1
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid1, hcl1, hst1, hro1, hty1, h1, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_true, omSetOpt_empty]
  rw [hid2, hcl2, hst2, hro2, hty2, h2, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_true, heq, omSetOpt_overwrite]
  rw [divArgsOrder_one_data (asciiLower k2) _ (by simpa [heq] using hlow),
    List.map_singleton, heq]

theorem divArgs_data_distinct (k1 k2 v1 v2 : List Nat)
    (h1 : (litBytes "data-").isPrefixOf k1 = true)
    (h2 : (litBytes "data-").isPrefixOf k2 = true)
    (hne : asciiLower k1 ≠ asciiLower k2) :
    divArgs [(k1, v1), (k2, v2)] =
      [(utf8Decode (asciiLower k1), some (normalizeValue v1)),
       (utf8Decode (asciiLower k2), some (normalizeValue v2))] := by
  have hid1 := ne_ranked_of_data k1 (litBytes "id") h1 data_not_prefix_ranked.1
  have hcl1 := ne_ranked_of_data k1 (litBytes "class") h1 data_not_prefix_ranked.2.1
  have hst1 := ne_ranked_of_data k1 (litBytes "style") h1 data_not_prefix_ranked.2.2.1
  have hro1 := ne_ranked_of_data k1 (litBytes "role") h1 data_not_prefix_ranked.2.2.2.1
  have hty1 := ne_ranked_of_data k1 (litBytes "type") h1 data_not_prefix_ranked.2.2.2.2
  have hid2 := ne_ranked_of_data k2 (litBytes "id") h2 data_not_prefix_ranked.1
  have hcl2 := ne_ranked_of_data k2 (litBytes "class") h2 data_not_prefix_ranked.2.1
  have hst2 := ne_ranked_of_data k2 (litBytes "style") h2 data_not_prefix_ranked.2.2.1
  have hro2 := ne_ranked_of_data k2 (litBytes "role") h2 data_not_prefix_ranked.2.2.2.1
  have hty2 := ne_ranked_of_data k2 (litBytes "type") h2 data_not_prefix_ranked.2.2.2.2
  have hlow1 := asciiLower_keeps_data k1 h1
  have hlow2 := asciiLower_keeps_data k2 h2
  have hne' : (asciiLower k1 == asciiLower k2) = false := by
    simpa [beq_eq_false_iff_ne] using hne
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid1, hcl1, hst1, hro1, hty1, h1, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_true, omSetOpt_empty]
  rw [hid2, hcl2, hst2, hro2, hty2, h2, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_true, omSetOpt_push _ _ _ _ hne']
  rw [divArgsOrder_two_data _ _ _ _ hlow1 hlow2, List.map_cons, List.map_singleton]

/-- On `type`, `style`, `role` and `data-*`, the trailing space produced by `normalize_trailing` is the stored value. On `class`, `rtrimSpaceTab` removes it. -/
theorem refcorr12_dispatch (core : List Nat) (n m : Nat)
    (hc : ∀ b ∈ core, 32 < b ∧ b ≠ 127) (hne : core ≠ []) (hm : 0 < m) :
    divArgs [(litBytes "type", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("type".toList, some (core ++ [32]))] ∧
    divArgs [(litBytes "style", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("style".toList, some (core ++ [32]))] ∧
    divArgs [(litBytes "role", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("role".toList, some (core ++ [32]))] ∧
    divArgs [(litBytes "class", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("class".toList, some core)] ∧
    divArgs [(litBytes "data-x", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("data-x".toList, some (core ++ [32]))] := by
  have ht := normalize_trailing core n m hc hne hm
  have hr := rtrim_trailing core n m hc hne hm
  have hdata : (litBytes "data-").isPrefixOf (litBytes "data-x") = true := by decide
  have hlow : asciiLower (litBytes "data-x") = litBytes "data-x" := by decide
  refine ⟨?_, ?_, ?_, ?_, ?_⟩
  · simp [divArgs_type, ht]
  · simp [divArgs_style, ht]
  · simp [divArgs_role, ht]
  · simp [divArgs_class, hr]
  · simp [divArgs_data _ _ hdata, hlow, ht, utf8Decode_lit "data-x" lit_datax_ascii]

/-- The cached C-R5E-R1-1 shape. The mirror stores and renders `type="t "`. Live, capture `muse-probe-round5e-r1-r5er1-d6`, serves `type="t"`. That one-byte gap is the unadopted REFCORR12 right-trim; this file does not change the mirror. -/
theorem refcorr12_type_witness :
    normalizeValue (litBytes "  t  ") = litBytes "t " ∧
    divArgs [(litBytes "type", litBytes "  t  ")] =
      [("type".toList, some (litBytes "t "))] ∧
    divArgs [(litBytes "class", litBytes "  t  ")] =
      [("class".toList, some (litBytes "t"))] ∧
    renderDiv [("type".toList, OptVal.str "start".toList),
        ("args".toList, OptVal.map [("type".toList, OptVal.str "t ".toList)])] =
      litBytes "<div type=\"t \">" := by
  have hc : ∀ b ∈ litBytes "t", 32 < b ∧ b ≠ 127 := by decide
  have hshape : litBytes "  t  " =
      List.replicate 2 32 ++ (litBytes "t" ++ List.replicate 2 32) := by decide
  have hnorm := normalize_trailing (litBytes "t") 2 2 hc (by decide) (by decide)
  have hclass := rtrim_trailing (litBytes "t") 2 2 hc (by decide) (by decide)
  have hlit : litBytes "t " = litBytes "t" ++ [32] := by decide
  refine ⟨?_, ?_, ?_, rfl⟩
  · rw [hshape]; exact hnorm.trans hlit.symm
  · rw [divArgs_type, hshape]; exact congrArg (fun w => [("type".toList, some w)]) (hnorm.trans hlit.symm)
  · rw [divArgs_class, hshape]; exact congrArg (fun w => [("class".toList, some w)]) hclass

theorem ws_id_to_shell (v : List Nat) (hne : v.isEmpty = false)
    (hall : ∀ b ∈ v, isTrimByte b = true) :
    divArgs [(litBytes "id", v)] = [("id".toList, some (litBytes "u-"))] :=
  divArgs_id_keep v (litBytes "u-") (isolateId_trim_shell v hne hall) (by decide)

theorem render_id_shell :
    renderDiv [("type".toList, OptVal.str "start".toList),
        ("args".toList, OptVal.map [("id".toList, OptVal.str "u-".toList)])] =
      litBytes "<div id=\"u-\">" := rfl

/-! ## Authored-nonempty record (REFCORR8 / REFCORR9) -/

def authoredStep (acc : List (List Nat)) (kv : List Nat × List Nat) : List (List Nat) :=
  let (k, v) := kv
  let key :=
    if k == litBytes "class" || k == litBytes "style" ||
        k == litBytes "role" || k == litBytes "type" then some k
    else if (litBytes "data-").isPrefixOf k then some (asciiLower k)
    else none
  match key with
  | none => acc
  | some key =>
      if v.isEmpty || key ∈ acc then acc else acc ++ [key]

theorem divAuthored_eq (attr : List (List Nat × List Nat)) :
    divAuthoredNonEmpty attr = attr.foldl authoredStep [] := rfl

theorem authoredStep_keeps (acc : List (List Nat)) (lk : List Nat)
    (kv : List Nat × List Nat) (h : lk ∈ acc) : lk ∈ authoredStep acc kv := by
  unfold authoredStep
  cases kv with
  | mk k v =>
      simp only []
      split
      · exact h
      · rename_i key hkey
        by_cases hemp : v.isEmpty = true
        · simp [hemp, h]
        · by_cases hin : key ∈ acc
          · simp [hemp, hin, h]
          · have hemp' : v.isEmpty = false := by simpa using hemp
            simp [hemp', hin, h]

theorem authored_mem_preserved (pairs acc : List _) (lk : List Nat) (h : lk ∈ acc) :
    lk ∈ pairs.foldl authoredStep acc := by
  induction pairs generalizing acc with
  | nil => exact h
  | cons p ps ih =>
      simp only [List.foldl_cons]
      exact ih (authoredStep acc p) (authoredStep_keeps acc lk p h)

theorem authored_class_nonempty (v : List Nat) (hv : v.isEmpty = false) :
    divAuthoredNonEmpty [(litBytes "class", v)] = [litBytes "class"] := by
  rw [divAuthored_eq]
  have hc : (litBytes "class" == litBytes "class") = true := by decide
  simp [authoredStep, List.foldl, hc, hv]

theorem authored_class_empty :
    divAuthoredNonEmpty [(litBytes "class", [])] = [] := by
  rw [divAuthored_eq]
  simp [authoredStep, List.foldl]

theorem authored_data_sole_empty (k : List Nat)
    (hp : (litBytes "data-").isPrefixOf k = true) :
    divAuthoredNonEmpty [(k, [])] = [] := by
  rw [divAuthored_eq]
  have hid : (k == litBytes "class") = false :=
    ne_ranked_of_data k (litBytes "class") hp data_not_prefix_ranked.2.1
  have hst : (k == litBytes "style") = false :=
    ne_ranked_of_data k (litBytes "style") hp data_not_prefix_ranked.2.2.1
  have hro : (k == litBytes "role") = false :=
    ne_ranked_of_data k (litBytes "role") hp data_not_prefix_ranked.2.2.2.1
  have hty : (k == litBytes "type") = false :=
    ne_ranked_of_data k (litBytes "type") hp data_not_prefix_ranked.2.2.2.2
  simp [authoredStep, List.foldl, hid, hst, hro, hty, hp]

/-- A later case-variant empty value does not clear an earlier nonempty authored record for the same lowercased `data-*` key. A sole empty value stays unset. -/
theorem authored_data_monotone (k1 v1 k2 : List Nat)
    (h1 : (litBytes "data-").isPrefixOf k1 = true)
    (h2 : (litBytes "data-").isPrefixOf k2 = true)
    (heq : asciiLower k1 = asciiLower k2) (hv : v1.isEmpty = false) :
    divAuthoredNonEmpty [(k1, v1), (k2, [])] = [asciiLower k1] := by
  rw [divAuthored_eq]
  have hid1 : (k1 == litBytes "class") = false :=
    ne_ranked_of_data k1 (litBytes "class") h1 data_not_prefix_ranked.2.1
  have hst1 : (k1 == litBytes "style") = false :=
    ne_ranked_of_data k1 (litBytes "style") h1 data_not_prefix_ranked.2.2.1
  have hro1 : (k1 == litBytes "role") = false :=
    ne_ranked_of_data k1 (litBytes "role") h1 data_not_prefix_ranked.2.2.2.1
  have hty1 : (k1 == litBytes "type") = false :=
    ne_ranked_of_data k1 (litBytes "type") h1 data_not_prefix_ranked.2.2.2.2
  have hid2 : (k2 == litBytes "class") = false :=
    ne_ranked_of_data k2 (litBytes "class") h2 data_not_prefix_ranked.2.1
  have hst2 : (k2 == litBytes "style") = false :=
    ne_ranked_of_data k2 (litBytes "style") h2 data_not_prefix_ranked.2.2.1
  have hro2 : (k2 == litBytes "role") = false :=
    ne_ranked_of_data k2 (litBytes "role") h2 data_not_prefix_ranked.2.2.2.1
  have hty2 : (k2 == litBytes "type") = false :=
    ne_ranked_of_data k2 (litBytes "type") h2 data_not_prefix_ranked.2.2.2.2
  simp [List.foldl, authoredStep, hid1, hst1, hro1, hty1, hid2, hst2, hro2, hty2,
    h1, h2, hv, heq]

theorem divAttrFragment_placeholder (k : List Char) (bs : List Nat)
    (h : bs.any (fun b => b == 255) = true) :
    divAttrFragment [(k, OptVal.bytes bs)] =
      [32] ++ k.flatMap utf8Bytes ++ litBytes "=\"" ++ litBytes "\"" := by
  simp [divAttrFragment, renderOptValBytes, h]

/-! ## divProcess pins for the converged strings, and the REFCORR12 witness through the scanner. -/

theorem divProcess_ws_class :
    (divProcess [] [] (some (litBytes "class=\" \"")) (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("class".toList, OptVal.str [])]),
       ("type".toList, OptVal.str "start".toList)] := rfl

theorem divProcess_empty_class_vanished :
    (divProcess [] [] (some (litBytes "class=\"\"")) [] []).2[0]!.opts =
      [("args".toList, OptVal.map []),
       ("type".toList, OptVal.str "start".toList),
       ("vanished".toList, OptVal.bool true)] := rfl

theorem divProcess_data_last :
    (divProcess [] [] (some (litBytes "data-Foo=\"1\" data-foo=\"2\"")) (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("data-foo".toList, OptVal.str "2".toList)]),
       ("type".toList, OptVal.str "start".toList)] := rfl

theorem divProcess_data_empty_keeps :
    (divProcess [] [] (some (litBytes " data-Foo=\"1\" data-foo=\"\"")) (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("data-foo".toList, OptVal.str [])]),
       ("type".toList, OptVal.str "start".toList)] := rfl

theorem divProcess_ws_id :
    (divProcess [] [] (some (litBytes "id=\"   \"")) (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("id".toList, OptVal.str "u-".toList)]),
       ("type".toList, OptVal.str "start".toList)] := rfl

theorem divProcess_tableadv_shape :
    (divProcess [] [] (some (litBytes " DATA-foo=\"UP\" CLASS=\"UP\" ID=\"UP\" data-Foo=\"UP\""))
        (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("data-foo".toList, OptVal.str "UP".toList)]),
       ("type".toList, OptVal.str "start".toList)] := rfl

theorem divProcess_type_trail :
    (divProcess [] [] (some (litBytes " type=\"  t  \"")) (litBytes "body") []).2[0]!.opts =
      [("args".toList, OptVal.map [("type".toList, OptVal.str "t ".toList)]),
       ("type".toList, OptVal.str "start".toList)] := rfl

/-! ## Finite domain, in the style of the Tableadv enumeration. -/

def domKeys : List (List Nat) :=
  [litBytes "id", litBytes "class", litBytes "style", litBytes "role", litBytes "type",
   litBytes "data-foo", litBytes "data-Foo", litBytes "data-FOO",
   litBytes "DATA-foo", litBytes "CLASS", litBytes "ID", litBytes "onclick"]

def domVals : List (List Nat) :=
  [[], [32], [9], [12], [1], litBytes "t", litBytes "  t  ", litBytes "a  b",
   litBytes "u-", litBytes " foo", [255, 48, 255]]

def dataCaseKeys : List (List Nat) :=
  [litBytes "data-foo", litBytes "data-Foo", litBytes "data-FOO"]

def rankedKeys : List (List Nat) :=
  [litBytes "id", litBytes "class", litBytes "style", litBytes "role", litBytes "type"]

def valueAt (r : List (List Char × Option (List Nat))) (name : String) :
    Option (Option (List Nat)) :=
  match r.find? (fun kv => kv.1 == name.toList) with
  | some (_, v) => some v
  | none => none

def noCtrlBytes (bs : List Nat) : Bool :=
  bs.all (fun b => !(b < 32 || b == 127))

/-- One singleton attribute: rejected names drop, `data-*` folds, class right-trims, the other ranked names keep `normalizeValue`, and a PHP-trim id becomes the bare shell. -/
def checkSingleton (k v : List Nat) : Bool :=
  let r := divArgs [(k, v)]
  (r.length ≤ 1) &&
  (if k == litBytes "CLASS" || k == litBytes "ID" || k == litBytes "DATA-foo" ||
      k == litBytes "onclick" then r.isEmpty else true) &&
  (if k == litBytes "data-foo" || k == litBytes "data-Foo" || k == litBytes "data-FOO" then
    valueAt r "data-foo" == some (some (normalizeValue v)) else true) &&
  (if k == litBytes "class" then
    valueAt r "class" == some (some (rtrimSpaceTab (normalizeValue v))) else true) &&
  (if k == litBytes "type" then
    valueAt r "type" == some (some (normalizeValue v)) else true) &&
  (if k == litBytes "style" then
    valueAt r "style" == some (some (normalizeValue v)) else true) &&
  (if k == litBytes "role" then
    valueAt r "role" == some (some (normalizeValue v)) else true) &&
  (if k == litBytes "id" && v.isEmpty then r.isEmpty else true) &&
  (if k == litBytes "id" && !v.isEmpty && v.contains 255 then
    valueAt r "id" == some (some v) else true) &&
  (if k == litBytes "id" && !v.isEmpty && v.all isTrimByte then
    valueAt r "id" == some (some (litBytes "u-")) else true) &&
  (if k == litBytes "id" && v == [12] then
    valueAt r "id" == some (some [117, 45, 32, 32]) else true) &&
  (r.all (fun kv => match kv.2 with
    | some bs => if kv.1 == "id".toList then true else noCtrlBytes bs
    | none => true))

def checkSingletons : Bool :=
  domKeys.all fun k => domVals.all fun v => checkSingleton k v

def checkDup (k1 k2 v1 v2 : List Nat) : Bool :=
  let r := divArgs [(k1, v1), (k2, v2)]
  r.length == 1 && valueAt r "data-foo" == some (some (normalizeValue v2))

def checkDups : Bool :=
  dataCaseKeys.all fun k1 => dataCaseKeys.all fun k2 =>
    domVals.all fun v1 => domVals.all fun v2 => checkDup k1 k2 v1 v2

def inserts {α} (a : α) : List α → List (List α)
  | [] => [[a]]
  | b :: bs => (a :: b :: bs) :: (inserts a bs).map (fun l => b :: l)

def perms {α} : List α → List (List α)
  | [] => [[]]
  | a :: as => (perms as).flatMap (inserts a)

def checkPerm (ks : List (List Nat)) : Bool :=
  let got := (divArgs (ks.map fun k => (k, litBytes "Z"))).map (·.1)
  let exp := (rankedKeys.filter (fun k => ks.contains k)).map utf8Decode
  got == exp

def checkPerms : Bool := (perms rankedKeys).all checkPerm

theorem dom_card : domKeys.length = 12 ∧ domVals.length = 11 ∧
    dataCaseKeys.length = 3 ∧ (perms rankedKeys).length = 120 := by
  decide

theorem all_true {α} (p : α → Bool) :
    ∀ (l : List α), (∀ a ∈ l, p a = true) → l.all p = true
  | [], _ => rfl
  | a :: rest, h => by
      simp [List.all_cons, h a (List.mem_cons_self ..),
        all_true p rest (fun x hx => h x (List.mem_cons_of_mem _ hx))]

set_option maxHeartbeats 8000000 in
theorem enum_singletons : checkSingletons = true := by
  unfold checkSingletons
  refine all_true _ domKeys ?_
  intro k hk
  refine all_true _ domVals ?_
  intro v hv
  simp only [domKeys, List.mem_cons, List.mem_nil_iff, or_false] at hk
  simp only [domVals, List.mem_cons, List.mem_nil_iff, or_false] at hv
  rcases hk with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals rcases hv with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals decide

set_option maxHeartbeats 20000000 in
theorem enum_data_dups : checkDups = true := by
  unfold checkDups
  refine all_true _ dataCaseKeys ?_
  intro k1 hk1
  refine all_true _ dataCaseKeys ?_
  intro k2 hk2
  refine all_true _ domVals ?_
  intro v1 hv1
  refine all_true _ domVals ?_
  intro v2 hv2
  simp only [dataCaseKeys, List.mem_cons, List.mem_nil_iff, or_false] at hk1 hk2
  simp only [domVals, List.mem_cons, List.mem_nil_iff, or_false] at hv1 hv2
  rcases hk1 with rfl | rfl | rfl
  all_goals rcases hk2 with rfl | rfl | rfl
  all_goals rcases hv1 with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals rcases hv2 with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals decide

set_option maxHeartbeats 8000000 in
theorem enum_ranked_order : checkPerms = true := by
  unfold checkPerms
  refine all_true _ (perms rankedKeys) ?_
  intro ks hk
  simp only [perms, rankedKeys, inserts, List.mem_cons, List.mem_nil_iff, or_false] at hk
  rcases hk with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals decide

end LeanFtml
