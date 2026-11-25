/-
  LeanFtml.Proof.F3R1Bundles — G4 progress via R1 `ReachableState.step` + F2 `applyRuleRefWith`.

  What is proved here:
  1. General Tier-1 segment/byte WF preservation (`normSegs_idem`, `parseBytes_wfSegs_of_phSeg`):
     `parseBytes` always emits canonical segments, and any byte list decomposable into `0xFF`-free
     chunks and bounded `phBytes k` (`k < N`) parses to `WFSegs (parseBytes bs) N`.
  2. Unconditional `WFState` preservation (`preserves_wf`) for:
     - `.break` (`breakRule_preserves_wf`)
     - `.horiz` (`horizRule_preserves_wf`)
     - `.separator` (`separatorRule_preserves_wf`)
     - `.clearfloat` (`clearfloatRule_preserves_wf`)
     - `.center` (`centerRule_preserves_wf`)
     - `.include` (existing `includeRule_preserves_wf`)
     - `.prefilter` (existing `prefilterRule_preserves_wf`)
  3. Unconditional `RuleProofBundle` (`breakBundleRefWith : RuleProofBundle (applyRuleRefWith breakProcessRef) .break`),
     combining `applyRule_break_eq_refWith` (Boundary-B `PcreCore` equivalence), `breakRule_preserves_wf`,
     and R1's `ReachableState.step`.
  4. Real-runner `ScopedRuleProofBundle` coverage against `RefApply.applyRuleRef` for `.include`,
     `.prefilter`, `.horiz`, `.separator`, `.clearfloat`, `.center`, and `.comment` (alongside existing
     `.delimiter`, `.list`, and `.break`).
  5. Prefix reachability (`reachableState_prefix3`): `runRules [.include, .prefilter, .delimiter] (ofSource cs)`
     satisfies `ReachableState` unconditionally via `reachableState_runRules`.

  No `sorry`, no `native_decide`, no `bv_decide`, no `ofReduceBool`; all axioms within
  `[propext, Classical.choice, Quot.sound]`.
-/
import LeanFtml.Proof.BundlesWave2
import LeanFtml.Proof.F1Bridges
import LeanFtml.Proof.IncludeRuleProof
import LeanFtml.MiddleRules
import LeanFtml.NextRules

namespace LeanFtml

/-! ## 1. General `normSegs` & `parseBytes` well-formedness infrastructure -/

private inductive CanonSegs : List TSeg → Prop where
  | nil : CanonSegs []
  | text_tok (cs : List Char) (hne : cs ≠ []) (k : Nat) (rest : List TSeg)
      (h : CanonSegs (TSeg.tok k :: rest)) : CanonSegs (TSeg.text cs :: TSeg.tok k :: rest)
  | text_nil (cs : List Char) (hne : cs ≠ []) : CanonSegs [TSeg.text cs]
  | tok (k : Nat) (rest : List TSeg) (h : CanonSegs rest) : CanonSegs (TSeg.tok k :: rest)

private theorem normSegs_canon : ∀ segs : List TSeg, CanonSegs (normSegs segs)
  | [] => .nil
  | TSeg.text [] :: rest => normSegs_canon rest
  | TSeg.text (c :: cs) :: rest => by
      have ih := normSegs_canon rest
      dsimp only [normSegs]
      cases hns : normSegs rest with
      | nil => exact .text_nil (c :: cs) (by simp)
      | cons s rs =>
          rw [hns] at ih
          cases s with
          | text cs' =>
              cases ih with
              | text_tok _ _ k rest' hr =>
                  exact .text_tok ((c :: cs) ++ cs') (by simp) k rest' hr
              | text_nil _ _ =>
                  exact .text_nil ((c :: cs) ++ cs') (by simp)
          | tok k => exact .text_tok (c :: cs) (by simp) k rs ih
  | TSeg.tok k :: rest => .tok k (normSegs rest) (normSegs_canon rest)

private theorem canonSegs_normSegs_eq : ∀ {segs : List TSeg}, CanonSegs segs → normSegs segs = segs
  | _, .nil => rfl
  | _, .text_nil (c :: cs) _ => rfl
  | _, .text_tok (c :: cs) _ k rest hr => by
      have hsub := canonSegs_normSegs_eq hr
      change (match normSegs (TSeg.tok k :: rest) with
        | TSeg.text cs' :: rest' => TSeg.text ((c :: cs) ++ cs') :: rest'
        | rest' => TSeg.text (c :: cs) :: rest') = TSeg.text (c :: cs) :: TSeg.tok k :: rest
      rw [hsub]
  | _, .tok k rest hr => by
      have hsub := canonSegs_normSegs_eq hr
      change TSeg.tok k :: normSegs rest = TSeg.tok k :: rest
      rw [hsub]

theorem normSegs_idem (segs : List TSeg) : normSegs (normSegs segs) = normSegs segs :=
  canonSegs_normSegs_eq (normSegs_canon segs)

private theorem parseBytes_go_canon : ∀ (bs acc : List Nat) (pre : List TSeg) (fuel : Nat),
    CanonSegs (parseBytes.go bs acc pre fuel)
  | [], acc, pre, 0 => normSegs_canon _
  | [], acc, pre, _ + 1 => normSegs_canon _
  | _ :: _, acc, pre, 0 => normSegs_canon _
  | b :: rest, acc, pre, fuel + 1 => by
      dsimp only [parseBytes.go]
      split
      · split
        · exact parseBytes_go_canon _ _ _ fuel
        · exact parseBytes_go_canon _ _ _ fuel
      · exact parseBytes_go_canon _ _ _ fuel

theorem tok_mem_normSegs {k : Nat} : ∀ {segs : List TSeg}, TSeg.tok k ∈ normSegs segs → TSeg.tok k ∈ segs
  | [], h => h
  | TSeg.text [] :: rest, h => List.mem_cons_of_mem _ (tok_mem_normSegs h)
  | TSeg.text (c :: cs) :: rest, h => by
      dsimp only [normSegs] at h
      cases hns : normSegs rest with
      | nil =>
          rw [hns] at h
          simp at h
      | cons s rs =>
          rw [hns] at h
          cases s with
          | text cs' =>
              dsimp only at h
              cases h with
              | tail _ htail =>
                  have hin : TSeg.tok k ∈ normSegs rest := by rw [hns]; exact List.mem_cons_of_mem _ htail
                  exact List.mem_cons_of_mem _ (tok_mem_normSegs hin)
          | tok m =>
              dsimp only at h
              cases h with
              | tail _ htail =>
                  have hin : TSeg.tok k ∈ normSegs rest := by rw [hns]; exact htail
                  exact List.mem_cons_of_mem _ (tok_mem_normSegs hin)
  | TSeg.tok m :: rest, h => by
      dsimp only [normSegs] at h
      cases h with
      | head => exact List.mem_cons_self
      | tail _ htail => exact List.mem_cons_of_mem _ (tok_mem_normSegs htail)

/-- Byte stream decomposition whose every placeholder byte `0xFF` opens a canonical
    `phBytes k` with `k < N`. -/
inductive PhSeg (N : Nat) : List Nat → Prop where
  | nil : PhSeg N []
  | noFF (xs rest : List Nat) (h : 0xFF ∉ xs) (hr : PhSeg N rest) : PhSeg N (xs ++ rest)
  | ph (k : Nat) (hk : k < N) (rest : List Nat) (hr : PhSeg N rest) : PhSeg N (phBytes k ++ rest)

theorem phSeg_mono {M N : Nat} (hmn : M ≤ N) {bs : List Nat} (h : PhSeg M bs) : PhSeg N bs := by
  induction h with
  | nil => exact .nil
  | noFF xs rest hx _ ih => exact .noFF xs rest hx ih
  | ph k hk rest _ ih => exact .ph k (Nat.lt_of_lt_of_le hk hmn) rest ih

theorem phSeg_append {N : Nat} {a b : List Nat} (ha : PhSeg N a) (hb : PhSeg N b) :
    PhSeg N (a ++ b) := by
  induction ha with
  | nil => simpa using hb
  | noFF xs rest hx _ ih => simpa [List.append_assoc] using PhSeg.noFF xs (rest ++ b) hx ih
  | ph k hk rest _ ih => simpa [List.append_assoc] using PhSeg.ph k hk (rest ++ b) ih

theorem phSeg_of_noFF {N : Nat} {xs : List Nat} (h : 0xFF ∉ xs) : PhSeg N xs := by
  simpa using PhSeg.noFF xs [] h .nil

theorem phSeg_replicate {N : Nat} (n ch : Nat) (hch : ch ≠ 0xFF) :
    PhSeg N (List.replicate n ch) :=
  phSeg_of_noFF (fun hm => hch (List.eq_of_mem_replicate hm).symm)

theorem phSeg_of_byteForm {N : Nat} {segs : List TSeg}
    (h : ∀ k, TSeg.tok k ∈ segs → k < N) : PhSeg N (byteForm segs) := by
  induction segs with
  | nil => exact .nil
  | cons s rest ih =>
      have hrest : ∀ k, TSeg.tok k ∈ rest → k < N :=
        fun k hk => h k (List.mem_cons_of_mem _ hk)
      cases s with
      | text cs =>
          have hnoff : 0xFF ∉ cs.flatMap utf8Bytes := by
            intro hm
            rcases List.mem_flatMap.mp hm with ⟨c, _, hc⟩
            exact utf8Bytes_no_ff c hc
          simpa [byteForm, segBytes] using PhSeg.noFF _ (byteForm rest) hnoff (ih hrest)
      | tok k =>
          have hk : k < N := h k List.mem_cons_self
          have hph : phBytes k = segBytes (TSeg.tok k) := rfl
          simpa [byteForm, ← hph] using PhSeg.ph k hk (byteForm rest) (ih hrest)

private theorem parseBytes_go_phSeg {N : Nat} {bs : List Nat} (hp : PhSeg N bs) :
    ∀ (acc : List Nat) (pre : List TSeg) (fuel : Nat),
      0xFF ∉ acc →
      (∀ k, TSeg.tok k ∈ pre → k < N) →
      bs.length + 1 ≤ fuel →
      ∀ m, TSeg.tok m ∈ parseBytes.go bs acc pre fuel → m < N := by
  induction hp with
  | nil =>
      intro acc pre fuel _ hpre _ m hm
      cases fuel with
      | zero =>
          dsimp only [parseBytes.go] at hm
          have h1 := tok_mem_normSegs hm
          rcases List.mem_append.mp h1 with hpre' | hacc
          · exact hpre m hpre'
          · split at hacc <;> simp at hacc
      | succ f =>
          dsimp only [parseBytes.go] at hm
          have h1 := tok_mem_normSegs hm
          rcases List.mem_append.mp h1 with hpre' | hacc
          · exact hpre m hpre'
          · split at hacc <;> simp at hacc
  | noFF xs rest hx _ ih =>
      intro acc pre fuel hacc hpre hf m hm
      rw [List.length_append] at hf
      rw [parseBytes_go_append_no_ff xs rest acc pre fuel hx (by omega)] at hm
      have hacc' : 0xFF ∉ xs.reverse ++ acc := by
        intro hmem
        rcases List.mem_append.mp hmem with h1 | h2
        · exact hx (List.mem_reverse.mp h1)
        · exact hacc h2
      exact ih (xs.reverse ++ acc) pre (fuel - xs.length) hacc' hpre (by omega) m hm
  | ph k hk rest _ ih =>
      intro acc pre fuel _ hpre hf m hm
      rw [List.length_append] at hf
      have hpos : 0 < (phBytes k).length := RawBridge.rb_phBytes_length_pos k
      cases fuel with
      | zero => omega
      | succ f =>
          rw [parseBytes_go_token_step k rest acc pre f] at hm
          have hpre' : ∀ n, TSeg.tok n ∈
              (pre ++ (if acc.isEmpty then [] else [TSeg.text (utf8Decode acc.reverse)]) ++
                [TSeg.tok k]) → n < N := by
            intro n hn
            rcases List.mem_append.mp hn with h1 | h2
            · rcases List.mem_append.mp h1 with hpre1 | hacc1
              · exact hpre n hpre1
              · split at hacc1 <;> simp at hacc1
            · simp only [List.mem_singleton, TSeg.tok.injEq] at h2
              exact h2 ▸ hk
          exact ih [] _ f (by simp) hpre' (by omega) m hm

theorem parseBytes_wfSegs_of_phSeg {N : Nat} {bs : List Nat} (hp : PhSeg N bs) :
    WFSegs (parseBytes bs) N := by
  constructor
  · exact (canonSegs_normSegs_eq (parseBytes_go_canon bs [] [] (bs.length + 1))).symm
  · intro k hk
    exact parseBytes_go_phSeg hp [] [] (bs.length + 1) (by simp) (fun _ h => by cases h)
      (Nat.le_refl _) k hk

/-! ## 2. Generic `applyByteRule` WF lifting & `PhSeg` helpers -/

theorem wfState_applyByteRule (st : ParseState)
    (f : List Nat → List TokenEntry → List Nat × List TokenEntry)
    (hseg : WFSegs (applyByteRule st f).work (applyByteRule st f).tokens.length)
    (hlen : st.tokens.length ≤ (applyByteRule st f).tokens.length)
    (hopts : ∀ t ∈ (applyByteRule st f).tokens,
      WFOptMap (applyByteRule st f).tokens.length t.opts)
    (hwf : WFState st) : WFState (applyByteRule st f) := by
  obtain ⟨-, -, hfoot, hbib, hbibid, hanch, hleads⟩ := hwf
  refine ⟨hseg, hopts, ?_, ?_, ?_, ?_, ?_⟩
  · exact fun bs hbs => lst_wfBytes_mono hlen (hfoot bs hbs)
  · exact fun p hp => ⟨lst_wfBytes_mono hlen (hbib p hp).1, lst_wfBytes_mono hlen (hbib p hp).2⟩
  · exact fun p hp => ⟨lst_wfBytes_mono hlen (hbibid p hp).1, Nat.lt_of_lt_of_le (hbibid p hp).2 hlen⟩
  · exact fun p hp => ⟨lst_wfBytes_mono hlen (hanch p hp).1, lst_wfBytes_mono hlen (hanch p hp).2⟩
  · exact fun bs hbs => lst_wfBytes_mono hlen (hleads bs hbs)

private theorem mem_phBytes_spec {k b : Nat} (hb : b ∈ phBytes k) :
    b = 0xFF ∨ (48 ≤ b ∧ b ≤ 57) := by
  simp only [phBytes, List.mem_append, List.mem_singleton] at hb
  rcases hb with (rfl | hd) | rfl
  · exact Or.inl rfl
  · exact Or.inr (RawBridge.rb_toString_digit_bytes k b hd)
  · exact Or.inl rfl

private theorem mem_of_mem_dropWhile {α : Type} {p : α → Bool} {a : α} {xs : List α}
    (h : a ∈ xs.dropWhile p) : a ∈ xs := by
  induction xs with
  | nil => simp at h
  | cons x xs' ih =>
      dsimp only [List.dropWhile] at h
      split at h
      · exact List.mem_cons_of_mem _ (ih h)
      · exact h

private theorem mem_of_mem_takeWhile {α : Type} {p : α → Bool} {a : α} {xs : List α}
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

private theorem length_takeWhile_le {α : Type} (p : α → Bool) (xs : List α) :
    (xs.takeWhile p).length ≤ xs.length := by
  induction xs with
  | nil => simp
  | cons x xs' ih =>
      simp only [List.takeWhile]
      split <;> simp [List.length_cons] <;> omega

private theorem phSeg_head_form {N : Nat} {src : List Nat} (hp : PhSeg N src) :
    src = [] ∨
    (∃ k < N, ∃ rest, PhSeg N rest ∧ src = phBytes k ++ rest) ∨
    (∃ xs rest, xs ≠ [] ∧ 0xFF ∉ xs ∧ PhSeg N rest ∧ src = xs ++ rest) := by
  induction hp with
  | nil => left; rfl
  | ph k hk rest hrest _ =>
      right; left
      exact ⟨k, hk, rest, hrest, rfl⟩
  | noFF xs rest hx hrest ih =>
      cases xs with
      | nil => simpa using ih
      | cons x xs' =>
          right; right
          exact ⟨x :: xs', rest, by simp, hx, hrest, rfl⟩

private theorem phSeg_cons_tail {N b : Nat} {r : List Nat}
    (hb : b ≠ 0xFF) (hp : PhSeg N (b :: r)) : PhSeg N r := by
  rcases phSeg_head_form hp with h | ⟨k, _, rest, _, heq⟩ | ⟨xs, rest, hxne, hxn, hrest, heq⟩
  · cases h
  · exfalso
    have h0 : (b :: r).head? = (phBytes k ++ rest).head? := congrArg List.head? heq
    have hph : (phBytes k ++ rest).head? = some 0xFF := by simp [phBytes]
    rw [hph] at h0
    simp only [List.head?_cons, Option.some.injEq] at h0
    exact hb h0
  · cases xs with
    | nil => exact absurd rfl hxne
    | cons x xs' =>
        simp only [List.cons_append, List.cons.injEq] at heq
        rcases heq with ⟨_, rfl⟩
        exact PhSeg.noFF xs' rest (fun hm => hxn (List.mem_cons_of_mem _ hm)) hrest

private theorem dropWhile_append_eq {α : Type} (p : α → Bool) (ys rest : List α) :
    (ys ++ rest).dropWhile p =
      if ys.dropWhile p = [] then rest.dropWhile p else ys.dropWhile p ++ rest := by
  induction ys with
  | nil => simp
  | cons y ys' ih =>
      dsimp only [List.cons_append, List.dropWhile]
      by_cases hpy : p y = true <;> simp [hpy, ih]

private theorem phSeg_dropWhile {N : Nat} (p : Nat → Bool) (hp_ff : p 0xFF = false)
    {bs : List Nat} (hp : PhSeg N bs) : PhSeg N (bs.dropWhile p) := by
  induction hp with
  | nil => exact .nil
  | noFF xs rest hx hrest ih =>
      rw [dropWhile_append_eq p xs rest]
      by_cases he : xs.dropWhile p = []
      · simp [he, ih]
      · simp only [he, ↓reduceIte]
        exact PhSeg.noFF (xs.dropWhile p) rest (fun hm => hx (mem_of_mem_dropWhile hm)) hrest
  | ph k hk rest hrest _ =>
      have hhead : (phBytes k ++ rest).dropWhile p = phBytes k ++ rest := by
        simp only [phBytes, List.cons_append, List.dropWhile, hp_ff, Bool.false_eq_true, ↓reduceIte]
      rw [hhead]
      exact PhSeg.ph k hk rest hrest

private theorem takeWhile_dropWhile_append {α : Type} (p : α → Bool) (ys rest : List α) :
    ((ys ++ rest).takeWhile p =
      if ys.dropWhile p = [] then ys ++ rest.takeWhile p else ys.takeWhile p) ∧
    ((ys ++ rest).dropWhile p =
      if ys.dropWhile p = [] then rest.dropWhile p else ys.dropWhile p ++ rest) := by
  refine ⟨?_, dropWhile_append_eq p ys rest⟩
  induction ys with
  | nil => simp
  | cons y ys' ih =>
      dsimp only [List.cons_append, List.takeWhile, List.dropWhile]
      by_cases hy : p y = true
      · simp only [hy, ↓reduceIte, ih]
        by_cases hdy : ys'.dropWhile p = [] <;> simp [hdy]
      · simp [hy]

private theorem phSeg_take_sep {N : Nat} (p : Nat → Bool)
    (hp_ph : ∀ k, ∀ b ∈ phBytes k, p b = true)
    {bs : List Nat} (hp : PhSeg N bs) :
    PhSeg N (bs.takeWhile p) ∧ PhSeg N (bs.dropWhile p) := by
  induction hp with
  | nil => exact ⟨.nil, .nil⟩
  | noFF xs rest hx hrest ih =>
      obtain ⟨ht, hd⟩ := takeWhile_dropWhile_append p xs rest
      rw [ht, hd]
      by_cases he : xs.dropWhile p = []
      · simp only [he, ↓reduceIte]
        exact ⟨PhSeg.noFF xs (rest.takeWhile p) hx ih.1, ih.2⟩
      · simp only [he, ↓reduceIte]
        exact ⟨phSeg_of_noFF (fun hm => hx (mem_of_mem_takeWhile hm)),
               PhSeg.noFF (xs.dropWhile p) rest (fun hm => hx (mem_of_mem_dropWhile hm)) hrest⟩
  | ph k hk rest hrest ih =>
      have htk : (phBytes k ++ rest).takeWhile p = phBytes k ++ rest.takeWhile p := by
        have : ∀ xs : List Nat, (∀ b ∈ xs, p b = true) →
            (xs ++ rest).takeWhile p = xs ++ rest.takeWhile p := by
          intro xs hxs
          induction xs with
          | nil => simp
          | cons x xs' ihx =>
              simp [hxs x List.mem_cons_self, ihx (fun b hb => hxs b (List.mem_cons_of_mem _ hb))]
        exact this (phBytes k) (hp_ph k)
      have hdr : (phBytes k ++ rest).dropWhile p = rest.dropWhile p := by
        have : ∀ xs : List Nat, (∀ b ∈ xs, p b = true) →
            (xs ++ rest).dropWhile p = rest.dropWhile p := by
          intro xs hxs
          induction xs with
          | nil => simp
          | cons x xs' ihx =>
              simp [hxs x List.mem_cons_self, ihx (fun b hb => hxs b (List.mem_cons_of_mem _ hb))]
        exact this (phBytes k) (hp_ph k)
      rw [htk, hdr]
      exact ⟨PhSeg.ph k hk (rest.takeWhile p) ih.1, ih.2⟩

/-! ## 3. `Break` unconditional `WFState` & `RuleProofBundle` -/

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
                | cons b3 r3 =>
                    simp [breakScan, beq_false_of_ne hx]
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
                  simp [beq_false_of_ne hx]
                rw [hcond]
                simp only [Bool.false_eq_true, ↓reduceIte]
                rw [← hyt]
                have ih1 := ih tail toks fuel (by simp) hxs'
                simp only [List.cons_append, List.length_cons] at ih1 ⊢
                rw [ih1]
  apply hno
  · intro h; have := RawBridge.rb_phBytes_length_pos k; simp [h] at this
  · intro b hb
    rcases mem_phBytes_spec hb with rfl | ⟨h1, h2⟩ <;> omega

private theorem breakScan_toks_le (src : List Nat) (toks : List TokenEntry) (f : Nat) :
    toks.length ≤ (breakScan src toks f).2.length := by
  induction f generalizing src toks with
  | zero => simp [breakScan]
  | succ f ih =>
      cases src with
      | nil => simp [breakScan]
      | cons b1 r1 =>
          cases r1 with
          | nil => simp [breakScan]; exact ih [] toks
          | cons b2 r2 =>
              cases r2 with
              | nil => simp [breakScan]; exact ih [b2] toks
              | cons b3 r3 =>
                  dsimp only [breakScan]
                  split
                  · have h := ih r3 (toks ++ [{ rule := "Break", opts := [] }])
                    simp only [List.length_append, List.length_singleton] at h
                    dsimp only
                    omega
                  · exact ih (b2 :: b3 :: r3) toks

private theorem breakScan_phSeg_aux :
    ∀ (m : Nat) (src : List Nat) (toks : List TokenEntry) (f : Nat),
      src.length = m → PhSeg toks.length src → src.length + 1 ≤ f →
      PhSeg (breakScan src toks f).2.length (breakScan src toks f).1 := by
  intro m
  induction m using Nat.strongRecOn with
  | ind m ih =>
      intro src toks f hm hp hf
      subst hm
      cases src with
      | nil =>
          cases f with
          | zero => simp at hf
          | succ _ => simpa [breakScan] using PhSeg.nil
      | cons b rest =>
          by_cases hbff : b = 0xFF
          · rcases phSeg_head_form hp with h | ⟨k, hk, tail, htail, heq⟩ | ⟨xs, tail, hxne, hxn, _, heq⟩
            · cases h
            · have hpos : (phBytes k).length ≤ (b :: rest).length := by
                have := congrArg List.length heq
                simp only [List.length_append] at this; omega
              have hf_ph : (phBytes k).length ≤ f := by
                have := congrArg List.length heq
                simp only [List.length_append] at this
                omega
              have hf_eq : f = (f - (phBytes k).length) + (phBytes k).length := by omega
              rw [heq, hf_eq, breakScan_phBytes_prefix]
              dsimp only
              have hlt : tail.length < (b :: rest).length := by
                have hposk := RawBridge.rb_phBytes_length_pos k
                have := congrArg List.length heq
                simp only [List.length_append] at this; omega
              have hlen_rem : tail.length + 1 ≤ f - (phBytes k).length := by
                have := congrArg List.length heq
                simp only [List.length_append] at this hf; omega
              have hrec := ih tail.length hlt tail toks (f - (phBytes k).length) rfl htail hlen_rem
              have hle := breakScan_toks_le tail toks (f - (phBytes k).length)
              exact PhSeg.ph k (Nat.lt_of_lt_of_le hk hle) _ hrec
            · exfalso
              cases xs with
              | nil => exact hxne rfl
              | cons x xs' =>
                  simp only [List.cons_append, List.cons.injEq] at heq
                  exact hxn (heq.1 ▸ hbff ▸ List.mem_cons_self)
          · have hrest : PhSeg toks.length rest := phSeg_cons_tail hbff hp
            obtain ⟨f', rfl⟩ : ∃ f', f = f' + 1 := ⟨f - 1, by simp at hf; omega⟩
            cases rest with
            | nil =>
                obtain ⟨f'', rfl⟩ : ∃ f'', f' = f'' + 1 := ⟨f' - 1, by simp at hf; omega⟩
                have hbs : breakScan [b] toks (f'' + 2) = ([b], toks) := rfl
                rw [hbs]
                exact hp
            | cons b2 r2 =>
                cases r2 with
                | nil =>
                    obtain ⟨f'', rfl⟩ : ∃ f'', f' = f'' + 2 := ⟨f' - 2, by simp at hf; omega⟩
                    have hbs : breakScan [b, b2] toks (f'' + 3) = ([b, b2], toks) := rfl
                    rw [hbs]
                    exact hp
                | cons b3 r3 =>
                    dsimp only [breakScan]
                    split
                    · rename_i hhit
                      have hb2_ne : b2 ≠ 0xFF := by
                        simp only [Bool.and_eq_true, beq_iff_eq] at hhit; omega
                      have hb3_ne : b3 ≠ 0xFF := by
                        simp only [Bool.and_eq_true, beq_iff_eq] at hhit; omega
                      have hr2 : PhSeg toks.length (b3 :: r3) := phSeg_cons_tail hb2_ne hrest
                      have hr3 : PhSeg toks.length r3 := phSeg_cons_tail hb3_ne hr2
                      let tokB : TokenEntry := { rule := "Break", opts := [] }
                      have htail : PhSeg (toks ++ [tokB]).length r3 :=
                        phSeg_mono (by simp) hr3
                      have hrec := ih r3.length (by simp; omega) r3 (toks ++ [tokB]) f' rfl htail
                        (by simp at hf; omega)
                      have hle := breakScan_toks_le r3 (toks ++ [tokB]) f'
                      simp only [List.length_append, List.length_singleton] at hle
                      dsimp only [tokB] at hrec hle ⊢
                      have hlt_tok : toks.length <
                          (breakScan r3 (toks ++ [{ rule := "Break", opts := [] }]) f').2.length := by
                        omega
                      change PhSeg _ (phBytes toks.length ++ (breakScan r3 (toks ++ [{ rule := "Break", opts := [] }]) f').1)
                      exact PhSeg.ph toks.length hlt_tok _ hrec
                    · have hnox : 0xFF ∉ [b] := by simp [Ne.symm hbff]
                      have hrec := ih (b2 :: b3 :: r3).length (by simp) (b2 :: b3 :: r3) toks f' rfl hrest
                        (by simp at hf; omega)
                      change PhSeg _ ([b] ++ (breakScan (b2 :: b3 :: r3) toks f').1)
                      exact phSeg_append (phSeg_of_noFF hnox) hrec

/-- **Unconditional WF preservation (`Break`)**. -/
theorem breakRule_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (breakRule st) := by
  have hseg : WFSegs (breakRule st).work (breakRule st).tokens.length := by
    unfold breakRule applyByteRule
    apply parseBytes_wfSegs_of_phSeg
    apply breakScan_phSeg_aux
    · rfl
    · exact phSeg_of_byteForm hwf.1.2
    · exact Nat.le_refl _
  exact wfState_applyByteRule st (fun src toks => breakScan src toks (src.length + 1))
    hseg (breakRule_tokens_length_le st) (breakRule_tokens_wfOptMap st hwf.2.1) hwf

/-- **Unconditional `RuleProofBundle` for `.break` against `applyRuleRefWith breakProcessRef`**,
    combining Boundary-B `PcreCore` equivalence, `breakRule_preserves_wf`, and R1's `ReachableState.step`. -/
theorem breakBundleRefWith :
    RuleProofBundle (applyRuleRefWith breakProcessRef) .break where
  preserves_wf := breakRule_preserves_wf
  eq_ref := applyRule_break_eq_refWith
  reachable_tokens := fun st hwf hr => ReachableState.step .break st hwf hr

/-! ## 4. Generic `lineScan` & `centerScan` WF preservation (`Horiz`, `Separator`, `Clearfloat`, `Center`) -/

private theorem lineScan_tokens_step (ch : Nat) (withSide : Bool) (preN : Nat)
    (rule : String) (hwf_side : withSide = true → ∀ n s,
      WFOptMap n [("side".toList, match s with
        | some 62 => OptVal.str ">".toList
        | some 60 => OptVal.str "<".toList
        | _ => OptVal.null)]) :
    ∀ (f : Nat) (src : List Nat) (toks : List TokenEntry) (atStart : Bool),
      ListTokStep toks (lineScan ch withSide preN rule src toks atStart f).2 := by
  intro f
  induction f with
  | zero =>
      intro src toks atStart
      simp only [lineScan]
      exact listTokStep_refl toks
  | succ f ih =>
      intro src toks atStart
      cases src with
      | nil => simp only [lineScan]; exact listTokStep_refl toks
      | cons b rest =>
          dsimp only [lineScan]
          split
          · split
            · rename_i rem sideB _
              dsimp only
              cases hws : withSide with
              | false =>
                  simp only [Bool.false_eq_true, ↓reduceIte]
                  refine listTokStep_trans ?_
                    (by simp only [hws] at ih; exact ih rem (toks ++ [{ rule := rule, opts := [] }]) true)
                  refine ⟨by simp, fun n _ ht t hm => ?_⟩
                  rcases List.mem_append.mp hm with h1 | h2
                  · exact ht t h1
                  · rw [List.mem_singleton] at h2; subst h2
                    exact wfOptMap_of_noBytes (fun kv hkv _ _ => by cases hkv) n
              | true =>
                  simp only [↓reduceIte]
                  cases hsb : sideB with
                  | none =>
                      refine listTokStep_trans ?_
                        (by simp only [hws] at ih; exact ih rem (toks ++ [{ rule := rule, opts := [("side".toList, OptVal.null)] }]) true)
                      refine ⟨by simp, fun n _ ht t hm => ?_⟩
                      rcases List.mem_append.mp hm with h1 | h2
                      · exact ht t h1
                      · rw [List.mem_singleton] at h2; subst h2
                        simpa [hsb] using hwf_side hws n none
                  | some sb =>
                      by_cases h62 : sb = 62
                      · subst h62
                        refine listTokStep_trans ?_
                          (by simp only [hws] at ih; exact ih rem (toks ++ [{ rule := rule, opts := [("side".toList, OptVal.str ">".toList)] }]) true)
                        refine ⟨by simp, fun n _ ht t hm => ?_⟩
                        rcases List.mem_append.mp hm with h1 | h2
                        · exact ht t h1
                        · rw [List.mem_singleton] at h2; subst h2
                          simpa [hsb] using hwf_side hws n (some 62)
                      · by_cases h60 : sb = 60
                        · subst h60
                          refine listTokStep_trans ?_
                            (by simp only [hws] at ih; exact ih rem (toks ++ [{ rule := rule, opts := [("side".toList, OptVal.str "<".toList)] }]) true)
                          refine ⟨by simp, fun n _ ht t hm => ?_⟩
                          rcases List.mem_append.mp hm with h1 | h2
                          · exact ht t h1
                          · rw [List.mem_singleton] at h2; subst h2
                            simpa [hsb] using hwf_side hws n (some 60)
                        · have hsne62 : sb ≠ 62 := h62
                          have hsne60 : sb ≠ 60 := h60
                          split
                          · exfalso; apply hsne62; injection ‹_›
                          · exfalso; apply hsne60; injection ‹_›
                          · refine listTokStep_trans ?_
                              (by simp only [hws] at ih; exact ih rem (toks ++ [{ rule := rule, opts := [("side".toList, OptVal.null)] }]) true)
                            refine ⟨by simp, fun n _ ht t hm => ?_⟩
                            rcases List.mem_append.mp hm with h1 | h2
                            · exact ht t h1
                            · rw [List.mem_singleton] at h2; subst h2
                              exact wfOptMap_of_noBytes
                                (fun kv hkv _ h => by rw [List.mem_singleton] at hkv; subst hkv; cases h) n
            · exact ih rest toks (b == 10)
          · exact ih rest toks (b == 10)

private theorem noBytes_side_wf (n : Nat) (s : Option Nat) :
    WFOptMap n [("side".toList, match s with
      | some 62 => OptVal.str ">".toList
      | some 60 => OptVal.str "<".toList
      | _ => OptVal.null)] := by
  intro kv hkv
  simp only [List.mem_singleton] at hkv
  subst hkv
  dsimp only [WFOptVal]
  cases s with
  | none => trivial
  | some b =>
      by_cases h62 : b = 62
      · subst h62; trivial
      · by_cases h60 : b = 60
        · subst h60; trivial
        · simp [h62, h60]

theorem horizRule_tokens_length_le (st : ParseState) :
    st.tokens.length ≤ (horizRule st).tokens.length :=
  (lineScan_tokens_step 45 false 1 "Horiz" (fun h => by cases h) _ _ _ _).1

theorem separatorRule_tokens_length_le (st : ParseState) :
    st.tokens.length ≤ (separatorRule st).tokens.length :=
  (lineScan_tokens_step 61 false 1 "Separator" (fun h => by cases h) _ _ _ _).1

theorem clearfloatRule_tokens_length_le (st : ParseState) :
    st.tokens.length ≤ (clearfloatRule st).tokens.length :=
  (lineScan_tokens_step 126 true 2 "Clearfloat" (fun _ => noBytes_side_wf) _ _ _ _).1

private theorem runCount_eq_takeWhile_length (xs : List Nat) (ch acc : Nat) :
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

private theorem drop_takeWhile_length {α : Type} (p : α → Bool) (xs : List α) :
    xs.drop (xs.takeWhile p).length = xs.dropWhile p := by
  induction xs with
  | nil => rfl
  | cons x xs' ih =>
      dsimp only [List.takeWhile, List.dropWhile]
      split
      · simp only [List.length_cons, List.drop_succ_cons, ih]
      · simp

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
          simp [runCount, beq_false_of_ne hx.1]
        rw [hrc0]
        have h4 : decide (4 ≤ 0) = false := rfl
        rw [h4]
        simp only [Bool.and_false, Bool.false_eq_true, ↓reduceIte]
        have hb10 : (x == 10) = false := beq_false_of_ne hx.2
        rw [hb10]
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
    rcases mem_phBytes_spec hb with rfl | ⟨h1, h2⟩
    · refine ⟨fun heq => hch.1 heq.symm, by omega⟩
    · refine ⟨fun heq => hch.2 (heq ▸ ⟨h1, h2⟩), by omega⟩

private theorem clearfloatEnd_phSeg {N : Nat} {bs rem : List Nat} {sb : Option Nat}
    (hp : PhSeg N bs) (h : clearfloatEnd bs = some (rem, sb)) :
    PhSeg N rem ∧ rem.length ≤ bs.length := by
  cases bs with
  | nil =>
      simp only [clearfloatEnd, Option.some.injEq, Prod.mk.injEq] at h
      rcases h with ⟨rfl, _⟩
      exact ⟨.nil, Nat.le_refl _⟩
  | cons b rest =>
      dsimp only [clearfloatEnd] at h
      by_cases h1 : ((b == 62 || b == 60) && lineEndAfter rest) = true
      · simp only [h1, ↓reduceIte, Option.some.injEq, Prod.mk.injEq] at h
        rcases h with ⟨rfl, _⟩
        have hbne : b ≠ 0xFF := by
          have : b = 62 ∨ b = 60 := by
            have := (Bool.and_eq_true_iff.mp h1).1
            simp only [Bool.or_eq_true, beq_iff_eq] at this
            exact this
          rcases this with rfl | rfl <;> omega
        exact ⟨phSeg_cons_tail hbne hp, Nat.le_succ _⟩
      · simp only [h1, Bool.false_eq_true, ↓reduceIte] at h
        split at h
        · simp only [Option.some.injEq, Prod.mk.injEq] at h
          rcases h with ⟨rfl, _⟩
          exact ⟨hp, Nat.le_refl _⟩
        · simp at h

private theorem lineScan_phSeg_aux (ch : Nat) (withSide : Bool) (preN : Nat)
    (rule : String) (hch : ch ≠ 0xFF ∧ ¬ (48 ≤ ch ∧ ch ≤ 57) ∧ ch ≠ 10)
    (hwf_side : withSide = true → ∀ n s,
      WFOptMap n [("side".toList, match s with
        | some 62 => OptVal.str ">".toList
        | some 60 => OptVal.str "<".toList
        | _ => OptVal.null)]) :
    ∀ (m : Nat) (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (f : Nat),
      src.length = m → PhSeg toks.length src → src.length + 1 ≤ f →
      PhSeg (lineScan ch withSide preN rule src toks atStart f).2.length
        (lineScan ch withSide preN rule src toks atStart f).1 := by
  intro m
  induction m using Nat.strongRecOn with
  | ind m ih =>
      intro src toks atStart f hm hp hf
      subst hm
      cases src with
      | nil =>
          cases f with
          | zero => simp at hf
          | succ _ => simpa [lineScan] using PhSeg.nil
      | cons b rest =>
          by_cases hbff : b = 0xFF
          · rcases phSeg_head_form hp with h | ⟨k, hk, tail, htail, heq⟩ | ⟨xs, tail, hxne, hxn, _, heq⟩
            · cases h
            · have hpos : (phBytes k).length ≤ (b :: rest).length := by
                have := congrArg List.length heq
                simp only [List.length_append] at this; omega
              have hf_ph : (phBytes k).length ≤ f := Nat.le_trans hpos (Nat.le_trans (Nat.le_succ _) hf)
              have hf_eq : f = (f - (phBytes k).length) + (phBytes k).length := by omega
              rw [heq, hf_eq, lineScan_phBytes_prefix ch withSide preN rule ⟨hch.1, hch.2.1⟩ k tail toks atStart]
              dsimp only
              have hlt : tail.length < (b :: rest).length := by
                have hposk := RawBridge.rb_phBytes_length_pos k
                have := congrArg List.length heq
                simp only [List.length_append] at this; omega
              have hlen_rem : tail.length + 1 ≤ f - (phBytes k).length := by
                have := congrArg List.length heq
                simp only [List.length_append] at this hf; omega
              have hrec := ih tail.length hlt tail toks false (f - (phBytes k).length) rfl htail hlen_rem
              have hle := (lineScan_tokens_step ch withSide preN rule hwf_side
                (f - (phBytes k).length) tail toks false).1
              exact PhSeg.ph k (Nat.lt_of_lt_of_le hk hle) _ hrec
            · exfalso
              cases xs with
              | nil => exact hxne rfl
              | cons x xs' =>
                  simp only [List.cons_append, List.cons.injEq] at heq
                  exact hxn (heq.1 ▸ hbff ▸ List.mem_cons_self)
          · have hrest : PhSeg toks.length rest := phSeg_cons_tail hbff hp
            obtain ⟨f', rfl⟩ : ∃ f', f = f' + 1 := ⟨f - 1, by simp at hf; omega⟩
            dsimp only [lineScan]
            split
            · rename_i hcond
              have h4 : 4 ≤ runCount (b :: rest) ch 0 := by
                simp only [Bool.and_eq_true, decide_eq_true_eq] at hcond
                exact hcond.2
              have hafter : (b :: rest).drop (runCount (b :: rest) ch 0) =
                  (b :: rest).dropWhile (fun x => x == ch) := by
                rw [runCount_eq_takeWhile_length, Nat.zero_add, drop_takeWhile_length]
              have hdrop_ph : PhSeg toks.length ((b :: rest).drop (runCount (b :: rest) ch 0)) := by
                rw [hafter]
                exact phSeg_dropWhile (fun x => x == ch) (beq_false_of_ne hch.1.symm) hp
              have hdrop_lt : ((b :: rest).drop (runCount (b :: rest) ch 0)).length < (b :: rest).length := by
                rw [List.length_drop]
                simp only [List.length_cons]
                have hrc : runCount (b :: rest) ch 0 ≤ (b :: rest).length := by
                  rw [runCount_eq_takeWhile_length, Nat.zero_add]
                  exact length_takeWhile_le _ _
                omega
              split
              · rename_i rem sideB hm_end
                have ⟨hrem_ph, hrem_le⟩ : PhSeg toks.length rem ∧
                    rem.length ≤ ((b :: rest).drop (runCount (b :: rest) ch 0)).length := by
                  split at hm_end
                  · exact clearfloatEnd_phSeg hdrop_ph hm_end
                  · split at hm_end
                    · simp only [Option.some.injEq, Prod.mk.injEq] at hm_end
                      rcases hm_end with ⟨rfl, _⟩
                      exact ⟨hdrop_ph, Nat.le_refl _⟩
                    · simp at hm_end
                let rem_clear := hm_end
                clear rem_clear hm_end
                let sideVal : OptVal := match sideB with
                  | some 62 => OptVal.str ">".toList
                  | some 60 => OptVal.str "<".toList
                  | _ => OptVal.null
                let tokNew : TokenEntry :=
                  { rule := rule, opts := if withSide then [("side".toList, sideVal)] else [] }
                have htail_ph : PhSeg (toks ++ [tokNew]).length rem := phSeg_mono (by simp) hrem_ph
                have hrec := ih rem.length (by omega) rem (toks ++ [tokNew]) true f' rfl htail_ph
                  (by omega)
                have hle := (lineScan_tokens_step ch withSide preN rule hwf_side f' rem (toks ++ [tokNew]) true).1
                simp only [List.length_append, List.length_singleton] at hle
                have hlt_tok : toks.length < (lineScan ch withSide preN rule rem (toks ++ [tokNew]) true f').2.length := by
                  omega
                dsimp only
                dsimp only [tokNew, sideVal] at hlt_tok hrec ⊢
                simp only [List.append_assoc]
                exact phSeg_append (phSeg_replicate preN 10 (by omega))
                  (PhSeg.ph toks.length hlt_tok _
                    (phSeg_append (phSeg_of_noFF (xs := [10, 10]) (by decide)) hrec))
              · have hrec := ih rest.length (by simp) rest toks (b == 10) f' rfl hrest
                  (by simp at hf; omega)
                have hno : 0xFF ∉ [b] := by simp [Ne.symm hbff]
                dsimp only
                change PhSeg _ ([b] ++ (lineScan ch withSide preN rule rest toks (b == 10) f').1)
                exact phSeg_append (phSeg_of_noFF hno) hrec
            · have hrec := ih rest.length (by simp) rest toks (b == 10) f' rfl hrest
                (by simp at hf; omega)
              have hno : 0xFF ∉ [b] := by simp [Ne.symm hbff]
              dsimp only
              change PhSeg _ ([b] ++ (lineScan ch withSide preN rule rest toks (b == 10) f').1)
              exact phSeg_append (phSeg_of_noFF hno) hrec

theorem horizRule_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (horizRule st) := by
  have hseg : WFSegs (horizRule st).work (horizRule st).tokens.length := by
    unfold horizRule applyByteRule
    apply parseBytes_wfSegs_of_phSeg
    exact lineScan_phSeg_aux 45 false 1 "Horiz" ⟨by omega, by omega, by omega⟩
      (fun h => by cases h) _ _ _ true _ rfl (phSeg_of_byteForm hwf.1.2) (Nat.le_refl _)
  have hopts : ∀ t ∈ (horizRule st).tokens, WFOptMap (horizRule st).tokens.length t.opts :=
    (lineScan_tokens_step 45 false 1 "Horiz" (fun h => by cases h) _ _ _ _).2 _
      (Nat.le_refl _) (fun t ht => wfOptMap_mono (horizRule_tokens_length_le st) (hwf.2.1 t ht))
  exact wfState_applyByteRule st (fun src toks => lineScan 45 false 1 "Horiz" src toks true (src.length + 1))
    hseg (horizRule_tokens_length_le st) hopts hwf

theorem separatorRule_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (separatorRule st) := by
  have hseg : WFSegs (separatorRule st).work (separatorRule st).tokens.length := by
    unfold separatorRule applyByteRule
    apply parseBytes_wfSegs_of_phSeg
    exact lineScan_phSeg_aux 61 false 1 "Separator" ⟨by omega, by omega, by omega⟩
      (fun h => by cases h) _ _ _ true _ rfl (phSeg_of_byteForm hwf.1.2) (Nat.le_refl _)
  have hopts : ∀ t ∈ (separatorRule st).tokens, WFOptMap (separatorRule st).tokens.length t.opts :=
    (lineScan_tokens_step 61 false 1 "Separator" (fun h => by cases h) _ _ _ _).2 _
      (Nat.le_refl _) (fun t ht => wfOptMap_mono (separatorRule_tokens_length_le st) (hwf.2.1 t ht))
  exact wfState_applyByteRule st (fun src toks => lineScan 61 false 1 "Separator" src toks true (src.length + 1))
    hseg (separatorRule_tokens_length_le st) hopts hwf

theorem clearfloatRule_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (clearfloatRule st) := by
  have hseg : WFSegs (clearfloatRule st).work (clearfloatRule st).tokens.length := by
    unfold clearfloatRule applyByteRule
    apply parseBytes_wfSegs_of_phSeg
    exact lineScan_phSeg_aux 126 true 2 "Clearfloat" ⟨by omega, by omega, by omega⟩
      (fun _ => noBytes_side_wf) _ _ _ true _ rfl (phSeg_of_byteForm hwf.1.2) (Nat.le_refl _)
  have hopts : ∀ t ∈ (clearfloatRule st).tokens, WFOptMap (clearfloatRule st).tokens.length t.opts :=
    (lineScan_tokens_step 126 true 2 "Clearfloat" (fun _ => noBytes_side_wf) _ _ _ _).2 _
      (Nat.le_refl _) (fun t ht => wfOptMap_mono (clearfloatRule_tokens_length_le st) (hwf.2.1 t ht))
  exact wfState_applyByteRule st (fun src toks => lineScan 126 true 2 "Clearfloat" src toks true (src.length + 1))
    hseg (clearfloatRule_tokens_length_le st) hopts hwf

/-! ### `Center` unconditional `WFState` preservation -/

private theorem centerScan_tokens_step :
    ∀ (f : Nat) (src : List Nat) (toks : List TokenEntry) (atStart : Bool),
      ListTokStep toks (centerScan src toks atStart f).2 := by
  intro f
  induction f with
  | zero => intro src toks atStart; simp only [centerScan]; exact listTokStep_refl toks
  | succ f ih =>
      intro src toks atStart
      cases src with
      | nil => simp only [centerScan]; exact listTokStep_refl toks
      | cons b rest =>
          cases rest with
          | nil => simp only [centerScan]; exact ih [] toks (b == 10)
          | cons b2 rest' =>
              dsimp only [centerScan]
              split
              · let startTok : TokenEntry :=
                  { rule := "Center", opts := [("type".toList, OptVal.str "start".toList)] }
                let endTok : TokenEntry :=
                  { rule := "Center", opts := [("type".toList, OptVal.str "end".toList)] }
                refine listTokStep_trans ?_
                  (ih (rest'.drop (rest'.takeWhile (fun x => x != 10)).length)
                    (toks ++ [startTok, endTok]) false)
                refine ⟨by simp [List.length_append], fun n _ ht t hm => ?_⟩
                rcases List.mem_append.mp hm with h1 | h2
                · exact ht t h1
                · rcases List.mem_cons.mp h2 with rfl | h3
                  · exact wfOptMap_of_noBytes
                      (fun kv hkv bs h => by rw [List.mem_singleton] at hkv; subst hkv; cases h) n
                  · rw [List.mem_singleton] at h3; subst h3
                    exact wfOptMap_of_noBytes
                      (fun kv hkv bs h => by rw [List.mem_singleton] at hkv; subst hkv; cases h) n
              · exact ih (b2 :: rest') toks (b == 10)

theorem centerRule_tokens_length_le (st : ParseState) :
    st.tokens.length ≤ (centerRule st).tokens.length :=
  (centerScan_tokens_step _ _ _ _).1

private theorem phSeg_rtrim {N : Nat} (p : Nat → Bool)
    (hp_lt : ∀ b, p b = true → b < 48) {bs : List Nat} (hp : PhSeg N bs) :
    PhSeg N (bs.reverse.dropWhile p).reverse := by
  have hp_ff : p 0xFF = false := by
    cases h : p 0xFF with
    | false => rfl
    | true => have := hp_lt 0xFF h; omega
  induction hp with
  | nil => simpa using PhSeg.nil
  | noFF xs rest hx _ ih =>
      rw [List.reverse_append, dropWhile_append_eq p rest.reverse xs.reverse]
      by_cases he : rest.reverse.dropWhile p = []
      · simp only [he, ↓reduceIte]
        apply phSeg_of_noFF
        intro hm
        exact hx (List.mem_reverse.mp (mem_of_mem_dropWhile (List.mem_reverse.mp hm)))
      · simp only [he, ↓reduceIte, List.reverse_append, List.reverse_reverse]
        exact PhSeg.noFF xs _ hx ih
  | ph k hk rest _ ih =>
      rw [List.reverse_append, dropWhile_append_eq p rest.reverse (phBytes k).reverse]
      by_cases he : rest.reverse.dropWhile p = []
      · simp only [he, ↓reduceIte]
        have hph : (phBytes k).reverse.dropWhile p = (phBytes k).reverse := by
          simp only [phBytes, List.append_assoc, List.reverse_append, List.reverse_singleton,
            List.singleton_append, List.dropWhile, hp_ff, Bool.false_eq_true, ↓reduceIte]
        rw [hph, List.reverse_reverse]
        simpa using PhSeg.ph k hk [] .nil
      · simp only [he, ↓reduceIte, List.reverse_append, List.reverse_reverse]
        exact PhSeg.ph k hk _ ih

private theorem trimBytes_phSeg {N : Nat} {bs : List Nat} (hp : PhSeg N bs) :
    PhSeg N (trimBytes bs) := by
  have hlt : ∀ b, isTrimByte b = true → b < 48 := by
    intro b hb
    simp [isTrimByte] at hb
    omega
  have hp_ff : isTrimByte 0xFF = false := by decide
  unfold trimBytes
  exact phSeg_rtrim isTrimByte hlt (phSeg_dropWhile isTrimByte hp_ff hp)

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
            | nil => simp [centerScan, beq_false_of_ne hx.2]
            | cons b2 r2 =>
                dsimp only [centerScan]
                simp [beq_false_of_ne hx.1, beq_false_of_ne hx.2]
        | cons y ys =>
            have ih1 := ih tail toks false fuel (by simp) hxs'
            have h61' : (atStart && x == 61 && y == 32) = false := by
              simp [beq_false_of_ne hx.1]
            rw [List.cons_append]
            dsimp only [centerScan]
            rw [h61']
            simp only [Bool.false_eq_true, ↓reduceIte, beq_false_of_ne hx.2]
            simp only [List.cons_append] at ih1 ⊢
            rw [ih1]
  apply hno
  · intro h; have := RawBridge.rb_phBytes_length_pos k; simp [h] at this
  · intro b hb
    rcases mem_phBytes_spec hb with rfl | ⟨h1, h2⟩ <;> omega

private theorem centerScan_phSeg_aux :
    ∀ (m : Nat) (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (f : Nat),
      src.length = m → PhSeg toks.length src → src.length + 1 ≤ f →
      PhSeg (centerScan src toks atStart f).2.length
        (centerScan src toks atStart f).1 := by
  intro m
  induction m using Nat.strongRecOn with
  | ind m ih =>
      intro src toks atStart f hm hp hf
      subst hm
      cases src with
      | nil =>
          cases f with
          | zero => simp at hf
          | succ _ => simpa [centerScan] using PhSeg.nil
      | cons b rest =>
          by_cases hbff : b = 0xFF
          · rcases phSeg_head_form hp with h | ⟨k, hk, tail, htail, heq⟩ | ⟨xs, tail, hxne, hxn, _, heq⟩
            · cases h
            · have hpos : (phBytes k).length ≤ (b :: rest).length := by
                have := congrArg List.length heq
                simp only [List.length_append] at this; omega
              have hf_ph : (phBytes k).length ≤ f := Nat.le_trans hpos (Nat.le_trans (Nat.le_succ _) hf)
              have hf_eq : f = (f - (phBytes k).length) + (phBytes k).length := by omega
              rw [heq, hf_eq, centerScan_phBytes_prefix k tail toks atStart]
              dsimp only
              have hlt : tail.length < (b :: rest).length := by
                have hposk := RawBridge.rb_phBytes_length_pos k
                have := congrArg List.length heq
                simp only [List.length_append] at this; omega
              have hlen_rem : tail.length + 1 ≤ f - (phBytes k).length := by
                have := congrArg List.length heq
                simp only [List.length_append] at this hf; omega
              have hrec := ih tail.length hlt tail toks false (f - (phBytes k).length) rfl htail hlen_rem
              have hle := (centerScan_tokens_step (f - (phBytes k).length) tail toks false).1
              exact PhSeg.ph k (Nat.lt_of_lt_of_le hk hle) _ hrec
            · exfalso
              cases xs with
              | nil => exact hxne rfl
              | cons x xs' =>
                  simp only [List.cons_append, List.cons.injEq] at heq
                  exact hxn (heq.1 ▸ hbff ▸ List.mem_cons_self)
          · have hrest : PhSeg toks.length rest := phSeg_cons_tail hbff hp
            obtain ⟨f', rfl⟩ : ∃ f', f = f' + 1 := ⟨f - 1, by simp at hf; omega⟩
            cases rest with
            | nil =>
                obtain ⟨f'', rfl⟩ : ∃ f'', f' = f'' + 1 := ⟨f' - 1, by simp at hf; omega⟩
                have hno : 0xFF ∉ [b] := by simp [Ne.symm hbff]
                simpa [centerScan] using phSeg_of_noFF hno
            | cons b2 rest' =>
                dsimp only [centerScan]
                split
                · rename_i hhit
                  have hb2_ne : b2 ≠ 0xFF := by
                    have := (Bool.and_eq_true_iff.mp hhit).2
                    simp only [beq_iff_eq] at this; omega
                  have hrest' : PhSeg toks.length rest' := phSeg_cons_tail hb2_ne hrest
                  have hsep : ∀ k, ∀ x ∈ phBytes k, (x != 10) = true := by
                    intro k x hx
                    rcases mem_phBytes_spec hx with rfl | ⟨h1, h2⟩ <;> simp <;> omega
                  obtain ⟨htake, hdrop0⟩ := phSeg_take_sep (fun x => x != 10) hsep hrest'
                  let rem := rest'.drop (rest'.takeWhile (fun x => x != 10)).length
                  have hdrop : PhSeg toks.length rem := by
                    change PhSeg toks.length (rest'.drop (rest'.takeWhile (fun x => x != 10)).length)
                    rwa [drop_takeWhile_length]
                  have htrim := trimBytes_phSeg htake
                  have hlt_rem : rem.length < (b :: b2 :: rest').length := by
                    simp [rem, List.length_drop]; omega
                  have hf_rem : rem.length + 1 ≤ f' := by
                    simp [rem, List.length_drop] at hf ⊢; omega
                  let startTok : TokenEntry :=
                    { rule := "Center", opts := [("type".toList, OptVal.str "start".toList)] }
                  let endTok : TokenEntry :=
                    { rule := "Center", opts := [("type".toList, OptVal.str "end".toList)] }
                  have htoks_after : PhSeg (toks ++ [startTok, endTok]).length rem :=
                    phSeg_mono (by simp) hdrop
                  have hrec := ih _ hlt_rem _ (toks ++ [startTok, endTok]) false f' rfl htoks_after hf_rem
                  have hle := (centerScan_tokens_step f' rem (toks ++ [startTok, endTok]) false).1
                  simp only [List.length_append, List.length_cons, List.length_nil] at hle
                  have htrim_n := phSeg_mono
                    (show toks.length ≤ (centerScan rem (toks ++ [startTok, endTok]) false f').2.length by omega)
                    htrim
                  have h10 : PhSeg (centerScan rem (toks ++ [startTok, endTok]) false f').2.length ([10, 10] : List Nat) :=
                    phSeg_of_noFF (by decide)
                  have hlt0 : toks.length < (centerScan rem (toks ++ [startTok, endTok]) false f').2.length := by omega
                  have hlt1 : toks.length + 1 < (centerScan rem (toks ++ [startTok, endTok]) false f').2.length := by omega
                  dsimp only
                  change PhSeg _ ([10, 10] ++ phBytes toks.length ++
                    trimBytes (rest'.takeWhile (fun x => x != 10)) ++
                    phBytes (toks.length + 1) ++ [10, 10] ++
                    (centerScan rem (toks ++ [startTok, endTok]) false f').1)
                  simp only [List.append_assoc]
                  exact phSeg_append h10 (PhSeg.ph toks.length hlt0 _
                    (phSeg_append htrim_n (PhSeg.ph (toks.length + 1) hlt1 _
                      (phSeg_append h10 hrec))))
                · have hrec := ih (b2 :: rest').length (by simp) (b2 :: rest') toks (b == 10) f' rfl hrest
                    (by simp at hf; omega)
                  have hno : 0xFF ∉ [b] := by simp [Ne.symm hbff]
                  dsimp only
                  change PhSeg _ ([b] ++ (centerScan (b2 :: rest') toks (b == 10) f').1)
                  exact phSeg_append (phSeg_of_noFF hno) hrec

theorem centerRule_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (centerRule st) := by
  have hseg : WFSegs (centerRule st).work (centerRule st).tokens.length := by
    unfold centerRule applyByteRule
    apply parseBytes_wfSegs_of_phSeg
    exact centerScan_phSeg_aux _ _ _ true _ rfl (phSeg_of_byteForm hwf.1.2) (Nat.le_refl _)
  have hopts : ∀ t ∈ (centerRule st).tokens, WFOptMap (centerRule st).tokens.length t.opts :=
    (centerScan_tokens_step _ _ _ _).2 _ (Nat.le_refl _)
      (fun t ht => wfOptMap_mono (centerRule_tokens_length_le st) (hwf.2.1 t ht))
  exact wfState_applyByteRule st (fun src toks => centerScan src toks true (src.length + 1))
    hseg (centerRule_tokens_length_le st) hopts hwf

/-! ## 5. Scoped `RuleProofBundle`s against real `RefApply.applyRuleRef` & prefix reachability -/

theorem includeScopedBundleRef :
    ScopedRuleProofBundle applyRuleRef
      (fun st => includeRule st = st ∧ (refWork .include st).2 = []) .include where
  preserves_wf := fun st hwf hp => by
    rw [show applyRule .include st = includeRule st from rfl, hp.1]
    exact hwf
  eq_ref := fun st _ hp => by
    rw [show applyRule .include st = includeRule st from rfl, hp.1,
        applyRuleRef_of_no_claims .include st hp.2]
  reachable_tokens := fun st hwf _ hr => ReachableState.step .include st hwf hr

theorem prefilterScopedBundleRef :
    ScopedRuleProofBundle applyRuleRef
      (fun st => prefilterRule st = st) .prefilter where
  preserves_wf := fun st hwf hp => by
    rw [show applyRule .prefilter st = prefilterRule st from rfl, hp]
    exact hwf
  eq_ref := fun st _ hp => by
    rw [show applyRule .prefilter st = prefilterRule st from rfl, hp,
        applyRuleRef_of_no_patterns .prefilter st rfl]
  reachable_tokens := fun st hwf _ hr => ReachableState.step .prefilter st hwf hr

theorem horizScopedBundleRef :
    ScopedRuleProofBundle applyRuleRef
      (fun st => horizRule st = st ∧ (refWork .horiz st).2 = []) .horiz where
  preserves_wf := fun st hwf _ => by
    simpa [applyRule] using horizRule_preserves_wf st hwf
  eq_ref := fun st _ hp => by
    rw [show applyRule .horiz st = horizRule st from rfl, hp.1,
        applyRuleRef_of_no_claims .horiz st hp.2]
  reachable_tokens := fun st hwf _ hr => ReachableState.step .horiz st hwf hr

theorem separatorScopedBundleRef :
    ScopedRuleProofBundle applyRuleRef
      (fun st => separatorRule st = st ∧ (refWork .separator st).2 = []) .separator where
  preserves_wf := fun st hwf _ => by
    simpa [applyRule] using separatorRule_preserves_wf st hwf
  eq_ref := fun st _ hp => by
    rw [show applyRule .separator st = separatorRule st from rfl, hp.1,
        applyRuleRef_of_no_claims .separator st hp.2]
  reachable_tokens := fun st hwf _ hr => ReachableState.step .separator st hwf hr

theorem clearfloatScopedBundleRef :
    ScopedRuleProofBundle applyRuleRef
      (fun st => clearfloatRule st = st ∧ (refWork .clearfloat st).2 = []) .clearfloat where
  preserves_wf := fun st hwf _ => by
    simpa [applyRule] using clearfloatRule_preserves_wf st hwf
  eq_ref := fun st _ hp => by
    rw [show applyRule .clearfloat st = clearfloatRule st from rfl, hp.1,
        applyRuleRef_of_no_claims .clearfloat st hp.2]
  reachable_tokens := fun st hwf _ hr => ReachableState.step .clearfloat st hwf hr

theorem centerScopedBundleRef :
    ScopedRuleProofBundle applyRuleRef
      (fun st => centerRule st = st ∧ (refWork .center st).2 = []) .center where
  preserves_wf := fun st hwf _ => by
    simpa [applyRule] using centerRule_preserves_wf st hwf
  eq_ref := fun st _ hp => by
    rw [show applyRule .center st = centerRule st from rfl, hp.1,
        applyRuleRef_of_no_claims .center st hp.2]
  reachable_tokens := fun st hwf _ hr => ReachableState.step .center st hwf hr

theorem commentScopedBundleRef :
    ScopedRuleProofBundle applyRuleRef
      (fun st => (findSub (litBytes "[!--") (byteForm st.work)).isNone = true ∧
        (refWork .comment st).2 = []) .comment where
  preserves_wf := fun st hwf hp => by
    have heq : applyRule .comment st = st := by
      change commentRule st = st
      unfold commentRule applyByteRule
      simp only [hp.1, ↓reduceIte, parseBytes_byteForm_id st.work st.tokens.length hwf.1]
    rw [heq]; exact hwf
  eq_ref := fun st hwf hp => by
    have heq : applyRule .comment st = st := by
      change commentRule st = st
      unfold commentRule applyByteRule
      simp only [hp.1, ↓reduceIte, parseBytes_byteForm_id st.work st.tokens.length hwf.1]
    rw [heq, applyRuleRef_of_no_claims .comment st hp.2]
  reachable_tokens := fun st hwf _ hr => ReachableState.step .comment st hwf hr

/-- Prefix reachability via R1's `reachableState_runRules` for `pipelineFull.take 3`. -/
theorem reachableState_prefix3 (cs : List Char) :
    ReachableState (runRules [.include, .prefilter, .delimiter] (ParseState.ofSource cs)) := by
  apply reachableState_runRules
  · intro r hr s hs
    exact applyRule_prefix3_preserves_wf hr s hs
  · exact wfState_ofSource cs
  · exact reachableState_ofSource cs

end LeanFtml
