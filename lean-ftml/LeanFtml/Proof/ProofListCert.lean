/-
  LeanFtml.Proof.ProofListCert — the List family's Class C bounded
  certificate (ADVISOR-PROOF-POLICY §2.1's four proof-grade elements
  and §4.4, the `ListRules` row: length ≤ 6, depth ≤ 3 over the
  quotient alphabet Σ_list).

  Element 1 (alphabet-quotient theorem): LeanFtml.Proof.ProofListQuotient,
  headline `lst_pairing_depends_only_on_classes` — the pairing kernel
  reads an opener only through its class (folded tag, raw-case flag),
  so enumerating class representatives covers every distinguishable
  behavior of the kernel.

  Element 2 (interaction/depth bound, derived from the automaton):
  by `lst_findPairOpener_eq_some_iff` (LeanFtml.Proof.ProofList), one
  closer's outcome against an opener stack is decided by the first
  non-skipping opener: a (possibly empty) skip prefix, then one
  absorb or one pair. An absorb leaves the stack unchanged (the
  `some (op, true)` branch of `findPair.go` recurses on the remaining
  tags with the same stack), so against a stack of depth d a closer
  cascade contains at most d absorbs before a pair or exhaustion,
  and the pair, when it comes, is with the deepest opener that does
  not skip. Every interaction pattern is therefore a word over
  {skip, absorb, pair} of length at most d + 1 per closer, and all
  patterns at depth ≤ 3 are realized by stacks of 3 openers meeting
  3 closers. Part B of the corpus is exactly those frames; Part A
  covers every sequence of length ≤ 5 over the full alphabet
  outright, so length ≤ 6 at depth ≤ 3 is covered by A ∪ B.

  Element 3 (the exhaustive check): the corpus is every sequence
  over Σ_list of length 0–5 (Part A, 1,508,598 cases, cardinality
  proved below from `(lstSkelSeqs k).length = 17 ^ k`) plus the
  Part B frames: length-6 sequences over the 8 block-tag symbols
  with exactly 3 openers and 3 closers (20 position choices × 4³
  opener choices × 4³ closer choices = 81,920 cases, as recorded by
  the generator). Total 1,590,518 cases. Generator:
  conformance-list-proof/gen.py in the ftml-lean repository (branch
  proof/list); corpus SHA-256
  1c7af2e4965acfe5217b3e6902c499a289f21dbe69c441be0e45066be0735699.
  Each case ran the List rule alone from the byte-built initial
  state (work = the case bytes, empty token table) on both sides:
  the PHP reference (conformance-list-proof/php-list-state.php, the
  programme's state harness with the rule list fixed to List and a
  raw-byte case channel, both changes disclosed in its header) and
  the Lean mirror (lean-ftml-conformance-listcert, ListCertDriver).
  Result: 1,558,818 of 1,590,518 cases match; 31,700 (1.99 percent)
  mismatch, in five families measured by canonical-state signature:
  the reference's trailing-Newline finalize step fires where the
  mirror's does not (30,826 cases), dissolved raw-close text
  placement and segment shape with identical token tables (438),
  two additional List tokens formed by the reference around a
  raw-case opener wrapping a lowercase nested list (336), token
  allocation order in the explicit pass (64), and mirror
  over-production on Part B failed-close frames (36). The check
  therefore does not close at zero; the mismatches are part of the
  certificate remainder named in element 4. Placeholder-bearing
  cases (390,117) were run in fresh PHP processes, because
  Text_Wiki::addToken numbers tokens from a process-global static
  counter and batch numbering makes the input placeholder dangle
  instead of colliding with token 0 as it does in a fresh process
  and in the mirror; non-placeholder batch outputs were verified
  canonically identical to fresh-process outputs on a 208-case spot
  check. Comparison used conformance-list-proof/compare-list.py, the
  programme comparator with one disclosed extension (dangling token
  ids renumbered in first-appearance order, identically on both
  sides). Output digests: PHP
  65c43950a13c833ade5d9051567dbcd5cbbea6427319bb0b3a591b21c02484d0,
  Lean 20cfe25aeb98d8b3e9c62e7cdc6697963b51013bcdfc3dae4a339c6beaad3183
  (the full run record is REPORT-PROOF-LIST.md in the programme
  records).

  Element 4 (the named remainder): the 31,700 measured mismatches
  above, in the five families listed under element 3, stand as open
  mirror divergences for the correction programme; inputs longer
  than the bound;
  interactions at stack depth > 3 beyond the frame shapes; text
  content beyond the quotient classes (a text symbol is one class —
  byte content that steers the native `*`/`#` scanner, e.g. line
  starts, spaces, and further markers inside item bodies, is
  represented only by the single class X and the newline class);
  inputs already containing placeholder bytes other than the one
  alphabet symbol; behavior from a seeded (non-empty) token table,
  including the trail-rewrite reads of the explicit pass; and the
  PHP reference's known R12-LISTGEN churn (List.php regenerates its
  own source on any stack mismatch — a reference-side defect tracked
  by the reference programme, not a mirror divergence).

  The alphabet: the policy prose calls Σ_list "16 canonical symbols"
  but its own list has 17 entries; the list is the operative
  definition and all 17 are used: [[ul]], [[UL]], [[ol]], [[OL]],
  [[ul_]], [[li]], [[LI]], [[/ul]], [[/UL]], [[/ol]], [[/OL]],
  [[/li]], [[/LI]], ], \n, X, and the placeholder \xFF0\xFF.
-/
import LeanFtml.Proof.ProofListQuotient

namespace LeanFtml

/-- The 17 symbols of Σ_list, as byte strings, in the generator's
    order (conformance-list-proof/gen.py). -/
def lstAlphabet : List (List Nat) :=
  [ [91, 91, 117, 108, 93, 93],        -- [[ul]]
    [91, 91, 85, 76, 93, 93],          -- [[UL]]
    [91, 91, 111, 108, 93, 93],        -- [[ol]]
    [91, 91, 79, 76, 93, 93],          -- [[OL]]
    [91, 91, 117, 108, 95, 93, 93],    -- [[ul_]]
    [91, 91, 108, 105, 93, 93],        -- [[li]]
    [91, 91, 76, 73, 93, 93],          -- [[LI]]
    [91, 91, 47, 117, 108, 93, 93],    -- [[/ul]]
    [91, 91, 47, 85, 76, 93, 93],      -- [[/UL]]
    [91, 91, 47, 111, 108, 93, 93],    -- [[/ol]]
    [91, 91, 47, 79, 76, 93, 93],      -- [[/OL]]
    [91, 91, 47, 108, 105, 93, 93],    -- [[/li]]
    [91, 91, 47, 76, 73, 93, 93],      -- [[/LI]]
    [93],                              -- ]
    [10],                              -- \n
    [88],                              -- X
    [255, 48, 255] ]                   -- \xFF0\xFF

theorem lst_alphabet_length : lstAlphabet.length = 17 := rfl

/-- The 8 block-tag symbols of Σ_list (indices 0–3 openers, 7–10
    closers in `lstAlphabet`): the Part B frame alphabet. -/
def lstBlockSyms : List (List Nat) :=
  [ [91, 91, 117, 108, 93, 93], [91, 91, 85, 76, 93, 93],
    [91, 91, 111, 108, 93, 93], [91, 91, 79, 76, 93, 93],
    [91, 91, 47, 117, 108, 93, 93], [91, 91, 47, 85, 76, 93, 93],
    [91, 91, 47, 111, 108, 93, 93], [91, 91, 47, 79, 76, 93, 93] ]

theorem lst_blockSyms_length : lstBlockSyms.length = 8 := rfl

/-- Skeleton sequences of length `k` over Σ_list, as symbol
    sequences (the corpus's Part A at length `k` is their
    concatenation image under the generator). -/
def lstSkelSeqs : Nat → List (List (List Nat))
  | 0 => [[]]
  | k + 1 => (lstSkelSeqs k).flatMap
      (fun s => lstAlphabet.map (fun sym => s ++ [sym]))

/-- The sum of a constant-`17` map is `17` times the length. -/
theorem lst_sum_const17 (l : List (List (List Nat))) :
    (l.map (fun _ => 17)).sum = 17 * l.length := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
      simp only [List.map_cons, List.sum_cons, ih, List.length_cons]
      omega

theorem lst_skelSeqs_length : ∀ k : Nat,
    (lstSkelSeqs k).length = 17 ^ k := by
  intro k
  induction k with
  | zero => rfl
  | succ k ih =>
      have h1 : (lstSkelSeqs (k + 1)).length =
          ((lstSkelSeqs k).map (fun _ => 17)).sum := by
        simp only [lstSkelSeqs, List.length_flatMap,
          List.length_map, lst_alphabet_length]
      rw [h1, lst_sum_const17, ih, Nat.pow_succ]
      exact Nat.mul_comm 17 (17 ^ k)

/-- Part A's cardinality, proved: the lengths 0–5 over Σ_list total
    1,508,598 skeletons. -/
theorem lst_partA_cardinality :
    (lstSkelSeqs 0).length + (lstSkelSeqs 1).length +
    (lstSkelSeqs 2).length + (lstSkelSeqs 3).length +
    (lstSkelSeqs 4).length + (lstSkelSeqs 5).length = 1508598 := by
  simp only [lst_skelSeqs_length]

/-! ## Axiom audit for this file's headline theorems -/

#print axioms lst_alphabet_length
#print axioms lst_skelSeqs_length
#print axioms lst_partA_cardinality

end LeanFtml
