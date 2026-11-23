import LeanFtml.TableRules

set_option maxRecDepth 100000

/-!
TableadvCertificate.lean — proof-grade bounded certificate for the Tableadv head-group identities, aligned with ADVISOR-PROOF-POLICY.md section 2.1 (alphabet quotient, explicit bound, exhaustive check with generator, cardinality and hash, named remainder) and section 2.2 Class B (recursive (?R) rules are PcreCore-blocked). The quotient alphabet is Sigma_adv = {quote 34, bracket 93, plain 88}; the generator is quotUpTo certBound over Sigma_adv, that is every string of length at most L = 6, with interaction depth d = 1 (a single head group, explicitly NOT the d = 3 (?R) depth bound), and cardinality sum_{k=0}^{6} 3^k = 1093 (theorem generator_card). The decidable predicate headGroupOk checks genuine identities on the mirror's own advHeadRuns and advHeadRuns.go only, with no second hand-written head matcher: the four structural sanity checks are splice head ++ rest = src, terminal empty head on the whole source, extra-fuel stability, and the candidate-count bound 2^(length+1); the semantic pins are the universal bracket-stop law advHeadRuns (93 :: src) = [([], 93 :: src)], the universal quote-priority law (a front closed quote contributes the first candidate ahead of the single byte), and the plain-front sanity pin (88 :: src starts with head byte 88). Candidate Nodup and monotone head lengths were rejected as pins because the mirror legitimately emits duplicate and overlapping quoted/single parses; the chosen pins fail on a priority-swapped matcher (122 of 301 closed-quote cases) and on a bracket-as-plain matcher (all 1093 cases) in an independent simulation. The exhaustive check is certificate (theorem certificate_true, kernel reduction via decide). The deterministic hash is FNV-1a (32-bit): offset basis 2166136261, prime 16777619, wrap modulo 2^32, generator strings folded in list order and each string in byte order, mix step Nat.xor; exact value 2479005724 = 0x93C2A01C (theorem generatorHash_eq). Honesty on coverage: this check covers exactly the 1,093 representative quotient-alphabet strings; the general byte-class map theorem was attempted as a separate unit but is not committed here, so this raw-source predicate is not claimed to lift automatically to arbitrary raw bytes; the kept universal chunk laws in TableadvProof.lean carry the class-parametric head identities. Named remainder: strings longer than 6, the recursive nested-table body search (tableadvEnumBody, tableadvEnumExtend, tableadvEnumMatch), and PcreCore equivalence are out of scope here and wait for the PcreCore kernel (TCB-2); the PHP 8.5 / oracle differential is prior evidence and is not re-run here. This file uses Lean core axioms only, with no Mathlib, sorry, native_decide, or bv_decide.
-/

namespace LeanFtml

/-- The quotient alphabet Sigma_adv: quote 34, bracket 93, plain 88. -/
def advQuotientAlphabet : List Nat := [34, 93, 88]

/-- All strings of exactly length n over the quotient alphabet. -/
def quotExact : Nat → List (List Nat)
  | 0 => [[]]
  | n + 1 => List.flatMap (fun s => advQuotientAlphabet.map (fun b => s ++ [b])) (quotExact n)

/-- All strings of length at most L over the quotient alphabet, shortest first. -/
def quotUpTo : Nat → List (List Nat)
  | 0 => [[]]
  | L + 1 => quotUpTo L ++ quotExact (L + 1)

/-- The stated interaction/length bound: depth d = 1 (one head group, no (?R) recursion), length L = 6. -/
def certBound : Nat := 6

/-- The generator: all quotient strings of length at most certBound = 6, cardinality 1093. -/
def generator : List (List Nat) := quotUpTo certBound

/-- Bracket-stop semantic pin: a leading bracket 93 admits only the empty head on the whole source. -/
def bracketStopOk (src : List Nat) : Bool :=
  let s := 93 :: src
  advHeadRuns s == [([], s)]

/-- Quote-priority semantic pin: when a closed quote starts the source, its quoted token is the first candidate. -/
def quotePriorityOk (src : List Nat) : Bool :=
  match src with
  | 34 :: rest =>
      let innerLen := (rest.takeWhile (fun x => x != 34)).length
      match rest.drop innerLen with
      | 34 :: _ =>
          match (advHeadRuns src).head? with
          | some p => p.1.take (innerLen + 2) == src.take (innerLen + 2) && p.1 ++ p.2 == src
          | none => false
      | _ => true
  | _ => true

/-- Plain-front sanity pin: a plain byte 88 at the head starts the first candidate head. -/
def plainFirstOk (src : List Nat) : Bool :=
  match (advHeadRuns (88 :: src)).head? with
  | some p => p.1.head? == some 88
  | none => false

/-- The only matcher used here is the mirror's own advHeadRuns from TableRules; no second hand-written copy is introduced. A source passes headGroupOk iff the four structural checks hold (splice, terminal empty head, extra-fuel stability, candidate-count bound) and the three semantic pins hold. -/
def headGroupOk (src : List Nat) : Bool :=
  let runs := advHeadRuns src
  let spliceOk := List.all runs (fun (p : List Nat × List Nat) => p.1 ++ p.2 == src)
  let terminalOk := match runs.getLast? with
    | some p => p.1 == [] && p.2 == src
    | none => false
  let fuelOk := advHeadRuns.go src (src.length + 1 + 2) == runs
  let countOk := decide (runs.length ≤ 2 ^ (src.length + 1))
  spliceOk && terminalOk && fuelOk && countOk && bracketStopOk src && quotePriorityOk src && plainFirstOk src

/-- The exhaustive check: every generator string satisfies headGroupOk. -/
def certificate : Bool := List.all generator headGroupOk

/-- Named hash algorithm: FNV-1a 32-bit, offset basis 2166136261, prime 16777619, 32-bit wrap (modulo 2^32), folding the generator in list order and each string in byte order; Nat.xor is the mix step. -/
def fnv1aStep (h b : Nat) : Nat := (Nat.xor h b) * 16777619 % 4294967296

/-- The exact computable FNV-1a 32-bit hash of the generator output. -/
def generatorHash : Nat := generator.foldl (fun h s => s.foldl fnv1aStep h) 2166136261

theorem generator_card : generator.length = 1093 := by
  set_option maxHeartbeats 2000000 in
    decide

theorem certificate_true : certificate = true := by
  set_option maxHeartbeats 2000000 in
    decide

theorem generatorHash_eq : generatorHash = 2479005724 := by
  set_option maxHeartbeats 2000000 in
    decide

theorem generatorHash_value : generatorHash = 2479005724 := generatorHash_eq

#print axioms generator_card
#print axioms certificate_true
#print axioms generatorHash_eq

end LeanFtml
