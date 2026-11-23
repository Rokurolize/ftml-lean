import LeanFtml.TableadvCellProof

/-! TableadvScanHeadProof.lean — ground chunk/attribute pins for the named table heads, split from TableadvProof.lean. -/

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

end LeanFtml
