/-
  LeanFtml.ProofBlockquote — Wave 2 "block-middle" proof lane. Universal,
  axiom-clean theorems about the mirror's Blockquote byte scanners in
  LeanFtml.BlockRules (ADVISOR-PROOF-POLICY.md Class A / §4.4 lane 2).

  Scope: bridge-independent token-table and byte-scanner facts only. The F1
  bridge parseBytes_byteForm_id is NOT proved in this programme state, so no
  unconditional WFState preservation is claimed here. Every theorem below is
  a universal statement over arbitrary inputs; no ground rfl pins are used as
  substitutes. All public names are prefixed bq_ and every helper is private.
-/

import LeanFtml.BlockRules

namespace LeanFtml

set_option maxHeartbeats 2000000
set_option maxRecDepth 10000

/-! ## Generic list helpers (proved here, no dependency on uncertain lemma names) -/

private theorem takeWhile_append_dropWhile_len (p : Nat → Bool) (bs : List Nat) :
    bs.takeWhile p ++ bs.drop (bs.takeWhile p).length = bs := by
  induction bs with
  | nil => simp
  | cons b rest ih =>
      by_cases h : p b = true
      · simp [List.takeWhile, h, ih]
      · simp [List.takeWhile, h]

private theorem take_append_drop_self (n : Nat) (l : List Nat) : l.take n ++ l.drop n = l := by
  induction n generalizing l with
  | zero => simp
  | succ n ih =>
      cases l with
      | nil => simp
      | cons x xs => simp [ih]

private theorem takeWhile_eq_replicate (b : Nat) (bs : List Nat) :
    bs.takeWhile (fun x => x == b) = List.replicate (bs.takeWhile (fun x => x == b)).length b := by
  apply List.eq_replicate_of_mem
  intro x hx
  induction bs with
  | nil => simp at hx
  | cons y ys ih =>
      by_cases h : y == b
      · simp [List.takeWhile, h] at hx
        rcases hx with rfl | hx
        · simpa using h
        · exact ih hx
      · simp [List.takeWhile, h] at hx

private theorem drop_takeWhile_head_false (p : Nat → Bool) (bs : List Nat) :
    match bs.drop (bs.takeWhile p).length with
    | [] => True
    | x :: _ => p x = false := by
  induction bs with
  | nil => simp
  | cons b rest ih =>
      by_cases h : p b = true
      · simpa [List.takeWhile, h] using ih
      · simp [List.takeWhile, h]

/-! ## Concrete token entries appended by the push / pop / drain phases -/

private def bqStartTok (level : Nat) : TokenEntry :=
  { rule := "Blockquote", opts :=
      [("type".toList, OptVal.str "start".toList),
       ("level".toList, OptVal.int ((level : Int) - 1))] }

private def bqEndTok (level : Nat) : TokenEntry :=
  { rule := "Blockquote", opts :=
      [("type".toList, OptVal.str "end".toList),
       ("level".toList, OptVal.int ((level : Int) - 1))] }

/-! ## bqRunLength — bound and fuel stability -/

private theorem bqRunLength_le_len_aux (bs : List Nat) (fuel n : Nat)
    (h : bqRunLength bs fuel = some n) : n ≤ bs.length := by
  induction fuel generalizing bs n with
  | zero => simp [bqRunLength] at h
  | succ fuel ih =>
      cases bs with
      | nil => simp [bqRunLength] at h
      | cons b rest =>
          by_cases hb : b = 10
          · subst b
            by_cases hl : rest.head? == some 62
            · simp [bqRunLength, hl] at h
              cases hq : bqRunLength rest fuel with
              | none => simp [hq] at h
              | some m =>
                  simp [hq] at h
                  subst n
                  have hle := ih rest m hq
                  have hlen : (10 :: rest).length = rest.length + 1 := rfl
                  omega
            · simp [bqRunLength, hl] at h
              subst n
              simp
          · simp [bqRunLength] at h
            cases hq : bqRunLength rest fuel with
            | none => simp [hq] at h
            | some m =>
                simp [hq] at h
                subst n
                have hle := ih rest m hq
                have hlen : (b :: rest).length = rest.length + 1 := rfl
                omega

private theorem bqRunLength_succ_stable (bs : List Nat) (fuel : Nat)
    (h : bs.length ≤ fuel) : bqRunLength bs (fuel + 1) = bqRunLength bs fuel := by
  induction fuel generalizing bs with
  | zero =>
      have : bs = [] := by simpa using h
      subst bs
      simp [bqRunLength]
  | succ f ih =>
      cases bs with
      | nil => simp [bqRunLength]
      | cons b rest =>
          have hrest : rest.length ≤ f := by
            simp at h
            omega
          by_cases hb : b = 10
          · subst b
            by_cases hl : rest.head? == some 62
            · simp [bqRunLength, hl, ih rest hrest]
            · simp [bqRunLength, hl]
          · simp [bqRunLength, ih rest hrest]

private theorem bqRunLength_fuel_extend (bs : List Nat) :
    ∀ f k, bs.length ≤ f → bqRunLength bs (f + k) = bqRunLength bs f := by
  intro f k hf
  induction k with
  | zero => rfl
  | succ k ih =>
      rw [Nat.add_succ]
      rw [bqRunLength_succ_stable bs (f + k) (by omega)]
      exact ih

private theorem bqRunLength_pos_of_head_62 (bs : List Nat) (fuel n : Nat)
    (hb : bs.head? = some 62) (h : bqRunLength bs fuel = some n) : 0 < n := by
  cases bs with
  | nil => simp at hb
  | cons b rest =>
      simp at hb
      subst b
      cases fuel with
      | zero => simp [bqRunLength] at h
      | succ f =>
          simp [bqRunLength] at h
          cases hq : bqRunLength rest f with
          | none => simp [hq] at h
          | some m =>
              simp [hq] at h
              subst n
              omega

theorem bq_runLength_bounded (bs : List Nat) (fuel n : Nat)
    (h : bqRunLength bs fuel = some n) : n ≤ bs.length := by
  exact bqRunLength_le_len_aux bs fuel n h

theorem bq_runLength_fuel_stable (bs : List Nat) (fuel : Nat)
    (h : bs.length ≤ fuel) : bqRunLength bs fuel = bqRunLength bs (bs.length + 1) := by
  by_cases hb : bs.length + 1 ≤ fuel
  · have h := bqRunLength_fuel_extend bs (bs.length + 1) (fuel - (bs.length + 1)) (by omega)
    have hadd : (bs.length + 1) + (fuel - (bs.length + 1)) = fuel := by omega
    rw [hadd] at h
    exact h
  · have hfuel : fuel = bs.length := by omega
    subst fuel
    have h := bqRunLength_fuel_extend bs bs.length 1 h
    simpa using h.symm

/-! ## blockquoteMatchAt decomposition -/

theorem bq_matchAt_decomp (src run rest : List Nat)
    (h : blockquoteMatchAt src = some (run, rest)) :
    run.head? = some 62 ∧ src = 10 :: (run ++ rest) := by
  cases src with
  | nil => simp [blockquoteMatchAt] at h
  | cons b s1 =>
      cases s1 with
      | nil => simp [blockquoteMatchAt] at h
      | cons b1 s2 =>
          by_cases hb : b = 10
          · subst b
            by_cases hb1 : b1 = 62
            · subst b1
              simp [blockquoteMatchAt] at h
              cases hbq : bqRunLength (62 :: s2) (s2.length + 3) with
              | none => simp [hbq] at h
              | some n =>
                  simp [hbq] at h
                  rcases h with ⟨rfl, rfl⟩
                  constructor
                  · have hpos : 0 < n := bqRunLength_pos_of_head_62 (62 :: s2) (s2.length + 3) n (by simp) hbq
                    cases n with
                    | zero => omega
                    | succ n' => simp
                  · have hdrop : (10 :: 62 :: s2).drop (1 + n) = (62 :: s2).drop n := by
                      rw [← List.drop_drop]
                      simp
                    rw [hdrop, take_append_drop_self]
            · simp [blockquoteMatchAt, hb1] at h
          · simp [blockquoteMatchAt, hb] at h

/-! ## linesOf concatenation -/

private theorem linesOf_go_flatten_aux (bs : List Nat) (fuel : Nat)
    (h : bs.length < fuel) : (linesOf.go bs fuel).flatten = bs := by
  induction fuel generalizing bs with
  | zero => omega
  | succ f ih =>
      cases bs with
      | nil => simp [linesOf.go]
      | cons b rest =>
          have hflt : rest.length < f := by
            simp at h
            omega
          let line := (b :: rest).takeWhile (fun x => x != 10)
          have htake : line ++ (b :: rest).drop line.length = b :: rest := by
            exact takeWhile_append_dropWhile_len (fun x => x != 10) (b :: rest)
          by_cases hnl : ∃ r, (b :: rest).drop line.length = 10 :: r
          · rcases hnl with ⟨r, hr⟩
            have happ : line ++ (10 :: r) = b :: rest := by
              rw [← hr]
              exact htake
            have hc := congrArg List.length happ
            simp at hc
            have hc' : line.length + r.length = rest.length := Nat.succ.inj hc
            have hrle_rest : r.length ≤ rest.length := by
              rw [← hc']
              omega
            have hrlen : r.length < f := by omega
            have hgo : linesOf.go (b :: rest) (f + 1) = (line ++ [10]) :: linesOf.go r f := by
              simp [linesOf.go, line, hr]
            rw [hgo]
            simp
            rw [ih r hrlen]
            rw [← htake]
            simp [hr]
          · have hdropnil : (b :: rest).drop line.length = [] := by
              have hh := drop_takeWhile_head_false (fun x => x != 10) (b :: rest)
              cases hD : (b :: rest).drop line.length with
              | nil => rfl
              | cons x xs =>
                  have hpx : (x != 10) = false := by simpa [line, hD] using hh
                  have hx : x = 10 := by
                    by_cases hne10 : x = 10
                    · exact hne10
                    · simp [hne10] at hpx
                  exact False.elim (hnl ⟨xs, by simpa [hD, hx]⟩)
            have hline : line = b :: rest := by
              have := htake
              rw [hdropnil] at this
              simpa using this
            simp [linesOf.go, line, hline]

theorem bq_linesOf_flatten (bs : List Nat) : (linesOf bs).flatten = bs := by
  unfold linesOf
  exact linesOf_go_flatten_aux bs (bs.length + 1) (by omega)

/-! ## bqLine decomposition -/

private theorem bqLine_decomp_aux (line : List Nat) (level : Nat) (text : List Nat)
    (h : bqLine line = some (level, text)) :
    1 ≤ level ∧ level = (line.takeWhile (fun b => b == 62)).length ∧
    line = List.replicate level 62 ++ 32 :: text := by
  by_cases hem : (line.takeWhile (fun b => b == 62)).isEmpty = true
  · simp [bqLine, hem] at h
  · have hfalse : (line.takeWhile (fun b => b == 62)).isEmpty = false := by
      cases hm : (line.takeWhile (fun b => b == 62)).isEmpty <;> simp [hm] at hem ⊢
    have hpos : 1 ≤ (line.takeWhile (fun b => b == 62)).length := by
      cases hm : line.takeWhile (fun b => b == 62) with
      | nil => simp [hm] at hfalse
      | cons m ms => simp
    simp [bqLine, hfalse] at h
    cases hD : line.drop (line.takeWhile (fun b => b == 62)).length with
    | nil => simp [hD] at h
    | cons x xs =>
        by_cases hx : x = 32
        · subst x
          simp [hD] at h
          rcases h with ⟨hlev, htxt⟩
          subst level
          subst text
          have hmark : line.takeWhile (fun b => b == 62) =
              List.replicate (line.takeWhile (fun b => b == 62)).length 62 :=
            takeWhile_eq_replicate 62 line
          have htake : line.takeWhile (fun b => b == 62) ++
              line.drop (line.takeWhile (fun b => b == 62)).length = line :=
            takeWhile_append_dropWhile_len (fun b => b == 62) line
          refine ⟨hpos, rfl, ?_⟩
          calc
            line = line.takeWhile (fun b => b == 62) ++
                line.drop (line.takeWhile (fun b => b == 62)).length := htake.symm
            _ = line.takeWhile (fun b => b == 62) ++ (32 :: xs) := by rw [hD]
            _ = List.replicate (line.takeWhile (fun b => b == 62)).length 62 ++ (32 :: xs) :=
              congrArg (fun l : List Nat => l ++ (32 :: xs)) hmark
        · simp [hD, hx] at h

theorem bq_line_decomp (line : List Nat) (level : Nat) (text : List Nat)
    (h : bqLine line = some (level, text)) :
    1 ≤ level ∧ level = (line.takeWhile (fun b => b == 62)).length ∧
    line = List.replicate level 62 ++ 32 :: text := by
  exact bqLine_decomp_aux line level text h

/-! ## One-step lemmas for the depth-stack phases -/

private theorem bqPush_step_push (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) (f : Nat)
    (hlt : stack < level) :
    bqPush level stack toks acc (f + 1) =
      bqPush level (stack + 1) (toks ++ [bqStartTok level])
        (acc ++ [10] ++ phBytes toks.length ++ [10, 10]) f := by
  change (if stack < level then
      bqPush level (stack + 1)
        (toks ++ [{ rule := "Blockquote", opts :=
          [("type".toList, OptVal.str "start".toList),
           ("level".toList, OptVal.int ((level : Int) - 1))] }])
        (acc ++ [10] ++ phBytes toks.length ++ [10, 10]) f
    else (stack, toks, acc)) =
      bqPush level (stack + 1) (toks ++ [bqStartTok level])
        (acc ++ [10] ++ phBytes toks.length ++ [10, 10]) f
  rw [ite_eq_left hlt]
  rfl

private theorem bqPush_step_stop (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) (f : Nat)
    (hlt : ¬ stack < level) :
    bqPush level stack toks acc (f + 1) = (stack, toks, acc) := by
  change (if stack < level then
      bqPush level (stack + 1)
        (toks ++ [{ rule := "Blockquote", opts :=
          [("type".toList, OptVal.str "start".toList),
           ("level".toList, OptVal.int ((level : Int) - 1))] }])
        (acc ++ [10] ++ phBytes toks.length ++ [10, 10]) f
    else (stack, toks, acc)) = (stack, toks, acc)
  rw [ite_eq_right hlt]

private theorem bqPop_step_pop (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) (f : Nat)
    (hlt : level < stack) :
    bqPop level stack toks acc (f + 1) =
      bqPop level (stack - 1) (toks ++ [bqEndTok stack])
        (acc ++ [10, 10] ++ phBytes toks.length ++ [10, 10]) f := by
  change (if level < stack then
      bqPop level (stack - 1)
        (toks ++ [{ rule := "Blockquote", opts :=
          [("type".toList, OptVal.str "end".toList),
           ("level".toList, OptVal.int ((stack : Int) - 1))] }])
        (acc ++ [10, 10] ++ phBytes toks.length ++ [10, 10]) f
    else (stack, toks, acc)) =
      bqPop level (stack - 1) (toks ++ [bqEndTok stack])
        (acc ++ [10, 10] ++ phBytes toks.length ++ [10, 10]) f
  rw [ite_eq_left hlt]
  rfl

private theorem bqPop_step_stop (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) (f : Nat)
    (hlt : ¬ level < stack) :
    bqPop level stack toks acc (f + 1) = (stack, toks, acc) := by
  change (if level < stack then
      bqPop level (stack - 1)
        (toks ++ [{ rule := "Blockquote", opts :=
          [("type".toList, OptVal.str "end".toList),
           ("level".toList, OptVal.int ((stack : Int) - 1))] }])
        (acc ++ [10, 10] ++ phBytes toks.length ++ [10, 10]) f
    else (stack, toks, acc)) = (stack, toks, acc)
  rw [ite_eq_right hlt]

private theorem bqDrain_step_pop (stack : Nat) (toks : List TokenEntry) (acc : List Nat) (f : Nat)
    (hz : 0 < stack) :
    bqDrain stack toks acc (f + 1) =
      bqDrain (stack - 1) (toks ++ [bqEndTok stack]) (acc ++ phBytes toks.length) f := by
  change (if 0 < stack then
      bqDrain (stack - 1)
        (toks ++ [{ rule := "Blockquote", opts :=
          [("type".toList, OptVal.str "end".toList),
           ("level".toList, OptVal.int ((stack : Int) - 1))] }])
        (acc ++ phBytes toks.length) f
    else (toks, acc)) =
      bqDrain (stack - 1) (toks ++ [bqEndTok stack]) (acc ++ phBytes toks.length) f
  rw [ite_eq_left hz]
  rfl

private theorem bqDrain_step_stop (stack : Nat) (toks : List TokenEntry) (acc : List Nat) (f : Nat)
    (hz : ¬ 0 < stack) :
    bqDrain stack toks acc (f + 1) = (toks, acc) := by
  change (if 0 < stack then
      bqDrain (stack - 1)
        (toks ++ [{ rule := "Blockquote", opts :=
          [("type".toList, OptVal.str "end".toList),
           ("level".toList, OptVal.int ((stack : Int) - 1))] }])
        (acc ++ phBytes toks.length) f
    else (toks, acc)) = (toks, acc)
  rw [ite_eq_right hz]

/-! ## bqPush arithmetic -/

private theorem bqPush_inv (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) (fuel : Nat) :
    stack ≤ (bqPush level stack toks acc fuel).1 ∧
    (bqPush level stack toks acc fuel).1 ≤ max stack level ∧
    (bqPush level stack toks acc fuel).2.1.length = toks.length + ((bqPush level stack toks acc fuel).1 - stack) ∧
    (∃ mid, (bqPush level stack toks acc fuel).2.1 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote") := by
  induction fuel generalizing stack toks acc with
  | zero =>
      refine ⟨Nat.le_refl stack, Nat.le_max_left stack level, ?_, ?_⟩
      · simp [bqPush]
      · exact ⟨[], by simp [bqPush], by simp⟩
  | succ f ih =>
      by_cases hlt : stack < level
      · rw [bqPush_step_push level stack toks acc f hlt]
        have hih := ih (stack + 1) (toks ++ [bqStartTok level])
          (acc ++ [10] ++ phBytes toks.length ++ [10, 10])
        rcases hih with ⟨hs_ge, hs_le, hlen, hmid⟩
        rcases hmid with ⟨mid, hmid_eq, hmid_rule⟩
        refine ⟨?_, ?_, ?_, ?_⟩
        · omega
        · have hmax1 : max (stack + 1) level = level := Nat.max_eq_right (by omega)
          have hmax2 : max stack level = level := Nat.max_eq_right (by omega)
          simpa [hmax1, hmax2] using hs_le
        · have htlen : (toks ++ [bqStartTok level]).length = toks.length + 1 := by simp
          omega
        · refine ⟨[bqStartTok level] ++ mid, ?_, ?_⟩
          · rw [hmid_eq]
            simp [List.append_assoc]
          · intro x hx
            simp at hx
            rcases hx with rfl | hx
            · rfl
            · exact hmid_rule x hx
      · rw [bqPush_step_stop level stack toks acc f hlt]
        refine ⟨Nat.le_refl stack, Nat.le_max_left stack level, ?_, ?_⟩
        · simp
        · exact ⟨[], by simp, by simp⟩

private theorem bqPush_stable_aux (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) :
    ∀ fuel, level ≤ stack + fuel →
      bqPush level stack toks acc (fuel + 1) = bqPush level stack toks acc fuel := by
  intro fuel
  induction fuel generalizing stack toks acc with
  | zero =>
      intro h
      have hs : level ≤ stack := by simpa using h
      have hnot : ¬ stack < level := by omega
      rw [bqPush_step_stop level stack toks acc 0 hnot]
      simp [bqPush]
  | succ f ih =>
      intro h
      by_cases hlt : stack < level
      · have hcond : level ≤ (stack + 1) + f := by omega
        rw [bqPush_step_push level stack toks acc f hlt]
        rw [bqPush_step_push level stack toks acc (f + 1) hlt]
        exact ih (stack + 1) (toks ++ [bqStartTok level])
          (acc ++ [10] ++ phBytes toks.length ++ [10, 10]) hcond
      · have hnot : ¬ stack < level := hlt
        rw [bqPush_step_stop level stack toks acc f hnot]
        rw [bqPush_step_stop level stack toks acc (f + 1) hnot]

private theorem bqPush_fuel_extend (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) :
    ∀ f k, level ≤ stack + f →
      bqPush level stack toks acc (f + k) = bqPush level stack toks acc f := by
  intro f k hf
  induction k with
  | zero => rfl
  | succ k ih =>
      rw [Nat.add_succ]
      rw [bqPush_stable_aux level stack toks acc (f + k) (by omega)]
      exact ih

theorem bq_push_bounds (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) (fuel : Nat) :
    stack ≤ (bqPush level stack toks acc fuel).1 ∧
    (bqPush level stack toks acc fuel).1 ≤ max stack level ∧
    (bqPush level stack toks acc fuel).2.1.length = toks.length + ((bqPush level stack toks acc fuel).1 - stack) ∧
    (∃ mid, (bqPush level stack toks acc fuel).2.1 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote") := by
  exact bqPush_inv level stack toks acc fuel

theorem bq_push_fuel_stable (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) (fuel : Nat)
    (hfuel : level ≤ fuel) :
    bqPush level stack toks acc fuel = bqPush level stack toks acc (level + 1) := by
  by_cases hle : fuel ≤ level + 1
  · have hcond : level ≤ stack + fuel := by omega
    have h := bqPush_fuel_extend level stack toks acc fuel ((level + 1) - fuel) hcond
    have hadd : fuel + ((level + 1) - fuel) = level + 1 := by omega
    rw [hadd] at h
    exact h.symm
  · have hcond : level ≤ stack + (level + 1) := by omega
    have h := bqPush_fuel_extend level stack toks acc (level + 1) (fuel - (level + 1)) hcond
    have hadd : (level + 1) + (fuel - (level + 1)) = fuel := by omega
    rw [hadd] at h
    exact h

/-! ## bqPop arithmetic -/

private theorem bqPop_inv (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) (fuel : Nat) :
    (bqPop level stack toks acc fuel).1 ≤ stack ∧
    min level stack ≤ (bqPop level stack toks acc fuel).1 ∧
    (bqPop level stack toks acc fuel).2.1.length = toks.length + (stack - (bqPop level stack toks acc fuel).1) ∧
    (∃ mid, (bqPop level stack toks acc fuel).2.1 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote") := by
  induction fuel generalizing stack toks acc with
  | zero =>
      refine ⟨Nat.le_refl stack, Nat.min_le_right level stack, ?_, ?_⟩
      · simp [bqPop]
      · exact ⟨[], by simp [bqPop], by simp⟩
  | succ f ih =>
      by_cases hlt : level < stack
      · rw [bqPop_step_pop level stack toks acc f hlt]
        have hih := ih (stack - 1) (toks ++ [bqEndTok stack])
          (acc ++ [10, 10] ++ phBytes toks.length ++ [10, 10])
        rcases hih with ⟨hs_le, hmin_le, hlen, hmid⟩
        rcases hmid with ⟨mid, hmid_eq, hmid_rule⟩
        refine ⟨?_, ?_, ?_, ?_⟩
        · omega
        · have hmin1 : min level stack = level := Nat.min_eq_left (by omega)
          have hmin2 : min level (stack - 1) = level := Nat.min_eq_left (by omega)
          simpa [hmin1, hmin2] using hmin_le
        · have htlen : (toks ++ [bqEndTok stack]).length = toks.length + 1 := by simp
          omega
        · refine ⟨[bqEndTok stack] ++ mid, ?_, ?_⟩
          · rw [hmid_eq]
            simp [List.append_assoc]
          · intro x hx
            simp at hx
            rcases hx with rfl | hx
            · rfl
            · exact hmid_rule x hx
      · rw [bqPop_step_stop level stack toks acc f hlt]
        refine ⟨Nat.le_refl stack, Nat.min_le_right level stack, ?_, ?_⟩
        · simp
        · exact ⟨[], by simp, by simp⟩

private theorem bqPop_stable_aux (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) :
    ∀ fuel, stack ≤ level + fuel →
      bqPop level stack toks acc (fuel + 1) = bqPop level stack toks acc fuel := by
  intro fuel
  induction fuel generalizing stack toks acc with
  | zero =>
      intro h
      have hs : stack ≤ level := by simpa using h
      have hnot : ¬ level < stack := by omega
      rw [bqPop_step_stop level stack toks acc 0 hnot]
      simp [bqPop]
  | succ f ih =>
      intro h
      by_cases hlt : level < stack
      · have hcond : stack - 1 ≤ level + f := by omega
        rw [bqPop_step_pop level stack toks acc f hlt]
        rw [bqPop_step_pop level stack toks acc (f + 1) hlt]
        exact ih (stack - 1) (toks ++ [bqEndTok stack])
          (acc ++ [10, 10] ++ phBytes toks.length ++ [10, 10]) hcond
      · have hnot : ¬ level < stack := hlt
        rw [bqPop_step_stop level stack toks acc f hnot]
        rw [bqPop_step_stop level stack toks acc (f + 1) hnot]

private theorem bqPop_fuel_extend (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) :
    ∀ f k, stack ≤ level + f →
      bqPop level stack toks acc (f + k) = bqPop level stack toks acc f := by
  intro f k hf
  induction k with
  | zero => rfl
  | succ k ih =>
      rw [Nat.add_succ]
      rw [bqPop_stable_aux level stack toks acc (f + k) (by omega)]
      exact ih

theorem bq_pop_bounds (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) (fuel : Nat) :
    (bqPop level stack toks acc fuel).1 ≤ stack ∧
    min level stack ≤ (bqPop level stack toks acc fuel).1 ∧
    (bqPop level stack toks acc fuel).2.1.length = toks.length + (stack - (bqPop level stack toks acc fuel).1) ∧
    (∃ mid, (bqPop level stack toks acc fuel).2.1 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote") := by
  exact bqPop_inv level stack toks acc fuel

theorem bq_pop_fuel_stable (level stack : Nat) (toks : List TokenEntry) (acc : List Nat) (fuel : Nat)
    (hfuel : stack ≤ level + fuel) :
    bqPop level stack toks acc fuel = bqPop level stack toks acc (stack + 1) := by
  by_cases hle : fuel ≤ stack + 1
  · have h := bqPop_fuel_extend level stack toks acc fuel (stack + 1 - fuel) hfuel
    have hadd : fuel + (stack + 1 - fuel) = stack + 1 := by omega
    rw [hadd] at h
    exact h.symm
  · have hcond : stack ≤ level + (stack + 1) := by omega
    have h := bqPop_fuel_extend level stack toks acc (stack + 1) (fuel - (stack + 1)) hcond
    have hadd : (stack + 1) + (fuel - (stack + 1)) = fuel := by omega
    rw [hadd] at h
    exact h

/-! ## bqDrain arithmetic -/

private theorem bqDrain_inv (stack : Nat) (toks : List TokenEntry) (acc : List Nat) (fuel : Nat) :
    (bqDrain stack toks acc fuel).1.length = toks.length + min fuel stack ∧
    (∃ mid, (bqDrain stack toks acc fuel).1 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote") := by
  induction fuel generalizing stack toks acc with
  | zero => simp [bqDrain]
  | succ f ih =>
      by_cases hz : 0 < stack
      · have hmin : min (f + 1) stack = min f (stack - 1) + 1 := by
          have hs : stack = (stack - 1) + 1 := by omega
          rw [hs]
          exact Nat.succ_min_succ f (stack - 1)
        rw [bqDrain_step_pop stack toks acc f hz]
        have hih := ih (stack - 1) (toks ++ [bqEndTok stack]) (acc ++ phBytes toks.length)
        rcases hih with ⟨hlen, hmid⟩
        rcases hmid with ⟨mid, hmid_eq, hmid_rule⟩
        refine ⟨?_, ?_⟩
        · rw [hlen, hmin]
          simp [bqEndTok]
          omega
        · refine ⟨[bqEndTok stack] ++ mid, ?_, ?_⟩
          · rw [hmid_eq]
            simp [List.append_assoc]
          · intro x hx
            simp at hx
            rcases hx with rfl | hx
            · rfl
            · exact hmid_rule x hx
      · rw [bqDrain_step_stop stack toks acc f hz]
        have hstack : stack = 0 := Nat.eq_zero_of_not_pos hz
        refine ⟨?_, ?_⟩
        · simp [hstack]
        · exact ⟨[], by simp, by simp⟩

private theorem bqDrain_stable_aux (stack : Nat) (toks : List TokenEntry) (acc : List Nat) :
    ∀ fuel, stack ≤ fuel →
      bqDrain stack toks acc (fuel + 1) = bqDrain stack toks acc fuel := by
  intro fuel
  induction fuel generalizing stack toks acc with
  | zero =>
      intro h
      have : stack = 0 := Nat.eq_zero_of_le_zero h
      subst stack
      rw [bqDrain_step_stop 0 toks acc 0 (by decide)]
      simp [bqDrain]
  | succ f ih =>
      intro h
      by_cases hz : 0 < stack
      · have hcond : stack - 1 ≤ f := by omega
        rw [bqDrain_step_pop stack toks acc f hz]
        rw [bqDrain_step_pop stack toks acc (f + 1) hz]
        exact ih (stack - 1) (toks ++ [bqEndTok stack]) (acc ++ phBytes toks.length) hcond
      · rw [bqDrain_step_stop stack toks acc f hz]
        rw [bqDrain_step_stop stack toks acc (f + 1) hz]

private theorem bqDrain_fuel_extend (stack : Nat) (toks : List TokenEntry) (acc : List Nat) :
    ∀ f k, stack ≤ f → bqDrain stack toks acc (f + k) = bqDrain stack toks acc f := by
  intro f k hf
  induction k with
  | zero => rfl
  | succ k ih =>
      rw [Nat.add_succ]
      rw [bqDrain_stable_aux stack toks acc (f + k) (by omega)]
      exact ih

theorem bq_drain_bounds (stack : Nat) (toks : List TokenEntry) (acc : List Nat) (fuel : Nat) :
    (bqDrain stack toks acc fuel).1.length = toks.length + min fuel stack ∧
    (∃ mid, (bqDrain stack toks acc fuel).1 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote") := by
  exact bqDrain_inv stack toks acc fuel

theorem bq_drain_fuel_stable (stack : Nat) (toks : List TokenEntry) (acc : List Nat) (fuel : Nat)
    (hfuel : stack ≤ fuel) :
    bqDrain stack toks acc fuel = bqDrain stack toks acc (stack + 1) := by
  by_cases hle : fuel ≤ stack + 1
  · have h := bqDrain_fuel_extend stack toks acc fuel (stack + 1 - fuel) hfuel
    have hadd : fuel + (stack + 1 - fuel) = stack + 1 := by omega
    rw [hadd] at h
    exact h.symm
  · have hcond : stack ≤ stack + 1 := by omega
    have h := bqDrain_fuel_extend stack toks acc (stack + 1) (fuel - (stack + 1)) hcond
    have hadd : (stack + 1) + (fuel - (stack + 1)) = fuel := by omega
    rw [hadd] at h
    exact h

/-! ## bqEmit — append-only, all appended tokens are Blockquote -/

private theorem bqEmit_append (lines : List (Nat × List Nat)) (stack : Nat)
    (toks : List TokenEntry) (acc : List Nat) (fuel : Nat) :
    ∃ mid, (bqEmit lines stack toks acc fuel).2 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote" := by
  induction fuel generalizing lines stack toks acc with
  | zero => simp [bqEmit]
  | succ f ih =>
      cases lines with
      | nil =>
          simp [bqEmit]
          exact (bqDrain_inv stack toks (acc ++ [10]) (stack + 1)).2
      | cons ln rest =>
          rcases ln with ⟨level, text⟩
          simp [bqEmit]
          let r1 := bqPush level stack toks acc (level + 1)
          let s1 := r1.1
          let t1 := r1.2.1
          let a1 := r1.2.2
          have hp := bqPush_inv level stack toks acc (level + 1)
          have hp' : ∃ mid, t1 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote" := by
            simpa [r1, s1, t1, a1] using hp.2.2.2
          rcases hp' with ⟨mid1, hp_eq, hp_rule⟩
          let r2 := bqPop level s1 t1 a1 (s1 + 1)
          let s2 := r2.1
          let t2 := r2.2.1
          let a2 := r2.2.2
          have hpop := bqPop_inv level s1 t1 a1 (s1 + 1)
          have hpop' : ∃ mid, t2 = t1 ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote" := by
            simpa [r2, s2, t2, a2] using hpop.2.2.2
          rcases hpop' with ⟨mid2, hpop_eq, hpop_rule⟩
          have hih := ih rest s2 t2 (a2 ++ text)
          rcases hih with ⟨mid3, hih_eq, hih_rule⟩
          change ∃ mid, (bqEmit rest s2 t2 (a2 ++ text) f).2 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote"
          refine ⟨mid1 ++ mid2 ++ mid3, ?_, ?_⟩
          · rw [hih_eq, hpop_eq, hp_eq]
            simp [List.append_assoc]
          · intro x hx
            simp only [List.mem_append] at hx
            rcases hx with (hx | hx) | hx
            · exact hp_rule x hx
            · exact hpop_rule x hx
            · exact hih_rule x hx

/-! ## blockquoteProcess -/

theorem bq_process_empty_branch (run : List Nat) (toks : List TokenEntry)
    (h : ((linesOf run).filterMap bqLine).all (fun p => (trimBytes p.2).isEmpty)) :
    blockquoteProcess run toks = ([10, 10], toks) := by
  simp [blockquoteProcess, h]

theorem bq_process_append (run : List Nat) (toks : List TokenEntry) :
    ∃ mid, (blockquoteProcess run toks).2 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote" := by
  unfold blockquoteProcess
  dsimp only
  by_cases hcond : ((linesOf run).filterMap bqLine).all (fun p => (trimBytes p.2).isEmpty)
  · simp [hcond]
  · simpa [hcond] using
      bqEmit_append ((linesOf run).filterMap bqLine) 0 toks []
        (((linesOf run).filterMap bqLine).length + 1)

/-! ## blockquoteScan -/

private theorem blockquoteScan_step_none (b : Nat) (rest : List Nat) (toks : List TokenEntry) (f : Nat)
    (hmat : blockquoteMatchAt (b :: rest) = none) :
    blockquoteScan (b :: rest) toks (f + 1) =
      (b :: (blockquoteScan rest toks f).1, (blockquoteScan rest toks f).2) := by
  change (match blockquoteMatchAt (b :: rest) with
    | some (run, r) =>
        let (repl, t1) := blockquoteProcess run toks
        let (o, t) := blockquoteScan r t1 f
        (repl ++ o, t)
    | none =>
        let (o, t) := blockquoteScan rest toks f
        (b :: o, t)) =
      (b :: (blockquoteScan rest toks f).1, (blockquoteScan rest toks f).2)
  rw [hmat]

private theorem blockquoteScan_step_some (b : Nat) (rest run r : List Nat)
    (toks : List TokenEntry) (f : Nat)
    (hmat : blockquoteMatchAt (b :: rest) = some (run, r)) :
    blockquoteScan (b :: rest) toks (f + 1) =
      ((blockquoteProcess run toks).1 ++ (blockquoteScan r (blockquoteProcess run toks).2 f).1,
       (blockquoteScan r (blockquoteProcess run toks).2 f).2) := by
  change (match blockquoteMatchAt (b :: rest) with
    | some (run, r) =>
        let (repl, t1) := blockquoteProcess run toks
        let (o, t) := blockquoteScan r t1 f
        (repl ++ o, t)
    | none =>
        let (o, t) := blockquoteScan rest toks f
        (b :: o, t)) =
      ((blockquoteProcess run toks).1 ++ (blockquoteScan r (blockquoteProcess run toks).2 f).1,
       (blockquoteScan r (blockquoteProcess run toks).2 f).2)
  rw [hmat]

private theorem blockquoteScan_append_aux (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    ∃ mid, (blockquoteScan src toks fuel).2 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote" := by
  induction fuel generalizing src toks with
  | zero => simp [blockquoteScan]
  | succ f ih =>
      cases src with
      | nil => simp [blockquoteScan]
      | cons b rest =>
          cases hmat : blockquoteMatchAt (b :: rest) with
          | none =>
              rw [blockquoteScan_step_none b rest toks f hmat]
              simpa using ih rest toks
          | some pr =>
              rcases pr with ⟨run, r⟩
              rw [blockquoteScan_step_some b rest run r toks f hmat]
              rcases bq_process_append run toks with ⟨mid1, hp_eq, hp_rule⟩
              rcases ih r (toks ++ mid1) with ⟨mid2, hi_eq, hi_rule⟩
              refine ⟨mid1 ++ mid2, ?_, ?_⟩
              · rw [hp_eq]
                rw [hi_eq]
                simp [List.append_assoc]
              · intro x hx
                simp only [List.mem_append] at hx
                rcases hx with hx | hx
                · exact hp_rule x hx
                · exact hi_rule x hx

theorem bq_scan_append (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    ∃ mid, (blockquoteScan src toks fuel).2 = toks ++ mid ∧ ∀ x ∈ mid, x.rule = "Blockquote" := by
  exact blockquoteScan_append_aux src toks fuel

private theorem blockquoteScan_stable_aux (src : List Nat) (toks : List TokenEntry) :
    ∀ fuel, src.length ≤ fuel →
      blockquoteScan src toks (fuel + 1) = blockquoteScan src toks fuel := by
  intro fuel
  induction fuel generalizing src toks with
  | zero =>
      intro h
      have : src = [] := by simpa using h
      subst src
      simp [blockquoteScan]
  | succ f ih =>
      intro h
      cases src with
      | nil => simp [blockquoteScan]
      | cons b rest =>
          have hrest : rest.length ≤ f := by
            simp at h
            omega
          cases hmat : blockquoteMatchAt (b :: rest) with
          | none =>
              rw [blockquoteScan_step_none b rest toks (f + 1) hmat]
              rw [blockquoteScan_step_none b rest toks f hmat]
              rw [ih rest toks hrest]
          | some pr =>
              rcases pr with ⟨run, r⟩
              have hdecomp := bq_matchAt_decomp (b :: rest) run r hmat
              have hrest_eq : rest = run ++ r := by
                cases hdecomp.2
                rfl
              have hrlen : r.length ≤ rest.length := by
                rw [hrest_eq]
                simp
              have hrle : r.length ≤ f := by omega
              rw [blockquoteScan_step_some b rest run r toks (f + 1) hmat]
              rw [blockquoteScan_step_some b rest run r toks f hmat]
              rw [ih r (blockquoteProcess run toks).2 hrle]

private theorem blockquoteScan_fuel_extend (src : List Nat) (toks : List TokenEntry) :
    ∀ f k, src.length ≤ f → blockquoteScan src toks (f + k) = blockquoteScan src toks f := by
  intro f k hf
  induction k with
  | zero => rfl
  | succ k ih =>
      rw [Nat.add_succ]
      rw [blockquoteScan_stable_aux src toks (f + k) (by omega)]
      exact ih

theorem bq_scan_fuel_stable (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hfuel : src.length + 1 ≤ fuel) :
    blockquoteScan src toks fuel = blockquoteScan src toks (src.length + 1) := by
  have hcond : src.length ≤ src.length + 1 := by omega
  have h := blockquoteScan_fuel_extend src toks (src.length + 1) (fuel - (src.length + 1)) hcond
  have hadd : (src.length + 1) + (fuel - (src.length + 1)) = fuel := by omega
  rw [hadd] at h
  exact h

#print axioms bq_runLength_bounded
#print axioms bq_runLength_fuel_stable
#print axioms bq_matchAt_decomp
#print axioms bq_linesOf_flatten
#print axioms bq_line_decomp
#print axioms bq_push_bounds
#print axioms bq_push_fuel_stable
#print axioms bq_pop_bounds
#print axioms bq_pop_fuel_stable
#print axioms bq_drain_bounds
#print axioms bq_drain_fuel_stable
#print axioms bq_process_empty_branch
#print axioms bq_process_append
#print axioms bq_scan_append
#print axioms bq_scan_fuel_stable

end LeanFtml
