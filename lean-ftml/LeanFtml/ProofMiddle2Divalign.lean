import LeanFtml.Middle2Rules

/-! Universal kernel-free mechanism theorems for the Divalign mirror in Middle2Rules.lean. -/

namespace LeanFtml.Middle2.Divalign

/-! The four alignName cases and the default are direct ground computations. -/

theorem alignName_center : alignName [61] = "center".toList := rfl
theorem alignName_left : alignName [60] = "left".toList := rfl
theorem alignName_right : alignName [62] = "right".toList := rfl
theorem alignName_justify : alignName [61, 61] = "justify".toList := rfl
theorem alignName_default : alignName [99] = [] := rfl

/-! lineEndAfter and exact literal matching are the two predicates the closer depends on. -/

theorem lineEndAfter_nil : lineEndAfter ([] : List Nat) = true := rfl

theorem lineEndAfter_cons (b : Nat) (rest : List Nat) :
    lineEndAfter (b :: rest) = (b == 10) := rfl

theorem matchLitBytes_self_append (pat rest : List Nat) :
    matchLitBytes pat (pat ++ rest) = some rest := by
  induction pat with
  | nil => simp [matchLitBytes]
  | cons p ps ih => simp [matchLitBytes, ih]

theorem flatMap_const_nil {α β : Type} (l : List α) :
    l.flatMap (fun _ => ([] : List β)) = [] := by
  induction l with
  | nil => rfl
  | cons a l ih => simp [ih]

/-! divalignTail: the closer literal plus the line-end gate, characterized without evaluating any enumeration. -/

theorem divalignTail_some_lineEnd (key s r : List Nat)
    (h : divalignTail key s = some r) : lineEndAfter r = true := by
  unfold divalignTail at h
  cases hm : matchLitBytes (litBytes "[[/" ++ (key ++ litBytes "]]")) s with
  | none => simp [hm] at h
  | some r0 =>
      by_cases he : lineEndAfter r0
      · simp [hm, he] at h
        simpa [h] using he
      · simp [hm, he] at h

theorem divalignTail_some_match (key s r : List Nat)
    (h : divalignTail key s = some r) :
    matchLitBytes (litBytes "[[/" ++ (key ++ litBytes "]]")) s = some r := by
  unfold divalignTail at h
  cases hm : matchLitBytes (litBytes "[[/" ++ (key ++ litBytes "]]")) s with
  | none => simp [hm] at h
  | some r0 =>
      by_cases he : lineEndAfter r0
      · simp [hm, he] at h
        simpa [h] using hm
      · simp [hm, he] at h

theorem divalignTail_eq_some_iff (key s r : List Nat) :
    divalignTail key s = some r ↔
      matchLitBytes (litBytes "[[/" ++ (key ++ litBytes "]]")) s = some r ∧
        lineEndAfter r = true := by
  constructor
  · intro h
    exact ⟨divalignTail_some_match key s r h, divalignTail_some_lineEnd key s r h⟩
  · intro hp
    unfold divalignTail
    have hmatch : matchLitBytes (litBytes "[[/" ++ key ++ litBytes "]]") s = some r := by
      simpa [List.append_assoc] using hp.1
    rw [hmatch]
    by_cases he : lineEndAfter r
    · simp [he]
    · exact False.elim (he hp.2)

theorem divalignTail_none_of_no_match (key s : List Nat)
    (h : matchLitBytes (litBytes "[[/" ++ (key ++ litBytes "]]")) s = none) :
    divalignTail key s = none := by
  simp [divalignTail, h]

theorem divalignTail_closer (key rest : List Nat) :
    divalignTail key (litBytes "[[/" ++ key ++ litBytes "]]" ++ rest) =
      if lineEndAfter rest then some rest else none := by
  simp only [divalignTail]
  have hm : matchLitBytes (litBytes "[[/" ++ key ++ litBytes "]]")
      (litBytes "[[/" ++ key ++ litBytes "]]" ++ rest) = some rest :=
    matchLitBytes_self_append (litBytes "[[/" ++ key ++ litBytes "]]") rest
  rw [hm]

theorem divalignTail_closer_lineEnd (key rest : List Nat)
    (h : lineEndAfter rest = true) :
    divalignTail key (litBytes "[[/" ++ key ++ litBytes "]]" ++ rest) = some rest := by
  rw [divalignTail_closer]
  simp [h]

theorem divalignTail_closer_noLineEnd (key rest : List Nat)
    (h : lineEndAfter rest = false) :
    divalignTail key (litBytes "[[/" ++ key ++ litBytes "]]" ++ rest) = none := by
  rw [divalignTail_closer]
  simp [h]

theorem divalignTail_example : divalignTail [61] (litBytes "[[/=]]") = some [] := rfl

theorem divalignTail_lineEnd_example : divalignTail [61] (litBytes "[[/=]] x") = none := rfl

/-! divalignMatch and divalignBody: fuel-zero and priority decompositions, with the key and consumed fields of every enumerated element. -/

theorem divalignMatch_zero (s : List Nat) (ls : Bool) :
    divalignMatch s ls 0 = [] := rfl

theorem divalignBody_zero (key s : List Nat) (ls : Bool) :
    divalignBody key s ls 0 = [] := rfl

theorem divalignMatch_notLineStart (s : List Nat) (fuel : Nat) :
    divalignMatch s false (fuel + 1) = [] := by
  simp [divalignMatch]

theorem divalignMatch_no_opener (s : List Nat) (ls : Bool) (fuel : Nat)
    (h : matchLitBytes (litBytes "[[") s = none) :
    divalignMatch s ls (fuel + 1) = [] := by
  cases ls <;> simp [divalignMatch, h]

theorem divalignMatch_succ (s : List Nat) (ls : Bool) (fuel : Nat) :
    divalignMatch s ls (fuel + 1) =
      if !ls then []
      else
        match matchLitBytes (litBytes "[[") s with
        | none => []
        | some r1 =>
            ([[61], [60], [62], [61, 61]] : List (List Nat)).flatMap
              (fun key =>
                match matchLitBytes (key ++ litBytes "]]") r1 with
                | some (10 :: r2) =>
                    (divalignBody key r2 true fuel).map
                      (fun (body, r3) => (key, body, r3, s.length - r3.length))
                | _ => []) := by
  rfl

theorem divalignBody_succ (key s : List Nat) (ls : Bool) (fuel : Nat) :
    divalignBody key s ls (fuel + 1) =
      (match divalignTail key s with | some r => [([], r)] | none => []) ++
      ((divalignMatch s ls fuel).flatMap
        (fun (_k2, _b2, r2, consumed) =>
          (divalignBody key r2 ((s.take consumed).getLast? == some 10) fuel).map
            (fun (b, r) => (s.take consumed ++ b, r)))) ++
      (match s with
       | [] => []
       | c :: rest =>
           (divalignBody key rest (c == 10) fuel).map (fun (b, r) => (c :: b, r))) := by
  rfl

theorem divalignBody_one (key s : List Nat) (ls : Bool) :
    divalignBody key s ls 1 =
      match divalignTail key s with | some r => [([], r)] | none => [] := by
  cases s <;> simp [divalignBody, divalignMatch_zero] <;> rfl

theorem divalignMatch_inner_at_zero (s k r1 : List Nat) :
    (match matchLitBytes (k ++ litBytes "]]") r1 with
      | some (10 :: r2) =>
          (divalignBody k r2 true 0).map
            (fun (p : List Nat × List Nat) => (k, p.1, p.2, s.length - p.2.length))
      | _ => []) = ([] : List (List Nat × List Nat × List Nat × Nat)) := by
  split
  · simp [divalignBody]
  · rfl

theorem divalignMatch_one (s : List Nat) (ls : Bool) :
    divalignMatch s ls 1 = [] := by
  cases ls with
  | false => simp [divalignMatch]
  | true =>
      cases hOpen : matchLitBytes (litBytes "[[") s with
      | none => simp [divalignMatch, hOpen]
      | some r1 =>
          simp [divalignMatch, hOpen]
          exact ⟨divalignMatch_inner_at_zero s [61] r1,
                 divalignMatch_inner_at_zero s [60] r1,
                 divalignMatch_inner_at_zero s [62] r1,
                 divalignMatch_inner_at_zero s [61, 61] r1⟩

theorem divalignBody_closer_mem (key s r : List Nat) (ls : Bool) (fuel : Nat)
    (h : divalignTail key s = some r) :
    ([], r) ∈ divalignBody key s ls (fuel + 1) := by
  simp [divalignBody, h]

theorem divalignBody_one_length_le_one (key s : List Nat) (ls : Bool) :
    (divalignBody key s ls 1).length ≤ 1 := by
  rw [divalignBody_one]
  split <;> simp

theorem divalignMatch_map_key (k s : List Nat) (L : List (List Nat × List Nat))
    (x : List Nat × List Nat × List Nat × Nat)
    (hx : x ∈ L.map (fun (body, r3) => (k, body, r3, s.length - r3.length))) :
    x.1 = k := by
  rcases List.mem_map.mp hx with ⟨p, hp, rfl⟩
  rfl

theorem divalignMatch_map_consumed (k s : List Nat) (L : List (List Nat × List Nat))
    (x : List Nat × List Nat × List Nat × Nat)
    (hx : x ∈ L.map (fun (body, r3) => (k, body, r3, s.length - r3.length))) :
    x.2.2.2 ≤ s.length := by
  rcases List.mem_map.mp hx with ⟨p, hp, rfl⟩
  exact Nat.sub_le _ _

theorem divalignMatch_inner_spec (s k r1 : List Nat) (fuel : Nat)
    (x : List Nat × List Nat × List Nat × Nat)
    (hx : x ∈ (match matchLitBytes (k ++ litBytes "]]") r1 with
            | some (10 :: r2) =>
                (divalignBody k r2 true fuel).map
                  (fun (p : List Nat × List Nat) => (k, p.1, p.2, s.length - p.2.length))
            | _ => [])) :
    x.1 = k ∧ x.2.2.2 ≤ s.length := by
  split at hx
  · exact ⟨divalignMatch_map_key k s _ x hx, divalignMatch_map_consumed k s _ x hx⟩
  · simp at hx

theorem divalignMatch_mem_spec (s : List Nat) (ls : Bool) (fuel : Nat)
    {key body r3 : List Nat} {consumed : Nat}
    (h : (key, body, r3, consumed) ∈ divalignMatch s ls fuel) :
    (key = [61] ∨ key = [60] ∨ key = [62] ∨ key = [61, 61]) ∧ consumed ≤ s.length := by
  induction fuel with
  | zero => simp [divalignMatch] at h
  | succ fuel ih =>
      cases ls with
      | false => simp [divalignMatch] at h
      | true =>
          cases hOpen : matchLitBytes (litBytes "[[") s with
          | none => simp [divalignMatch, hOpen] at h
          | some r1 =>
              simp [divalignMatch, hOpen, List.mem_append] at h
              rcases h with h | h | h | h
              · have hs := divalignMatch_inner_spec s [61] r1 fuel _ h
                exact ⟨Or.inl hs.1, hs.2⟩
              · have hs := divalignMatch_inner_spec s [60] r1 fuel _ h
                exact ⟨Or.inr (Or.inl hs.1), hs.2⟩
              · have hs := divalignMatch_inner_spec s [62] r1 fuel _ h
                exact ⟨Or.inr (Or.inr (Or.inl hs.1)), hs.2⟩
              · have hs := divalignMatch_inner_spec s [61, 61] r1 fuel _ h
                exact ⟨Or.inr (Or.inr (Or.inr hs.1)), hs.2⟩

theorem divalignMatch_key_mem (s : List Nat) (ls : Bool) (fuel : Nat)
    {key body r3 : List Nat} {consumed : Nat}
    (h : (key, body, r3, consumed) ∈ divalignMatch s ls fuel) :
    key = [61] ∨ key = [60] ∨ key = [62] ∨ key = [61, 61] :=
  (divalignMatch_mem_spec s ls fuel h).1

theorem divalignMatch_consumed_le (s : List Nat) (ls : Bool) (fuel : Nat)
    {key body r3 : List Nat} {consumed : Nat}
    (h : (key, body, r3, consumed) ∈ divalignMatch s ls fuel) :
    consumed ≤ s.length :=
  (divalignMatch_mem_spec s ls fuel h).2

/-! The two tokens a claim appends are always a start entry then an end entry. -/

def divalignStartTok (key : List Nat) : TokenEntry :=
  { rule := "Divalign",
    opts := [("type".toList, OptVal.str "start".toList),
             ("align".toList, OptVal.str (alignName key))] }

def divalignEndTok : TokenEntry :=
  { rule := "Divalign", opts := [("type".toList, OptVal.str "end".toList)] }

/-! divalignScan: line-start threading, exact match/miss decomposition, pair and placeholder laws. -/

theorem divalignScan_zero (src : List Nat) (toks : List TokenEntry) (atStart : Bool) :
    divalignScan src toks atStart 0 = ([], toks) := rfl

theorem divalignScan_nil (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    divalignScan [] toks atStart fuel = ([], toks) := by
  cases fuel <;> simp [divalignScan]

theorem divalignScan_notStart (b : Nat) (rest : List Nat) (toks : List TokenEntry)
    (fuel : Nat) :
    divalignScan (b :: rest) toks false (fuel + 1) =
      (b :: (divalignScan rest toks (b == 10) fuel).1,
       (divalignScan rest toks (b == 10) fuel).2) := by
  simp [divalignScan]

theorem divalignScan_miss (b : Nat) (rest : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat)
    (hM : (if atStart then divalignMatch (b :: rest) true (codeFuel (b :: rest).length) else []) = []) :
    divalignScan (b :: rest) toks atStart (fuel + 1) =
      (b :: (divalignScan rest toks (b == 10) fuel).1,
       (divalignScan rest toks (b == 10) fuel).2) := by
  have hM' : (if atStart then divalignMatch (b :: rest) true (codeFuel (rest.length + 1)) else []) = [] := by
    simpa using hM
  simp [divalignScan, hM']

theorem divalignScan_noMatch (b : Nat) (rest : List Nat) (toks : List TokenEntry)
    (fuel : Nat)
    (hM : divalignMatch (b :: rest) true (codeFuel (b :: rest).length) = []) :
    divalignScan (b :: rest) toks true (fuel + 1) =
      (b :: (divalignScan rest toks (b == 10) fuel).1,
       (divalignScan rest toks (b == 10) fuel).2) := by
  have hM' : divalignMatch (b :: rest) true (codeFuel (rest.length + 1)) = [] := by
    simpa using hM
  simp [divalignScan, hM']

theorem divalignScan_hit (b : Nat) (rest : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) (key body r3 : List Nat) (consumed : Nat)
    (more : List (List Nat × List Nat × List Nat × Nat))
    (hM : (if atStart then divalignMatch (b :: rest) true (codeFuel (b :: rest).length) else []) =
      (key, body, r3, consumed) :: more) :
    divalignScan (b :: rest) toks atStart (fuel + 1) =
      let outToks := divalignScan r3 (toks ++ [divalignStartTok key, divalignEndTok]) false fuel
      (phBytes toks.length ++ [10, 10] ++ body ++ [10, 10] ++
        phBytes (toks.length + 1) ++ outToks.1, outToks.2) := by
  have hM' : (if atStart then divalignMatch (b :: rest) true (codeFuel (rest.length + 1)) else []) =
      (key, body, r3, consumed) :: more := by
    simpa using hM
  simp [divalignScan, hM', divalignStartTok, divalignEndTok]

theorem pairFlatMap_length (pairs : List (TokenEntry × TokenEntry)) :
    (pairs.flatMap (fun p => [p.1, p.2])).length = 2 * pairs.length := by
  induction pairs with
  | nil => simp
  | cons p ps ih => simp [ih]; omega

theorem pairFlatMap_append (p1 p2 : List (TokenEntry × TokenEntry)) :
    (p1 ++ p2).flatMap (fun p => [p.1, p.2]) =
      p1.flatMap (fun p => [p.1, p.2]) ++ p2.flatMap (fun p => [p.1, p.2]) := by
  induction p1 with
  | nil => simp
  | cons p ps ih => simp [ih]

theorem divalignScan_pairs (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    ∃ pairs : List (TokenEntry × TokenEntry),
      (divalignScan src toks atStart fuel).2 = toks ++ pairs.flatMap (fun p => [p.1, p.2]) := by
  induction fuel generalizing src toks atStart with
  | zero => exact ⟨[], by simp [divalignScan]⟩
  | succ fuel ih =>
      cases src with
      | nil => exact ⟨[], by simp [divalignScan]⟩
      | cons b rest =>
          cases hM : (if atStart then divalignMatch (b :: rest) true (codeFuel (b :: rest).length) else []) with
          | nil =>
              rw [divalignScan_miss b rest toks atStart fuel hM]
              exact ih rest toks (b == 10)
          | cons entry entries =>
              rcases entry with ⟨key, body, r3, consumed⟩
              rw [divalignScan_hit b rest toks atStart fuel key body r3 consumed entries hM]
              obtain ⟨pairs, hp⟩ := ih r3 (toks ++ [divalignStartTok key, divalignEndTok]) false
              refine ⟨(divalignStartTok key, divalignEndTok) :: pairs, ?_⟩
              dsimp
              rw [hp]
              simp [List.append_assoc]

theorem divalignScan_append_only (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) :
    ∃ added : List TokenEntry, (divalignScan src toks atStart fuel).2 = toks ++ added := by
  obtain ⟨pairs, hp⟩ := divalignScan_pairs src toks atStart fuel
  exact ⟨pairs.flatMap (fun p => [p.1, p.2]), hp⟩

theorem divalignScan_tokens_length (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) :
    ∃ n, (divalignScan src toks atStart fuel).2.length = toks.length + 2 * n := by
  obtain ⟨pairs, hp⟩ := divalignScan_pairs src toks atStart fuel
  refine ⟨pairs.length, ?_⟩
  rw [hp, List.length_append, pairFlatMap_length]

theorem divalignScan_pairs_shape (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) :
    ∃ pairs : List (TokenEntry × TokenEntry),
      (divalignScan src toks atStart fuel).2 = toks ++ pairs.flatMap (fun p => [p.1, p.2]) ∧
      ∀ p ∈ pairs,
        p.1.rule = "Divalign" ∧
        (∃ key : List Nat, p.1.opts =
          [("type".toList, OptVal.str "start".toList),
           ("align".toList, OptVal.str (alignName key))]) ∧
        p.2.rule = "Divalign" ∧
        p.2.opts = [("type".toList, OptVal.str "end".toList)] := by
  induction fuel generalizing src toks atStart with
  | zero => exact ⟨[], by simp [divalignScan], by simp⟩
  | succ fuel ih =>
      cases src with
      | nil => exact ⟨[], by simp [divalignScan], by simp⟩
      | cons b rest =>
          cases hM : (if atStart then divalignMatch (b :: rest) true (codeFuel (b :: rest).length) else []) with
          | nil =>
              rw [divalignScan_miss b rest toks atStart fuel hM]
              exact ih rest toks (b == 10)
          | cons entry entries =>
              rcases entry with ⟨key, body, r3, consumed⟩
              rw [divalignScan_hit b rest toks atStart fuel key body r3 consumed entries hM]
              obtain ⟨pairs, hp, hshape⟩ :=
                ih r3 (toks ++ [divalignStartTok key, divalignEndTok]) false
              refine ⟨(divalignStartTok key, divalignEndTok) :: pairs, ?_, ?_⟩
              · dsimp
                rw [hp]
                simp [List.append_assoc]
              · intro p hpIn
                simp at hpIn
                rcases hpIn with hpFirst | hpRest
                · subst p
                  constructor
                  · rfl
                  · constructor
                    · exact ⟨key, rfl⟩
                    · constructor <;> rfl
                · exact hshape p hpRest

theorem phBytes_head (n : Nat) : (phBytes n).head? = some 255 := by
  simp [phBytes]

theorem divalignScan_hit_head (b : Nat) (rest : List Nat) (toks : List TokenEntry)
    (atStart : Bool) (fuel : Nat) (key body r3 : List Nat) (consumed : Nat)
    (more : List (List Nat × List Nat × List Nat × Nat))
    (hM : (if atStart then divalignMatch (b :: rest) true (codeFuel (b :: rest).length) else []) =
      (key, body, r3, consumed) :: more) :
    (divalignScan (b :: rest) toks atStart (fuel + 1)).1.head? = some 255 := by
  rw [divalignScan_hit b rest toks atStart fuel key body r3 consumed more hM]
  simp [phBytes]

/-! divalignLoop: one-pass decomposition, no-new-token termination, and cumulative token monotonicity. -/

theorem divalignLoop_zero (src : List Nat) (toks : List TokenEntry) :
    divalignLoop src toks 0 = (src, toks) := rfl

theorem divalignLoop_succ (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    divalignLoop src toks (fuel + 1) =
      let scanRes := divalignScan src toks true (src.length + 1)
      if scanRes.2.length == toks.length then scanRes
      else divalignLoop scanRes.1 scanRes.2 fuel := by
  rfl

theorem divalignLoop_noNewToken (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (h : ((divalignScan src toks true (src.length + 1)).2.length == toks.length) = true) :
    divalignLoop src toks (fuel + 1) = divalignScan src toks true (src.length + 1) := by
  simp [divalignLoop, h]

theorem divalignLoop_pairs (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    ∃ pairs : List (TokenEntry × TokenEntry),
      (divalignLoop src toks fuel).2 = toks ++ pairs.flatMap (fun p => [p.1, p.2]) := by
  induction fuel generalizing src toks with
  | zero => exact ⟨[], by simp [divalignLoop]⟩
  | succ fuel ih =>
      let scanRes := divalignScan src toks true (src.length + 1)
      obtain ⟨p1, hp1⟩ := divalignScan_pairs src toks true (src.length + 1)
      have hscan : scanRes.2 = toks ++ p1.flatMap (fun p => [p.1, p.2]) := by
        simpa [scanRes] using hp1
      by_cases hEq : scanRes.2.length == toks.length
      · refine ⟨p1, ?_⟩
        change (if scanRes.2.length == toks.length then scanRes else divalignLoop scanRes.1 scanRes.2 fuel).2 =
          toks ++ p1.flatMap (fun p => [p.1, p.2])
        rw [if_pos hEq]
        exact hscan
      · obtain ⟨p2, hp2⟩ := ih scanRes.1 scanRes.2
        refine ⟨p1 ++ p2, ?_⟩
        change (if scanRes.2.length == toks.length then scanRes else divalignLoop scanRes.1 scanRes.2 fuel).2 =
          toks ++ (p1 ++ p2).flatMap (fun p => [p.1, p.2])
        rw [if_neg hEq, hp2, pairFlatMap_append, hscan]
        simp [List.append_assoc]

theorem divalignLoop_append_only (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    ∃ added : List TokenEntry, (divalignLoop src toks fuel).2 = toks ++ added := by
  obtain ⟨pairs, hp⟩ := divalignLoop_pairs src toks fuel
  exact ⟨pairs.flatMap (fun p => [p.1, p.2]), hp⟩

theorem divalignLoop_tokens_length (src : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    ∃ n, (divalignLoop src toks fuel).2.length = toks.length + 2 * n := by
  obtain ⟨pairs, hp⟩ := divalignLoop_pairs src toks fuel
  refine ⟨pairs.length, ?_⟩
  rw [hp, List.length_append, pairFlatMap_length]

/-! divalignRule changes only work and tokens; the other ParseState fields survive. -/

theorem divalignRule_doc (st : ParseState) : (divalignRule st).doc = st.doc := by
  simp [divalignRule, applyByteRule]

theorem divalignRule_fatal (st : ParseState) : (divalignRule st).fatal = st.fatal := by
  simp [divalignRule, applyByteRule]

theorem divalignRule_continuedDivLeads (st : ParseState) :
    (divalignRule st).continuedDivLeads = st.continuedDivLeads := by
  simp [divalignRule, applyByteRule]

theorem divalignRule_tokens_pairs (st : ParseState) :
    ∃ pairs : List (TokenEntry × TokenEntry),
      (divalignRule st).tokens = st.tokens ++ pairs.flatMap (fun p => [p.1, p.2]) := by
  change ∃ pairs : List (TokenEntry × TokenEntry),
    (divalignLoop (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).2 =
      st.tokens ++ pairs.flatMap (fun p => [p.1, p.2])
  exact divalignLoop_pairs _ _ _

theorem divalignRule_tokens_append_only (st : ParseState) :
    ∃ added : List TokenEntry, (divalignRule st).tokens = st.tokens ++ added := by
  obtain ⟨pairs, hp⟩ := divalignRule_tokens_pairs st
  exact ⟨pairs.flatMap (fun p => [p.1, p.2]), hp⟩

theorem divalignRule_preserves_other (st : ParseState) :
    (divalignRule st).doc = st.doc ∧ (divalignRule st).fatal = st.fatal ∧
      (divalignRule st).continuedDivLeads = st.continuedDivLeads :=
  ⟨divalignRule_doc st, divalignRule_fatal st, divalignRule_continuedDivLeads st⟩

/-! Named remainder: kernel equality to the recursive (?R) PCRE reference. The obligation named `divalign_eq_pcre_recursive_R` is NOT asserted; it needs PcreCore's CPS (?R) engine and the extracted RefTables pattern `\[\[(=|<|>|==)\]\]((?:(?R)|.)*?)\[\[/\1\]\]`. The mirror doc records that the full enumeration does not kernel-reduce, so only conditional reductions are given here, with the reference components as unasserted section parameters. -/

section DivalignRecursivePCREObligation

variable (RefEnum : List Nat → Nat → List (List Nat × List Nat × List Nat × Nat))
variable (RefLoop : List Nat → List TokenEntry → List Nat × List TokenEntry)

theorem divalignMatch_first_conditional (src : List Nat) (fuel : Nat)
    (h : divalignMatch src true fuel = RefEnum src fuel) :
    (divalignMatch src true fuel).head? = (RefEnum src fuel).head? := by
  rw [h]

theorem divalignRule_eq_ref_conditional (st : ParseState)
    (h : divalignLoop (byteForm st.work) st.tokens ((byteForm st.work).length + 1) =
      RefLoop (byteForm st.work) st.tokens) :
    divalignRule st =
      { st with
        work := parseBytes (RefLoop (byteForm st.work) st.tokens).1
        tokens := (RefLoop (byteForm st.work) st.tokens).2 } := by
  change { st with
      work := parseBytes (divalignLoop (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).1
      tokens := (divalignLoop (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).2 } = _
  rw [h]

end DivalignRecursivePCREObligation

end LeanFtml.Middle2.Divalign

#print axioms LeanFtml.Middle2.Divalign.alignName_center
#print axioms LeanFtml.Middle2.Divalign.alignName_left
#print axioms LeanFtml.Middle2.Divalign.alignName_right
#print axioms LeanFtml.Middle2.Divalign.alignName_justify
#print axioms LeanFtml.Middle2.Divalign.alignName_default
#print axioms LeanFtml.Middle2.Divalign.lineEndAfter_nil
#print axioms LeanFtml.Middle2.Divalign.lineEndAfter_cons
#print axioms LeanFtml.Middle2.Divalign.matchLitBytes_self_append
#print axioms LeanFtml.Middle2.Divalign.flatMap_const_nil
#print axioms LeanFtml.Middle2.Divalign.divalignTail_some_lineEnd
#print axioms LeanFtml.Middle2.Divalign.divalignTail_some_match
#print axioms LeanFtml.Middle2.Divalign.divalignTail_eq_some_iff
#print axioms LeanFtml.Middle2.Divalign.divalignTail_none_of_no_match
#print axioms LeanFtml.Middle2.Divalign.divalignTail_closer
#print axioms LeanFtml.Middle2.Divalign.divalignTail_closer_lineEnd
#print axioms LeanFtml.Middle2.Divalign.divalignTail_closer_noLineEnd
#print axioms LeanFtml.Middle2.Divalign.divalignTail_example
#print axioms LeanFtml.Middle2.Divalign.divalignTail_lineEnd_example
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_zero
#print axioms LeanFtml.Middle2.Divalign.divalignBody_zero
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_notLineStart
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_no_opener
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_succ
#print axioms LeanFtml.Middle2.Divalign.divalignBody_succ
#print axioms LeanFtml.Middle2.Divalign.divalignBody_one
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_one
#print axioms LeanFtml.Middle2.Divalign.divalignBody_closer_mem
#print axioms LeanFtml.Middle2.Divalign.divalignBody_one_length_le_one
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_inner_at_zero
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_map_key
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_map_consumed
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_inner_spec
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_mem_spec
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_key_mem
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_consumed_le
#print axioms LeanFtml.Middle2.Divalign.divalignScan_zero
#print axioms LeanFtml.Middle2.Divalign.divalignScan_nil
#print axioms LeanFtml.Middle2.Divalign.divalignScan_notStart
#print axioms LeanFtml.Middle2.Divalign.divalignScan_miss
#print axioms LeanFtml.Middle2.Divalign.divalignScan_noMatch
#print axioms LeanFtml.Middle2.Divalign.divalignScan_hit
#print axioms LeanFtml.Middle2.Divalign.pairFlatMap_length
#print axioms LeanFtml.Middle2.Divalign.pairFlatMap_append
#print axioms LeanFtml.Middle2.Divalign.divalignScan_pairs
#print axioms LeanFtml.Middle2.Divalign.divalignScan_append_only
#print axioms LeanFtml.Middle2.Divalign.divalignScan_tokens_length
#print axioms LeanFtml.Middle2.Divalign.divalignScan_pairs_shape
#print axioms LeanFtml.Middle2.Divalign.phBytes_head
#print axioms LeanFtml.Middle2.Divalign.divalignScan_hit_head
#print axioms LeanFtml.Middle2.Divalign.divalignLoop_zero
#print axioms LeanFtml.Middle2.Divalign.divalignLoop_succ
#print axioms LeanFtml.Middle2.Divalign.divalignLoop_noNewToken
#print axioms LeanFtml.Middle2.Divalign.divalignLoop_pairs
#print axioms LeanFtml.Middle2.Divalign.divalignLoop_append_only
#print axioms LeanFtml.Middle2.Divalign.divalignLoop_tokens_length
#print axioms LeanFtml.Middle2.Divalign.divalignRule_doc
#print axioms LeanFtml.Middle2.Divalign.divalignRule_fatal
#print axioms LeanFtml.Middle2.Divalign.divalignRule_continuedDivLeads
#print axioms LeanFtml.Middle2.Divalign.divalignRule_tokens_pairs
#print axioms LeanFtml.Middle2.Divalign.divalignRule_tokens_append_only
#print axioms LeanFtml.Middle2.Divalign.divalignRule_preserves_other
#print axioms LeanFtml.Middle2.Divalign.divalignMatch_first_conditional
#print axioms LeanFtml.Middle2.Divalign.divalignRule_eq_ref_conditional
