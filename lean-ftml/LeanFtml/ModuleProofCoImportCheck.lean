import LeanFtml.ModuleProof
import LeanFtml.ModuleEnvProof
import LeanFtml.ModuleHandoffProof
import LeanFtml.ModuleCloserCompletenessProof
import LeanFtml.ModuleCloserCarryProof
import LeanFtml.ModuleDefenseDomainProof
import LeanFtml.ModuleDefenseLemmas
import LeanFtml.ModuleTerminationProof
import LeanFtml.ModulePreRewriteProof
import LeanFtml.ModuleCodeGateProof
import LeanFtml.ModuleFindSubProof
import LeanFtml.ModuleTokenTableProof
import LeanFtml.Module654TailProof
import LeanFtml.ModuleTrimProof
import LeanFtml.ModuleLastByteProof
import LeanFtml.ModulePassTokenStabilityProof
import LeanFtml.ModuleMeasureStepProof
import LeanFtml.ModuleCandidatesProof
import LeanFtml.ModuleDefenseRewriteProof

-- Integration checker: all 19 Module* proof files on branch proof/module co-import cleanly.
-- Each #check below names one headline theorem from its module by fully qualified name.
-- Declaration audit (458 declarations across the 19 files) found no duplicate full names
-- after LeanFtml.letterPairs/spellings were renamed to carryLetterPairs/carrySpellings
-- in ModuleCloserCarryProof.lean. No banned proof escapes appear in any proof file.
-- Ordered imports are a build-order convenience; Lean checks imported oleans as a set.

#check LeanFtml.closerSpellings_length
#check LeanFtml.module_parse_env_independent
#check LeanFtml.renderModuleWithEnv_available
#check LeanFtml.cert_universal
#check LeanFtml.generated_carry
#check LeanFtml.ddDefenseDomain_all
#check LeanFtml.ModuleDefenseLemmas.go_fuel_irrelevant
#check LeanFtml.module_fixpoint_terminates_certified
#check LeanFtml.ModulePreRewriteProof.modulepreMatch_rewrite_dichotomy
#check LeanFtml.ModuleCodeGateProof.moduleTryCands_single_code_reemit_iff
#check LeanFtml.ModuleFindSubProof.findSub_minimal
#check LeanFtml.ModuleTokenTableProof.modulePasses_extend
#check LeanFtml.Module654TailProof.module654TryCands_single
#check LeanFtml.ModuleTrimProof.trimBytes_idempotent
#check LeanFtml.ModuleLastByteProof.lineStartGuard_after_match
#check LeanFtml.ModulePassTokenStabilityProof.moduleScanPass_bytes_eq_tokens_eq_of_no_claim
#check LeanFtml.ModuleMeasureStepProof.not_universal_measure_step
#check LeanFtml.ModuleCandidatesProof.mcp_nodup
#check LeanFtml.ModuleDefenseRewriteProof.rewriteModulePrefix_exact_head11
