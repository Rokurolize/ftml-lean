import LeanFtml.TableRules

/-!
# Tableadv: the reference enumeration, and the retired first-parse gap

The enumeration search (`tableadvEnumMatch`, `tableadvEnumBody`,
`tableadvEnumExtend`, `tableadvEnumHeads`, `tableadvEnumMatchFirst`)
now lives in `TableRules.lean`: the repaired mirror uses it as its
own match search, so the reference pattern

```
~\[\[table((?:"[^"]*"|[^\]])*)\]\]((?:(?R)|.)*?)\[\[/table\]\]~si
```

and the mirror agree by construction. The continuation `k` is the
caller's remainder; a failing `k` causes the next parse of a
nested match to be tried before the `.` alternative.

The legacy functions `tableadvMatchFirst` / `tableadvBodyFirst` /
`tableadvDfsScanGo` follow one backtracking path: a nested `(?R)`
contributed only its first success. F-TABLEADV-1 was the finding
that this differed from the reference; the repaired mirror uses
the enumeration search directly as `tableadvScanGo`, so reference
and mirror are one scanner and no separate equality proof is
needed. The fourteen witness-family frames are pinned in
`conformance-r310/`.

`tableadv_dfs_ne_enum` is retained with its scope made explicit:
it compares the *legacy* depth-first scanner to the repaired
mirror. On `tableadvWitness` the legacy greedy quoted head
consumes the outer closer, its continuation fails, and it takes
`.`, closing the outer table at the `[[/table]]` inside the
quotes; the enumeration's next nested parse stops at that quoted
`]]`, the outer closer succeeds, and process() validates. PHP
8.5.4 agrees with the enumeration byte-for-byte.
-/

namespace LeanFtml

/-- Shortest source on which the legacy depth-first scanner and the
    reference enumeration return different output bytes. Every
    one-byte deletion makes the two parse states agree (checked
    against PHP 8.5.4 and this mirror; see REPORT-TABLEADV-PROOF.md).
    The repaired mirror takes the enumeration's parse state.
    The text is `[[table]][[row]][[cell]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]`. -/
def tableadvWitness : List Nat :=
  litBytes "[[table]][[row]][[cell]][[table\"]][[/table]]\"]][[/cell]][[/row]][[/table]]"

theorem tableadvWitness_length : tableadvWitness.length = 74 := by
  decide

theorem match_not_table (src : List Nat) (fuel : Nat)
    (h : matchLitCI (litBytes "[[table") src = none) :
    tableadvMatchFirst src (fuel + 1) = none := by
  simp [tableadvMatchFirst, h]

theorem body_empty (fuel : Nat) : tableadvBodyFirst [] (fuel + 1) = none := by
  have hC : matchLitCI (litBytes "[[/table]]") ([] : List Nat) = none := by decide
  have hO : matchLitCI (litBytes "[[table") ([] : List Nat) = none := by decide
  have hM : tableadvMatchFirst [] fuel = none := by
    cases fuel with
    | zero => rfl
    | succ _ => simp [tableadvMatchFirst, hO]
  simp [tableadvBodyFirst, hC, hM]

/-- One byte of a body, when neither the closer nor a nested table
    matches at this position: the search is the search of the tail. -/
theorem body_step (b : Nat) (rest : List Nat) (fuel : Nat)
    (hC : matchLitCI (litBytes "[[/table]]") (b :: rest) = none)
    (hM : tableadvMatchFirst (b :: rest) fuel = none) :
    tableadvBodyFirst (b :: rest) (fuel + 1) = tableadvBodyFirst rest fuel := by
  simp [tableadvBodyFirst, hC, hM]

theorem opener_row : matchLitCI (litBytes "[[table") (litBytes "[[row]]") = none := by
  decide

/-- A byte position opens neither a table nor a table closer. -/
def noEdge (src : List Nat) : Bool :=
  (matchLitCI (litBytes "[[/table]]") src).isNone &&
    (matchLitCI (litBytes "[[table") src).isNone

theorem noEdge_closer {src : List Nat} (h : noEdge src = true) :
    matchLitCI (litBytes "[[/table]]") src = none := by
  simp [noEdge, Bool.and_eq_true, Option.isNone_iff_eq_none] at h
  exact h.1

theorem noEdge_opener {src : List Nat} (h : noEdge src = true) :
    matchLitCI (litBytes "[[table") src = none := by
  simp [noEdge, Bool.and_eq_true, Option.isNone_iff_eq_none] at h
  exact h.2

/-- The first `n` positions of `src` open neither a table nor a closer. -/
def edgesClearN : Nat → List Nat → Bool
  | 0, _ => true
  | _ + 1, [] => false
  | n + 1, s@(_ :: rest) => noEdge s && edgesClearN n rest

theorem body_skip : (n fuel : Nat) → (src : List Nat) →
    edgesClearN n src = true → n ≤ fuel →
    tableadvBodyFirst src fuel = tableadvBodyFirst (src.drop n) (fuel - n)
  | 0, _, _, _, _ => by simp
  | _ + 1, 0, _, _, hle => by omega
  | _ + 1, _ + 1, [], h, _ => by simp [edgesClearN] at h
  | n + 1, fuel + 1, b :: rest, h, hle => by
      simp [edgesClearN, Bool.and_eq_true] at h
      have hM : tableadvMatchFirst (b :: rest) fuel = none := by
        cases fuel with
        | zero => rfl
        | succ k => exact match_not_table (b :: rest) k (noEdge_opener h.1)
      rw [body_step b rest fuel (noEdge_closer h.1) hM]
      have ih := body_skip n fuel rest h.2 (by omega)
      have hdrop : (b :: rest).drop (n + 1) = rest.drop n := by simp
      have hsub : (fuel + 1) - (n + 1) = fuel - n := by omega
      rw [ih, hdrop, hsub]

/-- `]` stops the head group, so the only parse is the empty head. -/
theorem heads_bracket (rest : List Nat) :
    advHeadRuns (93 :: rest) = [([], 93 :: rest)] := by
  unfold advHeadRuns
  rw [advHeadRuns.go]
  have h1 : (93 == 34) = false := by decide
  have h2 : (93 == 93) = true := by decide
  simp [h1, h2]

def wRowCell : List Nat := litBytes "[[row]][[cell]]"
def wInner : List Nat := litBytes "[[table\"]][[/table]]"
def wAfter : List Nat := litBytes "\"]][[/cell]][[/row]][[/table]]"
def wBodySrc : List Nat := wRowCell ++ wInner ++ wAfter
def sLongHead : List Nat := litBytes "\"]][[/table]]\""
def sLongBody : List Nat := litBytes "[[/cell]][[/row]][[/table]]"
def sAfterOpener : List Nat :=
  litBytes "\"]][[/table]]\"]][[/cell]][[/row]][[/table]]"
def dfsBody : List Nat := litBytes "[[row]][[cell]][[table\"]]"

theorem w_parts :
    tableadvWitness = litBytes "[[table]]" ++ wBodySrc ∧
    wBodySrc = wRowCell ++ wInner ++ wAfter ∧
    wInner ++ wAfter = litBytes "[[table" ++ sAfterOpener ∧
    sAfterOpener = sLongHead ++ litBytes "]]" ++ sLongBody ∧
    dfsBody = wRowCell ++ litBytes "[[table\"]]" ∧
    wRowCell.length = 15 ∧ wAfter.length = 30 ∧
    sLongBody.length = 27 ∧ dfsBody.length = 25 := by
  decide

theorem heads_after_opener :
    advHeadRuns sAfterOpener =
      [(sLongHead, litBytes "]]" ++ sLongBody),
       ([34], litBytes "]][[/table]]\"]][[/cell]][[/row]][[/table]]"),
       ([], sAfterOpener)] := by
  decide

theorem edges_rowcell : edgesClearN 15 wBodySrc = true := by decide

theorem edges_long : edgesClearN 17 sLongBody = true := by decide

theorem long_drop :
    sLongBody.drop 17 = litBytes "[[/table]]" := by decide

theorem rows_dfs_empty :
    advMatchAll advRowMatch dfsBody = ([], dfsBody) := by decide

def tableBare : List Nat := litBytes "[[table\"]]"

theorem matchLitCI_self_append (pat rest : List Nat) :
    matchLitCI pat (pat ++ rest) = some rest := by
  induction pat with
  | nil => simp [matchLitCI]
  | cons p ps ih => simp [matchLitCI, byteCiEq, ih]

theorem body_empty_all : (fuel : Nat) → tableadvBodyFirst [] fuel = none
  | 0 => rfl
  | fuel + 1 => body_empty fuel

theorem body_at_closer (rest : List Nat) (fuel : Nat) :
    tableadvBodyFirst (litBytes "[[/table]]" ++ rest) (fuel + 1) = some rest := by
  simp [tableadvBodyFirst, matchLitCI_self_append]

/-- A body whose first `n` bytes open nothing, and whose remainder
    is a closer, ends at that closer. -/
theorem body_then_closer (n fuel : Nat) (src rest : List Nat)
    (hE : edgesClearN n src = true)
    (hD : src.drop n = litBytes "[[/table]]" ++ rest)
    (hle : n + 1 ≤ fuel) :
    tableadvBodyFirst src fuel = some rest := by
  have hsk := body_skip n fuel src hE (by omega)
  rw [hsk, hD]
  have hk : fuel - n = (fuel - n - 1) + 1 := by omega
  rw [hk]
  exact body_at_closer rest (fuel - n - 1)

theorem body_dot (b : Nat) (rest : List Nat) (fuel : Nat)
    (head r : List Nat)
    (hC : matchLitCI (litBytes "[[/table]]") (b :: rest) = none)
    (hM : tableadvMatchFirst (b :: rest) fuel = some (head, r))
    (hB : tableadvBodyFirst r fuel = none) :
    tableadvBodyFirst (b :: rest) (fuel + 1) =
      tableadvBodyFirst rest fuel := by
  simp [tableadvBodyFirst, hC, hM, hB]

theorem findSome_cons_some {α β} (a : α) (l : List α) (f : α → Option β)
    {b : β} (h : f a = some b) : (a :: l).findSome? f = some b := by
  simp [List.findSome?, h]

theorem findSome_cons_none {α β} (a : α) (l : List α) (f : α → Option β)
    (h : f a = none) : (a :: l).findSome? f = l.findSome? f := by
  simp [List.findSome?, h]

theorem findSome_nil {α β} (f : α → Option β) :
    ([] : List α).findSome? f = none := rfl

theorem body_long (fuel : Nat) (h : 18 ≤ fuel) :
    tableadvBodyFirst sLongBody fuel = some ([] : List Nat) := by
  have hD : sLongBody.drop 17 = litBytes "[[/table]]" ++ [] := by
    simpa using long_drop
  exact body_then_closer 17 fuel sLongBody [] edges_long hD (by omega)

theorem inner_opener :
    matchLitCI (litBytes "[[table") (wInner ++ wAfter) = some sAfterOpener := by
  decide

theorem inner_not_closer :
    matchLitCI (litBytes "[[/table]]") (wInner ++ wAfter) = none := by
  decide

theorem inner_cons :
    wInner ++ wAfter = 91 :: (wInner ++ wAfter).drop 1 := by
  decide

theorem brackets_long :
    litBytes "]]" ++ sLongBody = 93 :: 93 :: sLongBody := by
  decide

/-- The nested table under the outer body: the quoted head's body
    reaches the final closer, so the first parse is that head and
    it consumes everything after it. -/
theorem match_inner (fuel : Nat) (h : 19 ≤ fuel) :
    tableadvMatchFirst (wInner ++ wAfter) fuel =
      some (sLongHead, ([] : List Nat)) := by
  cases fuel with
  | zero => omega
  | succ f =>
      simp only [tableadvMatchFirst, inner_opener]
      rw [heads_after_opener]
      refine findSome_cons_some
        (sLongHead, litBytes "]]" ++ sLongBody)
        [([34], litBytes "]][[/table]]\"]][[/cell]][[/row]][[/table]]"),
         ([], sAfterOpener)]
        (fun (head, r2) =>
          match r2 with
          | 93 :: 93 :: r3 =>
              (tableadvBodyFirst r3 f).map (fun r4 => (head, r4))
          | _ => none)
        ?_
      simp [brackets_long, body_long f (by omega)]

/-- That first parse's continuation is the empty subject, so the
    depth-first body takes the `.` step instead. -/
theorem body_at_inner (fuel : Nat) (h : 20 ≤ fuel) :
    tableadvBodyFirst (wInner ++ wAfter) fuel =
      tableadvBodyFirst ((wInner ++ wAfter).drop 1) (fuel - 1) := by
  cases fuel with
  | zero => omega
  | succ f =>
      rw [inner_cons]
      have hM := match_inner f (by omega)
      have hstep := body_dot 91 ((wInner ++ wAfter).drop 1) f sLongHead []
        (by rw [← inner_cons]; exact inner_not_closer)
        (by rw [← inner_cons]; exact hM)
        (body_empty_all f)
      have hd : List.drop 1 (91 :: (wInner ++ wAfter).drop 1) =
          (wInner ++ wAfter).drop 1 := by simp
      have hf : (f + 1) - 1 = f := by omega
      rw [hd, hf]
      exact hstep

theorem drop_rowcell : wBodySrc.drop 15 = wInner ++ wAfter := by decide

theorem edges_after_dot :
    edgesClearN 9 ((wInner ++ wAfter).drop 1) = true := by decide

theorem drop_after_dot :
    ((wInner ++ wAfter).drop 1).drop 9 =
      litBytes "[[/table]]" ++ wAfter := by decide

theorem body_witness (fuel : Nat) (h : 40 ≤ fuel) :
    tableadvBodyFirst wBodySrc fuel = some wAfter := by
  have hsk := body_skip 15 fuel wBodySrc edges_rowcell (by omega)
  rw [hsk, drop_rowcell]
  have hdot := body_at_inner (fuel - 15) (by omega)
  have hsub : (fuel - 15) - 1 = fuel - 16 := by omega
  rw [hdot, hsub]
  have hsk2 := body_skip 9 (fuel - 16) ((wInner ++ wAfter).drop 1)
    edges_after_dot (by omega)
  rw [hsk2, drop_after_dot]
  have hk : fuel - 16 - 9 = (fuel - 16 - 9 - 1) + 1 := by omega
  rw [hk]
  exact body_at_closer wAfter (fuel - 16 - 9 - 1)

theorem witness_opener :
    matchLitCI (litBytes "[[table") tableadvWitness =
      some (litBytes "]]" ++ wBodySrc) := by
  decide

theorem witness_brackets :
    litBytes "]]" ++ wBodySrc = 93 :: 93 :: wBodySrc := by
  decide

theorem match_witness (fuel : Nat) (h : 41 ≤ fuel) :
    tableadvMatchFirst tableadvWitness fuel = some ([], wAfter) := by
  cases fuel with
  | zero => omega
  | succ f =>
      simp only [tableadvMatchFirst, witness_opener]
      rw [witness_brackets, heads_bracket]
      refine findSome_cons_some ([], 93 :: 93 :: wBodySrc) []
        (fun x =>
          match x.2 with
          | 93 :: 93 :: r3 =>
              (tableadvBodyFirst r3 f).map (fun r4 => (x.1, r4))
          | _ => none)
        ?_
      simp [body_witness f (by omega)]

def noTable (src : List Nat) : Bool :=
  (matchLitCI (litBytes "[[table") src).isNone

def noTableN : Nat → List Nat → Bool
  | 0, _ => true
  | _ + 1, [] => false
  | n + 1, s@(_ :: rest) => noTable s && noTableN n rest

theorem noTable_opener {src : List Nat} (h : noTable src = true) :
    matchLitCI (litBytes "[[table") src = none := by
  simp [noTable, Option.isNone_iff_eq_none] at h
  exact h

theorem scan_empty (toks : List TokenEntry) (fuel : Nat) :
    tableadvDfsScanGo [] toks fuel = ([], toks) := by
  cases fuel <;> simp [tableadvDfsScanGo]

theorem scan_miss (b : Nat) (rest : List Nat) (toks : List TokenEntry)
    (fuel : Nat) (hM : tableadvMatchFirst (b :: rest) fuel = none) :
    tableadvDfsScanGo (b :: rest) toks (fuel + 1) =
      (b :: (tableadvDfsScanGo rest toks fuel).1,
       (tableadvDfsScanGo rest toks fuel).2) := by
  simp only [tableadvDfsScanGo, hM]

theorem scan_skip : (n fuel : Nat) → (src : List Nat) →
    (toks : List TokenEntry) → noTableN n src = true → n ≤ fuel →
    tableadvDfsScanGo src toks fuel =
      ((src.take n) ++ (tableadvDfsScanGo (src.drop n) toks (fuel - n)).1,
       (tableadvDfsScanGo (src.drop n) toks (fuel - n)).2)
  | 0, _, _, _, _, _ => by simp
  | _ + 1, 0, _, _, _, hle => by omega
  | _ + 1, _ + 1, [], _, h, _ => by simp [noTableN] at h
  | n + 1, fuel + 1, b :: rest, toks, h, hle => by
      simp [noTableN, Bool.and_eq_true] at h
      have hM : tableadvMatchFirst (b :: rest) fuel = none := by
        cases fuel with
        | zero => rfl
        | succ k =>
            exact match_not_table (b :: rest) k (noTable_opener h.1)
      rw [scan_miss b rest toks fuel hM]
      have ih := scan_skip n fuel rest toks h.2 (by omega)
      rw [ih]
      simp

theorem scan_copy (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hN : noTableN src.length src = true) (hle : src.length ≤ fuel) :
    tableadvDfsScanGo src toks fuel = (src, toks) := by
  have h := scan_skip src.length fuel src toks hN hle
  simp only [List.take_length, List.drop_length, scan_empty] at h
  simpa using h

/-! ## Mirror-side scan lemmas (the repaired search)

    These are the counterparts of the legacy `scan_*` lemmas for
    `tableadvScanGo`, whose match search is
    `tableadvEnumMatchFirst`. They use the same `noTableN`
    edge-clearance facts; the enumeration cannot match where the
    opener bytes are absent. -/

theorem enum_match_none_of_noTable (src : List Nat) (fuel : Nat)
    (h : noTable src = true) :
    tableadvEnumMatchFirst src (fuel + 1) = none := by
  unfold tableadvEnumMatchFirst
  simp [tableadvEnumMatch, noTable_opener h]

theorem mirror_scan_empty (toks : List TokenEntry) (fuel : Nat) :
    tableadvScanGo [] toks fuel = ([], toks) := by
  cases fuel <;> simp [tableadvScanGo]

theorem mirror_scan_miss (b : Nat) (rest : List Nat) (toks : List TokenEntry)
    (fuel : Nat) (hM : tableadvEnumMatchFirst (b :: rest) fuel = none) :
    tableadvScanGo (b :: rest) toks (fuel + 1) =
      (b :: (tableadvScanGo rest toks fuel).1,
       (tableadvScanGo rest toks fuel).2) := by
  simp only [tableadvScanGo, hM]

theorem mirror_scan_skip : (n fuel : Nat) → (src : List Nat) →
    (toks : List TokenEntry) → noTableN n src = true → n ≤ fuel →
    tableadvScanGo src toks fuel =
      ((src.take n) ++ (tableadvScanGo (src.drop n) toks (fuel - n)).1,
       (tableadvScanGo (src.drop n) toks (fuel - n)).2)
  | 0, _, _, _, _, _ => by simp
  | _ + 1, 0, _, _, _, hle => by omega
  | _ + 1, _ + 1, [], _, h, _ => by simp [noTableN] at h
  | n + 1, fuel + 1, b :: rest, toks, h, hle => by
      simp [noTableN, Bool.and_eq_true] at h
      have hM : tableadvEnumMatchFirst (b :: rest) fuel = none := by
        cases fuel with
        | zero => simp [tableadvEnumMatchFirst, tableadvEnumMatch]
        | succ k => exact enum_match_none_of_noTable (b :: rest) k h.1
      rw [mirror_scan_miss b rest toks fuel hM]
      have ih := mirror_scan_skip n fuel rest toks h.2 (by omega)
      rw [ih]
      simp

theorem mirror_scan_copy (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hN : noTableN src.length src = true) (hle : src.length ≤ fuel) :
    tableadvScanGo src toks fuel = (src, toks) := by
  have h := mirror_scan_skip src.length fuel src toks hN hle
  simp only [List.take_length, List.drop_length, mirror_scan_empty] at h
  simpa using h

theorem bare_opener :
    matchLitCI (litBytes "[[table") tableBare = some (litBytes "\"]]") := by
  decide

theorem bare_heads :
    advHeadRuns (litBytes "\"]]") =
      [([34], litBytes "]]"), ([], litBytes "\"]]")] := by
  decide

theorem bare_brackets :
    litBytes "]]" = 93 :: 93 :: ([] : List Nat) ∧
    litBytes "\"]]" = 34 :: litBytes "]]" := by
  decide

/-- `[[table"]]` has two head candidates and both leave an empty
    body, so the match fails and the scanner copies the text. -/
theorem match_bare (fuel : Nat) :
    tableadvMatchFirst tableBare fuel = none := by
  cases fuel with
  | zero => rfl
  | succ f =>
      simp only [tableadvMatchFirst, bare_opener, bare_heads]
      have hB := body_empty_all f
      have hb := bare_brackets
      let fhead : List Nat × List Nat → Option (List Nat × List Nat) :=
        fun x =>
          match x.2 with
          | 93 :: 93 :: r3 =>
              (tableadvBodyFirst r3 f).map (fun r4 => (x.1, r4))
          | _ => none
      have h1 : fhead ([34], litBytes "]]") = none := by
        simp [fhead, hb.1, hB]
      have h2 : fhead ([], litBytes "\"]]") = none := by
        simp [fhead, hb.2]
      change List.findSome? fhead
        [([34], litBytes "]]"), ([], litBytes "\"]]")] = none
      rw [findSome_cons_none ([34], litBytes "]]") [([], litBytes "\"]]")] fhead h1]
      rw [findSome_cons_none ([], litBytes "\"]]") [] fhead h2]
      exact findSome_nil _

theorem bare_cons : tableBare = 91 :: tableBare.drop 1 := by decide

theorem bare_tail_clear : noTableN 9 (tableBare.drop 1) = true := by decide

theorem bare_tail_len : (tableBare.drop 1).length = 9 := by decide

theorem scan_bare (toks : List TokenEntry) (fuel : Nat) (h : 10 ≤ fuel) :
    tableadvDfsScanGo tableBare toks fuel = (tableBare, toks) := by
  cases fuel with
  | zero => omega
  | succ f =>
      rw [bare_cons, scan_miss 91 (tableBare.drop 1) toks f
        (by rw [← bare_cons]; exact match_bare f)]
      have hN : noTableN (tableBare.drop 1).length (tableBare.drop 1) = true := by
        rw [bare_tail_len]; exact bare_tail_clear
      rw [scan_copy (tableBare.drop 1) toks f hN (by rw [bare_tail_len]; omega)]

theorem dfs_notable : noTableN 15 dfsBody = true := by decide

theorem dfs_drop : dfsBody.drop 15 = tableBare := by decide

theorem dfs_take : dfsBody.take 15 = wRowCell := by decide

theorem scan_dfs_body (toks : List TokenEntry) (fuel : Nat)
    (h : 25 ≤ fuel) :
    tableadvDfsScanGo dfsBody toks fuel = (dfsBody, toks) := by
  have hsk := scan_skip 15 fuel dfsBody toks dfs_notable (by omega)
  rw [hsk, dfs_drop, dfs_take, scan_bare toks (fuel - 15) (by omega)]
  have hcat : wRowCell ++ tableBare = dfsBody := by decide
  simp [hcat]

theorem after_clear : noTableN wAfter.length wAfter = true := by decide

theorem scan_after (toks : List TokenEntry) (fuel : Nat)
    (h : wAfter.length ≤ fuel) :
    tableadvDfsScanGo wAfter toks fuel = (wAfter, toks) :=
  scan_copy wAfter toks fuel after_clear h

theorem process_dfs (matched : List Nat) (toks : List TokenEntry)
    (fuel : Nat) (h : 26 ≤ fuel) :
    tableadvDfsProcess [] dfsBody matched toks fuel = (matched, toks) := by
  cases fuel with
  | zero => omega
  | succ f =>
      simp only [tableadvDfsProcess, scan_dfs_body toks f (by omega), rows_dfs_empty,
        List.isEmpty_nil]
      rw [ite_true]

def dfsMatched : List Nat :=
  litBytes "[[table]]" ++ dfsBody ++ litBytes "[[/table]]"

theorem dfs_span :
    advBodyOf tableadvWitness [] wAfter = dfsBody ∧
    tableadvWitness.take (tableadvWitness.length - wAfter.length) = dfsMatched ∧
    dfsMatched ++ wAfter = tableadvWitness := by
  decide

theorem after_len : wAfter.length = 30 := by decide

theorem witness_cons :
    tableadvWitness = 91 :: tableadvWitness.drop 1 := by decide

theorem dfs_at (fuel : Nat) (h : 50 ≤ fuel) :
    tableadvDfsScanGo tableadvWitness [] (fuel + 1) =
      (tableadvWitness, []) := by
  have hM := match_witness fuel (by omega)
  have hSpan := dfs_span
  have hP : tableadvDfsProcess [] (advBodyOf tableadvWitness [] wAfter)
      (tableadvWitness.take (tableadvWitness.length - wAfter.length)) [] fuel =
      (dfsMatched, []) := by
    rw [hSpan.1, hSpan.2.1]
    exact process_dfs _ [] fuel (by omega)
  have hS := scan_after [] fuel (by rw [after_len]; omega)
  rw [witness_cons]
  simp only [tableadvDfsScanGo, ← witness_cons, hM, hP, hS, hSpan.2.2]

theorem fuel_witness : 51 ≤ tableFuel tableadvWitness.length := by
  rw [tableadvWitness_length]
  decide

theorem dfs_bytes :
    (tableadvDfsScanGo tableadvWitness [] (tableFuel tableadvWitness.length)).1 =
      tableadvWitness := by
  have hk : tableFuel tableadvWitness.length =
      (tableFuel tableadvWitness.length - 1) + 1 := by
    have h := fuel_witness
    omega
  rw [hk]
  have h := dfs_at (tableFuel tableadvWitness.length - 1) (by
    have h := fuel_witness
    omega)
  exact congrArg Prod.fst h

/-! ## The enumeration on the same witness -/

def wMid : List Nat := litBytes "\"]][[/cell]][[/row]]"
def enumBody : List Nat := wRowCell ++ wInner ++ wMid
def shortAfter : List Nat := litBytes "\"]][[/table]]\"]][[/cell]][[/row]]"
def longRest : List Nat := litBytes "[[/cell]][[/row]]"

theorem enum_parts :
    wAfter = wMid ++ litBytes "[[/table]]" ∧
    wInner ++ wMid = litBytes "[[table" ++ shortAfter ∧
    enumBody = wRowCell ++ (wInner ++ wMid) ∧
    sLongBody = longRest ++ litBytes "[[/table]]" ∧
    wMid.length = 20 ∧ longRest.length = 17 ∧
    enumBody.length = 55 := by
  decide

theorem heads_short :
    advHeadRuns shortAfter =
      [(sLongHead, litBytes "]]" ++ longRest),
       ([34], litBytes "]][[/table]]\"]][[/cell]][[/row]]"),
       ([], shortAfter)] := by
  decide

theorem brackets_short :
    litBytes "]]" ++ longRest = 93 :: 93 :: longRest ∧
    litBytes "]][[/table]]\"]][[/cell]][[/row]]" =
      93 :: 93 :: (litBytes "[[/table]]" ++ wMid) := by
  decide

theorem edges_longrest : edgesClearN longRest.length longRest = true := by
  decide

theorem body_no_edge (src : List Nat) (fuel : Nat)
    (hE : edgesClearN src.length src = true) (hle : src.length ≤ fuel) :
    tableadvBodyFirst src fuel = none := by
  have h := body_skip src.length fuel src hE hle
  rw [h, List.drop_length, body_empty_all]

theorem body_closer_ge (rest : List Nat) (fuel : Nat) (h : 1 ≤ fuel) :
    tableadvBodyFirst (litBytes "[[/table]]" ++ rest) fuel = some rest := by
  cases fuel with
  | zero => omega
  | succ k => exact body_at_closer rest k

theorem matchAll_nil :
    advMatchAll advRowMatch ([] : List Nat) = ([], []) := by
  decide

theorem process_empty (head matched : List Nat) (toks : List TokenEntry)
    (fuel : Nat) (h : 1 ≤ fuel) :
    tableadvDfsProcess head [] matched toks fuel = (matched, toks) := by
  cases fuel with
  | zero => omega
  | succ _ =>
      simp only [tableadvDfsProcess, scan_empty, matchAll_nil, List.isEmpty_nil]
      rw [ite_true]

theorem short_opener :
    matchLitCI (litBytes "[[table") (wInner ++ wMid) = some shortAfter := by
  decide

theorem notable_enum : noTableN 15 enumBody = true := by decide

theorem enum_drop : enumBody.drop 15 = wInner ++ wMid := by decide

theorem enum_take : enumBody.take 15 = wRowCell := by decide

theorem mid_clear : noTableN wMid.length wMid = true := by decide

theorem inner_mid_cons :
    wInner ++ wMid = 91 :: (wInner ++ wMid).drop 1 := by decide

theorem short_body_of :
    advBodyOf (wInner ++ wMid) [34] wMid = [] ∧
    (wInner ++ wMid).take ((wInner ++ wMid).length - wMid.length) = wInner := by
  decide

/-- Inside the enumerated body the long head has no closer, so the
    depth-first match is the one-byte head, and its empty body fails
    validation. The matched text is copied back. -/
theorem match_short (fuel : Nat) (h : 18 ≤ fuel) :
    tableadvMatchFirst (wInner ++ wMid) fuel = some ([34], wMid) := by
  cases fuel with
  | zero => omega
  | succ f =>
      simp only [tableadvMatchFirst, short_opener]
      rw [heads_short]
      have hDead := body_no_edge longRest f edges_longrest (by
        have hlen := enum_parts.2.2.2.2.2.1
        omega)
      have hLive := body_closer_ge wMid f (by omega)
      have hb := brackets_short
      let fhead : List Nat × List Nat → Option (List Nat × List Nat) :=
        fun x =>
          match x.2 with
          | 93 :: 93 :: r3 =>
              (tableadvBodyFirst r3 f).map (fun r4 => (x.1, r4))
          | _ => none
      have h1 : fhead (sLongHead, litBytes "]]" ++ longRest) = none := by
        simp [fhead, hb.1, hDead]
      have h2 : fhead ([34], litBytes "]][[/table]]\"]][[/cell]][[/row]]") =
          some ([34], wMid) := by
        simp [fhead, hb.2, hLive]
      change List.findSome? fhead
          [(sLongHead, litBytes "]]" ++ longRest),
           ([34], litBytes "]][[/table]]\"]][[/cell]][[/row]]"),
           ([], shortAfter)] =
        some ([34], wMid)
      rw [findSome_cons_none _ _ fhead h1, findSome_cons_some _ _ fhead h2]

theorem scan_short (toks : List TokenEntry) (fuel : Nat) (h : 40 ≤ fuel) :
    tableadvDfsScanGo (wInner ++ wMid) toks fuel = (wInner ++ wMid, toks) := by
  cases fuel with
  | zero => omega
  | succ f =>
      have hM := match_short f (by omega)
      have hB := short_body_of
      have hP : tableadvDfsProcess [34] (advBodyOf (wInner ++ wMid) [34] wMid)
          ((wInner ++ wMid).take ((wInner ++ wMid).length - wMid.length))
          toks f = (wInner, toks) := by
        rw [hB.1, hB.2]
        exact process_empty [34] wInner toks f (by omega)
      have hS := scan_copy wMid toks f mid_clear (by
        have hlen := enum_parts.2.2.2.2.1
        omega)
      rw [inner_mid_cons]
      simp only [tableadvDfsScanGo, ← inner_mid_cons, hM, hP, hS]

theorem scan_enum_body (toks : List TokenEntry) (fuel : Nat)
    (h : 60 ≤ fuel) :
    tableadvDfsScanGo enumBody toks fuel = (enumBody, toks) := by
  have hsk := scan_skip 15 fuel enumBody toks notable_enum (by omega)
  rw [hsk, enum_drop, enum_take, scan_short toks (fuel - 15) (by omega)]
  have hcat : wRowCell ++ (wInner ++ wMid) = enumBody := enum_parts.2.2.1.symm
  simp [hcat]

theorem enumMatch_none {α : Type} (src : List Nat)
    (k : List Nat → List Nat → Option α) (fuel : Nat)
    (h : matchLitCI (litBytes "[[table") src = none) :
    tableadvEnumMatch src k (fuel + 1) = none := by
  simp [tableadvEnumMatch, h]

theorem enumBody_not_closer {α : Type} (src : List Nat)
    (k : List Nat → Option α) (fuel : Nat)
    (hC : matchLitCI (litBytes "[[/table]]") src = none) :
    tableadvEnumBody src k (fuel + 1) = tableadvEnumExtend src k fuel := by
  simp [tableadvEnumBody, hC]

theorem enumExtend_miss {α : Type} (b : Nat) (rest : List Nat)
    (k : List Nat → Option α) (fuel : Nat)
    (hM : tableadvEnumMatch (b :: rest)
        (fun _ r => tableadvEnumBody r k fuel) fuel = none) :
    tableadvEnumExtend (b :: rest) k (fuel + 1) =
      tableadvEnumBody rest k fuel := by
  simp [tableadvEnumExtend, hM]

theorem enumBody_dot {α : Type} (b : Nat) (rest : List Nat)
    (k : List Nat → Option α) (fuel : Nat)
    (hC : matchLitCI (litBytes "[[/table]]") (b :: rest) = none)
    (hM : tableadvEnumMatch (b :: rest)
        (fun _ r => tableadvEnumBody r k fuel) fuel = none) :
    tableadvEnumBody (b :: rest) k (fuel + 2) =
      tableadvEnumBody rest k fuel :=
  (enumBody_not_closer (b :: rest) k (fuel + 1) hC).trans
    (enumExtend_miss b rest k fuel hM)

theorem enumBody_skip {α : Type} : (n fuel : Nat) → (src : List Nat) →
    (k : List Nat → Option α) →
    edgesClearN n src = true → 2 * n ≤ fuel →
    tableadvEnumBody src k fuel =
      tableadvEnumBody (src.drop n) k (fuel - 2 * n)
  | 0, _, _, _, _, _ => by simp
  | _ + 1, 0, _, _, _, hle => by omega
  | _ + 1, 1, _, _, _, hle => by omega
  | _ + 1, _ + 2, [], _, h, _ => by simp [edgesClearN] at h
  | n + 1, fuel + 2, b :: rest, k, h, hle => by
      simp [edgesClearN, Bool.and_eq_true] at h
      have hM : tableadvEnumMatch (b :: rest)
          (fun _ r => tableadvEnumBody r k fuel) fuel = none := by
        cases fuel with
        | zero => simp [tableadvEnumMatch]
        | succ j =>
            exact enumMatch_none (b :: rest) _ j (noEdge_opener h.1)
      rw [enumBody_dot b rest k fuel (noEdge_closer h.1) hM]
      have ih := enumBody_skip n fuel rest k h.2 (by omega)
      have hdrop : (b :: rest).drop (n + 1) = rest.drop n := by simp
      have hsub : (fuel + 2) - 2 * (n + 1) = fuel - 2 * n := by omega
      rw [ih, hdrop, hsub]

theorem enumMatch_nil {α : Type} (k : List Nat → List Nat → Option α) :
    (fuel : Nat) → tableadvEnumMatch ([] : List Nat) k fuel = none
  | 0 => by simp [tableadvEnumMatch]
  | fuel + 1 => by
      have hO : matchLitCI (litBytes "[[table") ([] : List Nat) = none := by decide
      simp [tableadvEnumMatch, hO]

theorem enumBody_nil {α : Type} (k : List Nat → Option α) :
    (fuel : Nat) → tableadvEnumBody [] k fuel = none
  | 0 => by simp [tableadvEnumBody]
  | fuel + 1 => by
      have hC : matchLitCI (litBytes "[[/table]]") ([] : List Nat) = none := by
        decide
      cases fuel with
      | zero => simp [tableadvEnumBody, tableadvEnumExtend, hC]
      | succ f =>
          simp [tableadvEnumBody, tableadvEnumExtend, hC,
            enumMatch_nil (fun _ r => tableadvEnumBody r k f) f]

theorem enumBody_accept {α : Type} (rest : List Nat) (k : List Nat → Option α)
    (a : α) (fuel : Nat) (hk : k rest = some a) :
    tableadvEnumBody (litBytes "[[/table]]" ++ rest) k (fuel + 1) = some a := by
  simp [tableadvEnumBody, matchLitCI_self_append, hk]

theorem enumBody_accept_ge {α : Type} (rest : List Nat) (k : List Nat → Option α)
    (a : α) (fuel : Nat) (hk : k rest = some a) (h : 1 ≤ fuel) :
    tableadvEnumBody (litBytes "[[/table]]" ++ rest) k fuel = some a := by
  cases fuel with
  | zero => omega
  | succ n => exact enumBody_accept rest k a n hk

theorem enumBody_clear_none {α : Type} (src : List Nat) (k : List Nat → Option α)
    (fuel : Nat) (hE : edgesClearN src.length src = true)
    (hle : 2 * src.length ≤ fuel) :
    tableadvEnumBody src k fuel = none := by
  have h := enumBody_skip src.length fuel src k hE hle
  rw [h, List.drop_length, enumBody_nil]

theorem closer_cons :
    litBytes "[[/table]]" = 91 :: (litBytes "[[/table]]").drop 1 := by decide

theorem closer_not_opener :
    matchLitCI (litBytes "[[table") (litBytes "[[/table]]") = none := by decide

theorem closer_tail_clear :
    edgesClearN ((litBytes "[[/table]]").drop 1).length
      ((litBytes "[[/table]]").drop 1) = true := by decide

theorem closer_tail_len : ((litBytes "[[/table]]").drop 1).length = 9 := by decide

/-- A closer whose continuation rejects the empty remainder, with
    nothing after it, is not a successful body. -/
theorem enum_reject_closer {α : Type} (k : List Nat → Option α) (fuel : Nat)
    (hk : k ([] : List Nat) = none) (h : 22 ≤ fuel) :
    tableadvEnumBody (litBytes "[[/table]]") k fuel = none := by
  have hs : fuel = (fuel - 1) + 1 := by omega
  rw [hs]
  have hC : matchLitCI (litBytes "[[/table]]") (litBytes "[[/table]]") =
      some ([] : List Nat) := by
    simpa using matchLitCI_self_append (litBytes "[[/table]]") ([] : List Nat)
  have hB : tableadvEnumBody (litBytes "[[/table]]") k ((fuel - 1) + 1) =
      tableadvEnumExtend (litBytes "[[/table]]") k (fuel - 1) := by
    simp [tableadvEnumBody, hC, hk]
  rw [hB]
  have hs2 : fuel - 1 = (fuel - 2) + 1 := by omega
  rw [hs2, closer_cons]
  have hM : tableadvEnumMatch (91 :: (litBytes "[[/table]]").drop 1)
      (fun _ r => tableadvEnumBody r k (fuel - 2)) (fuel - 2) = none := by
    cases hfuel : fuel - 2 with
    | zero => simp [tableadvEnumMatch]
    | succ j =>
        have hO := closer_not_opener
        have hm := enumMatch_none (litBytes "[[/table]]")
          (fun _ r => tableadvEnumBody r k (fuel - 2)) j hO
        rw [closer_cons, hfuel] at hm
        exact hm
  rw [enumExtend_miss 91 ((litBytes "[[/table]]").drop 1) k (fuel - 2) hM]
  have hE : edgesClearN ((litBytes "[[/table]]").drop 1).length
      ((litBytes "[[/table]]").drop 1) = true := closer_tail_clear
  have hle : 2 * ((litBytes "[[/table]]").drop 1).length ≤ fuel - 2 := by
    rw [closer_tail_len]; omega
  rw [enumBody_clear_none ((litBytes "[[/table]]").drop 1) k (fuel - 2) hE hle]

theorem enum_long_none {α : Type} (k : List Nat → Option α) (fuel : Nat)
    (hk : k ([] : List Nat) = none) (h : 80 ≤ fuel) :
    tableadvEnumBody sLongBody k fuel = none := by
  have hsk := enumBody_skip 17 fuel sLongBody k edges_long (by omega)
  rw [hsk, long_drop]
  exact enum_reject_closer k (fuel - 34) hk (by omega)

theorem edges_wafter : edgesClearN 20 wAfter = true := by decide

theorem drop_wafter :
    wAfter.drop 20 = litBytes "[[/table]]" ++ ([] : List Nat) := by decide

theorem enum_wafter {α : Type} (k : List Nat → Option α) (a : α) (fuel : Nat)
    (hk : k ([] : List Nat) = some a) (h : 42 ≤ fuel) :
    tableadvEnumBody wAfter k fuel = some a := by
  have hsk := enumBody_skip 20 fuel wAfter k edges_wafter (by omega)
  rw [hsk, drop_wafter]
  exact enumBody_accept_ge [] k a (fuel - 40) hk (by omega)

theorem brackets_second :
    litBytes "]][[/table]]\"]][[/cell]][[/row]][[/table]]" =
      93 :: 93 :: (litBytes "[[/table]]" ++ wAfter) := by
  decide

theorem enumExtend_hit {α : Type} (src : List Nat) (k : List Nat → Option α)
    (fuel : Nat) (a : α)
    (hM : tableadvEnumMatch src (fun _ r => tableadvEnumBody r k fuel) fuel =
      some a) :
    tableadvEnumExtend src k (Nat.succ fuel) = some a := by
  cases src with
  | nil => simp [tableadvEnumExtend, hM]
  | cons b rest => simp [tableadvEnumExtend, hM]

theorem enumHeads_miss {α : Type} (k : List Nat → List Nat → Option α)
    (fuel : Nat) (head r3 : List Nat) (more : List (List Nat × List Nat))
    (h : tableadvEnumBody r3 (fun r4 => k head r4) fuel = none) :
    tableadvEnumHeads k fuel ((head, 93 :: 93 :: r3) :: more) =
      tableadvEnumHeads k fuel more := by
  simp [tableadvEnumHeads, h]

theorem enumHeads_hit {α : Type} (k : List Nat → List Nat → Option α)
    (fuel : Nat) (head r3 : List Nat) (more : List (List Nat × List Nat))
    (a : α) (h : tableadvEnumBody r3 (fun r4 => k head r4) fuel = some a) :
    tableadvEnumHeads k fuel ((head, 93 :: 93 :: r3) :: more) = some a := by
  simp [tableadvEnumHeads, h]

/-- The reference search of the witness body. The quoted nested head
    consumes the final closer and its continuation fails; the one-byte
    head then closes on the inner `[[/table]]`, and the bytes that
    follow reach the outer closer. -/
theorem enum_body_witness (fuel : Nat) (h : 200 ≤ fuel) :
    tableadvEnumBody wBodySrc (fun r => some (([] : List Nat), r)) fuel =
      some (([] : List Nat), ([] : List Nat)) := by
  let k : List Nat → Option (List Nat × List Nat) := fun r => some ([], r)
  have hk : k [] = some ([], []) := rfl
  have hsk := enumBody_skip 15 fuel wBodySrc k edges_rowcell (by omega)
  rw [hsk, drop_rowcell]
  have hs : fuel - 30 = (fuel - 31) + 1 := by omega
  rw [hs, enumBody_not_closer (wInner ++ wAfter) k (fuel - 31) inner_not_closer]
  have hs2 : fuel - 31 = (fuel - 32) + 1 := by omega
  have hLong : tableadvEnumBody sLongBody
      (fun r => tableadvEnumBody r k (fuel - 32)) (fuel - 33) = none :=
    enum_long_none (fun r => tableadvEnumBody r k (fuel - 32)) (fuel - 33)
      (enumBody_nil k (fuel - 32)) (by omega)
  have hShort : tableadvEnumBody (litBytes "[[/table]]" ++ wAfter)
      (fun r => tableadvEnumBody r k (fuel - 32)) (fuel - 33) =
      some ([], []) := by
    have hW := enum_wafter k ([], []) (fuel - 32) hk (by omega)
    exact enumBody_accept_ge wAfter (fun r => tableadvEnumBody r k (fuel - 32))
      ([], []) (fuel - 33) hW (by omega)
  have hMatch : tableadvEnumMatch (wInner ++ wAfter)
      (fun _ r => tableadvEnumBody r k (fuel - 32)) (fuel - 32) =
      some ([], []) := by
    have hs3 : fuel - 32 = (fuel - 33) + 1 := by omega
    rw [hs3]
    simp only [tableadvEnumMatch, inner_opener]
    rw [heads_after_opener, brackets_long, brackets_second]
    have hLong' : tableadvEnumBody sLongBody
        (fun r => tableadvEnumBody r k ((fuel - 33) + 1)) (fuel - 33) = none := by
      simpa [hs3] using hLong
    have hShort' : tableadvEnumBody (litBytes "[[/table]]" ++ wAfter)
        (fun r => tableadvEnumBody r k ((fuel - 33) + 1)) (fuel - 33) =
        some ([], []) := by
      simpa [hs3] using hShort
    rw [enumHeads_miss (fun _ r => tableadvEnumBody r k ((fuel - 33) + 1))
      (fuel - 33) sLongHead sLongBody _ hLong']
    exact enumHeads_hit (fun _ r => tableadvEnumBody r k ((fuel - 33) + 1))
      (fuel - 33) [34] (litBytes "[[/table]]" ++ wAfter) [([], sAfterOpener)]
      ([], []) hShort'
  rw [hs2]
  exact enumExtend_hit (wInner ++ wAfter) k (fuel - 32) ([], []) hMatch

theorem enum_match_witness (fuel : Nat) (h : 200 ≤ fuel) :
    tableadvEnumMatchFirst tableadvWitness (fuel + 1) =
      some (([] : List Nat), ([] : List Nat)) := by
  unfold tableadvEnumMatchFirst
  simp only [tableadvEnumMatch, witness_opener]
  rw [witness_brackets, heads_bracket]
  exact enumHeads_hit (fun head rest => some (head, rest)) fuel [] wBodySrc []
    ([], []) (enum_body_witness fuel h)

def enumRowBody : List Nat :=
  litBytes "[[cell]][[table\"]][[/table]]\"]][[/cell]]"
def enumCell : List Nat := litBytes "[[table\"]][[/table]]\"]]"

theorem enum_one_row :
    advMatchAll advRowMatch enumBody =
      ([(([] : List Nat), enumRowBody)], ([] : List Nat)) := by
  decide

theorem enum_cells :
    advMatchAll advCellMatch enumRowBody =
      ([(([] : List Nat), enumCell, litBytes "cell")], ([] : List Nat)) := by
  decide

theorem enum_span :
    advBodyOf tableadvWitness [] [] = enumBody ∧
    tableadvWitness.take tableadvWitness.length = tableadvWitness := by
  decide

theorem phBytes_head (n : Nat) : (phBytes n).head? = some 255 := by
  simp [phBytes]

theorem witness_head : tableadvWitness.head? = some 91 := by decide

theorem rows_head :
    ((advRowsGo [(([] : List Nat), enumRowBody)] ([] : List TokenEntry)).1.bind
      (fun out => out.head?)) = some 255 := by
  decide

theorem not_res_empty :
    (!(trimBytes ([] : List Nat)).isEmpty) = false := by decide

/-- The reference enumeration's match on the short (non-witness)
    nested table: the long head's continuation fails, so the
    one-byte head is taken, exactly as the legacy search takes it. -/
theorem enum_match_short (fuel : Nat) (h : 36 ≤ fuel) :
    tableadvEnumMatchFirst (wInner ++ wMid) fuel = some ([34], wMid) := by
  unfold tableadvEnumMatchFirst
  cases fuel with
  | zero => omega
  | succ f =>
      simp only [tableadvEnumMatch, short_opener]
      rw [heads_short, brackets_short.1, brackets_short.2]
      have hDead : tableadvEnumBody longRest
          (fun r => some (sLongHead, r)) f = none := by
        apply enumBody_clear_none
        · exact edges_longrest
        · have hlen : longRest.length = 17 := by decide
          omega
      have hLive : tableadvEnumBody (litBytes "[[/table]]" ++ wMid)
          (fun r => some ([34], r)) f = some ([34], wMid) := by
        apply enumBody_accept_ge
        · rfl
        · omega
      rw [enumHeads_miss (fun head rest => some (head, rest)) f
        sLongHead longRest _ hDead]
      exact enumHeads_hit (fun head rest => some (head, rest)) f [34]
        (litBytes "[[/table]]" ++ wMid) [([], shortAfter)] ([34], wMid) hLive

theorem mirror_process_empty (head matched : List Nat) (toks : List TokenEntry)
    (fuel : Nat) (h : 1 ≤ fuel) :
    tableadvProcess head [] matched toks fuel = (matched, toks) := by
  cases fuel with
  | zero => omega
  | succ _ =>
      simp only [tableadvProcess, mirror_scan_empty, matchAll_nil, List.isEmpty_nil]
      rw [ite_true]

/-- The repaired mirror's nested pass over the short nested table:
    its match fails validation and the bytes are copied. -/
theorem mirror_scan_short (toks : List TokenEntry) (fuel : Nat) (h : 40 ≤ fuel) :
    tableadvScanGo (wInner ++ wMid) toks fuel = (wInner ++ wMid, toks) := by
  cases fuel with
  | zero => omega
  | succ f =>
      have hM := enum_match_short f (by omega)
      have hB := short_body_of
      have hP : tableadvProcess [34] (advBodyOf (wInner ++ wMid) [34] wMid)
          ((wInner ++ wMid).take ((wInner ++ wMid).length - wMid.length))
          toks f = (wInner, toks) := by
        rw [hB.1, hB.2]
        exact mirror_process_empty [34] wInner toks f (by omega)
      have hS := mirror_scan_copy wMid toks f mid_clear (by
        have hlen : wMid.length = 20 := by decide
        omega)
      rw [inner_mid_cons]
      simp only [tableadvScanGo, ← inner_mid_cons, hM, hP, hS]

/-- The repaired mirror's nested pass over the enumeration's body
    copies it, as the legacy scan did; the enumeration changes the
    match search, not this no-match shape. -/
theorem mirror_scan_enum_body (toks : List TokenEntry) (fuel : Nat)
    (h : 60 ≤ fuel) : tableadvScanGo enumBody toks fuel = (enumBody, toks) := by
  have hsk := mirror_scan_skip 15 fuel enumBody toks notable_enum (by omega)
  rw [hsk, enum_drop, enum_take, mirror_scan_short toks (fuel - 15) (by omega)]
  have hcat : wRowCell ++ (wInner ++ wMid) = enumBody := enum_parts.2.2.1.symm
  simp [hcat]

theorem process_enum_head (fuel : Nat) (h : 80 ≤ fuel) :
    (tableadvProcess [] enumBody tableadvWitness [] fuel).1.head? = some 255 := by
  cases fuel with
  | zero => omega
  | succ f =>
      simp only [tableadvProcess,
        mirror_scan_enum_body ([] : List TokenEntry) f (by omega), enum_one_row,
        List.isEmpty_cons, not_res_empty]
      rw [ite_eq_right (by decide : ¬(false = true)),
        ite_eq_right (by decide : ¬(false = true))]
      rcases hR : advRowsGo [(([] : List Nat), enumRowBody)] [] with ⟨res, toks⟩
      cases res with
      | none =>
          have h := rows_head
          simp [hR, Option.bind] at h
      | some out =>
          simp only [claimTok, phBytes]
          rw [List.singleton_append]
          rfl

theorem enum_scan_nil (toks : List TokenEntry) (fuel : Nat) :
    tableadvScanGo [] toks fuel = ([], toks) := by
  cases fuel <;> simp [tableadvScanGo]

theorem enum_bytes (fuel : Nat) (h : 201 ≤ fuel) :
    (tableadvScanGo tableadvWitness [] (fuel + 1)).1.head? = some 255 := by
  have hM := enum_match_witness (fuel - 1) (by omega)
  have hMf : (fuel - 1) + 1 = fuel := by omega
  simp only [hMf] at hM
  have hSpan := enum_span
  have hP := process_enum_head fuel (by omega)
  rw [witness_cons]
  simp only [tableadvScanGo, ← witness_cons, hM, enum_scan_nil]
  simp only [hSpan.1, List.length_nil, Nat.sub_zero, hSpan.2, List.append_nil]
  exact hP

theorem fuel_for_enum : 221 ≤ tableFuel tableadvWitness.length := by
  rw [tableadvWitness_length]
  decide

/-- The fourteen witness-family frames of REPORT-TABLEADV-PROOF.md:
    one cell opener of any of the seven attribute shapes, the
    quote-trick nested table, and one of the two cell closers.
    The first member is the 74-byte witness. -/
def tableadvWitnessFamily : List (List Nat) :=
  [ tableadvWitness,
    litBytes "[[table]][[row]][[cell]][[table\"]][[/table]]\"]][[/hcell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[hcell]][[table\"]][[/table]]\"]][[/cell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[hcell]][[table\"]][[/table]]\"]][[/hcell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[cell colspan=\"2\"]][[table\"]][[/table]]\"]][[/cell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[cell colspan=\"2\"]][[table\"]][[/table]]\"]][[/hcell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[cell colspan=\"0\"]][[table\"]][[/table]]\"]][[/cell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[cell colspan=\"0\"]][[table\"]][[/table]]\"]][[/hcell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[cell colspan=\"abc\"]][[table\"]][[/table]]\"]][[/cell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[cell colspan=\"abc\"]][[table\"]][[/table]]\"]][[/hcell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[cell align=\"center\"]][[table\"]][[/table]]\"]][[/cell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[cell align=\"center\"]][[table\"]][[/table]]\"]][[/hcell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[cell foo=\"1\"]][[table\"]][[/table]]\"]][[/cell]][[/row]][[/table]]",
    litBytes "[[table]][[row]][[cell foo=\"1\"]][[table\"]][[/table]]\"]][[/hcell]][[/row]][[/table]]" ]

theorem tableadvWitnessFamily_length : tableadvWitnessFamily.length = 14 := by
  decide

theorem tableadvWitnessFamily_nodup : tableadvWitnessFamily.Nodup := by
  decide

/-- Conformance pin, F-TABLEADV-1: on each of the fourteen frames the
    repaired mirror's whole parse state is the enumeration's. After
    the repair the enumeration search is the mirror's own
    `tableadvScanGo` (the duplicate `tableadvEnumScan` is erased), so
    the two sides are definitionally equal and the pin holds by rfl;
    this is the exact reason the general equality theorem retired.
    The conformance-r310 battery compares the same frames with
    PHP 8.5.4's state. -/
theorem mirror_enum_witness_family (src : List Nat)
    (h : src ∈ tableadvWitnessFamily) :
    tableadvScanGo src [] (tableFuel src.length) =
      tableadvScanGo src [] (tableFuel src.length) :=
  rfl

/-- F-TABLEADV-1, restated after the repair with an explicit scope:
    the *legacy* first-parse scanner and the repaired mirror (the
    enumeration) disagree on `tableadvWitness`. The legacy scanner
    copies the source; the repaired mirror's match validates, so
    its output opens with a placeholder byte. PHP 8.5.4 agrees
    with the repaired mirror. -/
theorem tableadv_dfs_ne_enum :
    (tableadvDfsScanGo tableadvWitness [] (tableFuel tableadvWitness.length)).1 ≠
    (tableadvScanGo tableadvWitness [] (tableFuel tableadvWitness.length)).1 := by
  intro hEq
  have hD := dfs_bytes
  have hE := enum_bytes (tableFuel tableadvWitness.length - 1) (by
    have h := fuel_for_enum
    omega)
  have hSum : (tableFuel tableadvWitness.length - 1) + 1 =
      tableFuel tableadvWitness.length := by
    have h := fuel_for_enum
    omega
  simp only [hSum] at hE
  rw [hD] at hEq
  rw [← hEq] at hE
  simp [witness_head] at hE

end LeanFtml
