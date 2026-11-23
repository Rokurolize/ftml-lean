/-
  LeanFtml.ProofInline1 — Wave 2 proof/para-inline lane, task-7.
  ADVISOR-PROOF-POLICY §2.2 Class B (Hybrid Multi-Pass): the Url,
  Mathinline and Interwiki parse families of LeanFtml/Inline1Rules.lean
  (Email is a separate Wave 1 lane and is untouched). Kernel-free
  universal theorems about the mirror's shared scanners and option
  readers are proved here; the regex-vs-PHP 8.5 libpcre2 agreement and
  the Tier-1 byteForm/parseBytes round trip are named remainders.
  All prose is on single lines. Axioms are only [propext,
  Classical.choice, Quot.sound]; no sorry, admit, placeholder,
  native_decide, bv_decide or Lean.ofReduceBool.
-/
import LeanFtml.Inline1Rules
import LeanFtml.TokenStateProof
import LeanFtml.FormRawRules

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## Shared scanners -/

theorem parainline_inline1_runOf_nil (p : Nat → Bool) : runOf p [] = 0 := rfl

theorem parainline_inline1_runOf_cons_true (p : Nat → Bool) (b : Nat)
    (rest : List Nat) (h : p b = true) :
    runOf p (b :: rest) = runOf p rest + 1 := by
  simp [runOf, h]

theorem parainline_inline1_runOf_cons_false (p : Nat → Bool) (b : Nat)
    (rest : List Nat) (h : p b = false) :
    runOf p (b :: rest) = 0 := by
  simp [runOf, h]

theorem parainline_inline1_isAlphaB_iff (b : Nat) :
    isAlphaB b = true ↔ (65 ≤ b ∧ b ≤ 90) ∨ (97 ≤ b ∧ b ≤ 122) := by
  simp [isAlphaB]

theorem parainline_inline1_descrTail_zero (p : Nat → Bool) (bs : List Nat)
    (h : runOf p bs = 0) : descrTail p bs = none := by
  simp [descrTail, h]

theorem parainline_inline1_descrTail_no_close (p : Nat → Bool) (bs : List Nat)
    (h0 : runOf p bs ≠ 0) (hc : bs[runOf p bs]? != some 93) :
    descrTail p bs = none := by
  have hc' : ¬ bs[runOf p bs]? = some 93 := by simpa using hc
  simp [descrTail, h0, hc']

theorem parainline_inline1_pregScan_nil
    (m : List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry))
    (toks : List TokenEntry) : pregScan m [] toks = ([], toks) := rfl

theorem parainline_inline1_pregScan_go_all_none
    (m : List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry))
    (h : ∀ s ts, m s ts = none) :
    ∀ (bs : List Nat) (toks : List TokenEntry) (fuel : Nat),
      bs.length < fuel → pregScan.go m bs toks fuel = (bs, toks) := by
  intro bs
  induction bs with
  | nil =>
      intro toks fuel hlen
      cases fuel <;> rfl
  | cons b rest ih =>
      intro toks fuel hlen
      cases fuel with
      | zero => omega
      | succ f =>
          have hm : m (b :: rest) toks = none := h _ _
          have hlen' : rest.length < f := by
            simpa using hlen
          simp [pregScan.go, hm, ih toks f hlen']

theorem parainline_inline1_pregScan_all_none
    (m : List Nat → List TokenEntry → Option (List Nat × List Nat × List TokenEntry))
    (bs : List Nat) (toks : List TokenEntry)
    (h : ∀ s ts, m s ts = none) :
    pregScan m bs toks = (bs, toks) := by
  unfold pregScan
  exact parainline_inline1_pregScan_go_all_none m h bs toks (bs.length + 1)
    (Nat.lt_succ_self _)

/-! ## Mathinline option/substitution algebra -/

theorem parainline_inline1_placeholdersOf_nil : placeholdersOf [] = [] := rfl

theorem parainline_inline1_optStringBytes_str (cs : List Char) :
    optStringBytes (OptVal.str cs) = some (cs.flatMap utf8Bytes) := rfl

theorem parainline_inline1_optStringBytes_bytes (bs : List Nat) :
    optStringBytes (OptVal.bytes bs) = some bs := rfl

theorem parainline_inline1_optStringBytes_bool (b : Bool) :
    optStringBytes (OptVal.bool b) = none := rfl

/-! ## Parse-state frame preservation -/

theorem parainline_inline1_urlRule_frame (st : ParseState) :
    (urlRule st).doc = st.doc ∧ (urlRule st).fatal = st.fatal ∧
    (urlRule st).continuedDivLeads = st.continuedDivLeads := by
  simp [urlRule, applyByteRule]

theorem parainline_inline1_mathinlineRule_frame (st : ParseState) :
    (mathinlineRule st).doc = st.doc ∧ (mathinlineRule st).fatal = st.fatal ∧
    (mathinlineRule st).continuedDivLeads = st.continuedDivLeads := by
  simp [mathinlineRule, applyByteRule]

theorem parainline_inline1_interwikiRule_frame (st : ParseState) :
    (interwikiRule st).doc = st.doc ∧ (interwikiRule st).fatal = st.fatal ∧
    (interwikiRule st).continuedDivLeads = st.continuedDivLeads := by
  simp [interwikiRule, applyByteRule]

/-! ## Axiom audit -/

#print axioms parainline_inline1_runOf_cons_true
#print axioms parainline_inline1_isAlphaB_iff
#print axioms parainline_inline1_descrTail_no_close
#print axioms parainline_inline1_pregScan_all_none
#print axioms parainline_inline1_optStringBytes_str
#print axioms parainline_inline1_urlRule_frame

end LeanFtml
