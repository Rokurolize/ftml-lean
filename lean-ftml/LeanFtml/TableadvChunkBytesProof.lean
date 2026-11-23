import LeanFtml.TableadvChunkOkProof

/-! TableadvChunkBytesProof.lean — ground byte-expansion proofs for the table-attribute chunk sets split from TableadvProof.lean; no theorem statement or proof changed. -/

namespace LeanFtml

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

end LeanFtml
