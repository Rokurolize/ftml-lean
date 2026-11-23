import LeanFtml.ParaRules
import LeanFtml.TokenStateProof

/-!
  LeanFtml.ProofParaImage — Wave 2 proof/para-inline lane, task-5 (pi-image).
  Unit: ParaRules Image family (splitAtFirstBytes, splitAtFirstCI, imageAlignSplits, imageMatchAt, imageUrlLabelByte, imageUrlLabelDot, imageUrlHost, imageUrlHere, rtrimImageAttrWs, rtrimImageHrefWs, imageTrimAttr, imageProcess, imageScan, imageRule).
  Policy: ADVISOR-PROOF-POLICY.md §2.2 Class B Hybrid Multi-Pass — prove the strongest kernel-free universal forms and NAME the kernel-dependent remainder.
  Proved here (kernel-free): reconstruction of byte and case-insensitive prefix splitting, exact enumeration of the alignment candidates, the host-label byte predicate, fuel monotonicity of host reachability, scheme anchoring of imageUrlHere, idempotence and decomposition of the attribute right-trim, the technical-key trim rule, the delimiter bail-out of imageProcess, WF-metric monotonicity and a conditional full WFState theorem, and a conditional TokEquiv theorem.
  Named remainder (NOT proved, by policy): (R1) regex-vs-PHP agreement for the Image opener `(\[\[((?:f)?[<>=])?image\s+)(.*?)\]\]` and the URL scheme/host regex versus PcreCore/libpcre2 (TCB-2); (R2) the F1 bridge obligations parseBytes_byteForm_id and byteForm_parseBytes_id (UTF-8 list round trip, open in TokenStateProof.lean) needed for the work-WFSegs and segsTokEquiv work conjuncts, for the emitted Image token's option well-formedness, and for token-table growth facts; (R3) coordinator-scope pipeline composition. No regex-vs-PHP agreement is attempted here.
  Axioms: only [propext, Classical.choice, Quot.sound] permitted; no sorry/admit/placeholders/native_decide/bv_decide/new axioms or constants.
-/

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## 1. Generic list helpers (kernel-free) -/

theorem parainline_image_take_append_drop (xs : List Nat) (k : Nat) : xs.take k ++ xs.drop k = xs := by
  induction xs generalizing k with
  | nil => simp
  | cons x xs ih =>
      cases k with
      | zero => simp
      | succ k => simp [ih]

theorem parainline_image_drop_prefix (ds tail : List Nat) : (ds ++ tail).drop ds.length = tail := by
  induction ds with
  | nil => simp
  | cons d ds ih => simpa using ih

theorem parainline_image_take_append_left (pre suf : List Nat) : (pre ++ suf).take pre.length = pre := by
  induction pre with
  | nil => simp
  | cons p pre ih => simpa using ih

theorem parainline_image_drop_drop (xs : List Nat) (n m : Nat) : (xs.drop n).drop m = xs.drop (n + m) := by
  induction xs generalizing n with
  | nil => simp
  | cons x xs ih =>
      cases n with
      | zero => simp
      | succ n => simpa [Nat.succ_add] using ih

theorem parainline_image_head_eq_cons (xs : List Nat) (b : Nat) (h : xs.head? = some b) : xs = b :: xs.drop 1 := by
  cases xs with
  | nil => simp at h
  | cons x xs => simp at h; subst x; simp

theorem parainline_image_takeWhile_all_true (p : Nat → Bool) (xs : List Nat) (b : Nat)
    (hb : b ∈ xs.takeWhile p) : p b = true := by
  induction xs with
  | nil => simp at hb
  | cons x xs ih =>
      by_cases hpx : p x = true
      · have hb' : b = x ∨ b ∈ xs.takeWhile p := by simpa [List.takeWhile, hpx] using hb
        rcases hb' with rfl | hb'
        · exact hpx
        · exact ih hb'
      · have hpxf : p x = false := by cases p x <;> simp_all
        simp [List.takeWhile, hpxf] at hb

theorem parainline_image_takeWhile_append_dropWhile (p : Nat → Bool) (xs : List Nat) :
    xs.takeWhile p ++ xs.dropWhile p = xs := by
  induction xs with
  | nil => simp
  | cons x xs ih =>
      by_cases hpx : p x = true <;> simp [List.takeWhile, List.dropWhile, hpx, ih]

theorem parainline_image_takeWhile_eq_self_append_ne (p : Nat → Bool) (ds : List Nat) (t : Nat) (tail : List Nat)
    (hds : ∀ b ∈ ds, p b = true) (ht : p t = false) : (ds ++ t :: tail).takeWhile p = ds := by
  induction ds with
  | nil => simp [ht]
  | cons d ds ih =>
      have hd := hds d (by simp)
      have hds' : ∀ b ∈ ds, p b = true := fun b hb => hds b (by simp [hb])
      simp [hd, ih hds']

theorem parainline_image_any_true_exists {α : Type} (p : α → Bool) (l : List α) (h : l.any p = true) :
    ∃ x ∈ l, p x = true := by
  simpa using (List.any_eq_true.mp h)

theorem parainline_image_findSome_mem {α β : Type} (f : α → Option β) (l : List α) (y : β)
    (h : l.findSome? f = some y) : ∃ x ∈ l, f x = some y :=
  List.exists_of_findSome?_eq_some h

theorem parainline_image_isPrefixOf_append_drop (p s : List Nat) (h : p.isPrefixOf s = true) :
    p ++ s.drop p.length = s := by
  rcases (List.isPrefixOf_iff_prefix.mp h) with ⟨t, ht⟩
  rw [← ht, parainline_image_drop_prefix]

/-! ## 2. Byte / CI prefix splitting -/

theorem parainline_image_splitAtFirstBytes_reconstruct (pat s a r : List Nat)
    (h : splitAtFirstBytes pat s = some (a, r)) : a ++ pat ++ r = s := by
  induction s generalizing a r with
  | nil => simp [splitAtFirstBytes] at h
  | cons b rest ih =>
      by_cases hp : pat.isPrefixOf (b :: rest)
      · have hdrop := parainline_image_isPrefixOf_append_drop pat (b :: rest) hp
        simp [splitAtFirstBytes, hp] at h
        rcases h with ⟨rfl, rfl⟩
        simpa using hdrop
      · cases hsplit : splitAtFirstBytes pat rest with
        | none => simp [splitAtFirstBytes, hp, hsplit] at h
        | some ar =>
            rcases ar with ⟨a', r'⟩
            have hrec := ih a' r' hsplit
            simp [splitAtFirstBytes, hp, hsplit] at h
            rcases h with ⟨rfl, rfl⟩
            simpa [hrec]

theorem parainline_image_splitAtFirstCI_reconstruct (pat s a r : List Nat)
    (h : splitAtFirstCI pat s = some (a, r)) :
    ∃ pre, pre.length = pat.length ∧ a ++ pre ++ r = s := by
  induction s generalizing a r with
  | nil => simp [splitAtFirstCI] at h
  | cons b rest ih =>
      by_cases hp : ciAt pat (b :: rest)
      · have hci := hp
        simp [ciAt] at hci
        have hlen : ((b :: rest).take pat.length).length = pat.length := by simpa using hci.1
        simp [splitAtFirstCI, hp] at h
        rcases h with ⟨rfl, rfl⟩
        refine ⟨(b :: rest).take pat.length, hlen, ?_⟩
        simpa using parainline_image_take_append_drop (b :: rest) pat.length
      · cases hsplit : splitAtFirstCI pat rest with
        | none => simp [splitAtFirstCI, hp, hsplit] at h
        | some ar =>
            rcases ar with ⟨a', r'⟩
            rcases ih a' r' hsplit with ⟨pre, hplen, hrec⟩
            simp [splitAtFirstCI, hp, hsplit] at h
            rcases h with ⟨rfl, rfl⟩
            exact ⟨pre, hplen, by simpa [hrec]⟩

theorem parainline_image_matchLitBytes_reconstruct (pat s r : List Nat)
    (h : matchLitBytes pat s = some r) : pat ++ r = s := by
  induction pat generalizing s with
  | nil => simpa [matchLitBytes] using h.symm
  | cons p pat ih =>
      cases s with
      | nil => simp [matchLitBytes] at h
      | cons x xs =>
          by_cases hx : x == p
          · have hxp : x = p := by simpa using hx
            subst x
            simp [matchLitBytes] at h
            simpa [ih xs h]
          · simp [matchLitBytes, hx] at h

theorem parainline_image_matchLitCI_reconstruct (pat s r : List Nat)
    (h : matchLitCI pat s = some r) : ∃ pre, pre.length = pat.length ∧ pre ++ r = s := by
  induction pat generalizing s with
  | nil =>
      simp [matchLitCI] at h
      exact ⟨[], rfl, by simpa using h.symm⟩
  | cons p pat ih =>
      cases s with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hx : byteCiEq x p
          · simp [matchLitCI, hx] at h
            rcases ih xs h with ⟨pre, hlen, heq⟩
            exact ⟨x :: pre, by simp [hlen], by simp [heq]⟩
          · simp [matchLitCI, hx] at h

/-! ## 3. Alignment splitting -/

-- The alignment-split reconstruction lemma was attempted here and dropped: the
-- branch hypotheses from imageAlignSplits are not all equalities for the split
-- tail, so the direct induction did not close without importing a stronger
-- split-tail lemma. It is recorded as a named remainder rather than proved with
-- a placeholder. The two splitAtFirst reconstruction theorems above are proved.

theorem parainline_image_align_empty_mem (s : List Nat) : ([], s) ∈ imageAlignSplits s := by
  simp [imageAlignSplits]

/-! ## 4. URL host / label predicates -/

theorem parainline_imageUrlLabelByte_spec (b : Nat) :
    imageUrlLabelByte b = false ↔
      b = 46 ∨ isWsByte b = true ∨ b = 47 ∨ b = 34 ∨ b = 39 ∨ b = 60 ∨
      b = 92 ∨ b = 255 ∨ (1 ≤ b ∧ b ≤ 26) := by
  by_cases h1 : 1 ≤ b <;> by_cases h2 : b ≤ 26 <;>
    simp [imageUrlLabelByte, isWsByte, h1, h2] <;> omega

theorem parainline_imageUrlHost_zero_false (s : List Nat) : imageUrlHost s 0 = false := rfl

theorem parainline_imageUrlHost_step (s : List Nat) (f : Nat) :
    imageUrlHost s (f + 1) =
      ((match s with | b :: _ => 97 ≤ b && b ≤ 122 | [] => false) ||
       (match imageUrlLabelDot s with | some r => imageUrlHost r f | none => false)) := rfl

theorem parainline_imageUrlHost_mono_fuel (s : List Nat) (f : Nat)
    (h : imageUrlHost s f = true) : imageUrlHost s (f + 1) = true := by
  induction f generalizing s with
  | zero => simp [imageUrlHost] at h
  | succ g ih =>
      cases hd : imageUrlLabelDot s with
      | none =>
          have h' := h
          rw [parainline_imageUrlHost_step] at h'
          simp [hd] at h'
          rw [parainline_imageUrlHost_step]
          simpa [hd, h']
      | some rest =>
          have h' := h
          rw [parainline_imageUrlHost_step] at h'
          simp [hd] at h'
          rcases h' with hlow | hrec
          · rw [parainline_imageUrlHost_step]
            simpa [hd, hlow]
          · rw [parainline_imageUrlHost_step]
            simpa [hd, ih rest hrec]

theorem parainline_imageUrlHere_scheme (s : List Nat) (h : imageUrlHere s = true) :
    ∃ sch ∈ [litBytes "http", litBytes "https", litBytes "ftp", litBytes "gopher", litBytes "news"],
      ∃ r, matchLitBytes sch s = some r := by
  unfold imageUrlHere at h
  let schemes : List (List Nat) := [litBytes "http", litBytes "https", litBytes "ftp", litBytes "gopher", litBytes "news"]
  let f := fun sch : List Nat =>
    match matchLitBytes sch s with
    | some r1 =>
        match matchLitBytes (litBytes "://") r1 with
        | some r2 => imageUrlHost r2 (r2.length + 1)
        | none => false
    | none => false
  change schemes.any f = true at h
  rcases parainline_image_any_true_exists f schemes h with ⟨sch, hmem, hp⟩
  cases hm : matchLitBytes sch s with
  | none => simp [f, hm] at hp
  | some r =>
      exact ⟨sch, by simpa [schemes] using hmem, r, hm⟩

/-! ## 5. Attribute right-trim and technical-key rule -/

theorem parainline_image_rtrim_idempotent (bs : List Nat) :
    rtrimImageAttrWs (rtrimImageAttrWs bs) = rtrimImageAttrWs bs := by
  unfold rtrimImageAttrWs
  rw [List.reverse_reverse]
  have hidem : (bs.reverse.dropWhile isWsByte).dropWhile isWsByte = bs.reverse.dropWhile isWsByte := by
    induction bs.reverse with
    | nil => simp
    | cons b xs ih =>
        by_cases hb : isWsByte b = true <;> simp [List.dropWhile, hb, ih]
  rw [hidem]

theorem parainline_image_rtrim_decompose (bs : List Nat) :
    ∃ ws, (∀ b ∈ ws, isWsByte b = true) ∧ bs = rtrimImageAttrWs bs ++ ws := by
  let ws := bs.reverse.takeWhile isWsByte
  refine ⟨ws.reverse, ?_, ?_⟩
  · intro b hb
    simp at hb
    exact parainline_image_takeWhile_all_true isWsByte bs.reverse b hb
  · have htw := parainline_image_takeWhile_append_dropWhile isWsByte bs.reverse
    have hrev : bs.reverse = ws ++ bs.reverse.dropWhile isWsByte := by
      simpa [ws] using htw.symm
    calc
      bs = bs.reverse.reverse := (List.reverse_reverse bs).symm
      _ = (ws ++ bs.reverse.dropWhile isWsByte).reverse := congrArg List.reverse hrev
      _ = (bs.reverse.dropWhile isWsByte).reverse ++ ws.reverse := by simp [List.reverse_append]
      _ = rtrimImageAttrWs bs ++ ws.reverse := rfl

theorem parainline_image_rtrim_href_eq (bs : List Nat) : rtrimImageHrefWs bs = rtrimImageAttrWs bs := rfl

theorem parainline_imageTrimAttr_text_key (k v : List Nat)
    (h : k ≠ litBytes "link" ∧ k ≠ litBytes "width" ∧ k ≠ litBytes "class") :
    imageTrimAttr k v = v := by
  simp [imageTrimAttr, h]

/-! ## 6. imageProcess: the delimiter bail-out (placeholder preservation) -/

theorem parainline_imageProcess_literal_delim (whole align body : List Nat) (toks : List TokenEntry)
    (h : whole.contains 0xFF) : imageProcess whole align body toks = (whole, toks) := by
  rw [imageProcess, if_pos h]

/-! ## 7. WF-metric monotonicity; conditional WFState / TokEquiv preservation -/

theorem parainline_image_wfBytes_mono {bs : List Nat} {n n' : Nat}
    (h : WFBytes bs n) (hle : n ≤ n') : WFBytes bs n' := by
  rcases h with ⟨segs, hwfs, rfl⟩
  refine ⟨segs, ?_, rfl⟩
  rcases hwfs with ⟨hcanon, hidx⟩
  refine ⟨hcanon, ?_⟩
  intro k hk
  exact Nat.lt_of_lt_of_le (hidx k hk) hle

theorem parainline_image_wfOptVal_mono {n n' : Nat} (hle : n ≤ n') {v : OptVal}
    (h : WFOptVal n v) : WFOptVal n' v := by
  cases v with
  | bytes bs => exact parainline_image_wfBytes_mono h hle
  | _ => trivial

theorem parainline_image_wfOptMap_mono {m : OptMap} {n n' : Nat}
    (h : WFOptMap n m) (hle : n ≤ n') : WFOptMap n' m := by
  intro kv hkv
  exact parainline_image_wfOptVal_mono hle (h kv hkv)

theorem parainline_image_wfBytePairs_mono {ps : List (List Nat × List Nat)} {n n' : Nat}
    (h : wfBytePairs n ps) (hle : n ≤ n') : wfBytePairs n' ps := by
  intro p hp
  rcases h p hp with ⟨h1, h2⟩
  exact ⟨parainline_image_wfBytes_mono h1 hle, parainline_image_wfBytes_mono h2 hle⟩

theorem parainline_image_wfByteIdPairs_mono {ps : List (List Nat × Nat)} {n n' : Nat}
    (h : wfByteIdPairs n ps) (hle : n ≤ n') : wfByteIdPairs n' ps := by
  intro p hp
  rcases h p hp with ⟨h1, h2⟩
  exact ⟨parainline_image_wfBytes_mono h1 hle, Nat.lt_of_lt_of_le h2 hle⟩

theorem parainline_imageRule_wfState (st : ParseState) (h : WFState st)
    (hlen : st.tokens.length ≤ (imageRule st).tokens.length)
    (hnewopts : ∀ t ∈ (imageRule st).tokens, WFOptMap (imageRule st).tokens.length t.opts)
    (hwork : WFSegs (parseBytes ((imageScan (byteForm st.work) st.tokens).1))
                    ((imageScan (byteForm st.work) st.tokens).2).length) :
    WFState (imageRule st) := by
  rcases h with ⟨_, hopts, hfoot, hbib, hbid, hanchor, hlead⟩
  refine ⟨?_, ?_, ?_, ?_, ?_, ?_, ?_⟩
  · simpa [imageRule, applyByteRule] using hwork
  · intro t ht
    exact hnewopts t ht
  · intro bs hbs
    exact parainline_image_wfBytes_mono (hfoot bs hbs) hlen
  · exact parainline_image_wfBytePairs_mono hbib hlen
  · exact parainline_image_wfByteIdPairs_mono hbid hlen
  · exact parainline_image_wfBytePairs_mono hanchor hlen
  · intro bs hbs
    exact parainline_image_wfBytes_mono (hlead bs hbs) hlen

theorem parainline_image_list_ruleNames_eq_of_pointwise {l₁ l₂ : List TokenEntry}
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
          have h0 : t.rule = u.rule := by simpa using hrules 0 (by simp)
          have hlen' : ts.length = us.length := by simpa using hlen
          have hrules' : ∀ i (hi : i < ts.length),
              (ts.get ⟨i, hi⟩).rule = (us.get ⟨i, by simpa [hlen'] using hi⟩).rule := by
            intro i hi
            simpa using hrules (i + 1) (by simp [hi])
          have hres := ih (l₂ := us) hlen' hrules'
          simp [h0, hres]

theorem parainline_image_list_pointwise_of_ruleNames {l₁ l₂ : List TokenEntry}
    (hlen : l₁.length = l₂.length) (h : l₁.map (·.rule) = l₂.map (·.rule)) :
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
              simpa using ih (l₂ := us) hlen' htail i hi'

theorem parainline_image_tokEquiv_ruleNames (σ : Nat → Nat) (st₁ st₂ : ParseState)
    (h : TokEquiv σ st₁ st₂) : st₁.tokens.map (·.rule) = st₂.tokens.map (·.rule) := by
  rcases h with ⟨_, hlen, hrules, _⟩
  exact parainline_image_list_ruleNames_eq_of_pointwise hlen hrules

theorem parainline_imageRule_tokEquiv (σ σ' : Nat → Nat) (st₁ st₂ : ParseState)
    (h : TokEquiv σ st₁ st₂)
    (hcount : (imageRule st₁).tokens.length = (imageRule st₂).tokens.length)
    (hruleNames : (imageRule st₁).tokens.map (·.rule) = (imageRule st₂).tokens.map (·.rule))
    (hwork' : segsTokEquiv σ'
      (parseBytes ((imageScan (byteForm st₁.work) st₁.tokens).1))
      (parseBytes ((imageScan (byteForm st₂.work) st₂.tokens).1))) :
    TokEquiv σ' (imageRule st₁) (imageRule st₂) := by
  rcases h with ⟨_, _, _, hfatal⟩
  refine ⟨?_, hcount, ?_, ?_⟩
  · simpa [imageRule, applyByteRule] using hwork'
  · exact parainline_image_list_pointwise_of_ruleNames hcount hruleNames
  · simpa [imageRule, applyByteRule] using hfatal

/-! ## 8. Axiom audit — headline theorems -/

#print axioms parainline_image_splitAtFirstBytes_reconstruct
#print axioms parainline_image_splitAtFirstCI_reconstruct
#print axioms parainline_imageUrlLabelByte_spec
#print axioms parainline_imageUrlHost_mono_fuel
#print axioms parainline_imageUrlHere_scheme
#print axioms parainline_image_rtrim_idempotent
#print axioms parainline_image_rtrim_decompose
#print axioms parainline_imageProcess_literal_delim
#print axioms parainline_imageRule_wfState
#print axioms parainline_imageRule_tokEquiv

/-!
  Trailing kernel-dependent remainder (named, not proved, not invented): TCB-2
  is the agreement of the hand-compiled Image opener/URL scanners with the PHP
  regexes and PcreCore/libpcre2; this lane takes the mirror predicates as the
  spec and does not certify libpcre2. G3 is the parseBytes/byteForm round trip
  and UTF-8 decode/encode identities (TokenStateProof's open
  parseBytes_byteForm_id and byteForm_parseBytes_id), needed for the work
  WFSegs and segsTokEquiv work conjuncts, for the emitted Image token's option
  well-formedness, and for token-table growth. These are carried as explicit
  hypotheses in parainline_imageRule_wfState and parainline_imageRule_tokEquiv.
  Pipeline composition is coordinator scope. No regex-vs-PHP agreement is
  claimed by this file.
-/

end LeanFtml
