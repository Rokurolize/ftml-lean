/-
  ProofNotes.lean — integration module for the notes proof lane of the ftml Lean equivalence
  programme, on branch proof/notes at the pre-REFCORR12 mirror f7a117c. The file is unimported by
  LeanFtml.lean and Main.lean; the coordinator wires the import at adoption. It assembles three
  disjoint proof units: ProofNotesTitle (the headline title theorem, register 3.3 closure and
  footnoteblock render law), ProofNotesFootnote (the retained C0 and footnote diagnostics, the
  registry law and the footnote render law) and ProofNotesDiagnostics (the separator-predicate
  agreement chain and the bibliography emission law). Against ADVISOR-PROOF-POLICY.md section 4.3
  this lane kept the inherited diagnostics and dropped the inherited second-copy equivalence line:
  proving the mirror equal to a second hand-written copy of the reference process shrinks no TCB
  and breaks on the next correction round, so only its minimal witness remains. No sorry, no
  native_decide, no bv_decide, and no axiom outside [propext, Classical.choice, Quot.sound].
-/

import LeanFtml.ProofNotesTitle
import LeanFtml.ProofNotesFootnote
import LeanFtml.ProofNotesDiagnostics

namespace LeanFtml

/-- The lane's deliverable names are collected here for the coordinator's gate; all content proofs
    live in the three unit modules so their write scopes stayed disjoint during construction. -/
def notesProofLaneModules : List String :=
  ["ProofNotesTitle", "ProofNotesFootnote", "ProofNotesDiagnostics"]

end LeanFtml

#print axioms LeanFtml.notes_title_never_bool_false
#print axioms LeanFtml.notes_title_register_3_3_closed
#print axioms LeanFtml.footnoteblock_start_title_reachable
#print axioms LeanFtml.renderFootnoteblock_empty
#print axioms LeanFtml.renderFootnoteblock_end
#print axioms LeanFtml.renderFootnoteblock_start_title
#print axioms LeanFtml.footnote_registry_monotone
#print axioms LeanFtml.renderFootnote_template
#print axioms LeanFtml.renderFootnote_process_id
#print axioms LeanFtml.footnoteitem_start_no_space
#print axioms LeanFtml.footnoteitem_start_space
#print axioms LeanFtml.esc_shield_diverges
#print axioms LeanFtml.x_lf_suffix_class
#print axioms LeanFtml.token_aware_break_keeps_visible_empty
#print axioms LeanFtml.lead_predicates_agree
#print axioms LeanFtml.bibitemProcess_emit
