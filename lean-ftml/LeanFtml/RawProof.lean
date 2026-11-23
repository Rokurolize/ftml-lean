import LeanFtml.RawScanProof
import LeanFtml.RawCrosslineProof
import LeanFtml.RawoldProof
import LeanFtml.RawEquivProof
import LeanFtml.RawBridgeProof
import LeanFtml.RawCert

/-!
  LeanFtml.RawProof — integrating module for the Raw family pilot lane.

  This file is the adoption surface: it imports the six family proof modules and restates their headline results under family-level names. The coordinator wires this single import; the modules stay separate so their write scopes and their theorem groups remain copyable as the template for the other families.

  The structure to copy is:
    1. RawScanProof — general scan laws for rawScan: byte helpers, the bare-run threshold, the long-opener law, '@'-free prefix copying, cross-line surplus shaping, and the hasLaterQuad / rawSurplusClose domain laws; RawCrosslineProof adds the general non-empty cross-line claim law;
    2. RawoldProof — general scan and emit laws for rawoldBody / rawoldScan / renderRawold: safe-alphabet bodies, lookbehind, leftmost claim, placeholder emission, escape identity;
    3. RawEquivProof — composite emit laws (empty Raw renders nothing) and the processRef-shaped equivalence the current tree allows: claimText equals the locally defined PHP-shaped process() spec, with the scanner half explicitly left as the mirror's TCB-4 code;
    4. RawBridgeProof — rule-level emit bridge: rawRule / rawoldRule are applyByteRule on byteForm, placeholder decoding and placeholder inertness under the Raw scanner;
    5. RawCert — the labelled bounded certificate (generator, cardinality 147, SHA-256, named remainder) and the later-quad divergence and regression records, never counted as equivalence proofs.

  Policy status of the inherited draft is adjudicated in REPORT-DSH-PROOF-RAW.md: its general results survive in modules 1 and 5; its ground pins and unlabelled enumeration were demoted to module 5's explicit certificate and regression classes. No theorem here uses sorry, native_decide, bv_decide or Lean.ofReduceBool; the axiom audit is at the foot of this file and in each module.
-/

namespace LeanFtml

/-- Headline Raw scan law: a bare run of n '@' bytes is literal below four, and at or above four is exactly one empty Raw token plus n-4 literal '@' bytes. -/
abbrev raw_family_scan_bare_threshold (n : Nat) := RawScan.rs_bare_threshold n

/-- Headline Raw token-existence law for a bare run: the token count is one exactly when the run is at least four. -/
abbrev raw_family_scan_bare_token_iff (n : Nat) := RawScan.rs_bare_token_iff n

/-- Headline general cross-line claim law: a non-empty newline-free body terminated by one LF and a closer run of c ≥ 2 claims the body and emits the closer surplus. -/
abbrev raw_family_crossline_claim (mid : List Nat) (c : Nat) (toks : List TokenEntry) (fuel : Nat) := RawCrossline.rx_xline_claim mid c toks fuel

/-- Headline Rawold emission law: a Rawold claim appends exactly one token and emits its placeholder. -/
abbrev raw_family_rawold_claim (body : List Nat) (toks : List TokenEntry) := Rawold.ro_claim body toks

/-- Headline composite emit law: an empty Raw token contributes no bytes at render. -/
abbrev raw_family_empty_raw_elides := RawEquiv.re_composite_emptyRaw_renders_nil

/-- Headline processRef-shaped equivalence for Raw: the mirror's claimText equals the PHP-shaped process() spec. -/
abbrev raw_family_processRef_raw (text : List Nat) (toks : List TokenEntry) := RawEquiv.re_claimText_eq_processRef_raw text toks

/-- Headline processRef-shaped equivalence for Rawold. -/
abbrev raw_family_processRef_rawold (text : List Nat) (toks : List TokenEntry) := RawEquiv.re_claimText_eq_processRef_rawold text toks

/-- Headline rule-level bridge: rawRule's token table is exactly the scanner's claim table. -/
abbrev raw_family_rule_tokens (st : ParseState) := RawBridge.rb_rawRule_tokens st

/-- Headline bounded certificate: the composite prediction law holds on all 147 generated cases. -/
abbrev raw_family_certificate_zero_mismatch := RawCert.rc_span_enum_zero_mismatch

/-- Headline divergence record: the later-quad mirror bytes differ from the reference shape; coordinator-owned. -/
abbrev raw_family_divergence_witness := RawCert.rc_div_later_quad_ne_reference

#print axioms raw_family_scan_bare_threshold
#print axioms raw_family_scan_bare_token_iff
#print axioms raw_family_crossline_claim
#print axioms raw_family_rawold_claim
#print axioms raw_family_empty_raw_elides
#print axioms raw_family_processRef_raw
#print axioms raw_family_processRef_rawold
#print axioms raw_family_rule_tokens
#print axioms raw_family_certificate_zero_mismatch
#print axioms raw_family_divergence_witness

end LeanFtml
