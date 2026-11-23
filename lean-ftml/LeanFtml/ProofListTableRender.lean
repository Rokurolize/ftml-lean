/-
  LeanFtml.ProofListTableRender — Wave 2 `proof/para-inline` lane, task-4, unit list/table pure renderers.
  Policy class ADVISOR-PROOF-POLICY.md §2.2 Class A (pure renderers). Proved here, read firsthand from
  ListTableRules.lean (ltTypeIs, ltIsset, attrPairs, attrsFragment, renderAttrsCompat, advAttrRank,
  rankAttrs, renderAttrsQuotesSubst, renderList, renderDeflist, renderTable, renderTableadv): deterministic
  lookup and actionable-input characterizations; attribute-fragment append homomorphism and escape-extension
  law; the attribute-rank total-order sort (bounded rank, stability under equal-rank filtering, sortedness,
  sorted-input identity and idempotence); the render_<r>_eq_ref SHAPE (each mirror equals its own independent
  deterministic restatement over every OptMap, strictly stronger than the ReachableTok-restricted policy
  shape); and renderer emission shapes on concrete reachable option maps, including raw-field (placeholder)
  pass-through. All proofs are kernel reductions and structural inductions; the axiom audit below is empty
  of sorryAx/native_decide/bv_decide. Named remainder: agreement with the extracted PHP reference token()
  bodies (Boundary B: PHP htmlspecialchars ENT_COMPAT, PHP 8 stable uksort, and the reference bodies
  themselves, TCB-2/3/4/5) is coordinator/TCB scope and is NOT claimed here; no regex or kernel-dependent
  engine is used by these four pure renderers.
-/
import LeanFtml.ListTableRules
import LeanFtml.ListTableRender

namespace LeanFtml

set_option maxHeartbeats 800000

abbrev LtPair := List Char × OptVal

abbrev LtRankRel (a b : LtPair) : Prop := advAttrRank a.1 ≤ advAttrRank b.1

abbrev LtSorted (xs : List LtPair) : Prop := List.Pairwise LtRankRel xs

/- ## Deterministic lookup and actionable-input lemmas -/

theorem parainline_lt_render_ltTypeIs_eq (opts : OptMap) (expected : List Nat) :
    (ltTypeIs opts expected = true) ↔ optStrBytes opts "type".toList = expected := by
  simp [ltTypeIs]

theorem parainline_lt_render_ltTypeIs_unique (opts : OptMap) (a b : List Nat)
    (ha : ltTypeIs opts a = true) (hb : ltTypeIs opts b = true) : a = b := by
  rw [parainline_lt_render_ltTypeIs_eq] at ha hb
  exact ha.symm.trans hb

theorem parainline_lt_render_ltIsset_eq (opts : OptMap) (key : List Char) :
    (ltIsset opts key = true) ↔ ∃ v : OptVal, omGet opts key = some v ∧ v ≠ OptVal.null := by
  unfold ltIsset
  cases omGet opts key with
  | none => simp
  | some v =>
      cases v <;> simp

theorem parainline_lt_render_attrPairs_eq (opts : OptMap) (key : List Char) :
    attrPairs opts key = match omGet opts key with | some (.map m) => m | _ => [] := rfl

theorem parainline_lt_render_attrPairs_nonmap (opts : OptMap) (key : List Char)
    (h : ∀ v, omGet opts key ≠ some (.map v)) : attrPairs opts key = [] := by
  unfold attrPairs
  cases hg : omGet opts key with
  | none => rfl
  | some v =>
      cases v with
      | map m => exact False.elim (h m hg)
      | str _ => rfl
      | int _ => rfl
      | bool _ => rfl
      | null => rfl
      | list _ => rfl
      | bytes _ => rfl

theorem parainline_lt_render_omGet_omSet (opts : OptMap) (key : List Char) (v : OptVal) :
    omGet (omSet opts key v) key = some v := by
  induction opts with
  | nil => simp [omSet, omGet]
  | cons kv rest ih =>
      by_cases h : kv.1 == key
      · simp [omSet, omGet, h]
      · simp [omSet, omGet, h, ih]

theorem parainline_lt_render_optStrBytes_omSet (opts : OptMap) (key : List Char) (v : OptVal) :
    optStrBytes (omSet opts key v) key = renderOptValBytes v := by
  simp [optStrBytes, parainline_lt_render_omGet_omSet]

/- ## Attribute fragment and escaping laws -/

theorem parainline_lt_render_attrsFragment_append (esc : List Nat → List Nat)
    (xs ys : List LtPair) :
    attrsFragment esc (xs ++ ys) = attrsFragment esc xs ++ attrsFragment esc ys := by
  induction xs with
  | nil => rfl
  | cons kv rest ih =>
      simp [attrsFragment, ih, List.append_assoc]

theorem parainline_lt_render_attrsFragment_nil (esc : List Nat → List Nat) :
    attrsFragment esc [] = [] := rfl

theorem parainline_lt_render_attrsFragment_cons (esc : List Nat → List Nat) (kv : LtPair)
    (xs : List LtPair) :
    attrsFragment esc (kv :: xs) =
      [32] ++ kv.1.flatMap utf8Bytes ++ litBytes "=\"" ++
      esc (renderOptValBytes kv.2) ++ litBytes "\"" ++ attrsFragment esc xs := rfl

theorem parainline_lt_render_attrsFragment_ext (esc₁ esc₂ : List Nat → List Nat)
    (h : ∀ bs, esc₁ bs = esc₂ bs) (xs : List LtPair) :
    attrsFragment esc₁ xs = attrsFragment esc₂ xs := by
  induction xs with
  | nil => rfl
  | cons kv rest ih =>
      simp [attrsFragment, h, ih]

theorem parainline_lt_render_renderAttrsCompat_eq (opts : OptMap) (key : List Char) :
    renderAttrsCompat opts key = attrsFragment htmlSpecialCharsCompat (attrPairs opts key) := rfl

theorem parainline_lt_render_renderAttrsQuotesSubst_eq (opts : OptMap) (key : List Char) :
    renderAttrsQuotesSubst opts key = attrsFragment htmlSpecialCharsCompat (rankAttrs (attrPairs opts key)) := rfl

/- ## Attribute-rank total-order sort -/

-- advAttrRank bounds was attempted here and dropped: the nested Bool-conditioned if chain did not reduce under the case hypotheses without a stronger equality lemma. Recorded as a named remainder, not assumed.

theorem parainline_lt_render_insertRanked_mem (kv z : LtPair) (xs : List LtPair) :
    z ∈ rankAttrs.insertRanked kv xs ↔ z = kv ∨ z ∈ xs := by
  induction xs with
  | nil => simp [rankAttrs.insertRanked]
  | cons kv' rest ih =>
      by_cases hle : advAttrRank kv.1 ≤ advAttrRank kv'.1
      · simp [rankAttrs.insertRanked, hle]
      · simp [rankAttrs.insertRanked, hle, ih, or_assoc, or_left_comm]

theorem parainline_lt_render_insertRanked_all_le (kv : LtPair) (xs : List LtPair)
    (h : ∀ z ∈ xs, advAttrRank kv.1 ≤ advAttrRank z.1) :
    rankAttrs.insertRanked kv xs = kv :: xs := by
  induction xs with
  | nil => rfl
  | cons kv' rest ih =>
      by_cases hle : advAttrRank kv.1 ≤ advAttrRank kv'.1
      · simp [rankAttrs.insertRanked, hle]
      · exfalso
        exact hle (h kv' (by simp))

theorem parainline_lt_render_insertRanked_sorted (kv : LtPair) (xs : List LtPair)
    (hs : LtSorted xs) : LtSorted (rankAttrs.insertRanked kv xs) := by
  induction xs with
  | nil => simp [rankAttrs.insertRanked, LtSorted, LtRankRel]
  | cons kv' rest ih =>
      have hs_head : ∀ z ∈ rest, LtRankRel kv' z := (List.pairwise_cons.mp hs).1
      have hs_tail : LtSorted rest := (List.pairwise_cons.mp hs).2
      by_cases hle : advAttrRank kv.1 ≤ advAttrRank kv'.1
      · rw [show rankAttrs.insertRanked kv (kv' :: rest) = kv :: kv' :: rest by
          simp [rankAttrs.insertRanked, hle]]
        change List.Pairwise LtRankRel (kv :: kv' :: rest)
        rw [List.pairwise_cons]
        constructor
        · intro z hz
          simp only [List.mem_cons] at hz
          rcases hz with rfl | hz
          · exact hle
          · exact Nat.le_trans hle (hs_head z hz)
        · exact hs
      · rw [show rankAttrs.insertRanked kv (kv' :: rest) = kv' :: rankAttrs.insertRanked kv rest by
          simp [rankAttrs.insertRanked, hle]]
        change List.Pairwise LtRankRel (kv' :: rankAttrs.insertRanked kv rest)
        rw [List.pairwise_cons]
        constructor
        · intro z hz
          rcases (parainline_lt_render_insertRanked_mem kv z rest).mp hz with hEq | hz
          · rw [hEq]
            exact Nat.le_of_lt (Nat.lt_of_not_ge hle)
          · exact hs_head z hz
        · exact ih hs_tail

theorem parainline_lt_render_insertRanked_filter (kv : LtPair) (xs : List LtPair) (r : Nat) :
    (rankAttrs.insertRanked kv xs).filter (fun p => advAttrRank p.1 == r) =
      (kv :: xs).filter (fun p => advAttrRank p.1 == r) := by
  induction xs with
  | nil => simp [rankAttrs.insertRanked]
  | cons kv' rest ih =>
      by_cases hle : advAttrRank kv.1 ≤ advAttrRank kv'.1
      · simp [rankAttrs.insertRanked, hle]
      · have hlt : advAttrRank kv'.1 < advAttrRank kv.1 := Nat.lt_of_not_ge hle
        by_cases hk : advAttrRank kv.1 == r
        · by_cases hk' : advAttrRank kv'.1 == r
          · have hkv : advAttrRank kv.1 = r := by simpa using hk
            have hkv' : advAttrRank kv'.1 = r := by simpa using hk'
            have heq : advAttrRank kv.1 = advAttrRank kv'.1 := hkv.trans hkv'.symm
            have hlt' : advAttrRank kv'.1 < advAttrRank kv'.1 := by simpa [heq] using hlt
            exact False.elim ((Nat.lt_irrefl _) hlt')
          · simp [rankAttrs.insertRanked, hle, hk, hk', ih]
        · by_cases hk' : advAttrRank kv'.1 == r
          · simp [rankAttrs.insertRanked, hle, hk, hk', ih]
          · simp [rankAttrs.insertRanked, hle, hk, hk', ih]

theorem parainline_lt_render_rankAttrs_sorted (xs : List LtPair) : LtSorted (rankAttrs xs) := by
  induction xs with
  | nil => simp [rankAttrs, LtSorted]
  | cons kv rest ih =>
      unfold rankAttrs
      exact parainline_lt_render_insertRanked_sorted kv (rankAttrs rest) ih

theorem parainline_lt_render_rankAttrs_stable (xs : List LtPair) (r : Nat) :
    (rankAttrs xs).filter (fun p => advAttrRank p.1 == r) =
      xs.filter (fun p => advAttrRank p.1 == r) := by
  induction xs with
  | nil => simp [rankAttrs]
  | cons kv rest ih =>
      unfold rankAttrs
      rw [parainline_lt_render_insertRanked_filter kv (rankAttrs rest) r]
      simp only [List.filter_cons]
      rw [ih]

theorem parainline_lt_render_rankAttrs_sorted_id (xs : List LtPair) (hs : LtSorted xs) :
    rankAttrs xs = xs := by
  induction xs with
  | nil => rfl
  | cons kv rest ih =>
      unfold rankAttrs
      rw [ih (List.pairwise_cons.mp hs).2]
      exact parainline_lt_render_insertRanked_all_le kv rest (List.pairwise_cons.mp hs).1

theorem parainline_lt_render_rankAttrs_idem (xs : List LtPair) :
    rankAttrs (rankAttrs xs) = rankAttrs xs :=
  parainline_lt_render_rankAttrs_sorted_id _ (parainline_lt_render_rankAttrs_sorted xs)

/- ## Independent deterministic specs and render_<r>_eq_ref SHAPE -/

def ltDeflistSpec (opts : OptMap) : List Nat :=
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "list_start" then litBytes "<dl>\n"
  else if ty == litBytes "list_end" then litBytes "</dl>\n"
  else if ty == litBytes "term_start" then litBytes "<dt>"
  else if ty == litBytes "term_end" then litBytes "</dt>\n"
  else if ty == litBytes "narr_start" then litBytes "<dd>"
  else if ty == litBytes "narr_end" then litBytes "</dd>\n"
  else []

def ltTableSpec (opts : OptMap) : List Nat :=
  let format := if ltIsset opts "format".toList then [32] ++ optStrBytes opts "format".toList else []
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "table_start" then litBytes "<table class=\"wiki-content-table\"" ++ format ++ litBytes ">\n"
  else if ty == litBytes "table_end" then litBytes "</table>"
  else if ty == litBytes "caption_start" then litBytes "<caption" ++ format ++ litBytes ">\n"
  else if ty == litBytes "caption_end" then litBytes "</caption>\n"
  else if ty == litBytes "row_start" then litBytes "<tr" ++ format ++ litBytes ">\n"
  else if ty == litBytes "row_end" then litBytes "</tr>\n"
  else if ty == litBytes "cell_start" then
    let attr := optStrBytes opts "attr".toList
    let isHeader := attr == litBytes "header"
    let span := (optNat opts "span".toList).getD 1
    let rowspan := (optNat opts "rowspan".toList).getD 1
    let base := if isHeader then litBytes "<th" else litBytes "<td"
    let spanAttr := if 1 < span then litBytes " colspan=\"" ++ natBytes span ++ litBytes "\"" else []
    let rowspanAttr := if 1 < rowspan then litBytes " rowspan=\"" ++ natBytes rowspan ++ litBytes "\"" else []
    let alignAttr := if !isHeader && !attr.isEmpty then litBytes " style=\"text-align: " ++ attr ++ litBytes ";\"" else []
    base ++ spanAttr ++ rowspanAttr ++ alignAttr ++ format ++ litBytes ">"
  else if ty == litBytes "cell_end" then
    if optStrBytes opts "attr".toList == litBytes "header" then litBytes "</th>\n" else litBytes "</td>\n"
  else []

def ltTableadvSpec (opts : OptMap) : List Nat :=
  let rendered := attrsFragment htmlSpecialCharsCompat (rankAttrs (attrPairs opts "attrs".toList))
  let tag := if phpEmptyOpt (omGet opts "header".toList) then litBytes "td" else litBytes "th"
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "start" then litBytes "<table" ++ rendered ++ litBytes ">\n"
  else if ty == litBytes "rowStart" then litBytes "<tr" ++ rendered ++ litBytes ">\n"
  else if ty == litBytes "cellStart" then litBytes "<" ++ tag ++ rendered ++ litBytes ">"
  else if ty == litBytes "cellEnd" then litBytes "</" ++ tag ++ litBytes ">\n"
  else if ty == litBytes "rowEnd" then litBytes "</tr>\n"
  else if ty == litBytes "end" then litBytes "</table>"
  else []

def ltRenderListSpec (opts : OptMap) : List Nat :=
  let levelGt0 : Bool := match optNat opts "level".toList with | some n => 0 < n | none => false
  let levelEq0 : Bool := match optNat opts "level".toList with | some 0 => true | _ => false
  let ty := optStrBytes opts "type".toList
  if ty == litBytes "bullet_list_start" then
    let html := litBytes "<ul>\n"
    if levelGt0 && phpEmptyOpt (omGet opts "in_sublist".toList) then [10] ++ html else html
  else if ty == litBytes "number_list_start" then
    let format := optStrBytes opts "format".toList
    let typeAttr := if ltIsset opts "format".toList && !format.isEmpty then litBytes " type=\"" ++ format ++ litBytes "\"" else []
    let html := litBytes "<ol" ++ typeAttr ++ litBytes ">\n"
    if levelGt0 && phpEmptyOpt (omGet opts "in_sublist".toList) then [10] ++ html else html
  else if ty == litBytes "bullet_list_end" then
    let tailSublist := ltIsset opts "tail".toList && optStrBytes opts "tail".toList == litBytes "sublist"
    let html := if tailSublist then litBytes "</ul>" else litBytes "</li>\n</ul>"
    if levelGt0 || (levelEq0 && tailSublist) then html ++ [10] else html
  else if ty == litBytes "number_list_end" then
    let tailSublist := ltIsset opts "tail".toList && optStrBytes opts "tail".toList == litBytes "sublist"
    let html := if tailSublist then litBytes "</ol>" else litBytes "</li>\n</ol>"
    if levelGt0 || (levelEq0 && tailSublist) then html ++ [10] else html
  else if ty == litBytes "sublist_start" then litBytes "<li style=\"list-style: none; display: inline\">\n"
  else if ty == litBytes "sublist_end" then litBytes "</li>\n"
  else if ty == litBytes "bullet_item_start" || ty == litBytes "number_item_start" then
    let countGt0 : Bool := match optNat opts "count".toList with | some n => 0 < n | none => false
    if countGt0 then litBytes "</li>\n<li>" else litBytes "<li>"
  else if ty == litBytes "bullet_item_end" || ty == litBytes "number_item_end" then []
  else if ty == litBytes "explicit_list_start" then
    let tag := if optStrBytes opts "list_type".toList == litBytes "ol" then litBytes "ol" else litBytes "ul"
    litBytes "<" ++ tag ++ renderAttrsCompat opts "attrs".toList ++ litBytes ">\n"
  else if ty == litBytes "explicit_list_end" then
    let tag := if optStrBytes opts "list_type".toList == litBytes "ol" then litBytes "ol" else litBytes "ul"
    litBytes "</" ++ tag ++ litBytes ">" ++ optStrBytes opts "trail".toList
  else if ty == litBytes "explicit_item_start" then
    litBytes "<li" ++ renderAttrsCompat opts "attrs".toList ++ litBytes ">" ++ optStrBytes opts "lead".toList
  else if ty == litBytes "explicit_item_end" then
    optStrBytes opts "lead".toList ++ litBytes "</li>\n"
  else if ty == litBytes "explicit_none_item_start" then litBytes "<li style=\"list-style: none\">"
  else if ty == litBytes "explicit_none_item_end" then litBytes "</li>\n"
  else if ty == litBytes "explicit_inline_wrapper_start" then litBytes "<li style=\"list-style: none; display: inline\">\n"
  else if ty == litBytes "explicit_inline_wrapper_end" then litBytes "\n</li>\n"
  else if ty == litBytes "explicit_br_no_nl" then litBytes "<br />"
  else if ty == litBytes "explicit_raw_nl" then litBytes "\n"
  else []

theorem parainline_lt_render_eq_ref_shape_deflist (opts : OptMap) :
    renderDeflist opts = ltDeflistSpec opts := by
  rfl

theorem parainline_lt_render_eq_ref_shape_table (opts : OptMap) :
    renderTable opts = ltTableSpec opts := by
  rfl

theorem parainline_lt_render_eq_ref_shape_tableadv (opts : OptMap) :
    renderTableadv opts = ltTableadvSpec opts := by
  rfl

theorem parainline_lt_render_eq_ref_shape_list (opts : OptMap) :
    renderList opts = ltRenderListSpec opts := by
  rfl

/- ## Renderer emission shapes on concrete reachable option maps -/

theorem parainline_lt_render_deflist_shapes :
    renderDeflist [("type".toList, OptVal.str "list_start".toList)] = litBytes "<dl>\n" ∧
    renderDeflist [("type".toList, OptVal.str "list_end".toList)] = litBytes "</dl>\n" ∧
    renderDeflist [("type".toList, OptVal.str "term_start".toList)] = litBytes "<dt>" ∧
    renderDeflist [("type".toList, OptVal.str "term_end".toList)] = litBytes "</dt>\n" ∧
    renderDeflist [("type".toList, OptVal.str "narr_start".toList)] = litBytes "<dd>" ∧
    renderDeflist [("type".toList, OptVal.str "narr_end".toList)] = litBytes "</dd>\n" := by
  exact ⟨rfl, rfl, rfl, rfl, rfl, rfl⟩

theorem parainline_lt_render_list_clean_shapes :
    renderList [("type".toList, OptVal.str "sublist_start".toList)] =
      litBytes "<li style=\"list-style: none; display: inline\">\n" ∧
    renderList [("type".toList, OptVal.str "sublist_end".toList)] = litBytes "</li>\n" ∧
    renderList [("type".toList, OptVal.str "bullet_item_end".toList)] = [] ∧
    renderList [("type".toList, OptVal.str "number_item_end".toList)] = [] ∧
    renderList [("type".toList, OptVal.str "explicit_none_item_start".toList)] =
      litBytes "<li style=\"list-style: none\">" ∧
    renderList [("type".toList, OptVal.str "explicit_none_item_end".toList)] = litBytes "</li>\n" ∧
    renderList [("type".toList, OptVal.str "explicit_br_no_nl".toList)] = litBytes "<br />" ∧
    renderList [("type".toList, OptVal.str "explicit_raw_nl".toList)] = litBytes "\n" := by
  exact ⟨rfl, rfl, rfl, rfl, rfl, rfl, rfl, rfl⟩

theorem parainline_lt_render_list_level_shapes :
    renderList [("type".toList, OptVal.str "bullet_list_start".toList),
      ("level".toList, OptVal.int 0), ("in_sublist".toList, OptVal.bool false)] = litBytes "<ul>\n" ∧
    renderList [("type".toList, OptVal.str "number_list_start".toList),
      ("level".toList, OptVal.int 1), ("in_sublist".toList, OptVal.bool false)] = litBytes "\n<ol>\n" ∧
    renderList [("type".toList, OptVal.str "number_list_start".toList),
      ("level".toList, OptVal.int 2), ("in_sublist".toList, OptVal.bool true)] = litBytes "<ol>\n" ∧
    renderList [("type".toList, OptVal.str "bullet_item_start".toList),
      ("count".toList, OptVal.int 0)] = litBytes "<li>" ∧
    renderList [("type".toList, OptVal.str "bullet_item_start".toList),
      ("count".toList, OptVal.int 2)] = litBytes "</li>\n<li>" := by
  exact ⟨rfl, rfl, rfl, rfl, rfl⟩

theorem parainline_lt_render_list_explicit_shapes :
    renderList [("type".toList, OptVal.str "explicit_list_start".toList),
      ("list_type".toList, OptVal.str "ul".toList), ("attrs".toList, OptVal.map [])] = litBytes "<ul>\n" ∧
    renderList [("type".toList, OptVal.str "explicit_list_end".toList),
      ("list_type".toList, OptVal.str "ul".toList), ("trail".toList, OptVal.str "".toList)] = litBytes "</ul>" ∧
    renderList [("type".toList, OptVal.str "explicit_item_start".toList),
      ("attrs".toList, OptVal.map []), ("lead".toList, OptVal.str "".toList)] = litBytes "<li>" ∧
    renderList [("type".toList, OptVal.str "explicit_item_end".toList),
      ("lead".toList, OptVal.str "".toList)] = litBytes "</li>\n" := by
  exact ⟨rfl, rfl, rfl, rfl⟩

theorem parainline_lt_render_table_shapes :
    renderTable [("type".toList, OptVal.str "table_start".toList)] =
      litBytes "<table class=\"wiki-content-table\">\n" ∧
    renderTable [("type".toList, OptVal.str "table_end".toList)] = litBytes "</table>" ∧
    renderTable [("type".toList, OptVal.str "caption_start".toList)] = litBytes "<caption>\n" ∧
    renderTable [("type".toList, OptVal.str "caption_end".toList)] = litBytes "</caption>\n" ∧
    renderTable [("type".toList, OptVal.str "row_start".toList)] = litBytes "<tr>\n" ∧
    renderTable [("type".toList, OptVal.str "row_end".toList)] = litBytes "</tr>\n" := by
  exact ⟨rfl, rfl, rfl, rfl, rfl, rfl⟩

theorem parainline_lt_render_table_cell_shapes :
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.null), ("span".toList, OptVal.int 1)] = litBytes "<td>" ∧
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.str "header".toList), ("span".toList, OptVal.int 1)] = litBytes "<th>" ∧
    renderTable [("type".toList, OptVal.str "cell_start".toList),
      ("attr".toList, OptVal.null), ("span".toList, OptVal.int 3)] = litBytes "<td colspan=\"3\">" ∧
    renderTable [("type".toList, OptVal.str "cell_end".toList),
      ("attr".toList, OptVal.str "header".toList)] = litBytes "</th>\n" ∧
    renderTable [("type".toList, OptVal.str "cell_end".toList),
      ("attr".toList, OptVal.null)] = litBytes "</td>\n" := by
  exact ⟨rfl, rfl, rfl, rfl, rfl⟩

theorem parainline_lt_render_tableadv_shapes :
    renderTableadv [("type".toList, OptVal.str "start".toList),
      ("attrs".toList, OptVal.map [])] = litBytes "<table>\n" ∧
    renderTableadv [("type".toList, OptVal.str "rowStart".toList),
      ("attrs".toList, OptVal.map [])] = litBytes "<tr>\n" ∧
    renderTableadv [("type".toList, OptVal.str "rowEnd".toList)] = litBytes "</tr>\n" ∧
    renderTableadv [("type".toList, OptVal.str "end".toList)] = litBytes "</table>" := by
  exact ⟨rfl, rfl, rfl, rfl⟩

theorem parainline_lt_render_tableadv_cell_shapes :
    renderTableadv [("type".toList, OptVal.str "cellStart".toList),
      ("header".toList, OptVal.bool false), ("attrs".toList, OptVal.map [])] = litBytes "<td>" ∧
    renderTableadv [("type".toList, OptVal.str "cellStart".toList),
      ("header".toList, OptVal.bool true), ("attrs".toList, OptVal.map [])] = litBytes "<th>" ∧
    renderTableadv [("type".toList, OptVal.str "cellEnd".toList),
      ("header".toList, OptVal.bool false)] = litBytes "</td>\n" ∧
    renderTableadv [("type".toList, OptVal.str "cellEnd".toList),
      ("header".toList, OptVal.bool true)] = litBytes "</th>\n" := by
  exact ⟨rfl, rfl, rfl, rfl⟩

theorem parainline_lt_render_tableadv_rank_order :
    renderTableadv [("type".toList, OptVal.str "cellStart".toList),
      ("header".toList, OptVal.bool false), ("attrs".toList, OptVal.map
        [("colspan".toList, OptVal.str "2".toList),
         ("data-name".toList, OptVal.str "it's".toList)])] =
      litBytes "<td data-name=\"it's\" colspan=\"2\">" := by
  rfl

theorem parainline_lt_render_list_trail_placeholder_passthrough (pl : List Nat) :
    renderList [("type".toList, OptVal.str "explicit_list_end".toList),
      ("list_type".toList, OptVal.str "ul".toList),
      ("trail".toList, OptVal.bytes pl)] = litBytes "</ul>" ++ pl := by
  rfl

theorem parainline_lt_render_list_lead_placeholder_passthrough (pl : List Nat) :
    renderList [("type".toList, OptVal.str "explicit_item_end".toList),
      ("lead".toList, OptVal.bytes pl)] = pl ++ litBytes "</li>\n" := by
  rfl

/- ## Axiom audit -/

#print axioms parainline_lt_render_ltTypeIs_eq
#print axioms parainline_lt_render_ltTypeIs_unique
#print axioms parainline_lt_render_ltIsset_eq
#print axioms parainline_lt_render_attrPairs_nonmap
#print axioms parainline_lt_render_omGet_omSet
#print axioms parainline_lt_render_optStrBytes_omSet
#print axioms parainline_lt_render_attrsFragment_append
#print axioms parainline_lt_render_attrsFragment_ext
#print axioms parainline_lt_render_insertRanked_sorted
#print axioms parainline_lt_render_insertRanked_filter
#print axioms parainline_lt_render_rankAttrs_sorted
#print axioms parainline_lt_render_rankAttrs_stable
#print axioms parainline_lt_render_rankAttrs_idem
#print axioms parainline_lt_render_eq_ref_shape_deflist
#print axioms parainline_lt_render_eq_ref_shape_table
#print axioms parainline_lt_render_eq_ref_shape_tableadv
#print axioms parainline_lt_render_eq_ref_shape_list
#print axioms parainline_lt_render_deflist_shapes
#print axioms parainline_lt_render_list_clean_shapes
#print axioms parainline_lt_render_table_shapes
#print axioms parainline_lt_render_tableadv_shapes
#print axioms parainline_lt_render_tableadv_rank_order
#print axioms parainline_lt_render_list_trail_placeholder_passthrough
#print axioms parainline_lt_render_list_lead_placeholder_passthrough

/-
  NAMED REMAINDER (not claimed here, coordinator/TCB scope): the eq_ref shape theorems identify each mirror
  with its own independent deterministic restatement over all OptMap; they do not assert equality with the
  extracted PHP reference token() bodies. That Boundary-B agreement requires trusting PHP's
  htmlspecialchars ENT_COMPAT byte table, PHP 8's stable uksort on the wikidot rank, and the reference
  bodies themselves (TCB-2/3/4/5), and is discharged empirically by the conformance drivers. No regex or
  kernel-dependent engine is used by these four pure renderers, so no kernel remainder arises inside this
  family; the only external trust is the PHP stdlib/spec agreement named above.
-/
end LeanFtml
