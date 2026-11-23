/-
  LeanFtml.ProofParaNewline — Wave 2 proof/para-inline lane, task-1.

  Policy: ADVISOR-PROOF-POLICY.md §2.2 Class A, `ParaRules` Newline only
  (deterministic 2-byte sliding window `([^\n])\n(?!\n)` with a one-byte
  negative-lookahead). This file proves the kernel-free universal facts about
  `ParaRules.newlineScan` / `newlineRule` that reach the named proof target
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

theorem parainline_newline_go_step_emission (b : Nat) (rest : List Nat)
    (toks : List TokenEntry) (fuel : Nat) :
    newlineScan.go (b :: rest) toks (fuel + 1) =
      if nlWindowMatch b rest then
        let (ph, toks1) := claimTok "Newline" [] toks
        let (o, toks2) := newlineScan.go rest.tail toks1 fuel
        (b :: (ph ++ o), toks2)
      else
        let (o, toks1) := newlineScan.go rest toks fuel
        (b :: o, toks1) := by
  rfl

/-! ## 2. Fuel-free reference scanner and totality / correctness -/

/-- The structurally recursive spec of the newline pass. On a match it emits
    the captured byte followed by a freshly claimed Newline placeholder and
    consumes the LF; otherwise it copies the head byte. A one-byte input has
    no match (the lookahead cannot see an LF), so it is copied. -/
def nlSpec : List Nat → List TokenEntry → List Nat × List TokenEntry
  | [], toks => ([], toks)
  | [b], toks => ([b], toks)
  | b :: nl :: rest, toks =>
      if nlWindowMatch b (nl :: rest) then
        let (ph, toks1) := claimTok "Newline" [] toks
        let (o, toks2) := nlSpec rest toks1
        (b :: (ph ++ o), toks2)
      else
        let (o, toks1) := nlSpec (nl :: rest) toks
        (b :: o, toks1)

theorem parainline_newline_go_eq_spec (fuel : Nat) :
    ∀ (src : List Nat) (toks : List TokenEntry),
      src.length + 1 ≤ fuel → newlineScan.go src toks fuel = nlSpec src toks := by
  induction fuel with
  | zero =>
      intro src toks hf
      have : src.length + 1 ≤ 0 := hf
      omega
  | succ fuel ih =>
      intro src toks hf
      cases src with
      | nil => rfl
      | cons b rest =>
          cases rest with
          | nil =>
              simp [newlineScan.go, nlSpec]
          | cons nl rest' =>
              simp at hf
              by_cases hm : nlWindowMatch b (nl :: rest') = true
              · have hle : rest'.length + 1 ≤ fuel := by omega
                have hm' : (b != 10 && nl == 10 && rest'.head? != some 10) = true := by
                  simpa [nlWindowMatch] using hm
                have hgo : newlineScan.go (b :: nl :: rest') toks (fuel + 1) =
                    (b :: (phBytes toks.length ++
                      (newlineScan.go rest' (toks ++ [nlToken]) fuel).1),
                     (newlineScan.go rest' (toks ++ [nlToken]) fuel).2) := by
                  simp [newlineScan.go, hm', claimTok, nlToken]
                have hspec : nlSpec (b :: nl :: rest') toks =
                    (b :: (phBytes toks.length ++
                      (nlSpec rest' (toks ++ [nlToken])).1),
                     (nlSpec rest' (toks ++ [nlToken])).2) := by
                  simp [nlSpec, hm, claimTok, nlToken]
                rw [hgo, hspec]
                rw [ih rest' (toks ++ [nlToken]) hle]
              · have hle : (nl :: rest').length + 1 ≤ fuel := by omega
                have hm' : (b != 10 && nl == 10 && rest'.head? != some 10) = false := by
                  simpa [nlWindowMatch] using hm
                have hgo : newlineScan.go (b :: nl :: rest') toks (fuel + 1) =
                    (b :: (newlineScan.go (nl :: rest') toks fuel).1,
                     (newlineScan.go (nl :: rest') toks fuel).2) := by
                  simp [newlineScan.go, hm']
                have hspec : nlSpec (b :: nl :: rest') toks =
                    (b :: (nlSpec (nl :: rest') toks).1,
                     (nlSpec (nl :: rest') toks).2) := by
                  simp [nlSpec, hm]
                rw [hgo, hspec]
                rw [ih (nl :: rest') toks hle]

theorem parainline_newlineScan_eq_spec (src : List Nat) (toks : List TokenEntry) :
    newlineScan src toks = nlSpec src toks := by
  unfold newlineScan
  exact parainline_newline_go_eq_spec (src.length + 1) src toks (by omega)

theorem parainline_newlineSpec_no_nl : ∀ (src : List Nat) (toks : List TokenEntry),
    (∀ b ∈ src, b ≠ 10) → nlSpec src toks = (src, toks)
  | [], toks, _ => rfl
  | [b], toks, _ => rfl
  | b :: nl :: rest, toks, h => by
      have hb : b ≠ 10 := h b (by simp)
      have hnl : nl ≠ 10 := h nl (by simp)
      have hm : nlWindowMatch b (nl :: rest) = false := by
        simp [nlWindowMatch, hb, hnl]
      rw [nlSpec]
      simp [hm, parainline_newlineSpec_no_nl (nl :: rest) toks (by
        intro c hc
        exact h c (by simp [hc]))]

theorem parainline_newlineScan_no_nl_identity (src : List Nat) (toks : List TokenEntry)
    (h : ∀ b ∈ src, b ≠ 10) : newlineScan src toks = (src, toks) := by
  rw [parainline_newlineScan_eq_spec]
  exact parainline_newlineSpec_no_nl src toks h

/-! ## 3. Exact shape of the claimed token tail -/

theorem parainline_newlineSpec_tokens_shape : ∀ (src : List Nat) (toks : List TokenEntry),
    ∃ k, (nlSpec src toks).2 = toks ++ List.replicate k nlToken
  | [], toks => ⟨0, by simp [nlSpec]⟩
  | [b], toks => ⟨0, by simp [nlSpec]⟩
  | b :: nl :: rest, toks => by
      by_cases hm : nlWindowMatch b (nl :: rest) = true
      · rcases parainline_newlineSpec_tokens_shape rest ((claimTok "Newline" [] toks).2) with ⟨k, hk⟩
        have hk' : (nlSpec rest (toks ++ [nlToken])).snd =
            (toks ++ [nlToken]) ++ List.replicate k nlToken := by
          simpa [claimTok, nlToken] using hk
        refine ⟨k + 1, ?_⟩
        rw [nlSpec]
        simp [hm]
        change (nlSpec rest (toks ++ [nlToken])).snd =
          toks ++ List.replicate (k + 1) nlToken
        rw [hk']
        simp [List.append_assoc]
        change nlToken :: List.replicate k nlToken = nlToken :: List.replicate k nlToken
        rfl
      · rcases parainline_newlineSpec_tokens_shape (nl :: rest) toks with ⟨k, hk⟩
        refine ⟨k, ?_⟩
        simp [nlSpec, hm, hk]

theorem parainline_newlineScan_tokens_shape (src : List Nat) (toks : List TokenEntry) :
    ∃ k, (newlineScan src toks).2 = toks ++ List.replicate k nlToken := by
  rw [parainline_newlineScan_eq_spec]
  exact parainline_newlineSpec_tokens_shape src toks

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
