import LeanFtml.TableadvEnum

/-! TableadvHeadProof.lean — universal head-run laws split from TableadvProof.lean for elaboration budget reasons. -/

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

end LeanFtml
