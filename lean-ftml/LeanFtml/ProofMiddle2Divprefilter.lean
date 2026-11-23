/-
  ProofMiddle2Divprefilter.lean — U1 of the DSH-PROOF-MIDDLE2 proof lane, namespace LeanFtml.Middle2.Divprefilter. This file is new and self-contained over the mirror's actual definitions in LeanFtml.Middle2Rules.lean (dpTail, divprefilterScan, divprefilterRule) and the byte helpers in LeanFtml.FormRawRules.lean; no mirror, foundation or existing proof file is edited. The theorems below are universal kernel-free statements about those actual functions: the case-insensitive literal matcher's length and suffix laws, dpTail's PCRE-order lazy-whitespace/prefix characterization, divprefilterScan's branch decomposition, non-rescanning continuation, output-shape and fuel prefix/sufficiency laws, divprefilterRule's token-table/doc/fatal preservation, and explicitly conditional WFState/TokEquiv and PcreCore/RefTables components. The named PcreCore/RefTables correspondence obligations are section parameters with a conditional reduction, never axioms or asserted constants; F1's two byte-bridge obligations are represented only as local hypotheses in the conditional WF theorems, because in this tree they exist solely inside a block comment in TokenStateProof.lean. No sorry, sorryAx, native_decide, bv_decide or placeholder axiom is used; only the standard core axioms [propext, Classical.choice, Quot.sound] may appear. All prose flows on single lines.
-/

import LeanFtml.Middle2Rules

namespace LeanFtml.Middle2.Divprefilter

/-- The constant replacement bytes of the rewrite, named once for the decomposition and idempotence statements. -/
def dpReplacement : List Nat := litBytes "[[/div]][[div"

/-- A byte list all of whose members are PCRE byte-mode whitespace, the lazy `\s*?` run's admissible content. -/
def dpWsPrefix (ws : List Nat) : Prop := ∀ b ∈ ws, isWsByte b = true

/-- The prefix relation on byte lists, stated as an existential suffix so it needs no extra imports. -/
def dpIsPrefix (xs ys : List Nat) : Prop := ∃ t, ys = xs ++ t

/-! ## Case-insensitive literal normalization -/

/-- Each byte matches itself under PCRE's ASCII case folding. -/
theorem byteCiEq_refl (b : Nat) : byteCiEq b b = true := by
  simp [byteCiEq]

/-- Uppercase letters fold onto their lowercase literal bytes; a concrete witness set used by the /i literals. -/
theorem byteCiEq_foldcase : byteCiEq 68 100 = true ∧ byteCiEq 73 105 = true ∧ byteCiEq 86 118 = true := by
  decide

/-- The six `\s` byte-mode classes are accepted and an ordinary letter or bracket is not. -/
theorem isWsByte_scan_class : isWsByte 32 = true ∧ isWsByte 9 = true ∧ isWsByte 10 = true ∧ isWsByte 11 = true ∧ isWsByte 12 = true ∧ isWsByte 13 = true ∧ isWsByte 88 = false ∧ isWsByte 91 = false := by
  decide

/-- The empty pattern matches everywhere and returns the whole subject. -/
theorem matchLitCI_empty (src : List Nat) : matchLitCI [] src = some src := rfl

/-- A successful case-insensitive literal match consumes exactly the pattern length, independent of case folding. -/
theorem matchLitCI_length (pat src r : List Nat) (h : matchLitCI pat src = some r) : src.length = pat.length + r.length := by
  induction pat generalizing src r with
  | nil =>
      simp [matchLitCI] at h
      subst r
      simp
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hx : byteCiEq x p = true
          · have h' : matchLitCI pat xs = some r := by simpa [matchLitCI, hx] using h
            have ih' := ih xs r h'
            simp only [List.length_cons]
            omega
          · simp [matchLitCI, hx] at h

/-- A successful case-insensitive literal match leaves a literal suffix of the subject, whatever bytes folded. -/
theorem matchLitCI_isSuffix (pat src r : List Nat) (h : matchLitCI pat src = some r) : ∃ pre, src = pre ++ r := by
  induction pat generalizing src r with
  | nil =>
      simp [matchLitCI] at h
      subst r
      exact ⟨[], by simp⟩
  | cons p pat ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hx : byteCiEq x p = true
          · have h' : matchLitCI pat xs = some r := by simpa [matchLitCI, hx] using h
            obtain ⟨pre, hpre⟩ := ih xs r h'
            exact ⟨x :: pre, by simp [hpre]⟩
          · simp [matchLitCI, hx] at h

/-- A pattern matched against its own bytes followed by any suffix returns that suffix. -/
theorem matchLitCI_self_append (pat r : List Nat) : matchLitCI pat (pat ++ r) = some r := by
  induction pat with
  | nil => rfl
  | cons p pat ih =>
      simp [matchLitCI, byteCiEq, ih]

/-- Case folding lets an uppercase `[[DIV` match the lowercase mirror literal. -/
theorem matchLitCI_div_prefix_ci : matchLitCI (litBytes "[[div") (litBytes "[[DIV") = some [] := by
  decide

/-- Case folding lets a mixed-case `[[/DiV]]` closer match the lowercase mirror literal. -/
theorem matchLitCI_divclose_ci : matchLitCI (litBytes "[[/div]]") (litBytes "[[/DiV]]") = some [] := by
  decide

/-- The prefix literal matches without any closing `]]`, so any continuation is accepted. -/
theorem matchLitCI_div_prefix_no_close : matchLitCI (litBytes "[[div") (litBytes "[[divXYZ") = some (litBytes "XYZ") := by
  decide

/-- A head whitespace byte cannot be the first byte of the `[[div` literal, so the lazy scan must step. -/
theorem matchLitCI_lit_none_of_ws (b : Nat) (rest : List Nat) (hb : isWsByte b = true) :
    matchLitCI (litBytes "[[div") (b :: rest) = none := by
  have hb' : ((((b = 32 ∨ b = 9) ∨ b = 10) ∨ b = 11) ∨ b = 12) ∨ b = 13 := by
    simpa [isWsByte, Bool.or_eq_true, bne_iff_ne] using hb
  have hne : b ≠ 91 := by omega
  simp [litBytes, matchLitCI, byteCiEq, swapByteCase, hne]

/-! ## dpTail: PCRE-order lazy whitespace and prefix -/

/-- The empty subject cannot yield a tail. -/
theorem dpTail_nil : dpTail [] = none := rfl

/-- When the literal matches at the head, dpTail takes it immediately, which is PCRE's zero-whitespace candidate. -/
theorem dpTail_prefix_hit (src r : List Nat) (h : matchLitCI (litBytes "[[div") src = some r) : dpTail src = some r := by
  cases src with
  | nil => simp [litBytes, matchLitCI] at h
  | cons b rest => simp [dpTail, h]

/-- When the head literal fails but the head byte is whitespace, dpTail consumes exactly one byte and retries. -/
theorem dpTail_ws_step (b : Nat) (rest : List Nat)
    (hm : matchLitCI (litBytes "[[div") (b :: rest) = none) (hw : isWsByte b = true) :
    dpTail (b :: rest) = dpTail rest := by
  simp [dpTail, hm, hw]

/-- When the head literal fails and the head byte is not whitespace, dpTail stops with no match. -/
theorem dpTail_stop (b : Nat) (rest : List Nat)
    (hm : matchLitCI (litBytes "[[div") (b :: rest) = none) (hw : isWsByte b = false) :
    dpTail (b :: rest) = none := by
  simp [dpTail, hm, hw]

/-- The literal at the head of a whitespace-free candidate returns the bytes after the prefix. -/
theorem dpTail_prefix_literal (r : List Nat) : dpTail (litBytes "[[div" ++ r) = some r := by
  exact dpTail_prefix_hit _ _ (matchLitCI_self_append (litBytes "[[div") r)

/-- Any lazy whitespace run followed by a subject whose prefix literal matches returns the matched remainder. -/
theorem dpTail_ws_of_match (ws t r : List Nat) (hws : dpWsPrefix ws)
    (ht : matchLitCI (litBytes "[[div") t = some r) :
    dpTail (ws ++ t) = some r := by
  induction ws with
  | nil =>
      simpa using (dpTail_prefix_hit t r ht)
  | cons b ws ih =>
      have hb : isWsByte b = true := hws b (by simp)
      have hws' : dpWsPrefix ws := by
        intro x hx
        exact hws x (by simp [hx])
      have hm : matchLitCI (litBytes "[[div") (b :: (ws ++ t)) = none :=
        matchLitCI_lit_none_of_ws b _ hb
      calc
        dpTail ((b :: ws) ++ t) = dpTail (ws ++ t) := by
          simpa using (dpTail_ws_step b (ws ++ t) hm hb)
        _ = some r := ih hws'

/-- Any lazy whitespace run followed by the prefix literal returns the bytes after that prefix. -/
theorem dpTail_ws_lazy (ws r : List Nat) (hws : dpWsPrefix ws) :
    dpTail (ws ++ litBytes "[[div" ++ r) = some r := by
  simpa [List.append_assoc] using
    (dpTail_ws_of_match ws (litBytes "[[div" ++ r) r hws
      (matchLitCI_self_append (litBytes "[[div") r))

/-- The full lazy-whitespace/prefix characterization: a tail exists exactly when the subject is a whitespace run followed by the case-insensitive prefix literal, and the returned bytes are what follows that literal. -/
theorem dpTail_some_iff (src r : List Nat) :
    dpTail src = some r ↔
      ∃ ws t, dpWsPrefix ws ∧ src = ws ++ t ∧ matchLitCI (litBytes "[[div") t = some r := by
  constructor
  · intro h
    induction src with
    | nil => simp [dpTail] at h
    | cons b rest ih =>
        cases hm : matchLitCI (litBytes "[[div") (b :: rest) with
        | some r1 =>
            have hr : r1 = r := by simpa [dpTail, hm] using h
            subst r
            exact ⟨[], b :: rest, by simp [dpWsPrefix], rfl, hm⟩
        | none =>
            cases hb : isWsByte b with
            | true =>
                have hrest : dpTail rest = some r := by simpa [dpTail, hm, hb] using h
                obtain ⟨ws, t, hws, hsrc, ht⟩ := ih hrest
                refine ⟨b :: ws, t, ?_, ?_, ht⟩
                · intro x hx
                  rcases List.mem_cons.mp hx with hxb | hxws
                  · subst x
                    exact hb
                  · exact hws x hxws
                · simp [hsrc]
            | false => simp [dpTail, hm, hb] at h
  · rintro ⟨ws, t, hws, hsrc, ht⟩
    subst src
    exact dpTail_ws_of_match ws t r hws ht

/-- The complementary no-match characterization, derived from the positive one. -/
theorem dpTail_none_iff (src : List Nat) :
    dpTail src = none ↔ ∀ ws t, dpWsPrefix ws → src = ws ++ t → matchLitCI (litBytes "[[div") t = none := by
  constructor
  · intro hnone ws t hws hsrc
    cases hm : matchLitCI (litBytes "[[div") t with
    | none => rfl
    | some r =>
        have hs : dpTail src = some r := (dpTail_some_iff src r).2 ⟨ws, t, hws, hsrc, hm⟩
        rw [hnone] at hs
        contradiction
  · intro hall
    cases hdp : dpTail src with
    | none => rfl
    | some r =>
        obtain ⟨ws, t, hws, hsrc, ht⟩ := (dpTail_some_iff src r).1 hdp
        have hn := hall ws t hws hsrc
        rw [ht] at hn
        contradiction

/-- Every successful tail is a literal suffix of its subject: the matched prefix is discarded, never rescanned. -/
theorem dpTail_suffix (src r : List Nat) (h : dpTail src = some r) : ∃ pre, src = pre ++ r := by
  obtain ⟨ws, t, hws, hsrc, ht⟩ := (dpTail_some_iff src r).1 h
  obtain ⟨pre, hpret⟩ := matchLitCI_isSuffix (litBytes "[[div") t r ht
  subst src
  refine ⟨ws ++ pre, ?_⟩
  rw [hpret]
  simp [List.append_assoc]

/-- A successful tail is strictly shorter than its subject, which is the scanner's fuel-decrease witness. -/
theorem dpTail_length_lt (src r : List Nat) (h : dpTail src = some r) : r.length < src.length := by
  obtain ⟨ws, t, hws, hsrc, ht⟩ := (dpTail_some_iff src r).1 h
  have htlen := matchLitCI_length (litBytes "[[div") t r ht
  have hlitlen : (litBytes "[[div").length = 5 := by decide
  subst src
  rw [List.length_append]
  have htlen' : t.length = 5 + r.length := by simpa [hlitlen] using htlen
  omega

/-- Concrete witness for the no-closing-bracket case: the prefix literal alone yields a tail. -/
theorem dpTail_prefix_needs_no_closer : dpTail (litBytes "[[divx") = some (litBytes "x") := by
  decide

/-- Concrete witness that a non-whitespace byte before the prefix makes dpTail fail. -/
theorem dpTail_nonws_stops : dpTail (litBytes " x [[div") = none := by
  decide

/-! ## divprefilterScan: decomposition, non-rescanning and fuel -/

/-- Zero fuel yields no output. -/
theorem divprefilterScan_zero (src : List Nat) : divprefilterScan src 0 = [] := by
  cases src <;> rfl

/-- The empty subject yields no output at every fuel. -/
theorem divprefilterScan_nil (f : Nat) : divprefilterScan [] f = [] := by
  cases f <;> rfl

/-- The scanner's output is empty exactly when the subject is empty or the fuel is exhausted. -/
theorem divprefilterScan_nil_iff (src : List Nat) (f : Nat) :
    divprefilterScan src f = [] ↔ f = 0 ∨ src = [] := by
  constructor
  · intro h
    cases f with
    | zero => exact Or.inl rfl
    | succ f' =>
        cases src with
        | nil => exact Or.inr rfl
        | cons b rest =>
            cases hm : matchLitCI (litBytes "[[/div]]") (b :: rest) with
            | some r1 =>
                cases hd : dpTail r1 with
                | some r2 =>
                    simp [divprefilterScan, hm, hd] at h
                    have hne : litBytes "[[/div]][[div" ≠ [] := by decide
                    exact False.elim (hne h.1)
                | none => simp [divprefilterScan, hm, hd] at h
            | none => simp [divprefilterScan, hm] at h
  · intro h
    rcases h with rfl | rfl
    · exact divprefilterScan_zero _
    · exact divprefilterScan_nil _

/-- With no closer match at the head, one fuel step emits the head byte unchanged and continues in the tail. -/
theorem divprefilterScan_no_match (b : Nat) (rest : List Nat) (f : Nat)
    (hm : matchLitCI (litBytes "[[/div]]") (b :: rest) = none) :
    divprefilterScan (b :: rest) (f + 1) = b :: divprefilterScan rest f := by
  simp [divprefilterScan, hm]

/-- With a closer match whose tail fires, one step emits the constant replacement and continues only in that tail. -/
theorem divprefilterScan_fire (src r1 r2 : List Nat) (f : Nat)
    (h1 : matchLitCI (litBytes "[[/div]]") src = some r1)
    (h2 : dpTail r1 = some r2) :
    divprefilterScan src (f + 1) = dpReplacement ++ divprefilterScan r2 f := by
  cases src with
  | nil => simp [litBytes, matchLitCI] at h1
  | cons b rest => simp [dpReplacement, divprefilterScan, h1, h2]

/-- With a closer match whose tail does not fire, the head byte is kept and scanning continues in the tail. -/
theorem divprefilterScan_dpNone (b : Nat) (rest r1 : List Nat) (f : Nat)
    (h1 : matchLitCI (litBytes "[[/div]]") (b :: rest) = some r1)
    (h2 : dpTail r1 = none) :
    divprefilterScan (b :: rest) (f + 1) = b :: divprefilterScan rest f := by
  simp [divprefilterScan, h1, h2]

/-- Non-rescanning witness: the continuation after a replacement is a strict suffix of the original subject, so neither the consumed match nor the emitted literal is fed back. -/
theorem divprefilterScan_fire_suffix (src r1 r2 : List Nat) (f : Nat)
    (h1 : matchLitCI (litBytes "[[/div]]") src = some r1)
    (h2 : dpTail r1 = some r2) : ∃ pre, src = pre ++ r2 := by
  obtain ⟨pre1, hpre1⟩ := matchLitCI_isSuffix _ _ _ h1
  obtain ⟨pre2, hpre2⟩ := dpTail_suffix _ _ h2
  refine ⟨pre1 ++ pre2, ?_⟩
  calc
    src = pre1 ++ r1 := hpre1
    _ = pre1 ++ (pre2 ++ r2) := by rw [hpre2]
    _ = (pre1 ++ pre2) ++ r2 := by simp [List.append_assoc]

/-- More fuel can only append to the output: the low-fuel output is a prefix of the high-fuel output. -/
theorem divprefilterScan_fuel_prefix (src : List Nat) (f k : Nat) :
    dpIsPrefix (divprefilterScan src f) (divprefilterScan src (f + k)) := by
  induction f generalizing src with
  | zero =>
      refine ⟨divprefilterScan src k, ?_⟩
      simp [divprefilterScan_zero]
  | succ f ih =>
      cases src with
      | nil => exact ⟨[], by simp [divprefilterScan]⟩
      | cons b rest =>
          rw [Nat.succ_add]
          cases hm : matchLitCI (litBytes "[[/div]]") (b :: rest) with
          | none =>
              obtain ⟨t, ht⟩ := ih rest
              refine ⟨t, ?_⟩
              simp [divprefilterScan, hm, ht]
          | some r1 =>
              cases hd : dpTail r1 with
              | none =>
                  obtain ⟨t, ht⟩ := ih rest
                  refine ⟨t, ?_⟩
                  simp [divprefilterScan, hm, hd, ht]
              | some r2 =>
                  obtain ⟨t, ht⟩ := ih r2
                  refine ⟨t, ?_⟩
                  simp [divprefilterScan, hm, hd, ht, List.append_assoc]

/-- Two-fuel sufficiency: any two fuel values at or above the subject length plus one give the same output. The induction is on the first fuel, with the second left arbitrary and strictly decreased in lockstep. -/
theorem divprefilterScan_fuel_eq_of_bound : ∀ (f g : Nat) (src : List Nat),
    src.length + 1 ≤ f → src.length + 1 ≤ g →
    divprefilterScan src f = divprefilterScan src g := by
  intro f
  induction f with
  | zero =>
      intro g src hf hg
      omega
  | succ f ih =>
      intro g src hf hg
      cases g with
      | zero => omega
      | succ g' =>
          cases src with
          | nil => rfl
          | cons b rest =>
              have hf' : rest.length + 2 ≤ f + 1 := by simpa [List.length_cons, Nat.add_assoc] using hf
              have hg' : rest.length + 2 ≤ g' + 1 := by simpa [List.length_cons, Nat.add_assoc] using hg
              have hfrest : rest.length + 1 ≤ f := by omega
              have hgrest : rest.length + 1 ≤ g' := by omega
              cases hm : matchLitCI (litBytes "[[/div]]") (b :: rest) with
              | none =>
                  have hih := ih g' rest hfrest hgrest
                  simp [divprefilterScan, hm, hih]
              | some r1 =>
                  cases hd : dpTail r1 with
                  | none =>
                      have hih := ih g' rest hfrest hgrest
                      simp [divprefilterScan, hm, hd, hih]
                  | some r2 =>
                      have hr1len := matchLitCI_length (litBytes "[[/div]]") (b :: rest) r1 hm
                      have hr2lt := dpTail_length_lt r1 r2 hd
                      have hlitlen : (litBytes "[[/div]]").length = 8 := by decide
                      have hr1len' : (b :: rest).length = 8 + r1.length := by simpa [hlitlen] using hr1len
                      have hlencons : (b :: rest).length = rest.length + 1 := rfl
                      have hf2 : r2.length + 1 ≤ f := by omega
                      have hg2 : r2.length + 1 ≤ g' := by omega
                      have hih := ih g' r2 hf2 hg2
                      simp [divprefilterScan, hm, hd, hih]

/-- Fuel sufficiency: once fuel reaches the subject length plus one, the exact fuel affects nothing. -/
theorem divprefilterScan_fuel_bound (src : List Nat) (f : Nat) (hf : src.length + 1 ≤ f) :
    divprefilterScan src f = divprefilterScan src (src.length + 1) := by
  exact divprefilterScan_fuel_eq_of_bound f (src.length + 1) src hf (by omega)

/-- Fuel independence beyond the canonical bound: adding any extra fuel leaves the output unchanged. -/
theorem divprefilterScan_fuel_add (src : List Nat) (f k : Nat) (hf : src.length + 1 ≤ f) :
    divprefilterScan src (f + k) = divprefilterScan src f := by
  rw [divprefilterScan_fuel_bound src (f + k) (by omega),
      divprefilterScan_fuel_bound src f hf]

/-- The constant replacement contains no placeholder delimiter byte, so the rewrite introduces no token bytes. -/
theorem divprefilterScan_no_ff : ∀ (f : Nat) (src : List Nat),
    ¬ 0xFF ∈ src → ¬ 0xFF ∈ divprefilterScan src f
  | 0, src, h => by simp [divprefilterScan_zero]
  | f + 1, [], h => by simp [divprefilterScan_nil]
  | f + 1, b :: rest, h => by
      have hbne : 0xFF ≠ b := by
        intro hb
        apply h
        simp [hb]
      have hrest : ¬ 0xFF ∈ rest := by
        intro hx
        apply h
        simp [hx]
      cases hm : matchLitCI (litBytes "[[/div]]") (b :: rest) with
      | none =>
          simpa [divprefilterScan, hm, hbne] using divprefilterScan_no_ff f rest hrest
      | some r1 =>
          cases hd : dpTail r1 with
          | none =>
              simpa [divprefilterScan, hm, hd, hbne] using divprefilterScan_no_ff f rest hrest
          | some r2 =>
              obtain ⟨pre1, hpre1⟩ := matchLitCI_isSuffix _ _ _ hm
              obtain ⟨pre2, hpre2⟩ := dpTail_suffix _ _ hd
              have hr2 : ¬ 0xFF ∈ r2 := by
                intro hx
                apply h
                rw [hpre1, hpre2]
                exact List.mem_append.mpr (Or.inr (List.mem_append.mpr (Or.inr hx)))
              have hscan := divprefilterScan_no_ff f r2 hr2
              have hrep : ¬ 0xFF ∈ (litBytes "[[/div]][[div" : List Nat) := by
                decide
              simpa [divprefilterScan, hm, hd, hrep] using hscan

/-- Even if the replacement literal were scanned again at canonical fuel, it is unchanged: no replacement cascade. -/
theorem divprefilterScan_replacement_stable :
    divprefilterScan dpReplacement (dpReplacement.length + 1) = dpReplacement := by
  decide

/-! ## divprefilterRule: token table and field preservation -/

/-- The rule rebuilds only the work field from the scanner's output at canonical fuel. -/
theorem divprefilterRule_eq (st : ParseState) :
    divprefilterRule st =
      { st with work := parseBytes (divprefilterScan (byteForm st.work) ((byteForm st.work).length + 1)) } := rfl

/-- The rule never changes the token table: it claims no tokens, as the mirror's rewrite callback leaves them alone. -/
theorem divprefilterRule_tokens (st : ParseState) : (divprefilterRule st).tokens = st.tokens := rfl

/-- Consequently the token-table length is preserved exactly. -/
theorem divprefilterRule_token_count (st : ParseState) : (divprefilterRule st).tokens.length = st.tokens.length := rfl

/-- The document state is untouched, so no footnote, bibitem or anchor registry changes. -/
theorem divprefilterRule_doc (st : ParseState) : (divprefilterRule st).doc = st.doc := rfl

/-- The parse-fatal flag is untouched. -/
theorem divprefilterRule_fatal (st : ParseState) : (divprefilterRule st).fatal = st.fatal := rfl

/-- All non-work fields are preserved in one structural statement. -/
theorem divprefilterRule_rebuild (st : ParseState) :
    divprefilterRule st = { st with work := (divprefilterRule st).work } := rfl

/-! ## Conditional WFState and TokEquiv components

  F1's TokenStateProof module has no olean in this checked-out tree, so its WFState, TokEquiv, WFSegs and byte-bridge declarations cannot be imported here. The definitions below are local, self-contained mirrors of those shapes; they introduce no axioms, and every dependence on the unproved byte bridge stays an explicit hypothesis rather than a constant.
-/

/-- Local mirror of F1's WFSegs: canonical segments and in-range token references. -/
def dpWFSegs (segs : List TSeg) (n : Nat) : Prop :=
  segs = normSegs segs ∧ ∀ k, TSeg.tok k ∈ segs → k < n

/-- Local mirror of F1's WFBytes as the image of WFSegs under byteForm. -/
def dpWFBytes (bs : List Nat) (n : Nat) : Prop :=
  ∃ segs : List TSeg, dpWFSegs segs n ∧ byteForm segs = bs

/-- Local mirror of F1's WFOptVal and WFOptMap. -/
def dpWFOptVal (n : Nat) (v : OptVal) : Prop :=
  match v with
  | OptVal.bytes bs => dpWFBytes bs n
  | _ => True

def dpWFOptMap (n : Nat) (m : OptMap) : Prop := ∀ kv ∈ m, dpWFOptVal n kv.2

/-- Local mirrors of the byte-pair and byte-id-pair registry invariants. -/
def dpwfBytePairs (n : Nat) (ps : List (List Nat × List Nat)) : Prop :=
  ∀ p ∈ ps, dpWFBytes p.1 n ∧ dpWFBytes p.2 n

def dpwfByteIdPairs (n : Nat) (ps : List (List Nat × Nat)) : Prop :=
  ∀ p ∈ ps, dpWFBytes p.1 n ∧ p.2 < n

/-- Local mirror of F1's WFState, with the same seven conjuncts. -/
def dpWFState (st : ParseState) : Prop :=
  dpWFSegs st.work st.tokens.length ∧
  (∀ t ∈ st.tokens, dpWFOptMap st.tokens.length t.opts) ∧
  (∀ bs ∈ st.doc.footnotes, dpWFBytes bs st.tokens.length) ∧
  dpwfBytePairs st.tokens.length st.doc.bibitems ∧
  dpwfByteIdPairs st.tokens.length st.doc.bibitemIds ∧
  dpwfBytePairs st.tokens.length st.doc.scoredAnchors ∧
  (∀ bs ∈ st.continuedDivLeads, dpWFBytes bs st.tokens.length)

/-- Local mirror of F1's segment alpha relation, with token references reindexed by σ. -/
def dpSegTokEquiv (σ : Nat → Nat) : TSeg → TSeg → Prop
  | TSeg.text cs, TSeg.text cs' => cs = cs'
  | TSeg.tok k, TSeg.tok k' => σ k = k'
  | _, _ => False

/-- Local mirror of F1's list alpha relation. -/
def dpSegsTokEquiv (σ : Nat → Nat) : List TSeg → List TSeg → Prop
  | [], [] => True
  | a :: as, b :: bs => dpSegTokEquiv σ a b ∧ dpSegsTokEquiv σ as bs
  | _, _ => False

/-- Local TokEquiv-shaped relation: work segments alpha-related, token tables identical and fatal flags equal. -/
def dpTokEquiv (σ : Nat → Nat) (st₁ st₂ : ParseState) : Prop :=
  dpSegsTokEquiv σ st₁.work st₂.work ∧ st₁.tokens = st₂.tokens ∧ st₁.fatal = st₂.fatal

/-- The identity instance of the local segment alpha relation. -/
theorem dpSegsTokEquiv_refl (σ : Nat → Nat) (hσ : ∀ k, σ k = k) (ss : List TSeg) :
    dpSegsTokEquiv σ ss ss := by
  induction ss with
  | nil => trivial
  | cons s ss ih =>
      cases s with
      | text cs => exact ⟨rfl, ih⟩
      | tok k => exact ⟨hσ k, ih⟩

/-- Conditional TokEquiv: with a work-segment alpha relation supplied, the unchanged token table and fatal flag finish the relation for free. -/
theorem divprefilterRule_tokEquiv_of_work (σ : Nat → Nat) (st : ParseState)
    (hw : dpSegsTokEquiv σ (divprefilterRule st).work st.work) :
    dpTokEquiv σ (divprefilterRule st) st := by
  exact ⟨hw, rfl, rfl⟩

/-- The identity-renaming instance, conditional on the work bytes round-tripping to the same segments. -/
theorem divprefilterRule_tokEquiv_refl_of_work_eq (σ : Nat → Nat) (hσ : ∀ k, σ k = k) (st : ParseState)
    (hw : (divprefilterRule st).work = st.work) : dpTokEquiv σ (divprefilterRule st) st := by
  apply divprefilterRule_tokEquiv_of_work
  rw [hw]
  exact dpSegsTokEquiv_refl σ hσ st.work

/-- Conditional WFState preservation: if the scanned byte form is the byte form of a locally well-formed segment list at the unchanged token-table length, every other component survives. -/
theorem divprefilterRule_preserves_wf_cond
    (hscan : ∀ (st : ParseState), dpWFState st →
      dpWFSegs (parseBytes (divprefilterScan (byteForm st.work) ((byteForm st.work).length + 1))) st.tokens.length)
    (st : ParseState) (hwf : dpWFState st) : dpWFState (divprefilterRule st) := by
  unfold dpWFState at hwf ⊢
  exact ⟨by simpa [divprefilterRule, applyByteRule] using hscan st hwf,
         by simpa [divprefilterRule, applyByteRule] using hwf.2.1,
         by simpa [divprefilterRule, applyByteRule] using hwf.2.2.1,
         by simpa [divprefilterRule, applyByteRule] using hwf.2.2.2.1,
         by simpa [divprefilterRule, applyByteRule] using hwf.2.2.2.2.1,
         by simpa [divprefilterRule, applyByteRule] using hwf.2.2.2.2.2.1,
         by simpa [divprefilterRule, applyByteRule] using hwf.2.2.2.2.2.2⟩

/-- The byte-bridge component, stated with F1's parseBytes_byteForm_id as a local hypothesis and a named scan-image hypothesis; neither is an asserted constant. -/
theorem divprefilterRule_work_wf_via_bridge
    (parseBytes_byteForm_id : ∀ (segs : List TSeg) (n : Nat), dpWFSegs segs n → parseBytes (byteForm segs) = segs)
    (hscan_image : ∀ (st : ParseState), dpWFState st →
      ∃ segs, dpWFSegs segs st.tokens.length ∧
        byteForm segs = divprefilterScan (byteForm st.work) ((byteForm st.work).length + 1))
    (st : ParseState) (hwf : dpWFState st) : dpWFSegs (divprefilterRule st).work st.tokens.length := by
  obtain ⟨segs, hsegs, hbytes⟩ := hscan_image st hwf
  have hpb := parseBytes_byteForm_id segs st.tokens.length hsegs
  rw [hbytes] at hpb
  simpa [divprefilterRule, applyByteRule, hpb] using hsegs

/-- The full WFState preservation conditional on the same local byte-bridge and scan-image hypotheses. -/
theorem divprefilterRule_preserves_wf_via_bridge
    (parseBytes_byteForm_id : ∀ (segs : List TSeg) (n : Nat), dpWFSegs segs n → parseBytes (byteForm segs) = segs)
    (hscan_image : ∀ (st : ParseState), dpWFState st →
      ∃ segs, dpWFSegs segs st.tokens.length ∧
        byteForm segs = divprefilterScan (byteForm st.work) ((byteForm st.work).length + 1))
    (st : ParseState) (hwf : dpWFState st) : dpWFState (divprefilterRule st) := by
  exact divprefilterRule_preserves_wf_cond
    (fun st' hwf' => by
      obtain ⟨segs, hsegs, hbytes⟩ := hscan_image st' hwf'
      have hpb := parseBytes_byteForm_id segs st'.tokens.length hsegs
      rw [hbytes] at hpb
      simpa [hpb] using hsegs) st hwf

/-! ## Named PcreCore/RefTables correspondence, as section parameters only

  PcreCore and RefTables also lack oleans in this tree, so the named correspondence is carried by abstract section parameters standing for the extracted regex table, the parsed pattern and pregReplaceCallback. No constant is asserted and no axiom is introduced; the reduction below is conditional on those supplied hypotheses.
-/

section PcreRefCorrespondence
variable
  (refRegexTable : List (String × List (List Nat)))
  (PcrePattern : Type)
  (extractedRegex : List Nat)
  (parseExtractedRegex : List Nat → Option PcrePattern)
  (refPattern : PcrePattern)
  (refProcess : List Nat → List Nat)
  (pcreReplaceCallback : PcrePattern → List Nat → (List Nat → List Nat) → List Nat)

/-- The named remainder: the extracted regex is a member of the supplied reference table, PcreCore parses it into the supplied pattern, and the scanner equals the supplied pregReplaceCallback with the process callback. Every one of these is a section hypothesis and the reduction is conditional. -/
theorem divprefilter_ref_correspondence_cond
    (divprefilter_regex_mem : ∃ row : String × List (List Nat),
      row ∈ refRegexTable ∧ row.1 = "divprefilter" ∧ extractedRegex ∈ row.2)
    (divprefilter_pattern_parses_ref : parseExtractedRegex extractedRegex = some refPattern)
    (divprefilter_scan_matches_pcre : ∀ src : List Nat,
      divprefilterScan src (src.length + 1) = pcreReplaceCallback refPattern src refProcess)
    (st : ParseState) :
    divprefilterRule st =
      applyByteRule st (fun src toks => (pcreReplaceCallback refPattern src refProcess, toks)) := by
  simp [divprefilterRule, applyByteRule, divprefilter_scan_matches_pcre]

end PcreRefCorrespondence

end LeanFtml.Middle2.Divprefilter

#print axioms LeanFtml.Middle2.Divprefilter.byteCiEq_refl
#print axioms LeanFtml.Middle2.Divprefilter.byteCiEq_foldcase
#print axioms LeanFtml.Middle2.Divprefilter.isWsByte_scan_class
#print axioms LeanFtml.Middle2.Divprefilter.matchLitCI_empty
#print axioms LeanFtml.Middle2.Divprefilter.matchLitCI_length
#print axioms LeanFtml.Middle2.Divprefilter.matchLitCI_isSuffix
#print axioms LeanFtml.Middle2.Divprefilter.matchLitCI_self_append
#print axioms LeanFtml.Middle2.Divprefilter.matchLitCI_div_prefix_ci
#print axioms LeanFtml.Middle2.Divprefilter.matchLitCI_divclose_ci
#print axioms LeanFtml.Middle2.Divprefilter.matchLitCI_div_prefix_no_close
#print axioms LeanFtml.Middle2.Divprefilter.matchLitCI_lit_none_of_ws
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_nil
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_prefix_hit
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_ws_step
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_stop
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_prefix_literal
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_ws_of_match
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_ws_lazy
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_some_iff
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_none_iff
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_suffix
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_length_lt
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_prefix_needs_no_closer
#print axioms LeanFtml.Middle2.Divprefilter.dpTail_nonws_stops
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_zero
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_nil
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_nil_iff
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_no_match
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_fire
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_dpNone
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_fire_suffix
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_fuel_prefix
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_fuel_eq_of_bound
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_fuel_bound
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_fuel_add
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_no_ff
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterScan_replacement_stable
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_eq
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_tokens
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_token_count
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_doc
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_fatal
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_rebuild
#print axioms LeanFtml.Middle2.Divprefilter.dpSegsTokEquiv_refl
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_tokEquiv_of_work
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_tokEquiv_refl_of_work_eq
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_preserves_wf_cond
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_work_wf_via_bridge
#print axioms LeanFtml.Middle2.Divprefilter.divprefilterRule_preserves_wf_via_bridge
#print axioms LeanFtml.Middle2.Divprefilter.divprefilter_ref_correspondence_cond
