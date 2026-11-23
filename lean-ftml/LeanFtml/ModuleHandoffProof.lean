/-
  ModuleHandoffProof.lean — Hard Core #4, narrow render-side handoff contract (ADVISOR-PROOF-POLICY.md section 5.4 item 3), rebased onto the canonical foundation interface at current main b8a51b6. The lane draft's interface-free ModuleHandoffEnv stand-in is replaced by the foundation's actual LeanFtml.RenderEnv record; harnessHandoffEnv is replaced by the foundation's harnessEnv projection. Per the lane report's rebase note, the two-environment agreement theorem is stated over e1.moduleAvailable and e2.moduleAvailable with the pointwise hypothesis forall n, e1.moduleAvailable n = e2.moduleAvailable n. The wrapper reads exactly the moduleAvailable field that F3 provides, and the parse-side mirror functions are unchanged. Deepwell fence: every theorem here is about the bytes that cross the parser-to-deepwell boundary, namely the exact \xFE-delimited marker and the exact "No such module" error block; decoding the marker, resolving the emitted name and evaluating the body are deepwell's domain and formally outside LeanFtml. Byte-level-only reason: the name is an arbitrary List Nat obtained from optStrBytes with no IsByteList / utf8Valid fence, so injectivity of the marker is proved only under the closing-quote fence NameFenced. Prose is flowing paragraphs on single lines.
-/

import LeanFtml.RenderEnv
import LeanFtml.ServingRules

namespace LeanFtml

/-! ## Foundation availability environment -/

/-- The bytes of the module name option (raw, case preserved). -/
def moduleNameBytes (opts : OptMap) : List Nat :=
  optStrBytes opts "moduleName".toList

/-- The effective attribute bytes: the authored attr, with a truthy module_body appended as ` module_body="<urlencoded body>"` first. Exactly the attr let of the mirror's renderModule. -/
def moduleAttr (opts : OptMap) : List Nat :=
  let attr0 := optStrBytes opts "attr".toList
  let body := optStrBytes opts "module_body".toList
  if phpEmptyOpt (omGet opts "module_body".toList) then attr0
  else attr0 ++ litBytes " module_body=\"" ++ urlencodeBytes body ++ litBytes "\""

/-- The exact handoff marker byte expression: \xFE module "Name" <urlencoded attr> \xFE, with the space-padded attr segment only when the effective attr is nonempty. This is the formal parser-to-deepwell boundary; decode and evaluation of this marker are deepwell's domain, outside LeanFtml. -/
def moduleHandoffMarker (name attr : List Nat) : List Nat :=
  moduleMarkerByte ++ litBytes "module \"" ++ name ++ litBytes "\"" ++
    (if attr.isEmpty then [] else [32] ++ urlencodeBytes attr ++ [32]) ++
    moduleMarkerByte

/-- The exact R2-corrected "No such module" error block, with the raw name spliced between <em> and </em>. -/
def moduleErrorBlock (name : List Nat) : List Nat :=
  litBytes "<div class=\"error-block\">[[module <em>" ++ name ++
    litBytes "</em>]] No such module, please " ++
    litBytes "<a href=\"https://www.wikidot.com/doc:modules\" " ++
    litBytes "target=\"_blank\">check available modules</a> " ++
    litBytes "and fix this page.</div>"

/-- renderModule with the hardcoded availability check replaced by a call on the foundation RenderEnv.moduleAvailable field. Every other byte is identical to the mirror's renderModule in LeanFtml/ServingRules.lean. -/
def renderModuleWithEnv (env : RenderEnv) (opts : OptMap) : List Nat :=
  let name := optStrBytes opts "moduleName".toList
  let attr0 := optStrBytes opts "attr".toList
  let body := optStrBytes opts "module_body".toList
  let attr := if phpEmptyOpt (omGet opts "module_body".toList) then attr0
    else attr0 ++ litBytes " module_body=\"" ++ urlencodeBytes body ++
      litBytes "\""
  if env.moduleAvailable name then
    moduleMarkerByte ++ litBytes "module \"" ++ name ++ litBytes "\"" ++
      (if attr.isEmpty then [] else
        [32] ++ urlencodeBytes attr ++ [32]) ++
      moduleMarkerByte
  else
    litBytes "<div class=\"error-block\">[[module <em>" ++ name ++
      litBytes "</em>]] No such module, please " ++
      litBytes "<a href=\"https://www.wikidot.com/doc:modules\" " ++
      litBytes "target=\"_blank\">check available modules</a> " ++
      litBytes "and fix this page.</div>"

/-! ## Agreement with the mirror and pointwise independence -/

/-- The foundation harness environment recovers the mirror exactly, for every OptMap. Definitional: harnessEnv.moduleAvailable (asciiLowerBytes name) reduces to harnessModuleNames.contains (asciiLowerBytes name), the same eighteen-name list and byte check the mirror hardcodes at ServingRules.lean lines 209-217. -/
theorem renderModuleWithEnv_harness (opts : OptMap) :
    renderModuleWithEnv harnessEnv opts = renderModule opts := by
  have hlist : harnessModuleNames = moduleAvailableNames := by decide
  have hfunc : envAsciiLower = asciiLowerBytes := by
    funext bs
    induction bs with
    | nil => rfl
    | cons b bs ih =>
        simp [envAsciiLower, asciiLowerBytes, envAsciiLowerByte, ih]
  have hpred : ∀ name : List Nat,
      harnessEnv.moduleAvailable name =
        moduleAvailableNames.contains (asciiLowerBytes name) := by
    intro name
    dsimp [harnessEnv]
    rw [hfunc]
    rw [hlist]
  simp [renderModuleWithEnv, renderModule, hpred]

/-- Two foundation environments that agree pointwise on moduleAvailable give byte-identical handoff output, for every OptMap. This is the foundation-interface restatement of the handoff contract's environment dependence. -/
theorem renderModuleWithEnv_env_independent (e1 e2 : RenderEnv)
    (h : ∀ n, e1.moduleAvailable n = e2.moduleAvailable n) (opts : OptMap) :
    renderModuleWithEnv e1 opts = renderModuleWithEnv e2 opts := by
  simp [renderModuleWithEnv, h]

/-! ## The handoff branch -/

/-- Available name: the output is exactly the \xFE-delimited marker with the RAW name (case preserved) and the urlencoded effective attribute. -/
theorem renderModuleWithEnv_available (env : RenderEnv) (opts : OptMap)
    (h : env.moduleAvailable
        (optStrBytes opts "moduleName".toList) = true) :
    renderModuleWithEnv env opts =
      moduleMarkerByte ++ litBytes "module \"" ++ moduleNameBytes opts ++
        litBytes "\"" ++
        (if (moduleAttr opts).isEmpty then [] else
          [32] ++ urlencodeBytes (moduleAttr opts) ++ [32]) ++
        moduleMarkerByte := by
  have h' : env.moduleAvailable
      (optStrBytes opts
        ['m', 'o', 'd', 'u', 'l', 'e', 'N', 'a', 'm', 'e']) = true := by
    simpa using h
  simp [renderModuleWithEnv, moduleAttr, moduleNameBytes, h']

/-- The available-name output coincides with the named marker expression. -/
theorem renderModuleWithEnv_available_marker (env : RenderEnv)
    (opts : OptMap)
    (h : env.moduleAvailable
        (optStrBytes opts "moduleName".toList) = true) :
    renderModuleWithEnv env opts =
      moduleHandoffMarker (moduleNameBytes opts) (moduleAttr opts) := by
  have h' : env.moduleAvailable
      (optStrBytes opts
        ['m', 'o', 'd', 'u', 'l', 'e', 'N', 'a', 'm', 'e']) = true := by
    simpa using h
  simp [renderModuleWithEnv, moduleHandoffMarker, moduleAttr, moduleNameBytes, h']

/-! ## The error branch -/

/-- Unavailable name: the exact "No such module" error block with the raw name. -/
theorem renderModuleWithEnv_unavailable (env : RenderEnv) (opts : OptMap)
    (h : env.moduleAvailable
        (optStrBytes opts "moduleName".toList) = false) :
    renderModuleWithEnv env opts = moduleErrorBlock (moduleNameBytes opts) := by
  have h' : env.moduleAvailable
      (optStrBytes opts
        ['m', 'o', 'd', 'u', 'l', 'e', 'N', 'a', 'm', 'e']) = false := by
    simpa using h
  simp [renderModuleWithEnv, moduleErrorBlock, moduleNameBytes, h']

/-- The fixed template around the raw name, split into the part before and the part after the name splice. -/
def moduleErrorPrefix : List Nat :=
  litBytes "<div class=\"error-block\">[[module <em>"

def moduleErrorSuffix : List Nat :=
  litBytes "</em>]] No such module, please " ++
    litBytes "<a href=\"https://www.wikidot.com/doc:modules\" " ++
    litBytes "target=\"_blank\">check available modules</a> " ++
    litBytes "and fix this page.</div>"

/-- The error block is prefix ++ raw name ++ suffix. -/
theorem moduleErrorBlock_eq (name : List Nat) :
    moduleErrorBlock name = moduleErrorPrefix ++ name ++ moduleErrorSuffix := by
  simp [moduleErrorBlock, moduleErrorPrefix, moduleErrorSuffix]

/-- No rel attribute in the error template. The fixed bytes before and after the name splice contain no occurrence of the three ASCII bytes `rel`; the anchor `<a href="..." target="_blank">` lives entirely in the suffix, so it carries no rel attribute. The only place `rel` could appear in the whole error block is inside the raw name between <em> and </em>, which is authored content, not a template attribute. -/
theorem moduleErrorTemplate_no_rel :
    bytesContainsSub (litBytes "rel") moduleErrorPrefix = false ∧
    bytesContainsSub (litBytes "rel") moduleErrorSuffix = false := by
  set_option maxRecDepth 100000 in
    decide

/-! ## Byte-level injectivity of the marker, and its exact fence -/

/-- The precise fence under which the marker is injective in the name: no byte of the name equals the closing-quote byte 34 (`"`). -/
def NameFenced (name : List Nat) : Prop := ∀ b ∈ name, b ≠ 34

/-- Cancellation lemma: with the name fenced, appending the closing quote and an arbitrary tail is injective in the name. -/
theorem quotedName_append_injective (n₁ : List Nat) :
    ∀ (n₂ t₁ t₂ : List Nat), NameFenced n₁ → NameFenced n₂ →
      n₁ ++ 34 :: t₁ = n₂ ++ 34 :: t₂ → n₁ = n₂ := by
  induction n₁ with
  | nil =>
      intro n₂ t₁ t₂ h₁ h₂ hEq
      cases n₂ with
      | nil => rfl
      | cons b bs =>
          have hc : 34 :: t₁ = b :: (bs ++ 34 :: t₂) := by simpa using hEq
          have hb : b = 34 := by
            have hh := congrArg (fun l : List Nat => l.head?) hc
            simpa using hh.symm
          have hmem : 34 ∈ b :: bs := by simp [hb]
          exact False.elim ((h₂ 34 hmem) rfl)
  | cons a as ih =>
      intro n₂ t₁ t₂ h₁ h₂ hEq
      cases n₂ with
      | nil =>
          have hc : a :: (as ++ 34 :: t₁) = 34 :: t₂ := by simpa using hEq
          have ha : a = 34 := by
            have hh := congrArg (fun l : List Nat => l.head?) hc
            simpa using hh
          have hmem : 34 ∈ a :: as := by simp [ha]
          exact False.elim ((h₁ 34 hmem) rfl)
      | cons b bs =>
          have hc : a :: (as ++ 34 :: t₁) = b :: (bs ++ 34 :: t₂) := by
            simpa using hEq
          have hab : a = b := by
            have hh := congrArg (fun l : List Nat => l.head?) hc
            simpa using hh
          have htail : as ++ 34 :: t₁ = bs ++ 34 :: t₂ := by
            have hh := congrArg List.tail hc
            simpa using hh
          have h₁' : NameFenced as := by
            intro x hx
            exact h₁ x (by simp [hx])
          have h₂' : NameFenced bs := by
            intro x hx
            exact h₂ x (by simp [hx])
          have hasbs : as = bs := ih bs t₁ t₂ h₁' h₂' htail
          cases hab
          simp [hasbs]

/-- The handoff marker is injective in the name on fenced names. Cancel the common prefix moduleMarkerByte ++ litBytes "module \"", then apply the closing-quote cancellation lemma. The fence is essential and is the precise reason the unrestricted statement is only a byte-level contract. -/
theorem moduleHandoffMarker_injective_on_fenced {n₁ n₂ a₁ a₂ : List Nat}
    (h₁ : NameFenced n₁) (h₂ : NameFenced n₂)
    (hEq : moduleHandoffMarker n₁ a₁ = moduleHandoffMarker n₂ a₂) : n₁ = n₂ := by
  unfold moduleHandoffMarker at hEq
  let seg₁ : List Nat := if a₁.isEmpty then [] else [32] ++ urlencodeBytes a₁ ++ [32]
  let seg₂ : List Nat := if a₂.isEmpty then [] else [32] ++ urlencodeBytes a₂ ++ [32]
  have hR : moduleMarkerByte ++ (litBytes "module \"" ++
        (n₁ ++ (litBytes "\"" ++ (seg₁ ++ moduleMarkerByte)))) =
      moduleMarkerByte ++ (litBytes "module \"" ++
        (n₂ ++ (litBytes "\"" ++ (seg₂ ++ moduleMarkerByte)))) := by
    simpa only [List.append_assoc, seg₁, seg₂] using hEq
  have hL1 : litBytes "module \"" ++
        (n₁ ++ (litBytes "\"" ++ (seg₁ ++ moduleMarkerByte))) =
      litBytes "module \"" ++
        (n₂ ++ (litBytes "\"" ++ (seg₂ ++ moduleMarkerByte))) :=
    List.append_cancel_left hR
  have hc : n₁ ++ (litBytes "\"" ++ (seg₁ ++ moduleMarkerByte)) =
      n₂ ++ (litBytes "\"" ++ (seg₂ ++ moduleMarkerByte)) :=
    List.append_cancel_left hL1
  have hq : litBytes "\"" = [34] := by decide
  rw [hq] at hc
  exact quotedName_append_injective n₁ n₂
    (seg₁ ++ moduleMarkerByte) (seg₂ ++ moduleMarkerByte) h₁ h₂ hc

/-! ## Axiom audit -/

#print axioms renderModuleWithEnv_harness
#print axioms renderModuleWithEnv_env_independent
#print axioms renderModuleWithEnv_available
#print axioms renderModuleWithEnv_available_marker
#print axioms renderModuleWithEnv_unavailable
#print axioms moduleErrorBlock_eq
#print axioms moduleErrorTemplate_no_rel
#print axioms quotedName_append_injective
#print axioms moduleHandoffMarker_injective_on_fenced

end LeanFtml
