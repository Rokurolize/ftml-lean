/-
  LeanFtml.ProofInline2 — Wave 2 para-inline proof lane, Class B base-class PCRE unit.
  Policy: ADVISOR-PROOF-POLICY §2.2, rules Colortext/Strong/Emphasis/Underline/Strikethrough.
  Proved here: fuel-exact structural specifications of the three shared scanners (pairBodyLen,
  colorBodyScan, emphCloseScan), exact byte/length bounds and newline barriers for those scans,
  the color parse admission class at placeholder and newline bytes, exact placeholder and token
  arithmetic for pairClaim, the Colortext opener shape, the Underline deletion alternative,
  generic token-table append-only invariance for pregScan, and Strikethrough rule token append
  plus doc/fatal invariance for all five mirrors.
  Named kernel-dependent remainder (NOT proved here, NOT claimed): (TCB-2) agreement of the
  hand-compiled scanners with PcreCore and libpcre2 on the extracted PHP regexes for these
  five rules, including lazy backtracking order, /U quantifier inversion and C1 empty-pair
  precedence; (TCB-2/TCB-4) process() callback equality against the extracted RefTables specs;
  (TCB-1 bridge) full WFState preservation, which needs the unproved parseBytes_byteForm_id and
  byteForm_parseBytes_id bridge theorems of TokenStateProof; (coordinator scope) TokEquiv across
  batch runs compares mirror and reference states rather than one rule's own state transition;
  and the per-matcher token-append laws for Colortext/Strong/Emphasis/Underline are left to the
  kernel-dependent process()-callback correspondence. No regex-vs-PHP agreement is attempted.
-/
import LeanFtml.Inline2Rules
import LeanFtml.TokenStateProof

namespace LeanFtml

/-! ## Fuel-free specifications of the three shared scanners -/

/-- The fuel-free structural reading of `pairBodyLen.go`: at index `n` of the head list, a newline ends the scan, a whitespace first byte ends it, a non-whitespace byte whose following two bytes are the marker pair yields `n + 1`, and otherwise the scan advances one byte. -/
def pairBodyLenSpec (marker : Nat) (n : Nat) : List Nat → Option Nat
  | [] => none
  | b :: rest =>
      if b == 10 then none
      else if n == 0 && isWsByte b then none
      else if !isWsByte b && rest.take 2 == [marker, marker] then some (n + 1)
      else pairBodyLenSpec marker (n + 1) rest

/-- The fuel-free structural reading of `colorBodyScan.go`: `acc` is the reverse of the bytes consumed so far. A `##` with a nonempty accumulator closes the body; a `##` with an empty accumulator consumes its first `#` as body content and re-examines from its second `#`. -/
def colorBodyScanSpec : List Nat → List Nat → Option (List Nat × List Nat)
  | [], _ => none
  | 10 :: _, _ => none
  | 35 :: 35 :: rest, acc =>
      if acc.isEmpty then colorBodyScanSpec (35 :: rest) (35 :: acc)
      else some (acc.reverse, rest)
  | b :: rest, acc => colorBodyScanSpec rest (b :: acc)

/-- The fuel-free structural reading of `emphCloseScan.go`: the first `//` before any newline closes, including a `//` at distance zero. -/
def emphCloseScanSpec : List Nat → List Nat → Option (List Nat × List Nat)
  | [], _ => none
  | 10 :: _, _ => none
  | 47 :: 47 :: rest, acc => some (acc.reverse, rest)
  | b :: rest, acc => emphCloseScanSpec rest (b :: acc)

/-! ## Fuel exactness: the scanners never truncate early -/

private theorem pairBodyLen_go_spec (marker : Nat) (bs : List Nat) (n k : Nat)
    (h : bs.length + 1 ≤ k) :
    pairBodyLen.go marker bs n k = pairBodyLenSpec marker n bs := by
  induction bs generalizing n k with
  | nil =>
      cases k with
      | zero => simp at h
      | succ k' => rfl
  | cons b tl ih =>
      cases k with
      | zero => simp at h
      | succ k' =>
          simp only [List.length_cons] at h
          have hk' : tl.length + 1 ≤ k' := by omega
          by_cases h10 : b == 10
          · simp [pairBodyLen.go, pairBodyLenSpec, h10]
          · by_cases hws : n == 0 && isWsByte b
            · simp [pairBodyLen.go, pairBodyLenSpec, h10, hws]
            · by_cases hcand : !isWsByte b && tl.take 2 == [marker, marker]
              · simp [pairBodyLen.go, pairBodyLenSpec, h10, hws, hcand]
              · simp [pairBodyLen.go, pairBodyLenSpec, h10, hws, hcand, ih (n + 1) k' hk']

theorem parainline_inline2_pairBodyLen_eq_spec (marker : Nat) (bs : List Nat) :
    pairBodyLen marker bs = pairBodyLenSpec marker 0 bs := by
  unfold pairBodyLen
  exact pairBodyLen_go_spec marker bs 0 (bs.length + 1) (by omega)

private theorem colorBodyScan_go_spec (bs acc : List Nat) (k : Nat) (h : bs.length + 1 ≤ k) :
    colorBodyScan.go bs acc k = colorBodyScanSpec bs acc := by
  induction bs generalizing acc k with
  | nil =>
      cases k with
      | zero => simp at h
      | succ k' => rfl
  | cons b tl ih =>
      cases k with
      | zero => simp at h
      | succ k' =>
          simp only [List.length_cons] at h
          have hk' : tl.length + 1 ≤ k' := by omega
          by_cases hb10 : b = 10
          · subst b
            rfl
          · by_cases hb35 : b = 35
            · subst b
              cases tl with
              | nil =>
                  unfold colorBodyScan.go
                  simp [colorBodyScanSpec, ih (35 :: acc) k' hk']
              | cons c cs =>
                  by_cases hc35 : c = 35
                  · subst c
                    by_cases hempty : acc.isEmpty
                    · unfold colorBodyScan.go
                      simp [colorBodyScanSpec, hempty, ih (35 :: acc) k' hk']
                    · unfold colorBodyScan.go
                      simp [colorBodyScanSpec, hempty]
                  · unfold colorBodyScan.go
                    simp [colorBodyScanSpec, hc35, ih (35 :: acc) k' (by omega)]
            · unfold colorBodyScan.go
              simp [colorBodyScanSpec, hb10, hb35, ih (b :: acc) k' hk']

theorem parainline_inline2_colorBodyScan_eq_spec (bs : List Nat) :
    colorBodyScan bs = colorBodyScanSpec bs [] := by
  unfold colorBodyScan
  exact colorBodyScan_go_spec bs [] (bs.length + 1) (by omega)

private theorem emphCloseScan_go_spec (bs acc : List Nat) (k : Nat) (h : bs.length + 1 ≤ k) :
    emphCloseScan.go bs acc k = emphCloseScanSpec bs acc := by
  induction bs generalizing acc k with
  | nil =>
      cases k with
      | zero => simp at h
      | succ k' => rfl
  | cons b tl ih =>
      cases k with
      | zero => simp at h
      | succ k' =>
          simp only [List.length_cons] at h
          have hk' : tl.length + 1 ≤ k' := by omega
          by_cases hb10 : b = 10
          · subst b
            rfl
          · by_cases hb47 : b = 47
            · subst b
              cases tl with
              | nil =>
                  unfold emphCloseScan.go
                  simp [emphCloseScanSpec, ih (47 :: acc) k' hk']
              | cons c cs =>
                  by_cases hc47 : c = 47
                  · subst c
                    rfl
                  · unfold emphCloseScan.go
                    simp [emphCloseScanSpec, hc47, ih (47 :: acc) k' (by omega)]
            · unfold emphCloseScan.go
              simp [emphCloseScanSpec, hb10, hb47, ih (b :: acc) k' hk']

theorem parainline_inline2_emphCloseScan_eq_spec (bs : List Nat) :
    emphCloseScan bs = emphCloseScanSpec bs [] := by
  unfold emphCloseScan
  exact emphCloseScan_go_spec bs [] (bs.length + 1) (by omega)

/-! ## Exact arithmetic of the shared pair-body scan -/

private theorem pairBodyLenSpec_bounds (marker n : Nat) (bs : List Nat) (l : Nat)
    (h : pairBodyLenSpec marker n bs = some l) :
    n < l ∧ l + 2 ≤ n + bs.length := by
  induction bs generalizing n with
  | nil => simp [pairBodyLenSpec] at h
  | cons b tl ih =>
      by_cases h10 : b == 10
      · simp [pairBodyLenSpec, h10] at h
      · by_cases hws : n == 0 && isWsByte b
        · simp [pairBodyLenSpec, h10, hws] at h
        · by_cases hcand : !isWsByte b && tl.take 2 == [marker, marker]
          · have htakeBool : tl.take 2 == [marker, marker] := by
              by_cases ht : tl.take 2 == [marker, marker]
              · exact ht
              · have hfalse : (!isWsByte b && tl.take 2 == [marker, marker]) = false := by
                  cases hw : isWsByte b <;> simp [hw, ht]
                simp [hfalse] at hcand
            have htake : tl.take 2 = [marker, marker] := by simpa using htakeBool
            have hrs : 2 ≤ tl.length := by
              cases tl with
              | nil =>
                  have hlen := congrArg List.length htake
                  change 0 = 2 at hlen
                  omega
              | cons c1 tl1 =>
                  cases tl1 with
                  | nil =>
                      have hlen := congrArg List.length htake
                      change 1 = 2 at hlen
                      omega
                  | cons c2 tl2 => simp
            simp [pairBodyLenSpec, h10, hws, hcand] at h
            have hl : l = n + 1 := h.symm
            subst l
            have hlen : (b :: tl).length = tl.length + 1 := rfl
            rw [hlen]
            constructor <;> omega
          · simp [pairBodyLenSpec, h10, hws, hcand] at h
            have hih := ih (n + 1) h
            have hlen : (b :: tl).length = tl.length + 1 := rfl
            rw [hlen]
            constructor <;> omega

theorem parainline_inline2_pairBodyLen_bounds (marker : Nat) (bs : List Nat) (l : Nat)
    (h : pairBodyLen marker bs = some l) : 1 ≤ l ∧ l + 2 ≤ bs.length := by
  rw [parainline_inline2_pairBodyLen_eq_spec] at h
  have hb := pairBodyLenSpec_bounds marker 0 bs l h
  omega

theorem parainline_inline2_pairBodyLen_nil (marker : Nat) :
    pairBodyLen marker [] = none := by
  simp [pairBodyLen, pairBodyLen.go]

theorem parainline_inline2_pairBodyLen_newline (marker : Nat) (bs : List Nat) :
    pairBodyLen marker (10 :: bs) = none := by
  simp [pairBodyLen, pairBodyLen.go]

theorem parainline_inline2_colorBodyScan_newline (bs : List Nat) :
    colorBodyScan (10 :: bs) = none := by
  simp [colorBodyScan, colorBodyScan.go]

theorem parainline_inline2_emphCloseScan_newline (bs : List Nat) :
    emphCloseScan (10 :: bs) = none := by
  simp [emphCloseScan, emphCloseScan.go]

/-! ## The color parse admission class -/

theorem parainline_inline2_colorParseCharB_ff : colorParseCharB 255 = false := by
  decide

theorem parainline_inline2_colorParseCharB_newline : colorParseCharB 10 = false := by
  decide

/-! ## Placeholder and token arithmetic of pairClaim -/

theorem parainline_inline2_pairClaim_shape (rule : String) (marker : Nat) (bs : List Nat)
    (toks : List TokenEntry) (rest repl : List Nat) (toks2 : List TokenEntry)
    (h : pairClaim rule marker bs toks = some (rest, repl, toks2)) :
    ∃ l rest0, bs = marker :: marker :: rest0 ∧ pairBodyLen marker rest0 = some l ∧
      rest = rest0.drop (l + 2) ∧
      repl = phBytes toks.length ++ rest0.take l ++ phBytes (toks.length + 1) ∧
      toks2 = toks ++
        [{ rule := rule, opts := [("type".toList, OptVal.str "start".toList)] },
         { rule := rule, opts := [("type".toList, OptVal.str "end".toList)] }] := by
  unfold pairClaim at h
  cases bs with
  | nil => simp at h
  | cons m1 bs1 =>
      cases bs1 with
      | nil => simp at h
      | cons m2 rest0 =>
          by_cases hm1 : m1 == marker
          · by_cases hm2 : m2 == marker
            · have hm1' : m1 = marker := by simpa using hm1
              have hm2' : m2 = marker := by simpa using hm2
              subst m1
              subst m2
              simp at h
              rcases hpbl : pairBodyLen marker rest0 with _ | l
              · simp [hpbl] at h
              · simp [hpbl] at h
                rcases h with ⟨hr, hre, ht⟩
                subst rest
                have hre' : repl = phBytes toks.length ++ rest0.take l ++ phBytes (toks.length + 1) := by
                  simpa [claimTok, List.append_assoc] using hre.symm
                have ht' : toks2 = toks ++
                    [{ rule := rule, opts := [("type".toList, OptVal.str "start".toList)] },
                     { rule := rule, opts := [("type".toList, OptVal.str "end".toList)] }] := by
                  simpa [claimTok] using ht.symm
                exact ⟨l, rest0, rfl, hpbl, rfl, hre', ht'⟩
            · simp [hm1, hm2] at h
          · simp [hm1] at h

theorem parainline_inline2_pairClaim_tokens_append (rule : String) (marker : Nat) (bs : List Nat)
    (toks : List TokenEntry) (res : List Nat × List Nat × List TokenEntry)
    (h : pairClaim rule marker bs toks = some res) :
    ∃ add, res.2.2 = toks ++ add := by
  rcases res with ⟨rest, repl, toks2⟩
  rcases parainline_inline2_pairClaim_shape rule marker bs toks rest repl toks2 h with
    ⟨l, rest0, hbs, hpbl, hr, hre, ht⟩
  have ht' : toks2 = toks ++
      [{ rule := rule, opts := [("type".toList, OptVal.str "start".toList)] },
       { rule := rule, opts := [("type".toList, OptVal.str "end".toList)] }] := by
    simpa [claimTok] using ht
  exact ⟨[{ rule := rule, opts := [("type".toList, OptVal.str "start".toList)] },
    { rule := rule, opts := [("type".toList, OptVal.str "end".toList)] }], ht'⟩

theorem parainline_inline2_pairClaim_none_newline (rule : String) (marker : Nat)
    (bs : List Nat) (toks : List TokenEntry) :
    pairClaim rule marker (marker :: marker :: 10 :: bs) toks = none := by
  simp [pairClaim, parainline_inline2_pairBodyLen_newline]

private theorem pairClaim_rest_lt (rule : String) (marker : Nat) (bs : List Nat)
    (toks : List TokenEntry) (rest repl : List Nat) (toks2 : List TokenEntry)
    (h : pairClaim rule marker bs toks = some (rest, repl, toks2)) : rest.length < bs.length := by
  rcases parainline_inline2_pairClaim_shape rule marker bs toks rest repl toks2 h with
    ⟨l, rest0, hbs, hpbl, hr, hre, ht⟩
  subst bs
  subst rest
  have hb := parainline_inline2_pairBodyLen_bounds marker rest0 l hpbl
  simp only [List.length_cons, List.length_drop]
  omega

/-! ## Matcher-level universals -/

theorem parainline_inline2_colortextMatch_opener (bs : List Nat) (toks : List TokenEntry)
    (res : List Nat × List Nat × List TokenEntry)
    (h : colortextMatch bs toks = some res) :
    ∃ rest0, bs = 35 :: 35 :: rest0 := by
  unfold colortextMatch at h
  cases bs with
  | nil => simp at h
  | cons b1 bs1 =>
      cases bs1 with
      | nil => simp at h
      | cons b2 rest0 =>
          by_cases hb1 : b1 = 35
          · by_cases hb2 : b2 = 35
            · subst b1; subst b2; exact ⟨rest0, rfl⟩
            · simp [hb1, hb2] at h
          · simp [hb1] at h

theorem parainline_inline2_underlineMatch_quad (rest : List Nat) (toks : List TokenEntry) :
    underlineMatch (95 :: 95 :: 95 :: 95 :: rest) toks = some (rest, [], toks) := by
  simp [underlineMatch]

/-! ## Token-table append-only invariance for pregScan and the Strikethrough rule -/

private theorem pregScan_go_append
    (m : List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry))
    (hmtok : ∀ bs toks rest repl ts,
      m bs toks = some (rest, repl, ts) → ∃ add, ts = toks ++ add)
    (hmrest : ∀ bs toks rest repl ts,
      m bs toks = some (rest, repl, ts) → rest.length < bs.length) :
    ∀ k bs toks, bs.length < k → ∃ add, (pregScan.go m bs toks k).2 = toks ++ add := by
  intro k
  induction k with
  | zero => intro bs toks hlen; omega
  | succ k' ih =>
      intro bs toks hlen
      cases bs with
      | nil =>
          refine ⟨[], ?_⟩
          simp [pregScan.go]
      | cons b tl =>
          simp only [List.length_cons] at hlen
          have hk' : tl.length < k' := by omega
          rcases hm : m (b :: tl) toks with _ | ⟨rest', repl, toks'⟩
          · simp [pregScan.go, hm]
            exact ih tl toks hk'
          · have hlt := hmrest (b :: tl) toks rest' repl toks' hm
            simp only [List.length_cons] at hlt
            have hf' : rest'.length < k' := by omega
            rcases hmtok (b :: tl) toks rest' repl toks' hm with ⟨add, hadd⟩
            rcases ih rest' toks' hf' with ⟨add2, hadd2⟩
            refine ⟨add ++ add2, ?_⟩
            simp [pregScan.go, hm]
            rw [hadd2, hadd]
            simp [List.append_assoc]

theorem parainline_inline2_pregScan_append
    (m : List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry))
    (hmtok : ∀ bs toks rest repl ts,
      m bs toks = some (rest, repl, ts) → ∃ add, ts = toks ++ add)
    (hmrest : ∀ bs toks rest repl ts,
      m bs toks = some (rest, repl, ts) → rest.length < bs.length)
    (bs : List Nat) (toks : List TokenEntry) :
    ∃ add, (pregScan m bs toks).2 = toks ++ add := by
  unfold pregScan
  exact pregScan_go_append m hmtok hmrest (bs.length + 1) bs toks (by omega)

theorem parainline_inline2_strikethroughRule_tokens_append (st : ParseState) :
    ∃ add, (strikethroughRule st).tokens = st.tokens ++ add := by
  simp only [strikethroughRule, applyByteRule]
  apply parainline_inline2_pregScan_append
  · intro bs toks rest repl ts h
    exact parainline_inline2_pairClaim_tokens_append "Strikethrough" 45 bs toks (rest, repl, ts) h
  · intro bs toks rest repl ts h
    exact pairClaim_rest_lt "Strikethrough" 45 bs toks rest repl ts h

theorem parainline_inline2_rules_doc_fatal (st : ParseState) :
    (colortextRule st).doc = st.doc ∧ (colortextRule st).fatal = st.fatal ∧
    (strongRule st).doc = st.doc ∧ (strongRule st).fatal = st.fatal ∧
    (emphasisRule st).doc = st.doc ∧ (emphasisRule st).fatal = st.fatal ∧
    (underlineRule st).doc = st.doc ∧ (underlineRule st).fatal = st.fatal ∧
    (strikethroughRule st).doc = st.doc ∧ (strikethroughRule st).fatal = st.fatal := by
  simp [colortextRule, strongRule, emphasisRule, underlineRule, strikethroughRule, applyByteRule]

/-! ## Axiom audit of the headline theorems -/

#print axioms parainline_inline2_pairBodyLen_eq_spec
#print axioms parainline_inline2_pairBodyLen_bounds
#print axioms parainline_inline2_pairBodyLen_nil
#print axioms parainline_inline2_pairBodyLen_newline
#print axioms parainline_inline2_colorBodyScan_eq_spec
#print axioms parainline_inline2_colorBodyScan_newline
#print axioms parainline_inline2_emphCloseScan_eq_spec
#print axioms parainline_inline2_emphCloseScan_newline
#print axioms parainline_inline2_colorParseCharB_ff
#print axioms parainline_inline2_colorParseCharB_newline
#print axioms parainline_inline2_pairClaim_shape
#print axioms parainline_inline2_pairClaim_tokens_append
#print axioms parainline_inline2_pairClaim_none_newline
#print axioms parainline_inline2_colortextMatch_opener
#print axioms parainline_inline2_underlineMatch_quad
#print axioms parainline_inline2_pregScan_append
#print axioms parainline_inline2_strikethroughRule_tokens_append
#print axioms parainline_inline2_rules_doc_fatal

end LeanFtml
