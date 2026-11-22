/-
Include expansion: the self-contained core of `ftml::includes::include`
(gaps G1.3 and G1.4 of the loop's gap ledger).

The full grammar of what counts as an include block is adjudicated in
GRAMMAR-INCLUDE.md at the loop root (scanner regex, pest grammar,
quoted-include consumption, argument layer). This file models the two
self-contained functions whose behavior the verify-include-expansion
harness exercises but does not state as theorems:

* `find_include_end` (src/includes/mod.rs): the candidate terminator
  scan. Modelled as `scanEnd` over character lists and PROVEN to
  return the first `]]` followed by a newline or end of input, and to
  return none exactly when no such terminator exists.

* `substitute_replacements` (src/includes/mod.rs): the splice that
  applies (range, replacement) pairs to the original text. Modelled
  as `splice` and PROVEN: a single replacement splices exactly
  (take/drop), empty replacements delete exactly the ranges and
  nothing else (the output is the concatenation of the gaps, hence a
  sublist of the input), the padding wrapper `separated` adds at most
  one line ending on each side and never alters the replacement text,
  and the pages list built by the Rust reverse pass equals the
  replacements' page refs in input order.

Evidence: src/includes/mod.rs at ftml 8cb2757c2 (read firsthand
2026-11-20); harness properties 3 and 5 in
.claude/skills/verify-include-expansion/SKILL.md state the deletion
and padding rules this file proves. The scanner, the pest block
grammar, quoted normalization, and argument expressions are specified
in GRAMMAR-INCLUDE.md and are NOT modelled here yet.
-/

namespace LeanFtml

open scoped List

/-! ## The terminator scan (`find_include_end`) -/

/-- A position starts a valid include terminator when the text begins
with `]]` followed by end of input, a `\n`, or a `\r\n`. This is the
exact condition `find_include_end` tests at each offset, stated with
index lookups so it computes on open terms: the two brackets are at
relative offsets 0 and 1, and what follows is either nothing (the
list has length exactly 2), a `\n` at offset 2, or `\r\n` at offsets
2 and 3. -/
def termAt (l : List Char) : Bool :=
  (l[0]? == some ']') && (l[1]? == some ']') &&
    ((l.length == 2) || (l[2]? == some '\n') ||
      ((l[2]? == some '\r') && (l[3]? == some '\n')))

/-- Scan for the first terminator at or after the head of the list.
Returns the absolute end offset (start index + position + 2), like
the Rust, which returns `index + 2`. -/
def scanEnd : List Char → Nat → Option Nat
  | [], _ => none
  | [_], _ => none
  | c₁ :: c₂ :: rest, i =>
      if termAt (c₁ :: c₂ :: rest) then some (i + 2)
      else scanEnd (c₂ :: rest) (i + 1)

/-- The model of `find_include_end(input, start, input.len())`. -/
def findIncludeEnd (s : List Char) (start : Nat) : Option Nat :=
  scanEnd (s.drop start) start

/-- A list shorter than two characters starts no terminator: the
second bracket lookup already fails. -/
theorem termAt_of_length_lt_two {l : List Char} (h : l.length < 2) :
    termAt l = false := by
  have h1 : l[1]? = none := List.getElem?_eq_none_iff.mpr (by omega)
  cases hl : termAt l with
  | false => rfl
  | true =>
    exfalso
    have h2 : (l[1]? == some ']') = true := by
      have h3 : termAt l = true := hl
      simp only [termAt, Bool.and_eq_true] at h3
      exact h3.1.2
    rw [h1] at h2
    exact absurd h2 (by decide)

theorem scanEnd_eq_some {l : List Char} {i e : Nat} (h : scanEnd l i = some e) :
    ∃ p, e = i + p + 2 ∧ termAt (l.drop p) = true ∧
      ∀ q < p, termAt (l.drop q) = false := by
  induction l generalizing i with
  | nil => simp [scanEnd] at h
  | cons c₁ l ih =>
    cases l with
    | nil => simp [scanEnd] at h
    | cons c₂ rest =>
      by_cases ht : termAt (c₁ :: c₂ :: rest) = true
      · have : scanEnd (c₁ :: c₂ :: rest) i = some (i + 2) := by
          simp [scanEnd, ht]
        rw [this] at h
        injection h with h
        exact ⟨0, by omega, by simpa using ht, fun q hq => absurd hq (Nat.not_lt_zero q)⟩
      · have htf : termAt (c₁ :: c₂ :: rest) = false := by
          cases hb : termAt (c₁ :: c₂ :: rest) with
          | true => exact absurd hb ht
          | false => rfl
        have hstep : scanEnd (c₁ :: c₂ :: rest) i = scanEnd (c₂ :: rest) (i + 1) := by
          simp [scanEnd, htf]
        rw [hstep] at h
        obtain ⟨p, he, hterm, hmin⟩ := ih h
        refine ⟨p + 1, by omega, ?_, ?_⟩
        · have : (c₁ :: c₂ :: rest).drop (p + 1) = (c₂ :: rest).drop p := rfl
          rwa [this]
        · intro q hq
          cases q with
          | zero => exact htf
          | succ q' =>
            have : (c₁ :: c₂ :: rest).drop (q' + 1) = (c₂ :: rest).drop q' := rfl
            rw [this]
            exact hmin q' (by omega)

theorem scanEnd_eq_none {l : List Char} {i : Nat} (h : scanEnd l i = none) :
    ∀ p, termAt (l.drop p) = false := by
  induction l generalizing i with
  | nil =>
    intro p
    apply termAt_of_length_lt_two
    simp only [List.length_drop, List.length_nil]
    omega
  | cons c₁ l ih =>
    cases l with
    | nil =>
      intro p
      apply termAt_of_length_lt_two
      simp only [List.length_drop, List.length_cons, List.length_nil]
      omega
    | cons c₂ rest =>
      by_cases ht : termAt (c₁ :: c₂ :: rest) = true
      · exfalso
        have hcon : scanEnd (c₁ :: c₂ :: rest) i = some (i + 2) := by
          simp [scanEnd, ht]
        rw [hcon] at h
        exact absurd h (Option.some_ne_none _)
      · have htf : termAt (c₁ :: c₂ :: rest) = false := by
          cases hb : termAt (c₁ :: c₂ :: rest) with
          | true => exact absurd hb ht
          | false => rfl
        have hstep : scanEnd (c₁ :: c₂ :: rest) i = scanEnd (c₂ :: rest) (i + 1) := by
          simp [scanEnd, htf]
        rw [hstep] at h
        intro p
        cases p with
        | zero => exact htf
        | succ p' =>
          have hd : (c₁ :: c₂ :: rest).drop (p' + 1) = (c₂ :: rest).drop p' := rfl
          rw [hd]
          exact ih h p'

/-- The two directions together: the scan finds a terminator exactly
when one exists, and it is the first one. -/
theorem scanEnd_some_iff {l : List Char} {i : Nat} :
    (∃ e, scanEnd l i = some e) ↔ ∃ p, termAt (l.drop p) = true := by
  constructor
  · rintro ⟨e, h⟩
    obtain ⟨p, -, hterm, -⟩ := scanEnd_eq_some h
    exact ⟨p, hterm⟩
  · rintro ⟨p, hp⟩
    cases h : scanEnd l i with
    | some e => exact ⟨e, rfl⟩
    | none =>
      have := scanEnd_eq_none h p
      rw [hp] at this
      exact absurd this (by simp)

/-- `findIncludeEnd` in absolute positions: a result `e` means the
terminator starts at `e - 2`, at or after `start`, it is a real
terminator in the original text, and no terminator starts in
`[start, e - 2)`. -/
theorem findIncludeEnd_spec {s : List Char} {start e : Nat}
    (h : findIncludeEnd s start = some e) :
    ∃ p, e = start + p + 2 ∧ termAt (s.drop (start + p)) = true ∧
      ∀ q < p, termAt (s.drop (start + q)) = false := by
  obtain ⟨p, he, hterm, hmin⟩ := scanEnd_eq_some h
  refine ⟨p, he, ?_, ?_⟩
  · have : (s.drop start).drop p = s.drop (start + p) := by
      rw [← List.drop_drop]
    rwa [this] at hterm
  · intro q hq
    have hq' := hmin q hq
    have : (s.drop start).drop q = s.drop (start + q) := by
      rw [← List.drop_drop]
    rwa [this] at hq'

/-! ## The substitution splice (`substitute_replacements`) -/

/-- A replacement: (range start, range end, replacement text), with
ranges into the original input, as the Rust collects them (sorted by
start, disjoint). -/
abbrev Repl := Nat × Nat × List Char

/-- The declarative gap text: the input with the ranges removed,
segment by segment. `off` is the original offset of the head of the
remaining text. -/
def gaps : List Repl → List Char → Nat → List Char
  | [], s, _ => s
  | (a, b, _) :: rs, s, off => s.take (a - off) ++ gaps rs (s.drop (b - off)) b

/-- The splice, mirroring the Rust's effect (the Rust applies
`replace_range` in reverse order; the net effect on the original
ranges is this left-to-right splice). -/
def splice : List Repl → List Char → Nat → List Char
  | [], s, _ => s
  | (a, b, t) :: rs, s, off =>
      s.take (a - off) ++ t ++ splice rs (s.drop (b - off)) b

theorem splice_single (a b : Nat) (t s : List Char) :
    splice [(a, b, t)] s 0 = s.take a ++ t ++ s.drop b := by
  simp [splice]

/-- Deletion-only, stated exactly: when every replacement text is
empty, the splice is the gap text. -/
theorem splice_empty_eq_gaps :
    ∀ (rs : List Repl) (s : List Char) (off : Nat),
      (∀ r ∈ rs, r.2.2 = []) → splice rs s off = gaps rs s off := by
  intro rs
  induction rs with
  | nil => intro s off _; rfl
  | cons r rs ih =>
    intro s off hempty
    obtain ⟨a, b, t⟩ := r
    have ht : t = [] := hempty (a, b, t) (by simp)
    have htail := ih (s.drop (b - off)) b (fun r hr => hempty r (List.mem_cons_of_mem _ hr))
    show s.take (a - off) ++ t ++ splice rs (s.drop (b - off)) b
        = s.take (a - off) ++ gaps rs (s.drop (b - off)) b
    rw [ht, htail, List.append_nil]

/-- Ranges are sorted from a cursor when each range starts at or
after the cursor, ends at or after its start, and the rest are
sorted from that range's end. This is the invariant the Rust's
scan maintains (ranges strictly increase). -/
def SortedFrom (off : Nat) : List Repl → Prop
  | [] => True
  | (a, b, _) :: rs => off ≤ a ∧ a ≤ b ∧ SortedFrom b rs

/-- The gap text is a sublist of the input whenever the ranges are
sorted from the cursor. Combined with `splice_empty_eq_gaps` this
is harness property 3: inserting nothing deletes, and only
deletes. -/
theorem gaps_sublist :
    ∀ (rs : List Repl) (s : List Char) (off : Nat),
      SortedFrom off rs →
      gaps rs s off <+ s := by
  intro rs
  induction rs with
  | nil => intro s off _; exact List.Sublist.refl s
  | cons r rs ih =>
    intro s off hord
    obtain ⟨a, b, t⟩ := r
    have hab : off ≤ a ∧ a ≤ b ∧ SortedFrom b rs := hord
    have htail : gaps rs (s.drop (b - off)) b <+ s.drop (b - off) :=
      ih (s.drop (b - off)) b hab.2.2
    have hdrop : s.drop (b - off) = (s.drop (a - off)).drop (b - a) := by
      rw [List.drop_drop]
      congr 1
      omega
    have hmid : s.take (a - off) ++ s.drop (b - off) <+ s := by
      rw [hdrop]
      have h := List.Sublist.append (List.Sublist.refl (s.take (a - off)))
        (List.drop_sublist (b - a) (s.drop (a - off)))
      rwa [List.take_append_drop] at h
    have hstep : s.take (a - off) ++ gaps rs (s.drop (b - off)) b <+ s :=
      (List.Sublist.append (List.Sublist.refl _) htail).trans hmid
    exact hstep

/-! ## The padding wrapper -/

/-- The line ending the Rust copies from the input adjacent to a
range: `\r\n` when the adjacent text ends (before side) or starts
(after side) with it, else `\n`. The before side tests the two
characters just before the range start (with truncated subtraction,
so ranges at offset 0 or 1 can never report `\r\n`: both lookups
would have to hit the same single character). -/
def endingBefore (s : List Char) (a : Nat) : List Char :=
  if (s[a - 2]? == some '\r') && (s[a - 1]? == some '\n')
    then ['\r', '\n'] else ['\n']

/-- The after-side ending: `\r\n` when the text after the range
starts with it, else `\n`. -/
def endingAfter (s : List Char) (b : Nat) : List Char :=
  if (s.drop b).take 2 = ['\r', '\n'] then ['\r', '\n'] else ['\n']

/-- The separated replacement of `substitute_replacements`: empty
replacements stay empty; a non-empty replacement gets exactly one
ending before it when the range does not start at 0 and exactly one
after it when the range does not end at the input end. -/
def separated (s : List Char) (a b : Nat) (t : List Char) : List Char :=
  if t = [] then []
  else
    (if 0 < a then endingBefore s a else []) ++ t ++
      (if b < s.length then endingAfter s b else [])

/-- Padding shape (harness property 5): the separated text is the
replacement itself, framed by at most one line ending on each side,
and the replacement text occurs untouched in the middle. -/
theorem separated_shape (s : List Char) (a b : Nat) (t : List Char)
    (ht : t ≠ []) :
    ∃ pre post : List Char,
      separated s a b t = pre ++ t ++ post ∧
      (pre = [] ∨ pre = ['\n'] ∨ pre = ['\r', '\n']) ∧
      (post = [] ∨ post = ['\n'] ∨ post = ['\r', '\n']) := by
  have hEB : ∀ (s : List Char) (a : Nat),
      endingBefore s a = ['\n'] ∨ endingBefore s a = ['\r', '\n'] := by
    intro s a
    unfold endingBefore
    split
    · exact Or.inr rfl
    · exact Or.inl rfl
  have hEA : ∀ (s : List Char) (b : Nat),
      endingAfter s b = ['\n'] ∨ endingAfter s b = ['\r', '\n'] := by
    intro s b
    unfold endingAfter
    split
    · exact Or.inr rfl
    · exact Or.inl rfl
  unfold separated
  rw [if_neg ht]
  by_cases ha : 0 < a <;> by_cases hb : b < s.length
  · rw [if_pos ha, if_pos hb]
    exact ⟨endingBefore s a, endingAfter s b, rfl,
      (hEB s a).elim (fun h => Or.inr (Or.inl h)) (fun h => Or.inr (Or.inr h)),
      (hEA s b).elim (fun h => Or.inr (Or.inl h)) (fun h => Or.inr (Or.inr h))⟩
  · rw [if_pos ha, if_neg hb]
    exact ⟨endingBefore s a, [], by simp,
      (hEB s a).elim (fun h => Or.inr (Or.inl h)) (fun h => Or.inr (Or.inr h)),
      Or.inl rfl⟩
  · rw [if_neg ha, if_pos hb]
    exact ⟨[], endingAfter s b, by simp, Or.inl rfl,
      (hEA s b).elim (fun h => Or.inr (Or.inl h)) (fun h => Or.inr (Or.inr h))⟩
  · rw [if_neg ha, if_neg hb]
    exact ⟨[], [], by simp, Or.inl rfl, Or.inl rfl⟩

/-! ## The pages list -/

/-- A fetched replacement carries its page reference (modelled as a
natural number standing for the PageRef). -/
abbrev ReplRef := Nat × Nat × Nat

/-- The Rust builds the pages list by pushing refs while iterating
the replacements in REVERSE order, then reversing the list. -/
def pagesRust (rs : List ReplRef) : List Nat :=
  (rs.reverse.map (·.2.2)).reverse

/-- The pages come out in input order (harness property 2). -/
theorem pagesRust_eq (rs : List ReplRef) :
    pagesRust rs = rs.map (·.2.2) := by
  simp [pagesRust]

end LeanFtml
