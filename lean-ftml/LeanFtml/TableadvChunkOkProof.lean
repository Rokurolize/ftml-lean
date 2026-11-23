import LeanFtml.TableadvChunkDefsProof

/-! Ground chunk-ok proofs for the named chunk families and the empty chunk list, copied verbatim from 06b191d TableadvProof.lean lines 625-636. -/

namespace LeanFtml

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

end LeanFtml
