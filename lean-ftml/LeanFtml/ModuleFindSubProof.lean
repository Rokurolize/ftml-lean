import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml

namespace ModuleFindSubProof

/-- The head test used by `findSub` is exactly the Prop-valued prefix relation. Both directions are needed: soundness turns a found hit into a prefix, and minimality turns a prefix at index zero into a head hit. -/
theorem headTest_iff_prefix (pat src : List Nat) :
    ((src.take pat.length == pat) = true) ↔ pat <+: src := by
  constructor
  · intro h
    refine ⟨src.drop pat.length, ?_⟩
    have heq : src.take pat.length = pat := by simpa using h
    simpa [heq] using (List.take_append_drop pat.length src)
  · rintro ⟨t, rfl⟩
    simp

/-- Soundness of `findSub`: a successful search leaves the pattern as a prefix of the subject at the reported index. -/
theorem findSub_prefix (pat xs : List Nat) (c : Nat) (h : findSub pat xs = some c) :
    pat <+: xs.drop c := by
  induction xs generalizing c with
  | nil =>
      cases pat with
      | nil =>
          have hc : 0 = c := by simpa [findSub] using h
          subst c
          exact ⟨[], rfl⟩
      | cons p pat =>
          simp [findSub] at h
  | cons x xs ih =>
      by_cases hpref : (x :: xs).take pat.length == pat
      · have hc : 0 = c := by simpa [findSub, hpref] using h
        subst c
        exact (headTest_iff_prefix pat (x :: xs)).mp (by simpa using hpref)
      · cases hf : findSub pat xs with
        | none => simp [findSub, hpref, hf] at h
        | some c' =>
            have hcsucc : c' + 1 = c := by simpa [findSub, hpref, hf] using h
            subst c
            simpa using ih c' hf

/-- The Boolean form of prefix-at-hit, stated in the mirror's own `List.isPrefixOf` vocabulary. -/
theorem findSub_isPrefixOf_drop (pat xs : List Nat) (c : Nat) (h : findSub pat xs = some c) :
    pat.isPrefixOf (xs.drop c) := by
  exact (List.isPrefixOf_iff_prefix (l₁ := pat) (l₂ := xs.drop c)).mpr (findSub_prefix pat xs c h)

/-- The exact-byte take decomposition at a `findSub` hit: bytes through the hit are the bytes before it followed by the pattern itself. -/
theorem findSub_take_decomp (pat xs : List Nat) (c : Nat) (h : findSub pat xs = some c) :
    xs.take (c + pat.length) = xs.take c ++ pat := by
  induction xs generalizing c with
  | nil =>
      cases pat with
      | nil =>
          have hc : 0 = c := by simpa [findSub] using h
          subst c
          simp
      | cons p pat =>
          simp [findSub] at h
  | cons x xs ih =>
      by_cases hpref : (x :: xs).take pat.length == pat
      · have hc : 0 = c := by simpa [findSub, hpref] using h
        subst c
        have htake : (x :: xs).take pat.length = pat := by simpa using hpref
        simpa using htake
      · cases hf : findSub pat xs with
        | none => simp [findSub, hpref, hf] at h
        | some c' =>
            have hcsucc : c' + 1 = c := by simpa [findSub, hpref, hf] using h
            subst c
            rcases ih c' hf with htake
            have heq : c' + 1 + pat.length = (c' + pat.length) + 1 := by omega
            rw [heq]
            simp [htake]

/-- Minimality of `findSub`: every prefix occurrence of the pattern sits at an index at least the reported one. This is the direction the inherited defense lemmas explicitly left open. -/
theorem findSub_minimal (pat xs : List Nat) (c : Nat) (h : findSub pat xs = some c) :
    ∀ j, pat <+: xs.drop j → c ≤ j := by
  induction xs generalizing c with
  | nil =>
      cases pat with
      | nil =>
          have hc : 0 = c := by simpa [findSub] using h
          subst c
          intro j hpre
          omega
      | cons p pat =>
          simp [findSub] at h
  | cons x xs ih =>
      by_cases hpref : (x :: xs).take pat.length == pat
      · have hc : 0 = c := by simpa [findSub, hpref] using h
        subst c
        intro j hpre
        omega
      · cases hf : findSub pat xs with
        | none => simp [findSub, hpref, hf] at h
        | some c' =>
            have hcsucc : c' + 1 = c := by simpa [findSub, hpref, hf] using h
            subst c
            intro j hpre
            cases j with
            | zero =>
                have hpre0 : pat <+: (x :: xs) := by simpa using hpre
                have hb : ((x :: xs).take pat.length == pat) = true :=
                  (headTest_iff_prefix pat (x :: xs)).mpr hpre0
                exact (hpref hb).elim
            | succ k =>
                have hkpre : pat <+: xs.drop k := by simpa using hpre
                have hc'k : c' ≤ k := ih c' hf k hkpre
                omega

/-- No prefix occurrence of `pat` exists strictly before the `findSub` hit. -/
theorem findSub_no_earlier (pat xs : List Nat) (c : Nat) (h : findSub pat xs = some c) :
    ∀ j, j < c → ¬ pat.isPrefixOf (xs.drop j) := by
  intro j hj hpre
  have hp : pat <+: xs.drop j :=
    (List.isPrefixOf_iff_prefix (l₁ := pat) (l₂ := xs.drop j)).mp hpre
  have hc_le_j := findSub_minimal pat xs c h j hp
  omega

/-- The empty pattern is found at index zero of every subject. -/
theorem findSub_empty (xs : List Nat) : findSub [] xs = some 0 := by
  cases xs <;> simp [findSub]

/-- Combined first-occurrence theorem for `findSub`, with the byte-exact decomposition. -/
theorem findSub_first_occurrence (pat xs : List Nat) (c : Nat) (h : findSub pat xs = some c) :
    pat.isPrefixOf (xs.drop c) ∧
    (∀ j, pat.isPrefixOf (xs.drop j) → c ≤ j) ∧
    xs.take (c + pat.length) = xs.take c ++ pat := by
  refine ⟨findSub_isPrefixOf_drop pat xs c h, ?_, findSub_take_decomp pat xs c h⟩
  intro j hpre
  have hp : pat <+: xs.drop j :=
    (List.isPrefixOf_iff_prefix (l₁ := pat) (l₂ := xs.drop j)).mp hpre
  exact findSub_minimal pat xs c h j hp

/-- A successful case-insensitive literal match consumes exactly the literal length: the consumed bytes `pre` plus the returned rest reassemble the source. -/
theorem matchLitCI_decomp (pat src rest : List Nat) (h : matchLitCI pat src = some rest) :
    ∃ pre : List Nat, pre.length = pat.length ∧ pre ++ rest = src := by
  induction pat generalizing src with
  | nil =>
      exact ⟨[], by simp, by simpa [matchLitCI] using h.symm⟩
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p
          · have htail : matchLitCI pat xs = some rest := by simpa [matchLitCI, hb] using h
            rcases ih xs htail with ⟨pre, hlen, happ⟩
            exact ⟨x :: pre, by simp [hlen], by simp [happ]⟩
          · simp [matchLitCI, hb] at h

/-- Soundness of `findSubCI`: at the reported index there is a successful `matchLitCI`, and the bytes it consumed have the pattern's length and decompose the drop. The byte-exact take equality of `findSub` is deliberately NOT claimed here, because case folding can change bytes (`matchLitCI [97] [65] = some []`); the matched bytes are `pre`, not necessarily `pat`. -/
theorem findSubCI_hit_decomp (pat xs : List Nat) (c : Nat) (h : findSubCI pat xs = some c) :
    ∃ pre rest : List Nat,
      pre.length = pat.length ∧
      matchLitCI pat (xs.drop c) = some rest ∧
      pre ++ rest = xs.drop c ∧
      xs.take (c + pat.length) = xs.take c ++ pre := by
  induction xs generalizing c with
  | nil =>
      cases pat with
      | nil =>
          have hc : 0 = c := by simpa [findSubCI] using h
          subst c
          exact ⟨[], [], rfl, rfl, rfl, rfl⟩
      | cons p pat =>
          simp [findSubCI] at h
  | cons x xs ih =>
      cases hm : matchLitCI pat (x :: xs) with
      | some rest0 =>
          have hc : 0 = c := by simpa [findSubCI, hm] using h
          subst c
          rcases matchLitCI_decomp pat (x :: xs) rest0 hm with ⟨pre, hprelen, hpreappend⟩
          have htake : (x :: xs).take pat.length = pre := by
            rw [← hpreappend]
            simp [hprelen]
          refine ⟨pre, rest0, hprelen, ?_, ?_, ?_⟩
          · simpa using hm
          · simpa using hpreappend
          · simp [htake]
      | none =>
          cases hf : findSubCI pat xs with
          | none => simp [findSubCI, hm, hf] at h
          | some c' =>
              have hcsucc : c' + 1 = c := by simpa [findSubCI, hm, hf] using h
              subst c
              rcases ih c' hf with ⟨pre, rest, hprelen, hmatch, happ, htake⟩
              refine ⟨pre, rest, hprelen, ?_, ?_, ?_⟩
              · simpa using hmatch
              · simpa using happ
              · have heq : c' + 1 + pat.length = (c' + pat.length) + 1 := by omega
                rw [heq]
                simp [htake]

/-- Minimality of `findSubCI`: every index admitting a successful case-insensitive match is at least the reported one. -/
theorem findSubCI_minimal (pat xs : List Nat) (c : Nat) (h : findSubCI pat xs = some c) :
    ∀ j, (∃ rest, matchLitCI pat (xs.drop j) = some rest) → c ≤ j := by
  induction xs generalizing c with
  | nil =>
      cases pat with
      | nil =>
          have hc : 0 = c := by simpa [findSubCI] using h
          subst c
          intro j hpre
          omega
      | cons p pat =>
          simp [findSubCI] at h
  | cons x xs ih =>
      cases hm : matchLitCI pat (x :: xs) with
      | some rest =>
          have hc : 0 = c := by simpa [findSubCI, hm] using h
          subst c
          intro j hpre
          omega
      | none =>
          cases hf : findSubCI pat xs with
          | none => simp [findSubCI, hm, hf] at h
          | some c' =>
              have hcsucc : c' + 1 = c := by simpa [findSubCI, hm, hf] using h
              subst c
              intro j hj
              cases j with
              | zero =>
                  rcases hj with ⟨rest, hrest⟩
                  have hrest0 : matchLitCI pat (x :: xs) = some rest := by simpa using hrest
                  rw [hm] at hrest0
                  cases hrest0
              | succ k =>
                  have hk : ∃ rest, matchLitCI pat (xs.drop k) = some rest := by
                    rcases hj with ⟨rest, hrest⟩
                    exact ⟨rest, by simpa using hrest⟩
                  have hc'k : c' ≤ k := ih c' hf k hk
                  omega

/-- No case-insensitive occurrence of `pat` exists strictly before the `findSubCI` hit. -/
theorem findSubCI_no_earlier (pat xs : List Nat) (c : Nat) (h : findSubCI pat xs = some c) :
    ∀ j, j < c → ¬ ∃ rest, matchLitCI pat (xs.drop j) = some rest := by
  intro j hj hpre
  have hc_le_j := findSubCI_minimal pat xs c h j hpre
  omega

/-- The empty pattern is found at index zero of every subject, case-insensitively too. -/
theorem findSubCI_empty (xs : List Nat) : findSubCI [] xs = some 0 := by
  cases xs <;> simp [findSubCI, matchLitCI]

/-- Combined first-occurrence theorem for `findSubCI`, in terms of `matchLitCI`. -/
theorem findSubCI_first_occurrence (pat xs : List Nat) (c : Nat) (h : findSubCI pat xs = some c) :
    (∃ rest, matchLitCI pat (xs.drop c) = some rest) ∧
    (∀ j, (∃ rest, matchLitCI pat (xs.drop j) = some rest) → c ≤ j) := by
  rcases findSubCI_hit_decomp pat xs c h with ⟨pre, rest, hlen, hmatch, happ, htake⟩
  exact ⟨⟨rest, hmatch⟩, findSubCI_minimal pat xs c h⟩

#print axioms headTest_iff_prefix
#print axioms findSub_prefix
#print axioms findSub_isPrefixOf_drop
#print axioms findSub_take_decomp
#print axioms findSub_minimal
#print axioms findSub_no_earlier
#print axioms findSub_empty
#print axioms findSub_first_occurrence
#print axioms matchLitCI_decomp
#print axioms findSubCI_hit_decomp
#print axioms findSubCI_minimal
#print axioms findSubCI_no_earlier
#print axioms findSubCI_empty
#print axioms findSubCI_first_occurrence

end ModuleFindSubProof

end LeanFtml
