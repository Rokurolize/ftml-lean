-- ProofNextFinalIframeDate.lean — Wave 2 next-final proof lane, unit U2: universal kernel-free theorems for the mirror's Iframe and Date rules in LeanFtml.NextRules.
-- Write scope is exactly this file; no mirror source, Main.lean, foundation file, or other proof file was touched. All declarations live in LeanFtml.NextFinal.IframeDate.
-- Axiom discipline: no sorry, no native_decide, no bv_decide; only kernel reduction, simp, omega, and decide on ground literals, so every theorem is within [propext, Classical.choice, Quot.sound] and the #print axioms audit at the end records this.
-- KERNEL-DEPENDENT REMAINDER: the correspondence of iframeMatch/dateMatch1/dateMatch2/dateMatch3 to the PHP regexes under a verified PCRE2 kernel and the mechanically extracted RefTables is NOT asserted here. It is named as the open obligations IframeMatcherCorrespondence, DateMatcherCorrespondence, and IframeRefRegexExtraction below, with conditional reduction theorems showing exactly how a discharged obligation feeds the unconditional process/scan theorems proved here.
-- DIVERGENCE WITNESS (reported to the lead, no file edited): RefTables.lean line 31 declares ("iframe", [[]]) — an empty regex list — because ref-php's Iframe.php builds $this->regex dynamically in __construct from configured schemes, which the mechanical extractor does not evaluate. This is an extractor/kernel coverage gap, not a divergence between this mirror and the PHP rule; the correspondence line is stopped at the named obligation.

import LeanFtml.NextRules

set_option maxRecDepth 10000

namespace LeanFtml.NextFinal.IframeDate

/-! ## Byte classes and literal matchers -/

/-- The intermediate-segment byte class admits exactly the bytes that are not space, slash, double quote, single quote, or the placeholder delimiter. -/
theorem isSegByte_iff (b : Nat) : isSegByte b = true ↔ ((((b ≠ 32 ∧ b ≠ 47) ∧ b ≠ 34) ∧ b ≠ 39) ∧ b ≠ 0xFF) := by
  simp [isSegByte]

/-- The final-segment byte class admits exactly the bytes that are not space, tab, LF, slash, double quote, or the placeholder delimiter; CR and backslash are admitted. -/
theorem isFinalByte_iff (b : Nat) : isFinalByte b = true ↔ (((((b ≠ 32 ∧ b ≠ 9) ∧ b ≠ 10) ∧ b ≠ 47) ∧ b ≠ 34) ∧ b ≠ 0xFF) := by
  simp [isFinalByte]

theorem isSegByte_space : isSegByte 32 = false := by decide
theorem isSegByte_slash : isSegByte 47 = false := by decide
theorem isSegByte_quote : isSegByte 34 = false := by decide
theorem isSegByte_apostrophe : isSegByte 39 = false := by decide
theorem isSegByte_delimiter : isSegByte 0xFF = false := by decide
theorem isFinalByte_tab : isFinalByte 9 = false := by decide
theorem isFinalByte_lf : isFinalByte 10 = false := by decide
theorem isFinalByte_letter : isFinalByte 97 = true := by decide

/-- An exact-byte literal match consumes a prefix: the source equals the pattern followed by the returned rest. -/
theorem matchLitBytes_eq_append (pat src r : List Nat) (h : matchLitBytes pat src = some r) : src = pat ++ r := by
  induction pat generalizing src with
  | nil =>
      simpa [matchLitBytes] using h
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitBytes] at h
      | cons x xs =>
          by_cases hx : (x == p) = true
          · have hxp : x = p := by simpa using hx
            subst x
            simp [matchLitBytes] at h
            have hi := ih xs h
            simpa [hi]
          · simp [matchLitBytes, hx] at h

/-- A case-insensitive literal match consumes exactly pat.length bytes, irrespective of the case folding on individual bytes. -/
theorem matchLitCI_some_length (pat src r : List Nat) (h : matchLitCI pat src = some r) : src.length = pat.length + r.length := by
  induction pat generalizing src with
  | nil =>
      simp [matchLitCI] at h
      subst r
      simp
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hx : byteCiEq x p = true
          · simp [matchLitCI, hx] at h
            have hi := ih xs h
            simp only [List.length_cons]
            omega
          · simp [matchLitCI, hx] at h

theorem matchLitBytes_deterministic (pat src r₁ r₂ : List Nat)
    (h₁ : matchLitBytes pat src = some r₁) (h₂ : matchLitBytes pat src = some r₂) : r₁ = r₂ := by
  rw [h₁] at h₂
  injection h₂

theorem matchLitCI_deterministic (pat src r₁ r₂ : List Nat)
    (h₁ : matchLitCI pat src = some r₁) (h₂ : matchLitCI pat src = some r₂) : r₁ = r₂ := by
  rw [h₁] at h₂
  injection h₂

/-! ## segEnds structure -/

/-- The successor equation of segEnds.go, used to drive structural induction on its fuel. -/
theorem segEnds_go_succ (s : List Nat) (consumed : Nat) (acc : List Nat) (fuel : Nat) :
    segEnds.go s consumed acc (Nat.succ fuel) =
      match s.drop (s.takeWhile isSegByte).length with
      | 47 :: rest => segEnds.go rest (consumed + (s.takeWhile isSegByte).length + 1)
          ((consumed + (s.takeWhile isSegByte).length + 1) :: acc) fuel
      | _ => acc.reverse := by
  rfl

/-- The zero offset survives every segEnds.go step: it starts in the accumulator and newly consed offsets are strictly positive. -/
theorem segEnds_go_zero_mem (s : List Nat) (consumed : Nat) (acc : List Nat) (fuel : Nat)
    (h : 0 ∈ acc) : 0 ∈ segEnds.go s consumed acc fuel := by
  induction fuel generalizing s consumed acc with
  | zero => simpa [segEnds.go] using h
  | succ fuel ih =>
      rw [segEnds_go_succ]
      cases hdrop : s.drop (s.takeWhile isSegByte).length with
      | nil => simpa [hdrop] using h
      | cons x rest =>
          by_cases hx : x = 47
          · subst x
            simpa [hdrop] using
              (ih rest (consumed + (s.takeWhile isSegByte).length + 1)
                ((consumed + (s.takeWhile isSegByte).length + 1) :: acc) (by simp [h]))
          · simpa [hdrop, hx] using h

/-- Zero is always an end offset of segEnds, whatever the source. -/
theorem segEnds_zero_mem (s : List Nat) : 0 ∈ segEnds s := by
  simpa [segEnds] using segEnds_go_zero_mem s 0 [0] (s.length + 1) (by simp)

theorem segEnds_nonempty (s : List Nat) : (segEnds s).isEmpty = false := by
  have h := segEnds_zero_mem s
  cases hl : segEnds s with
  | nil => simp [hl] at h
  | cons x xs => simp

theorem segEnds_nil : segEnds [] = [0] := by
  rfl

/-- Every offset accumulated by segEnds.go is bounded by the bytes consumed so far plus the length of the unconsumed suffix. -/
theorem segEnds_go_le (s : List Nat) (consumed : Nat) (acc : List Nat) (fuel : Nat)
    (hacc : ∀ x ∈ acc, x ≤ consumed) :
    ∀ x ∈ segEnds.go s consumed acc fuel, x ≤ consumed + s.length := by
  induction fuel generalizing s consumed acc with
  | zero =>
      intro x hx
      have hx' : x ∈ acc := by simpa [segEnds.go] using hx
      have hb := hacc x hx'
      omega
  | succ fuel ih =>
      rw [segEnds_go_succ]
      cases hdrop : s.drop (s.takeWhile isSegByte).length with
      | nil =>
          intro y hy
          have hy' : y ∈ acc := by simpa [hdrop] using hy
          have hb := hacc y hy'
          omega
      | cons x rest =>
          by_cases hx : x = 47
          · subst x
            have hlendrop : rest.length + 1 = s.length - (s.takeWhile isSegByte).length := by
              simpa using (congrArg List.length hdrop).symm
            have hlen : s.length = (s.takeWhile isSegByte).length + 1 + rest.length := by omega
            let consumed' := consumed + (s.takeWhile isSegByte).length + 1
            have hacc' : ∀ y ∈ consumed' :: acc, y ≤ consumed' := by
              intro y hy
              simp at hy
              rcases hy with rfl | hy
              · omega
              · have hb := hacc y hy
                omega
            have hres := ih rest consumed' (consumed' :: acc) hacc'
            intro y hy
            have hy' : y ∈ segEnds.go rest consumed' (consumed' :: acc) fuel := by
              simpa [hdrop, consumed'] using hy
            have hb := hres y hy'
            omega
          · intro y hy
            have hy' : y ∈ acc := by simpa [hdrop, hx] using hy
            have hb := hacc y hy'
            omega

/-- Every end offset of segEnds lies within the source length. -/
theorem segEnds_bounded (s : List Nat) : ∀ x ∈ segEnds s, x ≤ s.length := by
  intro x hx
  have hb := segEnds_go_le s 0 [0] (s.length + 1) (by intro y hy; simp at hy; omega) x (by simpa [segEnds] using hx)
  omega

/-! ## Close-suffix structure -/

theorem close2Suffixes_nil : close2Suffixes [] = [] := by
  rfl

/-- Every candidate returned by close2Suffixes starts with the two closing brackets. -/
theorem close2Suffixes_prefix (r : List Nat) : ∀ sfx ∈ close2Suffixes r, sfx.take 2 = [93, 93] := by
  induction r with
  | nil => intro sfx h; simp [close2Suffixes] at h
  | cons x xs ih =>
      intro sfx hmem
      simp [close2Suffixes] at hmem
      rcases hmem with hpfx | htail
      · rcases hpfx with ⟨⟨hx, hxs⟩, hsfx⟩
        subst x
        cases xs with
        | nil => simp at hxs
        | cons y ys =>
          simp at hxs
          subst y
          simpa [hsfx]
      · exact ih sfx htail

/-- Every candidate returned by close2Suffixes is a suffix of the input at a concrete drop index. -/
theorem close2Suffixes_suffix (r : List Nat) : ∀ sfx ∈ close2Suffixes r, ∃ k, sfx = r.drop k := by
  induction r with
  | nil => intro sfx h; simp [close2Suffixes] at h
  | cons x xs ih =>
      intro sfx hmem
      simp [close2Suffixes] at hmem
      rcases hmem with hpfx | htail
      · exact ⟨0, by simpa using hpfx.2⟩
      · rcases ih sfx htail with ⟨k, hk⟩
        exact ⟨k + 1, by simpa using hk⟩

/-- close2SuffixesNoNl only filters close2Suffixes, so every candidate is still a close-bracket suffix. -/
theorem close2SuffixesNoNl_subset (r sfx : List Nat) (h : sfx ∈ close2SuffixesNoNl r) : sfx ∈ close2Suffixes r := by
  have h' := h
  simp [close2SuffixesNoNl] at h'
  exact h'.1

theorem close2SuffixesNoNl_prefix (r sfx : List Nat) (h : sfx ∈ close2SuffixesNoNl r) : sfx.take 2 = [93, 93] :=
  close2Suffixes_prefix r sfx (close2SuffixesNoNl_subset r sfx h)

theorem close2SuffixesNoNl_suffix (r sfx : List Nat) (h : sfx ∈ close2SuffixesNoNl r) : ∃ k, sfx = r.drop k :=
  close2Suffixes_suffix r sfx (close2SuffixesNoNl_subset r sfx h)

/-- The no-newline filter bounds the lazy group's span by the first newline of the tail. -/
theorem close2SuffixesNoNl_bound (r sfx : List Nat) (h : sfx ∈ close2SuffixesNoNl r) :
    r.length - sfx.length ≤ (findSub [10] r).getD r.length := by
  have h' := h
  simp [close2SuffixesNoNl] at h'
  simpa using h'.2

theorem close2SuffixesNoNl_nil : close2SuffixesNoNl [] = [] := by
  rfl

/-! ## Iframe process() -/

def iframeKeys : List (List Nat) :=
  ["align", "frameborder", "height", "scrolling", "width", "class", "style"].map litBytes

theorem iframeSchemes_length : iframeSchemes.length = 7 := by
  rfl

theorem iframeSchemes_nodup : iframeSchemes.Nodup := by
  decide

theorem iframeKeys_length : iframeKeys.length = 7 := by
  rfl

theorem iframeKeys_nodup : iframeKeys.Nodup := by
  decide

/-- The placeholder spliced by iframeProcess is exactly the one for the incoming token count. -/
theorem iframeProcess_ph (url : List Nat) (g2 : Option (List Nat)) (toks : List TokenEntry) :
    (iframeProcess url g2 toks).1 = phBytes toks.length := by
  rfl

/-- iframeProcess appends exactly one token entry. -/
theorem iframeProcess_token_count (url : List Nat) (g2 : Option (List Nat)) (toks : List TokenEntry) :
    (iframeProcess url g2 toks).2.length = toks.length + 1 := by
  simp [iframeProcess]

/-- The single appended entry is an Iframe token. -/
theorem iframeProcess_appended_rule (url : List Nat) (g2 : Option (List Nat)) (toks : List TokenEntry) :
    ((iframeProcess url g2 toks).2.drop toks.length).map (fun e => e.rule) = ["Iframe"] := by
  simp [iframeProcess]

/-- The src option is the claimed URL with every CR and LF byte deleted. -/
theorem iframeProcess_src_option (url : List Nat) (g2 : Option (List Nat)) (toks : List TokenEntry) :
    omGet (((iframeProcess url g2 toks).2.drop toks.length).head?.getD ⟨"", []⟩).opts "src".toList =
      some (textVal (url.filter (fun b => b != 13 && b != 10))) := by
  simp [iframeProcess, omGet]

/-- No CR or LF byte survives the src filter, for every URL. -/
theorem iframeProcess_filter_no_crlf (url : List Nat) :
    (url.filter (fun b => b != 13 && b != 10)).all (fun b => b != 13 && b != 10) = true := by
  induction url with
  | nil => rfl
  | cons b bs ih =>
      by_cases hb : (b != 13 && b != 10) = true
      · simp [hb, ih]
      · simp [hb, ih]

/-- The appended entry's option map contains exactly the src slot and the seven fixed attribute slots. -/
theorem iframeProcess_opt_count (url : List Nat) (g2 : Option (List Nat)) (toks : List TokenEntry) :
    (((iframeProcess url g2 toks).2.drop toks.length).head?.getD ⟨"", []⟩).opts.length = 8 := by
  simp [iframeProcess]

/-- Any of the seven fixed keys absent from getAttrsBytes is assigned OptVal.null in the appended entry, in its fixed slot. -/
theorem iframeProcess_absent_key_null (url : List Nat) (g2 : Option (List Nat)) (toks : List TokenEntry) (k : List Nat)
    (hk : k ∈ iframeKeys) (habs : lookupB (getAttrsBytes (g2.getD [])) k = none) :
    omGet (((iframeProcess url g2 toks).2.drop toks.length).head?.getD ⟨"", []⟩).opts (utf8Decode k) =
      some OptVal.null := by
  have hk' : k = litBytes "align" ∨ k = litBytes "frameborder" ∨ k = litBytes "height" ∨
      k = litBytes "scrolling" ∨ k = litBytes "width" ∨ k = litBytes "class" ∨
      k = litBytes "style" := by
    simpa [iframeKeys] using hk
  rcases hk' with rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals
    simp [litBytes] at habs
    simp [iframeProcess, omGet, utf8Decode, utf8Decode.go, litBytes, habs]

/-- If the opener literal does not match case-insensitively, the whole Iframe matcher cannot fire. -/
theorem iframeMatch_no_opener (src : List Nat)
    (h : matchLitCI (litBytes "[[iframe") src = none) : iframeMatch src = none := by
  simp [iframeMatch, h]

theorem iframeMatch_nil : iframeMatch [] = none := by
  rfl

theorem iframeMatch_deterministic (src : List Nat) (r₁ r₂ : List Nat × Option (List Nat) × List Nat)
    (h₁ : iframeMatch src = some r₁) (h₂ : iframeMatch src = some r₂) : r₁ = r₂ := by
  rw [h₁] at h₂
  injection h₂

/-! ## Iframe scanner -/

/-- Every token the Iframe scanner adds, across any number of matches, is an Iframe token, and the scanner never removes existing tokens. This is independent of the matcher kernel. -/
theorem iframeScan_eq_append (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    ∃ added : List TokenEntry,
      (iframeScan src toks fuel).2 = toks ++ added ∧
      added.all (fun e => e.rule = "Iframe") = true := by
  induction fuel generalizing src toks with
  | zero => exact ⟨[], by simp [iframeScan], by simp⟩
  | succ fuel ih =>
      cases src with
      | nil => exact ⟨[], by simp [iframeScan], by simp⟩
      | cons b rest =>
          cases hm : iframeMatch (b :: rest) with
          | none =>
              rcases ih rest toks with ⟨added, hEq, hAll⟩
              exact ⟨added, by simpa [iframeScan, hm] using hEq, hAll⟩
          | some mg =>
              rcases mg with ⟨url, g2, r⟩
              let t1 := (iframeProcess url g2 toks).2
              rcases ih r t1 with ⟨added, hEq, hAll⟩
              have hEq' : (iframeScan r (iframeProcess url g2 toks).2 fuel).2 = (iframeProcess url g2 toks).2 ++ added := by
                simpa [t1] using hEq
              have ht : toks ++ ((iframeProcess url g2 toks).2.drop toks.length) = (iframeProcess url g2 toks).2 := by
                simp [iframeProcess]
              have hstep : ((iframeProcess url g2 toks).2.drop toks.length).all (fun e => e.rule = "Iframe") = true := by
                simp [iframeProcess]
              refine ⟨((iframeProcess url g2 toks).2.drop toks.length) ++ added, ?_, ?_⟩
              · have htail : (iframeProcess url g2 toks).2 ++ added =
                    toks ++ (((iframeProcess url g2 toks).2.drop toks.length) ++ added) := by
                  rw [← ht]
                  simp [List.append_assoc]
                rw [htail] at hEq'
                simpa [iframeScan, hm] using hEq'
              · simp [hstep, hAll]

theorem iframeScan_toks_mono (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    toks.length ≤ (iframeScan src toks fuel).2.length := by
  rcases iframeScan_eq_append src toks fuel with ⟨added, hEq, hAll⟩
  simp [hEq]

theorem iframeScan_preserves_old (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    (iframeScan src toks fuel).2.take toks.length = toks := by
  rcases iframeScan_eq_append src toks fuel with ⟨added, hEq, hAll⟩
  simp [hEq]

theorem iframeScan_zero (src : List Nat) (toks : List TokenEntry) : iframeScan src toks 0 = ([], toks) := by
  rfl

theorem iframeScan_nil (toks : List TokenEntry) (fuel : Nat) : iframeScan [] toks fuel = ([], toks) := by
  cases fuel <;> rfl

theorem iframeScan_no_match_step (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (h : iframeMatch src = none) :
    (iframeScan src toks (fuel + 1)).2.length = (iframeScan src.tail toks fuel).2.length := by
  cases src with
  | nil => simpa [iframeScan_nil]
  | cons b rest => simp [iframeScan, h]

/-! ## Date numeric and process() -/

theorem dateNumeric_empty : dateNumeric [] = false := by
  rfl

theorem dateNumeric_neg (ds : List Nat) : dateNumeric (45 :: ds) = (!ds.isEmpty && ds.all isDigitByte) := by
  rfl

theorem dateNumeric_pos (d : Nat) (ds : List Nat) (h : d ≠ 45) :
    dateNumeric (d :: ds) = (!(d :: ds).isEmpty && (d :: ds).all isDigitByte) := by
  simp [dateNumeric, h]

/-- Convert a pointwise digit predicate into List.all, and back. -/
theorem all_isDigit_of_forall (l : List Nat) (hf : ∀ x ∈ l, isDigitByte x = true) : l.all isDigitByte = true := by
  induction l with
  | nil => rfl
  | cons b bs ih =>
      have hb : isDigitByte b = true := hf b (by simp)
      have hbs : ∀ x ∈ bs, isDigitByte x = true := by intro x hx; exact hf x (by simp [hx])
      have hi := ih hbs
      simp [hb, hi]

theorem forall_of_all_isDigit (l : List Nat) (ha : l.all isDigitByte = true) : ∀ x ∈ l, isDigitByte x = true := by
  induction l with
  | nil => intro x hx; simp at hx
  | cons b bs ih =>
      have hba : isDigitByte b = true ∧ bs.all isDigitByte = true := by simpa using ha
      intro x hx
      simp at hx
      rcases hx with rfl | hx
      · exact hba.1
      · exact ih hba.2 x hx

/-- dateNumeric is true exactly on a nonempty all-digit run, optionally preceded by one minus byte (which itself must not be a digit). -/
theorem dateNumeric_eq_true_iff (g : List Nat) :
    dateNumeric g = true ↔
      (∃ ds : List Nat, ds ≠ [] ∧ (∀ x ∈ ds, isDigitByte x = true) ∧ (g = ds ∨ g = 45 :: ds)) := by
  cases g with
  | nil => simp [dateNumeric]
  | cons d ds =>
      have h45 : isDigitByte 45 = false := by decide
      by_cases hd : d = 45
      · subst d
        constructor
        · intro h
          simp [dateNumeric] at h
          exact ⟨ds, by simpa using h.1, h.2, Or.inr rfl⟩
        · rintro ⟨t, htne, htall, hcase⟩
          rcases hcase with hcase | hcase
          · subst t
            have hb := htall 45 (by simp)
            simp [h45] at hb
          · cases hcase
            simp [dateNumeric]
            exact ⟨by simpa using htne, htall⟩
      · have hpos := dateNumeric_pos d ds hd
        constructor
        · intro h
          rw [hpos] at h
          simp at h
          have hforall : ∀ x ∈ d :: ds, isDigitByte x = true := by
            intro x hx
            simp at hx
            rcases hx with rfl | hx
            · exact h.1
            · exact h.2 x hx
          exact ⟨d :: ds, by simp, hforall, Or.inl rfl⟩
        · rintro ⟨t, htne, htall, hcase⟩
          rcases hcase with hcase | hcase
          · subst t
            rw [hpos]
            have hall := all_isDigit_of_forall (d :: ds) htall
            simp [hall]
          · injection hcase with heq
            exact (hd heq).elim

/-- The timestamp selector of dateProcess: a participating numeric group is the timestamp, everything else yields the empty timestamp. -/
theorem dateProcess_branch_timestamp (g1 : Option (List Nat)) :
    (let numeric : Bool := match g1 with | some v => dateNumeric v | none => false;
     if numeric then g1.getD [] else []) =
    match g1 with
    | some v => if dateNumeric v = true then v else []
    | none => [] := by
  cases g1 <;> simp

/-- The attribute-text selector of dateProcess: numeric groups read group 2, other groups read group 1, and an absent group reads nothing. -/
theorem dateProcess_branch_attrText (g1 g2 : Option (List Nat)) :
    (let numeric : Bool := match g1 with | some v => dateNumeric v | none => false;
     if numeric then g2.getD [] else g1.getD []) =
    match g1 with
    | some v => if dateNumeric v = true then g2.getD [] else v
    | none => [] := by
  cases g1 <;> simp

theorem getAttrsBytes_nil : getAttrsBytes [] = [] := by
  rfl

theorem dateProcess_ph (g1 g2 : Option (List Nat)) (toks : List TokenEntry) :
    (dateProcess g1 g2 toks).1 = phBytes toks.length := by
  rfl

/-- dateProcess appends exactly one token entry. -/
theorem dateProcess_token_count (g1 g2 : Option (List Nat)) (toks : List TokenEntry) :
    (dateProcess g1 g2 toks).2.length = toks.length + 1 := by
  simp [dateProcess]

/-- The single appended entry is a Date token. -/
theorem dateProcess_appended_rule (g1 g2 : Option (List Nat)) (toks : List TokenEntry) :
    ((dateProcess g1 g2 toks).2.drop toks.length).map (fun e => e.rule) = ["Date"] := by
  simp [dateProcess]

/-- A numeric group with no attribute carry installs that group's bytes as the timestamp value. -/
theorem dateProcess_numeric_timestamp (v : List Nat) (toks : List TokenEntry) (h : dateNumeric v = true) :
    omGet (((dateProcess (some v) none toks).2.drop toks.length).head?.getD ⟨"", []⟩).opts "timestamp".toList =
      some (textVal v) := by
  simp [dateProcess, h, getAttrsBytes_nil, omGet]

/-- An absent group has the empty timestamp when the attribute carry is empty. -/
theorem dateProcess_absent_timestamp (toks : List TokenEntry) :
    omGet (((dateProcess none none toks).2.drop toks.length).head?.getD ⟨"", []⟩).opts "timestamp".toList =
      some (textVal []) := by
  simp [dateProcess, getAttrsBytes_nil, omGet]

/-- A non-numeric group with no attribute carry yields the empty timestamp. -/
theorem dateProcess_non_numeric_timestamp (toks : List TokenEntry) :
    omGet (((dateProcess (some []) none toks).2.drop toks.length).head?.getD ⟨"", []⟩).opts "timestamp".toList =
      some (textVal []) := by
  simp [dateProcess, getAttrsBytes_nil, omGet]

theorem dateMatch1_nil : dateMatch1 [] = none := by
  rfl
theorem dateMatch2_nil : dateMatch2 [] = none := by
  rfl
theorem dateMatch3_nil : dateMatch3 [] = none := by
  rfl

theorem dateMatch1_no_opener (src : List Nat)
    (h : matchLitBytes (litBytes "[[date") src = none) : dateMatch1 src = none := by
  simp [dateMatch1, h]
theorem dateMatch2_no_opener (src : List Nat)
    (h : matchLitBytes (litBytes "[[date") src = none) : dateMatch2 src = none := by
  simp [dateMatch2, h]
theorem dateMatch3_no_opener (src : List Nat)
    (h : matchLitBytes (litBytes "[[date") src = none) : dateMatch3 src = none := by
  simp [dateMatch3, h]

theorem dateMatch1_deterministic (src : List Nat) (r₁ r₂ : Option (List Nat) × Option (List Nat) × List Nat)
    (h₁ : dateMatch1 src = some r₁) (h₂ : dateMatch1 src = some r₂) : r₁ = r₂ := by
  rw [h₁] at h₂
  injection h₂

theorem dateMatch2_deterministic (src : List Nat) (r₁ r₂ : Option (List Nat) × Option (List Nat) × List Nat)
    (h₁ : dateMatch2 src = some r₁) (h₂ : dateMatch2 src = some r₂) : r₁ = r₂ := by
  rw [h₁] at h₂
  injection h₂

theorem dateMatch3_deterministic (src : List Nat) (r₁ r₂ : Option (List Nat) × Option (List Nat) × List Nat)
    (h₁ : dateMatch3 src = some r₁) (h₂ : dateMatch3 src = some r₂) : r₁ = r₂ := by
  rw [h₁] at h₂
  injection h₂

/-! ## Date scanner -/

/-- Universal over every matcher: the Date scanner only ever appends Date tokens, and never removes existing tokens. -/
theorem dateScan_eq_append
    (matcher : List Nat → Option (Option (List Nat) × Option (List Nat) × List Nat))
    (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    ∃ added : List TokenEntry,
      (dateScan matcher src toks fuel).2 = toks ++ added ∧
      added.all (fun e => e.rule = "Date") = true := by
  induction fuel generalizing src toks with
  | zero => exact ⟨[], by simp [dateScan], by simp⟩
  | succ fuel ih =>
      cases src with
      | nil => exact ⟨[], by simp [dateScan], by simp⟩
      | cons b rest =>
          cases hm : matcher (b :: rest) with
          | none =>
              rcases ih rest toks with ⟨added, hEq, hAll⟩
              exact ⟨added, by simpa [dateScan, hm] using hEq, hAll⟩
          | some mg =>
              rcases mg with ⟨g1, g2, r⟩
              let t1 := (dateProcess g1 g2 toks).2
              rcases ih r t1 with ⟨added, hEq, hAll⟩
              have hEq' : (dateScan matcher r (dateProcess g1 g2 toks).2 fuel).2 = (dateProcess g1 g2 toks).2 ++ added := by
                simpa [t1] using hEq
              have ht : toks ++ ((dateProcess g1 g2 toks).2.drop toks.length) = (dateProcess g1 g2 toks).2 := by
                simp [dateProcess]
              have hstep : ((dateProcess g1 g2 toks).2.drop toks.length).all (fun e => e.rule = "Date") = true := by
                simp [dateProcess]
              refine ⟨((dateProcess g1 g2 toks).2.drop toks.length) ++ added, ?_, ?_⟩
              · have htail : (dateProcess g1 g2 toks).2 ++ added =
                    toks ++ (((dateProcess g1 g2 toks).2.drop toks.length) ++ added) := by
                  rw [← ht]
                  simp [List.append_assoc]
                rw [htail] at hEq'
                simpa [dateScan, hm] using hEq'
              · simp [hstep, hAll]

theorem dateScan_toks_mono
    (matcher : List Nat → Option (Option (List Nat) × Option (List Nat) × List Nat))
    (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    toks.length ≤ (dateScan matcher src toks fuel).2.length := by
  rcases dateScan_eq_append matcher src toks fuel with ⟨added, hEq, hAll⟩
  simp [hEq]

theorem dateScan_preserves_old
    (matcher : List Nat → Option (Option (List Nat) × Option (List Nat) × List Nat))
    (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    (dateScan matcher src toks fuel).2.take toks.length = toks := by
  rcases dateScan_eq_append matcher src toks fuel with ⟨added, hEq, hAll⟩
  simp [hEq]

theorem dateScan_zero
    (matcher : List Nat → Option (Option (List Nat) × Option (List Nat) × List Nat))
    (src : List Nat) (toks : List TokenEntry) : dateScan matcher src toks 0 = ([], toks) := by
  rfl

theorem dateScan_nil
    (matcher : List Nat → Option (Option (List Nat) × Option (List Nat) × List Nat))
    (toks : List TokenEntry) (fuel : Nat) : dateScan matcher [] toks fuel = ([], toks) := by
  cases fuel <;> rfl

theorem dateScan_no_match_step
    (matcher : List Nat → Option (Option (List Nat) × Option (List Nat) × List Nat))
    (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (h : matcher src = none) :
    (dateScan matcher src toks (fuel + 1)).2.length = (dateScan matcher src.tail toks fuel).2.length := by
  cases src with
  | nil => simpa [dateScan_nil]
  | cons b rest => simp [dateScan, h]

/-! ## Named open obligations (kernel-dependent, deliberately not asserted) -/

/-- OPEN: a verified PCRE2 kernel K applied to the extracted PHP Iframe regex agrees with this mirror's hand-compiled matcher on every byte string. Parameterized by K and the regex so no axiom or unproved constant is introduced. -/
def IframeMatcherCorrespondence
    (K : List Nat → List Nat → Option (List Nat × Option (List Nat) × List Nat))
    (regex : List Nat) : Prop :=
  ∀ src : List Nat, iframeMatch src = K regex src

/-- OPEN: the three Date regexes under a verified PCRE2 kernel agree with dateMatch1, dateMatch2, and dateMatch3 on every byte string. -/
def DateMatcherCorrespondence
    (K : List Nat → List Nat → Option (Option (List Nat) × Option (List Nat) × List Nat))
    (re1 re2 re3 : List Nat) : Prop :=
  ∀ src : List Nat,
    dateMatch1 src = K re1 src ∧
    dateMatch2 src = K re2 src ∧
    dateMatch3 src = K re3 src

/-- OPEN: the mechanical extractor emits a nonempty regex for the dynamically constructed Iframe pattern. The shipped RefTables.lean line 31 holds ("iframe", [[]]), so this extraction obligation is currently unmet; it is named here, never asserted. -/
def IframeRefRegexExtraction (regexOf : String → List (List Nat)) : Prop :=
  (regexOf "iframe").length = 1 ∧ ((regexOf "iframe").head?.getD []).isEmpty = false

/-- Conditional reduction: once the Iframe matcher correspondence is discharged, a kernel match at src feeds exactly the unconditional process law proved above. -/
theorem iframeMatcherKernelReduction
    (K : List Nat → List Nat → Option (List Nat × Option (List Nat) × List Nat))
    (regex : List Nat) (hcorr : IframeMatcherCorrespondence K regex)
    (src : List Nat) (toks : List TokenEntry) (url r : List Nat) (g2 : Option (List Nat))
    (hk : K regex src = some (url, g2, r)) :
    iframeMatch src = some (url, g2, r) ∧ (iframeProcess url g2 toks).2.length = toks.length + 1 := by
  constructor
  · exact (hcorr src).trans hk
  · exact iframeProcess_token_count url g2 toks

/-- Conditional reduction: once the Date matcher correspondence is discharged, a kernel pattern-1 match at src feeds exactly the unconditional process law proved above. -/
theorem dateMatcherKernelReduction
    (K : List Nat → List Nat → Option (Option (List Nat) × Option (List Nat) × List Nat))
    (re1 re2 re3 : List Nat) (hcorr : DateMatcherCorrespondence K re1 re2 re3)
    (src : List Nat) (toks : List TokenEntry) (g1 g2 : Option (List Nat)) (r : List Nat)
    (hk : K re1 src = some (g1, g2, r)) :
    dateMatch1 src = some (g1, g2, r) ∧ (dateProcess g1 g2 toks).2.length = toks.length + 1 := by
  constructor
  · exact ((hcorr src).1).trans hk
  · exact dateProcess_token_count g1 g2 toks

end LeanFtml.NextFinal.IframeDate

#print axioms LeanFtml.NextFinal.IframeDate.isSegByte_iff
#print axioms LeanFtml.NextFinal.IframeDate.isFinalByte_iff
#print axioms LeanFtml.NextFinal.IframeDate.isSegByte_space
#print axioms LeanFtml.NextFinal.IframeDate.isSegByte_slash
#print axioms LeanFtml.NextFinal.IframeDate.isSegByte_quote
#print axioms LeanFtml.NextFinal.IframeDate.isSegByte_apostrophe
#print axioms LeanFtml.NextFinal.IframeDate.isSegByte_delimiter
#print axioms LeanFtml.NextFinal.IframeDate.isFinalByte_tab
#print axioms LeanFtml.NextFinal.IframeDate.isFinalByte_lf
#print axioms LeanFtml.NextFinal.IframeDate.isFinalByte_letter
#print axioms LeanFtml.NextFinal.IframeDate.matchLitBytes_eq_append
#print axioms LeanFtml.NextFinal.IframeDate.matchLitCI_some_length
#print axioms LeanFtml.NextFinal.IframeDate.matchLitBytes_deterministic
#print axioms LeanFtml.NextFinal.IframeDate.matchLitCI_deterministic
#print axioms LeanFtml.NextFinal.IframeDate.segEnds_go_succ
#print axioms LeanFtml.NextFinal.IframeDate.segEnds_go_zero_mem
#print axioms LeanFtml.NextFinal.IframeDate.segEnds_zero_mem
#print axioms LeanFtml.NextFinal.IframeDate.segEnds_nonempty
#print axioms LeanFtml.NextFinal.IframeDate.segEnds_nil
#print axioms LeanFtml.NextFinal.IframeDate.segEnds_go_le
#print axioms LeanFtml.NextFinal.IframeDate.segEnds_bounded
#print axioms LeanFtml.NextFinal.IframeDate.close2Suffixes_nil
#print axioms LeanFtml.NextFinal.IframeDate.close2Suffixes_prefix
#print axioms LeanFtml.NextFinal.IframeDate.close2Suffixes_suffix
#print axioms LeanFtml.NextFinal.IframeDate.close2SuffixesNoNl_subset
#print axioms LeanFtml.NextFinal.IframeDate.close2SuffixesNoNl_prefix
#print axioms LeanFtml.NextFinal.IframeDate.close2SuffixesNoNl_suffix
#print axioms LeanFtml.NextFinal.IframeDate.close2SuffixesNoNl_bound
#print axioms LeanFtml.NextFinal.IframeDate.close2SuffixesNoNl_nil
#print axioms LeanFtml.NextFinal.IframeDate.iframeSchemes_length
#print axioms LeanFtml.NextFinal.IframeDate.iframeSchemes_nodup
#print axioms LeanFtml.NextFinal.IframeDate.iframeKeys_length
#print axioms LeanFtml.NextFinal.IframeDate.iframeKeys_nodup
#print axioms LeanFtml.NextFinal.IframeDate.iframeProcess_ph
#print axioms LeanFtml.NextFinal.IframeDate.iframeProcess_token_count
#print axioms LeanFtml.NextFinal.IframeDate.iframeProcess_appended_rule
#print axioms LeanFtml.NextFinal.IframeDate.iframeProcess_src_option
#print axioms LeanFtml.NextFinal.IframeDate.iframeProcess_filter_no_crlf
#print axioms LeanFtml.NextFinal.IframeDate.iframeProcess_opt_count
#print axioms LeanFtml.NextFinal.IframeDate.iframeProcess_absent_key_null
#print axioms LeanFtml.NextFinal.IframeDate.iframeMatch_no_opener
#print axioms LeanFtml.NextFinal.IframeDate.iframeMatch_nil
#print axioms LeanFtml.NextFinal.IframeDate.iframeMatch_deterministic
#print axioms LeanFtml.NextFinal.IframeDate.iframeScan_eq_append
#print axioms LeanFtml.NextFinal.IframeDate.iframeScan_toks_mono
#print axioms LeanFtml.NextFinal.IframeDate.iframeScan_preserves_old
#print axioms LeanFtml.NextFinal.IframeDate.iframeScan_zero
#print axioms LeanFtml.NextFinal.IframeDate.iframeScan_nil
#print axioms LeanFtml.NextFinal.IframeDate.iframeScan_no_match_step
#print axioms LeanFtml.NextFinal.IframeDate.dateNumeric_empty
#print axioms LeanFtml.NextFinal.IframeDate.dateNumeric_neg
#print axioms LeanFtml.NextFinal.IframeDate.dateNumeric_pos
#print axioms LeanFtml.NextFinal.IframeDate.all_isDigit_of_forall
#print axioms LeanFtml.NextFinal.IframeDate.forall_of_all_isDigit
#print axioms LeanFtml.NextFinal.IframeDate.dateNumeric_eq_true_iff
#print axioms LeanFtml.NextFinal.IframeDate.dateProcess_branch_timestamp
#print axioms LeanFtml.NextFinal.IframeDate.dateProcess_branch_attrText
#print axioms LeanFtml.NextFinal.IframeDate.getAttrsBytes_nil
#print axioms LeanFtml.NextFinal.IframeDate.dateProcess_ph
#print axioms LeanFtml.NextFinal.IframeDate.dateProcess_token_count
#print axioms LeanFtml.NextFinal.IframeDate.dateProcess_appended_rule
#print axioms LeanFtml.NextFinal.IframeDate.dateProcess_numeric_timestamp
#print axioms LeanFtml.NextFinal.IframeDate.dateProcess_absent_timestamp
#print axioms LeanFtml.NextFinal.IframeDate.dateProcess_non_numeric_timestamp
#print axioms LeanFtml.NextFinal.IframeDate.dateMatch1_nil
#print axioms LeanFtml.NextFinal.IframeDate.dateMatch2_nil
#print axioms LeanFtml.NextFinal.IframeDate.dateMatch3_nil
#print axioms LeanFtml.NextFinal.IframeDate.dateMatch1_no_opener
#print axioms LeanFtml.NextFinal.IframeDate.dateMatch2_no_opener
#print axioms LeanFtml.NextFinal.IframeDate.dateMatch3_no_opener
#print axioms LeanFtml.NextFinal.IframeDate.dateMatch1_deterministic
#print axioms LeanFtml.NextFinal.IframeDate.dateMatch2_deterministic
#print axioms LeanFtml.NextFinal.IframeDate.dateMatch3_deterministic
#print axioms LeanFtml.NextFinal.IframeDate.dateScan_eq_append
#print axioms LeanFtml.NextFinal.IframeDate.dateScan_toks_mono
#print axioms LeanFtml.NextFinal.IframeDate.dateScan_preserves_old
#print axioms LeanFtml.NextFinal.IframeDate.dateScan_zero
#print axioms LeanFtml.NextFinal.IframeDate.dateScan_nil
#print axioms LeanFtml.NextFinal.IframeDate.dateScan_no_match_step
#print axioms LeanFtml.NextFinal.IframeDate.iframeMatcherKernelReduction
#print axioms LeanFtml.NextFinal.IframeDate.dateMatcherKernelReduction
