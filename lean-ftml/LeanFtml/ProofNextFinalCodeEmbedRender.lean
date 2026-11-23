/-
  ProofNextFinalCodeEmbedRender.lean — Wave 2 next-final proof lane, unit U6.
  General kernel-free theorems about the actual R4.7 Code/Embed render entry points in LeanFtml/CodeEmbedRender.lean: dispatchRenderR47, codeBoundaryOf, boundaryNamesIn, renderWithR47 and renderStateR47.
  The theorems below are universal over arbitrary lookups, segment lists, documents, configurations and token tables; they are not duplications of the mirror's ground examples.
  Named remainder (NOT asserted as a theorem): the RenderEnv-parametric equality renderMirror env .code/.embed conf doc opts = renderRefSpec env .code/.embed conf doc opts over ReachableTok. It needs coordinator F3 wiring of the external Text_Highlighter boundary (RenderEnv.highlightCode) and is deliberately left unasserted here.
  Divergence witness: renderWithR47_boundary_after_unmirrored exhibits the documented append-order choice — a boundary name is appended after an unmirrored rule name when both occur (the R4.7 corpora never mix the two, so the order is unobservable there).
  No sorry, no native_decide, no bv_decide; all axioms within [propext, Classical.choice, Quot.sound]. Prose single lines, never hard-wrapped.
-/

import LeanFtml.CodeEmbedRender

set_option maxRecDepth 8192

namespace LeanFtml.NextFinal.CodeEmbedRender

/-! ## Auxiliary list algebra (generic over DecidableEq) -/

theorem aux_nodup_append_singleton {α : Type} [DecidableEq α] (xs : List α) (x : α)
    (h : xs.Nodup) (hx : x ∉ xs) : (xs ++ [x]).Nodup := by
  induction xs with
  | nil => simp
  | cons a rest ih =>
      have hparts := List.nodup_cons.mp h
      have hrest : rest.Nodup := hparts.2
      have ha_notin_rest : a ∉ rest := hparts.1
      have hx_rest : x ∉ rest := fun hxr => hx (List.mem_cons_of_mem a hxr)
      have hax : a ≠ x := by
        intro heq
        apply hx
        simp [heq]
      have ih' := ih hrest hx_rest
      simp only [List.cons_append]
      exact List.nodup_cons.mpr ⟨by
        intro ha_mem
        have hmem : a ∈ rest ∨ a = x := by simpa using ha_mem
        rcases hmem with hmem | heq
        · exact ha_notin_rest hmem
        · exact hax heq
      , ih'⟩
#print axioms aux_nodup_append_singleton

theorem aux_pushUnique_nodup {α : Type} [DecidableEq α] (xs : List α) (x : α)
    (h : xs.Nodup) : (pushUnique xs x).Nodup := by
  by_cases hmem : x ∈ xs
  · simpa [pushUnique, hmem] using h
  · simpa [pushUnique, hmem] using (aux_nodup_append_singleton xs x h hmem)
#print axioms aux_pushUnique_nodup

theorem aux_pushUnique_mem {α : Type} [DecidableEq α] (xs : List α) (x : α) :
    x ∈ pushUnique xs x := by
  by_cases hmem : x ∈ xs
  · simp [pushUnique, hmem]
  · simp [pushUnique, hmem]
#print axioms aux_pushUnique_mem

theorem aux_foldl_pushUnique_mem {α : Type} [DecidableEq α] (xs : List α) (acc : List α) {n : α}
    (h : n ∈ xs.foldl pushUnique acc) : n ∈ xs ∨ n ∈ acc := by
  induction xs generalizing acc with
  | nil => exact Or.inr h
  | cons x rest ih =>
      change n ∈ rest.foldl pushUnique (pushUnique acc x) at h
      rcases ih (pushUnique acc x) h with hmem | hmem
      · exact Or.inl (List.mem_cons_of_mem x hmem)
      · by_cases hxa : x ∈ acc
        · have hmem' : n ∈ acc := by simpa [pushUnique, hxa] using hmem
          exact Or.inr hmem'
        · have hmem' : n ∈ acc ∨ n = x := by simpa [pushUnique, hxa] using hmem
          rcases hmem' with hmem' | rfl
          · exact Or.inr hmem'
          · simp
#print axioms aux_foldl_pushUnique_mem

theorem aux_mem_foldl_pushUnique_acc {α : Type} [DecidableEq α] (xs : List α) (acc : List α) {n : α}
    (h : n ∈ acc) : n ∈ xs.foldl pushUnique acc := by
  induction xs generalizing acc with
  | nil => exact h
  | cons x rest ih =>
      change n ∈ rest.foldl pushUnique (pushUnique acc x)
      apply ih
      by_cases hxa : x ∈ acc
      · simpa [pushUnique, hxa] using h
      · have : n ∈ acc ∨ n = x := Or.inl h
        simpa [pushUnique, hxa] using this
#print axioms aux_mem_foldl_pushUnique_acc

theorem aux_mem_foldl_pushUnique {α : Type} [DecidableEq α] (xs : List α) (acc : List α) {n : α}
    (h : n ∈ xs) : n ∈ xs.foldl pushUnique acc := by
  induction xs generalizing acc with
  | nil => cases h
  | cons x rest ih =>
      change n ∈ rest.foldl pushUnique (pushUnique acc x)
      simp only [List.mem_cons] at h
      rcases h with hnx | hrest
      · have hn : n ∈ pushUnique acc x := by
          rw [hnx]
          exact aux_pushUnique_mem acc x
        exact aux_mem_foldl_pushUnique_acc rest (pushUnique acc x) hn
      · exact ih (pushUnique acc x) hrest
#print axioms aux_mem_foldl_pushUnique

theorem aux_foldl_pushUnique_nodup {α : Type} [DecidableEq α] (xs : List α) (acc : List α)
    (hacc : acc.Nodup) : (xs.foldl pushUnique acc).Nodup := by
  induction xs generalizing acc with
  | nil => exact hacc
  | cons x rest ih =>
      change (rest.foldl pushUnique (pushUnique acc x)).Nodup
      exact ih (pushUnique acc x) (aux_pushUnique_nodup acc x hacc)
#print axioms aux_foldl_pushUnique_nodup

/-! ## Accumulator form and dedup / order / subset laws for boundaryNamesIn -/

def boundaryNamesInFrom (lookup : Nat → Option TokenEntry) (acc : List String)
    (work : List TSeg) : List String :=
  work.foldl (fun acc seg =>
    match seg with
    | .tok k =>
        match lookup k with
        | some e =>
            match codeBoundaryOf e with
            | some n => pushUnique acc n
            | none => acc
        | none => acc
    | .text _ => acc) acc

theorem boundaryNamesIn_eq_from (lookup : Nat → Option TokenEntry) (work : List TSeg) :
    boundaryNamesIn lookup work = boundaryNamesInFrom lookup [] work := by
  rfl
#print axioms boundaryNamesIn_eq_from

theorem boundaryNamesInFrom_nil (lookup : Nat → Option TokenEntry) (acc : List String) :
    boundaryNamesInFrom lookup acc [] = acc := rfl
#print axioms boundaryNamesInFrom_nil

theorem boundaryNamesInFrom_cons (lookup : Nat → Option TokenEntry) (acc : List String)
    (seg : TSeg) (rest : List TSeg) :
    boundaryNamesInFrom lookup acc (seg :: rest) =
      boundaryNamesInFrom lookup (match seg with
        | .tok k => match lookup k with
            | some e => match codeBoundaryOf e with
                | some n => pushUnique acc n
                | none => acc
            | none => acc
        | .text _ => acc) rest := rfl
#print axioms boundaryNamesInFrom_cons

theorem boundaryNamesInFrom_append (lookup : Nat → Option TokenEntry) (acc : List String)
    (w₁ w₂ : List TSeg) :
    boundaryNamesInFrom lookup acc (w₁ ++ w₂) =
      boundaryNamesInFrom lookup (boundaryNamesInFrom lookup acc w₁) w₂ := by
  unfold boundaryNamesInFrom
  rw [List.foldl_append]
#print axioms boundaryNamesInFrom_append

theorem boundaryNamesInFrom_nodup (lookup : Nat → Option TokenEntry) (acc : List String)
    (work : List TSeg) (hacc : acc.Nodup) :
    (boundaryNamesInFrom lookup acc work).Nodup := by
  induction work generalizing acc with
  | nil => exact hacc
  | cons seg rest ih =>
      cases seg with
      | text cs =>
          simpa [boundaryNamesInFrom] using (ih acc hacc)
      | tok k =>
          cases hlk : lookup k with
          | none =>
              simpa [boundaryNamesInFrom, hlk] using (ih acc hacc)
          | some e =>
              cases hb : codeBoundaryOf e with
              | none =>
                  simpa [boundaryNamesInFrom, hlk, hb] using (ih acc hacc)
              | some n =>
                  simpa [boundaryNamesInFrom, hlk, hb] using
                    (ih (pushUnique acc n) (aux_pushUnique_nodup acc n hacc))
#print axioms boundaryNamesInFrom_nodup

theorem boundaryNamesIn_nodup (lookup : Nat → Option TokenEntry) (work : List TSeg) :
    (boundaryNamesIn lookup work).Nodup := by
  rw [boundaryNamesIn_eq_from]
  exact boundaryNamesInFrom_nodup lookup [] work (by simp)
#print axioms boundaryNamesIn_nodup

theorem boundaryNamesIn_nil (lookup : Nat → Option TokenEntry) :
    boundaryNamesIn lookup [] = [] := rfl
#print axioms boundaryNamesIn_nil

theorem boundaryNamesIn_text (lookup : Nat → Option TokenEntry) (cs : List Char)
    (rest : List TSeg) :
    boundaryNamesIn lookup (TSeg.text cs :: rest) = boundaryNamesIn lookup rest := rfl
#print axioms boundaryNamesIn_text

def contributedNames (lookup : Nat → Option TokenEntry) : List TSeg → List String
  | [] => []
  | .text _ :: rest => contributedNames lookup rest
  | .tok k :: rest =>
      match lookup k with
      | some e =>
          match codeBoundaryOf e with
          | some n => n :: contributedNames lookup rest
          | none => contributedNames lookup rest
      | none => contributedNames lookup rest

theorem boundaryNamesInFrom_eq_contributions (lookup : Nat → Option TokenEntry)
    (acc : List String) (work : List TSeg) :
    boundaryNamesInFrom lookup acc work =
      (contributedNames lookup work).foldl pushUnique acc := by
  induction work generalizing acc with
  | nil => rfl
  | cons seg rest ih =>
      cases seg with
      | text cs =>
          simpa [boundaryNamesInFrom, contributedNames] using (ih acc)
      | tok k =>
          cases hlk : lookup k with
          | none =>
              simpa [boundaryNamesInFrom, contributedNames, hlk] using (ih acc)
          | some e =>
              cases hb : codeBoundaryOf e with
              | none =>
                  simpa [boundaryNamesInFrom, contributedNames, hlk, hb] using (ih acc)
              | some n =>
                  simpa [boundaryNamesInFrom, contributedNames, hlk, hb] using
                    (ih (pushUnique acc n))
#print axioms boundaryNamesInFrom_eq_contributions

theorem boundaryNamesIn_eq_contributions (lookup : Nat → Option TokenEntry) (work : List TSeg) :
    boundaryNamesIn lookup work = (contributedNames lookup work).foldl pushUnique [] := by
  rw [boundaryNamesIn_eq_from]
  exact boundaryNamesInFrom_eq_contributions lookup [] work
#print axioms boundaryNamesIn_eq_contributions

theorem boundaryNamesIn_mem_contributed (lookup : Nat → Option TokenEntry) (work : List TSeg) {n : String}
    (h : n ∈ boundaryNamesIn lookup work) : n ∈ contributedNames lookup work := by
  rw [boundaryNamesIn_eq_contributions] at h
  rcases aux_foldl_pushUnique_mem (contributedNames lookup work) [] h with hmem | hempty
  · exact hmem
  · simp at hempty
#print axioms boundaryNamesIn_mem_contributed

theorem contributed_mem_boundaryNamesIn (lookup : Nat → Option TokenEntry) (work : List TSeg) {n : String}
    (h : n ∈ contributedNames lookup work) : n ∈ boundaryNamesIn lookup work := by
  rw [boundaryNamesIn_eq_contributions]
  exact aux_mem_foldl_pushUnique (contributedNames lookup work) [] h
#print axioms contributed_mem_boundaryNamesIn

theorem boundaryNamesIn_mem_iff_contributed (lookup : Nat → Option TokenEntry) (work : List TSeg) (n : String) :
    n ∈ boundaryNamesIn lookup work ↔ n ∈ contributedNames lookup work :=
  ⟨boundaryNamesIn_mem_contributed lookup work, contributed_mem_boundaryNamesIn lookup work⟩
#print axioms boundaryNamesIn_mem_iff_contributed

theorem contributedNames_lookup_ext (lookup₁ lookup₂ : Nat → Option TokenEntry) (work : List TSeg)
    (hagree : ∀ k, TSeg.tok k ∈ work → lookup₁ k = lookup₂ k) :
    contributedNames lookup₁ work = contributedNames lookup₂ work := by
  revert hagree
  induction work with
  | nil => intro _; rfl
  | cons seg rest ih =>
      intro hagree
      cases seg with
      | text cs =>
          simpa [contributedNames] using
            (ih (fun k hk => hagree k (List.mem_cons_of_mem _ hk)))
      | tok k =>
          have hk : lookup₁ k = lookup₂ k := hagree k (List.mem_cons_self ..)
          have hrest := ih (fun j hj => hagree j (List.mem_cons_of_mem _ hj))
          cases h₁ : lookup₁ k with
          | none =>
              have h₂ : lookup₂ k = none := by simpa [h₁] using hk.symm
              simpa [contributedNames, h₁, h₂] using hrest
          | some e =>
              have h₂ : lookup₂ k = some e := by simpa [h₁] using hk.symm
              cases hb : codeBoundaryOf e with
              | none =>
                  simpa [contributedNames, h₁, h₂, hb] using hrest
              | some n =>
                  simpa [contributedNames, h₁, h₂, hb] using hrest
#print axioms contributedNames_lookup_ext

/-! ## Dispatcher agreement and renderWithR47 structure -/

theorem dispatchRenderR47_eq_dispatchRenderR41 :
    dispatchRenderR47 = dispatchRenderR41 := rfl
#print axioms dispatchRenderR47_eq_dispatchRenderR41

theorem dispatchRenderR47_apply (r : RenderRuleId) (conf : RenderConf) (doc : DocState) (opts : OptMap) :
    dispatchRenderR47 r conf doc opts = dispatchRenderR41 r conf doc opts := rfl
#print axioms dispatchRenderR47_apply

theorem renderWithR47_output (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    (renderWithR47 lookup conf work doc).output =
      (renderWith dispatchRenderR47 lookup conf work doc).output := rfl
#print axioms renderWithR47_output

theorem renderWithR47_missingKeys (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    (renderWithR47 lookup conf work doc).missingKeys =
      (renderWith dispatchRenderR47 lookup conf work doc).missingKeys := rfl
#print axioms renderWithR47_missingKeys

theorem renderWithR47_unmirrored (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    (renderWithR47 lookup conf work doc).unmirrored =
      (boundaryNamesIn lookup work).foldl pushUnique
        (renderWith dispatchRenderR47 lookup conf work doc).unmirrored := rfl
#print axioms renderWithR47_unmirrored

theorem renderWithR47_eq_base (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState) :
    renderWithR47 lookup conf work doc =
      let base := renderWith dispatchRenderR41 lookup conf work doc
      { base with unmirrored := (boundaryNamesIn lookup work).foldl pushUnique base.unmirrored } := by
  rfl
#print axioms renderWithR47_eq_base

theorem boundary_foldl_nodup (names base : List String) (hbase : base.Nodup) :
    (names.foldl pushUnique base).Nodup :=
  aux_foldl_pushUnique_nodup names base hbase
#print axioms boundary_foldl_nodup

theorem renderWithR47_unmirrored_nodup (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState)
    (hbase : (renderWith dispatchRenderR47 lookup conf work doc).unmirrored.Nodup) :
    (renderWithR47 lookup conf work doc).unmirrored.Nodup := by
  rw [renderWithR47_unmirrored]
  exact boundary_foldl_nodup (boundaryNamesIn lookup work) _ hbase
#print axioms renderWithR47_unmirrored_nodup

theorem renderWithR47_no_contributions (lookup : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState)
    (h : contributedNames lookup work = []) :
    renderWithR47 lookup conf work doc = renderWith dispatchRenderR47 lookup conf work doc := by
  unfold renderWithR47
  rw [boundaryNamesIn_eq_contributions, h]
  cases hbase : renderWith dispatchRenderR47 lookup conf work doc
  rfl
#print axioms renderWithR47_no_contributions

/-! ## Determinism / lookup-extensionality over arbitrary arguments -/

theorem renderWithR47_lookup_ext (lookup₁ lookup₂ : Nat → Option TokenEntry) (conf : RenderConf)
    (work : List TSeg) (doc : DocState)
    (hagree : ∀ k, TSeg.tok k ∈ work → lookup₁ k = lookup₂ k) :
    renderWithR47 lookup₁ conf work doc = renderWithR47 lookup₂ conf work doc := by
  have hbase : renderWith dispatchRenderR47 lookup₁ conf work doc =
      renderWith dispatchRenderR47 lookup₂ conf work doc :=
    renderWith_lookup_ext dispatchRenderR47 lookup₁ lookup₂ conf doc work hagree
  have hcontr : contributedNames lookup₁ work = contributedNames lookup₂ work :=
    contributedNames_lookup_ext lookup₁ lookup₂ work hagree
  have hnames : boundaryNamesIn lookup₁ work = boundaryNamesIn lookup₂ work := by
    rw [boundaryNamesIn_eq_contributions, boundaryNamesIn_eq_contributions, hcontr]
  simp [renderWithR47, hbase, hnames]
#print axioms renderWithR47_lookup_ext

theorem renderStateR47_eq_renderWithR47 (conf : RenderConf) (st : ParseState) :
    renderStateR47 conf st = renderWithR47 (fun k => st.tokens[k]?) conf st.work st.doc := by
  rfl
#print axioms renderStateR47_eq_renderWithR47

theorem renderStateR47_lookup_ext (conf : RenderConf) (st₁ st₂ : ParseState)
    (hwork : st₁.work = st₂.work) (hdoc : st₁.doc = st₂.doc)
    (hlookup : (fun k : Nat => st₁.tokens[k]?) = (fun k : Nat => st₂.tokens[k]?)) :
    renderStateR47 conf st₁ = renderStateR47 conf st₂ := by
  unfold renderStateR47
  rw [hwork, hdoc, hlookup]
#print axioms renderStateR47_lookup_ext

/-! ## codeBoundaryOf dependence only on the fields it reads -/

theorem codeBoundaryOf_of_rule_ne (entry : TokenEntry) (h : entry.rule ≠ "Code") :
    codeBoundaryOf entry = none := by
  unfold codeBoundaryOf
  have hbeq : (entry.rule == "Code") = false := beq_false_of_ne h
  simp [hbeq]
#print axioms codeBoundaryOf_of_rule_ne

theorem codeBoundaryOf_of_rule_eq (entry : TokenEntry) (h : entry.rule = "Code") :
    codeBoundaryOf entry = codeBoundaryName entry.opts := by
  unfold codeBoundaryOf
  have hbeq : (entry.rule == "Code") = true := by rw [h]; rfl
  simp [hbeq]
#print axioms codeBoundaryOf_of_rule_eq

theorem codeBoundaryOf_eq_of_codeType_eq (e₁ e₂ : TokenEntry)
    (hrule : e₁.rule = e₂.rule) (hty : codeType e₁.opts = codeType e₂.opts) :
    codeBoundaryOf e₁ = codeBoundaryOf e₂ := by
  simp [codeBoundaryOf, codeBoundaryName, hrule, hty]
#print axioms codeBoundaryOf_eq_of_codeType_eq

theorem codeBoundaryOf_eq_of_codeAttrType_eq (e₁ e₂ : TokenEntry)
    (hrule : e₁.rule = e₂.rule) (hattr : codeAttrType e₁.opts = codeAttrType e₂.opts) :
    codeBoundaryOf e₁ = codeBoundaryOf e₂ := by
  apply codeBoundaryOf_eq_of_codeType_eq e₁ e₂ hrule
  simp [codeType, hattr]
#print axioms codeBoundaryOf_eq_of_codeAttrType_eq

theorem codeBoundaryOf_other_opts_irrelevant (entry : TokenEntry) (opts' : OptMap)
    (hattr : codeAttrType opts' = codeAttrType entry.opts) :
    codeBoundaryOf { entry with opts := opts' } = codeBoundaryOf entry := by
  apply codeBoundaryOf_eq_of_codeType_eq
  · rfl
  · simp [codeType, hattr]
#print axioms codeBoundaryOf_other_opts_irrelevant

/-! ## Concrete divergence / order witnesses (not duplicating the mirror's examples) -/

def codeTok (ty : String) : TokenEntry :=
  { rule := "Code", opts := [("text".toList, .str "x".toList),
      ("attr".toList, .map [("type".toList, .str ty.toList)])] }

theorem boundaryNamesIn_repeated_codes :
    boundaryNamesIn (fun k => [codeTok "python", codeTok "ruby", codeTok "python"][k]?)
      [TSeg.tok 0, TSeg.tok 1, TSeg.tok 2] =
      ["Text_Highlighter:python", "Text_Highlighter:ruby"] := by
  rfl
#print axioms boundaryNamesIn_repeated_codes

theorem renderWithR47_boundary_after_unmirrored :
    (renderStateR47 {}
      { work := [TSeg.tok 0, TSeg.tok 1],
        tokens := [codeTok "python", { rule := "Bogus", opts := [] }],
        doc := {} }).unmirrored =
      ["Bogus", "Text_Highlighter:python"] := by
  rfl
#print axioms renderWithR47_boundary_after_unmirrored

#print axioms LeanFtml.NextFinal.CodeEmbedRender.aux_foldl_pushUnique_mem
#print axioms LeanFtml.NextFinal.CodeEmbedRender.aux_foldl_pushUnique_nodup
#print axioms LeanFtml.NextFinal.CodeEmbedRender.aux_mem_foldl_pushUnique
#print axioms LeanFtml.NextFinal.CodeEmbedRender.aux_mem_foldl_pushUnique_acc
#print axioms LeanFtml.NextFinal.CodeEmbedRender.aux_nodup_append_singleton
#print axioms LeanFtml.NextFinal.CodeEmbedRender.aux_pushUnique_mem
#print axioms LeanFtml.NextFinal.CodeEmbedRender.aux_pushUnique_nodup
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesInFrom_append
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesInFrom_cons
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesInFrom_eq_contributions
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesInFrom_nil
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesInFrom_nodup
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesIn_eq_contributions
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesIn_eq_from
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesIn_mem_contributed
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesIn_mem_iff_contributed
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesIn_nil
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesIn_nodup
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesIn_repeated_codes
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundaryNamesIn_text
#print axioms LeanFtml.NextFinal.CodeEmbedRender.boundary_foldl_nodup
#print axioms LeanFtml.NextFinal.CodeEmbedRender.codeBoundaryOf_eq_of_codeAttrType_eq
#print axioms LeanFtml.NextFinal.CodeEmbedRender.codeBoundaryOf_eq_of_codeType_eq
#print axioms LeanFtml.NextFinal.CodeEmbedRender.codeBoundaryOf_of_rule_eq
#print axioms LeanFtml.NextFinal.CodeEmbedRender.codeBoundaryOf_of_rule_ne
#print axioms LeanFtml.NextFinal.CodeEmbedRender.codeBoundaryOf_other_opts_irrelevant
#print axioms LeanFtml.NextFinal.CodeEmbedRender.contributedNames_lookup_ext
#print axioms LeanFtml.NextFinal.CodeEmbedRender.contributed_mem_boundaryNamesIn
#print axioms LeanFtml.NextFinal.CodeEmbedRender.dispatchRenderR47_apply
#print axioms LeanFtml.NextFinal.CodeEmbedRender.dispatchRenderR47_eq_dispatchRenderR41
#print axioms LeanFtml.NextFinal.CodeEmbedRender.renderStateR47_eq_renderWithR47
#print axioms LeanFtml.NextFinal.CodeEmbedRender.renderStateR47_lookup_ext
#print axioms LeanFtml.NextFinal.CodeEmbedRender.renderWithR47_boundary_after_unmirrored
#print axioms LeanFtml.NextFinal.CodeEmbedRender.renderWithR47_eq_base
#print axioms LeanFtml.NextFinal.CodeEmbedRender.renderWithR47_lookup_ext
#print axioms LeanFtml.NextFinal.CodeEmbedRender.renderWithR47_missingKeys
#print axioms LeanFtml.NextFinal.CodeEmbedRender.renderWithR47_no_contributions
#print axioms LeanFtml.NextFinal.CodeEmbedRender.renderWithR47_output
#print axioms LeanFtml.NextFinal.CodeEmbedRender.renderWithR47_unmirrored
#print axioms LeanFtml.NextFinal.CodeEmbedRender.renderWithR47_unmirrored_nodup
end LeanFtml.NextFinal.CodeEmbedRender
