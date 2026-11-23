import LeanFtml.MiddleRules

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! Universal, axiom-clean theorems for the Horiz / Separator /
Clearfloat shared machinery in `LeanFtml.MiddleRules`. No ground pins:
every theorem below quantifies over arbitrary byte strings and token
tables. F1's `parseBytes_byteForm_id` remains unproved, so no
unconditional `WFState` or `TokEquiv` preservation is asserted here.

## Target 1: runCount — exact leading-run characterization. -/

private theorem runCount_acc (bs : List Nat) (c acc : Nat) :
    runCount bs c acc = acc + runCount bs c 0 := by
  induction bs generalizing acc with
  | nil => simp [runCount]
  | cons b bs ih =>
      by_cases h : b == c
      · simp only [runCount, if_pos h]
        rw [ih (acc + 1), ih 1]
        omega
      · simp [runCount, h]

theorem lr_runCount_eq (bs : List Nat) (c acc : Nat) :
    runCount bs c acc = acc + runCount bs c 0 :=
  runCount_acc bs c acc

private theorem runCount_takeWhile_length (bs : List Nat) (c : Nat) :
    runCount bs c 0 = (bs.takeWhile (fun b => b == c)).length := by
  induction bs with
  | nil => simp [runCount]
  | cons b bs ih =>
      by_cases h : b == c
      · rw [runCount, if_pos h, runCount_acc, ih]
        have hlen : ((b :: bs).takeWhile (fun b => b == c)).length =
            (bs.takeWhile (fun b => b == c)).length + 1 := by
          simp [h]
        rw [hlen]
        omega
      · simp [runCount, h]

theorem lr_runCount_length (bs : List Nat) (c : Nat) :
    runCount bs c 0 = (bs.takeWhile (fun b => b == c)).length :=
  runCount_takeWhile_length bs c

private theorem runCount_take (bs : List Nat) (c : Nat) :
    bs.take (runCount bs c 0) = bs.takeWhile (fun b => b == c) := by
  induction bs with
  | nil => simp [runCount]
  | cons b bs ih =>
      by_cases h : b == c
      · rw [runCount, if_pos h, runCount_acc]
        have htake_eq : 0 + 1 + runCount bs c 0 = Nat.succ (runCount bs c 0) := by omega
        rw [htake_eq]
        change b :: bs.take (runCount bs c 0) = (b :: bs).takeWhile (fun b => b == c)
        rw [ih]
        simp [h]
      · simp [runCount, h]

theorem lr_runCount_prefix (bs : List Nat) (c : Nat) :
    bs.take (runCount bs c 0) = bs.takeWhile (fun b => b == c) :=
  runCount_take bs c

private theorem takeWhile_all_true (p : Nat → Bool) (bs : List Nat) :
    ∀ b ∈ bs.takeWhile p, p b := by
  induction bs with
  | nil => simp
  | cons b rest ih =>
      by_cases h : p b
      · intro x hx
        simp [List.takeWhile, h] at hx
        rcases hx with rfl | hx
        · exact h
        · exact ih x hx
      · simp [List.takeWhile, h]

theorem lr_runCount_all (bs : List Nat) (c : Nat) :
    ∀ b ∈ bs.take (runCount bs c 0), b == c := by
  rw [runCount_take]
  exact takeWhile_all_true (fun b => b == c) bs

private theorem takeWhile_drop_pred_false (p : Nat → Bool) (bs : List Nat) :
    match bs.drop ((bs.takeWhile p).length) with
    | [] => True
    | d :: _ => p d = false := by
  induction bs with
  | nil => simp
  | cons b rest ih =>
      by_cases h : p b
      · simpa [List.takeWhile, h] using ih
      · simp [List.takeWhile, h]

theorem lr_runCount_stops (bs : List Nat) (c : Nat) :
    match bs.drop (runCount bs c 0) with
    | [] => True
    | d :: _ => d ≠ c := by
  rw [runCount_takeWhile_length]
  induction bs with
  | nil => simp
  | cons b rest ih =>
      by_cases h : b == c
      · simpa [List.takeWhile, h] using ih
      · have hb : b ≠ c := by
          intro he
          apply h
          simpa [he]
        simpa [List.takeWhile, h] using hb

private theorem runCount_le_length (bs : List Nat) (c : Nat) :
    runCount bs c 0 ≤ bs.length := by
  induction bs with
  | nil => simp [runCount]
  | cons b bs ih =>
      by_cases h : b == c
      · dsimp [runCount]
        rw [if_pos h, runCount_acc]
        change 1 + runCount bs c 0 ≤ bs.length + 1
        omega
      · simp [runCount, h]

/-! ## Target 2: lineEndAfter iff. -/

theorem lr_lineEndAfter_iff (bs : List Nat) :
    lineEndAfter bs = true ↔ bs = [] ∨ bs.head? = some 10 := by
  cases bs with
  | nil => simp [lineEndAfter]
  | cons b rest =>
      by_cases h : b == 10
      · have hb : b = 10 := eq_of_beq h
        simp [lineEndAfter, hb]
      · have hb : b ≠ 10 := by
          intro he
          apply h
          simpa [he]
        simp [lineEndAfter, hb]

/-! ## Target 3: clearfloatEnd — exact outcome characterization. -/

private theorem lr_beq_and_eq (x y : Bool) : (x && y) = true ↔ x = true ∧ y = true := by
  cases x <;> cases y <;> simp

private theorem lr_sideByte_iff (b : Nat) : (b == 62 || b == 60) = true ↔ b = 62 ∨ b = 60 := by
  constructor
  · intro h
    by_cases h62 : b == 62
    · exact Or.inl (eq_of_beq h62)
    · by_cases h60 : b == 60
      · exact Or.inr (eq_of_beq h60)
      · have : False := by simpa [h62, h60] using h
        exact False.elim this
  · intro h
    rcases h with rfl | rfl <;> simp

theorem lr_clearfloatEnd_empty : clearfloatEnd [] = some ([], none) := rfl

theorem lr_clearfloatEnd_side (b : Nat) (rest : List Nat) :
    clearfloatEnd (b :: rest) = some (rest, some b) ↔
      (b = 62 ∨ b = 60) ∧ lineEndAfter rest = true := by
  by_cases hcond : (b == 62 || b == 60) && lineEndAfter rest
  · have hp := (lr_beq_and_eq _ _).mp hcond
    have hc : (b = 62 ∨ b = 60) ∧ lineEndAfter rest = true :=
      ⟨(lr_sideByte_iff b).mp hp.1, hp.2⟩
    simp [clearfloatEnd, hcond, hc]
  · have hc : ¬ ((b = 62 ∨ b = 60) ∧ lineEndAfter rest = true) := by
      intro hh
      apply hcond
      exact (lr_beq_and_eq _ _).mpr ⟨(lr_sideByte_iff b).mpr hh.1, hh.2⟩
    simp [clearfloatEnd, hcond, hc]

theorem lr_clearfloatEnd_bare (b : Nat) (rest : List Nat) :
    clearfloatEnd (b :: rest) = some (b :: rest, none) ↔ b = 10 := by
  constructor
  · intro h
    by_cases hcond : (b == 62 || b == 60) && lineEndAfter rest
    · have hbad : (rest, some b) = (b :: rest, none) := by
        simpa [clearfloatEnd, hcond] using h
      have hsn : some b = none := congrArg (fun p : List Nat × Option Nat => p.2) hbad
      cases hsn
    · by_cases h10 : b == 10
      · exact eq_of_beq h10
      · have hbad : (none : Option (List Nat × Option Nat)) = some (b :: rest, none) := by
          simpa [clearfloatEnd, hcond, h10] using h
        cases hbad
  · intro hb
    subst b
    simp [clearfloatEnd]

theorem lr_clearfloatEnd_fail (b : Nat) (rest : List Nat) :
    clearfloatEnd (b :: rest) = none ↔
      ¬ ((b = 62 ∨ b = 60) ∧ lineEndAfter rest = true) ∧ b ≠ 10 := by
  constructor
  · intro h
    constructor
    · intro hc
      have hcond : (b == 62 || b == 60) && lineEndAfter rest :=
        (lr_beq_and_eq _ _).mpr ⟨(lr_sideByte_iff b).mpr hc.1, hc.2⟩
      have hbad : (some (rest, some b) : Option (List Nat × Option Nat)) = none := by
        simpa [clearfloatEnd, hcond] using h
      cases hbad
    · intro hb
      subst b
      simp [clearfloatEnd] at h
  · rintro ⟨hcNot, hbne⟩
    by_cases hcond : (b == 62 || b == 60) && lineEndAfter rest
    · have hp := (lr_beq_and_eq _ _).mp hcond
      have hc : (b = 62 ∨ b = 60) ∧ lineEndAfter rest = true :=
        ⟨(lr_sideByte_iff b).mp hp.1, hp.2⟩
      exact (hcNot hc).elim
    · by_cases h10 : b == 10
      · exact (hbne (eq_of_beq h10)).elim
      · simp [clearfloatEnd, hcond, h10]

/-! ## Target 4: lineScan — append-only token table, rule names,
    side options, counts and fuel stability. -/

private def lrSideVal (sb : Option Nat) : OptVal :=
  match sb with
  | some 62 => OptVal.str ">".toList
  | some 60 => OptVal.str "<".toList
  | _ => OptVal.null

private def lrOpts (withSide : Bool) (sb : Option Nat) : OptMap :=
  if withSide then [("side".toList, lrSideVal sb)] else []

private def lrTokenOf (withSide : Bool) (rule : String) (sb : Option Nat) : TokenEntry :=
  { rule := rule, opts := lrOpts withSide sb }

private theorem lineScan_append_aux (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String) :
    ∀ (fuel : Nat) (src : List Nat) (toks : List TokenEntry) (atStart : Bool),
      ∃ (sbs : List (Option Nat)),
        (lineScan ch withSide preN rule src toks atStart fuel).2 =
          toks ++ sbs.map (lrTokenOf withSide rule) := by
  intro fuel
  induction fuel with
  | zero =>
      intro src toks atStart
      exact ⟨[], by simp [lineScan]⟩
  | succ fuel ih =>
      intro src toks atStart
      cases src with
      | nil =>
          exact ⟨[], by simp [lineScan]⟩
      | cons b rest =>
          by_cases hstart : atStart && 4 ≤ runCount (b :: rest) ch 0
          · let afterRun := (b :: rest).drop (runCount (b :: rest) ch 0)
            let ending := if withSide then clearfloatEnd afterRun
                          else if lineEndAfter afterRun then some (afterRun, none) else none
            cases hend : ending with
            | none =>
                rcases ih rest toks (b == 10) with ⟨sbs, hEq⟩
                refine ⟨sbs, ?_⟩
                simpa [lineScan, hstart, afterRun, ending, hend] using hEq
            | some pair =>
                rcases pair with ⟨remaining, sideByte⟩
                rcases ih remaining (toks ++ [lrTokenOf withSide rule sideByte]) true with ⟨sbs, hEq⟩
                refine ⟨sideByte :: sbs, ?_⟩
                simp [lineScan, hstart, afterRun, ending, hend]
                change (lineScan ch withSide preN rule remaining
                    (toks ++ [lrTokenOf withSide rule sideByte]) true fuel).2 =
                  toks ++ (sideByte :: sbs).map (lrTokenOf withSide rule)
                rw [hEq]
                simp [lrTokenOf, List.append_assoc]
          · rcases ih rest toks (b == 10) with ⟨sbs, hEq⟩
            refine ⟨sbs, ?_⟩
            simpa [lineScan, hstart] using hEq

theorem lr_lineScan_append_only (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    (lineScan ch withSide preN rule src toks atStart fuel).2.take toks.length = toks := by
  rcases lineScan_append_aux ch withSide preN rule fuel src toks atStart with ⟨sbs, hEq⟩
  rw [hEq]
  simp [List.take_append_of_le_length (Nat.le_refl toks.length)]

theorem lr_lineScan_claimed_rule (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    ∀ t ∈ (lineScan ch withSide preN rule src toks atStart fuel).2.drop toks.length,
      t.rule = rule := by
  rcases lineScan_append_aux ch withSide preN rule fuel src toks atStart with ⟨sbs, hEq⟩
  rw [hEq]
  rw [List.drop_append_of_le_length (Nat.le_refl toks.length)]
  intro t ht
  simp at ht
  rcases ht with ⟨sb, hsbs, rfl⟩
  simp [lrTokenOf]

theorem lr_lineScan_count_eq (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    ∃ (matchedRuns : Nat),
      (lineScan ch withSide preN rule src toks atStart fuel).2.length =
        toks.length + matchedRuns := by
  rcases lineScan_append_aux ch withSide preN rule fuel src toks atStart with ⟨sbs, hEq⟩
  exact ⟨sbs.length, by rw [hEq]; simp⟩

theorem lr_lineScan_count_mono (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    toks.length ≤ (lineScan ch withSide preN rule src toks atStart fuel).2.length := by
  rcases lineScan_append_aux ch withSide preN rule fuel src toks atStart with ⟨sbs, hEq⟩
  rw [hEq]
  simp

theorem lr_lineScan_opt_shape (ch preN : Nat) (rule : String)
    (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    ∀ t ∈ (lineScan ch true preN rule src toks atStart fuel).2.drop toks.length,
      ∃ v : OptVal, t.opts = [("side".toList, v)] ∧
        (v = OptVal.null ∨ v = OptVal.str ">".toList ∨ v = OptVal.str "<".toList) := by
  rcases lineScan_append_aux ch true preN rule fuel src toks atStart with ⟨sbs, hEq⟩
  rw [hEq]
  rw [List.drop_append_of_le_length (Nat.le_refl toks.length)]
  intro t ht
  simp at ht
  rcases ht with ⟨sb, hsbs, rfl⟩
  refine ⟨lrSideVal sb, ?_, ?_⟩
  · simp [lrTokenOf, lrOpts]
  · cases sb with
    | none => simp [lrSideVal]
    | some n =>
        by_cases h62 : n == 62
        · have hn : n = 62 := eq_of_beq h62
          subst n
          simp [lrSideVal]
        · by_cases h60 : n == 60
          · have hn : n = 60 := eq_of_beq h60
            subst n
            simp [lrSideVal]
          · have hn62 : n ≠ 62 := by intro he; apply h62; rw [he]; rfl
            have hn60 : n ≠ 60 := by intro he; apply h60; rw [he]; rfl
            simp [lrSideVal, hn62, hn60]

theorem lr_lineScan_noSide_opts (ch preN : Nat) (rule : String)
    (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    ∀ t ∈ (lineScan ch false preN rule src toks atStart fuel).2.drop toks.length,
      t.opts = [] := by
  rcases lineScan_append_aux ch false preN rule fuel src toks atStart with ⟨sbs, hEq⟩
  rw [hEq]
  rw [List.drop_append_of_le_length (Nat.le_refl toks.length)]
  intro t ht
  simp at ht
  rcases ht with ⟨sb, hsbs, rfl⟩
  simp [lrTokenOf, lrOpts]

private theorem ending_rem_len_le (withSide : Bool) (bs : List Nat) (rem : List Nat) (sb : Option Nat)
    (h : (if withSide then clearfloatEnd bs
          else if lineEndAfter bs then some (bs, none) else none) = some (rem, sb)) :
    rem.length ≤ bs.length := by
  by_cases hw : withSide
  · simp [hw] at h
    cases bs with
    | nil =>
        simp [clearfloatEnd] at h
        rcases h with ⟨hr, hs⟩
        subst rem; subst sb
        simp
    | cons d ds =>
        by_cases hs : (d == 62 || d == 60) && lineEndAfter ds
        · simp [clearfloatEnd, hs] at h
          rcases h with ⟨hr, hs'⟩
          subst rem; subst sb
          simp
        · by_cases h10 : d == 10
          · simp [clearfloatEnd, hs, h10] at h
            rcases h with ⟨hr, hs'⟩
            subst rem; subst sb
            simp
          · simp [clearfloatEnd, hs, h10] at h
  · simp [hw] at h
    by_cases hend : lineEndAfter bs
    · simp [hend] at h
      rcases h with ⟨hr, hs⟩
      subst rem; subst sb
      simp
    · simp [hend] at h

private theorem lineScan_fuel_stable_aux (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String) :
    ∀ (n : Nat) (src : List Nat), src.length ≤ n →
      ∀ (toks : List TokenEntry) (atStart : Bool) (fuel : Nat),
        src.length + 1 ≤ fuel →
        lineScan ch withSide preN rule src toks atStart fuel =
          lineScan ch withSide preN rule src toks atStart (src.length + 1) := by
  intro n
  induction n with
  | zero =>
      intro src hlen toks atStart fuel hf
      cases src with
      | nil =>
          have hfne : fuel ≠ 0 := by omega
          rcases Nat.exists_eq_succ_of_ne_zero hfne with ⟨f, rfl⟩
          simp [lineScan]
      | cons b rest =>
          simp at hlen
  | succ n ih =>
      intro src hlen toks atStart fuel hf
      cases src with
      | nil =>
          have hfne : fuel ≠ 0 := by omega
          rcases Nat.exists_eq_succ_of_ne_zero hfne with ⟨f, rfl⟩
          simp [lineScan]
      | cons b rest =>
          have hfne : fuel ≠ 0 := by omega
          rcases Nat.exists_eq_succ_of_ne_zero hfne with ⟨f, rfl⟩
          have hf' : rest.length + 1 ≤ f := by
            change (rest.length + 1) + 1 ≤ f + 1 at hf
            omega
          have hlenrest : rest.length ≤ n := by
            change rest.length + 1 ≤ n + 1 at hlen
            omega
          by_cases hstart : atStart && 4 ≤ runCount (b :: rest) ch 0
          · let afterRun := (b :: rest).drop (runCount (b :: rest) ch 0)
            let ending := if withSide then clearfloatEnd afterRun
                          else if lineEndAfter afterRun then some (afterRun, none) else none
            have hrc_ge : 4 ≤ runCount (b :: rest) ch 0 := by
              cases hat : atStart
              · simp [hat] at hstart
              · have hp := hstart
                simp [hat] at hp
                exact hp
            have hrc_le : runCount (b :: rest) ch 0 ≤ (b :: rest).length :=
              runCount_le_length (b :: rest) ch
            cases hend : ending with
            | none =>
                have hstep := ih rest hlenrest toks (b == 10) f hf'
                simp [lineScan, hstart, afterRun, ending, hend]
                rw [hstep]
                simp
            | some pair =>
                rcases pair with ⟨remaining, sideByte⟩
                have hrem_le_after : remaining.length ≤ afterRun.length := by
                  apply ending_rem_len_le withSide afterRun remaining sideByte
                  simpa [ending] using hend
                have hrem_le_rest : remaining.length ≤ rest.length := by
                  simp [afterRun] at hrem_le_after
                  omega
                have hlenrem : remaining.length ≤ n := by omega
                have hfrem : remaining.length + 1 ≤ f := by omega
                have hcanon : remaining.length + 1 ≤ rest.length + 1 := by omega
                have hstep := ih remaining hlenrem (toks ++ [lrTokenOf withSide rule sideByte]) true f hfrem
                have hstepCanon := ih remaining hlenrem (toks ++ [lrTokenOf withSide rule sideByte]) true (rest.length + 1) hcanon
                simp [lineScan, hstart, afterRun, ending, hend]
                change (lineScan ch withSide preN rule remaining
                      (toks ++ [lrTokenOf withSide rule sideByte]) true f).fst =
                    (lineScan ch withSide preN rule remaining
                      (toks ++ [lrTokenOf withSide rule sideByte]) true (rest.length + 1)).fst ∧
                  (lineScan ch withSide preN rule remaining
                      (toks ++ [lrTokenOf withSide rule sideByte]) true f).snd =
                    (lineScan ch withSide preN rule remaining
                      (toks ++ [lrTokenOf withSide rule sideByte]) true (rest.length + 1)).snd
                rw [hstep, ← hstepCanon]
                simp
          · have hstep := ih rest hlenrest toks (b == 10) f hf'
            simp [lineScan, hstart]
            rw [hstep]
            simp

theorem lr_lineScan_fuel_stable (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat)
    (hfuel : src.length + 1 ≤ fuel) :
    lineScan ch withSide preN rule src toks atStart fuel =
      lineScan ch withSide preN rule src toks atStart (src.length + 1) :=
  lineScan_fuel_stable_aux ch withSide preN rule src.length src (Nat.le_refl _) toks atStart fuel hfuel

theorem lr_lineScan_fuel_eq (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (f g : Nat)
    (hf : src.length + 1 ≤ f) (hg : src.length + 1 ≤ g) :
    lineScan ch withSide preN rule src toks atStart f =
      lineScan ch withSide preN rule src toks atStart g := by
  rw [lineScan_fuel_stable_aux ch withSide preN rule src.length src (Nat.le_refl _) toks atStart f hf,
      lineScan_fuel_stable_aux ch withSide preN rule src.length src (Nat.le_refl _) toks atStart g hg]

/-! ## Target 5: the three rule wrappers at ParseState level. -/

theorem lr_horizRule_tokens_append (st : ParseState) :
    (horizRule st).tokens.take st.tokens.length = st.tokens := by
  unfold horizRule applyByteRule
  dsimp
  exact lr_lineScan_append_only 45 false 1 "Horiz" (byteForm st.work) st.tokens true
    ((byteForm st.work).length + 1)

theorem lr_horizRule_new_tokens_rule (st : ParseState) :
    ∀ t ∈ (horizRule st).tokens.drop st.tokens.length, t.rule = "Horiz" := by
  unfold horizRule applyByteRule
  dsimp
  exact lr_lineScan_claimed_rule 45 false 1 "Horiz" (byteForm st.work) st.tokens true
    ((byteForm st.work).length + 1)

theorem lr_separatorRule_tokens_append (st : ParseState) :
    (separatorRule st).tokens.take st.tokens.length = st.tokens := by
  unfold separatorRule applyByteRule
  dsimp
  exact lr_lineScan_append_only 61 false 1 "Separator" (byteForm st.work) st.tokens true
    ((byteForm st.work).length + 1)

theorem lr_separatorRule_new_tokens_rule (st : ParseState) :
    ∀ t ∈ (separatorRule st).tokens.drop st.tokens.length, t.rule = "Separator" := by
  unfold separatorRule applyByteRule
  dsimp
  exact lr_lineScan_claimed_rule 61 false 1 "Separator" (byteForm st.work) st.tokens true
    ((byteForm st.work).length + 1)

theorem lr_clearfloatRule_tokens_append (st : ParseState) :
    (clearfloatRule st).tokens.take st.tokens.length = st.tokens := by
  unfold clearfloatRule applyByteRule
  dsimp
  exact lr_lineScan_append_only 126 true 2 "Clearfloat" (byteForm st.work) st.tokens true
    ((byteForm st.work).length + 1)

theorem lr_clearfloatRule_new_tokens_rule (st : ParseState) :
    ∀ t ∈ (clearfloatRule st).tokens.drop st.tokens.length, t.rule = "Clearfloat" := by
  unfold clearfloatRule applyByteRule
  dsimp
  exact lr_lineScan_claimed_rule 126 true 2 "Clearfloat" (byteForm st.work) st.tokens true
    ((byteForm st.work).length + 1)

theorem lr_horizRule_count_mono (st : ParseState) :
    st.tokens.length ≤ (horizRule st).tokens.length := by
  unfold horizRule applyByteRule
  dsimp
  exact lr_lineScan_count_mono 45 false 1 "Horiz" (byteForm st.work) st.tokens true
    ((byteForm st.work).length + 1)

theorem lr_separatorRule_count_mono (st : ParseState) :
    st.tokens.length ≤ (separatorRule st).tokens.length := by
  unfold separatorRule applyByteRule
  dsimp
  exact lr_lineScan_count_mono 61 false 1 "Separator" (byteForm st.work) st.tokens true
    ((byteForm st.work).length + 1)

theorem lr_clearfloatRule_count_mono (st : ParseState) :
    st.tokens.length ≤ (clearfloatRule st).tokens.length := by
  unfold clearfloatRule applyByteRule
  dsimp
  exact lr_lineScan_count_mono 126 true 2 "Clearfloat" (byteForm st.work) st.tokens true
    ((byteForm st.work).length + 1)

#print axioms lr_runCount_eq
#print axioms lr_runCount_length
#print axioms lr_runCount_prefix
#print axioms lr_runCount_all
#print axioms lr_runCount_stops
#print axioms lr_lineEndAfter_iff
#print axioms lr_clearfloatEnd_empty
#print axioms lr_clearfloatEnd_side
#print axioms lr_clearfloatEnd_bare
#print axioms lr_clearfloatEnd_fail
#print axioms lr_lineScan_append_only
#print axioms lr_lineScan_claimed_rule
#print axioms lr_lineScan_count_eq
#print axioms lr_lineScan_count_mono
#print axioms lr_lineScan_opt_shape
#print axioms lr_lineScan_noSide_opts
#print axioms lr_lineScan_fuel_stable
#print axioms lr_lineScan_fuel_eq
#print axioms lr_horizRule_tokens_append
#print axioms lr_horizRule_new_tokens_rule
#print axioms lr_separatorRule_tokens_append
#print axioms lr_separatorRule_new_tokens_rule
#print axioms lr_clearfloatRule_tokens_append
#print axioms lr_clearfloatRule_new_tokens_rule
#print axioms lr_horizRule_count_mono
#print axioms lr_separatorRule_count_mono
#print axioms lr_clearfloatRule_count_mono

end LeanFtml
