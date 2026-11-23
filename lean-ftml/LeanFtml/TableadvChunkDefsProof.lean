import LeanFtml.TableadvCellProof

/-! TableadvChunkDefsProof.lean — pinned chunk-list definitions for the named heads, copied verbatim from TableadvProof.lean. -/

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

end LeanFtml
