/-
  LeanFtml.ProofBreak — the Break proof unit of the Wave 2 block-middle lane
  (ADVISOR-PROOF-POLICY §2.2 Class A: MiddleRules accept general universal
  theorems now). Every theorem below is universal over arbitrary sources,
  token tables and fuel values; no ground pins, no F1 byte bridge, no
  unproved invariants. The mirror's `breakScan` and `breakRule` are taken
  verbatim from LeanFtml.MiddleRules; this file only proves facts about them.
-/
import LeanFtml.MiddleRules
import LeanFtml.TokenStateProof

namespace LeanFtml

set_option maxHeartbeats 2000000

/-- The single token entry Break's scanner appends. -/
private def brkTok : TokenEntry := { rule := "Break", opts := [] }

/-- The literal three-byte pattern `/ _\n/`, written as bytes. -/
private def brkMatch (b b2 b3 : Nat) : Bool := b == 32 && b2 == 95 && b3 == 10

/-- Fuel-free canonical form of the mirror's left-to-right scan. On a match
    the three pattern bytes are consumed and scanning resumes after them; on
    a non-match exactly one byte is copied and the window slides one byte. -/
private def brkScanFull : List Nat → List TokenEntry → List Nat × List TokenEntry
  | [], toks => ([], toks)
  | b :: b2 :: b3 :: rest, toks =>
      if brkMatch b b2 b3 then
        let (out, toks') := brkScanFull rest (toks ++ [brkTok])
        (phBytes toks.length ++ out, toks')
      else
        let (out, toks') := brkScanFull (b2 :: b3 :: rest) toks
        (b :: out, toks')
  | b :: bs, toks =>
      let (out, toks') := brkScanFull bs toks
      (b :: out, toks')

/-- Number of non-overlapping pattern occurrences under the scan's own
    greedy left-to-right consumption discipline. -/
private def brkCount : List Nat → Nat
  | [] => 0
  | b :: b2 :: b3 :: rest =>
      if brkMatch b b2 b3 then 1 + brkCount rest else brkCount (b2 :: b3 :: rest)
  | _ => 0

/-- Canonical output bytes with the placeholder index carried explicitly.
    The second component is the next token index; a copied byte leaves it
    unchanged, a match emits the placeholder for the current index and
    increments it. -/
private def brkOutAux : List Nat → Nat → List Nat × Nat
  | [], k => ([], k)
  | b :: b2 :: b3 :: rest, k =>
      if brkMatch b b2 b3 then
        let (out, k') := brkOutAux rest (k + 1)
        (phBytes k ++ out, k')
      else
        let (out, k') := brkOutAux (b2 :: b3 :: rest) k
        (b :: out, k')
  | b :: bs, k =>
      let (out, k') := brkOutAux bs k
      (b :: out, k')

private theorem brk_take_append_left {α : Type} (xs ys : List α) :
    (xs ++ ys).take xs.length = xs := by
  induction xs with
  | nil => simp
  | cons x xs ih => simp

private theorem brk_drop_append_left {α : Type} (xs ys : List α) :
    (xs ++ ys).drop xs.length = ys := by
  induction xs with
  | nil => simp
  | cons x xs ih => simp

/-- The empty source always returns the table unchanged, at any fuel. -/
private theorem brk_scan_nil (toks : List TokenEntry) (fuel : Nat) :
    breakScan [] toks fuel = ([], toks) := by
  cases fuel <;> rfl

/-- The token table of ANY fuel-limited scan is the input table followed by
    a list of Break tokens. This holds even when fuel runs out early: the
    mirror's fuel-0 branch returns the table unchanged. -/
private theorem brk_scan_suffix (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    ∃ added : List TokenEntry,
      (breakScan src toks fuel).2 = toks ++ added ∧
      ∀ t ∈ added, t.rule = "Break" ∧ t.opts = [] := by
  induction fuel generalizing src toks with
  | zero =>
      exact ⟨[], by simp [breakScan], by simp⟩
  | succ f ih =>
      cases src with
      | nil => exact ⟨[], by simp [brk_scan_nil], by simp⟩
      | cons b bs =>
          cases bs with
          | nil => simp [breakScan, brk_scan_nil]
          | cons b2 bs2 =>
              cases bs2 with
              | nil => simpa [breakScan, brk_scan_nil] using ih [b2] toks
              | cons b3 rest =>
                  simp only [breakScan]
                  by_cases hm : b == 32 && b2 == 95 && b3 == 10
                  · simp [hm]
                    rcases ih rest (toks ++ [brkTok]) with ⟨added, ht, hall⟩
                    refine ⟨brkTok :: added, ?_, ?_⟩
                    · simpa [brkTok, List.append_assoc] using ht
                    · intro t htmem
                      simp only [List.mem_cons] at htmem
                      rcases htmem with rfl | htmem
                      · simp [brkTok]
                      · exact hall t htmem
                  · simp [hm]
                    exact ih (b2 :: b3 :: rest) toks

/-- A scan with fuel at least the source length agrees with the canonical
    fuel-free scan. Each step of `breakScan` consumes at least one byte and
    decrements fuel by one, so induction on fuel alone suffices. -/
private theorem brk_scan_eq_full (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hfuel : src.length ≤ fuel) : breakScan src toks fuel = brkScanFull src toks := by
  induction fuel generalizing src toks with
  | zero =>
      cases src with
      | nil => simp [breakScan, brkScanFull]
      | cons b bs => simp at hfuel
  | succ f ih =>
      cases src with
      | nil => simp [brk_scan_nil, brkScanFull]
      | cons b bs =>
          cases bs with
          | nil => simp [breakScan, brk_scan_nil, brkScanFull]
          | cons b2 bs2 =>
              cases bs2 with
              | nil =>
                  cases f with
                  | zero => simp at hfuel
                  | succ f' =>
                      simp [breakScan, brk_scan_nil, brkScanFull]
              | cons b3 rest =>
                  simp only [breakScan, brkScanFull]
                  by_cases hm : b == 32 && b2 == 95 && b3 == 10
                  · simp only [brkMatch, hm, ↓reduceIte]
                    have hf' : rest.length ≤ f := by simp at hfuel; omega
                    rw [show breakScan rest (toks ++ [{ rule := "Break", opts := [] }]) f =
                        breakScan rest (toks ++ [brkTok]) f from rfl]
                    rw [ih rest (toks ++ [brkTok]) hf']
                  · simp [brkMatch, hm]
                    have hf' : (b2 :: b3 :: rest).length ≤ f := by simp at hfuel; omega
                    rw [ih (b2 :: b3 :: rest) toks hf']
                    exact ⟨rfl, rfl⟩

/-- The canonical scan appends exactly one Break token per counted match. -/
private theorem brk_count_full (src : List Nat) (toks : List TokenEntry) :
    (brkScanFull src toks).2 = toks ++ List.replicate (brkCount src) brkTok := by
  induction hlen : src.length using Nat.strongRecOn generalizing src toks with
  | ind n ih =>
      cases src with
      | nil => simp [brkScanFull, brkCount]
      | cons b bs =>
          cases bs with
          | nil => simp [brkScanFull, brkCount]
          | cons b2 bs2 =>
              cases bs2 with
              | nil => simp [brkScanFull, brkCount]
              | cons b3 rest =>
                  simp only [brkScanFull, brkCount]
                  by_cases hm : brkMatch b b2 b3
                  · simp [hm]
                    have hlt : rest.length < n := by simp at hlen; omega
                    rw [ih rest.length hlt rest (toks ++ [brkTok]) rfl]
                    have hone : 1 + brkCount rest = brkCount rest + 1 := by omega
                    rw [hone, List.replicate_succ]
                    simp [List.append_assoc]
                  · simp [hm]
                    have hlt : (b2 :: b3 :: rest).length < n := by simp at hlen ⊢; omega
                    rw [ih (b2 :: b3 :: rest).length hlt (b2 :: b3 :: rest) toks rfl]

/-- The canonical scan's output bytes are exactly the source bytes with each
    matched triple replaced by the placeholder for its ordinal match index. -/
private theorem brk_full_out (src : List Nat) (toks : List TokenEntry) :
    (brkScanFull src toks).1 = (brkOutAux src toks.length).1 := by
  induction hlen : src.length using Nat.strongRecOn generalizing src toks with
  | ind n ih =>
      cases src with
      | nil => simp [brkScanFull, brkOutAux]
      | cons b bs =>
          cases bs with
          | nil => simp [brkScanFull, brkOutAux]
          | cons b2 bs2 =>
              cases bs2 with
              | nil => simp [brkScanFull, brkOutAux]
              | cons b3 rest =>
                  simp only [brkScanFull, brkOutAux]
                  by_cases hm : brkMatch b b2 b3
                  · simp [hm]
                    have hlt : rest.length < n := by simp at hlen; omega
                    rw [ih rest.length hlt rest (toks ++ [brkTok]) rfl]
                    simp [brkTok]
                  · simp [hm]
                    have hlt : (b2 :: b3 :: rest).length < n := by simp at hlen ⊢; omega
                    rw [ih (b2 :: b3 :: rest).length hlt (b2 :: b3 :: rest) toks rfl]

/-- When the greedy match count is zero, the canonical scan copies every
    source byte unchanged: no byte belongs to a match. -/
private theorem brk_full_out_no_match (src : List Nat) (toks : List TokenEntry)
    (h : brkCount src = 0) : (brkScanFull src toks).1 = src := by
  induction src generalizing toks with
  | nil => simp [brkScanFull]
  | cons b bs ih =>
      cases bs with
      | nil => simp [brkScanFull]
      | cons b2 bs2 =>
          cases bs2 with
          | nil => simp [brkScanFull]
          | cons b3 rest =>
              simp only [brkScanFull, brkCount] at h ⊢
              by_cases hm : brkMatch b b2 b3
              · simp [hm] at h
              · simp [hm] at h ⊢
                rw [ih toks h]

/-! ## Public theorems — Break scanner -/

/-- TARGET 1. For every source, token table and fuel, the token table of
    `breakScan` is append-only: its prefix of the original length is the
    original table. -/
theorem brk_scan_append_only (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    (breakScan src toks fuel).2.take toks.length = toks := by
  rcases brk_scan_suffix src toks fuel with ⟨added, ht, _⟩
  rw [ht]
  exact brk_take_append_left toks added

/-- TARGET 2. Every token appended by `breakScan` has rule "Break" and an
    empty option map, for every source and fuel. -/
theorem brk_scan_new_tokens_break (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    ∀ t ∈ (breakScan src toks fuel).2.drop toks.length,
      t.rule = "Break" ∧ t.opts = [] := by
  rcases brk_scan_suffix src toks fuel with ⟨added, ht, hall⟩
  rw [ht]
  simpa [brk_drop_append_left] using hall

/-- Exactly the appended suffix, for sufficient fuel. -/
theorem brk_scan_exact_tokens (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hfuel : src.length ≤ fuel) :
    (breakScan src toks fuel).2 = toks ++ List.replicate (brkCount src) brkTok := by
  rw [brk_scan_eq_full src toks fuel hfuel]
  exact brk_count_full src toks

/-- TARGET 3. The number of claimed tokens is the original table length plus
    the number of non-overlapping `[32, 95, 10]` occurrences in the source. -/
theorem brk_scan_count (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hfuel : src.length ≤ fuel) :
    (breakScan src toks fuel).2.length = toks.length + brkCount src := by
  rw [brk_scan_exact_tokens src toks fuel hfuel]
  simp

/-- TARGET 4. Fuel stability: any fuel at least `src.length + 1` gives the
    same result as the canonical fuel used by `breakRule`. -/
theorem brk_scan_fuel_stable (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hfuel : src.length + 1 ≤ fuel) :
    breakScan src toks fuel = breakScan src toks (src.length + 1) := by
  exact (brk_scan_eq_full src toks fuel (by omega)).trans
    (brk_scan_eq_full src toks (src.length + 1) (by omega)).symm

/-- The canonical scan is the fuel-free scan; `breakRule` itself runs at
    exactly this fuel. -/
theorem brk_scan_canonical (src : List Nat) (toks : List TokenEntry) :
    breakScan src toks (src.length + 1) = brkScanFull src toks := by
  exact brk_scan_eq_full src toks (src.length + 1) (by omega)

/-- TARGET 6a. Exact byte output: matched triples become placeholders whose
    indices are the match ordinals offset by the input table length; every
    other source byte is copied in order. -/
theorem brk_scan_bytes_output (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hfuel : src.length ≤ fuel) :
    (breakScan src toks fuel).1 = (brkOutAux src toks.length).1 := by
  rw [brk_scan_eq_full src toks fuel hfuel]
  exact brk_full_out src toks

/-- TARGET 6b. If there is no match at all, every byte is preserved. -/
theorem brk_scan_bytes_unchanged_no_match (src : List Nat) (toks : List TokenEntry)
    (fuel : Nat) (hfuel : src.length ≤ fuel) (h : brkCount src = 0) :
    (breakScan src toks fuel).1 = src := by
  rw [brk_scan_eq_full src toks fuel hfuel]
  exact brk_full_out_no_match src toks h

/-! ## Public theorems — Break rule at ParseState level (no F1 bridge) -/

/-- TARGET 5a. `breakRule` is append-only on the token table. No property of
    `parseBytes` or of well-formedness is used: `applyByteRule` stores the
    scanner's returned token table verbatim. -/
theorem brk_rule_append_only (st : ParseState) :
    (breakRule st).tokens.take st.tokens.length = st.tokens := by
  unfold breakRule applyByteRule
  dsimp
  exact brk_scan_append_only (byteForm st.work) st.tokens ((byteForm st.work).length + 1)

/-- TARGET 5b. Every token `breakRule` appends has rule "Break" and empty
    options. -/
theorem brk_rule_new_tokens_break (st : ParseState) :
    ∀ t ∈ (breakRule st).tokens.drop st.tokens.length,
      t.rule = "Break" ∧ t.opts = [] := by
  unfold breakRule applyByteRule
  dsimp
  exact brk_scan_new_tokens_break (byteForm st.work) st.tokens ((byteForm st.work).length + 1)

/-- The exact appended suffix at rule level. -/
theorem brk_rule_exact_tokens (st : ParseState) :
    (breakRule st).tokens =
      st.tokens ++ List.replicate (brkCount (byteForm st.work)) brkTok := by
  unfold breakRule applyByteRule
  dsimp
  exact brk_scan_exact_tokens (byteForm st.work) st.tokens _ (by omega)

/-- The exact token count at rule level. -/
theorem brk_rule_token_count (st : ParseState) :
    (breakRule st).tokens.length = st.tokens.length + brkCount (byteForm st.work) := by
  rw [brk_rule_exact_tokens]
  simp

/-- Other ParseState fields are untouched by the rule. -/
theorem brk_rule_other_fields (st : ParseState) :
    (breakRule st).doc = st.doc ∧
    (breakRule st).fatal = st.fatal ∧
    (breakRule st).continuedDivLeads = st.continuedDivLeads := by
  unfold breakRule applyByteRule
  dsimp
  exact ⟨rfl, rfl, rfl⟩

/-! ## TARGET 7 — explicitly conditional statements only

    The two theorems below take their bridge-dependent content as explicit
    hypotheses. Neither assumption is proved in this lane; F1 records
    `parseBytes_byteForm_id` as an open obligation in TokenStateProof.lean.
    No unconditional WFState or TokEquiv preservation claim is made. -/

private theorem brk_wfs_mono {segs : List TSeg} {n m : Nat}
    (h : WFSegs segs n) (hnm : n ≤ m) : WFSegs segs m := by
  rcases h with ⟨hc, hi⟩
  exact ⟨hc, fun k hk => Nat.lt_of_lt_of_le (hi k hk) hnm⟩

private theorem brk_wfbytes_mono {bs : List Nat} {n m : Nat}
    (h : WFBytes bs n) (hnm : n ≤ m) : WFBytes bs m := by
  rcases h with ⟨segs, hw, rfl⟩
  exact ⟨segs, brk_wfs_mono hw hnm, rfl⟩

private theorem brk_wfoptval_mono {v : OptVal} {n m : Nat}
    (h : WFOptVal n v) (hnm : n ≤ m) : WFOptVal m v := by
  cases v with
  | bytes bs => exact brk_wfbytes_mono h hnm
  | str _ => trivial
  | int _ => trivial
  | bool _ => trivial
  | null => trivial
  | map _ => trivial
  | list _ => trivial

private theorem brk_wfoptmap_mono {om : OptMap} {n m : Nat}
    (h : WFOptMap n om) (hnm : n ≤ m) : WFOptMap m om := by
  intro kv hk
  exact brk_wfoptval_mono (h kv hk) hnm

private theorem brk_wfbytePairs_mono {ps : List (List Nat × List Nat)} {n m : Nat}
    (h : wfBytePairs n ps) (hnm : n ≤ m) : wfBytePairs m ps := by
  intro p hp
  rcases h p hp with ⟨h1, h2⟩
  exact ⟨brk_wfbytes_mono h1 hnm, brk_wfbytes_mono h2 hnm⟩

private theorem brk_wfbyteIdPairs_mono {ps : List (List Nat × Nat)} {n m : Nat}
    (h : wfByteIdPairs n ps) (hnm : n ≤ m) : wfByteIdPairs m ps := by
  intro p hp
  rcases h p hp with ⟨h1, h2⟩
  exact ⟨brk_wfbytes_mono h1 hnm, Nat.lt_of_lt_of_le h2 hnm⟩

/-- CONDITIONAL on F1's unproved bridge for this state's byte form. With no
    match, the scanner is the identity on bytes and tokens, so the bridge
    instance `parseBytes (byteForm st.work) = st.work` makes the rule the
    identity on the whole state. -/
theorem brk_rule_eq_self_conditional (st : ParseState)
    (hcount : brkCount (byteForm st.work) = 0)
    (hbridge : parseBytes (byteForm st.work) = st.work) :
    breakRule st = st := by
  have hfuel : (byteForm st.work).length ≤ (byteForm st.work).length + 1 := by omega
  have hbytes :
      (breakScan (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).1 =
        byteForm st.work :=
    brk_scan_bytes_unchanged_no_match (byteForm st.work) st.tokens _ hfuel hcount
  have htoks :
      (breakScan (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).2 =
        st.tokens := by
    rw [brk_scan_exact_tokens (byteForm st.work) st.tokens _ hfuel]
    simp [hcount]
  unfold breakRule applyByteRule
  dsimp
  rw [hbytes, htoks, hbridge]

/-- CONDITIONAL on F1's unproved bridge, via `brk_rule_eq_self_conditional`.
    On a no-match state the rule is TokEquiv-identical to the identity. -/
theorem brk_rule_tokEquiv_conditional (st : ParseState)
    (hcount : brkCount (byteForm st.work) = 0)
    (hbridge : parseBytes (byteForm st.work) = st.work) :
    TokEquiv (fun k => k) st (breakRule st) := by
  rw [brk_rule_eq_self_conditional st hcount hbridge]
  exact tokEquiv_refl (fun k => k) (fun k => rfl) st

/-- CONDITIONAL on the bridge-dependent work-side obligation, stated as the
    single hypothesis `hnew`: the new work is WFSegs at the new table length.
    Everything else — token options, document registries, side channels —
    is proved universally from append-onlyness and length monotonicity. -/
theorem brk_rule_wf_conditional (st : ParseState) (hwf : WFState st)
    (hnew : WFSegs (breakRule st).work (breakRule st).tokens.length) :
    WFState (breakRule st) := by
  have hlen : st.tokens.length ≤ (breakRule st).tokens.length := by
    rw [brk_rule_exact_tokens]
    simp
  rcases hwf with ⟨hsegs, hopts, hfoot, hbib, hbibid, hanchor, hlead⟩
  refine ⟨hnew, ?_, ?_, ?_, ?_, ?_, ?_⟩
  · intro t ht
    have hsplit : t ∈ st.tokens ∨ t ∈ (breakRule st).tokens.drop st.tokens.length := by
      rw [brk_rule_exact_tokens] at ht ⊢
      simp only [List.mem_append] at ht
      rcases ht with ht | ht
      · exact Or.inl ht
      · exact Or.inr (by simpa [brk_drop_append_left] using ht)
    rcases hsplit with hold | hnewtok
    · exact brk_wfoptmap_mono (hopts t hold) hlen
    · have hb := brk_rule_new_tokens_break st t hnewtok
      rw [hb.2]
      simp [WFOptMap]
  · have hdoc := (brk_rule_other_fields st).1
    rw [hdoc]
    intro bs hb
    exact brk_wfbytes_mono (hfoot bs hb) hlen
  · have hdoc := (brk_rule_other_fields st).1
    rw [hdoc]
    exact brk_wfbytePairs_mono hbib hlen
  · have hdoc := (brk_rule_other_fields st).1
    rw [hdoc]
    exact brk_wfbyteIdPairs_mono hbibid hlen
  · have hdoc := (brk_rule_other_fields st).1
    rw [hdoc]
    exact brk_wfbytePairs_mono hanchor hlen
  · have hleadfield := (brk_rule_other_fields st).2.2
    rw [hleadfield]
    intro bs hb
    exact brk_wfbytes_mono (hlead bs hb) hlen

#print axioms brk_scan_append_only
#print axioms brk_scan_new_tokens_break
#print axioms brk_scan_exact_tokens
#print axioms brk_scan_count
#print axioms brk_scan_fuel_stable
#print axioms brk_scan_canonical
#print axioms brk_scan_bytes_output
#print axioms brk_scan_bytes_unchanged_no_match
#print axioms brk_rule_append_only
#print axioms brk_rule_new_tokens_break
#print axioms brk_rule_exact_tokens
#print axioms brk_rule_token_count
#print axioms brk_rule_other_fields
#print axioms brk_rule_eq_self_conditional
#print axioms brk_rule_tokEquiv_conditional
#print axioms brk_rule_wf_conditional

end LeanFtml
