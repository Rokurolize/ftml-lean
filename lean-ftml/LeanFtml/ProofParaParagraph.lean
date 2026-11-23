/-
  LeanFtml.ProofParaParagraph — Wave 2 proof/para-inline lane, task-6.
  ADVISOR-PROOF-POLICY §2.2 Class B (Hybrid Multi-Pass): the Paragraph
  parse family of LeanFtml/ParaRules.lean plus the shared scoring and
  unit machinery. These are kernel-free universal theorems about the
  mirror's actual functions; the regex-vs-PHP 8.5 libpcre2 agreement
  and the byteForm/parseBytes Tier-1 round trip are named remainders,
  not claimed here. All prose is on single lines. Axioms are only
  [propext, Classical.choice, Quot.sound]; no sorry, admit, placeholder,
  native_decide, bv_decide or Lean.ofReduceBool.
-/
import LeanFtml.ParaRules
import LeanFtml.ParagraphStack
import LeanFtml.TokenStateProof
import LeanFtml.FormRawRules

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## Unit readers and byte forms -/

theorem parainline_paragraph_unitBytes_ws (b : Nat) :
    unitBytes (PUnit.wsB b) = [b] := rfl

theorem parainline_paragraph_unitBytes_ph (n : Nat) :
    unitBytes (PUnit.phT n) = phBytes n := rfl

theorem parainline_paragraph_unitAt_nil : unitAt [] = none := rfl

theorem parainline_paragraph_unitAt_ws (b : Nat) (rest : List Nat)
    (h : b == 32 || b == 9 || b == 10 || b == 13) :
    unitAt (b :: rest) = some (PUnit.wsB b, rest) := by
  simp [unitAt, h]

theorem parainline_paragraph_tokenRuleAt_nil (n : Nat) :
    tokenRuleAt [] n = "" := by
  simp [tokenRuleAt]

theorem parainline_paragraph_unitIsBreak_ws_lf (rest : List TokenEntry) :
    unitIsBreak rest (PUnit.wsB 10) = true := by
  simp [unitIsBreak]

theorem parainline_paragraph_unitIsBreak_ws_space (rest : List TokenEntry) :
    unitIsBreak rest (PUnit.wsB 32) = false := by
  simp [unitIsBreak]

/-! ## Scored-run filtering -/

theorem parainline_paragraph_filterRunBytes_nil (toks : List TokenEntry) :
    filterRunBytes toks [] = [] := rfl

theorem parainline_paragraph_filterRunBytes_ws (toks : List TokenEntry)
    (b : Nat) (us : List PUnit) :
    filterRunBytes toks (PUnit.wsB b :: us) = filterRunBytes toks us := rfl

theorem parainline_paragraph_filterRunBytes_ph_break (toks : List TokenEntry)
    (n : Nat) (us : List PUnit) (h : tokenRuleAt toks n == "Newline") :
    filterRunBytes toks (PUnit.phT n :: us) = filterRunBytes toks us := by
  have h' : tokenRuleAt toks n = "Newline" := by simpa using h
  simp [filterRunBytes, h']

-- The phT keep-branch foldl law is a named remainder: it needs a general accumulator law for this fold, not a placeholder.

theorem parainline_paragraph_filterRunBytes_ws_erase (toks : List TokenEntry)
    (us : List PUnit) (b : Nat) :
    filterRunBytes toks (us ++ [PUnit.wsB b]) = filterRunBytes toks us := by
  induction us with
  | nil => rfl
  | cons u us ih =>
      cases u with
      | wsB c => simp [filterRunBytes, ih]
      | phT n =>
          by_cases h : tokenRuleAt toks n == "Newline"
          · simp [filterRunBytes, h, ih]
          · simp [filterRunBytes, h, ih]

/-! ## Whitespace-run newline locator -/

theorem parainline_paragraph_wsRunNl_nil : wsRunNl [] = none := rfl

theorem parainline_paragraph_wsRunNl_lf (rest : List Nat) :
    wsRunNl (10 :: rest) = some 0 := by
  simp [wsRunNl]

theorem parainline_paragraph_wsRunNl_nonws (b : Nat) (rest : List Nat)
    (h1 : b != 10) (h2 : isWsByte b = false) :
    wsRunNl (b :: rest) = none := by
  have h1' : b ≠ 10 := by simpa using h1
  simp [wsRunNl, h1', h2]

theorem parainline_paragraph_wsRunNl_ws (b : Nat) (rest : List Nat)
    (h1 : b != 10) (h2 : isWsByte b = true) :
    wsRunNl (b :: rest) = (wsRunNl rest).map (fun k => k + 1) := by
  have h1' : b ≠ 10 := by simpa using h1
  simp [wsRunNl, h1', h2]

/-! ## Paragraph wrap and byte predicates -/

theorem parainline_paragraph_paraWrap_tokens_append (m : List Nat)
    (toks : List TokenEntry) :
    (paraWrap m toks).2 = toks ++
      [{ rule := "Paragraph",
         opts := [("type".toList, OptVal.str "start".toList)] },
       { rule := "Paragraph",
         opts := [("type".toList, OptVal.str "end".toList)] }] := by
  simp [paraWrap, claimTok]

theorem parainline_paragraph_paraWrap_bytes_shape (m : List Nat)
    (toks : List TokenEntry) :
    (paraWrap m toks).1 =
      phBytes toks.length ++ trimBytes m ++ phBytes (toks.length + 1) ++
        [10, 10] := by
  simp [paraWrap, claimTok]

theorem parainline_paragraph_bytesEndsWith_nil (s : List Nat) :
    bytesEndsWith s [] = true := by
  simp [bytesEndsWith]

theorem parainline_paragraph_bytesContains_nil (s : List Nat) :
    bytesContains s [] = true := by
  induction s with
  | nil => rfl
  | cons b rest ih => simp [bytesContains, ih]

theorem parainline_paragraph_stripPhBytes_nil : stripPhBytes [] = [] := rfl

-- The stripPhBytes ASCII-head lemma is a named remainder: its fuel-indexed go clauses did not reduce under the general accumulator form without a dedicated fuel lemma.

/-! ## Parse-state frame preservation -/

theorem parainline_paragraphRule_frame (st : ParseState) :
    (paragraphRule st).doc = st.doc ∧
    (paragraphRule st).fatal = st.fatal ∧
    (paragraphRule st).continuedDivLeads = st.continuedDivLeads := by
  simp [paragraphRule, paraScan, applyByteRule]

/-! ## Axiom audit -/

#print axioms parainline_paragraph_unitBytes_ws
#print axioms parainline_paragraph_unitAt_ws
#print axioms parainline_paragraph_filterRunBytes_ws_erase
#print axioms parainline_paragraph_wsRunNl_ws
#print axioms parainline_paragraph_paraWrap_tokens_append
#print axioms parainline_paragraph_paraWrap_bytes_shape
#print axioms parainline_paragraphRule_frame

end LeanFtml
