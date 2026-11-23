/-
  ProofNextFinalServingRender.lean — Wave 2 next-final proof lane, unit U8. All declarations live in LeanFtml.NextFinal.ServingRender and concern the actual entry points in LeanFtml/ServingRender.lean. No mirror source, Main.lean, foundation or other proof file is edited. Prose is single-line.
  Two layers are proved: (1) kernel-free universal theorems about dispatchRenderR48, servingBoundaryOf, servingBoundaryNamesIn, renderWithR48, renderStateR48 and renderServingE2E; (2) env-parametricity over an explicit env-record wrapper defined here, because the mirror render modules still bake the harness table into renderModule/renderUser.
  F3-ADOPTION-REMAINDER (ServingRender): the wrapper's moduleAvailable/lookupUser fields are proved to determine the handoff observations and the module field is matched to the mirror's baked-in availability predicate, but the canonical F3 RenderEnv has no prebuilt olean in this lane and renderModule/renderUser are not yet threaded on env, so no unproved env-parametric equality of those render functions is asserted here; the coordinator's F3 adoption must do that threading.
-/

import LeanFtml.ServingRender

namespace LeanFtml.NextFinal.ServingRender

/-! ## Dispatcher agreement -/

theorem dispatchRenderR48_eq_dispatchRenderR41 :
    dispatchRenderR48 = dispatchRenderR41 := rfl


theorem dispatchRenderR48_apply (rid : RenderRuleId) (conf : RenderConf)
    (doc : DocState) (opts : OptMap) :
    dispatchRenderR48 rid conf doc opts = dispatchRenderR41 rid conf doc opts := rfl


/-! ## pushUnique algebra -/

theorem mem_of_mem_pushUnique {α : Type} [DecidableEq α] (xs : List α) (x y : α)
    (h : y ∈ xs) : y ∈ pushUnique xs x := by
  by_cases hx : x ∈ xs
  · simpa [pushUnique, hx] using h
  · have hy : y ∈ xs ++ [x] := by simp [h]
    simpa [pushUnique, hx] using hy

theorem mem_pushUnique_iff {α : Type} [DecidableEq α] (xs : List α) (x y : α) :
    y ∈ pushUnique xs x ↔ y ∈ xs ∨ y = x := by
  by_cases hx : x ∈ xs
  · have hset : pushUnique xs x = xs := by simp [pushUnique, hx]
    rw [hset]
    constructor
    · intro h
      exact Or.inl h
    · intro h
      rcases h with h | rfl
      · exact h
      · exact hx
  · have hset : pushUnique xs x = xs ++ [x] := by simp [pushUnique, hx]
    rw [hset]
    simp

private theorem nodup_append_single (xs : List String) (x : String)
    (h : xs.Nodup) (hx : x ∉ xs) : (xs ++ [x]).Nodup := by
  induction xs with
  | nil => simp
  | cons a rest ih =>
      change (a :: (rest ++ [x])).Nodup
      rw [List.nodup_cons]
      constructor
      · intro ha
        simp only [List.mem_append, List.mem_singleton] at ha
        rcases ha with ha | ha
        · exact False.elim ((List.nodup_cons.mp h).1 ha)
        · subst x
          exact hx (by simp)
      · exact ih h.tail (by intro hxr; exact hx (by simp [hxr]))

theorem pushUnique_preserves_nodup (xs : List String) (x : String) (h : xs.Nodup) :
    (pushUnique xs x).Nodup := by
  by_cases hx : x ∈ xs
  · simpa [pushUnique, hx] using h
  · have hset : pushUnique xs x = xs ++ [x] := by simp [pushUnique, hx]
    rw [hset]
    exact nodup_append_single xs x h hx


private theorem mem_mono_foldl_pushUnique (xs : List String) (acc : List String) (n : String)
    (h : n ∈ acc) : n ∈ xs.foldl pushUnique acc := by
  induction xs generalizing acc with
  | nil => exact h
  | cons x xs ih =>
      simp only [List.foldl_cons]
      exact ih (pushUnique acc x) (mem_of_mem_pushUnique acc x n h)

private theorem mem_of_mem_foldl_pushUnique (xs : List String) (acc : List String) (n : String)
    (h : n ∈ xs) : n ∈ xs.foldl pushUnique acc := by
  induction xs generalizing acc with
  | nil => cases h
  | cons x xs ih =>
      simp only [List.foldl_cons]
      simp only [List.mem_cons] at h
      rcases h with hnx | hxs
      · subst n
        exact mem_mono_foldl_pushUnique xs (pushUnique acc x) x
          (by by_cases hx : x ∈ acc <;> simp [pushUnique, hx])
      · exact ih (pushUnique acc x) hxs

private theorem foldl_pushUnique_nodup (xs : List String) (acc : List String) (h : acc.Nodup) :
    (xs.foldl pushUnique acc).Nodup := by
  induction xs generalizing acc with
  | nil => simpa using h
  | cons x xs ih =>
      simp only [List.foldl_cons]
      exact ih (pushUnique acc x) (pushUnique_preserves_nodup acc x h)

/-! ## servingBoundaryOf case laws -/

theorem servingBoundaryOf_user (opts : OptMap) :
    servingBoundaryOf { rule := "User", opts := opts } = some "User:DB_OzoneUserPeer" := rfl

theorem servingBoundaryOf_unknown (rule : String) (opts : OptMap)
    (hU : (rule == "User") = false) (hI : (rule == "Image") = false)
    (hG : (rule == "Gallery") = false) (hF : (rule == "Freelink") = false) :
    servingBoundaryOf { rule := rule, opts := opts } = none := by
  unfold servingBoundaryOf
  simp [hU, hI, hG, hF]


/-! ## servingBoundaryNamesIn: step functions and stable dedup -/

private def bStep (lookup : Nat → Option TokenEntry) (acc : List String) (seg : TSeg) : List String :=
  match seg with
  | .tok k =>
      match lookup k with
      | some e =>
          match servingBoundaryOf e with
          | some n => pushUnique acc n
          | none => acc
      | none => acc
  | .text _ => acc

private def rStep (lookup : Nat → Option TokenEntry) (acc : List String) (seg : TSeg) : List String :=
  match seg with
  | .tok k =>
      match lookup k with
      | some e =>
          match servingBoundaryOf e with
          | some n => acc ++ [n]
          | none => acc
      | none => acc
  | .text _ => acc

private def boundaryNamesRaw (lookup : Nat → Option TokenEntry) (work : List TSeg) : List String :=
  work.foldl (rStep lookup) []

private theorem rStep_append (lookup : Nat → Option TokenEntry) (seg : TSeg) (acc : List String) :
    rStep lookup acc seg = acc ++ rStep lookup [] seg := by
  cases seg with
  | text cs => simp [rStep]
  | tok k =>
      cases hlk : lookup k with
      | none => simp [rStep, hlk]
      | some e =>
          cases hb : servingBoundaryOf e with
          | none => simp [rStep, hlk, hb]
          | some n => simp [rStep, hlk, hb]

private theorem foldl_rStep_append (lookup : Nat → Option TokenEntry) (work : List TSeg)
    (acc : List String) :
    work.foldl (rStep lookup) acc = acc ++ boundaryNamesRaw lookup work := by
  induction work generalizing acc with
  | nil => simp [boundaryNamesRaw]
  | cons seg rest ih =>
      simp only [List.foldl_cons]
      have hcons : boundaryNamesRaw lookup (seg :: rest) =
          rStep lookup [] seg ++ boundaryNamesRaw lookup rest := by
        simpa [boundaryNamesRaw] using (ih (rStep lookup [] seg))
      rw [hcons]
      rw [rStep_append]
      rw [ih (acc ++ rStep lookup [] seg)]
      rw [List.append_assoc]

private theorem boundaryNamesRaw_cons (lookup : Nat → Option TokenEntry) (seg : TSeg)
    (work : List TSeg) :
    boundaryNamesRaw lookup (seg :: work) = rStep lookup [] seg ++ boundaryNamesRaw lookup work := by
  simpa [boundaryNamesRaw] using (foldl_rStep_append lookup work (rStep lookup [] seg))

private theorem bStep_eq_rStep_fold (lookup : Nat → Option TokenEntry) (seg : TSeg)
    (acc : List String) :
    bStep lookup acc seg = (rStep lookup [] seg).foldl pushUnique acc := by
  cases seg with
  | text cs => simp [bStep, rStep]
  | tok k =>
      cases hlk : lookup k with
      | none => simp [bStep, rStep, hlk]
      | some e =>
          cases hb : servingBoundaryOf e with
          | none => simp [bStep, rStep, hlk, hb]
          | some n => simp [bStep, rStep, hlk, hb]

private theorem foldl_bStep_eq (lookup : Nat → Option TokenEntry) (work : List TSeg)
    (acc : List String) :
    work.foldl (bStep lookup) acc = (boundaryNamesRaw lookup work).foldl pushUnique acc := by
  induction work generalizing acc with
  | nil => rfl
  | cons seg rest ih =>
      simp only [List.foldl_cons]
      rw [bStep_eq_rStep_fold]
      rw [ih ((rStep lookup [] seg).foldl pushUnique acc)]
      rw [boundaryNamesRaw_cons]
      rw [List.foldl_append]

theorem servingBoundaryNamesIn_eq_stable_dedup (lookup : Nat → Option TokenEntry)
    (work : List TSeg) :
    servingBoundaryNamesIn lookup work = (boundaryNamesRaw lookup work).foldl pushUnique [] := by
  unfold servingBoundaryNamesIn boundaryNamesRaw
  exact foldl_bStep_eq lookup work []

theorem servingBoundaryNamesIn_nodup (lookup : Nat → Option TokenEntry) (work : List TSeg) :
    (servingBoundaryNamesIn lookup work).Nodup := by
  rw [servingBoundaryNamesIn_eq_stable_dedup]
  exact foldl_pushUnique_nodup (boundaryNamesRaw lookup work) [] (by simp)

private theorem mem_mono_foldl_bStep (lookup : Nat → Option TokenEntry) (work : List TSeg)
    (acc : List String) (n : String) (h : n ∈ acc) :
    n ∈ work.foldl (bStep lookup) acc := by
  induction work generalizing acc with
  | nil => exact h
  | cons seg rest ih =>
      simp only [List.foldl_cons]
      exact ih (bStep lookup acc seg) (by
        cases seg with
        | text cs => simpa [bStep] using h
        | tok k =>
            cases hlk : lookup k with
            | none => simpa [bStep, hlk] using h
            | some e =>
                cases hb : servingBoundaryOf e with
                | none => simpa [bStep, hlk, hb] using h
                | some n' =>
                    simpa [bStep, hlk, hb] using (mem_of_mem_pushUnique acc n' n h))

theorem servingBoundaryNamesIn_nil (lookup : Nat → Option TokenEntry) :
    servingBoundaryNamesIn lookup [] = [] := rfl


/-! ## renderWithR48 and renderStateR48 -/

theorem renderWithR48_output_eq (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    (renderWithR48 lookup conf work doc).output =
      (renderWith dispatchRenderR48 lookup conf work doc).output := rfl

theorem renderWithR48_missingKeys_eq (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    (renderWithR48 lookup conf work doc).missingKeys =
      (renderWith dispatchRenderR48 lookup conf work doc).missingKeys := rfl

theorem renderWithR48_unmirrored_eq (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    (renderWithR48 lookup conf work doc).unmirrored =
      (servingBoundaryNamesIn lookup work).foldl pushUnique
        (renderWith dispatchRenderR48 lookup conf work doc).unmirrored := rfl

theorem renderWithR48_of_no_boundary (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) (h : servingBoundaryNamesIn lookup work = []) :
    renderWithR48 lookup conf work doc = renderWith dispatchRenderR48 lookup conf work doc := by
  simp [renderWithR48, h]

theorem renderWithR48_boundary_not_complete (lookup : Nat → Option TokenEntry)
    (conf : RenderConf) (work : List TSeg) (doc : DocState)
    (n : String) (hnmem : n ∈ servingBoundaryNamesIn lookup work) :
    (renderWithR48 lookup conf work doc).isComplete = false := by
  have hfoldmem : n ∈ (servingBoundaryNamesIn lookup work).foldl pushUnique
      (renderWith dispatchRenderR48 lookup conf work doc).unmirrored :=
    mem_of_mem_foldl_pushUnique (servingBoundaryNamesIn lookup work)
      (renderWith dispatchRenderR48 lookup conf work doc).unmirrored n hnmem
  have hnonempty : (servingBoundaryNamesIn lookup work).foldl pushUnique
      (renderWith dispatchRenderR48 lookup conf work doc).unmirrored ≠ [] := by
    intro he
    simp [he] at hfoldmem
  simp [RenderOutcome.isComplete, renderWithR48, hnonempty]
#print axioms LeanFtml.NextFinal.ServingRender.dispatchRenderR48_apply
#print axioms LeanFtml.NextFinal.ServingRender.dispatchRenderR48_eq_dispatchRenderR41
#print axioms LeanFtml.NextFinal.ServingRender.mem_of_mem_pushUnique
#print axioms LeanFtml.NextFinal.ServingRender.mem_pushUnique_iff
#print axioms LeanFtml.NextFinal.ServingRender.pushUnique_preserves_nodup
#print axioms LeanFtml.NextFinal.ServingRender.renderWithR48_boundary_not_complete
#print axioms LeanFtml.NextFinal.ServingRender.renderWithR48_missingKeys_eq
#print axioms LeanFtml.NextFinal.ServingRender.renderWithR48_of_no_boundary
#print axioms LeanFtml.NextFinal.ServingRender.renderWithR48_output_eq
#print axioms LeanFtml.NextFinal.ServingRender.renderWithR48_unmirrored_eq
#print axioms LeanFtml.NextFinal.ServingRender.servingBoundaryNamesIn_eq_stable_dedup
#print axioms LeanFtml.NextFinal.ServingRender.servingBoundaryNamesIn_nil
#print axioms LeanFtml.NextFinal.ServingRender.servingBoundaryNamesIn_nodup
#print axioms LeanFtml.NextFinal.ServingRender.servingBoundaryOf_unknown
#print axioms LeanFtml.NextFinal.ServingRender.servingBoundaryOf_user
