import LeanFtml.MiddleRules
import LeanFtml.TokenStateProof

/-!
ProofCenter — the Center proof unit of the Wave 2 block-middle lane (ADVISOR-PROOF-POLICY §4.4 lane 2, Class A MiddleRules). All statements are universal over arbitrary inputs: no ground rfl pins. The proofs use only structural induction on the scanner's fuel and on byte lists, plus omega arithmetic, and stay inside the programme's axiom ceiling [propext, Classical.choice, Quot.sound]. The F1 byte bridge (parseBytes_byteForm_id) is deliberately not assumed: the ParseState-level theorems concern the token table only.
-/

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## Counting function for Center matching lines -/

/-- The number of Center matches a left-to-right scan makes over `src`, given whether the scan begins at a line start. A match is an `= ` pair at a line start; the rest of that line is consumed and scanning resumes at the line end. This counts consecutive lines separately and counts an unterminated final line. -/
def ctrMatchingLines : List Nat → Bool → Nat
  | [], _ => 0
  | [_], _ => 0
  | b :: b2 :: rest, atStart =>
      if atStart && b == 61 && b2 == 32 then
        let body := rest.takeWhile (fun x => x != 10)
        1 + ctrMatchingLines (rest.drop body.length) false
      else
        ctrMatchingLines (b2 :: rest) (b == 10)
termination_by src => src.length
decreasing_by
  · simp
    omega
  · simp

/-! ## The two tokens a Center match claims -/

private def ctrStartTok : TokenEntry :=
  { rule := "Center", opts := [("type".toList, OptVal.str "start".toList)] }

private def ctrEndTok : TokenEntry :=
  { rule := "Center", opts := [("type".toList, OptVal.str "end".toList)] }

/-- The appended part of a Center scan is a concatenation of start/end pairs. -/
private inductive CenterPairList : List TokenEntry → Prop where
  | nil : CenterPairList []
  | cons : CenterPairList xs → CenterPairList (ctrStartTok :: ctrEndTok :: xs)

private theorem centerPairList_eq_replicate {xs : List TokenEntry} (h : CenterPairList xs) :
    ∃ n, xs = List.flatten (List.replicate n [ctrStartTok, ctrEndTok]) := by
  induction h with
  | nil => exact ⟨0, by simp⟩
  | cons h ih =>
      obtain ⟨n, rfl⟩ := ih
      refine ⟨n + 1, ?_⟩
      simp [List.replicate]

private theorem centerPairList_all_rule {xs : List TokenEntry} (h : CenterPairList xs) :
    ∀ t ∈ xs, t.rule = "Center" := by
  induction h with
  | nil => simp
  | cons h ih =>
      intro t ht
      simp only [List.mem_cons] at ht
      rcases ht with rfl | rfl | ht
      · rfl
      · rfl
      · exact ih t ht

private theorem centerPairList_all_shape {xs : List TokenEntry} (h : CenterPairList xs) :
    ∀ t ∈ xs, t.opts = [("type".toList, OptVal.str "start".toList)] ∨
               t.opts = [("type".toList, OptVal.str "end".toList)] := by
  induction h with
  | nil => simp
  | cons h ih =>
      intro t ht
      simp only [List.mem_cons] at ht
      rcases ht with rfl | rfl | ht
      · exact Or.inl rfl
      · exact Or.inr rfl
      · exact ih t ht

private theorem take_append_left {α : Type} (l₁ l₂ : List α) : (l₁ ++ l₂).take l₁.length = l₁ := by
  induction l₁ with
  | nil => simp
  | cons a l ih => simp [ih]

private theorem drop_append_left {α : Type} (l₁ l₂ : List α) : (l₁ ++ l₂).drop l₁.length = l₂ := by
  induction l₁ with
  | nil => simp
  | cons a l ih => simp [ih]

private theorem centerScan_nil (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    centerScan [] toks atStart fuel = ([], toks) := by
  cases fuel <;> rfl

/-! ## The main scanner invariant -/

private theorem centerScan_full (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) (hf : src.length + 1 ≤ fuel) :
    ∃ added,
      (centerScan src toks atStart fuel).2 = toks ++ added ∧
      CenterPairList added ∧
      added.length = 2 * ctrMatchingLines src atStart := by
  induction fuel generalizing src toks atStart with
  | zero => omega
  | succ fuel ih =>
      cases src with
      | nil =>
          exact ⟨[], by simp [centerScan], CenterPairList.nil, by simp [ctrMatchingLines]⟩
      | cons b bs =>
          cases bs with
          | nil =>
              refine ⟨[], ?_, CenterPairList.nil, ?_⟩
              · simp [centerScan, centerScan_nil]
              · simp [ctrMatchingLines]
          | cons b2 rest =>
              simp only [List.length_cons] at hf
              by_cases hm : atStart && b == 61 && b2 == 32
              · have hf_rest : (rest.drop ((rest.takeWhile fun x => x != 10).length)).length + 1 ≤ fuel := by
                  have hle : (rest.drop ((rest.takeWhile fun x => x != 10).length)).length ≤ rest.length := by
                    simp
                  omega
                obtain ⟨added, hadd, hpair, hcount⟩ :=
                  ih (rest.drop ((rest.takeWhile fun x => x != 10).length))
                     (toks ++ [ctrStartTok, ctrEndTok]) false hf_rest
                refine ⟨ctrStartTok :: ctrEndTok :: added, ?_, CenterPairList.cons hpair, ?_⟩
                · simp [centerScan, hm, ctrStartTok, ctrEndTok] at hadd ⊢
                  simpa [List.append_assoc] using hadd
                · simp [ctrMatchingLines, hm]
                  omega
              · have hf2 : rest.length + 2 ≤ fuel := by omega
                have hf_rest : (b2 :: rest).length + 1 ≤ fuel := by
                  simpa [List.length_cons] using hf2
                obtain ⟨added, hadd, hpair, hcount⟩ :=
                  ih (b2 :: rest) toks (b == 10) hf_rest
                refine ⟨added, ?_, hpair, ?_⟩
                · simp [centerScan, hm, hadd]
                · simpa [ctrMatchingLines, hm] using hcount

/-! ## Fuel stability -/

private theorem centerScan_fuel_succ (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) (hf : src.length ≤ fuel) :
    centerScan src toks atStart (fuel + 1) = centerScan src toks atStart fuel := by
  induction fuel generalizing src toks atStart with
  | zero =>
      have hsrc : src = [] := by simpa using Nat.eq_zero_of_le_zero hf
      subst src
      simp [centerScan]
  | succ fuel ih =>
      cases src with
      | nil => simp [centerScan]
      | cons b bs =>
          cases bs with
          | nil =>
              simp [centerScan, centerScan_nil]
          | cons b2 rest =>
              simp only [List.length_cons] at hf
              by_cases hm : atStart && b == 61 && b2 == 32
              · have hf_rest : (rest.drop ((rest.takeWhile fun x => x != 10).length)).length ≤ fuel := by
                  simp
                  omega
                simp [centerScan, hm]
                have h := ih (rest.drop ((rest.takeWhile fun x => x != 10).length))
                       (toks ++ [ctrStartTok, ctrEndTok]) false hf_rest
                exact ⟨by simpa [ctrStartTok, ctrEndTok] using congrArg Prod.fst h,
                       by simpa [ctrStartTok, ctrEndTok] using congrArg Prod.snd h⟩
              · have hf2 : rest.length + 1 ≤ fuel := by omega
                have hf_rest : (b2 :: rest).length ≤ fuel := by
                  simpa [List.length_cons] using hf2
                simp [centerScan, hm]
                have h := ih (b2 :: rest) toks (b == 10) hf_rest
                exact ⟨congrArg Prod.fst h, congrArg Prod.snd h⟩

private theorem centerScan_fuel_at_least (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (k : Nat) :
    centerScan src toks atStart (src.length + 1 + k) =
      centerScan src toks atStart (src.length + 1) := by
  induction k with
  | zero => simp
  | succ k ih =>
      rw [show src.length + 1 + (k + 1) = (src.length + 1 + k) + 1 by omega]
      rw [centerScan_fuel_succ src toks atStart (src.length + 1 + k) (by omega)]
      exact ih

/-! ## trimBytes body behaviour -/

private theorem dropWhile_idem (p : Nat → Bool) (xs : List Nat) :
    (xs.dropWhile p).dropWhile p = xs.dropWhile p := by
  induction xs with
  | nil => simp
  | cons a as ih =>
      by_cases h : p a = true
      · simp [List.dropWhile, h, ih]
      · simp [List.dropWhile, h]

private theorem dropWhile_snoc (p : Nat → Bool) (xs : List Nat) (a : Nat) (ha : p a = false) :
    (xs ++ [a]).dropWhile p = xs.dropWhile p ++ [a] := by
  induction xs with
  | nil => simp [ha]
  | cons x xs ih =>
      by_cases hx : p x = true
      · simp [List.dropWhile, hx, ih]
      · simp [List.dropWhile, hx]

private theorem trimCore_no_lead (p : Nat → Bool) (xs : List Nat) :
    (((xs.dropWhile p).reverse.dropWhile p).reverse).dropWhile p =
      ((xs.dropWhile p).reverse.dropWhile p).reverse := by
  induction xs with
  | nil => simp
  | cons a as ih =>
      by_cases ha : p a = true
      · simpa [List.dropWhile, ha] using ih
      · have ha' : p a = false := by
          cases hpa : p a <;> simp_all
        simp only [List.dropWhile, ha]
        rw [show (a :: as).reverse = as.reverse ++ [a] by simp]
        rw [dropWhile_snoc p as.reverse a ha']
        simp [List.reverse_append, ha]

private theorem dropWhile_all (p : Nat → Bool) (xs : List Nat)
    (h : ∀ a ∈ xs, p a = true) : xs.dropWhile p = [] := by
  induction xs with
  | nil => simp
  | cons a as ih =>
      have ha := h a (by simp)
      simp [List.dropWhile, ha, ih (fun b hb => h b (by simp [hb]))]

private theorem dropWhile_none (p : Nat → Bool) (xs : List Nat)
    (h : ∀ a ∈ xs, p a = false) : xs.dropWhile p = xs := by
  induction xs with
  | nil => simp
  | cons a as ih =>
      have ha := h a (by simp)
      simp [List.dropWhile, ha]

private theorem takeWhile_ne_ten (rest : List Nat) :
    ∀ b ∈ rest.takeWhile (fun x => x != 10), b ≠ 10 := by
  induction rest with
  | nil => simp
  | cons a as ih =>
      by_cases ha : a = 10
      · subst a
        simp
      · intro b hb
        have hab : (a != 10) = true := by simp [ha]
        simp [List.takeWhile, hab] at hb
        rcases hb with rfl | hb
        · exact ha
        · exact ih b hb

private theorem takeWhile_append_all (p : Nat → Bool) (xs ys : List Nat)
    (hx : ∀ x ∈ xs, p x = true) :
    (xs ++ ys).takeWhile p = xs ++ ys.takeWhile p := by
  induction xs with
  | nil => simp
  | cons a as ih =>
      have ha := hx a (by simp)
      simp [ha, ih (fun b hb => hx b (by simp [hb]))]

private theorem takeWhile_eq_self_of_all_ne (xs : List Nat)
    (h : ∀ x ∈ xs, x ≠ 10) : xs.takeWhile (fun x => x != 10) = xs := by
  have h' := takeWhile_append_all (fun x => x != 10) xs []
    (fun x hx => by simp [h x hx])
  simpa using h'

/-! ## Public theorems — scanner token tables -/

/-- Target 1: for arbitrary source, prefix table, line-start flag and fuel (with the sufficient-fuel hypothesis), the scan never rewrites the pre-existing token table. -/
theorem ctr_scan_append_only (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) (hf : src.length + 1 ≤ fuel) :
    (centerScan src toks atStart fuel).2.take toks.length = toks := by
  obtain ⟨added, hadd, _, _⟩ := centerScan_full src toks atStart fuel hf
  rw [hadd]
  exact take_append_left toks added

/-- Target 2: the tokens a scan appends are exactly a concatenation of Center start/end pairs, so they all carry rule "Center" and the type options "start"/"end" alternating. -/
theorem ctr_scan_new_tokens_are_center_pairs (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) (hf : src.length + 1 ≤ fuel) :
    ∃ n : Nat,
      (centerScan src toks atStart fuel).2 =
        toks ++ List.flatten (List.replicate n
          [ { rule := "Center", opts := [("type".toList, OptVal.str "start".toList)] },
            { rule := "Center", opts := [("type".toList, OptVal.str "end".toList)] } ]) := by
  obtain ⟨added, hadd, hpair, _⟩ := centerScan_full src toks atStart fuel hf
  obtain ⟨n, hn⟩ := centerPairList_eq_replicate hpair
  refine ⟨n, ?_⟩
  rw [hadd, hn]
  rfl

/-- Target 2 (per-token form): every newly appended token has rule "Center" and exactly one type option, "start" or "end". -/
theorem ctr_scan_new_tokens_shape (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) (hf : src.length + 1 ≤ fuel) :
    ∀ t ∈ (centerScan src toks atStart fuel).2.drop toks.length,
      t.rule = "Center" ∧
      (t.opts = [("type".toList, OptVal.str "start".toList)] ∨
       t.opts = [("type".toList, OptVal.str "end".toList)]) := by
  obtain ⟨added, hadd, hpair, _⟩ := centerScan_full src toks atStart fuel hf
  rw [hadd, drop_append_left]
  intro t ht
  exact ⟨centerPairList_all_rule hpair t ht, centerPairList_all_shape hpair t ht⟩

/-- Target 3: the exact token count is the initial count plus twice the number of matching lines. The count function counts a line start with `= `, counting consecutive lines and unterminated final lines. -/
theorem ctr_scan_token_count (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) (hf : src.length + 1 ≤ fuel) :
    (centerScan src toks atStart fuel).2.length =
      toks.length + 2 * ctrMatchingLines src atStart := by
  obtain ⟨added, hadd, _, hcount⟩ := centerScan_full src toks atStart fuel hf
  rw [hadd, List.length_append]
  omega

/-- Target 4: any fuel at least `src.length + 1` gives the same result as the canonical fuel. -/
theorem ctr_scan_fuel_stable (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) (hf : src.length + 1 ≤ fuel) :
    centerScan src toks atStart fuel = centerScan src toks atStart (src.length + 1) := by
  obtain ⟨k, hk⟩ := Nat.exists_eq_add_of_le hf
  subst fuel
  exact centerScan_fuel_at_least src toks atStart k

/-! ## Public theorems — trimBytes -/

/-- Target 6: trimBytes is idempotent on arbitrary byte strings. -/
theorem ctr_trimBytes_idempotent (bs : List Nat) : trimBytes (trimBytes bs) = trimBytes bs := by
  unfold trimBytes
  let d := bs.dropWhile isTrimByte
  let e := d.reverse.dropWhile isTrimByte
  change ((e.reverse.dropWhile isTrimByte).reverse.dropWhile isTrimByte).reverse = e.reverse
  have h1 : e.reverse.dropWhile isTrimByte = e.reverse := by
    simpa [d, e] using trimCore_no_lead isTrimByte bs
  rw [h1]
  simp only [List.reverse_reverse]
  have h2 : e.dropWhile isTrimByte = e := by
    simpa [e] using dropWhile_idem isTrimByte d.reverse
  rw [h2]

/-- Target 6: a byte string made only of trim bytes trims to empty. -/
theorem ctr_trimBytes_all_trim (bs : List Nat) (h : ∀ b ∈ bs, isTrimByte b = true) :
    trimBytes bs = [] := by
  have hd : bs.dropWhile isTrimByte = [] := dropWhile_all isTrimByte bs h
  simp [trimBytes, hd]

/-- Target 6: a byte string with no trim bytes at all trims to itself. -/
theorem ctr_trimBytes_none_trim (bs : List Nat) (h : ∀ b ∈ bs, isTrimByte b = false) :
    trimBytes bs = bs := by
  have hd : bs.dropWhile isTrimByte = bs := dropWhile_none isTrimByte bs h
  have hr : bs.reverse.dropWhile isTrimByte = bs.reverse :=
    dropWhile_none isTrimByte bs.reverse (fun b hb => h b (List.mem_reverse.mp hb))
  simp [trimBytes, hd, hr]

/-- Target 6: the body a Center match trims contains no newline byte. -/
theorem ctr_center_body_no_newline (rest : List Nat) :
    ∀ b ∈ rest.takeWhile (fun x => x != 10), b ≠ 10 := by
  exact takeWhile_ne_ten rest

/-! ## Public theorems — ParseState level (no F1 byte bridge used) -/

/-- Target 5: centerRule never rewrites the incoming token table. -/
theorem ctr_centerRule_tokens_append_only (st : ParseState) :
    (centerRule st).tokens.take st.tokens.length = st.tokens := by
  simpa [centerRule, applyByteRule] using
    (ctr_scan_append_only (byteForm st.work) st.tokens true
      ((byteForm st.work).length + 1) (by omega))

/-- Target 5: centerRule's new tokens are exactly Center start/end pairs. -/
theorem ctr_centerRule_new_tokens_are_center_pairs (st : ParseState) :
    ∃ n : Nat,
      (centerRule st).tokens =
        st.tokens ++ List.flatten (List.replicate n
          [ { rule := "Center", opts := [("type".toList, OptVal.str "start".toList)] },
            { rule := "Center", opts := [("type".toList, OptVal.str "end".toList)] } ]) := by
  simpa [centerRule, applyByteRule] using
    (ctr_scan_new_tokens_are_center_pairs (byteForm st.work) st.tokens true
      ((byteForm st.work).length + 1) (by omega))

/-- Target 5: every token centerRule appends carries rule "Center" and the exact type option. -/
theorem ctr_centerRule_new_tokens_shape (st : ParseState) :
    ∀ t ∈ (centerRule st).tokens.drop st.tokens.length,
      t.rule = "Center" ∧
      (t.opts = [("type".toList, OptVal.str "start".toList)] ∨
       t.opts = [("type".toList, OptVal.str "end".toList)]) := by
  simpa [centerRule, applyByteRule] using
    (ctr_scan_new_tokens_shape (byteForm st.work) st.tokens true
      ((byteForm st.work).length + 1) (by omega))

/-- Target 5: the exact token count after centerRule. -/
theorem ctr_centerRule_token_count (st : ParseState) :
    (centerRule st).tokens.length =
      st.tokens.length + 2 * ctrMatchingLines (byteForm st.work) true := by
  simpa [centerRule, applyByteRule] using
    (ctr_scan_token_count (byteForm st.work) st.tokens true
      ((byteForm st.work).length + 1) (by omega))

/-- Target 6, universal consecutive/unterminated coverage: two consecutive Center lines, the second unterminated, make exactly two matches. -/
theorem ctr_scan_consecutive_unterminated (a b : List Nat)
    (ha : ∀ x ∈ a, x ≠ 10) (hb : ∀ x ∈ b, x ≠ 10) :
    ctrMatchingLines (61 :: 32 :: a ++ 10 :: 61 :: 32 :: b) true = 2 := by
  have ht_a : (a ++ 10 :: 61 :: 32 :: b).takeWhile (fun x => x != 10) = a := by
    have h' := takeWhile_append_all (fun x => x != 10) a (10 :: 61 :: 32 :: b)
      (fun x hx => by simp [ha x hx])
    simpa using h'
  have hd_a : (a ++ 10 :: 61 :: 32 :: b).drop a.length = 10 :: 61 :: 32 :: b :=
    drop_append_left a (10 :: 61 :: 32 :: b)
  have ht_b : b.takeWhile (fun x => x != 10) = b := takeWhile_eq_self_of_all_ne b hb
  have hd_b : b.drop b.length = ([] : List Nat) := by
    simp
  simp [ctrMatchingLines, ht_a, hd_a, ht_b, hd_b]

/-! ## Conditional WFState statement — gated on F1's unproved byte bridge

The theorem below is CONDITIONAL. The hypothesis `hwork` is exactly the work-component invariant that F1's unproved `parseBytes_byteForm_id` / `byteForm_parseBytes_id` bridges would supply once they land; it is NOT proved here, and no unconditional WFState preservation claim is made. Everything else about WFState preservation is proved unconditionally from the token-table results above.
-/

private theorem wfSegs_mono {segs : List TSeg} {n n' : Nat} (h : WFSegs segs n) (hle : n ≤ n') : WFSegs segs n' :=
  ⟨h.1, fun k hk => Nat.lt_of_lt_of_le (h.2 k hk) hle⟩

private theorem wfBytes_mono {bs : List Nat} {n n' : Nat} (h : WFBytes bs n) (hle : n ≤ n') : WFBytes bs n' := by
  rcases h with ⟨segs, hs, rfl⟩
  exact ⟨segs, wfSegs_mono hs hle, rfl⟩

private theorem wfOptVal_mono {n n' : Nat} (v : OptVal) (h : WFOptVal n v) (hle : n ≤ n') : WFOptVal n' v := by
  cases v with
  | bytes bs => exact wfBytes_mono h hle
  | str s => trivial
  | int i => trivial
  | bool b => trivial
  | null => trivial
  | map m => trivial
  | list l => trivial

private theorem wfOptMap_mono {n n' : Nat} (m : OptMap) (h : WFOptMap n m) (hle : n ≤ n') : WFOptMap n' m := by
  intro kv hkv
  exact wfOptVal_mono kv.2 (h kv hkv) hle

private theorem wfBytePairs_mono {n n' : Nat} (ps : List (List Nat × List Nat)) (h : wfBytePairs n ps) (hle : n ≤ n') : wfBytePairs n' ps := by
  intro p hp
  have hp' := h p hp
  exact ⟨wfBytes_mono hp'.1 hle, wfBytes_mono hp'.2 hle⟩

private theorem wfByteIdPairs_mono {n n' : Nat} (ps : List (List Nat × Nat)) (h : wfByteIdPairs n ps) (hle : n ≤ n') : wfByteIdPairs n' ps := by
  intro p hp
  have hp' := h p hp
  exact ⟨wfBytes_mono hp'.1 hle, Nat.lt_of_lt_of_le hp'.2 hle⟩

private theorem wfOptMap_center_tok (t : TokenEntry)
    (ht : t.opts = [("type".toList, OptVal.str "start".toList)] ∨
          t.opts = [("type".toList, OptVal.str "end".toList)]) (n : Nat) : WFOptMap n t.opts := by
  rcases ht with h | h <;> simp [WFOptMap, WFOptVal, h]

/-- CONDITIONAL on F1's unproved byte bridge: if the rewritten work component is well formed at the new token-table length (the invariant F1's bridges would supply), then centerRule preserves WFState. The token-table, option, and document-state parts are unconditional corollaries of ctr_centerRule_token_count and ctr_centerRule_new_tokens_shape; only the work-component hypothesis is assumed. No unconditional WFState preservation is asserted. -/
theorem ctr_centerRule_wf_conditional (st : ParseState) (hwf : WFState st)
    (hwork : WFSegs (centerRule st).work (centerRule st).tokens.length) :
    WFState (centerRule st) := by
  have hcnt := ctr_centerRule_token_count st
  have hlen : st.tokens.length ≤ (centerRule st).tokens.length := by omega
  unfold WFState at hwf ⊢
  refine ⟨hwork, ?_, ?_, ?_, ?_, ?_, ?_⟩
  · obtain ⟨m, hm⟩ := ctr_centerRule_new_tokens_are_center_pairs st
    intro t ht
    rw [hm] at ht
    simp only [List.mem_append] at ht
    rcases ht with htold | htnew
    · exact wfOptMap_mono _ (hwf.2.1 t htold) hlen
    · have hshape := ctr_centerRule_new_tokens_shape st t (by simpa [hm] using htnew)
      exact wfOptMap_center_tok t hshape.2 (centerRule st).tokens.length
  · intro bs hbs
    exact wfBytes_mono (hwf.2.2.1 bs hbs) hlen
  · exact wfBytePairs_mono _ hwf.2.2.2.1 hlen
  · exact wfByteIdPairs_mono _ hwf.2.2.2.2.1 hlen
  · exact wfBytePairs_mono _ hwf.2.2.2.2.2.1 hlen
  · intro bs hbs
    exact wfBytes_mono (hwf.2.2.2.2.2.2 bs hbs) hlen

#print axioms ctr_scan_append_only
#print axioms ctr_scan_new_tokens_are_center_pairs
#print axioms ctr_scan_new_tokens_shape
#print axioms ctr_scan_token_count
#print axioms ctr_scan_fuel_stable
#print axioms ctr_trimBytes_idempotent
#print axioms ctr_trimBytes_all_trim
#print axioms ctr_trimBytes_none_trim
#print axioms ctr_center_body_no_newline
#print axioms ctr_centerRule_tokens_append_only
#print axioms ctr_centerRule_new_tokens_are_center_pairs
#print axioms ctr_centerRule_new_tokens_shape
#print axioms ctr_centerRule_token_count
#print axioms ctr_scan_consecutive_unterminated
#print axioms ctr_centerRule_wf_conditional

end LeanFtml
