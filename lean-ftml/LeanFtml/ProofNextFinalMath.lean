-- ProofNextFinalMath.lean — kernel-free universal theorems for the Math parse rule of LeanFtml.NextRules.lean in the Wave 2 next-final proof lane of the ftml Lean equivalence programme.
-- Namespace LeanFtml.NextFinal.Math. Against ADVISOR-PROOF-POLICY.md section 2.2 Math is a Class B recursive (?R) rule; this file proves everything about the mirror that does not depend on the PCRE2 kernel and names the kernel-dependent remainder explicitly below.
-- Kernel-dependent remainder O-MATCH: MathPatternPcreAgreement — the hand-compiled fuel-bounded recursive matcher mathPattern/mathHead/mathAttrs/mathAttrChunks/mathBody agrees with PcreCore.pregReplaceCallback on the mechanically extracted Math regex in RefTables, including the (?R) body recursion and the PCRE2 closer lookahead correction.
-- Kernel-dependent remainder O-GUARD: MathGuardPcreAgreement — the hand-compiled mathGuard byte scan agrees with libpcre2 on ';include\s*\{|input\s*\{;is' over every trimmed body, including PCRE \s over all byte values.
-- Kernel-dependent remainder O-ATTRS: MathAttrsPcreAgreement — getAttrsBytes agrees with the RefTables/PHP getAttrs and the repeated-capture last-iteration rule on every attribute group.
-- Only the conditional reductions mathProcess_eq_mathProcessVia and mathProcess_oracle_reduction cross into those remainders; every theorem here is universal over arbitrary inputs and uses no sorry, native_decide, bv_decide, or axiom outside [propext, Classical.choice, Quot.sound].
-- Prose flows on single lines, never hard-wrapped.

import LeanFtml.NextRules

set_option maxRecDepth 10000
set_option maxHeartbeats 600000

namespace LeanFtml.NextFinal.Math

/-! ## eqSet: universal set/keep laws -/

def natMapGet : List (List Char × Nat) → List Char → Option Nat
  | [], _ => none
  | (k, v) :: rest, key => if k == key then some v else natMapGet rest key

theorem eqSet_get (m : List (List Char × Nat)) (k : List Char) (v : Nat) :
    natMapGet (eqSet m k v) k = some v := by
  induction m with
  | nil => simp [eqSet, natMapGet]
  | cons kv rest ih =>
    rcases kv with ⟨k', v'⟩
    by_cases h : k' == k <;> simp [eqSet, natMapGet, h, ih]

theorem eqSet_idempotent (m : List (List Char × Nat)) (k : List Char) (v : Nat) :
    eqSet (eqSet m k v) k v = eqSet m k v := by
  induction m with
  | nil => simp [eqSet]
  | cons kv rest ih =>
    rcases kv with ⟨k', v'⟩
    by_cases h : k' == k <;> simp [eqSet, h, ih]

theorem eqSet_length_present (m : List (List Char × Nat)) (k : List Char) (v v0 : Nat)
    (hget : natMapGet m k = some v0) :
    (eqSet m k v).length = m.length := by
  induction m with
  | nil => simp [natMapGet] at hget
  | cons kv rest ih =>
    rcases kv with ⟨k', v'⟩
    by_cases h : k' == k
    · simp [eqSet, h]
    · have hrest : natMapGet rest k = some v0 := by simpa [natMapGet, h] using hget
      simp [eqSet, h, ih hrest]

theorem eqSet_append_absent (m : List (List Char × Nat)) (k : List Char) (v : Nat)
    (hget : natMapGet m k = none) :
    eqSet m k v = m ++ [(k, v)] := by
  induction m with
  | nil => simp [eqSet]
  | cons kv rest ih =>
    rcases kv with ⟨k', v'⟩
    by_cases h : k' == k
    · simp [natMapGet, h] at hget
    · have hrest : natMapGet rest k = none := by simpa [natMapGet, h] using hget
      simp [eqSet, h, ih hrest]

/-! ## mathGuard: characterization on arbitrary content -/

def mathGuardHit (s : List Nat) : Bool :=
  match matchLitCI (litBytes "include") s with
  | some r => (r.drop (r.takeWhile isWsByte).length).head? == some 123
  | none =>
    match matchLitCI (litBytes "input") s with
    | some r => (r.drop (r.takeWhile isWsByte).length).head? == some 123
    | none => false

def mathGuardScan : List Nat → Bool
  | [] => false
  | s@(_ :: rest) => mathGuardHit s || mathGuardScan rest

theorem mathGuard_eq_scan (content : List Nat) :
    mathGuard content = mathGuardScan content := by
  unfold mathGuard
  induction content with
  | nil => rfl
  | cons b rest ih =>
    unfold mathGuardScan
    dsimp [mathGuard.go, mathGuardHit]
    rw [ih]
    rfl

def IsByteSuffix (s l : List Nat) : Prop := ∃ pre : List Nat, pre ++ s = l

theorem isByteSuffix_cons (b : Nat) (rest s : List Nat) :
    IsByteSuffix s (b :: rest) ↔ IsByteSuffix s rest ∨ s = b :: rest := by
  constructor
  · rintro ⟨pre, h⟩
    cases pre with
    | nil => exact Or.inr (by simpa using h)
    | cons p pre' =>
      cases h
      exact Or.inl ⟨pre', rfl⟩
  · rintro (⟨pre, h⟩ | hs)
    · exact ⟨b :: pre, by simp [h]⟩
    · exact ⟨[], by simpa [hs]⟩

theorem mathGuard_char (content : List Nat) :
    mathGuard content = true ↔ ∃ s, IsByteSuffix s content ∧ mathGuardHit s = true := by
  rw [mathGuard_eq_scan]
  induction content with
  | nil =>
    simp [mathGuardScan, IsByteSuffix, mathGuardHit, litBytes, matchLitCI]
  | cons b rest ih =>
    constructor
    · intro h
      have h' : mathGuardHit (b :: rest) = true ∨ mathGuardScan rest = true := by
        simpa [mathGuardScan] using h
      cases h' with
      | inl hhit => exact ⟨b :: rest, ⟨[], rfl⟩, hhit⟩
      | inr hscan =>
        rcases ih.mp hscan with ⟨s, hsuf, hhit⟩
        exact ⟨s, (isByteSuffix_cons b rest s).2 (Or.inl hsuf), hhit⟩
    · rintro ⟨s, hsuf, hhit⟩
      have hs' := (isByteSuffix_cons b rest s).1 hsuf
      cases hs' with
      | inl hsrest =>
        have hscan : mathGuardScan rest = true := ih.mpr ⟨s, hsrest, hhit⟩
        simpa [mathGuardScan, hscan]
      | inr hs =>
        subst s
        simpa [mathGuardScan, hhit]

/-! ## mathProcess: universal guard, counter, type and wire-shape laws -/

def mathTypeOf (g2 : List Nat) : OptVal :=
  match lookupB (getAttrsBytes g2) (litBytes "type") with
  | some v => textVal v
  | none => OptVal.str "equation".toList

theorem mathProcess_guard_false_token (g1 : Option (List Nat)) (g2 g3 : List Nat)
    (doc : DocState) (hguard : mathGuard (trimBytes g3) = false) :
    (mathProcess g1 g2 g3 doc).1 =
      some { rule := "Math", opts :=
        [("label".toList, textVal (trimBytes (g1.getD []))),
         ("content".toList, textVal (trimBytes g3)),
         ("id".toList, OptVal.int (doc.mathId.getD 1 : Int)),
         ("type".toList, mathTypeOf g2)] } := by
  cases hlu : lookupB (getAttrsBytes g2) (litBytes "type") with
  | none => simp [mathProcess, mathTypeOf, hguard, hlu]
  | some v => simp [mathProcess, mathTypeOf, hguard, hlu]

theorem mathProcess_guard_true_fallback (g1 : Option (List Nat)) (g2 g3 : List Nat)
    (doc : DocState) (hguard : mathGuard (trimBytes g3) = true) :
    (mathProcess g1 g2 g3 doc).1 = none ∧
    (mathProcess g1 g2 g3 doc).2.mathId = some (doc.mathId.getD 1 + 1) ∧
    (mathProcess g1 g2 g3 doc).2.equations = doc.equations := by
  by_cases hg : mathGuard (trimBytes g3) = true
  · simp [mathProcess, hg]
  · exact False.elim (hg hguard)

theorem mathProcess_counter_increment (g1 : Option (List Nat)) (g2 g3 : List Nat)
    (doc : DocState) :
    (mathProcess g1 g2 g3 doc).2.mathId = some (doc.mathId.getD 1 + 1) := by
  by_cases hg : mathGuard (trimBytes g3) = true <;> simp [mathProcess, hg]

theorem mathProcess_equations_guard_false (g1 : Option (List Nat)) (g2 g3 : List Nat)
    (doc : DocState) (hguard : mathGuard (trimBytes g3) = false) :
    (mathProcess g1 g2 g3 doc).2.equations =
      eqSet doc.equations (utf8Decode (trimBytes (g1.getD []))) (doc.mathId.getD 1) := by
  by_cases hg : mathGuard (trimBytes g3) = true
  · exact False.elim (by simp [hg] at hguard)
  · simp [mathProcess, hg]

theorem mathProcess_doc_fields (g1 : Option (List Nat)) (g2 g3 : List Nat)
    (doc : DocState) :
    (mathProcess g1 g2 g3 doc).2.page = doc.page ∧
    (mathProcess g1 g2 g3 doc).2.site = doc.site ∧
    (mathProcess g1 g2 g3 doc).2.footnotes = doc.footnotes ∧
    (mathProcess g1 g2 g3 doc).2.mathId = some (doc.mathId.getD 1 + 1) := by
  by_cases hg : mathGuard (trimBytes g3) = true <;> simp [mathProcess, hg]

theorem mathProcess_mathId_ge (g1 : Option (List Nat)) (g2 g3 : List Nat)
    (doc : DocState) :
    doc.mathId.getD 1 ≤ (mathProcess g1 g2 g3 doc).2.mathId.getD 1 := by
  by_cases hg : mathGuard (trimBytes g3) = true <;> simp [mathProcess, hg] <;> omega

theorem mathProcess_type_case (g1 : Option (List Nat)) (g2 g3 : List Nat)
    (doc : DocState) (hguard : mathGuard (trimBytes g3) = false) :
    (match lookupB (getAttrsBytes g2) (litBytes "type") with
      | some v =>
        (match (mathProcess g1 g2 g3 doc).1 with
         | some e => omGet e.opts "type".toList
         | none => none) = some (textVal v)
      | none =>
        (match (mathProcess g1 g2 g3 doc).1 with
         | some e => omGet e.opts "type".toList
         | none => none) = some (OptVal.str "equation".toList)) := by
  cases hlu : lookupB (getAttrsBytes g2) (litBytes "type") with
  | none => simp [mathProcess, hguard, omGet, hlu]
  | some v => simp [mathProcess, hguard, omGet, hlu]

theorem mathTypeOf_absent_default (g2 : List Nat)
    (h : lookupB (getAttrsBytes g2) (litBytes "type") = none) :
    mathTypeOf g2 = OptVal.str "equation".toList := by
  simp [mathTypeOf, h]

theorem mathTypeOf_present (g2 v : List Nat)
    (h : lookupB (getAttrsBytes g2) (litBytes "type") = some v) :
    mathTypeOf g2 = textVal v := by
  simp [mathTypeOf, h]

theorem lookupB_exact_key (m : List (List Nat × List Nat)) (k v : List Nat) :
    lookupB ((k, v) :: m) k = some v := by
  simp [lookupB]

theorem lookupB_type_case_variants (m : List (List Nat × List Nat)) (v : List Nat) :
    lookupB ((litBytes "TYPE", v) :: m) (litBytes "type") = lookupB m (litBytes "type") ∧
    lookupB ((litBytes "Type", v) :: m) (litBytes "type") = lookupB m (litBytes "type") ∧
    lookupB ((litBytes "tYpE", v) :: m) (litBytes "type") = lookupB m (litBytes "type") := by
  simp [lookupB, litBytes]

/-! ## mathScan: token monotonicity and fuel behaviour -/

theorem mathScan_tokens_prefix (input : List Nat) :
    ∀ (fuel : Nat) (src : List Nat) (prev : Option Nat)
      (toks : List TokenEntry) (doc : DocState),
      ∃ extra : List TokenEntry,
        (mathScan input src prev toks doc fuel).2.1 = toks ++ extra := by
  intro fuel
  induction fuel with
  | zero =>
    intro src prev toks doc
    exact ⟨[], by simp [mathScan]⟩
  | succ fuel ih =>
    intro src prev toks doc
    cases src with
    | nil => exact ⟨[], by simp [mathScan]⟩
    | cons b rest =>
      dsimp [mathScan]
      by_cases hline : prev.isNone || prev == some 10
      · cases hh : (mathPattern (b :: rest) true (codeFuel (b :: rest).length)).head? with
        | none =>
          have hrec := ih rest (some b) toks doc
          by_cases hf : (mathScan input rest (some b) toks doc fuel).2.2.2 = true <;>
            simpa [hline, hh, hf] using hrec
        | some q =>
          rcases q with ⟨g1, g2, body, r⟩
          cases hproc : mathProcess g1 g2 body doc with
          | mk mnew doc1 =>
            cases mnew with
            | none => exact ⟨[], by simp [hline, hh, hproc]⟩
            | some entry =>
              rcases ih r (lastConsumedByte (b :: rest) r) (toks ++ [entry]) doc1 with ⟨extra, hextra⟩
              refine ⟨entry :: extra, ?_⟩
              by_cases hf : (mathScan input r (lastConsumedByte (b :: rest) r)
                (toks ++ [entry]) doc1 fuel).2.2.2 = true <;>
                simpa [hline, hh, hproc, hf, List.append_assoc] using hextra
      · have hrec := ih rest (some b) toks doc
        by_cases hf : (mathScan input rest (some b) toks doc fuel).2.2.2 = true <;>
          simpa [hline, hf] using hrec

theorem mathScan_tokens_length_mono (input : List Nat) :
    ∀ (fuel : Nat) (src : List Nat) (prev : Option Nat)
      (toks : List TokenEntry) (doc : DocState),
      toks.length ≤ (mathScan input src prev toks doc fuel).2.1.length := by
  intro fuel src prev toks doc
  rcases mathScan_tokens_prefix input fuel src prev toks doc with ⟨extra, h⟩
  rw [h]
  simp

theorem mathScan_zero (input : List Nat) (src : List Nat) (prev : Option Nat)
    (toks : List TokenEntry) (doc : DocState) :
    mathScan input src prev toks doc 0 = ([], toks, doc, false) := by
  rfl

theorem mathScan_empty_src (input : List Nat) (prev : Option Nat)
    (toks : List TokenEntry) (doc : DocState) :
    ∀ fuel : Nat, mathScan input [] prev toks doc fuel = ([], toks, doc, false) := by
  intro fuel
  cases fuel <;> rfl

theorem mathScan_doc_page (input : List Nat) :
    ∀ (fuel : Nat) (src : List Nat) (prev : Option Nat)
      (toks : List TokenEntry) (doc : DocState),
      (mathScan input src prev toks doc fuel).2.2.1.page = doc.page := by
  intro fuel
  induction fuel with
  | zero => intro src prev toks doc; rfl
  | succ fuel ih =>
    intro src prev toks doc
    cases src with
    | nil => rfl
    | cons b rest =>
      dsimp [mathScan]
      by_cases hline : prev.isNone || prev == some 10
      · cases hh : (mathPattern (b :: rest) true (codeFuel (b :: rest).length)).head? with
        | none =>
          have hrec := ih rest (some b) toks doc
          by_cases hf : (mathScan input rest (some b) toks doc fuel).2.2.2 = true <;>
            simpa [hline, hh, hf] using hrec
        | some q =>
          rcases q with ⟨g1, g2, body, r⟩
          cases hproc : mathProcess g1 g2 body doc with
          | mk mnew doc1 =>
            cases mnew with
            | none =>
              have h := (mathProcess_doc_fields g1 g2 body doc).1
              simpa [hline, hh, hproc] using h
            | some entry =>
              have hpage1 : doc1.page = doc.page := by
                have h := (mathProcess_doc_fields g1 g2 body doc).1
                simpa [hproc] using h
              have hrec := ih r (lastConsumedByte (b :: rest) r) (toks ++ [entry]) doc1
              have hres : (mathScan input r (lastConsumedByte (b :: rest) r)
                  (toks ++ [entry]) doc1 fuel).2.2.1.page = doc.page := by
                rw [hrec, hpage1]
              by_cases hf : (mathScan input r (lastConsumedByte (b :: rest) r)
                (toks ++ [entry]) doc1 fuel).2.2.2 = true <;>
                simpa [hline, hh, hproc, hf] using hres
      · have hrec := ih rest (some b) toks doc
        by_cases hf : (mathScan input rest (some b) toks doc fuel).2.2.2 = true <;>
          simpa [hline, hf] using hrec

theorem mathScan_mathId_mono (input : List Nat) :
    ∀ (fuel : Nat) (src : List Nat) (prev : Option Nat)
      (toks : List TokenEntry) (doc : DocState),
      doc.mathId.getD 1 ≤ (mathScan input src prev toks doc fuel).2.2.1.mathId.getD 1 := by
  intro fuel
  induction fuel with
  | zero => intro src prev toks doc; simp [mathScan]
  | succ fuel ih =>
    intro src prev toks doc
    cases src with
    | nil => simp [mathScan]
    | cons b rest =>
      dsimp [mathScan]
      by_cases hline : prev.isNone || prev == some 10
      · cases hh : (mathPattern (b :: rest) true (codeFuel (b :: rest).length)).head? with
        | none =>
          have hrec := ih rest (some b) toks doc
          by_cases hf : (mathScan input rest (some b) toks doc fuel).2.2.2 = true <;>
            simpa [hline, hh, hf] using hrec
        | some q =>
          rcases q with ⟨g1, g2, body, r⟩
          cases hproc : mathProcess g1 g2 body doc with
          | mk mnew doc1 =>
            cases mnew with
            | none =>
              have h := mathProcess_mathId_ge g1 g2 body doc
              simpa [hline, hh, hproc] using h
            | some entry =>
              have hle1 : doc.mathId.getD 1 ≤ doc1.mathId.getD 1 := by
                have h := mathProcess_mathId_ge g1 g2 body doc
                simpa [hproc] using h
              have hrec := ih r (lastConsumedByte (b :: rest) r) (toks ++ [entry]) doc1
              have hres : doc.mathId.getD 1 ≤ (mathScan input r
                  (lastConsumedByte (b :: rest) r) (toks ++ [entry]) doc1 fuel).2.2.1.mathId.getD 1 :=
                by omega
              by_cases hf : (mathScan input r
                  (lastConsumedByte (b :: rest) r) (toks ++ [entry]) doc1 fuel).2.2.2 = true <;>
                simpa [hline, hh, hproc, hf] using hres
      · have hrec := ih rest (some b) toks doc
        by_cases hf : (mathScan input rest (some b) toks doc fuel).2.2.2 = true <;>
          simpa [hline, hf] using hrec

/-! ## mathRule: document wiring and fatal preservation -/

theorem mathRule_doc_wiring (st : ParseState) :
    (mathRule st).doc =
      (mathScan (byteForm st.work) (byteForm st.work) none st.tokens st.doc
        ((byteForm st.work).length + 1)).2.2.1 := by
  rfl

theorem mathRule_tokens_wiring (st : ParseState) :
    (mathRule st).tokens =
      (mathScan (byteForm st.work) (byteForm st.work) none st.tokens st.doc
        ((byteForm st.work).length + 1)).2.1 := by
  rfl

theorem mathRule_doc_page (st : ParseState) :
    (mathRule st).doc.page = st.doc.page := by
  exact mathScan_doc_page (byteForm st.work) ((byteForm st.work).length + 1)
    (byteForm st.work) none st.tokens st.doc

theorem mathRule_mathId_mono (st : ParseState) :
    st.doc.mathId.getD 1 ≤ (mathRule st).doc.mathId.getD 1 := by
  exact mathScan_mathId_mono (byteForm st.work) ((byteForm st.work).length + 1)
    (byteForm st.work) none st.tokens st.doc

theorem mathRule_fatal_iff (st : ParseState) :
    (mathRule st).fatal = true ↔ st.fatal = true ∨
      (mathScan (byteForm st.work) (byteForm st.work) none st.tokens st.doc
        ((byteForm st.work).length + 1)).2.2.2 = true := by
  simp [mathRule]

theorem mathRule_fatal_of_scan (st : ParseState)
    (hf : (mathScan (byteForm st.work) (byteForm st.work) none st.tokens st.doc
      ((byteForm st.work).length + 1)).2.2.2 = true) :
    (mathRule st).fatal = true := by
  simp [mathRule, hf]

/-! ## Named kernel-dependent obligations and conditional reductions -/

/-- Open obligation O-MATCH. The fuel-bounded hand-compiled recursive matcher equals a PcreCore/RefTables-backed oracle on the same subject and fuel; discharging it is the kernel-dependent (?R) correspondence, not a kernel-free fact. -/
def MathPatternPcreAgreement
    (oracle : List Nat → Nat → List (Option (List Nat) × List Nat × List Nat × List Nat)) : Prop :=
  ∀ s fuel, mathPattern s true fuel = oracle s fuel

/-- Open obligation O-GUARD. The hand-compiled ProcessException guard equals the libpcre2-backed oracle on every byte string; discharging it certifies PCRE \s and /i against the byte-level scan. -/
def MathGuardPcreAgreement (oracle : List Nat → Bool) : Prop :=
  ∀ content, mathGuard content = oracle content

/-- Open obligation O-ATTRS. The byte-level getAttrs twin equals the RefTables/PHP getAttrs oracle on every attribute group; discharging it certifies the repeated-capture last-iteration rule. -/
def MathAttrsPcreAgreement
    (oracle : List Nat → List (List Nat × List Nat)) : Prop :=
  ∀ g2, getAttrsBytes g2 = oracle g2

/-- process() factored over an abstract guard; at mathGuard this is definitionally the mirror's mathProcess. -/
def mathProcessVia (guard : List Nat → Bool) (g1 : Option (List Nat))
    (g2 g3 : List Nat) (doc : DocState) : Option TokenEntry × DocState :=
  let id := doc.mathId.getD 1
  let doc1 : DocState := { doc with mathId := some (id + 1) }
  let label := trimBytes (g1.getD [])
  let content := trimBytes g3
  if guard content then (none, doc1)
  else
    let attrs := getAttrsBytes g2
    let tyVal : OptVal := match lookupB attrs (litBytes "type") with
      | some v => textVal v
      | none => OptVal.str "equation".toList
    let entry : TokenEntry := { rule := "Math", opts :=
      [("label".toList, textVal label),
       ("content".toList, textVal content),
       ("id".toList, OptVal.int (id : Int)),
       ("type".toList, tyVal)] }
    (some entry,
      { doc1 with equations := eqSet doc1.equations (utf8Decode label) id })

theorem mathProcess_eq_mathProcessVia (g1 : Option (List Nat)) (g2 g3 : List Nat)
    (doc : DocState) :
    mathProcess g1 g2 g3 doc = mathProcessVia mathGuard g1 g2 g3 doc := by
  rfl

theorem mathProcess_oracle_reduction (guard : List Nat → Bool)
    (h : MathGuardPcreAgreement guard) (g1 : Option (List Nat))
    (g2 g3 : List Nat) (doc : DocState) :
    mathProcess g1 g2 g3 doc = mathProcessVia guard g1 g2 g3 doc := by
  cases hlu : lookupB (getAttrsBytes g2) (litBytes "type") with
  | none =>
    by_cases hg : mathGuard (trimBytes g3) = true
    · have h' : guard (trimBytes g3) = true := by simpa [← h (trimBytes g3)] using hg
      simp [mathProcess, mathProcessVia, hg, h', hlu]
    · have h' : guard (trimBytes g3) ≠ true := by
        intro hh
        exact hg (by simpa [h (trimBytes g3)] using hh)
      simp [mathProcess, mathProcessVia, hg, h', hlu]
  | some v =>
    by_cases hg : mathGuard (trimBytes g3) = true
    · have h' : guard (trimBytes g3) = true := by simpa [← h (trimBytes g3)] using hg
      simp [mathProcess, mathProcessVia, hg, h', hlu]
    · have h' : guard (trimBytes g3) ≠ true := by
        intro hh
        exact hg (by simpa [h (trimBytes g3)] using hh)
      simp [mathProcess, mathProcessVia, hg, h', hlu]

end LeanFtml.NextFinal.Math

#print axioms LeanFtml.NextFinal.Math.eqSet_get
#print axioms LeanFtml.NextFinal.Math.eqSet_idempotent
#print axioms LeanFtml.NextFinal.Math.eqSet_length_present
#print axioms LeanFtml.NextFinal.Math.eqSet_append_absent
#print axioms LeanFtml.NextFinal.Math.isByteSuffix_cons
#print axioms LeanFtml.NextFinal.Math.mathGuard_eq_scan
#print axioms LeanFtml.NextFinal.Math.mathGuard_char
#print axioms LeanFtml.NextFinal.Math.mathProcess_guard_false_token
#print axioms LeanFtml.NextFinal.Math.mathProcess_guard_true_fallback
#print axioms LeanFtml.NextFinal.Math.mathProcess_counter_increment
#print axioms LeanFtml.NextFinal.Math.mathProcess_equations_guard_false
#print axioms LeanFtml.NextFinal.Math.mathProcess_doc_fields
#print axioms LeanFtml.NextFinal.Math.mathProcess_mathId_ge
#print axioms LeanFtml.NextFinal.Math.mathProcess_type_case
#print axioms LeanFtml.NextFinal.Math.mathTypeOf_absent_default
#print axioms LeanFtml.NextFinal.Math.mathTypeOf_present
#print axioms LeanFtml.NextFinal.Math.lookupB_exact_key
#print axioms LeanFtml.NextFinal.Math.lookupB_type_case_variants
#print axioms LeanFtml.NextFinal.Math.mathScan_tokens_prefix
#print axioms LeanFtml.NextFinal.Math.mathScan_tokens_length_mono
#print axioms LeanFtml.NextFinal.Math.mathScan_zero
#print axioms LeanFtml.NextFinal.Math.mathScan_empty_src
#print axioms LeanFtml.NextFinal.Math.mathScan_doc_page
#print axioms LeanFtml.NextFinal.Math.mathScan_mathId_mono
#print axioms LeanFtml.NextFinal.Math.mathRule_doc_wiring
#print axioms LeanFtml.NextFinal.Math.mathRule_tokens_wiring
#print axioms LeanFtml.NextFinal.Math.mathRule_doc_page
#print axioms LeanFtml.NextFinal.Math.mathRule_mathId_mono
#print axioms LeanFtml.NextFinal.Math.mathRule_fatal_iff
#print axioms LeanFtml.NextFinal.Math.mathRule_fatal_of_scan
#print axioms LeanFtml.NextFinal.Math.mathProcess_eq_mathProcessVia
#print axioms LeanFtml.NextFinal.Math.mathProcess_oracle_reduction
