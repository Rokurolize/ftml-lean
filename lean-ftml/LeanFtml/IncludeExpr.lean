/-!
# Include argument substitution: the live sequential fold (G1.4b)

The expected semantics for include arguments, adjudicated against
live Wikidot on 2026-11-20 (14 sandbox probes, all captures valid;
`conformance-g14b/RESULTS.md` in the loop record; spec rules X1-X4
in GRAMMAR-INCLUDE.md):

Substitution into the fetched content is a FOLD over the argument
list in source order. For each (key, rawValue), every occurrence
of the literal text `{$key}` in the current content is replaced
by rawValue. Values and keys are never pre-expanded; text inserted
by an earlier argument is rewritten by later arguments whose key
it mentions; a duplicate fires iff its placeholder still occurs
at its turn; empty-valued arguments are absent; self-reference is
not special.

The argument list here is the one the G1.4 segment layer produces:
segments with a static-identifier key and a non-empty value, in
source order, duplicates kept. (Expression-shaped keys such as
`{$k}` never reach this list: the segment key scan stops at `{`,
so the segment is inert, which is also what live does with it,
probe e3.)

ftml's `resolve_include_arguments` implements a different
semantics (bounded recursive map expansion) and diverges from
live on 8 of the 14 probes: finding F-G14B-1 in the gap ledger,
routed to the parity side on 2026-11-20. This file models the
LIVE rule. `repPass` is one fold step; `substitute` is the fold.
The workhorse theorems are `repPass_no_occurs` (a key whose
placeholder never occurs leaves the content untouched) and
`repPass_first_occurs` (the first occurrence splits the content
into a kept prefix, the inserted value, and the recursively
processed tail), plus `substitute_append` (the fold composes over
argument-list concatenation, which is what makes argument order
the whole semantics).
-/

namespace LeanFtml

/-- The literal placeholder text for a key: `{$` ++ key ++ `}`. -/
def placeholder (key : List Char) : List Char := '{' :: '$' :: (key ++ ['}'])

theorem placeholder_length (key : List Char) :
    (placeholder key).length = key.length + 3 := by
  simp [placeholder]

/-- Match a pattern at the head of a list; on success, return the
    remainder after the pattern. -/
def matchPat : List Char → List Char → Option (List Char)
  | [], rest => some rest
  | _ :: _, [] => none
  | p :: ps, c :: cs => if p = c then matchPat ps cs else none

theorem matchPat_eq_some {p l rest : List Char} :
    matchPat p l = some rest ↔ l = p ++ rest := by
  induction p generalizing l rest with
  | nil => simp [matchPat]
  | cons p ps ih =>
    cases l with
    | nil => simp [matchPat]
    | cons c cs =>
      by_cases h : p = c
      · subst h; simp [matchPat, ih]
      · have hne : matchPat (p :: ps) (c :: cs) = none := by simp [matchPat, h]
        rw [hne]
        constructor
        · intro hn; cases hn
        · intro hr
          rw [List.cons_append] at hr
          injection hr with h1 _
          exact (h h1.symm).elim

/-- One substitution pass (live rule X1): every occurrence of
    `{$key}` in `l` is replaced by `val`, in a single left-to-right
    pass over the original text; text inserted by a replacement is
    not rescanned within this pass. -/
def repPass (l : List Char) (key val : List Char) : List Char :=
  match l with
  | [] => []
  | c :: cs =>
      match h : matchPat (placeholder key) (c :: cs) with
      | some rest => val ++ repPass rest key val
      | none => c :: repPass cs key val
termination_by l.length
decreasing_by
  · have h2 := congrArg List.length (matchPat_eq_some.mp h)
    simp only [List.length_append, List.length_cons, placeholder_length] at h2
    have hlen : (c :: cs).length = cs.length + 1 := rfl
    omega
  · exact Nat.lt_succ_self _

/-- The live substitution (X1): a fold over the argument list in
    source order; each argument's pass rewrites the whole current
    content, including text inserted by earlier arguments. -/
def substitute (content : List Char) (args : List (List Char × List Char)) :
    List Char :=
  args.foldl (fun c kv => repPass c kv.1 kv.2) content


theorem repPass_cons_some {c : Char} {cs key val rest : List Char}
    (h : matchPat (placeholder key) (c :: cs) = some rest) :
    repPass (c :: cs) key val = val ++ repPass rest key val := by
  rw [repPass, h]

theorem repPass_cons_none {c : Char} {cs key val : List Char}
    (h : matchPat (placeholder key) (c :: cs) = none) :
    repPass (c :: cs) key val = c :: repPass cs key val := by
  rw [repPass, h]

theorem repPass_nil (key val : List Char) : repPass [] key val = [] := by
  rw [repPass]

/-- `p` occurs at the head of `l`: `l` begins with `p`. -/
def AtHead (p l : List Char) : Prop := ∃ rest, l = p ++ rest

theorem matchPat_none_iff {p l : List Char} :
    matchPat p l = none ↔ ¬ AtHead p l := by
  constructor
  · intro h hcon
    obtain ⟨rest, hr⟩ := hcon
    have h2 := matchPat_eq_some.mpr hr
    rw [h] at h2
    cases h2
  · intro h
    cases hm : matchPat p l with
    | some rest => exact absurd ⟨rest, matchPat_eq_some.mp hm⟩ h
    | none => rfl

theorem drop_succ_cons (c : Char) (cs : List Char) (n : Nat) :
    (c :: cs).drop (n + 1) = cs.drop n := rfl

theorem repPass_no_occurs {key val : List Char} :
    ∀ (l : List Char), (∀ n, ¬ AtHead (placeholder key) (l.drop n)) →
      repPass l key val = l := by
  intro l
  induction l with
  | nil => intro _; exact repPass_nil key val
  | cons c cs ih =>
    intro h
    cases hm : matchPat (placeholder key) (c :: cs) with
    | some rest =>
      exfalso
      exact h 0 ⟨rest, by simpa using matchPat_eq_some.mp hm⟩
    | none =>
      rw [repPass_cons_none hm]
      have h' : ∀ n, ¬ AtHead (placeholder key) (cs.drop n) := by
        intro n hn
        exact h (n + 1) (by rw [drop_succ_cons]; exact hn)
      rw [ih h']

theorem repPass_first_occurs {key val : List Char} :
    ∀ (l : List Char) (n : Nat),
      AtHead (placeholder key) (l.drop n) →
      (∀ m, m < n → ¬ AtHead (placeholder key) (l.drop m)) →
      repPass l key val =
        l.take n ++ val ++
          repPass (l.drop (n + (placeholder key).length)) key val := by
  intro l n
  induction n generalizing l with
  | zero =>
    intro hfirst _
    obtain ⟨rest, hr⟩ := hfirst
    rw [List.drop_zero] at hr
    cases l with
    | nil =>
      simp [placeholder] at hr
    | cons c cs =>
      have hm : matchPat (placeholder key) (c :: cs) = some rest :=
        matchPat_eq_some.mpr hr
      rw [repPass_cons_some hm]
      have hdrop : (c :: cs).drop (0 + (placeholder key).length) = rest := by
        rw [Nat.zero_add, hr]
        exact List.drop_left
      rw [hdrop]
      simp
  | succ n ih =>
    intro hfirst hbefore
    cases l with
    | nil =>
      obtain ⟨rest, hr⟩ := hfirst
      simp [placeholder] at hr
    | cons c cs =>
      have hm : matchPat (placeholder key) (c :: cs) = none := by
        rw [matchPat_none_iff]
        have h0 := hbefore 0 (Nat.succ_pos n)
        simpa using h0
      rw [repPass_cons_none hm]
      have hfirst' : AtHead (placeholder key) (cs.drop n) := by
        have h2 := hfirst
        rwa [drop_succ_cons] at h2
      have hbefore' : ∀ m, m < n → ¬ AtHead (placeholder key) (cs.drop m) := by
        intro m hmn hcon
        apply hbefore (m + 1) (Nat.succ_lt_succ hmn)
        rwa [drop_succ_cons]
      rw [ih cs hfirst' hbefore']
      have hdrop : (c :: cs).drop (n + 1 + (placeholder key).length) =
          cs.drop (n + (placeholder key).length) := by
        rw [show n + 1 + (placeholder key).length =
          (n + (placeholder key).length) + 1 from by omega]
        exact drop_succ_cons c cs (n + (placeholder key).length)
      rw [hdrop]
      simp [List.take_succ_cons]

theorem substitute_nil (content : List Char) :
    substitute content [] = content := rfl

theorem substitute_cons (content : List Char)
    (kv : List Char × List Char) (args : List (List Char × List Char)) :
    substitute content (kv :: args) =
      substitute (repPass content kv.1 kv.2) args := rfl

theorem substitute_append (content : List Char)
    (args₁ args₂ : List (List Char × List Char)) :
    substitute content (args₁ ++ args₂) =
      substitute (substitute content args₁) args₂ := by
  simp [substitute, List.foldl_append]

end LeanFtml
