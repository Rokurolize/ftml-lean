import LeanFtml.Middle2Rules
import LeanFtml.TokenStateProof

/-! ProofMiddle2Note — universal kernel-free theorems for the Note mirror in Middle2Rules.lean. -/

namespace LeanFtml.Middle2.Note

set_option maxHeartbeats 800000
set_option maxRecDepth 10000

/-! Named remainders. The PcreCore/RefTables correspondence for noteMatchAt/noteScan is a section-parameter obligation, never a declared constant. F1's two byte-bridge theorems live only inside a block comment in TokenStateProof.lean, so they are carried as local hypotheses in conditional theorems, never referenced as constants. Every declaration is kernel-checked with only the standard core trust list [propext, Classical.choice, Quot.sound]; the file uses no placeholder proofs and no native or bit-vector decision procedures. Prose is single-line. -/

abbrev noteCloser : List Nat := litBytes "[[/note]]"
abbrev noteOpener : List Nat := litBytes "[[note]]"

def noteStartTok : TokenEntry :=
  { rule := "Note", opts := [("type".toList, OptVal.str "start".toList)] }

def noteEndTok : TokenEntry :=
  { rule := "Note", opts := [("type".toList, OptVal.str "end".toList)] }

/-! ## Byte-helper facts (kernel-free, all inputs) -/

theorem noteCloser_ne_nil : noteCloser ≠ [] := by decide
theorem noteOpener_ne_nil : noteOpener ≠ [] := by decide
theorem noteCloser_length : noteCloser.length = 9 := by decide

theorem matchLitCI_length_eq (pat m r : List Nat) (h : matchLitCI pat m = some r) :
    m.length = pat.length + r.length := by
  induction pat generalizing m r with
  | nil =>
      cases m with
      | nil =>
          simp [matchLitCI] at h
          subst r
          simp
      | cons x xs =>
          simp [matchLitCI] at h
          subst r
          simp
  | cons p pt ih =>
      cases m with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p = true
          · simp [matchLitCI, hb] at h
            have hi := ih xs r h
            simp_all
            omega
          · simp [matchLitCI, hb] at h

theorem matchLitCI_self_append (pat rest : List Nat) :
    matchLitCI pat (pat ++ rest) = some rest := by
  induction pat with
  | nil => simp [matchLitCI]
  | cons p ps ih => simp [matchLitCI, byteCiEq, ih]

theorem matchLitCI_prefix (pat m r : List Nat) (h : matchLitCI pat m = some r) :
    ∃ pre, m = pre ++ r ∧ matchLitCI pat pre = some [] := by
  induction pat generalizing m r with
  | nil =>
      simp [matchLitCI] at h
      subst r
      exact ⟨[], by simp, by simp [matchLitCI]⟩
  | cons p pt ih =>
      cases m with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p = true
          · simp [matchLitCI, hb] at h
            rcases ih xs r h with ⟨pre, hpre, hci⟩
            refine ⟨x :: pre, ?_, ?_⟩
            · simp [hpre]
            · simp [matchLitCI, hb, hci]
          · simp [matchLitCI, hb] at h

theorem matchLitCI_of_prefix (pat pre r : List Nat) (h : matchLitCI pat pre = some []) :
    matchLitCI pat (pre ++ r) = some r := by
  induction pat generalizing pre r with
  | nil =>
      simp [matchLitCI] at h
      subst pre
      simp [matchLitCI]
  | cons p pt ih =>
      cases pre with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p = true
          · simp [matchLitCI, hb] at h
            have hi := ih xs r h
            simpa [matchLitCI, hb] using hi
          · simp [matchLitCI, hb] at h

theorem matchLitCI_append_right (pat m t r : List Nat) (h : matchLitCI pat m = some r) :
    matchLitCI pat (m ++ t) = some (r ++ t) := by
  rcases matchLitCI_prefix pat m r h with ⟨pre, hpre, hci⟩
  rw [hpre, List.append_assoc]
  exact matchLitCI_of_prefix pat pre (r ++ t) hci

/-! ## noteBody: first case-insensitive closer, decomposition and failure -/

def HasCloser (src : List Nat) : Prop :=
  ∃ body m r, src = body ++ m ++ r ∧ matchLitCI noteCloser m = some []

theorem hasCloser_nil : ¬ HasCloser [] := by
  rintro ⟨body, m, r, hEq, hm⟩
  have hlen : m.length = noteCloser.length := by
    have h := matchLitCI_length_eq noteCloser m [] hm
    simpa using h
  have hnil : body ++ (m ++ r) = [] := by simpa [List.append_assoc] using hEq.symm
  cases body with
  | nil =>
      cases m with
      | nil =>
          simp [noteCloser_length] at hlen
      | cons b bs => simp at hnil
  | cons b bs => simp at hnil

theorem hasCloser_cons (b : Nat) (rest : List Nat) :
    HasCloser (b :: rest) ↔ (∃ r, matchLitCI noteCloser (b :: rest) = some r) ∨ HasCloser rest := by
  constructor
  · rintro ⟨body, m, r, hEq, hm⟩
    cases body with
    | nil =>
        left
        have hEq' : b :: rest = m ++ r := by simpa using hEq
        rw [hEq']
        exact ⟨r, matchLitCI_of_prefix noteCloser m r hm⟩
    | cons b' body' =>
        right
        have hEq' : b :: rest = b' :: (body' ++ m ++ r) := by simpa [List.append_assoc] using hEq
        cases hEq'
        exact ⟨body', m, r, rfl, hm⟩
  · intro h
    rcases h with ⟨r, hmatch⟩ | ⟨body, m, r, hEq, hm⟩
    · rcases matchLitCI_prefix noteCloser (b :: rest) r hmatch with ⟨pre, hpre, hci⟩
      exact ⟨[], pre, r, by simp [hpre], hci⟩
    · exact ⟨b :: body, m, r, by simp [hEq, List.append_assoc], hm⟩

theorem noteBody_nil : noteBody [] = none := rfl

theorem noteBody_some_at_closer (src r : List Nat) (h : matchLitCI noteCloser src = some r) :
    noteBody src = some ([], r) := by
  cases src with
  | nil =>
      have hlen := matchLitCI_length_eq noteCloser [] r h
      simp [noteCloser_length] at hlen
      omega
  | cons b rest => simp [noteBody, h]

theorem noteBody_cons_of_miss (b : Nat) (rest : List Nat)
    (h : matchLitCI noteCloser (b :: rest) = none) :
    noteBody (b :: rest) = (noteBody rest).map (fun (body, r) => (b :: body, r)) := by
  simp [noteBody, h]

theorem noteBody_spec (src : List Nat) :
    (noteBody src = none ∧ ¬ HasCloser src) ∨
    (∃ body m r, noteBody src = some (body, r) ∧
       src = body ++ m ++ r ∧ matchLitCI noteCloser m = some [] ∧ ¬ HasCloser body) := by
  induction src with
  | nil =>
      left
      exact ⟨rfl, hasCloser_nil⟩
  | cons b rest ih =>
      cases hmcase : matchLitCI noteCloser (b :: rest) with
      | none =>
          rcases ih with hnone | hsome
          · left
            refine ⟨?_, ?_⟩
            · simp [noteBody, hmcase, hnone.1]
            · intro hc
              have hc' := (hasCloser_cons b rest).mp hc
              rcases hc' with hleft | hright
              · rcases hleft with ⟨r, hr⟩
                rw [hmcase] at hr
                simp at hr
              · exact hnone.2 hright
          · rcases hsome with ⟨body, m, r, hb, hdec, hci, hnobody⟩
            right
            refine ⟨b :: body, m, r, ?_, ?_, hci, ?_⟩
            · simp [noteBody, hmcase, hb]
            · simp [hdec, List.append_assoc]
            · intro hcbody
              have hc' := (hasCloser_cons b body).mp hcbody
              rcases hc' with hleft | hright
              · rcases hleft with ⟨r', hr'⟩
                have happ := matchLitCI_append_right noteCloser (b :: body) (m ++ r) r' hr'
                have hsrc : (b :: body) ++ (m ++ r) = b :: rest := by simp [hdec, List.append_assoc]
                rw [hsrc] at happ
                rw [hmcase] at happ
                simp at happ
              · exact hnobody hright
      | some r =>
          right
          rcases matchLitCI_prefix noteCloser (b :: rest) r hmcase with ⟨pre, hpre, hci⟩
          refine ⟨[], pre, r, ?_, ?_, hci, hasCloser_nil⟩
          · simp [noteBody, hmcase]
          · simp [hpre]

theorem noteBody_none_no_closer (src : List Nat) (h : noteBody src = none) : ¬ HasCloser src := by
  rcases noteBody_spec src with hn | hs
  · exact hn.2
  · rw [h] at hs
    simp at hs

theorem noteBody_some_decomp (src body r : List Nat) (h : noteBody src = some (body, r)) :
    ∃ m, src = body ++ m ++ r ∧ matchLitCI noteCloser m = some [] ∧ ¬ HasCloser body := by
  rcases noteBody_spec src with hn | hs
  · rw [h] at hn
    simp at hn
  · rcases hs with ⟨body', m, r', hb, hdec, hci, hnobody⟩
    have heq : some (body, r) = some (body', r') := by rw [← h, hb]
    cases heq
    exact ⟨m, hdec, hci, hnobody⟩

theorem noteBody_some_rest_length_lt (src body r : List Nat) (h : noteBody src = some (body, r)) :
    r.length < src.length := by
  rcases noteBody_some_decomp src body r h with ⟨m, hdec, hci, hnobody⟩
  have hmlen : m.length = 9 := by
    have hh := matchLitCI_length_eq noteCloser m [] hci
    simpa [noteCloser_length] using hh
  rw [hdec]
  simp only [List.length_append]
  omega

def NoCloserBefore (body t : List Nat) : Prop :=
  ∀ (p s : List Nat), body = p ++ s → s ≠ [] → matchLitCI noteCloser (s ++ t) = none

theorem noteBody_eq_of_first (body t r : List Nat) (hm : matchLitCI noteCloser t = some r)
    (hno : NoCloserBefore body t) : noteBody (body ++ t) = some (body, r) := by
  induction body with
  | nil =>
      simpa using noteBody_some_at_closer t r hm
  | cons b body' ih =>
      have hno' : NoCloserBefore body' t := by
        intro p s hp hsne
        exact hno (b :: p) s (by simp [hp]) hsne
      have hmiss : matchLitCI noteCloser (b :: (body' ++ t)) = none := by
        simpa using hno [] (b :: body') rfl (by simp)
      have hi := ih hno'
      have hshape := noteBody_cons_of_miss b (body' ++ t) hmiss
      simp [hshape, hi]

theorem noteBody_eq_of_first_decomp (body m r : List Nat) (hm : matchLitCI noteCloser m = some [])
    (hno : NoCloserBefore body (m ++ r)) : noteBody (body ++ m ++ r) = some (body, r) := by
  have hm' : matchLitCI noteCloser (m ++ r) = some r := matchLitCI_of_prefix noteCloser m r hm
  simpa [List.append_assoc] using noteBody_eq_of_first body (m ++ r) r hm' hno

theorem noCloserBefore_of_noCloser (src body t : List Nat) (hdec : src = body ++ t)
    (h : ¬ HasCloser src) : NoCloserBefore body t := by
  intro p s hp hsne
  cases hci : matchLitCI noteCloser (s ++ t) with
  | none => rfl
  | some q =>
      exfalso
      rcases matchLitCI_prefix noteCloser (s ++ t) q hci with ⟨pre, hpre, hci'⟩
      apply h
      refine ⟨p, pre, q, ?_, hci'⟩
      rw [hdec, hp, List.append_assoc, hpre]
      simp [List.append_assoc]

theorem noteBody_closer_at_head (rest : List Nat) : noteBody (noteCloser ++ rest) = some ([], rest) := by
  simpa using noteBody_some_at_closer (noteCloser ++ rest) rest (matchLitCI_self_append noteCloser rest)

/-! ## noteMatchAt: greedy group-present-first characterization -/

def notePresent (src : List Nat) : Option (List Nat × List Nat × List Nat) :=
  match src with
  | 10 :: r1 =>
      match matchLitCI noteOpener r1 with
      | some (10 :: r2) => (noteBody r2).map (fun (body, r3) => ([10], body, r3))
      | _ => none
  | _ => none

def noteAbsent (src : List Nat) : Option (List Nat × List Nat × List Nat) :=
  match matchLitCI noteOpener src with
  | some (10 :: r2) => (noteBody r2).map (fun (body, r3) => ([], body, r3))
  | _ => none

theorem noteMatchAt_eq (src : List Nat) :
    noteMatchAt src = match notePresent src with | some m => some m | none => noteAbsent src := by
  rfl

theorem noteAbsent_spec (src : List Nat) :
    (∃ r2 body r3, matchLitCI noteOpener src = some (10 :: r2) ∧
        noteBody r2 = some (body, r3) ∧ noteAbsent src = some ([], body, r3)) ∨
    (¬ (∃ r2 body r3, matchLitCI noteOpener src = some (10 :: r2) ∧ noteBody r2 = some (body, r3))
        ∧ noteAbsent src = none) := by
  cases hmo : matchLitCI noteOpener src with
  | none =>
      right
      constructor
      · rintro ⟨r2, body, r3, hmo', hbod⟩
        simp at hmo'
      · simp [noteAbsent, hmo]
  | some xs =>
      cases xs with
      | nil =>
          right
          constructor
          · rintro ⟨r2, body, r3, hmo', hbod⟩
            simp at hmo'
          · simp [noteAbsent, hmo]
      | cons x r2 =>
          by_cases hx : x = 10
          · subst x
            cases hbod : noteBody r2 with
            | none =>
                right
                constructor
                · rintro ⟨r2', body, r3, hmo', hbod'⟩
                  cases hmo'
                  simp [hbod] at hbod'
                · simp [noteAbsent, hmo, hbod]
            | some p =>
                rcases p with ⟨body, r3⟩
                left
                refine ⟨r2, body, r3, ?_, ?_, ?_⟩
                · rfl
                · exact hbod
                · simp [noteAbsent, hmo, hbod]
          · right
            constructor
            · rintro ⟨r2', body, r3, hmo', hbod'⟩
              cases hmo'
              exact hx rfl
            · simp [noteAbsent, hmo, hx]

theorem notePresent_spec (src : List Nat) :
    (∃ r1 r2 body r3, src = 10 :: r1 ∧
        matchLitCI noteOpener r1 = some (10 :: r2) ∧ noteBody r2 = some (body, r3) ∧
        notePresent src = some ([10], body, r3)) ∨
    (¬ (∃ r1 r2 body r3, src = 10 :: r1 ∧
          matchLitCI noteOpener r1 = some (10 :: r2) ∧ noteBody r2 = some (body, r3))
        ∧ notePresent src = none) := by
  cases src with
  | nil =>
      right
      constructor
      · rintro ⟨r1, r2, body, r3, hsrc, hmo, hbod⟩
        cases hsrc
      · simp [notePresent]
  | cons b rest =>
      by_cases hb : b = 10
      · subst b
        cases hmo : matchLitCI noteOpener rest with
        | none =>
            right
            constructor
            · rintro ⟨r1, r2, body, r3, hsrc, hmo', hbod⟩
              cases hsrc
              simp [hmo] at hmo'
            · simp [notePresent, hmo]
        | some xs =>
            cases xs with
            | nil =>
                right
                constructor
                · rintro ⟨r1, r2, body, r3, hsrc, hmo', hbod⟩
                  cases hsrc
                  simp [hmo] at hmo'
                · simp [notePresent, hmo]
            | cons x r2 =>
                by_cases hx : x = 10
                · subst x
                  cases hbod : noteBody r2 with
                  | none =>
                      right
                      constructor
                      · rintro ⟨r1, r2', body, r3, hsrc, hmo', hbod'⟩
                        cases hsrc
                        have heq : some (10 :: r2) = some (10 :: r2') := by rw [← hmo, hmo']
                        cases heq
                        simp [hbod] at hbod'
                      · simp [notePresent, hmo, hbod]
                  | some p =>
                      rcases p with ⟨body, r3⟩
                      left
                      refine ⟨rest, r2, body, r3, rfl, ?_, ?_, ?_⟩
                      · exact hmo
                      · exact hbod
                      · simp [notePresent, hmo, hbod]
                · right
                  constructor
                  · rintro ⟨r1, r2', body, r3, hsrc, hmo', hbod⟩
                    cases hsrc
                    have heq : some (x :: r2) = some (10 :: r2') := by rw [← hmo, hmo']
                    cases heq
                    exact hx rfl
                  · simp [notePresent, hmo, hx]
      · right
        constructor
        · rintro ⟨r1, r2, body, r3, hsrc, hmo, hbod⟩
          injection hsrc with hhead htail
          exact hb (by simpa using hhead)
        · simp [notePresent, hb]

theorem noteMatchAt_spec (src : List Nat) :
    (∃ r1 r2 body r3, src = 10 :: r1 ∧
        matchLitCI noteOpener r1 = some (10 :: r2) ∧ noteBody r2 = some (body, r3) ∧
        noteMatchAt src = some ([10], body, r3)) ∨
    (¬ (∃ r1 r2 body r3, src = 10 :: r1 ∧
          matchLitCI noteOpener r1 = some (10 :: r2) ∧ noteBody r2 = some (body, r3)) ∧
     ∃ r2 body r3, matchLitCI noteOpener src = some (10 :: r2) ∧
        noteBody r2 = some (body, r3) ∧ noteMatchAt src = some ([], body, r3)) ∨
    (¬ (∃ r1 r2 body r3, src = 10 :: r1 ∧
          matchLitCI noteOpener r1 = some (10 :: r2) ∧ noteBody r2 = some (body, r3)) ∧
     ¬ (∃ r2 body r3, matchLitCI noteOpener src = some (10 :: r2) ∧ noteBody r2 = some (body, r3)) ∧
     noteMatchAt src = none) := by
  rcases notePresent_spec src with hp | hp
  · left
    rcases hp with ⟨r1, r2, body, r3, hsrc, hmo, hbod, hpres⟩
    refine ⟨r1, r2, body, r3, hsrc, hmo, hbod, ?_⟩
    simp [noteMatchAt_eq, hpres]
  · rcases noteAbsent_spec src with ha | ha
    · right; left
      rcases ha with ⟨r2, body, r3, hmo, hbod, habs⟩
      exact ⟨hp.1, r2, body, r3, hmo, hbod, by simp [noteMatchAt_eq, hp.2, habs]⟩
    · right; right
      exact ⟨hp.1, ha.1, by simp [noteMatchAt_eq, hp.2, ha.2]⟩

theorem noteMatchAt_none_iff (src : List Nat) :
    noteMatchAt src = none ↔ notePresent src = none ∧ noteAbsent src = none := by
  rw [noteMatchAt_eq]
  cases hpres : notePresent src with
  | none => simp
  | some m => simp

theorem noteMatchAt_nil : noteMatchAt [] = none := rfl

theorem noteMatchAt_present_priority (src : List Nat) (hp : notePresent src ≠ none) :
    noteMatchAt src = notePresent src := by
  cases hpres : notePresent src with
  | none => exact False.elim (hp hpres)
  | some m => simp [noteMatchAt_eq, hpres]

theorem noteMatchAt_fallback (src : List Nat) (hp : notePresent src = none) :
    noteMatchAt src = noteAbsent src := by
  simp [noteMatchAt_eq, hp]

theorem noteMatchAt_some_rest_length_lt (src grp body r3 : List Nat)
    (h : noteMatchAt src = some (grp, body, r3)) : r3.length < src.length := by
  rcases noteMatchAt_spec src with hp | hp | hp
  · rcases hp with ⟨r1, r2, b, rr, hsrc, hmo, hbod, hres⟩
    have heq : some (grp, body, r3) = some ([10], b, rr) := by rw [← h, hres]
    have heq' : (grp, body, r3) = ([10], b, rr) := by injection heq
    have h3 : r3 = rr := congrArg Prod.snd (congrArg Prod.snd heq')
    have hbodlen := noteBody_some_rest_length_lt r2 b rr hbod
    have hmolen : r1.length = noteOpener.length + (r2.length + 1) := by
      have hh := matchLitCI_length_eq noteOpener r1 (10 :: r2) hmo
      simpa using hh
    rw [h3, hsrc]
    simp only [List.length_cons]
    omega
  · rcases hp with ⟨hpno, r2, b, rr, hmo, hbod, hres⟩
    have heq : some (grp, body, r3) = some ([], b, rr) := by rw [← h, hres]
    have heq' : (grp, body, r3) = ([], b, rr) := by injection heq
    have h3 : r3 = rr := congrArg Prod.snd (congrArg Prod.snd heq')
    have hbodlen := noteBody_some_rest_length_lt r2 b rr hbod
    have hmolen : src.length = noteOpener.length + (r2.length + 1) := by
      have hh := matchLitCI_length_eq noteOpener src (10 :: r2) hmo
      simpa using hh
    rw [h3]
    omega
  · rcases hp with ⟨hpno, hano, hnone⟩
    rw [h] at hnone
    simp at hnone

theorem noteMatchAt_present_decomp (src r1 r2 body r3 : List Nat)
    (_hsrc : src = 10 :: r1) (hmo : matchLitCI noteOpener r1 = some (10 :: r2))
    (hbod : noteBody r2 = some (body, r3)) :
    ∃ p m, r1 = p ++ (10 :: r2) ∧ matchLitCI noteOpener p = some [] ∧
      r2 = body ++ m ++ r3 ∧ matchLitCI noteCloser m = some [] ∧ ¬ HasCloser body := by
  rcases matchLitCI_prefix noteOpener r1 (10 :: r2) hmo with ⟨p, hp, hci⟩
  rcases noteBody_some_decomp r2 body r3 hbod with ⟨m, hdec, hmci, hno⟩
  exact ⟨p, m, hp, hci, hdec, hmci, hno⟩

theorem noteMatchAt_absent_decomp (src r2 body r3 : List Nat)
    (hmo : matchLitCI noteOpener src = some (10 :: r2))
    (hbod : noteBody r2 = some (body, r3)) :
    ∃ p m, src = p ++ (10 :: r2) ∧ matchLitCI noteOpener p = some [] ∧
      r2 = body ++ m ++ r3 ∧ matchLitCI noteCloser m = some [] ∧ ¬ HasCloser body := by
  rcases matchLitCI_prefix noteOpener src (10 :: r2) hmo with ⟨p, hp, hci⟩
  rcases noteBody_some_decomp r2 body r3 hbod with ⟨m, hdec, hmci, hno⟩
  exact ⟨p, m, hp, hci, hdec, hmci, hno⟩

/-! ## Start/end token shapes -/

theorem noteStartTok_shape :
    noteStartTok.rule = "Note" ∧ noteStartTok.opts = [("type".toList, OptVal.str "start".toList)] := by
  constructor <;> rfl

theorem noteEndTok_shape :
    noteEndTok.rule = "Note" ∧ noteEndTok.opts = [("type".toList, OptVal.str "end".toList)] := by
  constructor <;> rfl

theorem noteStartTok_ne_endTok : noteStartTok ≠ noteEndTok := by
  intro h
  have h1 := congrArg TokenEntry.opts h
  simp [noteStartTok, noteEndTok] at h1

theorem noteStartTok_type : omGet noteStartTok.opts "type".toList = some (OptVal.str "start".toList) := rfl

theorem noteEndTok_type : omGet noteEndTok.opts "type".toList = some (OptVal.str "end".toList) := rfl

theorem noteScan_inlined_startTok (toks : List TokenEntry) :
    toks ++ [{ rule := "Note", opts := [("type".toList, OptVal.str "start".toList)] },
             { rule := "Note", opts := [("type".toList, OptVal.str "end".toList)] }] =
      toks ++ [noteStartTok, noteEndTok] := rfl

/-! ## noteScan: output shape, token count and append law -/

def noteMatchCount : List Nat → List TokenEntry → Nat → Nat
  | [], _, _ => 0
  | _, _, 0 => 0
  | src@(_ :: rest), toks, fuel + 1 =>
      match noteMatchAt src with
      | some (_, _, r3) => 1 + noteMatchCount r3 (toks ++ [noteStartTok, noteEndTok]) fuel
      | none => noteMatchCount rest toks fuel

theorem noteScan_zero (src : List Nat) (toks : List TokenEntry) :
    noteScan src toks 0 = ([], toks) := by
  cases src <;> rfl

theorem noteScan_nil (toks : List TokenEntry) (fuel : Nat) :
    noteScan [] toks fuel = ([], toks) := by
  cases fuel <;> rfl

theorem noteScan_match_shape (b : Nat) (rest grp body r3 : List Nat)
    (toks : List TokenEntry) (fuel : Nat)
    (h : noteMatchAt (b :: rest) = some (grp, body, r3)) :
    noteScan (b :: rest) toks (fuel + 1) =
      let (out, toks') := noteScan r3 (toks ++ [noteStartTok, noteEndTok]) fuel
      (grp ++ grp ++ phBytes toks.length ++ [10, 10] ++ body ++ [10, 10] ++
        phBytes (toks.length + 1) ++ out, toks') := by
  simp [noteScan, h, noteStartTok, noteEndTok]

theorem noteScan_match_output_shape (b : Nat) (rest grp body r3 : List Nat)
    (toks : List TokenEntry) (fuel : Nat)
    (h : noteMatchAt (b :: rest) = some (grp, body, r3)) :
    ∃ out toks', noteScan (b :: rest) toks (fuel + 1) =
      (grp ++ grp ++ phBytes toks.length ++ [10, 10] ++ body ++ [10, 10] ++
        phBytes (toks.length + 1) ++ out, toks') := by
  refine ⟨(noteScan r3 (toks ++ [noteStartTok, noteEndTok]) fuel).1,
    (noteScan r3 (toks ++ [noteStartTok, noteEndTok]) fuel).2, ?_⟩
  exact noteScan_match_shape b rest grp body r3 toks fuel h

theorem noteScan_tokens_extend (fuel : Nat) (src : List Nat) (toks : List TokenEntry) :
    ∃ added, (noteScan src toks fuel).2 = toks ++ added := by
  induction fuel generalizing src toks with
  | zero =>
      cases src <;> simp [noteScan]
  | succ fuel ih =>
      cases src with
      | nil => simp [noteScan]
      | cons b rest =>
          cases hm : noteMatchAt (b :: rest) with
          | none =>
              simp [noteScan, hm]
              exact ih rest toks
          | some x =>
              rcases x with ⟨grp, body, r3⟩
              rcases ih r3 (toks ++ [noteStartTok, noteEndTok]) with ⟨added, hadd⟩
              rcases hrec : noteScan r3 (toks ++ [noteStartTok, noteEndTok]) fuel with ⟨out, toks'⟩
              have ht : toks' = toks ++ [noteStartTok, noteEndTok] ++ added := by
                simpa [hrec] using hadd
              refine ⟨[noteStartTok, noteEndTok] ++ added, ?_⟩
              rw [noteScan_match_shape b rest grp body r3 toks fuel hm]
              simp [hrec, ht]

theorem noteScan_match_tokens (b : Nat) (rest grp body r3 : List Nat)
    (toks : List TokenEntry) (fuel : Nat)
    (h : noteMatchAt (b :: rest) = some (grp, body, r3)) :
    ∃ added, (noteScan (b :: rest) toks (fuel + 1)).2 =
      toks ++ [noteStartTok, noteEndTok] ++ added := by
  rcases noteScan_tokens_extend fuel r3 (toks ++ [noteStartTok, noteEndTok]) with ⟨added, hadd⟩
  refine ⟨added, ?_⟩
  rw [noteScan_match_shape b rest grp body r3 toks fuel h]
  exact hadd

theorem noteScan_len (fuel : Nat) (src : List Nat) (toks : List TokenEntry) :
    (noteScan src toks fuel).2.length = toks.length + 2 * noteMatchCount src toks fuel := by
  induction fuel generalizing src toks with
  | zero =>
      cases src <;> simp [noteScan, noteMatchCount]
  | succ fuel ih =>
      cases src with
      | nil => simp [noteScan, noteMatchCount]
      | cons b rest =>
          cases hm : noteMatchAt (b :: rest) with
          | none =>
              simp [noteScan, noteMatchCount, hm]
              exact ih rest toks
          | some x =>
              rcases x with ⟨grp, body, r3⟩
              have hi := ih r3 (toks ++ [noteStartTok, noteEndTok])
              have hcnt : noteMatchCount (b :: rest) toks (fuel + 1) =
                  1 + noteMatchCount r3 (toks ++ [noteStartTok, noteEndTok]) fuel := by
                simp [noteMatchCount, hm, noteStartTok, noteEndTok]
              rw [noteScan_match_shape b rest grp body r3 toks fuel hm, hcnt, hi]
              simp
              omega

theorem noteScan_added_tokens_rule (fuel : Nat) (src : List Nat) (toks : List TokenEntry) :
    ∃ added, (noteScan src toks fuel).2 = toks ++ added ∧
      ∀ t ∈ added, t.rule = "Note" := by
  induction fuel generalizing src toks with
  | zero =>
      cases src <;> simp [noteScan]
  | succ fuel ih =>
      cases src with
      | nil => simp [noteScan]
      | cons b rest =>
          cases hm : noteMatchAt (b :: rest) with
          | none =>
              simp [noteScan, hm]
              exact ih rest toks
          | some x =>
              rcases x with ⟨grp, body, r3⟩
              rcases ih r3 (toks ++ [noteStartTok, noteEndTok]) with ⟨added, hadd, hrule⟩
              rcases hrec : noteScan r3 (toks ++ [noteStartTok, noteEndTok]) fuel with ⟨out, toks'⟩
              have ht : toks' = toks ++ [noteStartTok, noteEndTok] ++ added := by
                simpa [hrec] using hadd
              refine ⟨[noteStartTok, noteEndTok] ++ added, ?_, ?_⟩
              · rw [noteScan_match_shape b rest grp body r3 toks fuel hm]
                simp [hrec, ht]
              · intro t htmem
                simp only [List.mem_append, List.mem_cons, List.not_mem_nil, or_false] at htmem
                rcases htmem with hstarts | hrest'
                · rcases hstarts with hstart | hend
                  · rw [hstart]
                    exact noteStartTok_shape.1
                  · rw [hend]
                    exact noteEndTok_shape.1
                · exact hrule t hrest'

/-! ## Fuel: honest sufficiency and independence -/

def noteScanNoMatch : List Nat → Prop
  | [] => True
  | s@(_ :: rest) => noteMatchAt s = none ∧ noteScanNoMatch rest

theorem noteScan_no_match_id_fuel (src : List Nat) (toks : List TokenEntry)
    (h : noteScanNoMatch src) :
    noteScan src toks (src.length + 1) = (src, toks) := by
  induction src with
  | nil => simp [noteScan]
  | cons b rest ih =>
      dsimp [noteScanNoMatch] at h
      have hi := ih h.2
      simp [noteScan, h.1]
      simp [hi]

theorem noteScan_fuel_stable (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hf : src.length ≤ fuel) : noteScan src toks (fuel + 1) = noteScan src toks fuel := by
  induction fuel generalizing src toks with
  | zero =>
      cases src with
      | nil => simp [noteScan]
      | cons b rest => simp at hf
  | succ fuel ih =>
      cases src with
      | nil => simp [noteScan]
      | cons b rest =>
          cases hm : noteMatchAt (b :: rest) with
          | none =>
              have hf' : rest.length + 1 ≤ fuel + 1 := by simpa using hf
              have hfre : rest.length ≤ fuel := by omega
              have hi := ih rest toks hfre
              simp [noteScan, hm]
              simp [hi]
          | some x =>
              rcases x with ⟨grp, body, r3⟩
              have hr3len : r3.length ≤ fuel := by
                have hlt := noteMatchAt_some_rest_length_lt (b :: rest) grp body r3 hm
                have hlt' : r3.length < rest.length + 1 := by simpa using hlt
                have hf' : rest.length + 1 ≤ fuel + 1 := by simpa using hf
                omega
              have hi := ih r3 (toks ++ [noteStartTok, noteEndTok]) hr3len
              rw [noteScan_match_shape b rest grp body r3 toks (fuel + 1) hm]
              rw [noteScan_match_shape b rest grp body r3 toks fuel hm]
              simp [hi]

theorem noteScan_fuel_ge_canonical (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hf : src.length + 1 ≤ fuel) :
    noteScan src toks fuel = noteScan src toks (src.length + 1) := by
  induction fuel with
  | zero => omega
  | succ f ih =>
      by_cases hle : src.length + 1 ≤ f
      · have hstable := noteScan_fuel_stable src toks f (by omega)
        rw [hstable]
        exact ih hle
      · have : f = src.length := by omega
        subst f
        rfl

theorem noteScan_no_match_id_fuel_ge (src : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (hf : src.length + 1 ≤ fuel) (h : noteScanNoMatch src) :
    noteScan src toks fuel = (src, toks) := by
  rw [noteScan_fuel_ge_canonical src toks fuel hf]
  exact noteScan_no_match_id_fuel src toks h

/-! ## noteRule: state-field preservation and conditional WF/TokEquiv -/

theorem noteRule_work (st : ParseState) :
    (noteRule st).work =
      parseBytes (noteScan (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).1 := by
  rfl

theorem noteRule_tokens (st : ParseState) :
    (noteRule st).tokens =
      (noteScan (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).2 := by
  rfl

theorem noteRule_doc (st : ParseState) : (noteRule st).doc = st.doc := rfl

theorem noteRule_fatal (st : ParseState) : (noteRule st).fatal = st.fatal := rfl

theorem noteRule_continuedDivLeads (st : ParseState) :
    (noteRule st).continuedDivLeads = st.continuedDivLeads := rfl

theorem noteRule_tokens_extend (st : ParseState) :
    ∃ added, (noteRule st).tokens = st.tokens ++ added := by
  rw [noteRule_tokens]
  exact noteScan_tokens_extend ((byteForm st.work).length + 1) (byteForm st.work) st.tokens

theorem noteRule_token_count (st : ParseState) :
    (noteRule st).tokens.length = st.tokens.length +
      2 * noteMatchCount (byteForm st.work) st.tokens ((byteForm st.work).length + 1) := by
  rw [noteRule_tokens]
  exact noteScan_len ((byteForm st.work).length + 1) (byteForm st.work) st.tokens

theorem noteRule_preserves_other (st : ParseState) :
    (noteRule st).doc = st.doc ∧ (noteRule st).fatal = st.fatal ∧
      (noteRule st).continuedDivLeads = st.continuedDivLeads :=
  ⟨rfl, rfl, rfl⟩

theorem wfSegs_mono {n m : Nat} (hnm : n ≤ m) {segs : List TSeg} (h : WFSegs segs n) :
    WFSegs segs m := by
  rcases h with ⟨hcanon, hbound⟩
  refine ⟨hcanon, ?_⟩
  intro k hk
  have hklt := hbound k hk
  omega

theorem wfBytes_mono {n m : Nat} (hnm : n ≤ m) {bs : List Nat} (h : WFBytes bs n) :
    WFBytes bs m := by
  rcases h with ⟨segs, hwf, hbf⟩
  exact ⟨segs, wfSegs_mono hnm hwf, hbf⟩

theorem wfOptVal_mono {n m : Nat} (hnm : n ≤ m) (v : OptVal) (h : WFOptVal n v) :
    WFOptVal m v := by
  cases v with
  | bytes bs => exact wfBytes_mono hnm h
  | _ => trivial

theorem wfOptMap_mono {n m : Nat} (hnm : n ≤ m) (mp : OptMap) (h : WFOptMap n mp) :
    WFOptMap m mp := by
  intro kv hk
  exact wfOptVal_mono hnm kv.2 (h kv hk)

theorem wfBytePairs_mono {n m : Nat} (hnm : n ≤ m) {ps : List (List Nat × List Nat)}
    (h : wfBytePairs n ps) : wfBytePairs m ps := by
  intro p hp
  exact ⟨wfBytes_mono hnm (h p hp).1, wfBytes_mono hnm (h p hp).2⟩

theorem wfByteIdPairs_mono {n m : Nat} (hnm : n ≤ m) {ps : List (List Nat × Nat)}
    (h : wfByteIdPairs n ps) : wfByteIdPairs m ps := by
  intro p hp
  exact ⟨wfBytes_mono hnm (h p hp).1, by have := (h p hp).2; omega⟩

/-! F1's byte-bridge theorems are block comments in TokenStateProof.lean; they appear here only as explicit local hypotheses. -/

theorem noteRule_wfSegs_of (st : ParseState)
    (hPB : ∀ segs : List TSeg, ∀ n : Nat, WFSegs segs n → parseBytes (byteForm segs) = segs)
    (hscan : ∃ segs, WFSegs segs (noteRule st).tokens.length ∧
      byteForm segs = (noteScan (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).1) :
    WFSegs (noteRule st).work (noteRule st).tokens.length := by
  rcases hscan with ⟨segs, hwf, hbf⟩
  have hwork : (noteRule st).work = parseBytes (byteForm segs) := by
    rw [noteRule_work, hbf]
  rw [hwork, hPB segs _ hwf]
  exact hwf

theorem noteRule_work_byteForm_of (st : ParseState)
    (hBP : ∀ bs : List Nat, ∀ n : Nat, WFBytes bs n → byteForm (parseBytes bs) = bs)
    (hbytes : WFBytes (noteScan (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).1
      (noteRule st).tokens.length) :
    byteForm (noteRule st).work =
      (noteScan (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).1 := by
  rw [noteRule_work]
  exact hBP _ _ hbytes

theorem noteRule_preserves_wf_of (st : ParseState) (hwf : WFState st)
    (hPB : ∀ segs : List TSeg, ∀ n : Nat, WFSegs segs n → parseBytes (byteForm segs) = segs)
    (hscan : ∃ segs, WFSegs segs (noteRule st).tokens.length ∧
      byteForm segs = (noteScan (byteForm st.work) st.tokens ((byteForm st.work).length + 1)).1 ∧
      (∀ t ∈ (noteRule st).tokens, WFOptMap (noteRule st).tokens.length t.opts)) :
    WFState (noteRule st) := by
  rcases hscan with ⟨segs, hwfsegs, hbf, hopts⟩
  have hwfseg : WFSegs (noteRule st).work (noteRule st).tokens.length := by
    have hwork : (noteRule st).work = parseBytes (byteForm segs) := by
      rw [noteRule_work, hbf]
    rw [hwork, hPB segs _ hwfsegs]
    exact hwfsegs
  have hlen_ge : st.tokens.length ≤ (noteRule st).tokens.length := by
    rcases noteRule_tokens_extend st with ⟨added, ha⟩
    rw [ha]
    simp
  unfold WFState
  refine ⟨hwfseg, hopts, ?_, ?_, ?_, ?_, ?_⟩
  · intro bs hb
    exact wfBytes_mono hlen_ge (hwf.2.2.1 bs hb)
  · exact wfBytePairs_mono hlen_ge hwf.2.2.2.1
  · exact wfByteIdPairs_mono hlen_ge hwf.2.2.2.2.1
  · exact wfBytePairs_mono hlen_ge hwf.2.2.2.2.2.1
  · intro bs hb
    exact wfBytes_mono hlen_ge (hwf.2.2.2.2.2.2 bs hb)

theorem noteRule_tokEquiv_fatal (st₁ st₂ : ParseState) :
    (noteRule st₁).fatal = (noteRule st₂).fatal ↔ st₁.fatal = st₂.fatal := by
  simp [noteRule_fatal]

theorem noteRule_tokEquiv_of (σ : Nat → Nat) (st₁ st₂ : ParseState)
    (h : TokEquiv σ st₁ st₂)
    (hwork : segsTokEquiv σ (noteRule st₁).work (noteRule st₂).work)
    (hlen : (noteRule st₁).tokens.length = (noteRule st₂).tokens.length)
    (hrules : ∀ i (hi : i < (noteRule st₁).tokens.length),
      ((noteRule st₁).tokens.get ⟨i, hi⟩).rule =
        ((noteRule st₂).tokens.get ⟨i, by simpa [hlen] using hi⟩).rule) :
    TokEquiv σ (noteRule st₁) (noteRule st₂) := by
  refine ⟨hwork, hlen, hrules, ?_⟩
  rw [noteRule_fatal, noteRule_fatal]
  exact h.2.choose_spec.2

/-! ## Named PcreCore/RefTables correspondence obligation (unasserted) -/

section NotePcreCorrespondence

variable (RefMatch : List Nat → Option (List Nat × List Nat × List Nat))
variable (RefScan : List Nat → List TokenEntry → Nat → List Nat × List TokenEntry)

def NoteMatcherPcreObligation : Prop := ∀ src : List Nat, noteMatchAt src = RefMatch src

def NoteScanPcreObligation : Prop :=
  ∀ src toks fuel, noteScan src toks fuel = RefScan src toks fuel

theorem noteRule_eq_ref_of_correspondence (st : ParseState)
    (_hm : NoteMatcherPcreObligation RefMatch) (hs : NoteScanPcreObligation RefScan) :
    noteRule st = applyByteRule st (fun src toks => RefScan src toks (src.length + 1)) := by
  unfold noteRule
  have hf : (fun src toks => noteScan src toks (src.length + 1)) =
      (fun src toks => RefScan src toks (src.length + 1)) := by
    funext src toks
    exact hs src toks (src.length + 1)
  rw [hf]

theorem noteMatchAt_eq_ref_of (src : List Nat) (hm : NoteMatcherPcreObligation RefMatch) :
    noteMatchAt src = RefMatch src := hm src

end NotePcreCorrespondence

end LeanFtml.Middle2.Note

#print axioms LeanFtml.Middle2.Note.noteCloser_ne_nil
#print axioms LeanFtml.Middle2.Note.noteOpener_ne_nil
#print axioms LeanFtml.Middle2.Note.noteCloser_length
#print axioms LeanFtml.Middle2.Note.matchLitCI_length_eq
#print axioms LeanFtml.Middle2.Note.matchLitCI_self_append
#print axioms LeanFtml.Middle2.Note.matchLitCI_prefix
#print axioms LeanFtml.Middle2.Note.matchLitCI_of_prefix
#print axioms LeanFtml.Middle2.Note.matchLitCI_append_right
#print axioms LeanFtml.Middle2.Note.hasCloser_nil
#print axioms LeanFtml.Middle2.Note.hasCloser_cons
#print axioms LeanFtml.Middle2.Note.noteBody_nil
#print axioms LeanFtml.Middle2.Note.noteBody_some_at_closer
#print axioms LeanFtml.Middle2.Note.noteBody_cons_of_miss
#print axioms LeanFtml.Middle2.Note.noteBody_spec
#print axioms LeanFtml.Middle2.Note.noteBody_none_no_closer
#print axioms LeanFtml.Middle2.Note.noteBody_some_decomp
#print axioms LeanFtml.Middle2.Note.noteBody_some_rest_length_lt
#print axioms LeanFtml.Middle2.Note.noteBody_eq_of_first
#print axioms LeanFtml.Middle2.Note.noteBody_eq_of_first_decomp
#print axioms LeanFtml.Middle2.Note.noCloserBefore_of_noCloser
#print axioms LeanFtml.Middle2.Note.noteBody_closer_at_head
#print axioms LeanFtml.Middle2.Note.noteMatchAt_eq
#print axioms LeanFtml.Middle2.Note.noteAbsent_spec
#print axioms LeanFtml.Middle2.Note.notePresent_spec
#print axioms LeanFtml.Middle2.Note.noteMatchAt_spec
#print axioms LeanFtml.Middle2.Note.noteMatchAt_none_iff
#print axioms LeanFtml.Middle2.Note.noteMatchAt_nil
#print axioms LeanFtml.Middle2.Note.noteMatchAt_present_priority
#print axioms LeanFtml.Middle2.Note.noteMatchAt_fallback
#print axioms LeanFtml.Middle2.Note.noteMatchAt_some_rest_length_lt
#print axioms LeanFtml.Middle2.Note.noteMatchAt_present_decomp
#print axioms LeanFtml.Middle2.Note.noteMatchAt_absent_decomp
#print axioms LeanFtml.Middle2.Note.noteStartTok_shape
#print axioms LeanFtml.Middle2.Note.noteEndTok_shape
#print axioms LeanFtml.Middle2.Note.noteStartTok_ne_endTok
#print axioms LeanFtml.Middle2.Note.noteStartTok_type
#print axioms LeanFtml.Middle2.Note.noteEndTok_type
#print axioms LeanFtml.Middle2.Note.noteScan_inlined_startTok
#print axioms LeanFtml.Middle2.Note.noteScan_zero
#print axioms LeanFtml.Middle2.Note.noteScan_nil
#print axioms LeanFtml.Middle2.Note.noteScan_match_shape
#print axioms LeanFtml.Middle2.Note.noteScan_match_output_shape
#print axioms LeanFtml.Middle2.Note.noteScan_match_tokens
#print axioms LeanFtml.Middle2.Note.noteScan_tokens_extend
#print axioms LeanFtml.Middle2.Note.noteScan_len
#print axioms LeanFtml.Middle2.Note.noteScan_added_tokens_rule
#print axioms LeanFtml.Middle2.Note.noteScan_no_match_id_fuel
#print axioms LeanFtml.Middle2.Note.noteScan_fuel_stable
#print axioms LeanFtml.Middle2.Note.noteScan_fuel_ge_canonical
#print axioms LeanFtml.Middle2.Note.noteScan_no_match_id_fuel_ge
#print axioms LeanFtml.Middle2.Note.noteRule_work
#print axioms LeanFtml.Middle2.Note.noteRule_tokens
#print axioms LeanFtml.Middle2.Note.noteRule_doc
#print axioms LeanFtml.Middle2.Note.noteRule_fatal
#print axioms LeanFtml.Middle2.Note.noteRule_continuedDivLeads
#print axioms LeanFtml.Middle2.Note.noteRule_tokens_extend
#print axioms LeanFtml.Middle2.Note.noteRule_token_count
#print axioms LeanFtml.Middle2.Note.noteRule_preserves_other
#print axioms LeanFtml.Middle2.Note.wfSegs_mono
#print axioms LeanFtml.Middle2.Note.wfBytes_mono
#print axioms LeanFtml.Middle2.Note.wfOptVal_mono
#print axioms LeanFtml.Middle2.Note.wfOptMap_mono
#print axioms LeanFtml.Middle2.Note.wfBytePairs_mono
#print axioms LeanFtml.Middle2.Note.wfByteIdPairs_mono
#print axioms LeanFtml.Middle2.Note.noteRule_wfSegs_of
#print axioms LeanFtml.Middle2.Note.noteRule_work_byteForm_of
#print axioms LeanFtml.Middle2.Note.noteRule_preserves_wf_of
#print axioms LeanFtml.Middle2.Note.noteRule_tokEquiv_fatal
#print axioms LeanFtml.Middle2.Note.noteRule_tokEquiv_of
#print axioms LeanFtml.Middle2.Note.noteRule_eq_ref_of_correspondence
#print axioms LeanFtml.Middle2.Note.noteMatchAt_eq_ref_of
