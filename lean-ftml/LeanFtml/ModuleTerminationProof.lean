import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000
set_option maxRecDepth 400000

namespace LeanFtml

/-!
Parse-only termination record for the Module passes. Every statement is about the mirror functions in ModuleRules.lean; module evaluation is out of scope. The universal part proves (i) the length-plus-one fuel of moduleScanPass is never exhausted, so a pass is faithful, (ii) a byte-and-token-stable pass makes modulePasses stop immediately, (iii) any Nat measure that strictly decreases on every changing pass drives modulePasses to a stable fixpoint within measure src + 1 passes, and (iv) the mirror measure (line-start openers plus inline openers) is at most src.length, so the driver bound src.length + 1 is sufficient under that hypothesis. The universal decrease hypothesis itself is NOT proved here: it is the named remainder. A kernel-decide bounded certificate checks it over a deterministic finite source family, with generator, cardinality and hash recorded below. No bounded result is labelled universal.
-/

theorem matchLitCI_length {pat src rest : List Nat}
    (h : matchLitCI pat src = some rest) : pat.length + rest.length = src.length := by
  induction pat generalizing src with
  | nil =>
      cases h
      simp
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p
          · simp [matchLitCI, hb] at h
            have hlen := ih h
            simp at hlen ⊢
            omega
          · simp [matchLitCI, hb] at h

theorem takeWhile_dropWhile_length (p : Nat → Bool) (xs : List Nat) :
    (xs.takeWhile p).length + (xs.dropWhile p).length = xs.length := by
  induction xs with
  | nil => simp
  | cons x xs ih =>
      by_cases h : p x
      · simp [List.takeWhile, List.dropWhile, h]
        omega
      · simp [List.takeWhile, List.dropWhile, h]

theorem dropWhile_len_le (p : Nat → Bool) (xs : List Nat) :
    (xs.dropWhile p).length ≤ xs.length := by
  induction xs with
  | nil => simp
  | cons x xs ih =>
      by_cases hp : p x
      · simpa [List.dropWhile, hp] using Nat.le.step ih
      · simp [List.dropWhile, hp]

theorem length_drop_eq (xs : List Nat) (n : Nat) : (xs.drop n).length = xs.length - n := by
  simp

theorem length_drop_le (xs : List Nat) (n : Nat) : (xs.drop n).length ≤ xs.length := by
  have h := length_drop_eq xs n
  omega

theorem drop_succ_eq (xs : List Nat) (n : Nat) : xs.drop (n + 1) = (xs.drop n).drop 1 := by
  induction xs generalizing n with
  | nil => simp
  | cons x xs ih =>
      cases n with
      | zero => simp
      | succ n => simpa using ih n

theorem take2_len_ge_two {xs : List Nat} (h : (xs.take 2 == [93, 93]) = true) : 2 ≤ xs.length := by
  cases xs with
  | nil => simp at h
  | cons x xs =>
      cases xs with
      | nil => simp at h
      | cons y ys => simp

theorem close2Suffixes_len_ge_two {xs sfx : List Nat} (h : sfx ∈ close2Suffixes xs) :
    2 ≤ sfx.length := by
  induction xs with
  | nil => simp [close2Suffixes] at h
  | cons x xs ih =>
      simp [close2Suffixes] at h
      rcases h with h | h
      · rcases h with ⟨hcond, hs⟩
        subst sfx
        cases xs with
        | nil => simp at hcond
        | cons y ys => simp
      · exact ih h

theorem close2Suffixes_len_le {xs sfx : List Nat} (h : sfx ∈ close2Suffixes xs) :
    sfx.length ≤ xs.length := by
  induction xs with
  | nil => simp [close2Suffixes] at h
  | cons x xs ih =>
      simp [close2Suffixes] at h
      rcases h with h | h
      · rcases h with ⟨hcond, hs⟩
        subst sfx
        simp
      · have h' := ih h
        exact Nat.le_trans h' (by simp)

theorem moduleHead_cand_short {lit src name attrRaw rest : List Nat}
    {cands : List (List Nat × List Nat)}
    (hhead : moduleHead lit src = some (name, cands))
    (hm : (attrRaw, rest) ∈ cands) :
    rest.length + lit.length + 4 ≤ src.length := by
  unfold moduleHead at hhead
  cases hlit : matchLitCI lit src with
  | none => simp [hlit] at hhead
  | some r1 =>
      have hlitlen : lit.length + r1.length = src.length := matchLitCI_length hlit
      cases r1 with
      | nil => simp [hlit] at hhead
      | cons w r2 =>
          by_cases hw : isWsByte w
          · simp [hlit, hw] at hhead
            let nm := r2.takeWhile isModuleNameByte
            by_cases hn : nm = []
            · simp [nm, hn] at hhead
            · have hnle : nm.length ≤ r2.length := by
                exact Nat.le.intro (by
                  simpa [nm] using takeWhile_dropWhile_length isModuleNameByte r2)
              have hnm : nm.length + (r2.drop nm.length).length = r2.length := by
                rw [length_drop_eq]
                omega
              have hnpos : 1 ≤ nm.length := by
                cases hnmcase : nm.length with
                | zero =>
                    have hnil : nm = [] := List.length_eq_zero_iff.mp hnmcase
                    exact False.elim (hn hnil)
                | succ k => omega
              cases hdrop : r2.drop nm.length with
              | nil =>
                  simp [nm, hn, hdrop] at hhead
              | cons b bs =>
                  have hnm' : nm.length + (b :: bs).length = r2.length := by
                    simpa [hdrop] using hnm
                  by_cases hb : isWsByte b
                  · simp [nm, hn, hdrop, hb] at hhead
                    rcases hhead with ⟨_, h2⟩
                    have hdrop1 : r2.drop (nm.length + 1) = bs := by
                      rw [drop_succ_eq, hdrop]
                      rfl
                    have hcandsEq : (close2Suffixes bs).map
                        (fun sfx => ((b :: bs).take (r2.length - nm.length - sfx.length), sfx.drop 2)) = cands := by
                      simpa [nm, hdrop, hdrop1] using h2
                    rw [← hcandsEq] at hm
                    have hmEx : ∃ sfx ∈ close2Suffixes bs,
                        ((b :: bs).take (r2.length - nm.length - sfx.length), sfx.drop 2) = (attrRaw, rest) := by
                      simpa using hm
                    rcases hmEx with ⟨sfx, hsfx, hpair⟩
                    have hge := close2Suffixes_len_ge_two hsfx
                    have hle := close2Suffixes_len_le hsfx
                    have hrest : rest = sfx.drop 2 := by
                      injection hpair with _ hsecond
                      exact hsecond.symm
                    have hrestlen : rest.length = sfx.length - 2 := by
                      rw [hrest]
                      exact length_drop_eq sfx 2
                    have hle' : sfx.length ≤ bs.length := by simpa using hle
                    have hrestle : rest.length + 2 ≤ sfx.length := by omega
                    have hnm'' : nm.length + (bs.length + 1) = r2.length := by simpa using hnm'
                    have hlitlen' : lit.length + (r2.length + 1) = src.length := by simpa using hlitlen
                    omega
                  · have hdrop1' : r2.drop (nm.length + 1) = bs := by
                      rw [drop_succ_eq, hdrop]
                      rfl
                    by_cases hc : (b :: bs).take 2 == [93, 93]
                    · have hcP : (b :: bs).take 2 = [93, 93] := by simpa using hc
                      simp [nm, hn, hdrop, hb, hcP] at hhead
                      rcases hhead with ⟨_, h2⟩
                      have hdrop2 : r2.drop (nm.length + 2) = bs.tail := by
                        rw [show nm.length + 2 = (nm.length + 1) + 1 by omega]
                        rw [drop_succ_eq, hdrop1']
                        cases bs <;> rfl
                      have hcandsEq : [([], r2.drop (nm.length + 2))] = cands := h2
                      rw [← hcandsEq] at hm
                      have hmem' : attrRaw = [] ∧ rest = r2.drop (nm.length + 2) := by simpa using hm
                      have hrest : rest = bs.tail := by simpa [hdrop2] using hmem'.2
                      have hc2 : 2 ≤ (b :: bs).length := by
                        cases bs with
                        | nil => simp at hcP
                        | cons y ys => simp
                      have hrestlen : rest.length = bs.length - 1 := by
                        rw [hrest]
                        simp [length_drop_eq]
                      have hnm'' : nm.length + (bs.length + 1) = r2.length := by simpa using hnm'
                      have hlitlen' : lit.length + (r2.length + 1) = src.length := by simpa using hlitlen
                      omega
                    · have hcP : ¬ (b :: bs).take 2 = [93, 93] := by simpa using hc
                      simp [nm, hn, hdrop, hb, hcP] at hhead
                      have ht2 : (b :: bs).take 2 = [93, 93] := by simpa using hhead.1
                      exact False.elim (hcP ht2)
          · simp [hlit, hw] at hhead

theorem moduleTail_rest_shorter_aux (n : Nat) :
    ∀ (r body r' : List Nat), r.length = n →
      moduleTail r = some (body, r') → r'.length < r.length := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro r body r' hlen h
      cases r with
      | nil => simp [moduleTail] at h
      | cons x xs =>
          have hlen' : xs.length + 1 = n := by simpa using hlen
          by_cases hx : x == 32
          · have h' : moduleTail xs = some (body, r') := by
              simpa [moduleTail, hx] using h
            have hlt := ih xs.length (by omega) xs body r' rfl h'
            omega
          · by_cases hnl : x == 10
            · have hnlP : x = 10 := by simpa using hnl
              simp [moduleTail, hnlP] at h
              cases hf : findSubCI (litBytes "[[/module]]") xs.tail with
              | none =>
                  rw [hf] at h
                  simp at h
                  rcases h with ⟨_, hr'⟩
                  have hrlen := congrArg List.length hr'
                  omega
              | some c =>
                  rw [hf] at h
                  simp at h
                  rcases h with ⟨_, hr'⟩
                  have hrlen := congrArg List.length hr'
                  have hd := length_drop_le xs (c + 1 + 11)
                  omega
            · have hnlP : ¬ x = 10 := by simpa using hnl
              simp [moduleTail, hx, hnlP] at h

theorem moduleTail_rest_shorter {r body r' : List Nat}
    (h : moduleTail r = some (body, r')) : r'.length < r.length :=
  moduleTail_rest_shorter_aux r.length r body r' rfl h

theorem moduleTryCands_rest_shorter_aux (src name : List Nat) (toks : List TokenEntry) :
    ∀ (cands : List (List Nat × List Nat)),
      (∀ (cand : List Nat × List Nat), cand ∈ cands → cand.2.length + 12 ≤ src.length) →
      ∀ (repl rest' : List Nat) (t1 : List TokenEntry),
        moduleTryCands src name toks cands = some (repl, rest', t1) →
        rest'.length < src.length := by
  intro cands
  induction cands with
  | nil => simp [moduleTryCands]
  | cons cand more ih =>
      intro hshort repl rest' t1 h
      rcases cand with ⟨attrRaw, r⟩
      have hrshortsrc : r.length + 12 ≤ src.length := hshort (attrRaw, r) (by simp)
      cases htail : moduleTail r with
      | none =>
          simp [moduleTryCands, htail] at h
          exact ih (fun c hc => hshort c (by simp [hc])) repl rest' t1 h
      | some pair =>
          rcases pair with ⟨bodyRaw, r'⟩
          have hrshort : r'.length < r.length := moduleTail_rest_shorter htail
          simp [moduleTryCands, htail] at h
          by_cases hhtml : ¬bodyRaw = [] ∧ bodyHasHtmlToken bodyRaw toks 0 = true
          · simp [hhtml] at h
            have hsr : rest' = r' := h.2.1.symm
            subst rest'
            omega
          · by_cases hdef : 1 < countModuleOpeners none
                (src.take (src.length - r'.length)) (src.length - r'.length + 1)
            · simp [hhtml, hdef] at h
              have hsr : rest' = r' := h.2.1.symm
              subst rest'
              omega
            · simp [hhtml, hdef] at h
              have hsr : rest' = r' := h.2.1.symm
              subst rest'
              omega

theorem moduleMatch_rest_shorter {src : List Nat} {toks : List TokenEntry}
    {repl rest' : List Nat} {t1 : List TokenEntry}
    (h : moduleMatch src toks = some (repl, rest', t1)) : rest'.length < src.length := by
  unfold moduleMatch at h
  cases hh : moduleHead (litBytes "[[module") src with
  | none => simp [hh] at h
  | some pair =>
      rcases pair with ⟨name, cands⟩
      simp [hh] at h
      apply moduleTryCands_rest_shorter_aux src name toks cands
      · intro cand hc
        have hc' := moduleHead_cand_short hh hc
        have hlit8 : (litBytes "[[module").length = 8 := by decide
        omega
      · exact h

theorem moduleScanPass_fuel_ge_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat) (toks : List TokenEntry) (fuel : Nat),
      src.length = n → src.length ≤ fuel →
        moduleScanPass prev src toks fuel = moduleScanPass prev src toks (src.length + 1) := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src toks fuel hlen hfuel
      cases src with
      | nil =>
          cases fuel <;> rfl
      | cons b rest =>
          have hlen' : rest.length + 1 = n := by simpa using hlen
          cases fuel with
          | zero => omega
          | succ fuel' =>
              by_cases hline : (prev == none || prev == some 10) = true
              · have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
                cases hm : moduleMatch (b :: rest) toks with
                | none =>
                    have hrestlt : rest.length < n := by omega
                    have hf1 : rest.length ≤ fuel' := by omega
                    have hf2 : rest.length ≤ (b :: rest).length := by omega
                    have i1 := ih rest.length hrestlt (some b) rest toks fuel' rfl hf1
                    have i2 := ih rest.length hrestlt (some b) rest toks (rest.length + 1) rfl (by omega)
                    rw [moduleScanPass, moduleScanPass]
                    simp [hlineP, hm, i1, i2]
                | some trip =>
                    rcases trip with ⟨repl, rest', t1⟩
                    have hrshort := moduleMatch_rest_shorter hm
                    have hrestlt : rest'.length < n := by omega
                    have hf1 : rest'.length ≤ fuel' := by omega
                    have hf2 : rest'.length ≤ (b :: rest).length := by omega
                    have i1 := ih rest'.length hrestlt (lastConsumedByte (b :: rest) rest')
                      rest' t1 fuel' rfl hf1
                    have i2 := ih rest'.length hrestlt (lastConsumedByte (b :: rest) rest')
                      rest' t1 (rest.length + 1) rfl (by omega)
                    rw [moduleScanPass, moduleScanPass]
                    simp [hlineP, hm, i1, i2]
              · have hlineP : ¬ (prev = none ∨ prev = some 10) := by simpa using hline
                have hrestlt : rest.length < n := by omega
                have hf1 : rest.length ≤ fuel' := by omega
                have hf2 : rest.length ≤ (b :: rest).length := by omega
                have i1 := ih rest.length hrestlt (some b) rest toks fuel' rfl hf1
                have i2 := ih rest.length hrestlt (some b) rest toks (rest.length + 1) rfl (by omega)
                rw [moduleScanPass, moduleScanPass]
                simp [hlineP, i1, i2]

theorem moduleScanPass_fuel_sufficient (prev : Option Nat) (src : List Nat)
    (toks : List TokenEntry) (fuel : Nat) (h : src.length ≤ fuel) :
    moduleScanPass prev src toks fuel = moduleScanPass prev src toks (src.length + 1) :=
  moduleScanPass_fuel_ge_aux src.length prev src toks fuel rfl h

theorem moduleScanPass_extra_fuel (prev : Option Nat) (src : List Nat)
    (toks : List TokenEntry) (k : Nat) :
    moduleScanPass prev src toks (src.length + 1) =
      moduleScanPass prev src toks (src.length + 1 + k) := by
  symm
  exact moduleScanPass_fuel_ge_aux src.length prev src toks (src.length + 1 + k) rfl (by omega)

theorem countModuleOpeners_fuel_ge_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat) (fuel : Nat),
      src.length = n → src.length ≤ fuel →
        countModuleOpeners prev src fuel = countModuleOpeners prev src (src.length + 1) := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src fuel hlen hfuel
      cases src with
      | nil =>
          cases fuel <;> rfl
      | cons b rest =>
          have hlen' : rest.length + 1 = n := by simpa using hlen
          cases fuel with
          | zero => omega
          | succ fuel' =>
              by_cases hline : (prev == none || prev == some 10) = true
              · have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
                cases hm : moduleHead (litBytes "[[module") (b :: rest) with
                | some pair =>
                    rcases pair with ⟨nm, cands⟩
                    cases cands with
                    | cons cand more =>
                        rcases cand with ⟨attr, after⟩
                        have hcand : (attr, after) ∈ (attr, after) :: more := by simp
                        have hshort := moduleHead_cand_short hm hcand
                        have hlit8 : (litBytes "[[module").length = 8 := by decide
                        have hafterlt : after.length < n := by omega
                        have hf1 : after.length ≤ fuel' := by omega
                        have hf2 : after.length ≤ (b :: rest).length := by omega
                        have i1 := ih after.length hafterlt (some 93) after fuel' rfl hf1
                        have i2 := ih after.length hafterlt (some 93) after (rest.length + 1) rfl (by omega)
                        rw [countModuleOpeners, countModuleOpeners]
                        simp [hlineP, hm, i1, i2]
                    | nil =>
                        have hrestlt : rest.length < n := by omega
                        have hf1 : rest.length ≤ fuel' := by omega
                        have hf2 : rest.length ≤ (b :: rest).length := by omega
                        have i1 := ih rest.length hrestlt (some b) rest fuel' rfl hf1
                        have i2 := ih rest.length hrestlt (some b) rest (rest.length + 1) rfl (by omega)
                        rw [countModuleOpeners, countModuleOpeners]
                        simp [hlineP, hm, i1, i2]
                | none =>
                    have hrestlt : rest.length < n := by omega
                    have hf1 : rest.length ≤ fuel' := by omega
                    have hf2 : rest.length ≤ (b :: rest).length := by omega
                    have i1 := ih rest.length hrestlt (some b) rest fuel' rfl hf1
                    have i2 := ih rest.length hrestlt (some b) rest (rest.length + 1) rfl (by omega)
                    rw [countModuleOpeners, countModuleOpeners]
                    simp [hlineP, hm, i1, i2]
              · have hlineP : ¬ (prev = none ∨ prev = some 10) := by simpa using hline
                have hrestlt : rest.length < n := by omega
                have hf1 : rest.length ≤ fuel' := by omega
                have hf2 : rest.length ≤ (b :: rest).length := by omega
                have i1 := ih rest.length hrestlt (some b) rest fuel' rfl hf1
                have i2 := ih rest.length hrestlt (some b) rest (rest.length + 1) rfl (by omega)
                rw [countModuleOpeners, countModuleOpeners]
                simp [hlineP, i1, i2]

theorem countModuleOpeners_mul_le_length_aux (n : Nat) :
    ∀ (prev : Option Nat) (src : List Nat), src.length = n →
      countModuleOpeners prev src (src.length + 1) * 12 ≤ src.length := by
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro prev src hlen
      cases src with
      | nil => simp [countModuleOpeners]
      | cons b rest =>
          have hlen' : rest.length + 1 = n := by simpa using hlen
          cases n with
          | zero => omega
          | succ n' =>
              have hlen'' : rest.length = n' := by omega
              by_cases hline : (prev == none || prev == some 10) = true
              · have hlineP : prev = none ∨ prev = some 10 := by simpa using hline
                cases hm : moduleHead (litBytes "[[module") (b :: rest) with
                | some pair =>
                    rcases pair with ⟨nm, cands⟩
                    cases cands with
                    | cons cand more =>
                        rcases cand with ⟨attr, after⟩
                        have hcand : (attr, after) ∈ (attr, after) :: more := by simp
                        have hshort := moduleHead_cand_short hm hcand
                        have hlit8 : (litBytes "[[module").length = 8 := by decide
                        have hafterle : after.length ≤ rest.length + 1 := by omega
                        have hf := countModuleOpeners_fuel_ge_aux after.length (some 93) after
                          (rest.length + 1) rfl hafterle
                        have hi := ih after.length (by omega) (some 93) after rfl
                        rw [countModuleOpeners]
                        simp [hlineP, hm]
                        rw [hf]
                        omega
                    | nil =>
                        have hi := ih rest.length (by omega) (some b) rest rfl
                        rw [countModuleOpeners]
                        simp [hlineP, hm]
                        omega
                | none =>
                    have hi := ih rest.length (by omega) (some b) rest rfl
                    rw [countModuleOpeners]
                    simp [hlineP, hm]
                    omega
              · have hlineP : ¬ (prev = none ∨ prev = some 10) := by simpa using hline
                have hi := ih rest.length (by omega) (some b) rest rfl
                rw [countModuleOpeners]
                simp [hlineP]
                omega

theorem countModuleOpeners_mul_le_length (prev : Option Nat) (src : List Nat) :
    countModuleOpeners prev src (src.length + 1) * 12 ≤ src.length :=
  countModuleOpeners_mul_le_length_aux src.length prev src rfl

/-- The policy measure: line-start opener heads plus inline opener heads. -/
def moduleMeasure (src : List Nat) : Nat :=
  countModuleOpeners none src (src.length + 1) +
    countModuleOpeners (some 32) src (src.length + 1)

theorem moduleMeasure_le_length (src : List Nat) : moduleMeasure src ≤ src.length := by
  have h1 := countModuleOpeners_mul_le_length none src
  have h2 := countModuleOpeners_mul_le_length (some 32) src
  dsimp [moduleMeasure]
  omega

/-- A pass is a fixpoint when it leaves the source bytes unchanged; modulePasses itself stops on exactly this byte test. No token equality is needed. -/
def modulePassStable (src : List Nat) (toks : List TokenEntry) : Prop :=
  (moduleScanPass none src toks (src.length + 1)).1 = src

/-- The universal decrease hypothesis: a pass that leaves the bytes unchanged yields a byte-stable state, and a changing pass lowers the opener measure. This is NOT established universally by this file. -/
def moduleMeasureStepOK (src : List Nat) (toks : List TokenEntry) : Prop :=
  let (out, t) := moduleScanPass none src toks (src.length + 1)
  (out = src → modulePassStable out t) ∧
    (out ≠ src → moduleMeasure out < moduleMeasure src)

theorem modulePasses_eq_of_pass_eq (fuel : Nat) (src : List Nat) (toks : List TokenEntry)
    (h : (moduleScanPass none src toks (src.length + 1)).1 = src) :
    modulePasses (fuel + 1) src toks =
      (src, (moduleScanPass none src toks (src.length + 1)).2) := by
  cases hp : moduleScanPass none src toks (src.length + 1) with
  | mk out t1 =>
      have h' : out = src := by simpa [hp] using h
      subst out
      simp [modulePasses, hp]

theorem modulePasses_reaches_fixpoint_of_measure_aux
    (hstep : ∀ src toks, moduleMeasureStepOK src toks) :
    ∀ n : Nat, ∀ (src : List Nat) (toks : List TokenEntry), moduleMeasure src < n →
      ∃ out t, modulePasses n src toks = (out, t) ∧ modulePassStable out t := by
  intro n
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro src toks hmn
      cases n with
      | zero => omega
      | succ n' =>
          cases hp : moduleScanPass none src toks (src.length + 1) with
          | mk out1 t1 =>
              have hs := hstep src toks
              have hs' : (out1 = src → modulePassStable out1 t1) ∧
                  (out1 ≠ src → moduleMeasure out1 < moduleMeasure src) := by
                simpa [moduleMeasureStepOK, hp] using hs
              by_cases heq : out1 = src
              · have hst : modulePassStable out1 t1 := hs'.1 heq
                refine ⟨out1, t1, ?_, hst⟩
                simp [modulePasses, hp, heq]
              · have hdec : moduleMeasure out1 < moduleMeasure src := hs'.2 heq
                have hlt : moduleMeasure out1 < n' := by omega
                obtain ⟨out, t, hres, hstable⟩ := ih n' (by omega) out1 t1 hlt
                refine ⟨out, t, ?_, hstable⟩
                have hb : (out1 == src) = false := by simp [heq]
                simp [modulePasses, hp, hb, hres]

theorem modulePasses_reaches_fixpoint_of_measure
    (hstep : ∀ src toks, moduleMeasureStepOK src toks)
    (src : List Nat) (toks : List TokenEntry) :
    ∃ out t, modulePasses (moduleMeasure src + 1) src toks = (out, t) ∧ modulePassStable out t :=
  modulePasses_reaches_fixpoint_of_measure_aux hstep (moduleMeasure src + 1) src toks (by omega)

/-- Universal conditional fixpoint theorem: if the measure decreases on every changing pass, the mirror's own fuel src.length + 1 reaches a byte-stable fixpoint. The universal decrease hypothesis is the named remainder; the bounded section below certifies it on a finite family only. -/
theorem module_fixpoint_terminates_of_measure_decrease
    (hstep : ∀ src toks, moduleMeasureStepOK src toks)
    (src : List Nat) (toks : List TokenEntry) :
    ∃ out t, modulePasses (src.length + 1) src toks = (out, t) ∧ modulePassStable out t :=
  modulePasses_reaches_fixpoint_of_measure_aux hstep (src.length + 1) src toks (by
    have hle := moduleMeasure_le_length src
    omega)

/-! ## Bounded certificate (kernel decide, NOT universal) -/

/-- Generator: six token shapes concatenated without separators, all sequences of length at most three. Tokens: lower line opener, module654 opener, lower closer, upper closer, newline, filler byte X. -/
def moduleCertTokens : List (List Nat) :=
  [litBytes "[[module a]]", litBytes "[[module654 a]]", litBytes "[[/module]]",
    litBytes "[[/MODULE]]", [10], litBytes "X"]

def moduleCertLevel : Nat → List (List (List Nat))
  | 0 => [[]]
  | n + 1 => (moduleCertLevel n).flatMap
      (fun seq => moduleCertTokens.map (fun tok => seq ++ [tok]))

def moduleCertSeqs (n : Nat) : List (List (List Nat)) :=
  (List.range (n + 1)).flatMap moduleCertLevel

def moduleCertFamily : List (List Nat) := (moduleCertSeqs 3).map List.flatten

theorem moduleCertFamily_cardinality : moduleCertFamily.length = 259 := by
  decide

/-- Deterministic hash: FNV-1a/32 over every source byte followed by 0xFF, initial 2166136261, prime 16777619. -/
def moduleCertHash : Nat :=
  (moduleCertFamily.flatMap (fun src => src ++ [255])).foldl
    (fun h b => ((h ^^^ b) * 16777619) % 4294967296) 2166136261

theorem moduleCertFamily_hash : moduleCertHash = 53997995 := by
  decide

def moduleCertRun : Nat → List Nat → List TokenEntry →
    List (List Nat × List TokenEntry) × (List Nat × List TokenEntry)
  | 0, src, toks => ([(src, toks)], (src, toks))
  | n + 1, src, toks =>
      let p := moduleScanPass none src toks (src.length + 1)
      if p.1 == src then ([p], p) else
        let r := moduleCertRun n p.1 p.2
        ((src, toks) :: r.1, r.2)

theorem moduleCertRun_final (n : Nat) (src : List Nat) (toks : List TokenEntry) :
    (moduleCertRun n src toks).2 = modulePasses n src toks := by
  induction n generalizing src toks with
  | zero => rfl
  | succ n ih =>
      cases hp : moduleScanPass none src toks (src.length + 1) with
      | mk out t =>
          by_cases h : out == src
          · simp [moduleCertRun, modulePasses, hp, h]
          · simp [moduleCertRun, modulePasses, hp, h, ih]

def moduleCertStateOK (st : List Nat × List TokenEntry) : Bool :=
  let p := moduleScanPass none st.1 st.2 (st.1.length + 1)
  if p.1 == st.1 then
    (moduleScanPass none p.1 p.2 (p.1.length + 1)).1 == p.1
  else decide (moduleMeasure p.1 < moduleMeasure st.1)

def moduleCertOK (src : List Nat) : Bool :=
  let r := moduleCertRun (src.length + 1) src []
  r.1.all moduleCertStateOK &&
    (match r.2 with
      | (out, t) => (moduleScanPass none out t (out.length + 1)).1 == out)

/-- Bounded certificate: every generated source reaches a byte-stable fixpoint within src.length + 1 passes, and every intermediate pass obeys the measure-decrease hypothesis. This is a finite check over 259 sources, not a universal theorem. -/
theorem module_fixpoint_terminates_bounded : moduleCertFamily.all moduleCertOK = true := by
  decide

theorem moduleCertOK_spec {src : List Nat} (h : moduleCertOK src = true) :
    let r := moduleCertRun (src.length + 1) src []
    modulePassStable r.2.1 r.2.2 := by
  dsimp [moduleCertOK] at h
  rw [Bool.and_eq_true] at h
  rcases h with ⟨_, hstable⟩
  cases hr : moduleCertRun (src.length + 1) src [] with
  | mk visited fin =>
      rcases fin with ⟨out, t⟩
      simp [hr] at hstable
      have heq : (moduleScanPass none out t (out.length + 1)).1 = out := hstable
      simpa [modulePassStable] using heq

/-- The bounded fixpoint conclusion for any member of the certified family. The source is passed an empty token table, exactly as moduleRule starts. -/
theorem module_fixpoint_terminates_certified {src : List Nat} (hmem : src ∈ moduleCertFamily) :
    ∃ out t, modulePasses (src.length + 1) src [] = (out, t) ∧ modulePassStable out t := by
  have hok : moduleCertOK src = true :=
    List.all_eq_true.mp module_fixpoint_terminates_bounded src hmem
  have hst := moduleCertOK_spec hok
  cases hr : moduleCertRun (src.length + 1) src [] with
  | mk visited fin =>
      rcases fin with ⟨out, t⟩
      refine ⟨out, t, ?_, ?_⟩
      · rw [← moduleCertRun_final]
        simp [hr]
      · simpa [hr] using hst

#print axioms matchLitCI_length
#print axioms takeWhile_dropWhile_length
#print axioms dropWhile_len_le
#print axioms length_drop_eq
#print axioms length_drop_le
#print axioms drop_succ_eq
#print axioms take2_len_ge_two
#print axioms close2Suffixes_len_ge_two
#print axioms close2Suffixes_len_le
#print axioms moduleHead_cand_short
#print axioms moduleTail_rest_shorter_aux
#print axioms moduleTail_rest_shorter
#print axioms moduleTryCands_rest_shorter_aux
#print axioms moduleMatch_rest_shorter
#print axioms moduleScanPass_fuel_ge_aux
#print axioms moduleScanPass_fuel_sufficient
#print axioms moduleScanPass_extra_fuel
#print axioms countModuleOpeners_fuel_ge_aux
#print axioms countModuleOpeners_mul_le_length_aux
#print axioms countModuleOpeners_mul_le_length
#print axioms moduleMeasure_le_length
#print axioms modulePasses_eq_of_pass_eq
#print axioms modulePasses_reaches_fixpoint_of_measure_aux
#print axioms modulePasses_reaches_fixpoint_of_measure
#print axioms module_fixpoint_terminates_of_measure_decrease
#print axioms moduleCertFamily_cardinality
#print axioms moduleCertFamily_hash
#print axioms moduleCertRun_final
#print axioms moduleCertOK_spec
#print axioms module_fixpoint_terminates_bounded
#print axioms module_fixpoint_terminates_certified

end LeanFtml
