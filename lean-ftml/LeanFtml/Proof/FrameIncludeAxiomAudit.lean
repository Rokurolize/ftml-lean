/-
  LeanFtml.Proof.FrameIncludeAxiomAudit — lane-level axiom gate for the
  Wave 2 frame-include-code proof lane. This module is proof-only: it imports
  the four rule proof units and prints the axioms of their headline theorems.
  Passing means every printed set is a subset of [propext, Classical.choice,
  Quot.sound] with no sorryAx, native_decide, Lean.ofReduceBool or bv_decide.
  Prose flows on single lines.
-/
import LeanFtml.Proof.FramePrefilterProof
import LeanFtml.Proof.FrameDelimiterProof
import LeanFtml.Proof.IncludeRuleProof
import LeanFtml.Proof.CodeRuleProof

namespace LeanFtml

#print axioms emptyWsLines_go_fuel
#print axioms emptyWsLines_fuel_sufficient
#print axioms scanGroup_fuel_indep
#print axioms compressNL_go_fuel
#print axioms compressNL_fuel_sufficient
#print axioms prefilterRule_preserves_wf
#print axioms prefilterRule_ofSource_wf
#print axioms prefilterRule_keeps_tokens
#print axioms delimiterRule_id_restated
#print axioms delimiterRule_preserves_wf
#print axioms delimiterRule_tokEquiv
#print axioms textBytes_no_ff
#print axioms allText_byteForm_no_ff
#print axioms delimiter_eq_ref_kernel_free
#print axioms includeRule_preserves_wf
#print axioms includeRule_work_textOnly
#print axioms includePassesWith_same_regs
#print axioms refResolveRef_same_site_shape
#print axioms refSubstitute_append
#print axioms include_eq_ref_of
#print axioms swapAsciiCase_involutive
#print axioms matchLit_some_drop
#print axioms codeToken_attr_has_type
#print axioms applyCode_indices_lt
#print axioms codeRule_tokens_bounded

end LeanFtml
