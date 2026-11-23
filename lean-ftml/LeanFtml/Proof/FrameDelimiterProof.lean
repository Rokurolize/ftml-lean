/-
  LeanFtml.Proof.FrameDelimiterProof — Wave 2 proof/frame-include-code, Delimiter unit.
  Class A FrameRules rule, named target delimiterRule_id plus WFState creation/preservation and the representational argument that the mirror's List Char alphabet cannot contain a raw 0xFF byte.
  All facts below are about the actual mirror function FrameRules.delimiterRule and the F1 foundations ByteCore / TokenStateProof.
  No new axioms, no sorry, no native_decide, no bv_decide, no Mathlib; all theorem axioms are within [propext, Classical.choice, Quot.sound].
  The mirror already declares theorem delimiterRule_id : delimiterRule st = st := rfl; delimiterRule_id_restated below is the kernel-checked restatement of that same identity in this bundle.
-/
import LeanFtml.FrameRules
import LeanFtml.ByteCore
import LeanFtml.TokenStateProof

namespace LeanFtml

/-! ## 1. The mirror rule: identity, WF preservation, TokEquiv identity -/

/-- The Delimiter rule is literally the identity function on ParseState (FrameRules.lean's definition). -/
theorem delimiterRule_id_restated (st : ParseState) : delimiterRule st = st := rfl

/-- WFState is preserved because the state is returned unchanged; no component is rebuilt. -/
theorem delimiterRule_preserves_wf (st : ParseState) (hwf : WFState st) :
    WFState (delimiterRule st) := by
  simpa [delimiterRule] using hwf

/-- ReachableState is likewise preserved trivially, completing the parse-bundle shape. -/
theorem delimiterRule_preserves_reachable (st : ParseState) (hr : ReachableState st) :
    ReachableState (delimiterRule st) := by
  simpa [delimiterRule] using hr

/-- Under the identity renaming σ k = k the mirror's output is TokEquiv to its input; this is exactly TokenStateProof.tokEquiv_refl applied through the identity definition. -/
theorem delimiterRule_tokEquiv (σ : Nat → Nat) (hσ : ∀ k, σ k = k) (st : ParseState) :
    TokEquiv σ (delimiterRule st) st := by
  simpa [delimiterRule] using tokEquiv_refl σ hσ st

/-! ## 2. Byte-level witness: no 0xFF is in the image of the mirror's text encoding -/

/-- No single Char's mirror UTF-8 encoding contains the delimiter byte 0xFF, at any position.
    The four cases mirror ByteCore.isByteList_utf8Bytes: ASCII bytes are below 0x80, continuation bytes are below 0xC0, and lead bytes top out at 0xF4. -/
theorem delimiter_utf8Bytes_no_ff (c : Char) : 0xFF ∉ utf8Bytes c := by
  have hv := c.valid
  simp [UInt32.isValidChar, Nat.isValidChar] at hv
  by_cases h1 : c.toNat < 0x80
  · simp [utf8Bytes, h1]
    omega
  · by_cases h2 : c.toNat < 0x800
    · simp [utf8Bytes, h1, h2]
      omega
    · by_cases h3 : c.toNat < 0x10000
      · simp [utf8Bytes, h1, h2, h3]
        omega
      · simp [utf8Bytes, h1, h2, h3]
        omega

/-- Lifting the singleton bound to the flatMap encoding of any List Char document: the byte image of TSeg.text can never contain 0xFF. -/
theorem textBytes_no_ff (cs : List Char) : 0xFF ∉ cs.flatMap utf8Bytes := by
  induction cs with
  | nil => simp
  | cons c cs ih =>
      intro h
      change 0xFF ∈ utf8Bytes c ++ cs.flatMap utf8Bytes at h
      simp only [List.mem_append] at h
      rcases h with hc | hrest
      · exact delimiter_utf8Bytes_no_ff c hc
      · exact ih hrest

/-- ByteCore.utf8Valid_head_ff says a byte string headed by 0xFF is invalid UTF-8; combined with ByteCore.utf8Valid_utf8Bytes it rules out even a 0xFF-headed image of one Char. -/
theorem utf8Bytes_ne_ff_cons (c : Char) (bs : List Nat) : utf8Bytes c ≠ 0xFF :: bs := by
  intro h
  have hv := utf8Valid_utf8Bytes c
  rw [h] at hv
  rw [utf8Valid_head_ff] at hv
  cases hv

/-- If a token-free segment list has allText = some cs, its byteForm is exactly cs.flatMap utf8Bytes; the induction handles several adjacent text segments. -/
theorem byteForm_of_allText (segs : List TSeg) (cs : List Char)
    (h : allText segs = some cs) : byteForm segs = cs.flatMap utf8Bytes := by
  induction segs generalizing cs with
  | nil =>
      simp [allText, byteForm] at h
      subst cs
      rfl
  | cons s segs ih =>
      cases s with
      | tok k => simp [allText] at h
      | text ccs =>
          cases hrest : allText segs with
          | none => simp [allText, hrest] at h
          | some rs =>
              simp [allText, hrest] at h
              subst cs
              simpa [byteForm, segBytes, List.flatMap_append] using ih rs hrest

/-- The byte form of any token-free representable document contains no 0xFF byte. -/
theorem allText_byteForm_no_ff (segs : List TSeg) (cs : List Char)
    (h : allText segs = some cs) : 0xFF ∉ byteForm segs := by
  rw [byteForm_of_allText segs cs h]
  exact textBytes_no_ff cs

/-- Concretely, a freshly created ParseState.ofSource document has no 0xFF in its byte form. -/
theorem ofSource_byteForm_no_ff (cs : List Char) :
    0xFF ∉ byteForm (ParseState.ofSource cs).work := by
  cases cs with
  | nil => simp [ParseState.ofSource, normSegs, allText, byteForm, segBytes]
  | cons c cs =>
      simpa [ParseState.ofSource, normSegs, byteForm, segBytes] using textBytes_no_ff (c :: cs)

/-- The reference regex is '/'. $wiki->delim . '/' , i.e. a single literal 0xFF byte; a match exists exactly when that byte occurs in the subject byte string. -/
theorem delimiter_ref_regex_no_match (cs : List Char) : ¬ (0xFF ∈ cs.flatMap utf8Bytes) :=
  textBytes_no_ff cs

/-- The same no-match fact at the segment level: on token-free text the reference Delimiter regex has no match, so the reference callback fires zero times. -/
theorem delimiter_ref_regex_no_match_of_allText (segs : List TSeg) (cs : List Char)
    (h : allText segs = some cs) : 0xFF ∉ byteForm segs :=
  allText_byteForm_no_ff segs cs h

/-! ## 3. Kernel-free reference form on representable states -/

/-- The kernel-free reference form of the Delimiter effect. The PHP regex is a literal byte, so no PCRE kernel is needed: on a subject with no 0xFF the reference performs zero replacements and returns the state unchanged. The no-match proof is an explicit argument, so this definition is only ever applied on representable documents; the case of a raw undecoded 0xFF byte, where the PHP rule emits a tok, is the named representational remainder and is deliberately NOT defined as identity here. -/
def delimiterRuleRefKernelFree (st : ParseState) (hnoff : 0xFF ∉ byteForm st.work) : ParseState := st

/-- Direct kernel-free equality under an explicit no-0xFF premise. -/
theorem delimiter_eq_ref_of_no_ff (st : ParseState) (hnoff : 0xFF ∉ byteForm st.work) :
    delimiterRule st = delimiterRuleRefKernelFree st hnoff := rfl

/-- The scoped headline theorem: on every representable WFState, i.e. a well-formed token-free state whose work text is some decoded List Char stream, the mirror's identity output is the kernel-free reference form, and the no-0xFF premise is witnessed by the encoding lemmas above. REMAINDER (Boundary-B representational gap, not a proved equality): PHP byte strings may carry a raw undecoded 0xFF byte; the mirror's TSeg.text is List Char and no Char encodes to 0xFF, so such a document is not representable here. FrameRules.lean's own Delimiter comment records a byte-level PHP probe where the rule does fire on that byte. This theorem therefore claims equality only on representable documents and names the byte-level case as the remainder rather than claiming a global Boundary-A/B equality. -/
theorem delimiter_eq_ref_kernel_free (st : ParseState) (hwf : WFState st)
    (hfree : ∃ cs : List Char, allText st.work = some cs) :
    ∃ hnoff : 0xFF ∉ byteForm st.work,
      delimiterRule st = delimiterRuleRefKernelFree st hnoff := by
  obtain ⟨cs, hcs⟩ := hfree
  have hnoff : 0xFF ∉ byteForm st.work := allText_byteForm_no_ff st.work cs hcs
  exact ⟨hnoff, rfl⟩

-- Axiom audit for the headline theorems of this unit.
#print axioms delimiterRule_id_restated
#print axioms delimiterRule_preserves_wf
#print axioms delimiterRule_tokEquiv
#print axioms textBytes_no_ff
#print axioms allText_byteForm_no_ff
#print axioms delimiter_ref_regex_no_match_of_allText
#print axioms delimiter_eq_ref_kernel_free

end LeanFtml
