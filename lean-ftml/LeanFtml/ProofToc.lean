import LeanFtml.BlockRules

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## Type predicates and auxiliary token shapes for the Toc proof lane

    All helpers are private to this module; only theorems whose name begins
    with `toc_` are public. The predicates use Boolean equality on
    `List Char` (the same decidable equality the mirror's `==` uses), so no
    `DecidableEq OptVal` instance and no classical choice is needed. -/

private def tocHasType (s : String) (t : TokenEntry) : Bool :=
  match omGet t.opts "type".toList with
  | some (OptVal.str ty) => ty == s.toList
  | _ => false

private def tocIsStartHeading (t : TokenEntry) : Bool := tocHasType "start" t
private def tocIsItemStart (t : TokenEntry) : Bool := t.rule == "Toc" && tocHasType "item_start" t
private def tocIsItemEnd (t : TokenEntry) : Bool := t.rule == "Toc" && tocHasType "item_end" t

private def tocStartCount (heads : List TokenEntry) : Nat :=
  (heads.filter tocIsStartHeading).length

private def tocItemStartTok (h : TokenEntry) (count : Nat) : TokenEntry :=
  let idv := (omGet h.opts "id".toList).getD OptVal.null
  let lev := (omGet h.opts "level".toList).getD (OptVal.int 0)
  { rule := "Toc", opts :=
    [("type".toList, OptVal.str "item_start".toList),
     ("id".toList, idv),
     ("level".toList, lev),
     ("count".toList, OptVal.int (count : Int))] }

private def tocItemEndTok (h : TokenEntry) : TokenEntry :=
  let lev := (omGet h.opts "level".toList).getD (OptVal.int 0)
  { rule := "Toc", opts :=
    [("type".toList, OptVal.str "item_end".toList),
     ("level".toList, lev)] }

/-- The exact list of tokens `tocItems` appends, independent of the base
    table (the base only affects the placeholder bytes, never the tokens). -/
private def tocExtra : List TokenEntry → Nat → List TokenEntry
  | [], _ => []
  | h :: rest, count =>
      if tocIsStartHeading h then
        tocItemStartTok h count :: tocItemEndTok h :: tocExtra rest (count + 1)
      else tocExtra rest count

/-- The start headings paired with the running item count at each. -/
private def tocStartHeadsWithCount : List TokenEntry → Nat → List (TokenEntry × Nat)
  | [], _ => []
  | h :: rest, count =>
      if tocIsStartHeading h then (h, count) :: tocStartHeadsWithCount rest (count + 1)
      else tocStartHeadsWithCount rest count

private def tocItemStarts : List TokenEntry → Nat → List TokenEntry
  | [], _ => []
  | h :: rest, count =>
      if tocIsStartHeading h then tocItemStartTok h count :: tocItemStarts rest (count + 1)
      else tocItemStarts rest count

private def tocItemEnds : List TokenEntry → List TokenEntry
  | [] => []
  | h :: rest =>
      if tocIsStartHeading h then tocItemEndTok h :: tocItemEnds rest
      else tocItemEnds rest

private def tocExtraTypes : List TokenEntry → Nat → List (Option OptVal)
  | [], _ => []
  | h :: rest, count =>
      if tocIsStartHeading h then
        some (OptVal.str "item_start".toList) ::
        some (OptVal.str "item_end".toList) :: tocExtraTypes rest (count + 1)
      else tocExtraTypes rest count

/-- The count the recursion carries out of the head list. -/
private def tocCountOut : List TokenEntry → Nat → Nat
  | [], count => count
  | h :: rest, count =>
      if tocIsStartHeading h then tocCountOut rest (count + 1) else tocCountOut rest count

/-! ## Basic list and predicate plumbing -/

private theorem tok_drop_append (as bs : List TokenEntry) : (as ++ bs).drop as.length = bs := by
  induction as with
  | nil => rfl
  | cons a as ih => simpa using ih

private theorem tocType_itemStartTok (h : TokenEntry) (count : Nat) :
    omGet (tocItemStartTok h count).opts "type".toList = some (OptVal.str "item_start".toList) := by
  simp [tocItemStartTok, omGet]

private theorem tocType_itemEndTok (h : TokenEntry) :
    omGet (tocItemEndTok h).opts "type".toList = some (OptVal.str "item_end".toList) := by
  simp [tocItemEndTok, omGet]

private theorem tocIsItemStart_itemStartTok (h : TokenEntry) (count : Nat) :
    tocIsItemStart (tocItemStartTok h count) = true := by
  rfl

private theorem tocIsItemStart_itemEndTok (h : TokenEntry) :
    tocIsItemStart (tocItemEndTok h) = false := by
  rfl

private theorem tocIsItemEnd_itemEndTok (h : TokenEntry) :
    tocIsItemEnd (tocItemEndTok h) = true := by
  rfl

private theorem tocIsItemEnd_itemStartTok (h : TokenEntry) (count : Nat) :
    tocIsItemEnd (tocItemStartTok h count) = false := by
  rfl

/-- A heading whose `type` predicate says `start` has exactly the option
    value `str "start"`, so `simp` can reduce the mirror's own
    `match omGet ... with some (OptVal.str ty) => ...` branch. `generalize`
    is used so the equation substitutes inside the hypothesis as well. -/
private theorem toc_start_eq (h : TokenEntry) (ht : tocIsStartHeading h = true) :
    omGet h.opts "type".toList = some (OptVal.str "start".toList) := by
  unfold tocIsStartHeading tocHasType at ht
  generalize hv : omGet h.opts "type".toList = v at *
  cases v with
  | none => simp at ht
  | some val =>
      cases val with
      | str ty =>
          have hty : ty = "start".toList := by simpa using ht
          rw [hty]
      | int n => simp at ht
      | bool b => simp at ht
      | null => simp at ht
      | map m => simp at ht
      | list xs => simp at ht
      | bytes bs => simp at ht

private theorem toc_nonstart_eq (h : TokenEntry) (ht : tocIsStartHeading h = false) :
    omGet h.opts "type".toList ≠ some (OptVal.str "start".toList) := by
  unfold tocIsStartHeading tocHasType at ht
  generalize hv : omGet h.opts "type".toList = v at *
  cases v with
  | none => simp
  | some val =>
      cases val with
      | str ty =>
          intro hEq
          injection hEq with hvalEq
          injection hvalEq with htyEq
          subst ty
          simp at ht
      | int n => simp
      | bool b => simp
      | null => simp
      | map m => simp
      | list xs => simp
      | bytes bs => simp

/-! ## `tocItems` — append-only token table and count -/

private theorem tocItems_snd (heads toks : List TokenEntry) (count : Nat) :
    (tocItems heads toks count).2 = toks ++ tocExtra heads count := by
  induction heads generalizing toks count with
  | nil => simp [tocItems, tocExtra]
  | cons h rest ih =>
      unfold tocItems
      by_cases ht : tocIsStartHeading h = true
      · have hs := toc_start_eq h ht
        rw [hs]
        simp only [↓reduceIte]
        rw [ih]
        simp [tocExtra, ht, tocItemStartTok, tocItemEndTok, List.append_assoc]
      · have ht' : tocIsStartHeading h = false := by simpa using ht
        have hs := toc_nonstart_eq h ht'
        cases hg : omGet h.opts "type".toList with
        | none =>
            simp [tocExtra, ht', ih]
        | some v =>
            cases v with
            | str ty =>
                have htyProp : ty ≠ "start".toList := by
                  intro heq
                  exact hs (by rw [hg, heq])
                have hty' : ty ≠ ['s', 't', 'a', 'r', 't'] := by
                  intro heq
                  exact htyProp (by simpa using heq)
                simp [tocExtra, ht', hty', ih]
            | int n => simp [tocExtra, ht', ih]
            | bool b => simp [tocExtra, ht', ih]
            | null => simp [tocExtra, ht', ih]
            | map m => simp [tocExtra, ht', ih]
            | list xs => simp [tocExtra, ht', ih]
            | bytes bs => simp [tocExtra, ht', ih]

private theorem tocExtra_length (heads : List TokenEntry) (count : Nat) :
    (tocExtra heads count).length = 2 * tocStartCount heads := by
  induction heads generalizing count with
  | nil => simp [tocExtra, tocStartCount]
  | cons h rest ih =>
      by_cases ht : tocIsStartHeading h = true
      · simp [tocExtra, tocStartCount, ht, ih]
        omega
      · have ht' : tocIsStartHeading h = false := by simpa using ht
        simp [tocExtra, tocStartCount, ht', ih]

private theorem tocCountOut_eq_add (heads : List TokenEntry) (count : Nat) :
    tocCountOut heads count = count + tocStartCount heads := by
  induction heads generalizing count with
  | nil => simp [tocCountOut, tocStartCount]
  | cons h rest ih =>
      by_cases ht : tocIsStartHeading h = true
      · simp [tocCountOut, tocStartCount, ht, ih]
        omega
      · have ht' : tocIsStartHeading h = false := by simpa using ht
        simp [tocCountOut, tocStartCount, ht', ih]

private theorem tocExtra_rule (heads : List TokenEntry) (count : Nat) :
    ∀ t ∈ tocExtra heads count, t.rule = "Toc" := by
  induction heads generalizing count with
  | nil => simp [tocExtra]
  | cons h rest ih =>
      by_cases ht : tocIsStartHeading h = true
      · simp only [tocExtra, ht, ↓reduceIte, List.mem_cons, List.mem_singleton]
        intro a ha
        rcases ha with rfl | rfl | ha
        · rfl
        · rfl
        · exact ih (count + 1) a ha
      · have ht' : tocIsStartHeading h = false := by simpa using ht
        simpa [tocExtra, ht'] using ih count

/-! ## `tocItems` — order of the appended item tokens -/

private theorem tocItemStarts_eq_map (heads : List TokenEntry) (count : Nat) :
    tocItemStarts heads count =
      (tocStartHeadsWithCount heads count).map (fun (h, c) => tocItemStartTok h c) := by
  induction heads generalizing count with
  | nil => simp [tocItemStarts, tocStartHeadsWithCount]
  | cons h rest ih =>
      by_cases ht : tocIsStartHeading h = true
      · simp [tocItemStarts, tocStartHeadsWithCount, ht, ih]
      · have ht' : tocIsStartHeading h = false := by simpa using ht
        simp [tocItemStarts, tocStartHeadsWithCount, ht', ih]

private theorem tocItemEnds_eq_map (heads : List TokenEntry) (count : Nat) :
    tocItemEnds heads = (tocStartHeadsWithCount heads count).map (fun (h, _) => tocItemEndTok h) := by
  induction heads generalizing count with
  | nil => simp [tocItemEnds, tocStartHeadsWithCount]
  | cons h rest ih =>
      by_cases ht : tocIsStartHeading h = true
      · simp [tocItemEnds, tocStartHeadsWithCount, ht]
        rw [ih (count + 1)]
      · have ht' : tocIsStartHeading h = false := by simpa using ht
        simp [tocItemEnds, tocStartHeadsWithCount, ht']
        rw [ih count]

private theorem tocExtra_itemStarts (heads : List TokenEntry) (count : Nat) :
    (tocExtra heads count).filter tocIsItemStart = tocItemStarts heads count := by
  induction heads generalizing count with
  | nil => simp [tocExtra, tocItemStarts]
  | cons h rest ih =>
      by_cases ht : tocIsStartHeading h = true
      · simp [tocExtra, tocItemStarts, tocIsItemStart_itemStartTok, tocIsItemStart_itemEndTok, ht, ih]
      · have ht' : tocIsStartHeading h = false := by simpa using ht
        simp [tocExtra, tocItemStarts, ht', ih]

private theorem tocExtra_itemEnds (heads : List TokenEntry) (count : Nat) :
    (tocExtra heads count).filter tocIsItemEnd = tocItemEnds heads := by
  induction heads generalizing count with
  | nil => simp [tocExtra, tocItemEnds]
  | cons h rest ih =>
      by_cases ht : tocIsStartHeading h = true
      · simp [tocExtra, tocItemEnds, tocIsItemEnd_itemStartTok, tocIsItemEnd_itemEndTok, ht, ih]
      · have ht' : tocIsStartHeading h = false := by simpa using ht
        simp [tocExtra, tocItemEnds, ht', ih]

private theorem tocExtra_types (heads : List TokenEntry) (count : Nat) :
    (tocExtra heads count).map (fun t => omGet t.opts "type".toList) = tocExtraTypes heads count := by
  induction heads generalizing count with
  | nil => simp [tocExtra, tocExtraTypes]
  | cons h rest ih =>
      by_cases ht : tocIsStartHeading h = true
      · simp only [tocExtra, tocExtraTypes, ht, ↓reduceIte,
          List.map_cons, List.cons.injEq]
        rw [tocType_itemStartTok, tocType_itemEndTok, ih (count + 1)]
        simp
      · have ht' : tocIsStartHeading h = false := by simpa using ht
        simp [tocExtra, tocExtraTypes, ht']
        exact ih count

private theorem tocStartHeadsWithCount_length (heads : List TokenEntry) (count : Nat) :
    (tocStartHeadsWithCount heads count).length = tocStartCount heads := by
  induction heads generalizing count with
  | nil => simp [tocStartHeadsWithCount, tocStartCount]
  | cons h rest ih =>
      by_cases ht : tocIsStartHeading h = true
      · simp [tocStartHeadsWithCount, tocStartCount, ht, ih]
      · have ht' : tocIsStartHeading h = false := by simpa using ht
        simp [tocStartHeadsWithCount, tocStartCount, ht', ih]

/-! ## Public `tocItems` theorems -/

theorem toc_items_append_only (heads toks : List TokenEntry) (count : Nat) :
    (tocItems heads toks count).2.take toks.length = toks := by
  rw [tocItems_snd]
  simp

theorem toc_items_token_count (heads toks : List TokenEntry) (count : Nat) :
    (tocItems heads toks count).2.length = toks.length + 2 * tocStartCount heads := by
  rw [tocItems_snd, List.length_append, tocExtra_length]

theorem toc_items_count_out (heads toks : List TokenEntry) (count : Nat) :
    tocCountOut heads count = count + tocStartCount heads :=
  tocCountOut_eq_add heads count

theorem toc_items_rule (heads toks : List TokenEntry) (count : Nat) :
    ∀ t ∈ (tocItems heads toks count).2.drop toks.length, t.rule = "Toc" := by
  rw [tocItems_snd, tok_drop_append]
  exact tocExtra_rule heads count

theorem toc_items_item_start_order (heads toks : List TokenEntry) (count : Nat) :
    ((tocItems heads toks count).2.drop toks.length).filter tocIsItemStart =
      (tocStartHeadsWithCount heads count).map (fun (h, c) => tocItemStartTok h c) := by
  rw [tocItems_snd, tok_drop_append, tocExtra_itemStarts, tocItemStarts_eq_map]

theorem toc_items_item_end_order (heads toks : List TokenEntry) (count : Nat) :
    ((tocItems heads toks count).2.drop toks.length).filter tocIsItemEnd =
      (tocStartHeadsWithCount heads count).map (fun (h, _) => tocItemEndTok h) := by
  rw [tocItems_snd, tok_drop_append, tocExtra_itemEnds, tocItemEnds_eq_map]

theorem toc_items_types (heads toks : List TokenEntry) (count : Nat) :
    ((tocItems heads toks count).2.drop toks.length).map (fun t => omGet t.opts "type".toList) =
      tocExtraTypes heads count := by
  rw [tocItems_snd, tok_drop_append, tocExtra_types]

theorem toc_items_start_count_length (heads toks : List TokenEntry) (count : Nat) :
    (tocStartHeadsWithCount heads count).length = tocStartCount heads :=
  tocStartHeadsWithCount_length heads count

/-! ## `tocProcess` — append-only token table and exact count -/

private def tocAlignVal (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool) : OptVal :=
  match align with
  | some a => OptVal.str (utf8Decode a)
  | none => if g2.isSome || trailPos then OptVal.str [] else OptVal.null

private def tocAttrMap (g2 : Option (List Nat)) : OptMap :=
  match g2 with
  | some raw => (getAttrsBytes raw).map (fun (k, v) => (utf8Decode k, textVal v))
  | none => []

private def tocListStartTok (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool) : TokenEntry :=
  { rule := "Toc", opts :=
    [("type".toList, OptVal.str "list_start".toList),
     ("level".toList, OptVal.int 0),
     ("attr".toList, OptVal.map (tocAttrMap g2)),
     ("align".toList, tocAlignVal align g2 trailPos)] }

private def tocListEndTok (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool) : TokenEntry :=
  { rule := "Toc", opts :=
    [("type".toList, OptVal.str "list_end".toList),
     ("level".toList, OptVal.int 0),
     ("align".toList, tocAlignVal align g2 trailPos)] }

private theorem tocType_listStartTok (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool) :
    omGet (tocListStartTok align g2 trailPos).opts "type".toList = some (OptVal.str "list_start".toList) := by
  simp [tocListStartTok, omGet]

private theorem tocType_listEndTok (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool) :
    omGet (tocListEndTok align g2 trailPos).opts "type".toList = some (OptVal.str "list_end".toList) := by
  simp [tocListEndTok, omGet]

private def tocProcExtra (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool)
    (heads : List TokenEntry) : List TokenEntry :=
  [tocListStartTok align g2 trailPos] ++ tocExtra heads 0 ++ [tocListEndTok align g2 trailPos]

private theorem tocProcess_snd (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool)
    (toks : List TokenEntry) :
    (tocProcess align g2 trailPos toks).2 =
      toks ++ tocProcExtra align g2 trailPos (toks.filter (fun t => t.rule == "Heading")) := by
  unfold tocProcess
  dsimp only
  let heads : List TokenEntry := toks.filter (fun t => t.rule == "Heading")
  let t1 : List TokenEntry := toks ++ [tocListStartTok align g2 trailPos]
  change (match tocItems heads t1 0 with
          | (_, t2) => t2 ++ [tocListEndTok align g2 trailPos]) =
         toks ++ tocProcExtra align g2 trailPos heads
  cases hq : tocItems heads t1 0 with
  | mk inside t2 =>
      have ht2 : t2 = t1 ++ tocExtra heads 0 := by
        have hs := congrArg Prod.snd hq
        rw [tocItems_snd] at hs
        exact hs.symm
      rw [ht2]
      simp [t1, tocProcExtra, List.append_assoc]

private theorem tocProcExtra_length (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool)
    (heads : List TokenEntry) :
    (tocProcExtra align g2 trailPos heads).length = 2 + 2 * tocStartCount heads := by
  simp [tocProcExtra, tocExtra_length]
  omega

private theorem tocProcExtra_rule (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool)
    (heads : List TokenEntry) :
    ∀ t ∈ tocProcExtra align g2 trailPos heads, t.rule = "Toc" := by
  intro t ht
  simp [tocProcExtra, tocListStartTok, tocListEndTok] at ht
  rcases ht with h | h | h
  · subst h; rfl
  · exact tocExtra_rule heads 0 t h
  · subst h; rfl

theorem toc_process_append_only (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool)
    (toks : List TokenEntry) :
    (tocProcess align g2 trailPos toks).2.take toks.length = toks := by
  rw [tocProcess_snd]
  simp

theorem toc_process_token_count (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool)
    (toks : List TokenEntry) :
    (tocProcess align g2 trailPos toks).2.length =
      toks.length + 2 + 2 * tocStartCount (toks.filter (fun t => t.rule == "Heading")) := by
  rw [tocProcess_snd, List.length_append, tocProcExtra_length]
  omega

theorem toc_process_rule (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool)
    (toks : List TokenEntry) :
    ∀ t ∈ (tocProcess align g2 trailPos toks).2.drop toks.length, t.rule = "Toc" := by
  rw [tocProcess_snd, tok_drop_append]
  exact tocProcExtra_rule align g2 trailPos _

theorem toc_process_types (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool)
    (toks : List TokenEntry) :
    ((tocProcess align g2 trailPos toks).2.drop toks.length).map (fun t => omGet t.opts "type".toList) =
      some (OptVal.str "list_start".toList) ::
        tocExtraTypes (toks.filter (fun t => t.rule == "Heading")) 0 ++
        [some (OptVal.str "list_end".toList)] := by
  rw [tocProcess_snd, tok_drop_append]
  simp only [tocProcExtra, List.map_append, List.map_cons, List.map_nil]
  rw [tocExtra_types]
  rw [tocType_listStartTok, tocType_listEndTok]
  rfl

/-! ## `tocScan` — append-only token table -/

private theorem tocProcess_append (align : Option (List Nat)) (g2 : Option (List Nat)) (trailPos : Bool)
    (toks : List TokenEntry) :
    ∃ extra : List TokenEntry,
      (tocProcess align g2 trailPos toks).2 = toks ++ extra ∧
      (∀ t ∈ extra, t.rule = "Toc") := by
  refine ⟨tocProcExtra align g2 trailPos (toks.filter (fun t => t.rule == "Heading")), ?_, ?_⟩
  · exact tocProcess_snd align g2 trailPos toks
  · exact tocProcExtra_rule align g2 trailPos _

theorem toc_scan_append_only (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    ∃ extra : List TokenEntry,
      (tocScan src toks atStart fuel).2 = toks ++ extra ∧
      (∀ t ∈ extra, t.rule = "Toc") := by
  induction fuel generalizing src toks atStart with
  | zero =>
      refine ⟨[], ?_, ?_⟩ <;> simp [tocScan]
  | succ fuel ih =>
      cases src with
      | nil =>
          refine ⟨[], ?_, ?_⟩ <;> simp [tocScan]
      | cons b rest =>
          cases hm : (if atStart then tocMatchAt (b :: rest) else none) with
          | none =>
              obtain ⟨extra, hx, hr⟩ := ih rest toks (b == 10)
              refine ⟨extra, ?_, hr⟩
              simp [tocScan, hm, hx]
          | some m =>
              rcases m with ⟨align, g2, r, endedNl⟩
              obtain ⟨pextra, hpx, hpr⟩ := tocProcess_append align g2 endedNl toks
              obtain ⟨extra, hx, hr⟩ := ih r (toks ++ pextra) endedNl
              refine ⟨pextra ++ extra, ?_, ?_⟩
              · simp [tocScan, hm, hpx, hx, List.append_assoc]
              · intro t ht
                simp only [List.mem_append] at ht
                rcases ht with ht | ht
                · exact hpr t ht
                · exact hr t ht

#print axioms toc_items_append_only
#print axioms toc_items_token_count
#print axioms toc_items_count_out
#print axioms toc_items_rule
#print axioms toc_items_item_start_order
#print axioms toc_items_item_end_order
#print axioms toc_items_types
#print axioms toc_items_start_count_length
#print axioms toc_process_append_only
#print axioms toc_process_token_count
#print axioms toc_process_rule
#print axioms toc_process_types
#print axioms toc_scan_append_only

end LeanFtml
