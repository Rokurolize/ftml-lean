import LeanFtml.TableadvHeadProof

/-! TableadvCellProof.lean — one plain table cell: placeholder bytes, row/cell token emission, and the chunk-head scan law for the one-cell body. -/

namespace LeanFtml

/-! ## One plain cell -/

def plainBody : List Nat := litBytes "[[row]][[cell]]X[[/cell]][[/row]]"

def plainRep : List Nat :=
  phBytes 4 ++ phBytes 2 ++ phBytes 0 ++ litBytes "X" ++
    phBytes 1 ++ phBytes 3 ++ phBytes 5

def tadvCellStart (header : Bool) (attrs : List (List Nat × List Nat)) : TokenEntry where
  rule := "Tableadv"
  opts := [("type".toList, OptVal.str "cellStart".toList),
    ("header".toList, OptVal.bool header),
    ("attrs".toList, attrsOpt attrs)]

def tadvCellEnd (header : Bool) : TokenEntry where
  rule := "Tableadv"
  opts := [("type".toList, OptVal.str "cellEnd".toList),
    ("header".toList, OptVal.bool header)]

def tadvRowStart (attrs : List (List Nat × List Nat)) : TokenEntry where
  rule := "Tableadv"
  opts := [("type".toList, OptVal.str "rowStart".toList),
    ("attrs".toList, attrsOpt attrs)]

def tadvRowEnd : TokenEntry where
  rule := "Tableadv"
  opts := [("type".toList, OptVal.str "rowEnd".toList)]

def tadvStart (attrs : List (List Nat × List Nat)) : TokenEntry where
  rule := "Tableadv"
  opts := [("type".toList, OptVal.str "start".toList),
    ("attrs".toList, attrsOpt attrs)]

def tadvEnd : TokenEntry where
  rule := "Tableadv"
  opts := [("type".toList, OptVal.str "end".toList)]

def plainToks (attrs : List (List Nat × List Nat)) : List TokenEntry :=
  [tadvCellStart false [], tadvCellEnd false, tadvRowStart [], tadvRowEnd,
   tadvStart attrs, tadvEnd]

theorem plainBody_len : plainBody.length = 33 := by decide

theorem plainBody_edges :
    edgesClearN plainBody.length (plainBody ++ litBytes "[[/table]]") = true := by
  decide

theorem plainBody_noTable : noTableN plainBody.length plainBody = true := by decide

theorem plain_row_match :
    advMatchAll advRowMatch plainBody =
      ([(([] : List Nat), litBytes "[[cell]]X[[/cell]]")], ([] : List Nat)) := by
  decide

theorem plain_rows :
    advRowsGo [(([] : List Nat), litBytes "[[cell]]X[[/cell]]")] ([] : List TokenEntry) =
      (some (phBytes 2 ++ phBytes 0 ++ litBytes "X" ++ phBytes 1 ++ phBytes 3),
       [tadvCellStart false [], tadvCellEnd false, tadvRowStart [], tadvRowEnd]) := by
  rfl

theorem drop_app (xs ys : List Nat) : (xs ++ ys).drop xs.length = ys := by
  induction xs with
  | nil => simp
  | cons _ xs ih => simp [ih]

theorem take_app (xs ys : List Nat) : (xs ++ ys).take xs.length = xs := by
  induction xs with
  | nil => simp
  | cons _ xs ih => simp [ih]

theorem advBodyOf_closed (head body : List Nat) :
    advBodyOf (tadvClosed head body []) head [] = body := by
  have h7 : (litBytes "[[table").length = 7 := by decide
  have h2 : (litBytes "]]").length = 2 := by decide
  have h10 : (litBytes "[[/table]]").length = 10 := by decide
  let A := litBytes "[[table" ++ head ++ litBytes "]]"
  have hA : A.length = 9 + head.length := by
    simp [A, List.length_append, h7, h2]
    omega
  have hsrc : tadvClosed head body [] = A ++ (body ++ litBytes "[[/table]]") := by
    simp [tadvClosed, A, List.append_assoc]
  rw [hsrc]
  simp only [advBodyOf, List.length_nil, Nat.sub_zero]
  rw [← hA, drop_app]
  have hlen : (A ++ (body ++ litBytes "[[/table]]")).length - 19 - head.length =
      body.length := by
    simp [List.length_append, hA, h10]
    omega
  rw [hlen]
  exact take_app body (litBytes "[[/table]]")

theorem plain_process (head : List Nat) (fuel : Nat) (h : 40 ≤ fuel) :
    tableadvProcess head plainBody (tadvClosed head plainBody []) [] fuel =
      (plainRep, plainToks (buildAttrsAdv head "table")) := by
  cases fuel with
  | zero => omega
  | succ f =>
      have hscan := mirror_scan_copy plainBody ([] : List TokenEntry) f
        plainBody_noTable (by rw [plainBody_len]; omega)
      simp only [tableadvProcess, hscan, plain_row_match, List.isEmpty_cons, not_res_empty]
      rw [ite_eq_right (by decide : ¬ (false = true)),
        ite_eq_right (by decide : ¬ (false = true))]
      simp [plain_rows, claimTok, plainRep, plainToks, tadvStart, tadvEnd]

theorem tadvClosed_cons (head body after : List Nat) :
    tadvClosed head body after =
      91 :: ((litBytes "[[table").drop 1 ++ head ++ litBytes "]]" ++ body ++
        litBytes "[[/table]]" ++ after) := by
  have h : litBytes "[[table" = 91 :: (litBytes "[[table").drop 1 := by decide
  calc tadvClosed head body after
      = litBytes "[[table" ++
          (head ++ litBytes "]]" ++ body ++ litBytes "[[/table]]" ++ after) := by
          simp [tadvClosed, List.append_assoc]
    _ = (91 :: (litBytes "[[table").drop 1) ++
          (head ++ litBytes "]]" ++ body ++ litBytes "[[/table]]" ++ after) := by
          rw (occs := .pos [1]) [h]
    _ = 91 :: ((litBytes "[[table").drop 1 ++
          (head ++ litBytes "]]" ++ body ++ litBytes "[[/table]]" ++ after)) := by
          rfl
    _ = 91 :: ((litBytes "[[table").drop 1 ++ head ++ litBytes "]]" ++ body ++
          litBytes "[[/table]]" ++ after) := by
          simp [List.append_assoc]

theorem scan_match_step (src head rest' rep tailOut : List Nat)
    (toks toks1 : List TokenEntry) (b : Nat) (rtail : List Nat) (fuel : Nat)
    (hsrc : src = b :: rtail)
    (hM : tableadvEnumMatchFirst src fuel = some (head, rest'))
    (hP : tableadvProcess head (advBodyOf src head rest')
        (src.take (src.length - rest'.length)) toks fuel = (rep, toks1))
    (hT : tableadvScanGo rest' toks1 fuel = (tailOut, toks1)) :
    tableadvScanGo src toks (Nat.succ fuel) = (rep ++ tailOut, toks1) := by
  subst hsrc
  have hlen : (b :: rtail).length = rtail.length + 1 := rfl
  have hP' := hP
  simp only [hlen] at hP'
  simp [tableadvScanGo, hM, hP', hT]

/-- Every chunk head on the one-cell body. The bytes are the six placeholders around `X`. The table-start attributes are `buildAttrsAdv` of the head. -/
theorem tableadvScanGo_chunks (cs : List TadvChunk) (fuel : Nat)
    (hok : tadvChunksOk cs = true) (hFuel : 80 ≤ fuel) :
    tableadvScanGo (tadvClosed (tadvChunksBytes cs) plainBody []) [] fuel =
      (plainRep, plainToks (buildAttrsAdv (tadvChunksBytes cs) "table")) := by
  cases fuel with
  | zero => omega
  | succ f =>
      have hE : edgesClearN plainBody.length
          (plainBody ++ litBytes "[[/table]]" ++ ([] : List Nat)) = true := by
        simpa using plainBody_edges
      have hM := enum_match_chunks cs plainBody [] f hok hE (by rw [plainBody_len]; omega)
      have hB := advBodyOf_closed (tadvChunksBytes cs) plainBody
      have hP := plain_process (tadvChunksBytes cs) f (by omega)
      have hcons := tadvClosed_cons (tadvChunksBytes cs) plainBody ([] : List Nat)
      have htake : (tadvClosed (tadvChunksBytes cs) plainBody []).take
          ((tadvClosed (tadvChunksBytes cs) plainBody []).length - ([] : List Nat).length) =
          tadvClosed (tadvChunksBytes cs) plainBody [] := by
        simp
      have hP' : tableadvProcess (tadvChunksBytes cs)
          (advBodyOf (tadvClosed (tadvChunksBytes cs) plainBody []) (tadvChunksBytes cs) [])
          ((tadvClosed (tadvChunksBytes cs) plainBody []).take
            ((tadvClosed (tadvChunksBytes cs) plainBody []).length - ([] : List Nat).length))
          [] f = (plainRep, plainToks (buildAttrsAdv (tadvChunksBytes cs) "table")) := by
        simp [hB, htake, hP]
      have hT : tableadvScanGo ([] : List Nat)
          (plainToks (buildAttrsAdv (tadvChunksBytes cs) "table")) f =
          ([], plainToks (buildAttrsAdv (tadvChunksBytes cs) "table")) :=
        mirror_scan_empty _ _
      simpa using scan_match_step (tadvClosed (tadvChunksBytes cs) plainBody [])
        (tadvChunksBytes cs) [] plainRep [] [] _
        91 ((litBytes "[[table").drop 1 ++ tadvChunksBytes cs ++ litBytes "]]" ++ plainBody ++
          litBytes "[[/table]]" ++ []) f hcons hM hP' hT

end LeanFtml
