import LeanFtml.ContainRules
import LeanFtml.InteractiveRules
import LeanFtml.DivAttrId

/-! Div attribute dispatch laws against the mirror `divArgs` and `divArgsOrder`: accepted spellings, `data-*` lowercase folding and allowlist, duplicate-last-wins, emission order, authored-nonempty records, and id omission. Universal in the mirror functions. Ground by-decide ASCII literal pins are regression observations, not universal theorems. -/

namespace LeanFtml

/-! ## divArgs dispatch -/

theorem find_one_no (k k' : List Nat) (val : Option (List Nat))
    (h : (k == k') = false) :
    ([(k, val)].find? (fun kv => kv.1 == k')) = none := by
  simp [List.find?, h]

theorem find_one_yes (k : List Nat) (val : Option (List Nat)) :
    ([(k, val)].find? (fun kv => kv.1 == k)) = some (k, val) := by
  simp [List.find?]

theorem filterMap_cons_none {α β} (f : α → Option β) (a : α) (l : List α)
    (h : f a = none) : (a :: l).filterMap f = l.filterMap f := by
  simp [List.filterMap, h]

theorem filterMap_cons_some {α β} (f : α → Option β) (a : α) (l : List α) (b : β)
    (h : f a = some b) : (a :: l).filterMap f = b :: l.filterMap f := by
  simp [List.filterMap, h]

theorem omSetOpt_empty (k : List Nat) (v : Option (List Nat)) :
    omSetOpt [] k v = [(k, v)] := by
  simp [omSetOpt, List.find?]

theorem omSetOpt_overwrite (k : List Nat) (v1 v2 : Option (List Nat)) :
    omSetOpt [(k, v1)] k v2 = [(k, v2)] := by
  simp [omSetOpt, List.find?]

theorem omSetOpt_push (k k' : List Nat) (v v' : Option (List Nat))
    (h : (k == k') = false) :
    omSetOpt [(k, v)] k' v' = [(k, v), (k', v')] := by
  simp [omSetOpt, List.find?, h]

/-- Ground by-decide regression pin: the `data-` prefix starts none of the five ranked literal keys. -/
theorem data_not_prefix_ranked :
    (litBytes "data-").isPrefixOf (litBytes "id") = false ∧
    (litBytes "data-").isPrefixOf (litBytes "class") = false ∧
    (litBytes "data-").isPrefixOf (litBytes "style") = false ∧
    (litBytes "data-").isPrefixOf (litBytes "role") = false ∧
    (litBytes "data-").isPrefixOf (litBytes "type") = false := by
  decide

theorem ne_ranked_of_data (k name : List Nat)
    (hp : (litBytes "data-").isPrefixOf k = true)
    (hn : (litBytes "data-").isPrefixOf name = false) :
    (k == name) = false := by
  by_cases h : k == name
  · have heq : k = name := by simpa [beq_iff_eq] using h
    rw [heq] at hp
    simp [hp] at hn
  · simpa using h

theorem isPrefixOf_append (p rest : List Nat) : p.isPrefixOf (p ++ rest) = true := by
  induction p with
  | nil => rfl
  | cons a as ih => simp [List.isPrefixOf, ih]

theorem prefix_split (p k : List Nat) (h : p.isPrefixOf k = true) :
    k = p ++ k.drop p.length := by
  induction p generalizing k with
  | nil => simp
  | cons a as ih =>
      cases k with
      | nil => simp [List.isPrefixOf] at h
      | cons b bs =>
          simp only [List.isPrefixOf, Bool.and_eq_true] at h
          obtain ⟨hab, hpre⟩ := h
          have : a = b := beq_iff_eq.mp hab
          subst this
          rw [List.cons_append, List.length_cons, List.drop_succ_cons]
          exact congrArg (a :: ·) (ih bs hpre)

theorem asciiLower_append (a b : List Nat) :
    asciiLower (a ++ b) = asciiLower a ++ asciiLower b := by
  simp [asciiLower]

/-- Ground by-decide regression pin: the ASCII `data-` prefix is fixed by `asciiLower`. -/
theorem asciiLower_data_lit : asciiLower (litBytes "data-") = litBytes "data-" := by
  decide

theorem asciiLower_keeps_data (k : List Nat)
    (h : (litBytes "data-").isPrefixOf k = true) :
    (litBytes "data-").isPrefixOf (asciiLower k) = true := by
  have hk := prefix_split (litBytes "data-") k h
  rw [hk, asciiLower_append, asciiLower_data_lit]
  exact isPrefixOf_append _ _

theorem divArgsOrder_one_type (val : Option (List Nat)) :
    divArgsOrder [(litBytes "type", val)] = [(litBytes "type", val)] := by
  unfold divArgsOrder
  have hid : (litBytes "type" == litBytes "id") = false := by decide
  have hcl : (litBytes "type" == litBytes "class") = false := by decide
  have hst : (litBytes "type" == litBytes "style") = false := by decide
  have hro : (litBytes "type" == litBytes "role") = false := by decide
  have hty : (litBytes "type" == litBytes "type") = true := by decide
  have hpre : (litBytes "data-").isPrefixOf (litBytes "type") = false := by decide
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hpre]

theorem divArgsOrder_one_style (val : Option (List Nat)) :
    divArgsOrder [(litBytes "style", val)] = [(litBytes "style", val)] := by
  unfold divArgsOrder
  have hid : (litBytes "style" == litBytes "id") = false := by decide
  have hcl : (litBytes "style" == litBytes "class") = false := by decide
  have hst : (litBytes "style" == litBytes "style") = true := by decide
  have hro : (litBytes "style" == litBytes "role") = false := by decide
  have hty : (litBytes "style" == litBytes "type") = false := by decide
  have hpre : (litBytes "data-").isPrefixOf (litBytes "style") = false := by decide
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hpre]

theorem divArgsOrder_one_role (val : Option (List Nat)) :
    divArgsOrder [(litBytes "role", val)] = [(litBytes "role", val)] := by
  unfold divArgsOrder
  have hid : (litBytes "role" == litBytes "id") = false := by decide
  have hcl : (litBytes "role" == litBytes "class") = false := by decide
  have hst : (litBytes "role" == litBytes "style") = false := by decide
  have hro : (litBytes "role" == litBytes "role") = true := by decide
  have hty : (litBytes "role" == litBytes "type") = false := by decide
  have hpre : (litBytes "data-").isPrefixOf (litBytes "role") = false := by decide
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hpre]

theorem divArgsOrder_one_class (val : Option (List Nat)) :
    divArgsOrder [(litBytes "class", val)] = [(litBytes "class", val)] := by
  unfold divArgsOrder
  have hid : (litBytes "class" == litBytes "id") = false := by decide
  have hcl : (litBytes "class" == litBytes "class") = true := by decide
  have hst : (litBytes "class" == litBytes "style") = false := by decide
  have hro : (litBytes "class" == litBytes "role") = false := by decide
  have hty : (litBytes "class" == litBytes "type") = false := by decide
  have hpre : (litBytes "data-").isPrefixOf (litBytes "class") = false := by decide
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hpre]

theorem divArgsOrder_one_id (val : Option (List Nat)) :
    divArgsOrder [(litBytes "id", val)] = [(litBytes "id", val)] := by
  unfold divArgsOrder
  have hid : (litBytes "id" == litBytes "id") = true := by decide
  have hcl : (litBytes "id" == litBytes "class") = false := by decide
  have hst : (litBytes "id" == litBytes "style") = false := by decide
  have hro : (litBytes "id" == litBytes "role") = false := by decide
  have hty : (litBytes "id" == litBytes "type") = false := by decide
  have hpre : (litBytes "data-").isPrefixOf (litBytes "id") = false := by decide
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hpre]

theorem divArgsOrder_one_data (k : List Nat) (val : Option (List Nat))
    (hp : (litBytes "data-").isPrefixOf k = true) :
    divArgsOrder [(k, val)] = [(k, val)] := by
  unfold divArgsOrder
  have hid := ne_ranked_of_data k (litBytes "id") hp data_not_prefix_ranked.1
  have hcl := ne_ranked_of_data k (litBytes "class") hp data_not_prefix_ranked.2.1
  have hst := ne_ranked_of_data k (litBytes "style") hp data_not_prefix_ranked.2.2.1
  have hro := ne_ranked_of_data k (litBytes "role") hp data_not_prefix_ranked.2.2.2.1
  have hty := ne_ranked_of_data k (litBytes "type") hp data_not_prefix_ranked.2.2.2.2
  simp [List.filterMap, List.find?, hid, hcl, hst, hro, hty, hp, List.filter]

/-! Ground by-decide ASCII pins for the literal keys: regression observations used to discharge `utf8Decode_lit`, not universal claims. -/
theorem lit_type_ascii : ∀ c ∈ "type".toList, c.toNat < 0x80 := by decide
theorem lit_style_ascii : ∀ c ∈ "style".toList, c.toNat < 0x80 := by decide
theorem lit_role_ascii : ∀ c ∈ "role".toList, c.toNat < 0x80 := by decide
theorem lit_class_ascii : ∀ c ∈ "class".toList, c.toNat < 0x80 := by decide
theorem lit_id_ascii : ∀ c ∈ "id".toList, c.toNat < 0x80 := by decide
theorem lit_data_ascii : ∀ c ∈ "data-foo".toList, c.toNat < 0x80 := by decide
theorem lit_datax_ascii : ∀ c ∈ "data-x".toList, c.toNat < 0x80 := by decide

private theorem pairMap (k : List Nat) (v : Option (List Nat)) (s : String)
    (h : utf8Decode k = s.toList) :
    [(k, v)].map (fun p => (utf8Decode p.1, p.2)) = [(s.toList, v)] := by
  simp [List.map_singleton, h]

theorem divArgs_type (v : List Nat) :
    divArgs [(litBytes "type", v)] =
      [("type".toList, some (normalizeValue v))] := by
  have hid : (litBytes "type" == litBytes "id") = false := by decide
  have hcl : (litBytes "type" == litBytes "class") = false := by decide
  have hst : (litBytes "type" == litBytes "style") = false := by decide
  have hro : (litBytes "type" == litBytes "role") = false := by decide
  have hty : (litBytes "type" == litBytes "type") = true := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, hst, hro, hty, boolIf_false, boolIf_false, orFFT, boolIf_true,
    omSetOpt_empty, divArgsOrder_one_type]
  exact pairMap _ _ "type" (utf8Decode_lit "type" lit_type_ascii)

theorem divArgs_style (v : List Nat) :
    divArgs [(litBytes "style", v)] =
      [("style".toList, some (normalizeValue v))] := by
  have hid : (litBytes "style" == litBytes "id") = false := by decide
  have hcl : (litBytes "style" == litBytes "class") = false := by decide
  have hst : (litBytes "style" == litBytes "style") = true := by decide
  have hro : (litBytes "style" == litBytes "role") = false := by decide
  have hty : (litBytes "style" == litBytes "type") = false := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, hst, hro, hty, boolIf_false, boolIf_false, orTFF, boolIf_true,
    omSetOpt_empty, divArgsOrder_one_style]
  exact pairMap _ _ "style" (utf8Decode_lit "style" lit_style_ascii)

theorem divArgs_role (v : List Nat) :
    divArgs [(litBytes "role", v)] =
      [("role".toList, some (normalizeValue v))] := by
  have hid : (litBytes "role" == litBytes "id") = false := by decide
  have hcl : (litBytes "role" == litBytes "class") = false := by decide
  have hst : (litBytes "role" == litBytes "style") = false := by decide
  have hro : (litBytes "role" == litBytes "role") = true := by decide
  have hty : (litBytes "role" == litBytes "type") = false := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, hst, hro, hty, boolIf_false, boolIf_false, orFTF, boolIf_true,
    omSetOpt_empty, divArgsOrder_one_role]
  exact pairMap _ _ "role" (utf8Decode_lit "role" lit_role_ascii)

theorem divArgs_class (v : List Nat) :
    divArgs [(litBytes "class", v)] =
      [("class".toList, some (rtrimSpaceTab (normalizeValue v)))] := by
  have hid : (litBytes "class" == litBytes "id") = false := by decide
  have hcl : (litBytes "class" == litBytes "class") = true := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, boolIf_false, boolIf_true, omSetOpt_empty, divArgsOrder_one_class]
  exact pairMap _ _ "class" (utf8Decode_lit "class" lit_class_ascii)

theorem divArgs_data (k v : List Nat) (hp : (litBytes "data-").isPrefixOf k = true) :
    divArgs [(k, v)] =
      [(utf8Decode (asciiLower k), some (normalizeValue v))] := by
  have hid := ne_ranked_of_data k (litBytes "id") hp data_not_prefix_ranked.1
  have hcl := ne_ranked_of_data k (litBytes "class") hp data_not_prefix_ranked.2.1
  have hst := ne_ranked_of_data k (litBytes "style") hp data_not_prefix_ranked.2.2.1
  have hro := ne_ranked_of_data k (litBytes "role") hp data_not_prefix_ranked.2.2.2.1
  have hty := ne_ranked_of_data k (litBytes "type") hp data_not_prefix_ranked.2.2.2.2
  have hlow := asciiLower_keeps_data k hp
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, hst, hro, hty, hp, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_true, omSetOpt_empty, divArgsOrder_one_data (asciiLower k) _ hlow,
    List.map_singleton]

theorem divArgs_id_keep (v idv : List Nat) (h : isolateId v = some idv)
    (hne : idv.isEmpty = false) :
    divArgs [(litBytes "id", v)] = [("id".toList, some idv)] := by
  have hid : (litBytes "id" == litBytes "id") = true := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, h]
  simp [hne, omSetOpt, divArgsOrder_one_id]
  rw [utf8Decode_lit "id" lit_id_ascii]
  decide

theorem divArgs_id_omit (v : List Nat) (h : isolateId v = some []) :
    divArgs [(litBytes "id", v)] = [] := by
  have hid : (litBytes "id" == litBytes "id") = true := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, h]
  simp [omSetOpt, divArgsOrder]

theorem divArgs_reject (k v : List Nat)
    (hid : (k == litBytes "id") = false) (hcl : (k == litBytes "class") = false)
    (hst : (k == litBytes "style") = false) (hro : (k == litBytes "role") = false)
    (hty : (k == litBytes "type") = false)
    (hd : (litBytes "data-").isPrefixOf k = false) :
    divArgs [(k, v)] = [] := by
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid, hcl, hst, hro, hty, hd, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_false]
  simp [divArgsOrder]

/-! Ground by-decide ASCII-folding pins for the mixed-case `data-*` regression literals. -/
theorem asciiLower_data_foo : asciiLower (litBytes "data-Foo") = litBytes "data-foo" := by
  decide

theorem asciiLower_data_FOO : asciiLower (litBytes "data-FOO") = litBytes "data-foo" := by
  decide

theorem asciiLower_data_foo_low : asciiLower (litBytes "data-foo") = litBytes "data-foo" := by
  decide

/-- The Tableadv-adjacent shape on Div: a mixed-case `data-Foo` suffix folds to `data-foo`, while `CLASS`, `ID` and `DATA-foo` miss the case-sensitive allowlist and the case-sensitive `data-` prefix. -/
theorem div_tableadv_adjacent (v : List Nat) :
    divArgs [(litBytes "data-Foo", v)] =
      [("data-foo".toList, some (normalizeValue v))] ∧
    divArgs [(litBytes "CLASS", v)] = [] ∧
    divArgs [(litBytes "ID", v)] = [] ∧
    divArgs [(litBytes "DATA-foo", v)] = [] := by
  refine ⟨?_, ?_, ?_, ?_⟩
  · have hp : (litBytes "data-").isPrefixOf (litBytes "data-Foo") = true := by decide
    rw [divArgs_data _ v hp, asciiLower_data_foo, utf8Decode_lit "data-foo" lit_data_ascii]
  · exact divArgs_reject (litBytes "CLASS") v (by decide) (by decide) (by decide)
      (by decide) (by decide) (by decide)
  · exact divArgs_reject (litBytes "ID") v (by decide) (by decide) (by decide)
      (by decide) (by decide) (by decide)
  · exact divArgs_reject (litBytes "DATA-foo") v (by decide) (by decide) (by decide)
      (by decide) (by decide) (by decide)

theorem find_two_no (k1 k2 key : List Nat) (v1 v2 : Option (List Nat))
    (h1 : (k1 == key) = false) (h2 : (k2 == key) = false) :
    ([(k1, v1), (k2, v2)].find? (fun kv => kv.1 == key)) = none := by
  rw [List.find?_cons, h1, List.find?_cons, h2, List.find?_nil]

theorem divArgsOrder_two_data (k1 k2 : List Nat) (v1 v2 : Option (List Nat))
    (h1 : (litBytes "data-").isPrefixOf k1 = true)
    (h2 : (litBytes "data-").isPrefixOf k2 = true) :
    divArgsOrder [(k1, v1), (k2, v2)] = [(k1, v1), (k2, v2)] := by
  unfold divArgsOrder
  have zid1 := ne_ranked_of_data k1 (litBytes "id") h1 data_not_prefix_ranked.1
  have zcl1 := ne_ranked_of_data k1 (litBytes "class") h1 data_not_prefix_ranked.2.1
  have zst1 := ne_ranked_of_data k1 (litBytes "style") h1 data_not_prefix_ranked.2.2.1
  have zro1 := ne_ranked_of_data k1 (litBytes "role") h1 data_not_prefix_ranked.2.2.2.1
  have zty1 := ne_ranked_of_data k1 (litBytes "type") h1 data_not_prefix_ranked.2.2.2.2
  have zid2 := ne_ranked_of_data k2 (litBytes "id") h2 data_not_prefix_ranked.1
  have zcl2 := ne_ranked_of_data k2 (litBytes "class") h2 data_not_prefix_ranked.2.1
  have zst2 := ne_ranked_of_data k2 (litBytes "style") h2 data_not_prefix_ranked.2.2.1
  have zro2 := ne_ranked_of_data k2 (litBytes "role") h2 data_not_prefix_ranked.2.2.2.1
  have zty2 := ne_ranked_of_data k2 (litBytes "type") h2 data_not_prefix_ranked.2.2.2.2
  have fid := find_two_no k1 k2 (litBytes "id") v1 v2 zid1 zid2
  have fcl := find_two_no k1 k2 (litBytes "class") v1 v2 zcl1 zcl2
  have fst := find_two_no k1 k2 (litBytes "style") v1 v2 zst1 zst2
  have fro := find_two_no k1 k2 (litBytes "role") v1 v2 zro1 zro2
  have fty := find_two_no k1 k2 (litBytes "type") v1 v2 zty1 zty2
  rw [List.filterMap_cons_none
        (f := fun k => List.find? (fun kv => kv.1 == k) [(k1, v1), (k2, v2)])
        (a := litBytes "id") fid,
      List.filterMap_cons_none
        (f := fun k => List.find? (fun kv => kv.1 == k) [(k1, v1), (k2, v2)])
        (a := litBytes "class") fcl,
      List.filterMap_cons_none
        (f := fun k => List.find? (fun kv => kv.1 == k) [(k1, v1), (k2, v2)])
        (a := litBytes "style") fst,
      List.filterMap_cons_none
        (f := fun k => List.find? (fun kv => kv.1 == k) [(k1, v1), (k2, v2)])
        (a := litBytes "role") fro,
      List.filterMap_cons_none
        (f := fun k => List.find? (fun kv => kv.1 == k) [(k1, v1), (k2, v2)])
        (a := litBytes "type") fty,
      List.filterMap_nil, List.nil_append]
  rw [List.filter_cons, h1, boolIf_true, List.filter_cons, h2, boolIf_true, List.filter_nil]

/-- Case-variant `data-*` keys are last-wins on the lowercased key, and the first occurrence keeps the emit position. -/
theorem divArgs_data_last (k1 k2 v1 v2 : List Nat)
    (h1 : (litBytes "data-").isPrefixOf k1 = true)
    (h2 : (litBytes "data-").isPrefixOf k2 = true)
    (heq : asciiLower k1 = asciiLower k2) :
    divArgs [(k1, v1), (k2, v2)] =
      [(utf8Decode (asciiLower k1), some (normalizeValue v2))] := by
  have hid1 := ne_ranked_of_data k1 (litBytes "id") h1 data_not_prefix_ranked.1
  have hcl1 := ne_ranked_of_data k1 (litBytes "class") h1 data_not_prefix_ranked.2.1
  have hst1 := ne_ranked_of_data k1 (litBytes "style") h1 data_not_prefix_ranked.2.2.1
  have hro1 := ne_ranked_of_data k1 (litBytes "role") h1 data_not_prefix_ranked.2.2.2.1
  have hty1 := ne_ranked_of_data k1 (litBytes "type") h1 data_not_prefix_ranked.2.2.2.2
  have hid2 := ne_ranked_of_data k2 (litBytes "id") h2 data_not_prefix_ranked.1
  have hcl2 := ne_ranked_of_data k2 (litBytes "class") h2 data_not_prefix_ranked.2.1
  have hst2 := ne_ranked_of_data k2 (litBytes "style") h2 data_not_prefix_ranked.2.2.1
  have hro2 := ne_ranked_of_data k2 (litBytes "role") h2 data_not_prefix_ranked.2.2.2.1
  have hty2 := ne_ranked_of_data k2 (litBytes "type") h2 data_not_prefix_ranked.2.2.2.2
  have hlow := asciiLower_keeps_data k1 h1
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid1, hcl1, hst1, hro1, hty1, h1, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_true, omSetOpt_empty]
  rw [hid2, hcl2, hst2, hro2, hty2, h2, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_true, heq, omSetOpt_overwrite]
  rw [divArgsOrder_one_data (asciiLower k2) _ (by simpa [heq] using hlow)]
  simp [heq]

/-- Ranked `type` is duplicate-last-wins: `omSetOpt` overwrites the stored value while keeping the first emit position. -/
theorem divArgs_type_last (v1 v2 : List Nat) :
    divArgs [(litBytes "type", v1), (litBytes "type", v2)] =
      [("type".toList, some (normalizeValue v2))] := by
  have hid : (litBytes "type" == litBytes "id") = false := by decide
  have hcl : (litBytes "type" == litBytes "class") = false := by decide
  have hst : (litBytes "type" == litBytes "style") = false := by decide
  have hro : (litBytes "type" == litBytes "role") = false := by decide
  have hty : (litBytes "type" == litBytes "type") = true := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  simp [hid, hcl, hst, hro, hty, orFFT, boolIf_false, boolIf_true,
    omSetOpt_empty, omSetOpt_overwrite, divArgsOrder_one_type]
  exact utf8Decode_lit "type" lit_type_ascii

/-- Ranked `class` is duplicate-last-wins after `rtrimSpaceTab` normalization of the later value. -/
theorem divArgs_class_last (v1 v2 : List Nat) :
    divArgs [(litBytes "class", v1), (litBytes "class", v2)] =
      [("class".toList, some (rtrimSpaceTab (normalizeValue v2)))] := by
  have hid : (litBytes "class" == litBytes "id") = false := by decide
  have hcl : (litBytes "class" == litBytes "class") = true := by decide
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  simp [hid, hcl, boolIf_false, boolIf_true, omSetOpt_empty,
    omSetOpt_overwrite, divArgsOrder_one_class]
  exact utf8Decode_lit "class" lit_class_ascii

theorem divArgs_data_distinct (k1 k2 v1 v2 : List Nat)
    (h1 : (litBytes "data-").isPrefixOf k1 = true)
    (h2 : (litBytes "data-").isPrefixOf k2 = true)
    (hne : asciiLower k1 ≠ asciiLower k2) :
    divArgs [(k1, v1), (k2, v2)] =
      [(utf8Decode (asciiLower k1), some (normalizeValue v1)),
       (utf8Decode (asciiLower k2), some (normalizeValue v2))] := by
  have hid1 := ne_ranked_of_data k1 (litBytes "id") h1 data_not_prefix_ranked.1
  have hcl1 := ne_ranked_of_data k1 (litBytes "class") h1 data_not_prefix_ranked.2.1
  have hst1 := ne_ranked_of_data k1 (litBytes "style") h1 data_not_prefix_ranked.2.2.1
  have hro1 := ne_ranked_of_data k1 (litBytes "role") h1 data_not_prefix_ranked.2.2.2.1
  have hty1 := ne_ranked_of_data k1 (litBytes "type") h1 data_not_prefix_ranked.2.2.2.2
  have hid2 := ne_ranked_of_data k2 (litBytes "id") h2 data_not_prefix_ranked.1
  have hcl2 := ne_ranked_of_data k2 (litBytes "class") h2 data_not_prefix_ranked.2.1
  have hst2 := ne_ranked_of_data k2 (litBytes "style") h2 data_not_prefix_ranked.2.2.1
  have hro2 := ne_ranked_of_data k2 (litBytes "role") h2 data_not_prefix_ranked.2.2.2.1
  have hty2 := ne_ranked_of_data k2 (litBytes "type") h2 data_not_prefix_ranked.2.2.2.2
  have hlow1 := asciiLower_keeps_data k1 h1
  have hlow2 := asciiLower_keeps_data k2 h2
  have hne' : (asciiLower k1 == asciiLower k2) = false := by
    simpa [beq_eq_false_iff_ne] using hne
  unfold divArgs
  simp only [List.foldl_cons, List.foldl_nil]
  rw [hid1, hcl1, hst1, hro1, hty1, h1, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_true, omSetOpt_empty]
  rw [hid2, hcl2, hst2, hro2, hty2, h2, boolIf_false, boolIf_false, orFFF, boolIf_false,
    boolIf_true, omSetOpt_push _ _ _ _ hne']
  rw [divArgsOrder_two_data _ _ _ _ hlow1 hlow2, List.map_cons, List.map_singleton]

theorem ws_id_to_shell (v : List Nat) (hne : v.isEmpty = false)
    (hall : ∀ b ∈ v, isTrimByte b = true) :
    divArgs [(litBytes "id", v)] = [("id".toList, some (litBytes "u-"))] :=
  divArgs_id_keep v (litBytes "u-") (isolateId_trim_shell v hne hall) (by decide)

theorem render_id_shell :
    renderDiv [("type".toList, OptVal.str "start".toList),
        ("args".toList, OptVal.map [("id".toList, OptVal.str "u-".toList)])] =
      litBytes "<div id=\"u-\">" := rfl

/-! ## General emission-order law (rebased addition)

The delivered lane held only the five singleton `divArgsOrder_one_*` laws plus the 120-permutation bounded certificate `enum_ranked_order`, so the family's remainder listed a single general order law. These three universal statements close that specific remainder: `divArgsOrder_general` is the exact shape of every emission (ranked prefix in the fixed canonical order, then data-* in authored order, other keys dropped); `divArgsOrder_rank_prefix` and `divArgsOrder_data_suffix` are the two nontrivial consequences that the ranked part never contains a data-* key and the data-* suffix is exactly the authored data-* sublist in its original order. No finite enumeration is used for these. -/

/-- Exact universal shape of `divArgsOrder` for every built list; the ranked five are emitted in the fixed order id, class, style, role, type by `filterMap`/`find?`, and every data-* entry follows in authored order. -/
theorem divArgsOrder_general (built : List (List Nat × Option (List Nat))) :
    divArgsOrder built =
      [litBytes "id", litBytes "class", litBytes "style", litBytes "role", litBytes "type"].filterMap
        (fun k => built.find? (fun kv => kv.1 == k)) ++
      built.filter (fun kv => (litBytes "data-").isPrefixOf kv.1) := by
  rfl

/-- An entry found under a key without the `data-` prefix itself has no `data-` prefix. -/
theorem find_no_data_of_key (built : List (List Nat × Option (List Nat))) (k : List Nat)
    (hk : (litBytes "data-").isPrefixOf k = false) :
    ∀ kv, built.find? (fun kv => kv.1 == k) = some kv →
      (litBytes "data-").isPrefixOf kv.1 = false := by
  induction built with
  | nil => simp
  | cons b bs ih =>
      intro kv h
      simp only [List.find?_cons] at h
      split at h
      · rename_i hp
        injection h with hkv
        subst kv
        have hkeq : b.1 = k := beq_iff_eq.mp hp
        rw [hkeq]
        exact hk
      · exact ih kv h

/-- No entry of the ranked `filterMap` prefix carries a `data-` key. -/
theorem ranked_filterMap_no_data (built : List (List Nat × Option (List Nat))) :
    ∀ kv ∈ [litBytes "id", litBytes "class", litBytes "style", litBytes "role", litBytes "type"].filterMap
        (fun k => built.find? (fun kv => kv.1 == k)),
      (litBytes "data-").isPrefixOf kv.1 = false := by
  intro kv hmem
  simp only [List.mem_filterMap] at hmem
  obtain ⟨k, hk, hfind⟩ := hmem
  simp only [List.mem_cons, List.mem_nil_iff, or_false] at hk
  rcases hk with rfl | rfl | rfl | rfl | rfl
  · exact find_no_data_of_key built _ data_not_prefix_ranked.1 kv hfind
  · exact find_no_data_of_key built _ data_not_prefix_ranked.2.1 kv hfind
  · exact find_no_data_of_key built _ data_not_prefix_ranked.2.2.1 kv hfind
  · exact find_no_data_of_key built _ data_not_prefix_ranked.2.2.2.1 kv hfind
  · exact find_no_data_of_key built _ data_not_prefix_ranked.2.2.2.2 kv hfind

theorem filter_all_false {α} (p : α → Bool) :
    ∀ (l : List α), (∀ a ∈ l, p a = false) → l.filter p = []
  | [], _ => rfl
  | a :: as, h => by
      simp [List.filter, h a (by simp),
        filter_all_false p as (fun b hb => h b (by simp [hb]))]

theorem filter_filter_idem {α} (p : α → Bool) (l : List α) :
    (l.filter p).filter p = l.filter p := by
  induction l with
  | nil => rfl
  | cons a as ih =>
      by_cases h : p a = true <;> simp [List.filter, h, ih]

theorem takeWhile_all_false {α} (p : α → Bool) :
    ∀ (l : List α), (∀ a ∈ l, p a = false) → l.takeWhile p = []
  | [], _ => rfl
  | a :: as, h => by
      simp [List.takeWhile, h a (by simp),
        takeWhile_all_false p as (fun b hb => h b (by simp [hb]))]

theorem takeWhile_append_true_then_false {α} (p : α → Bool) (l rest : List α)
    (hl : ∀ a ∈ l, p a = true) (hr : ∀ a ∈ rest, p a = false) :
    (l ++ rest).takeWhile p = l := by
  induction l with
  | nil => simp [takeWhile_all_false p rest hr]
  | cons a as ih =>
      simp [List.takeWhile, hl a (by simp),
        ih (fun b hb => hl b (by simp [hb]))]

/-- Universal data-* suffix law: `divArgsOrder` preserves every authored data-* entry, in authored order, after the ranked prefix. -/
theorem divArgsOrder_data_suffix (built : List (List Nat × Option (List Nat))) :
    (divArgsOrder built).filter (fun kv => (litBytes "data-").isPrefixOf kv.1) =
      built.filter (fun kv => (litBytes "data-").isPrefixOf kv.1) := by
  unfold divArgsOrder
  rw [List.filter_append]
  have hnil : ([litBytes "id", litBytes "class", litBytes "style", litBytes "role", litBytes "type"].filterMap
        (fun k => built.find? (fun kv => kv.1 == k))).filter
        (fun kv => (litBytes "data-").isPrefixOf kv.1) = [] := by
    apply filter_all_false
    intro kv hmem
    have h := ranked_filterMap_no_data built kv hmem
    simp [h]
  rw [hnil, List.nil_append, filter_filter_idem]

/-- Universal ranked-prefix law: the part of the emission before the first data-* entry is exactly the canonical ranked sequence restricted to keys present in `built`; no data-* key can appear in it. -/
theorem divArgsOrder_rank_prefix (built : List (List Nat × Option (List Nat))) :
    (divArgsOrder built).takeWhile (fun kv => ! (litBytes "data-").isPrefixOf kv.1) =
      [litBytes "id", litBytes "class", litBytes "style", litBytes "role", litBytes "type"].filterMap
        (fun k => built.find? (fun kv => kv.1 == k)) := by
  unfold divArgsOrder
  apply takeWhile_append_true_then_false
  · intro kv hmem
    have h := ranked_filterMap_no_data built kv hmem
    simp [h]
  · intro kv hmem
    simp only [List.mem_filter] at hmem
    simp [hmem.2]

end LeanFtml
