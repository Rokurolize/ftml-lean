/-
  LeanFtml.ModuleEnvProof — parse-side environment independence for the Module family, rebased onto the canonical foundation interface at current main b8a51b6. The lane draft's ModuleNameEnv stand-in (a list of available name byte lists) is replaced by the foundation's actual LeanFtml.RenderEnv record, whose moduleAvailable field has type List Nat -> Bool. Per ADVISOR-PROOF-POLICY section 5.4 item 2 and the lane report's rebase note, the key boundary theorem is now stated over e1.moduleAvailable and e2.moduleAvailable with the pointwise hypothesis forall n, e1.moduleAvailable n = e2.moduleAvailable n. The parse-side mirror functions take no environment argument, so every wrapper is definitionally its mirror function and the proofs stay rfl: the parse side ignores the environment by construction, independently of the RenderEnv record's shape. The harness nine-name ModuleManager stub and the disjoint contrasting list are render-side only and no parse rule consults them. Prose is flowing paragraphs on single lines.
-/

import LeanFtml.RenderEnv
import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml

/-! ## Foundation environment and a contrasting instance -/

/-- A deliberately different availability predicate, disjoint from harnessEnv's module set, used only for the concrete witness. The harnessEnv and harnessModuleNames definitions are imported from LeanFtml.RenderEnv rather than duplicated here. -/
def otherModuleNames : List (List Nat) :=
  [ litBytes "alternate-css", litBytes "not-installed", litBytes "zzz" ]

/-- The contrasting environment: the foundation harness record with its moduleAvailable field replaced by membership in the disjoint list. -/
def otherModuleEnv : RenderEnv :=
  { harnessEnv with
    moduleAvailable := fun ns => otherModuleNames.contains ns }

/-- The two availability predicates really differ, so the pointwise hypothesis is not vacuous in general. -/
theorem harness_and_other_names_differ :
    harnessEnv.moduleAvailable (litBytes "css") = true ∧
    otherModuleEnv.moduleAvailable (litBytes "css") = false := by
  decide

/-! ## Environment-threading wrappers for the three rules -/

/-- Modulepre with an explicit environment, ignored by construction, matching modulepreRule's real one-argument signature. -/
def modulepreRuleWithEnv (_env : RenderEnv) (st : ParseState) : ParseState :=
  modulepreRule st

/-- Module with an explicit environment, ignored by construction, matching moduleRule's real one-argument signature. -/
def moduleRuleWithEnv (_env : RenderEnv) (st : ParseState) : ParseState :=
  moduleRule st

/-- Module654 with an explicit environment, ignored by construction, matching module654Rule's real one-argument signature. -/
def module654RuleWithEnv (_env : RenderEnv) (st : ParseState) : ParseState :=
  module654Rule st

/-! ## Full parse closure through environment-free functions -/

/-- The environment-threading wrapper around Modulepre's single byte scan. -/
def modulepreScanWithEnv (_env : RenderEnv) (prev : Option Nat)
    (src : List Nat) (fuel : Nat) : List Nat :=
  modulepreScan prev src fuel

/-- The environment-threading wrapper around one Module scan pass; the second component is the token table. -/
def moduleScanPassWithEnv (_env : RenderEnv) (prev : Option Nat)
    (src : List Nat) (toks : List TokenEntry) (fuel : Nat) : List Nat × List TokenEntry :=
  moduleScanPass prev src toks fuel

/-- The environment-threading wrapper around Module's fixpoint passes. -/
def modulePassesWithEnv (_env : RenderEnv) (fuel : Nat)
    (src : List Nat) (toks : List TokenEntry) : List Nat × List TokenEntry :=
  modulePasses fuel src toks

/-- The environment-threading wrapper around Module654's single byte scan; the second component is the token table. -/
def module654ScanWithEnv (_env : RenderEnv) (prev : Option Nat)
    (src : List Nat) (toks : List TokenEntry) (fuel : Nat) : List Nat × List TokenEntry :=
  module654Scan prev src toks fuel

/-- The entire scanner closure is independent of any two environments, including the token tables returned by the three scanners that carry one. -/
theorem module_parse_closure_env_independent (e1 e2 : RenderEnv)
    (h : ∀ n, e1.moduleAvailable n = e2.moduleAvailable n)
    (prev : Option Nat) (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    modulepreScanWithEnv e1 prev src fuel = modulepreScanWithEnv e2 prev src fuel ∧
    moduleScanPassWithEnv e1 prev src toks fuel = moduleScanPassWithEnv e2 prev src toks fuel ∧
    modulePassesWithEnv e1 fuel src toks = modulePassesWithEnv e2 fuel src toks ∧
    module654ScanWithEnv e1 prev src toks fuel = module654ScanWithEnv e2 prev src toks fuel := by
  exact ⟨rfl, rfl, rfl, rfl⟩

/-- Modulepre reaches its byte scan through applyByteRule; neither function reads an environment. -/
theorem modulepreRule_reaches_envfree_scan (env : RenderEnv) (st : ParseState) :
    modulepreRuleWithEnv env st =
      applyByteRule st (fun src toks =>
        (modulepreScanWithEnv env none src (src.length + 1), toks)) := by
  rfl

/-- Module reaches its fixpoint passes through applyByteRule; neither function reads an environment. -/
theorem moduleRule_reaches_envfree_scans (env : RenderEnv) (st : ParseState) :
    moduleRuleWithEnv env st =
      applyByteRule st (fun src toks =>
        modulePassesWithEnv env (src.length + 1) src toks) := by
  rfl

/-- One Module fixpoint step goes through moduleScanPass, whose byte output and token table are both environment-free. -/
theorem modulePasses_one_step_via_scanPass (env : RenderEnv) (fuel : Nat)
    (src : List Nat) (toks : List TokenEntry) :
    modulePassesWithEnv env (fuel + 1) src toks =
      let (out, t1) := moduleScanPassWithEnv env none src toks (src.length + 1)
      if out == src then (out, t1) else modulePassesWithEnv env fuel out t1 := by
  rfl

/-- Module654 reaches its byte scan and token table through applyByteRule; neither function reads an environment. -/
theorem module654Rule_reaches_envfree_scan (env : RenderEnv) (st : ParseState) :
    module654RuleWithEnv env st =
      applyByteRule st (fun src toks =>
        module654ScanWithEnv env none src toks (src.length + 1)) := by
  rfl

/-! ## Key boundary theorem -/

/-- module_parse_env_independent: for any two foundation environments agreeing pointwise on moduleAvailable and any parse state, all three Module-family parse rules give the same state. This is the policy section 5.4 key boundary theorem restated over RenderEnv.moduleAvailable. -/
theorem module_parse_env_independent (e1 e2 : RenderEnv)
    (h : ∀ n, e1.moduleAvailable n = e2.moduleAvailable n) (st : ParseState) :
    modulepreRuleWithEnv e1 st = modulepreRuleWithEnv e2 st ∧
    moduleRuleWithEnv e1 st = moduleRuleWithEnv e2 st ∧
    module654RuleWithEnv e1 st = module654RuleWithEnv e2 st := by
  exact ⟨rfl, rfl, rfl⟩

/-- The same independence stated componentwise: work segments, their byte form, and the token table of each rule agree under any two pointwise-equal environments. -/
theorem module_parse_env_independent_components (e1 e2 : RenderEnv)
    (h : ∀ n, e1.moduleAvailable n = e2.moduleAvailable n) (st : ParseState) :
    (modulepreRuleWithEnv e1 st).work = (modulepreRuleWithEnv e2 st).work ∧
    byteForm (modulepreRuleWithEnv e1 st).work = byteForm (modulepreRuleWithEnv e2 st).work ∧
    (modulepreRuleWithEnv e1 st).tokens = (modulepreRuleWithEnv e2 st).tokens ∧
    (moduleRuleWithEnv e1 st).work = (moduleRuleWithEnv e2 st).work ∧
    byteForm (moduleRuleWithEnv e1 st).work = byteForm (moduleRuleWithEnv e2 st).work ∧
    (moduleRuleWithEnv e1 st).tokens = (moduleRuleWithEnv e2 st).tokens ∧
    (module654RuleWithEnv e1 st).work = (module654RuleWithEnv e2 st).work ∧
    byteForm (module654RuleWithEnv e1 st).work = byteForm (module654RuleWithEnv e2 st).work ∧
    (module654RuleWithEnv e1 st).tokens = (module654RuleWithEnv e2 st).tokens := by
  exact ⟨rfl, rfl, rfl, rfl, rfl, rfl, rfl, rfl, rfl⟩

/-! ## Concrete witness -/

/-- A source that actually claims a Module token, so the witness below is not about an unchanged input. -/
def moduleWitnessState : ParseState :=
  ParseState.ofSource "[[module css]]\nbody\n[[/module]]".toList

/-- The harness environment and the disjoint-list environment give identical parse output on the witness source, for all three rules. -/
theorem module_harness_vs_other_names_witness :
    modulepreRuleWithEnv harnessEnv moduleWitnessState =
        modulepreRuleWithEnv otherModuleEnv moduleWitnessState ∧
    moduleRuleWithEnv harnessEnv moduleWitnessState =
        moduleRuleWithEnv otherModuleEnv moduleWitnessState ∧
    module654RuleWithEnv harnessEnv moduleWitnessState =
        module654RuleWithEnv otherModuleEnv moduleWitnessState := by
  exact ⟨rfl, rfl, rfl⟩

/-- The witness is non-vacuous: Module actually claims one token of rule "Module" on that source. -/
theorem module_witness_claims_module_token :
    (moduleRuleWithEnv harnessEnv moduleWitnessState).tokens.length = 1 ∧
    (moduleRuleWithEnv harnessEnv moduleWitnessState).tokens.map (·.rule) = ["Module"] := by
  exact ⟨rfl, rfl⟩

#print axioms harness_and_other_names_differ
#print axioms module_parse_closure_env_independent
#print axioms modulepreRule_reaches_envfree_scan
#print axioms moduleRule_reaches_envfree_scans
#print axioms modulePasses_one_step_via_scanPass
#print axioms module654Rule_reaches_envfree_scan
#print axioms module_parse_env_independent
#print axioms module_parse_env_independent_components
#print axioms module_harness_vs_other_names_witness
#print axioms module_witness_claims_module_token

end LeanFtml
