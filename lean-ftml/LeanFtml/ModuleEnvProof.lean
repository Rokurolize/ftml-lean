/-
  LeanFtml.ModuleEnvProof — interface-free parse-side environment independence for the Module family.

  Branch proof/module has no LeanFtml.RenderEnv and no LeanFtml.ProofInterface: foundation sprint F1/F3 has not landed. This file therefore proves the strongest interface-free form of policy section 5.4's module_parse_env_independent: an explicit ModuleNameEnv carries the render-side name list, and environment-threading wrappers pass it to the three rule mirrors, which ignore it exactly as their real signatures do (ModuleRules.lean lines 467, 509, 534).

  The harness ModuleManager stub's nine names are render-side only; no parse rule consults them (ModuleRules.lean lines 69-72). ServingRules.lean line 207 defines that list, and it is repeated here as harnessModuleNames so this file imports only ModuleRules.

  The key theorem is universal over any two environments and any ParseState. The component theorem names work, byteForm of work, and tokens explicitly, so byte-form and token-table effects are covered. The closure theorem reaches modulepreScan, moduleScanPass, modulePasses, and module654Scan with their byte-output and token-table results through definitions that contain no environment access, and the rule-to-closure theorems show applyByteRule is the only bridge between rule and scanner.

  Named gap to the full statement: when RenderEnv (F3) and ProofInterface (F1) land, module_parse_env_independent must be re-stated over env1.moduleAvailable and env2.moduleAvailable of type List Nat → Bool, with the pointwise hypothesis ∀ n, env1.moduleAvailable n = env2.moduleAvailable n replacing equality of a name list, and the wrappers must read that field instead of availableNames. This file cannot type that statement because neither type exists on this branch. The parse-side functions themselves (modulepreRule, moduleRule, module654Rule, modulepreScan, moduleScanPass, modulePasses, module654Scan, applyByteRule) take no environment argument and need no change when the interface lands; only the wrappers' environment source changes. The proof stays rfl because the parse side ignores the environment by construction.
-/

import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml

/-! ## Interface-free environment -/

/-- The render-side module availability list, without RenderEnv or ProofInterface. The shape is immaterial: the parse side ignores any value of any environment type, so a phantom type would prove the same theorem by the same argument. -/
structure ModuleNameEnv where
  availableNames : List (List Nat)

/-- The harness ModuleManager stub's nine names, copied from ServingRules.lean line 207 to keep this file's import at ModuleRules only. -/
def harnessModuleNames : List (List Nat) :=
  [ litBytes "backlinks", litBytes "categories", litBytes "css",
    litBytes "join", litBytes "listpages", litBytes "pagetree",
    litBytes "rate", litBytes "redirect", litBytes "tagcloud" ]

/-- A deliberately different name list, disjoint from the harness stub. -/
def otherModuleNames : List (List Nat) :=
  [ litBytes "alternate-css", litBytes "not-installed", litBytes "zzz" ]

/-- The harness environment, used for the concrete witness below. -/
def harnessModuleEnv : ModuleNameEnv := { availableNames := harnessModuleNames }

/-- The contrasting environment, used for the concrete witness below. -/
def otherModuleEnv : ModuleNameEnv := { availableNames := otherModuleNames }

theorem harness_and_other_names_differ : harnessModuleNames ≠ otherModuleNames := by
  decide

/-! ## Environment-threading wrappers for the three rules -/

/-- Modulepre with an explicit environment, ignored by construction, matching modulepreRule's real one-argument signature. -/
def modulepreRuleWithEnv (_env : ModuleNameEnv) (st : ParseState) : ParseState :=
  modulepreRule st

/-- Module with an explicit environment, ignored by construction, matching moduleRule's real one-argument signature. -/
def moduleRuleWithEnv (_env : ModuleNameEnv) (st : ParseState) : ParseState :=
  moduleRule st

/-- Module654 with an explicit environment, ignored by construction, matching module654Rule's real one-argument signature. -/
def module654RuleWithEnv (_env : ModuleNameEnv) (st : ParseState) : ParseState :=
  module654Rule st

/-! ## Full parse closure through environment-free functions -/

/-- The environment-threading wrapper around Modulepre's single byte scan. -/
def modulepreScanWithEnv (_env : ModuleNameEnv) (prev : Option Nat)
    (src : List Nat) (fuel : Nat) : List Nat :=
  modulepreScan prev src fuel

/-- The environment-threading wrapper around one Module scan pass; the second component is the token table. -/
def moduleScanPassWithEnv (_env : ModuleNameEnv) (prev : Option Nat)
    (src : List Nat) (toks : List TokenEntry) (fuel : Nat) : List Nat × List TokenEntry :=
  moduleScanPass prev src toks fuel

/-- The environment-threading wrapper around Module's fixpoint passes. -/
def modulePassesWithEnv (_env : ModuleNameEnv) (fuel : Nat)
    (src : List Nat) (toks : List TokenEntry) : List Nat × List TokenEntry :=
  modulePasses fuel src toks

/-- The environment-threading wrapper around Module654's single byte scan; the second component is the token table. -/
def module654ScanWithEnv (_env : ModuleNameEnv) (prev : Option Nat)
    (src : List Nat) (toks : List TokenEntry) (fuel : Nat) : List Nat × List TokenEntry :=
  module654Scan prev src toks fuel

/-- The entire scanner closure is independent of any two environments, including the token tables returned by the three scanners that carry one. -/
theorem module_parse_closure_env_independent (e1 e2 : ModuleNameEnv)
    (prev : Option Nat) (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    modulepreScanWithEnv e1 prev src fuel = modulepreScanWithEnv e2 prev src fuel ∧
    moduleScanPassWithEnv e1 prev src toks fuel = moduleScanPassWithEnv e2 prev src toks fuel ∧
    modulePassesWithEnv e1 fuel src toks = modulePassesWithEnv e2 fuel src toks ∧
    module654ScanWithEnv e1 prev src toks fuel = module654ScanWithEnv e2 prev src toks fuel := by
  exact ⟨rfl, rfl, rfl, rfl⟩

/-- Modulepre reaches its byte scan through applyByteRule; neither function reads an environment. -/
theorem modulepreRule_reaches_envfree_scan (env : ModuleNameEnv) (st : ParseState) :
    modulepreRuleWithEnv env st =
      applyByteRule st (fun src toks =>
        (modulepreScanWithEnv env none src (src.length + 1), toks)) := by
  rfl

/-- Module reaches its fixpoint passes through applyByteRule; neither function reads an environment. -/
theorem moduleRule_reaches_envfree_scans (env : ModuleNameEnv) (st : ParseState) :
    moduleRuleWithEnv env st =
      applyByteRule st (fun src toks =>
        modulePassesWithEnv env (src.length + 1) src toks) := by
  rfl

/-- One Module fixpoint step goes through moduleScanPass, whose byte output and token table are both environment-free. -/
theorem modulePasses_one_step_via_scanPass (env : ModuleNameEnv) (fuel : Nat)
    (src : List Nat) (toks : List TokenEntry) :
    modulePassesWithEnv env (fuel + 1) src toks =
      let (out, t1) := moduleScanPassWithEnv env none src toks (src.length + 1)
      if out == src then (out, t1) else modulePassesWithEnv env fuel out t1 := by
  rfl

/-- Module654 reaches its byte scan and token table through applyByteRule; neither function reads an environment. -/
theorem module654Rule_reaches_envfree_scan (env : ModuleNameEnv) (st : ParseState) :
    module654RuleWithEnv env st =
      applyByteRule st (fun src toks =>
        module654ScanWithEnv env none src toks (src.length + 1)) := by
  rfl

/-! ## Key boundary theorem -/

/-- module_parse_env_independent: for any two environments and any parse state, all three Module-family parse rules give the same state. This is the interface-free form of the policy's key boundary theorem. -/
theorem module_parse_env_independent (e1 e2 : ModuleNameEnv) (st : ParseState) :
    modulepreRuleWithEnv e1 st = modulepreRuleWithEnv e2 st ∧
    moduleRuleWithEnv e1 st = moduleRuleWithEnv e2 st ∧
    module654RuleWithEnv e1 st = module654RuleWithEnv e2 st := by
  exact ⟨rfl, rfl, rfl⟩

/-- The same independence stated componentwise: work segments, their byte form, and the token table of each rule agree under any two environments. -/
theorem module_parse_env_independent_components (e1 e2 : ModuleNameEnv) (st : ParseState) :
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

/-- The harness nine-name stub and the disjoint list give identical parse output on the witness source, for all three rules. -/
theorem module_harness_vs_other_names_witness :
    modulepreRuleWithEnv harnessModuleEnv moduleWitnessState =
        modulepreRuleWithEnv otherModuleEnv moduleWitnessState ∧
    moduleRuleWithEnv harnessModuleEnv moduleWitnessState =
        moduleRuleWithEnv otherModuleEnv moduleWitnessState ∧
    module654RuleWithEnv harnessModuleEnv moduleWitnessState =
        module654RuleWithEnv otherModuleEnv moduleWitnessState := by
  exact ⟨rfl, rfl, rfl⟩

/-- The witness is non-vacuous: Module actually claims one token of rule "Module" on that source. -/
theorem module_witness_claims_module_token :
    (moduleRuleWithEnv harnessModuleEnv moduleWitnessState).tokens.length = 1 ∧
    (moduleRuleWithEnv harnessModuleEnv moduleWitnessState).tokens.map (·.rule) = ["Module"] := by
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
