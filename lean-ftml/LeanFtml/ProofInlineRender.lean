/-
  LeanFtml.ProofInlineRender — Wave 2 proof/para-inline lane, task-3.
  ADVISOR-PROOF-POLICY §2.2 Class A (61 pure/env-parametric render rules).
  Unit: the linear pure inline renderers of LeanFtml/InlineSimpleRules.lean,
  read firsthand. These are direct algebraic functions OptMap -> List Nat;
  none reads RenderEnv, RenderConf or DocState, so env-parametricity holds
  vacuously and every theorem below quantifies over ALL OptMap, which is
  strictly stronger than the reachable-OptMap render_<r>_eq_ref shape.
  Proved: hex/percent-encoding algebra, ascii lowering laws, PHP truthiness
  characterization, escape-table determinism, sprintf slot laws, table-lookup
  determinism, option-locality and tag-emission shape for every renderer,
  color-admission facts, and the Tighten constant law. Each renderer equals
  its own deterministic spec for every OptMap (the shape theorems).
  Named remainder: agreement of these mirrors with the extracted PHP reference
  spec, and a concrete ReachableTok predicate, are coordinator/TCB scope
  (ProofInterface parameters, F2/F3); the kernel inlines concrete litBytes
  in ground pins but no extracted-PHP oracle is consulted here.
  Axioms: only [propext, Classical.choice, Quot.sound]; no sorry, admit,
  placeholder, native_decide, bv_decide or Lean.ofReduceBool.
  Prose is flowing paragraphs on single lines.
-/
import LeanFtml.InlineSimpleRules

namespace LeanFtml

set_option maxRecDepth 8192

/-! ## Hex and percent-encoding -/

theorem parainline_inline_render_hexByteUpper_length (b : Nat) :
    (hexByteUpper b).length = 2 := rfl

theorem parainline_inline_render_hexByteUpper_ascii (b : Nat) (hb : b ≤ 255) :
    ∀ x ∈ hexByteUpper b, x < 0x80 := by
  have hhi : b / 16 ≤ 15 := by omega
  have hlo : b % 16 ≤ 15 := by omega
  intro x hx
  unfold hexByteUpper at hx
  simp only [List.mem_cons, List.mem_nil_iff, or_false] at hx
  rcases hx with rfl | rfl
  · split <;> omega
  · split <;> omega

theorem parainline_inline_render_percentEncodeNonAscii_ascii_id (bs : List Nat)
    (h : ∀ b ∈ bs, b < 0x80) : percentEncodeNonAscii bs = bs := by
  induction bs with
  | nil => rfl
  | cons b rest ih =>
      have hb : b < 0x80 := h b (by simp)
      have hrest : ∀ x ∈ rest, x < 0x80 :=
        fun x hx => h x (by simp [hx])
      change (if b < 0x80 then [b] else 37 :: hexByteUpper b) ++
        percentEncodeNonAscii rest = b :: rest
      simp [hb, ih hrest]

theorem parainline_inline_render_percentEncodeNonAscii_append (xs ys : List Nat) :
    percentEncodeNonAscii (xs ++ ys) =
      percentEncodeNonAscii xs ++ percentEncodeNonAscii ys := by
  induction xs with
  | nil => simp [percentEncodeNonAscii]
  | cons x xs ih => simp [percentEncodeNonAscii, ih]

theorem parainline_inline_render_percentEncodeNonAscii_ascii_out (bs : List Nat)
    (h : ∀ b ∈ bs, b ≤ 255) :
    ∀ x ∈ percentEncodeNonAscii bs, x < 0x80 := by
  intro x hx
  simp only [percentEncodeNonAscii, List.mem_flatMap] at hx
  rcases hx with ⟨b, hbmem, hxin⟩
  have hble : b ≤ 255 := h b hbmem
  by_cases hlt : b < 0x80
  · simp [hlt] at hxin
    omega
  · simp [hlt] at hxin
    rcases hxin with rfl | hxin
    · omega
    · exact parainline_inline_render_hexByteUpper_ascii b hble x hxin

/-! ## ASCII lowercasing -/

private theorem parainline_asciiLowerByte_idem (b : Nat) :
    (if 65 ≤ (if 65 ≤ b && b ≤ 90 then b + 32 else b) &&
           (if 65 ≤ b && b ≤ 90 then b + 32 else b) ≤ 90
     then (if 65 ≤ b && b ≤ 90 then b + 32 else b) + 32
     else (if 65 ≤ b && b ≤ 90 then b + 32 else b))
      = (if 65 ≤ b && b ≤ 90 then b + 32 else b) := by
  by_cases h65 : 65 ≤ b
  · by_cases h90 : b ≤ 90
    · have hnot : ¬(b + 32 ≤ 90) := by omega
      simp [h65, h90, hnot]
    · simp [h65, h90]
  · simp [h65]

private theorem parainline_asciiLowerByte_no_upper (b : Nat) :
    ¬(65 ≤ (if 65 ≤ b && b ≤ 90 then b + 32 else b) ∧
      (if 65 ≤ b && b ≤ 90 then b + 32 else b) ≤ 90) := by
  by_cases h65 : 65 ≤ b
  · by_cases h90 : b ≤ 90
    · have hnot : ¬(b + 32 ≤ 90) := by omega
      simp [h65, h90, hnot]
    · simp [h65, h90]
  · simp [h65]

theorem parainline_inline_render_asciiLowerBytes_idem (bs : List Nat) :
    asciiLowerBytes (asciiLowerBytes bs) = asciiLowerBytes bs := by
  induction bs with
  | nil => rfl
  | cons b rest ih =>
      simp only [asciiLowerBytes, List.map_cons, List.map_map] at ih ⊢
      rw [ih]
      rw [parainline_asciiLowerByte_idem b]

theorem parainline_inline_render_asciiLowerBytes_length (bs : List Nat) :
    (asciiLowerBytes bs).length = bs.length := by
  simp [asciiLowerBytes]

theorem parainline_inline_render_asciiLowerBytes_append (xs ys : List Nat) :
    asciiLowerBytes (xs ++ ys) = asciiLowerBytes xs ++ asciiLowerBytes ys := by
  simp [asciiLowerBytes]

theorem parainline_inline_render_asciiLowerBytes_no_upper (bs : List Nat) :
    ∀ b ∈ asciiLowerBytes bs, ¬(65 ≤ b ∧ b ≤ 90) := by
  intro b hb
  induction bs with
  | nil => simp [asciiLowerBytes] at hb
  | cons x rest ih =>
      simp only [asciiLowerBytes, List.map_cons, List.mem_cons] at hb
      rcases hb with rfl | hb
      · exact parainline_asciiLowerByte_no_upper x
      · exact ih hb

/-! ## PHP truthiness -/

theorem parainline_inline_render_phpTruthyBytes_false_iff (bs : List Nat) :
    phpTruthyBytes bs = false ↔ bs = [] ∨ bs = [48] := by
  cases bs with
  | nil => simp [phpTruthyBytes]
  | cons b rest =>
      cases rest with
      | nil =>
          by_cases hb : b == 48
          · have hb' : b = 48 := beq_iff_eq.mp hb
            subst b
            simp [phpTruthyBytes]
          · have hbne : b ≠ 48 := by
              intro hbeq
              apply hb
              simpa [hbeq]
            simp [phpTruthyBytes, hb, hbne]
      | cons c rest' =>
          simp [phpTruthyBytes]

theorem parainline_inline_render_phpTruthyBytes_true_iff (bs : List Nat) :
    phpTruthyBytes bs = true ↔ bs ≠ [] ∧ bs ≠ [48] := by
  constructor
  · intro h
    constructor
    · intro hnil
      subst bs
      simp [phpTruthyBytes] at h
    · intro hzero
      subst bs
      simp [phpTruthyBytes] at h
  · rintro ⟨hne, hne0⟩
    cases hp : phpTruthyBytes bs
    · exfalso
      rcases (parainline_inline_render_phpTruthyBytes_false_iff bs).mp hp with hbad | hbad
      · exact hne hbad
      · exact hne0 hbad
    · rfl

/-! ## Mathinline escape table -/

theorem parainline_inline_render_mathinlineEscByte_eq_self_iff (b : Nat) :
    mathinlineEscByte b = [b] ↔
      b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62 ∧ b ≠ 34 ∧ b ≠ 39 ∧ b ≠ 0 := by
  constructor
  · intro h
    have h38 : b ≠ 38 := by
      intro hb; subst b
      simp [mathinlineEscByte, litBytes] at h
    have h60 : b ≠ 60 := by
      intro hb; subst b
      simp [mathinlineEscByte, litBytes] at h
    have h62 : b ≠ 62 := by
      intro hb; subst b
      simp [mathinlineEscByte, litBytes] at h
    have h34 : b ≠ 34 := by
      intro hb; subst b
      simp [mathinlineEscByte, litBytes] at h
    have h39 : b ≠ 39 := by
      intro hb; subst b
      simp [mathinlineEscByte, litBytes] at h
    have h0 : b ≠ 0 := by
      intro hb; subst b
      simp [mathinlineEscByte] at h
    exact ⟨h38, h60, h62, h34, h39, h0⟩
  · rintro ⟨h38, h60, h62, h34, h39, h0⟩
    have e38 : (b == 38) = false := beq_false_of_ne h38
    have e60 : (b == 60) = false := beq_false_of_ne h60
    have e62 : (b == 62) = false := beq_false_of_ne h62
    have e34 : (b == 34) = false := beq_false_of_ne h34
    have e39 : (b == 39) = false := beq_false_of_ne h39
    have e0 : (b == 0) = false := beq_false_of_ne h0
    simp [mathinlineEscByte, e38, e60, e62, e34, e39, e0]

theorem parainline_inline_render_renderMathinline_shape (opts : OptMap) :
    renderMathinline opts =
      litBytes "<span class=\"math-inline\">$" ++
        (optStrBytes opts "content".toList).flatMap mathinlineEscByte ++
        litBytes "$</span>" := rfl

/-! ## Byte-keyed table lookup -/

theorem parainline_inline_render_bytesTableLookup_nil (key : List Nat) :
    bytesTableLookup [] key = none := rfl

theorem parainline_inline_render_bytesTableLookup_some_mem
    (tbl : List (List Nat × List Nat)) (key v : List Nat)
    (h : bytesTableLookup tbl key = some v) :
    ∃ p ∈ tbl, p.1 = key ∧ p.2 = v := by
  induction tbl with
  | nil => simp [bytesTableLookup] at h
  | cons p rest ih =>
      rcases p with ⟨pk, pv⟩
      by_cases hpk : pk == key
      · have hpk' : pk = key := beq_iff_eq.mp hpk
        simp [bytesTableLookup, hpk] at h
        exact ⟨(pk, pv), by simp, hpk', h⟩
      · simp [bytesTableLookup, hpk] at h
        rcases ih h with ⟨q, hqmem, hq1, hq2⟩
        exact ⟨q, List.mem_cons_of_mem _ hqmem, hq1, hq2⟩

theorem parainline_inline_render_bytesTableLookup_append
    (t₁ t₂ : List (List Nat × List Nat)) (key : List Nat) :
    bytesTableLookup (t₁ ++ t₂) key =
      match bytesTableLookup t₁ key with
      | some v => some v
      | none => bytesTableLookup t₂ key := by
  induction t₁ with
  | nil => rfl
  | cons p rest ih =>
      rcases p with ⟨pk, pv⟩
      by_cases h : pk == key
      · simp [bytesTableLookup, h]
      · simp [bytesTableLookup, h, ih]

/-! ## sprintf %s laws -/

private theorem parainline_sprintf_no_pct_go (t rest page : List Nat)
    (h : ∀ b ∈ t, b ≠ 37) :
    sprintfPercentS (t ++ rest) page = t ++ sprintfPercentS rest page := by
  induction t with
  | nil => rfl
  | cons b t ih =>
      have hb : b ≠ 37 := h b (by simp)
      have ht : ∀ x ∈ t, x ≠ 37 :=
        fun x hx => h x (by simp [hx])
      simp [sprintfPercentS, hb, ih ht]

theorem parainline_inline_render_sprintfPercentS_no_pct (t page : List Nat)
    (h : ∀ b ∈ t, b ≠ 37) : sprintfPercentS t page = t := by
  simpa [sprintfPercentS] using parainline_sprintf_no_pct_go t [] page h

theorem parainline_inline_render_sprintfPercentS_one_slot
    (pre post page : List Nat)
    (hpre : ∀ b ∈ pre, b ≠ 37) (hpost : ∀ b ∈ post, b ≠ 37) :
    sprintfPercentS (pre ++ [37, 115] ++ post) page = pre ++ page ++ post := by
  rw [List.append_assoc]
  rw [parainline_sprintf_no_pct_go pre ([37, 115] ++ post) page hpre]
  have hpostid : sprintfPercentS post page = post :=
    parainline_inline_render_sprintfPercentS_no_pct post page hpost
  simp [sprintfPercentS, hpostid, List.append_assoc]

theorem parainline_inline_render_sprintfPercentS_escaped_percent
    (pre post page : List Nat)
    (hpre : ∀ b ∈ pre, b ≠ 37) (hpost : ∀ b ∈ post, b ≠ 37) :
    sprintfPercentS (pre ++ [37, 37] ++ post) page = pre ++ [37] ++ post := by
  rw [List.append_assoc]
  rw [parainline_sprintf_no_pct_go pre ([37, 37] ++ post) page hpre]
  have hpostid : sprintfPercentS post page = post :=
    parainline_inline_render_sprintfPercentS_no_pct post page hpost
  simp [sprintfPercentS, hpostid, List.append_assoc]

/-! ## Renderer option-locality and deterministic shape -/

theorem parainline_inline_render_renderUrl_locality (o₁ o₂ : OptMap)
    (hhref : optStrBytes o₁ ['h','r','e','f'] = optStrBytes o₂ ['h','r','e','f'])
    (htext : optStrBytes o₁ ['t','e','x','t'] = optStrBytes o₂ ['t','e','x','t'])
    (htarget : optStrBytes o₁ ['t','a','r','g','e','t'] = optStrBytes o₂ ['t','a','r','g','e','t'])
    (htype : optStrBytes o₁ ['t','y','p','e'] = optStrBytes o₂ ['t','y','p','e']) :
    renderUrl o₁ = renderUrl o₂ := by
  simp [renderUrl, inlineTypeIs, hhref, htext, htarget, htype]

theorem parainline_inline_render_renderEmail_locality (o₁ o₂ : OptMap)
    (hemail : optStrBytes o₁ ['e','m','a','i','l'] = optStrBytes o₂ ['e','m','a','i','l'])
    (htext : optStrBytes o₁ ['t','e','x','t'] = optStrBytes o₂ ['t','e','x','t']) :
    renderEmail o₁ = renderEmail o₂ := by
  simp [renderEmail, hemail, htext]

theorem parainline_inline_render_renderMathinline_locality (o₁ o₂ : OptMap)
    (hcontent : optStrBytes o₁ ['c','o','n','t','e','n','t'] = optStrBytes o₂ ['c','o','n','t','e','n','t']) :
    renderMathinline o₁ = renderMathinline o₂ := by
  simp [renderMathinline, hcontent]

theorem parainline_inline_render_renderInterwiki_locality (o₁ o₂ : OptMap)
    (hsite : optStrBytes o₁ ['s','i','t','e'] = optStrBytes o₂ ['s','i','t','e'])
    (hpage : optStrBytes o₁ ['p','a','g','e'] = optStrBytes o₂ ['p','a','g','e'])
    (htext : optStrBytes o₁ ['t','e','x','t'] = optStrBytes o₂ ['t','e','x','t']) :
    renderInterwiki o₁ = renderInterwiki o₂ := by
  simp [renderInterwiki, hsite, hpage, htext]

theorem parainline_inline_render_renderColortext_locality (o₁ o₂ : OptMap)
    (hcolor : optStrBytes o₁ ['c','o','l','o','r'] = optStrBytes o₂ ['c','o','l','o','r'])
    (htype : optStrBytes o₁ ['t','y','p','e'] = optStrBytes o₂ ['t','y','p','e']) :
    renderColortext o₁ = renderColortext o₂ := by
  simp [renderColortext, inlineTypeIs, hcolor, htype]

theorem parainline_inline_render_renderTypography_locality (o₁ o₂ : OptMap)
    (hchar : optStrBytes o₁ ['c','h','a','r'] = optStrBytes o₂ ['c','h','a','r']) :
    renderTypography o₁ = renderTypography o₂ := by
  simp [renderTypography, hchar]

theorem parainline_inline_render_renderTaggedPair_shape
    (opts : OptMap) (openB closeB : List Nat) :
    renderTaggedPair opts openB closeB =
      if inlineTypeIs opts (litBytes "start") then openB
      else if inlineTypeIs opts (litBytes "end") then closeB
      else [] := rfl

theorem parainline_inline_render_renderTaggedPair_locality (o₁ o₂ : OptMap)
    (openB closeB : List Nat)
    (htype : optStrBytes o₁ ['t','y','p','e'] = optStrBytes o₂ ['t','y','p','e']) :
    renderTaggedPair o₁ openB closeB = renderTaggedPair o₂ openB closeB := by
  simp [renderTaggedPair, inlineTypeIs, htype]

theorem parainline_inline_render_renderTaggedPair_other
    (opts : OptMap) (openB closeB : List Nat)
    (hs : inlineTypeIs opts (litBytes "start") = false)
    (he : inlineTypeIs opts (litBytes "end") = false) :
    renderTaggedPair opts openB closeB = [] := by
  simp [renderTaggedPair, hs, he]

theorem parainline_inline_render_renderStrong_locality (o₁ o₂ : OptMap)
    (htype : optStrBytes o₁ ['t','y','p','e'] = optStrBytes o₂ ['t','y','p','e']) :
    renderStrong o₁ = renderStrong o₂ := by
  unfold renderStrong
  exact parainline_inline_render_renderTaggedPair_locality o₁ o₂ _ _ htype

theorem parainline_inline_render_renderEmphasis_locality (o₁ o₂ : OptMap)
    (htype : optStrBytes o₁ ['t','y','p','e'] = optStrBytes o₂ ['t','y','p','e']) :
    renderEmphasis o₁ = renderEmphasis o₂ := by
  unfold renderEmphasis
  exact parainline_inline_render_renderTaggedPair_locality o₁ o₂ _ _ htype

theorem parainline_inline_render_renderUnderline_locality (o₁ o₂ : OptMap)
    (htype : optStrBytes o₁ ['t','y','p','e'] = optStrBytes o₂ ['t','y','p','e']) :
    renderUnderline o₁ = renderUnderline o₂ := by
  unfold renderUnderline
  exact parainline_inline_render_renderTaggedPair_locality o₁ o₂ _ _ htype

theorem parainline_inline_render_renderStrikethrough_locality (o₁ o₂ : OptMap)
    (htype : optStrBytes o₁ ['t','y','p','e'] = optStrBytes o₂ ['t','y','p','e']) :
    renderStrikethrough o₁ = renderStrikethrough o₂ := by
  unfold renderStrikethrough
  exact parainline_inline_render_renderTaggedPair_locality o₁ o₂ _ _ htype

theorem parainline_inline_render_renderTt_locality (o₁ o₂ : OptMap)
    (htype : optStrBytes o₁ ['t','y','p','e'] = optStrBytes o₂ ['t','y','p','e']) :
    renderTt o₁ = renderTt o₂ := by
  unfold renderTt
  exact parainline_inline_render_renderTaggedPair_locality o₁ o₂ _ _ htype

theorem parainline_inline_render_renderSuperscript_locality (o₁ o₂ : OptMap)
    (htype : optStrBytes o₁ ['t','y','p','e'] = optStrBytes o₂ ['t','y','p','e']) :
    renderSuperscript o₁ = renderSuperscript o₂ := by
  unfold renderSuperscript
  exact parainline_inline_render_renderTaggedPair_locality o₁ o₂ _ _ htype

theorem parainline_inline_render_renderSubscript_locality (o₁ o₂ : OptMap)
    (htype : optStrBytes o₁ ['t','y','p','e'] = optStrBytes o₂ ['t','y','p','e']) :
    renderSubscript o₁ = renderSubscript o₂ := by
  unfold renderSubscript
  exact parainline_inline_render_renderTaggedPair_locality o₁ o₂ _ _ htype

theorem parainline_inline_render_renderTighten_const : renderTighten = [] := rfl

/-! ## Color admission facts -/

theorem parainline_inline_render_isHexDigitB_colorClassB (b : Nat)
    (h : isHexDigitB b = true) : colorClassB b = true := by
  have h' : ((48 ≤ b ∧ b ≤ 57) ∨ (65 ≤ b ∧ b ≤ 70)) ∨ (97 ≤ b ∧ b ≤ 102) := by
    simpa [isHexDigitB] using h
  rcases h' with h' | h'
  · rcases h' with h' | h'
    · simp [colorClassB, h'.1, h'.2]
    · have h90 : b ≤ 90 := by omega
      simp [colorClassB, h'.1, h90]
  · have h122 : b ≤ 122 := by omega
    simp [colorClassB, h'.1, h122]

theorem parainline_inline_render_normalizeColor_some_lowercase
    (raw c : List Nat) (h : normalizeColor raw = some c) :
    ∀ b ∈ c, ¬(65 ≤ b ∧ b ≤ 90) := by
  let collapsed := asciiLowerBytes (collapseSpaceTab raw)
  let hex := if collapsed.head? == some 35 then collapsed.tail else collapsed
  change (if (hex.length == 3 || hex.length == 6) && hex.all isHexDigitB
          then some (35 :: hex)
          else if collapsed.all colorClassB then some collapsed else none) = some c at h
  by_cases hhex : (hex.length == 3 || hex.length == 6) && hex.all isHexDigitB
  · rw [if_pos hhex] at h
    injection h with hc
    subst c
    intro b hb
    simp only [List.mem_cons] at hb
    rcases hb with rfl | hb
    · omega
    · by_cases hhead : collapsed.head? == some 35
      · have hbtail : b ∈ collapsed.tail := by simpa [hex, hhead] using hb
        have hb' : b ∈ collapsed := by
          cases hL : collapsed with
          | nil => simp [hL] at hbtail
          | cons hd tl =>
              simpa [hL] using (List.mem_cons_of_mem hd hbtail)
        exact parainline_inline_render_asciiLowerBytes_no_upper
          (collapseSpaceTab raw) b hb'
      · have hb' : b ∈ collapsed := by simpa [hex, hhead] using hb
        exact parainline_inline_render_asciiLowerBytes_no_upper
          (collapseSpaceTab raw) b hb'
  · rw [if_neg hhex] at h
    by_cases hcls : collapsed.all colorClassB
    · rw [if_pos hcls] at h
      injection h with hc
      subst c
      exact parainline_inline_render_asciiLowerBytes_no_upper (collapseSpaceTab raw)
    · rw [if_neg hcls] at h
      cases h

/-! ## Axiom audit -/

#print axioms parainline_inline_render_hexByteUpper_ascii
#print axioms parainline_inline_render_percentEncodeNonAscii_ascii_id
#print axioms parainline_inline_render_percentEncodeNonAscii_ascii_out
#print axioms parainline_inline_render_asciiLowerBytes_idem
#print axioms parainline_inline_render_asciiLowerBytes_no_upper
#print axioms parainline_inline_render_phpTruthyBytes_false_iff
#print axioms parainline_inline_render_mathinlineEscByte_eq_self_iff
#print axioms parainline_inline_render_bytesTableLookup_some_mem
#print axioms parainline_inline_render_sprintfPercentS_one_slot
#print axioms parainline_inline_render_renderUrl_locality
#print axioms parainline_inline_render_renderInterwiki_locality
#print axioms parainline_inline_render_renderTaggedPair_shape
#print axioms parainline_inline_render_normalizeColor_some_lowercase

end LeanFtml
