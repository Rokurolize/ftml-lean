import LeanFtml.ContainRules
import LeanFtml.InteractiveRules

import LeanFtml.DivAttrNormalize
import LeanFtml.DivAttrArgs

/-! DivAttrPins holds three distinct artefacts: `refcorr12_dispatch` is the universal trailing-space mechanism theorem (counts toward the proof); `refcorr12_type_witness` is the stopped REFCORR12 divergence record (mirror `type="t "` vs live capture `muse-probe-round5e-r1-r5er1-d6` serving `type="t"`), whose fix belongs to the coordinator's correction round; the `divProcess_*` equalities are ground rfl regression pins excluded from the proof count (policy §4.6 G4). -/

namespace LeanFtml

/-- Universal trailing-space mechanism theorem (counts toward the proof): on `type`, `style`, `role` and `data-*`, the trailing space produced by `normalize_trailing` is the stored value; on `class`, `rtrimSpaceTab` removes it. -/
theorem refcorr12_dispatch (core : List Nat) (n m : Nat)
    (hc : ∀ b ∈ core, 32 < b ∧ b ≠ 127) (hne : core ≠ []) (hm : 0 < m) :
    divArgs [(litBytes "type", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("type".toList, some (core ++ [32]))] ∧
    divArgs [(litBytes "style", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("style".toList, some (core ++ [32]))] ∧
    divArgs [(litBytes "role", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("role".toList, some (core ++ [32]))] ∧
    divArgs [(litBytes "class", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("class".toList, some core)] ∧
    divArgs [(litBytes "data-x", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("data-x".toList, some (core ++ [32]))] := by
  have ht := normalize_trailing core n m hc hne hm
  have hr := rtrim_trailing core n m hc hne hm
  have hdata : (litBytes "data-").isPrefixOf (litBytes "data-x") = true := by decide
  have hlow : asciiLower (litBytes "data-x") = litBytes "data-x" := by decide
  refine ⟨?_, ?_, ?_, ?_, ?_⟩
  · simp [divArgs_type, ht]
  · simp [divArgs_style, ht]
  · simp [divArgs_role, ht]
  · simp [divArgs_class, hr]
  · simp [divArgs_data _ _ hdata, hlow, ht, utf8Decode_lit "data-x" lit_datax_ascii]

/-- REFCORR12 divergence witness (line stopped, mirror untouched): the mirror stores and renders `type="t "` while the live capture `muse-probe-round5e-r1-r5er1-d6` serves `type="t"`. That one-byte gap is the unadopted REFCORR12 right-trim; the fix belongs to the coordinator's REFCORR12 correction round, not to this file. -/
theorem refcorr12_type_witness :
    normalizeValue (litBytes "  t  ") = litBytes "t " ∧
    divArgs [(litBytes "type", litBytes "  t  ")] =
      [("type".toList, some (litBytes "t "))] ∧
    divArgs [(litBytes "class", litBytes "  t  ")] =
      [("class".toList, some (litBytes "t"))] ∧
    renderDiv [("type".toList, OptVal.str "start".toList),
        ("args".toList, OptVal.map [("type".toList, OptVal.str "t ".toList)])] =
      litBytes "<div type=\"t \">" := by
  have hc : ∀ b ∈ litBytes "t", 32 < b ∧ b ≠ 127 := by decide
  have hshape : litBytes "  t  " =
      List.replicate 2 32 ++ (litBytes "t" ++ List.replicate 2 32) := by decide
  have hnorm := normalize_trailing (litBytes "t") 2 2 hc (by decide) (by decide)
  have hclass := rtrim_trailing (litBytes "t") 2 2 hc (by decide) (by decide)
  have hlit : litBytes "t " = litBytes "t" ++ [32] := by decide
  refine ⟨?_, ?_, ?_, rfl⟩
  · rw [hshape]; exact hnorm.trans hlit.symm
  · rw [divArgs_type, hshape]; exact congrArg (fun w => [("type".toList, some w)]) (hnorm.trans hlit.symm)
  · rw [divArgs_class, hshape]; exact congrArg (fun w => [("class".toList, some w)]) hclass

/-! ## Ground `divProcess` regression pins (rfl equalities, excluded from the proof count per policy §4.6 G4); the REFCORR12 divergence is recorded above and its line is stopped. -/

-- Regression observation (ground rfl pin, excluded from the proof count §4.6 G4), not a universal theorem: whitespace-only class value collapses to empty.
theorem divProcess_ws_class :
    (divProcess [] [] (some (litBytes "class=\" \"")) (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("class".toList, OptVal.str [])]),
       ("type".toList, OptVal.str "start".toList)] := rfl

-- Regression observation (ground rfl pin, excluded from the proof count §4.6 G4), not a universal theorem: empty class triggers `vanished`.
theorem divProcess_empty_class_vanished :
    (divProcess [] [] (some (litBytes "class=\"\"")) [] []).2[0]!.opts =
      [("args".toList, OptVal.map []),
       ("type".toList, OptVal.str "start".toList),
       ("vanished".toList, OptVal.bool true)] := rfl

-- Regression observation (ground rfl pin, excluded from the proof count §4.6 G4), not a universal theorem: duplicate data-* keeps the last spelling.
theorem divProcess_data_last :
    (divProcess [] [] (some (litBytes "data-Foo=\"1\" data-foo=\"2\"")) (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("data-foo".toList, OptVal.str "2".toList)]),
       ("type".toList, OptVal.str "start".toList)] := rfl

-- Regression observation (ground rfl pin, excluded from the proof count §4.6 G4), not a universal theorem: empty data-* value is retained.
theorem divProcess_data_empty_keeps :
    (divProcess [] [] (some (litBytes " data-Foo=\"1\" data-foo=\"\"")) (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("data-foo".toList, OptVal.str [])]),
       ("type".toList, OptVal.str "start".toList)] := rfl

-- Regression observation (ground rfl pin, excluded from the proof count §4.6 G4), not a universal theorem: whitespace-only id isolates to the `u-` placeholder.
theorem divProcess_ws_id :
    (divProcess [] [] (some (litBytes "id=\"   \"")) (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("id".toList, OptVal.str "u-".toList)]),
       ("type".toList, OptVal.str "start".toList)] := rfl

-- Regression observation (ground rfl pin, excluded from the proof count §4.6 G4), not a universal theorem: tableadv-shape attribute emission keeps last data-* spelling.
theorem divProcess_tableadv_shape :
    (divProcess [] [] (some (litBytes " DATA-foo=\"UP\" CLASS=\"UP\" ID=\"UP\" data-Foo=\"UP\""))
        (litBytes "X") []).2[0]!.opts =
      [("args".toList, OptVal.map [("data-foo".toList, OptVal.str "UP".toList)]),
       ("type".toList, OptVal.str "start".toList)] := rfl

-- Regression observation (ground rfl pin, excluded from the proof count §4.6 G4), not a universal theorem: type trailing-space shape through the scanner.
theorem divProcess_type_trail :
    (divProcess [] [] (some (litBytes " type=\"  t  \"")) (litBytes "body") []).2[0]!.opts =
      [("args".toList, OptVal.map [("type".toList, OptVal.str "t ".toList)]),
       ("type".toList, OptVal.str "start".toList)] := rfl

end LeanFtml
