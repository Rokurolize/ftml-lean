import LeanFtml.TableadvEnum

/-!
TableadvProof.lean — proof-grade head-group identities for the Tableadv mirror. The inherited advHeadRuns laws are kept and repaired here: extra fuel does not change advHeadRuns, a plain (non-quote, non-bracket) prefix extends a head run, a closed quoted run is taken whole, and a chunk head followed by `]]` is the first run. The REFCORR8 fold and the REFCORR10 class `[a-z0-9._-]` are theorems of advAttrStep for every suffix, and the quote-trick witness is a whole parse state of tableadvScanGo. The duplicate-copy equality `tableadv_mirror_eq_enum_scan` is not restated or relied upon here: it lives in the mirror's TableadvEnum.lean and is outside this family proof file. The universal recursive (?R) equivalence waits for the PcreCore kernel; the bounded certificate and alphabet quotient are separate family proof files.
-/

namespace LeanFtml

/-! ## Head runs: fuel does not cut, and chunk heads are taken whole -/

/-- One step of the head search. `q` is the continuation of a closed quote and `r` is the continuation of one consumed byte. Quoted alternatives come first. -/
def headStep (b : Nat) (rest : List Nat)
    (q r : List (List Nat × List Nat)) : List (List Nat × List Nat) :=
  let inner := rest.takeWhile (fun x => x != 34)
  let quoted :=
    if b == 34 then
      match rest.drop inner.length with
      | 34 :: _ =>
          q.map (fun (run, rr) => ((b :: rest).take (inner.length + 2) ++ run, rr))
      | _ => []
    else []
  let single :=
    if b == 93 then []
    else r.map (fun (run, rr) => (b :: run, rr))
  quoted ++ single ++ [([], b :: rest)]

theorem go_cons_step (b : Nat) (rest : List Nat) (fuel : Nat) :
    advHeadRuns.go (b :: rest) (Nat.succ fuel) =
      headStep b rest
        (advHeadRuns.go (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1)) fuel)
        (advHeadRuns.go rest fuel) := by
  rw [advHeadRuns.go]
  simp only [headStep]
  cases hd : rest.drop (rest.takeWhile (fun x => x != 34)).length with
  | nil => simp
  | cons c cs =>
      by_cases hc : c = 34
      · subst c
        have hdtail : rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1) = cs := by
          simpa using congrArg List.tail hd
        simp [hdtail]
      · simp [hc]

theorem go_nil (fuel : Nat) : advHeadRuns.go ([] : List Nat) fuel = [([], [])] := by
  rw [advHeadRuns.go]

/-- The quote-continuation suffix is no longer than the text it was dropped from. -/
theorem drop_tail_le (rest : List Nat) :
    (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1)).length ≤ rest.length := by
  simp only [List.length_drop]
  exact Nat.sub_le _ _

/-- Any fuel at least `src.length` agrees with `advHeadRuns`. The zero-fuel cutoff is not reachable on that budget, because every recursive call consumes a byte. -/
theorem go_ge : (src : List Nat) → (fuel : Nat) → src.length ≤ fuel →
    advHeadRuns.go src fuel = advHeadRuns src
  | [], fuel, _ => by
      rw [go_nil, advHeadRuns, go_nil]
  | _ :: _, 0, h => by simp at h
  | b :: rest, fuel + 1, h => by
      have hrest : rest.length ≤ fuel := by
        have hlen : (b :: rest).length = rest.length + 1 := rfl
        omega
      have htail : (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1)).length ≤ fuel :=
        Nat.le_trans (drop_tail_le rest) hrest
      have ihR := go_ge rest fuel hrest
      have ihT := go_ge (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1)) fuel htail
      have ihR1 := go_ge rest (rest.length + 1) (Nat.le_succ _)
      have ihT1 := go_ge (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1))
        (rest.length + 1) (Nat.le_trans (drop_tail_le rest) (Nat.le_succ _))
      have hstep : advHeadRuns.go (b :: rest) (fuel + 1) =
          headStep b rest
            (advHeadRuns (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1)))
            (advHeadRuns rest) := by
        simpa [ihT, ihR] using go_cons_step b rest fuel
      have hfull : advHeadRuns (b :: rest) =
          headStep b rest
            (advHeadRuns (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1)))
            (advHeadRuns rest) := by
        change advHeadRuns.go (b :: rest) ((b :: rest).length + 1) = _
        simpa [ihT1, ihR1] using go_cons_step b rest (rest.length + 1)
      exact hstep.trans hfull.symm
termination_by src => src.length
decreasing_by
  simp_wf
  all_goals
    have hle := drop_tail_le rest
    have hlen : (b :: rest).length = rest.length + 1 := rfl
    omega

/-- A byte the unquoted alternative `[^\]]` may consume. -/
def tableadvBytePlain (b : Nat) : Bool :=
  b != 34 && b != 93

theorem advHeadRuns_plain_byte (b : Nat) (rest run rr : List Nat)
    (more : List (List Nat × List Nat))
    (hb : tableadvBytePlain b = true)
    (h : advHeadRuns rest = (run, rr) :: more) :
    advHeadRuns (b :: rest) =
      (b :: run, rr) ::
        (more.map (fun x => (b :: x.1, x.2)) ++ [([], b :: rest)]) := by
  have h34 : (b == 34) = false := by
    simp [tableadvBytePlain, Bool.and_eq_true] at hb
    simpa using hb.1
  have h93 : (b == 93) = false := by
    simp [tableadvBytePlain, Bool.and_eq_true] at hb
    simpa using hb.2
  have hk : (b :: rest).length + 1 = Nat.succ (rest.length + 1) := rfl
  rw [advHeadRuns, hk, go_cons_step]
  have htail : advHeadRuns.go rest (rest.length + 1) = advHeadRuns rest :=
    go_ge rest (rest.length + 1) (by omega)
  have hquote : advHeadRuns.go (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1))
      (rest.length + 1) = advHeadRuns
      (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1)) :=
    go_ge _ (rest.length + 1) (Nat.le_trans (drop_tail_le rest) (Nat.le_succ _))
  simp [headStep, h34, h93, htail, hquote, h]

theorem advHeadRuns_plain_prefix (pre : List Nat) :
    pre.all tableadvBytePlain = true →
    ∀ (rest run rr : List Nat) (more : List (List Nat × List Nat)),
      advHeadRuns rest = (run, rr) :: more →
      ∃ more', advHeadRuns (pre ++ rest) = (pre ++ run, rr) :: more' := by
  induction pre with
  | nil =>
      intro _ rest run rr more h
      exact ⟨more, by simpa using h⟩
  | cons b bs ih =>
      intro hp rest run rr more h
      rw [List.all_cons, Bool.and_eq_true] at hp
      obtain ⟨more1, h1⟩ := ih hp.2 rest run rr more h
      have h2 := advHeadRuns_plain_byte b (bs ++ rest) (bs ++ run) rr more1 hp.1 h1
      refine ⟨more1.map (fun x => (b :: x.1, x.2)) ++ [([], b :: (bs ++ rest))], ?_⟩
      simpa using h2

theorem takeWhile_append_ok (inner tail : List Nat)
    (h : inner.all (fun x => x != 34) = true) :
    (inner ++ tail).takeWhile (fun x => x != 34) =
      inner ++ tail.takeWhile (fun x => x != 34) := by
  induction inner with
  | nil => simp
  | cons x xs ih =>
      rw [List.all_cons, Bool.and_eq_true] at h
      simp [h.1, ih h.2]

theorem take_quote_closed (inner tail : List Nat) :
    ((34 :: (inner ++ (34 :: tail))).take (inner.length + 2)) =
      34 :: inner ++ [34] := by
  have hlen : (inner ++ [34]).length = inner.length + 1 := by
    simp [List.length_append]
  have happ : inner ++ (34 :: tail) = (inner ++ [34]) ++ tail := by
    simp
  have hinner : (inner ++ (34 :: tail)).take (inner.length + 1) = inner ++ [34] := by
    rw [happ, ← hlen]
    exact @List.take_left Nat (inner ++ [34]) tail
  calc
    (34 :: (inner ++ (34 :: tail))).take (inner.length + 2)
        = 34 :: (inner ++ (34 :: tail)).take (inner.length + 1) := by
            rw [show inner.length + 2 = Nat.succ (inner.length + 1) by omega]
            simp
    _ = 34 :: inner ++ [34] := by simpa [hinner]

theorem advHeadRuns_quote_front (inner tail run rr : List Nat)
    (more : List (List Nat × List Nat))
    (hi : inner.all (fun b => b != 34) = true)
    (h : advHeadRuns tail = (run, rr) :: more) :
    ∃ more', advHeadRuns (34 :: (inner ++ (34 :: tail))) =
      ((34 :: inner ++ [34]) ++ run, rr) :: more' := by
  have htake : ((inner ++ (34 :: tail)).takeWhile (fun x => x != 34)) = inner := by
    rw [takeWhile_append_ok inner (34 :: tail) hi]
    simp
  have hk : (34 :: (inner ++ (34 :: tail))).length + 1 =
      Nat.succ ((inner ++ (34 :: tail)).length + 1) := rfl
  let rest := inner ++ (34 :: tail)
  have hdrop0 : rest.drop (rest.takeWhile (fun x => x != 34)).length = 34 :: tail := by
    simp [rest, htake]
  have hdrop : rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1) = tail := by
    simpa using congrArg List.tail hdrop0
  have hfuel : (inner ++ (34 :: tail)).length + 1 =
      inner.length + (tail.length + 1) + 1 := by
    simp [List.length_append]
  have htailGo : advHeadRuns.go tail (inner.length + (tail.length + 1) + 1) =
      advHeadRuns tail := by
    have ih := go_ge tail ((inner ++ (34 :: tail)).length + 1)
      (by simp [List.length_append]; omega)
    simpa [hfuel] using ih
  have hrestGo : advHeadRuns.go rest (inner.length + (tail.length + 1) + 1) =
      advHeadRuns rest := by
    simpa [rest, hfuel] using go_ge rest (rest.length + 1) (by omega)
  have hstep : advHeadRuns (34 :: rest) =
      (((34 :: rest).take (inner.length + 2) ++ run), rr) ::
        (more.map (fun x => ((34 :: rest).take (inner.length + 2) ++ x.1, x.2)) ++
          ((advHeadRuns rest).map (fun x => (34 :: x.1, x.2)) ++ [([], 34 :: rest)])) := by
    change advHeadRuns.go (34 :: (inner ++ (34 :: tail)))
        ((34 :: (inner ++ (34 :: tail))).length + 1) = _
    rw [hk, go_cons_step, hfuel]
    simp only [headStep]
    rw [hdrop, hdrop0, htailGo, hrestGo, h]
    rw [htake]
    simp [rest, show (34 == 34) = true by rfl, show (34 == 93) = false by decide]
  have htakeHead : (34 :: rest).take (inner.length + 2) = 34 :: inner ++ [34] := by
    simpa [rest] using take_quote_closed inner tail
  rw [htakeHead] at hstep
  refine ⟨more.map (fun x => ((34 :: inner ++ [34]) ++ x.1, x.2)) ++
      ((advHeadRuns (inner ++ (34 :: tail))).map (fun x => (34 :: x.1, x.2)) ++
        [([], 34 :: (inner ++ (34 :: tail)))]), ?_⟩
  simpa [rest, List.append_assoc] using hstep

inductive TadvChunk where
  | plain : List Nat → TadvChunk
  | quoted : List Nat → TadvChunk

def tadvChunkBytes : TadvChunk → List Nat
  | .plain bs => bs
  | .quoted inner => [34] ++ inner ++ [34]

def tadvChunksBytes (cs : List TadvChunk) : List Nat :=
  cs.flatMap tadvChunkBytes

def tadvChunkOk : TadvChunk → Bool
  | .plain bs => bs.all tableadvBytePlain
  | .quoted inner => inner.all (fun b => b != 34)

def tadvChunksOk (cs : List TadvChunk) : Bool :=
  cs.all tadvChunkOk

/-- The first run on a chunk head followed by `]]` is the whole head. A quoted run is tried before a one-byte run, so a balanced `"…"` is one token even when its interior contains `]`. -/
theorem advHeadRuns_chunks (cs : List TadvChunk) (rest : List Nat)
    (hok : tadvChunksOk cs = true) :
    ∃ more, advHeadRuns (tadvChunksBytes cs ++ (93 :: 93 :: rest)) =
      (tadvChunksBytes cs, 93 :: 93 :: rest) :: more := by
  induction cs with
  | nil =>
      exact ⟨[], by simpa [tadvChunksBytes] using heads_bracket (93 :: rest)⟩
  | cons c cs ih =>
      have hok' : tadvChunkOk c = true ∧ tadvChunksOk cs = true := by
        simpa [tadvChunksOk, List.all_cons, Bool.and_eq_true] using hok
      obtain ⟨more, hm⟩ := ih hok'.2
      cases c with
      | plain bs =>
          have hp : bs.all tableadvBytePlain = true := by
            simpa [tadvChunkOk] using hok'.1
          obtain ⟨more', hm'⟩ := advHeadRuns_plain_prefix bs hp
            (tadvChunksBytes cs ++ (93 :: 93 :: rest))
            (tadvChunksBytes cs) (93 :: 93 :: rest) more hm
          simpa [tadvChunksBytes, tadvChunkBytes] using ⟨more', hm'⟩
      | quoted inner =>
          have hi : inner.all (fun b => b != 34) = true := by
            simpa [tadvChunkOk] using hok'.1
          have hfront := advHeadRuns_quote_front inner
            (tadvChunksBytes cs ++ (93 :: 93 :: rest))
            (tadvChunksBytes cs) (93 :: 93 :: rest) more hi hm
          obtain ⟨more', hm'⟩ := hfront
          refine ⟨more', ?_⟩
          simpa [tadvChunksBytes, List.flatMap_cons, tadvChunkBytes, List.append_assoc] using hm'

theorem brackets_bytes : litBytes "]]" = 93 :: 93 :: [] := by decide

def tadvClosed (head body after : List Nat) : List Nat :=
  litBytes "[[table" ++ head ++ litBytes "]]" ++ body ++ litBytes "[[/table]]" ++ after

theorem enum_body_after_clear {α : Type} (body after : List Nat)
    (k : List Nat → Option α) (a : α) (fuel : Nat)
    (hE : edgesClearN body.length (body ++ litBytes "[[/table]]" ++ after) = true)
    (hk : k after = some a) (h : 2 * body.length + 1 ≤ fuel) :
    tableadvEnumBody (body ++ litBytes "[[/table]]" ++ after) k fuel = some a := by
  have hsk := enumBody_skip body.length fuel
    (body ++ litBytes "[[/table]]" ++ after) k hE (by omega)
  have hdrop : (body ++ litBytes "[[/table]]" ++ after).drop body.length =
      litBytes "[[/table]]" ++ after := by simp
  rw [hsk, hdrop]
  exact enumBody_accept_ge after k a (fuel - 2 * body.length) hk (by omega)

/-- Chunk head, edge-clear body: the mirror's match function returns that head and the text after `[[/table]]`. -/
theorem enum_match_chunks (cs : List TadvChunk) (body after : List Nat) (fuel : Nat)
    (hok : tadvChunksOk cs = true)
    (hE : edgesClearN body.length (body ++ litBytes "[[/table]]" ++ after) = true)
    (hFuel : 2 * body.length + 2 ≤ fuel) :
    tableadvEnumMatchFirst (tadvClosed (tadvChunksBytes cs) body after) fuel =
      some (tadvChunksBytes cs, after) := by
  cases fuel with
  | zero => omega
  | succ f =>
      unfold tableadvEnumMatchFirst
      have hassoc : tadvClosed (tadvChunksBytes cs) body after =
          litBytes "[[table" ++ (tadvChunksBytes cs ++ litBytes "]]" ++ body ++
            litBytes "[[/table]]" ++ after) := by
        simp [tadvClosed]
      rw [hassoc]
      simp only [tableadvEnumMatch, matchLitCI_self_append]
      have hbr : tadvChunksBytes cs ++ litBytes "]]" ++ body ++ litBytes "[[/table]]" ++ after =
          tadvChunksBytes cs ++ (93 :: 93 :: (body ++ litBytes "[[/table]]" ++ after)) := by
        simp [brackets_bytes]
      obtain ⟨more, hruns⟩ := advHeadRuns_chunks cs
        (body ++ litBytes "[[/table]]" ++ after) hok
      rw [hbr, hruns]
      have hB := enum_body_after_clear body after
        (fun r => some (tadvChunksBytes cs, r)) (tadvChunksBytes cs, after) f hE rfl (by omega)
      exact enumHeads_hit (fun head rest => some (head, rest)) f (tadvChunksBytes cs)
        (body ++ litBytes "[[/table]]" ++ after) more (tadvChunksBytes cs, after) hB

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

/-! ## REFCORR8 fold and REFCORR10 class -/

def tableadvDataClass (b : Nat) : Bool :=
  (97 ≤ b && b ≤ 122) || (48 ≤ b && b ≤ 57) || b == 45 || b == 95 || b == 46

theorem isPrefixOf_self_append (p s : List Nat) : p.isPrefixOf (p ++ s) = true := by
  induction p with
  | nil => simp
  | cons b bs ih => simp [List.isPrefixOf, ih]

theorem advDataKeyOk_suffix (s : List Nat) :
    advDataKeyOk (litBytes "data-" ++ s) = s.all tableadvDataClass := by
  simp only [advDataKeyOk, isPrefixOf_self_append, drop_app]
  apply congrArg (fun f => s.all f)
  funext x
  apply Bool.eq_iff_iff.mpr
  constructor <;> intro h
  · unfold tableadvDataClass at h ⊢
    simp only [Bool.and_eq_true, Bool.or_eq_true, beq_iff_eq, decide_eq_true_eq] at h ⊢
    omega
  · unfold tableadvDataClass at h
    simp only [Bool.and_eq_true, Bool.or_eq_true, beq_iff_eq, decide_eq_true_eq] at h ⊢
    omega

theorem lower_data_prefix (s : List Nat) :
    lowerBytes (litBytes "data-" ++ s) = litBytes "data-" ++ lowerBytes s := by
  have hlit : lowerBytes (litBytes "data-") = litBytes "data-" := by decide
  simpa [lowerBytes, List.map_append] using congrArg (fun t => t ++ lowerBytes s) hlit

theorem fold_data_suffix (s : List Nat) :
    foldDataKeyAdv (litBytes "data-" ++ s) = litBytes "data-" ++ lowerBytes s := by
  simp [foldDataKeyAdv, isPrefixOf_self_append, lower_data_prefix]

theorem data_lit : litBytes "data-" = [100, 97, 116, 97, 45] := by decide

theorem data_pref_ne (s name : List Nat) (hn : name.head? ≠ some 100) :
    (litBytes "data-" ++ s = name) → False := by
  intro h
  have := congrArg List.head? h
  simp [data_lit] at this
  exact hn this.symm

theorem data_pref_beq_false (s name : List Nat) (hn : name.head? ≠ some 100) :
    ((litBytes "data-" ++ s) == name) = false := by
  cases hbeq : ((litBytes "data-" ++ s) == name) with
  | false => rfl
  | true =>
      exact (data_pref_ne s name hn (by simpa [beq_iff_eq] using hbeq)).elim

theorem norm_UB : normalizeValueAdv (litBytes "UB") = litBytes "UB" := by decide

theorem ub_nonempty : (litBytes "UB").isEmpty = false := by decide

/-- Every suffix: a lower-case `data-` prefix is folded, then kept exactly when the folded suffix lies in `[a-z0-9._-]`. `UB` is unchanged by normalization. An upper-case letter in the suffix is outside the class and inside the fold, which is the REFCORR8 step; `.` and `_` are in the class, which is the REFCORR10 step. -/
theorem advAttrStep_data_keep (s : List Nat)
    (h : (lowerBytes s).all tableadvDataClass = true) :
    advAttrStep "table" [] (litBytes "data-" ++ s, litBytes "UB") =
      [(litBytes "data-" ++ lowerBytes s, litBytes "UB")] := by
  have hk : advAttrKeyOk (litBytes "data-" ++ lowerBytes s) = true := by
    simp [advAttrKeyOk, isPrefixOf_self_append, advDataKeyOk_suffix, h]
  have hs : isSafeAttrB (litBytes "data-" ++ lowerBytes s) = true := by
    simp [isSafeAttrB, isPrefixOf_self_append]
  have htitle := data_pref_beq_false (lowerBytes s) (litBytes "title") (by decide)
  have hhidden := data_pref_beq_false (lowerBytes s) (litBytes "hidden") (by decide)
  have hcol := data_pref_beq_false (lowerBytes s) (litBytes "colspan") (by decide)
  have hrow := data_pref_beq_false (lowerBytes s) (litBytes "rowspan") (by decide)
  have hid := data_pref_beq_false (lowerBytes s) (litBytes "id") (by decide)
  unfold advAttrStep
  simp only [fold_data_suffix, hk, hs, htitle, hhidden, hcol, hrow, hid, norm_UB,
    ub_nonempty, omSetB, show ("table" == "cell") = false by decide, Bool.not_true,
    Bool.not_false, Bool.or_false, Bool.and_false, Bool.false_and]
  simp [Bool.false_eq_true, if_false, norm_UB, ub_nonempty, Bool.and_false]

theorem advAttrStep_data_drop (s : List Nat)
    (h : (lowerBytes s).all tableadvDataClass = false) :
    advAttrStep "table" [] (litBytes "data-" ++ s, litBytes "UB") = [] := by
  have hk : advAttrKeyOk (litBytes "data-" ++ lowerBytes s) = false := by
    simp [advAttrKeyOk, isPrefixOf_self_append, advDataKeyOk_suffix, h]
  unfold advAttrStep
  simp only [fold_data_suffix, hk, Bool.not_false, ite_true]

theorem data_prefix_upper_rejected (s : List Nat) :
    (litBytes "data-").isPrefixOf (litBytes "DATA-" ++ s) = false := by
  rw [show litBytes "data-" = [100, 97, 116, 97, 45] by decide]
  rw [show litBytes "DATA-" = [68, 65, 84, 65, 45] by decide]
  simp [List.isPrefixOf]

/-- An upper-case `DATA-` prefix is not folded and is dropped, for every suffix and every value. -/
theorem advAttrStep_DATA_drop (s v : List Nat) :
    advAttrStep "table" [] (litBytes "DATA-" ++ s, v) = [] := by
  have hfold : foldDataKeyAdv (litBytes "DATA-" ++ s) = litBytes "DATA-" ++ s := by
    simp [foldDataKeyAdv, data_prefix_upper_rejected]
  have hkey : advKeyOk (litBytes "DATA-" ++ s) = false := by
    rw [show litBytes "DATA-" = [68, 65, 84, 65, 45] by decide]
    simp [advKeyOk]
  have hok : advAttrKeyOk (litBytes "DATA-" ++ s) = false := by
    simp [advAttrKeyOk, data_prefix_upper_rejected, hkey]
  simp [advAttrStep, hfold, hok]

theorem tableadvDataClass_members :
    tableadvDataClass 46 = true ∧ tableadvDataClass 95 = true ∧
    tableadvDataClass 45 = true ∧ tableadvDataClass 43 = false ∧
    tableadvDataClass 65 = false ∧ tableadvDataClass 97 = true := by
  decide

def tadvAlph : List Nat := [97, 65, 122, 90, 48, 57, 45, 95, 46, 43, 32, 93]

def tadvExact : Nat → List (List Nat)
  | 0 => [[]]
  | n + 1 => (tadvExact n).flatMap fun s => tadvAlph.map fun b => s ++ [b]

def tadvUpTo (n : Nat) : List (List Nat) :=
  (List.range (n + 1)).flatMap tadvExact

set_option maxRecDepth 100000 in
theorem tadvUpTo_two_length : (tadvUpTo 2).length = 157 := by decide

set_option maxHeartbeats 2000000 in
set_option maxRecDepth 100000 in
theorem tadv_suffix_domain :
    (tadvUpTo 2).all (fun s =>
      let keep := (lowerBytes s).all tableadvDataClass
      let stepped := advAttrStep "table" [] (litBytes "data-" ++ s, litBytes "UB")
      let expect := if keep then [(lowerBytes (litBytes "data-" ++ s), litBytes "UB")] else []
      let upper := advAttrStep "table" [] (litBytes "DATA-" ++ s, litBytes "UB")
      (stepped == expect) && (upper == [])) = true := by
  decide

/-! ## Named heads, including REFCORR8 and REFCORR10, through `tableadvScanGo` -/

def chunksFoo : List TadvChunk :=
  [.plain (litBytes " data-Foo="), .quoted (litBytes "UP")]
def chunksDot : List TadvChunk :=
  [.plain (litBytes " data-Foo.Bar="), .quoted (litBytes "UB")]
def chunksUnder : List TadvChunk :=
  [.plain (litBytes " data-Foo_Bar="), .quoted (litBytes "UB")]
def chunksDATA : List TadvChunk :=
  [.plain (litBytes " DATA-foo="), .quoted (litBytes "UP")]
def chunksCLASS : List TadvChunk :=
  [.plain (litBytes " CLASS="), .quoted (litBytes "UP")]
def chunksPlus : List TadvChunk :=
  [.plain (litBytes " data-foo+bar="), .quoted (litBytes "UB")]
def chunksEmptySuffix : List TadvChunk :=
  [.plain (litBytes " data-="), .quoted (litBytes "UB")]
def chunksDotEdge : List TadvChunk :=
  [.plain (litBytes " data-.="), .quoted (litBytes "UB")]
def chunksLast : List TadvChunk :=
  [.plain (litBytes " data-Foo="), .quoted (litBytes "1"),
   .plain (litBytes " data-foo="), .quoted (litBytes "2")]
def chunksId : List TadvChunk :=
  [.plain (litBytes " id="), .quoted (litBytes "X")]
def chunksAlign : List TadvChunk :=
  [.plain (litBytes " align="), .quoted (litBytes "center")]

theorem chunksFoo_ok : tadvChunksOk chunksFoo = true := by decide
theorem chunksDot_ok : tadvChunksOk chunksDot = true := by decide
theorem chunksUnder_ok : tadvChunksOk chunksUnder = true := by decide
theorem chunksDATA_ok : tadvChunksOk chunksDATA = true := by decide
theorem chunksCLASS_ok : tadvChunksOk chunksCLASS = true := by decide
theorem chunksPlus_ok : tadvChunksOk chunksPlus = true := by decide
theorem chunksEmptySuffix_ok : tadvChunksOk chunksEmptySuffix = true := by decide
theorem chunksDotEdge_ok : tadvChunksOk chunksDotEdge = true := by decide
theorem chunksLast_ok : tadvChunksOk chunksLast = true := by decide
theorem chunksId_ok : tadvChunksOk chunksId = true := by decide
theorem chunksAlign_ok : tadvChunksOk chunksAlign = true := by decide
theorem chunks_nil_ok : tadvChunksOk ([] : List TadvChunk) = true := by decide

theorem chunksFoo_bytes : tadvChunksBytes chunksFoo = litBytes " data-Foo=\"UP\"" := by decide
theorem chunksDot_bytes : tadvChunksBytes chunksDot = litBytes " data-Foo.Bar=\"UB\"" := by decide
theorem chunksUnder_bytes : tadvChunksBytes chunksUnder = litBytes " data-Foo_Bar=\"UB\"" := by decide
theorem chunksDATA_bytes : tadvChunksBytes chunksDATA = litBytes " DATA-foo=\"UP\"" := by decide
theorem chunksCLASS_bytes : tadvChunksBytes chunksCLASS = litBytes " CLASS=\"UP\"" := by decide
theorem chunksPlus_bytes : tadvChunksBytes chunksPlus = litBytes " data-foo+bar=\"UB\"" := by decide
theorem chunksEmpty_bytes : tadvChunksBytes chunksEmptySuffix = litBytes " data-=\"UB\"" := by decide
theorem chunksDotEdge_bytes : tadvChunksBytes chunksDotEdge = litBytes " data-.=\"UB\"" := by decide
theorem chunksLast_bytes : tadvChunksBytes chunksLast =
    litBytes " data-Foo=\"1\" data-foo=\"2\"" := by decide
theorem chunksId_bytes : tadvChunksBytes chunksId = litBytes " id=\"X\"" := by decide
theorem chunksAlign_bytes : tadvChunksBytes chunksAlign = litBytes " align=\"center\"" := by decide

theorem attrsFoo : buildAttrsAdv (litBytes " data-Foo=\"UP\"") "table" =
    [(litBytes "data-foo", litBytes "UP")] := by decide
theorem attrsDot : buildAttrsAdv (litBytes " data-Foo.Bar=\"UB\"") "table" =
    [(litBytes "data-foo.bar", litBytes "UB")] := by decide
theorem attrsUnder : buildAttrsAdv (litBytes " data-Foo_Bar=\"UB\"") "table" =
    [(litBytes "data-foo_bar", litBytes "UB")] := by decide
theorem attrsDATA : buildAttrsAdv (litBytes " DATA-foo=\"UP\"") "table" = [] := by decide
theorem attrsCLASS : buildAttrsAdv (litBytes " CLASS=\"UP\"") "table" = [] := by decide
theorem attrsPlus : buildAttrsAdv (litBytes " data-foo+bar=\"UB\"") "table" = [] := by decide
theorem attrsEmptySuffix : buildAttrsAdv (litBytes " data-=\"UB\"") "table" =
    [(litBytes "data-", litBytes "UB")] := by decide
theorem attrsDotEdge : buildAttrsAdv (litBytes " data-.=\"UB\"") "table" =
    [(litBytes "data-.", litBytes "UB")] := by decide
theorem attrsLast : buildAttrsAdv (litBytes " data-Foo=\"1\" data-foo=\"2\"") "table" =
    [(litBytes "data-foo", litBytes "2")] := by decide
theorem attrsId : buildAttrsAdv (litBytes " id=\"X\"") "table" =
    [(litBytes "id", litBytes "u-X")] := by decide
theorem attrsAlign : buildAttrsAdv (litBytes " align=\"center\"") "table" = [] := by decide
theorem attrsEmptyHead : buildAttrsAdv ([] : List Nat) "table" = [] := by decide

def srcPlainCell (head : List Nat) : List Nat :=
  tadvClosed head plainBody []

theorem scan_of_chunks (cs : List TadvChunk) (head : List Nat)
    (attrs : List (List Nat × List Nat)) (fuel : Nat)
    (hok : tadvChunksOk cs = true) (hbytes : tadvChunksBytes cs = head)
    (hattrs : buildAttrsAdv head "table" = attrs) (hFuel : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell head) [] fuel = (plainRep, plainToks attrs) := by
  have hscan := tableadvScanGo_chunks cs fuel hok hFuel
  simpa [srcPlainCell, hbytes, hattrs] using hscan

theorem scan_empty_head (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell []) [] fuel = (plainRep, plainToks []) :=
  scan_of_chunks [] _ _ fuel chunks_nil_ok (by simp [tadvChunksBytes]) attrsEmptyHead h

theorem scan_data_foo (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-Foo=\"UP\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-foo", litBytes "UP")]) :=
  scan_of_chunks chunksFoo _ _ fuel chunksFoo_ok chunksFoo_bytes attrsFoo h

theorem scan_data_dot (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-Foo.Bar=\"UB\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-foo.bar", litBytes "UB")]) :=
  scan_of_chunks chunksDot _ _ fuel chunksDot_ok chunksDot_bytes attrsDot h

theorem scan_data_under (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-Foo_Bar=\"UB\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-foo_bar", litBytes "UB")]) :=
  scan_of_chunks chunksUnder _ _ fuel chunksUnder_ok chunksUnder_bytes attrsUnder h

theorem scan_DATA_drop (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " DATA-foo=\"UP\"")) [] fuel =
      (plainRep, plainToks []) :=
  scan_of_chunks chunksDATA _ _ fuel chunksDATA_ok chunksDATA_bytes attrsDATA h

theorem scan_CLASS_drop (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " CLASS=\"UP\"")) [] fuel =
      (plainRep, plainToks []) :=
  scan_of_chunks chunksCLASS _ _ fuel chunksCLASS_ok chunksCLASS_bytes attrsCLASS h

theorem scan_plus_drop (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-foo+bar=\"UB\"")) [] fuel =
      (plainRep, plainToks []) :=
  scan_of_chunks chunksPlus _ _ fuel chunksPlus_ok chunksPlus_bytes attrsPlus h

theorem scan_empty_suffix (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-=\"UB\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-", litBytes "UB")]) :=
  scan_of_chunks chunksEmptySuffix _ _ fuel chunksEmptySuffix_ok chunksEmpty_bytes
    attrsEmptySuffix h

theorem scan_dot_edge (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-.=\"UB\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-.", litBytes "UB")]) :=
  scan_of_chunks chunksDotEdge _ _ fuel chunksDotEdge_ok chunksDotEdge_bytes attrsDotEdge h

theorem scan_last_wins (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " data-Foo=\"1\" data-foo=\"2\"")) [] fuel =
      (plainRep, plainToks [(litBytes "data-foo", litBytes "2")]) :=
  scan_of_chunks chunksLast _ _ fuel chunksLast_ok chunksLast_bytes attrsLast h

theorem scan_id_isolate (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " id=\"X\"")) [] fuel =
      (plainRep, plainToks [(litBytes "id", litBytes "u-X")]) :=
  scan_of_chunks chunksId _ _ fuel chunksId_ok chunksId_bytes attrsId h

theorem scan_align_drop (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvScanGo (srcPlainCell (litBytes " align=\"center\"")) [] fuel =
      (plainRep, plainToks []) :=
  scan_of_chunks chunksAlign _ _ fuel chunksAlign_ok chunksAlign_bytes attrsAlign h

/-! ## Quote-trick witness, whole state of `tableadvScanGo` -/

def witnessRep : List Nat :=
  phBytes 4 ++ phBytes 2 ++ phBytes 0 ++ enumCell ++ phBytes 1 ++ phBytes 3 ++ phBytes 5

def witnessToks : List TokenEntry :=
  [tadvCellStart false [], tadvCellEnd false, tadvRowStart [], tadvRowEnd,
   tadvStart [], tadvEnd]

theorem witness_rows :
    advRowsGo [(([] : List Nat), enumRowBody)] ([] : List TokenEntry) =
      (some (phBytes 2 ++ phBytes 0 ++ enumCell ++ phBytes 1 ++ phBytes 3),
       [tadvCellStart false [], tadvCellEnd false, tadvRowStart [], tadvRowEnd]) := by
  rfl

theorem witness_process (fuel : Nat) (h : 80 ≤ fuel) :
    tableadvProcess [] enumBody tableadvWitness [] fuel = (witnessRep, witnessToks) := by
  cases fuel with
  | zero => omega
  | succ f =>
      simp only [tableadvProcess,
        mirror_scan_enum_body ([] : List TokenEntry) f (by omega),
        enum_one_row, List.isEmpty_cons, not_res_empty]
      rw [ite_eq_right (by decide : ¬ (false = true)),
        ite_eq_right (by decide : ¬ (false = true))]
      simp [witness_rows, claimTok, witnessRep, witnessToks, tadvStart, tadvEnd]

theorem tableadvScanGo_witness (fuel : Nat) (h : 201 ≤ fuel) :
    tableadvScanGo tableadvWitness [] (fuel + 1) = (witnessRep, witnessToks) := by
  have hM := enum_match_witness (fuel - 1) (by omega)
  have hMf : (fuel - 1) + 1 = fuel := by omega
  simp only [hMf] at hM
  have hSpan := enum_span
  have hP := witness_process fuel (by omega)
  rw [witness_cons]
  simp only [tableadvScanGo, ← witness_cons, hM, mirror_scan_empty]
  simp only [hSpan.1, List.length_nil, Nat.sub_zero, hSpan.2, List.append_nil]
  exact hP

theorem tableadvScanGo_witness_fuel :
    tableadvScanGo tableadvWitness [] (tableFuel tableadvWitness.length) =
      (witnessRep, witnessToks) := by
  have hlen : 221 ≤ tableFuel tableadvWitness.length := fuel_for_enum
  have hs : tableFuel tableadvWitness.length =
      (tableFuel tableadvWitness.length - 1) + 1 := by omega
  rw [hs]
  exact tableadvScanGo_witness (tableFuel tableadvWitness.length - 1) (by omega)

end LeanFtml

/-! ## Axiom audit (all headline theorems in this file) -/
#print axioms LeanFtml.go_cons_step
#print axioms LeanFtml.go_nil
#print axioms LeanFtml.drop_tail_le
#print axioms LeanFtml.go_ge
#print axioms LeanFtml.advHeadRuns_plain_byte
#print axioms LeanFtml.advHeadRuns_plain_prefix
#print axioms LeanFtml.takeWhile_append_ok
#print axioms LeanFtml.take_quote_closed
#print axioms LeanFtml.advHeadRuns_quote_front
#print axioms LeanFtml.advHeadRuns_chunks
#print axioms LeanFtml.brackets_bytes
#print axioms LeanFtml.enum_body_after_clear
#print axioms LeanFtml.enum_match_chunks
#print axioms LeanFtml.plainBody_len
#print axioms LeanFtml.plainBody_edges
#print axioms LeanFtml.plainBody_noTable
#print axioms LeanFtml.plain_row_match
#print axioms LeanFtml.plain_rows
#print axioms LeanFtml.drop_app
#print axioms LeanFtml.take_app
#print axioms LeanFtml.advBodyOf_closed
#print axioms LeanFtml.plain_process
#print axioms LeanFtml.tadvClosed_cons
#print axioms LeanFtml.scan_match_step
#print axioms LeanFtml.tableadvScanGo_chunks
#print axioms LeanFtml.isPrefixOf_self_append
#print axioms LeanFtml.advDataKeyOk_suffix
#print axioms LeanFtml.lower_data_prefix
#print axioms LeanFtml.fold_data_suffix
#print axioms LeanFtml.data_lit
#print axioms LeanFtml.data_pref_ne
#print axioms LeanFtml.data_pref_beq_false
#print axioms LeanFtml.norm_UB
#print axioms LeanFtml.ub_nonempty
#print axioms LeanFtml.advAttrStep_data_keep
#print axioms LeanFtml.advAttrStep_data_drop
#print axioms LeanFtml.data_prefix_upper_rejected
#print axioms LeanFtml.advAttrStep_DATA_drop
#print axioms LeanFtml.tableadvDataClass_members
#print axioms LeanFtml.tadvUpTo_two_length
#print axioms LeanFtml.tadv_suffix_domain
#print axioms LeanFtml.chunksFoo_ok
#print axioms LeanFtml.chunksDot_ok
#print axioms LeanFtml.chunksUnder_ok
#print axioms LeanFtml.chunksDATA_ok
#print axioms LeanFtml.chunksCLASS_ok
#print axioms LeanFtml.chunksPlus_ok
#print axioms LeanFtml.chunksEmptySuffix_ok
#print axioms LeanFtml.chunksDotEdge_ok
#print axioms LeanFtml.chunksLast_ok
#print axioms LeanFtml.chunksId_ok
#print axioms LeanFtml.chunksAlign_ok
#print axioms LeanFtml.chunks_nil_ok
#print axioms LeanFtml.chunksFoo_bytes
#print axioms LeanFtml.chunksDot_bytes
#print axioms LeanFtml.chunksUnder_bytes
#print axioms LeanFtml.chunksDATA_bytes
#print axioms LeanFtml.chunksCLASS_bytes
#print axioms LeanFtml.chunksPlus_bytes
#print axioms LeanFtml.chunksEmpty_bytes
#print axioms LeanFtml.chunksDotEdge_bytes
#print axioms LeanFtml.chunksLast_bytes
#print axioms LeanFtml.chunksId_bytes
#print axioms LeanFtml.chunksAlign_bytes
#print axioms LeanFtml.attrsFoo
#print axioms LeanFtml.attrsDot
#print axioms LeanFtml.attrsUnder
#print axioms LeanFtml.attrsDATA
#print axioms LeanFtml.attrsCLASS
#print axioms LeanFtml.attrsPlus
#print axioms LeanFtml.attrsEmptySuffix
#print axioms LeanFtml.attrsDotEdge
#print axioms LeanFtml.attrsLast
#print axioms LeanFtml.attrsId
#print axioms LeanFtml.attrsAlign
#print axioms LeanFtml.attrsEmptyHead
#print axioms LeanFtml.scan_of_chunks
#print axioms LeanFtml.scan_empty_head
#print axioms LeanFtml.scan_data_foo
#print axioms LeanFtml.scan_data_dot
#print axioms LeanFtml.scan_data_under
#print axioms LeanFtml.scan_DATA_drop
#print axioms LeanFtml.scan_CLASS_drop
#print axioms LeanFtml.scan_plus_drop
#print axioms LeanFtml.scan_empty_suffix
#print axioms LeanFtml.scan_dot_edge
#print axioms LeanFtml.scan_last_wins
#print axioms LeanFtml.scan_id_isolate
#print axioms LeanFtml.scan_align_drop
#print axioms LeanFtml.witness_rows
#print axioms LeanFtml.witness_process
#print axioms LeanFtml.tableadvScanGo_witness
#print axioms LeanFtml.tableadvScanGo_witness_fuel
