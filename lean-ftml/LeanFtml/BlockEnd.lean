/-
  LeanFtml.BlockEnd — gap G1.2: block-end closer equivalence (model repaired under AUDIT-G12, findings C-AUDIT-G12-1 to C-AUDIT-G12-5).

  The claim, restated for the repaired discipline. The body scan of a paired block type is governed, per type, by which closers it accepts and by how it treats a nested same-type opener, and the theorems below are P0 recognition (a closer the type's gate accepts ends the block, with the body and rest a bare closer would give), P1 termination (the returned rest is literally a tail of the input, so nothing after the accepted closer is inside the block), P2 closer equivalence (erasing every blank closer suffix in the stream changes neither the body nor the rest, up to the same erasure), and P3 pairing (for `OPEN A OPEN B CLOSE C CLOSE D` the depths of A to D match `verification/block-end/recorded-pairing.txt` in the ftml repository, whose three rows, code [1,1,1,0], math [1,1,1,0], collapsible [1,1,0,0], the repaired scan still reproduces exactly).

  The measured discipline, per type. A closer's suffix is the text after the closer token on its line. Code and math accept a closer when its suffix is empty or begins with a space or tab, with arbitrary text allowed after that blank (the reference patterns in materials/Code.php and materials/Math.php end the closer with `(\s|$)`); collapsible and footnote accept any suffix at all; bibliography keeps the strict gate, accepting only an all-blank suffix. Position matters only for math, whose closers must begin at a line start (the math pattern places `\n` immediately before `\[\[/math\]\]`, so a mid-line math closer is literal text), while code, collapsible, footnote and bibliography closers are accepted mid-line. Code and math treat a nested same-type opener by backtracking recursion in the shape of the reference patterns' `(?R)`: the nested block is attempted first, and when the nested block together with the rest of the outer scan cannot complete, the opener falls back to literal body text, so an unbalanced two-opener one-closer stream forms one block ending at the first closer with the inner opener literal in the body, and a mid-line inner opener never nests because the recursion re-enters the line-anchored pattern. Math additionally rejects a nested block that is immediately followed, modulo whitespace, by the outer closer (the `(?!\s*\[\[/math\]\])` lookahead after `(?R)` in materials/Math.php), so a nested block closed directly against the outer closer does not count and the outer block ends at the first closer instead. Collapsible, footnote and bibliography take the first accepted closer; nested openers are literal body text to them.

  Evidence. The discipline above is the adjudicated outcome of AUDIT-G12 (coordinator-verified): live captures for forty shapes in audit-g12/captures.json (all valid), and the coordinator's ftml render measurements on twelve shapes (materials/g12-shapes.jsonl into materials/g12-ftml.jsonl, render dumper at the ftml tip of PR #1553), on which ftml and live agree on every shape. The previous version of this file modelled a uniform all-blank suffix gate for every type and a counting discipline for code and math; AUDIT-G12 showed both misstate ftml itself (C-AUDIT-G12-1 the per-type gates, C-AUDIT-G12-2 the unbalanced nesting shape, C-AUDIT-G12-3 mid-line closers, C-AUDIT-G12-4 the nested-opener position and the math adjacent-closer shape, C-AUDIT-G12-5 the code and math suffix-with-text shapes), and this repair replaces them while preserving the recorded pairing rows, which is why P0 and P2 are stated at the steps where the relevant gate accepts rather than for blank suffixes uniformly.

  Scope limits, unchanged in kind from the original file. The scan is same-type only: cross-type balancing is a separate mechanism and belongs to the Tier 2 pairing family. Closer case sensitivity is out of scope (recorded separately as F-R2-36). Bibliography's single-match behaviour when several bibliography blocks appear on one page is a property of the Bibliography rule, not of this scan. An accepted inner closer is recorded in the body with its suffix erased exactly when the suffix is blank (the `eraseBlankItem` normalisation), which is what makes P2 an equality of results rather than of behaviours; a closer whose suffix the gate rejects is recorded with its suffix, as literal body text.

  Model shape: the input to a block's body scan is a stream of items: openers and closers of named block types (an opener carries whether it begins at a line start; a closer carries its line-start flag and the characters that follow it on its line, its suffix), and opaque text markers. The scan returns the body items and the unconsumed rest.
-/

namespace LeanFtml

/-- The five paired block types the verify-block-end harness grids over: ftml `src/block_end_closers.rs`, `BLOCKS` (code, math, footnote, collapsible, bibliography). -/
inductive BlockType where
  | code | math | footnote | collapsible | bibliography
  deriving DecidableEq, Repr, Inhabited

/-- One item of a body-scan stream. `openTag b ls` is an opener token for `b`, with `ls` recording whether it begins at a line start. `close b ls s` is a closer token for `b` with the same line-start flag and the suffix `s` (the characters between the closer token and the end of the line). `text k` is opaque body content; the marker number lets the pairing shape name its letters. -/
inductive Item where
  | openTag : BlockType → Bool → Item
  | close : BlockType → Bool → List Char → Item
  | text : Nat → Item
  deriving DecidableEq, Repr

/-- The blank test for suffix gates: space and tab only. -/
def isBlank (c : Char) : Bool := c == ' ' || c == '\t'

/-- A suffix is blank when every character is a space or a tab. The empty suffix (a bare closer) is blank. -/
def allBlank (s : List Char) : Bool := s.all isBlank

theorem allBlank_nil : allBlank [] = true := rfl

/-- A suffix is blank-headed when it is empty or its first character is a blank. This is the code and math gate: the reference patterns end the closer with `(\s|$)`, one blank or the end of the line, and whatever follows that first blank is ordinary text after the block. -/
def blankHeaded : List Char → Bool
  | [] => true
  | c :: _ => isBlank c

theorem blankHeaded_of_allBlank {s : List Char} (hs : allBlank s = true) :
    blankHeaded s = true := by
  cases s with
  | nil => rfl
  | cons c s =>
    have hc : isBlank c = true := by
      have h := hs
      simp only [allBlank, List.all_cons, Bool.and_eq_true] at h
      exact h.1
    simp [blankHeaded, hc]

/-- The suffix gate per block type, as measured: bibliography accepts only an all-blank suffix, code and math accept a blank-headed suffix, footnote and collapsible accept any suffix. -/
def gateAccepts (b : BlockType) (s : List Char) : Bool :=
  match b with
  | .bibliography => allBlank s
  | .code | .math => blankHeaded s
  | .footnote | .collapsible => true

/-- The position gate per block type, as measured: only math requires its closer to begin at a line start. -/
def positionAccepts (b : BlockType) (ls : Bool) : Bool :=
  match b with
  | .math => ls
  | _ => true

/-- A closer for `b` at line-start flag `ls` with suffix `s` is accepted exactly when both gates pass. -/
def accepts (b : BlockType) (ls : Bool) (s : List Char) : Bool :=
  positionAccepts b ls && gateAccepts b s

theorem gateAccepts_nil (b : BlockType) : gateAccepts b [] = true := by
  cases b <;> rfl

/-- Erase the suffix of a closer whose suffix is blank; leave every other item untouched, including line-start flags. This is the normalisation P2 asserts is semantics-preserving for the scan. -/
def eraseBlankItem : Item → Item
  | .openTag b ls => .openTag b ls
  | .close b ls s => if allBlank s then .close b ls [] else .close b ls s
  | .text k => .text k

theorem eraseBlankItem_idem : ∀ i : Item, eraseBlankItem (eraseBlankItem i) = eraseBlankItem i
  | .openTag _ _ => rfl
  | .text _ => rfl
  | .close b ls s => by
      by_cases hs : allBlank s = true <;> simp [eraseBlankItem, hs]

theorem allBlank_eraseSuffix {s : List Char} :
    allBlank (if allBlank s then [] else s) = allBlank s := by
  by_cases hs : allBlank s = true
  · rw [if_pos hs, hs]
    exact allBlank_nil
  · rw [if_neg hs]

/-- A blank suffix and the bare suffix pass exactly the same gates: every type accepts the bare closer's suffix, and a blank suffix is accepted wherever the bare one is, since each gate sees only blankness properties the two share. -/
theorem accepts_nil_of_allBlank {b : BlockType} {ls : Bool} {s : List Char}
    (hs : allBlank s = true) : accepts b ls [] = accepts b ls s := by
  have hgate : gateAccepts b [] = gateAccepts b s := by
    cases b with
    | bibliography => exact allBlank_nil.trans hs.symm
    | code => exact (blankHeaded_of_allBlank hs).symm
    | math => exact (blankHeaded_of_allBlank hs).symm
    | footnote => rfl
    | collapsible => rfl
  show (positionAccepts b ls && gateAccepts b []) =
    (positionAccepts b ls && gateAccepts b s)
  rw [hgate]

/-- Erasing a blank suffix does not change whether a closer is accepted: the erased suffix is blank exactly when the original was, and its first character, when it has one, is untouched unless the whole suffix was blank. -/
theorem accepts_eraseSuffix {b : BlockType} {ls : Bool} {s : List Char} :
    accepts b ls (if allBlank s then [] else s) = accepts b ls s := by
  by_cases hs : allBlank s = true
  · rw [if_pos hs]
    exact accepts_nil_of_allBlank hs
  · rw [if_neg hs]

/-- Whether a stream begins with a closer for `b` (any position, any suffix). This is the item-level form of the text the math lookahead sees: after a nested block and any whitespace, a literal outer closer token. -/
def headIsClose (b : BlockType) : List Item → Bool
  | .close b' _ _ :: _ => decide (b' = b)
  | _ => false

theorem headIsClose_map_erase (b : BlockType) (xs : List Item) :
    headIsClose b (xs.map eraseBlankItem) = headIsClose b xs := by
  cases xs with
  | nil => rfl
  | cons i xs =>
    cases i with
    | openTag b' ls => rfl
    | text k => rfl
    | close b' ls s =>
        by_cases hs : allBlank s = true <;> simp [headIsClose, eraseBlankItem, hs]

/-- The math adjacent-closer rejection: a nested block of type `b` whose closer `closer` has an all-blank suffix and whose rest begins with a closer for `b` does not count as a nested block when `b` is math. At source level the nested closer's line ends right after its blank suffix (the `(\s|$)` follower consumes at most the first blank), whitespace follows, and the lookahead sees the outer closer token; the item-level conditions are exactly that the nested suffix is all blank and the next item is a closer for `b`. -/
def rejectsNested (b : BlockType) (closer : Item) (rest : List Item) : Bool :=
  match closer with
  | .close _ _ s => decide (b = .math) && allBlank s && headIsClose b rest
  | _ => false

theorem rejectsNested_erase {b : BlockType} {ci : Item} {rest : List Item} :
    rejectsNested b (eraseBlankItem ci) (rest.map eraseBlankItem) =
      rejectsNested b ci rest := by
  cases ci with
  | openTag b' ls => rfl
  | text k => rfl
  | close b' ls s =>
      by_cases hs : allBlank s = true <;>
        simp [rejectsNested, eraseBlankItem, hs, allBlank_nil,
          headIsClose_map_erase]

/-- How a block type's scan treats nested same-type openers. `recursive`: a line-start nested opener is attempted as a nested block, backtracking to literal body text when the nested block cannot be part of a complete scan (code, math). `firstCloser`: the first accepted closer ends the block and a nested opener is literal body (collapsible, footnote, bibliography). -/
inductive Discipline where
  | recursive | firstCloser
  deriving DecidableEq, Repr

/-- Pairing discipline per block type, from the evidence cited in the file header: code and math recurse as their reference patterns do; collapsible, footnote and bibliography take the first accepted closer. -/
def discipline : BlockType → Discipline
  | .code => .recursive
  | .math => .recursive
  | .footnote => .firstCloser
  | .collapsible => .firstCloser
  | .bibliography => .firstCloser

/-- The first-closer scan: walk the stream; the first closer for `b` that `accepts` passes ends the block (body so far, rest after it). Every other item, including openers of `b` and closers the gate rejects, is body. -/
def scanFirst (b : BlockType) : List Item → Option (List Item × List Item)
  | [] => none
  | .openTag b' ls :: xs =>
      (scanFirst b xs).map fun (body, rest) => (.openTag b' ls :: body, rest)
  | .close b' ls s :: xs =>
      if b' = b ∧ accepts b ls s = true then
        some ([], xs)
      else
        (scanFirst b xs).map fun (body, rest) => (.close b' ls s :: body, rest)
  | .text k :: xs =>
      (scanFirst b xs).map fun (body, rest) => (.text k :: body, rest)

/-- The backtracking recursive scan for code and math, fuel-bounded in the house style of CodeRule (the fuel only bounds the recursion; `scanRec` below supplies `xs.length + 1`, which the call structure never exhausts, since every recursive call is on a strict tail of the current stream). The result carries, besides body and rest, the accepted closer item, which the caller needs for the math adjacent-closer rejection. At a line-start opener for `b` the scan first attempts the nested block on the tail: if that attempt succeeds, is not rejected by `rejectsNested`, and the scan of the nested block's rest also succeeds, the nested block (opener, its body, its closer recorded with a blank suffix erased) is part of the body; in every other case the opener is literal body text and the scan continues on the tail, which is the backtracking fallback. At a closer for `b` the scan ends exactly when `accepts` passes; any other item is body. -/
def scanRecF : Nat → BlockType → List Item → Option (List Item × List Item × Item)
  | 0, _, _ => none
  | _ + 1, _, [] => none
  | fuel + 1, b, .text k :: xs =>
      (scanRecF fuel b xs).map fun (body, rest, ci) => (.text k :: body, rest, ci)
  | fuel + 1, b, .close b' ls s :: xs =>
      if b' = b ∧ accepts b ls s = true then
        some ([], xs, .close b' ls s)
      else
        (scanRecF fuel b xs).map fun (body, rest, ci) =>
          (.close b' ls s :: body, rest, ci)
  | fuel + 1, b, .openTag b' ls :: xs =>
      if b' = b ∧ ls = true then
        match scanRecF fuel b xs with
        | some (nbody, nrest, nci) =>
            if rejectsNested b nci nrest = true then
              (scanRecF fuel b xs).map fun (body, rest, ci) =>
                (.openTag b' ls :: body, rest, ci)
            else
              match scanRecF fuel b nrest with
              | some (body, rest, ci) =>
                  some (.openTag b' ls :: (nbody ++ [eraseBlankItem nci] ++ body),
                    rest, ci)
              | none =>
                  (scanRecF fuel b xs).map fun (body, rest, ci) =>
                    (.openTag b' ls :: body, rest, ci)
        | none =>
            (scanRecF fuel b xs).map fun (body, rest, ci) =>
              (.openTag b' ls :: body, rest, ci)
      else
        (scanRecF fuel b xs).map fun (body, rest, ci) =>
          (.openTag b' ls :: body, rest, ci)

/-- The backtracking recursive scan with its fuel supplied from the stream length, returning body and rest. -/
def scanRec (b : BlockType) (xs : List Item) : Option (List Item × List Item) :=
  (scanRecF (xs.length + 1) b xs).map fun (body, rest, _) => (body, rest)

/-- The body scan for a block of type `b`: dispatch on its discipline. -/
def scan (b : BlockType) (xs : List Item) : Option (List Item × List Item) :=
  match discipline b with
  | .recursive => scanRec b xs
  | .firstCloser => scanFirst b xs

/-- The recorded pairing shape `OPEN A OPEN B CLOSE C CLOSE D` as a scan stream (the scan starts just after the first OPEN): letter A, a nested opener, letter B, a closer, letter C, a closer, letter D. Every token sits at a line start, as in the harness sources; both closers are bare here, since blank variants are conformance-grid territory covered by the P2 theorems. -/
def shape (b : BlockType) : List Item :=
  [.text 0, .openTag b true, .text 1, .close b true [], .text 2,
   .close b true [], .text 3]

/-- Depth of a letter in a finished scan, in the recorded file's sense: how many blocks of the type enclose the letter. A block is one block however its body was scanned (the record's `blocks=1`), so the depth is 1 when the letter is in the body and 0 when it is in the rest. -/
def depthOf (body : List Item) (k : Nat) : Nat :=
  if .text k ∈ body then 1 else 0

/-- The pairing profile of a block type: the depths of A, B, C, D in the recorded shape, or `[]` when the scan finds no closer at all. -/
def profile (b : BlockType) : List Nat :=
  match scan b (shape b) with
  | some (body, _) => [0, 1, 2, 3].map (depthOf body)
  | none => []

/-! ## P0 and P2 at the decisive step

A closer the type's gate accepts is accepted exactly where a bare closer is, and the scan continues identically. These are the head-step forms; the full-stream form is the `eraseBlank` congruence below. P0 and P2 are stated under the acceptance hypothesis rather than for blank suffixes uniformly, because acceptance is per type: a blank suffix is accepted by every type whose position gate passes, but footnote and collapsible also accept non-blank suffixes, and a mid-line math closer is accepted by no suffix at all. -/

/-- P0/P2 head step, first-closer scan: an accepted closer for `b` ends the block, with the same body (empty at this step) and the same rest as the bare closer. -/
theorem scanFirst_close_accepted (b : BlockType) (ls : Bool) (s : List Char)
    (hacc : accepts b ls s = true) (xs : List Item) :
    scanFirst b (.close b ls s :: xs) = some ([], xs) := by
  simp [scanFirst, hacc]

/-- P0/P2 head step, recursive scan (one fuelled step): an accepted closer for `b` ends the block and is returned as the accepted closer item. -/
theorem scanRecF_close_accepted (fuel : Nat) (b : BlockType) (ls : Bool)
    (s : List Char) (hacc : accepts b ls s = true) (xs : List Item) :
    scanRecF (fuel + 1) b (.close b ls s :: xs) =
      some ([], xs, .close b ls s) := by
  simp [scanRecF, hacc]

/-- P0/P2 head step, recursive scan: an accepted closer for `b` ends the block exactly as a bare one. -/
theorem scanRec_close_accepted (b : BlockType) (ls : Bool) (s : List Char)
    (hacc : accepts b ls s = true) (xs : List Item) :
    scanRec b (.close b ls s :: xs) = some ([], xs) := by
  have h := scanRecF_close_accepted (xs.length + 1) b ls s hacc xs
  simp only [scanRec, List.length_cons, h, Option.map_some]

/-- P2 head step, first-closer scan: replacing an accepted closer's suffix by the bare closer does not change the scan at the step where the closer is examined, whatever follows. -/
theorem scanFirst_close_blank (b : BlockType) (ls : Bool) (s : List Char)
    (hacc : accepts b ls s = true) (xs : List Item) :
    scanFirst b (.close b ls s :: xs) = scanFirst b (.close b ls [] :: xs) := by
  have hpos : positionAccepts b ls = true := by
    have h := hacc
    simp only [accepts, Bool.and_eq_true] at h
    exact h.1
  have hnil : accepts b ls [] = true := by
    simp [accepts, hpos, gateAccepts_nil]
  rw [scanFirst_close_accepted b ls s hacc xs,
    scanFirst_close_accepted b ls [] hnil xs]

/-- P2 head step, recursive scan: same statement. The name is retained from the pre-repair file, whose counting scan it described; the axiom audit list in Main.lean references the name, and this statement is its direct successor for the backtracking scan that replaced the counting one (there is no depth parameter anymore, and acceptance is the measured per-type gate in place of the old uniform blank test). -/
theorem scanCount_close_blank (b : BlockType) (ls : Bool) (s : List Char)
    (hacc : accepts b ls s = true) (xs : List Item) :
    scanRec b (.close b ls s :: xs) = scanRec b (.close b ls [] :: xs) := by
  have hpos : positionAccepts b ls = true := by
    have h := hacc
    simp only [accepts, Bool.and_eq_true] at h
    exact h.1
  have hnil : accepts b ls [] = true := by
    simp [accepts, hpos, gateAccepts_nil]
  rw [scanRec_close_accepted b ls s hacc xs,
    scanRec_close_accepted b ls [] hnil xs]

/-- P0 for the dispatched scan, every block type: a stream that starts with an accepted closer for `b` is recognised as the end of the block, with nothing before it inside the block. -/
theorem scan_close_accepted (b : BlockType) (ls : Bool) (s : List Char)
    (hacc : accepts b ls s = true) (xs : List Item) :
    scan b (.close b ls s :: xs) = some ([], xs) := by
  cases b <;> simp [scan, discipline, scanFirst_close_accepted,
    scanRec_close_accepted, hacc]

/-! ## P1: termination

When a scan succeeds, the rest it returns is literally a tail of the input stream: the scan consumed a prefix (the body plus the accepted closer) and nothing after the closer leaks into the body. The pairing corollaries below pin this for the recorded shape: the letter after the final closer is never in the body. -/

theorem scanFirst_tail (b : BlockType) : ∀ (xs : List Item) {body rest},
    scanFirst b xs = some (body, rest) → ∃ pre, xs = pre ++ rest := by
  intro xs
  induction xs with
  | nil => intro body rest h; simp [scanFirst] at h
  | cons i xs ih =>
    intro body rest h
    cases i with
    | openTag b' ls =>
      cases hrec : scanFirst b xs with
      | none => simp [scanFirst, hrec] at h
      | some p =>
        obtain ⟨bbody, brest⟩ := p
        simp only [scanFirst, hrec, Option.map_some, Option.some.injEq, Prod.mk.injEq] at h
        obtain ⟨pre, hpre⟩ := ih hrec
        exact ⟨.openTag b' ls :: pre, by simp [hpre, h.2]⟩
    | close b' ls s =>
      by_cases hacc : b' = b ∧ accepts b ls s = true
      · have hstop : scanFirst b (.close b' ls s :: xs) = some ([], xs) := by
          simp [scanFirst, hacc]
        rw [hstop] at h
        simp only [Option.some.injEq, Prod.mk.injEq] at h
        obtain ⟨-, h2⟩ := h
        exact ⟨[.close b' ls s], by simp [h2]⟩
      · cases hrec : scanFirst b xs with
        | none => simp [scanFirst, hrec, hacc] at h
        | some p =>
          obtain ⟨bbody, brest⟩ := p
          simp only [scanFirst, hrec, hacc, ↓reduceIte, Option.map_some,
            Option.some.injEq, Prod.mk.injEq] at h
          obtain ⟨pre, hpre⟩ := ih hrec
          exact ⟨.close b' ls s :: pre, by simp [hpre, h.2]⟩
    | text k =>
      cases hrec : scanFirst b xs with
      | none => simp [scanFirst, hrec] at h
      | some p =>
        obtain ⟨bbody, brest⟩ := p
        simp only [scanFirst, hrec, Option.map_some, Option.some.injEq, Prod.mk.injEq] at h
        obtain ⟨pre, hpre⟩ := ih hrec
        exact ⟨.text k :: pre, by simp [hpre, h.2]⟩

theorem scanRecF_tail : ∀ (fuel : Nat) (b : BlockType) (xs : List Item)
    {body rest ci},
    xs.length + 1 ≤ fuel → scanRecF fuel b xs = some (body, rest, ci) →
    ∃ pre, xs = pre ++ rest := by
  intro fuel
  induction fuel with
  | zero =>
    intro b xs _ _ _ hbound _
    exact absurd hbound (by omega)
  | succ fuel ih =>
    intro b xs body rest ci hbound h
    cases xs with
    | nil => simp [scanRecF] at h
    | cons i xs =>
      have hb : xs.length + 1 ≤ fuel := by
        have h2 := hbound
        rw [List.length_cons] at h2
        omega
      cases i with
      | text k =>
        cases hrec : scanRecF fuel b xs with
        | none => simp [scanRecF, hrec] at h
        | some p =>
          obtain ⟨bb, rr, cc⟩ := p
          simp only [scanRecF, hrec, Option.map_some, Option.some.injEq, Prod.mk.injEq] at h
          obtain ⟨pre, hpre⟩ := ih b xs hb hrec
          exact ⟨.text k :: pre, by simp [hpre, h.2.1]⟩
      | close b' ls s =>
        by_cases hacc : b' = b ∧ accepts b ls s = true
        · have hstop : scanRecF (fuel + 1) b (.close b' ls s :: xs) =
              some ([], xs, .close b' ls s) := by
            simp [scanRecF, hacc]
          rw [hstop] at h
          simp only [Option.some.injEq, Prod.mk.injEq] at h
          obtain ⟨-, h2, -⟩ := h
          exact ⟨[.close b' ls s], by simp [h2]⟩
        · cases hrec : scanRecF fuel b xs with
          | none => simp [scanRecF, hrec, hacc] at h
          | some p =>
            obtain ⟨bb, rr, cc⟩ := p
            simp only [scanRecF, hrec, hacc, ↓reduceIte, Option.map_some,
              Option.some.injEq, Prod.mk.injEq] at h
            obtain ⟨pre, hpre⟩ := ih b xs hb hrec
            exact ⟨.close b' ls s :: pre, by simp [hpre, h.2.1]⟩
      | openTag b' ls =>
        by_cases hnest : b' = b ∧ ls = true
        · cases hn : scanRecF fuel b xs with
          | none => simp [scanRecF, hnest, hn] at h
          | some np =>
            obtain ⟨nbb, nrr, ncc⟩ := np
            obtain ⟨pre1, hpre1⟩ := ih b xs hb hn
            by_cases hrej : rejectsNested b ncc nrr = true
            · simp only [scanRecF, hnest, hn, hrej, ↓reduceIte, and_true,
                true_and, Option.map_some, Option.some.injEq, Prod.mk.injEq] at h
              exact ⟨.openTag b' ls :: pre1, by simp [hpre1, h.2.1]⟩
            · cases hc : scanRecF fuel b nrr with
              | none =>
                simp only [scanRecF, hnest, hn, hrej, hc, ↓reduceIte,
                  and_true, true_and, Bool.false_eq_true, Option.map_some,
                  Option.some.injEq, Prod.mk.injEq] at h
                exact ⟨.openTag b' ls :: pre1, by simp [hpre1, h.2.1]⟩
              | some cp =>
                obtain ⟨cbb, crr, ccc⟩ := cp
                have hb2 : nrr.length + 1 ≤ fuel := by
                  have hlen : nrr.length ≤ xs.length := by
                    rw [hpre1, List.length_append]
                    omega
                  omega
                obtain ⟨pre2, hpre2⟩ := ih b nrr hb2 hc
                simp only [scanRecF, hnest, hn, hrej, hc, ↓reduceIte,
                  and_true, true_and, Bool.false_eq_true, Option.map_some,
                  Option.some.injEq, Prod.mk.injEq] at h
                exact ⟨.openTag b' ls :: (pre1 ++ pre2), by
                  simp [hpre1, hpre2, h.2.1]⟩
        · cases hrec : scanRecF fuel b xs with
          | none => simp [scanRecF, hnest, hrec] at h
          | some p =>
            obtain ⟨bb, rr, cc⟩ := p
            simp only [scanRecF, hnest, hrec, ↓reduceIte, Option.map_some,
              Option.some.injEq, Prod.mk.injEq] at h
            obtain ⟨pre, hpre⟩ := ih b xs hb hrec
            exact ⟨.openTag b' ls :: pre, by simp [hpre, h.2.1]⟩

/-- P1 for the recursive scan. -/
theorem scanRec_tail (b : BlockType) {xs : List Item} {body rest} :
    scanRec b xs = some (body, rest) → ∃ pre, xs = pre ++ rest := by
  intro h
  have h3 : scanRec b xs =
      (scanRecF (xs.length + 1) b xs).map
        (fun (bd, r, _) => (bd, r)) := rfl
  cases hrec : scanRecF (xs.length + 1) b xs with
  | none => simp [h3, hrec] at h
  | some p =>
    obtain ⟨bb, rr, cc⟩ := p
    rw [h3, hrec] at h
    simp only [Option.map_some, Option.some.injEq, Prod.mk.injEq] at h
    obtain ⟨-, hrest⟩ := h
    obtain ⟨pre, hpre⟩ := scanRecF_tail _ _ _ (Nat.le_refl _) hrec
    exact ⟨pre, by rw [hpre, hrest]⟩

/-- P1 for the dispatched scan: the rest is a tail of the input. -/
theorem scan_tail (b : BlockType) {xs : List Item} {body rest} :
    scan b xs = some (body, rest) → ∃ pre, xs = pre ++ rest := by
  cases b <;> simp only [scan, discipline] <;> intro h
  · exact scanRec_tail _ h
  · exact scanRec_tail _ h
  · exact scanFirst_tail _ _ h
  · exact scanFirst_tail _ _ h
  · exact scanFirst_tail _ _ h

/-! ## P2, full-stream form

Erasing every blank closer suffix in the whole stream (the operation `eraseBlankItem` applied itemwise) changes neither the body a scan produces (up to the same erasure, which is the identity on body items except for accepted inner closers, recorded with their blank suffix erased) nor the rest (up to the same erasure). Together with the head-step theorems this is P2: the parse outcome for a blank-suffixed closer is the bare-closer outcome. The recursive case goes through because erasure preserves every decision the scan makes: acceptance (`accepts_eraseSuffix`), the math adjacent-closer rejection (`rejectsNested_erase`), and the identity of the closer recorded for a nested block (`eraseBlankItem_idem`). -/

theorem scanFirst_eraseBlank (b : BlockType) (xs : List Item) :
    scanFirst b (xs.map eraseBlankItem) =
      (scanFirst b xs).map fun (body, rest) =>
        (body.map eraseBlankItem, rest.map eraseBlankItem) := by
  induction xs with
  | nil => rfl
  | cons i xs ih =>
    cases i with
    | openTag b' ls =>
      cases hrec : scanFirst b xs with
      | none => simp [scanFirst, eraseBlankItem, hrec, ih]
      | some p =>
        obtain ⟨bb, rr⟩ := p
        simp [scanFirst, eraseBlankItem, hrec, ih]
    | text k =>
      cases hrec : scanFirst b xs with
      | none => simp [scanFirst, eraseBlankItem, hrec, ih]
      | some p =>
        obtain ⟨bb, rr⟩ := p
        simp [scanFirst, eraseBlankItem, hrec, ih]
    | close b' ls s =>
      cases h : allBlank s with
      | true =>
        have herase : eraseBlankItem (.close b' ls s) = .close b' ls [] := by
          simp [eraseBlankItem, h]
        have hacc : accepts b ls [] = accepts b ls s :=
          accepts_nil_of_allBlank h
        cases hrec : scanFirst b xs with
        | none => simp [scanFirst, eraseBlankItem, herase, h, hacc, hrec, ih]
        | some p =>
          obtain ⟨bb, rr⟩ := p
          by_cases hcond : b' = b ∧ accepts b ls s = true
          · simp [scanFirst, eraseBlankItem, herase, h, hacc, hcond, hrec, ih]
          · simp [scanFirst, eraseBlankItem, herase, h, hacc, hcond, hrec, ih]
      | false =>
        have herase : eraseBlankItem (.close b' ls s) = .close b' ls s := by
          simp [eraseBlankItem, h]
        cases hrec : scanFirst b xs with
        | none => simp [scanFirst, eraseBlankItem, herase, h, hrec, ih]
        | some p =>
          obtain ⟨bb, rr⟩ := p
          by_cases hcond : b' = b ∧ accepts b ls s = true
          · simp [scanFirst, eraseBlankItem, herase, h, hcond, hrec, ih]
          · simp [scanFirst, eraseBlankItem, herase, h, hcond, hrec, ih]

/-- The cons step of the recursive scan commutes with blank-suffix erasure: consing the erased item onto an erased scan equals erasing a scan that consed the original item. This is the one-step congruence every body step of `scanRecF_eraseBlank` uses. -/
theorem scanRecF_eraseBlank_cons (i j : Item) (fuel : Nat) (b : BlockType)
    (xs : List Item) (hij : eraseBlankItem i = j)
    (hrec : scanRecF fuel b (xs.map eraseBlankItem) =
      (scanRecF fuel b xs).map (fun (body, rest, ci) =>
        (body.map eraseBlankItem, rest.map eraseBlankItem,
          eraseBlankItem ci))) :
    (scanRecF fuel b (xs.map eraseBlankItem)).map
        (fun (body, rest, ci) => (j :: body, rest, ci)) =
      ((scanRecF fuel b xs).map
        (fun (body, rest, ci) => (i :: body, rest, ci))).map
        (fun (body, rest, ci) =>
          (body.map eraseBlankItem, rest.map eraseBlankItem,
            eraseBlankItem ci)) := by
  rw [hrec]
  cases h : scanRecF fuel b xs with
  | none => rfl
  | some p =>
    obtain ⟨bb, rr, cc⟩ := p
    simp only [Option.map_some, List.map_cons, hij]

theorem scanRecF_eraseBlank : ∀ (fuel : Nat) (b : BlockType) (xs : List Item),
    xs.length + 1 ≤ fuel →
    scanRecF fuel b (xs.map eraseBlankItem) =
      (scanRecF fuel b xs).map (fun (body, rest, ci) =>
        (body.map eraseBlankItem, rest.map eraseBlankItem,
          eraseBlankItem ci)) := by
  intro fuel
  induction fuel with
  | zero =>
    intro b xs hbound
    exact absurd hbound (by omega)
  | succ fuel ih =>
    intro b xs hbound
    cases xs with
    | nil => rfl
    | cons i xs =>
      have hb : xs.length + 1 ≤ fuel := by
        have h2 := hbound
        rw [List.length_cons] at h2
        omega
      have hrec := ih b xs hb
      cases i with
      | text k =>
        simp only [List.map_cons, eraseBlankItem, scanRecF]
        exact scanRecF_eraseBlank_cons (.text k) (.text k) fuel b xs rfl hrec
      | close b' ls s =>
        cases h : allBlank s with
        | true =>
          have herase : eraseBlankItem (.close b' ls s) = .close b' ls [] := by
            simp [eraseBlankItem, h]
          have haccEq : accepts b ls [] = accepts b ls s :=
            accepts_nil_of_allBlank h
          by_cases hacc : b' = b ∧ accepts b ls s = true
          · obtain ⟨hb', hacc2⟩ := hacc
            subst hb'
            simp only [List.map_cons, herase, scanRecF, haccEq, hacc2,
              and_true, true_and, ↓reduceIte, Option.map_some, List.map_nil]
          · simp only [List.map_cons, herase, scanRecF, haccEq, hacc,
              ↓reduceIte]
            exact scanRecF_eraseBlank_cons (.close b' ls s) (.close b' ls [])
              fuel b xs herase hrec
        | false =>
          have herase : eraseBlankItem (.close b' ls s) = .close b' ls s := by
            simp [eraseBlankItem, h]
          by_cases hacc : b' = b ∧ accepts b ls s = true
          · obtain ⟨hb', hacc2⟩ := hacc
            subst hb'
            simp only [List.map_cons, herase, scanRecF, hacc2, and_true,
              true_and, ↓reduceIte, Option.map_some, List.map_nil]
          · simp only [List.map_cons, herase, scanRecF, hacc, ↓reduceIte]
            exact scanRecF_eraseBlank_cons (.close b' ls s) (.close b' ls s)
              fuel b xs herase hrec
      | openTag b' ls =>
        have hhead : eraseBlankItem (.openTag b' ls) = .openTag b' ls := rfl
        by_cases hnest : b' = b ∧ ls = true
        · cases hn : scanRecF fuel b xs with
          | none =>
            have hnE : scanRecF fuel b (xs.map eraseBlankItem) = none := by
              rw [hrec, hn]
              rfl
            rw [List.map_cons, hhead]
            simp only [scanRecF, hnest, hnE, hn, and_true, true_and,
              ↓reduceIte, Option.map_none]
          | some np =>
            obtain ⟨nbb, nrr, ncc⟩ := np
            have hnE : scanRecF fuel b (xs.map eraseBlankItem) =
                some (nbb.map eraseBlankItem, nrr.map eraseBlankItem,
                  eraseBlankItem ncc) := by
              rw [hrec, hn]
              rfl
            obtain ⟨pre1, hpre1⟩ := scanRecF_tail fuel b xs hb hn
            have hb2 : nrr.length + 1 ≤ fuel := by
              have hlen : nrr.length ≤ xs.length := by
                rw [hpre1, List.length_append]
                omega
              omega
            have hcont := ih b nrr hb2
            by_cases hrej : rejectsNested b ncc nrr = true
            · have hrejE : rejectsNested b (eraseBlankItem ncc)
                  (nrr.map eraseBlankItem) = true := by
                rw [rejectsNested_erase]
                exact hrej
              rw [List.map_cons, hhead]
              simp only [scanRecF, hnest, hnE, hn, hrejE, hrej, and_true,
                true_and, ↓reduceIte, Option.map_some]
              simp [List.map_cons, eraseBlankItem]
            · have hrejF : rejectsNested b ncc nrr = false := by
                cases h2 : rejectsNested b ncc nrr with
                | true => exact absurd h2 hrej
                | false => rfl
              have hrejE : rejectsNested b (eraseBlankItem ncc)
                  (nrr.map eraseBlankItem) = false := by
                rw [rejectsNested_erase]
                exact hrejF
              cases hc : scanRecF fuel b nrr with
              | none =>
                have hcE : scanRecF fuel b (nrr.map eraseBlankItem) = none := by
                  rw [hcont, hc]
                  rfl
                rw [List.map_cons, hhead]
                simp only [scanRecF, hnest, hnE, hn, hrejE, hrejF, hcE, hc,
                  and_true, true_and, Bool.false_eq_true, ↓reduceIte,
                  Option.map_some]
                rfl
              | some cp =>
                obtain ⟨cbb, crr, ccc⟩ := cp
                have hcE : scanRecF fuel b (nrr.map eraseBlankItem) =
                    some (cbb.map eraseBlankItem, crr.map eraseBlankItem,
                      eraseBlankItem ccc) := by
                  rw [hcont, hc]
                  rfl
                rw [List.map_cons, hhead]
                simp only [scanRecF, hnest, hnE, hn, hrejE, hrejF, hcE, hc,
                  and_true, true_and, Bool.false_eq_true, ↓reduceIte,
                  Option.map_some]
                simp [List.map_append, List.map_cons, eraseBlankItem_idem,
                  eraseBlankItem]
        · rw [List.map_cons, hhead]
          simp only [scanRecF, hnest, ↓reduceIte]
          exact scanRecF_eraseBlank_cons (.openTag b' ls) (.openTag b' ls)
            fuel b xs rfl hrec

/-- P2 for the recursive scan, full-stream form. -/
theorem scanRec_eraseBlank (b : BlockType) (xs : List Item) :
    scanRec b (xs.map eraseBlankItem) =
      (scanRec b xs).map (fun (body, rest) =>
        (body.map eraseBlankItem, rest.map eraseBlankItem)) := by
  have h := scanRecF_eraseBlank (xs.length + 1) b xs (Nat.le_refl _)
  have hlen : (xs.map eraseBlankItem).length = xs.length := by simp
  simp only [scanRec, hlen, h, Option.map_map]
  rfl

/-- P2 for the dispatched scan, full-stream form. -/
theorem scan_eraseBlank (b : BlockType) (xs : List Item) :
    scan b (xs.map eraseBlankItem) =
      (scan b xs).map fun (body, rest) =>
        (body.map eraseBlankItem, rest.map eraseBlankItem) := by
  cases b <;> simp [scan, discipline, scanFirst_eraseBlank, scanRec_eraseBlank]

/-! ## P3: the recorded pairing rows

`verification/block-end/recorded-pairing.txt` at ftml 8cb2757c2:

    PAIRING code depths A=[1] B=[1] C=[1] D=[0] blocks=1 codes=1
    PAIRING math depths A=[1] B=[1] C=[1] D=[0] blocks=1 codes=0
    PAIRING collapsible depths A=[1] B=[1] C=[0] D=[0] blocks=1 codes=0

The repaired model's profiles reproduce all three rows exactly: the balanced shape still nests for code and math (the nested block completes and the continuation closes the outer block at the second closer), and collapsible still stops at the first closer. `blocks=1` is the model's single scan succeeding on the shape (a second block would need a second scan); the conformance driver checks success alongside the depths. Footnote and bibliography profiles are the model's first-closer prediction; the record has no row for them. -/

theorem pairing_code_recorded : profile .code = [1, 1, 1, 0] := by decide
theorem pairing_math_recorded : profile .math = [1, 1, 1, 0] := by decide
theorem pairing_collapsible_recorded : profile .collapsible = [1, 1, 0, 0] := by decide

/-- The recorded pairing table, as one statement. -/
theorem recorded_pairing :
    profile .code = [1, 1, 1, 0] ∧
    profile .math = [1, 1, 1, 0] ∧
    profile .collapsible = [1, 1, 0, 0] :=
  ⟨pairing_code_recorded, pairing_math_recorded, pairing_collapsible_recorded⟩

/-- Model prediction (no recorded row): footnote pairs like collapsible, by the first-closer discipline. -/
theorem profile_footnote_model : profile .footnote = [1, 1, 0, 0] := by decide

/-- Model prediction (no recorded row): bibliography pairs like collapsible, by the first-closer discipline. -/
theorem profile_bibliography_model : profile .bibliography = [1, 1, 0, 0] := by decide

end LeanFtml
