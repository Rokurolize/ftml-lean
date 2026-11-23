/-
  ProofNotesDiagnostics.lean — the diagnostics proof unit of the ftml Lean equivalence
  programme's notes proof lane, on branch proof/notes at the pre-REFCORR12 mirror f7a117c.
  This file is the diagnostics unit's self-contained extraction from the lead's consolidated
  ProofNotes.lean draft; the lead's file is treated as material and is not edited here. It
  proves the two retained diagnostic lines the unit owns: the agreement of the Lean lead
  and PHP separator predicates on control-pure bodies, and the bibliography emission laws.
  The file imports LeanFtml.NotesRender only, so every fact it uses is either defined here,
  stated here as a private helper, or inherited from the mirror through that one import.
  No sorry, no native_decide, no bv_decide, and no axiom outside the programme's standard
  core set [propext, Classical.choice, Quot.sound]. The round-5e shapes and every
  footnoteStored-dependent theorem belong to other units and are deliberately absent.
-/

import LeanFtml.NotesRender

set_option maxRecDepth 10000

namespace LeanFtml

/-! ## Local helper: the decidable live C0 characterization -/

/-- Live's dropped C0 byte, as a proposition: below 0x20, except TAB, LF and CR. Restated locally so this file stays self-contained. -/
private theorem isLiveDroppedControl_iff (b : Nat) :
    isLiveDroppedControl b = true ↔ b < 32 ∧ b ≠ 9 ∧ b ≠ 10 ∧ b ≠ 13 := by
  simp [isLiveDroppedControl, Bool.and_eq_true, bne_iff_ne, decide_eq_true_eq, and_assoc]

/-! ## Retained diagnostic: separator predicates agree on control-pure bodies -/

/-- The bytes before the first LF, mirroring the PHP per-line lead test. -/
def lineBytes (bs : List Nat) : List Nat :=
  bs.takeWhile (fun b => b != 10)

/-- Lean lead test: a non-trim byte on the first line. `footnoteLeadVisible` is this test after the empty-Raw strip. -/
def leanLeadNonempty (bs : List Nat) : Bool :=
  !((lineBytes bs).filter (fun b => !isTrimByte b)).isEmpty

/-- PHP `Footnoteitem` regex `/^[^\n]*[^ \t\n\r\x0B\x0C]/` on a line that contains no LF: a byte outside space, TAB, CR, VT and FF. -/
def phpSepByte (b : Nat) : Bool :=
  b != 32 && b != 9 && b != 13 && b != 11 && b != 12

/-- The PHP lead test: any separator-class byte on the first line. -/
def phpLeadNonempty (bs : List Nat) : Bool :=
  (lineBytes bs).any phpSepByte

/-- PHP trim()'s byte set, as a proposition, read off `isTrimByte`. -/
theorem isTrimByte_iff (b : Nat) :
    isTrimByte b = true ↔ b = 32 ∨ b = 9 ∨ b = 10 ∨ b = 13 ∨ b = 0 ∨ b = 11 := by
  simp [isTrimByte, Bool.or_eq_true, beq_iff_eq, or_assoc]

/-- The separator byte class, as a proposition, read off `phpSepByte`. -/
theorem phpSepByte_iff (b : Nat) :
    phpSepByte b = true ↔ b ≠ 32 ∧ b ≠ 9 ∧ b ≠ 13 ∧ b ≠ 11 ∧ b ≠ 12 := by
  simp [phpSepByte, Bool.and_eq_true, bne_iff_ne, and_assoc]

/-- Every member of a `takeWhile` satisfies the predicate and belongs to the original list. -/
theorem mem_takeWhile {p : Nat → Bool} {l : List Nat} {x : Nat}
    (h : x ∈ l.takeWhile p) : p x = true ∧ x ∈ l := by
  induction l with
  | nil => simp at h
  | cons y ys ih =>
      simp only [List.takeWhile] at h
      split at h
      · next hp =>
          simp only [List.mem_cons] at h
          rcases h with rfl | h
          · exact ⟨hp, List.mem_cons_self⟩
          · rcases ih h with ⟨hq, hm⟩
            exact ⟨hq, List.mem_cons_of_mem _ hm⟩
      · simp at h

/-- On a control-pure non-LF byte the two lead predicates' byte tests coincide. -/
theorem sep_class_on_pure (b : Nat) (hn : b ≠ 10) (hp : isLiveDroppedControl b = false) :
    (!isTrimByte b) = phpSepByte b := by
  have hnot : ¬ (b < 32 ∧ b ≠ 9 ∧ b ≠ 10 ∧ b ≠ 13) := by
    intro hd
    have := (isLiveDroppedControl_iff b).mpr hd
    simp [hp] at this
  cases ht : isTrimByte b <;> cases hs : phpSepByte b
  · have htrim_false : isTrimByte b = false := ht
    have hphp_false : phpSepByte b = false := hs
    have hnotphp : ¬ (b ≠ 32 ∧ b ≠ 9 ∧ b ≠ 13 ∧ b ≠ 11 ∧ b ≠ 12) := by
      intro hall
      have := (phpSepByte_iff b).mpr hall
      simp [hphp_false] at this
    by_cases h32 : b = 32
    · simp [h32, isTrimByte] at htrim_false
    · by_cases h9 : b = 9
      · simp [h9, isTrimByte] at htrim_false
      · by_cases h13 : b = 13
        · simp [h13, isTrimByte] at htrim_false
        · by_cases h11 : b = 11
          · simp [h11, isTrimByte] at htrim_false
          · by_cases h12 : b = 12
            · subst h12
              exact (hnot ⟨by decide, by decide, hn, by decide⟩).elim
            · exact (hnotphp ⟨h32, h9, h13, h11, h12⟩).elim
  · rfl
  · rfl
  · have hmem := (isTrimByte_iff b).mp ht
    have hphp := (phpSepByte_iff b).mp hs
    rcases hmem with rfl | rfl | rfl | rfl | rfl | rfl
    · exact absurd rfl hphp.1
    · exact absurd rfl hphp.2.1
    · exact absurd rfl hn
    · exact absurd rfl hphp.2.2.1
    · exact (hnot ⟨by decide, by decide, by decide, by decide⟩).elim
    · exact (hnot ⟨by decide, by decide, by decide, by decide⟩).elim

private theorem any_false_iff {l : List Nat} {p : Nat → Bool} :
    l.any p = false ↔ ∀ x ∈ l, p x = false := by
  induction l with
  | nil => simp
  | cons a as ih =>
      simp only [List.any_cons, Bool.or_eq_false_iff, ih, List.mem_cons]
      constructor
      · intro ⟨ha, hall⟩ x hx
        rcases hx with rfl | hx
        · exact ha
        · exact hall x hx
      · intro hall
        exact ⟨hall a (Or.inl rfl), fun x hx => hall x (Or.inr hx)⟩

private theorem filter_isEmpty_iff {l : List Nat} {p : Nat → Bool} :
    (l.filter p).isEmpty = true ↔ ∀ x ∈ l, p x = false := by
  rw [List.isEmpty_iff, List.filter_eq_nil_iff]
  constructor
  · intro h x hx
    have : ¬ p x := h x hx
    simpa [Bool.not_eq_true] using this
  · intro h x hx
    simpa [Bool.not_eq_true] using h x hx

private theorem nonempty_filter_eq_any {l : List Nat} {p q : Nat → Bool}
    (h : ∀ x ∈ l, p x = q x) :
    (!(l.filter p).isEmpty) = l.any q := by
  cases ha : l.any q
  · have hall : ∀ x ∈ l, q x = false := any_false_iff.mp ha
    have hpf : ∀ x ∈ l, p x = false := fun x hx => by rw [h x hx]; exact hall x hx
    have hempty : (l.filter p).isEmpty = true := filter_isEmpty_iff.mpr hpf
    simp [hempty]
  · have ⟨x, hx, hq⟩ := List.any_eq_true.mp ha
    have hp : p x = true := by rw [h x hx]; exact hq
    have hmem : x ∈ l.filter p := List.mem_filter.mpr ⟨hx, hp⟩
    have hempty : (l.filter p).isEmpty = false := by
      simp [List.ne_nil_of_mem hmem]
    simp [hempty]

/-- On a control-pure byte string the Lean lead nonemptiness test and the PHP lead test agree. -/
theorem lead_predicates_agree (bs : List Nat)
    (h : ∀ x ∈ bs, isLiveDroppedControl x = false) :
    leanLeadNonempty bs = phpLeadNonempty bs := by
  have hpt : ∀ x ∈ lineBytes bs, (!isTrimByte x) = phpSepByte x := by
    intro x hx
    rcases mem_takeWhile hx with ⟨hp, hm⟩
    exact sep_class_on_pure x (bne_iff_ne.mp hp) (h x hm)
  simpa [leanLeadNonempty, phpLeadNonempty] using
    nonempty_filter_eq_any (l := lineBytes bs) hpt

/-! ## Retained diagnostic: round-5e and bibliography shapes -/

/-- Normalize a bibliography body: turn every LF into a space, then trim both ends. -/
def bibNorm (content : List Nat) : List Nat :=
  trimBytes (content.map (fun b => if b == 10 then 32 else b))

/-- The visible bibliography body: normalize, drop live C0 controls, strip empty-Raw placeholders, re-trim. -/
def bibVisible (content : List Nat) (toks : List TokenEntry) : List Nat :=
  trimBytes (stripEmptyRawPhNotes (stripLiveDroppedControls (bibNorm content)) toks)

/-- An ESC survives normalization and the stored body keeps it, while the visible emission drops it. -/
theorem bib_esc_emitted_drops_stored_keeps :
    bibNorm (litBytes "A" ++ [27] ++ litBytes "B") = litBytes "A" ++ [27] ++ litBytes "B" ∧
      bibVisible (litBytes "A" ++ [27] ++ litBytes "B") [] = litBytes "AB" := by
  decide

/-- `bibitemProcess` emits the visible body between the placeholder pair and stores the normalized body in `bibitems`. -/
theorem bibitemProcess_emit (label content : List Nat) (doc : DocState) (toks : List TokenEntry) :
    (bibitemProcess label content doc toks).1 =
      phBytes toks.length ++ bibVisible content toks ++ phBytes (toks.length + 1) ∧
    (bibitemProcess label content doc toks).2.2.bibitems =
      bibSet doc.bibitems label (bibNorm content) := by
  simp [bibitemProcess, bibVisible, bibNorm, List.length_append]

end LeanFtml

#print axioms LeanFtml.isTrimByte_iff
#print axioms LeanFtml.phpSepByte_iff
#print axioms LeanFtml.mem_takeWhile
#print axioms LeanFtml.sep_class_on_pure
#print axioms LeanFtml.lead_predicates_agree
#print axioms LeanFtml.lineBytes
#print axioms LeanFtml.leanLeadNonempty
#print axioms LeanFtml.phpSepByte
#print axioms LeanFtml.phpLeadNonempty
#print axioms LeanFtml.bibNorm
#print axioms LeanFtml.bibVisible
#print axioms LeanFtml.bib_esc_emitted_drops_stored_keeps
#print axioms LeanFtml.bibitemProcess_emit
