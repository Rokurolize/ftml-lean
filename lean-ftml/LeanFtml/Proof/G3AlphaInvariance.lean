/-
  LeanFtml.Proof.G3AlphaInvariance — Stage 2(d) G3 remainders (`proof/g3-remainders`).

  Discharges the non-Email G3 obligations from ADVISOR-PROOF-POLICY §4.6 & §5.2:
  1. General `TokEquiv` and `ShiftEquiv` algebra (`comp`, `symm`, `append`, `normSegs`,
     `allText`, `segHasUfffd`, generic `runRules` composition).
  2. Universal `render_alpha_invariant` on `RenderCore.renderSegsLoop` and
     `RenderCore.renderWith` for arbitrary renamings `σ : Nat → Nat` (instantiated at
     `renderMirrorEnv`, `renderRefSpec`, arbitrary bijections, and `base`-shift), paired
     with the concrete negative boundary `renderWith_ufffd_not_alpha_invariant` pinning
     Reflection Surface 2 (`U+FFFD` rescan index leak in `ufffdWalk`).
  3. Unconditional `codeRule_preserves_wf`, extending the consecutive `pipelineFull`
     `WFState` and `ReachableState` prefix to `[.include, .prefilter, .delimiter, .code]`.
  4. Byte-level `PhPair` bridge (`segsTokEquiv → PhPair → parseBytes segsTokEquiv`) and
     unconditional rule-level `TokEquiv` (arbitrary `σ` via `extendRen`) and `ShiftEquiv`
     (arbitrary `base`) preservation for 9 production rules:
     `.include`, `.prefilter`, `.delimiter`, `.code`, `.horiz`, `.separator`, `.clearfloat`,
     `.break`, `.center`, plus composed multi-rule parse-and-render base-shift invariance.

  Import boundary: intentionally does NOT import `LeanFtml.ProofEmail*` or
  `LeanFtml.Proof.AlphaComposition` to avoid the pre-existing `emailDecBytes` collision
  between `ByteCore.lean:39` and `ProofEmailKeepers.lean:16`.

  Axiom discipline: Lean core only, no Mathlib, no `sorry`, no custom `axiom`, no
  `native_decide`, no `bv_decide`, no `Lean.ofReduceBool`; all theorem axioms are within
  `[propext, Classical.choice, Quot.sound]`.
-/
import LeanFtml.TokenStateProof
import LeanFtml.RefRender
import LeanFtml.Proof.F3R1Bundles
import LeanFtml.Proof.CodeRuleProof

namespace LeanFtml

/-! ## Local byte & list helpers (kernel-checked) -/

private theorem g3_beq_false_of_ne {a b : Nat} (h : a ≠ b) : (a == b) = false :=
  beq_false_of_ne h

private theorem g3_mem_phBytes_spec {k b : Nat} (hb : b ∈ phBytes k) :
    b = 0xFF ∨ (48 ≤ b ∧ b ≤ 57) := by
  simp only [phBytes, List.mem_append, List.mem_singleton] at hb
  rcases hb with (rfl | hd) | rfl
  · exact Or.inl rfl
  · exact Or.inr (RawBridge.rb_toString_digit_bytes k b hd)
  · exact Or.inl rfl

private theorem g3_drop_takeWhile_length {α : Type} (p : α → Bool) (xs : List α) :
    xs.drop (xs.takeWhile p).length = xs.dropWhile p := by
  induction xs with
  | nil => rfl
  | cons x xs' ih =>
      dsimp only [List.takeWhile, List.dropWhile]
      split
      · simp only [List.length_cons, List.drop_succ_cons, ih]
      · simp

private theorem g3_runCount_eq_takeWhile_length (xs : List Nat) (ch acc : Nat) :
    runCount xs ch acc = acc + (xs.takeWhile (fun b => b == ch)).length := by
  induction xs generalizing acc with
  | nil => simp [runCount]
  | cons b bs ih =>
      dsimp only [runCount, List.takeWhile]
      by_cases hb : b == ch
      · simp only [hb, ↓reduceIte, List.length_cons]
        rw [ih (acc + 1)]
        omega
      · simp [hb]

private theorem g3_takeWhile_dropWhile_append {α : Type} (p : α → Bool) (ys rest : List α) :
    ((ys ++ rest).takeWhile p =
      if ys.dropWhile p = [] then ys ++ rest.takeWhile p else ys.takeWhile p) ∧
    ((ys ++ rest).dropWhile p =
      if ys.dropWhile p = [] then rest.dropWhile p else ys.dropWhile p ++ rest) := by
  constructor
  · induction ys with
    | nil => simp
    | cons y ys' ih =>
        dsimp only [List.cons_append, List.takeWhile, List.dropWhile]
        by_cases hy : p y = true
        · simp only [hy, ih]
          by_cases hdy : ys'.dropWhile p = [] <;> simp [hdy]
        · simp [hy]
  · induction ys with
    | nil => simp
    | cons y ys' ih =>
        dsimp only [List.cons_append, List.dropWhile]
        by_cases hpy : p y = true <;> simp [hpy, ih]

private theorem g3_mem_of_mem_dropWhile {α : Type} {p : α → Bool} {a : α} {xs : List α}
    (h : a ∈ xs.dropWhile p) : a ∈ xs := by
  induction xs with
  | nil => simp at h
  | cons x xs' ih =>
      dsimp only [List.dropWhile] at h
      split at h
      · exact List.mem_cons_of_mem _ (ih h)
      · exact h

private theorem g3_mem_of_mem_takeWhile {α : Type} {p : α → Bool} {a : α} {xs : List α}
    (h : a ∈ xs.takeWhile p) : a ∈ xs := by
  induction xs with
  | nil => simp at h
  | cons x xs' ih =>
      dsimp only [List.takeWhile] at h
      split at h
      · cases h with
        | head => exact List.mem_cons_self
        | tail _ ht => exact List.mem_cons_of_mem _ (ih ht)
      · cases h

private theorem g3_length_takeWhile_le {α : Type} (p : α → Bool) (xs : List α) :
    (xs.takeWhile p).length ≤ xs.length := by
  induction xs with
  | nil => simp
  | cons x xs' ih =>
      simp only [List.takeWhile]
      split <;> simp [List.length_cons] <;> omega

/-! ## 1. `TokEquiv` & `ShiftEquiv` Algebra -/

theorem segTokEquiv_comp {σ₁ σ₂ : Nat → Nat} {s₁ s₂ s₃ : TSeg}
    (h₁₂ : segTokEquiv σ₁ s₁ s₂) (h₂₃ : segTokEquiv σ₂ s₂ s₃) :
    segTokEquiv (fun k => σ₂ (σ₁ k)) s₁ s₃ := by
  cases s₁ <;> cases s₂ <;> cases s₃ <;> simp only [segTokEquiv] at h₁₂ h₂₃ ⊢
  · exact h₁₂.trans h₂₃
  · subst h₁₂; exact h₂₃

theorem segsTokEquiv_comp {σ₁ σ₂ : Nat → Nat} {s₁ s₂ s₃ : List TSeg}
    (h₁₂ : segsTokEquiv σ₁ s₁ s₂) (h₂₃ : segsTokEquiv σ₂ s₂ s₃) :
    segsTokEquiv (fun k => σ₂ (σ₁ k)) s₁ s₃ := by
  induction s₁ generalizing s₂ s₃ with
  | nil =>
      cases s₂ <;> cases s₃ <;> simp only [segsTokEquiv] at h₁₂ h₂₃ ⊢
  | cons a as ih =>
      cases s₂ with
      | nil => simp [segsTokEquiv] at h₁₂
      | cons b bs =>
          cases s₃ with
          | nil => simp [segsTokEquiv] at h₂₃
          | cons c cs =>
              simp only [segsTokEquiv] at h₁₂ h₂₃ ⊢
              exact ⟨segTokEquiv_comp h₁₂.1 h₂₃.1, ih h₁₂.2 h₂₃.2⟩

theorem tokEquiv_comp {σ₁ σ₂ : Nat → Nat} {st₁ st₂ st₃ : ParseState}
    (h₁₂ : TokEquiv σ₁ st₁ st₂) (h₂₃ : TokEquiv σ₂ st₂ st₃) :
    TokEquiv (fun k => σ₂ (σ₁ k)) st₁ st₃ := by
  rcases h₁₂ with ⟨hw₁₂, hlen₁₂, hrules₁₂, hfat₁₂⟩
  rcases h₂₃ with ⟨hw₂₃, hlen₂₃, hrules₂₃, hfat₂₃⟩
  refine ⟨segsTokEquiv_comp hw₁₂ hw₂₃, hlen₁₂.trans hlen₂₃, ?_, hfat₁₂.trans hfat₂₃⟩
  intro i hi
  have hi₂ : i < st₂.tokens.length := by omega
  exact (hrules₁₂ i hi).trans (hrules₂₃ i hi₂)

theorem segTokEquiv_symm {σ τ : Nat → Nat} (hinv : ∀ k, τ (σ k) = k) {s₁ s₂ : TSeg}
    (h : segTokEquiv σ s₁ s₂) : segTokEquiv τ s₂ s₁ := by
  cases s₁ <;> cases s₂ <;> simp only [segTokEquiv] at h ⊢
  · exact h.symm
  · subst h; exact hinv _

theorem segsTokEquiv_symm {σ τ : Nat → Nat} (hinv : ∀ k, τ (σ k) = k) {s₁ s₂ : List TSeg}
    (h : segsTokEquiv σ s₁ s₂) : segsTokEquiv τ s₂ s₁ := by
  induction s₁ generalizing s₂ with
  | nil =>
      cases s₂ <;> simp only [segsTokEquiv] at h ⊢
  | cons a as ih =>
      cases s₂ with
      | nil => simp [segsTokEquiv] at h
      | cons b bs =>
          simp only [segsTokEquiv] at h ⊢
          exact ⟨segTokEquiv_symm hinv h.1, ih h.2⟩

theorem tokEquiv_symm {σ τ : Nat → Nat} (hinv : ∀ k, τ (σ k) = k) {st₁ st₂ : ParseState}
    (h : TokEquiv σ st₁ st₂) : TokEquiv τ st₂ st₁ := by
  rcases h with ⟨hw, hlen, hrules, hfat⟩
  refine ⟨segsTokEquiv_symm hinv hw, hlen.symm, ?_, hfat.symm⟩
  intro i hi
  have hi₁ : i < st₁.tokens.length := by omega
  exact (hrules i hi₁).symm

theorem segsTokEquiv_append {σ : Nat → Nat} {a₁ a₂ b₁ b₂ : List TSeg}
    (ha : segsTokEquiv σ a₁ a₂) (hb : segsTokEquiv σ b₁ b₂) :
    segsTokEquiv σ (a₁ ++ b₁) (a₂ ++ b₂) := by
  induction a₁ generalizing a₂ with
  | nil =>
      cases a₂ with
      | nil => simpa using hb
      | cons _ _ => simp [segsTokEquiv] at ha
  | cons x xs ih =>
      cases a₂ with
      | nil => simp [segsTokEquiv] at ha
      | cons y ys =>
          simp only [List.cons_append, segsTokEquiv] at ha ⊢
          exact ⟨ha.1, ih ha.2⟩

theorem segsTokEquiv_normSegs {σ : Nat → Nat} {s₁ s₂ : List TSeg}
    (h : segsTokEquiv σ s₁ s₂) : segsTokEquiv σ (normSegs s₁) (normSegs s₂) := by
  induction s₁ generalizing s₂ with
  | nil =>
      cases s₂ with
      | nil => trivial
      | cons _ _ => simp [segsTokEquiv] at h
  | cons a as ih =>
      cases s₂ with
      | nil => simp [segsTokEquiv] at h
      | cons b bs =>
          simp only [segsTokEquiv] at h
          have ih' := ih h.2
          cases a with
          | tok k₁ =>
              cases b with
              | text _ => exact False.elim h.1
              | tok k₂ =>
                  simp only [normSegs, segsTokEquiv, segTokEquiv]
                  exact ⟨h.1, ih'⟩
          | text cs₁ =>
              cases b with
              | tok _ => exact False.elim h.1
              | text cs₂ =>
                  have hcs : cs₁ = cs₂ := h.1
                  subst hcs
                  cases cs₁ with
                  | nil => exact ih'
                  | cons c cs' =>
                      dsimp only [normSegs]
                      cases hns₁ : normSegs as <;> cases hns₂ : normSegs bs
                      · trivial
                      · rw [hns₁, hns₂] at ih'; simp [segsTokEquiv] at ih'
                      · rw [hns₁, hns₂] at ih'; simp [segsTokEquiv] at ih'
                      · rename_i r₁ rs₁ r₂ rs₂
                        rw [hns₁, hns₂] at ih'
                        simp only [segsTokEquiv] at ih'
                        cases r₁ <;> cases r₂
                        · have hteq : _ = _ := ih'.1
                          subst hteq
                          simp only [segsTokEquiv, segTokEquiv]
                          exact ⟨trivial, ih'.2⟩
                        · exact False.elim ih'.1
                        · exact False.elim ih'.1
                        · simp only [segsTokEquiv, segTokEquiv]
                          exact ⟨trivial, ih'.1, ih'.2⟩

theorem segsTokEquiv_refl_of_noTok (σ : Nat → Nat) (ss : List TSeg)
    (h : ∀ k, TSeg.tok k ∉ ss) : segsTokEquiv σ ss ss := by
  induction ss with
  | nil => trivial
  | cons s rest ih =>
      have hrest : ∀ k, TSeg.tok k ∉ rest := fun k hk => h k (List.mem_cons_of_mem _ hk)
      cases s with
      | text cs => exact ⟨rfl, ih hrest⟩
      | tok k => exact False.elim (h k List.mem_cons_self)

theorem segsTokEquiv_pushText {σ : Nat → Nat} {s₁ s₂ : List TSeg} (cs : List Char)
    (h : segsTokEquiv σ s₁ s₂) :
    segsTokEquiv σ (pushText s₁ cs) (pushText s₂ cs) := by
  unfold pushText
  split
  · exact h
  · exact segsTokEquiv_normSegs (segsTokEquiv_append h ⟨rfl, trivial⟩)

theorem segsTokEquiv_pushTok {σ : Nat → Nat} {s₁ s₂ : List TSeg} {k₁ k₂ : Nat}
    (h : segsTokEquiv σ s₁ s₂) (hk : σ k₁ = k₂) :
    segsTokEquiv σ (pushTok s₁ k₁) (pushTok s₂ k₂) :=
  segsTokEquiv_append h ⟨hk, trivial⟩

theorem segsTokEquiv_allText_eq {σ : Nat → Nat} {s₁ s₂ : List TSeg}
    (h : segsTokEquiv σ s₁ s₂) : allText s₁ = allText s₂ := by
  induction s₁ generalizing s₂ with
  | nil =>
      cases s₂ with
      | nil => rfl
      | cons _ _ => simp [segsTokEquiv] at h
  | cons a as ih =>
      cases s₂ with
      | nil => simp [segsTokEquiv] at h
      | cons b bs =>
          simp only [segsTokEquiv] at h
          cases a <;> cases b <;> simp only [segTokEquiv] at h
          · rcases h with ⟨hcs, htl⟩
            subst hcs
            simp only [allText, ih htl]
          · exact False.elim h.1
          · exact False.elim h.1
          · simp [allText]

theorem segsTokEquiv_segHasUfffd {σ : Nat → Nat} {s₁ s₂ : List TSeg}
    (h : segsTokEquiv σ s₁ s₂) : s₁.any segHasUfffd = s₂.any segHasUfffd := by
  induction s₁ generalizing s₂ with
  | nil =>
      cases s₂ with
      | nil => rfl
      | cons _ _ => simp [segsTokEquiv] at h
  | cons a as ih =>
      cases s₂ with
      | nil => simp [segsTokEquiv] at h
      | cons b bs =>
          simp only [segsTokEquiv] at h
          have hhead : segHasUfffd a = segHasUfffd b := by
            cases a <;> cases b <;> simp only [segTokEquiv] at h
            · rcases h with ⟨hcs, _⟩; subst hcs; rfl
            · exact False.elim h.1
            · exact False.elim h.1
            · rfl
          simp only [List.any_cons, hhead, ih h.2]

theorem segsTokEquiv_congr {σ₁ σ₂ : Nat → Nat} {s₁ s₂ : List TSeg}
    (hagree : ∀ k, TSeg.tok k ∈ s₁ → σ₁ k = σ₂ k)
    (h : segsTokEquiv σ₁ s₁ s₂) : segsTokEquiv σ₂ s₁ s₂ := by
  induction s₁ generalizing s₂ with
  | nil =>
      cases s₂ with
      | nil => trivial
      | cons _ _ => simp [segsTokEquiv] at h
  | cons a as ih =>
      cases s₂ with
      | nil => simp [segsTokEquiv] at h
      | cons b bs =>
          simp only [segsTokEquiv] at h ⊢
          constructor
          · cases a <;> cases b <;> simp only [segTokEquiv] at h ⊢
            · exact h.1
            · exact False.elim h.1
            · exact False.elim h.1
            · rw [← hagree _ List.mem_cons_self]; exact h.1
          · exact ih (fun k hk => hagree k (List.mem_cons_of_mem _ hk)) h.2

/-- Extend a renaming `σ` from `[0, N)` to all `Nat` by fixing indices `≥ N`. -/
def extendRen (σ : Nat → Nat) (N k : Nat) : Nat :=
  if k < N then σ k else k

theorem extendRen_lt {σ : Nat → Nat} {N k : Nat} (hk : k < N) :
    extendRen σ N k = σ k := by
  simp [extendRen, hk]

theorem extendRen_ge {σ : Nat → Nat} {N k : Nat} (hk : N ≤ k) :
    extendRen σ N k = k := by
  have hn : ¬ (k < N) := by omega
  simp [extendRen, hn]

/-- Exact base-shift equivalence between two parse states (`k ↦ base + k`).
    Captures the non-overlapping offset shifts `a34` and `u3-listfour` where `st₂`
    has `base` preceding token entries before a matching suffix of `st₁.tokens`. -/
def ShiftEquiv (base : Nat) (st₁ st₂ : ParseState) : Prop :=
  segsTokEquiv (fun k => base + k) st₁.work st₂.work ∧
  st₂.tokens.length = base + st₁.tokens.length ∧
  (∀ i (hi : i < st₁.tokens.length),
    st₂.tokens[base + i]? = some (st₁.tokens.get ⟨i, hi⟩)) ∧
  st₁.fatal = st₂.fatal

theorem shiftEquiv_refl (st : ParseState) : ShiftEquiv 0 st st := by
  refine ⟨segsTokEquiv_refl _ (fun k => Nat.zero_add k) st.work, (Nat.zero_add _).symm, ?_, rfl⟩
  intro i hi
  simp

theorem shiftEquiv_zero_imp_tokEquiv {st₁ st₂ : ParseState}
    (h : ShiftEquiv 0 st₁ st₂) : TokEquiv (fun k => k) st₁ st₂ := by
  rcases h with ⟨hw, hlen, htoks, hfat⟩
  have hwork : segsTokEquiv (fun k => k) st₁.work st₂.work :=
    segsTokEquiv_congr (fun k _ => Nat.zero_add k) hw
  have hlen' : st₁.tokens.length = st₂.tokens.length := by omega
  refine ⟨hwork, hlen', ?_, hfat⟩
  intro i hi
  have hget := htoks i hi
  have hi₂ : i < st₂.tokens.length := by omega
  rw [Nat.zero_add, List.getElem?_eq_getElem hi₂] at hget
  simp only [Option.some.injEq] at hget
  rw [← hget]
  rfl

theorem shiftEquiv_comp {b₁ b₂ : Nat} {st₁ st₂ st₃ : ParseState}
    (h₁₂ : ShiftEquiv b₁ st₁ st₂) (h₂₃ : ShiftEquiv b₂ st₂ st₃) :
    ShiftEquiv (b₂ + b₁) st₁ st₃ := by
  rcases h₁₂ with ⟨hw₁₂, hlen₁₂, htoks₁₂, hfat₁₂⟩
  rcases h₂₃ with ⟨hw₂₃, hlen₂₃, htoks₂₃, hfat₂₃⟩
  refine ⟨segsTokEquiv_congr (fun k _ => (Nat.add_assoc b₂ b₁ k).symm)
      (segsTokEquiv_comp hw₁₂ hw₂₃), by omega, ?_, hfat₁₂.trans hfat₂₃⟩
  intro i hi
  have hi₂ : b₁ + i < st₂.tokens.length := by omega
  have h1 := htoks₁₂ i hi
  have h2 := htoks₂₃ (b₁ + i) hi₂
  rw [List.getElem?_eq_getElem hi₂] at h1
  simp only [Option.some.injEq] at h1
  have : st₂.tokens.get ⟨b₁ + i, hi₂⟩ = st₁.tokens.get ⟨i, hi⟩ := by
    simpa [List.get_eq_getElem] using h1
  rw [this, ← Nat.add_assoc] at h2
  exact h2

/-- Generic rule-list composition for `ShiftEquiv base`.
    Handles the `st.fatal = true` skip branch cleanly using `st₁.fatal = st₂.fatal`. -/
theorem runRules_shiftEquiv (rules : List RuleId) (base : Nat)
    (hwf_rules : ∀ r ∈ rules, ∀ s, WFState s → WFState (applyRule r s))
    (hshift_rules : ∀ r ∈ rules, ∀ s₁ s₂,
      WFState s₁ → ShiftEquiv base s₁ s₂ →
      ShiftEquiv base (applyRule r s₁) (applyRule r s₂))
    {st₁ st₂ : ParseState} (hwf₁ : WFState st₁) (hs : ShiftEquiv base st₁ st₂) :
    ShiftEquiv base (runRules rules st₁) (runRules rules st₂) := by
  induction rules generalizing st₁ st₂ with
  | nil => simpa [runRules] using hs
  | cons r rs ih =>
      have hfat : st₁.fatal = st₂.fatal := hs.2.2.2
      have hwf_sub : ∀ r' ∈ rs, ∀ s, WFState s → WFState (applyRule r' s) :=
        fun r' hr' => hwf_rules r' (List.mem_cons_of_mem _ hr')
      have hsh_sub : ∀ r' ∈ rs, ∀ s₁ s₂,
          WFState s₁ → ShiftEquiv base s₁ s₂ →
          ShiftEquiv base (applyRule r' s₁) (applyRule r' s₂) :=
        fun r' hr' => hshift_rules r' (List.mem_cons_of_mem _ hr')
      cases hf : st₁.fatal with
      | true =>
          have hf₂ : st₂.fatal = true := hfat.symm.trans hf
          simpa [runRules, hf, hf₂] using ih hwf_sub hsh_sub hwf₁ hs
      | false =>
          have hf₂ : st₂.fatal = false := hfat.symm.trans hf
          have hwf₁' : WFState (applyRule r st₁) := hwf_rules r List.mem_cons_self st₁ hwf₁
          have hs' : ShiftEquiv base (applyRule r st₁) (applyRule r st₂) :=
            hshift_rules r List.mem_cons_self st₁ st₂ hwf₁ hs
          simpa [runRules, hf, hf₂] using ih hwf_sub hsh_sub hwf₁' hs'

/-- Generic rule-list composition for existential `TokEquiv` over arbitrary renamings. -/
theorem runRules_tokEquiv_exists (rules : List RuleId)
    (hwf_rules : ∀ r ∈ rules, ∀ s, WFState s → WFState (applyRule r s))
    (htok_rules : ∀ r ∈ rules, ∀ (σ : Nat → Nat) (s₁ s₂ : ParseState),
      WFState s₁ → TokEquiv σ s₁ s₂ →
      ∃ σ', TokEquiv σ' (applyRule r s₁) (applyRule r s₂))
    {σ : Nat → Nat} {st₁ st₂ : ParseState} (hwf₁ : WFState st₁) (ht : TokEquiv σ st₁ st₂) :
    ∃ σ', TokEquiv σ' (runRules rules st₁) (runRules rules st₂) := by
  induction rules generalizing σ st₁ st₂ with
  | nil => exact ⟨σ, by simpa [runRules] using ht⟩
  | cons r rs ih =>
      have hfat : st₁.fatal = st₂.fatal := ht.2.2.2
      have hwf_sub : ∀ r' ∈ rs, ∀ s, WFState s → WFState (applyRule r' s) :=
        fun r' hr' => hwf_rules r' (List.mem_cons_of_mem _ hr')
      have htok_sub : ∀ r' ∈ rs, ∀ (σ : Nat → Nat) (s₁ s₂ : ParseState),
          WFState s₁ → TokEquiv σ s₁ s₂ →
          ∃ σ', TokEquiv σ' (applyRule r' s₁) (applyRule r' s₂) :=
        fun r' hr' => htok_rules r' (List.mem_cons_of_mem _ hr')
      cases hf : st₁.fatal with
      | true =>
          have hf₂ : st₂.fatal = true := hfat.symm.trans hf
          simpa [runRules, hf, hf₂] using ih hwf_sub htok_sub hwf₁ ht
      | false =>
          have hf₂ : st₂.fatal = false := hfat.symm.trans hf
          have hwf₁' : WFState (applyRule r st₁) := hwf_rules r List.mem_cons_self st₁ hwf₁
          rcases htok_rules r List.mem_cons_self σ st₁ st₂ hwf₁ ht with ⟨σ', ht'⟩
          simpa [runRules, hf, hf₂] using ih hwf_sub htok_sub hwf₁' ht'

/-! ## 2. `render_alpha_invariant` & Reflection Surface 2 Boundary -/

/-- Option-preserving token-lookup alpha-equivalence on every token actually referenced in
    `work`, requiring each referenced token to resolve to a mirrored `RenderRuleId`.
    (Fallback outputs for missing keys and unmirrored rules embed literal `Nat` indices.) -/
def LookupAlphaEquiv (σ : Nat → Nat) (work : List TSeg)
    (lookup₁ lookup₂ : Nat → Option TokenEntry) : Prop :=
  ∀ k, TSeg.tok k ∈ work →
    ∃ e rid, lookup₁ k = some e ∧ renderRuleOfName e.rule = some rid ∧ lookup₂ (σ k) = some e

theorem lookupAlphaEquiv_cons_text {σ : Nat → Nat} {cs : List Char} {rest : List TSeg}
    {lookup₁ lookup₂ : Nat → Option TokenEntry}
    (h : LookupAlphaEquiv σ (TSeg.text cs :: rest) lookup₁ lookup₂) :
    LookupAlphaEquiv σ rest lookup₁ lookup₂ :=
  fun k hk => h k (List.mem_cons_of_mem _ hk)

theorem lookupAlphaEquiv_cons_tok {σ : Nat → Nat} {m : Nat} {rest : List TSeg}
    {lookup₁ lookup₂ : Nat → Option TokenEntry}
    (h : LookupAlphaEquiv σ (TSeg.tok m :: rest) lookup₁ lookup₂) :
    LookupAlphaEquiv σ rest lookup₁ lookup₂ :=
  fun k hk => h k (List.mem_cons_of_mem _ hk)

/-- Single-pass render alpha-invariance (`renderSegsLoop`) under an arbitrary renaming `σ`. -/
theorem renderSegsLoop_alpha_invariant
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (conf : RenderConf) (doc : DocState)
    (σ : Nat → Nat) (work₁ work₂ : List TSeg)
    (lookup₁ lookup₂ : Nat → Option TokenEntry)
    (hwork : segsTokEquiv σ work₁ work₂)
    (hlook : LookupAlphaEquiv σ work₁ lookup₁ lookup₂) :
    renderSegsLoop dispatch lookup₁ conf doc work₁ =
      renderSegsLoop dispatch lookup₂ conf doc work₂ := by
  induction work₁ generalizing work₂ with
  | nil =>
      cases work₂ with
      | nil => rfl
      | cons _ _ => simp [segsTokEquiv] at hwork
  | cons s₁ rest₁ ih =>
      cases work₂ with
      | nil => simp [segsTokEquiv] at hwork
      | cons s₂ rest₂ =>
          simp only [segsTokEquiv] at hwork
          cases s₁ with
          | text cs₁ =>
              cases s₂ with
              | tok _ => exact False.elim hwork.1
              | text cs₂ =>
                  have hcs : cs₁ = cs₂ := hwork.1
                  subst hcs
                  have htail := ih rest₂ hwork.2 (lookupAlphaEquiv_cons_text hlook)
                  dsimp only [renderSegsLoop]
                  rw [htail]
          | tok k₁ =>
              cases s₂ with
              | text _ => exact False.elim hwork.1
              | tok k₂ =>
                  have hk : σ k₁ = k₂ := hwork.1
                  rcases hlook k₁ List.mem_cons_self with ⟨e, rid, hl₁, hrid, hl₂⟩
                  rw [hk] at hl₂
                  have htail := ih rest₂ hwork.2 (lookupAlphaEquiv_cons_tok hlook)
                  simp only [renderSegsLoop, hl₁, hl₂, hrid, htail]

/-- Full render alpha-invariance (`renderWith`) under an arbitrary renaming `σ`, whenever
    literal text is free of `U+FFFD` (Reflection Surface 2). Covers every dispatcher
    (`renderMirrorEnv env`, `renderRefSpec env`, `dispatchRenderR41`, etc.). -/
theorem renderWith_alpha_invariant
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (conf : RenderConf) (doc : DocState)
    (σ : Nat → Nat) (work₁ work₂ : List TSeg)
    (lookup₁ lookup₂ : Nat → Option TokenEntry)
    (hwork : segsTokEquiv σ work₁ work₂)
    (hlook : LookupAlphaEquiv σ work₁ lookup₁ lookup₂)
    (hno_ufffd : work₁.any segHasUfffd = false) :
    renderWith dispatch lookup₁ conf work₁ doc =
      renderWith dispatch lookup₂ conf work₂ doc := by
  have hno₂ : work₂.any segHasUfffd = false :=
    (segsTokEquiv_segHasUfffd hwork).symm.trans hno_ufffd
  have hloop := renderSegsLoop_alpha_invariant dispatch conf doc σ work₁ work₂ lookup₁ lookup₂ hwork hlook
  unfold renderWith
  rw [hno_ufffd, hno₂]
  simp only [Bool.false_eq_true, ↓reduceIte, hloop]

/-- Specialization of `renderWith_alpha_invariant` to `renderMirrorEnv env`. -/
theorem renderWith_alpha_invariant_mirrorEnv (env : RenderEnv)
    (conf : RenderConf) (doc : DocState)
    (σ : Nat → Nat) (work₁ work₂ : List TSeg)
    (lookup₁ lookup₂ : Nat → Option TokenEntry)
    (hwork : segsTokEquiv σ work₁ work₂)
    (hlook : LookupAlphaEquiv σ work₁ lookup₁ lookup₂)
    (hno_ufffd : work₁.any segHasUfffd = false) :
    renderWith (renderMirrorEnv env) lookup₁ conf work₁ doc =
      renderWith (renderMirrorEnv env) lookup₂ conf work₂ doc :=
  renderWith_alpha_invariant (renderMirrorEnv env) conf doc σ work₁ work₂ lookup₁ lookup₂
    hwork hlook hno_ufffd

/-- Specialization of `renderWith_alpha_invariant` to F3's `renderRefSpec env`. -/
theorem renderWith_alpha_invariant_refSpec (env : RenderEnv)
    (conf : RenderConf) (doc : DocState)
    (σ : Nat → Nat) (work₁ work₂ : List TSeg)
    (lookup₁ lookup₂ : Nat → Option TokenEntry)
    (hwork : segsTokEquiv σ work₁ work₂)
    (hlook : LookupAlphaEquiv σ work₁ lookup₁ lookup₂)
    (hno_ufffd : work₁.any segHasUfffd = false) :
    renderWith (renderRefSpec env) lookup₁ conf work₁ doc =
      renderWith (renderRefSpec env) lookup₂ conf work₂ doc :=
  renderWith_alpha_invariant (renderRefSpec env) conf doc σ work₁ work₂ lookup₁ lookup₂
    hwork hlook hno_ufffd

/-- Bijection corollary: under any bijection `(σ, τ)` permuting keys and lookup entries,
    `renderWith` is alpha-invariant off the `U+FFFD` reflection surface. -/
theorem renderWith_alpha_invariant_bijection
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (conf : RenderConf) (doc : DocState)
    (σ τ : Nat → Nat) (hinv₁ : ∀ k, τ (σ k) = k) (_hinv₂ : ∀ k, σ (τ k) = k)
    (work : List TSeg) (lookup : Nat → Option TokenEntry)
    (hmirrored : ∀ k, TSeg.tok k ∈ work →
      ∃ e rid, lookup k = some e ∧ renderRuleOfName e.rule = some rid)
    (hno_ufffd : work.any segHasUfffd = false) :
    renderWith dispatch lookup conf work doc =
      renderWith dispatch (fun k => lookup (τ k)) conf
        (work.map (fun s => match s with | .text cs => .text cs | .tok k => .tok (σ k))) doc := by
  have hwork : segsTokEquiv σ work
      (work.map (fun s => match s with | .text cs => .text cs | .tok k => .tok (σ k))) := by
    clear hno_ufffd
    induction work with
    | nil => trivial
    | cons s rest ih =>
        cases s with
        | text cs => exact ⟨rfl, ih (fun k hk => hmirrored k (List.mem_cons_of_mem _ hk))⟩
        | tok k => exact ⟨rfl, ih (fun k hk => hmirrored k (List.mem_cons_of_mem _ hk))⟩
  have hlook : LookupAlphaEquiv σ work lookup (fun k => lookup (τ k)) := by
    intro k hk
    rcases hmirrored k hk with ⟨e, rid, hl, hrid⟩
    refine ⟨e, rid, hl, hrid, ?_⟩
    simpa [hinv₁ k] using hl
  exact renderWith_alpha_invariant dispatch conf doc σ work _ lookup (fun k => lookup (τ k))
    hwork hlook hno_ufffd

/-- Base-shift corollary (`ShiftEquiv base st₁ st₂`) for `renderWith`: directly accounts for
    `a34` and `u3-listfour` token-offset shifts when the rendered output is `U+FFFD`-free and
    all referenced tokens resolve to mirrored rules. -/
theorem renderWith_alpha_invariant_shift
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (conf : RenderConf) (doc : DocState)
    (base : Nat) (st₁ st₂ : ParseState)
    (hwf₁ : WFState st₁) (hs : ShiftEquiv base st₁ st₂)
    (hmirrored : ∀ k (hk : k < st₁.tokens.length),
      TSeg.tok k ∈ st₁.work →
      ∃ rid, renderRuleOfName (st₁.tokens.get ⟨k, hk⟩).rule = some rid)
    (hno_ufffd : st₁.work.any segHasUfffd = false) :
    renderWith dispatch (fun k => st₁.tokens[k]?) conf st₁.work doc =
      renderWith dispatch (fun k => st₂.tokens[k]?) conf st₂.work doc := by
  apply renderWith_alpha_invariant dispatch conf doc (fun k => base + k) st₁.work st₂.work
    (fun k => st₁.tokens[k]?) (fun k => st₂.tokens[k]?) hs.1 _ hno_ufffd
  intro k hk
  have hlt : k < st₁.tokens.length := hwf₁.1.2 k hk
  rcases hmirrored k hlt hk with ⟨rid, hrid⟩
  refine ⟨st₁.tokens.get ⟨k, hlt⟩, rid, ?_, hrid, hs.2.2.1 k hlt⟩
  simp [List.getElem?_eq_getElem hlt, List.get_eq_getElem]

/-- Concrete negative boundary pinning Reflection Surface 2 (`U+FFFD`): even under valid
    `LookupAlphaEquiv (· + 1)` and `segsTokEquiv (· + 1)` over mirrored `"Paragraph"` tokens,
    literal `'\uFFFD'` triggers `ufffdWalk`'s adjacent block-end/block-start token-index leak
    (`"01"` vs `"12"`), so `renderWith` is genuinely NOT alpha-invariant when `U+FFFD` is present. -/
theorem renderWith_ufffd_not_alpha_invariant
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (conf : RenderConf) (doc : DocState) :
    let paraEnd : TokenEntry := { rule := "Paragraph", opts := [("type".toList, .str "end".toList)] }
    let paraStart : TokenEntry := { rule := "Paragraph", opts := [("type".toList, .str "start".toList)] }
    let work₁ : List TSeg := [TSeg.text ['\uFFFD'], TSeg.tok 0, TSeg.tok 1]
    let work₂ : List TSeg := [TSeg.text ['\uFFFD'], TSeg.tok 1, TSeg.tok 2]
    let toks₁ : List TokenEntry := [paraEnd, paraStart]
    let toks₂ : List TokenEntry := [paraEnd, paraEnd, paraStart]
    segsTokEquiv (fun k => k + 1) work₁ work₂ ∧
    LookupAlphaEquiv (fun k => k + 1) work₁ (fun k => toks₁[k]?) (fun k => toks₂[k]?) ∧
    (renderWith dispatch (fun k => toks₁[k]?) conf work₁ doc).output ≠
      (renderWith dispatch (fun k => toks₂[k]?) conf work₂ doc).output := by
  dsimp only
  refine ⟨⟨rfl, rfl, rfl, trivial⟩, ?_, ?_⟩
  · intro k hk
    simp only [List.mem_cons, List.not_mem_nil, or_false] at hk
    rcases hk with h0 | h1 | h2
    · cases h0
    · cases h1
      exact ⟨_, .paragraph, rfl, rfl, rfl⟩
    · cases h2
      exact ⟨_, .paragraph, rfl, rfl, rfl⟩
  · have h1 :
        (renderWith dispatch
          (fun k => ([{ rule := "Paragraph", opts := [("type".toList, .str "end".toList)] },
            { rule := "Paragraph", opts := [("type".toList, .str "start".toList)] }] : List TokenEntry)[k]?)
          conf [TSeg.text ['\uFFFD'], TSeg.tok 0, TSeg.tok 1] doc).output = [48, 49] := by
      unfold renderWith
      have hexp : explodeUfffd ['\uFFFD'] = [.fake] := rfl
      have hf : flattenUfffd
          (fun k => ([{ rule := "Paragraph", opts := [("type".toList, .str "end".toList)] },
            { rule := "Paragraph", opts := [("type".toList, .str "start".toList)] }] : List TokenEntry)[k]?)
          [TSeg.text ['\uFFFD'], TSeg.tok 0, TSeg.tok 1] =
          [.fake,
           UfffdAtom.tok 0 (some { rule := "Paragraph", opts := [("type".toList, .str "end".toList)] }),
           UfffdAtom.tok 1 (some { rule := "Paragraph", opts := [("type".toList, .str "start".toList)] })] := by
        simp only [flattenUfffd, hexp]; rfl
      have hseg : ([TSeg.text ['\uFFFD'], TSeg.tok 0, TSeg.tok 1].any segHasUfffd) = true := rfl
      simp only [hseg, ↓reduceIte, ufffdBytes, hf, ufffdOnlyFakesPara, Bool.false_eq_true,
        List.length_cons, List.length_nil]
      rfl
    have h2 :
        (renderWith dispatch
          (fun k => ([{ rule := "Paragraph", opts := [("type".toList, .str "end".toList)] },
            { rule := "Paragraph", opts := [("type".toList, .str "end".toList)] },
            { rule := "Paragraph", opts := [("type".toList, .str "start".toList)] }] : List TokenEntry)[k]?)
          conf [TSeg.text ['\uFFFD'], TSeg.tok 1, TSeg.tok 2] doc).output = [49, 50] := by
      unfold renderWith
      have hexp : explodeUfffd ['\uFFFD'] = [.fake] := rfl
      have hf : flattenUfffd
          (fun k => ([{ rule := "Paragraph", opts := [("type".toList, .str "end".toList)] },
            { rule := "Paragraph", opts := [("type".toList, .str "end".toList)] },
            { rule := "Paragraph", opts := [("type".toList, .str "start".toList)] }] : List TokenEntry)[k]?)
          [TSeg.text ['\uFFFD'], TSeg.tok 1, TSeg.tok 2] =
          [.fake,
           UfffdAtom.tok 1 (some { rule := "Paragraph", opts := [("type".toList, .str "end".toList)] }),
           UfffdAtom.tok 2 (some { rule := "Paragraph", opts := [("type".toList, .str "start".toList)] })] := by
        simp only [flattenUfffd, hexp]; rfl
      have hseg : ([TSeg.text ['\uFFFD'], TSeg.tok 1, TSeg.tok 2].any segHasUfffd) = true := rfl
      simp only [hseg, ↓reduceIte, ufffdBytes, hf, ufffdOnlyFakesPara, Bool.false_eq_true,
        List.length_cons, List.length_nil]
      rfl
    rw [h1, h2]
    decide

/-! ## 3. Unconditional `codeRule_preserves_wf` & 4-Rule Prefix Composition -/

private theorem normSegs_append_tok (segs : List TSeg) (n : Nat) :
    normSegs (segs ++ [TSeg.tok n]) = normSegs segs ++ [TSeg.tok n] := by
  induction segs with
  | nil => rfl
  | cons s rest ih =>
      cases s with
      | tok m =>
          change TSeg.tok m :: normSegs (rest ++ [TSeg.tok n]) =
            (TSeg.tok m :: normSegs rest) ++ [TSeg.tok n]
          rw [ih, List.cons_append]
      | text cs =>
          cases cs with
          | nil =>
              change normSegs (rest ++ [TSeg.tok n]) = normSegs rest ++ [TSeg.tok n]
              exact ih
          | cons c cs' =>
              dsimp only [List.cons_append, normSegs]
              rw [ih]
              cases normSegs rest with
              | nil => rfl
              | cons s' ss' =>
                  cases s' with
                  | text _ => rfl
                  | tok _ => rfl

private theorem normSegs_pushText_of_fixed {out : List TSeg}
    (hout : out = normSegs out) (cs : List Char) :
    pushText out cs = normSegs (pushText out cs) := by
  unfold pushText
  split
  · exact hout
  · exact (normSegs_idem _).symm

private theorem normSegs_pushTok_of_fixed {out : List TSeg}
    (hout : out = normSegs out) (n : Nat) :
    pushTok out n = normSegs (pushTok out n) := by
  unfold pushTok
  rw [normSegs_append_tok, ← hout]

private theorem applyCode_scan_normSegs (rest : List Char) (prev : Option Char)
    (toks : List TokenEntry) (out : List TSeg) (buf : List Char) (fuel : Nat)
    (hout : out = normSegs out) :
    (applyCode.scan rest prev toks out buf fuel).1 =
      normSegs (applyCode.scan rest prev toks out buf fuel).1 := by
  induction fuel generalizing rest prev toks out buf with
  | zero =>
      cases rest <;> exact normSegs_pushText_of_fixed hout buf
  | succ f ih =>
      cases rest with
      | nil => exact normSegs_pushText_of_fixed hout buf
      | cons c rest' =>
          dsimp only [applyCode.scan]
          split
          · cases codeMatch (c :: rest') true (codeFuel (c :: rest').length) with
            | nil => exact ih rest' (some c) toks out (buf ++ [c]) hout
            | cons m ms =>
                rcases m with ⟨consumed, g1, body, g3⟩
                dsimp only
                apply ih
                exact normSegs_pushTok_of_fixed
                  (normSegs_pushText_of_fixed (normSegs_pushText_of_fixed hout buf) "\n\n".toList)
                  toks.length
          · exact ih rest' (some c) toks out (buf ++ [c]) hout

private theorem wfOptMap_codeToken (n : Nat) (g1 : Option (List Char)) (body : List Char) :
    WFOptMap n (codeToken g1 body).opts := by
  apply wfOptMap_of_noBytes
  intro kv hkv bs hbs
  dsimp only [codeToken] at hkv
  split at hkv <;> simp only [List.mem_cons, List.not_mem_nil, or_false] at hkv
  · rcases hkv with rfl | rfl | rfl <;> cases hbs
  · split at hkv <;> rcases hkv with rfl | rfl | rfl <;> cases hbs

private theorem applyCode_scan_wfOptMap (rest : List Char) (prev : Option Char)
    (toks : List TokenEntry) (out : List TSeg) (buf : List Char) (fuel : Nat)
    (htoks : ∀ t ∈ toks, WFOptMap toks.length t.opts) :
    ∀ t ∈ (applyCode.scan rest prev toks out buf fuel).2,
      WFOptMap (applyCode.scan rest prev toks out buf fuel).2.length t.opts := by
  induction fuel generalizing rest prev toks out buf with
  | zero =>
      cases rest with
      | nil => exact htoks
      | cons _ _ => exact htoks
  | succ f ih =>
      cases rest with
      | nil => exact htoks
      | cons c rest' =>
          dsimp only [applyCode.scan]
          split
          · cases hcm : codeMatch (c :: rest') true (codeFuel (c :: rest').length) with
            | nil => exact ih rest' (some c) toks out (buf ++ [c]) htoks
            | cons m ms =>
                rcases m with ⟨consumed, g1, body, g3⟩
                dsimp only
                apply ih
                intro t ht
                rcases List.mem_append.mp ht with h1 | h2
                · exact wfOptMap_mono (by simp) (htoks t h1)
                · rw [List.mem_singleton] at h2
                  subst h2
                  exact wfOptMap_codeToken _ g1 body
          · exact ih rest' (some c) toks out (buf ++ [c]) htoks

/-- **Unconditional `WFState` preservation (`Code`)** at pipeline position 4. -/
theorem codeRule_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (codeRule st) := by
  cases hall : allText st.work with
  | none => simpa [codeRule, hall] using hwf
  | some cs =>
      have hlen : st.tokens.length ≤ (applyCode cs st.tokens).2.length := by
        rcases applyCode_append_only cs st.tokens with ⟨added, hadd⟩
        rw [hadd]
        simp
      have hseg : WFSegs (applyCode cs st.tokens).1 (applyCode cs st.tokens).2.length :=
        ⟨applyCode_scan_normSegs cs none st.tokens [] [] (cs.length + 1) rfl,
         applyCode_indices_lt cs st.tokens⟩
      have hopts : ∀ t ∈ (applyCode cs st.tokens).2,
          WFOptMap (applyCode cs st.tokens).2.length t.opts :=
        applyCode_scan_wfOptMap cs none st.tokens [] [] (cs.length + 1) hwf.2.1
      obtain ⟨-, -, hfoot, hbib, hbibid, hanch, hleads⟩ := hwf
      simp only [codeRule, hall]
      refine ⟨hseg, hopts, ?_, ?_, ?_, ?_, ?_⟩
      · exact fun bs hbs => lst_wfBytes_mono hlen (hfoot bs hbs)
      · exact fun p hp => ⟨lst_wfBytes_mono hlen (hbib p hp).1, lst_wfBytes_mono hlen (hbib p hp).2⟩
      · exact fun p hp => ⟨lst_wfBytes_mono hlen (hbibid p hp).1, Nat.lt_of_lt_of_le (hbibid p hp).2 hlen⟩
      · exact fun p hp => ⟨lst_wfBytes_mono hlen (hanch p hp).1, lst_wfBytes_mono hlen (hanch p hp).2⟩
      · exact fun bs hbs => lst_wfBytes_mono hlen (hleads bs hbs)

theorem applyRule_code_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (applyRule .code st) := by
  simpa [applyRule] using codeRule_preserves_wf st hwf

theorem applyRule_prefix4_preserves_wf {r : RuleId}
    (hr : r ∈ [.include, .prefilter, .delimiter, .code])
    (st : ParseState) (hwf : WFState st) : WFState (applyRule r st) := by
  rw [List.mem_cons] at hr
  rcases hr with rfl | hr3
  · exact applyRule_include_preserves_wf st hwf
  · rw [List.mem_cons] at hr3
    rcases hr3 with rfl | hr2
    · exact applyRule_prefilter_preserves_wf st hwf
    · rw [List.mem_cons, List.mem_singleton] at hr2
      rcases hr2 with rfl | rfl
      · exact applyRule_delimiter_preserves_wf st hwf
      · exact applyRule_code_preserves_wf st hwf

theorem pipelineFull_take_four :
    pipelineFull.take 4 = [.include, .prefilter, .delimiter, .code] := rfl

theorem pipelineFull_wf_prefix4 (cs : List Char) :
    WFState (runRules [.include, .prefilter, .delimiter, .code] (ParseState.ofSource cs)) :=
  runRules_preserves_wf [.include, .prefilter, .delimiter, .code]
    (fun _ hr => applyRule_prefix4_preserves_wf hr)
    (ParseState.ofSource cs) (wfState_ofSource cs)

theorem pipelineFull_wf_prefix4_of_wf (st : ParseState) (hwf : WFState st) :
    WFState (runRules [.include, .prefilter, .delimiter, .code] st) :=
  runRules_preserves_wf [.include, .prefilter, .delimiter, .code]
    (fun _ hr => applyRule_prefix4_preserves_wf hr) st hwf

/-- Unconditional `ReachableState` for the 4-rule head of `pipelineFull`. -/
theorem reachableState_prefix4 (cs : List Char) :
    ReachableState (runRules [.include, .prefilter, .delimiter, .code] (ParseState.ofSource cs)) :=
  reachableState_runRules [.include, .prefilter, .delimiter, .code]
    (fun _ hr => applyRule_prefix4_preserves_wf hr)
    (ParseState.ofSource cs) (wfState_ofSource cs) (reachableState_ofSource cs)

/-! ## 4. Byte-Level `PhPair` Bridge -/

/-- Synchronized byte-stream correspondence modulo placeholder reindexing `k ↦ σ k`. -/
inductive PhPair (σ : Nat → Nat) : List Nat → List Nat → Prop where
  | nil : PhPair σ [] []
  | noFF (xs rest₁ rest₂ : List Nat) (h : 0xFF ∉ xs) (hr : PhPair σ rest₁ rest₂) :
      PhPair σ (xs ++ rest₁) (xs ++ rest₂)
  | ph (k : Nat) (rest₁ rest₂ : List Nat) (hr : PhPair σ rest₁ rest₂) :
      PhPair σ (phBytes k ++ rest₁) (phBytes (σ k) ++ rest₂)

theorem phPair_append {σ : Nat → Nat} {a₁ a₂ b₁ b₂ : List Nat}
    (ha : PhPair σ a₁ a₂) (hb : PhPair σ b₁ b₂) :
    PhPair σ (a₁ ++ b₁) (a₂ ++ b₂) := by
  induction ha with
  | nil => simpa using hb
  | noFF xs r₁ r₂ hx _ ih =>
      simpa [List.append_assoc] using PhPair.noFF xs (r₁ ++ b₁) (r₂ ++ b₂) hx ih
  | ph k r₁ r₂ _ ih =>
      simpa [List.append_assoc] using PhPair.ph k (r₁ ++ b₁) (r₂ ++ b₂) ih

theorem phPair_of_noFF {σ : Nat → Nat} {xs : List Nat} (h : 0xFF ∉ xs) :
    PhPair σ xs xs := by
  simpa using PhPair.noFF xs [] [] h PhPair.nil

theorem phPair_replicate {σ : Nat → Nat} (n ch : Nat) (hch : ch ≠ 0xFF) :
    PhPair σ (List.replicate n ch) (List.replicate n ch) :=
  phPair_of_noFF (fun hm => hch (List.eq_of_mem_replicate hm).symm)

theorem segsTokEquiv_imp_phPair {σ : Nat → Nat} {s₁ s₂ : List TSeg}
    (h : segsTokEquiv σ s₁ s₂) : PhPair σ (byteForm s₁) (byteForm s₂) := by
  induction s₁ generalizing s₂ with
  | nil =>
      cases s₂ with
      | nil => exact PhPair.nil
      | cons _ _ => simp [segsTokEquiv] at h
  | cons a as ih =>
      cases s₂ with
      | nil => simp [segsTokEquiv] at h
      | cons b bs =>
          simp only [segsTokEquiv] at h
          cases a with
          | text cs₁ =>
              cases b with
              | tok _ => exact False.elim h.1
              | text cs₂ =>
                  have hcs : cs₁ = cs₂ := h.1
                  subst hcs
                  have hnoff : 0xFF ∉ cs₁.flatMap utf8Bytes := by
                    intro hm
                    rcases List.mem_flatMap.mp hm with ⟨c, _, hc⟩
                    exact utf8Bytes_no_ff c hc
                  simpa [byteForm, segBytes] using
                    PhPair.noFF (cs₁.flatMap utf8Bytes) (byteForm as) (byteForm bs) hnoff (ih h.2)
          | tok k₁ =>
              cases b with
              | text _ => exact False.elim h.1
              | tok k₂ =>
                  have hk : σ k₁ = k₂ := h.1
                  subst hk
                  exact PhPair.ph k₁ (byteForm as) (byteForm bs) (ih h.2)

private theorem parseBytes_go_phPair {σ : Nat → Nat} {bs₁ bs₂ : List Nat} (hp : PhPair σ bs₁ bs₂) :
    ∀ (acc : List Nat) (pre₁ pre₂ : List TSeg) (fuel₁ fuel₂ : Nat),
      0xFF ∉ acc →
      segsTokEquiv σ pre₁ pre₂ →
      bs₁.length + 1 ≤ fuel₁ →
      bs₂.length + 1 ≤ fuel₂ →
      segsTokEquiv σ (parseBytes.go bs₁ acc pre₁ fuel₁) (parseBytes.go bs₂ acc pre₂ fuel₂) := by
  induction hp with
  | nil =>
      intro acc pre₁ pre₂ fuel₁ fuel₂ _ hpre hf₁ hf₂
      obtain ⟨f₁, rfl⟩ : ∃ f₁, fuel₁ = f₁ + 1 := ⟨fuel₁ - 1, by omega⟩
      obtain ⟨f₂, rfl⟩ : ∃ f₂, fuel₂ = f₂ + 1 := ⟨fuel₂ - 1, by omega⟩
      dsimp only [parseBytes.go]
      exact segsTokEquiv_normSegs
        (segsTokEquiv_append hpre
          (segsTokEquiv_refl_of_noTok σ
            (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)])
            (fun k hk => by split at hk <;> simp at hk)))
  | noFF xs rest₁ rest₂ hx _ ih =>
      intro acc pre₁ pre₂ fuel₁ fuel₂ hacc hpre hf₁ hf₂
      rw [List.length_append] at hf₁ hf₂
      rw [parseBytes_go_append_no_ff xs rest₁ acc pre₁ fuel₁ hx (by omega)]
      rw [parseBytes_go_append_no_ff xs rest₂ acc pre₂ fuel₂ hx (by omega)]
      have hacc' : 0xFF ∉ xs.reverse ++ acc := by
        intro hm
        rcases List.mem_append.mp hm with h1 | h2
        · exact hx (List.mem_reverse.mp h1)
        · exact hacc h2
      exact ih (xs.reverse ++ acc) pre₁ pre₂ (fuel₁ - xs.length) (fuel₂ - xs.length)
        hacc' hpre (by omega) (by omega)
  | ph k rest₁ rest₂ _ ih =>
      intro acc pre₁ pre₂ fuel₁ fuel₂ _ hpre hf₁ hf₂
      rw [List.length_append] at hf₁ hf₂
      have hpos₁ : 0 < (phBytes k).length := RawBridge.rb_phBytes_length_pos k
      have hpos₂ : 0 < (phBytes (σ k)).length := RawBridge.rb_phBytes_length_pos (σ k)
      obtain ⟨f₁, rfl⟩ : ∃ f₁, fuel₁ = f₁ + 1 := ⟨fuel₁ - 1, by omega⟩
      obtain ⟨f₂, rfl⟩ : ∃ f₂, fuel₂ = f₂ + 1 := ⟨fuel₂ - 1, by omega⟩
      rw [parseBytes_go_token_step k rest₁ acc pre₁ f₁]
      rw [parseBytes_go_token_step (σ k) rest₂ acc pre₂ f₂]
      have hpre' := segsTokEquiv_append
        (segsTokEquiv_append hpre
          (segsTokEquiv_refl_of_noTok σ
            (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)])
            (fun m hm => by split at hm <;> simp at hm)))
        (show segsTokEquiv σ [TSeg.tok k] [TSeg.tok (σ k)] from ⟨rfl, trivial⟩)
      exact ih [] _ _ f₁ f₂ (by simp) hpre' (by omega) (by omega)

theorem phPair_imp_parseBytes_segsTokEquiv {σ : Nat → Nat} {bs₁ bs₂ : List Nat}
    (hp : PhPair σ bs₁ bs₂) :
    segsTokEquiv σ (parseBytes bs₁) (parseBytes bs₂) :=
  parseBytes_go_phPair hp [] [] [] (bs₁.length + 1) (bs₂.length + 1)
    (by simp) trivial (Nat.le_refl _) (Nat.le_refl _)

private theorem phPair_head_form {σ : Nat → Nat} {bs₁ bs₂ : List Nat} (hp : PhPair σ bs₁ bs₂) :
    (bs₁ = [] ∧ bs₂ = []) ∨
    (∃ k tail₁ tail₂, PhPair σ tail₁ tail₂ ∧
      bs₁ = phBytes k ++ tail₁ ∧ bs₂ = phBytes (σ k) ++ tail₂) ∨
    (∃ xs tail₁ tail₂, xs ≠ [] ∧ 0xFF ∉ xs ∧ PhPair σ tail₁ tail₂ ∧
      bs₁ = xs ++ tail₁ ∧ bs₂ = xs ++ tail₂) := by
  induction hp with
  | nil => left; exact ⟨rfl, rfl⟩
  | ph k r₁ r₂ hr _ =>
      right; left
      exact ⟨k, r₁, r₂, hr, rfl, rfl⟩
  | noFF xs r₁ r₂ hx hr ih =>
      cases xs with
      | nil => simpa using ih
      | cons x xs' =>
          right; right
          exact ⟨x :: xs', r₁, r₂, by simp, hx, hr, rfl, rfl⟩

private theorem phPair_cons_tail {σ : Nat → Nat} {b : Nat} {r₁ bs₂ : List Nat}
    (hb : b ≠ 0xFF) (hp : PhPair σ (b :: r₁) bs₂) :
    ∃ r₂, bs₂ = b :: r₂ ∧ PhPair σ r₁ r₂ := by
  rcases phPair_head_form hp with
    ⟨h1, _⟩ | ⟨k, t₁, t₂, _, h1, _⟩ | ⟨xs, t₁, t₂, hxne, hxn, htail, h1, h2⟩
  · cases h1
  · exfalso
    have h0 : (b :: r₁).head? = (phBytes k ++ t₁).head? := congrArg List.head? h1
    have hph : (phBytes k ++ t₁).head? = some 0xFF := by simp [phBytes]
    rw [hph] at h0
    simp only [List.head?_cons, Option.some.injEq] at h0
    exact hb h0
  · cases xs with
    | nil => exact absurd rfl hxne
    | cons x xs' =>
        simp only [List.cons_append, List.cons.injEq] at h1
        rcases h1 with ⟨rfl, rfl⟩
        rw [List.cons_append] at h2
        exact ⟨xs' ++ t₂, h2, PhPair.noFF xs' t₁ t₂ (fun hm => hxn (List.mem_cons_of_mem _ hm)) htail⟩

/-- Splitting a `PhPair` with `takeWhile p` / `dropWhile p` when `p` keeps `0xFF` and digits
    (e.g., `(· != 10)` for line bodies). -/
theorem phPair_take_sep {σ : Nat → Nat} (p : Nat → Bool)
    (hp_ph : ∀ k, ∀ b ∈ phBytes k, p b = true)
    {bs₁ bs₂ : List Nat} (hp : PhPair σ bs₁ bs₂) :
    PhPair σ (bs₁.takeWhile p) (bs₂.takeWhile p) ∧
    PhPair σ (bs₁.dropWhile p) (bs₂.dropWhile p) := by
  induction hp with
  | nil => exact ⟨PhPair.nil, PhPair.nil⟩
  | noFF xs r₁ r₂ hx hrest ih =>
      obtain ⟨ht₁, hd₁⟩ := g3_takeWhile_dropWhile_append p xs r₁
      obtain ⟨ht₂, hd₂⟩ := g3_takeWhile_dropWhile_append p xs r₂
      rw [ht₁, hd₁, ht₂, hd₂]
      by_cases he : xs.dropWhile p = []
      · simp only [he, ↓reduceIte]
        exact ⟨PhPair.noFF xs (r₁.takeWhile p) (r₂.takeWhile p) hx ih.1, ih.2⟩
      · simp only [he, ↓reduceIte]
        exact ⟨phPair_of_noFF (fun hm => hx (g3_mem_of_mem_takeWhile hm)),
               PhPair.noFF (xs.dropWhile p) r₁ r₂ (fun hm => hx (g3_mem_of_mem_dropWhile hm)) hrest⟩
  | ph k r₁ r₂ hrest ih =>
      have hall : ∀ (m : Nat) (tail : List Nat),
          ((phBytes m ++ tail).takeWhile p = phBytes m ++ tail.takeWhile p) ∧
          ((phBytes m ++ tail).dropWhile p = tail.dropWhile p) := by
        intro m tail
        have hgo : ∀ xs : List Nat, (∀ b ∈ xs, p b = true) →
            (xs ++ tail).takeWhile p = xs ++ tail.takeWhile p ∧
            (xs ++ tail).dropWhile p = tail.dropWhile p := by
          intro xs hxs
          induction xs with
          | nil => simp
          | cons x xs' ihx =>
              have hx := hxs x List.mem_cons_self
              have hrec := ihx (fun b hb => hxs b (List.mem_cons_of_mem _ hb))
              simp [hx, hrec.1, hrec.2]
        exact hgo (phBytes m) (hp_ph m)
      have hm₁ := hall k r₁
      have hm₂ := hall (σ k) r₂
      rw [hm₁.1, hm₁.2, hm₂.1, hm₂.2]
      exact ⟨PhPair.ph k (r₁.takeWhile p) (r₂.takeWhile p) ih.1, ih.2⟩

/-- Splitting a `PhPair` with `takeWhile p` / `dropWhile p` when `p 0xFF = false`
    (e.g., `(· == ch)` for `ch ≠ 0xFF`): `takeWhile p` returns equal delimiter-free lists and
    `dropWhile p` stays `PhPair`. -/
theorem phPair_takeWhile_stop_ff {σ : Nat → Nat} (p : Nat → Bool) (hp_ff : p 0xFF = false)
    {bs₁ bs₂ : List Nat} (hp : PhPair σ bs₁ bs₂) :
    bs₁.takeWhile p = bs₂.takeWhile p ∧
    0xFF ∉ bs₁.takeWhile p ∧
    PhPair σ (bs₁.dropWhile p) (bs₂.dropWhile p) := by
  induction hp with
  | nil => simp [PhPair.nil]
  | noFF xs r₁ r₂ hx hrest ih =>
      obtain ⟨ht₁, hd₁⟩ := g3_takeWhile_dropWhile_append p xs r₁
      obtain ⟨ht₂, hd₂⟩ := g3_takeWhile_dropWhile_append p xs r₂
      rw [ht₁, hd₁, ht₂, hd₂]
      by_cases he : xs.dropWhile p = []
      · simp only [he, ↓reduceIte]
        refine ⟨congrArg (xs ++ ·) ih.1, ?_, ih.2.2⟩
        intro hm
        rcases List.mem_append.mp hm with h1 | h2
        · exact hx h1
        · exact ih.2.1 h2
      · simp only [he, ↓reduceIte]
        exact ⟨trivial, fun hm => hx (g3_mem_of_mem_takeWhile hm),
               PhPair.noFF (xs.dropWhile p) r₁ r₂ (fun hm => hx (g3_mem_of_mem_dropWhile hm)) hrest⟩
  | ph k r₁ r₂ hrest =>
      have hhead : ∀ m tail,
          (phBytes m ++ tail).takeWhile p = [] ∧
          (phBytes m ++ tail).dropWhile p = phBytes m ++ tail := by
        intro m tail
        simp only [phBytes, List.cons_append, List.takeWhile, List.dropWhile, hp_ff, true_and]
      rw [(hhead k r₁).1, (hhead k r₁).2, (hhead (σ k) r₂).1, (hhead (σ k) r₂).2]
      exact ⟨rfl, by simp, PhPair.ph k r₁ r₂ hrest⟩

private theorem phPair_dropWhile_stop_ff {σ : Nat → Nat} (p : Nat → Bool) (hp_ff : p 0xFF = false)
    {bs₁ bs₂ : List Nat} (hp : PhPair σ bs₁ bs₂) :
    PhPair σ (bs₁.dropWhile p) (bs₂.dropWhile p) :=
  (phPair_takeWhile_stop_ff p hp_ff hp).2.2

private theorem phPair_nil_iff {σ : Nat → Nat} {bs₁ bs₂ : List Nat}
    (hp : PhPair σ bs₁ bs₂) : bs₁ = [] ↔ bs₂ = [] := by
  rcases phPair_head_form hp with
    ⟨rfl, rfl⟩ | ⟨k, t₁, t₂, _, rfl, rfl⟩ | ⟨xs, t₁, t₂, hxne, _, _, rfl, rfl⟩
  · exact ⟨fun _ => rfl, fun _ => rfl⟩
  · constructor <;> intro h <;> exfalso
    · have hlen := congrArg List.length h
      have hpos := RawBridge.rb_phBytes_length_pos k
      simp only [List.length_nil, List.length_append] at hlen; omega
    · have hlen := congrArg List.length h
      have hpos := RawBridge.rb_phBytes_length_pos (σ k)
      simp only [List.length_nil, List.length_append] at hlen; omega
  · cases xs with
    | nil => exact absurd rfl hxne
    | cons _ _ => simp

private theorem phPair_rtrim {σ : Nat → Nat} (p : Nat → Bool)
    (hp_lt : ∀ b, p b = true → b < 48) {bs₁ bs₂ : List Nat} (hp : PhPair σ bs₁ bs₂) :
    PhPair σ (bs₁.reverse.dropWhile p).reverse (bs₂.reverse.dropWhile p).reverse := by
  have hp_ff : p 0xFF = false := by
    cases h : p 0xFF with
    | false => rfl
    | true => have := hp_lt 0xFF h; omega
  induction hp with
  | nil => simpa using PhPair.nil
  | noFF xs r₁ r₂ hx _ ih =>
      rw [List.reverse_append, List.reverse_append]
      rw [(g3_takeWhile_dropWhile_append p r₁.reverse xs.reverse).2]
      rw [(g3_takeWhile_dropWhile_append p r₂.reverse xs.reverse).2]
      by_cases he₁ : r₁.reverse.dropWhile p = [] <;> by_cases he₂ : r₂.reverse.dropWhile p = []
      · simp only [he₁, he₂, ↓reduceIte]
        exact phPair_of_noFF (fun hm => hx (List.mem_reverse.mp (g3_mem_of_mem_dropWhile (List.mem_reverse.mp hm))))
      · exfalso
        have hiff := phPair_nil_iff ih
        have h1 : (r₁.reverse.dropWhile p).reverse = [] := by simp [he₁]
        have h2 := hiff.mp h1
        rw [List.reverse_eq_nil_iff] at h2
        exact he₂ h2
      · exfalso
        have hiff := phPair_nil_iff ih
        have h2 : (r₂.reverse.dropWhile p).reverse = [] := by simp [he₂]
        have h1 := hiff.mpr h2
        rw [List.reverse_eq_nil_iff] at h1
        exact he₁ h1
      · simp only [he₁, he₂, ↓reduceIte, List.reverse_append, List.reverse_reverse]
        exact PhPair.noFF xs _ _ hx ih
  | ph k r₁ r₂ _ ih =>
      rw [List.reverse_append, List.reverse_append]
      rw [(g3_takeWhile_dropWhile_append p r₁.reverse (phBytes k).reverse).2]
      rw [(g3_takeWhile_dropWhile_append p r₂.reverse (phBytes (σ k)).reverse).2]
      have hph_drop : ∀ m, (phBytes m).reverse.dropWhile p = (phBytes m).reverse := fun m => by
        simp only [phBytes, List.reverse_append, List.reverse_singleton,
          List.singleton_append, List.dropWhile, hp_ff]
      by_cases he₁ : r₁.reverse.dropWhile p = [] <;> by_cases he₂ : r₂.reverse.dropWhile p = []
      · simp only [he₁, he₂, ↓reduceIte, hph_drop, List.reverse_reverse]
        simpa using PhPair.ph k [] [] PhPair.nil
      · exfalso
        have hiff := phPair_nil_iff ih
        have h1 : (r₁.reverse.dropWhile p).reverse = [] := by simp [he₁]
        have h2 := hiff.mp h1
        rw [List.reverse_eq_nil_iff] at h2
        exact he₂ h2
      · exfalso
        have hiff := phPair_nil_iff ih
        have h2 : (r₂.reverse.dropWhile p).reverse = [] := by simp [he₂]
        have h1 := hiff.mpr h2
        rw [List.reverse_eq_nil_iff] at h1
        exact he₁ h1
      · simp only [he₁, he₂, ↓reduceIte, List.reverse_append, List.reverse_reverse]
        exact PhPair.ph k _ _ ih

theorem phPair_trimBytes {σ : Nat → Nat} {bs₁ bs₂ : List Nat} (hp : PhPair σ bs₁ bs₂) :
    PhPair σ (trimBytes bs₁) (trimBytes bs₂) := by
  have hlt : ∀ b, isTrimByte b = true → b < 48 := by
    intro b hb
    simp [isTrimByte] at hb
    omega
  have hp_ff : isTrimByte 0xFF = false := by decide
  unfold trimBytes
  exact phPair_rtrim isTrimByte hlt (phPair_dropWhile_stop_ff isTrimByte hp_ff hp)

/-! ## 5. Non-Email Rule-Level `TokEquiv` & `ShiftEquiv` Preservation + Composition -/

private theorem tokEquiv_applyByteRule_of_phPair (σ' : Nat → Nat)
    (st₁ st₂ : ParseState)
    (f : List Nat → List TokenEntry → List Nat × List TokenEntry)
    (hlen : st₁.tokens.length = st₂.tokens.length)
    (hrules : ∀ i (hi : i < st₁.tokens.length),
      (st₁.tokens.get ⟨i, hi⟩).rule =
        (st₂.tokens.get ⟨i, by simpa [hlen] using hi⟩).rule)
    (hfat : st₁.fatal = st₂.fatal)
    (hadded : ∃ added : List TokenEntry,
      (f (byteForm st₁.work) st₁.tokens).2 = st₁.tokens ++ added ∧
      (f (byteForm st₂.work) st₂.tokens).2 = st₂.tokens ++ added)
    (hwork : PhPair σ' (f (byteForm st₁.work) st₁.tokens).1 (f (byteForm st₂.work) st₂.tokens).1) :
    TokEquiv σ' (applyByteRule st₁ f) (applyByteRule st₂ f) := by
  rcases hadded with ⟨added, h1, h2⟩
  dsimp only [applyByteRule]
  refine ⟨phPair_imp_parseBytes_segsTokEquiv hwork, ?_, ?_, hfat⟩
  · rw [h1, h2, List.length_append, List.length_append, hlen]
  · intro i hi
    rw [h1] at hi
    simp only [h1, h2, List.get_eq_getElem]
    rw [List.length_append] at hi
    by_cases hilt : i < st₁.tokens.length
    · have hilt₂ : i < st₂.tokens.length := by omega
      rw [List.getElem_append_left hilt, List.getElem_append_left hilt₂]
      exact hrules i hilt
    · have hj : i - st₁.tokens.length < added.length := by omega
      rw [List.getElem_append_right (by omega), List.getElem_append_right (by omega)]
      simp [hlen]

private theorem list_get_eq_of_eq {α : Type} {xs ys : List α} (h : xs = ys)
    (i : Nat) (hi : i < xs.length) :
    xs.get ⟨i, hi⟩ = ys.get ⟨i, by rw [← h]; exact hi⟩ := by
  subst h; rfl

private theorem shiftEquiv_applyByteRule_of_phPair (base : Nat)
    (st₁ st₂ : ParseState)
    (f : List Nat → List TokenEntry → List Nat × List TokenEntry)
    (hs : ShiftEquiv base st₁ st₂)
    (hadded : ∃ added : List TokenEntry,
      (f (byteForm st₁.work) st₁.tokens).2 = st₁.tokens ++ added ∧
      (f (byteForm st₂.work) st₂.tokens).2 = st₂.tokens ++ added)
    (hwork : PhPair (fun k => base + k)
      (f (byteForm st₁.work) st₁.tokens).1 (f (byteForm st₂.work) st₂.tokens).1) :
    ShiftEquiv base (applyByteRule st₁ f) (applyByteRule st₂ f) := by
  rcases hs with ⟨_, hlen, htoks, hfat⟩
  rcases hadded with ⟨added, h1, h2⟩
  dsimp only [applyByteRule]
  refine ⟨phPair_imp_parseBytes_segsTokEquiv hwork, ?_, ?_, hfat⟩
  · rw [h1, h2, List.length_append, List.length_append, hlen]; omega
  · intro i hi
    dsimp only [applyByteRule] at hi ⊢
    rw [h2, list_get_eq_of_eq h1 i hi]
    rw [h1, List.length_append] at hi
    by_cases hilt : i < st₁.tokens.length
    · have h2lt : base + i < st₂.tokens.length := by omega
      rw [List.getElem?_append_left h2lt]
      simpa [List.get_eq_getElem, List.getElem_append_left hilt] using htoks i hilt
    · have hi_ge : st₁.tokens.length ≤ i := by omega
      have hb_ge : st₂.tokens.length ≤ base + i := by omega
      rw [List.getElem?_append_right hb_ge]
      have hidx : base + i - st₂.tokens.length = i - st₁.tokens.length := by omega
      rw [hidx]
      have hj : i - st₁.tokens.length < added.length := by omega
      rw [List.getElem?_eq_getElem hj]
      simp [List.get_eq_getElem, List.getElem_append_right hi_ge]

/-! ### 5.1 `.delimiter`, `.prefilter`, `.include` -/

theorem delimiterRule_tokEquiv_any (σ : Nat → Nat) {st₁ st₂ : ParseState}
    (h : TokEquiv σ st₁ st₂) :
    TokEquiv σ (delimiterRule st₁) (delimiterRule st₂) := by
  simpa [delimiterRule] using h

theorem delimiterRule_shiftEquiv (base : Nat) {st₁ st₂ : ParseState}
    (h : ShiftEquiv base st₁ st₂) :
    ShiftEquiv base (delimiterRule st₁) (delimiterRule st₂) := by
  simpa [delimiterRule] using h

theorem prefilterRule_tokEquiv_any (σ : Nat → Nat) {st₁ st₂ : ParseState}
    (h : TokEquiv σ st₁ st₂) :
    TokEquiv σ (prefilterRule st₁) (prefilterRule st₂) := by
  have hall := segsTokEquiv_allText_eq h.1
  cases h₁ : allText st₁.work with
  | none =>
      have h₂ : allText st₂.work = none := hall.symm.trans h₁
      simpa [prefilterRule, h₁, h₂] using h
  | some cs =>
      have h₂ : allText st₂.work = some cs := hall.symm.trans h₁
      simp only [prefilterRule, h₁, h₂]
      refine ⟨segsTokEquiv_refl_of_noTok σ _ ?_, h.2⟩
      intro k hk
      exact prefilterRule_no_tok_of_allText_some st₁ cs h₁ k (by simpa [prefilterRule, h₁] using hk)

theorem prefilterRule_shiftEquiv (base : Nat) {st₁ st₂ : ParseState}
    (h : ShiftEquiv base st₁ st₂) :
    ShiftEquiv base (prefilterRule st₁) (prefilterRule st₂) := by
  have hall := segsTokEquiv_allText_eq h.1
  cases h₁ : allText st₁.work with
  | none =>
      have h₂ : allText st₂.work = none := hall.symm.trans h₁
      simpa [prefilterRule, h₁, h₂] using h
  | some cs =>
      have h₂ : allText st₂.work = some cs := hall.symm.trans h₁
      simp only [prefilterRule, h₁, h₂]
      refine ⟨segsTokEquiv_refl_of_noTok _ _ ?_, h.2⟩
      intro k hk
      exact prefilterRule_no_tok_of_allText_some st₁ cs h₁ k (by simpa [prefilterRule, h₁] using hk)

theorem includeRule_tokEquiv_any (σ : Nat → Nat) {st₁ st₂ : ParseState}
    (h : TokEquiv σ st₁ st₂) (hdoc : st₁.doc = st₂.doc) :
    TokEquiv σ (includeRule st₁) (includeRule st₂) := by
  have hall := segsTokEquiv_allText_eq h.1
  cases h₁ : allText st₁.work with
  | none =>
      have h₂ : allText st₂.work = none := hall.symm.trans h₁
      simpa [includeRule, h₁, h₂] using h
  | some cs =>
      have h₂ : allText st₂.work = some cs := hall.symm.trans h₁
      simp only [includeRule, h₁, h₂, hdoc]
      refine ⟨segsTokEquiv_refl_of_noTok σ _ ?_, h.2⟩
      intro k hk
      exact normSegs_single_text_no_tok _ k hk

theorem includeRule_shiftEquiv (base : Nat) {st₁ st₂ : ParseState}
    (h : ShiftEquiv base st₁ st₂) (hdoc : st₁.doc = st₂.doc) :
    ShiftEquiv base (includeRule st₁) (includeRule st₂) := by
  have hall := segsTokEquiv_allText_eq h.1
  cases h₁ : allText st₁.work with
  | none =>
      have h₂ : allText st₂.work = none := hall.symm.trans h₁
      simpa [includeRule, h₁, h₂] using h
  | some cs =>
      have h₂ : allText st₂.work = some cs := hall.symm.trans h₁
      simp only [includeRule, h₁, h₂, hdoc]
      refine ⟨segsTokEquiv_refl_of_noTok _ _ ?_, h.2⟩
      intro k hk
      exact normSegs_single_text_no_tok _ k hk

/-! ### 5.2 `.code` -/

private theorem applyCode_scan_alpha (σ' : Nat → Nat)
    (rest : List Char) (prev : Option Char)
    (toks₁ toks₂ : List TokenEntry) (out₁ out₂ : List TSeg) (buf : List Char) (fuel : Nat)
    (hσ : ∀ j, σ' (toks₁.length + j) = toks₂.length + j)
    (hout : segsTokEquiv σ' out₁ out₂) :
    (∃ added : List TokenEntry,
      (applyCode.scan rest prev toks₁ out₁ buf fuel).2 = toks₁ ++ added ∧
      (applyCode.scan rest prev toks₂ out₂ buf fuel).2 = toks₂ ++ added) ∧
    segsTokEquiv σ' (applyCode.scan rest prev toks₁ out₁ buf fuel).1
      (applyCode.scan rest prev toks₂ out₂ buf fuel).1 := by
  induction fuel generalizing rest prev toks₁ toks₂ out₁ out₂ buf with
  | zero =>
      cases rest <;>
        exact ⟨⟨[], by simp [applyCode.scan], by simp [applyCode.scan]⟩,
          segsTokEquiv_pushText buf hout⟩
  | succ f ih =>
      cases rest with
      | nil =>
          exact ⟨⟨[], by simp [applyCode.scan], by simp [applyCode.scan]⟩,
            segsTokEquiv_pushText buf hout⟩
      | cons c rest' =>
          dsimp only [applyCode.scan]
          split
          · cases hcm : codeMatch (c :: rest') true (codeFuel (c :: rest').length) with
            | nil => exact ih rest' (some c) toks₁ toks₂ out₁ out₂ (buf ++ [c]) hσ hout
            | cons m ms =>
                rcases m with ⟨consumed, g1, body, g3⟩
                dsimp only
                let entry := codeToken g1 body
                have hσ' : ∀ j, σ' ((toks₁ ++ [entry]).length + j) = (toks₂ ++ [entry]).length + j := by
                  intro j
                  simp only [List.length_append, List.length_singleton, Nat.add_assoc]
                  exact hσ (1 + j)
                have hout' : segsTokEquiv σ'
                    (pushTok (pushText (pushText out₁ buf) "\n\n".toList) toks₁.length)
                    (pushTok (pushText (pushText out₂ buf) "\n\n".toList) toks₂.length) :=
                  segsTokEquiv_pushTok
                    (segsTokEquiv_pushText "\n\n".toList (segsTokEquiv_pushText buf hout))
                    (by simpa using hσ 0)
                rcases ih ((c :: rest').drop consumed) ((c :: rest').take consumed).getLast?
                    (toks₁ ++ [entry]) (toks₂ ++ [entry]) _ _ g3 hσ' hout' with
                  ⟨⟨added, h1, h2⟩, hseg⟩
                exact ⟨⟨entry :: added, by simpa [List.append_assoc] using h1,
                  by simpa [List.append_assoc] using h2⟩, hseg⟩
          · exact ih rest' (some c) toks₁ toks₂ out₁ out₂ (buf ++ [c]) hσ hout

theorem codeRule_tokEquiv_any (σ : Nat → Nat) {st₁ st₂ : ParseState}
    (hwf₁ : WFState st₁) (h : TokEquiv σ st₁ st₂) :
    TokEquiv (extendRen σ st₁.tokens.length) (codeRule st₁) (codeRule st₂) := by
  have hall := segsTokEquiv_allText_eq h.1
  cases h₁ : allText st₁.work with
  | none =>
      have h₂ : allText st₂.work = none := hall.symm.trans h₁
      simp only [codeRule, h₁, h₂]
      refine ⟨segsTokEquiv_congr (fun k hk => (extendRen_lt (hwf₁.1.2 k hk)).symm) h.1, h.2⟩
  | some cs =>
      have h₂ : allText st₂.work = some cs := hall.symm.trans h₁
      simp only [codeRule, h₁, h₂]
      rcases h with ⟨_, hlen, hrules, hfat⟩
      have hσ : ∀ j, extendRen σ st₁.tokens.length (st₁.tokens.length + j) =
          st₂.tokens.length + j := by
        intro j
        rw [extendRen_ge (Nat.le_add_right _ _), hlen]
      have ha := applyCode_scan_alpha (extendRen σ st₁.tokens.length) cs none
        st₁.tokens st₂.tokens [] [] [] (cs.length + 1) hσ trivial
      rcases ha with ⟨⟨added, h1, h2⟩, hseg⟩
      refine ⟨hseg, ?_, ?_, hfat⟩
      · show (applyCode cs st₁.tokens).2.length = (applyCode cs st₂.tokens).2.length
        change (applyCode.scan cs none st₁.tokens [] [] (cs.length + 1)).2.length =
          (applyCode.scan cs none st₂.tokens [] [] (cs.length + 1)).2.length
        rw [h1, h2, List.length_append, List.length_append, hlen]
      · intro i hi
        change ((applyCode.scan cs none st₁.tokens [] [] (cs.length + 1)).2.get ⟨i, _⟩).rule =
          ((applyCode.scan cs none st₂.tokens [] [] (cs.length + 1)).2.get ⟨i, _⟩).rule
        have hi' : i < (st₁.tokens ++ added).length := by rw [← h1]; exact hi
        have hi2 : i < (applyCode.scan cs none st₂.tokens [] [] (cs.length + 1)).2.length := by
          rw [h2, List.length_append, ← hlen]
          simpa [List.length_append] using hi'
        rw [list_get_eq_of_eq h1 i hi, list_get_eq_of_eq h2 i hi2]
        simp only [List.get_eq_getElem]
        rw [List.length_append] at hi'
        by_cases hilt : i < st₁.tokens.length
        · have hilt₂ : i < st₂.tokens.length := by omega
          rw [List.getElem_append_left hilt, List.getElem_append_left hilt₂]
          exact hrules i hilt
        · have hj : i - st₁.tokens.length < added.length := by omega
          rw [List.getElem_append_right (by omega), List.getElem_append_right (by omega)]
          simp [hlen]

theorem codeRule_shiftEquiv (base : Nat) {st₁ st₂ : ParseState}
    (h : ShiftEquiv base st₁ st₂) :
    ShiftEquiv base (codeRule st₁) (codeRule st₂) := by
  have hall := segsTokEquiv_allText_eq h.1
  cases h₁ : allText st₁.work with
  | none =>
      have h₂ : allText st₂.work = none := hall.symm.trans h₁
      simpa [codeRule, h₁, h₂] using h
  | some cs =>
      have h₂ : allText st₂.work = some cs := hall.symm.trans h₁
      simp only [codeRule, h₁, h₂]
      rcases h with ⟨_, hlen, htoks, hfat⟩
      have hσ : ∀ j, base + (st₁.tokens.length + j) = st₂.tokens.length + j := fun j => by omega
      have ha := applyCode_scan_alpha (fun k => base + k) cs none
        st₁.tokens st₂.tokens [] [] [] (cs.length + 1) hσ trivial
      rcases ha with ⟨⟨added, h1, h2⟩, hseg⟩
      refine ⟨hseg, ?_, ?_, hfat⟩
      · show (applyCode cs st₂.tokens).2.length = base + (applyCode cs st₁.tokens).2.length
        change (applyCode.scan cs none st₂.tokens [] [] (cs.length + 1)).2.length =
          base + (applyCode.scan cs none st₁.tokens [] [] (cs.length + 1)).2.length
        rw [h1, h2, List.length_append, List.length_append, hlen]; omega
      · intro i hi
        change (applyCode.scan cs none st₂.tokens [] [] (cs.length + 1)).2[base + i]? =
          some ((applyCode.scan cs none st₁.tokens [] [] (cs.length + 1)).2.get ⟨i, _⟩)
        rw [h2, list_get_eq_of_eq h1 i hi]
        have hi' : i < (st₁.tokens ++ added).length := by rw [← h1]; exact hi
        rw [List.length_append] at hi'
        by_cases hilt : i < st₁.tokens.length
        · have h2lt : base + i < st₂.tokens.length := by omega
          rw [List.getElem?_append_left h2lt]
          simpa [List.get_eq_getElem, List.getElem_append_left hilt] using htoks i hilt
        · have hi_ge : st₁.tokens.length ≤ i := by omega
          have hb_ge : st₂.tokens.length ≤ base + i := by omega
          rw [List.getElem?_append_right hb_ge]
          have hidx : base + i - st₂.tokens.length = i - st₁.tokens.length := by omega
          rw [hidx]
          have hj : i - st₁.tokens.length < added.length := by omega
          rw [List.getElem?_eq_getElem hj]
          simp [List.get_eq_getElem, List.getElem_append_right hi_ge]

/-! ### 5.3 `.break` -/

private theorem breakScan_phBytes_prefix (k : Nat) (tail : List Nat)
    (toks : List TokenEntry) (fuel : Nat) :
    breakScan (phBytes k ++ tail) toks (fuel + (phBytes k).length) =
      let res := breakScan tail toks fuel
      (phBytes k ++ res.1, res.2) := by
  have hno : ∀ xs : List Nat, xs ≠ [] → (∀ b ∈ xs, b ≠ 32) →
      breakScan (xs ++ tail) toks (fuel + xs.length) =
        let res := breakScan tail toks fuel
        (xs ++ res.1, res.2) := by
    intro xs
    induction xs generalizing tail toks fuel with
    | nil => intro hne _; exact absurd rfl hne
    | cons x xs' ih =>
        intro _ hxs
        have hx : x ≠ 32 := hxs x List.mem_cons_self
        have hxs' : ∀ b ∈ xs', b ≠ 32 := fun b hb => hxs b (List.mem_cons_of_mem _ hb)
        have hf : fuel + (x :: xs').length = (fuel + xs'.length) + 1 := by simp; omega
        rw [List.cons_append, hf]
        cases xs' with
        | nil =>
            simp only [List.length_nil, Nat.add_zero]
            cases tail with
            | nil => simp [breakScan]
            | cons b2 r2 =>
                cases r2 with
                | nil => simp [breakScan]
                | cons b3 r3 => simp [breakScan, g3_beq_false_of_ne hx]
        | cons y ys =>
            cases hyt : ys ++ tail with
            | nil =>
                have hys : ys = [] := by cases ys <;> simp at hyt; rfl
                have ht : tail = [] := by cases ys <;> simp at hyt; exact hyt
                subst hys ht
                simp [breakScan]
            | cons b3 r3 =>
                have hex : x :: ((y :: ys) ++ tail) = x :: y :: b3 :: r3 := by
                  simp only [List.cons_append, hyt]
                rw [hex]
                dsimp only [breakScan]
                have hcond : (x == 32 && y == 95 && b3 == 10) = false := by
                  simp [g3_beq_false_of_ne hx]
                rw [hcond]
                simp only [Bool.false_eq_true, ↓reduceIte]
                rw [← hyt]
                have ih1 := ih tail toks fuel (by simp) hxs'
                simp only [List.cons_append, List.length_cons] at ih1 ⊢
                rw [ih1]
  apply hno
  · intro h; have := RawBridge.rb_phBytes_length_pos k; simp [h] at this
  · intro b hb
    rcases g3_mem_phBytes_spec hb with rfl | ⟨h1, h2⟩ <;> omega

private theorem breakScan_step_ne32 {b : Nat} (hb : b ≠ 32) (r : List Nat)
    (toks : List TokenEntry) (f : Nat) :
    breakScan (b :: r) toks (f + 1) =
      let res := breakScan r toks f
      (b :: res.1, res.2) := by
  cases r with
  | nil => rfl
  | cons b2 r2 =>
      cases r2 with
      | nil => rfl
      | cons b3 r3 => simp [breakScan, g3_beq_false_of_ne hb]

private theorem breakScan_step_ne95 {b b2 : Nat} (hb2 : b2 ≠ 95) (r : List Nat)
    (toks : List TokenEntry) (f : Nat) :
    breakScan (b :: b2 :: r) toks (f + 1) =
      let res := breakScan (b2 :: r) toks f
      (b :: res.1, res.2) := by
  cases r with
  | nil => rfl
  | cons b3 r3 => simp [breakScan, g3_beq_false_of_ne hb2]

private theorem breakScan_step_ne10 {b b2 b3 : Nat} (hb3 : b3 ≠ 10) (r : List Nat)
    (toks : List TokenEntry) (f : Nat) :
    breakScan (b :: b2 :: b3 :: r) toks (f + 1) =
      let res := breakScan (b2 :: b3 :: r) toks f
      (b :: res.1, res.2) := by
  simp [breakScan, g3_beq_false_of_ne hb3]

private theorem breakScan_phPair_aux (σ' : Nat → Nat) :
    ∀ (m : Nat) (bs₁ bs₂ : List Nat) (toks₁ toks₂ : List TokenEntry) (f₁ f₂ : Nat),
      bs₁.length = m → PhPair σ' bs₁ bs₂ →
      (∀ j, σ' (toks₁.length + j) = toks₂.length + j) →
      bs₁.length + 1 ≤ f₁ → bs₂.length + 1 ≤ f₂ →
      (∃ added : List TokenEntry,
        (breakScan bs₁ toks₁ f₁).2 = toks₁ ++ added ∧
        (breakScan bs₂ toks₂ f₂).2 = toks₂ ++ added) ∧
      PhPair σ' (breakScan bs₁ toks₁ f₁).1 (breakScan bs₂ toks₂ f₂).1 := by
  intro m
  induction m using Nat.strongRecOn with
  | ind m ih =>
      intro bs₁ bs₂ toks₁ toks₂ f₁ f₂ hm hp hσ hf₁ hf₂
      subst hm
      cases bs₁ with
      | nil =>
          rcases phPair_head_form hp with ⟨_, rfl⟩ | ⟨k, _, _, _, h1, _⟩ | ⟨xs, _, _, hxne, _, _, h1, _⟩
          · obtain ⟨f₁', rfl⟩ : ∃ f₁', f₁ = f₁' + 1 := ⟨f₁ - 1, by omega⟩
            obtain ⟨f₂', rfl⟩ : ∃ f₂', f₂ = f₂' + 1 := ⟨f₂ - 1, by omega⟩
            exact ⟨⟨[], by simp [breakScan], by simp [breakScan]⟩, PhPair.nil⟩
          · exfalso
            have hlen := congrArg List.length h1
            simp only [List.length_nil, List.length_append] at hlen
            have hpos := RawBridge.rb_phBytes_length_pos k
            omega
          · cases xs with
            | nil => exact absurd rfl hxne
            | cons _ _ => simp at h1
      | cons b r₁ =>
          by_cases hbff : b = 0xFF
          · rcases phPair_head_form hp with
              ⟨h1, _⟩ | ⟨k, tail₁, tail₂, htail, h1, h2⟩ | ⟨xs, _, _, hxne, hxn, _, h1, _⟩
            · cases h1
            · have hpos₁ := RawBridge.rb_phBytes_length_pos k
              have hpos₂ := RawBridge.rb_phBytes_length_pos (σ' k)
              have hle₁ : (phBytes k).length ≤ f₁ := by
                have := congrArg List.length h1; simp only [List.length_append] at this hf₁; omega
              have hle₂ : (phBytes (σ' k)).length ≤ f₂ := by
                have := congrArg List.length h2; simp only [List.length_append] at this hf₂; omega
              have hfe₁ : f₁ = (f₁ - (phBytes k).length) + (phBytes k).length := by omega
              have hfe₂ : f₂ = (f₂ - (phBytes (σ' k)).length) + (phBytes (σ' k)).length := by omega
              rw [h1, h2, hfe₁, hfe₂, breakScan_phBytes_prefix, breakScan_phBytes_prefix]
              have hlt : tail₁.length < (b :: r₁).length := by
                have := congrArg List.length h1; simp only [List.length_append] at this; omega
              have hrem₁ : tail₁.length + 1 ≤ f₁ - (phBytes k).length := by
                have := congrArg List.length h1; simp only [List.length_append] at this hf₁; omega
              have hrem₂ : tail₂.length + 1 ≤ f₂ - (phBytes (σ' k)).length := by
                have := congrArg List.length h2; simp only [List.length_append] at this hf₂; omega
              rcases ih tail₁.length hlt tail₁ tail₂ toks₁ toks₂
                  (f₁ - (phBytes k).length) (f₂ - (phBytes (σ' k)).length) rfl htail hσ hrem₁ hrem₂ with
                ⟨hadd, hph⟩
              exact ⟨hadd, PhPair.ph k _ _ hph⟩
            · exfalso
              cases xs with
              | nil => exact hxne rfl
              | cons x xs' =>
                  simp only [List.cons_append, List.cons.injEq] at h1
                  exact hxn (h1.1 ▸ hbff ▸ List.mem_cons_self)
          · rcases phPair_cons_tail hbff hp with ⟨r₂, rfl, hr⟩
            obtain ⟨f₁', rfl⟩ : ∃ f₁', f₁ = f₁' + 1 := ⟨f₁ - 1, by omega⟩
            obtain ⟨f₂', rfl⟩ : ∃ f₂', f₂ = f₂' + 1 := ⟨f₂ - 1, by omega⟩
            by_cases hb32 : b = 32
            · subst hb32
              rcases phPair_head_form hr with
                ⟨rfl, rfl⟩ | ⟨k, t₁, t₂, _, h1, h2⟩ | ⟨xs, t₁, t₂, hxne, hxn, htail, h1, h2⟩
              · obtain ⟨f₁'', rfl⟩ : ∃ f₁'', f₁' = f₁'' + 1 := ⟨f₁' - 1, by simp at hf₁; omega⟩
                obtain ⟨f₂'', rfl⟩ : ∃ f₂'', f₂' = f₂'' + 1 := ⟨f₂' - 1, by simp at hf₂; omega⟩
                exact ⟨⟨[], by simp [breakScan], by simp [breakScan]⟩, phPair_of_noFF (xs := [32]) (by decide)⟩
              · have hph_head : ∀ m tail, ∃ rest, phBytes m ++ tail = 0xFF :: rest := fun m tail => by
                  simp [phBytes]
                rcases hph_head k t₁ with ⟨s₁, hs₁⟩
                rcases hph_head (σ' k) t₂ with ⟨s₂, hs₂⟩
                rw [h1, hs₁, h2, hs₂]
                rw [breakScan_step_ne95 (by omega), breakScan_step_ne95 (by omega)]
                rw [← hs₁, ← hs₂, ← h1, ← h2]
                have hf₁r : r₁.length + 1 ≤ f₁' := by simp at hf₁; omega
                have hf₂r : r₂.length + 1 ≤ f₂' := by simp at hf₂; omega
                rcases ih r₁.length (by simp) r₁ r₂ toks₁ toks₂ f₁' f₂' rfl hr hσ hf₁r hf₂r with
                  ⟨hadd, hph⟩
                exact ⟨hadd, phPair_append (phPair_of_noFF (xs := [32]) (by decide)) hph⟩
              · cases xs with
                | nil => exact absurd rfl hxne
                | cons b2 xs' =>
                    rw [h1, h2, List.cons_append, List.cons_append]
                    by_cases hb2_95 : b2 = 95
                    · subst hb2_95
                      have htail' : PhPair σ' (xs' ++ t₁) (xs' ++ t₂) :=
                        PhPair.noFF xs' t₁ t₂ (fun hm => hxn (List.mem_cons_of_mem _ hm)) htail
                      rcases phPair_head_form htail' with
                        ⟨h1', h2'⟩ | ⟨k, s₁, s₂, _, hs1, hs2⟩ | ⟨ys, s₁, s₂, hyne, hyn, hytail, hs1, hs2⟩
                      · rw [h1', h2']
                        obtain ⟨f₁'', rfl⟩ : ∃ f₁'', f₁' = f₁'' + 1 := ⟨f₁' - 1, by simp [h1, h1'] at hf₁; omega⟩
                        obtain ⟨f₂'', rfl⟩ : ∃ f₂'', f₂' = f₂'' + 1 := ⟨f₂' - 1, by simp [h2, h2'] at hf₂; omega⟩
                        obtain ⟨f₁''', rfl⟩ : ∃ f₁''', f₁'' = f₁''' + 1 := ⟨f₁'' - 1, by simp [h1, h1'] at hf₁; omega⟩
                        obtain ⟨f₂''', rfl⟩ : ∃ f₂''', f₂'' = f₂''' + 1 := ⟨f₂'' - 1, by simp [h2, h2'] at hf₂; omega⟩
                        exact ⟨⟨[], by simp [breakScan], by simp [breakScan]⟩, phPair_of_noFF (xs := [32, 95]) (by decide)⟩
                      · have hph_head : ∀ m tail, ∃ rest, phBytes m ++ tail = 0xFF :: rest := fun m tail => by
                          simp [phBytes]
                        rcases hph_head k s₁ with ⟨q₁, hq₁⟩
                        rcases hph_head (σ' k) s₂ with ⟨q₂, hq₂⟩
                        rw [hs1, hq₁, hs2, hq₂]
                        rw [breakScan_step_ne10 (by omega), breakScan_step_ne10 (by omega)]
                        rw [← hq₁, ← hq₂, ← hs1, ← hs2, ← List.cons_append, ← List.cons_append, ← h1, ← h2]
                        have hf₁r : r₁.length + 1 ≤ f₁' := by simp at hf₁; omega
                        have hf₂r : r₂.length + 1 ≤ f₂' := by simp at hf₂; omega
                        rcases ih r₁.length (by simp) r₁ r₂ toks₁ toks₂ f₁' f₂' rfl hr hσ hf₁r hf₂r with
                          ⟨hadd, hph⟩
                        exact ⟨hadd, phPair_append (phPair_of_noFF (xs := [32]) (by decide)) hph⟩
                      · cases ys with
                        | nil => exact absurd rfl hyne
                        | cons b3 ys' =>
                            rw [hs1, hs2, List.cons_append, List.cons_append]
                            by_cases hb3_10 : b3 = 10
                            · subst hb3_10
                              dsimp only [breakScan]
                              simp only [beq_self_eq_true, Bool.and_self, ↓reduceIte]
                              let tokB : TokenEntry := { rule := "Break", opts := [] }
                              have hσ' : ∀ j, σ' ((toks₁ ++ [tokB]).length + j) = (toks₂ ++ [tokB]).length + j := by
                                intro j; simp only [List.length_append, List.length_singleton, Nat.add_assoc]
                                exact hσ (1 + j)
                              have hrem_ph : PhPair σ' (ys' ++ s₁) (ys' ++ s₂) :=
                                PhPair.noFF ys' s₁ s₂ (fun hm => hyn (List.mem_cons_of_mem _ hm)) hytail
                              have hs1l : (xs' ++ t₁).length = 1 + (ys' ++ s₁).length := by
                                rw [hs1]; simp [List.length_cons, List.length_append]; omega
                              have hs2l : (xs' ++ t₂).length = 1 + (ys' ++ s₂).length := by
                                rw [hs2]; simp [List.length_cons, List.length_append]; omega
                              have hlen1 : r₁.length = 1 + 1 + (ys' ++ s₁).length := by
                                rw [h1]; simp only [List.length_cons, List.length_append] at *; omega
                              have hlen2 : r₂.length = 1 + 1 + (ys' ++ s₂).length := by
                                rw [h2]; simp only [List.length_cons, List.length_append] at *; omega
                              have hlt : (ys' ++ s₁).length < (32 :: r₁).length := by
                                simp only [List.length_cons]; omega
                              have hf₁rem : (ys' ++ s₁).length + 1 ≤ f₁' := by
                                simp only [List.length_cons] at hf₁; omega
                              have hf₂rem : (ys' ++ s₂).length + 1 ≤ f₂' := by
                                simp only [List.length_cons] at hf₂; omega
                              rcases ih (ys' ++ s₁).length hlt (ys' ++ s₁) (ys' ++ s₂)
                                  (toks₁ ++ [tokB]) (toks₂ ++ [tokB]) f₁' f₂' rfl hrem_ph hσ' hf₁rem hf₂rem with
                                ⟨⟨added, ha1, ha2⟩, hph⟩
                              have hs0 : σ' toks₁.length = toks₂.length := by simpa using hσ 0
                              refine ⟨⟨tokB :: added, ?_, ?_⟩, ?_⟩
                              · simpa [List.append_assoc] using ha1
                              · simpa [List.append_assoc] using ha2
                              · change PhPair σ' (phBytes toks₁.length ++ _) (phBytes toks₂.length ++ _)
                                rw [← hs0]
                                exact PhPair.ph toks₁.length _ _ hph
                            · rw [breakScan_step_ne10 hb3_10, breakScan_step_ne10 hb3_10]
                              have hback₁ : 95 :: b3 :: (ys' ++ s₁) = r₁ := by simp [h1, hs1]
                              have hback₂ : 95 :: b3 :: (ys' ++ s₂) = r₂ := by simp [h2, hs2]
                              rw [hback₁, hback₂]
                              have hf₁r : r₁.length + 1 ≤ f₁' := by simp at hf₁; omega
                              have hf₂r : r₂.length + 1 ≤ f₂' := by simp at hf₂; omega
                              rcases ih r₁.length (by simp) r₁ r₂ toks₁ toks₂ f₁' f₂' rfl hr hσ hf₁r hf₂r with
                                ⟨hadd, hph⟩
                              exact ⟨hadd, phPair_append (phPair_of_noFF (xs := [32]) (by decide)) hph⟩
                    · rw [breakScan_step_ne95 hb2_95, breakScan_step_ne95 hb2_95]
                      have hback₁ : b2 :: (xs' ++ t₁) = r₁ := by simp [h1]
                      have hback₂ : b2 :: (xs' ++ t₂) = r₂ := by simp [h2]
                      rw [hback₁, hback₂]
                      have hf₁r : r₁.length + 1 ≤ f₁' := by simp at hf₁; omega
                      have hf₂r : r₂.length + 1 ≤ f₂' := by simp at hf₂; omega
                      rcases ih r₁.length (by simp) r₁ r₂ toks₁ toks₂ f₁' f₂' rfl hr hσ hf₁r hf₂r with
                        ⟨hadd, hph⟩
                      exact ⟨hadd, phPair_append (phPair_of_noFF (xs := [32]) (by decide)) hph⟩
            · rw [breakScan_step_ne32 hb32, breakScan_step_ne32 hb32]
              have hf₁r : r₁.length + 1 ≤ f₁' := by simp at hf₁; omega
              have hf₂r : r₂.length + 1 ≤ f₂' := by simp at hf₂; omega
              rcases ih r₁.length (by simp) r₁ r₂ toks₁ toks₂ f₁' f₂' rfl hr hσ hf₁r hf₂r with
                ⟨hadd, hph⟩
              have hnob : 0xFF ∉ [b] := fun hm => hbff (by simp at hm; exact hm.symm)
              exact ⟨hadd, phPair_append (phPair_of_noFF hnob) hph⟩

theorem breakRule_tokEquiv_any (σ : Nat → Nat) {st₁ st₂ : ParseState}
    (hwf₁ : WFState st₁) (h : TokEquiv σ st₁ st₂) :
    TokEquiv (extendRen σ st₁.tokens.length) (breakRule st₁) (breakRule st₂) := by
  let σ' := extendRen σ st₁.tokens.length
  have hseg' : segsTokEquiv σ' st₁.work st₂.work :=
    segsTokEquiv_congr (fun k hk => (extendRen_lt (hwf₁.1.2 k hk)).symm) h.1
  have hσ : ∀ j, σ' (st₁.tokens.length + j) = st₂.tokens.length + j := fun j => by
    show extendRen σ st₁.tokens.length (st₁.tokens.length + j) = st₂.tokens.length + j
    rw [extendRen_ge (Nat.le_add_right _ _), h.2.1]
  have res := breakScan_phPair_aux σ' (byteForm st₁.work).length (byteForm st₁.work)
    (byteForm st₂.work) st₁.tokens st₂.tokens ((byteForm st₁.work).length + 1)
    ((byteForm st₂.work).length + 1) rfl (segsTokEquiv_imp_phPair hseg') hσ (Nat.le_refl _) (Nat.le_refl _)
  exact tokEquiv_applyByteRule_of_phPair σ' st₁ st₂
    (fun src toks => breakScan src toks (src.length + 1))
    h.2.1 h.2.2.1 h.2.2.2 res.1 res.2

theorem breakRule_shiftEquiv (base : Nat) {st₁ st₂ : ParseState}
    (h : ShiftEquiv base st₁ st₂) :
    ShiftEquiv base (breakRule st₁) (breakRule st₂) := by
  have hσ : ∀ j, base + (st₁.tokens.length + j) = st₂.tokens.length + j := fun j => by
    have := h.2.1; omega
  have res := breakScan_phPair_aux (fun k => base + k) (byteForm st₁.work).length
    (byteForm st₁.work) (byteForm st₂.work) st₁.tokens st₂.tokens
    ((byteForm st₁.work).length + 1) ((byteForm st₂.work).length + 1)
    rfl (segsTokEquiv_imp_phPair h.1) hσ (Nat.le_refl _) (Nat.le_refl _)
  exact shiftEquiv_applyByteRule_of_phPair base st₁ st₂
    (fun src toks => breakScan src toks (src.length + 1)) h res.1 res.2

/-! ### 5.4 `.horiz`, `.separator`, `.clearfloat` -/

private theorem lineScan_phBytes_prefix (ch : Nat) (withSide : Bool) (preN : Nat)
    (rule : String) (hch : ch ≠ 0xFF ∧ ¬ (48 ≤ ch ∧ ch ≤ 57))
    (k : Nat) (tail : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    lineScan ch withSide preN rule (phBytes k ++ tail) toks atStart (fuel + (phBytes k).length) =
      let res := lineScan ch withSide preN rule tail toks false fuel
      (phBytes k ++ res.1, res.2) := by
  have hno : ∀ xs : List Nat, xs ≠ [] → (∀ b ∈ xs, b ≠ ch ∧ b ≠ 10) →
      lineScan ch withSide preN rule (xs ++ tail) toks atStart (fuel + xs.length) =
        let res := lineScan ch withSide preN rule tail toks false fuel
        (xs ++ res.1, res.2) := by
    intro xs
    induction xs generalizing tail toks atStart fuel with
    | nil => intro hne _; exact absurd rfl hne
    | cons x xs' ih =>
        intro _ hxs
        have hx := hxs x List.mem_cons_self
        have hf : fuel + (x :: xs').length = (fuel + xs'.length) + 1 := by simp; omega
        rw [List.cons_append, hf]
        dsimp only [lineScan]
        have hrc0 : runCount (x :: (xs' ++ tail)) ch 0 = 0 := by
          simp [runCount, g3_beq_false_of_ne hx.1]
        rw [hrc0]
        have h4 : decide (4 ≤ 0) = false := rfl
        rw [h4]
        simp only [Bool.and_false, Bool.false_eq_true, ↓reduceIte, g3_beq_false_of_ne hx.2]
        cases xs' with
        | nil => rfl
        | cons y ys =>
            have ih1 := ih tail toks false fuel (by simp)
              (fun b hb => hxs b (List.mem_cons_of_mem _ hb))
            rw [ih1]
            rfl
  apply hno
  · intro h; have := RawBridge.rb_phBytes_length_pos k; simp [h] at this
  · intro b hb
    rcases g3_mem_phBytes_spec hb with rfl | ⟨h1, h2⟩
    · refine ⟨fun heq => hch.1 heq.symm, by omega⟩
    · refine ⟨fun heq => hch.2 (heq ▸ ⟨h1, h2⟩), by omega⟩

private theorem lineEndAfter_of_phPair {σ' : Nat → Nat} {a₁ a₂ : List Nat} (hp : PhPair σ' a₁ a₂) :
    lineEndAfter a₁ = lineEndAfter a₂ := by
  rcases phPair_head_form hp with
    ⟨rfl, rfl⟩ | ⟨k, t₁, t₂, _, h1, h2⟩ | ⟨xs, t₁, t₂, hxne, _, _, h1, h2⟩
  · rfl
  · rw [h1, h2]; simp [phBytes, lineEndAfter]
  · cases xs with
    | nil => exact absurd rfl hxne
    | cons x xs' => rw [h1, h2, List.cons_append, List.cons_append]; rfl

private theorem lineScan_ending_phPair {σ' : Nat → Nat} (withSide : Bool)
    {a₁ a₂ : List Nat} (hp : PhPair σ' a₁ a₂) :
    let m₁ := if withSide then clearfloatEnd a₁
              else if lineEndAfter a₁ then some (a₁, none) else none
    let m₂ := if withSide then clearfloatEnd a₂
              else if lineEndAfter a₂ then some (a₂, none) else none
    (m₁ = none ∧ m₂ = none) ∨
    (∃ rem₁ rem₂ sb, m₁ = some (rem₁, sb) ∧ m₂ = some (rem₂, sb) ∧
      (sb = none ∨ sb = some 62 ∨ sb = some 60) ∧
      PhPair σ' rem₁ rem₂ ∧ rem₁.length ≤ a₁.length ∧ rem₂.length ≤ a₂.length) := by
  dsimp only
  have hlineEnd := lineEndAfter_of_phPair hp
  cases withSide with
  | false =>
      simp only [Bool.false_eq_true, ↓reduceIte, hlineEnd]
      cases lineEndAfter a₂
      · left; exact ⟨rfl, rfl⟩
      · right; exact ⟨a₁, a₂, none, rfl, rfl, Or.inl rfl, hp, Nat.le_refl _, Nat.le_refl _⟩
  | true =>
      simp only [↓reduceIte]
      rcases phPair_head_form hp with
        ⟨rfl, rfl⟩ | ⟨k, t₁, t₂, _, h1, h2⟩ | ⟨xs, t₁, t₂, hxne, hxn, htail, h1, h2⟩
      · right; exact ⟨[], [], none, rfl, rfl, Or.inl rfl, PhPair.nil, Nat.le_refl _, Nat.le_refl _⟩
      · have hc : ∀ m tail, clearfloatEnd (phBytes m ++ tail) = none := fun m tail => by
          simp [phBytes, clearfloatEnd]
        rw [h1, h2, hc k t₁, hc (σ' k) t₂]
        left; exact ⟨rfl, rfl⟩
      · cases xs with
        | nil => exact absurd rfl hxne
        | cons x xs' =>
            have hrp : PhPair σ' (xs' ++ t₁) (xs' ++ t₂) :=
              PhPair.noFF xs' t₁ t₂ (fun hm => hxn (List.mem_cons_of_mem _ hm)) htail
            have hle_tail := lineEndAfter_of_phPair hrp
            rw [h1, h2, List.cons_append, List.cons_append]
            dsimp only [clearfloatEnd]
            rw [hle_tail]
            by_cases hc : ((x == 62 || x == 60) && lineEndAfter (xs' ++ t₂)) = true
            · simp only [hc, ↓reduceIte]
              have hxb : x = 62 ∨ x = 60 := by
                have h1' := (Bool.and_eq_true_iff.mp hc).1
                simpa [Bool.or_eq_true, beq_iff_eq] using h1'
              right
              refine ⟨xs' ++ t₁, xs' ++ t₂, some x, rfl, rfl, ?_, hrp, Nat.le_succ _, Nat.le_succ _⟩
              rcases hxb with rfl | rfl
              · exact Or.inr (Or.inl rfl)
              · exact Or.inr (Or.inr rfl)
            · simp only [hc, Bool.false_eq_true, ↓reduceIte]
              by_cases hx10 : x = 10
              · subst hx10
                simp only [beq_self_eq_true, ↓reduceIte]
                right
                exact ⟨10 :: (xs' ++ t₁), 10 :: (xs' ++ t₂), none, rfl, rfl, Or.inl rfl,
                  PhPair.noFF (10 :: xs') t₁ t₂
                    (fun hm => by simp only [List.mem_cons] at hm; rcases hm with h | h; omega; exact hxn (List.mem_cons_of_mem _ h))
                    htail,
                  Nat.le_refl _, Nat.le_refl _⟩
              · simp [g3_beq_false_of_ne hx10]

private theorem lineScan_phPair_match_step (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (σ' : Nat → Nat) (rem₁ rem₂ : List Nat) (toks₁ toks₂ : List TokenEntry)
    (tokNew : TokenEntry) (f₁' f₂' : Nat)
    (hs0 : σ' toks₁.length = toks₂.length)
    (hrec : (∃ added : List TokenEntry,
        (lineScan ch withSide preN rule rem₁ (toks₁ ++ [tokNew]) true f₁').2 = (toks₁ ++ [tokNew]) ++ added ∧
        (lineScan ch withSide preN rule rem₂ (toks₂ ++ [tokNew]) true f₂').2 = (toks₂ ++ [tokNew]) ++ added) ∧
      PhPair σ' (lineScan ch withSide preN rule rem₁ (toks₁ ++ [tokNew]) true f₁').1
        (lineScan ch withSide preN rule rem₂ (toks₂ ++ [tokNew]) true f₂').1) :
    (∃ added : List TokenEntry,
      (lineScan ch withSide preN rule rem₁ (toks₁ ++ [tokNew]) true f₁').2 = toks₁ ++ added ∧
      (lineScan ch withSide preN rule rem₂ (toks₂ ++ [tokNew]) true f₂').2 = toks₂ ++ added) ∧
    PhPair σ'
      (List.replicate preN 10 ++ phBytes toks₁.length ++ [10, 10] ++
        (lineScan ch withSide preN rule rem₁ (toks₁ ++ [tokNew]) true f₁').1)
      (List.replicate preN 10 ++ phBytes toks₂.length ++ [10, 10] ++
        (lineScan ch withSide preN rule rem₂ (toks₂ ++ [tokNew]) true f₂').1) := by
  rcases hrec with ⟨⟨added, ha1, ha2⟩, hph⟩
  refine ⟨⟨tokNew :: added, ?_, ?_⟩, ?_⟩
  · simpa [List.append_assoc] using ha1
  · simpa [List.append_assoc] using ha2
  · rw [← hs0]
    simp only [List.append_assoc]
    exact phPair_append (phPair_replicate preN 10 (by omega))
      (PhPair.ph toks₁.length _ _ (phPair_append (phPair_of_noFF (xs := [10, 10]) (by decide)) hph))

private theorem lineScan_phPair_aux (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (hch : ch ≠ 0xFF ∧ ¬ (48 ≤ ch ∧ ch ≤ 57) ∧ ch ≠ 10) (σ' : Nat → Nat) :
    ∀ (m : Nat) (bs₁ bs₂ : List Nat) (toks₁ toks₂ : List TokenEntry)
      (atStart : Bool) (f₁ f₂ : Nat),
      bs₁.length = m → PhPair σ' bs₁ bs₂ →
      (∀ j, σ' (toks₁.length + j) = toks₂.length + j) →
      bs₁.length + 1 ≤ f₁ → bs₂.length + 1 ≤ f₂ →
      (∃ added : List TokenEntry,
        (lineScan ch withSide preN rule bs₁ toks₁ atStart f₁).2 = toks₁ ++ added ∧
        (lineScan ch withSide preN rule bs₂ toks₂ atStart f₂).2 = toks₂ ++ added) ∧
      PhPair σ' (lineScan ch withSide preN rule bs₁ toks₁ atStart f₁).1
        (lineScan ch withSide preN rule bs₂ toks₂ atStart f₂).1 := by
  intro m
  induction m using Nat.strongRecOn with
  | ind m ih =>
      intro bs₁ bs₂ toks₁ toks₂ atStart f₁ f₂ hm hp hσ hf₁ hf₂
      subst hm
      cases bs₁ with
      | nil =>
          rcases phPair_head_form hp with ⟨_, rfl⟩ | ⟨k, _, _, _, h1, _⟩ | ⟨xs, _, _, hxne, _, _, h1, _⟩
          · obtain ⟨f₁', rfl⟩ : ∃ f₁', f₁ = f₁' + 1 := ⟨f₁ - 1, by omega⟩
            obtain ⟨f₂', rfl⟩ : ∃ f₂', f₂ = f₂' + 1 := ⟨f₂ - 1, by omega⟩
            exact ⟨⟨[], by simp [lineScan], by simp [lineScan]⟩, PhPair.nil⟩
          · exfalso
            have hlen := congrArg List.length h1
            simp only [List.length_nil, List.length_append] at hlen
            have hpos := RawBridge.rb_phBytes_length_pos k
            omega
          · cases xs with
            | nil => exact absurd rfl hxne
            | cons _ _ => simp at h1
      | cons b r₁ =>
          by_cases hbff : b = 0xFF
          · rcases phPair_head_form hp with
              ⟨h1, _⟩ | ⟨k, tail₁, tail₂, htail, h1, h2⟩ | ⟨xs, _, _, hxne, hxn, _, h1, _⟩
            · cases h1
            · have hpos₁ := RawBridge.rb_phBytes_length_pos k
              have hpos₂ := RawBridge.rb_phBytes_length_pos (σ' k)
              have hle₁ : (phBytes k).length ≤ f₁ := by
                have := congrArg List.length h1; simp only [List.length_append] at this hf₁; omega
              have hle₂ : (phBytes (σ' k)).length ≤ f₂ := by
                have := congrArg List.length h2; simp only [List.length_append] at this hf₂; omega
              have hfe₁ : f₁ = (f₁ - (phBytes k).length) + (phBytes k).length := by omega
              have hfe₂ : f₂ = (f₂ - (phBytes (σ' k)).length) + (phBytes (σ' k)).length := by omega
              rw [h1, h2, hfe₁, hfe₂,
                lineScan_phBytes_prefix ch withSide preN rule ⟨hch.1, hch.2.1⟩,
                lineScan_phBytes_prefix ch withSide preN rule ⟨hch.1, hch.2.1⟩]
              have hlt : tail₁.length < (b :: r₁).length := by
                have := congrArg List.length h1; simp only [List.length_append] at this; omega
              have hrem₁ : tail₁.length + 1 ≤ f₁ - (phBytes k).length := by
                have := congrArg List.length h1; simp only [List.length_append] at this hf₁; omega
              have hrem₂ : tail₂.length + 1 ≤ f₂ - (phBytes (σ' k)).length := by
                have := congrArg List.length h2; simp only [List.length_append] at this hf₂; omega
              rcases ih tail₁.length hlt tail₁ tail₂ toks₁ toks₂ false
                  (f₁ - (phBytes k).length) (f₂ - (phBytes (σ' k)).length) rfl htail hσ hrem₁ hrem₂ with
                ⟨hadd, hph⟩
              exact ⟨hadd, PhPair.ph k _ _ hph⟩
            · exfalso
              cases xs with
              | nil => exact hxne rfl
              | cons x xs' =>
                  simp only [List.cons_append, List.cons.injEq] at h1
                  exact hxn (h1.1 ▸ hbff ▸ List.mem_cons_self)
          · rcases phPair_cons_tail hbff hp with ⟨r₂, rfl, hr⟩
            obtain ⟨f₁', rfl⟩ : ∃ f₁', f₁ = f₁' + 1 := ⟨f₁ - 1, by omega⟩
            obtain ⟨f₂', rfl⟩ : ∃ f₂', f₂ = f₂' + 1 := ⟨f₂ - 1, by omega⟩
            have htw := phPair_takeWhile_stop_ff (fun x => x == ch) (g3_beq_false_of_ne hch.1.symm) hp
            have hrc : runCount (b :: r₁) ch 0 = runCount (b :: r₂) ch 0 := by
              rw [g3_runCount_eq_takeWhile_length, g3_runCount_eq_takeWhile_length, htw.1]
            have hafter_ph : PhPair σ'
                ((b :: r₁).drop (runCount (b :: r₁) ch 0))
                ((b :: r₂).drop (runCount (b :: r₂) ch 0)) := by
              rw [g3_runCount_eq_takeWhile_length, g3_runCount_eq_takeWhile_length,
                Nat.zero_add, Nat.zero_add, g3_drop_takeWhile_length, g3_drop_takeWhile_length]
              exact htw.2.2
            dsimp only [lineScan]
            rw [← hrc]
            by_cases hcond : (atStart && decide (4 ≤ runCount (b :: r₁) ch 0)) = true
            · simp only [hcond, ↓reduceIte]
              have h4 : 4 ≤ runCount (b :: r₁) ch 0 := by
                simp only [Bool.and_eq_true, decide_eq_true_eq] at hcond; exact hcond.2
              have hdrop₁_lt : ((b :: r₁).drop (runCount (b :: r₁) ch 0)).length < (b :: r₁).length := by
                rw [List.length_drop]
                simp only [List.length_cons]
                omega
              have hdrop₂_lt : ((b :: r₂).drop (runCount (b :: r₁) ch 0)).length < (b :: r₂).length := by
                rw [List.length_drop]
                simp only [List.length_cons]
                omega
              rcases lineScan_ending_phPair withSide (by rw [← hrc] at hafter_ph; exact hafter_ph) with
                ⟨hm₁, hm₂⟩ | ⟨rem₁, rem₂, sb, hm₁, hm₂, hsb_vals, hrem_ph, hrem₁_le, hrem₂_le⟩
              · rw [hm₁, hm₂]
                dsimp only
                have hf₁r : r₁.length + 1 ≤ f₁' := by simp at hf₁; omega
                have hf₂r : r₂.length + 1 ≤ f₂' := by simp at hf₂; omega
                rcases ih r₁.length (by simp) r₁ r₂ toks₁ toks₂ (b == 10) f₁' f₂' rfl hr hσ hf₁r hf₂r with
                  ⟨hadd, hph⟩
                have hnob : 0xFF ∉ [b] := fun hm => hbff (by simp at hm; exact hm.symm)
                exact ⟨hadd, phPair_append (phPair_of_noFF hnob) hph⟩
              · rw [hm₁, hm₂]
                dsimp only
                have hf₁rem : rem₁.length + 1 ≤ f₁' := by omega
                have hf₂rem : rem₂.length + 1 ≤ f₂' := by omega
                have hlt_rem : rem₁.length < (b :: r₁).length := by omega
                have hs0 : σ' toks₁.length = toks₂.length := by simpa using hσ 0
                rcases hsb_vals with rfl | rfl | rfl
                · let tokNew : TokenEntry :=
                    { rule := rule, opts := if withSide then [("side".toList, OptVal.null)] else [] }
                  have hσ' : ∀ j, σ' ((toks₁ ++ [tokNew]).length + j) = (toks₂ ++ [tokNew]).length + j := by
                    intro j; simp only [List.length_append, List.length_singleton, Nat.add_assoc]
                    exact hσ (1 + j)
                  exact lineScan_phPair_match_step ch withSide preN rule σ' rem₁ rem₂ toks₁ toks₂ tokNew
                    f₁' f₂' hs0
                    (ih rem₁.length hlt_rem rem₁ rem₂ (toks₁ ++ [tokNew]) (toks₂ ++ [tokNew])
                      true f₁' f₂' rfl hrem_ph hσ' hf₁rem hf₂rem)
                · let tokNew : TokenEntry :=
                    { rule := rule, opts := if withSide then [("side".toList, OptVal.str ">".toList)] else [] }
                  have hσ' : ∀ j, σ' ((toks₁ ++ [tokNew]).length + j) = (toks₂ ++ [tokNew]).length + j := by
                    intro j; simp only [List.length_append, List.length_singleton, Nat.add_assoc]
                    exact hσ (1 + j)
                  exact lineScan_phPair_match_step ch withSide preN rule σ' rem₁ rem₂ toks₁ toks₂ tokNew
                    f₁' f₂' hs0
                    (ih rem₁.length hlt_rem rem₁ rem₂ (toks₁ ++ [tokNew]) (toks₂ ++ [tokNew])
                      true f₁' f₂' rfl hrem_ph hσ' hf₁rem hf₂rem)
                · let tokNew : TokenEntry :=
                    { rule := rule, opts := if withSide then [("side".toList, OptVal.str "<".toList)] else [] }
                  have hσ' : ∀ j, σ' ((toks₁ ++ [tokNew]).length + j) = (toks₂ ++ [tokNew]).length + j := by
                    intro j; simp only [List.length_append, List.length_singleton, Nat.add_assoc]
                    exact hσ (1 + j)
                  exact lineScan_phPair_match_step ch withSide preN rule σ' rem₁ rem₂ toks₁ toks₂ tokNew
                    f₁' f₂' hs0
                    (ih rem₁.length hlt_rem rem₁ rem₂ (toks₁ ++ [tokNew]) (toks₂ ++ [tokNew])
                      true f₁' f₂' rfl hrem_ph hσ' hf₁rem hf₂rem)
            · simp only [hcond, Bool.false_eq_true, ↓reduceIte]
              have hf₁r : r₁.length + 1 ≤ f₁' := by simp at hf₁; omega
              have hf₂r : r₂.length + 1 ≤ f₂' := by simp at hf₂; omega
              rcases ih r₁.length (by simp) r₁ r₂ toks₁ toks₂ (b == 10) f₁' f₂' rfl hr hσ hf₁r hf₂r with
                ⟨hadd, hph⟩
              have hnob : 0xFF ∉ [b] := fun hm => hbff (by simp at hm; exact hm.symm)
              exact ⟨hadd, phPair_append (phPair_of_noFF hnob) hph⟩

private theorem lineRule_tokEquiv_any (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (hch : ch ≠ 0xFF ∧ ¬ (48 ≤ ch ∧ ch ≤ 57) ∧ ch ≠ 10)
    (σ : Nat → Nat) {st₁ st₂ : ParseState}
    (hwf₁ : WFState st₁) (h : TokEquiv σ st₁ st₂) :
    TokEquiv (extendRen σ st₁.tokens.length)
      (applyByteRule st₁ (fun src toks => lineScan ch withSide preN rule src toks true (src.length + 1)))
      (applyByteRule st₂ (fun src toks => lineScan ch withSide preN rule src toks true (src.length + 1))) := by
  let σ' := extendRen σ st₁.tokens.length
  have hseg' : segsTokEquiv σ' st₁.work st₂.work :=
    segsTokEquiv_congr (fun k hk => (extendRen_lt (hwf₁.1.2 k hk)).symm) h.1
  have hσ : ∀ j, σ' (st₁.tokens.length + j) = st₂.tokens.length + j := fun j => by
    show extendRen σ st₁.tokens.length (st₁.tokens.length + j) = st₂.tokens.length + j
    rw [extendRen_ge (Nat.le_add_right _ _), h.2.1]
  have res := lineScan_phPair_aux ch withSide preN rule hch σ' (byteForm st₁.work).length
    (byteForm st₁.work) (byteForm st₂.work) st₁.tokens st₂.tokens true
    ((byteForm st₁.work).length + 1) ((byteForm st₂.work).length + 1)
    rfl (segsTokEquiv_imp_phPair hseg') hσ (Nat.le_refl _) (Nat.le_refl _)
  exact tokEquiv_applyByteRule_of_phPair σ' st₁ st₂
    (fun src toks => lineScan ch withSide preN rule src toks true (src.length + 1))
    h.2.1 h.2.2.1 h.2.2.2 res.1 res.2

private theorem lineRule_shiftEquiv (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (hch : ch ≠ 0xFF ∧ ¬ (48 ≤ ch ∧ ch ≤ 57) ∧ ch ≠ 10)
    (base : Nat) {st₁ st₂ : ParseState}
    (h : ShiftEquiv base st₁ st₂) :
    ShiftEquiv base
      (applyByteRule st₁ (fun src toks => lineScan ch withSide preN rule src toks true (src.length + 1)))
      (applyByteRule st₂ (fun src toks => lineScan ch withSide preN rule src toks true (src.length + 1))) := by
  have hσ : ∀ j, base + (st₁.tokens.length + j) = st₂.tokens.length + j := fun j => by
    have := h.2.1; omega
  have res := lineScan_phPair_aux ch withSide preN rule hch (fun k => base + k)
    (byteForm st₁.work).length (byteForm st₁.work) (byteForm st₂.work) st₁.tokens st₂.tokens true
    ((byteForm st₁.work).length + 1) ((byteForm st₂.work).length + 1)
    rfl (segsTokEquiv_imp_phPair h.1) hσ (Nat.le_refl _) (Nat.le_refl _)
  exact shiftEquiv_applyByteRule_of_phPair base st₁ st₂
    (fun src toks => lineScan ch withSide preN rule src toks true (src.length + 1)) h res.1 res.2

theorem horizRule_tokEquiv_any (σ : Nat → Nat) {st₁ st₂ : ParseState}
    (hwf₁ : WFState st₁) (h : TokEquiv σ st₁ st₂) :
    TokEquiv (extendRen σ st₁.tokens.length) (horizRule st₁) (horizRule st₂) :=
  lineRule_tokEquiv_any 45 false 1 "Horiz" ⟨by omega, by omega, by omega⟩ σ hwf₁ h

theorem horizRule_shiftEquiv (base : Nat) {st₁ st₂ : ParseState}
    (h : ShiftEquiv base st₁ st₂) :
    ShiftEquiv base (horizRule st₁) (horizRule st₂) :=
  lineRule_shiftEquiv 45 false 1 "Horiz" ⟨by omega, by omega, by omega⟩ base h

theorem separatorRule_tokEquiv_any (σ : Nat → Nat) {st₁ st₂ : ParseState}
    (hwf₁ : WFState st₁) (h : TokEquiv σ st₁ st₂) :
    TokEquiv (extendRen σ st₁.tokens.length) (separatorRule st₁) (separatorRule st₂) :=
  lineRule_tokEquiv_any 61 false 1 "Separator" ⟨by omega, by omega, by omega⟩ σ hwf₁ h

theorem separatorRule_shiftEquiv (base : Nat) {st₁ st₂ : ParseState}
    (h : ShiftEquiv base st₁ st₂) :
    ShiftEquiv base (separatorRule st₁) (separatorRule st₂) :=
  lineRule_shiftEquiv 61 false 1 "Separator" ⟨by omega, by omega, by omega⟩ base h

theorem clearfloatRule_tokEquiv_any (σ : Nat → Nat) {st₁ st₂ : ParseState}
    (hwf₁ : WFState st₁) (h : TokEquiv σ st₁ st₂) :
    TokEquiv (extendRen σ st₁.tokens.length) (clearfloatRule st₁) (clearfloatRule st₂) :=
  lineRule_tokEquiv_any 126 true 2 "Clearfloat" ⟨by omega, by omega, by omega⟩ σ hwf₁ h

theorem clearfloatRule_shiftEquiv (base : Nat) {st₁ st₂ : ParseState}
    (h : ShiftEquiv base st₁ st₂) :
    ShiftEquiv base (clearfloatRule st₁) (clearfloatRule st₂) :=
  lineRule_shiftEquiv 126 true 2 "Clearfloat" ⟨by omega, by omega, by omega⟩ base h

/-! ### 5.5 `.center` -/

private theorem centerScan_phBytes_prefix (k : Nat) (tail : List Nat)
    (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    centerScan (phBytes k ++ tail) toks atStart (fuel + (phBytes k).length) =
      let res := centerScan tail toks false fuel
      (phBytes k ++ res.1, res.2) := by
  have hno : ∀ xs : List Nat, xs ≠ [] → (∀ b ∈ xs, b ≠ 61 ∧ b ≠ 10) →
      centerScan (xs ++ tail) toks atStart (fuel + xs.length) =
        let res := centerScan tail toks false fuel
        (xs ++ res.1, res.2) := by
    intro xs
    induction xs generalizing tail toks atStart fuel with
    | nil => intro hne _; exact absurd rfl hne
    | cons x xs' ih =>
        intro _ hxs
        have hx := hxs x List.mem_cons_self
        have hxs' : ∀ b ∈ xs', b ≠ 61 ∧ b ≠ 10 := fun b hb => hxs b (List.mem_cons_of_mem _ hb)
        have hf : fuel + (x :: xs').length = (fuel + xs'.length) + 1 := by simp; omega
        rw [List.cons_append, hf]
        cases xs' with
        | nil =>
            rw [List.nil_append, List.length_nil, Nat.add_zero]
            cases tail with
            | nil => simp [centerScan, g3_beq_false_of_ne hx.2]
            | cons b2 r2 =>
                dsimp only [centerScan]
                simp [g3_beq_false_of_ne hx.1, g3_beq_false_of_ne hx.2]
        | cons y ys =>
            have ih1 := ih tail toks false fuel (by simp) hxs'
            have h61' : (atStart && x == 61 && y == 32) = false := by
              simp [g3_beq_false_of_ne hx.1]
            rw [List.cons_append]
            dsimp only [centerScan]
            rw [h61']
            simp only [Bool.false_eq_true, ↓reduceIte, g3_beq_false_of_ne hx.2]
            simp only [List.cons_append] at ih1 ⊢
            rw [ih1]
  apply hno
  · intro h; have := RawBridge.rb_phBytes_length_pos k; simp [h] at this
  · intro b hb
    rcases g3_mem_phBytes_spec hb with rfl | ⟨h1, h2⟩ <;> omega

private theorem centerScan_step_false {b : Nat} (hb : ¬ (atStart = true ∧ b = 61))
    (r : List Nat) (toks : List TokenEntry) (f : Nat) :
    centerScan (b :: r) toks atStart (f + 1) =
      let res := centerScan r toks (b == 10) f
      (b :: res.1, res.2) := by
  cases r with
  | nil => rfl
  | cons b2 r2 =>
      dsimp only [centerScan]
      have hf : (atStart && b == 61 && b2 == 32) = false := by
        cases atStart <;> by_cases hb61 : b = 61 <;> simp_all
      simp [hf]

private theorem centerScan_step_ne32 {b b2 : Nat} (hb2 : b2 ≠ 32)
    (r : List Nat) (toks : List TokenEntry) (atStart : Bool) (f : Nat) :
    centerScan (b :: b2 :: r) toks atStart (f + 1) =
      let res := centerScan (b2 :: r) toks (b == 10) f
      (b :: res.1, res.2) := by
  simp [centerScan, g3_beq_false_of_ne hb2]

private theorem centerScan_phPair_aux (σ' : Nat → Nat) :
    ∀ (m : Nat) (bs₁ bs₂ : List Nat) (toks₁ toks₂ : List TokenEntry)
      (atStart : Bool) (f₁ f₂ : Nat),
      bs₁.length = m → PhPair σ' bs₁ bs₂ →
      (∀ j, σ' (toks₁.length + j) = toks₂.length + j) →
      bs₁.length + 1 ≤ f₁ → bs₂.length + 1 ≤ f₂ →
      (∃ added : List TokenEntry,
        (centerScan bs₁ toks₁ atStart f₁).2 = toks₁ ++ added ∧
        (centerScan bs₂ toks₂ atStart f₂).2 = toks₂ ++ added) ∧
      PhPair σ' (centerScan bs₁ toks₁ atStart f₁).1 (centerScan bs₂ toks₂ atStart f₂).1 := by
  intro m
  induction m using Nat.strongRecOn with
  | ind m ih =>
      intro bs₁ bs₂ toks₁ toks₂ atStart f₁ f₂ hm hp hσ hf₁ hf₂
      subst hm
      cases bs₁ with
      | nil =>
          rcases phPair_head_form hp with ⟨_, rfl⟩ | ⟨k, _, _, _, h1, _⟩ | ⟨xs, _, _, hxne, _, _, h1, _⟩
          · obtain ⟨f₁', rfl⟩ : ∃ f₁', f₁ = f₁' + 1 := ⟨f₁ - 1, by omega⟩
            obtain ⟨f₂', rfl⟩ : ∃ f₂', f₂ = f₂' + 1 := ⟨f₂ - 1, by omega⟩
            exact ⟨⟨[], by simp [centerScan], by simp [centerScan]⟩, PhPair.nil⟩
          · exfalso
            have hlen := congrArg List.length h1
            simp only [List.length_nil, List.length_append] at hlen
            have hpos := RawBridge.rb_phBytes_length_pos k
            omega
          · cases xs with
            | nil => exact absurd rfl hxne
            | cons _ _ => simp at h1
      | cons b r₁ =>
          by_cases hbff : b = 0xFF
          · rcases phPair_head_form hp with
              ⟨h1, _⟩ | ⟨k, tail₁, tail₂, htail, h1, h2⟩ | ⟨xs, _, _, hxne, hxn, _, h1, _⟩
            · cases h1
            · have hpos₁ := RawBridge.rb_phBytes_length_pos k
              have hpos₂ := RawBridge.rb_phBytes_length_pos (σ' k)
              have hle₁ : (phBytes k).length ≤ f₁ := by
                have := congrArg List.length h1; simp only [List.length_append] at this hf₁; omega
              have hle₂ : (phBytes (σ' k)).length ≤ f₂ := by
                have := congrArg List.length h2; simp only [List.length_append] at this hf₂; omega
              have hfe₁ : f₁ = (f₁ - (phBytes k).length) + (phBytes k).length := by omega
              have hfe₂ : f₂ = (f₂ - (phBytes (σ' k)).length) + (phBytes (σ' k)).length := by omega
              rw [h1, h2, hfe₁, hfe₂, centerScan_phBytes_prefix, centerScan_phBytes_prefix]
              have hlt : tail₁.length < (b :: r₁).length := by
                have := congrArg List.length h1; simp only [List.length_append] at this; omega
              have hrem₁ : tail₁.length + 1 ≤ f₁ - (phBytes k).length := by
                have := congrArg List.length h1; simp only [List.length_append] at this hf₁; omega
              have hrem₂ : tail₂.length + 1 ≤ f₂ - (phBytes (σ' k)).length := by
                have := congrArg List.length h2; simp only [List.length_append] at this hf₂; omega
              rcases ih tail₁.length hlt tail₁ tail₂ toks₁ toks₂ false
                  (f₁ - (phBytes k).length) (f₂ - (phBytes (σ' k)).length) rfl htail hσ hrem₁ hrem₂ with
                ⟨hadd, hph⟩
              exact ⟨hadd, PhPair.ph k _ _ hph⟩
            · exfalso
              cases xs with
              | nil => exact hxne rfl
              | cons x xs' =>
                  simp only [List.cons_append, List.cons.injEq] at h1
                  exact hxn (h1.1 ▸ hbff ▸ List.mem_cons_self)
          · rcases phPair_cons_tail hbff hp with ⟨r₂, rfl, hr⟩
            obtain ⟨f₁', rfl⟩ : ∃ f₁', f₁ = f₁' + 1 := ⟨f₁ - 1, by omega⟩
            obtain ⟨f₂', rfl⟩ : ∃ f₂', f₂ = f₂' + 1 := ⟨f₂ - 1, by omega⟩
            by_cases hhit₁ : atStart = true ∧ b = 61
            · rcases hhit₁ with ⟨rfl, rfl⟩
              rcases phPair_head_form hr with
                ⟨rfl, rfl⟩ | ⟨k, t₁, t₂, _, h1, h2⟩ | ⟨xs, t₁, t₂, hxne, hxn, htail, h1, h2⟩
              · obtain ⟨f₁'', rfl⟩ : ∃ f₁'', f₁' = f₁'' + 1 := ⟨f₁' - 1, by simp at hf₁; omega⟩
                obtain ⟨f₂'', rfl⟩ : ∃ f₂'', f₂' = f₂'' + 1 := ⟨f₂' - 1, by simp at hf₂; omega⟩
                exact ⟨⟨[], by simp [centerScan], by simp [centerScan]⟩, phPair_of_noFF (xs := [61]) (by decide)⟩
              · have hph_head : ∀ m tail, ∃ rest, phBytes m ++ tail = 0xFF :: rest := fun m tail => by
                  simp [phBytes]
                rcases hph_head k t₁ with ⟨s₁, hs₁⟩
                rcases hph_head (σ' k) t₂ with ⟨s₂, hs₂⟩
                rw [h1, hs₁, h2, hs₂]
                rw [centerScan_step_ne32 (by omega), centerScan_step_ne32 (by omega)]
                rw [← hs₁, ← hs₂, ← h1, ← h2]
                have hf₁r : r₁.length + 1 ≤ f₁' := by simp at hf₁; omega
                have hf₂r : r₂.length + 1 ≤ f₂' := by simp at hf₂; omega
                rcases ih r₁.length (by simp) r₁ r₂ toks₁ toks₂ false f₁' f₂' rfl hr hσ hf₁r hf₂r with
                  ⟨hadd, hph⟩
                exact ⟨hadd, phPair_append (phPair_of_noFF (xs := [61]) (by decide)) hph⟩
              · cases xs with
                | nil => exact absurd rfl hxne
                | cons b2 xs' =>
                    rw [h1, h2, List.cons_append, List.cons_append]
                    by_cases hb2_32 : b2 = 32
                    · subst hb2_32
                      have hr'_ph : PhPair σ' (xs' ++ t₁) (xs' ++ t₂) :=
                        PhPair.noFF xs' t₁ t₂ (fun hm => hxn (List.mem_cons_of_mem _ hm)) htail
                      have hsep : ∀ k, ∀ x ∈ phBytes k, (x != 10) = true := by
                        intro k x hx
                        rcases g3_mem_phBytes_spec hx with rfl | ⟨h1', h2'⟩ <;> simp <;> omega
                      obtain ⟨htake_ph, hdrop_ph⟩ := phPair_take_sep (fun x => x != 10) hsep hr'_ph
                      let rem₁ := (xs' ++ t₁).drop ((xs' ++ t₁).takeWhile (fun x => x != 10)).length
                      let rem₂ := (xs' ++ t₂).drop ((xs' ++ t₂).takeWhile (fun x => x != 10)).length
                      have hrem_ph : PhPair σ' rem₁ rem₂ := by
                        change PhPair σ' ((xs' ++ t₁).drop ((xs' ++ t₁).takeWhile (fun x => x != 10)).length)
                          ((xs' ++ t₂).drop ((xs' ++ t₂).takeWhile (fun x => x != 10)).length)
                        rwa [g3_drop_takeWhile_length, g3_drop_takeWhile_length]
                      have htrim := phPair_trimBytes htake_ph
                      have hlen1 : r₁.length = 1 + (xs' ++ t₁).length := by
                        simp only [h1, List.length_cons, List.length_append]; omega
                      have hlen2 : r₂.length = 1 + (xs' ++ t₂).length := by
                        simp only [h2, List.length_cons, List.length_append]; omega
                      have hrem1_le : rem₁.length ≤ (xs' ++ t₁).length := by
                        simp only [rem₁, List.length_drop]; omega
                      have hrem2_le : rem₂.length ≤ (xs' ++ t₂).length := by
                        simp only [rem₂, List.length_drop]; omega
                      have hlt_rem : rem₁.length < (61 :: r₁).length := by
                        simp only [List.length_cons]; omega
                      have hf₁_rem : rem₁.length + 1 ≤ f₁' := by
                        simp only [List.length_cons] at hf₁; omega
                      have hf₂_rem : rem₂.length + 1 ≤ f₂' := by
                        simp only [List.length_cons] at hf₂; omega
                      let startTok : TokenEntry :=
                        { rule := "Center", opts := [("type".toList, OptVal.str "start".toList)] }
                      let endTok : TokenEntry :=
                        { rule := "Center", opts := [("type".toList, OptVal.str "end".toList)] }
                      have hσ' : ∀ j, σ' ((toks₁ ++ [startTok, endTok]).length + j) =
                          (toks₂ ++ [startTok, endTok]).length + j := by
                        intro j
                        simpa [List.length_append, List.length_cons, List.length_nil, Nat.add_assoc] using
                          hσ (2 + j)
                      rcases ih rem₁.length hlt_rem rem₁ rem₂
                          (toks₁ ++ [startTok, endTok]) (toks₂ ++ [startTok, endTok])
                          false f₁' f₂' rfl hrem_ph hσ' hf₁_rem hf₂_rem with
                        ⟨⟨added, ha1, ha2⟩, hph⟩
                      dsimp only [centerScan]
                      simp only [beq_self_eq_true, Bool.and_self, ↓reduceIte]
                      dsimp only [startTok, endTok, rem₁, rem₂] at ha1 ha2 hph
                      have hs0 : σ' toks₁.length = toks₂.length := by simpa using hσ 0
                      have hs1 : σ' (toks₁.length + 1) = toks₂.length + 1 := hσ 1
                      refine ⟨⟨startTok :: endTok :: added, ?_, ?_⟩, ?_⟩
                      · simpa [startTok, endTok, List.append_assoc] using ha1
                      · simpa [startTok, endTok, List.append_assoc] using ha2
                      · change PhPair σ'
                          ([10, 10] ++ phBytes toks₁.length ++ trimBytes ((xs' ++ t₁).takeWhile (fun x => x != 10)) ++
                            phBytes (toks₁.length + 1) ++ [10, 10] ++ _)
                          ([10, 10] ++ phBytes toks₂.length ++ trimBytes ((xs' ++ t₂).takeWhile (fun x => x != 10)) ++
                            phBytes (toks₂.length + 1) ++ [10, 10] ++ _)
                        rw [← hs1]
                        rw [← hs0]
                        simp only [List.append_assoc]
                        exact phPair_append (phPair_of_noFF (xs := [10, 10]) (by decide))
                          (PhPair.ph toks₁.length _ _
                            (phPair_append htrim
                              (PhPair.ph (toks₁.length + 1) _ _
                                (phPair_append (phPair_of_noFF (xs := [10, 10]) (by decide)) hph))))
                    · rw [centerScan_step_ne32 hb2_32, centerScan_step_ne32 hb2_32]
                      have hback₁ : b2 :: (xs' ++ t₁) = r₁ := by simp [h1]
                      have hback₂ : b2 :: (xs' ++ t₂) = r₂ := by simp [h2]
                      rw [hback₁, hback₂]
                      have hf₁r : r₁.length + 1 ≤ f₁' := by simp at hf₁; omega
                      have hf₂r : r₂.length + 1 ≤ f₂' := by simp at hf₂; omega
                      rcases ih r₁.length (by simp) r₁ r₂ toks₁ toks₂ false f₁' f₂' rfl hr hσ hf₁r hf₂r with
                        ⟨hadd, hph⟩
                      exact ⟨hadd, phPair_append (phPair_of_noFF (xs := [61]) (by decide)) hph⟩
            · rw [centerScan_step_false hhit₁, centerScan_step_false hhit₁]
              have hf₁r : r₁.length + 1 ≤ f₁' := by simp at hf₁; omega
              have hf₂r : r₂.length + 1 ≤ f₂' := by simp at hf₂; omega
              rcases ih r₁.length (by simp) r₁ r₂ toks₁ toks₂ (b == 10) f₁' f₂' rfl hr hσ hf₁r hf₂r with
                ⟨hadd, hph⟩
              have hnob : 0xFF ∉ [b] := fun hm => hbff (by simp at hm; exact hm.symm)
              exact ⟨hadd, phPair_append (phPair_of_noFF hnob) hph⟩

theorem centerRule_tokEquiv_any (σ : Nat → Nat) {st₁ st₂ : ParseState}
    (hwf₁ : WFState st₁) (h : TokEquiv σ st₁ st₂) :
    TokEquiv (extendRen σ st₁.tokens.length) (centerRule st₁) (centerRule st₂) := by
  let σ' := extendRen σ st₁.tokens.length
  have hseg' : segsTokEquiv σ' st₁.work st₂.work :=
    segsTokEquiv_congr (fun k hk => (extendRen_lt (hwf₁.1.2 k hk)).symm) h.1
  have hσ : ∀ j, σ' (st₁.tokens.length + j) = st₂.tokens.length + j := fun j => by
    show extendRen σ st₁.tokens.length (st₁.tokens.length + j) = st₂.tokens.length + j
    rw [extendRen_ge (Nat.le_add_right _ _), h.2.1]
  have res := centerScan_phPair_aux σ' (byteForm st₁.work).length (byteForm st₁.work)
    (byteForm st₂.work) st₁.tokens st₂.tokens true
    ((byteForm st₁.work).length + 1) ((byteForm st₂.work).length + 1)
    rfl (segsTokEquiv_imp_phPair hseg') hσ (Nat.le_refl _) (Nat.le_refl _)
  exact tokEquiv_applyByteRule_of_phPair σ' st₁ st₂
    (fun src toks => centerScan src toks true (src.length + 1))
    h.2.1 h.2.2.1 h.2.2.2 res.1 res.2

theorem centerRule_shiftEquiv (base : Nat) {st₁ st₂ : ParseState}
    (h : ShiftEquiv base st₁ st₂) :
    ShiftEquiv base (centerRule st₁) (centerRule st₂) := by
  have hσ : ∀ j, base + (st₁.tokens.length + j) = st₂.tokens.length + j := fun j => by
    have := h.2.1; omega
  have res := centerScan_phPair_aux (fun k => base + k) (byteForm st₁.work).length
    (byteForm st₁.work) (byteForm st₂.work) st₁.tokens st₂.tokens true
    ((byteForm st₁.work).length + 1) ((byteForm st₂.work).length + 1)
    rfl (segsTokEquiv_imp_phPair h.1) hσ (Nat.le_refl _) (Nat.le_refl _)
  exact shiftEquiv_applyByteRule_of_phPair base st₁ st₂
    (fun src toks => centerScan src toks true (src.length + 1)) h res.1 res.2

/-! ### 5.6 Composed Multi-Rule Parse & Render Alpha-Invariance -/

/-- `ShiftEquiv` composition over the 4-rule head prefix of `pipelineFull`. -/
theorem prefix4_shiftEquiv (base : Nat) {st₁ st₂ : ParseState}
    (hwf₁ : WFState st₁) (h : ShiftEquiv base st₁ st₂) (hdoc : st₁.doc = st₂.doc) :
    ShiftEquiv base (runRules [.include, .prefilter, .delimiter, .code] st₁)
      (runRules [.include, .prefilter, .delimiter, .code] st₂) := by
  have h₁ : ShiftEquiv base (applyRule .include st₁) (applyRule .include st₂) :=
    includeRule_shiftEquiv base h hdoc
  have hw₁ : WFState (applyRule .include st₁) := applyRule_include_preserves_wf st₁ hwf₁
  have hfat₁ : st₁.fatal = st₂.fatal := h.2.2.2
  cases hf₁ : st₁.fatal with
  | true =>
      have hf₂ : st₂.fatal = true := hfat₁.symm.trans hf₁
      simpa [runRules, hf₁, hf₂] using h
  | false =>
      have hf₂ : st₂.fatal = false := hfat₁.symm.trans hf₁
      have hs₁ : ShiftEquiv base (applyRule .include st₁) (applyRule .include st₂) := h₁
      have hsub := runRules_shiftEquiv [.prefilter, .delimiter, .code] base
        (fun r hr => by
          rw [List.mem_cons, List.mem_cons, List.mem_singleton] at hr
          rcases hr with rfl | rfl | rfl
          · exact applyRule_prefilter_preserves_wf
          · exact applyRule_delimiter_preserves_wf
          · exact applyRule_code_preserves_wf)
        (fun r hr s₁ s₂ _ hs => by
          rw [List.mem_cons, List.mem_cons, List.mem_singleton] at hr
          rcases hr with rfl | rfl | rfl
          · exact prefilterRule_shiftEquiv base hs
          · exact delimiterRule_shiftEquiv base hs
          · exact codeRule_shiftEquiv base hs)
        hw₁ hs₁
      simpa [runRules, hf₁, hf₂] using hsub

/-- Arbitrary-subset `WFState` + `ShiftEquiv` composition over all 8 doc-independent rules
    covered unconditionally in this file. -/
theorem covered8_wf_and_shiftEquiv (rules : List RuleId)
    (hcov : ∀ r ∈ rules, r ∈
      [.prefilter, .delimiter, .code, .horiz, .separator, .clearfloat, .break, .center])
    (base : Nat) {st₁ st₂ : ParseState}
    (hwf₁ : WFState st₁) (hs : ShiftEquiv base st₁ st₂) :
    WFState (runRules rules st₁) ∧
    ShiftEquiv base (runRules rules st₁) (runRules rules st₂) := by
  have hwf_rules : ∀ r ∈ rules, ∀ s, WFState s → WFState (applyRule r s) := by
    intro r hr s hs'
    have hc := hcov r hr
    simp only [List.mem_cons, List.not_mem_nil, or_false] at hc
    rcases hc with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
    · exact prefilterRule_preserves_wf s hs'
    · exact delimiterRule_preserves_wf s hs'
    · exact codeRule_preserves_wf s hs'
    · exact horizRule_preserves_wf s hs'
    · exact separatorRule_preserves_wf s hs'
    · exact clearfloatRule_preserves_wf s hs'
    · exact breakRule_preserves_wf s hs'
    · exact centerRule_preserves_wf s hs'
  have hsh_rules : ∀ r ∈ rules, ∀ s₁ s₂, WFState s₁ → ShiftEquiv base s₁ s₂ →
      ShiftEquiv base (applyRule r s₁) (applyRule r s₂) := by
    intro r hr s₁ s₂ _ hsh
    have hc := hcov r hr
    simp only [List.mem_cons, List.not_mem_nil, or_false] at hc
    rcases hc with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
    · exact prefilterRule_shiftEquiv base hsh
    · exact delimiterRule_shiftEquiv base hsh
    · exact codeRule_shiftEquiv base hsh
    · exact horizRule_shiftEquiv base hsh
    · exact separatorRule_shiftEquiv base hsh
    · exact clearfloatRule_shiftEquiv base hsh
    · exact breakRule_shiftEquiv base hsh
    · exact centerRule_shiftEquiv base hsh
  exact ⟨runRules_preserves_wf rules hwf_rules st₁ hwf₁,
         runRules_shiftEquiv rules base hwf_rules hsh_rules hwf₁ hs⟩

/-- End-to-end parse-then-render base-shift alpha invariance over any sequence from the
    8 covered non-Email rules (combining `covered8_wf_and_shiftEquiv` with
    `renderWith_alpha_invariant_shift`). -/
theorem covered8_parse_render_shift_invariant
    (dispatch : RenderRuleId → RenderConf → DocState → OptMap → List Nat)
    (conf : RenderConf) (doc : DocState)
    (rules : List RuleId)
    (hcov : ∀ r ∈ rules, r ∈
      [.prefilter, .delimiter, .code, .horiz, .separator, .clearfloat, .break, .center])
    (base : Nat) (st₁ st₂ : ParseState)
    (hwf₁ : WFState st₁) (hs : ShiftEquiv base st₁ st₂)
    (hmirrored : ∀ k (hk : k < (runRules rules st₁).tokens.length),
      TSeg.tok k ∈ (runRules rules st₁).work →
      ∃ rid, renderRuleOfName ((runRules rules st₁).tokens.get ⟨k, hk⟩).rule = some rid)
    (hno_ufffd : (runRules rules st₁).work.any segHasUfffd = false) :
    renderWith dispatch (fun k => (runRules rules st₁).tokens[k]?) conf (runRules rules st₁).work doc =
      renderWith dispatch (fun k => (runRules rules st₂).tokens[k]?) conf (runRules rules st₂).work doc := by
  have hcomp := covered8_wf_and_shiftEquiv rules hcov base hwf₁ hs
  exact renderWith_alpha_invariant_shift dispatch conf doc base
    (runRules rules st₁) (runRules rules st₂) hcomp.1 hcomp.2 hmirrored hno_ufffd

/-! ## Axiom audit -/

#print axioms LeanFtml.tokEquiv_comp
#print axioms LeanFtml.tokEquiv_symm
#print axioms LeanFtml.segsTokEquiv_normSegs
#print axioms LeanFtml.segsTokEquiv_allText_eq
#print axioms LeanFtml.segsTokEquiv_segHasUfffd
#print axioms LeanFtml.shiftEquiv_comp
#print axioms LeanFtml.runRules_shiftEquiv
#print axioms LeanFtml.runRules_tokEquiv_exists
#print axioms LeanFtml.renderSegsLoop_alpha_invariant
#print axioms LeanFtml.renderWith_alpha_invariant
#print axioms LeanFtml.renderWith_alpha_invariant_mirrorEnv
#print axioms LeanFtml.renderWith_alpha_invariant_refSpec
#print axioms LeanFtml.renderWith_alpha_invariant_bijection
#print axioms LeanFtml.renderWith_alpha_invariant_shift
#print axioms LeanFtml.renderWith_ufffd_not_alpha_invariant
#print axioms LeanFtml.codeRule_preserves_wf
#print axioms LeanFtml.pipelineFull_wf_prefix4
#print axioms LeanFtml.reachableState_prefix4
#print axioms LeanFtml.segsTokEquiv_imp_phPair
#print axioms LeanFtml.phPair_imp_parseBytes_segsTokEquiv
#print axioms LeanFtml.phPair_trimBytes
#print axioms LeanFtml.delimiterRule_tokEquiv_any
#print axioms LeanFtml.delimiterRule_shiftEquiv
#print axioms LeanFtml.prefilterRule_tokEquiv_any
#print axioms LeanFtml.prefilterRule_shiftEquiv
#print axioms LeanFtml.includeRule_tokEquiv_any
#print axioms LeanFtml.includeRule_shiftEquiv
#print axioms LeanFtml.codeRule_tokEquiv_any
#print axioms LeanFtml.codeRule_shiftEquiv
#print axioms LeanFtml.breakRule_tokEquiv_any
#print axioms LeanFtml.breakRule_shiftEquiv
#print axioms LeanFtml.horizRule_tokEquiv_any
#print axioms LeanFtml.horizRule_shiftEquiv
#print axioms LeanFtml.separatorRule_tokEquiv_any
#print axioms LeanFtml.separatorRule_shiftEquiv
#print axioms LeanFtml.clearfloatRule_tokEquiv_any
#print axioms LeanFtml.clearfloatRule_shiftEquiv
#print axioms LeanFtml.centerRule_tokEquiv_any
#print axioms LeanFtml.centerRule_shiftEquiv
#print axioms LeanFtml.prefix4_shiftEquiv
#print axioms LeanFtml.covered8_wf_and_shiftEquiv
#print axioms LeanFtml.covered8_parse_render_shift_invariant

end LeanFtml
