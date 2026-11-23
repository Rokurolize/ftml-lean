/-
  ProofNextFinal.lean — Wave 2 next-final proof lane umbrella. This lane covers the policy's remaining late-pipeline parse rule families (NextRules: Iftags, Comment, Iframe, Date, Math; FinalRules: Anchor, User, Button, Embed, Social, File) and the three render modules CodeEmbedRender, InteractiveRender and ServingRender. Each unit lives in its own new proof file with a disjoint namespace and write scope; no mirror rule source, Main.lean or existing file was edited. The coordinator wires these imports at adoption.
-/

import LeanFtml.ProofNextFinalIftagsComment
import LeanFtml.ProofNextFinalIframeDate
import LeanFtml.ProofNextFinalMath
import LeanFtml.ProofNextFinalBase
import LeanFtml.ProofNextFinalAnchor
import LeanFtml.ProofNextFinalCodeEmbedRender
import LeanFtml.ProofNextFinalInteractiveRender
import LeanFtml.ProofNextFinalServingRender

namespace LeanFtml

/-- The lane's deliverable module list for the coordinator's adoption gate. -/
def nextFinalProofLaneModules : List String :=
  ["ProofNextFinalIftagsComment", "ProofNextFinalIframeDate",
   "ProofNextFinalMath", "ProofNextFinalBase", "ProofNextFinalAnchor",
   "ProofNextFinalCodeEmbedRender", "ProofNextFinalInteractiveRender",
   "ProofNextFinalServingRender"]

end LeanFtml
