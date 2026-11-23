import LeanFtml.TableadvAttrProof

/-! TableadvScanProof.lean — named data heads (REFCORR8/REFCORR10) and the quote-trick whole-state witness for `tableadvScanGo`. -/

namespace LeanFtml

/-! ## Named heads, including REFCORR8 and REFCORR10, through `tableadvScanGo` -/

def chunksFoo : List TadvChunk :=
  [.plain (litBytes " data-Foo="), .quoted (litBytes "UP")]
def chunksDot : List TadvChunk :=
  [.plain (litBytes " data-Foo.Bar="), .quoted (litBytes "UB")]
def chunksUnder : List TadvChunk :=
  [.plain (litBytes " data-Foo_Bar="), .quoted (litBytes "UB")]
def chunksDATA : List TadvChunk :=
  [.plain (litBytes " DATA-foo="), .quoted (litBytes "UP")]
def chunksCLASS : List TadvChunk :=
  [.plain (litBytes " CLASS="), .quoted (litBytes "UP")]
def chunksPlus : List TadvChunk :=
  [.plain (litBytes " data-foo+bar="), .quoted (litBytes "UB")]
def chunksEmptySuffix : List TadvChunk :=
  [.plain (litBytes " data-="), .quoted (litBytes "UB")]
def chunksDotEdge : List TadvChunk :=
  [.plain (litBytes " data-.="), .quoted (litBytes "UB")]
def chunksLast : List TadvChunk :=
  [.plain (litBytes " data-Foo="), .quoted (litBytes "1"),
   .plain (litBytes " data-foo="), .quoted (litBytes "2")]
def chunksId : List TadvChunk :=
  [.plain (litBytes " id="), .quoted (litBytes "X")]
def chunksAlign : List TadvChunk :=
  [.plain (litBytes " align="), .quoted (litBytes "center")]

theorem chunksFoo_ok : tadvChunksOk chunksFoo = true := by decide
theorem chunksDot_ok : tadvChunksOk chunksDot = true := by decide
theorem chunksUnder_ok : tadvChunksOk chunksUnder = true := by decide
theorem chunksDATA_ok : tadvChunksOk chunksDATA = true := by decide
theorem chunksCLASS_ok : tadvChunksOk chunksCLASS = true := by decide
theorem chunksPlus_ok : tadvChunksOk chunksPlus = true := by decide
theorem chunksEmptySuffix_ok : tadvChunksOk chunksEmptySuffix = true := by decide
theorem chunksDotEdge_ok : tadvChunksOk chunksDotEdge = true := by decide
theorem chunksLast_ok : tadvChunksOk chunksLast = true := by decide
theorem chunksId_ok : tadvChunksOk chunksId = true := by decide
theorem chunksAlign_ok : tadvChunksOk chunksAlign = true := by decide
theorem chunks_nil_ok : tadvChunksOk ([] : List TadvChunk) = true := by decide

theorem chunksFoo_bytes : tadvChunksBytes chunksFoo = litBytes " data-Foo=\"UP\"" := by decide
theorem chunksDot_bytes : tadvChunksBytes chunksDot = litBytes " data-Foo.Bar=\"UB\"" := by decide
theorem chunksUnder_bytes : tadvChunksBytes chunksUnder = litBytes " data-Foo_Bar=\"UB\"" := by decide
theorem chunksDATA_bytes : tadvChunksBytes chunksDATA = litBytes " DATA-foo=\"UP\"" := by decide
theorem chunksCLASS_bytes : tadvChunksBytes chunksCLASS = litBytes " CLASS=\"UP\"" := by decide
theorem chunksPlus_bytes : tadvChunksBytes chunksPlus = litBytes " data-foo+bar=\"UB\"" := by decide
theorem chunksEmpty_bytes : tadvChunksBytes chunksEmptySuffix = litBytes " data-=\"UB\"" := by decide
theorem chunksDotEdge_bytes : tadvChunksBytes chunksDotEdge = litBytes " data-.=\"UB\"" := by decide
theorem chunksLast_bytes : tadvChunksBytes chunksLast =
    litBytes " data-Foo=\"1\" data-foo=\"2\"" := by decide
theorem chunksId_bytes : tadvChunksBytes chunksId = litBytes " id=\"X\"" := by decide
theorem chunksAlign_bytes : tadvChunksBytes chunksAlign = litBytes " align=\"center\"" := by decide

theorem attrsFoo : buildAttrsAdv (litBytes " data-Foo=\"UP\"") "table" =
    [(litBytes "data-foo", litBytes "UP")] := by decide
theorem attrsDot : buildAttrsAdv (litBytes " data-Foo.Bar=\"UB\"") "table" =
    [(litBytes "data-foo.bar", litBytes "UB")] := by decide
theorem attrsUnder : buildAttrsAdv (litBytes " data-Foo_Bar=\"UB\"") "table" =
    [(litBytes "data-foo_bar", litBytes "UB")] := by decide
theorem attrsDATA : buildAttrsAdv (litBytes " DATA-foo=\"UP\"") "table" = [] := by decide
theorem attrsCLASS : buildAttrsAdv (litBytes " CLASS=\"UP\"") "table" = [] := by decide
theorem attrsPlus : buildAttrsAdv (litBytes " data-foo+bar=\"UB\"") "table" = [] := by decide
theorem attrsEmptySuffix : buildAttrsAdv (litBytes " data-=\"UB\"") "table" =
    [(litBytes "data-", litBytes "UB")] := by decide
theorem attrsDotEdge : buildAttrsAdv (litBytes " data-.=\"UB\"") "table" =
    [(litBytes "data-.", litBytes "UB")] := by decide
theorem attrsLast : buildAttrsAdv (litBytes " data-Foo=\"1\" data-foo=\"2\"") "table" =
    [(litBytes "data-foo", litBytes "2")] := by decide
theorem attrsId : buildAttrsAdv (litBytes " id=\"X\"") "table" =
    [(litBytes "id", litBytes "u-X")] := by decide
theorem attrsAlign : buildAttrsAdv (litBytes " align=\"center\"") "table" = [] := by decide
theorem attrsEmptyHead : buildAttrsAdv ([] : List Nat) "table" = [] := by decide

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
