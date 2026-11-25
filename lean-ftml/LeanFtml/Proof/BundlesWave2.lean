/-
  LeanFtml.Proof.BundlesWave2 — Bundles wave 2: TCB-4 `processRef` runner over
  F2's `RefApply`, discharge of List remainders (`R-LIST-GROWTH`, `R-LIST-OPTS`,
  sharpened `R-LIST-WF`, `R-LIST-BUNDLE`, `R-LIST-TOKEQUIV` witnesses), full
  Boundary-B equivalence for `Break` against `PcreCore`, and per-family
  `processRef` correspondences across 8 families (11 rules).

  No new axioms, no `sorry`, no `native_decide`, no `ofReduceBool`, no `bv_decide`.
  Every theorem audits within `[propext, Classical.choice, Quot.sound]`.
-/
import LeanFtml.ProofInterface
import LeanFtml.RefApply
import LeanFtml.Proof.BundlesWave1
import LeanFtml.Proof.F1Bridges
import LeanFtml.Proof.ProofList
import LeanFtml.RawEquivProof
import LeanFtml.MiddleRules
import LeanFtml.NextRules
import LeanFtml.NotesRules

namespace LeanFtml

/-! ## 1. TCB-4 `processRef` runner parameterized over F2 `RefApply` -/

/-- Type of a TCB-4 PHP `process()` callback: takes the full match bytes,
    captured groups `$matches[1..9]`, and current token table, returning
    `(replacementBytes, updatedTokens)`. -/
abbrev ProcessCallback :=
  List Nat → List (Option (List Nat)) → List TokenEntry → List Nat × List TokenEntry

/-- Apply `cb` sequentially across sorted non-overlapping `ms` matches in `bs`,
    splicing each callback's replacement bytes and threading `tokens`. -/
def spliceMatchesWith (cb : ProcessCallback) (bs : List Nat) (toks : List TokenEntry)
    (ms : List (Nat × Nat × List (Option (List Nat)))) : List Nat × List TokenEntry :=
  let (out, cur, toks') := ms.foldl (fun (acc : List Nat × Nat × List TokenEntry) m =>
    let (out, cur, tk) := acc
    let full := (bs.drop m.1).take (m.2.1 - m.1)
    let (rep, tk') := cb full m.2.2 tk
    (out ++ (bs.drop cur).take (m.1 - cur) ++ rep, m.2.1, tk')) ([], 0, toks)
  (out ++ bs.drop cur, toks')

/-- Byte-level work of rule `r` with callback `cb` across `refParsed r`. -/
def refWorkWith (cb : ProcessCallback) (r : RuleId) (st : ParseState) :
    List Nat × List TokenEntry :=
  (refParsed r).foldl (fun (acc : List Nat × List TokenEntry) p =>
    spliceMatchesWith cb acc.1 acc.2 (PcreCore.pregMatchAll p acc.1))
    (byteForm st.work, st.tokens)

/-- Reference application of rule `r` equipped with its TCB-4 `processRef` callback. -/
def applyRuleRefWith (cb : ProcessCallback) (r : RuleId) (st : ParseState) : ParseState :=
  if (refWork r st).2 = [] then st
  else
    let res := refWorkWith cb r st
    { st with work := parseBytes res.1, tokens := res.2 }

/-- Pipeline fold using per-rule `processRef` callbacks (`cbs r`). -/
def runRulesRefWith (cbs : RuleId → ProcessCallback)
    (rules : List RuleId) (st : ParseState) : ParseState :=
  rules.foldl (fun s r => if s.fatal then s else applyRuleRefWith (cbs r) r s) st

/-- Bare-token placeholder callback matching F2's `RefApply.applyRuleRef`. -/
def bareProcessRef (r : RuleId) : ProcessCallback :=
  fun _ _ tk => (segBytes (TSeg.tok tk.length), tk ++ [{ rule := ruleName r, opts := [] }])

private theorem spliceMatches_fold_eq (r : RuleId) (bs : List Nat) (base : Nat)
    (toks : List TokenEntry) (hlen : toks.length = base)
    (ms : List (Nat × Nat × List (Option (List Nat))))
    (out out' : List Nat) (cur : Nat)
    (claims : List (List Nat × List (Option (List Nat))))
    (hout : out = out') :
    ms.foldl (fun (acc : List Nat × Nat × List TokenEntry) m =>
      let (o, c, tk) := acc
      let full := (bs.drop m.1).take (m.2.1 - m.1)
      let (rep, tk') := bareProcessRef r full m.2.2 tk
      (o ++ (bs.drop c).take (m.1 - c) ++ rep, m.2.1, tk'))
      (out, cur, toks ++ claims.map (fun _ => { rule := ruleName r, opts := [] })) =
    let f := ms.foldl (fun acc m =>
      let (o, c, cl) := acc
      (o ++ (bs.drop c).take (m.1 - c) ++ segBytes (TSeg.tok (base + cl.length)),
       m.2.1,
       cl ++ [((bs.drop m.1).take (m.2.1 - m.1), m.2.2)])) (out', cur, claims)
    (f.1, f.2.1, toks ++ f.2.2.map (fun _ => { rule := ruleName r, opts := [] })) := by
  subst hout
  induction ms generalizing out cur claims with
  | nil => rfl
  | cons m ms ih =>
      simp only [List.foldl_cons]
      have hlen' : (toks ++ claims.map (fun _ => ({ rule := ruleName r, opts := [] } : TokenEntry))).length =
          base + claims.length := by
        simp [hlen]
      have hmap : toks ++ (claims ++ [((bs.drop m.1).take (m.2.1 - m.1), m.2.2)]).map
            (fun _ => ({ rule := ruleName r, opts := [] } : TokenEntry)) =
          (toks ++ claims.map (fun _ => { rule := ruleName r, opts := [] })) ++
            [{ rule := ruleName r, opts := [] }] := by
        simp [List.map_append, List.append_assoc]
      have hb : bareProcessRef r ((bs.drop m.1).take (m.2.1 - m.1)) m.2.2
            (toks ++ claims.map (fun _ => { rule := ruleName r, opts := [] })) =
          (segBytes (TSeg.tok (base + claims.length)),
           toks ++ (claims ++ [((bs.drop m.1).take (m.2.1 - m.1), m.2.2)]).map
             (fun _ => { rule := ruleName r, opts := [] })) := by
        simp [bareProcessRef, hlen', hmap]
      rw [hb]
      exact ih (out ++ (bs.drop cur).take (m.1 - cur) ++ segBytes (TSeg.tok (base + claims.length)))
        m.2.1 (claims ++ [((bs.drop m.1).take (m.2.1 - m.1), m.2.2)])

theorem spliceMatchesWith_bare_eq (r : RuleId) (bs : List Nat) (toks : List TokenEntry)
    (ms : List (Nat × Nat × List (Option (List Nat)))) :
    spliceMatchesWith (bareProcessRef r) bs toks ms =
      ((spliceMatches bs toks.length ms).1,
       toks ++ (spliceMatches bs toks.length ms).2.map
         (fun _ => { rule := ruleName r, opts := [] })) := by
  unfold spliceMatchesWith spliceMatches
  have h := spliceMatches_fold_eq r bs toks.length toks rfl ms [] [] 0 [] rfl
  simp only [List.map_nil, List.append_nil] at h
  rw [h]

private theorem refParsed_fold_bare_eq (r : RuleId) (ps : List PcreCore.PcreParsed)
    (bs : List Nat) (toks : List TokenEntry)
    (claims : List (List Nat × List (Option (List Nat)))) :
    ps.foldl (fun (acc : List Nat × List TokenEntry) p =>
      spliceMatchesWith (bareProcessRef r) acc.1 acc.2 (PcreCore.pregMatchAll p acc.1))
      (bs, toks ++ claims.map (fun _ => { rule := ruleName r, opts := [] })) =
    let f := ps.foldl (fun acc p =>
      let (bs', cl) := spliceMatches acc.1 (toks.length + acc.2.length)
        (PcreCore.pregMatchAll p acc.1)
      (bs', acc.2 ++ cl)) (bs, claims)
    (f.1, toks ++ f.2.map (fun _ => { rule := ruleName r, opts := [] })) := by
  induction ps generalizing bs claims with
  | nil => rfl
  | cons p ps ih =>
      simp only [List.foldl_cons]
      rw [spliceMatchesWith_bare_eq]
      have hlen : (toks ++ claims.map (fun _ => ({ rule := ruleName r, opts := [] } : TokenEntry))).length =
          toks.length + claims.length := by
        simp
      have happ : toks ++ claims.map (fun _ => ({ rule := ruleName r, opts := [] } : TokenEntry)) ++
            (spliceMatches bs (toks.length + claims.length) (PcreCore.pregMatchAll p bs)).2.map
              (fun _ => ({ rule := ruleName r, opts := [] } : TokenEntry)) =
          toks ++ (claims ++ (spliceMatches bs (toks.length + claims.length)
            (PcreCore.pregMatchAll p bs)).2).map
              (fun _ => ({ rule := ruleName r, opts := [] } : TokenEntry)) := by
        simp [List.map_append, List.append_assoc]
      rw [hlen, happ]
      exact ih (spliceMatches bs (toks.length + claims.length) (PcreCore.pregMatchAll p bs)).1
        (claims ++ (spliceMatches bs (toks.length + claims.length) (PcreCore.pregMatchAll p bs)).2)

theorem refWorkWith_bare_eq (r : RuleId) (st : ParseState) :
    refWorkWith (bareProcessRef r) r st =
      ((refWork r st).1,
       st.tokens ++ (refWork r st).2.map (fun _ => { rule := ruleName r, opts := [] })) := by
  unfold refWorkWith refWork
  have h := refParsed_fold_bare_eq r (refParsed r) (byteForm st.work) st.tokens []
  simp only [List.map_nil, List.append_nil] at h
  exact h

/-- `applyRuleRefWith (bareProcessRef r)` reduces identically to F2's `RefApply.applyRuleRef`. -/
theorem applyRuleRefWith_bare_eq_applyRuleRef (r : RuleId) (st : ParseState) :
    applyRuleRefWith (bareProcessRef r) r st = applyRuleRef r st := by
  unfold applyRuleRefWith applyRuleRef
  cases hc : (refWork r st).2 == [] <;> simp [hc, refWorkWith_bare_eq]

theorem applyRuleRefWith_of_no_claims (cb : ProcessCallback) (r : RuleId) (st : ParseState)
    (h : (refWork r st).2 = []) :
    applyRuleRefWith cb r st = st := by
  simp [applyRuleRefWith, h]

/-! ## 2. List remainder discharge (`R-LIST-GROWTH`, `R-LIST-OPTS`, `R-LIST-TOKEQUIV`, `R-LIST-BUNDLE`) -/

/-- Every option value in `m` avoids `OptVal.bytes`, so `WFOptMap n m` holds for any `n`. -/
def NoBytesOptMap (m : OptMap) : Prop :=
  ∀ kv ∈ m, ∀ bs, kv.2 ≠ OptVal.bytes bs

/-- Monotone token-table step invariant carrying both length growth and `WFOptMap` preservation. -/
def ListTokStep (toks toks' : List TokenEntry) : Prop :=
  toks.length ≤ toks'.length ∧
  ∀ n, toks'.length ≤ n →
    (∀ t ∈ toks, WFOptMap n t.opts) →
    (∀ t ∈ toks', WFOptMap n t.opts)

theorem wfOptVal_mono {m n : Nat} {v : OptVal} (hmn : m ≤ n) (h : WFOptVal m v) :
    WFOptVal n v := by
  cases v with
  | bytes bs => exact lst_wfBytes_mono hmn h
  | _ => trivial

theorem wfOptMap_mono {m n : Nat} {opts : OptMap} (hmn : m ≤ n) (h : WFOptMap m opts) :
    WFOptMap n opts :=
  fun kv hkv => wfOptVal_mono hmn (h kv hkv)

theorem wfOptMap_of_noBytes {m : OptMap} (h : NoBytesOptMap m) (n : Nat) :
    WFOptMap n m := by
  intro kv hkv
  cases hv : kv.2 with
  | bytes bs => exact False.elim (h kv hkv bs hv)
  | _ => trivial

theorem textVal_ne_bytes_of_no_ff {bs : List Nat} (h : bs.contains 0xFF = false) :
    ∀ bs', textVal bs ≠ OptVal.bytes bs' := by
  intro bs' hEq
  have hc : bs.contains 0xFF = true := by
    by_cases hm : (0xFF : Nat) ∈ bs
    · exact List.contains_iff_mem.mpr hm
    · simp [textVal, hm] at hEq
  exact Bool.false_ne_true (h.symm.trans hc)

theorem listTokStep_refl (toks : List TokenEntry) : ListTokStep toks toks :=
  ⟨Nat.le_refl _, fun _ _ h => h⟩

theorem listTokStep_trans {a b c : List TokenEntry}
    (hab : ListTokStep a b) (hbc : ListTokStep b c) : ListTokStep a c :=
  ⟨Nat.le_trans hab.1 hbc.1, fun n hn ha =>
    hbc.2 n hn (hab.2 n (Nat.le_trans hbc.1 hn) ha)⟩

private theorem listTokStep_if_pair {α : Type} (c : Bool) (p q : α × List TokenEntry)
    (toks : List TokenEntry) (hp : c = true → ListTokStep toks p.2)
    (hq : c = false → ListTokStep toks q.2) :
    ListTokStep toks (if c then p else q).2 := by
  cases hc : c with
  | true => simp only [↓reduceIte]; exact hp hc
  | false => simp only [Bool.false_eq_true, ↓reduceIte]; exact hq hc

private theorem listTokStep_if_triple {α β : Type} (c : Bool) (p q : α × List TokenEntry × β)
    (toks : List TokenEntry) (hp : c = true → ListTokStep toks p.2.1)
    (hq : c = false → ListTokStep toks q.2.1) :
    ListTokStep toks (if c then p else q).2.1 := by
  cases hc : c with
  | true => simp only [↓reduceIte]; exact hp hc
  | false => simp only [Bool.false_eq_true, ↓reduceIte]; exact hq hc

private theorem listTokStep_match_option {α β : Type} (o : Option α) (toks : List TokenEntry)
    (f : α → β × List TokenEntry) (g : β × List TokenEntry)
    (hf : ∀ a, o = some a → ListTokStep toks (f a).2)
    (hg : o = none → ListTokStep toks g.2) :
    ListTokStep toks (match o with | some a => f a | none => g).2 := by
  cases ho : o with
  | some a => exact hf a ho
  | none => exact hg ho

theorem listTokStep_addTok {rule : String} {opts : OptMap} (hno : NoBytesOptMap opts)
    (toks : List TokenEntry) :
    ListTokStep toks (addTok rule opts toks).2 := by
  refine ⟨by simp [addTok], fun n _ ht t hmem => ?_⟩
  simp only [addTok, List.mem_append, List.mem_singleton] at hmem
  rcases hmem with h1 | rfl
  · exact ht t h1
  · exact wfOptMap_of_noBytes hno n

private theorem wfOptMap_omSet {n : Nat} {m : OptMap} {k : List Char} {v : OptVal}
    (hm : WFOptMap n m) (hv : WFOptVal n v) :
    WFOptMap n (omSet m k v) := by
  induction m with
  | nil =>
      intro kv hkv
      simp only [omSet, List.mem_singleton] at hkv
      subst hkv
      exact hv
  | cons p rest ih =>
      intro kv hkv
      simp only [omSet] at hkv
      split at hkv
      · simp only [List.mem_cons] at hkv
        rcases hkv with rfl | hr
        · exact hv
        · exact hm kv (List.mem_cons_of_mem p hr)
      · simp only [List.mem_cons] at hkv
        rcases hkv with rfl | hr
        · exact hm p List.mem_cons_self
        · exact ih (fun q hq => hm q (List.mem_cons_of_mem p hq)) kv hr

theorem listTokStep_setTrail (toks : List TokenEntry) (key : Nat) (val : List Nat)
    (hnoff : val.contains 0xFF = false) :
    ListTokStep toks (setTrail toks key val) := by
  unfold setTrail
  induction toks generalizing key with
  | nil => exact listTokStep_refl []
  | cons hd ts ih =>
      cases key with
      | zero =>
          refine ⟨by simp [setTrail.go], fun n _ ht x hx => ?_⟩
          simp only [setTrail.go, List.mem_cons] at hx
          rcases hx with rfl | hx
          · exact wfOptMap_omSet (ht hd List.mem_cons_self)
              (by
                cases htv : textVal val with
                | bytes bs => exact False.elim (textVal_ne_bytes_of_no_ff hnoff bs htv)
                | _ => trivial)
          · exact ht x (List.mem_cons_of_mem hd hx)
      | succ k =>
          obtain ⟨hlen, hwf⟩ := ih k
          refine ⟨by simpa [setTrail.go] using Nat.succ_le_succ hlen,
            fun n hn ht x hx => ?_⟩
          simp only [setTrail.go, List.mem_cons] at hx
          rcases hx with rfl | hx
          · exact ht x List.mem_cons_self
          · exact hwf n (by simp only [setTrail.go, List.length_cons] at hn; omega)
              (fun y hy => ht y (List.mem_cons_of_mem hd hy)) x hx

private theorem listTokStep_addList (opts : OptMap) (toks : List TokenEntry)
    (hno : NoBytesOptMap opts) :
    ListTokStep toks (addTok "List" opts toks).2 :=
  listTokStep_addTok hno toks

theorem listTokStep_emitList (out : List Nat) (toks : List TokenEntry) {opts : OptMap}
    (hno : NoBytesOptMap opts) :
    ListTokStep toks (emitList out toks opts).2 :=
  listTokStep_addTok hno toks

private theorem listTokStep_emitList_of (out : List Nat) (toks : List TokenEntry)
    (opts : OptMap) (hno : NoBytesOptMap opts) :
    ListTokStep toks (emitList out toks opts).2 :=
  listTokStep_addTok hno toks

private theorem noBytes_cons_textVal (k : List Char) (v : List Nat) {rest : OptMap}
    (hv : v.contains 0xFF = false) (hr : NoBytesOptMap rest) :
    NoBytesOptMap ((k, textVal v) :: rest) := by
  intro kv hkv bs
  simp only [List.mem_cons] at hkv
  rcases hkv with rfl | hmem
  · exact textVal_ne_bytes_of_no_ff hv bs
  · exact hr kv hmem bs

private theorem noBytes_cons_nonBytes (k : List Char) (v : OptVal) {rest : OptMap}
    (hnv : ∀ bs, v ≠ OptVal.bytes bs) (hr : NoBytesOptMap rest) :
    NoBytesOptMap ((k, v) :: rest) := by
  intro kv hkv bs
  simp only [List.mem_cons] at hkv
  rcases hkv with rfl | hmem
  · exact hnv bs
  · exact hr kv hmem bs

private theorem noBytes_cons_int (k : List Char) (z : Int) {rest : OptMap}
    (hr : NoBytesOptMap rest) : NoBytesOptMap ((k, OptVal.int z) :: rest) :=
  noBytes_cons_nonBytes k (OptVal.int z) (fun _ h => by cases h) hr

private theorem noBytes_cons_bool (k : List Char) (b : Bool) {rest : OptMap}
    (hr : NoBytesOptMap rest) : NoBytesOptMap ((k, OptVal.bool b) :: rest) :=
  noBytes_cons_nonBytes k (OptVal.bool b) (fun _ h => by cases h) hr

private theorem noBytes_cons_map (k : List Char) (m : OptMap) {rest : OptMap}
    (hr : NoBytesOptMap rest) : NoBytesOptMap ((k, OptVal.map m) :: rest) :=
  noBytes_cons_nonBytes k (OptVal.map m) (fun _ h => by cases h) hr

private theorem noBytes_nil : NoBytesOptMap [] := by
  intro kv hkv; cases hkv

private theorem swapByteCase_lt_255 {p : Nat} (hp : p < 128) : swapByteCase p < 255 := by
  unfold swapByteCase
  split
  · omega
  · split
    · omega
    · omega

private theorem byteCiEq_ne_255 {x p : Nat} (hp : p < 128) (h : byteCiEq x p = true) :
    x ≠ 255 := by
  have hs := swapByteCase_lt_255 hp
  simp only [byteCiEq, Bool.or_eq_true, beq_iff_eq] at h
  rcases h with rfl | rfl <;> omega

private theorem matchLitCI_take_no_ff (pat src r : List Nat)
    (hpat : ∀ p ∈ pat, p < 128) (h : matchLitCI pat src = some r) :
    r.length + pat.length = src.length ∧
    (src.take pat.length).contains 0xFF = false := by
  induction pat generalizing src with
  | nil =>
      simp only [matchLitCI, Option.some.injEq] at h
      subst h
      exact ⟨by simp, rfl⟩
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          simp only [matchLitCI] at h
          split at h
          · rename_i hci
            obtain ⟨hlen, htake⟩ := ih xs (fun q hq => hpat q (List.mem_cons_of_mem p hq)) h
            have hx : x ≠ 255 := byteCiEq_ne_255 (hpat p List.mem_cons_self) hci
            refine ⟨by simp; omega, ?_⟩
            rw [List.length_cons, List.take_succ_cons]
            simp only [List.contains_cons, Bool.or_eq_false_iff, beq_eq_false_iff_ne]
            exact ⟨Ne.symm hx, htake⟩
          · contradiction

private theorem rawMatchedTag_no_ff (pat s tag r : List Nat)
    (hpat : ∀ p ∈ pat, p < 128) (h : rawMatchedTag pat s = some (tag, r)) :
    tag.contains 0xFF = false := by
  unfold rawMatchedTag at h
  cases hm : matchLitCI pat s with
  | none => simp [hm] at h
  | some r' =>
      simp only [hm, Option.map_some, Option.some.injEq, Prod.mk.injEq] at h
      obtain ⟨rfl, rfl⟩ := h
      obtain ⟨hlen, htake⟩ := matchLitCI_take_no_ff pat s r' hpat hm
      have heq : s.length - r'.length = pat.length := by omega
      rw [heq]
      exact htake

private theorem ul_ol_lt_128 :
    (∀ p ∈ litBytes "ul", p < 128) ∧ (∀ p ∈ litBytes "ol", p < 128) := by
  refine ⟨?_, ?_⟩ <;> decide

private theorem findSome_ul_ol {α : Type} (f : List Nat → Option α) (x : α)
    (h : [litBytes "ul", litBytes "ol"].findSome? f = some x) :
    f (litBytes "ul") = some x ∨ f (litBytes "ol") = some x := by
  simp only [List.findSome?_cons, List.findSome?_nil] at h
  cases h1 : f (litBytes "ul") with
  | some a =>
      simp only [h1, Option.some.injEq] at h
      exact Or.inl (by rw [h])
  | none =>
      simp only [h1] at h
      cases h2 : f (litBytes "ol") with
      | some b => simp only [h2, Option.some.injEq] at h; exact Or.inr (by rw [h])
      | none => simp [h2] at h

private theorem blockOpenerAt_tag_no_ff {s tag attrs : List Nat} {sc : Bool} {len : Nat}
    (h : blockOpenerAt s = some (tag, sc, attrs, len)) :
    tag.contains 0xFF = false := by
  unfold blockOpenerAt at h
  cases hm : matchLitBytes (litBytes "[[") s with
  | none => simp [hm] at h
  | some r =>
      simp only [hm, Option.bind_eq_some_iff] at h
      obtain ⟨⟨t, scored, r2⟩, hfind, hrest⟩ := h
      have hor := findSome_ul_ol _ _ hfind
      have htag_noff : t.contains 0xFF = false := by
        rcases hor with h1 | h2
        · simp only [Option.map_eq_some_iff, Prod.mk.injEq] at h1
          obtain ⟨⟨rawTag, r1⟩, hraw, rfl, _, _⟩ := h1
          exact rawMatchedTag_no_ff (litBytes "ul") r rawTag r1 ul_ol_lt_128.1 hraw
        · simp only [Option.map_eq_some_iff, Prod.mk.injEq] at h2
          obtain ⟨⟨rawTag, r1⟩, hraw, rfl, _, _⟩ := h2
          exact rawMatchedTag_no_ff (litBytes "ol") r rawTag r1 ul_ol_lt_128.2 hraw
      cases hm2 : matchLitBytes (litBytes "]]") r2 with
      | some r3 =>
          simp only [hm2, Option.some.injEq, Prod.mk.injEq] at hrest
          obtain ⟨rfl, _⟩ := hrest
          exact htag_noff
      | none =>
          simp only [hm2] at hrest
          cases r2 with
          | nil => simp at hrest
          | cons w rest =>
              cases hw : isWsByte w with
              | false => simp [hw] at hrest
              | true =>
                  simp only [hw, ↓reduceIte] at hrest
                  cases hdrop : (w :: rest).drop ((w :: rest).takeWhile isWsByte).length with
                  | nil => simp [hdrop] at hrest
                  | cons c cs =>
                      simp only [hdrop] at hrest
                      by_cases hc : c == 93
                      · simp [hc] at hrest
                      · simp only [hc, Bool.false_eq_true, ↓reduceIte] at hrest
                        cases h2 : (c :: cs).drop ((c :: cs).takeWhile (· != 93)).length with
                        | nil => simp [h2] at hrest
                        | cons x xs =>
                            simp only [h2] at hrest
                            cases xs with
                            | nil => simp at hrest
                            | cons y ys =>
                                split at hrest
                                · simp only [Option.some.injEq, Prod.mk.injEq] at hrest
                                  obtain ⟨rfl, _⟩ := hrest
                                  exact htag_noff
                                · simp at hrest

private theorem blockCloserAt_tag_no_ff {s tag : List Nat} {res : Bool} {len : Nat}
    (h : blockCloserAt s = some (tag, res, len)) :
    tag.contains 0xFF = false := by
  unfold blockCloserAt at h
  cases hm : matchLitBytes (litBytes "[[/") s with
  | none => simp [hm] at h
  | some r =>
      simp only [hm] at h
      have hor := findSome_ul_ol _ _ h
      have hextract : ∀ pat, (∀ p ∈ pat, p < 128) →
          (rawMatchedTag pat r).bind (fun p => (matchLitBytes (litBytes "]]") p.2).map fun r2 =>
            match r2 with | 93 :: r3 => (p.1, true, s.length - r3.length) | _ => (p.1, false, s.length - r2.length)) =
            some (tag, res, len) →
          tag.contains 0xFF = false := by
        intro pat hpat hb
        simp only [Option.bind_eq_some_iff, Option.map_eq_some_iff] at hb
        obtain ⟨⟨rawTag, r1⟩, hraw, r2, hm2, hr2⟩ := hb
        have ht := rawMatchedTag_no_ff pat r rawTag r1 hpat hraw
        cases r2 with
        | nil =>
            simp only [Option.some.injEq, Prod.mk.injEq] at hr2
            obtain ⟨rfl, _⟩ := hr2
            exact ht
        | cons c cs =>
            dsimp only at hr2
            split at hr2 <;> simp only [Option.some.injEq, Prod.mk.injEq] at hr2
            · obtain ⟨rfl, _⟩ := hr2; exact ht
            · obtain ⟨rfl, _⟩ := hr2; exact ht
      rcases hor with h1 | h2
      · exact hextract (litBytes "ul") ul_ol_lt_128.1 h1
      · exact hextract (litBytes "ol") ul_ol_lt_128.2 h2

private theorem scanTags_go_tag_no_ff :
    ∀ fuel s i, ∀ t ∈ scanTags.go s i fuel, t.tag.contains 0xFF = false := by
  intro fuel
  induction fuel with
  | zero =>
      intro s i t ht
      cases s <;> simp [scanTags.go] at ht
  | succ f ih =>
      intro s i t ht
      cases s with
      | nil => simp [scanTags.go] at ht
      | cons b rest =>
          simp only [scanTags.go] at ht
          cases hop : blockOpenerAt (b :: rest) with
          | some p =>
              simp only [hop, List.mem_cons] at ht
              rcases ht with rfl | ht'
              · exact blockOpenerAt_tag_no_ff hop
              · exact ih ((b :: rest).drop p.2.2.2) (i + p.2.2.2) t ht'
          | none =>
              simp only [hop] at ht
              cases hcl : blockCloserAt (b :: rest) with
              | some q =>
                  simp only [hcl, List.mem_cons] at ht
                  rcases ht with rfl | ht'
                  · exact blockCloserAt_tag_no_ff hcl
                  · exact ih ((b :: rest).drop q.2.2) (i + q.2.2) t ht'
              | none =>
                  simp only [hcl] at ht
                  exact ih rest (i + 1) t ht

private theorem scanTags_tag_no_ff {s : List Nat} {t : TagMatch} (ht : t ∈ scanTags s) :
    t.tag.contains 0xFF = false :=
  scanTags_go_tag_no_ff (s.length + 1) s 0 t ht

private theorem pairTags_tag_no_ff {src : List Nat} {toks : List TokenEntry}
    {t : TagMatch} (ht : t ∈ pairTags src toks) :
    t.tag.contains 0xFF = false :=
  scanTags_tag_no_ff (List.mem_filter.mp ht).1

private theorem findPair_go_tag_no_ff (src : List Nat) (tags stack : List TagMatch)
    (htags : ∀ t ∈ tags, t.tag.contains 0xFF = false)
    (hstack : ∀ t ∈ stack, t.tag.contains 0xFF = false)
    {op cl : TagMatch} (h : findPair.go src tags stack = some (op, cl)) :
    op.tag.contains 0xFF = false ∧ cl.tag.contains 0xFF = false := by
  induction tags generalizing stack with
  | nil => simp [findPair.go] at h
  | cons t rest ih =>
      have ht_noff := htags t List.mem_cons_self
      have hrest := fun x hx => htags x (List.mem_cons_of_mem t hx)
      simp only [findPair.go] at h
      cases hopen : t.isOpen with
      | true =>
          simp only [hopen, ↓reduceIte] at h
          exact ih (t :: stack) hrest (by
            intro x hx
            simp only [List.mem_cons] at hx
            rcases hx with rfl | hxs
            · exact ht_noff
            · exact hstack x hxs) h
      | false =>
          simp only [hopen, Bool.false_eq_true, ↓reduceIte] at h
          cases hf : findPairOpener stack (lowerBytes t.tag) (tagIsRawCase t.tag) with
          | none =>
              simp only [hf] at h
              exact ih stack hrest hstack h
          | some p =>
              obtain ⟨pre, post, hstk, -, -⟩ := lst_findPairOpener_eq_some_iff.mp hf
              obtain ⟨opener, isRaw⟩ := p
              have hp_mem : opener ∈ stack := by rw [hstk]; simp
              have hop_noff := hstack opener hp_mem
              simp only [hf] at h
              cases isRaw with
              | true =>
                  dsimp only at h
                  exact ih stack hrest hstack h
              | false =>
                  dsimp only at h
                  cases hlast : stack.getLast? with
                  | none =>
                      simp only [hlast, Option.some.injEq, Prod.mk.injEq] at h
                      obtain ⟨rfl, rfl⟩ := h
                      exact ⟨hop_noff, ht_noff⟩
                  | some bottom =>
                      have hbot_mem : bottom ∈ stack := List.mem_of_getLast? hlast
                      have hbot_noff := hstack bottom hbot_mem
                      simp only [hlast] at h
                      split at h <;> simp only [Option.some.injEq, Prod.mk.injEq] at h
                      · obtain ⟨rfl, rfl⟩ := h; exact ⟨hbot_noff, ht_noff⟩
                      · obtain ⟨rfl, rfl⟩ := h; exact ⟨hop_noff, ht_noff⟩

private theorem findPair_tag_no_ff {src : List Nat} {tags : List TagMatch}
    (htags : ∀ t ∈ tags, t.tag.contains 0xFF = false)
    {op cl : TagMatch} (h : findPair src tags = some (op, cl)) :
    op.tag.contains 0xFF = false :=
  (findPair_go_tag_no_ff src tags [] htags (fun _ hx => False.elim (by cases hx)) h).1

private theorem markerPrefix_sublist_no_ff (m : Nat) :
    (litBytes (markerPrefix m ++ "_list_start")).contains 0xFF = false ∧
    (litBytes (markerPrefix m ++ "_list_end")).contains 0xFF = false ∧
    (litBytes (markerPrefix m ++ "_item_start")).contains 0xFF = false ∧
    (litBytes (markerPrefix m ++ "_item_end")).contains 0xFF = false := by
  by_cases hm : m == 42
  · simp [markerPrefix, hm]
    exact ⟨by decide, by decide, by decide, by decide⟩
  · simp [markerPrefix, hm]
    exact ⟨by decide, by decide, by decide, by decide⟩

private theorem closeListLevel_tokStep (out : List Nat) (toks : List TokenEntry)
    (stack : List ListLevel) :
    ListTokStep toks (closeListLevel out toks stack).2.1 := by
  unfold closeListLevel
  dsimp only
  cases hget : stack[stack.length - 1]? with
  | none => exact listTokStep_refl toks
  | some entry =>
      dsimp only
      let mid := if entry.tailSub then
          emitList out toks [("type".toList, textVal (litBytes "sublist_end")),
            ("level".toList, OptVal.int ((stack.length - 1 : Nat) : Int))]
        else (out, toks)
      have h1 : ListTokStep toks mid.2 := by
        dsimp only [mid]
        cases entry.tailSub with
        | true =>
            simp only [↓reduceIte]
            exact listTokStep_emitList_of out toks
              [("type".toList, textVal (litBytes "sublist_end")),
               ("level".toList, OptVal.int ((stack.length - 1 : Nat) : Int))]
              (noBytes_cons_textVal "type".toList (litBytes "sublist_end") (by decide)
                (noBytes_cons_int "level".toList _ noBytes_nil))
        | false =>
            simp only [Bool.false_eq_true, ↓reduceIte]
            exact listTokStep_refl toks
      have htail : (litBytes (if entry.tailSub then "sublist" else "item")).contains 0xFF = false := by
        cases entry.tailSub <;> decide
      have h2 := listTokStep_emitList_of mid.1 mid.2
        [("type".toList, textVal (litBytes (markerPrefix entry.typ ++ "_list_end"))),
         ("level".toList, OptVal.int ((stack.length - 1 : Nat) : Int)),
         ("in_sublist".toList, OptVal.bool entry.inSub),
         ("tail".toList, textVal (litBytes (if entry.tailSub then "sublist" else "item")))]
        (noBytes_cons_textVal "type".toList (litBytes (markerPrefix entry.typ ++ "_list_end"))
          (markerPrefix_sublist_no_ff entry.typ).2.1
          (noBytes_cons_int "level".toList _
            (noBytes_cons_bool "in_sublist".toList _
              (noBytes_cons_textVal "tail".toList (litBytes (if entry.tailSub then "sublist" else "item"))
                htail noBytes_nil))))
      exact listTokStep_trans h1 h2

private theorem openListLevels_tokStep (fuel : Nat) (out : List Nat) (toks : List TokenEntry)
    (stack : List ListLevel) (itemTyp firstNew depth : Nat) :
    ListTokStep toks (openListLevels out toks stack itemTyp firstNew depth fuel).2.1 := by
  induction fuel generalizing out toks stack with
  | zero => exact listTokStep_refl toks
  | succ f ih =>
      unfold openListLevels
      by_cases hlt : depth < stack.length
      · simp only [hlt, ↓reduceIte]
        exact listTokStep_refl toks
      · simp only [hlt, ↓reduceIte]
        let level := stack.length
        let inSub := level > firstNew
        let mid1 := if inSub then
          match stack[level - 1]? with
          | some parent =>
              let stack' := setIdx stack (level - 1) { parent with tailSub := true }
              let (out, toks) := emitList out toks
                [("type".toList, textVal (litBytes "sublist_start")),
                 ("level".toList, OptVal.int (level : Int))]
              (out, toks, stack')
          | none => (out, toks, stack)
        else (out, toks, stack)
        have hm1 : ListTokStep toks mid1.2.1 := by
          dsimp only [mid1]
          by_cases hgt : inSub
          · simp only [hgt, ↓reduceIte]
            cases hget : stack[level - 1]? with
            | none => exact listTokStep_refl toks
            | some parent =>
                exact listTokStep_emitList_of out toks
                  [("type".toList, textVal (litBytes "sublist_start")),
                   ("level".toList, OptVal.int (level : Int))]
                  (noBytes_cons_textVal "type".toList (litBytes "sublist_start") (by decide)
                    (noBytes_cons_int "level".toList _ noBytes_nil))
          · simp only [hgt, ↓reduceIte]
            exact listTokStep_refl toks
        let opts2 : OptMap :=
          [("type".toList, textVal (litBytes (markerPrefix itemTyp ++ "_list_start"))),
           ("level".toList, OptVal.int (level : Int)),
           ("in_sublist".toList, OptVal.bool inSub)]
        have hm2 := listTokStep_emitList_of mid1.1 mid1.2.1 opts2
          (noBytes_cons_textVal "type".toList (litBytes (markerPrefix itemTyp ++ "_list_start"))
            (markerPrefix_sublist_no_ff itemTyp).1
            (noBytes_cons_int "level".toList _
              (noBytes_cons_bool "in_sublist".toList _ noBytes_nil)))
        dsimp only [mid1] at hm1 hm2
        exact listTokStep_trans (listTokStep_trans hm1 hm2)
          (ih _ (emitList mid1.1 mid1.2.1 opts2).2
            (mid1.2.2 ++ [{ typ := itemTyp, inSub := inSub, tailSub := false }]))

private theorem unwindListLevels_tokStep (fuel : Nat) (out : List Nat) (toks : List TokenEntry)
    (stack : List ListLevel) (counts : List (Option Nat)) (depth : Nat) :
    ListTokStep toks (unwindListLevels out toks stack counts depth fuel).2.1 := by
  induction fuel generalizing out toks stack counts with
  | zero => exact listTokStep_refl toks
  | succ f ih =>
      unfold unwindListLevels
      by_cases hgt : stack.length > depth + 1
      · simp only [hgt, ↓reduceIte]
        exact listTokStep_trans (closeListLevel_tokStep out toks stack) (ih _ _ _ _)
      · simp only [hgt, ↓reduceIte]
        exact listTokStep_refl toks

private theorem closeAll_tokStep (fuel : Nat) (out : List Nat) (toks : List TokenEntry)
    (stack : List ListLevel) :
    ListTokStep toks (nativeProcess.closeAll (out, toks, stack) fuel).2.1 := by
  induction fuel generalizing out toks stack with
  | zero => exact listTokStep_refl toks
  | succ f ih =>
      unfold nativeProcess.closeAll
      by_cases hemp : stack.isEmpty
      · simp only [hemp, ↓reduceIte]
        exact listTokStep_refl toks
      · simp only [hemp, Bool.false_eq_true, ↓reduceIte]
        exact listTokStep_trans (closeListLevel_tokStep out toks stack) (ih _ _ _)

private theorem nativeProcess_fold_tokStep (items : List RawItem)
    (out : List Nat) (toks : List TokenEntry) (stack : List ListLevel) (counts : List (Option Nat)) :
    let step := fun (st : List Nat × List TokenEntry × List ListLevel × List (Option Nat)) (it : RawItem) =>
      let (out, toks, stack, counts) := st
      let firstNew := stack.length
      let (out, toks, stack) := openListLevels out toks stack it.typ firstNew it.depth (it.depth + 2)
      let (out, toks, stack, counts) := unwindListLevels out toks stack counts it.depth (stack.length + 1)
      let counts := if counts.length ≤ it.depth then counts ++ List.replicate (it.depth + 1 - counts.length) none else counts
      let c := match counts[it.depth]? with | some (some n) => n + 1 | _ => 0
      let counts := setIdx counts it.depth (some c)
      let (out, toks) := emitList out toks
        [("type".toList, textVal (litBytes (markerPrefix it.typ ++ "_item_start"))),
         ("level".toList, OptVal.int (it.depth : Int)),
         ("count".toList, OptVal.int (c : Int)),
         ("first".toList, OptVal.bool (c == 0))]
      let out := out ++ it.body
      let (out, toks) := emitList out toks
        [("type".toList, textVal (litBytes (markerPrefix it.typ ++ "_item_end"))),
         ("level".toList, OptVal.int (it.depth : Int)),
         ("count".toList, OptVal.int (c : Int))]
      (out, toks, stack, counts)
    ListTokStep toks (items.foldl step (out, toks, stack, counts)).2.1 := by
  induction items generalizing out toks stack counts with
  | nil => exact listTokStep_refl toks
  | cons it rest ih =>
      simp only [List.foldl_cons]
      let st1 := openListLevels out toks stack it.typ stack.length it.depth (it.depth + 2)
      let st2 := unwindListLevels st1.1 st1.2.1 st1.2.2 counts it.depth (st1.2.2.length + 1)
      let counts1 := if st2.2.2.2.length ≤ it.depth then
        st2.2.2.2 ++ List.replicate (it.depth + 1 - st2.2.2.2.length) none else st2.2.2.2
      let c := match counts1[it.depth]? with | some (some n) => n + 1 | _ => 0
      let h1 := openListLevels_tokStep (it.depth + 2) out toks stack it.typ stack.length it.depth
      let h2 := unwindListLevels_tokStep (st1.2.2.length + 1) st1.1 st1.2.1 st1.2.2 counts it.depth
      let h3 := listTokStep_emitList_of st2.1 st2.2.1
        [("type".toList, textVal (litBytes (markerPrefix it.typ ++ "_item_start"))),
         ("level".toList, OptVal.int (it.depth : Int)),
         ("count".toList, OptVal.int (c : Int)),
         ("first".toList, OptVal.bool (c == 0))]
        (noBytes_cons_textVal "type".toList (litBytes (markerPrefix it.typ ++ "_item_start"))
          (markerPrefix_sublist_no_ff it.typ).2.2.1
          (noBytes_cons_int "level".toList _
            (noBytes_cons_int "count".toList _
              (noBytes_cons_bool "first".toList _ noBytes_nil))))
      let st3 := emitList st2.1 st2.2.1
        [("type".toList, textVal (litBytes (markerPrefix it.typ ++ "_item_start"))),
         ("level".toList, OptVal.int (it.depth : Int)),
         ("count".toList, OptVal.int (c : Int)),
         ("first".toList, OptVal.bool (c == 0))]
      let h4 := listTokStep_emitList_of (st3.1 ++ it.body) st3.2
        [("type".toList, textVal (litBytes (markerPrefix it.typ ++ "_item_end"))),
         ("level".toList, OptVal.int (it.depth : Int)),
         ("count".toList, OptVal.int (c : Int))]
        (noBytes_cons_textVal "type".toList (litBytes (markerPrefix it.typ ++ "_item_end"))
          (markerPrefix_sublist_no_ff it.typ).2.2.2
          (noBytes_cons_int "level".toList _
            (noBytes_cons_int "count".toList _ noBytes_nil)))
      exact listTokStep_trans (listTokStep_trans (listTokStep_trans h1 h2) (listTokStep_trans h3 h4))
        (ih _ _ _ _)

theorem nativeProcess_tokStep (run : List Nat) (toks : List TokenEntry) :
    ListTokStep toks (nativeProcess run toks).2 := by
  unfold nativeProcess
  cases h : (filterNativeItems (collectRawItems run)).isEmpty with
  | true => simp [h]; exact listTokStep_refl toks
  | false =>
      simp only [h, Bool.false_eq_true, ↓reduceIte]
      exact listTokStep_trans (nativeProcess_fold_tokStep _ [] toks [] []) (closeAll_tokStep _ _ _ _)

private theorem nativeScan_tokStep (fuel : Nat) (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool) :
    ListTokStep toks (nativeScan src toks atStart fuel).2 := by
  induction fuel generalizing src toks atStart with
  | zero => exact listTokStep_refl toks
  | succ f ih =>
      unfold nativeScan
      cases src with
      | nil => exact listTokStep_refl toks
      | cons b rest =>
          dsimp only
          cases hm : (if atStart then nativeRunAt (b :: rest) else none) with
          | none => simp only [hm]; exact ih rest toks (b == 10)
          | some p =>
              simp only [hm]
              exact listTokStep_trans (nativeProcess_tokStep p.1 toks) (ih p.2 _ true)

theorem listNative_tokStep (src : List Nat) (toks : List TokenEntry) :
    ListTokStep toks (listNative src toks).2 :=
  nativeScan_tokStep (src.length + 1) src toks true

private theorem formatItem_attached_tokStep (attached : List (List Nat × List Nat × Nat))
    (bd : List Nat) (tk : List TokenEntry) :
    ListTokStep tk (attached.foldl (fun (st : List Nat × List TokenEntry) e =>
      let tk := setTrail st.2 e.2.2 [10]
      let (rawPh, tk) := addTok "List" [("type".toList, textVal (litBytes "explicit_raw_nl"))] tk
      (st.1 ++ rawPh ++ e.2.1, tk)) (bd, tk)).2 := by
  induction attached generalizing bd tk with
  | nil => exact listTokStep_refl tk
  | cons e rest ih =>
      simp only [List.foldl_cons]
      have h1 := listTokStep_setTrail tk e.2.2 [10] (by decide)
      have h2 := listTokStep_addList
        [("type".toList, textVal (litBytes "explicit_raw_nl"))]
        (setTrail tk e.2.2 [10])
        (noBytes_cons_textVal "type".toList (litBytes "explicit_raw_nl") (by decide) noBytes_nil)
      exact listTokStep_trans (listTokStep_trans h1 h2) (ih _ _)

private theorem formatItem_shaped_tokStep (b1 : List Nat)
    (attached : List (List Nat × List Nat × Nat))
    (nmap natmap : List (List Nat × List Nat × Nat))
    (toks : List TokenEntry) :
    let shaped : Option (List Nat × List TokenEntry × List Nat × List Nat) :=
      if !b1.isEmpty && b1.all isWsByte && attached.isEmpty then
        let (brPh, toks) := addTok "List" [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
        some (brPh, toks, [], [])
      else match wholeMask b1 "NATLIST_" with
      | some ph => match natmap.find? (fun e => e.1 == ph) with | some e => some (e.2.1, toks, [10], [10]) | none => none
      | none => match lastMaskWithWsTail b1 "NATLIST_" with
        | some (_, ph) => match natmap.find? (fun e => e.1 == ph) with
          | some e =>
              let pos := (findFrom ph b1 0).getD 0
              let pfx := trimBytes (b1.take pos)
              let (rawPh, toks) := addTok "List" [("type".toList, textVal (litBytes "explicit_raw_nl"))] toks
              some (pfx ++ rawPh ++ e.2.1, toks, [], [10])
          | none => none
        | none =>
            let b4 : Option (List Nat × List TokenEntry × List Nat × List Nat) :=
              let (b2, dropped) :=
                if !b1.isEmpty && b1.getLast? == some 10 then
                  ((b1.dropLast).reverse |>.dropWhile (fun x => x == 32 || x == 9) |>.reverse, true)
                else (b1, false)
              if dropped && b2.isEmpty && attached.isEmpty then none
              else
                let (b2, toks) :=
                  if dropped then
                    let (brPh, toks) := addTok "List" [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
                    (b2 ++ brPh, toks)
                  else (b2, toks)
                some (restoreMasked b2 nmap natmap, toks, [], [])
            match lastMaskWithWsTail b1 "EXPLIST_" with
            | some (pos, ph) =>
                if pos ≥ 1 && b1[pos - 1]? == some 10 then
                  match nmap.find? (fun e => e.1 == ph) with
                  | some e =>
                      let toks := setTrail toks e.2.2 [10]
                      let (nlPh, toks) := addTok "Newline" [] toks
                      some (b1.take (pos - 1) ++ nlPh ++ e.2.1, toks, [], [])
                  | none => none
                else b4
            | none => b4
    ∀ bd tk la lb, shaped = some (bd, tk, la, lb) →
      ListTokStep toks tk ∧ la.contains 0xFF = false ∧ lb.contains 0xFF = false := by
  intro shaped bd tk la lb h
  have hb4 : ∀ b2 (dropped : Bool),
      (if dropped && b2.isEmpty && attached.isEmpty then none
       else
         let (b2', tk') :=
           if dropped then
             let (brPh, tk') := addTok "List"
               [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
             (b2 ++ brPh, tk')
           else (b2, toks)
         some (restoreMasked b2' nmap natmap, tk', ([] : List Nat), ([] : List Nat))) =
          some (bd, tk, la, lb) →
      ListTokStep toks tk ∧ la.contains 0xFF = false ∧ lb.contains 0xFF = false := by
    intro b2 dropped hb
    cases hdrop_empty : (dropped && b2.isEmpty && attached.isEmpty) with
    | true => simp [hdrop_empty] at hb
    | false =>
        simp only [hdrop_empty, Bool.false_eq_true, ↓reduceIte] at hb
        cases dropped with
        | false =>
            simp only [Bool.false_eq_true, ↓reduceIte, Option.some.injEq, Prod.mk.injEq] at hb
            obtain ⟨_, rfl, rfl, rfl⟩ := hb
            exact ⟨listTokStep_refl toks, rfl, rfl⟩
        | true =>
            simp only [↓reduceIte, Option.some.injEq, Prod.mk.injEq] at hb
            obtain ⟨_, rfl, rfl, rfl⟩ := hb
            exact ⟨listTokStep_addTok
              (noBytes_cons_textVal "type".toList (litBytes "explicit_br_no_nl") (by decide) noBytes_nil) toks,
              rfl, rfl⟩
  dsimp only [shaped] at h
  by_cases hc1 : !b1.isEmpty && b1.all isWsByte && attached.isEmpty
  · simp only [hc1, ↓reduceIte, Option.some.injEq, Prod.mk.injEq] at h
    obtain ⟨_, rfl, rfl, rfl⟩ := h
    exact ⟨listTokStep_addTok
      (noBytes_cons_textVal "type".toList (litBytes "explicit_br_no_nl") (by decide) noBytes_nil) toks,
      rfl, rfl⟩
  · simp only [hc1, Bool.false_eq_true, ↓reduceIte] at h
    cases hw : wholeMask b1 "NATLIST_" with
    | some ph =>
        simp only [hw] at h
        cases hf : natmap.find? (fun e => e.1 == ph) with
        | none => simp [hf] at h
        | some e =>
            simp only [hf, Option.some.injEq, Prod.mk.injEq] at h
            obtain ⟨_, rfl, rfl, rfl⟩ := h
            exact ⟨listTokStep_refl toks, rfl, rfl⟩
    | none =>
        simp only [hw] at h
        cases hl : lastMaskWithWsTail b1 "NATLIST_" with
        | some p =>
            simp only [hl] at h
            cases hf : natmap.find? (fun e => e.1 == p.2) with
            | none => simp [hf] at h
            | some e =>
                simp only [hf, Option.some.injEq, Prod.mk.injEq] at h
                obtain ⟨_, rfl, rfl, rfl⟩ := h
                exact ⟨listTokStep_addTok
                  (noBytes_cons_textVal "type".toList (litBytes "explicit_raw_nl") (by decide) noBytes_nil) toks,
                  rfl, rfl⟩
        | none =>
            simp only [hl] at h
            cases he : lastMaskWithWsTail b1 "EXPLIST_" with
            | none =>
                simp only [he] at h
                exact hb4 _ _ h
            | some q =>
                simp only [he] at h
                by_cases hpos : q.1 ≥ 1 && b1[q.1 - 1]? == some 10
                · simp only [hpos, ↓reduceIte] at h
                  cases hf : nmap.find? (fun e => e.1 == q.2) with
                  | none => simp [hf] at h
                  | some e =>
                      simp only [hf, Option.some.injEq, Prod.mk.injEq] at h
                      obtain ⟨_, rfl, rfl, rfl⟩ := h
                      exact ⟨listTokStep_trans (listTokStep_setTrail toks e.2.2 [10] (by decide))
                        (listTokStep_addTok noBytes_nil _), rfl, rfl⟩
                · simp only [hpos, Bool.false_eq_true, ↓reduceIte] at h
                  exact hb4 _ _ h

private theorem formatItem_body_tokStep (b1 : List Nat)
    (itemAttrs : List (List Nat × List Nat))
    (attached : List (List Nat × List Nat × Nat))
    (nmap natmap : List (List Nat × List Nat × Nat))
    (unclosed : Bool) (toks : List TokenEntry) :
    ListTokStep toks
      (if b1.isEmpty && attached.isEmpty then ([], toks)
       else
         let shaped : Option (List Nat × List TokenEntry × List Nat × List Nat) :=
           if !b1.isEmpty && b1.all isWsByte && attached.isEmpty then
             let (brPh, toks) := addTok "List"
               [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
             some (brPh, toks, [], [])
           else match wholeMask b1 "NATLIST_" with
           | some ph =>
               match natmap.find? (fun e => e.1 == ph) with
               | some e => some (e.2.1, toks, [10], [10])
               | none => none
           | none =>
               match lastMaskWithWsTail b1 "NATLIST_" with
               | some (_, ph) =>
                   match natmap.find? (fun e => e.1 == ph) with
                   | some e =>
                       let pos := (findFrom ph b1 0).getD 0
                       let pfx := trimBytes (b1.take pos)
                       let (rawPh, toks) := addTok "List"
                         [("type".toList, textVal (litBytes "explicit_raw_nl"))] toks
                       some (pfx ++ rawPh ++ e.2.1, toks, [], [10])
                   | none => none
               | none =>
                   let b4 : Option (List Nat × List TokenEntry × List Nat × List Nat) :=
                     let (b2, dropped) :=
                       if !b1.isEmpty && b1.getLast? == some 10 then
                         ((b1.dropLast).reverse |>.dropWhile (fun x => x == 32 || x == 9) |>.reverse, true)
                       else (b1, false)
                     if dropped && b2.isEmpty && attached.isEmpty then none
                     else
                       let (b2, toks) :=
                         if dropped then
                           let (brPh, toks) := addTok "List"
                             [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
                           (b2 ++ brPh, toks)
                         else (b2, toks)
                       some (restoreMasked b2 nmap natmap, toks, [], [])
                   match lastMaskWithWsTail b1 "EXPLIST_" with
                   | some (pos, ph) =>
                       if pos ≥ 1 && b1[pos - 1]? == some 10 then
                         match nmap.find? (fun e => e.1 == ph) with
                         | some e =>
                             let toks := setTrail toks e.2.2 [10]
                             let (nlPh, toks) := addTok "Newline" [] toks
                             some (b1.take (pos - 1) ++ nlPh ++ e.2.1, toks, [], [])
                         | none => none
                       else b4
                   | none => b4
         match shaped with
         | none => ([], toks)
         | some (body, toks, leadAfter, leadBefore) =>
             let (body, toks) := attached.foldl
               (fun (st : List Nat × List TokenEntry) e =>
                 let (bd, tk) := st
                 let tk := setTrail tk e.2.2 [10]
                 let (rawPh, tk) := addTok "List"
                   [("type".toList, textVal (litBytes "explicit_raw_nl"))] tk
                 (bd ++ rawPh ++ e.2.1, tk)) (body, toks)
             let (sPh, toks) := addTok "List"
               [("type".toList, textVal (litBytes "explicit_item_start")),
                ("attrs".toList, OptVal.map (attrsToOpts itemAttrs)),
                ("lead".toList, textVal leadAfter)] toks
             if unclosed then (sPh ++ body, toks)
             else
               let (ePh, toks) := addTok "List"
                 [("type".toList, textVal (litBytes "explicit_item_end")),
                  ("lead".toList, textVal leadBefore)] toks
               (sPh ++ body ++ ePh, toks)).2 := by
  apply listTokStep_if_pair
  · intro _; exact listTokStep_refl toks
  · intro _
    dsimp only
    cases hs : (if !b1.isEmpty && b1.all isWsByte && attached.isEmpty then
        let (brPh, toks) := addTok "List" [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
        some (brPh, toks, [], [])
      else match wholeMask b1 "NATLIST_" with
      | some ph => match natmap.find? (fun e => e.1 == ph) with | some e => some (e.2.1, toks, [10], [10]) | none => none
      | none => match lastMaskWithWsTail b1 "NATLIST_" with
        | some (_, ph) => match natmap.find? (fun e => e.1 == ph) with
          | some e =>
              let pos := (findFrom ph b1 0).getD 0
              let pfx := trimBytes (b1.take pos)
              let (rawPh, toks) := addTok "List" [("type".toList, textVal (litBytes "explicit_raw_nl"))] toks
              some (pfx ++ rawPh ++ e.2.1, toks, [], [10])
          | none => none
        | none =>
            let b4 : Option (List Nat × List TokenEntry × List Nat × List Nat) :=
              let (b2, dropped) :=
                if !b1.isEmpty && b1.getLast? == some 10 then
                  ((b1.dropLast).reverse |>.dropWhile (fun x => x == 32 || x == 9) |>.reverse, true)
                else (b1, false)
              if dropped && b2.isEmpty && attached.isEmpty then none
              else
                let (b2, toks) :=
                  if dropped then
                    let (brPh, toks) := addTok "List" [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
                    (b2 ++ brPh, toks)
                  else (b2, toks)
                some (restoreMasked b2 nmap natmap, toks, [], [])
            match lastMaskWithWsTail b1 "EXPLIST_" with
            | some (pos, ph) =>
                if pos ≥ 1 && b1[pos - 1]? == some 10 then
                  match nmap.find? (fun e => e.1 == ph) with
                  | some e =>
                      let toks := setTrail toks e.2.2 [10]
                      let (nlPh, toks) := addTok "Newline" [] toks
                      some (b1.take (pos - 1) ++ nlPh ++ e.2.1, toks, [], [])
                  | none => none
                else b4
            | none => b4) with
    | none => exact listTokStep_refl toks
    | some p =>
        obtain ⟨bd, tk0, la, lb⟩ := p
        obtain ⟨htk0, hla, hlb⟩ :=
          formatItem_shaped_tokStep b1 attached nmap natmap toks bd tk0 la lb hs
        simp only [hs]
        have hatt := formatItem_attached_tokStep attached bd tk0
        let attOut := attached.foldl (fun (st : List Nat × List TokenEntry) e =>
          let tk := setTrail st.2 e.2.2 [10]
          let (rawPh, tk) := addTok "List" [("type".toList, textVal (litBytes "explicit_raw_nl"))] tk
          (st.1 ++ rawPh ++ e.2.1, tk)) (bd, tk0)
        have h1 := listTokStep_trans htk0 hatt
        have hstart := listTokStep_addList
          [("type".toList, textVal (litBytes "explicit_item_start")),
           ("attrs".toList, OptVal.map (attrsToOpts itemAttrs)),
           ("lead".toList, textVal la)] attOut.2
          (noBytes_cons_textVal "type".toList (litBytes "explicit_item_start") (by decide)
            (noBytes_cons_map "attrs".toList _
              (noBytes_cons_textVal "lead".toList la hla noBytes_nil)))
        have h2 := listTokStep_trans h1 hstart
        cases unclosed
        · simp only [Bool.false_eq_true, ↓reduceIte]
          have hend := listTokStep_addList
            [("type".toList, textVal (litBytes "explicit_item_end")),
             ("lead".toList, textVal lb)]
            (addTok "List"
              [("type".toList, textVal (litBytes "explicit_item_start")),
               ("attrs".toList, OptVal.map (attrsToOpts itemAttrs)),
               ("lead".toList, textVal la)] attOut.2).2
            (noBytes_cons_textVal "type".toList (litBytes "explicit_item_end") (by decide)
              (noBytes_cons_textVal "lead".toList lb hlb noBytes_nil))
          exact listTokStep_trans h2 hend
        · simp only [↓reduceIte]
          exact h2

private theorem formatItem_tokStep (rawBody : List Nat)
    (itemAttrs : List (List Nat × List Nat))
    (attached : List (List Nat × List Nat × Nat))
    (nmap natmap : List (List Nat × List Nat × Nat))
    (unclosed : Bool) (toks : List TokenEntry) :
    ListTokStep toks (formatItem rawBody itemAttrs attached nmap natmap unclosed toks).2 := by
  unfold formatItem
  dsimp only
  exact formatItem_body_tokStep _ itemAttrs attached nmap natmap unclosed toks

private theorem wrapListTokens_tokStep {tag : List Nat} (htag : tag.contains 0xFF = false)
    (scored isSynth : Bool) (attrs : List (List Nat × List Nat))
    (inner trail : List Nat) (toks : List TokenEntry) (blocks : List ExplBlock) :
    ListTokStep toks (wrapListTokens tag scored isSynth attrs inner trail toks blocks).2.1 := by
  unfold wrapListTokens
  dsimp only
  have h1 := listTokStep_addList
    [("type".toList, textVal (litBytes "explicit_list_start")),
     ("list_type".toList, textVal tag),
     ("attrs".toList, OptVal.map (attrsToOpts attrs)),
     ("scored".toList, OptVal.bool scored)] toks
    (noBytes_cons_textVal "type".toList (litBytes "explicit_list_start") (by decide)
      (noBytes_cons_textVal "list_type".toList tag htag
        (noBytes_cons_map "attrs".toList _
          (noBytes_cons_bool "scored".toList _ noBytes_nil))))
  let tk1 := (addTok "List"
    [("type".toList, textVal (litBytes "explicit_list_start")),
     ("list_type".toList, textVal tag),
     ("attrs".toList, OptVal.map (attrsToOpts attrs)),
     ("scored".toList, OptVal.bool scored)] toks).2
  have h2 := listTokStep_addList
    [("type".toList, textVal (litBytes "explicit_list_end")),
     ("list_type".toList, textVal tag),
     ("trail".toList, textVal []),
     ("scored".toList, OptVal.bool scored)] tk1
    (noBytes_cons_textVal "type".toList (litBytes "explicit_list_end") (by decide)
      (noBytes_cons_textVal "list_type".toList tag htag
        (noBytes_cons_textVal "trail".toList ([] : List Nat) (by decide)
          (noBytes_cons_bool "scored".toList _ noBytes_nil))))
  exact listTokStep_trans h1 h2

private theorem wrapListTokensUnclosed_tokStep {tag : List Nat} (htag : tag.contains 0xFF = false)
    (scored : Bool) (attrs : List (List Nat × List Nat))
    (inner : List Nat) (toks : List TokenEntry) :
    ListTokStep toks (wrapListTokensUnclosed tag scored attrs inner toks).2 := by
  unfold wrapListTokensUnclosed
  exact listTokStep_addList
    [("type".toList, textVal (litBytes "explicit_list_start")),
     ("list_type".toList, textVal tag),
     ("attrs".toList, OptVal.map (attrsToOpts attrs)),
     ("scored".toList, OptVal.bool scored)] toks
    (noBytes_cons_textVal "type".toList (litBytes "explicit_list_start") (by decide)
      (noBytes_cons_textVal "list_type".toList tag htag
        (noBytes_cons_map "attrs".toList _
          (noBytes_cons_bool "scored".toList _ noBytes_nil))))

private theorem dissolveBlock_tokStep (toks : List TokenEntry) (blocks : List ExplBlock) :
    ListTokStep toks (dissolveBlock toks blocks).2.1 := by
  unfold dissolveBlock
  exact listTokStep_addList
    [("type".toList, textVal (litBytes "explicit_empty"))] toks
    (noBytes_cons_textVal "type".toList (litBytes "explicit_empty") (by decide) noBytes_nil)

private theorem buildExplicit_preNested_tokStep
    (preNested : List (List Nat × List Nat × Nat)) (toks : List TokenEntry) :
    ListTokStep toks (preNested.foldl (fun (st : List Nat × List TokenEntry) e =>
      let tk := setTrail st.2 e.2.2 []
      let (wS, tk) := addTok "List"
        [("type".toList, textVal (litBytes "explicit_inline_wrapper_start")),
         ("newline".toList, OptVal.bool false)] tk
      let (wE, tk) := addTok "List"
        [("type".toList, textVal (litBytes "explicit_inline_wrapper_end")),
         ("newline".toList, OptVal.bool false),
         ("lead_nl".toList, OptVal.bool false)] tk
      (st.1 ++ wS ++ e.2.1 ++ wE, tk)) ([], toks)).2 := by
  have hgen : ∀ o tk, ListTokStep tk (preNested.foldl (fun (st : List Nat × List TokenEntry) e =>
      let tk := setTrail st.2 e.2.2 []
      let (wS, tk) := addTok "List"
        [("type".toList, textVal (litBytes "explicit_inline_wrapper_start")),
         ("newline".toList, OptVal.bool false)] tk
      let (wE, tk) := addTok "List"
        [("type".toList, textVal (litBytes "explicit_inline_wrapper_end")),
         ("newline".toList, OptVal.bool false),
         ("lead_nl".toList, OptVal.bool false)] tk
      (st.1 ++ wS ++ e.2.1 ++ wE, tk)) (o, tk)).2 := by
    intro o tk
    induction preNested generalizing o tk with
    | nil => exact listTokStep_refl tk
    | cons e rest ih =>
        simp only [List.foldl_cons]
        have h1 := listTokStep_setTrail tk e.2.2 [] (by decide)
        let tk0 := setTrail tk e.2.2 []
        have h2 := listTokStep_addList
          [("type".toList, textVal (litBytes "explicit_inline_wrapper_start")),
           ("newline".toList, OptVal.bool false)] tk0
          (noBytes_cons_textVal "type".toList (litBytes "explicit_inline_wrapper_start") (by decide)
            (noBytes_cons_bool "newline".toList _ noBytes_nil))
        let tk1 := (addTok "List" [("type".toList, textVal (litBytes "explicit_inline_wrapper_start")),
          ("newline".toList, OptVal.bool false)] tk0).2
        have h3 := listTokStep_addList
          [("type".toList, textVal (litBytes "explicit_inline_wrapper_end")),
           ("newline".toList, OptVal.bool false),
           ("lead_nl".toList, OptVal.bool false)] tk1
          (noBytes_cons_textVal "type".toList (litBytes "explicit_inline_wrapper_end") (by decide)
            (noBytes_cons_bool "newline".toList _
              (noBytes_cons_bool "lead_nl".toList _ noBytes_nil)))
        exact listTokStep_trans (listTokStep_trans h1 (listTokStep_trans h2 h3)) (ih _ _)
  exact hgen [] toks

private theorem buildExplicit_nestedHere_tokStep
    (nestedHere : List (List Nat × List Nat × Nat)) (tk : List TokenEntry) (sib : List Nat) :
    ListTokStep tk (nestedHere.foldl
      (fun (st2 : List TokenEntry × List Nat) en =>
        (setTrail st2.1 en.2.2 [10], st2.2 ++ en.2.1)) (tk, sib)).1 := by
  induction nestedHere generalizing tk sib with
  | nil => exact listTokStep_refl tk
  | cons en rest ih =>
      simp only [List.foldl_cons]
      exact listTokStep_trans (listTokStep_setTrail tk en.2.2 [10] (by decide)) (ih _ _)

private theorem buildExplicit_onlyLists_tokStep {tag : List Nat} (htag : tag.contains 0xFF = false)
    (scored isSynth : Bool)
    (attrsVal : List (List Nat × List Nat)) (trailVal : List Nat)
    (phs : List (List Nat)) (nmap natmap : List (List Nat × List Nat × Nat))
    (toks0 : List TokenEntry) (blocks1 : List ExplBlock) :
    ListTokStep toks0
      (let multi := phs.length > 1
       let (inner, toks1, _) := phs.foldl
         (fun (st : List Nat × List TokenEntry × Nat) ph =>
           let (o, tk, idx) := st
           match nmap.find? (fun (e : List Nat × List Nat × Nat) => e.1 == ph) with
           | some e =>
               let tk := setTrail tk e.2.2 (if multi then [10] else [])
               (o ++ e.2.1, tk, idx + 1)
           | none =>
               match natmap.find? (fun (e : List Nat × List Nat × Nat) => e.1 == ph) with
               | some e =>
                   let (o, tk) :=
                     if multi && idx > 0 then
                       let (rawPh, tk) := addTok "List"
                         [("type".toList, textVal (litBytes "explicit_raw_nl"))] tk
                       (o ++ rawPh, tk)
                     else (o, tk)
                   (o ++ e.2.1, tk, idx + 1)
               | none => (o, tk, idx + 1)) ([], toks0, 0)
       let (wS, toks2) := addTok "List"
         [("type".toList, textVal (litBytes "explicit_inline_wrapper_start")),
          ("newline".toList, OptVal.bool multi)] toks1
       let (wE, toks3) := addTok "List"
         [("type".toList, textVal (litBytes "explicit_inline_wrapper_end")),
          ("newline".toList, OptVal.bool multi),
          ("lead_nl".toList, OptVal.bool multi)] toks2
       wrapListTokens tag scored isSynth attrsVal (wS ++ inner ++ wE)
         trailVal toks3 blocks1).2.1 := by
  have hfold : ∀ (qs : List (List Nat)) (inner0 : List Nat) (tk : List TokenEntry) (idx : Nat)
      (multi : Prop) [Decidable multi],
      ListTokStep tk (qs.foldl
        (fun (st : List Nat × List TokenEntry × Nat) ph =>
          let (o, tk, idx) := st
          match nmap.find? (fun e => e.1 == ph) with
          | some e => (o ++ e.2.1, setTrail tk e.2.2 (if multi then [10] else []), idx + 1)
          | none =>
              match natmap.find? (fun e => e.1 == ph) with
              | some e =>
                  let (o, tk) := if multi && idx > 0 then
                    let (rPh, tk) := addTok "List"
                      [("type".toList, textVal (litBytes "explicit_raw_nl"))] tk
                    (o ++ rPh, tk)
                  else (o, tk)
                  (o ++ e.2.1, tk, idx + 1)
              | none => (o, tk, idx + 1))
        (inner0, tk, idx)).2.1 := by
    intro qs
    induction qs with
    | nil => intro inner0 tk idx multi _; exact listTokStep_refl tk
    | cons ph rest ih =>
        intro inner0 tk idx multi _
        simp only [List.foldl_cons]
        cases hf1 : nmap.find? (fun e => e.1 == ph) with
        | some e =>
            have hnoff : (if multi then [10] else []).contains 0xFF = false := by
              by_cases hm : multi <;> simp [hm]
            exact listTokStep_trans
              (listTokStep_setTrail tk e.2.2 (if multi then [10] else []) hnoff)
              (ih _ _ _ multi)
        | none =>
            cases hf2 : natmap.find? (fun e => e.1 == ph) with
            | none => exact ih _ _ _ multi
            | some e =>
                by_cases hidx : multi && idx > 0
                · simp only [hidx, ↓reduceIte]
                  exact listTokStep_trans
                    (listTokStep_addList
                      [("type".toList, textVal (litBytes "explicit_raw_nl"))] tk
                      (noBytes_cons_textVal "type".toList (litBytes "explicit_raw_nl") (by decide) noBytes_nil))
                    (ih _ _ _ multi)
                · simp only [hidx, Bool.false_eq_true, ↓reduceIte]
                  exact ih _ _ _ multi
  let multi : Prop := phs.length > 1
  let foldRes := phs.foldl
    (fun (st : List Nat × List TokenEntry × Nat) ph =>
      let (o, tk, idx) := st
      match nmap.find? (fun e => e.1 == ph) with
      | some e => (o ++ e.2.1, setTrail tk e.2.2 (if multi then [10] else []), idx + 1)
      | none =>
          match natmap.find? (fun e => e.1 == ph) with
          | some e =>
              let (o, tk) := if multi && idx > 0 then
                let (rPh, tk) := addTok "List"
                  [("type".toList, textVal (litBytes "explicit_raw_nl"))] tk
                (o ++ rPh, tk)
              else (o, tk)
              (o ++ e.2.1, tk, idx + 1)
          | none => (o, tk, idx + 1)) ([], toks0, 0)
  have h1 := listTokStep_addList
    [("type".toList, textVal (litBytes "explicit_inline_wrapper_start")),
     ("newline".toList, OptVal.bool multi)] foldRes.2.1
    (noBytes_cons_textVal "type".toList (litBytes "explicit_inline_wrapper_start") (by decide)
      (noBytes_cons_bool "newline".toList _ noBytes_nil))
  let w1 := addTok "List"
    [("type".toList, textVal (litBytes "explicit_inline_wrapper_start")),
     ("newline".toList, OptVal.bool multi)] foldRes.2.1
  have h2 := listTokStep_addList
    [("type".toList, textVal (litBytes "explicit_inline_wrapper_end")),
     ("newline".toList, OptVal.bool multi),
     ("lead_nl".toList, OptVal.bool multi)] w1.2
    (noBytes_cons_textVal "type".toList (litBytes "explicit_inline_wrapper_end") (by decide)
      (noBytes_cons_bool "newline".toList _
        (noBytes_cons_bool "lead_nl".toList _ noBytes_nil)))
  let w2 := addTok "List"
    [("type".toList, textVal (litBytes "explicit_inline_wrapper_end")),
     ("newline".toList, OptVal.bool multi),
     ("lead_nl".toList, OptVal.bool multi)] w1.2
  have hwrap := wrapListTokens_tokStep htag scored isSynth attrsVal
    (w1.1 ++ foldRes.1 ++ w2.1) trailVal w2.2 blocks1
  exact listTokStep_trans
    (listTokStep_trans (hfold phs [] toks0 0 multi) (listTokStep_trans h1 h2))
    hwrap

private theorem buildExplicit_tokStep {tag : List Nat} (htag : tag.contains 0xFF = false)
    (scored : Bool) (attrStr body0 : List Nat) (residual unclosed isSynth : Bool)
    (toks : List TokenEntry) (blocks : List ExplBlock) :
    ListTokStep toks (buildExplicit tag scored attrStr body0 residual unclosed isSynth toks blocks).2.1 := by
  unfold buildExplicit
  dsimp only
  cases hlis : !(scanLi (dissolveNestedUpper (maskNative (maskNested body0 blocks).1 toks).1)).isEmpty with
  | true =>
      simp only [↓reduceIte]
      have hpre := buildExplicit_preNested_tokStep
        (let (body1, nmap, _) := maskNested body0 blocks
         let (bodyMasked, _) := maskNative body1 toks
         let body := dissolveNestedUpper bodyMasked
         let lis := scanLi body
         let (segsRev, _) := lis.foldl (fun (st : List (List Nat) × Nat) e =>
           ((body.drop st.2).take (e.1 - st.2) :: st.1, e.1 + e.2.2.2)) ([], 0)
         (harvestMask (segsRev.reverse.head?.getD []) "EXPLIST_").map (·.2) |>.filterMap
           (fun ph => nmap.find? (fun e => e.1 == ph))) toks
      have hitems : ∀ (o : List Nat) (tk : List TokenEntry) (surv : Nat) (sib : List Nat) (idx : Nat)
          (lis' : List (Nat × List Nat × List Nat × Nat))
          (attachedOf : Nat → List (List Nat × List Nat × Nat))
          (nmap natmap : List (List Nat × List Nat × Nat)),
          ListTokStep tk (lis'.foldl
            (fun (st : List Nat × List TokenEntry × Nat × List Nat × Nat)
                (e : Nat × List Nat × List Nat × Nat) =>
              let (o, tk, surv, sib, i) := st
              let att := attachedOf i
              let nestedHere := nmapEntries e.2.2.1 nmap ++ att
              if bodyOnlyExplOrWs e.2.2.1 && !nestedHere.isEmpty then
                let (brPh, tk) := addTok "List"
                  [("type".toList, textVal (litBytes "explicit_br_no_nl"))] tk
                let (liS, tk) := addTok "List"
                  [("type".toList, textVal (litBytes "explicit_item_start")),
                   ("attrs".toList, OptVal.map (attrsToOpts (buildListAttrs e.2.1))),
                   ("lead".toList, textVal [])] tk
                let (liE, tk) := if unclosed then ([], tk)
                  else addTok "List"
                    [("type".toList, textVal (litBytes "explicit_item_end")),
                     ("lead".toList, textVal [])] tk
                let (tk, sib) := nestedHere.foldl
                  (fun (st2 : List TokenEntry × List Nat) en =>
                    (setTrail st2.1 en.2.2 [10], st2.2 ++ en.2.1)) (tk, sib)
                (o ++ liS ++ brPh ++ liE, tk, surv + 1, sib, i + 1)
              else
                let (fmt, tk) := formatItem e.2.2.1 (buildListAttrs e.2.1) att nmap natmap unclosed tk
                (o ++ fmt, tk, surv + (if fmt.isEmpty then 0 else 1), sib, i + 1))
            (o, tk, surv, sib, idx)).2.1 := by
        intro o tk surv sib idx lis' attachedOf nmap natmap
        induction lis' generalizing o tk surv sib idx with
        | nil => exact listTokStep_refl tk
        | cons e rest ih =>
            simp only [List.foldl_cons]
            by_cases hc : bodyOnlyExplOrWs e.2.2.1 && !(nmapEntries e.2.2.1 nmap ++ attachedOf idx).isEmpty
            · simp only [hc, ↓reduceIte]
              have ha1 := listTokStep_addList
                [("type".toList, textVal (litBytes "explicit_br_no_nl"))] tk
                (noBytes_cons_textVal "type".toList (litBytes "explicit_br_no_nl") (by decide) noBytes_nil)
              let t1 := (addTok "List" [("type".toList, textVal (litBytes "explicit_br_no_nl"))] tk).2
              have ha2 := listTokStep_addList
                [("type".toList, textVal (litBytes "explicit_item_start")),
                 ("attrs".toList, OptVal.map (attrsToOpts (buildListAttrs e.2.1))),
                 ("lead".toList, textVal [])] t1
                (noBytes_cons_textVal "type".toList (litBytes "explicit_item_start") (by decide)
                  (noBytes_cons_map "attrs".toList _
                    (noBytes_cons_textVal "lead".toList ([] : List Nat) (by decide) noBytes_nil)))
              let t2 := (addTok "List"
                [("type".toList, textVal (litBytes "explicit_item_start")),
                 ("attrs".toList, OptVal.map (attrsToOpts (buildListAttrs e.2.1))),
                 ("lead".toList, textVal [])] t1).2
              have h12 := listTokStep_trans ha1 ha2
              cases unclosed
              · simp only [Bool.false_eq_true, ↓reduceIte]
                have ha3 := listTokStep_addList
                  [("type".toList, textVal (litBytes "explicit_item_end")),
                   ("lead".toList, textVal [])] t2
                  (noBytes_cons_textVal "type".toList (litBytes "explicit_item_end") (by decide)
                    (noBytes_cons_textVal "lead".toList ([] : List Nat) (by decide) noBytes_nil))
                exact listTokStep_trans (listTokStep_trans (listTokStep_trans h12 ha3)
                  (buildExplicit_nestedHere_tokStep _ _ _)) (ih _ _ _ _ _)
              · simp only [↓reduceIte]
                exact listTokStep_trans (listTokStep_trans h12 (buildExplicit_nestedHere_tokStep _ _ _))
                  (ih _ _ _ _ _)
            · simp only [hc, Bool.false_eq_true, ↓reduceIte]
              exact listTokStep_trans (formatItem_tokStep _ _ _ _ _ _ tk) (ih _ _ _ _ _)
      let m1 := maskNested body0 blocks
      let body1 := m1.1
      let nmap := m1.2.1
      let m2 := maskNative body1 toks
      let bodyMasked := m2.1
      let natmap := m2.2
      let body := dissolveNestedUpper bodyMasked
      let lis := scanLi body
      let segSt := lis.foldl (fun (st : List (List Nat) × Nat) e =>
        ((body.drop st.2).take (e.1 - st.2) :: st.1, e.1 + e.2.2.2)) ([], 0)
      let segs := segSt.1.reverse
      let trailSeg := body.drop segSt.2
      let resolve (phs : List (List Nat)) :=
        phs.filterMap (fun ph => nmap.find? (fun e => e.1 == ph))
      let attachedOf (i : Nat) :=
        if i + 1 < lis.length then resolve ((harvestMask (segs[i + 1]?.getD []) "EXPLIST_").map (·.2))
        else resolve ((harvestMask trailSeg "EXPLIST_").map (·.2))
      let preNested := resolve ((harvestMask (segs.head?.getD []) "EXPLIST_").map (·.2))
      let preRes := preNested.foldl (fun (st : List Nat × List TokenEntry) e =>
        let tk := setTrail st.2 e.2.2 []
        let (wS, tk) := addTok "List"
          [("type".toList, textVal (litBytes "explicit_inline_wrapper_start")),
           ("newline".toList, OptVal.bool false)] tk
        let (wE, tk) := addTok "List"
          [("type".toList, textVal (litBytes "explicit_inline_wrapper_end")),
           ("newline".toList, OptVal.bool false),
           ("lead_nl".toList, OptVal.bool false)] tk
        (st.1 ++ wS ++ e.2.1 ++ wE, tk)) ([], toks)
      refine listTokStep_trans hpre (listTokStep_trans (hitems [] preRes.2 0 [] 0 lis attachedOf nmap natmap) ?_)
      dsimp only
      apply listTokStep_if_triple
      · intro _; exact dissolveBlock_tokStep _ _
      · intro _
        cases unclosed with
        | true => simp only [↓reduceIte]; exact wrapListTokensUnclosed_tokStep htag _ _ _ _
        | false =>
            simp only [Bool.false_eq_true, ↓reduceIte]
            let itemRes := lis.foldl
              (fun (st : List Nat × List TokenEntry × Nat × List Nat × Nat)
                  (e : Nat × List Nat × List Nat × Nat) =>
                let (o, tk, surv, sib, i) := st
                let att := attachedOf i
                let nestedHere := nmapEntries e.2.2.1 nmap ++ att
                if bodyOnlyExplOrWs e.2.2.1 && !nestedHere.isEmpty then
                  let (brPh, tk) := addTok "List"
                    [("type".toList, textVal (litBytes "explicit_br_no_nl"))] tk
                  let (liS, tk) := addTok "List"
                    [("type".toList, textVal (litBytes "explicit_item_start")),
                     ("attrs".toList, OptVal.map (attrsToOpts (buildListAttrs e.2.1))),
                     ("lead".toList, textVal [])] tk
                  let (liE, tk) := if false then ([], tk)
                    else addTok "List"
                      [("type".toList, textVal (litBytes "explicit_item_end")),
                       ("lead".toList, textVal [])] tk
                  let (tk, sib) := nestedHere.foldl
                    (fun (st2 : List TokenEntry × List Nat) en =>
                      (setTrail st2.1 en.2.2 [10], st2.2 ++ en.2.1)) (tk, sib)
                  (o ++ liS ++ brPh ++ liE, tk, surv + 1, sib, i + 1)
                else
                  let (fmt, tk) := formatItem e.2.2.1 (buildListAttrs e.2.1) att nmap natmap false tk
                  (o ++ fmt, tk, surv + (if fmt.isEmpty then 0 else 1), sib, i + 1))
              ([], preRes.2, 0, [], 0)
            let attrs := if tagIsRawCase tag then [] else buildListAttrs attrStr
            let trailAfterClose := if residual then litBytes "\n]" else []
            let wrapRes := wrapListTokens tag scored isSynth attrs (preRes.1 ++ itemRes.1) trailAfterClose itemRes.2.1 m1.2.2
            refine listTokStep_trans
              (wrapListTokens_tokStep htag scored isSynth attrs (preRes.1 ++ itemRes.1) trailAfterClose itemRes.2.1 m1.2.2)
              ?_
            apply listTokStep_if_triple
            · intro _; exact listTokStep_refl wrapRes.2.1
            · intro _
              have ha := listTokStep_addList
                [("type".toList, textVal (litBytes "explicit_raw_nl"))] wrapRes.2.1
                (noBytes_cons_textVal "type".toList (litBytes "explicit_raw_nl") (by decide) noBytes_nil)
              let tkAfter := (addTok "List" [("type".toList, textVal (litBytes "explicit_raw_nl"))] wrapRes.2.1).2
              exact listTokStep_trans ha
                (listTokStep_addTok (rule := "Newline") (opts := []) noBytes_nil tkAfter)
  | false =>
      simp only [Bool.false_eq_true, ↓reduceIte]
      by_cases htb : (trimBytes (dissolveNestedUpper (maskNative (maskNested body0 blocks).1 toks).1)).isEmpty
      · simp only [htb, ↓reduceIte]; exact dissolveBlock_tokStep toks _
      · simp only [htb, Bool.false_eq_true, ↓reduceIte]
        by_cases honly : onlyListsOk (trimBytes (dissolveNestedUpper (maskNative (maskNested body0 blocks).1 toks).1))
        · simp only [honly, ↓reduceIte]
          let m1 := maskNested body0 blocks
          let m2 := maskNative m1.1 toks
          let phs := allMaskPhs (trimBytes (dissolveNestedUpper m2.1))
          let attrs := if tagIsRawCase tag then [] else buildListAttrs attrStr
          let trailAfterClose := if residual then litBytes "\n]" else []
          exact buildExplicit_onlyLists_tokStep htag scored isSynth attrs trailAfterClose phs m1.2.1 m2.2 toks m1.2.2
        · simp only [honly, Bool.false_eq_true, ↓reduceIte]
          let m1 := maskNested body0 blocks
          let m2 := maskNative m1.1 toks
          let restored := restoreMasked (trimBytes (dissolveNestedUpper m2.1)) m1.2.1 m2.2
          let attrs := if tagIsRawCase tag then [] else buildListAttrs attrStr
          let trailAfterClose := if residual then litBytes "\n]" else []
          have h1 := listTokStep_addList
            [("type".toList, textVal (litBytes "explicit_none_item_start"))] toks
            (noBytes_cons_textVal "type".toList (litBytes "explicit_none_item_start") (by decide) noBytes_nil)
          let n1 := addTok "List" [("type".toList, textVal (litBytes "explicit_none_item_start"))] toks
          have h2 := listTokStep_addList
            [("type".toList, textVal (litBytes "explicit_none_item_end"))] n1.2
            (noBytes_cons_textVal "type".toList (litBytes "explicit_none_item_end") (by decide) noBytes_nil)
          let n2 := addTok "List" [("type".toList, textVal (litBytes "explicit_none_item_end"))] n1.2
          have hwrap := wrapListTokens_tokStep htag scored isSynth attrs
            (n1.1 ++ restored ++ n2.1) trailAfterClose n2.2 m1.2.2
          exact listTokStep_trans (listTokStep_trans h1 h2) hwrap

private theorem explLoop_tokStep (fuel : Nat) (src : List Nat) (toks : List TokenEntry)
    (blocks : List ExplBlock) (proseOpeners : List Nat) :
    ListTokStep toks (explLoop src toks blocks proseOpeners fuel).2.1 := by
  induction fuel generalizing src toks blocks proseOpeners with
  | zero => exact listTokStep_refl toks
  | succ f ih =>
      unfold explLoop
      dsimp only
      cases hfp : findPair src (pairTags src toks) with
      | none =>
          cases hfind : (pairTags src toks).find?
              (fun t => t.isOpen && tagIsRawCase t.tag && !(proseOpeners.contains t.start)) with
          | none => exact listTokStep_refl toks
          | some op =>
              have hop_mem : op ∈ pairTags src toks := List.mem_of_find?_eq_some hfind
              have htag := pairTags_tag_no_ff hop_mem
              by_cases hno : !(existsLitCI (litBytes "[[li") (src.drop (op.start + op.len)))
              · simp only [hno, ↓reduceIte]
                by_cases hdeg : (degradeOneBody (src.drop (op.start + op.len))).isNone
                · simp only [hdeg, ↓reduceIte]; exact ih src toks blocks (op.start :: proseOpeners)
                · simp only [hdeg, Bool.false_eq_true, ↓reduceIte]; exact ih _ toks blocks proseOpeners
              · simp only [hno, Bool.false_eq_true, ↓reduceIte]
                exact listTokStep_trans (buildExplicit_tokStep htag _ _ _ _ _ _ toks blocks) (ih _ _ _ _)
      | some p =>
          obtain ⟨op, cl⟩ := p
          have htag := findPair_tag_no_ff (fun _ ht => pairTags_tag_no_ff ht) hfp
          exact listTokStep_trans (buildExplicit_tokStep htag _ _ _ _ _ _ toks blocks) (ih _ _ _ _)

private theorem finalizeOne_step2 (toks1 : List TokenEntry)
    (src1 : List Nat) (afterEnd1 : Nat) (blk : ExplBlock) (blocks : List ExplBlock) :
    ListTokStep toks1
      (let rest := src1.drop afterEnd1
       match tableTail rest with
       | some g1len =>
           ((src1.take (afterEnd1 + g1len)) ++ [10, 10] ++ (rest.drop (g1len + 1)), toks1)
       | none =>
           let nlRun := (rest.takeWhile (· == 10)).length
           let nextIsBlock := match phAt rest nlRun with
             | some (_, len) => blocks.any (fun b => b.startPh == (rest.drop nlRun).take len)
             | none => false
           if nlRun ≥ 1 && nextIsBlock then
             ((src1.take afterEnd1) ++ (rest.drop nlRun), toks1)
           else if rest.all (· == 10) then
             if !blk.scored && !blk.isSynth then
               let (nlPh, toks') := addTok "Newline" [] toks1
               ((src1.take afterEnd1) ++ nlPh ++ rest, toks')
             else (src1, toks1)
           else if rest.take 1 == [10] &&
               (match rest[1]? with
                | some c => c != 10 && c != 255 && (rest.drop 1).take 3 != litBytes "[[/"
                | none => false) then
             ((src1.take afterEnd1) ++ (rest.drop 1), setTrail toks1 blk.endKey [10])
           else (src1, toks1)).2 := by
  dsimp only
  cases htb : tableTail (src1.drop afterEnd1) with
  | some g1len => exact listTokStep_refl toks1
  | none =>
      dsimp only
      apply listTokStep_if_pair
      · intro _; exact listTokStep_refl toks1
      · intro _
        apply listTokStep_if_pair
        · intro _
          apply listTokStep_if_pair
          · intro _; exact listTokStep_addTok noBytes_nil toks1
          · intro _; exact listTokStep_refl toks1
        · intro _
          apply listTokStep_if_pair
          · intro _; exact listTokStep_setTrail toks1 blk.endKey [10] (by decide)
          · intro _; exact listTokStep_refl toks1

private theorem finalizeOne_step1 (src : List Nat) (toks : List TokenEntry)
    (sPos afterEnd : Nat) :
    ListTokStep toks
      (if sPos ≥ 2 && src[sPos - 1]? == some 10 && src[sPos - 2]? != some 10 then
        let lineStart := ((lastIdxOfB 10 (src.take (sPos - 1))).map (· + 1)).getD 0
        let prevLine := (src.drop lineStart).take (sPos - 1 - lineStart)
        if !prevLine.isEmpty && (findFrom (litBytes "||") prevLine 0).isNone && prevLine.getLast? != some 255 then
          let (brPh, toks') := addTok "List" [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
          ((src.take (sPos - 1)) ++ brPh ++ [10, 10] ++ (src.drop sPos), toks', afterEnd + brPh.length + 1)
        else (src, toks, afterEnd)
      else (src, toks, afterEnd)).2.1 := by
  dsimp only
  split
  · split
    · exact listTokStep_addList
        [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
        (noBytes_cons_textVal "type".toList (litBytes "explicit_br_no_nl") (by decide) noBytes_nil)
    · exact listTokStep_refl toks
  · exact listTokStep_refl toks

private theorem finalizeOne_tokStep (src : List Nat) (toks : List TokenEntry)
    (blk : ExplBlock) (blocks : List ExplBlock) :
    ListTokStep toks (finalizeOne src toks blk blocks).2 := by
  unfold finalizeOne
  cases findFrom blk.startPh src 0 with
  | none => exact listTokStep_refl toks
  | some sPos =>
      dsimp only
      cases findFrom blk.endPh src (sPos + blk.startPh.length) with
      | none => exact listTokStep_refl toks
      | some ePos =>
          dsimp only
          let afterEnd0 := ePos + blk.endPh.length
          let preTrip : List Nat × List TokenEntry × Nat :=
            if sPos ≥ 2 && src[sPos - 1]? == some 10 && src[sPos - 2]? != some 10 then
              let lineStart := ((lastIdxOfB 10 (src.take (sPos - 1))).map (· + 1)).getD 0
              let prevLine := (src.drop lineStart).take (sPos - 1 - lineStart)
              if !prevLine.isEmpty && (findFrom (litBytes "||") prevLine 0).isNone && prevLine.getLast? != some 255 then
                let (brPh, toks') := addTok "List" [("type".toList, textVal (litBytes "explicit_br_no_nl"))] toks
                ((src.take (sPos - 1)) ++ brPh ++ [10, 10] ++ (src.drop sPos), toks', afterEnd0 + brPh.length + 1)
              else (src, toks, afterEnd0)
            else (src, toks, afterEnd0)
          exact listTokStep_trans (finalizeOne_step1 src toks sPos afterEnd0)
            (finalizeOne_step2 preTrip.2.1 preTrip.1 preTrip.2.2 blk blocks)

private theorem finalizeExplicit_tokStep (src : List Nat) (toks : List TokenEntry)
    (blocks : List ExplBlock) :
    ListTokStep toks (finalizeExplicit src toks blocks).2 := by
  unfold finalizeExplicit
  have hfold : ∀ (bs allBlocks : List ExplBlock) (s : List Nat) (tk : List TokenEntry),
      ListTokStep tk (bs.foldl (fun (st : List Nat × List TokenEntry) blk =>
        finalizeOne st.1 st.2 blk allBlocks) (s, tk)).2 := by
    intro bs allBlocks
    induction bs with
    | nil => intro s tk; exact listTokStep_refl tk
    | cons b bs ih =>
        intro s tk
        simp only [List.foldl_cons]
        exact listTokStep_trans (finalizeOne_tokStep s tk b allBlocks) (ih _ _)
  exact hfold blocks blocks _ toks

private theorem mkNewlines11_tokStep (n : Nat) (toks : List TokenEntry) :
    ListTokStep toks (mkNewlines11 n toks).2 := by
  have hgo : ∀ m acc tk, ListTokStep tk (mkNewlines11.go m acc tk).2 := by
    intro m
    induction m with
    | zero => intro acc tk; exact listTokStep_refl tk
    | succ k ih =>
        intro acc tk
        unfold mkNewlines11.go
        exact listTokStep_trans (listTokStep_addTok noBytes_nil tk) (ih _ _)
  exact hgo n [] toks

private theorem emitFailedCloseWire12_tokStep {tag : List Nat} (htag : tag.contains 0xFF = false)
    (scored : Bool) (siblings : List (List Nat)) (absorb after : List Nat)
    (toks : List TokenEntry) :
    ListTokStep toks (emitFailedCloseWire12 tag scored siblings absorb after toks).2 := by
  unfold emitFailedCloseWire12
  have h1 := listTokStep_addList
    [("type".toList, textVal (litBytes "explicit_list_start")),
     ("list_type".toList, textVal tag),
     ("attrs".toList, OptVal.map []),
     ("scored".toList, OptVal.bool scored)] toks
    (noBytes_cons_textVal "type".toList (litBytes "explicit_list_start") (by decide)
      (noBytes_cons_textVal "list_type".toList tag htag
        (noBytes_cons_map "attrs".toList _
          (noBytes_cons_bool "scored".toList _ noBytes_nil))))
  let tk1 := (addTok "List"
    [("type".toList, textVal (litBytes "explicit_list_start")),
     ("list_type".toList, textVal tag),
     ("attrs".toList, OptVal.map []),
     ("scored".toList, OptVal.bool scored)] toks).2
  have h2 := listTokStep_addList
    [("type".toList, textVal (litBytes "explicit_item_start")),
     ("attrs".toList, OptVal.map []),
     ("lead".toList, textVal [])] tk1
    (noBytes_cons_textVal "type".toList (litBytes "explicit_item_start") (by decide)
      (noBytes_cons_map "attrs".toList _
        (noBytes_cons_textVal "lead".toList ([] : List Nat) (by decide) noBytes_nil)))
  let tk2 := (addTok "List"
    [("type".toList, textVal (litBytes "explicit_item_start")),
     ("attrs".toList, OptVal.map []),
     ("lead".toList, textVal [])] tk1).2
  have h3 := listTokStep_addList
    [("type".toList, textVal (litBytes "explicit_item_end")),
     ("lead".toList, textVal [])] tk2
    (noBytes_cons_textVal "type".toList (litBytes "explicit_item_end") (by decide)
      (noBytes_cons_textVal "lead".toList ([] : List Nat) (by decide) noBytes_nil))
  let tk3 := (addTok "List"
    [("type".toList, textVal (litBytes "explicit_item_end")),
     ("lead".toList, textVal [])] tk2).2
  have h4 := listTokStep_addList
    [("type".toList, textVal (litBytes "explicit_list_end")),
     ("list_type".toList, textVal tag),
     ("trail".toList, textVal []),
     ("scored".toList, OptVal.bool scored)] tk3
    (noBytes_cons_textVal "type".toList (litBytes "explicit_list_end") (by decide)
      (noBytes_cons_textVal "list_type".toList tag htag
        (noBytes_cons_textVal "trail".toList ([] : List Nat) (by decide)
          (noBytes_cons_bool "scored".toList _ noBytes_nil))))
  let tk4 := (addTok "List"
    [("type".toList, textVal (litBytes "explicit_list_end")),
     ("list_type".toList, textVal tag),
     ("trail".toList, textVal []),
     ("scored".toList, OptVal.bool scored)] tk3).2
  have h14 := listTokStep_trans (listTokStep_trans h1 h2) (listTokStep_trans h3 h4)
  exact listTokStep_trans h14 (mkNewlines11_tokStep _ tk4)

private theorem listScoredEmptyItem10_tokStep (src0 : List Nat) (toks : List TokenEntry) :
    ∀ out, listScoredEmptyItem10 src0 toks = some out → ListTokStep toks out.2 := by
  intro out h
  unfold listScoredEmptyItem10 at h
  by_cases hfp : (findPair src0 (pairTags src0 toks)).isSome
  · simp [hfp] at h
  · simp only [hfp, Bool.false_eq_true, ↓reduceIte] at h
    cases hfind : (scanTags src0).find? (fun t => t.isOpen && tagIsRawCase t.tag && t.scored) with
    | none => simp [hfind] at h
    | some op =>
        have htag := scanTags_tag_no_ff (List.mem_of_find?_eq_some hfind)
        simp only [hfind] at h
        cases hscan : scanLi (src0.drop (op.start + op.len)) with
        | nil => simp [hscan] at h
        | cons hd tl =>
            simp only [hscan] at h
            by_cases hemp : !(trimBytes hd.2.2.1).isEmpty
            · simp [hemp] at h
            · simp only [hemp, Bool.false_eq_true, ↓reduceIte, Option.some.injEq] at h
              subst h
              have h1 := listTokStep_addList
                [("type".toList, textVal (litBytes "explicit_list_start")),
                 ("list_type".toList, textVal op.tag),
                 ("attrs".toList, OptVal.map []),
                 ("scored".toList, OptVal.bool true)] toks
                (noBytes_cons_textVal "type".toList (litBytes "explicit_list_start") (by decide)
                  (noBytes_cons_textVal "list_type".toList op.tag htag
                    (noBytes_cons_map "attrs".toList _
                      (noBytes_cons_bool "scored".toList _ noBytes_nil))))
              let tk1 := (addTok "List"
                [("type".toList, textVal (litBytes "explicit_list_start")),
                 ("list_type".toList, textVal op.tag),
                 ("attrs".toList, OptVal.map []),
                 ("scored".toList, OptVal.bool true)] toks).2
              have h2 := listTokStep_addList
                [("type".toList, textVal (litBytes "explicit_item_start")),
                 ("attrs".toList, OptVal.map []),
                 ("lead".toList, textVal [])] tk1
                (noBytes_cons_textVal "type".toList (litBytes "explicit_item_start") (by decide)
                  (noBytes_cons_map "attrs".toList _
                    (noBytes_cons_textVal "lead".toList ([] : List Nat) (by decide) noBytes_nil)))
              exact listTokStep_trans h1 h2

private theorem listPostFailedClose10_tokStep (src0 : List Nat) (toks : List TokenEntry) :
    ∀ out, listPostFailedClose10 src0 toks = some out → ListTokStep toks out.2 := by
  intro out h
  unfold listPostFailedClose10 at h
  by_cases hfp : (findPair src0 (pairTags src0 toks)).isSome
  · simp [hfp] at h
  · simp only [hfp, Bool.false_eq_true, ↓reduceIte] at h
    cases hfind : (scanTags src0).find? (fun t => t.isOpen && tagIsRawCase t.tag) with
    | none => simp [hfind] at h
    | some op =>
        have htag := scanTags_tag_no_ff (List.mem_of_find?_eq_some hfind)
        simp only [hfind] at h
        cases hc1 : c1PrePost (src0.drop (op.start + op.len)) with
        | none => simp [hc1] at h
        | some pq =>
            simp only [hc1] at h
            by_cases hli : (firstLiAt pq.2).isNone
            · simp [hli] at h
            · simp only [hli, Bool.false_eq_true, ↓reduceIte] at h
              cases hsl : scanLi pq.1 with
              | nil => simp [hsl] at h
              | cons fb tl =>
                  simp only [hsl, Option.some.injEq] at h
                  have hemit := emitFailedCloseWire12_tokStep htag op.scored
                    ((splitLiOpeners12 (stripRawListTags12 fb.2.2.1)).dropLast.map rtrimWs10)
                    ((match (splitLiOpeners12 (stripRawListTags12 fb.2.2.1)).getLast? with
                      | some x => rtrimWs10 x
                      | none => rtrimWs10 fb.2.2.1) ++
                      stripLeadingClosers12 (splitLastCloser11 (splitFootnoteBlock13 toks (rtrimWs10 (match pq.2 with | 10 :: r => r | _ => pq.2))).1).1 ++
                      (splitLastCloser11 (splitFootnoteBlock13 toks (rtrimWs10 (match pq.2 with | 10 :: r => r | _ => pq.2))).1).2)
                    (splitFootnoteBlock13 toks (rtrimWs10 (match pq.2 with | 10 :: r => r | _ => pq.2))).2
                    toks
                  rw [← h]
                  exact hemit

private theorem listExplicitPass_tail_tokStep (src : List Nat) (toks : List TokenEntry) :
    ListTokStep toks
      (if !(src.any (fun b => byteCiEq b 91)) ||
          !(existsLitCI (litBytes "[[ul") src || existsLitCI (litBytes "[[ol") src) then (src, toks)
       else
         let (src', toks', blocks) := explLoop src toks [] [] 500
         finalizeExplicit src' toks' blocks).2 := by
  apply listTokStep_if_pair
  · intro _; exact listTokStep_refl toks
  · intro _
    dsimp only
    exact listTokStep_trans (explLoop_tokStep 500 src toks [] []) (finalizeExplicit_tokStep _ _ _)

theorem listExplicitPass_tokStep (src0 : List Nat) (toks : List TokenEntry) :
    ListTokStep toks (listExplicitPass src0 toks).2 := by
  have hgen : ∀ (srcN : List Nat),
      ListTokStep toks
        (match listScoredEmptyItem10 srcN toks with
         | some out => out
         | none =>
             match listPostFailedClose9 srcN toks with
             | some out => out
             | none =>
                 let src := rw91 (rw82 (rw81 srcN))
                 if !(src.any (fun b => byteCiEq b 91)) ||
                    !(existsLitCI (litBytes "[[ul") src || existsLitCI (litBytes "[[ol") src) then (src, toks)
                 else
                   let (src', toks', blocks) := explLoop src toks [] [] 500
                   finalizeExplicit src' toks' blocks).2 := by
    intro srcN
    cases hs1 : listScoredEmptyItem10 srcN toks with
    | some out =>
        simp only [hs1]
        exact listScoredEmptyItem10_tokStep srcN toks out hs1
    | none =>
        simp only [hs1]
        cases hs2 : listPostFailedClose9 srcN toks with
        | some out =>
            simp only [hs2]
            exact listPostFailedClose10_tokStep srcN toks out hs2
        | none =>
            simp only [hs2]
            exact listExplicitPass_tail_tokStep (rw91 (rw82 (rw81 srcN))) toks
  unfold listExplicitPass
  exact hgen (rw132 (rw131 src0))

private theorem listRule_pair_tokStep (src : List Nat) (toks : List TokenEntry) :
    ListTokStep toks (let (s1, t1) := listNative src toks; listExplicitPass s1 t1).2 := by
  dsimp only
  exact listTokStep_trans (listNative_tokStep src toks)
    (listExplicitPass_tokStep (listNative src toks).1 (listNative src toks).2)

theorem listRule_tokStep (st : ParseState) :
    ListTokStep st.tokens (listRule st).tokens := by
  unfold listRule applyByteRule
  dsimp only
  exact listRule_pair_tokStep (byteForm st.work) st.tokens

/-- **R-LIST-GROWTH (COMPLETE)**: `listRule` never shrinks the token table. -/
theorem listRule_tokens_length_le (st : ParseState) :
    st.tokens.length ≤ (listRule st).tokens.length :=
  (listRule_tokStep st).1

/-- **R-LIST-OPTS (COMPLETE)**: `listRule` preserves option-map well-formedness
    for all existing and newly emitted tokens. -/
theorem listRule_tokens_wfOptMap (st : ParseState)
    (h : ∀ t ∈ st.tokens, WFOptMap st.tokens.length t.opts) :
    ∀ t ∈ (listRule st).tokens, WFOptMap (listRule st).tokens.length t.opts := by
  obtain ⟨hlen, hwf⟩ := listRule_tokStep st
  exact hwf (listRule st).tokens.length (Nat.le_refl _)
    (fun t ht => wfOptMap_mono hlen (h t ht))

/-- Sharpened `R-LIST-WF`: discharges both `hlen` and `hopts` of
    `lst_listRule_wf_conditional`, leaving only work-side `WFSegs` (`hnew`). -/
theorem lst_listRule_wf_of_work (st : ParseState)
    (hnew : WFSegs (listRule st).work (listRule st).tokens.length)
    (hwf : WFState st) :
    WFState (listRule st) :=
  lst_listRule_wf_conditional st hnew (listRule_tokens_length_le st)
    (listRule_tokens_wfOptMap st hwf.2.1) hwf

/-- `applyRule .list` differs from bare `RefApply.applyRuleRef .list` on native lists
    (exhibiting a well-formed initial document witness). -/
theorem list_applyRule_ne_applyRuleRef_on_native :
    ∃ st : ParseState, WFState st ∧ applyRule .list st ≠ applyRuleRef .list st := by
  refine ⟨ParseState.ofSource "* a\n".toList, wfState_ofSource _, ?_⟩
  intro h
  have h1 : (applyRule .list (ParseState.ofSource "* a\n".toList)).tokens.length = 4 := by decide
  have h2 : (applyRuleRef .list (ParseState.ofSource "* a\n".toList)).tokens.length = 1 := by decide
  rw [h] at h1
  omega

/-- No-match scope predicate for `listRule` vs `applyRuleRef`: byte pass is inert and F2 finds no claim. -/
def NoListMatchState (st : ParseState) : Prop :=
  lstListByteFn (byteForm st.work) st.tokens = (byteForm st.work, st.tokens) ∧
  (refWork .list st).2 = []

theorem applyByteRule_eq_self (st : ParseState) (hwf : WFState st)
    (fn : List Nat → List TokenEntry → List Nat × List TokenEntry)
    (hfn : fn (byteForm st.work) st.tokens = (byteForm st.work, st.tokens)) :
    applyByteRule st fn = st := by
  unfold applyByteRule
  rw [hfn]
  dsimp only
  rw [parseBytes_byteForm_id st.work st.tokens.length hwf.1]

private theorem applyRule_list_eq_self_of_noMatch {st : ParseState} (hwf : WFState st)
    (hm : lstListByteFn (byteForm st.work) st.tokens = (byteForm st.work, st.tokens)) :
    applyRule .list st = st := by
  change listRule st = st
  unfold listRule
  exact applyByteRule_eq_self st hwf _ hm

/-- Scoped `RuleProofBundle` for `.list` against real `RefApply.applyRuleRef` on `NoListMatchState`. -/
theorem listScopedBundleRef :
    ScopedRuleProofBundle applyRuleRef NoListMatchState .list where
  preserves_wf := fun st hwf hp => by
    rw [applyRule_list_eq_self_of_noMatch hwf hp.1]
    exact hwf
  eq_ref := fun st hwf hp => by
    rw [applyRule_list_eq_self_of_noMatch hwf hp.1, applyRuleRef_of_no_claims .list st hp.2]
  reachable_tokens := fun st hwf hp hr => by
    rw [applyRule_list_eq_self_of_noMatch hwf hp.1]
    exact hr

/-- Scoped `TokEquiv` preservation for `.list` on `NoListMatchState`. -/
theorem listRule_tokEquiv_no_match (σ : Nat → Nat) (st₁ st₂ : ParseState)
    (hwf₁ : WFState st₁) (hwf₂ : WFState st₂)
    (hp₁ : NoListMatchState st₁) (hp₂ : NoListMatchState st₂)
    (heq : TokEquiv σ st₁ st₂) :
    TokEquiv σ (listRule st₁) (listRule st₂) := by
  have e1 : listRule st₁ = st₁ := applyRule_list_eq_self_of_noMatch hwf₁ hp₁.1
  have e2 : listRule st₂ = st₂ := applyRule_list_eq_self_of_noMatch hwf₂ hp₂.1
  rwa [e1, e2]

/-- **R-LIST-TOKEQUIV boundary witness**: raw `TokEquiv id` does not constrain `TokenEntry.opts`,
    yet `listRule`'s `noneItemSpans` branch inspects `"type" = "explicit_none_item_start"/"_end"`
    inside stored `List` tokens; thus two `TokEquiv id` states can produce different token counts. -/
theorem listRule_not_tokEquiv_unconstrained :
    ∃ st₁ st₂ : ParseState, TokEquiv id st₁ st₂ ∧ ¬ TokEquiv id (listRule st₁) (listRule st₂) := by
  let work : List TSeg := [TSeg.tok 0, TSeg.text "[[ul]][[li]]a[[/li]][[/ul]]".toList, TSeg.tok 1]
  let st₁ : ParseState :=
    { work := work,
      tokens :=
        [{ rule := "List", opts := [("type".toList, OptVal.str "explicit_none_item_start".toList)] },
         { rule := "List", opts := [("type".toList, OptVal.str "explicit_none_item_end".toList)] }],
      doc := {} }
  let st₂ : ParseState :=
    { work := work,
      tokens :=
        [{ rule := "List", opts := [("type".toList, OptVal.str "bullet_list_start".toList)] },
         { rule := "List", opts := [("type".toList, OptVal.str "bullet_list_end".toList)] }],
      doc := {} }
  refine ⟨st₁, st₂, ⟨segsTokEquiv_refl id (fun _ => rfl) work, rfl, ?_, rfl⟩, ?_⟩
  · intro i hi
    match i with
    | 0 => rfl
    | 1 => rfl
    | n + 2 => simp [st₁] at hi; omega
  · intro ⟨_, hlen, _⟩
    have h1 : (listRule st₁).tokens.length = 2 := by decide
    have h2 : (listRule st₂).tokens.length = 6 := by decide
    rw [h1, h2] at hlen
    omega

/-! ## 3. Full Boundary-B `Break` equivalence against `PcreCore` and `applyRuleRefWith` -/

/-- Exact parsed representation of `refParsed .break`: `/ _\n/`. -/
def breakPcre : PcreCore.PcreParsed :=
  { ast := .seq (.byte 32) (.seq (.byte 95) (.byte 10)), flags := {} }

/-- Compact PHP-traceable TCB-4 `process()` callback for `Break`. -/
def breakProcessRef : ProcessCallback :=
  fun _ _ toks => (phBytes toks.length, toks ++ [{ rule := "Break", opts := [] }])

theorem refParsed_break : refParsed .break = [breakPcre] := by
  decide

private theorem drop_succ_eq_drop1 {α : Type} (l : List α) (n : Nat) :
    l.drop (n + 1) = (l.drop n).drop 1 := by
  rw [List.drop_drop, Nat.add_comm]

private theorem pcreFirstAnchored_break (subj : List Nat) (anchor pos : Nat) :
    PcreCore.pcreFirstAnchored breakPcre subj anchor pos =
      match subj.drop pos with
      | 32 :: 95 :: 10 :: _ => some { pos := pos + 3, caps := [] }
      | _ => none := by
  unfold PcreCore.pcreFirstAnchored PcreCore.pcreEndsAnchored breakPcre PcreCore.pcreFuel
  dsimp only [PcreCore.runMatch]
  cases h0 : subj.drop pos with
  | nil => simp [PcreCore.runMatch, h0]
  | cons b0 r0 =>
      have hd1 : subj.drop (pos + 1) = r0 := by rw [drop_succ_eq_drop1, h0]; rfl
      by_cases hb0 : b0 = 32
      · subst hb0
        have hm0 : PcreCore.byteMatchCI false 32 32 = true := rfl
        cases h1 : r0 with
        | nil => simp [PcreCore.runMatch, h0, hm0, hd1, h1]
        | cons b1 r1 =>
            have hd2 : subj.drop (pos + 2) = r1 := by rw [drop_succ_eq_drop1, hd1, h1]; rfl
            by_cases hb1 : b1 = 95
            · subst hb1
              have hm1 : PcreCore.byteMatchCI false 95 95 = true := rfl
              cases h2 : r1 with
              | nil => simp [PcreCore.runMatch, h0, hm0, hd1, h1, hm1, hd2, h2]
              | cons b2 r2 =>
                  by_cases hb2 : b2 = 10
                  · subst hb2
                    have hm2 : PcreCore.byteMatchCI false 10 10 = true := rfl
                    simp [PcreCore.runMatch, h0, hm0, hd1, h1, hm1, hd2, h2, hm2, Nat.add_assoc]
                  · have hm2 : PcreCore.byteMatchCI false 10 b2 = false := by
                      simp [PcreCore.byteMatchCI, Ne.symm hb2]
                    simp [PcreCore.runMatch, h0, hm0, hd1, h1, hm1, hd2, h2, hm2]
                    split <;> simp_all
            · have hm1 : PcreCore.byteMatchCI false 95 b1 = false := by
                simp [PcreCore.byteMatchCI, Ne.symm hb1]
              simp [PcreCore.runMatch, h0, hm0, hd1, h1, hm1]
              split <;> simp_all
      · have hm0 : PcreCore.byteMatchCI false 32 b0 = false := by
          simp [PcreCore.byteMatchCI, Ne.symm hb0]
        simp [PcreCore.runMatch, h0, hm0]
        split <;> simp_all

private theorem searchAnchored_go_break_bounds (subj : List Nat) :
    ∀ fuel a p res,
      PcreCore.searchAnchored.go breakPcre subj a fuel p = some res →
      p ≤ res.1 ∧ res.2.pos = res.1 + 3 ∧ res.2.pos ≤ subj.length ∧
      subj.drop res.1 = 32 :: 95 :: 10 :: subj.drop res.2.pos ∧ res.2.caps = [] := by
  intro fuel
  induction fuel with
  | zero => intro _ _ _ h; simp [PcreCore.searchAnchored.go] at h
  | succ fl ih =>
      intro a p res h
      dsimp only [PcreCore.searchAnchored.go] at h
      rw [pcreFirstAnchored_break] at h
      cases hd : subj.drop p with
      | nil =>
          rw [hd] at h
          obtain ⟨hle, hp⟩ := ih a (p + 1) res h
          exact ⟨by omega, hp⟩
      | cons b0 r0 =>
          cases r0 with
          | nil =>
              rw [hd] at h
              simp only at h
              obtain ⟨hle, hp⟩ := ih a (p + 1) res h
              exact ⟨by omega, hp⟩
          | cons b1 r1 =>
              cases r1 with
              | nil =>
                  rw [hd] at h
                  simp only at h
                  obtain ⟨hle, hp⟩ := ih a (p + 1) res h
                  exact ⟨by omega, hp⟩
              | cons b2 r2 =>
                  rw [hd] at h
                  by_cases hpat : b0 = 32 ∧ b1 = 95 ∧ b2 = 10
                  · obtain ⟨rfl, rfl, rfl⟩ := hpat
                    simp only [Option.some.injEq] at h
                    subst h
                    have hlen : p + 3 ≤ subj.length := by
                      have := congrArg List.length hd
                      simp only [List.length_drop, List.length_cons] at this
                      omega
                    have hd1 : subj.drop (p + 1) = 95 :: 10 :: r2 := by
                      rw [drop_succ_eq_drop1, hd]; rfl
                    have hd2 : subj.drop (p + 2) = 10 :: r2 := by
                      rw [drop_succ_eq_drop1, hd1]; rfl
                    have hd3 : subj.drop (p + 3) = r2 := by
                      rw [drop_succ_eq_drop1, hd2]; rfl
                    exact ⟨Nat.le_refl _, rfl, hlen, by rw [hd, hd3], rfl⟩
                  · have hne : (match b0 :: b1 :: b2 :: r2 with
                        | 32 :: 95 :: 10 :: _ => some ({ pos := p + 3, caps := [] } : PcreCore.MResult)
                        | _ => none) = none := by
                      by_cases h0 : b0 = 32
                      · subst h0
                        by_cases h1 : b1 = 95
                        · subst h1
                          have h2 : b2 ≠ 10 := fun h' => hpat ⟨rfl, rfl, h'⟩
                          simp [h2]
                        · simp [h1]
                      · simp [h0]
                    rw [hne] at h
                    obtain ⟨hle, hp⟩ := ih a (p + 1) res h
                    exact ⟨by omega, hp⟩

private theorem breakScan_step_hit (rest : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    breakScan (32 :: 95 :: 10 :: rest) toks (fuel + 1) =
      let (out, toks') := breakScan rest (toks ++ [{ rule := "Break", opts := [] }]) fuel
      (phBytes toks.length ++ out, toks') := by
  simp [breakScan]

private theorem breakScan_step_miss_cons (b : Nat) (rest : List Nat) (toks : List TokenEntry)
    (fuel : Nat) (hmiss : ¬ ∃ r, b :: rest = 32 :: 95 :: 10 :: r) :
    breakScan (b :: rest) toks (fuel + 1) =
      let (out, toks') := breakScan rest toks fuel
      (b :: out, toks') := by
  cases rest with
  | nil => rfl
  | cons b2 r2 =>
      cases r2 with
      | nil => rfl
      | cons b3 r3 =>
          dsimp only [breakScan]
          split
          · rename_i hcond
            exfalso; apply hmiss
            simp only [Bool.and_eq_true, beq_iff_eq] at hcond
            exact ⟨r3, by simp [hcond]⟩
          · rfl

private theorem breakScan_prefix_of_no_search (src : List Nat) (toks : List TokenEntry) :
    ∀ k pos f_scan,
      pos + k ≤ src.length →
      src.length - pos ≤ f_scan →
      (∀ i, pos ≤ i → i < pos + k →
        PcreCore.pcreFirstAnchored breakPcre src pos i = none) →
      breakScan (src.drop pos) toks (f_scan + 1) =
        let res := breakScan (src.drop (pos + k)) toks (f_scan - k + 1)
        ((src.drop pos).take k ++ res.1, res.2) := by
  intro k
  induction k with
  | zero =>
      intro pos f_scan _ _ _
      simp
  | succ k ih =>
      intro pos f_scan hlen hf hnone
      cases hd : src.drop pos with
      | nil =>
          exfalso
          have := congrArg List.length hd
          simp only [List.length_drop, List.length_nil] at this
          omega
      | cons b rest =>
          have hfirst := hnone pos (Nat.le_refl _) (by omega)
          rw [pcreFirstAnchored_break, hd] at hfirst
          have hmiss : ¬ ∃ r, b :: rest = 32 :: 95 :: 10 :: r := by
            rintro ⟨r, heq⟩
            rw [heq] at hfirst
            simp at hfirst
          have hstep := breakScan_step_miss_cons b rest toks f_scan hmiss
          have hd1 : src.drop (pos + 1) = rest := by rw [drop_succ_eq_drop1, hd]; rfl
          have hlen_pos : pos < src.length := by omega
          cases f_scan with
          | zero => exfalso; omega
          | succ f' =>
              have hih := ih (pos + 1) f' (by omega) (by omega) (fun i hi1 hi2 => by
                have hno := hnone i (by omega) (by omega)
                rw [pcreFirstAnchored_break] at hno ⊢
                exact hno)
              rw [hstep, hd1.symm, hih]
              have hsub : f' + 1 - (k + 1) + 1 = f' - k + 1 := by omega
              have hadd : pos + 1 + k = pos + (k + 1) := by omega
              rw [hsub, hadd]
              rfl

private theorem breakScan_no_match_eq (src : List Nat) (toks : List TokenEntry) (pos f : Nat)
    (hf : src.length - pos ≤ f)
    (hnone : ∀ i, pos ≤ i → i ≤ src.length →
      PcreCore.pcreFirstAnchored breakPcre src pos i = none) :
    breakScan (src.drop pos) toks (f + 1) = (src.drop pos, toks) := by
  by_cases hle : pos ≤ src.length
  · have hk := breakScan_prefix_of_no_search src toks (src.length - pos) pos f
      (by omega) hf (fun i hi1 hi2 => hnone i hi1 (by omega))
    have hdrop : src.drop (pos + (src.length - pos)) = [] :=
      List.drop_of_length_le (by omega)
    have htake : (src.drop pos).take (src.length - pos) = src.drop pos := by
      simp [List.take_of_length_le]
    rw [hdrop, htake] at hk
    simpa [breakScan] using hk
  · have hdrop : src.drop pos = [] := List.drop_of_length_le (by omega)
    simp [hdrop, breakScan]

private theorem searchAnchored_first_none_lt (subj : List Nat) (anchor p f s : Nat) (res : PcreCore.MResult)
    (hs : PcreCore.searchAnchored.go breakPcre subj anchor f p = some (s, res)) :
    ∀ i, p ≤ i → i < s → PcreCore.pcreFirstAnchored breakPcre subj anchor i = none := by
  induction f generalizing p with
  | zero => simp [PcreCore.searchAnchored.go] at hs
  | succ fl ih =>
      intro i hi1 hi2
      dsimp only [PcreCore.searchAnchored.go] at hs
      cases hp : PcreCore.pcreFirstAnchored breakPcre subj anchor p with
      | some r =>
          simp only [hp, Option.some.injEq, Prod.mk.injEq] at hs
          omega
      | none =>
          simp only [hp] at hs
          by_cases hpi : i = p
          · subst hpi; exact hp
          · exact ih (p + 1) hs i (by omega) hi2

private theorem searchAnchored_none_all (subj : List Nat) (anchor p f : Nat)
    (hf : subj.length + 1 - p ≤ f)
    (hs : PcreCore.searchAnchored.go breakPcre subj anchor f p = none) :
    ∀ i, p ≤ i → i ≤ subj.length → PcreCore.pcreFirstAnchored breakPcre subj anchor i = none := by
  induction f generalizing p with
  | zero =>
      intro i hi1 hi2
      omega
  | succ fl ih =>
      intro i hi1 hi2
      dsimp only [PcreCore.searchAnchored.go] at hs
      cases hp : PcreCore.pcreFirstAnchored breakPcre subj anchor p with
      | some r => simp [hp] at hs
      | none =>
          simp only [hp] at hs
          by_cases hpi : i = p
          · subst hpi; exact hp
          · exact ih (p + 1) (by omega) hs i (by omega) hi2

private theorem breakScan_fuel_irrel :
    ∀ (m : Nat) (src : List Nat) (toks : List TokenEntry) (f1 f2 : Nat),
      src.length = m → src.length + 1 ≤ f1 → src.length + 1 ≤ f2 →
      breakScan src toks f1 = breakScan src toks f2 := by
  intro m
  induction m using Nat.strongRecOn with
  | ind m ih =>
      intro src toks f1 f2 hm hf1 hf2
      subst hm
      cases f1 with
      | zero => simp at hf1
      | succ f1' =>
          cases f2 with
          | zero => simp at hf2
          | succ f2' =>
              cases src with
              | nil => rfl
              | cons b1 r1 =>
                  cases r1 with
                  | nil =>
                      have hrec := ih 0 (by simp) [] toks f1' f2' rfl
                        (by simp only [List.length_cons] at hf1; omega)
                        (by simp only [List.length_cons] at hf2; omega)
                      simp only [breakScan]
                      rw [hrec]
                  | cons b2 r2 =>
                      cases r2 with
                      | nil =>
                          simp only [breakScan]
                          have hrec := ih 1 (by simp) [b2] toks f1' f2' rfl
                            (by simp at hf1 ⊢; omega) (by simp at hf2 ⊢; omega)
                          rw [hrec]
                      | cons b3 r3 =>
                          dsimp only [breakScan]
                          split
                          · have hrec := ih r3.length (by simp only [List.length_cons]; omega) r3
                              (toks ++ [{ rule := "Break", opts := [] }]) f1' f2' rfl
                              (by simp only [List.length_cons] at hf1; omega)
                              (by simp only [List.length_cons] at hf2; omega)
                            rw [hrec]
                          · have hrec := ih (b2 :: b3 :: r3).length (by simp only [List.length_cons]; omega)
                              (b2 :: b3 :: r3) toks f1' f2' rfl
                              (by simp only [List.length_cons] at hf1 ⊢; omega)
                              (by simp only [List.length_cons] at hf2 ⊢; omega)
                            rw [hrec]

private theorem spliceMatchesWith_break_go (src out : List Nat) (toks : List TokenEntry)
    (cur f : Nat) (hcur : cur ≤ src.length) (hf : src.length - cur ≤ f) :
    let ms := PcreCore.pregMatchAll.go breakPcre src cur (f + 1)
    let folded := ms.foldl (fun (acc : List Nat × Nat × List TokenEntry) m =>
      let (o, c, tk) := acc
      let full := (src.drop m.1).take (m.2.1 - m.1)
      let (rep, tk') := breakProcessRef full m.2.2 tk
      (o ++ (src.drop c).take (m.1 - c) ++ rep, m.2.1, tk')) (out, cur, toks)
    (folded.1 ++ src.drop folded.2.1, folded.2.2) =
      let bsRes := breakScan (src.drop cur) toks (src.length - cur + 1)
      (out ++ bsRes.1, bsRes.2) := by
  suffices h : ∀ n cur out toks f,
      src.length - cur = n → cur ≤ src.length → src.length - cur ≤ f →
      let ms := PcreCore.pregMatchAll.go breakPcre src cur (f + 1)
      let folded := ms.foldl (fun (acc : List Nat × Nat × List TokenEntry) m =>
        let (o, c, tk) := acc
        let full := (src.drop m.1).take (m.2.1 - m.1)
        let (rep, tk') := breakProcessRef full m.2.2 tk
        (o ++ (src.drop c).take (m.1 - c) ++ rep, m.2.1, tk')) (out, cur, toks)
      (folded.1 ++ src.drop folded.2.1, folded.2.2) =
        let bsRes := breakScan (src.drop cur) toks (src.length - cur + 1)
        (out ++ bsRes.1, bsRes.2) by
    exact h (src.length - cur) cur out toks f rfl hcur hf
  intro n
  induction n using Nat.strongRecOn with
  | ind n ih =>
      intro cur out toks f hn hcur hf
      dsimp only [PcreCore.pregMatchAll.go]
      cases hs : PcreCore.searchAnchored breakPcre src cur cur with
      | none =>
          simp only [hs, List.foldl_nil]
          have hnone := searchAnchored_none_all src cur cur (src.length + 1 - cur)
            (Nat.le_refl _) hs
          rw [breakScan_no_match_eq src toks cur (src.length - cur) (Nat.le_refl _) hnone]
      | some res =>
          obtain ⟨s, r⟩ := res
          obtain ⟨hle, hrpos, hrlen, hsdrop, hrcaps⟩ :=
            searchAnchored_go_break_bounds src (src.length + 1 - cur) cur cur (s, r) hs
          dsimp only at hle hrpos hrlen hsdrop hrcaps
          have hgt_s : r.pos > s := by omega
          have hnone := searchAnchored_first_none_lt src cur cur (src.length + 1 - cur) s r hs
          have hk := breakScan_prefix_of_no_search src toks (s - cur) cur (src.length - cur)
            (by omega) (Nat.le_refl _) (fun i hi1 hi2 => hnone i hi1 (by omega))
          have hcur_eq : cur + (s - cur) = s := by omega
          have hrem_eq : src.length - cur - (s - cur) + 1 = (src.length - r.pos + 3) + 1 := by
            omega
          have hstep := breakScan_step_hit (src.drop r.pos) toks (src.length - r.pos + 3)
          have hirrel := breakScan_fuel_irrel (src.drop r.pos).length (src.drop r.pos)
            (toks ++ [{ rule := "Break", opts := [] }])
            (src.length - r.pos + 3) (src.length - r.pos + 1) rfl
            (by simp [List.length_drop]) (by simp [List.length_drop])
          have hf1 : f ≥ 1 := by omega
          have hf_eq : f - 1 + 1 = f := by omega
          have hih := ih (src.length - r.pos) (by omega) r.pos
            (out ++ (src.drop cur).take (s - cur) ++ phBytes toks.length)
            (toks ++ [{ rule := "Break", opts := [] }]) (f - 1) rfl hrlen (by omega)
          rw [hf_eq] at hih
          simp only [hgt_s, ↓reduceIte, List.foldl_cons, breakProcessRef] at hih ⊢
          rw [hih, hk, hcur_eq, hsdrop, hrem_eq, hstep, hirrel]
          simp [List.append_assoc]

theorem breakScan_eq_spliceMatchesWith (src : List Nat) (toks : List TokenEntry) :
    breakScan src toks (src.length + 1) =
      spliceMatchesWith breakProcessRef src toks (PcreCore.pregMatchAll breakPcre src) := by
  unfold spliceMatchesWith PcreCore.pregMatchAll
  have h := spliceMatchesWith_break_go src [] toks 0 src.length (Nat.zero_le _) (Nat.le_refl _)
  simp only [List.drop_zero, List.nil_append, Nat.sub_zero] at h
  exact (Eq.trans h (Prod.eta _).symm).symm

theorem spliceMatches_snd_ne_nil {bs : List Nat} {base : Nat}
    (ms : List (Nat × Nat × List (Option (List Nat)))) (out : List Nat) (cur : Nat)
    (claims : List (List Nat × List (Option (List Nat))))
    (h : claims ≠ [] ∨ ms ≠ []) :
    (ms.foldl (fun acc m =>
      (acc.1 ++ (bs.drop acc.2.1).take (m.1 - acc.2.1) ++ segBytes (TSeg.tok (base + acc.2.2.length)),
       m.2.1,
       acc.2.2 ++ [((bs.drop m.1).take (m.2.1 - m.1), m.2.2)])) (out, cur, claims)).2.2 ≠ [] := by
  induction ms generalizing out cur claims with
  | nil =>
      simp only [List.foldl_nil]
      rcases h with h1 | h2
      · exact h1
      · exact False.elim (h2 rfl)
  | cons m ms ih =>
      simp only [List.foldl_cons]
      exact ih _ _ _ (Or.inl (by simp))

/-- **Boundary-B equivalence (`Break`)**: on any well-formed state, `applyRule .break st`
    equals F2's `applyRuleRefWith breakProcessRef .break st` (using `PcreCore` on `refParsed .break`). -/
theorem applyRule_break_eq_refWith (st : ParseState) (hwf : WFState st) :
    applyRule .break st = applyRuleRefWith breakProcessRef .break st := by
  change breakRule st = applyRuleRefWith breakProcessRef .break st
  unfold breakRule applyByteRule applyRuleRefWith
  cases hnone : (refWork .break st).2 == [] with
  | true =>
      have h0 : (refWork .break st).2 = [] := beq_iff_eq.mp hnone
      simp only [h0, ↓reduceIte]
      have hms : PcreCore.pregMatchAll breakPcre (byteForm st.work) = [] := by
        unfold refWork at h0
        rw [refParsed_break] at h0
        dsimp only [List.foldl, spliceMatches] at h0
        cases hm : PcreCore.pregMatchAll breakPcre (byteForm st.work) with
        | nil => rfl
        | cons x xs =>
            exfalso
            have hne := spliceMatches_snd_ne_nil (bs := byteForm st.work) (base := st.tokens.length)
              (x :: xs) [] 0 [] (Or.inr (by simp))
            rw [← hm] at hne
            exact hne h0
      have hb := breakScan_eq_spliceMatchesWith (byteForm st.work) st.tokens
      rw [hms] at hb
      simp only [spliceMatchesWith, List.foldl_nil, List.nil_append, List.drop_zero] at hb
      rw [hb, parseBytes_byteForm_id st.work st.tokens.length hwf.1]
  | false =>
      have hne : (refWork .break st).2 ≠ [] := by
        intro h0; simp [h0] at hnone
      simp only [hne, ↓reduceIte]
      unfold refWorkWith
      rw [refParsed_break]
      dsimp only [List.foldl]
      rw [breakScan_eq_spliceMatchesWith (byteForm st.work) st.tokens]

/-- `breakRule` never shrinks the token table. -/
theorem breakRule_tokens_length_le (st : ParseState) :
    st.tokens.length ≤ (breakRule st).tokens.length := by
  have hgo : ∀ f src toks, toks.length ≤ (breakScan src toks f).2.length := by
    intro f
    induction f with
    | zero => intro src toks; simp [breakScan]
    | succ f ih =>
        intro src toks
        cases src with
        | nil => simp [breakScan]
        | cons b rest =>
            cases rest with
            | nil => simp [breakScan]; exact ih [] toks
            | cons b2 r2 =>
                cases r2 with
                | nil => simp [breakScan]; exact ih [b2] toks
                | cons b3 r3 =>
                    dsimp only [breakScan]
                    split
                    · have h := ih r3 (toks ++ [{ rule := "Break", opts := [] }])
                      dsimp only
                      simp only [List.length_append, List.length_singleton] at h
                      omega
                    · exact ih (b2 :: b3 :: r3) toks
  unfold breakRule applyByteRule
  exact hgo _ _ _

/-- `breakRule` emits only empty option maps, preserving `WFOptMap`. -/
theorem breakRule_tokens_wfOptMap (st : ParseState)
    (h : ∀ t ∈ st.tokens, WFOptMap st.tokens.length t.opts) :
    ∀ t ∈ (breakRule st).tokens, WFOptMap (breakRule st).tokens.length t.opts := by
  have hstep : ∀ f src toks, ListTokStep toks (breakScan src toks f).2 := by
    intro f
    induction f with
    | zero =>
        intro src toks
        simp only [breakScan]
        exact listTokStep_refl toks
    | succ f ih =>
        intro src toks
        cases src with
        | nil => simp only [breakScan]; exact listTokStep_refl toks
        | cons b rest =>
            cases rest with
            | nil => simp only [breakScan]; exact ih [] toks
            | cons b2 r2 =>
                cases r2 with
                | nil => simp only [breakScan]; exact ih [b2] toks
                | cons b3 r3 =>
                    dsimp only [breakScan]
                    split
                    · exact listTokStep_trans
                        ⟨by simp, fun n _ ht t hm => by
                          simp only [List.mem_append, List.mem_singleton] at hm
                          rcases hm with h1 | rfl
                          · exact ht t h1
                          · exact wfOptMap_of_noBytes noBytes_nil n⟩
                        (ih r3 _)
                    · exact ih (b2 :: b3 :: r3) toks
  obtain ⟨hlen, hwf⟩ := hstep ((byteForm st.work).length + 1) (byteForm st.work) st.tokens
  exact hwf _ (Nat.le_refl _) (fun t ht => wfOptMap_mono hlen (h t ht))

/-- Scoped `RuleProofBundle` for `.break` against real `RefApply.applyRuleRef` when no ` / _\n/` matches. -/
theorem breakScopedBundleRef :
    ScopedRuleProofBundle applyRuleRef (fun st => (refWork .break st).2 = []) .break where
  preserves_wf := fun st hwf hp => by
    rw [applyRule_break_eq_refWith st hwf, applyRuleRefWith_of_no_claims breakProcessRef .break st hp]
    exact hwf
  eq_ref := fun st hwf hp => by
    rw [applyRule_break_eq_refWith st hwf,
        applyRuleRefWith_of_no_claims breakProcessRef .break st hp,
        applyRuleRef_of_no_claims .break st hp]
  reachable_tokens := fun st hwf hp hr => by
    rw [applyRule_break_eq_refWith st hwf, applyRuleRefWith_of_no_claims breakProcessRef .break st hp]
    exact hr

/-! ## 4. Per-family `processRef` correspondences against `RefApply` (8 families, 11 rules) -/

set_option maxRecDepth 65536 in
theorem refParsed_wave2_lengths :
    (refParsed .list).length = 1 ∧
    (refParsed .break).length = 1 ∧
    (refParsed .horiz).length = 1 ∧
    (refParsed .separator).length = 1 ∧
    (refParsed .clearfloat).length = 1 ∧
    (refParsed .center).length = 1 ∧
    (refParsed .raw).length = 1 ∧
    (refParsed .rawold).length = 1 ∧
    (refParsed .comment).length = 1 ∧
    (refParsed .bibcite).length = 1 ∧
    (refParsed .html).length = 1 :=
  ⟨by decide, by decide, by decide, by decide, by decide, by decide,
   by decide, by decide, by decide, by decide, by decide⟩

/-- Family 1 (`List` native): PHP-traceable callback matches `ListRules.nativeProcess`. -/
def listNativeProcessRef : ProcessCallback :=
  fun full _ toks => nativeProcess full toks

theorem listNative_processRef_eq (full : List Nat) (gs : List (Option (List Nat)))
    (toks : List TokenEntry) :
    listNativeProcessRef full gs toks = nativeProcess full toks := rfl

/-- Family 2 (`Break`): single-match correspondence against `MiddleRules.breakScan`. -/
theorem break_processRef_step (rest : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    let (rep, toks1) := breakProcessRef (litBytes " _\n") [] toks
    breakScan (litBytes " _\n" ++ rest) toks (fuel + 1) =
      let (tailOut, toks2) := breakScan rest toks1 fuel
      (rep ++ tailOut, toks2) := by
  simp [breakProcessRef, breakScan, litBytes]

/-- Family 3 (`Horiz` / `Separator` / `Clearfloat`): PHP-traceable callbacks match `lineScan`. -/
def horizProcessRef : ProcessCallback :=
  fun _ _ toks => ([10] ++ phBytes toks.length ++ [10, 10], toks ++ [{ rule := "Horiz", opts := [] }])

def separatorProcessRef : ProcessCallback :=
  fun _ _ toks => ([10] ++ phBytes toks.length ++ [10, 10], toks ++ [{ rule := "Separator", opts := [] }])

def clearfloatProcessRef : ProcessCallback :=
  fun _ gs toks =>
    let sideVal : OptVal := match gs[1]? with
      | some (some (62 :: _)) => OptVal.str ">".toList
      | some (some (60 :: _)) => OptVal.str "<".toList
      | _ => OptVal.null
    ([10, 10] ++ phBytes toks.length ++ [10, 10],
     toks ++ [{ rule := "Clearfloat", opts := [("side".toList, sideVal)] }])

private theorem runCount_replicate_append (n ch : Nat) (rest : List Nat) (acc : Nat)
    (hhead : rest.head? ≠ some ch) :
    runCount (List.replicate n ch ++ rest) ch acc = acc + n := by
  induction n generalizing acc with
  | zero =>
      cases rest with
      | nil => simp [runCount]
      | cons b bs =>
          have hne : b ≠ ch := fun h => hhead (by simp [h])
          simp [runCount, hne]
  | succ k ih =>
      simp only [List.replicate_succ, List.cons_append, runCount, beq_self_eq_true, ↓reduceIte]
      rw [ih (acc + 1)]
      omega

private theorem lineScan_cons_succ (ch : Nat) (withSide : Bool) (preN : Nat) (rule : String)
    (b : Nat) (rest : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    lineScan ch withSide preN rule (b :: rest) toks atStart (fuel + 1) =
      if atStart && 4 ≤ runCount (b :: rest) ch 0 then
        let afterRun := (b :: rest).drop (runCount (b :: rest) ch 0)
        match (if withSide then clearfloatEnd afterRun
               else if lineEndAfter afterRun then some (afterRun, none) else none) with
        | some (remaining, sideByte) =>
          let sideVal : OptVal := match sideByte with
            | some 62 => OptVal.str ">".toList
            | some 60 => OptVal.str "<".toList
            | _ => OptVal.null
          let opts : OptMap := if withSide then [("side".toList, sideVal)] else []
          let (tok, toks') := addTok rule opts toks
          let (tailOut, toksFinal) := lineScan ch withSide preN rule remaining toks' true fuel
          (List.replicate preN 10 ++ tok ++ [10, 10] ++ tailOut, toksFinal)
        | none =>
          let (out, toks') := lineScan ch withSide preN rule rest toks (b == 10) fuel
          (b :: out, toks')
      else
        let (out, toks') := lineScan ch withSide preN rule rest toks (b == 10) fuel
        (b :: out, toks') := rfl

private theorem lineScan_replicate_step (n ch : Nat) (hge : 4 ≤ n) (rule : String)
    (rest : List Nat) (hle : lineEndAfter rest = true)
    (hhead : rest.head? ≠ some ch) (toks : List TokenEntry) (fuel : Nat) :
    lineScan ch false 1 rule (List.replicate n ch ++ rest) toks true (fuel + 1) =
      let (out, toks') := lineScan ch false 1 rule rest (toks ++ [{ rule := rule, opts := [] }]) true fuel
      ([10] ++ phBytes toks.length ++ [10, 10] ++ out, toks') := by
  obtain ⟨k, rfl⟩ : ∃ k, n = k + 1 := ⟨n - 1, by omega⟩
  have hrc : runCount (ch :: (List.replicate k ch ++ rest)) ch 0 = k + 1 := by
    change runCount (List.replicate (k + 1) ch ++ rest) ch 0 = k + 1
    simpa using runCount_replicate_append (k + 1) ch rest 0 hhead
  have hdrop : (ch :: (List.replicate k ch ++ rest)).drop (k + 1) = rest := by
    change (List.replicate (k + 1) ch ++ rest).drop (k + 1) = rest
    simp
  simp only [List.replicate_succ, List.cons_append]
  rw [lineScan_cons_succ, hrc, hdrop]
  simp only [hge, decide_true, hle, ↓reduceIte, Bool.true_and, Bool.false_eq_true,
    List.replicate_one, List.cons_append, addTok]

theorem horiz_processRef_step (n : Nat) (hge : 4 ≤ n) (rest : List Nat)
    (hnl : rest = [] ∨ ∃ r, rest = 10 :: r) (toks : List TokenEntry) (fuel : Nat) :
    let (rep, toks1) := horizProcessRef (List.replicate n 45) [] toks
    lineScan 45 false 1 "Horiz" (List.replicate n 45 ++ rest) toks true (fuel + 1) =
      let (tailOut, toks2) := lineScan 45 false 1 "Horiz" rest toks1 true fuel
      (rep ++ tailOut, toks2) := by
  have hle : lineEndAfter rest = true := by rcases hnl with rfl | ⟨r, rfl⟩ <;> rfl
  have hh : rest.head? ≠ some 45 := by rcases hnl with rfl | ⟨r, rfl⟩ <;> simp
  simpa [horizProcessRef, List.append_assoc] using
    lineScan_replicate_step n 45 hge "Horiz" rest hle hh toks fuel

theorem separator_processRef_step (n : Nat) (hge : 4 ≤ n) (rest : List Nat)
    (toks : List TokenEntry) (fuel : Nat) :
    let (rep, toks1) := separatorProcessRef (List.replicate n 61) [] toks
    lineScan 61 false 1 "Separator" (List.replicate n 61 ++ 10 :: rest) toks true (fuel + 1) =
      let (tailOut, toks2) := lineScan 61 false 1 "Separator" (10 :: rest) toks1 true fuel
      (rep ++ tailOut, toks2) := by
  simpa [separatorProcessRef, List.append_assoc] using
    lineScan_replicate_step n 61 hge "Separator" (10 :: rest) rfl (by simp) toks fuel

theorem clearfloat_processRef_step :
    let (rep, toks1) := clearfloatProcessRef (litBytes "~~~~>") [some (litBytes "~~~~"), some (litBytes ">")] []
    lineScan 126 true 2 "Clearfloat" (litBytes "~~~~>\n") [] true 10 = (rep ++ [10], toks1) := by
  rfl

/-- Family 4 (`Center`): PHP-traceable callback matches `MiddleRules.centerScan`. -/
def centerProcessRef : ProcessCallback :=
  fun _ gs toks =>
    let body := (gs[0]?.join).getD []
    let startTok : TokenEntry :=
      { rule := "Center", opts := [("type".toList, OptVal.str "start".toList)] }
    let endTok : TokenEntry :=
      { rule := "Center", opts := [("type".toList, OptVal.str "end".toList)] }
    ([10, 10] ++ phBytes toks.length ++ trimBytes body ++ phBytes (toks.length + 1) ++ [10, 10],
     toks ++ [startTok, endTok])

theorem center_processRef_step (body rest : List Nat) (hno : 10 ∉ body)
    (toks : List TokenEntry) (fuel : Nat) :
    let (rep, toks1) := centerProcessRef (litBytes "= " ++ body) [some body] toks
    centerScan (litBytes "= " ++ body ++ 10 :: rest) toks true (fuel + 1) =
      let (tailOut, toks2) := centerScan (10 :: rest) toks1 false fuel
      (rep ++ tailOut, toks2) := by
  have htake : (body ++ 10 :: rest).takeWhile (fun x => x != 10) = body := by
    induction body with
    | nil => rfl
    | cons b bs ih =>
        have hb : b ≠ 10 := fun heq => hno (heq ▸ List.mem_cons_self)
        have hbs : 10 ∉ bs := fun hm => hno (List.mem_cons_of_mem b hm)
        simp [hb, ih hbs]
  have hdrop : (body ++ 10 :: rest).drop body.length = 10 :: rest := by
    simp
  simp [centerProcessRef, centerScan, litBytes, htake, hdrop]

/-- Family 5 (`Raw` / `Rawold`): matches `RawEquiv.re_processRef` and `FormRawRules.claimText`. -/
def rawProcessRef (rule : String) : ProcessCallback :=
  fun _ gs toks => claimText rule ((gs[0]?.join).getD []) toks

theorem raw_processRef_eq_rawEquiv (g1 : List Nat) (toks : List TokenEntry) :
    rawProcessRef "Raw" [] [some g1] toks = RawEquiv.re_processRef "Raw" g1 toks := rfl

theorem rawold_processRef_eq_rawEquiv (g1 : List Nat) (toks : List TokenEntry) :
    rawProcessRef "Rawold" [] [some g1] toks = RawEquiv.re_processRef "Rawold" g1 toks := rfl

/-- Family 6 (`Comment`): plain unindented comment callback matches PHP deletion. -/
def commentProcessRef : ProcessCallback :=
  fun _ _ toks => ([], toks)

theorem comment_processRef_eq (full : List Nat) (gs : List (Option (List Nat)))
    (toks : List TokenEntry) :
    commentProcessRef full gs toks = ([], toks) := rfl

/-- Family 7 (`Bibcite`): PHP-traceable callback matches `NotesRules.bibciteScan`. -/
def bibciteProcessRef : ProcessCallback :=
  fun _ gs toks =>
    let lbl := (gs[0]?.join).getD []
    (phBytes toks.length, toks ++ [{ rule := "Bibcite", opts := [("label".toList, textVal lbl)] }])

theorem bibcite_processRef_witness :
    let (rep, toks1) := bibciteProcessRef (litBytes "((bibcite bell))") [some (litBytes "bell")] []
    bibciteScan (litBytes "((bibcite bell))") [] 20 = (rep, toks1) := by
  rfl

/-- Family 8 (`Html`): full-match class/style attribute scan + trailer pass-through. -/
def htmlProcessRef : ProcessCallback :=
  fun full gs toks =>
    let body := (gs[0]?.join).getD []
    let trailer := (gs[1]?.join).getD []
    let scan := htmlScan full [] (full.length + 1)
    let opts : OptMap := match scan.2.head? with
      | some e => e.opts
      | none => [("text".toList, textVal body)]
    (phBytes toks.length ++ trailer, toks ++ [{ rule := "Html", opts := opts }])

theorem html_processRef_witness :
    let full := litBytes "[[html]]\n[[html class=\"c\" style=\"s\"]]\n[[/html]]\n"
    let body := litBytes "[[html class=\"c\" style=\"s\"]]"
    let trailer := [10]
    let (rep, toks1) := htmlProcessRef full [some body, some trailer] []
    htmlScan full [] (full.length + 1) = (rep, toks1) := by
  rfl

-- Axiom audit for all headline theorems in BundlesWave2.
#print axioms applyRuleRefWith_bare_eq_applyRuleRef
#print axioms listRule_tokens_length_le
#print axioms listRule_tokens_wfOptMap
#print axioms lst_listRule_wf_of_work
#print axioms list_applyRule_ne_applyRuleRef_on_native
#print axioms listScopedBundleRef
#print axioms listRule_tokEquiv_no_match
#print axioms listRule_not_tokEquiv_unconstrained
#print axioms breakScan_eq_spliceMatchesWith
#print axioms applyRule_break_eq_refWith
#print axioms breakRule_tokens_length_le
#print axioms breakRule_tokens_wfOptMap
#print axioms breakScopedBundleRef
#print axioms refParsed_wave2_lengths
#print axioms listNative_processRef_eq
#print axioms break_processRef_step
#print axioms horiz_processRef_step
#print axioms separator_processRef_step
#print axioms clearfloat_processRef_step
#print axioms center_processRef_step
#print axioms raw_processRef_eq_rawEquiv
#print axioms rawold_processRef_eq_rawEquiv
#print axioms comment_processRef_eq
#print axioms bibcite_processRef_witness
#print axioms html_processRef_witness

end LeanFtml
