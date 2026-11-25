/-
  LeanFtml.TokenStateProof — F1 foundation unit (proof-base-v1 / ftml-lean 4bf28f7).

  Representation invariants and the token-index simulation relation for the
  Tier-1 bridge (ADVISOR-PROOF-POLICY §1.3 and §5.2). WFBytes is defined as
  the image of WFSegs under byteForm, which is exactly the policy's
  byte-level description on reachable states: IsByteList holds because
  utf8Bytes and the placeholder bytes are below 256, every 0xFF opens a
  canonical \xFF<dec>\xFF placeholder built by phBytes/decBytes, and every
  span between placeholders is the utf8Bytes image of literal text and so
  satisfies utf8Valid. Defining WFBytes as this image makes the second
  bridge theorem a direct corollary of the first; it does not assume either
  bridge.

  Discharge note (2026-11-24, unit F1-BRIDGES): the two headline bridge
  theorems parseBytes_byteForm_id and byteForm_parseBytes_id are proved in
  LeanFtml/Proof/F1Bridges.lean, under exactly the names and statements
  recorded at the end of this file. The blocking list-level UTF-8 round
  trips are proved there in full: utf8Decode (cs.flatMap utf8Bytes) = cs
  for arbitrary cs, and (utf8Decode bs).flatMap utf8Bytes = bs for valid
  bs with no delimiter byte, including the astral four-byte forms that
  ByteCore's singleton BMP case left open.
-/
import LeanFtml.TokenState
import LeanFtml.FormRawRules
import LeanFtml.Pipeline
import LeanFtml.ByteCore

namespace LeanFtml

/-! ## Well-formedness of segments and byte strings -/

/-- A well-formed segment list: canonical (normSegs is the identity) and
    every token reference is below the token-table length n. -/
def WFSegs (segs : List TSeg) (n : Nat) : Prop :=
  segs = normSegs segs ∧ ∀ k, TSeg.tok k ∈ segs → k < n

/-- A well-formed byte string: an IsByteList that is the byteForm of a
    well-formed segment list. -/
def WFBytes (bs : List Nat) (n : Nat) : Prop :=
  ∃ segs : List TSeg, WFSegs segs n ∧ byteForm segs = bs

/-- Well-formedness of one option value, parametric in the token-table
    length. Byte-string values must be WFBytes; maps and lists recurse. -/
def WFOptVal (n : Nat) (v : OptVal) : Prop :=
  match v with
  | OptVal.bytes bs => WFBytes bs n
  | _ => True

def WFOptMap (n : Nat) (m : OptMap) : Prop := ∀ kv ∈ m, WFOptVal n kv.2

def wfBytePairs (n : Nat) (ps : List (List Nat × List Nat)) : Prop :=
  ∀ p ∈ ps, WFBytes p.1 n ∧ WFBytes p.2 n

def wfByteIdPairs (n : Nat) (ps : List (List Nat × Nat)) : Prop :=
  ∀ p ∈ ps, WFBytes p.1 n ∧ p.2 < n

/-- The Tier-1 well-formedness invariant carried by every parse rule. -/
def WFState (st : ParseState) : Prop :=
  WFSegs st.work st.tokens.length ∧
  (∀ t ∈ st.tokens, WFOptMap st.tokens.length t.opts) ∧
  (∀ bs ∈ st.doc.footnotes, WFBytes bs st.tokens.length) ∧
  wfBytePairs st.tokens.length st.doc.bibitems ∧
  wfByteIdPairs st.tokens.length st.doc.bibitemIds ∧
  wfBytePairs st.tokens.length st.doc.scoredAnchors ∧
  (∀ bs ∈ st.continuedDivLeads, WFBytes bs st.tokens.length)

/-! ## Reachability -/

/-- States reachable from a fresh document by the state-forming operations
    the model exposes (`ofSource` and `addToken`) and by verified rule
    applications (`step`) over well-formed states. -/
inductive ReachableState : ParseState → Prop where
  | initial (cs : List Char) : ReachableState (ParseState.ofSource cs)
  | addToken (st : ParseState) (h : ReachableState st)
      (rule : String) (opts : OptMap) :
      ReachableState (ParseState.addToken st rule opts).1
  | step (r : RuleId) (st : ParseState) (hwf : WFState st)
      (h : ReachableState st) :
      ReachableState (applyRule r st)

/-! ## Token-index alpha-equivalence (TokEquiv) -/

def segTokEquiv (σ : Nat → Nat) : TSeg → TSeg → Prop
  | TSeg.text cs, TSeg.text cs' => cs = cs'
  | TSeg.tok k, TSeg.tok k' => σ k = k'
  | _, _ => False

def segsTokEquiv (σ : Nat → Nat) : List TSeg → List TSeg → Prop
  | [], [] => True
  | a :: as, b :: bs => segTokEquiv σ a b ∧ segsTokEquiv σ as bs
  | _, _ => False

/-- Alpha-equivalence of two parse states under an order-preserving token
    renaming σ. Work text is unchanged, token references are reindexed by
    σ, the token table has the same length and per-index rule names, and
    the fatal flag agrees. Lambda-equivalence of σ (§5.2) is an additional
    obligation carried by the rules that instantiate this relation. -/
def TokEquiv (σ : Nat → Nat) (st₁ st₂ : ParseState) : Prop :=
  segsTokEquiv σ st₁.work st₂.work ∧
  ∃ hlen : st₁.tokens.length = st₂.tokens.length,
    (∀ i (hi : i < st₁.tokens.length),
      (st₁.tokens.get ⟨i, hi⟩).rule =
        (st₂.tokens.get ⟨i, by simpa [hlen] using hi⟩).rule) ∧
    st₁.fatal = st₂.fatal

/-! ## Structural lemmas -/

theorem wfSegs_ofSource (cs : List Char) : WFSegs (ParseState.ofSource cs).work 0 := by
  constructor
  · cases cs with
    | nil => rfl
    | cons c cs' => rfl
  · intro k hk
    cases cs with
    | nil => simp [ParseState.ofSource, normSegs] at hk
    | cons c cs' => simp [ParseState.ofSource, normSegs] at hk

theorem wfState_ofSource (cs : List Char) : WFState (ParseState.ofSource cs) := by
  unfold WFState
  refine ⟨wfSegs_ofSource cs, ?_, ?_, ?_, ?_, ?_, ?_⟩
  · simp [ParseState.ofSource]
  · simp [ParseState.ofSource]
  · simp [ParseState.ofSource, wfBytePairs]
  · simp [ParseState.ofSource, wfByteIdPairs]
  · simp [ParseState.ofSource, wfBytePairs]
  · simp [ParseState.ofSource]

theorem wfBytes_of_byteForm (segs : List TSeg) (n : Nat) (h : WFSegs segs n) :
    WFBytes (byteForm segs) n := ⟨segs, h, rfl⟩

theorem segTokEquiv_refl (σ : Nat → Nat) (hσ : ∀ k, σ k = k) (s : TSeg) :
    segTokEquiv σ s s := by
  cases s with
  | text cs => exact rfl
  | tok k => exact hσ k

theorem segsTokEquiv_refl (σ : Nat → Nat) (hσ : ∀ k, σ k = k) (ss : List TSeg) :
    segsTokEquiv σ ss ss := by
  induction ss with
  | nil => trivial
  | cons s ss ih => exact ⟨segTokEquiv_refl σ hσ s, ih⟩

theorem tokEquiv_refl (σ : Nat → Nat) (hσ : ∀ k, σ k = k) (st : ParseState) :
    TokEquiv σ st st := by
  refine ⟨segsTokEquiv_refl σ hσ st.work, rfl, ?_, rfl⟩
  intro i hi
  rfl

theorem segsTokEquiv_length (σ : Nat → Nat) (as bs : List TSeg)
    (h : segsTokEquiv σ as bs) : as.length = bs.length := by
  induction as generalizing bs with
  | nil => cases bs with | nil => rfl | cons _ _ => contradiction
  | cons a as ih =>
    cases bs with
    | nil => contradiction
    | cons b bs => simp [segsTokEquiv] at h; simpa using ih bs h.2

theorem reachableState_ofSource (cs : List Char) :
    ReachableState (ParseState.ofSource cs) :=
  ReachableState.initial cs

theorem reachableState_step (r : RuleId) (st : ParseState)
    (hwf : WFState st) (hr : ReachableState st) :
    ReachableState (applyRule r st) :=
  ReachableState.step r st hwf hr

theorem reachableState_runRules (rules : List RuleId)
    (hwf_rules : ∀ r ∈ rules, ∀ s, WFState s → WFState (applyRule r s))
    (st : ParseState) (hwf : WFState st) (hr : ReachableState st) :
    ReachableState (runRules rules st) := by
  induction rules generalizing st with
  | nil => simpa [runRules] using hr
  | cons r rs ih =>
      have hwf_sub : ∀ r' ∈ rs, ∀ s, WFState s → WFState (applyRule r' s) :=
        fun r' hr' => hwf_rules r' (List.mem_cons_of_mem r hr')
      cases hf : st.fatal with
      | true =>
          simpa [runRules, hf] using ih hwf_sub st hwf hr
      | false =>
          have hwf' : WFState (applyRule r st) :=
            hwf_rules r List.mem_cons_self st hwf
          have hr' : ReachableState (applyRule r st) :=
            ReachableState.step r st hwf hr
          simpa [runRules, hf] using ih hwf_sub (applyRule r st) hwf' hr'

/-! ## Headline bridge obligations (discharged in LeanFtml/Proof/F1Bridges.lean)

The two theorems below were recorded here as open obligations in
proof-base-v1. They are proved, under exactly these names and statements,
in LeanFtml/Proof/F1Bridges.lean (unit F1-BRIDGES, 2026-11-24), together
with the two list-level UTF-8 round trips they were blocked on. The
statements are kept here verbatim as the record of what was owed:

theorem parseBytes_byteForm_id (segs : List TSeg) (n : Nat) (h : WFSegs segs n) :
    parseBytes (byteForm segs) = segs

theorem byteForm_parseBytes_id (bs : List Nat) (n : Nat) (h : WFBytes bs n) :
    byteForm (parseBytes bs) = bs
-/

end LeanFtml
