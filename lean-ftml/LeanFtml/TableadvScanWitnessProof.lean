import LeanFtml.TableadvScanHeadProof

/-! TableadvScanWitnessProof.lean - scan and quote-trick witness theorems split verbatim from TableadvProof.lean (commit 06b191d); no statement or proof changed. -/

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

theorem scan_empty_head (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell []) [] fuel = (plainRep, plainToks []) :=
  scan_of_chunks [] _ _ fuel chunks_nil_ok (by simp [tadvChunksBytes]) attrsEmptyHead h

theorem scan_data_foo (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-Foo=\"UP\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-foo", litBytes "UP")]) :=
  scan_of_chunks chunksFoo _ _ fuel chunksFoo_ok chunksFoo_bytes attrsFoo h

theorem scan_data_dot (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-Foo.Bar=\"UB\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-foo.bar", litBytes "UB")]) :=
  scan_of_chunks chunksDot _ _ fuel chunksDot_ok chunksDot_bytes attrsDot h

theorem scan_data_under (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-Foo_Bar=\"UB\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-foo_bar", litBytes "UB")]) :=
  scan_of_chunks chunksUnder _ _ fuel chunksUnder_ok chunksUnder_bytes attrsUnder h

theorem scan_DATA_drop (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " DATA-foo=\"UP\"")) [] fuel =
      (plainRep, plainToks []) :=
  scan_of_chunks chunksDATA _ _ fuel chunksDATA_ok chunksDATA_bytes attrsDATA h

theorem scan_CLASS_drop (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " CLASS=\"UP\"")) [] fuel =
      (plainRep, plainToks []) :=
  scan_of_chunks chunksCLASS _ _ fuel chunksCLASS_ok chunksCLASS_bytes attrsCLASS h

theorem scan_plus_drop (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-foo+bar=\"UB\"")) [] fuel =
      (plainRep, plainToks []) :=
  scan_of_chunks chunksPlus _ _ fuel chunksPlus_ok chunksPlus_bytes attrsPlus h

theorem scan_empty_suffix (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-=\"UB\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-", litBytes "UB")]) :=
  scan_of_chunks chunksEmptySuffix _ _ fuel chunksEmptySuffix_ok chunksEmpty_bytes
    attrsEmptySuffix h

theorem scan_dot_edge (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-.=\"UB\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-.", litBytes "UB")]) :=
  scan_of_chunks chunksDotEdge _ _ fuel chunksDotEdge_ok chunksDotEdge_bytes attrsDotEdge h

theorem scan_last_wins (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-Foo=\"1\" data-foo=\"2\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-foo", litBytes "2")]) :=
  scan_of_chunks chunksLast _ _ fuel chunksLast_ok chunksLast_bytes attrsLast h

theorem scan_id_isolate (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " id=\"X\"")) [] fuel =
      (plainRep, plainToks [(litBytes "id", litBytes "u-X")]) :=
  scan_of_chunks chunksId _ _ fuel chunksId_ok chunksId_bytes attrsId h

theorem scan_align_drop (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " align=\"center\"")) [] fuel =
      (plainRep, plainToks []) :=
  scan_of_chunks chunksAlign _ _ fuel chunksAlign_ok chunksAlign_bytes attrsAlign h

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
