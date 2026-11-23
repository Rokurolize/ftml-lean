/-
  ProofMiddle2.lean — DSH-PROOF-MIDDLE2 lane umbrella. This lane covers the unworked Middle2Rules families of the policy's Wave 2 block-middle assignment (Divprefilter, Divalign, Note, Gallery) and the two render modules ProseRender and RawHeadingRender. Each unit lives in its own new proof file with a disjoint namespace and write scope; no mirror rule source, Main.lean, foundation module or existing proof file was edited. The coordinator wires these imports at adoption. The named remainders (PcreCore/RefTables correspondence for the four parse rules, the (?R) kernel equality for Divalign, and the RenderEnv-parametric RenderProofBundle equalities for the two render modules) are recorded in the unit files and in REPORT-DSH-PROOF-MIDDLE2.md; they are not asserted here. Prose is single-line.
-/

import LeanFtml.ProofMiddle2Divprefilter
import LeanFtml.ProofMiddle2Divalign
import LeanFtml.ProofMiddle2Note
import LeanFtml.ProofMiddle2Gallery
import LeanFtml.ProofMiddle2ProseRender
import LeanFtml.ProofMiddle2RawHeadingRender

namespace LeanFtml

/-- The lane's deliverable module list for the coordinator's adoption gate. -/
def middle2ProofLaneModules : List String :=
  ["ProofMiddle2Divprefilter", "ProofMiddle2Divalign", "ProofMiddle2Note",
   "ProofMiddle2Gallery", "ProofMiddle2ProseRender", "ProofMiddle2RawHeadingRender"]

end LeanFtml
