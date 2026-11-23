/-
  ProofNotes.lean — proof lane for the footnote and notes family. Unimported by LeanFtml.lean and Main.lean; the coordinator wires the import at adoption. The theorems are about the mirror functions in NotesRules.lean and NotesRender.lean: token-aware footnote emptiness, the unconditional REFCORR11 C0-control filter, and the round-5e ESC shape. `refStored` / `phpBreak` are the reference Footnote::process break test (`/[^\n]\n(?!\n)/` after trim and the C0 strip), used only to name where the mirror's `hasSingleBreakByte` diverges from that regex. No sorry, no native_decide.
-/

import LeanFtml.NotesRender

set_option maxRecDepth 10000

namespace LeanFtml

/-! ## C0 class -/

/-- Live's dropped C0 byte, as a proposition: below 0x20, except TAB, LF and CR. -/
theorem isLiveDroppedControl_iff (b : Nat) :
    isLiveDroppedControl b = true ↔ b < 32 ∧ b ≠ 9 ∧ b ≠ 10 ∧ b ≠ 13 := by
  simp [isLiveDroppedControl, Bool.and_eq_true, bne_iff_ne, decide_eq_true_eq, and_assoc]

/-- The 29 dropped bytes below 0x20, decided exhaustively. ESC 27 sits in the `List.range'` tail. -/
theorem c0_dropped_bytes :
    (List.range 32).filter isLiveDroppedControl =
      [0, 1, 2, 3, 4, 5, 6, 7, 8, 11, 12] ++ List.range' 14 18 := by
  decide

theorem esc_is_dropped : isLiveDroppedControl 27 = true := by decide

theorem del_is_kept : isLiveDroppedControl 127 = false := by decide

theorem tab_lf_cr_kept :
    isLiveDroppedControl 9 = false ∧
      isLiveDroppedControl 10 = false ∧
      isLiveDroppedControl 13 = false := by
  decide

/-- A shield byte survives PHP `trim` (so it can protect a trailing LF) and is then deleted by the C0 filter. -/
def shieldByte (b : Nat) : Bool :=
  isLiveDroppedControl b && !isTrimByte b

theorem shield_bytes :
    (List.range 32).filter shieldByte =
      [1, 2, 3, 4, 5, 6, 7, 8, 12] ++ List.range' 14 18 := by
  decide

theorem shield_ge_32 (b : Nat) (h : 32 ≤ b) : shieldByte b = false := by
  have hlt : decide (b < 32) = false := decide_eq_false (Nat.not_lt.mpr h)
  simp [shieldByte, isLiveDroppedControl, hlt]

theorem stripLiveDroppedControls_pure {bs : List Nat} {b : Nat}
    (h : b ∈ stripLiveDroppedControls bs) : isLiveDroppedControl b = false := by
  have ⟨_, hp⟩ := List.mem_filter.mp h
  simpa [stripLiveDroppedControls, Bool.not_eq_true] using hp

/-! ## Stored footnote body -/

/-- Body after PHP trim and the unconditional C0 filter. Both branches of `footnoteProcess` read this. -/
def footnotePure (body : List Nat) : List Nat :=
  stripLiveDroppedControls (trimBytes body)

/-- Mirror `footnoteProcess` content: keep `footnotePure` when it has an interior single break, otherwise the trimmed empty-Raw projection. -/
def footnoteStored (body : List Nat) (toks : List TokenEntry) : List Nat :=
  let pure := footnotePure body
  if hasSingleBreakByte pure then pure
  else trimBytes (stripEmptyRawPhNotes pure toks)

theorem footnote_keeps_on_break (body : List Nat) (toks : List TokenEntry)
    (h : hasSingleBreakByte (footnotePure body) = true) :
    footnoteStored body toks = footnotePure body := by
  simp [footnoteStored, h]

theorem footnote_folds_without_break (body : List Nat) (toks : List TokenEntry)
    (h : hasSingleBreakByte (footnotePure body) = false) :
    footnoteStored body toks =
      trimBytes (stripEmptyRawPhNotes (footnotePure body) toks) := by
  simp [footnoteStored, h]

theorem footnoteProcess_footnotes (body : List Nat) (doc : DocState) (toks : List TokenEntry) :
    (footnoteProcess body doc toks).2.2.footnotes =
      doc.footnotes ++ [footnoteStored body toks] := rfl

theorem footnoteProcess_placeholder (body : List Nat) (doc : DocState) (toks : List TokenEntry) :
    (footnoteProcess body doc toks).1 = phBytes toks.length := rfl

/-! ## Reference break test -/

/-- Local step of `/[^\n]\n(?!\n)/`. The LF test is an `if`, so a head other than LF reduces by rewriting `==`. -/
def herePhp (b : Nat) (rest : List Nat) : Bool :=
  match rest with
  | [] => false
  | c :: post =>
      if c == 10 then
        match post with
        | [] => b != 10
        | d :: _ => b != 10 && d != 10
      else
        false

/-- The PHP regex `/[^\n]\n(?!\n)/`: a non-LF, an LF, then either end of string or a non-LF. End of string succeeds; `hasSingleBreakByte` does not. -/
def phpBreak : List Nat → Bool
  | [] => false
  | b :: rest => herePhp b rest || phpBreak rest

/-- Reference `Footnote::process` content, using `phpBreak` in place of `hasSingleBreakByte`. -/
def refStored (body : List Nat) (toks : List TokenEntry) : List Nat :=
  let pure := footnotePure body
  if phpBreak pure then pure
  else trimBytes (stripEmptyRawPhNotes pure toks)

/-- An LF with a non-LF byte on both sides. This is exactly `hasSingleBreakByte`. -/
def Interior (bs : List Nat) : Prop :=
  ∃ pre b c post, b ≠ 10 ∧ c ≠ 10 ∧ bs = pre ++ [b, 10, c] ++ post

/-- A non-LF byte and an LF at the very end. The regex accepts this; the mirror does not. -/
def Trailing (bs : List Nat) : Prop :=
  ∃ pre b, b ≠ 10 ∧ bs = pre ++ [b, 10]

theorem single_go_nil (prev : Bool) :
    hasSingleBreakByte.go prev ([] : List Nat) = false := rfl

theorem single_go_lf (prev : Bool) (rest : List Nat) :
    hasSingleBreakByte.go prev (10 :: rest) =
      ((prev &&
            match rest with
            | b :: _ => b != 10
            | [] => false) ||
          hasSingleBreakByte.go false rest) := rfl

theorem single_go_nonlf (prev : Bool) (b : Nat) (rest : List Nat) (hb : b ≠ 10) :
    hasSingleBreakByte.go prev (b :: rest) = hasSingleBreakByte.go true rest :=
  hasSingleBreakByte.go.eq_4 prev b rest hb

theorem hasSingleBreakByte_eq (bs : List Nat) :
    hasSingleBreakByte bs = hasSingleBreakByte.go false bs := rfl

theorem Interior_cons_lf (rest : List Nat) :
    Interior (10 :: rest) ↔ Interior rest := by
  constructor
  · rintro ⟨pre, b, c, post, hb, hc, heq⟩
    have heq' : 10 :: rest = pre ++ ([b, 10, c] ++ post) := by
      simpa [List.append_assoc] using heq
    rcases List.cons_eq_append_iff.mp heq' with ⟨rfl, htail⟩ | ⟨pre', rfl, htail⟩
    · simp at htail
      exact absurd htail.1 hb
    · exact ⟨pre', b, c, post, hb, hc, by simpa [List.append_assoc] using htail⟩
  · rintro ⟨pre, b, c, post, hb, hc, heq⟩
    exact ⟨10 :: pre, b, c, post, hb, hc, by simp [heq]⟩

theorem Interior_cons_nonlf {b : Nat} {rest : List Nat} (hb : b ≠ 10) :
    Interior (b :: rest) ↔
      (∃ c post, c ≠ 10 ∧ rest = 10 :: c :: post) ∨ Interior rest := by
  constructor
  · rintro ⟨pre, b', c, post, hb', hc, heq⟩
    have heq' : b :: rest = pre ++ ([b', 10, c] ++ post) := by
      simpa [List.append_assoc] using heq
    rcases List.cons_eq_append_iff.mp heq' with ⟨rfl, htail⟩ | ⟨pre', rfl, htail⟩
    · simp at htail
      exact Or.inl ⟨c, post, hc, htail.2.symm⟩
    · exact Or.inr ⟨pre', b', c, post, hb', hc, by simpa [List.append_assoc] using htail⟩
  · rintro (⟨c, post, hc, heq⟩ | ⟨pre, b', c, post, hb', hc, heq⟩)
    · exact ⟨[], b, c, post, hb, hc, by simp [heq]⟩
    · exact ⟨b :: pre, b', c, post, hb', hc, by simp [heq]⟩

theorem Interior_tail {b : Nat} {rest : List Nat} (h : Interior rest) :
    Interior (b :: rest) := by
  rcases h with ⟨pre, b', c, post, hb, hc, heq⟩
  exact ⟨b :: pre, b', c, post, hb, hc, by simp [heq]⟩

theorem single_go_iff (prev : Bool) (bs : List Nat) :
    hasSingleBreakByte.go prev bs = true ↔
      ((prev = true ∧ ∃ c post, c ≠ 10 ∧ bs = 10 :: c :: post) ∨ Interior bs) := by
  induction bs generalizing prev with
  | nil =>
      constructor
      · intro h
        simp [single_go_nil] at h
      · intro h
        rcases h with ⟨_, _, _, _, heq⟩ | ⟨pre, _, _, _, _, _, heq⟩
        · cases heq
        · cases pre <;> simp at heq
  | cons hd tl ih =>
      by_cases hhd : hd = 10
      · subst hhd
        rw [single_go_lf]
        simp only [Bool.or_eq_true, Bool.and_eq_true]
        constructor
        · intro h
          rcases h with ⟨hprev, hnext⟩ | hrec
          · subst hprev
            left
            cases tl with
            | nil => simp at hnext
            | cons c post =>
                simp at hnext
                exact ⟨rfl, c, post, hnext, rfl⟩
          · rcases (ih false).mp hrec with ⟨hf, _⟩ | hint
            · cases hf
            · exact Or.inr ((Interior_cons_lf tl).mpr hint)
        · intro h
          rcases h with ⟨hprev, c, post, hc, heq⟩ | hint
          · cases heq
            subst hprev
            left
            refine ⟨rfl, ?_⟩
            simp [bne_iff_ne.mpr hc]
          · exact Or.inr ((ih false).mpr (Or.inr ((Interior_cons_lf tl).mp hint)))
      · rw [single_go_nonlf prev hd tl hhd, ih true]
        constructor
        · intro h
          rcases h with ⟨_, c, post, hc, heq⟩ | hint
          · exact Or.inr ⟨[], hd, c, post, hhd, hc, by simp [heq]⟩
          · exact Or.inr ((Interior_cons_nonlf hhd).mpr (Or.inr hint))
        · intro h
          rcases h with ⟨_, _, _, _, heq⟩ | hint
          · cases heq
            exact absurd rfl hhd
          · rcases (Interior_cons_nonlf hhd).mp hint with ⟨c, post, hc, heq⟩ | htail
            · exact Or.inl ⟨rfl, c, post, hc, heq⟩
            · exact Or.inr htail

theorem hasSingleBreakByte_iff_interior (bs : List Nat) :
    hasSingleBreakByte bs = true ↔ Interior bs := by
  rw [hasSingleBreakByte_eq, single_go_iff]
  constructor
  · intro h
    rcases h with ⟨hf, _⟩ | hint
    · cases hf
    · exact hint
  · intro hint
    exact Or.inr hint

theorem phpBreak_cons (b : Nat) (rest : List Nat) :
    phpBreak (b :: rest) = (herePhp b rest || phpBreak rest) := rfl

theorem herePhp_iff (b : Nat) (rest : List Nat) :
    herePhp b rest = true ↔
      b ≠ 10 ∧ (rest = [10] ∨ ∃ c post, c ≠ 10 ∧ rest = 10 :: c :: post) := by
  cases rest with
  | nil => simp [herePhp]
  | cons c post =>
      by_cases hc : c = 10
      · subst hc
        cases post with
        | nil =>
            simp [herePhp, bne_iff_ne]
            constructor
            · intro hb
              exact ⟨hb, Or.inl rfl⟩
            · intro ⟨hb, _⟩
              exact hb
        | cons d post' =>
            simp [herePhp, bne_iff_ne, Bool.and_eq_true]
            constructor
            · intro ⟨hb, hd⟩
              exact ⟨hb, Or.inr ⟨d, post', hd, rfl⟩⟩
            · intro ⟨hb, hrest⟩
              rcases hrest with h10 | ⟨c', _, hc', heq⟩
              · injection h10
              · injection heq with _ hd
                exact ⟨hb, hd ▸ hc'⟩
      · have hc' : (c == 10) = false := beq_eq_false_iff_ne.mpr hc
        have hfalse : herePhp b (c :: post) = false := by simp [herePhp, hc']
        rw [hfalse]
        constructor
        · intro h
          cases h
        · intro ⟨_, h10 | ⟨_, _, _, heq⟩⟩
          · cases post with
            | nil =>
                injection h10 with hceq
                exact absurd hceq hc
            | cons _ _ =>
                injection h10 with hceq hbad
                cases hbad
          · injection heq with hceq
            exact absurd hceq hc

theorem phpBreak_iff_pattern (bs : List Nat) :
    phpBreak bs = true ↔ Interior bs ∨ Trailing bs := by
  induction bs with
  | nil =>
      constructor
      · intro h
        simp [phpBreak] at h
      · intro h
        rcases h with ⟨pre, _, _, _, _, _, heq⟩ | ⟨pre, _, _, heq⟩
        · cases pre <;> simp at heq
        · cases pre <;> simp at heq
  | cons b rest ih =>
      rw [phpBreak_cons, Bool.or_eq_true]
      constructor
      · intro h
        rcases h with hhere | hrest
        · rw [herePhp_iff] at hhere
          rcases hhere with ⟨hb, h10 | ⟨c, post, hc, heq⟩⟩
          · exact Or.inr ⟨[], b, hb, by simp [h10]⟩
          · exact Or.inl ⟨[], b, c, post, hb, hc, by simp [heq]⟩
        · rcases ih.mp hrest with hint | ⟨pre, b', hb', heq⟩
          · exact Or.inl (Interior_tail hint)
          · exact Or.inr ⟨b :: pre, b', hb', by simp [heq]⟩
      · intro h
        rcases h with hint | ⟨pre, b', hb', heq⟩
        · by_cases hb : b = 10
          · subst hb
            exact Or.inr (ih.mpr (Or.inl ((Interior_cons_lf rest).mp hint)))
          · rcases (Interior_cons_nonlf hb).mp hint with ⟨c, post, hc, heq⟩ | htail
            · exact Or.inl ((herePhp_iff b rest).mpr ⟨hb, Or.inr ⟨c, post, hc, heq⟩⟩)
            · exact Or.inr (ih.mpr (Or.inl htail))
        · rcases List.cons_eq_append_iff.mp heq with ⟨rfl, htail⟩ | ⟨pre', rfl, htail⟩
          · simp at htail
            rcases htail with ⟨rfl, hrest⟩
            exact Or.inl ((herePhp_iff b' rest).mpr ⟨hb', Or.inl hrest.symm⟩)
          · exact Or.inr (ih.mpr (Or.inr ⟨pre', b', hb', htail⟩))

theorem lean_break_imp_php (bs : List Nat) (h : hasSingleBreakByte bs = true) :
    phpBreak bs = true :=
  phpBreak_iff_pattern.mpr (Or.inl (hasSingleBreakByte_iff_interior.mp h))

theorem trailing_last {bs : List Nat} (h : Trailing bs) : bs.getLast? = some 10 := by
  rcases h with ⟨pre, b, _, heq⟩
  simp [heq, List.getLast?_append]

theorem php_not_lean_last {bs : List Nat}
    (hp : phpBreak bs = true) (hl : hasSingleBreakByte bs = false) :
    bs.getLast? = some 10 := by
  have hn : ¬ Interior bs := by
    intro hint
    have htrue := hasSingleBreakByte_iff_interior.mpr hint
    simp [hl] at htrue
  rcases phpBreak_iff_pattern.mp hp with hint | htrail
  · exact absurd hint hn
  · exact trailing_last htrail

/-! ## Empty-Raw strip preserves a trailing LF and control purity -/

theorem go_zero (bs : List Nat) (toks : List TokenEntry) :
    stripEmptyRawPhNotes.go bs 0 toks = [] := by
  cases bs <;> rfl

theorem go_nil (fuel : Nat) (toks : List TokenEntry) :
    stripEmptyRawPhNotes.go [] fuel toks = [] :=
  stripEmptyRawPhNotes.go.eq_1 fuel toks

theorem go_ff (rest : List Nat) (fuel : Nat) (toks : List TokenEntry) :
    stripEmptyRawPhNotes.go (0xFF :: rest) (fuel + 1) toks =
      (let (digits, tail) := rest.span (fun b => 48 <= b && b <= 57)
        match tail with
        | 0xFF :: rest2 =>
            let id := digits.foldl (fun a b => a * 10 + (b - 48)) 0
            if !digits.isEmpty && isEmptyRawTokNotes toks id then
              stripEmptyRawPhNotes.go rest2 fuel toks
            else
              0xFF :: stripEmptyRawPhNotes.go rest fuel toks
        | _ => 0xFF :: stripEmptyRawPhNotes.go rest fuel toks) := rfl

theorem go_nonff {b : Nat} {rest : List Nat} {fuel : Nat} {toks : List TokenEntry}
    (h : b ≠ 0xFF) :
    stripEmptyRawPhNotes.go (b :: rest) (fuel + 1) toks =
      b :: stripEmptyRawPhNotes.go rest fuel toks :=
  stripEmptyRawPhNotes.go.eq_4 toks b rest fuel h

theorem span_loop_spec (p : Nat → Bool) (acc as : List Nat) :
    (List.span.loop p as acc).1 ++ (List.span.loop p as acc).2 = acc.reverse ++ as := by
  induction as generalizing acc with
  | nil => rw [List.span.loop.eq_1]
  | cons a as ih =>
      rw [List.span.loop.eq_2]
      split
      · simpa [List.reverse_cons, List.append_assoc] using ih (a :: acc)
      · simp

theorem span_append (p : Nat → Bool) (l : List Nat) :
    (l.span p).1 ++ (l.span p).2 = l := by
  simpa [List.span] using span_loop_spec p [] l

private theorem mem_suffix_of_span {rest digits tail : List Nat} {t : Nat} {rest2 : List Nat}
    (hspan : rest.span (fun b => decide (48 ≤ b) && decide (b ≤ 57)) = (digits, tail))
    (htail : tail = t :: rest2) {x : Nat} (hx : x ∈ rest2) : x ∈ rest := by
  have happ := span_append (fun b => decide (48 ≤ b) && decide (b ≤ 57)) rest
  rw [hspan, htail] at happ
  have : x ∈ digits ++ (t :: rest2) := List.mem_append_right _ (List.mem_cons_of_mem t hx)
  simpa [happ] using this

theorem go_pure (toks : List TokenEntry) (fuel : Nat) (bs : List Nat)
    (hpure : ∀ x ∈ bs, isLiveDroppedControl x = false) {b : Nat}
    (hb : b ∈ stripEmptyRawPhNotes.go bs fuel toks) : isLiveDroppedControl b = false := by
  induction fuel generalizing bs b with
  | zero =>
      rw [go_zero] at hb
      cases hb
  | succ fuel ih =>
      cases bs with
      | nil =>
          rw [go_nil] at hb
          cases hb
      | cons hd tl =>
          by_cases hff : hd = 0xFF
          · subst hff
            rw [stripEmptyRawPhNotes.go.eq_3 toks tl fuel] at hb
            split at hb
            · next digits tail heq =>
                split at hb
                · next rest2 id heq2 =>
                    let nid := digits.foldl (fun a b => a * 10 + (b - 48)) 0
                    by_cases hdrop :
                        (!digits.isEmpty && isEmptyRawTokNotes toks nid) = true
                    · simp [nid, hdrop] at hb
                      exact ih heq2
                        (fun x hx => hpure x
                          (List.mem_cons_of_mem _ (mem_suffix_of_span heq rfl hx))) hb
                    · simp [nid, hdrop] at hb
                      rcases List.mem_cons.mp hb with rfl | hb
                      · exact hpure 0xFF List.mem_cons_self
                      · exact ih tl (fun x hx => hpure x (List.mem_cons_of_mem _ hx)) hb
                · rcases List.mem_cons.mp hb with rfl | hb
                  · exact hpure 0xFF List.mem_cons_self
                  · exact ih tl (fun x hx => hpure x (List.mem_cons_of_mem _ hx)) hb
          · rw [go_nonff hff] at hb
            rcases List.mem_cons.mp hb with rfl | hb
            · exact hpure hd List.mem_cons_self
            · exact ih tl (fun x hx => hpure x (List.mem_cons_of_mem _ hx)) hb

theorem stripEmptyRawPhNotes_pure {bs : List Nat} {toks : List TokenEntry}
    (hpure : ∀ x ∈ bs, isLiveDroppedControl x = false) {b : Nat}
    (hb : b ∈ stripEmptyRawPhNotes bs toks) : isLiveDroppedControl b = false :=
  go_pure toks bs.length bs hpure hb

theorem trimBytes_subset {b : Nat} {bs : List Nat} (h : b ∈ trimBytes bs) : b ∈ bs := by
  simp only [trimBytes] at h
  have h1 : b ∈ (bs.dropWhile isTrimByte).reverse.dropWhile isTrimByte :=
    List.mem_reverse.mp h
  have h2 : b ∈ (bs.dropWhile isTrimByte).reverse :=
    List.dropWhile_subset isTrimByte h1
  have h3 : b ∈ bs.dropWhile isTrimByte := List.mem_reverse.mp h2
  exact List.dropWhile_subset isTrimByte h3

theorem dropWhile_head_neg {p : Nat → Bool} {l : List Nat} {a : Nat}
    (h : (l.dropWhile p).head? = some a) : p a = false := by
  induction l with
  | nil => simp [List.dropWhile] at h
  | cons x xs ih =>
      simp only [List.dropWhile] at h
      split at h
      · exact ih h
      · next hnot =>
          simp only [List.head?_cons, Option.some.injEq] at h
          subst h
          exact hnot

theorem trimBytes_last_not_trim {bs : List Nat} {b : Nat}
    (h : (trimBytes bs).getLast? = some b) : isTrimByte b = false := by
  have hhead :
      ((bs.dropWhile isTrimByte).reverse.dropWhile isTrimByte).head? = some b := by
    simpa [trimBytes, List.getLast?_eq_head?_reverse, List.reverse_reverse] using h
  exact dropWhile_head_neg hhead

private theorem append_getLast_of_ne_nil {l r : List Nat} (h : r ≠ []) :
    (l ++ r).getLast? = r.getLast? := by
  rw [List.getLast?_append, List.getLast?_eq_some_getLast h, Option.some_or]

private theorem go_cons_last (toks : List TokenEntry) (fuel : Nat) (hd : Nat) (tl : List Nat)
    (htl : tl.length ≤ fuel) (hlast : (hd :: tl).getLast? = some 10)
    (ih : ∀ bs, bs.length ≤ fuel → bs.getLast? = some 10 →
      (stripEmptyRawPhNotes.go bs fuel toks).getLast? = some 10) :
    (hd :: stripEmptyRawPhNotes.go tl fuel toks).getLast? = some 10 := by
  cases tl with
  | nil =>
      simp [List.getLast?_cons, List.getLast?_nil] at hlast
      subst hlast
      rw [go_nil]
      simp [List.getLast?_cons, List.getLast?_nil]
  | cons y ys =>
      have htl_last : (y :: ys).getLast? = some 10 := by
        rw [List.getLast?_cons_of_ne_nil (by simp)] at hlast
        exact hlast
      have hgo := ih (y :: ys) htl htl_last
      have hne : stripEmptyRawPhNotes.go (y :: ys) fuel toks ≠ [] := by
        intro hempty
        simp [hempty, List.getLast?_nil] at hgo
      rw [List.getLast?_cons_of_ne_nil hne]
      exact hgo

private theorem go_last_aux (toks : List TokenEntry) :
    ∀ fuel bs, bs.length ≤ fuel → bs.getLast? = some 10 →
      (stripEmptyRawPhNotes.go bs fuel toks).getLast? = some 10 := by
  intro fuel
  induction fuel with
  | zero =>
      intro bs hlen hlast
      cases bs with
      | nil => simp at hlast
      | cons => simp at hlen
  | succ fuel ih =>
      intro bs hlen hlast
      cases bs with
      | nil => simp at hlast
      | cons hd tl =>
          have htl : tl.length ≤ fuel := Nat.le_of_succ_le_succ hlen
          by_cases hff : hd = 0xFF
          · subst hff
            rw [stripEmptyRawPhNotes.go.eq_3 toks tl fuel]
            split
            · next digits tail heq =>
                split
                · next rest2 id heq2 =>
                    let nid := digits.foldl (fun a b => a * 10 + (b - 48)) 0
                    by_cases hdrop :
                        (!digits.isEmpty && isEmptyRawTokNotes toks nid) = true
                    · simp [nid, hdrop]
                      have htl_eq : digits ++ (0xFF :: heq2) = tl := by
                        simpa [heq] using
                          span_append (fun b => decide (48 ≤ b) && decide (b ≤ 57)) tl
                      have hrestlen : heq2.length ≤ fuel := by
                        have hle : heq2.length ≤ tl.length := by
                          have h1 : heq2.length ≤ (0xFF :: heq2).length := Nat.le_succ _
                          have h2 : (0xFF :: heq2).length ≤
                              digits.length + (0xFF :: heq2).length := Nat.le_add_left _ _
                          have h3 : digits.length + (0xFF :: heq2).length = tl.length := by
                            simpa [List.length_append] using congrArg List.length htl_eq
                          exact Nat.le_trans (Nat.le_trans h1 h2) (Nat.le_of_eq h3)
                        exact Nat.le_trans hle htl
                      cases heq2 with
                      | nil =>
                          have : (0xFF :: tl).getLast? = some 0xFF := by
                            have htl' : tl = digits ++ [0xFF] := by simpa using htl_eq
                            rw [htl', List.getLast?_cons_of_ne_nil (by simp)]
                            exact List.getLast?_concat
                          rw [this] at hlast
                          injection hlast with hbad
                          exact absurd hbad (by decide)
                      | cons r rs =>
                          have hlast2 : (r :: rs).getLast? = some 10 := by
                            have htl' : tl = digits ++ (0xFF :: r :: rs) := htl_eq
                            have : (0xFF :: tl).getLast? = (r :: rs).getLast? := by
                              rw [htl', List.getLast?_cons_of_ne_nil (by simp)]
                              rw [append_getLast_of_ne_nil (by simp : (0xFF :: r :: rs) ≠ [])]
                              exact List.getLast?_cons_cons
                            exact this ▸ hlast
                          exact ih (r :: rs) hrestlen hlast2
                    · simp [nid, hdrop]
                      exact go_cons_last toks fuel 0xFF tl htl hlast ih
                · exact go_cons_last toks fuel 0xFF tl htl hlast ih
          · rw [go_nonff hff]
            exact go_cons_last toks fuel hd tl htl hlast ih

theorem strip_preserves_trailing_lf {bs : List Nat} {toks : List TokenEntry}
    (h : bs.getLast? = some 10) :
    (stripEmptyRawPhNotes bs toks).getLast? = some 10 :=
  go_last_aux toks bs.length bs (Nat.le_refl _) h

theorem pure_ne_visible_when_trailing_lf {pure : List Nat} {toks : List TokenEntry}
    (hlast : pure.getLast? = some 10) :
    pure ≠ trimBytes (stripEmptyRawPhNotes pure toks) := by
  intro heq
  have htrim :
      (trimBytes (stripEmptyRawPhNotes pure toks)).getLast? = some 10 := by
    simpa [heq] using hlast
  have hnot : isTrimByte 10 = false := trimBytes_last_not_trim htrim
  have htrue : isTrimByte 10 = true := by decide
  rw [htrue] at hnot
  cases hnot

theorem footnote_ref_disagree_iff (body : List Nat) (toks : List TokenEntry) :
    footnoteStored body toks ≠ refStored body toks ↔
      hasSingleBreakByte (footnotePure body) = false ∧ phpBreak (footnotePure body) = true := by
  let pure := footnotePure body
  let vis := trimBytes (stripEmptyRawPhNotes pure toks)
  have hs : footnoteStored body toks = if hasSingleBreakByte pure then pure else vis := by
    simp [footnoteStored, pure, vis]
  have hr : refStored body toks = if phpBreak pure then pure else vis := by
    simp [refStored, pure, vis]
  cases hL : hasSingleBreakByte pure <;> cases hP : phpBreak pure
  · simp only [hs, hr, hL, hP]; simp
  · simp only [hs, hr, hL, hP]
    exact Ne.symm (pure_ne_visible_when_trailing_lf (php_not_lean_last hP hL))
  · have hbad := lean_break_imp_php pure hL
    simp [hP] at hbad
  · simp only [hs, hr, hL, hP]; simp

theorem footnoteStored_control_pure (body : List Nat) (toks : List TokenEntry) {b : Nat}
    (h : b ∈ footnoteStored body toks) : isLiveDroppedControl b = false := by
  cases hbr : hasSingleBreakByte (footnotePure body) with
  | true =>
      rw [footnote_keeps_on_break body toks hbr] at h
      exact stripLiveDroppedControls_pure h
  | false =>
      rw [footnote_folds_without_break body toks hbr] at h
      have hsub : b ∈ stripEmptyRawPhNotes (footnotePure body) toks := trimBytes_subset h
      exact stripEmptyRawPhNotes_pure
        (fun x hx => stripLiveDroppedControls_pure hx) hsub

/-! ## One-byte suffix after `X\\n`: disagreement is exactly the 27 shield bytes. -/

set_option maxHeartbeats 4000000 in
theorem x_lf_suffix_class :
    (List.range 256).all (fun s =>
        let leanB := footnoteStored [88, 10, s] []
        let refB := refStored [88, 10, s] []
        if shieldByte s then leanB == [88] && refB == [88, 10] else leanB == refB) = true := by
  decide

/-! ## Token-aware emptiness -/

def emptyRawPair : List TokenEntry :=
  [{ rule := "Raw", opts := [("text".toList, OptVal.str [])] },
   { rule := "Raw", opts := [("text".toList, OptVal.str [])] }]

/-- A single LF between two empty-Raw placeholders is stored intact, while the visible projection is empty. -/
theorem token_aware_break_keeps_visible_empty :
    let body := phBytes 0 ++ [10] ++ phBytes 1
    footnoteStored body emptyRawPair = body ∧
      trimBytes (stripEmptyRawPhNotes body emptyRawPair) = [] ∧
      hasSingleBreakByte body = true ∧
      phpBreak body = true := by
  decide

/-! ## Separator predicates agree on control-pure bodies -/

def lineBytes (bs : List Nat) : List Nat :=
  bs.takeWhile (fun b => b != 10)

/-- Lean lead test: a non-trim byte on the first line. `footnoteLeadVisible` is this test after the empty-Raw strip. -/
def leanLeadNonempty (bs : List Nat) : Bool :=
  !((lineBytes bs).filter (fun b => !isTrimByte b)).isEmpty

/-- PHP `Footnoteitem` regex `/^[^\n]*[^ \t\n\r\x0B\x0C]/` on a line that contains no LF: a byte outside space, TAB, CR, VT and FF. -/
def phpSepByte (b : Nat) : Bool :=
  b != 32 && b != 9 && b != 13 && b != 11 && b != 12

def phpLeadNonempty (bs : List Nat) : Bool :=
  (lineBytes bs).any phpSepByte

theorem isTrimByte_iff (b : Nat) :
    isTrimByte b = true ↔ b = 32 ∨ b = 9 ∨ b = 10 ∨ b = 13 ∨ b = 0 ∨ b = 11 := by
  simp [isTrimByte, Bool.or_eq_true, beq_iff_eq, or_assoc]

theorem phpSepByte_iff (b : Nat) :
    phpSepByte b = true ↔ b ≠ 32 ∧ b ≠ 9 ∧ b ≠ 13 ∧ b ≠ 11 ∧ b ≠ 12 := by
  simp [phpSepByte, Bool.and_eq_true, bne_iff_ne, and_assoc]

theorem mem_takeWhile {p : Nat → Bool} {l : List Nat} {x : Nat}
    (h : x ∈ l.takeWhile p) : p x = true ∧ x ∈ l := by
  induction l with
  | nil => simp at h
  | cons y ys ih =>
      simp only [List.takeWhile] at h
      split at h
      · next hp =>
          simp only [List.mem_cons] at h
          rcases h with rfl | h
          · exact ⟨hp, List.mem_cons_self⟩
          · rcases ih h with ⟨hq, hm⟩
            exact ⟨hq, List.mem_cons_of_mem _ hm⟩
      · simp at h

theorem sep_class_on_pure (b : Nat) (hn : b ≠ 10) (hp : isLiveDroppedControl b = false) :
    (!isTrimByte b) = phpSepByte b := by
  have hnot : ¬ (b < 32 ∧ b ≠ 9 ∧ b ≠ 10 ∧ b ≠ 13) := by
    intro hd
    have := (isLiveDroppedControl_iff b).mpr hd
    simp [hp] at this
  cases ht : isTrimByte b <;> cases hs : phpSepByte b
  · have htrim_false : isTrimByte b = false := ht
    have hphp_false : phpSepByte b = false := hs
    have hnotphp : ¬ (b ≠ 32 ∧ b ≠ 9 ∧ b ≠ 13 ∧ b ≠ 11 ∧ b ≠ 12) := by
      intro hall
      have := (phpSepByte_iff b).mpr hall
      simp [hphp_false] at this
    by_cases h32 : b = 32
    · simp [h32, isTrimByte] at htrim_false
    · by_cases h9 : b = 9
      · simp [h9, isTrimByte] at htrim_false
      · by_cases h13 : b = 13
        · simp [h13, isTrimByte] at htrim_false
        · by_cases h11 : b = 11
          · simp [h11, isTrimByte] at htrim_false
          · by_cases h12 : b = 12
            · subst h12
              exact (hnot ⟨by decide, by decide, hn, by decide⟩).elim
            · exact (hnotphp ⟨h32, h9, h13, h11, h12⟩).elim
  · rfl
  · rfl
  · have hmem := (isTrimByte_iff b).mp ht
    have hphp := (phpSepByte_iff b).mp hs
    rcases hmem with rfl | rfl | rfl | rfl | rfl | rfl
    · exact absurd rfl hphp.1
    · exact absurd rfl hphp.2.1
    · exact absurd rfl hn
    · exact absurd rfl hphp.2.2.1
    · exact (hnot ⟨by decide, by decide, by decide, by decide⟩).elim
    · exact (hnot ⟨by decide, by decide, by decide, by decide⟩).elim

private theorem any_false_iff {l : List Nat} {p : Nat → Bool} :
    l.any p = false ↔ ∀ x ∈ l, p x = false := by
  induction l with
  | nil => simp
  | cons a as ih =>
      simp only [List.any_cons, Bool.or_eq_false_iff, ih, List.mem_cons]
      constructor
      · intro ⟨ha, hall⟩ x hx
        rcases hx with rfl | hx
        · exact ha
        · exact hall x hx
      · intro hall
        exact ⟨hall a (Or.inl rfl), fun x hx => hall x (Or.inr hx)⟩

private theorem filter_isEmpty_iff {l : List Nat} {p : Nat → Bool} :
    (l.filter p).isEmpty = true ↔ ∀ x ∈ l, p x = false := by
  rw [List.isEmpty_iff, List.filter_eq_nil_iff]
  constructor
  · intro h x hx
    have : ¬ p x := h x hx
    simpa [Bool.not_eq_true] using this
  · intro h x hx
    simpa [Bool.not_eq_true] using h x hx

private theorem nonempty_filter_eq_any {l : List Nat} {p q : Nat → Bool}
    (h : ∀ x ∈ l, p x = q x) :
    (!(l.filter p).isEmpty) = l.any q := by
  cases ha : l.any q
  · have hall : ∀ x ∈ l, q x = false := any_false_iff.mp ha
    have hpf : ∀ x ∈ l, p x = false := fun x hx => by rw [h x hx]; exact hall x hx
    have hempty : (l.filter p).isEmpty = true := filter_isEmpty_iff.mpr hpf
    simp [hempty]
  · have ⟨x, hx, hq⟩ := List.any_eq_true.mp ha
    have hp : p x = true := by rw [h x hx]; exact hq
    have hmem : x ∈ l.filter p := List.mem_filter.mpr ⟨hx, hp⟩
    have hempty : (l.filter p).isEmpty = false := by
      simp [List.ne_nil_of_mem hmem]
    simp [hempty]

theorem lead_predicates_agree (bs : List Nat)
    (h : ∀ x ∈ bs, isLiveDroppedControl x = false) :
    leanLeadNonempty bs = phpLeadNonempty bs := by
  have hpt : ∀ x ∈ lineBytes bs, (!isTrimByte x) = phpSepByte x := by
    intro x hx
    rcases mem_takeWhile hx with ⟨hp, hm⟩
    exact sep_class_on_pure x (bne_iff_ne.mp hp) (h x hm)
  simpa [leanLeadNonempty, phpLeadNonempty] using
    nonempty_filter_eq_any (l := lineBytes bs) hpt

theorem stripped_lead_agrees (bs : List Nat) (toks : List TokenEntry)
    (h : ∀ x ∈ bs, isLiveDroppedControl x = false) :
    leanLeadNonempty (stripEmptyRawPhNotes bs toks) =
      phpLeadNonempty (stripEmptyRawPhNotes bs toks) :=
  lead_predicates_agree _ fun _ hx => stripEmptyRawPhNotes_pure h hx

theorem stored_lead_agrees (body : List Nat) (toks : List TokenEntry) :
    leanLeadNonempty (stripEmptyRawPhNotes (footnoteStored body toks) toks) =
      phpLeadNonempty (stripEmptyRawPhNotes (footnoteStored body toks) toks) :=
  stripped_lead_agrees _ _ fun _ hx => footnoteStored_control_pure body toks hx

/-! ## Render separator follows the lead test -/

private theorem optTypeIs_start_parabreak (rest : OptMap) :
    optTypeIs ((['t', 'y', 'p', 'e'], OptVal.str ['s', 't', 'a', 'r', 't']) :: rest)
      (litBytes "parabreak") = false := rfl

private theorem optTypeIs_start_start (rest : OptMap) :
    optTypeIs ((['t', 'y', 'p', 'e'], OptVal.str ['s', 't', 'a', 'r', 't']) :: rest)
      (litBytes "start") = true := rfl

theorem footnoteitem_start_no_space (conf : RenderConf) (doc : DocState) (id : Nat)
    (lookup : Nat → Option TokenEntry) (hpos : id > 0)
    (hempty : (footnoteLeadVisible lookup ((doc.footnotes[id - 1]?).getD [])).isEmpty = true) :
    renderFootnoteitem conf doc
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int (id : Int))] lookup =
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ conf.footnoteIdPrefix ++
      natBytes id ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++
      conf.footnoteIdPrefix ++ natBytes id ++ litBytes "')\">" ++ natBytes id ++
      litBytes "</a>." := by
  have hge : (id : Int) ≥ 0 := Int.natCast_nonneg id
  have hnotlt : ¬ ((id : Int) < 0) := Int.not_lt.mpr hge
  simp [renderFootnoteitem, optTypeIs_start_parabreak, optTypeIs_start_start,
    optStrBytes, omGet, renderOptValBytes, optNat, intBytes, hpos, hge, hnotlt, hempty]

theorem footnoteitem_start_space (conf : RenderConf) (doc : DocState) (id : Nat)
    (lookup : Nat → Option TokenEntry) (hpos : id > 0)
    (hne : (footnoteLeadVisible lookup ((doc.footnotes[id - 1]?).getD [])).isEmpty = false) :
    renderFootnoteitem conf doc
      [("type".toList, OptVal.str "start".toList), ("id".toList, OptVal.int (id : Int))] lookup =
    litBytes "<div class=\"footnote-footer\" id=\"footnote-" ++ conf.footnoteIdPrefix ++
      natBytes id ++
      litBytes "\"><a href=\"javascript:;\" onclick=\"" ++
      litBytes "WIKIDOT.page.utils.scrollToReference(" ++
      litBytes "'footnoteref-" ++
      conf.footnoteIdPrefix ++ natBytes id ++ litBytes "')\">" ++ natBytes id ++
      litBytes "</a>." ++ [32] := by
  have hge : (id : Int) ≥ 0 := Int.natCast_nonneg id
  have hnotlt : ¬ ((id : Int) < 0) := Int.not_lt.mpr hge
  simp [renderFootnoteitem, optTypeIs_start_parabreak, optTypeIs_start_start,
    optStrBytes, omGet, renderOptValBytes, optNat, intBytes, hpos, hge, hnotlt, hne]

/-! ## Named shapes: round-5e ESC, the ordering witness, the shield divergence -/

theorem r5e_esc_interior_dropped :
    footnoteStored (litBytes "A" ++ [27] ++ litBytes "B") [] = litBytes "AB" ∧
      refStored (litBytes "A" ++ [27] ++ litBytes "B") [] = litBytes "AB" := by
  decide

/-- REFCORR11 ordering: a dropped control that is the only witness before an LF is gone before the break test, so both the mirror and the reference model fold to the literal tail. -/
theorem r5e_control_witness_agrees :
    footnoteStored ([12, 10] ++ litBytes "X") [] = litBytes "X" ∧
      refStored ([12, 10] ++ litBytes "X") [] = litBytes "X" ∧
      footnoteStored ([1, 10] ++ litBytes "X") [] = litBytes "X" ∧
      refStored ([1, 10] ++ litBytes "X") [] = litBytes "X" := by
  decide

theorem esc_shield_diverges :
    footnoteStored (litBytes "X" ++ [10, 27]) [] = litBytes "X" ∧
      refStored (litBytes "X" ++ [10, 27]) [] = [88, 10] := by
  decide

/-! ## Bibliography: emitted body is filtered, stored body is not -/

def bibNorm (content : List Nat) : List Nat :=
  trimBytes (content.map (fun b => if b == 10 then 32 else b))

def bibVisible (content : List Nat) (toks : List TokenEntry) : List Nat :=
  trimBytes (stripEmptyRawPhNotes (stripLiveDroppedControls (bibNorm content)) toks)

theorem bib_esc_emitted_drops_stored_keeps :
    bibNorm (litBytes "A" ++ [27] ++ litBytes "B") = litBytes "A" ++ [27] ++ litBytes "B" ∧
      bibVisible (litBytes "A" ++ [27] ++ litBytes "B") [] = litBytes "AB" := by
  decide

theorem bib_visible_control_pure (content : List Nat) (toks : List TokenEntry) {b : Nat}
    (h : b ∈ bibVisible content toks) : isLiveDroppedControl b = false := by
  have hsub : b ∈ stripEmptyRawPhNotes (stripLiveDroppedControls (bibNorm content)) toks :=
    trimBytes_subset h
  exact stripEmptyRawPhNotes_pure (fun _ hx => stripLiveDroppedControls_pure hx) hsub

theorem bibitemProcess_emit (label content : List Nat) (doc : DocState) (toks : List TokenEntry) :
    (bibitemProcess label content doc toks).1 =
      phBytes toks.length ++ bibVisible content toks ++ phBytes (toks.length + 1) ∧
    (bibitemProcess label content doc toks).2.2.bibitems =
      bibSet doc.bibitems label (bibNorm content) := by
  simp [bibitemProcess, bibVisible, bibNorm, List.length_append]

end LeanFtml

#print axioms LeanFtml.isLiveDroppedControl_iff
#print axioms LeanFtml.c0_dropped_bytes
#print axioms LeanFtml.esc_is_dropped
#print axioms LeanFtml.del_is_kept
#print axioms LeanFtml.tab_lf_cr_kept
#print axioms LeanFtml.shield_bytes
#print axioms LeanFtml.shield_ge_32
#print axioms LeanFtml.stripLiveDroppedControls_pure
#print axioms LeanFtml.footnoteProcess_footnotes
#print axioms LeanFtml.footnoteProcess_placeholder
#print axioms LeanFtml.footnote_keeps_on_break
#print axioms LeanFtml.footnote_folds_without_break
#print axioms LeanFtml.footnoteStored_control_pure
#print axioms LeanFtml.hasSingleBreakByte_iff_interior
#print axioms LeanFtml.phpBreak_iff_pattern
#print axioms LeanFtml.lean_break_imp_php
#print axioms LeanFtml.footnote_ref_disagree_iff
#print axioms LeanFtml.x_lf_suffix_class
#print axioms LeanFtml.token_aware_break_keeps_visible_empty
#print axioms LeanFtml.sep_class_on_pure
#print axioms LeanFtml.lead_predicates_agree
#print axioms LeanFtml.stripped_lead_agrees
#print axioms LeanFtml.stored_lead_agrees
#print axioms LeanFtml.footnoteitem_start_no_space
#print axioms LeanFtml.footnoteitem_start_space
#print axioms LeanFtml.r5e_esc_interior_dropped
#print axioms LeanFtml.r5e_control_witness_agrees
#print axioms LeanFtml.esc_shield_diverges
#print axioms LeanFtml.bib_esc_emitted_drops_stored_keeps
#print axioms LeanFtml.bib_visible_control_pure
#print axioms LeanFtml.bibitemProcess_emit
