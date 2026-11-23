import LeanFtml.BlockRules

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## Generic list helpers (private) -/

private theorem hd_drop_takeWhile_length {α : Type} (p : α → Bool) (l : List α) :
    l.drop (l.takeWhile p).length = l.dropWhile p := by
  induction l with
  | nil => simp
  | cons a l ih =>
      by_cases h : p a = true
      · simp [List.takeWhile, List.dropWhile, h, ih]
      · simp [List.takeWhile, List.dropWhile, h]

private theorem hd_takeWhile_append_dropLen {α : Type} (p : α → Bool) (l : List α) :
    l.takeWhile p ++ l.drop (l.takeWhile p).length = l := by
  rw [hd_drop_takeWhile_length]
  exact List.takeWhile_append_dropWhile

private theorem hd_takeWhile_all_true {α : Type} (p : α → Bool) (l : List α) :
    ∀ b ∈ l.takeWhile p, p b = true := by
  induction l with
  | nil => simp
  | cons a l ih =>
      by_cases h : p a = true
      · have ht : (a :: l).takeWhile p = a :: l.takeWhile p := by simp [List.takeWhile, h]
        intro b hb
        rw [ht] at hb
        simp only [List.mem_cons] at hb
        rcases hb with rfl | hb
        · exact h
        · exact ih b hb
      · intro b hb
        have ht : (a :: l).takeWhile p = [] := by simp [List.takeWhile, h]
        rw [ht] at hb
        simp at hb

private theorem hd_drop_length_append {α : Type} (l tail : List α) : (l ++ tail).drop l.length = tail := by
  induction l with
  | nil => simp
  | cons a l ih => simpa using ih

private theorem hd_take_append_self_length {α : Type} (l l' : List α) : (l ++ l').take l.length = l := by
  induction l with
  | nil => simp
  | cons a l ih => simpa using ih

private theorem hd_take_of_prefix {α : Type} (a b c : List α) (hab : a.length ≤ b.length)
    (hbc : c.take b.length = b) (hba : b.take a.length = a) : c.take a.length = a := by
  calc
    c.take a.length = (c.take b.length).take a.length := by
      rw [List.take_take, Nat.min_eq_left hab]
    _ = b.take a.length := by rw [hbc]
    _ = a := hba

private theorem hd_takeWhile_drop_nil {α : Type} (p : α → Bool) (l : List α) :
    (l.drop (l.takeWhile p).length).takeWhile p = [] := by
  induction l with
  | nil => simp
  | cons a l ih =>
      by_cases h : p a = true
      · simpa [List.takeWhile, h] using ih
      · simp [List.takeWhile, h]

private theorem hd_takeWhile_replicate_append {α : Type} (p : α → Bool) (a : α) (hp : p a = true)
    (n : Nat) (l : List α) :
    (List.replicate n a ++ l).takeWhile p = List.replicate n a ++ l.takeWhile p := by
  induction n with
  | zero => simp
  | succ n ih => simp [List.replicate, hp, ih]

private theorem hd_takeWhile_all_append {α : Type} (p : α → Bool) (ws tail : List α)
    (hall : ∀ b ∈ ws, p b = true) : (ws ++ tail).takeWhile p = ws ++ tail.takeWhile p := by
  induction ws with
  | nil => simp
  | cons b ws ih =>
      have hb : p b = true := hall b (by simp)
      simpa [List.takeWhile, hb] using ih (fun c hc => hall c (by simp [hc]))

private theorem hd_head_10_of_takeWhile_nil (b : Nat) (t : List Nat)
    (h : (b :: t).takeWhile (fun b => b != 10) = []) : b = 10 := by
  by_cases hb : b = 10
  · exact hb
  · have hbtrue : (b != 10) = true := by simpa using hb
    simp [List.takeWhile, hbtrue] at h

/-! ## Characterizing headingMatchLine -/

/-! ## Heading match impossibility facts -/

/-- Seven or more leading plus signs can never match, for any continuation. -/
theorem hd_matchLine_seven_none (line : List Nat)
    (h : 7 ≤ (line.takeWhile (fun b => b == 43)).length) :
    headingMatchLine line = none := by
  have hgt : 6 < (line.takeWhile (fun b => b == 43)).length := by omega
  have hc : ((line.takeWhile (fun b => b == 43)).isEmpty ||
      6 < (line.takeWhile (fun b => b == 43)).length) = true := by
    simp [hgt]
  simp [headingMatchLine, hc]

/-- Seven literal plus signs are a special case of the previous theorem. -/
theorem hd_matchLine_seven_pluses_none (tail : List Nat) :
    headingMatchLine (List.replicate 7 43 ++ tail) = none := by
  apply hd_matchLine_seven_none
  have ht : (List.replicate 7 43 ++ tail).takeWhile (fun b => b == 43) =
      List.replicate 7 43 ++ tail.takeWhile (fun b => b == 43) := by
    simpa using hd_takeWhile_replicate_append (fun b => b == 43) 43 (by simp) 7 tail
  rw [ht]
  simp

/-! ## headingProcess: counter, tokens, document fields -/

/-- The counter update law: a TOC heading increments the stored `headlineId`
    (initialising to zero on first use), a star heading leaves it unchanged. -/
theorem hd_process_counter (level : Nat) (hasToc : Bool) (text : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    (headingProcess level hasToc text doc toks).2.2.headlineId =
      some (if hasToc then doc.headlineId.getD 0 + 1 else doc.headlineId.getD 0) := by
  by_cases h : hasToc <;> simp [headingProcess, h]

/-- The stored counter never decreases. -/
theorem hd_process_counter_mono (level : Nat) (hasToc : Bool) (text : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    doc.headlineId.getD 0 ≤ (headingProcess level hasToc text doc toks).2.2.headlineId.getD 0 := by
  rw [hd_process_counter]
  by_cases h : hasToc <;> simp [h]

/-- Exact token table after a Heading claim: the input table followed by the
    start and end Heading tokens, with their exact options. -/
theorem hd_process_tokens_exact (level : Nat) (hasToc : Bool) (text : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    (headingProcess level hasToc text doc toks).2.1 =
      toks ++
        [{ rule := "Heading", opts :=
            [("type".toList, OptVal.str (if hasToc then "start".toList else "start-notoc".toList)),
             ("level".toList, OptVal.int (level : Int)),
             ("text".toList, textVal text),
             ("id".toList, if hasToc then OptVal.str ("toc" ++ toString (doc.headlineId.getD 0)).toList else OptVal.null)] },
         { rule := "Heading", opts :=
            [("type".toList, OptVal.str "end".toList),
             ("level".toList, OptVal.int (level : Int))] }] := by
  by_cases h : hasToc <;> simp [headingProcess, h]

/-- A Heading claim appends exactly two tokens. -/
theorem hd_process_tokens_count (level : Nat) (hasToc : Bool) (text : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    (headingProcess level hasToc text doc toks).2.1.length = toks.length + 2 := by
  rw [hd_process_tokens_exact]
  simp

/-- A Heading claim never alters the pre-existing token table. -/
theorem hd_process_tokens_prefix (level : Nat) (hasToc : Bool) (text : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    (headingProcess level hasToc text doc toks).2.1.take toks.length = toks := by
  rw [hd_process_tokens_exact]
  exact hd_take_append_self_length toks _

/-- Both newly claimed tokens use the Heading rule. -/
theorem hd_process_new_token_rules (level : Nat) (hasToc : Bool) (text : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    ((headingProcess level hasToc text doc toks).2.1.drop toks.length).map (·.rule) =
      ["Heading", "Heading"] := by
  rw [hd_process_tokens_exact]
  simp

/-- Every document-state field other than `headlineId` is untouched. -/
theorem hd_process_doc_fields (level : Nat) (hasToc : Bool) (text : List Nat)
    (doc : DocState) (toks : List TokenEntry) :
    let d := (headingProcess level hasToc text doc toks).2.2
    d.page = doc.page ∧ d.site = doc.site ∧ d.inclusions = doc.inclusions ∧
    d.inclusionsNotExist = doc.inclusionsNotExist ∧ d.footnotes = doc.footnotes ∧
    d.bibitems = doc.bibitems ∧ d.bibitemIds = doc.bibitemIds ∧
    d.mathId = doc.mathId ∧ d.equations = doc.equations ∧
    d.collapsibleCount = doc.collapsibleCount ∧ d.tabviewCounter = doc.tabviewCounter ∧
    d.scoredAnchors = doc.scoredAnchors := by
  by_cases h : hasToc <;> simp [headingProcess, h]

/-! ## headingScan: counter, token table, match count -/

/-- The number of matched lines the scan consumes, following its exact control flow. -/
def hd_scanMatchCount (src : List Nat) : Nat → Nat
  | 0 => 0
  | fuel + 1 =>
      match src with
      | [] => 0
      | _ =>
          let line := src.takeWhile (fun b => b != 10)
          let after := src.drop line.length
          let pair : List Nat × List Nat := match after with
            | 10 :: r => ([10], r)
            | _ => ([], after)
          match headingMatchLine line with
          | some _ => hd_scanMatchCount pair.2 fuel + 1
          | none => hd_scanMatchCount pair.2 fuel

/-- The one-step unwinding of `headingScan`, with an explicit continuation. -/
private def hd_scanStep (src : List Nat) (toks : List TokenEntry) (doc : DocState)
    (cont : List Nat → List TokenEntry → DocState → List Nat × List TokenEntry × DocState) :
    List Nat × List TokenEntry × DocState :=
  match src with
  | [] => ([], toks, doc)
  | _ =>
      let line := src.takeWhile (fun b => b != 10)
      let after := src.drop line.length
      let pair : List Nat × List Nat := match after with
        | 10 :: r => ([10], r)
        | _ => ([], after)
      match headingMatchLine line with
      | some (level, hasToc, text) =>
          let (repl, t1, d1) := headingProcess level hasToc text doc toks
          let (o, t, d) := cont pair.2 t1 d1
          (repl ++ pair.1 ++ o, t, d)
      | none =>
          let (o, t, d) := cont pair.2 toks doc
          (line ++ pair.1 ++ o, t, d)

private theorem hd_scan_succ_eq (src : List Nat) (toks : List TokenEntry) (doc : DocState) (fuel : Nat) :
    headingScan src toks doc (fuel + 1) =
      hd_scanStep src toks doc (fun s t d => headingScan s t d fuel) := rfl

private theorem hd_scanMatchCount_succ (src : List Nat) (fuel : Nat) :
    hd_scanMatchCount src (fuel + 1) =
      match src with
      | [] => 0
      | _ =>
          let line := src.takeWhile (fun b => b != 10)
          let after := src.drop line.length
          let pair : List Nat × List Nat := match after with
            | 10 :: r => ([10], r)
            | _ => ([], after)
          match headingMatchLine line with
          | some _ => hd_scanMatchCount pair.2 fuel + 1
          | none => hd_scanMatchCount pair.2 fuel := rfl

private theorem hd_scan_inv (src : List Nat) (toks : List TokenEntry) (doc : DocState) (fuel : Nat) :
    (headingScan src toks doc fuel).2.1.take toks.length = toks ∧
    toks.length ≤ (headingScan src toks doc fuel).2.1.length ∧
    doc.headlineId.getD 0 ≤ (headingScan src toks doc fuel).2.2.headlineId.getD 0 := by
  induction fuel generalizing src toks doc with
  | zero =>
      simp [headingScan]
  | succ fuel ih =>
      rw [hd_scan_succ_eq]
      by_cases hs : src = []
      · subst src
        simp [hd_scanStep]
      · simp [hd_scanStep, hs]
        let line := src.takeWhile (fun b => b != 10)
        let after := src.drop line.length
        let pair : List Nat × List Nat := match after with
          | 10 :: r => ([10], r)
          | _ => ([], after)
        by_cases hmnone : headingMatchLine line = none
        · rw [hmnone]
          simp only
          exact ih pair.2 toks doc
        · rcases hml : headingMatchLine line with _ | ⟨level, hasToc, text⟩
          · exact (hmnone hml).elim
          · simp only
            let t1 := (headingProcess level hasToc text doc toks).2.1
            let d1 := (headingProcess level hasToc text doc toks).2.2
            have hrec := ih pair.2 t1 d1
            have hcount : t1.length = toks.length + 2 := by
              change (headingProcess level hasToc text doc toks).2.1.length = toks.length + 2
              exact hd_process_tokens_count level hasToc text doc toks
            have hpref : t1.take toks.length = toks := by
              change (headingProcess level hasToc text doc toks).2.1.take toks.length = toks
              exact hd_process_tokens_prefix level hasToc text doc toks
            have hle : toks.length ≤ t1.length := by omega
            have htake : (headingScan pair.2 t1 d1 fuel).2.1.take toks.length = toks :=
              hd_take_of_prefix toks t1 (headingScan pair.2 t1 d1 fuel).2.1 hle hrec.1 hpref
            have hlenle : toks.length ≤ (headingScan pair.2 t1 d1 fuel).2.1.length := by omega
            have hmono : doc.headlineId.getD 0 ≤ d1.headlineId.getD 0 := by
              change doc.headlineId.getD 0 ≤ (headingProcess level hasToc text doc toks).2.2.headlineId.getD 0
              exact hd_process_counter_mono level hasToc text doc toks
            have hdoc : doc.headlineId.getD 0 ≤ (headingScan pair.2 t1 d1 fuel).2.2.headlineId.getD 0 := by
              omega
            exact ⟨htake, hlenle, hdoc⟩

/-- The scan never decreases the headline counter. -/
theorem hd_scan_counter_mono (src : List Nat) (toks : List TokenEntry) (doc : DocState) (fuel : Nat) :
    doc.headlineId.getD 0 ≤ (headingScan src toks doc fuel).2.2.headlineId.getD 0 :=
  (hd_scan_inv src toks doc fuel).2.2

/-- The scan only appends tokens to the input table. -/
theorem hd_scan_tokens_prefix (src : List Nat) (toks : List TokenEntry) (doc : DocState) (fuel : Nat) :
    (headingScan src toks doc fuel).2.1.take toks.length = toks :=
  (hd_scan_inv src toks doc fuel).1

/-- Exact token count after a scan: two per matched line. -/
theorem hd_scan_tokens_count (src : List Nat) (toks : List TokenEntry) (doc : DocState) (fuel : Nat) :
    (headingScan src toks doc fuel).2.1.length = toks.length + 2 * hd_scanMatchCount src fuel := by
  induction fuel generalizing src toks doc with
  | zero =>
      simp [headingScan, hd_scanMatchCount]
  | succ fuel ih =>
      rw [hd_scan_succ_eq, hd_scanMatchCount_succ]
      by_cases hs : src = []
      · subst src
        simp [hd_scanStep, hd_scanMatchCount]
      · simp [hd_scanStep, hs]
        let line := src.takeWhile (fun b => b != 10)
        let after := src.drop line.length
        let pair : List Nat × List Nat := match after with
          | 10 :: r => ([10], r)
          | _ => ([], after)
        by_cases hmnone : headingMatchLine line = none
        · rw [hmnone]
          simp only
          change (headingScan pair.2 toks doc fuel).2.1.length =
            toks.length + 2 * hd_scanMatchCount pair.2 fuel
          exact ih pair.2 toks doc
        · rcases hml : headingMatchLine line with _ | ⟨level, hasToc, text⟩
          · exact (hmnone hml).elim
          · simp only
            let t1 := (headingProcess level hasToc text doc toks).2.1
            let d1 := (headingProcess level hasToc text doc toks).2.2
            have hrec := ih pair.2 t1 d1
            have hcount : t1.length = toks.length + 2 := by
              change (headingProcess level hasToc text doc toks).2.1.length = toks.length + 2
              exact hd_process_tokens_count level hasToc text doc toks
            change (headingScan pair.2 t1 d1 fuel).2.1.length =
              toks.length + 2 * (hd_scanMatchCount pair.2 fuel + 1)
            rw [hrec, hcount]
            omega

/-! ## headingRule: bridge-independent consequences -/

/-- The Heading rule never decreases the stored headline counter. -/
theorem hd_rule_counter_mono (st : ParseState) :
    st.doc.headlineId.getD 0 ≤ (headingRule st).doc.headlineId.getD 0 := by
  simpa [headingRule] using
    (hd_scan_counter_mono (byteForm st.work) st.tokens st.doc ((byteForm st.work).length + 1))

/-- The Heading rule only appends tokens to the input table. -/
theorem hd_rule_tokens_prefix (st : ParseState) :
    (headingRule st).tokens.take st.tokens.length = st.tokens := by
  simpa [headingRule] using
    (hd_scan_tokens_prefix (byteForm st.work) st.tokens st.doc ((byteForm st.work).length + 1))

/-- Exact token count after the Heading rule. -/
theorem hd_rule_token_count (st : ParseState) :
    (headingRule st).tokens.length = st.tokens.length +
      2 * hd_scanMatchCount (byteForm st.work) ((byteForm st.work).length + 1) := by
  simpa [headingRule] using
    (hd_scan_tokens_count (byteForm st.work) st.tokens st.doc ((byteForm st.work).length + 1))

#print axioms hd_matchLine_seven_none
#print axioms hd_matchLine_seven_pluses_none
#print axioms hd_process_counter
#print axioms hd_process_counter_mono
#print axioms hd_process_tokens_exact
#print axioms hd_process_tokens_count
#print axioms hd_process_tokens_prefix
#print axioms hd_process_new_token_rules
#print axioms hd_process_doc_fields
#print axioms hd_scanMatchCount
#print axioms hd_scan_counter_mono
#print axioms hd_scan_tokens_prefix
#print axioms hd_scan_tokens_count
#print axioms hd_rule_counter_mono
#print axioms hd_rule_tokens_prefix
#print axioms hd_rule_token_count

end LeanFtml
