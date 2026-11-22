/-
  LeanFtml.IncludeGrammar — the include scanner's prefix
  characterization and the page-reference scan, modelled on
  `List Char`.

  PROOF SCOPE (reconnected 2026-11-22, C-AUDIT-G13-3): the one
  headline theorem in this file is `parsePageRef_spec`. It
  certifies `parsePageRef`, which `ConformanceG14.parseBlockFrag`
  calls, and the same page-character scan is what the capstone
  pipeline's `refParseBlock` performs with `takeWhile isPageC`
  (`IncludeRule.lean`, reached from `Pipeline.applyRule` on
  `.include` and from `ConformanceCapstone`).

  The other five former headline theorems certified functions the
  capstone pipeline does not call. Dispositions, with the
  call-graph evidence recorded in REPORT-G13-RECONNECT.md:

  * `matchOpener_adjacent` and `matchOpener_spaced_none` certified
    `matchOpener` / `openerOk`. Nothing outside those theorems
    called either function (`ConformanceG14.driverOpener` and
    `refFindCandidate` each reimplement the opener check). Both
    functions are removed. The facts are restated on
    `refFindCandidate`: `refFindCandidate_adjacent` (a returned
    candidate never has a positive prefix length, so the old
    "non-empty prefix ends at `>`" implication holds), 
    `refFindCandidate_spaced_none` (the spaced form is not a
    candidate at that line start), `refFindCandidate_skips_gt`
    (any lead containing `>` is skipped), and
    `refFindCandidate_success_shape` (a success is the tight
    line-start `[[include` with prefix length and depth 0).

  * `stripGt_split` and `origOffset_mem` certified `stripGt` and
    `origOffset`. Their only callers were `ConformanceG14`'s
    quoted branch, which `findMatch` never enters (it returns
    only depth-0 matches). That branch and these functions are
    removed. No function on the capstone path strips quote
    prefixes or maps normalized offsets.

  * `parseSiteRef_spec` certified `parseSiteRef`, which nothing
    called. The function is removed. The live site split is
    `refResolveRef_pair_spec`.

  `scanPrefix` (with `leadRun`, `lastGtEnd`, `countGt`) remains
  because `ConformanceG14.driverOpener` calls it. `startsWithCI`
  remains because `refFindCandidate` and `ConformanceG14` call it.
  Neither is a headline theorem.
-/

namespace LeanFtml

/-! ## Character classes (grammar.pest, mod.rs INCLUDE_REGEX) -/

/-- Horizontal blank: space or tab. -/
def isBlankC (c : Char) : Bool := c == ' ' || c == '\t'

/-- Page-name characters (grammar.pest `page_name`): anything
    except space, newline, tab, `[`, `|`, `]`, `"`, `'`.
    Colons are allowed, so a category separator (`component:box`,
    `scp-9506`, ...) stays inside the page run. -/
def isPageC (c : Char) : Bool :=
  !(c == ' ' || c == '\n' || c == '\t' || c == '[' || c == '|' ||
    c == ']' || c == '"' || c == '\'')

/-- Count of `>` in a character list. -/
def countGt : List Char → Nat
  | [] => 0
  | c :: t => (if c == '>' then 1 else 0) + countGt t

theorem countGt_append (a b : List Char) :
    countGt (a ++ b) = countGt a + countGt b := by
  induction a with
  | nil => simp [countGt]
  | cons c t ih => simp [countGt, ih, Nat.add_assoc]

theorem countGt_eq_zero_of_all_blank {l : List Char}
    (h : ∀ c ∈ l, isBlankC c = true) : countGt l = 0 := by
  induction l with
  | nil => rfl
  | cons c t ih =>
    have hc := h c (by simp)
    have h0 : (if c == '>' then (1 : Nat) else 0) = 0 := by
      simp only [isBlankC, Bool.or_eq_true] at hc
      cases hc with
      | inl h1 => simp [beq_iff_eq.mp h1]
      | inr h1 => simp [beq_iff_eq.mp h1]
    show (if c == '>' then (1 : Nat) else 0) + countGt t = 0
    rw [h0, ih (fun x hx => h x (by simp [hx]))]

/-! ## The last-`>` end position -/

/-- End position (from the start of the list) of the last `>` in
    the list, or 0 when there is none. -/
def lastGtEnd : List Char → Nat
  | [] => 0
  | c :: t => if lastGtEnd t = 0 then (if c == '>' then 1 else 0)
              else lastGtEnd t + 1

theorem lastGtEnd_le_length (l : List Char) : lastGtEnd l ≤ l.length := by
  induction l with
  | nil => simp [lastGtEnd]
  | cons c t ih =>
    show (if lastGtEnd t = 0 then (if c == '>' then 1 else 0)
          else lastGtEnd t + 1) ≤ t.length + 1
    by_cases ht : lastGtEnd t = 0
    · rw [if_pos ht]
      by_cases hc : (c == '>')
      · rw [if_pos hc]; simp
      · rw [if_neg hc]; simp
    · rw [if_neg ht]; omega

theorem lastGtEnd_eq_zero_of_all_blank {l : List Char}
    (h : ∀ c ∈ l, isBlankC c = true) : lastGtEnd l = 0 := by
  induction l with
  | nil => rfl
  | cons c t ih =>
    have hc := h c (by simp)
    have ht : lastGtEnd t = 0 := ih (fun x hx => h x (by simp [hx]))
    show (if lastGtEnd t = 0 then (if c == '>' then 1 else 0)
          else lastGtEnd t + 1) = 0
    rw [if_pos ht]
    simp only [isBlankC, Bool.or_eq_true] at hc
    cases hc with
    | inl h1 => simp [beq_iff_eq.mp h1]
    | inr h1 => simp [beq_iff_eq.mp h1]

theorem lastGtEnd_append (a b : List Char) :
    lastGtEnd (a ++ b) =
      if lastGtEnd b = 0 then lastGtEnd a else a.length + lastGtEnd b := by
  induction a with
  | nil => simp [lastGtEnd]
  | cons c t ih =>
    have e1 : (c :: t) ++ b = c :: (t ++ b) := rfl
    rw [e1]
    show (if lastGtEnd (t ++ b) = 0 then (if c == '>' then 1 else 0)
          else lastGtEnd (t ++ b) + 1) = _
    rw [ih]
    have hct : lastGtEnd (c :: t) =
        if lastGtEnd t = 0 then (if c == '>' then 1 else 0)
        else lastGtEnd t + 1 := rfl
    rw [hct]
    by_cases hb : lastGtEnd b = 0
    · have e1 : (if lastGtEnd b = 0 then lastGtEnd t
          else t.length + lastGtEnd b) = lastGtEnd t := if_pos hb
      have e2 : (if lastGtEnd b = 0 then
          (if lastGtEnd t = 0 then (if c == '>' then 1 else 0)
           else lastGtEnd t + 1)
          else (c :: t).length + lastGtEnd b) =
          (if lastGtEnd t = 0 then (if c == '>' then 1 else 0)
           else lastGtEnd t + 1) := if_pos hb
      rw [e1, e2]
    · have e1 : (if lastGtEnd b = 0 then lastGtEnd t
          else t.length + lastGtEnd b) = t.length + lastGtEnd b := if_neg hb
      have e2 : (if lastGtEnd b = 0 then
          (if lastGtEnd t = 0 then (if c == '>' then 1 else 0)
           else lastGtEnd t + 1)
          else (c :: t).length + lastGtEnd b) =
          (c :: t).length + lastGtEnd b := if_neg hb
      rw [e1, e2, if_neg (show ¬ (t.length + lastGtEnd b = 0) by omega)]
      show t.length + lastGtEnd b + 1 = (c :: t).length + lastGtEnd b
      rw [List.length_cons]
      omega

theorem countGt_pos_iff (l : List Char) :
    0 < countGt l ↔ '>' ∈ l := by
  induction l with
  | nil => simp [countGt]
  | cons c t ih =>
    rw [List.mem_cons]
    by_cases hc : c = '>'
    · subst hc
      show 0 < (if '>' == '>' then (1 : Nat) else 0) + countGt t ↔ _
      rw [if_pos (by decide)]
      constructor
      · intro _
        exact Or.inl rfl
      · intro _
        omega
    · have h0 : (if c == '>' then (1 : Nat) else 0) = 0 := by
        rw [if_neg]
        simp [hc]
      show 0 < (if c == '>' then (1 : Nat) else 0) + countGt t ↔ _
      rw [h0, Nat.zero_add]
      constructor
      · intro h
        exact Or.inr (ih.mp h)
      · intro h
        cases h with
        | inl h1 => exact absurd h1.symm hc
        | inr h1 => exact ih.mpr h1

theorem lastGtEnd_pos_iff (l : List Char) :
    0 < lastGtEnd l ↔ '>' ∈ l := by
  induction l with
  | nil => simp [lastGtEnd]
  | cons c t ih =>
    rw [List.mem_cons]
    show 0 < (if lastGtEnd t = 0 then (if c == '>' then 1 else 0)
              else lastGtEnd t + 1) ↔ _
    by_cases ht : lastGtEnd t = 0
    · rw [if_pos ht]
      have hnt : '>' ∉ t := fun hmem => by
        have h1 : 0 < lastGtEnd t := ih.mpr hmem
        omega
      by_cases hc : (c == '>')
      · rw [if_pos hc]
        constructor
        · intro _
          exact Or.inl (beq_iff_eq.mp hc).symm
        · intro _
          exact Nat.one_pos
      · rw [if_neg hc]
        constructor
        · intro h
          omega
        · intro h
          cases h with
          | inl h1 =>
            have hc' : c = '>' := h1.symm
            simp [hc'] at hc
          | inr h1 => exact absurd h1 hnt
    · rw [if_neg ht]
      constructor
      · intro _
        exact Or.inr (ih.mp (Nat.pos_of_ne_zero ht))
      · intro _
        omega

/-- The element just before the end position of the last `>` is
    that `>` (in the total, `getElem?` form). -/
theorem getElem?_lastGtEnd {l : List Char} (h : 0 < lastGtEnd l) :
    l[lastGtEnd l - 1]? = some '>' := by
  induction l with
  | nil => simp [lastGtEnd] at h
  | cons c t ih =>
    by_cases ht : lastGtEnd t = 0
    · have hval : lastGtEnd (c :: t) = if c == '>' then 1 else 0 := by
        show (if lastGtEnd t = 0 then (if c == '>' then 1 else 0)
              else lastGtEnd t + 1) = _
        rw [if_pos ht]
      rw [hval] at h
      by_cases hc : (c == '>')
      · rw [if_pos hc] at hval
        have hc' : c = '>' := beq_iff_eq.mp hc
        rw [hval]
        simp [hc']
      · rw [if_neg hc] at h
        simp at h
    · have hval : lastGtEnd (c :: t) = lastGtEnd t + 1 := by
        show (if lastGtEnd t = 0 then (if c == '>' then 1 else 0)
              else lastGtEnd t + 1) = _
        rw [if_neg ht]
      have hpos : 0 < lastGtEnd t := Nat.pos_of_ne_zero ht
      have e1 : lastGtEnd (c :: t) - 1 = (lastGtEnd t - 1) + 1 := by
        rw [hval]; omega
      rw [e1, List.getElem?_cons_succ]
      exact ih hpos

/-! ## takeWhile helpers -/

theorem mem_takeWhile_pred {p : Char → Bool} {l : List Char} {c : Char}
    (h : c ∈ l.takeWhile p) : p c = true := by
  induction l with
  | nil => simp at h
  | cons a t ih =>
    by_cases ha : p a = true
    · have h1 : (a :: t).takeWhile p = a :: t.takeWhile p :=
        List.takeWhile_cons_of_pos ha
      rw [h1] at h
      cases h with
      | head => exact ha
      | tail _ h2 => exact ih h2
    · have h1 : (a :: t).takeWhile p = [] :=
        List.takeWhile_cons_of_neg (by simpa using ha)
      rw [h1] at h
      simp at h

theorem takeWhile_length_le (p : Char → Bool) (l : List Char) :
    (l.takeWhile p).length ≤ l.length := by
  induction l with
  | nil => simp
  | cons a t ih =>
    by_cases ha : p a = true
    · rw [List.takeWhile_cons_of_pos ha]
      simp [List.length_cons]
      omega
    · rw [List.takeWhile_cons_of_neg (by simpa using ha)]
      simp

theorem getElem?_takeWhile {p : Char → Bool} {l : List Char} {i : Nat}
    (hi : i < (l.takeWhile p).length) :
    (l.takeWhile p)[i]? = l[i]? := by
  induction l generalizing i with
  | nil => simp at hi
  | cons a t ih =>
    by_cases ha : p a = true
    · rw [List.takeWhile_cons_of_pos ha]
      cases i with
      | zero => simp
      | succ i =>
        have hi' : i < (t.takeWhile p).length := by
          have h2 : ((a :: t).takeWhile p).length =
              (t.takeWhile p).length + 1 := by
            rw [List.takeWhile_cons_of_pos ha, List.length_cons]
          omega
        rw [List.getElem?_cons_succ, List.getElem?_cons_succ]
        exact ih hi'
    · rw [List.takeWhile_cons_of_neg (by simpa using ha)] at hi
      simp at hi

/-- takeWhile over an all-passing prefix. -/
theorem takeWhile_append_of_all {q : Char → Bool} {a b : List Char}
    (ha : ∀ c ∈ a, q c = true) :
    (a ++ b).takeWhile q = a ++ b.takeWhile q := by
  induction a with
  | nil => simp
  | cons c t ih =>
    have hc : q c = true := ha c (by simp)
    rw [List.cons_append, List.takeWhile_cons_of_pos hc, List.cons_append]
    rw [ih (fun x hx => ha x (by simp [hx]))]

/-! ## The scanner: prefix match -/

/-- The leading blank/`>` run of a line. -/
def leadRun (l : List Char) : List Char :=
  l.takeWhile (fun c => c == '>' || isBlankC c)

/-- The scanner's prefix match: `(length of the complete-group
    prefix, quote depth)`. The regex `(?:[ \t]*>)*` matches the
    prefix of the leading run ending at its last `>` (or nothing),
    and its depth is the run's `>` count. -/
def scanPrefix (l : List Char) : Nat × Nat :=
  (lastGtEnd (leadRun l), countGt (leadRun l))

/-- Case-insensitive match of a literal word at the head of a list.
    Written with recursion on the word only (a two-scrutinee
    overlapping match would pull Classical.choice into the compiled
    definition, as measured on this toolchain). -/
def startsWithCI (text : List Char) : List Char → Bool
  | [] => true
  | wc :: wt =>
    match text with
    | [] => false
    | tc :: tt => (tc.toLower == wc.toLower) && startsWithCI tt wt

/-! ## dropWhile, for the page-reference scan -/

/-- The head of a dropWhile result does not satisfy the predicate. -/
theorem dropWhile_head_not {p : Char → Bool} {l : List Char}
    {c : Char} {r : List Char} (h : l.dropWhile p = c :: r) :
    p c = false := by
  induction l with
  | nil => simp at h
  | cons a t ih =>
    by_cases ha : p a = true
    · have h1 : (a :: t).dropWhile p = t.dropWhile p :=
        List.dropWhile_cons_of_pos ha
      rw [h1] at h
      exact ih h
    · have h1 : (a :: t).dropWhile p = a :: t :=
        List.dropWhile_cons_of_neg (by simpa using ha)
      rw [h1] at h
      have h2 : a = c := by
        have h3 := congrArg List.head? h
        simpa using h3
      rw [← h2]
      simpa using ha

/-! ## Page references (grammar.pest `page_ref`) -/

/-- The page-reference scan: the maximal run of page characters,
    and the rest. -/
def parsePageRef (l : List Char) : List Char × List Char :=
  (l.takeWhile isPageC, l.dropWhile isPageC)

/-- The scan splits the input, and the reference is maximal: the
    rest is empty or starts with a non-page character. -/
theorem parsePageRef_spec (l : List Char) :
    l = (parsePageRef l).1 ++ (parsePageRef l).2 ∧
    ((parsePageRef l).2 = [] ∨
      ∃ c r, (parsePageRef l).2 = c :: r ∧ isPageC c = false) := by
  unfold parsePageRef
  constructor
  · exact (List.takeWhile_append_dropWhile (p := isPageC) (l := l)).symm
  · cases h2 : l.dropWhile isPageC with
    | nil => exact Or.inl rfl
    | cons c r =>
      refine Or.inr ⟨c, r, rfl, ?_⟩
      exact dropWhile_head_not h2

end LeanFtml
