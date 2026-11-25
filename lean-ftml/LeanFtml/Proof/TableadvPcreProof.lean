import LeanFtml.RefApply
import LeanFtml.TableadvEnum

set_option maxRecDepth 100000

/-!
  LeanFtml.Proof.TableadvPcreProof — Stage 2(e): the extracted recursive
  Tableadv pattern pinned through `PcreCore`, with exact continuation-stack
  transition lemmas for the recursive body/head search and conditional scanner
  boundary lemmas.  The full first-match output equivalence and callback
  correctness are deliberately not claimed here; they are the named remainder
  documented in the lane report.
-/

namespace LeanFtml

open PcreCore

/-- Right-nested sequence in exactly the shape produced by `parseGo`:
    the terminal empty sequence is dropped. -/
def reSeqs : List RE → RE
  | [] => .eps
  | x :: xs =>
      match xs with
      | [] => x
      | _ => .seq x (reSeqs xs)

/-- Literal bytes as regex atoms. -/
def bytesRE (bs : List Nat) : List RE := bs.map RE.byte

/-- Flat byte tasks, the shape reached after sequence nodes have been
    expanded. -/
def byteTasks (pat : List Nat) : List Task :=
  pat.map fun b => .node (.byte b)

/-- The snapshot-44 primary Tableadv pattern, as extracted in RefTables. -/
def tableadvRegexBytes : List Nat :=
  [126, 92, 91, 92, 91, 116, 97, 98, 108, 101, 40, 40, 63, 58, 34, 91,
   94, 34, 93, 42, 34, 124, 91, 94, 92, 93, 93, 41, 42, 41, 92, 93, 92,
   93, 40, 40, 63, 58, 40, 63, 82, 41, 124, 46, 41, 42, 63, 41, 92, 91,
   92, 91, 47, 116, 97, 98, 108, 101, 92, 93, 92, 93, 126, 115, 105]

/-- The quoted head token `"[^"]*"`. -/
def tadvQuotedRE : RE :=
  reSeqs [.byte 34, .rep (.cls true [.rng 34 34]) 0 none true, .byte 34]

/-- One head repetition token: quoted string first, otherwise one non-`]` byte. -/
def tadvHeadTokenRE : RE :=
  .alt tadvQuotedRE (.cls true [.rng 93 93])

/-- The greedy head repetition inside capture group 1. -/
def tadvHeadRE : RE := .rep tadvHeadTokenRE 0 none true

/-- One lazy-body token: whole-pattern recursion first, otherwise dot. -/
def tadvBodyTokenRE : RE := .alt .recurse .dot

/-- The lazy body repetition inside capture group 2. -/
def tadvBodyRE : RE := .rep tadvBodyTokenRE 0 none false

/-- The case-insensitive opener literal `[[table` (the opening `]]` is not
    part of this prefix). -/
def tableadvOpenBytes : List Nat := [91, 91, 116, 97, 98, 108, 101]

/-- The closer literal `[[/table]]`. -/
def tableadvCloseBytes : List Nat := [91, 91, 47, 116, 97, 98, 108, 101, 93, 93]

/-- The first regex atom after the opener literal. -/
def tableadvAfterOpenZ : RE := .grp 1 tadvHeadRE

/-- The regex atoms after the opener literal and its first capture group. -/
def tableadvAfterOpenZs : List RE :=
  [.byte 93, .byte 93, .grp 2 tadvBodyRE] ++ bytesRE tableadvCloseBytes

/-- The regex atoms after the opener literal, in exact cons form for the
    literal-consumption lemmas. -/
def tableadvAfterOpenREs : List RE :=
  tableadvAfterOpenZ :: tableadvAfterOpenZs

/-- The exact expected AST of the extracted Tableadv pattern. -/
def tableadvAstExpected : RE :=
  reSeqs (bytesRE tableadvOpenBytes ++ tableadvAfterOpenREs)

/-- The exact expected flags: case-insensitive and dotall (`si`), with no
    multiline, ungreedy, dollar-end-only, or UTF-8 flag. -/
def tableadvFlagsExpected : Flags :=
  { ci := true, dotall := true, multiline := false,
    ungreedy := false, dollarEndOnly := false, utf8 := false }

/-- The parsed Tableadv pattern. -/
def tableadvPcreExpected : PcreParsed :=
  { ast := tableadvAstExpected, flags := tableadvFlagsExpected }

/-- The extractor's primary-pattern entry for Tableadv is exactly the pinned
    byte pattern. -/
theorem tableadv_ref_pattern :
    refPatternsOf .tableadv = [tableadvRegexBytes] := rfl

/-- Parsing the extracted bytes succeeds with exactly the expected AST and
    exactly the flags `s` and `i`. -/
theorem tableadv_parse_pin :
    parsePcreBytes tableadvRegexBytes = some tableadvPcreExpected := by
  decide

/-- Consequently the reference-side parsed-pattern list for `.tableadv` is the
    singleton pinned pattern. -/
theorem tableadv_refParsed :
    refParsed .tableadv = [tableadvPcreExpected] := by
  rw [refParsed, tableadv_ref_pattern]
  simp [tableadv_parse_pin]


/-- The public first-match driver on the pinned Tableadv pattern is exactly
    the continuation-stack run analyzed below, anchored at the candidate
    position and using the certificate fuel `pcreFuel`. -/
theorem tableadv_pcreFirst_eq (subj : List Nat) (pos : Nat) :
    pcreFirst tableadvPcreExpected subj pos =
      (runMatch tableadvFlagsExpected tableadvAstExpected subj pos
        [.node tableadvAstExpected] pos [] pcreFuel).head? := rfl

/-! ## Continuation-stack and literal-step correspondence -/

/-- The mirror's `byteCiEq` and `PcreCore`'s `byteMatchCI` are the same
    ASCII case-insensitive byte equality. -/
theorem byteCiEq_eq_byteMatchCI (x p : Nat) :
    byteCiEq x p = byteMatchCI true p x := by
  unfold byteCiEq byteMatchCI swapByteCase foldByte
  grind

theorem drop_succ_eq_drop1 (xs : List Nat) (n : Nat) :
    xs.drop (n + 1) = (xs.drop n).drop 1 := by
  rw [List.drop_drop, Nat.add_comm]

theorem reSeqs_cons_of_ne_nil (x : RE) {rs : List RE} (hrs : rs ≠ []) :
    reSeqs (x :: rs) = .seq x (reSeqs rs) := by
  cases rs with
  | nil => contradiction
  | cons y ys => rfl

theorem head?_append_eq {α : Type} (xs ys : List α) :
    (xs ++ ys).head? =
      match xs.head? with
      | some x => some x
      | none => ys.head? := by
  cases xs with
  | nil => rfl
  | cons x xs => rfl

theorem head?_flatMap_eq_findSome {α β : Type} (f : α → List β) (xs : List α) :
    (xs.flatMap f).head? = xs.findSome? (fun x => (f x).head?) := by
  induction xs with
  | nil => rfl
  | cons x xs ih =>
      rw [List.flatMap_cons, head?_append_eq]
      cases hx : (f x).head? with
      | none => simp [List.findSome?, hx, ih]
      | some y => simp [List.findSome?, hx]

theorem dedupResults_head? (xs : Results) :
    (dedupResults xs).head? = xs.head? := by
  cases xs with
  | nil => rfl
  | cons x xs =>
      simp [dedupResults, dedupResults.go]

theorem findSome?_append_eq {α β : Type} (f : α → Option β)
    (xs ys : List α) :
    (xs ++ ys).findSome? f =
      match xs.findSome? f with
      | some z => some z
      | none => ys.findSome? f := by
  rw [List.findSome?_append]
  cases hxs : xs.findSome? f with
  | some z => rfl
  | none => rfl

theorem filter_findSome?_eq {α β : Type} (p : α → Bool) (f : α → Option β)
    (xs : List α) :
    (xs.filter p).findSome? f =
      xs.findSome? (fun x => if p x then f x else none) := by
  induction xs with
  | nil => rfl
  | cons x xs ih =>
      cases hp : p x with
      | false =>
          simp [List.filter, hp, List.findSome?]
          exact ih
      | true =>
          simp [List.filter, hp, List.findSome?]
          cases hx : f x with
          | none => simp [hx, ih]
          | some z => simp [hx]

theorem runMatch_seq_step (fl : Flags) (whole : RE) (subj : List Nat)
    (anchor : Nat) (a b : RE) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    runMatch fl whole subj anchor (.node (.seq a b) :: rest) pos caps (fuel + 1) =
      runMatch fl whole subj anchor (.node a :: .node b :: rest) pos caps fuel := rfl

theorem runMatch_alt_step (fl : Flags) (whole : RE) (subj : List Nat)
    (anchor : Nat) (a b : RE) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    runMatch fl whole subj anchor (.node (.alt a b) :: rest) pos caps (fuel + 1) =
      dedupResults
        (runMatch fl whole subj anchor (.node a :: rest) pos caps fuel ++
         runMatch fl whole subj anchor (.node b :: rest) pos caps fuel) := rfl

theorem runMatch_grp_step (fl : Flags) (whole : RE) (subj : List Nat)
    (anchor : Nat) (i : Nat) (r : RE) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    runMatch fl whole subj anchor (.node (.grp i r) :: rest) pos caps (fuel + 1) =
      runMatch fl whole subj anchor (.node r :: .close i pos :: rest) pos caps fuel := rfl

theorem runMatch_close_step (fl : Flags) (whole : RE) (subj : List Nat)
    (anchor i s : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    runMatch fl whole subj anchor (.close i s :: rest) pos caps (fuel + 1) =
      runMatch fl whole subj anchor rest pos (setCap i s pos caps) fuel := rfl

theorem getCap_setCap_same (i s e : Nat) (caps : Caps) :
    getCap i (setCap i s e caps) = some (s, e) := by
  simp [getCap, setCap]

theorem getCap_setCap_twice (i s1 e1 s2 e2 : Nat) (caps : Caps) :
    getCap i (setCap i s2 e2 (setCap i s1 e1 caps)) = some (s2, e2) := by
  simp [getCap, setCap]

theorem runMatch_recurse_step (fl : Flags) (whole : RE) (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    runMatch fl whole subj anchor (.node .recurse :: rest) pos caps (fuel + 1) =
      runMatch fl whole subj anchor (.node whole :: rest) pos caps fuel := rfl

theorem runMatch_byte_step_hit (fl : Flags) (whole : RE) (subj : List Nat)
    (anchor : Nat) (p x : Nat) (xs : List Nat) (rest : List Task) (pos : Nat)
    (caps : Caps) (fuel : Nat)
    (hs : subj.drop pos = x :: xs) (hb : byteMatchCI fl.ci p x = true) :
    runMatch fl whole subj anchor (.node (.byte p) :: rest) pos caps (fuel + 1) =
      runMatch fl whole subj anchor rest (pos + 1) caps fuel := by
  simp [runMatch, hs, hb]

/-- A nonempty literal prefix followed by a nonempty regex tail consumes its
    case-insensitive bytes.  The exact fuel cost is two per literal byte: one
    sequence expansion and one byte task. -/
theorem runMatch_literal_prefix
    (fl : Flags) (hci : fl.ci = true) (whole : RE) (subj : List Nat)
    (anchor pos : Nat) (rest : List Task) (caps : Caps) (fuel : Nat)
    (pat tailbytes : List Nat) (z : RE) (zs : List RE)
    (h : matchLitCI pat (subj.drop pos) = some tailbytes) :
    runMatch fl whole subj anchor
      (.node (reSeqs (bytesRE pat ++ (z :: zs))) :: rest) pos caps (fuel + 2 * pat.length) =
      runMatch fl whole subj anchor (.node (reSeqs (z :: zs)) :: rest) (pos + pat.length) caps fuel := by
  induction pat generalizing pos fuel with
  | nil =>
      simp [bytesRE]
  | cons p ps ih =>
      cases hs : subj.drop pos with
      | nil =>
          simp [matchLitCI, hs] at h
      | cons x xs =>
          have hb0 : byteCiEq x p = true := by
            simp [matchLitCI, hs] at h
            exact h.1
          have hrec0 : matchLitCI ps xs = some tailbytes := by
            simp [matchLitCI, hs, hb0] at h
            exact h
          have hxs : subj.drop (pos + 1) = xs := by
            rw [drop_succ_eq_drop1, hs]
            rfl
          have hb : byteMatchCI fl.ci p x = true := by
            rw [hci, ← byteCiEq_eq_byteMatchCI x p]
            exact hb0
          have hfuel : fuel + 2 * (p :: ps).length = ((fuel + 2 * ps.length) + 1) + 1 := by
            simp; omega
          rw [hfuel]
          have hne : bytesRE ps ++ (z :: zs) ≠ [] := by simp
          have hshape :
              reSeqs (bytesRE (p :: ps) ++ (z :: zs)) =
                .seq (.byte p) (reSeqs (bytesRE ps ++ (z :: zs))) := by
            simp only [bytesRE, List.map_cons, List.cons_append]
            exact reSeqs_cons_of_ne_nil (.byte p) hne
          rw [hshape, runMatch_seq_step]
          have hbyte := runMatch_byte_step_hit fl whole subj anchor p x xs
            (.node (reSeqs (bytesRE ps ++ (z :: zs))) :: rest) pos caps (fuel + 2 * ps.length) hs hb
          rw [hbyte]
          have hrec : matchLitCI ps (subj.drop (pos + 1)) = some tailbytes := by
            rw [hxs]
            exact hrec0
          have hpos : pos + 1 + ps.length = pos + (ps.length + 1) := by omega
          rw [List.length_cons, ← hpos]
          exact ih (pos + 1) fuel hrec


/-- A terminal nonempty literal suffix consumes its case-insensitive bytes.
    Its exact fuel cost is `2 * length - 1`: one byte task per byte and one
    sequence expansion for every junction before the last byte. -/
theorem runMatch_literal_suffix
    (fl : Flags) (hci : fl.ci = true) (whole : RE) (subj : List Nat)
    (anchor pos : Nat) (rest : List Task) (caps : Caps) (fuel : Nat)
    (p : Nat) (ps tailbytes : List Nat)
    (h : matchLitCI (p :: ps) (subj.drop pos) = some tailbytes) :
    runMatch fl whole subj anchor
      (.node (reSeqs (bytesRE (p :: ps))) :: rest) pos caps
        (fuel + (2 * (p :: ps).length - 1)) =
      runMatch fl whole subj anchor rest (pos + (p :: ps).length) caps fuel := by
  induction ps generalizing p pos fuel with
  | nil =>
      cases hs : subj.drop pos with
      | nil =>
          simp [matchLitCI, hs] at h
      | cons x xs =>
          have hb0 : byteCiEq x p = true := by
            simp [matchLitCI, hs] at h
            exact h.1
          have hb : byteMatchCI fl.ci p x = true := by
            rw [hci, ← byteCiEq_eq_byteMatchCI x p]
            exact hb0
          have hfuel : fuel + (2 * (p :: []).length - 1) = fuel + 1 := by simp
          rw [hfuel]
          have hshape : reSeqs (bytesRE (p :: ([] : List Nat))) = .byte p := rfl
          rw [hshape]
          have hbyte := runMatch_byte_step_hit fl whole subj anchor p x xs rest pos caps fuel hs hb
          rw [hbyte]
          simp
  | cons q qs ih =>
      cases hs : subj.drop pos with
      | nil =>
          simp [matchLitCI, hs] at h
      | cons x xs =>
          have hb0 : byteCiEq x p = true := by
            simp [matchLitCI, hs] at h
            exact h.1
          have hrec0 : matchLitCI (q :: qs) xs = some tailbytes := by
            simp [matchLitCI, hs, hb0] at h
            exact h
          have hxs : subj.drop (pos + 1) = xs := by
            rw [drop_succ_eq_drop1, hs]
            rfl
          have hb : byteMatchCI fl.ci p x = true := by
            rw [hci, ← byteCiEq_eq_byteMatchCI x p]
            exact hb0
          have hfuel : fuel + (2 * (p :: q :: qs).length - 1) =
              ((fuel + (2 * (q :: qs).length - 1)) + 1) + 1 := by
            simp; omega
          rw [hfuel]
          have hshape :
              reSeqs (bytesRE (p :: q :: qs)) =
                .seq (.byte p) (reSeqs (bytesRE (q :: qs))) := by
            simp only [bytesRE, List.map_cons]
            exact reSeqs_cons_of_ne_nil (.byte p) (by simp)
          rw [hshape, runMatch_seq_step]
          have hbyte := runMatch_byte_step_hit fl whole subj anchor p x xs
            (.node (reSeqs (bytesRE (q :: qs))) :: rest) pos caps
            (fuel + (2 * (q :: qs).length - 1)) hs hb
          rw [hbyte]
          have hrec : matchLitCI (q :: qs) (subj.drop (pos + 1)) = some tailbytes := by
            rw [hxs]
            exact hrec0
          have hpos : pos + 1 + (q :: qs).length = pos + (p :: q :: qs).length := by
            simp; omega
          rw [← hpos]
          exact ih (pos + 1) fuel q hrec

/-- The lazy Tableadv body repetition, expanded exactly as `PcreCore`'s
    continuation stack executes it.  The first (`stop`) branch is the
    continuation, hence the closer test; the second branch reparses the body
    after a `(?R)|.` token. -/
theorem tableadv_bodyRep_step (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvBodyRE :: rest) pos caps (fuel + 1) =
      dedupResults
        (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor rest pos caps fuel ++
         ((runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
              [.node tadvBodyTokenRE] pos caps fuel).filter
            (fun res => res.pos > pos || res.caps != caps)).flatMap
            (fun res =>
              runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                (.node tadvBodyRE :: rest) res.pos res.caps fuel)) := by
  simp [runMatch, tadvBodyRE]

/-- The body token itself is alternation with whole-pattern recursion first
    and dot second. -/
theorem tableadv_bodyToken_step (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvBodyTokenRE :: rest) pos caps (fuel + 1) =
      dedupResults
        (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
            (.node .recurse :: rest) pos caps fuel ++
         runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
            (.node .dot :: rest) pos caps fuel) := rfl

theorem tableadv_bodyRep_first_step (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvBodyRE :: rest) pos caps (fuel + 1)).head? =
      match (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
          rest pos caps fuel).head? with
      | some r => some r
      | none =>
          ((runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                [.node tadvBodyTokenRE] pos caps fuel).filter
              (fun res => res.pos > pos || res.caps != caps)).findSome?
            (fun res =>
              (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                  (.node tadvBodyRE :: rest) res.pos res.caps fuel).head?) := by
  rw [tableadv_bodyRep_step, dedupResults_head?, head?_append_eq]
  cases hstop : (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
      rest pos caps fuel).head? with
  | some r => simp [hstop]
  | none =>
      simp [hstop]
      rw [head?_flatMap_eq_findSome]

theorem tableadv_bodyToken_first_step (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvBodyTokenRE :: rest) pos caps (fuel + 1)).head? =
      match (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
          (.node .recurse :: rest) pos caps fuel).head? with
      | some r => some r
      | none =>
          (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
              (.node .dot :: rest) pos caps fuel).head? := by
  rw [tableadv_bodyToken_step, dedupResults_head?, head?_append_eq]
  cases hrec : (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
      (.node .recurse :: rest) pos caps fuel).head? with
  | some r => simp [hrec]
  | none => simp [hrec]

theorem tableadv_bodyToken_first_recurse_step (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvBodyTokenRE :: rest) pos caps (fuel + 2)).head? =
      match (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
          (.node tableadvAstExpected :: rest) pos caps fuel).head? with
      | some r => some r
      | none =>
          (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
              (.node .dot :: rest) pos caps (fuel + 1)).head? := by
  rw [tableadv_bodyToken_first_step, runMatch_recurse_step]

theorem tableadv_bodyRep_first_recursion_boundary (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvBodyRE :: rest) pos caps (fuel + 3)).head? =
      match (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
          rest pos caps (fuel + 2)).head? with
      | some r => some r
      | none =>
          (((dedupResults
                (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                    [.node tableadvAstExpected] pos caps fuel ++
                 runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                    [.node .dot] pos caps (fuel + 1))).filter
              (fun res => res.pos > pos || res.caps != caps)).findSome?
            (fun res =>
              (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                  (.node tadvBodyRE :: rest) res.pos res.caps (fuel + 2)).head?)) := by
  rw [tableadv_bodyRep_first_step, tableadv_bodyToken_step, runMatch_recurse_step]

/-- The greedy head repetition, expanded exactly.  Its take branch is before
    its stop branch, matching `advHeadRuns`' consume-more-before-empty order. -/
theorem tableadv_headRep_step (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvHeadRE :: rest) pos caps (fuel + 1) =
      dedupResults
        (((runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
              [.node tadvHeadTokenRE] pos caps fuel).filter
            (fun res => res.pos > pos || res.caps != caps)).flatMap
            (fun res =>
              runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                (.node tadvHeadRE :: rest) res.pos res.caps fuel) ++
         runMatch tableadvFlagsExpected tableadvAstExpected subj anchor rest pos caps fuel) := by
  simp [runMatch, tadvHeadRE]

/-- The head token alternation puts the quoted-string token before the
    one-byte `[^\]]` token, exactly as `advHeadRuns` does. -/
theorem tableadv_headToken_step (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvHeadTokenRE :: rest) pos caps (fuel + 1) =
      dedupResults
        (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
            (.node tadvQuotedRE :: rest) pos caps fuel ++
         runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
            (.node (.cls true [.rng 93 93]) :: rest) pos caps fuel) := rfl

theorem tableadv_headRep_first_step (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvHeadRE :: rest) pos caps (fuel + 1)).head? =
      match
          ((runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                [.node tadvHeadTokenRE] pos caps fuel).filter
              (fun res => res.pos > pos || res.caps != caps)).findSome?
            (fun res =>
              (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                  (.node tadvHeadRE :: rest) res.pos res.caps fuel).head?) with
      | some r => some r
      | none =>
          (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
              rest pos caps fuel).head? := by
  rw [tableadv_headRep_step, dedupResults_head?, head?_append_eq,
    head?_flatMap_eq_findSome]
  cases htake : ((runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        [.node tadvHeadTokenRE] pos caps fuel).filter
      (fun res => res.pos > pos || res.caps != caps)).findSome?
      (fun res =>
        (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
            (.node tadvHeadRE :: rest) res.pos res.caps fuel).head?) with
  | some r => simp [htake]
  | none => simp [htake]

theorem tableadv_headToken_first_step (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvHeadTokenRE :: rest) pos caps (fuel + 1)).head? =
      match (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
          (.node tadvQuotedRE :: rest) pos caps fuel).head? with
      | some r => some r
      | none =>
          (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
              (.node (.cls true [.rng 93 93]) :: rest) pos caps fuel).head? := by
  rw [tableadv_headToken_step, dedupResults_head?, head?_append_eq]
  cases hquote : (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
      (.node tadvQuotedRE :: rest) pos caps fuel).head? with
  | some r => simp [hquote]
  | none => simp [hquote]

theorem tableadv_headRep_first_token_boundary (subj : List Nat)
    (anchor : Nat) (rest : List Task) (pos : Nat) (caps : Caps)
    (fuel : Nat) :
    (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
        (.node tadvHeadRE :: rest) pos caps (fuel + 2)).head? =
      match
          (((dedupResults
                (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                    [.node tadvQuotedRE] pos caps fuel ++
                 runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                    [.node (.cls true [.rng 93 93])] pos caps fuel)).filter
              (fun res => res.pos > pos || res.caps != caps)).findSome?
            (fun res =>
              (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
                  (.node tadvHeadRE :: rest) res.pos res.caps (fuel + 1)).head?)) with
      | some r => some r
      | none =>
          (runMatch tableadvFlagsExpected tableadvAstExpected subj anchor
              rest pos caps (fuel + 1)).head? := by
  rw [tableadv_headRep_first_step, tableadv_headToken_step]

/-- The opener literal consumes exactly seven bytes for fourteen fuel units
    when followed by the nonempty Tableadv tail. -/
theorem tableadv_open_literal_step
    (fl : Flags) (hci : fl.ci = true) (subj : List Nat)
    (anchor pos : Nat) (caps : Caps) (fuel : Nat) (tail : List Nat)
    (h : matchLitCI tableadvOpenBytes (subj.drop pos) = some tail) :
    runMatch fl tableadvAstExpected subj anchor
      [.node tableadvAstExpected] pos caps (fuel + 14) =
      runMatch fl tableadvAstExpected subj anchor
        [.node (reSeqs tableadvAfterOpenREs)] (pos + 7) caps fuel := by
  exact runMatch_literal_prefix fl hci tableadvAstExpected subj anchor pos [] caps fuel
    tableadvOpenBytes tail tableadvAfterOpenZ tableadvAfterOpenZs h




/-- The terminal closer literal `[[/table]]` consumes ten bytes for nineteen
    fuel units (`2 * 10 - 1`) and then returns to the outer continuation.
    This is the exact literal half of the lazy body repetition's stop branch. -/
theorem tableadv_close_literal_step
    (fl : Flags) (hci : fl.ci = true) (subj : List Nat)
    (anchor pos : Nat) (rest : List Task) (caps : Caps) (fuel : Nat)
    (tail : List Nat)
    (h : matchLitCI tableadvCloseBytes (subj.drop pos) = some tail) :
    runMatch fl tableadvAstExpected subj anchor
      (.node (reSeqs (bytesRE tableadvCloseBytes)) :: rest) pos caps (fuel + 19) =
      runMatch fl tableadvAstExpected subj anchor rest (pos + 10) caps fuel := by
  exact runMatch_literal_suffix fl hci tableadvAstExpected subj anchor pos rest caps fuel
    91 [91, 47, 116, 97, 98, 108, 101, 93, 93] tail h

/-! ## Conditional scanner boundary -/

/-- Once the matcher reports no Tableadv at the current byte, the scanner
    copies that byte and continues on the tail.  This is the exact point at
    which a proved PCRE/enumeration first-match equivalence would plug into
    `tableadvScanGo`. -/
theorem tableadv_scan_miss_boundary (b : Nat) (rest : List Nat)
    (toks : List TokenEntry) (fuel : Nat)
    (hM : tableadvEnumMatchFirst (b :: rest) fuel = none) :
    tableadvScanGo (b :: rest) toks (fuel + 1) =
      (b :: (tableadvScanGo rest toks fuel).1,
       (tableadvScanGo rest toks fuel).2) :=
  mirror_scan_miss b rest toks fuel hM

/-- The matched scanner step, factored at the callback boundary.  The first
    match determines `head`, `rest'`, the matched span, and `advBodyOf`; the
    callback determines `(rep, toks1)`; scanning then continues after the
    match.  This theorem is universal, but intentionally conditional: it does
    not claim the unproved PCRE/enum first-match theorem or the callback
    correctness theorem. -/
theorem tableadv_scan_match_boundary (src head rest' rep tailOut : List Nat)
    (toks toks1 toks2 : List TokenEntry) (b : Nat) (rtail : List Nat) (fuel : Nat)
    (hsrc : src = b :: rtail)
    (hM : tableadvEnumMatchFirst src fuel = some (head, rest'))
    (hP : tableadvProcess head (advBodyOf src head rest')
        (src.take (src.length - rest'.length)) toks fuel = (rep, toks1))
    (hT : tableadvScanGo rest' toks1 fuel = (tailOut, toks2)) :
    tableadvScanGo src toks (Nat.succ fuel) = (rep ++ tailOut, toks2) := by
  subst hsrc
  have hlen : (b :: rtail).length = rtail.length + 1 := rfl
  have hP' := hP
  simp only [hlen] at hP'
  simp [tableadvScanGo, hM, hP', hT]

#print axioms tableadv_ref_pattern
#print axioms tableadv_parse_pin
#print axioms tableadv_refParsed
#print axioms tableadv_pcreFirst_eq
#print axioms byteCiEq_eq_byteMatchCI
#print axioms drop_succ_eq_drop1
#print axioms reSeqs_cons_of_ne_nil
#print axioms head?_append_eq
#print axioms head?_flatMap_eq_findSome
#print axioms dedupResults_head?
#print axioms findSome?_append_eq
#print axioms filter_findSome?_eq
#print axioms runMatch_seq_step
#print axioms runMatch_alt_step
#print axioms runMatch_grp_step
#print axioms runMatch_close_step
#print axioms getCap_setCap_same
#print axioms getCap_setCap_twice
#print axioms runMatch_recurse_step
#print axioms runMatch_byte_step_hit
#print axioms runMatch_literal_prefix
#print axioms runMatch_literal_suffix
#print axioms tableadv_bodyRep_step
#print axioms tableadv_bodyToken_step
#print axioms tableadv_bodyRep_first_step
#print axioms tableadv_bodyToken_first_step
#print axioms tableadv_bodyToken_first_recurse_step
#print axioms tableadv_bodyRep_first_recursion_boundary
#print axioms tableadv_headRep_step
#print axioms tableadv_headToken_step
#print axioms tableadv_headRep_first_step
#print axioms tableadv_headToken_first_step
#print axioms tableadv_headRep_first_token_boundary
#print axioms tableadv_open_literal_step
#print axioms tableadv_close_literal_step
#print axioms tableadv_scan_miss_boundary
#print axioms tableadv_scan_match_boundary

end LeanFtml
