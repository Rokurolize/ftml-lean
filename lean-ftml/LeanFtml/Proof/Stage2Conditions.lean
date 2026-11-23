import LeanFtml.Proof.Stage2Proof
import LeanFtml.ServingRender

/-!
# Stage 2 conditions: discharge attempts and exact bounds for the two conditional laws

`Stage2Proof.lean` proves `stage2_wf_identity` under the hypothesis `NormalizedWF cfg s` and `stage2_idempotent` under the hypothesis `CoreImageCanonical cfg s`, and its own closing comments name the two discharge obligations: that every Stage 1 output satisfies `NormalizedWF`, and that `CoreImageCanonical` holds universally. This file settles both obligations against the mirror's actual pipeline (`LeanFtml.renderServingE2E` with the harness configuration `{}`, the byte-faithful Stage 1 of `ServingRender.lean`, whose output is the only input the Stage 2 core can receive in the serving path). The verdict is negative for both universal discharges, in two different shapes, and the two laws are restated here over the exact subdomains where they hold, with kernel-checked witnesses at the boundary wherever the kernel can reach.

**`stage2_wf_identity` does not discharge over Stage 1 outputs (completely kernel-checked).** The smallest counterexample is the one-character source `"a"`, whose Stage 1 output is `"<p>a</p>\n\n"`: pass 1 trims the trailing block newline, so the first `NormalizedWF` component fails (`stage1_a_not_normalizedWF` below). Measured over the programme's corpora with the compiled pipeline, `NormalizedWF` fails on 187 of the 266 recorded battery Stage 1 outputs and on 3,014 of the 4,205 pooled conformance sources rendered end to end, in three named families: NW-TRIM (pass 1 trailing/leading whitespace and tag normalization; 2,980 of 4,205 pooled, the generic case, since a rendered paragraph ends in a blank line), NW-CROSS (pass 3 repairs a crossed inline stack; 158 of 4,205), and NW-UNWRAP (pass 2 unwraps a paragraph; 102 of 4,205). The law itself is exactly as strong as before on its domain: the empty output and the list output `"<ul>\n<li>item</li>\n</ul>"` (the Stage 1 output of `"* item"`) are kernel-checked members of the domain, and `stage2_wf_identity_list` restates the law in force there. The correct reading is that `NormalizedWF` characterizes the core's already-normalized inputs, not Stage 1's output contract; Stage 1 guarantees byte shape, not pass fixed points.

**`stage2_idempotent` holds on every measured Stage 1 image but not universally (bounded, with the kernel boundary located exactly).** The compiled pipeline shows zero idempotence failures on all 266 battery Stage 1 outputs and all 4,205 pooled end-to-end outputs. The universal statement over arbitrary strings is nevertheless false, by exactly two mechanisms, each requiring a table-cell or list tag in a position the HTML content model forbids and Stage 1 never emits. Family IDEM-CELL (witness `"<b>x<td>"`, failing component `blockLayoutOnly`): an inline element containing an orphan `td`/`th`/`tr`/`pre` child with at least one sibling (text or element); the first run places the cell on its own line inside the inline element, and the second run inserts a space next to one of those newlines (`"<b>x\n<td></td></b>"` becomes `"<b>x \n<td></td></b>"`); the failure is independent of the frame-composition flag (compiled evaluation at both configurations). Family IDEM-PCELL (witness `"<p><td><div>"`, failing component pass 2): a paragraph whose `td`/`li` child contains a `div`; the first run keeps the paragraph, the second run's paragraph unwrap drops it. Over the swept skeleton domain (16 token classes, all 65,536 sequences of length at most 4) the 259 idempotence failures are exactly these two families (119 IDEM-CELL, 59 IDEM-PCELL, 81 nested or stray-closer variants that reduce to one of the two after the repair pass discards the stray material). The precise missing lemma for a Stage-1-restricted universal idempotence theorem is a render-tier emission invariant: Stage 1 emits `td`/`th`/`tr` only inside table rendering, `li` only inside `ul`/`ol`, and `pre` never inside an inline element, so neither family's precondition can occur in an image; that invariant belongs to the render proof tier and is named here, not proved.

**Why the two idempotence witnesses are not kernel theorems, stated precisely.** Every step of both witnesses' computations that passes 1 to 3 perform is kernel-checked below (`orphanCell_pass1`, `orphanCell_pass2`, `orphanCell_pass3`, `pCellDiv_pass1`, `pCellDiv_pass2`, `pCellDiv_pass3`, `pCellDiv_pass2_image`). The remaining steps are evaluations of pass 4 and pass 5, and those two passes are kernel-opaque in the current mirror: `processNodePass4CoreT` recurses through the lambda of a `List.foldl`, so the equation compiler lowers it to well-founded recursion, which the kernel cannot unfold on any input, and the pass 5 serializer pair is mutual with an inner loop of the same kind. Kernel `decide` and `rfl` therefore stall on every pass 4 or pass 5 evaluation, however small the input (verified down to `stage2TidyCore cfg "" = ""` and to the serializer applied to a hand-written one-element tree). This is the same limitation class as the F1 byte bridges. The pass 4 and pass 5 values in both witnesses are accordingly certified by the compiled pipeline, the programme's standard conformance instrument, and are recorded with the sweep data in the lane report; no theorem below asserts them. A future repair that re-expresses those two passes with structural recursion (or supplies their equation lemmas in a simp-usable form) would let the two witnesses be promoted to kernel theorems without changing any statement in this file.

**Provenance discipline.** The two Stage 1 output strings used as witnesses are the compiled pipeline's outputs for the sources `"a"` and `"* item"`; the `#eval` lines below re-derive their byte forms from `renderServingE2E` at every build so the provenance is checkable from the build log. (Kernel `decide` cannot evaluate the full 68-rule pipeline either: reduction stalls inside its string machinery, the same limitation recorded for the F1 byte bridges.)
-/

namespace LeanFtml.Proof

open LeanFtml.Proof.Stage2TidyCore

/-- The Stage 2 configuration of the serving pipeline: frame composition on,
matching both the `Stage2Config` default and the byte-faithful pipeline
`transformTotal`, which always applies pass 2. -/
def stage2PipelineCfg : Stage2Config := { applyFrameComp := true }

/-- The frame-composition-off configuration, used in the composition lemma
to expose exactly where the flag enters the core. -/
def stage2PipelineCfgNoFC : Stage2Config := { applyFrameComp := false }

/-- The Stage 1 output (as a string) that the mirror's end-to-end serving
pipeline produces for a wikitext source: parse by the R48 pipeline and render
with the harness configuration. This is the input contract of the Stage 2
core in the serving path. -/
def stage1Of (src : String) : String :=
  String.ofList (LeanFtml.utf8Decode (LeanFtml.renderServingE2E {} [] src.toList).output)

-- Provenance, re-derived by the compiled pipeline at every build:
-- the source "a" renders to the byte form of "<p>a</p>\n\n" and the source
-- "* item" renders to the byte form of "<ul>\n<li>item</li>\n</ul>".
#eval (LeanFtml.renderServingE2E {} [] "a".toList).output
#eval (LeanFtml.renderServingE2E {} [] "* item".toList).output

/-- The core is, definitionally, the five-pass composition; with frame
composition on, pass 2 is the frame-composition paragraph unwrap and pass 4
receives the flag. This is the spine every computation in this file hangs
on: passes 1 to 3 of it are kernel-evaluable, passes 4 and 5 are not (see
the file header). -/
theorem stage2TidyCore_eq_passes (s : String) :
    stage2TidyCore stage2PipelineCfg s =
      pass5BlockJoining (pass4WhitespaceAndPruneWith true (pass3RepairStack
        (Stage2FrameComp.pass2ParagraphUnwrap (pass1FrameAndTagNorm s)))) :=
  rfl

/-- The same composition with frame composition off: pass 2 is skipped and
pass 4 receives the off flag. -/
theorem stage2TidyCore_noFC_eq_passes (s : String) :
    stage2TidyCore stage2PipelineCfgNoFC s =
      pass5BlockJoining (pass4WhitespaceAndPruneWith false (pass3RepairStack
        (pass1FrameAndTagNorm s))) :=
  rfl

/-! ## The `NormalizedWF` boundary over Stage 1 outputs -/

/-- Pass 1 trims the trailing block newline of the Stage 1 output of `"a"`. -/
theorem pass1_stage1_a :
    pass1FrameAndTagNorm "<p>a</p>\n\n" = "<p>a</p>" := by decide

/-- The smallest Stage 1 output violating `NormalizedWF`: the output of the
one-character source `"a"` fails the first component, so `stage2_wf_identity`
does not discharge over Stage 1 outputs (family NW-TRIM). -/
theorem stage1_a_not_normalizedWF :
    ¬ NormalizedWF stage2PipelineCfg "<p>a</p>\n\n" := by
  intro h
  have hp : pass1FrameAndTagNorm "<p>a</p>\n\n" = "<p>a</p>\n\n" := h.1
  rw [pass1_stage1_a] at hp
  exact absurd hp (by decide)

/-- The empty Stage 1 output (source `""`) is inside the `NormalizedWF`
domain. -/
theorem stage1_empty_normalizedWF :
    NormalizedWF stage2PipelineCfg "" := by
  refine ⟨by decide, ?_, by decide⟩
  intro _
  decide

/-- The list Stage 1 output (source `"* item"`) is inside the `NormalizedWF`
domain: a non-degenerate reachable member. -/
theorem stage1_list_normalizedWF :
    NormalizedWF stage2PipelineCfg "<ul>\n<li>item</li>\n</ul>" := by
  refine ⟨by decide, ?_, by decide⟩
  intro _
  decide

/-- The `NormalizedWF` domain is a proper subdomain of the Stage 1 outputs:
both boundary sides are witnessed by Stage 1 outputs. -/
theorem normalizedWF_domain_proper_over_stage1 :
    NormalizedWF stage2PipelineCfg "<ul>\n<li>item</li>\n</ul>" ∧
    ¬ NormalizedWF stage2PipelineCfg "<p>a</p>\n\n" :=
  ⟨stage1_list_normalizedWF, stage1_a_not_normalizedWF⟩

/-- `stage2_wf_identity` in force over its domain at a Stage 1 output: the
restated law, with the domain membership kernel-checked. -/
theorem stage2_wf_identity_list :
    stage2TidyCore stage2PipelineCfg "<ul>\n<li>item</li>\n</ul>" =
      blockLayoutOnly stage2PipelineCfg "<ul>\n<li>item</li>\n</ul>" :=
  stage2_wf_identity stage2PipelineCfg _ stage1_list_normalizedWF

/-! ## The idempotence boundary: kernel-checked pass prefixes of both witnesses

The theorems in this section pin, in the kernel, every pass 1 to 3 step of
the two counterexample computations described in the file header. The pass 4
and pass 5 steps of those computations are kernel-opaque (well-founded
recursion through a foldl lambda in pass 4, a mutual pair with an inner loop
in pass 5) and are certified by the compiled pipeline instead; the lane
report records their values and the full sweep data. -/

/-- IDEM-CELL witness, pass 1: a fixed point. -/
theorem orphanCell_pass1 :
    pass1FrameAndTagNorm "<b>x<td>" = "<b>x<td>" := by decide

/-- IDEM-CELL witness, pass 2: a fixed point. -/
theorem orphanCell_pass2 :
    Stage2FrameComp.pass2ParagraphUnwrap "<b>x<td>" = "<b>x<td>" := by decide

/-- IDEM-CELL witness, pass 3: the repair pass closes the orphan cell and
the inline element, producing the last kernel-reachable stage of the first
core run; the compiled pipeline continues it through passes 4 and 5 to
`"<b>x\n<td></td></b>"`, whose `blockLayoutOnly` image is
`"<b>x \n<td></td></b>"`, refuting canonicity in the fourth component. -/
theorem orphanCell_pass3 :
    pass3RepairStack "<b>x<td>" = "<b>x<td></td></b>" := by decide

/-- IDEM-PCELL witness, pass 1: a fixed point. -/
theorem pCellDiv_pass1 :
    pass1FrameAndTagNorm "<p><td><div>" = "<p><td><div>" := by decide

/-- IDEM-PCELL witness, pass 2: a fixed point on the first run (the unwrap
fires only on the second run, at the image; see `pCellDiv_pass2_image`). -/
theorem pCellDiv_pass2 :
    Stage2FrameComp.pass2ParagraphUnwrap "<p><td><div>" = "<p><td><div>" := by
  decide

/-- IDEM-PCELL witness, pass 3: the repair pass closes the div, the cell,
and the paragraph, producing the last kernel-reachable stage of the first
core run; the compiled pipeline continues it through passes 4 and 5 to
`"<p>\n<td>\n<div></div>\n</td>\n</p>"`. -/
theorem pCellDiv_pass3 :
    pass3RepairStack "<p><td><div>" = "<p><td><div></div></td></p>" := by
  decide

/-- IDEM-PCELL, the failing component at the image: pass 2 applied to the
first run's output (whose value is certified by the compiled pipeline, as
recorded in `pCellDiv_pass3`) strips the paragraph and leaves surrounding
newlines, so the image is not a pass 2 fixed point and `CoreImageCanonical`
fails in its second component. This step is itself kernel-checked: it is a
pass 2 evaluation on a literal string. -/
theorem pCellDiv_pass2_image :
    Stage2FrameComp.pass2ParagraphUnwrap
        "<p>\n<td>\n<div></div>\n</td>\n</p>" =
      "\n<td>\n<div></div>\n</td>\n" := by
  decide

end LeanFtml.Proof

#print axioms LeanFtml.Proof.stage2TidyCore_eq_passes
#print axioms LeanFtml.Proof.stage2TidyCore_noFC_eq_passes
#print axioms LeanFtml.Proof.pass1_stage1_a
#print axioms LeanFtml.Proof.stage1_a_not_normalizedWF
#print axioms LeanFtml.Proof.stage1_empty_normalizedWF
#print axioms LeanFtml.Proof.stage1_list_normalizedWF
#print axioms LeanFtml.Proof.normalizedWF_domain_proper_over_stage1
#print axioms LeanFtml.Proof.stage2_wf_identity_list
#print axioms LeanFtml.Proof.orphanCell_pass1
#print axioms LeanFtml.Proof.orphanCell_pass2
#print axioms LeanFtml.Proof.orphanCell_pass3
#print axioms LeanFtml.Proof.pCellDiv_pass1
#print axioms LeanFtml.Proof.pCellDiv_pass2
#print axioms LeanFtml.Proof.pCellDiv_pass3
#print axioms LeanFtml.Proof.pCellDiv_pass2_image
