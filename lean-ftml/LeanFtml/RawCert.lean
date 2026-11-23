import LeanFtml.FormRawRules
import LeanFtml.RawHeadingRules

/-!
  LeanFtml.RawCert — a bounded composite-Raw certificate and a divergence record.

  This unit supplies the four elements of a proof-grade bounded certificate under ADVISOR-PROOF-POLICY section 2.1: a Lean quotient/prediction law, an explicit generator and cardinality, a zero-mismatch exhaustive check with a deterministic hash, and a named remainder. It is a bounded certificate only, not a universal equivalence theorem.
  The span domain is single-span, newline-free, short runs: opener run 0..6, closer run 0..6, body in {empty, Z, ZZ}, giving 7*7*3 = 147 cases.
  The prediction law is the composite reading of the corrected scanner: a bare merged run under the four-byte threshold, a short opener claiming the body, a 4+ opener cancelling against a two- or three-run closer, and a 4+ opener meeting a 4+ closer as two empty tokens.
  The zero-mismatch theorem checks the mirror's observed view against that prediction on every generated case by `decide`, and the observed-view table is emitted below for an external SHA-256 digest.
  NAMED REMAINDER: this certificate does NOT cover cross-line families, multiple spans, runs of length seven or more, later-quad re-association, or placeholder-bearing bodies. Other units prove general laws for some of those families; none of them is claimed here.
  The later-quad divergence is recorded below as a regression/divergence witness only, never as a proof of equivalence; the fix belongs to the coordinator's REFCORR lane and the mirror was not edited.
-/

namespace LeanFtml

namespace RawCert

/-- The composite empty Raw token, definitionally the one `claimText "Raw" []` appends. -/
def rc_emptyToken : TokenEntry :=
  { rule := "Raw", opts := [("text".toList, OptVal.str [])] }

/-- The composite Raw text token for a claimed body. -/
def rc_textToken (text : List Nat) : TokenEntry :=
  { rule := "Raw", opts := [("text".toList, textVal text)] }

/-- The observed view: output bytes paired with each claimed token's text bytes. -/
def rc_view (p : List Nat × List TokenEntry) : List Nat × List (List Nat) :=
  (p.1, p.2.map fun t => optStrBytes t.opts "text".toList)

/-- The composite reading of a bare merged run of `k` '@' bytes. -/
def rc_threshView (k : Nat) : List Nat × List (List Nat) :=
  if k ≥ 4 then (phBytes 0 ++ List.replicate (k - 4) 64, [[]])
  else (List.replicate k 64, [])

/-- The composite prediction for one opener run, one '@'-free body and one closer run on one line. -/
def rc_predictView (r c : Nat) (mid : List Nat) : List Nat × List (List Nat) :=
  if mid.isEmpty then
    rc_threshView (r + c)
  else if r ≥ 4 && c ≥ 4 then
    (phBytes 0 ++ List.replicate (r - 4) 64 ++ mid ++ phBytes 1 ++
        List.replicate (c - 4) 64, [[], []])
  else if r ≥ 4 && c ≥ 2 then
    (List.replicate (r - 4) 64 ++ mid ++ List.replicate c 64, [])
  else if r ≥ 4 then
    (phBytes 0 ++ List.replicate (r - 4) 64 ++ mid ++ List.replicate c 64, [[]])
  else if r ≥ 2 && c ≥ 4 then
    let text := (if r = 3 then [64] else []) ++ mid
    (phBytes 0 ++ List.replicate (c - 2) 64, [text])
  else if r ≥ 2 && c ≥ 2 then
    let text := (if r = 3 then [64] else []) ++ mid
    let trail := if c = 3 then [64] else []
    (phBytes 0 ++ trail, [text])
  else if r ≥ 2 then
    (List.replicate r 64 ++ mid ++ List.replicate c 64, [])
  else
    let tail := rc_threshView c
    (List.replicate r 64 ++ mid ++ tail.1, tail.2)

/-- The generator's body alphabet: empty, Z, ZZ, with Z the byte 90. -/
def rc_bodies : List (List Nat) := [[], [90], [90, 90]]

/-- The explicit generator: every opener length below seven, every closer length below seven, every body in the alphabet, in that nested order. -/
def rc_cases : List (Nat × Nat × List Nat) :=
  (List.range 7).flatMap fun r =>
    (List.range 7).flatMap fun c =>
      rc_bodies.map fun mid => (r, c, mid)

/-- The observed view of one generated source under the mirror. -/
def rc_observedView (r c : Nat) (mid : List Nat) : List Nat × List (List Nat) :=
  let src := List.replicate r 64 ++ mid ++ List.replicate c 64
  rc_view (rawScan none src [] (src.length + 1))

/-- The exhaustive zero-mismatch predicate over all generated cases. -/
def rc_enumOk : Bool :=
  rc_cases.all fun (r, c, mid) => rc_observedView r c mid == rc_predictView r c mid

set_option maxRecDepth 100000 in
/-- Machine-checked cardinality: the generator emits exactly 147 cases. -/
theorem rc_card : rc_cases.length = 147 := by decide

set_option maxRecDepth 100000 in
/-- Machine-checked factorization of the cardinality: 7 opener lengths times 7 closer lengths times 3 bodies. -/
theorem rc_card_factors : rc_cases.length = 7 * 7 * 3 := by decide

set_option maxHeartbeats 2000000 in
/-- The exhaustive zero-mismatch check: mirror view equals composite prediction on all 147 generated cases. -/
theorem rc_span_enum_zero_mismatch : rc_enumOk = true := by decide

/-- One length-prefixed row of the canonical observed-view table: opener, closer, body, then output bytes and token texts, all length-delimited. -/
def rc_encodeRow (r c : Nat) (mid : List Nat) : List Nat :=
  let v := rc_observedView r c mid
  [r, c, mid.length] ++ mid ++ [v.1.length] ++ v.1 ++
    [v.2.length] ++ v.2.flatMap (fun t => [t.length] ++ t)

/-- The canonical observed-view table, a flat length-delimited list of Nat. -/
def rc_table : List Nat :=
  rc_cases.flatMap fun (r, c, mid) => rc_encodeRow r c mid

-- CERTIFICATE HASH: SHA-256 of the raw `#eval! rc_table` output block is a23386c7015706307c3a6e2951ff8151b3bc7757b9b1dc0478669f99c734ae3a, computed outside Lean by dumping the build output to a temp file, extracting the 58-line table block and running sha256sum.

-- Dump the canonical table for the external digest; the emitted block is the hash input.
#eval! rc_table

/-! ## Divergence witness (regression/divergence record, not an equivalence proof)

`@@@@a@@@b@@@@` is the shortest source with a 4+ opener, a one-byte body, a three-run closer, a non-'@' separator and a later 4-run on one line. The mirror's `preOk` arm `some _, none => true` ignores `hasLaterQuad` when the tail has no newline, so the lead>=2 branch fires; the reference takes the empty-Raw early exit instead. The right-hand side of the inequality is the reference byte shape from PHP 8.5.4 `state-restricted.php Raw` on this source: one empty Raw, the literal `a`, one Raw whose text is `@b`, then `@@`. This is a divergence record only. The fix belongs to the coordinator's REFCORR lane and the mirror was not edited by this unit.
-/

/-- The mirror's exact byte/token result on the later-quad divergence shape, by kernel computation. -/
theorem rc_div_later_quad_mirror :
    rawScan none (litBytes "@@@@a@@@b@@@@") [] 14 =
      (litBytes "a@@@b" ++ phBytes 0, [rc_emptyToken]) := by rfl

/-- The mirror's output bytes differ from the reference byte shape, by `decide`. -/
theorem rc_div_later_quad_ne_reference :
    (rawScan none (litBytes "@@@@a@@@b@@@@") [] 14).1 ≠
      phBytes 0 ++ litBytes "a" ++ phBytes 1 ++ litBytes "@@" := by decide

/-! ## REGRESSION-ONLY pins

The following named pins are regression evidence from REPORT-RAW-ADJUDICATE.md, excluded from the proof count per policy G4. They are ground `rfl` checks against the corrected mirror and establish no universal law.
-/

/-- REGRESSION-ONLY: a bare three-run stays literal and claims no token (bare-3). -/
theorem rc_reg_bare3_no_token :
    rawScan none [64, 64, 64] [] 4 = ([64, 64, 64], []) := by rfl

/-- REGRESSION-ONLY: a bare four-run yields exactly one empty Raw token (bare-4/iw-empty4/date-empty4). -/
theorem rc_reg_bare4_one_empty :
    rawScan none [64, 64, 64, 64] [] 5 = (phBytes 0, [rc_emptyToken]) := by rfl

/-- REGRESSION-ONLY: the empty Raw token renders as nothing (render elision). -/
theorem rc_reg_render_elision : renderRaw rc_emptyToken.opts = [] := by rfl

/-- REGRESSION-ONLY: cross-line shaping claims the body and drops the newline (xl-basic). -/
theorem rc_reg_crossline_body :
    rawScan none [64, 64, 90, 10, 64, 64] [] 7 =
      (phBytes 0, [rc_textToken [90]]) := by rfl

#print axioms rc_card
#print axioms rc_card_factors
#print axioms rc_span_enum_zero_mismatch
#print axioms rc_div_later_quad_mirror
#print axioms rc_div_later_quad_ne_reference
#print axioms rc_reg_bare3_no_token
#print axioms rc_reg_bare4_one_empty
#print axioms rc_reg_render_elision
#print axioms rc_reg_crossline_body

end RawCert

end LeanFtml
