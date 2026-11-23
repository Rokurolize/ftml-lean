-- ProofNextFinalBase.lean — kernel-free universal theorems for FinalRules' User, Button, Embed, Social and File rules.
-- Wave 2 next-final proof lane, unit U4. All declarations live in namespace LeanFtml.NextFinal.FinalBase.
-- Mirror sources are read only; this file proves properties of the mirror's actual functions, never of a second copy.
-- Axiom discipline: no sorry, no native_decide, no bv_decide, no placeholder axioms; only [propext, Classical.choice, Quot.sound].
--
-- NAMED KERNEL-DEPENDENT REMAINDER. The five *MatcherPcreObligation Props below state that each rule's matcher (*MatchAt lifted to a scan matcher) agrees with the mechanically extracted PHP regex decomposition under PcreCore (TCB-2) and RefTables (TCB-4). Those artifacts are not present in this mirror revision, so the obligations are kept abstract as section parameters and reduced CONDITIONALLY: finalPregScan_eq_of_correspondence plus *Rule_eq_ref_of_correspondence show that once a matcher correspondence is supplied, the whole rule equals the reference rule modulo the shared kernel-free scan. Discharging the five obligations against the extracted regex strings is the kernel-dependent remainder and is explicitly NOT claimed here. A second remainder is placeholder byte arithmetic: phBytes depends on token index, so equality under a batch token base belongs to the TokEquiv lane, not to this file. No mirror divergence witness was found in these five rules; the FinalRules header records that no dedicated live validation ever ran for them, so all statements here are Lean-internal.
--
-- Prose is kept on single lines; no hard wrapping.

import LeanFtml.FinalRules

set_option maxRecDepth 10000

namespace LeanFtml.NextFinal.FinalBase

/-! ## Generic scan machinery: one token per match, append laws -/

/-- A scan matcher is token-monotone when every match it reports extends the incoming token table by some suffix. -/
def TokenMono (m : List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry)) : Prop :=
  ∀ (src : List Nat) (toks : List TokenEntry) (rest repl : List Nat) (toks' : List TokenEntry),
    m src toks = some (rest, repl, toks') → ∃ added, toks' = toks ++ added

/-- A scan matcher appends exactly k tokens on every match it reports. -/
def AppendsExactly (m : List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry)) (k : Nat) : Prop :=
  ∀ (src : List Nat) (toks : List TokenEntry) (rest repl : List Nat) (toks' : List TokenEntry),
    m src toks = some (rest, repl, toks') → toks'.length = toks.length + k

/-- The shared scan's token table at every fuel always extends the incoming table, provided the matcher is token-monotone. Universal over arbitrary bytes, tables and fuel. -/
theorem finalPregScan_go_tokens_extend (m) (hm : TokenMono m) :
    ∀ (fuel : Nat) (src : List Nat) (toks : List TokenEntry),
      ∃ added, (finalPregScan.go m src toks fuel).2 = toks ++ added := by
  intro fuel
  induction fuel with
  | zero =>
      intro src toks
      cases src <;> refine ⟨[], ?_⟩ <;> simp [finalPregScan.go]
  | succ fuel ih =>
      intro src toks
      cases src with
      | nil => refine ⟨[], ?_⟩ <;> simp [finalPregScan.go]
      | cons b t =>
          cases hmcase : m (b :: t) toks with
          | none =>
              simp [finalPregScan.go, hmcase]
              exact ih t toks
          | some x =>
              rcases x with ⟨rest', repl, toks'⟩
              simp [finalPregScan.go, hmcase]
              rcases hm (b :: t) toks rest' repl toks' hmcase with ⟨a1, ha1⟩
              rcases ih rest' toks' with ⟨a2, ha2⟩
              refine ⟨a1 ++ a2, ?_⟩
              rw [ha2]
              rw [ha1]
              exact List.append_assoc toks a1 a2

/-- The full shared scan extends the incoming token table for every token-monotone matcher. -/
theorem finalPregScan_tokens_extend (m) (hm : TokenMono m) (bs : List Nat) (toks : List TokenEntry) :
    ∃ added, (finalPregScan m bs toks).2 = toks ++ added := by
  unfold finalPregScan
  exact finalPregScan_go_tokens_extend m hm (bs.length + 1) bs toks

/-- A faithful fuel-indexed count of the matches the shared scan performs. It threads the token table because a matcher's reported match may depend on it. -/
def pregMatchCount
    (m : List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry)) :
    List Nat → List TokenEntry → Nat → Nat
  | [], _, _ => 0
  | _, _, 0 => 0
  | src@(b :: rest), toks, fuel + 1 =>
      match m src toks with
      | some (rest', _, toks') => 1 + pregMatchCount m rest' toks' fuel
      | none => pregMatchCount m rest toks fuel

/-- For a matcher appending exactly one token per match, the scan's token count is the incoming count plus the number of matches. This is the kernel-free one-token-per-match law. -/
theorem finalPregScan_go_len (m) (hm : AppendsExactly m 1) :
    ∀ (fuel : Nat) (src : List Nat) (toks : List TokenEntry),
      (finalPregScan.go m src toks fuel).2.length = toks.length + pregMatchCount m src toks fuel := by
  intro fuel
  induction fuel with
  | zero =>
      intro src toks
      cases src <;> simp [finalPregScan.go, pregMatchCount]
  | succ fuel ih =>
      intro src toks
      cases src with
      | nil => simp [finalPregScan.go, pregMatchCount]
      | cons b t =>
          cases hmcase : m (b :: t) toks with
          | none =>
              simp [finalPregScan.go, pregMatchCount, hmcase]
              exact ih t toks
          | some x =>
              rcases x with ⟨rest', repl, toks'⟩
              have hlen := hm (b :: t) toks rest' repl toks' hmcase
              simp [finalPregScan.go, pregMatchCount, hmcase]
              rw [ih rest' toks']
              omega

/-- The full scan appends exactly one token per match counted by pregMatchCount. -/
theorem finalPregScan_len (m) (hm : AppendsExactly m 1) (bs : List Nat) (toks : List TokenEntry) :
    (finalPregScan m bs toks).2.length = toks.length + pregMatchCount m bs toks (bs.length + 1) := by
  unfold finalPregScan
  exact finalPregScan_go_len m hm (bs.length + 1) bs toks

/-! ## Byte-helper facts used by the matcher shape laws -/

/-- A successful case-insensitive literal match consumes exactly the pattern length. -/
theorem matchLitCI_length_eq (pat src rest : List Nat) (h : matchLitCI pat src = some rest) :
    src.length = pat.length + rest.length := by
  induction pat generalizing src rest with
  | nil =>
      cases src with
      | nil =>
          simp [matchLitCI] at h
          subst rest
          simp
      | cons x xs =>
          simp [matchLitCI] at h
          subst rest
          simp
  | cons p pt ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p = true
          · simp [matchLitCI, hb] at h
            have hi := ih xs rest h
            simp_all
            omega
          · simp [matchLitCI, hb] at h

/-- A successful case-insensitive literal match of a nonempty pattern strictly shortens the source. -/
theorem matchLitCI_length_pos (pat src rest : List Nat) (h : matchLitCI pat src = some rest) (hp : 0 < pat.length) :
    rest.length < src.length := by
  have heq := matchLitCI_length_eq pat src rest h
  omega

/-- trimBytes and getAttrsBytes on the empty byte string, needed by the absent-group laws. -/
theorem trimBytes_nil : trimBytes [] = [] := rfl
theorem getAttrsBytes_nil : getAttrsBytes [] = [] := rfl

/-! ## User -/

theorem userMatchAt_of_no_prefix (src : List Nat) (h : matchLitBytes (litBytes "[[") src = none) :
    userMatchAt src = none := by
  simp [userMatchAt, h]

/-- A reported User match extends the table by exactly one claimed token. -/
theorem userMatch_token_mono : TokenMono userMatch := by
  intro src toks rest repl toks' h
  cases hu : userMatchAt src with
  | none => simp [userMatch, hu] at h
  | some u =>
      rcases u with ⟨starred, name, rest'⟩
      let opts : OptMap := [("userName".toList, textVal name)] ++
        (if starred then [("image".toList, OptVal.bool true)] else [])
      have hcalc : userMatch src toks = some (rest', (claimTok "User" opts toks).1, (claimTok "User" opts toks).2) := by
        simp [userMatch, hu, opts]
      rw [hcalc] at h
      cases h
      refine ⟨[{ rule := "User", opts := opts }], ?_⟩
      simp [claimTok]

theorem userMatch_appends_one : AppendsExactly userMatch 1 := by
  intro src toks rest repl toks' h
  cases hu : userMatchAt src with
  | none => simp [userMatch, hu] at h
  | some u =>
      rcases u with ⟨starred, name, rest'⟩
      let opts : OptMap := [("userName".toList, textVal name)] ++
        (if starred then [("image".toList, OptVal.bool true)] else [])
      have hcalc : userMatch src toks = some (rest', (claimTok "User" opts toks).1, (claimTok "User" opts toks).2) := by
        simp [userMatch, hu, opts]
      rw [hcalc] at h
      cases h
      simp [claimTok]

theorem userRule_preserves_doc_fatal (st : ParseState) :
    (userRule st).doc = st.doc ∧ (userRule st).fatal = st.fatal := by
  simp [userRule, applyByteRule]

theorem userRule_tokens_extend (st : ParseState) :
    ∃ added, (userRule st).tokens = st.tokens ++ added := by
  change ∃ added, (finalPregScan userMatch (byteForm st.work) st.tokens).2 = st.tokens ++ added
  exact finalPregScan_tokens_extend userMatch userMatch_token_mono _ _

theorem userRule_token_count (st : ParseState) :
    (userRule st).tokens.length = st.tokens.length +
      pregMatchCount userMatch (byteForm st.work) st.tokens ((byteForm st.work).length + 1) := by
  change (finalPregScan userMatch (byteForm st.work) st.tokens).2.length =
    st.tokens.length + pregMatchCount userMatch (byteForm st.work) st.tokens ((byteForm st.work).length + 1)
  exact finalPregScan_len userMatch userMatch_appends_one _ _

/-! ## Button -/

theorem buttonMatchAt_of_no_prefix (src : List Nat) (h : matchLitCI (litBytes "[[button") src = none) :
    buttonMatchAt src = none := by
  simp [buttonMatchAt, h]

/-- The whitespace-varying helper tryW can only return a PRESENT group: its group always comes from lazyGroupToClose. -/
theorem buttonTail_tryW_group_nonempty (r : List Nat) (w : Nat) (g : Option (List Nat)) (rest : List Nat)
    (h : buttonTail.tryW r w = some (g, rest)) : g ≠ none := by
  induction w with
  | zero => simp [buttonTail.tryW] at h
  | succ w ih =>
      simp [buttonTail.tryW] at h
      cases hlgc : lazyGroupToClose (r.drop (w + 1)) with
      | none =>
          simp [hlgc] at h
          exact ih h
      | some x =>
          rcases x with ⟨g', r2⟩
          simp [hlgc] at h
          rcases h with ⟨hg, hr⟩
          subst g
          simp

/-- An absent Button group arises exactly from an immediate closing pair: two bracket bytes at the head. -/
theorem buttonTail_none_has_brackets (r rest : List Nat) (h : buttonTail r = some (none, rest)) :
    r = 93 :: 93 :: rest := by
  unfold buttonTail at h
  cases ht : buttonTail.tryW r ((r.takeWhile isWsByte).length) with
  | some x =>
      rcases x with ⟨g0, r0⟩
      simp [ht] at h
      rcases h with ⟨hg, hr⟩
      subst g0
      exact False.elim ((buttonTail_tryW_group_nonempty r _ none r0 ht) rfl)
  | none =>
      simp [ht] at h
      cases r with
      | nil => simp at h
      | cons b t =>
          cases t with
          | nil => simp at h
          | cons b2 t2 =>
              by_cases hb : b = 93
              · subst b
                by_cases hb2 : b2 = 93
                · subst b2
                  simp at h
                  subst rest
                  rfl
                · simp [hb2] at h
              · simp [hb] at h

/-- Two bracket bytes at the head give the Button absent group. -/
theorem buttonTail_brackets_none (rest : List Nat) : buttonTail (93 :: 93 :: rest) = some (none, rest) := by
  unfold buttonTail
  simp [buttonTail.tryW, isWsByte]

/-- buttonProcess claims exactly one Button token. -/
theorem buttonProcess_appends_one (ty : List Nat) (g2 : Option (List Nat)) (toks : List TokenEntry) :
    ∃ opts, buttonProcess ty g2 toks = claimTok "Button" opts toks := by
  unfold buttonProcess
  exact ⟨_, rfl⟩

/-- The type is always the last option, with underscores mapped to hyphens and case preserved. -/
theorem buttonProcess_type_append_last (ty : List Nat) (g2 : Option (List Nat)) (toks : List TokenEntry) :
    ∃ pre : OptMap,
      buttonProcess ty g2 toks =
        claimTok "Button" (pre ++ [("type".toList, textVal (ty.map (fun b => if b == 95 then 45 else b)))]) toks := by
  unfold buttonProcess
  exact ⟨_, rfl⟩

/-- An absent attribute group yields no kept attributes; only the type option remains. -/
theorem buttonProcess_absent_group (ty : List Nat) (toks : List TokenEntry) :
    buttonProcess ty none toks =
      claimTok "Button" [("type".toList, textVal (ty.map (fun b => if b == 95 then 45 else b)))] toks := by
  unfold buttonProcess
  simp [getAttrsBytes_nil, lookupB]

theorem buttonMatch_token_mono : TokenMono buttonMatch := by
  intro src toks rest repl toks' h
  cases hb : buttonMatchAt src with
  | none => simp [buttonMatch, hb] at h
  | some b =>
      rcases b with ⟨ty, g2, rest'⟩
      have hcalc : buttonMatch src toks = some (rest', (buttonProcess ty g2 toks).1, (buttonProcess ty g2 toks).2) := by
        simp [buttonMatch, hb]
      rw [hcalc] at h
      cases h
      obtain ⟨opts, hopts⟩ := buttonProcess_appends_one ty g2 toks
      refine ⟨[{ rule := "Button", opts := opts }], ?_⟩
      simp [hopts, claimTok]

theorem buttonMatch_appends_one : AppendsExactly buttonMatch 1 := by
  intro src toks rest repl toks' h
  cases hb : buttonMatchAt src with
  | none => simp [buttonMatch, hb] at h
  | some b =>
      rcases b with ⟨ty, g2, rest'⟩
      have hcalc : buttonMatch src toks = some (rest', (buttonProcess ty g2 toks).1, (buttonProcess ty g2 toks).2) := by
        simp [buttonMatch, hb]
      rw [hcalc] at h
      cases h
      simp [buttonProcess, claimTok]

theorem buttonRule_preserves_doc_fatal (st : ParseState) :
    (buttonRule st).doc = st.doc ∧ (buttonRule st).fatal = st.fatal := by
  simp [buttonRule, applyByteRule]

theorem buttonRule_tokens_extend (st : ParseState) :
    ∃ added, (buttonRule st).tokens = st.tokens ++ added := by
  change ∃ added, (finalPregScan buttonMatch (byteForm st.work) st.tokens).2 = st.tokens ++ added
  exact finalPregScan_tokens_extend buttonMatch buttonMatch_token_mono _ _

theorem buttonRule_token_count (st : ParseState) :
    (buttonRule st).tokens.length = st.tokens.length +
      pregMatchCount buttonMatch (byteForm st.work) st.tokens ((byteForm st.work).length + 1) := by
  change (finalPregScan buttonMatch (byteForm st.work) st.tokens).2.length =
    st.tokens.length + pregMatchCount buttonMatch (byteForm st.work) st.tokens ((byteForm st.work).length + 1)
  exact finalPregScan_len buttonMatch buttonMatch_appends_one _ _

/-! ## Embed -/

theorem embedOpenerAt_of_no_prefix (src : List Nat) (h : matchLitCI (litBytes "[[embed") src = none) :
    embedOpenerAt src = none := by
  simp [embedOpenerAt, h]

theorem embedCloserAt_of_no_prefix (src : List Nat) (h : matchLitCI (litBytes "[[/embed") src = none) :
    embedCloserAt src = none := by
  simp [embedCloserAt, h]

/-- Every suffix alternative of an Embed opener or closer consumes at least one byte. -/
theorem embedSuffix_length_lt (r r2 : List Nat) (h : embedSuffix r = some r2) : r2.length < r.length := by
  unfold embedSuffix at h
  cases h1 : matchLitCI (litBytes "audio]]") r with
  | some rA =>
      simp [h1] at h
      subst r2
      have hp : 0 < (litBytes "audio]]").length := by simp [litBytes]
      exact matchLitCI_length_pos _ _ _ h1 hp
  | none =>
      cases h2 : matchLitCI (litBytes "video]]") r with
      | some rV =>
          simp [h1, h2] at h
          subst r2
          have hp : 0 < (litBytes "video]]").length := by simp [litBytes]
          exact matchLitCI_length_pos _ _ _ h2 hp
      | none =>
          simp [h1, h2] at h
          have hp : 0 < (litBytes "]]").length := by simp [litBytes]
          exact matchLitCI_length_pos _ _ _ h hp

theorem embedOpenerAt_of_suffix (src r r2 : List Nat)
    (h1 : matchLitCI (litBytes "[[embed") src = some r) (h2 : embedSuffix r = some r2) :
    embedOpenerAt src = some r2 := by
  simp [embedOpenerAt, h1, h2]

theorem embedCloserAt_of_suffix (src r r2 : List Nat)
    (h1 : matchLitCI (litBytes "[[/embed") src = some r) (h2 : embedSuffix r = some r2) :
    embedCloserAt src = some r2 := by
  simp [embedCloserAt, h1, h2]

/-- A closer at the head ends the lazy body search immediately with an empty body. -/
theorem embedCloserSearch_at_head (bs rest : List Nat) (h : embedCloserAt bs = some rest) :
    embedCloserSearch bs = some ([], rest) := by
  cases bs with
  | nil => simp [embedCloserAt, matchLitCI, litBytes] at h
  | cons b tl =>
      cases hcs : embedCloserAt (b :: tl) with
      | some r =>
          have hr : r = rest := by
            rw [hcs] at h
            cases h
            rfl
          subst r
          simp [embedCloserSearch, hcs]
      | none => simp [embedCloserSearch, hcs] at h

/-- The lazy body of an Embed closer search never exceeds the source length. -/
theorem embedCloserSearch_body_length_le (bs body rest : List Nat) (h : embedCloserSearch bs = some (body, rest)) :
    body.length ≤ bs.length := by
  induction bs generalizing body rest with
  | nil => simp [embedCloserSearch] at h
  | cons b t ih =>
      cases hca : embedCloserAt (b :: t) with
      | some r =>
          simp [embedCloserSearch, hca] at h
          rcases h with ⟨hbody, hrest'⟩
          subst body
          subst rest
          simp
      | none =>
          cases hcs : embedCloserSearch t with
          | none => simp [embedCloserSearch, hca, hcs] at h
          | some x =>
              rcases x with ⟨body', r'⟩
              simp [embedCloserSearch, hca, hcs] at h
              rcases h with ⟨hbody, hrest'⟩
              have hi := ih body' r' hcs
              subst body
              subst rest
              simp
              omega

theorem embedMatchAt_of_parts (src r r2 body rest : List Nat)
    (h1 : matchLitCI (litBytes "[[embed") src = some r)
    (h2 : embedSuffix r = some r2)
    (h3 : embedCloserSearch r2 = some (body, rest)) :
    embedMatchAt src = some (body, rest) := by
  simp [embedMatchAt, embedOpenerAt, h1, h2, h3]

/-- The Embed callback always claims one token with the trimmed body as content. -/
theorem embedMatch_some (src : List Nat) (toks : List TokenEntry) (body rest : List Nat)
    (h : embedMatchAt src = some (body, rest)) :
    embedMatch src toks =
      some (rest, (claimTok "Embed" [("content".toList, textVal (trimBytes body))] toks).1,
        (claimTok "Embed" [("content".toList, textVal (trimBytes body))] toks).2) := by
  simp [embedMatch, h]

theorem embedMatch_token_mono : TokenMono embedMatch := by
  intro src toks rest repl toks' h
  cases he : embedMatchAt src with
  | none => simp [embedMatch, he] at h
  | some e =>
      rcases e with ⟨body, rest'⟩
      have hcalc : embedMatch src toks =
          some (rest', (claimTok "Embed" [("content".toList, textVal (trimBytes body))] toks).1,
            (claimTok "Embed" [("content".toList, textVal (trimBytes body))] toks).2) := by
        simp [embedMatch, he]
      rw [hcalc] at h
      cases h
      refine ⟨[{ rule := "Embed", opts := [("content".toList, textVal (trimBytes body))] }], ?_⟩
      simp [claimTok]

theorem embedMatch_appends_one : AppendsExactly embedMatch 1 := by
  intro src toks rest repl toks' h
  cases he : embedMatchAt src with
  | none => simp [embedMatch, he] at h
  | some e =>
      rcases e with ⟨body, rest'⟩
      have hcalc : embedMatch src toks =
          some (rest', (claimTok "Embed" [("content".toList, textVal (trimBytes body))] toks).1,
            (claimTok "Embed" [("content".toList, textVal (trimBytes body))] toks).2) := by
        simp [embedMatch, he]
      rw [hcalc] at h
      cases h
      simp [claimTok]

theorem embedRule_preserves_doc_fatal (st : ParseState) :
    (embedRule st).doc = st.doc ∧ (embedRule st).fatal = st.fatal := by
  simp [embedRule, applyByteRule]

theorem embedRule_tokens_extend (st : ParseState) :
    ∃ added, (embedRule st).tokens = st.tokens ++ added := by
  change ∃ added, (finalPregScan embedMatch (byteForm st.work) st.tokens).2 = st.tokens ++ added
  exact finalPregScan_tokens_extend embedMatch embedMatch_token_mono _ _

theorem embedRule_token_count (st : ParseState) :
    (embedRule st).tokens.length = st.tokens.length +
      pregMatchCount embedMatch (byteForm st.work) st.tokens ((byteForm st.work).length + 1) := by
  change (finalPregScan embedMatch (byteForm st.work) st.tokens).2.length =
    st.tokens.length + pregMatchCount embedMatch (byteForm st.work) st.tokens ((byteForm st.work).length + 1)
  exact finalPregScan_len embedMatch embedMatch_appends_one _ _

/-! ## Social -/

theorem socialMatchAt_of_no_prefix (src : List Nat) (h : matchLitCI (litBytes "[[social") src = none) :
    socialMatchAt src = none := by
  simp [socialMatchAt, h]

/-- A hex nibble below ten uses the digit range, at or above ten the uppercase letter range. -/
theorem hexDigitB_of_lt_ten (n : Nat) (h : n < 10) : hexDigitB n = 48 + n := by
  simp [hexDigitB, h]

theorem hexDigitB_of_ge_ten (n : Nat) (h : 10 ≤ n) : hexDigitB n = 55 + n := by
  simp [hexDigitB, h]

/-- The low nibble encoding of any byte lies in the ASCII hex digit ranges. -/
theorem hexDigitB_mod_bounds (b : Nat) :
    (48 ≤ hexDigitB (b % 16) ∧ hexDigitB (b % 16) ≤ 57) ∨
    (65 ≤ hexDigitB (b % 16) ∧ hexDigitB (b % 16) ≤ 70) := by
  unfold hexDigitB
  split
  · left
    have hlt : b % 16 < 16 := Nat.mod_lt b (by omega)
    omega
  · right
    have hlt : b % 16 < 16 := Nat.mod_lt b (by omega)
    omega

/-- urlencodeByte has one of exactly three shapes: an unchanged byte, a plus, or a percent-escaped triple. -/
theorem urlencodeByte_shape (b : Nat) :
    urlencodeByte b = [b] ∨ urlencodeByte b = [43] ∨
      ∃ hi lo, urlencodeByte b = [37, hi, lo] := by
  unfold urlencodeByte
  split
  · left
    rfl
  · split
    · right
      left
      rfl
    · right
      right
      exact ⟨hexDigitB (b / 16), hexDigitB (b % 16), rfl⟩

theorem urlencodeByte_length_pos (b : Nat) : 0 < (urlencodeByte b).length := by
  unfold urlencodeByte
  split
  · simp
  · split <;> simp

theorem urlencodeByte_length_le_three (b : Nat) : (urlencodeByte b).length ≤ 3 := by
  unfold urlencodeByte
  split
  · simp
  · split <;> simp

/-- urlencodeBytes on a cons is the byte encoding followed by the tail encoding. -/
theorem urlencodeBytes_cons (b : Nat) (bs : List Nat) :
    urlencodeBytes (b :: bs) = urlencodeByte b ++ urlencodeBytes bs := by
  rfl

/-- urlencodeBytes distributes over concatenation. -/
theorem urlencodeBytes_append (bs1 bs2 : List Nat) :
    urlencodeBytes (bs1 ++ bs2) = urlencodeBytes bs1 ++ urlencodeBytes bs2 := by
  simp [urlencodeBytes, List.flatMap_append]

/-- Every encoded byte string has length between the input length and three times it. -/
theorem urlencodeBytes_length_bounds (bs : List Nat) :
    bs.length ≤ (urlencodeBytes bs).length ∧ (urlencodeBytes bs).length ≤ 3 * bs.length := by
  induction bs with
  | nil => simp [urlencodeBytes]
  | cons b t ih =>
      rw [urlencodeBytes_cons]
      constructor
      · calc
          (b :: t).length = t.length + 1 := by simp
          _ ≤ (urlencodeBytes t).length + (urlencodeByte b).length := by
            have hp := urlencodeByte_length_pos b
            omega
          _ = (urlencodeByte b ++ urlencodeBytes t).length := by simp [List.length_append, Nat.add_comm]
      · calc
          (urlencodeByte b ++ urlencodeBytes t).length =
              (urlencodeByte b).length + (urlencodeBytes t).length := by simp [List.length_append]
          _ ≤ 3 + 3 * t.length := by
            have hle := urlencodeByte_length_le_three b
            omega
          _ = 3 * (b :: t).length := by simp [Nat.mul_add, Nat.add_comm, Nat.add_left_comm, Nat.add_assoc]

/-- socialReplacement always has the fixed delimiters and module marker around a middle part. -/
theorem socialReplacement_decomposition (sites : List Nat) :
    ∃ mid, socialReplacement sites =
      [0xC3, 0xBE] ++ litBytes "module \"wiki/social/SocialBookmarksModule\"" ++ mid ++ [0xC3, 0xBE] := by
  unfold socialReplacement
  exact ⟨if sites.isEmpty then [] else [32] ++ urlencodeBytes (litBytes "sites=\"" ++ sites ++ [34]) ++ [32], rfl⟩

/-- The bare Social form omits the sites parameter entirely. -/
theorem socialReplacement_bare (sites : List Nat) (h : sites.isEmpty = true) :
    socialReplacement sites =
      [0xC3, 0xBE] ++ litBytes "module \"wiki/social/SocialBookmarksModule\"" ++ [0xC3, 0xBE] := by
  unfold socialReplacement
  simp [h]

/-- A nonempty sites group is space-padded and urlencoded on both sides. -/
theorem socialReplacement_with_sites (sites : List Nat) (h : sites.isEmpty = false) :
    socialReplacement sites =
      [0xC3, 0xBE] ++ litBytes "module \"wiki/social/SocialBookmarksModule\"" ++
        ([32] ++ urlencodeBytes (litBytes "sites=\"" ++ sites ++ [34]) ++ [32]) ++ [0xC3, 0xBE] := by
  unfold socialReplacement
  simp [h]

/-- The Social callback is fully determined by the trimmed sites group and never touches the token table. -/
theorem socialMatch_some (src : List Nat) (toks : List TokenEntry) (sites rest : List Nat)
    (h : socialMatchAt src = some (sites, rest)) :
    socialMatch src toks = some (rest, socialReplacement sites, toks) := by
  simp [socialMatch, h]

theorem socialMatch_token_mono : TokenMono socialMatch := by
  intro src toks rest repl toks' h
  cases hs : socialMatchAt src with
  | none => simp [socialMatch, hs] at h
  | some s =>
      rcases s with ⟨sites, rest'⟩
      simp [socialMatch, hs] at h
      rcases h with ⟨_, _, htok⟩
      exact ⟨[], by simpa using htok.symm⟩

/-- The Social callback returns the incoming token table unchanged on every match. -/
theorem socialMatch_keeps_tokens (src rest repl : List Nat) (toks toks' : List TokenEntry)
    (h : socialMatch src toks = some (rest, repl, toks')) : toks' = toks := by
  cases hs : socialMatchAt src with
  | none => simp [socialMatch, hs] at h
  | some s =>
      rcases s with ⟨sites, rest'⟩
      simp [socialMatch, hs] at h
      rcases h with ⟨_, _, htok⟩
      exact htok.symm

theorem socialMatch_appends_zero : AppendsExactly socialMatch 0 := by
  intro src toks rest repl toks' h
  cases hs : socialMatchAt src with
  | none => simp [socialMatch, hs] at h
  | some s =>
      rcases s with ⟨sites, rest'⟩
      simp [socialMatch, hs] at h
      rcases h with ⟨_, _, htok⟩
      simpa [htok]

theorem socialRule_preserves_doc_fatal (st : ParseState) :
    (socialRule st).doc = st.doc ∧ (socialRule st).fatal = st.fatal := by
  simp [socialRule, applyByteRule]

theorem socialRule_tokens_extend (st : ParseState) :
    ∃ added, (socialRule st).tokens = st.tokens ++ added := by
  change ∃ added, (finalPregScan socialMatch (byteForm st.work) st.tokens).2 = st.tokens ++ added
  exact finalPregScan_tokens_extend socialMatch socialMatch_token_mono _ _

/-- A scan with a zero-token matcher preserves the token table at every fuel. -/
theorem socialScan_preserves_tokens (fuel : Nat) (src : List Nat) (toks : List TokenEntry) :
    (finalPregScan.go socialMatch src toks fuel).2 = toks := by
  induction fuel generalizing src with
  | zero =>
      cases src <;> simp [finalPregScan.go]
  | succ fuel ih =>
      cases src with
      | nil => simp [finalPregScan.go]
      | cons b t =>
          cases hmcase : socialMatch (b :: t) toks with
          | none =>
              simp [finalPregScan.go, hmcase]
              exact ih t
          | some x =>
              rcases x with ⟨rest', repl, toks'⟩
              have htok := socialMatch_keeps_tokens (b :: t) rest' repl toks toks' hmcase
              subst toks'
              simp [finalPregScan.go, hmcase]
              exact ih rest'

/-- Social appends no tokens at all: its rule preserves the token table exactly. -/
theorem socialRule_tokens_preserved (st : ParseState) :
    (socialRule st).tokens = st.tokens := by
  change (finalPregScan socialMatch (byteForm st.work) st.tokens).2 = st.tokens
  unfold finalPregScan
  exact socialScan_preserves_tokens ((byteForm st.work).length + 1) (byteForm st.work) st.tokens

/-! ## File -/

theorem fileMatchAt_of_no_prefix (src : List Nat) (h : matchLitCI (litBytes "[[file") src = none) :
    fileMatchAt src = none := by
  simp [fileMatchAt, h]

/-- File's callback always claims one File token. -/
theorem fileProcess_appends_one (g1 : List Nat) (g2 : Option (List Nat)) (toks : List TokenEntry) :
    ∃ opts, fileProcess g1 g2 toks = claimTok "File" opts toks := by
  unfold fileProcess
  exact ⟨_, rfl⟩

/-- With no pipe group, the anchor defaults to the trimmed file name. -/
theorem fileProcess_anchor_default (g1 : List Nat) (toks : List TokenEntry) :
    fileProcess g1 none toks =
      claimTok "File" [("file".toList, textVal (trimBytes g1)), ("anchor".toList, textVal (trimBytes g1))] toks := by
  unfold fileProcess
  simp [trimBytes_nil]

/-- With a pipe group whose trim is nonempty, the anchor is that trimmed pipe group. -/
theorem fileProcess_anchor_present (g1 g : List Nat) (toks : List TokenEntry)
    (h : (trimBytes g).isEmpty = false) :
    fileProcess g1 (some g) toks =
      claimTok "File" [("file".toList, textVal (trimBytes g1)), ("anchor".toList, textVal (trimBytes g))] toks := by
  unfold fileProcess
  simp [h]

theorem fileMatch_token_mono : TokenMono fileMatch := by
  intro src toks rest repl toks' h
  cases hf : fileMatchAt src with
  | none => simp [fileMatch, hf] at h
  | some f =>
      rcases f with ⟨g1, g2, rest'⟩
      have hcalc : fileMatch src toks = some (rest', (fileProcess g1 g2 toks).1, (fileProcess g1 g2 toks).2) := by
        simp [fileMatch, hf]
      rw [hcalc] at h
      cases h
      obtain ⟨opts, hopts⟩ := fileProcess_appends_one g1 g2 toks
      refine ⟨[{ rule := "File", opts := opts }], ?_⟩
      simp [hopts, claimTok]

theorem fileMatch_appends_one : AppendsExactly fileMatch 1 := by
  intro src toks rest repl toks' h
  cases hf : fileMatchAt src with
  | none => simp [fileMatch, hf] at h
  | some f =>
      rcases f with ⟨g1, g2, rest'⟩
      have hcalc : fileMatch src toks = some (rest', (fileProcess g1 g2 toks).1, (fileProcess g1 g2 toks).2) := by
        simp [fileMatch, hf]
      rw [hcalc] at h
      cases h
      simp [fileProcess, claimTok]

theorem fileRule_preserves_doc_fatal (st : ParseState) :
    (fileRule st).doc = st.doc ∧ (fileRule st).fatal = st.fatal := by
  simp [fileRule, applyByteRule]

theorem fileRule_tokens_extend (st : ParseState) :
    ∃ added, (fileRule st).tokens = st.tokens ++ added := by
  change ∃ added, (finalPregScan fileMatch (byteForm st.work) st.tokens).2 = st.tokens ++ added
  exact finalPregScan_tokens_extend fileMatch fileMatch_token_mono _ _

theorem fileRule_token_count (st : ParseState) :
    (fileRule st).tokens.length = st.tokens.length +
      pregMatchCount fileMatch (byteForm st.work) st.tokens ((byteForm st.work).length + 1) := by
  change (finalPregScan fileMatch (byteForm st.work) st.tokens).2.length =
    st.tokens.length + pregMatchCount fileMatch (byteForm st.work) st.tokens ((byteForm st.work).length + 1)
  exact finalPregScan_len fileMatch fileMatch_appends_one _ _

/-! ## Open obligations and conditional reductions to the reference -/

section OpenObligations

variable (refUser refButton refEmbed refSocial refFile :
  List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry))

/-- Two scan matchers correspond when they report identical results on every source and table. -/
def MatcherPcreCorrespondence
    (m mRef : List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry)) : Prop :=
  ∀ src toks, m src toks = mRef src toks

/-- Open obligation: User's matcher equals the extracted PHP regex decomposition under PcreCore/RefTables. -/
def UserMatcherPcreObligation : Prop := MatcherPcreCorrespondence userMatch refUser
/-- Open obligation: Button's matcher equals the extracted PHP regex decomposition under PcreCore/RefTables. -/
def ButtonMatcherPcreObligation : Prop := MatcherPcreCorrespondence buttonMatch refButton
/-- Open obligation: Embed's matcher equals the extracted PHP regex decomposition under PcreCore/RefTables. -/
def EmbedMatcherPcreObligation : Prop := MatcherPcreCorrespondence embedMatch refEmbed
/-- Open obligation: Social's matcher equals the extracted PHP regex decomposition under PcreCore/RefTables. -/
def SocialMatcherPcreObligation : Prop := MatcherPcreCorrespondence socialMatch refSocial
/-- Open obligation: File's matcher equals the extracted PHP regex decomposition under PcreCore/RefTables. -/
def FileMatcherPcreObligation : Prop := MatcherPcreCorrespondence fileMatch refFile

/-- The shared scan is congruent: corresponding matchers give identical scans at every fuel. -/
theorem finalPregScan_go_eq_of_correspondence (m mRef)
    (h : MatcherPcreCorrespondence m mRef) :
    ∀ (fuel : Nat) (src : List Nat) (toks : List TokenEntry),
      finalPregScan.go m src toks fuel = finalPregScan.go mRef src toks fuel := by
  intro fuel
  induction fuel with
  | zero =>
      intro src toks
      cases src <;> simp [finalPregScan.go]
  | succ fuel ih =>
      intro src toks
      cases src with
      | nil => simp [finalPregScan.go]
      | cons b t =>
          have hm := h (b :: t) toks
          cases hmcase : m (b :: t) toks with
          | none =>
              have hmcase' : mRef (b :: t) toks = none := by rw [← hm, hmcase]
              simp [finalPregScan.go, hmcase, hmcase']
              have hi := ih t toks
              constructor
              · simpa using congrArg Prod.fst hi
              · simpa using congrArg Prod.snd hi
          | some x =>
              rcases x with ⟨rest', repl, toks'⟩
              have hmcase' : mRef (b :: t) toks = some (rest', repl, toks') := by rw [← hm, hmcase]
              simp [finalPregScan.go, hmcase, hmcase']
              have hi := ih rest' toks'
              constructor
              · simpa using congrArg Prod.fst hi
              · simpa using congrArg Prod.snd hi

/-- The full scan is congruent under matcher correspondence. -/
theorem finalPregScan_eq_of_correspondence (m mRef)
    (h : MatcherPcreCorrespondence m mRef) (bs : List Nat) (toks : List TokenEntry) :
    finalPregScan m bs toks = finalPregScan mRef bs toks := by
  unfold finalPregScan
  exact finalPregScan_go_eq_of_correspondence m mRef h (bs.length + 1) bs toks

/-- Conditional reduction: once User's matcher corresponds, the rule equals the reference rule modulo the kernel-free scan. -/
theorem userRule_eq_ref_of_correspondence (st : ParseState)
    (h : UserMatcherPcreObligation refUser) :
    userRule st = applyByteRule st (finalPregScan refUser) := by
  change applyByteRule st (finalPregScan userMatch) = applyByteRule st (finalPregScan refUser)
  have hf : finalPregScan userMatch = finalPregScan refUser := by
    funext bs toks
    exact finalPregScan_eq_of_correspondence userMatch refUser h bs toks
  exact congrArg (applyByteRule st) hf

/-- Conditional reduction for Button. -/
theorem buttonRule_eq_ref_of_correspondence (st : ParseState)
    (h : ButtonMatcherPcreObligation refButton) :
    buttonRule st = applyByteRule st (finalPregScan refButton) := by
  change applyByteRule st (finalPregScan buttonMatch) = applyByteRule st (finalPregScan refButton)
  have hf : finalPregScan buttonMatch = finalPregScan refButton := by
    funext bs toks
    exact finalPregScan_eq_of_correspondence buttonMatch refButton h bs toks
  exact congrArg (applyByteRule st) hf

/-- Conditional reduction for Embed. -/
theorem embedRule_eq_ref_of_correspondence (st : ParseState)
    (h : EmbedMatcherPcreObligation refEmbed) :
    embedRule st = applyByteRule st (finalPregScan refEmbed) := by
  change applyByteRule st (finalPregScan embedMatch) = applyByteRule st (finalPregScan refEmbed)
  have hf : finalPregScan embedMatch = finalPregScan refEmbed := by
    funext bs toks
    exact finalPregScan_eq_of_correspondence embedMatch refEmbed h bs toks
  exact congrArg (applyByteRule st) hf

/-- Conditional reduction for Social. -/
theorem socialRule_eq_ref_of_correspondence (st : ParseState)
    (h : SocialMatcherPcreObligation refSocial) :
    socialRule st = applyByteRule st (finalPregScan refSocial) := by
  change applyByteRule st (finalPregScan socialMatch) = applyByteRule st (finalPregScan refSocial)
  have hf : finalPregScan socialMatch = finalPregScan refSocial := by
    funext bs toks
    exact finalPregScan_eq_of_correspondence socialMatch refSocial h bs toks
  exact congrArg (applyByteRule st) hf

/-- Conditional reduction for File. -/
theorem fileRule_eq_ref_of_correspondence (st : ParseState)
    (h : FileMatcherPcreObligation refFile) :
    fileRule st = applyByteRule st (finalPregScan refFile) := by
  change applyByteRule st (finalPregScan fileMatch) = applyByteRule st (finalPregScan refFile)
  have hf : finalPregScan fileMatch = finalPregScan refFile := by
    funext bs toks
    exact finalPregScan_eq_of_correspondence fileMatch refFile h bs toks
  exact congrArg (applyByteRule st) hf

end OpenObligations

end LeanFtml.NextFinal.FinalBase

#print axioms LeanFtml.NextFinal.FinalBase.finalPregScan_go_tokens_extend
#print axioms LeanFtml.NextFinal.FinalBase.finalPregScan_tokens_extend
#print axioms LeanFtml.NextFinal.FinalBase.finalPregScan_go_len
#print axioms LeanFtml.NextFinal.FinalBase.finalPregScan_len
#print axioms LeanFtml.NextFinal.FinalBase.matchLitCI_length_eq
#print axioms LeanFtml.NextFinal.FinalBase.matchLitCI_length_pos
#print axioms LeanFtml.NextFinal.FinalBase.userMatch_token_mono
#print axioms LeanFtml.NextFinal.FinalBase.userMatch_appends_one
#print axioms LeanFtml.NextFinal.FinalBase.userRule_preserves_doc_fatal
#print axioms LeanFtml.NextFinal.FinalBase.userRule_tokens_extend
#print axioms LeanFtml.NextFinal.FinalBase.userRule_token_count
#print axioms LeanFtml.NextFinal.FinalBase.buttonTail_tryW_group_nonempty
#print axioms LeanFtml.NextFinal.FinalBase.buttonTail_none_has_brackets
#print axioms LeanFtml.NextFinal.FinalBase.buttonTail_brackets_none
#print axioms LeanFtml.NextFinal.FinalBase.buttonProcess_appends_one
#print axioms LeanFtml.NextFinal.FinalBase.buttonProcess_type_append_last
#print axioms LeanFtml.NextFinal.FinalBase.buttonProcess_absent_group
#print axioms LeanFtml.NextFinal.FinalBase.buttonMatch_token_mono
#print axioms LeanFtml.NextFinal.FinalBase.buttonMatch_appends_one
#print axioms LeanFtml.NextFinal.FinalBase.buttonRule_preserves_doc_fatal
#print axioms LeanFtml.NextFinal.FinalBase.buttonRule_tokens_extend
#print axioms LeanFtml.NextFinal.FinalBase.buttonRule_token_count
#print axioms LeanFtml.NextFinal.FinalBase.embedSuffix_length_lt
#print axioms LeanFtml.NextFinal.FinalBase.embedOpenerAt_of_suffix
#print axioms LeanFtml.NextFinal.FinalBase.embedCloserAt_of_suffix
#print axioms LeanFtml.NextFinal.FinalBase.embedCloserSearch_at_head
#print axioms LeanFtml.NextFinal.FinalBase.embedCloserSearch_body_length_le
#print axioms LeanFtml.NextFinal.FinalBase.embedMatch_some
#print axioms LeanFtml.NextFinal.FinalBase.embedMatch_token_mono
#print axioms LeanFtml.NextFinal.FinalBase.embedMatch_appends_one
#print axioms LeanFtml.NextFinal.FinalBase.embedRule_preserves_doc_fatal
#print axioms LeanFtml.NextFinal.FinalBase.embedRule_tokens_extend
#print axioms LeanFtml.NextFinal.FinalBase.embedRule_token_count
#print axioms LeanFtml.NextFinal.FinalBase.hexDigitB_of_lt_ten
#print axioms LeanFtml.NextFinal.FinalBase.hexDigitB_of_ge_ten
#print axioms LeanFtml.NextFinal.FinalBase.hexDigitB_mod_bounds
#print axioms LeanFtml.NextFinal.FinalBase.urlencodeByte_shape
#print axioms LeanFtml.NextFinal.FinalBase.urlencodeByte_length_pos
#print axioms LeanFtml.NextFinal.FinalBase.urlencodeByte_length_le_three
#print axioms LeanFtml.NextFinal.FinalBase.urlencodeBytes_append
#print axioms LeanFtml.NextFinal.FinalBase.urlencodeBytes_length_bounds
#print axioms LeanFtml.NextFinal.FinalBase.socialReplacement_decomposition
#print axioms LeanFtml.NextFinal.FinalBase.socialReplacement_bare
#print axioms LeanFtml.NextFinal.FinalBase.socialReplacement_with_sites
#print axioms LeanFtml.NextFinal.FinalBase.socialMatch_some
#print axioms LeanFtml.NextFinal.FinalBase.socialMatch_token_mono
#print axioms LeanFtml.NextFinal.FinalBase.socialMatch_keeps_tokens
#print axioms LeanFtml.NextFinal.FinalBase.socialMatch_appends_zero
#print axioms LeanFtml.NextFinal.FinalBase.socialRule_preserves_doc_fatal
#print axioms LeanFtml.NextFinal.FinalBase.socialRule_tokens_extend
#print axioms LeanFtml.NextFinal.FinalBase.socialScan_preserves_tokens
#print axioms LeanFtml.NextFinal.FinalBase.socialRule_tokens_preserved
#print axioms LeanFtml.NextFinal.FinalBase.fileProcess_appends_one
#print axioms LeanFtml.NextFinal.FinalBase.fileProcess_anchor_default
#print axioms LeanFtml.NextFinal.FinalBase.fileProcess_anchor_present
#print axioms LeanFtml.NextFinal.FinalBase.fileMatch_token_mono
#print axioms LeanFtml.NextFinal.FinalBase.fileMatch_appends_one
#print axioms LeanFtml.NextFinal.FinalBase.fileRule_preserves_doc_fatal
#print axioms LeanFtml.NextFinal.FinalBase.fileRule_tokens_extend
#print axioms LeanFtml.NextFinal.FinalBase.fileRule_token_count
#print axioms LeanFtml.NextFinal.FinalBase.finalPregScan_go_eq_of_correspondence
#print axioms LeanFtml.NextFinal.FinalBase.finalPregScan_eq_of_correspondence
#print axioms LeanFtml.NextFinal.FinalBase.userRule_eq_ref_of_correspondence
#print axioms LeanFtml.NextFinal.FinalBase.buttonRule_eq_ref_of_correspondence
#print axioms LeanFtml.NextFinal.FinalBase.embedRule_eq_ref_of_correspondence
#print axioms LeanFtml.NextFinal.FinalBase.socialRule_eq_ref_of_correspondence
#print axioms LeanFtml.NextFinal.FinalBase.fileRule_eq_ref_of_correspondence
#print axioms LeanFtml.NextFinal.FinalBase.buttonMatchAt_of_no_prefix
#print axioms LeanFtml.NextFinal.FinalBase.embedCloserAt_of_no_prefix
#print axioms LeanFtml.NextFinal.FinalBase.embedMatchAt_of_parts
#print axioms LeanFtml.NextFinal.FinalBase.embedOpenerAt_of_no_prefix
#print axioms LeanFtml.NextFinal.FinalBase.fileMatchAt_of_no_prefix
#print axioms LeanFtml.NextFinal.FinalBase.getAttrsBytes_nil
#print axioms LeanFtml.NextFinal.FinalBase.socialMatchAt_of_no_prefix
#print axioms LeanFtml.NextFinal.FinalBase.trimBytes_nil
#print axioms LeanFtml.NextFinal.FinalBase.urlencodeBytes_cons
#print axioms LeanFtml.NextFinal.FinalBase.userMatchAt_of_no_prefix
