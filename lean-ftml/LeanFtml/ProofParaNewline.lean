/-
  LeanFtml.ProofParaNewline — Wave 2 proof/para-inline lane, task-1.

  Policy: ADVISOR-PROOF-POLICY.md §2.2 Class A, `ParaRules` Newline only
  (deterministic 2-byte sliding window `([^\n])\n(?!\n)` with a one-byte
  negative-lookahead). Since REFCORR16 the scanner consumes placeholders
  as units (re-emitting their original bytes) and suppresses the claim
  at a skip-list-block to Tableadv junction; the reference scanner
  `nlSpecF` in §2 mirrors that shape step for step. This file proves the
  kernel-free universal facts about `ParaRules.newlineScan` / `newlineRule`
  that reach the named proof target
  "exact pointwise window characterization; WFState + TokEquiv".

  Proved here: (1) the exact boolean window predicate and the one-step
  emission/copy branch law; (2) a fuel-independence theorem making the
  fuel-indexed mirror scanner equal a structurally recursive spec, hence
  totality and correctness on all byte inputs (in particular the newline-free
  identity case); (3) the exact shape of the appended token tail (only
  "Newline" entries), for scanner, rule, and token rule-name lists;
  (4) WFState preservation for every conjunct except the work-parse conjunct,
  plus a conditional full-WFState theorem; (5) token-table/fatal preservation
  of TokEquiv under the rule with an equal-claim-count hypothesis, plus a
  conditional full-TokEquiv theorem.

  Named kernel-dependent remainder (NOT proved here, TCB-2 / G3 / coordinator
  scope): (a) the regex-vs-PcreCore/libpcre2 agreement for `([^\n])\n(?!\n)` —
  the mirror's window predicate is taken as the spec, matching libpcre2 is
  outside Lean; (b) the parseBytes/byteForm round trip and the UTF-8 decode /
  encode identities (TokenStateProof's open parseBytes_byteForm_id and
  byteForm_parseBytes_id) needed to discharge the work-WFSegs conjunct of
  WFState and the segsTokEquiv work conjunct of TokEquiv — both are carried as
  explicit hypotheses in the conditional theorems below and never invented.
-/
import LeanFtml.ParaRules
import LeanFtml.TokenStateProof

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## 1. The exact pointwise window predicate and emission law -/

/-- The mirror scanner's exact two-byte-window guard, byte form: the head byte
    is not LF, the next byte is LF, and the byte after that is not LF (or the
    input ends). This is the pointwise `([^\n])\n(?!\n)` decision. -/
def nlWindowMatch (b : Nat) (rest : List Nat) : Bool :=
  b != 10 && rest.head? == some 10 && rest.tail.head? != some 10

/-- The single token entry the Newline rule appends: a "Newline" rule with an
    empty option map, exactly the entry `claimTok "Newline" []` builds. -/
def nlToken : TokenEntry := { rule := "Newline", opts := [] }

theorem parainline_newline_window_match_iff (b : Nat) (rest : List Nat) :
    nlWindowMatch b rest = true ↔
      b ≠ 10 ∧ rest.head? = some 10 ∧ rest.tail.head? ≠ some 10 := by
  simp [nlWindowMatch]
  constructor
  · intro h
    exact ⟨h.1.1, h.1.2, h.2⟩
  · intro h
    exact ⟨⟨h.1, h.2.1⟩, h.2.2⟩

/-- A placeholder read leaves a strictly shorter rest: the read
    consumes the opening byte, at least one digit byte, and the
    closing byte. -/
theorem readPlaceholder_rest_length {s : List Nat} {n : Nat} {r : List Nat}
    (h : readPlaceholder s = some (n, r)) : r.length < s.length := by
  cases s with
  | nil => simp [readPlaceholder] at h
  | cons b rest =>
      by_cases hb : b = 0xFF
      · subst hb
        simp only [readPlaceholder] at h
        by_cases hd : (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).isEmpty
        · simp [hd] at h
        · have hdrop : rest.drop (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).length =
              0xFF :: r := by
            cases hdrop' : rest.drop (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).length with
            | nil => simp [hd, hdrop'] at h
            | cons c r' =>
                by_cases hc : c = 0xFF
                · subst hc
                  have hrr : r' = r := by
                    have hh : (List.foldl (fun a d => a * 10 + (d - 48)) 0
                        (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57))) = n ∧
                        r' = r := by
                      simpa [hd, hdrop'] using h
                    exact hh.2
                  subst hrr
                  rfl
                · simp [hd, hdrop', hc] at h
          have hlen1 : (rest.drop (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).length).length =
              rest.length - (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).length :=
            List.length_drop
          rw [hdrop] at hlen1
          simp at hlen1
          have hcons : (0xFF :: rest).length = rest.length + 1 := rfl
          omega
      · have hnone : readPlaceholder (b :: rest) = none := by
          simp [readPlaceholder, hb]
        rw [hnone] at h
        exact absurd h (by simp)

/-- The one-step emission law at a literal byte head (no placeholder
    begins there): on a window match the scanner suppresses the LF when
    `beforeBlockClose` holds, otherwise claims one Newline token after
    the byte and consumes the LF; otherwise it copies the byte. -/
theorem parainline_newline_go_step_emission (b : Nat) (rest : List Nat)
    (toks : List TokenEntry) (fuel : Nat)
    (h : readPlaceholder (b :: rest) = none) :
    newlineScan.go (b :: rest) toks (fuel + 1) =
      if nlWindowMatch b rest then
        if newlineScan.beforeBlockClose rest.tail toks then
          let (o, toks1) := newlineScan.go rest.tail toks fuel
          (b :: o, toks1)
        else
          let (ph, toks1) := claimTok "Newline" [] toks
          let (o, toks2) := newlineScan.go rest.tail toks1 fuel
          (b :: (ph ++ o), toks2)
      else
        let (o, toks1) := newlineScan.go rest toks fuel
        (b :: o, toks1) := by
  simp [newlineScan.go, h, nlWindowMatch]

/-- The one-step law at a literal byte head, in the scanner's
    step normal form (the public `parainline_newline_go_step_emission`
    states the same law through `nlWindowMatch`). -/
theorem parainline_newline_go_step_byte (b : Nat) (rest : List Nat)
    (toks : List TokenEntry) (fuel : Nat)
    (h : readPlaceholder (b :: rest) = none) :
    newlineScan.go (b :: rest) toks (fuel + 1) =
      if (b ≠ 10 ∧ rest.head? = some 10) ∧ rest.tail.head? ≠ some 10 then
        if newlineScan.beforeBlockClose rest.tail toks = true then
          (b :: (newlineScan.go rest.tail toks fuel).1,
           (newlineScan.go rest.tail toks fuel).2)
        else
          (b :: ((claimTok "Newline" [] toks).1 ++
            (newlineScan.go rest.tail (claimTok "Newline" [] toks).2 fuel).1),
           (newlineScan.go rest.tail (claimTok "Newline" [] toks).2 fuel).2)
      else
        (b :: (newlineScan.go rest toks fuel).1,
         (newlineScan.go rest toks fuel).2) := by
  rw [newlineScan.go.eq_def]
  simp [h]

/-- REFCORR16 / REFCORR19 F4(b): the one-step law at a placeholder head. The
    scanner consumes the placeholder as a unit and re-emits its original bytes;
    the newline after it is absorbed by `beforeBlockClose` (F4(b)), emitted
    literally by `junction` (REFCORR16), or claimed as Newline. -/
theorem parainline_newline_go_step_placeholder (src : List Nat) (n : Nat)
    (rest : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (h : readPlaceholder src = some (n, rest)) :
    newlineScan.go src toks (fuel + 1) =
      if rest.head? = some 10 ∧ rest.tail.head? ≠ some 10 then
        if newlineScan.beforeBlockClose rest.tail toks = true then
          (src.take (src.length - rest.length) ++
            (newlineScan.go rest.tail toks fuel).1,
           (newlineScan.go rest.tail toks fuel).2)
        else if newlineScan.junction n rest.tail toks = true then
          (src.take (src.length - rest.length) ++ 10 ::
            (newlineScan.go rest.tail toks fuel).1,
           (newlineScan.go rest.tail toks fuel).2)
        else
          (src.take (src.length - rest.length) ++
            ((claimTok "Newline" [] toks).1 ++
              (newlineScan.go rest.tail (claimTok "Newline" [] toks).2 fuel).1),
           (newlineScan.go rest.tail (claimTok "Newline" [] toks).2 fuel).2)
      else
        (src.take (src.length - rest.length) ++
          (newlineScan.go rest toks fuel).1,
         (newlineScan.go rest toks fuel).2) := by
  cases src with
  | nil => simp [readPlaceholder] at h
  | cons b rest0 =>
      rw [newlineScan.go.eq_def]
      simp [h]

/-! ## 2. Fuel-indexed reference scanner and totality / correctness -/

/-- The fuel-indexed reference scanner: the same step structure as
    the mirror's `newlineScan.go`. -/
def nlSpecF : List Nat → List TokenEntry → Nat → List Nat × List TokenEntry
  | src, toks, 0 => (src, toks)
  | src, toks, fuel + 1 =>
      match readPlaceholder src with
      | some (n, rest) =>
          let origPh := src.take (src.length - rest.length)
          if rest.head? == some 10 && (rest.tail.head? != some 10) then
            if newlineScan.beforeBlockClose rest.tail toks then
              let (o, toks1) := nlSpecF rest.tail toks fuel
              (origPh ++ o, toks1)
            else if newlineScan.junction n rest.tail toks then
              let (o, toks1) := nlSpecF rest.tail toks fuel
              (origPh ++ [10] ++ o, toks1)
            else
              let (ph, toks1) := claimTok "Newline" [] toks
              let (o, toks2) := nlSpecF rest.tail toks1 fuel
              (origPh ++ ph ++ o, toks2)
          else
            let (o, toks1) := nlSpecF rest toks fuel
            (origPh ++ o, toks1)
      | none =>
          match src with
          | [] => ([], toks)
          | b :: rest =>
              if b != 10 && rest.head? == some 10 &&
                  (rest.tail.head? != some 10) then
                if newlineScan.beforeBlockClose rest.tail toks then
                  let (o, toks1) := nlSpecF rest.tail toks fuel
                  (b :: o, toks1)
                else
                  let (ph, toks1) := claimTok "Newline" [] toks
                  let (o, toks2) := nlSpecF rest.tail toks1 fuel
                  (b :: (ph ++ o), toks2)
              else
                let (o, toks1) := nlSpecF rest toks fuel
                (b :: o, toks1)

/-- The fuel-free spec: the reference scanner at the canonical
    fuel. -/
def nlSpec (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  nlSpecF src toks (src.length + 1)

/-- The reference scanner's placeholder step, in the same
    normal form as the mirror's. -/
theorem nlSpecF_step_placeholder (src : List Nat) (n : Nat)
    (rest : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (h : readPlaceholder src = some (n, rest)) :
    nlSpecF src toks (fuel + 1) =
      if rest.head? = some 10 ∧ rest.tail.head? ≠ some 10 then
        if newlineScan.beforeBlockClose rest.tail toks = true then
          (src.take (src.length - rest.length) ++
            (nlSpecF rest.tail toks fuel).1,
           (nlSpecF rest.tail toks fuel).2)
        else if newlineScan.junction n rest.tail toks = true then
          (src.take (src.length - rest.length) ++ 10 ::
            (nlSpecF rest.tail toks fuel).1,
           (nlSpecF rest.tail toks fuel).2)
        else
          (src.take (src.length - rest.length) ++
            ((claimTok "Newline" [] toks).1 ++
              (nlSpecF rest.tail (claimTok "Newline" [] toks).2 fuel).1),
           (nlSpecF rest.tail (claimTok "Newline" [] toks).2 fuel).2)
      else
        (src.take (src.length - rest.length) ++
          (nlSpecF rest toks fuel).1,
         (nlSpecF rest toks fuel).2) := by
  cases src with
  | nil => simp [readPlaceholder] at h
  | cons b rest0 =>
      rw [nlSpecF.eq_def]
      simp [h]

/-- The reference scanner's byte step, in the same normal form
    as the mirror's. -/
theorem nlSpecF_step_byte (b : Nat) (rest : List Nat)
    (toks : List TokenEntry) (fuel : Nat)
    (h : readPlaceholder (b :: rest) = none) :
    nlSpecF (b :: rest) toks (fuel + 1) =
      if (b ≠ 10 ∧ rest.head? = some 10) ∧ rest.tail.head? ≠ some 10 then
        if newlineScan.beforeBlockClose rest.tail toks = true then
          (b :: (nlSpecF rest.tail toks fuel).1,
           (nlSpecF rest.tail toks fuel).2)
        else
          (b :: ((claimTok "Newline" [] toks).1 ++
            (nlSpecF rest.tail (claimTok "Newline" [] toks).2 fuel).1),
           (nlSpecF rest.tail (claimTok "Newline" [] toks).2 fuel).2)
      else
        (b :: (nlSpecF rest toks fuel).1,
         (nlSpecF rest toks fuel).2) := by
  rw [nlSpecF.eq_def]
  simp [h]

theorem parainline_newline_go_eq_spec (fuel : Nat) :
    ∀ (src : List Nat) (toks : List TokenEntry),
      src.length + 1 ≤ fuel → newlineScan.go src toks fuel = nlSpecF src toks fuel := by
  induction fuel with
  | zero =>
      intro src toks hf
      exact absurd hf (by omega)
  | succ fuel ih =>
      intro src toks hf
      have htl : ∀ (l : List Nat), l.tail.length ≤ l.length := by
        intro l
        cases l with
        | nil => simp
        | cons x xs => simp
      cases hph : readPlaceholder src with
      | some nr =>
          obtain ⟨n, rest⟩ := nr
          have hrest : rest.length < src.length := readPlaceholder_rest_length hph
          have hb1 : rest.tail.length + 1 ≤ fuel := by
            have := htl rest
            omega
          have hb2 : rest.length + 1 ≤ fuel := by omega
          rw [parainline_newline_go_step_placeholder src n rest toks fuel hph,
            nlSpecF_step_placeholder src n rest toks fuel hph,
            ih rest.tail toks hb1,
            ih rest.tail (claimTok "Newline" [] toks).2 hb1,
            ih rest toks hb2]
      | none =>
          cases src with
          | nil => rfl
          | cons b rest =>
              have hcons : (b :: rest).length = rest.length + 1 := rfl
              have hb1 : rest.tail.length + 1 ≤ fuel := by
                have := htl rest
                omega
              have hb2 : rest.length + 1 ≤ fuel := by omega
              rw [parainline_newline_go_step_byte b rest toks fuel hph,
                nlSpecF_step_byte b rest toks fuel hph,
                ih rest.tail toks hb1,
                ih rest.tail (claimTok "Newline" [] toks).2 hb1,
                ih rest toks hb2]

theorem parainline_newlineScan_eq_spec (src : List Nat) (toks : List TokenEntry) :
    newlineScan src toks = nlSpec src toks := by
  unfold newlineScan nlSpec
  exact parainline_newline_go_eq_spec (src.length + 1) src toks (by omega)

/-- A placeholder read decomposes the source into the consumed
    prefix and the rest. -/
theorem readPlaceholder_decomp {s : List Nat} {n : Nat} {r : List Nat}
    (h : readPlaceholder s = some (n, r)) : ∃ pre, s = pre ++ r := by
  cases s with
  | nil => simp [readPlaceholder] at h
  | cons b rest =>
      by_cases hb : b = 0xFF
      · subst hb
        simp only [readPlaceholder] at h
        by_cases hd : (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).isEmpty
        · simp [hd] at h
        · have hdrop : rest.drop (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).length =
              0xFF :: r := by
            cases hdrop' : rest.drop (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).length with
            | nil => simp [hd, hdrop'] at h
            | cons c r' =>
                by_cases hc : c = 0xFF
                · subst hc
                  have hrr : r' = r := by
                    have hh : (List.foldl (fun a d => a * 10 + (d - 48)) 0
                        (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57))) = n ∧
                        r' = r := by
                      simpa [hd, hdrop'] using h
                    exact hh.2
                  subst hrr
                  rfl
                · simp [hd, hdrop', hc] at h
          refine ⟨(0xFF :: rest.take (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).length) ++ [0xFF], ?_⟩
          have hrest : rest =
              rest.take (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).length ++ (0xFF :: r) := by
            rw [← hdrop]
            exact (List.take_append_drop _ rest).symm
          have e1 : ((0xFF :: rest.take (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).length) ++ [0xFF]) ++ r =
              0xFF :: (rest.take (rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)).length ++ (0xFF :: r)) := by
            simp only [List.append_assoc, List.cons_append, List.nil_append]
          rw [e1]
          congr 1
      · have hnone : readPlaceholder (b :: rest) = none := by
          simp [readPlaceholder, hb]
        rw [hnone] at h
        exact absurd h (by simp)

/-- The scanner is the identity on inputs with no LF byte: no
    window can match, no junction can fire (a junction needs the
    same LF window), placeholders are re-emitted byte-for-byte
    and literal bytes are copied. -/
theorem parainline_newline_go_no_nl : ∀ (fuel : Nat) (src : List Nat)
    (toks : List TokenEntry), (∀ b ∈ src, b ≠ 10) →
    newlineScan.go src toks fuel = (src, toks) := by
  intro fuel
  induction fuel with
  | zero =>
      intro src toks _
      cases src <;> rfl
  | succ fuel ih =>
      intro src toks hno
      cases hph : readPlaceholder src with
      | some nr =>
          obtain ⟨n, rest⟩ := nr
          obtain ⟨pre, hpre⟩ := readPlaceholder_decomp hph
          have hrest_no : ∀ b ∈ rest, b ≠ 10 := by
            intro b hb
            apply hno
            rw [hpre]
            exact List.mem_append_right pre hb
          have hw : ¬(rest.head? = some 10 ∧ rest.tail.head? ≠ some 10) := by
            intro hw
            obtain ⟨h1, -⟩ := hw
            cases hrest : rest with
            | nil =>
                rw [hrest] at h1
                simp at h1
            | cons x xs =>
                rw [hrest] at h1
                have hmem : x ∈ rest := by
                  rw [hrest]
                  exact List.mem_cons.2 (Or.inl rfl)
                exact hrest_no x hmem (Option.some.inj h1)
          rw [parainline_newline_go_step_placeholder src n rest toks fuel hph,
            if_neg hw, ih rest toks hrest_no]
          show (src.take (src.length - rest.length) ++ rest, toks) = (src, toks)
          have htake : src.take (src.length - rest.length) = pre := by
            have hlen : pre.length + rest.length = src.length := by
              rw [hpre]
              simp
            have hsub : src.length - rest.length = pre.length := by omega
            rw [hsub, hpre]
            exact List.take_left' rfl
          rw [htake, hpre]
      | none =>
          cases src with
          | nil => rfl
          | cons b rest =>
              have hb : b ≠ 10 := hno b (List.mem_cons.2 (Or.inl rfl))
              have hrest_no : ∀ b ∈ rest, b ≠ 10 := by
                intro c hc
                exact hno c (List.mem_cons.2 (Or.inr hc))
              by_cases hm : nlWindowMatch b rest = true
              · exfalso
                have hiff := (parainline_newline_window_match_iff b rest).1 hm
                cases hrest : rest with
                | nil =>
                    have h2 := hiff.2.1
                    rw [hrest] at h2
                    simp at h2
                | cons x xs =>
                    have h2 := hiff.2.1
                    rw [hrest] at h2
                    have hmem : x ∈ rest := by
                      rw [hrest]
                      exact List.mem_cons.2 (Or.inl rfl)
                    exact hrest_no x hmem (Option.some.inj h2)
              · rw [parainline_newline_go_step_emission b rest toks fuel hph,
                  if_neg hm]
                have e : (let (o, toks1) := newlineScan.go rest toks fuel;
                    (b :: o, toks1)) =
                    (b :: (newlineScan.go rest toks fuel).1,
                     (newlineScan.go rest toks fuel).2) := rfl
                rw [e, ih rest toks hrest_no]

theorem parainline_newlineSpec_no_nl : ∀ (src : List Nat) (toks : List TokenEntry),
    (∀ b ∈ src, b ≠ 10) → nlSpec src toks = (src, toks) := by
  intro src toks h
  rw [← parainline_newlineScan_eq_spec]
  unfold newlineScan
  exact parainline_newline_go_no_nl (src.length + 1) src toks h

theorem parainline_newlineScan_no_nl_identity (src : List Nat) (toks : List TokenEntry)
    (h : ∀ b ∈ src, b ≠ 10) : newlineScan src toks = (src, toks) := by
  rw [parainline_newlineScan_eq_spec]
  exact parainline_newlineSpec_no_nl src toks h

/-! ## 3. Exact shape of the claimed token tail -/

theorem parainline_newlineScan_tokens_shape (src : List Nat) (toks : List TokenEntry) :
    ∃ k, (newlineScan src toks).2 = toks ++ List.replicate k nlToken := by
  have key : ∀ (fuel : Nat) (src : List Nat) (toks : List TokenEntry),
      ∃ k, (newlineScan.go src toks fuel).2 = toks ++ List.replicate k nlToken := by
    intro fuel
    induction fuel with
    | zero =>
        intro src toks
        exact ⟨0, by cases src <;> simp [newlineScan.go]⟩
    | succ fuel ih =>
        intro src toks
        cases hph : readPlaceholder src with
        | some nr =>
            obtain ⟨n, rest⟩ := nr
            by_cases hw : rest.head? = some 10 ∧ rest.tail.head? ≠ some 10
            · by_cases hbc : newlineScan.beforeBlockClose rest.tail toks = true
              · obtain ⟨k, hk⟩ := ih rest.tail toks
                refine ⟨k, ?_⟩
                rw [parainline_newline_go_step_placeholder src n rest toks fuel hph,
                  if_pos hw, if_pos hbc]
                exact hk
              · by_cases hj : newlineScan.junction n rest.tail toks = true
                · obtain ⟨k, hk⟩ := ih rest.tail toks
                  refine ⟨k, ?_⟩
                  rw [parainline_newline_go_step_placeholder src n rest toks fuel hph,
                    if_pos hw, if_neg hbc, if_pos hj]
                  exact hk
                · obtain ⟨k, hk⟩ := ih rest.tail (toks ++ [nlToken])
                  refine ⟨k + 1, ?_⟩
                  rw [parainline_newline_go_step_placeholder src n rest toks fuel hph,
                    if_pos hw, if_neg hbc, if_neg hj]
                  show (newlineScan.go rest.tail (toks ++ [nlToken]) fuel).2 =
                    toks ++ List.replicate (k + 1) nlToken
                  rw [hk]
                  simp [List.append_assoc, List.replicate_succ]
            · obtain ⟨k, hk⟩ := ih rest toks
              refine ⟨k, ?_⟩
              rw [parainline_newline_go_step_placeholder src n rest toks fuel hph,
                if_neg hw]
              exact hk
        | none =>
            cases src with
            | nil => exact ⟨0, by simp [newlineScan.go, hph]⟩
            | cons b rest =>
                by_cases hw : nlWindowMatch b rest = true
                · by_cases hbc : newlineScan.beforeBlockClose rest.tail toks = true
                  · obtain ⟨k, hk⟩ := ih rest.tail toks
                    refine ⟨k, ?_⟩
                    rw [parainline_newline_go_step_emission b rest toks fuel hph,
                      if_pos hw, if_pos hbc]
                    exact hk
                  · obtain ⟨k, hk⟩ := ih rest.tail (toks ++ [nlToken])
                    refine ⟨k + 1, ?_⟩
                    rw [parainline_newline_go_step_emission b rest toks fuel hph,
                      if_pos hw, if_neg hbc]
                    show (newlineScan.go rest.tail (toks ++ [nlToken]) fuel).2 =
                      toks ++ List.replicate (k + 1) nlToken
                    rw [hk]
                    simp [List.append_assoc, List.replicate_succ]
                · obtain ⟨k, hk⟩ := ih rest toks
                  refine ⟨k, ?_⟩
                  rw [parainline_newline_go_step_emission b rest toks fuel hph,
                    if_neg hw]
                  exact hk
  unfold newlineScan
  exact key (src.length + 1) src toks

theorem parainline_newlineSpec_tokens_shape : ∀ (src : List Nat) (toks : List TokenEntry),
    ∃ k, (nlSpec src toks).2 = toks ++ List.replicate k nlToken := by
  intro src toks
  rw [← parainline_newlineScan_eq_spec]
  exact parainline_newlineScan_tokens_shape src toks

theorem parainline_newlineRule_tokens_shape (st : ParseState) :
    ∃ k, (newlineRule st).tokens = st.tokens ++ List.replicate k nlToken := by
  rcases parainline_newlineScan_tokens_shape (byteForm st.work) st.tokens with ⟨k, hk⟩
  refine ⟨k, ?_⟩
  simpa [newlineRule, applyByteRule] using hk

theorem parainline_newlineRule_ruleNames_eq (st₁ st₂ : ParseState)
    (hold : st₁.tokens.map (·.rule) = st₂.tokens.map (·.rule))
    (hcount : (newlineRule st₁).tokens.length = (newlineRule st₂).tokens.length) :
    (newlineRule st₁).tokens.map (·.rule) = (newlineRule st₂).tokens.map (·.rule) := by
  rcases parainline_newlineRule_tokens_shape st₁ with ⟨k₁, hk₁⟩
  rcases parainline_newlineRule_tokens_shape st₂ with ⟨k₂, hk₂⟩
  have hlenold : st₁.tokens.length = st₂.tokens.length := by
    simpa using congrArg List.length hold
  have hk12 : k₁ = k₂ := by
    simp [hk₁, hk₂] at hcount
    omega
  subst k₂
  simp [hk₁, hk₂, hold]

/-! ## 4. Well-formedness preservation where reachable -/

theorem parainline_newline_wfBytes_mono {bs : List Nat} {n n' : Nat}
    (h : WFBytes bs n) (hle : n ≤ n') : WFBytes bs n' := by
  rcases h with ⟨segs, hwfs, rfl⟩
  refine ⟨segs, ?_, rfl⟩
  rcases hwfs with ⟨hcanon, hidx⟩
  refine ⟨hcanon, ?_⟩
  intro k hk
  exact Nat.lt_of_lt_of_le (hidx k hk) hle

theorem parainline_newline_wfOptVal_mono {n n' : Nat} (hle : n ≤ n') {v : OptVal}
    (h : WFOptVal n v) : WFOptVal n' v := by
  cases v with
  | bytes bs => exact parainline_newline_wfBytes_mono h hle
  | _ => trivial

theorem parainline_newline_wfOptMap_mono {m : OptMap} {n n' : Nat}
    (h : WFOptMap n m) (hle : n ≤ n') : WFOptMap n' m := by
  intro kv hkv
  exact parainline_newline_wfOptVal_mono hle (h kv hkv)

theorem parainline_newline_wfBytePairs_mono {ps : List (List Nat × List Nat)} {n n' : Nat}
    (h : wfBytePairs n ps) (hle : n ≤ n') : wfBytePairs n' ps := by
  intro p hp
  rcases h p hp with ⟨h1, h2⟩
  exact ⟨parainline_newline_wfBytes_mono h1 hle, parainline_newline_wfBytes_mono h2 hle⟩

theorem parainline_newline_wfByteIdPairs_mono {ps : List (List Nat × Nat)} {n n' : Nat}
    (h : wfByteIdPairs n ps) (hle : n ≤ n') : wfByteIdPairs n' ps := by
  intro p hp
  rcases h p hp with ⟨h1, h2⟩
  exact ⟨parainline_newline_wfBytes_mono h1 hle, Nat.lt_of_lt_of_le h2 hle⟩

theorem parainline_newlineRule_wfState_except_work (st : ParseState) (h : WFState st) :
    (∀ t ∈ (newlineRule st).tokens, WFOptMap (newlineRule st).tokens.length t.opts) ∧
    (∀ bs ∈ (newlineRule st).doc.footnotes, WFBytes bs (newlineRule st).tokens.length) ∧
    wfBytePairs (newlineRule st).tokens.length (newlineRule st).doc.bibitems ∧
    wfByteIdPairs (newlineRule st).tokens.length (newlineRule st).doc.bibitemIds ∧
    wfBytePairs (newlineRule st).tokens.length (newlineRule st).doc.scoredAnchors ∧
    (∀ bs ∈ (newlineRule st).continuedDivLeads, WFBytes bs (newlineRule st).tokens.length) := by
  rcases h with ⟨_, hopts, hfoot, hbib, hbid, hanchor, hlead⟩
  rcases parainline_newlineRule_tokens_shape st with ⟨k, hk⟩
  have hlen : st.tokens.length ≤ (newlineRule st).tokens.length := by
    rw [hk]
    simp
  refine ⟨?_, ?_, ?_, ?_, ?_, ?_⟩
  · intro t ht
    rw [hk] at ht
    simp at ht
    rcases ht with ht | ht
    · exact parainline_newline_wfOptMap_mono (hopts t ht) hlen
    · have hnil : t.opts = [] := by
        rcases ht with ⟨_, rfl⟩
        rfl
      rw [hnil]
      intro kv hkv
      simp at hkv
  · intro bs hbs
    exact parainline_newline_wfBytes_mono (hfoot bs hbs) hlen
  · exact parainline_newline_wfBytePairs_mono hbib hlen
  · exact parainline_newline_wfByteIdPairs_mono hbid hlen
  · exact parainline_newline_wfBytePairs_mono hanchor hlen
  · intro bs hbs
    exact parainline_newline_wfBytes_mono (hlead bs hbs) hlen

theorem parainline_newlineRule_wfState (st : ParseState) (h : WFState st)
    (hwork : WFSegs (parseBytes ((newlineScan (byteForm st.work) st.tokens).1))
                    ((newlineScan (byteForm st.work) st.tokens).2).length) :
    WFState (newlineRule st) := by
  rcases parainline_newlineRule_wfState_except_work st h with ⟨ho, hf, hb, hbi, ha, hl⟩
  refine ⟨?_, ho, hf, hb, hbi, ha, hl⟩
  simpa [newlineRule, applyByteRule] using hwork

/-! ## 5. TokEquiv preservation where reachable -/

theorem parainline_newline_list_ruleNames_eq_of_pointwise {l₁ l₂ : List TokenEntry}
    (hlen : l₁.length = l₂.length)
    (hrules : ∀ i (hi : i < l₁.length),
      (l₁.get ⟨i, hi⟩).rule = (l₂.get ⟨i, by simpa [hlen] using hi⟩).rule) :
    l₁.map (·.rule) = l₂.map (·.rule) := by
  induction l₁ generalizing l₂ with
  | nil =>
      have hnil : l₂.length = 0 := by simpa using hlen.symm
      cases l₂ with
      | nil => rfl
      | cons _ _ => simp at hnil
  | cons t ts ih =>
      cases l₂ with
      | nil => simp at hlen
      | cons u us =>
          have h0 : t.rule = u.rule := by
            have hh := hrules 0 (by simp)
            simpa using hh
          have hlen' : ts.length = us.length := by simpa using hlen
          have hrules' : ∀ i (hi : i < ts.length),
              (ts.get ⟨i, hi⟩).rule = (us.get ⟨i, by simpa [hlen'] using hi⟩).rule := by
            intro i hi
            have hh := hrules (i + 1) (by simp [hi])
            simpa using hh
          have hres := ih (l₂ := us) hlen' hrules'
          simp [h0, hres]

theorem parainline_newline_tokEquiv_ruleNames (σ : Nat → Nat) (st₁ st₂ : ParseState)
    (h : TokEquiv σ st₁ st₂) : st₁.tokens.map (·.rule) = st₂.tokens.map (·.rule) := by
  rcases h with ⟨_, hlen, hrules, _⟩
  exact parainline_newline_list_ruleNames_eq_of_pointwise hlen hrules

theorem parainline_newline_list_pointwise_of_ruleNames {l₁ l₂ : List TokenEntry}
    (hlen : l₁.length = l₂.length)
    (h : l₁.map (·.rule) = l₂.map (·.rule)) :
    ∀ i (hi : i < l₁.length),
      (l₁.get ⟨i, hi⟩).rule = (l₂.get ⟨i, by simpa [hlen] using hi⟩).rule := by
  induction l₁ generalizing l₂ with
  | nil =>
      have hnil : l₂.length = 0 := by simpa using hlen.symm
      cases l₂ with
      | nil => intro i hi; omega
      | cons _ _ => simp at hnil
  | cons t ts ih =>
      cases l₂ with
      | nil => simp at hlen
      | cons u us =>
          have hlen' : ts.length = us.length := by simpa using hlen
          simp at h
          rcases h with ⟨h0, htail⟩
          intro i hi
          cases i with
          | zero => simpa using h0
          | succ i =>
              have hi' : i < ts.length := by simpa using hi
              have hh := ih (l₂ := us) hlen' htail i hi'
              simpa using hh

theorem parainline_newlineRule_tokEquiv (σ σ' : Nat → Nat) (st₁ st₂ : ParseState)
    (h : TokEquiv σ st₁ st₂)
    (hcount : (newlineRule st₁).tokens.length = (newlineRule st₂).tokens.length)
    (hwork' : segsTokEquiv σ'
      (parseBytes ((newlineScan (byteForm st₁.work) st₁.tokens).1))
      (parseBytes ((newlineScan (byteForm st₂.work) st₂.tokens).1))) :
    TokEquiv σ' (newlineRule st₁) (newlineRule st₂) := by
  have hnames := parainline_newline_tokEquiv_ruleNames σ st₁ st₂ h
  rcases h with ⟨_, _, _, hfatal⟩
  refine ⟨?_, hcount, ?_, ?_⟩
  · simpa [newlineRule, applyByteRule] using hwork'
  · have hnewnames : (newlineRule st₁).tokens.map (·.rule) =
        (newlineRule st₂).tokens.map (·.rule) :=
      parainline_newlineRule_ruleNames_eq st₁ st₂ hnames hcount
    exact parainline_newline_list_pointwise_of_ruleNames hcount hnewnames
  · simpa [newlineRule, applyByteRule] using hfatal

end LeanFtml

#print axioms LeanFtml.parainline_newline_window_match_iff
#print axioms LeanFtml.parainline_newline_go_step_emission
#print axioms LeanFtml.parainline_newline_go_step_placeholder
#print axioms LeanFtml.parainline_newline_go_no_nl
#print axioms LeanFtml.parainline_newline_go_eq_spec
#print axioms LeanFtml.parainline_newlineScan_eq_spec
#print axioms LeanFtml.parainline_newlineSpec_no_nl
#print axioms LeanFtml.parainline_newlineScan_no_nl_identity
#print axioms LeanFtml.parainline_newlineSpec_tokens_shape
#print axioms LeanFtml.parainline_newlineScan_tokens_shape
#print axioms LeanFtml.parainline_newlineRule_tokens_shape
#print axioms LeanFtml.parainline_newlineRule_ruleNames_eq
#print axioms LeanFtml.parainline_newline_list_ruleNames_eq_of_pointwise
#print axioms LeanFtml.parainline_newline_tokEquiv_ruleNames
#print axioms LeanFtml.parainline_newline_list_pointwise_of_ruleNames
#print axioms LeanFtml.parainline_newline_wfBytes_mono
#print axioms LeanFtml.parainline_newline_wfOptVal_mono
#print axioms LeanFtml.parainline_newline_wfOptMap_mono
#print axioms LeanFtml.parainline_newline_wfBytePairs_mono
#print axioms LeanFtml.parainline_newline_wfByteIdPairs_mono
#print axioms LeanFtml.parainline_newlineRule_wfState_except_work
#print axioms LeanFtml.parainline_newlineRule_wfState
#print axioms LeanFtml.parainline_newlineRule_tokEquiv
/-!
Trailing kernel-dependent remainder (named, not proved, not invented): TCB-2 is
the regex-vs-PcreCore/libpcre2 agreement for `([^\n])\n(?!\n)`; this lane takes
the mirror's `nlWindowMatch` as the spec and does not certify libpcre2. G3 is
the parseBytes/byteForm round trip and the UTF-8 decode/encode identities
(TokenStateProof's open parseBytes_byteForm_id and byteForm_parseBytes_id),
needed for the work-WFSegs conjunct of WFState and the segsTokEquiv work
conjunct of TokEquiv; both are carried as explicit hypotheses in
parainline_newlineRule_wfState and parainline_newlineRule_tokEquiv. No other
remainder is claimed by this file.
-/
