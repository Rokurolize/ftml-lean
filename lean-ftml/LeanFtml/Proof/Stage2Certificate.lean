/-
  LeanFtml.Proof.Stage2Certificate — TCB-5 bounded oracle certificate (Stage 2, unit U3).
  This module records the declared domain and the machine-checked finite facts of an EXTERNAL CERTIFICATE whose result is PARTIAL, not a zero-gap certificate. The exhaustive differential run compared Stage2TidyCore.transformTotal against conformance-tidy-oracle/tidy_oracle over all 1,058,060 canonical skeletons of the declared domain (12 tag classes, text terminal separate, depth <= 4, length <= 8), with canonical sorted corpus SHA-256 0c01780e3ac0b30a1984e9bb5b1969a70ce7ec04a859ab0a043aebce62c64281. Of those cases, 35,050 agreed byte-for-byte after the conformance record's outer-whitespace normalization and 1,023,010 diverged. Ten minimal divergence witnesses, including bare <a></a>, <li></li> and <td></td> shapes where libtidy performs implicit structural repair, are recorded in proof-stage2-certificate/manifest.json; the full per-case record is certificate.jsonl. No class or case was excluded from the declared domain to hide a divergence, and fixes to the model belong to the coordinator lane. The differential is deliberately NOT asserted as a Lean theorem, because libtidy.so.58 is a 50,000-line external C library and is not a Lean term. No claim is made for depth > 4, length > 8, or the full libtidy behavior; the 266 settled cases, the 39 remainder probes and named remainders U1-U5 of stage2/G2-SCOPE.md sit outside this bound. The exhaustive differential fact is an external certificate with a recorded gap, not a universal proof.
-/
namespace LeanFtml
namespace Stage2Certificate

/-- The 12 quotient tag classes of the Stage 2 tag-skeleton language. -/
inductive S2Tag where
  | span | strong | em | a | div | p | table | td | ul | li | br | code
  deriving DecidableEq, Repr

/-- The text terminal X is a separate terminal class; it is not one of the 12 tag classes. -/
inductive S2Token where
  | tag : S2Tag → S2Token
  | text : S2Token
  deriving DecidableEq, Repr

/-- The declared 12-class alphabet, in generator order, with br the single void class. -/
def s2TagAlphabet : List S2Tag :=
  [S2Tag.span, S2Tag.strong, S2Tag.em, S2Tag.a, S2Tag.div, S2Tag.p,
   S2Tag.table, S2Tag.td, S2Tag.ul, S2Tag.li, S2Tag.br, S2Tag.code]

/-- Maximum open-stack depth of the certificate domain. -/
def maxDepth : Nat := 4

/-- Maximum skeleton token count of the certificate domain. -/
def maxLength : Nat := 8

/-- Exact cardinality of the exhaustive canonical skeleton corpus. -/
def corpusCardinality : Nat := 1058060

/-- SHA-256 of the canonical sorted corpus byte stream recorded in manifest.json. -/
def corpusSha256 : String :=
  "0c01780e3ac0b30a1984e9bb5b1969a70ce7ec04a859ab0a043aebce62c64281"

/-- The declared TCB-5 bound and its recorded corpus facts. -/
structure CertificateDomain where
  tagClasses : Nat
  depthBound : Nat
  lengthBound : Nat
  cardinality : Nat

/-- The single declared domain; the generator does not narrow it. -/
def declaredDomain : CertificateDomain :=
  { tagClasses := 12, depthBound := 4, lengthBound := 8, cardinality := 1058060 }

theorem stage2_cert_alphabet_card : s2TagAlphabet.length = 12 := rfl

theorem stage2_cert_alphabet_nodup : s2TagAlphabet.Nodup := by decide

theorem stage2_cert_text_terminal_not_a_tag (t : S2Tag) : S2Token.text ≠ S2Token.tag t := by
  intro h
  cases h

theorem stage2_cert_cardinality_pos : 0 < corpusCardinality := by decide

theorem stage2_cert_bounds : maxDepth = 4 ∧ maxLength = 8 := by
  constructor <;> rfl

theorem stage2_cert_domain_card : declaredDomain.tagClasses = 12 := rfl

theorem stage2_cert_hash_constant : corpusSha256 = "0c01780e3ac0b30a1984e9bb5b1969a70ce7ec04a859ab0a043aebce62c64281" := rfl

end Stage2Certificate
end LeanFtml
