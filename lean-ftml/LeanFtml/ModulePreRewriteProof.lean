import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml
namespace ModulePreRewriteProof

/-! Universal parse-side facts about Modulepre's rewrite. Every statement is about the mirror functions in ModuleRules.lean. Goal (a) is modulepreMatch_shape: a successful match is rewrite654Prefix of a prefix of the source with the corresponding suffix as residual. Goal (b) is token-table invariance, strengthened from the mirror's rfl theorem to every non-work state field and to the scan's no-new-placeholder closure. Goal (c) is the case-sensitivity and line-start discipline: a case-folded opener is copied unchanged and a rewrite is attempted only at a line start. The named gaps sit at the end of the file. -/

theorem take_append_drop_self : ∀ (n : Nat) (xs : List Nat), xs.take n ++ xs.drop n = xs
  | 0, xs => by simp
  | n + 1, [] => by simp
  | n + 1, x :: xs => by simp [take_append_drop_self n xs]

theorem take_len (xs ys : List Nat) : (xs ++ ys).take xs.length = xs := by
  induction xs with
  | nil => simp
  | cons _ xs ih => simp [ih]

theorem drop_len (xs ys : List Nat) : (xs ++ ys).drop xs.length = ys := by
  induction xs with
  | nil => simp
  | cons _ xs ih => simp [ih]

theorem suffix_take_drop (pre rest : List Nat) :
    (pre ++ rest).take ((pre ++ rest).length - rest.length) = pre := by
  have hlen : (pre ++ rest).length - rest.length = pre.length := by simp
  rw [hlen]
  exact take_len pre rest

theorem suffix_drop_drop (pre rest : List Nat) :
    (pre ++ rest).drop ((pre ++ rest).length - rest.length) = rest := by
  have hlen : (pre ++ rest).length - rest.length = pre.length := by simp
  rw [hlen]
  exact drop_len pre rest

theorem drop_drop : ∀ (m n : Nat) (xs : List Nat), (xs.drop m).drop n = xs.drop (m + n)
  | 0, n, xs => by simp
  | m + 1, n, [] => by simp
  | m + 1, n, _ :: xs => by simp [drop_drop m n xs, Nat.succ_add]

theorem bool_eq_false_of_ne_true {b : Bool} (h : ¬ b = true) : b = false := by
  cases b
  · rfl
  · exact False.elim (h rfl)

theorem take_take_of_le {m n : Nat} (h : m ≤ n) (xs : List Nat) :
    (xs.take n).take m = xs.take m := by
  rw [List.take_take, Nat.min_eq_left h]

theorem takeWhile_drop_split (p : Nat → Bool) : ∀ xs : List Nat,
    xs = xs.takeWhile p ++ xs.drop (xs.takeWhile p).length
  | [] => by simp
  | x :: xs => by
      by_cases h : p x = true
      · have ih := takeWhile_drop_split p xs
        have hd : (x :: xs).drop ((x :: xs).takeWhile p).length =
            xs.drop (xs.takeWhile p).length := by simp [h]
        have htw : (x :: xs).takeWhile p = x :: xs.takeWhile p := by simp [h]
        calc
          x :: xs = x :: (xs.takeWhile p ++ xs.drop (xs.takeWhile p).length) :=
            congrArg (fun ys => x :: ys) ih
          _ = (x :: xs.takeWhile p) ++ xs.drop (xs.takeWhile p).length := rfl
          _ = (x :: xs).takeWhile p ++ (x :: xs).drop ((x :: xs).takeWhile p).length := by
            rw [hd, htw]
      · have hf : p x = false := bool_eq_false_of_ne_true h
        simp [hf]

theorem mem_of_mem_drop (xs : List Nat) (n : Nat) {b : Nat} (h : b ∈ xs.drop n) :
    b ∈ xs := by
  induction xs generalizing n with
  | nil => simp at h
  | cons x xs ih =>
      cases n with
      | zero => simpa using h
      | succ n =>
          have h' : b ∈ xs.drop n := by simpa using h
          simpa using (Or.inr (ih n h') : b = x ∨ b ∈ xs)

theorem mem_of_mem_take (xs : List Nat) (n : Nat) {b : Nat} (h : b ∈ xs.take n) :
    b ∈ xs := by
  induction xs generalizing n with
  | nil => simp at h
  | cons x xs ih =>
      cases n with
      | zero => simp at h
      | succ n =>
          simp only [List.take, List.mem_cons] at h
          rcases h with h | h
          · subst b
            simp
          · simpa using (Or.inr (ih n h) : b = x ∨ b ∈ xs)

theorem matchLitCI_drop : ∀ (pat src rest : List Nat),
    matchLitCI pat src = some rest → src.drop pat.length = rest
  | [], src, rest, h => by
      change some src = some rest at h
      simpa using h
  | _ :: _, [], rest, h => by simp [matchLitCI] at h
  | p :: pat, x :: src, rest, h => by
      by_cases hci : byteCiEq x p = true
      · simp [matchLitCI, hci] at h
        simpa using matchLitCI_drop pat src rest h
      · have hf : byteCiEq x p = false := bool_eq_false_of_ne_true hci
        simp [matchLitCI, hf] at h

theorem matchLitCI_length : ∀ (pat src rest : List Nat),
    matchLitCI pat src = some rest → src.length = pat.length + rest.length
  | [], src, rest, h => by
      have hsr : src = rest := by
        change some src = some rest at h
        simpa using h
      simp [hsr]
  | _ :: _, [], rest, h => by simp [matchLitCI] at h
  | p :: pat, x :: src, rest, h => by
      by_cases hci : byteCiEq x p = true
      · simp [matchLitCI, hci] at h
        have ih := matchLitCI_length pat src rest h
        simp only [List.length_cons]
        omega
      · have hf : byteCiEq x p = false := bool_eq_false_of_ne_true hci
        simp [matchLitCI, hf] at h

theorem close2Suffixes_split : ∀ (src sfx : List Nat),
    sfx ∈ close2Suffixes src → ∃ pre, src = pre ++ sfx
  | [], sfx, h => by simp [close2Suffixes] at h
  | [b], sfx, h => by simp [close2Suffixes] at h
  | b :: c :: tail, sfx, h => by
      change sfx ∈ (if [b, c] == [93, 93] then [b :: c :: tail] else []) ++
        close2Suffixes (c :: tail) at h
      by_cases hd : (([b, c] == [93, 93]) = true)
      · simp [hd] at h
        rcases h with hs | hs
        · subst sfx
          exact ⟨[], rfl⟩
        · rcases close2Suffixes_split (c :: tail) sfx hs with ⟨pre, hpre⟩
          refine ⟨b :: pre, ?_⟩
          simp [hpre]
      · simp [hd] at h
        rcases close2Suffixes_split (c :: tail) sfx h with ⟨pre, hpre⟩
        refine ⟨b :: pre, ?_⟩
        simp [hpre]

/-! ## Goal (a): the head candidate is a suffix, and the match is a take/drop pair -/

theorem moduleHead_candidate_suffix (lit src : List Nat) (name : List Nat)
    (cands : List (List Nat × List Nat)) :
    moduleHead lit src = some (name, cands) →
    ∀ {attr rest : List Nat}, (attr, rest) ∈ cands →
      ∃ pre, src = pre ++ rest ∧ lit.length ≤ pre.length := by
  intro h attr rest hc
  cases hm : matchLitCI lit src with
  | none => simp [moduleHead, hm] at h
  | some rest1 =>
      have hdrop : src.drop lit.length = rest1 := matchLitCI_drop lit src rest1 hm
      have hsrc : src = src.take lit.length ++ rest1 := by
        rw [← hdrop]
        exact (take_append_drop_self lit.length src).symm
      have htakelen : (src.take lit.length).length = lit.length := by
        have hlen := matchLitCI_length lit src rest1 hm
        have happ := congrArg List.length (take_append_drop_self lit.length src)
        rw [hdrop] at happ
        simp only [List.length_append] at happ
        omega
      cases rest1 with
      | nil => simp [moduleHead, hm] at h
      | cons w rest2 =>
          by_cases hw : isWsByte w = true
          · have h' := h
            simp [moduleHead, hm, hw] at h'
            by_cases hn : rest2.takeWhile isModuleNameByte = []
            · simp [hn] at h'
            · simp [hn] at h'
              cases hrest3 : rest2.drop (rest2.takeWhile isModuleNameByte).length with
              | nil => simp [hrest3] at h'
              | cons b rest3tail =>
                  by_cases hb : isWsByte b = true
                  · have h'' := h'
                    simp [hb, hrest3] at h''
                    have hcands := h''.2
                    subst cands
                    rcases List.mem_map.mp hc with ⟨sfx, hsfx, hpair⟩
                    have hsfxRest : sfx.drop 2 = rest := by
                      simpa using congrArg Prod.snd hpair
                    rcases close2Suffixes_split
                        (rest2.drop ((rest2.takeWhile isModuleNameByte).length + 1))
                        sfx hsfx with ⟨pre2, hpre2⟩
                    have hdrop1 : rest2.drop ((rest2.takeWhile isModuleNameByte).length + 1) =
                        rest3tail := by
                      have hh := congrArg (fun xs : List Nat => xs.drop 1) hrest3
                      simpa [drop_drop] using hh
                    have htail : rest3tail = pre2 ++ sfx := by simpa [hdrop1] using hpre2
                    have hrest2 : rest2 = rest2.takeWhile isModuleNameByte ++ (b :: rest3tail) := by
                      calc
                        rest2 = rest2.takeWhile isModuleNameByte ++
                          rest2.drop (rest2.takeWhile isModuleNameByte).length :=
                            takeWhile_drop_split isModuleNameByte rest2
                        _ = rest2.takeWhile isModuleNameByte ++ (b :: rest3tail) := by rw [hrest3]
                    have hsfxTD : sfx = sfx.take 2 ++ sfx.drop 2 :=
                      (take_append_drop_self 2 sfx).symm
                    refine ⟨src.take lit.length ++ [w] ++
                      rest2.takeWhile isModuleNameByte ++ [b] ++ pre2 ++ sfx.take 2, ?_, ?_⟩
                    · calc
                        src = src.take lit.length ++ (w :: rest2) := hsrc
                        _ = src.take lit.length ++ [w] ++ rest2 := by simp [List.append_assoc]
                        _ = src.take lit.length ++ [w] ++
                            (rest2.takeWhile isModuleNameByte ++ (b :: rest3tail)) :=
                              congrArg (fun ys => src.take lit.length ++ [w] ++ ys) hrest2
                        _ = src.take lit.length ++ [w] ++
                            rest2.takeWhile isModuleNameByte ++ ([b] ++ (pre2 ++ sfx)) := by
                              rw [htail]
                              simp [List.append_assoc]
                        _ = src.take lit.length ++ [w] ++ rest2.takeWhile isModuleNameByte ++
                            ([b] ++ (pre2 ++ (sfx.take 2 ++ sfx.drop 2))) :=
                              congrArg (fun zs => src.take lit.length ++ [w] ++
                                rest2.takeWhile isModuleNameByte ++ ([b] ++ (pre2 ++ zs))) hsfxTD
                        _ = src.take lit.length ++ [w] ++ rest2.takeWhile isModuleNameByte ++
                            ([b] ++ (pre2 ++ (sfx.take 2 ++ rest))) :=
                              congrArg (fun zs => src.take lit.length ++ [w] ++
                                rest2.takeWhile isModuleNameByte ++
                                ([b] ++ (pre2 ++ (sfx.take 2 ++ zs)))) hsfxRest
                        _ = (src.take lit.length ++ [w] ++ rest2.takeWhile isModuleNameByte ++
                            [b] ++ pre2 ++ sfx.take 2) ++ rest := by simp [List.append_assoc]
                    · simp [htakelen]
                  · by_cases hbr : (b :: rest3tail).take 2 = [93, 93]
                    · have h'' : (some (rest2.takeWhile isModuleNameByte,
                          [([], (b :: rest3tail).drop 2)]) :
                          Option (List Nat × List (List Nat × List Nat))) =
                          some (name, cands) := by
                        simpa [moduleHead, hm, hw, hn, hrest3, hb, hbr] using h
                      injection h'' with hpairEq
                      have hcands : [([], (b :: rest3tail).drop 2)] = cands :=
                        congrArg Prod.snd hpairEq
                      subst cands
                      simp only [List.mem_singleton] at hc
                      have hsfxRest : (b :: rest3tail).drop 2 = rest := by
                        simpa using (congrArg Prod.snd hc).symm
                      have htake : (b :: rest3tail).take 2 = [93, 93] := hbr
                      have hrest3' : b :: rest3tail = [93, 93] ++ rest := by
                        calc
                          b :: rest3tail = (b :: rest3tail).take 2 ++ (b :: rest3tail).drop 2 :=
                            (take_append_drop_self 2 (b :: rest3tail)).symm
                          _ = [93, 93] ++ rest := by rw [htake, hsfxRest]
                      have hrest2 : rest2 = rest2.takeWhile isModuleNameByte ++ (b :: rest3tail) := by
                        calc
                          rest2 = rest2.takeWhile isModuleNameByte ++
                            rest2.drop (rest2.takeWhile isModuleNameByte).length :=
                              takeWhile_drop_split isModuleNameByte rest2
                          _ = rest2.takeWhile isModuleNameByte ++ (b :: rest3tail) := by rw [hrest3]
                      refine ⟨src.take lit.length ++ [w] ++
                        rest2.takeWhile isModuleNameByte ++ [93, 93], ?_, ?_⟩
                      · calc
                          src = src.take lit.length ++ (w :: rest2) := hsrc
                          _ = src.take lit.length ++ [w] ++ rest2 := by simp [List.append_assoc]
                          _ = src.take lit.length ++ [w] ++
                              (rest2.takeWhile isModuleNameByte ++ (b :: rest3tail)) :=
                                congrArg (fun ys => src.take lit.length ++ [w] ++ ys) hrest2
                          _ = src.take lit.length ++ [w] ++
                              rest2.takeWhile isModuleNameByte ++ ([93, 93] ++ rest) := by
                                rw [hrest3']
                                simp [List.append_assoc]
                          _ = (src.take lit.length ++ [w] ++
                              rest2.takeWhile isModuleNameByte ++ [93, 93]) ++ rest := by
                                simp [List.append_assoc]
                      · simp [htakelen]
                    · have hbr' : ¬ (b = 93 ∧ rest3tail.take 1 = [93]) := by
                        intro hc
                        exact hbr (by simpa using hc)
                      have h'' : (none : Option (List Nat × List (List Nat × List Nat))) =
                          some (name, cands) := by
                        simp [moduleHead, hm, hw, hn, hrest3, hb, hbr'] at h
                      cases h''
          · have hf : isWsByte w = false := bool_eq_false_of_ne_true hw
            simp [moduleHead, hm, hf] at h

theorem modulepreMatch_shape {src repl rest : List Nat}
    (h : modulepreMatch src = some (repl, rest)) :
    ∃ n, 11 ≤ n ∧
      repl = rewrite654Prefix (src.take n) ∧ rest = src.drop n := by
  unfold modulepreMatch at h
  cases hm : moduleHead (litBytes "[[module654") src with
  | none => simp [hm] at h
  | some pair =>
      cases pair with
      | mk name cands =>
        cases cands with
        | nil => simp [hm] at h
        | cons cand more =>
          cases cand with
          | mk attr rest0 =>
            have hcand : (attr, rest0) ∈ (attr, rest0) :: more := by simp
            obtain ⟨pre, hpre, hlenpre⟩ :=
              moduleHead_candidate_suffix _ _ _ _ hm hcand
            have hhead : src.length - rest0.length = pre.length := by
              rw [hpre]
              have hlen : (pre ++ rest0).length - rest0.length = pre.length := by simp
              exact hlen
            have hn11 : 11 ≤ src.length - rest0.length := by
              rw [hhead]
              have hlit : (litBytes "[[module654").length = 11 := by decide
              simpa [hlit] using hlenpre
            have hrest0 : src.drop (src.length - rest0.length) = rest0 := by
              rw [hpre]
              have hlen : (pre ++ rest0).length - rest0.length = pre.length := by simp
              rw [hlen]
              exact drop_len pre rest0
            cases hf : findSubCI (litBytes "[[/module]]") rest0 with
            | none =>
                simp [hm, hf] at h
                rcases h with ⟨hrepl, hrest⟩
                subst repl
                subst rest
                refine ⟨src.length - rest0.length, hn11, rfl, ?_⟩
                exact hrest0.symm
            | some c =>
                simp [hm, hf] at h
                rcases h with ⟨hrepl, hrest⟩
                subst repl
                subst rest
                refine ⟨(src.length - rest0.length) + c + 11, ?_, rfl, ?_⟩
                · omega
                · have hdEq : rest0.drop (c + 11) =
                      src.drop ((src.length - rest0.length) + (c + 11)) := by
                    calc
                      rest0.drop (c + 11) = (src.drop (src.length - rest0.length)).drop (c + 11) := by
                        rw [hrest0]
                      _ = src.drop ((src.length - rest0.length) + (c + 11)) :=
                        drop_drop (src.length - rest0.length) (c + 11) src
                  simpa [Nat.add_assoc] using hdEq

/-! ## Goal (c): case sensitivity and the line-start guard -/

theorem rewrite654Prefix_cases (m : List Nat) :
    (m.take 11 = litBytes "[[module654" ∧
      rewrite654Prefix m = litBytes "[[module" ++ m.drop 11) ∨
    (m.take 11 ≠ litBytes "[[module654" ∧ rewrite654Prefix m = m) := by
  by_cases h : (m.take 11 == litBytes "[[module654") = true
  · left
    exact ⟨(beq_iff_eq).mp h, by unfold rewrite654Prefix; simp [h]⟩
  · right
    constructor
    · intro heq
      exact h (by simp [heq])
    · have hf : (m.take 11 == litBytes "[[module654") = false :=
        bool_eq_false_of_ne_true h
      unfold rewrite654Prefix
      simp [hf]

theorem modulepreMatch_rewrite_dichotomy {src repl rest : List Nat}
    (h : modulepreMatch src = some (repl, rest)) :
    ∃ n, 11 ≤ n ∧
      ((src.take 11 = litBytes "[[module654" ∧
          ∃ tail, repl = litBytes "[[module" ++ tail) ∨
        (src.take 11 ≠ litBytes "[[module654" ∧ repl = src.take n)) ∧
      rest = src.drop n := by
  obtain ⟨n, hn, hrepl, hrest⟩ := modulepreMatch_shape h
  have htake : (src.take n).take 11 = src.take 11 := take_take_of_le hn src
  refine ⟨n, hn, ?_, hrest⟩
  rcases rewrite654Prefix_cases (src.take n) with hc | hc
  · left
    constructor
    · rw [← htake]
      exact hc.1
    · exact ⟨(src.take n).drop 11, by rw [hrepl, hc.2]⟩
  · right
    constructor
    · intro heq
      exact hc.1 (by simpa [← htake] using heq)
    · rw [hrepl, hc.2]

theorem modulepreMatch_nil : modulepreMatch ([] : List Nat) = none := by
  decide

theorem modulepreScan_match_step {prev : Option Nat} {src repl rest' : List Nat}
    (fuel : Nat)
    (hline : prev = none ∨ prev = some 10)
    (hm : modulepreMatch src = some (repl, rest')) :
    modulepreScan prev src (fuel + 1) =
      repl ++ modulepreScan (lastConsumedByte src rest') rest' fuel := by
  cases src with
  | nil =>
      rw [modulepreMatch_nil] at hm
      contradiction
  | cons b xs => simp [modulepreScan, hline, hm]

theorem modulepreScan_non_line_start (b : Nat) (rest : List Nat) (fuel : Nat)
    (hb : (b == 10) = false) :
    modulepreScan (some b) (b :: rest) (fuel + 1) =
      b :: modulepreScan (some b) rest fuel := by
  simp [modulepreScan, hb]

theorem rewrite654Prefix_preserves_noFF {m : List Nat} (h : 0xFF ∉ m) :
    0xFF ∉ rewrite654Prefix m := by
  rcases rewrite654Prefix_cases m with hc | hc
  · rw [hc.2]
    simp only [List.mem_append]
    intro hmem
    rcases hmem with hmem | hx
    · exact (by decide : 0xFF ∉ litBytes "[[module") hmem
    · exact h (mem_of_mem_drop m 11 hx)
  · simpa [hc.2] using h

theorem modulepreScan_noFF : ∀ (prev : Option Nat) (src : List Nat) (fuel : Nat),
    0xFF ∉ src → 0xFF ∉ modulepreScan prev src fuel := by
  intro prev src fuel
  induction fuel generalizing prev src with
  | zero => intro h; simp [modulepreScan]
  | succ fuel ih =>
      cases src with
      | nil => intro h; simp [modulepreScan]
      | cons b rest =>
          intro hsrc
          have hbff : b ≠ 0xFF := by
            intro heq
            simp [heq] at hsrc
          have hbff' : (0xFF : Nat) ≠ b := fun h => hbff h.symm
          have hrest : 0xFF ∉ rest := by
            intro hx
            simp [hx] at hsrc
          by_cases hline : prev = none ∨ prev = some 10
          · cases hm : modulepreMatch (b :: rest) with
            | none =>
                have hnff : 0xFF ∉ b :: modulepreScan (some b) rest fuel := by
                  simp [hbff', ih (some b) rest hrest]
                simpa [modulepreScan, hline, hm] using hnff
            | some pair =>
                rcases pair with ⟨repl, rest'⟩
                obtain ⟨n, hn, hrepl, hrest'⟩ := modulepreMatch_shape hm
                have hpre_noFF : 0xFF ∉ (b :: rest).take n := by
                  intro hx
                  exact hsrc (mem_of_mem_take (b :: rest) n hx)
                have hrepl_noFF : 0xFF ∉ repl := by
                  rw [hrepl]
                  exact rewrite654Prefix_preserves_noFF hpre_noFF
                have hrest'_noFF : 0xFF ∉ rest' := by
                  rw [hrest']
                  intro hx
                  exact hsrc (mem_of_mem_drop (b :: rest) n hx)
                have hout := ih (lastConsumedByte (b :: rest) rest') rest' hrest'_noFF
                have hconc : 0xFF ∉ repl ++
                    modulepreScan (lastConsumedByte (b :: rest) rest') rest' fuel := by
                  simp only [List.mem_append]
                  intro hmem
                  rcases hmem with hmem | hmem
                  · exact hrepl_noFF hmem
                  · exact hout hmem
                simpa [modulepreScan, hline, hm] using hconc
          · have hnff : 0xFF ∉ b :: modulepreScan (some b) rest fuel := by
              simp [hbff', ih (some b) rest hrest]
            simpa [modulepreScan, hline] using hnff

/-! ## Goal (b): token-table invariance -/

theorem modulepreRule_all_nonwork_fields (st : ParseState) :
    (modulepreRule st).tokens = st.tokens ∧
    (modulepreRule st).doc = st.doc ∧
    (modulepreRule st).fatal = st.fatal ∧
    (modulepreRule st).continuedDivLeads = st.continuedDivLeads := by
  exact ⟨rfl, rfl, rfl, rfl⟩

theorem modulepreRule_scan_noFF (st : ParseState)
    (h : 0xFF ∉ byteForm st.work) :
    0xFF ∉ modulepreScan none (byteForm st.work) ((byteForm st.work).length + 1) := by
  exact modulepreScan_noFF none (byteForm st.work) ((byteForm st.work).length + 1) h

/-! ## Named gaps -/

/-! G1: the mirror exposes no theorem that parseBytes of a placeholder-free byte list produces a token-free segment list, so a rule-level "no new placeholder" claim is not made here; the scan-level closure modulepreScan_noFF and modulepreRule_scan_noFF are the strongest proved forms. G2: modulepreMatch_rewrite_dichotomy is stated in terms of the source's first 11 bytes; no theorem here relates that prefix to the case-folded opener bytes beyond the exact-literal case, because matchLitCI is case-folding and does not record which spelling matched. G3: no scan-level idempotence is claimed: two consecutive modulepre passes could only be compared with a full rescan lemma, which the mirror does not provide. G4: the mirror's inherited rewrite654Prefix_exact and rewrite654Prefix_keep are not repeated here; rewrite654Prefix_cases is a case split that strictly generalizes their two branches. -/

#print axioms bool_eq_false_of_ne_true
#print axioms take_append_drop_self
#print axioms take_len
#print axioms drop_len
#print axioms suffix_take_drop
#print axioms suffix_drop_drop
#print axioms drop_drop
#print axioms take_take_of_le
#print axioms takeWhile_drop_split
#print axioms mem_of_mem_drop
#print axioms mem_of_mem_take
#print axioms matchLitCI_drop
#print axioms matchLitCI_length
#print axioms close2Suffixes_split
#print axioms moduleHead_candidate_suffix
#print axioms modulepreMatch_shape
#print axioms rewrite654Prefix_cases
#print axioms modulepreMatch_rewrite_dichotomy
#print axioms modulepreMatch_nil
#print axioms modulepreScan_match_step
#print axioms modulepreScan_non_line_start
#print axioms rewrite654Prefix_preserves_noFF
#print axioms modulepreScan_noFF
#print axioms modulepreRule_all_nonwork_fields
#print axioms modulepreRule_scan_noFF

end ModulePreRewriteProof
end LeanFtml
