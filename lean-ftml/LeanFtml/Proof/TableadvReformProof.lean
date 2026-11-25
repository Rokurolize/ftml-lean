import LeanFtml.Proof.TableadvPcreProof

set_option maxRecDepth 100000

/-!
  LeanFtml.Proof.TableadvReformProof — the Tableadv PCRE equivalence
  reformulated around the capture-overwrite obstruction (Stage 2(e)
  remainder #4), after route (a): `PcreCore` now carries the capture
  save/restore task that whole-pattern recursion `(?R)` pushes.

  ## The obstruction, exactly

  Capture group 1 of the Tableadv pattern (the head attribute source)
  closes *before* the body scan begins: in every witness-family frame the
  outer group-1 capture is the empty head `(7, 7)`, written when the head
  repetition finishes at position 7.  The lazy body repetition
  `(?:(?R)|.)*?` then scans the cell content, where the quote-trick
  nested-table bytes `[[table"]][[/table]]` trigger whole-pattern
  recursion `(?R)`.  The recursive invocation re-enters the *same*
  capture group 1 for the inner table's head and closes it at the inner
  span — strictly after the outer write.  With overwrite-only capture
  semantics (`setCap` replaces same-index entries, pinned by
  `getCap_setCap_twice`), the later inner write destroys the outer
  capture, so the pre-restore engine could not reproduce the reference
  first-match output on any nested-table input, and the Stage 2(e)
  equivalence was bounded by design.

  The minimal pattern instance is `(a)(?:(?R)|b)` on the subject `aab`:
  the outer group-1 capture `(0, 1)` is written before the recursion, the
  recursion re-enters group 1 and closes it at `(1, 2)`, and overwrite
  semantics yields `(1, 2)` while capture-restore semantics — real
  PCRE2's — preserves `(0, 1)`.  `tableadv_minimal_recursion_restore`
  pins the restore engine's answer.

  ## What this file proves

  For each of the fourteen witness-family frames (the retained witness
  set of REPORT-TABLEADV-PROOF.md: seven cell-opener attribute shapes ×
  the two cell closers, all sharing the quote-trick nested table):

  * `tableadv_witness_family_pcre` — the restore-engine first match is
    exact: end position at the end of the subject, group 2 the body span
    `(9, len - 10)`, group 1 the empty outer head `(7, 7)`;
  * `enum_match_witness_family` — the reference enumeration yields the
    empty outer head and consumes the whole subject, at any fuel
    `≥ 260` (a uniform bound; every frame needs less than 210);
  * `tableadv_witness_family_correspondence` / `…_agreement` — the two
    sides together, with the componentwise reading: empty enum head ↔
    empty group-1 capture, empty enum rest ↔ match end at subject
    length, and the enum body span ↔ group 2.

  The boundary of this equivalence is exactly the first-match output on
  the fourteen frames.  The remaining Stage 2(e) items (fuel alignment,
  continuation-level dedupResults erasure, the callback package, and
  inputs beyond the witness set) are not claimed here.
-/

namespace LeanFtml

open PcreCore

/-! ## The capture-overwrite mechanism and the minimal instance -/

/-- The overwrite mechanism with the minimal instance's numbers: the
    inner recursion's group-1 write `(1, 2)` destroys the outer write
    `(0, 1)` under overwrite-only semantics. -/
theorem capture_overwrite_mechanism :
    getCap 1 (setCap 1 1 2 (setCap 1 0 1 ([] : Caps))) = some (1, 2) := by
  decide

/-- The minimal obstruction pattern `(a)(?:(?R)|b)`, parsed by the
    pinned parser. -/
def minimalRecursionParsed : PcreParsed :=
  (parsePcreBytes (litBytes "(a)(?:(?R)|b)")).getD default

/-- The parse itself succeeds, so the fallback branch is dead. -/
theorem minimal_recursion_parse :
    parsePcreBytes (litBytes "(a)(?:(?R)|b)") = some minimalRecursionParsed := by
  decide

/-- With capture restore, the outer group-1 capture `(0, 1)` survives
    the recursion on `aab`: exactly real PCRE2's reading, and the exact
    behavior overwrite semantics cannot produce. -/
theorem tableadv_minimal_recursion_restore :
    pcreFirst minimalRecursionParsed (litBytes "aab") 0 =
      some { pos := 3, caps := [{ idx := 1, start := 0, endPos := 1 }] } := by
  decide

/-- The same preservation through two nested recursion levels (`aaab`). -/
theorem tableadv_minimal_recursion_restore_deep :
    pcreFirst minimalRecursionParsed (litBytes "aaab") 0 =
      some { pos := 4, caps := [{ idx := 1, start := 0, endPos := 1 }] } := by
  decide

/-! ## Enumeration side: the shared nested-table suffix, generalized over
    the cell-closer tail -/

/-- The `[[/hcell]]` variant of the post-nested-table tail. -/
def wAfterH : List Nat := litBytes "\"]][[/hcell]][[/row]][[/table]]"

/-- The `[[/hcell]]` variant of the overlong quoted head's body. -/
def sLongBodyH : List Nat := litBytes "[[/hcell]][[/row]][[/table]]"

theorem brackets_append_gen (body : List Nat) :
    litBytes "]]" ++ body = 93 :: 93 :: body := rfl

/-- The nested-table opener match depends only on the concrete prefix
    `wInner`, never on the tail. -/
theorem inner_opener_gen (wA : List Nat) :
    matchLitCI (litBytes "[[table") (wInner ++ wA) =
      some (litBytes "\"]][[/table]]" ++ wA) := rfl

/-- The nested-table position never starts with the closer, for any
    tail. -/
theorem inner_not_closer_gen (wA : List Nat) :
    matchLitCI (litBytes "[[/table]]") (wInner ++ wA) = none := rfl

/-- `enum_wafter`, generalized over the closer tail. -/
theorem enum_wafter_gen (wA : List Nat) (nW : Nat) {α : Type}
    (k : List Nat → Option α) (a : α) (fuel : Nat)
    (hedgesW : edgesClearN nW wA = true)
    (hdropW : wA.drop nW = litBytes "[[/table]]" ++ ([] : List Nat))
    (hk : k ([] : List Nat) = some a) (h : 2 * nW + 2 ≤ fuel) :
    tableadvEnumBody wA k fuel = some a := by
  have hsk := enumBody_skip nW fuel wA k hedgesW (by omega)
  rw [hsk, hdropW]
  exact enumBody_accept_ge [] k a (fuel - 2 * nW) hk (by omega)

/-- `enum_long_none`, generalized over the overlong head's body. -/
theorem enum_long_none_gen (sLB : List Nat) (nL : Nat) {α : Type}
    (k : List Nat → Option α) (fuel : Nat)
    (hedgesL : edgesClearN nL sLB = true)
    (hdropL : sLB.drop nL = litBytes "[[/table]]")
    (hk : k ([] : List Nat) = none) (h : 2 * nL + 24 ≤ fuel) :
    tableadvEnumBody sLB k fuel = none := by
  have hsk := enumBody_skip nL fuel sLB k hedgesL (by omega)
  rw [hsk, hdropL]
  exact enum_reject_closer k (fuel - 2 * nL) hk (by omega)

/-- The shared nested-table suffix search of every witness-family frame,
    parameterized over the cell-closer tail `wA`.  The overlong quoted
    head's continuation fails, the one-byte head closes at the inner
    closer, and the tail reaches the outer closer with the whole subject
    consumed. -/
theorem enum_body_inner_gen (wA sLB : List Nat) (nL nW fuel : Nat)
    (hheads : advHeadRuns (litBytes "\"]][[/table]]" ++ wA) =
      [(sLongHead, litBytes "]]" ++ sLB),
       ([34], litBytes "]]" ++ litBytes "[[/table]]" ++ wA),
       ([], litBytes "\"]][[/table]]" ++ wA)])
    (hedgesL : edgesClearN nL sLB = true)
    (hdropL : sLB.drop nL = litBytes "[[/table]]")
    (hedgesW : edgesClearN nW wA = true)
    (hdropW : wA.drop nW = litBytes "[[/table]]" ++ ([] : List Nat))
    (hfuel : 2 * nL + 2 * nW + 70 ≤ fuel) :
    tableadvEnumBody (wInner ++ wA) (fun r => some (([] : List Nat), r)) fuel =
      some (([] : List Nat), ([] : List Nat)) := by
  let k : List Nat → Option (List Nat × List Nat) := fun r => some ([], r)
  have hk : k [] = some ([], []) := rfl
  have hs : fuel = (fuel - 1) + 1 := by omega
  rw [hs, enumBody_not_closer (wInner ++ wA) k (fuel - 1) (inner_not_closer_gen wA)]
  have hs2 : fuel - 1 = (fuel - 2) + 1 := by omega
  have hLong : tableadvEnumBody sLB
      (fun r => tableadvEnumBody r k (fuel - 2)) (fuel - 3) = none :=
    enum_long_none_gen sLB nL (fun r => tableadvEnumBody r k (fuel - 2)) (fuel - 3)
      hedgesL hdropL (enumBody_nil k (fuel - 2)) (by omega)
  have hShort : tableadvEnumBody (litBytes "[[/table]]" ++ wA)
      (fun r => tableadvEnumBody r k (fuel - 2)) (fuel - 3) =
      some ([], []) := by
    have hW := enum_wafter_gen wA nW k ([], []) (fuel - 2) hedgesW hdropW hk (by omega)
    exact enumBody_accept_ge wA (fun r => tableadvEnumBody r k (fuel - 2))
      ([], []) (fuel - 3) hW (by omega)
  have hMatch : tableadvEnumMatch (wInner ++ wA)
      (fun _ r => tableadvEnumBody r k (fuel - 2)) (fuel - 2) =
      some ([], []) := by
    have hs3 : fuel - 2 = (fuel - 3) + 1 := by omega
    rw [hs3]
    simp only [tableadvEnumMatch, inner_opener_gen wA]
    rw [hheads, brackets_append_gen, brackets_append_gen]
    have hLong' : tableadvEnumBody sLB
        (fun r => tableadvEnumBody r k ((fuel - 3) + 1)) (fuel - 3) = none := by
      simpa [hs3] using hLong
    have hShort' : tableadvEnumBody (litBytes "[[/table]]" ++ wA)
        (fun r => tableadvEnumBody r k ((fuel - 3) + 1)) (fuel - 3) =
        some ([], []) := by
      simpa [hs3] using hShort
    rw [enumHeads_miss (fun _ r => tableadvEnumBody r k ((fuel - 3) + 1))
      (fuel - 3) sLongHead sLB _ hLong']
    exact enumHeads_hit (fun _ r => tableadvEnumBody r k ((fuel - 3) + 1))
      (fuel - 3) [34] (litBytes "[[/table]]" ++ wA)
      [([], litBytes "\"]][[/table]]" ++ wA)] ([], []) hShort'
  rw [hs2]
  exact enumExtend_hit (wInner ++ wA) k (fuel - 2) ([], []) hMatch

/-- The body search of a witness-family frame: an edge-clear row/cell
    opener prefix of `n` bytes, then the shared nested-table suffix. -/
theorem enum_body_frame_gen (body : List Nat) (n fuel : Nat)
    (wA sLB : List Nat) (nL nW : Nat)
    (hedges : edgesClearN n body = true)
    (hdrop : body.drop n = wInner ++ wA)
    (hheads : advHeadRuns (litBytes "\"]][[/table]]" ++ wA) =
      [(sLongHead, litBytes "]]" ++ sLB),
       ([34], litBytes "]]" ++ litBytes "[[/table]]" ++ wA),
       ([], litBytes "\"]][[/table]]" ++ wA)])
    (hedgesL : edgesClearN nL sLB = true)
    (hdropL : sLB.drop nL = litBytes "[[/table]]")
    (hedgesW : edgesClearN nW wA = true)
    (hdropW : wA.drop nW = litBytes "[[/table]]" ++ ([] : List Nat))
    (hfuel : 2 * n + 2 * nL + 2 * nW + 70 ≤ fuel) :
    tableadvEnumBody body (fun r => some (([] : List Nat), r)) fuel =
      some (([] : List Nat), ([] : List Nat)) := by
  let k : List Nat → Option (List Nat × List Nat) := fun r => some ([], r)
  have hsk := enumBody_skip n fuel body k hedges (by omega)
  change tableadvEnumBody body k fuel = some ([], [])
  rw [hsk, hdrop]
  exact enum_body_inner_gen wA sLB nL nW (fuel - 2 * n) hheads hedgesL hdropL
    hedgesW hdropW (by omega)

/-- The whole-pattern enumeration on a witness-family frame: the empty
    outer head closes immediately and the body consumes the whole
    subject. -/
theorem enum_match_frame_gen (src : List Nat) (n fuel : Nat)
    (wA sLB : List Nat) (nL nW : Nat)
    (hopen : matchLitCI (litBytes "[[table") src = some (litBytes "]]" ++ src.drop 9))
    (hedges : edgesClearN n (src.drop 9) = true)
    (hdrop : (src.drop 9).drop n = wInner ++ wA)
    (hheads : advHeadRuns (litBytes "\"]][[/table]]" ++ wA) =
      [(sLongHead, litBytes "]]" ++ sLB),
       ([34], litBytes "]]" ++ litBytes "[[/table]]" ++ wA),
       ([], litBytes "\"]][[/table]]" ++ wA)])
    (hedgesL : edgesClearN nL sLB = true)
    (hdropL : sLB.drop nL = litBytes "[[/table]]")
    (hedgesW : edgesClearN nW wA = true)
    (hdropW : wA.drop nW = litBytes "[[/table]]" ++ ([] : List Nat))
    (hfuel : 2 * n + 2 * nL + 2 * nW + 70 ≤ fuel) :
    tableadvEnumMatchFirst src (fuel + 1) = some (([] : List Nat), ([] : List Nat)) := by
  unfold tableadvEnumMatchFirst
  simp only [tableadvEnumMatch, hopen]
  rw [brackets_append_gen, heads_bracket]
  exact enumHeads_hit (fun head rest => some (head, rest)) fuel [] (src.drop 9) []
    ([], []) (enum_body_frame_gen (src.drop 9) n fuel wA sLB nL nW hedges hdrop
      hheads hedgesL hdropL hedgesW hdropW hfuel)

/-- The reference enumeration on each of the fourteen witness-family
    frames yields the empty outer head and consumes the whole subject,
    at any fuel beyond the uniform bound 260. -/
theorem enum_match_witness_family (src : List Nat)
    (hmem : src ∈ tableadvWitnessFamily) (fuel : Nat) (hfuel : 260 ≤ fuel) :
    tableadvEnumMatchFirst src (fuel + 1) = some (([] : List Nat), ([] : List Nat)) := by
  simp [tableadvWitnessFamily] at hmem
  rcases hmem with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  · exact enum_match_frame_gen _ 15 fuel wAfter sLongBody 17 20
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 15 fuel wAfterH sLongBodyH 18 21
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 16 fuel wAfter sLongBody 17 20
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 16 fuel wAfterH sLongBodyH 18 21
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 27 fuel wAfter sLongBody 17 20
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 27 fuel wAfterH sLongBodyH 18 21
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 27 fuel wAfter sLongBody 17 20
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 27 fuel wAfterH sLongBodyH 18 21
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 29 fuel wAfter sLongBody 17 20
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 29 fuel wAfterH sLongBodyH 18 21
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 30 fuel wAfter sLongBody 17 20
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 30 fuel wAfterH sLongBodyH 18 21
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 23 fuel wAfter sLongBody 17 20
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)
  · exact enum_match_frame_gen _ 23 fuel wAfterH sLongBodyH 18 21
      (by decide) (by decide) (by decide) (by decide) (by decide) (by decide)
      (by decide) (by decide) (by omega)

/-! ## PCRE side: the restore engine's exact first match on the family -/

/-- The restore-engine first match of the pinned Tableadv pattern on
    each witness-family frame: the match ends exactly at the end of the
    subject, group 2 captures the body span `(9, len - 10)`, and group 1
    captures the empty outer head `(7, 7)` — the capture that the
    overwrite semantics of Stage 2(e) could not preserve. -/
theorem tableadv_witness_family_pcre (src : List Nat)
    (hmem : src ∈ tableadvWitnessFamily) :
    pcreFirst tableadvPcreExpected src 0 =
      some { pos := src.length,
             caps := [{ idx := 2, start := 9, endPos := src.length - 10 },
                      { idx := 1, start := 7, endPos := 7 }] } := by
  simp [tableadvWitnessFamily] at hmem
  rcases hmem with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
    <;> decide

/-! ## The correspondence -/

/-- The match-level correspondence on the retained witness set: the
    reference enumeration and the restore-engine PCRE run agree on every
    frame — empty outer head, whole subject consumed, body span exactly
    the group-2 capture. -/
theorem tableadv_witness_family_correspondence (src : List Nat)
    (hmem : src ∈ tableadvWitnessFamily) (fuel : Nat) (hfuel : 260 ≤ fuel) :
    tableadvEnumMatchFirst src (fuel + 1) = some (([] : List Nat), ([] : List Nat)) ∧
    pcreFirst tableadvPcreExpected src 0 =
      some { pos := src.length,
             caps := [{ idx := 2, start := 9, endPos := src.length - 10 },
                      { idx := 1, start := 7, endPos := 7 }] } :=
  ⟨enum_match_witness_family src hmem fuel hfuel,
   tableadv_witness_family_pcre src hmem⟩

/-- The componentwise reading of the correspondence: the enumeration's
    empty head is the PCRE empty group-1 capture `(7, 7)`; the
    enumeration's empty rest is the PCRE match end at the subject
    length; the body between them is the group-2 capture `(9, len-10)`. -/
theorem tableadv_witness_family_agreement (src : List Nat)
    (hmem : src ∈ tableadvWitnessFamily) (fuel : Nat) (hfuel : 260 ≤ fuel) :
    ∃ headEnum restEnum caps,
      tableadvEnumMatchFirst src (fuel + 1) = some (headEnum, restEnum) ∧
      pcreFirst tableadvPcreExpected src 0 = some { pos := src.length, caps := caps } ∧
      headEnum = ([] : List Nat) ∧
      getCap 1 caps = some (7, 7) ∧
      restEnum = ([] : List Nat) ∧
      getCap 2 caps = some (9, src.length - 10) := by
  obtain ⟨henum, hpcre⟩ := tableadv_witness_family_correspondence src hmem fuel hfuel
  exact ⟨[], [], [{ idx := 2, start := 9, endPos := src.length - 10 },
                   { idx := 1, start := 7, endPos := 7 }],
         henum, hpcre, rfl, by simp [getCap], rfl, by simp [getCap]⟩

#print axioms capture_overwrite_mechanism
#print axioms minimal_recursion_parse
#print axioms tableadv_minimal_recursion_restore
#print axioms tableadv_minimal_recursion_restore_deep
#print axioms brackets_append_gen
#print axioms inner_opener_gen
#print axioms inner_not_closer_gen
#print axioms enum_wafter_gen
#print axioms enum_long_none_gen
#print axioms enum_body_inner_gen
#print axioms enum_body_frame_gen
#print axioms enum_match_frame_gen
#print axioms enum_match_witness_family
#print axioms tableadv_witness_family_pcre
#print axioms tableadv_witness_family_correspondence
#print axioms tableadv_witness_family_agreement

end LeanFtml
