import LeanFtml.TableadvScanHeadProof

/-! TableadvScanWitnessProof.lean — universal chunk scan law and quote-trick witness theorems; the ground-only attr-dependent corollaries are recorded as bounded evidence in TableadvCertificate.lean. -/

namespace LeanFtml

def srcPlainCell (head : List Nat) : List Nat :=
  tadvClosed head plainBody []

theorem scan_of_chunks (cs : List TadvChunk) (head : List Nat)
    (attrs : List (List Nat × List Nat)) (fuel : Nat)
    (hok : tadvChunksOk cs = true) (hbytes : tadvChunksBytes cs = head)
    (hattrs : buildAttrsAdv head "table" = attrs) (hFuel : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell head) [] fuel = (plainRep, plainToks attrs) := by
  have hscan := tableadvScanGo_chunks cs fuel hok hFuel
  simpa [srcPlainCell, hbytes, hattrs] using hscan


/-! ## Quote-trick witness, whole state of `tableadvScanGo` -/

def witnessRep : List Nat :=
  phBytes 4 ++ phBytes 2 ++ phBytes 0 ++ enumCell ++ phBytes 1 ++ phBytes 3 ++ phBytes 5

def witnessToks : List TokenEntry :=
  [tadvCellStart false [], tadvCellEnd false, tadvRowStart [], tadvRowEnd,
   tadvStart [], tadvEnd]

theorem witness_rows :
    advRowsGo [(([] : List Nat), enumRowBody)] ([] : List TokenEntry) =
      (some (phBytes 2 ++ phBytes 0 ++ enumCell ++ phBytes 1 ++ phBytes 3),
       [tadvCellStart false [], tadvCellEnd false, tadvRowStart [], tadvRowEnd]) := by
  rfl

theorem witness_process (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvProcess [] enumBody tableadvWitness [] fuel = (witnessRep, witnessToks) := by
  cases fuel with
  | zero => omega
  | succ f =>
      simp only [tableadvProcess,
        mirror_scan_enum_body ([] : List TokenEntry) f (by omega),
        enum_one_row, List.isEmpty_cons, not_res_empty]
      rw [ite_eq_right (by decide : ¬ (false = true)),
        ite_eq_right (by decide : ¬ (false = true))]
      simp [witness_rows, claimTok, witnessRep, witnessToks, tadvStart, tadvEnd]

theorem tableadvScanGo_witness (fuel : Nat) (h : 201 ≤ fuel) :
    tableadvScanGo tableadvWitness [] (fuel + 1) = (witnessRep, witnessToks) := by
  have hM := enum_match_witness (fuel - 1) (by omega)
  have hMf : (fuel - 1) + 1 = fuel := by omega
  simp only [hMf] at hM
  have hSpan := enum_span
  have hP := witness_process fuel (by omega)
  rw [witness_cons]
  simp only [tableadvScanGo, ← witness_cons, hM, mirror_scan_empty]
  simp only [hSpan.1, List.length_nil, Nat.sub_zero, hSpan.2, List.append_nil]
  exact hP

theorem tableadvScanGo_witness_fuel :
    tableadvScanGo tableadvWitness [] (tableFuel tableadvWitness.length) =
      (witnessRep, witnessToks) := by
  have hlen : 221 ≤ tableFuel tableadvWitness.length := fuel_for_enum
  have hs : tableFuel tableadvWitness.length =
      (tableFuel tableadvWitness.length - 1) + 1 := by omega
  rw [hs]
  exact tableadvScanGo_witness (tableFuel tableadvWitness.length - 1) (by omega)

end LeanFtml
