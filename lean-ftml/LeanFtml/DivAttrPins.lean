import LeanFtml.ContainRules
import LeanFtml.InteractiveRules

import LeanFtml.DivAttrNormalize
import LeanFtml.DivAttrArgs

/-! DivAttrPins, rebased onto current canonical ground. `refcorr12_dispatch` is RESTATED as the universal uniform-right-trim law actually adopted by REFCORR12 (all five families store the bare core). The former `refcorr12_type_witness` is RETIRED: its conjunct `normalizeValue (litBytes "  t  ") = litBytes "t "` is false on current ground (the value is `litBytes "t"`), as the coordinator's WITNESS-DIVATTR closure proved; the right-trim it described was adopted by R12-ATTR. The `divProcess_*` equalities are ground rfl regression pins excluded from the proof count (policy §4.6 G4). -/

namespace LeanFtml

/-- RESTATED universal REFCORR12 mechanism law (counts toward the proof): on `type`, `style`, `role`, `class` and `data-*`, a printable-ASCII core flanked by spaces normalizes to the bare core with no surviving trailing space. The old draft's type/style/role/data-* trailing-space-survival claim was false on this ground. -/
theorem refcorr12_dispatch (core : List Nat) (n m : Nat)
    (hc : ∀ b ∈ core, 33 ≤ b ∧ b < 127) (hne : core ≠ []) (hm : 0 < m) :
    divArgs [(litBytes "type", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("type".toList, some core)] ∧
    divArgs [(litBytes "style", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("style".toList, some core)] ∧
    divArgs [(litBytes "role", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("role".toList, some core)] ∧
    divArgs [(litBytes "class", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("class".toList, some core)] ∧
    divArgs [(litBytes "data-x", List.replicate n 32 ++ (core ++ List.replicate m 32))] =
      [("data-x".toList, some core)] := by
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

/-! RETIRED: `refcorr12_type_witness` claimed the mirror stored `type="t "` while live served `type="t"`. Its mirror conjunct is false on current canonical ground because commit 60897f8 / R12-ATTR adopted the uniform `rtrimAttrWs` right-trim in `normalizeValue` (ContainRules.lean:269-288). WITNESS-DIVATTR (coord-units/WITNESS-DIVATTR/UNIT.md) re-probed all five attribute families 12/12 CLEARED, closed the witness as mirror-faithful with NO-DIVERGENCE, and recorded that the only residual action is to retire or rebase this theorem. It is deliberately not reintroduced. The adopted behavior is captured instead by `refcorr12_dispatch` above and by the corrected ground pin `divProcess_type_rtrim` below. -/

/-! ## Ground `divProcess` regression pins (rfl equalities, excluded from the proof count per policy §4.6 G4); the REFCORR12 divergence is closed and its witness retired above. -/

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

-- Corrected ground pin (rfl, excluded from the proof count §4.6 G4): the adopted REFCORR12 right-trim stores `t`, not the stale draft's `t `. This replaces `divProcess_type_trail`.
theorem divProcess_type_rtrim :
    (divProcess [] [] (some (litBytes " type=\"  t  \"")) (litBytes "body") []).2[0]!.opts =
      [("args".toList, OptVal.map [("type".toList, OptVal.str "t".toList)]),
       ("type".toList, OptVal.str "start".toList)] := rfl

end LeanFtml
