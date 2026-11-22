/-
  LeanFtml.FrameRules — R3 mirrors of the two frame rules,
  Prefilter and Delimiter (pipeline positions 2 and 3, after
  Include), modelled from the reference's corrected rule files
  (ref-php/text-wiki/Text/Wiki/Parse/Default/{Prefilter,Delimiter}.php)
  read together with the R2 frame record (R2-FRAME.md).

  Prefilter is a sequence of six whole-source transformations in
  the PHP, applied in a fixed order; each is a function below, and
  `prefilterChars` is their composition in the PHP's order. The two
  `preg_replace` steps are modelled as explicit scanners whose
  match semantics are derived in the comments; both are validated
  against the real `preg_replace` by the stage's fuzz differential
  (REPORT-R31.md), in addition to the corpus conformance.

  Both rules run before any token exists, so they are defined on
  the character list of a token-free state (TokenState.lean records
  the invariant and the runner maintains it).
-/

import LeanFtml.TokenState

namespace LeanFtml

/-! ## Prefilter step 1: DOS line endings

    `str_replace("\r\n", "\n", ...)`: left-to-right, non-overlapping.
    A `\r` not followed by `\n` survives this step (step 2 gets it). -/

/-- Prefilter step 1: replace each `\r\n` pair by `\n`. -/
def convCRLF : List Char → List Char
  | [] => []
  | '\r' :: '\n' :: rest => '\n' :: convCRLF rest
  | c :: rest => c :: convCRLF rest

/-! ## Prefilter step 2: Mac line endings

    `str_replace("\r", "\n", ...)`: every remaining `\r` becomes
    `\n`. After steps 1 and 2 no `\r` remains (theorem below). -/

/-- Prefilter step 2: replace every `\r` by `\n`. -/
def convCR (s : List Char) : List Char :=
  s.map (fun c => if c = '\r' then '\n' else c)

/-- Steps 1-2 remove every carriage return. -/
theorem convCR_no_cr (s : List Char) : '\r' ∉ convCR s := by
  intro h
  simp only [convCR, List.mem_map] at h
  obtain ⟨c, -, hc⟩ := h
  by_cases hcr : c = '\r'
  · rw [if_pos hcr] at hc
    exact absurd hc (by decide)
  · rw [if_neg hcr] at hc
    exact hcr hc

/-! ## Prefilter step 3: whitespace-only lines emptied

    `preg_replace("/^\s+$/m", '', ...)`. The match semantics of
    this pattern, derived from PCRE's rules: a match can only start
    at a line start (position 0, or just after a `\n`); from there
    `\s+` first takes the maximal whitespace run, then backtracks
    to the largest end position `p` such that the character at `p`
    is a `\n` or `p` is the end of the subject (where `$` holds);
    if the run reaches the end of the subject, the whole run is
    the match. The matched text is deleted and scanning continues
    in the subject just after it, with line-start status judged on
    the subject, not on the output. Note the run may itself contain
    newlines, so one match can delete a newline from a run of blank
    lines (subject `"a\n\n\nb"` becomes `"a\n\nb"`); the scanner
    below reproduces that, and the fuzz differential checks it
    against the real `preg_replace` on adversarial inputs. -/

/-- The largest index `i` in `run` with `run[i] = '\n'`, if any. -/
def lastNewlineIdx : List Char → Option Nat :=
  go 0 none
where
  go (i : Nat) (acc : Option Nat) : List Char → Option Nat
    | [] => acc
    | c :: rest => go (i + 1) (if c == '\n' then some i else acc) rest

/-- Prefilter step 3: delete every match of `/^\s+$/m`. -/
def emptyWsLines (s : List Char) : List Char :=
  go s true (s.length + 1) []
where
  go : List Char → Bool → Nat → List Char → List Char
    | [], _, _, acc => acc.reverse
    | _, _, 0, acc => acc.reverse
    | s@(c :: rest), atStart, fuel + 1, acc =>
      if atStart && isPcreWs c then
        let run := s.takeWhile isPcreWs
        let rest' := s.drop run.length
        let cand : Option Nat :=
          if rest'.isEmpty then some run.length
          else match lastNewlineIdx run with
            | some i => if 1 ≤ i then some i else none
            | none => none
        match cand with
        | some p =>
          let prev := (run.take p).getLast?
          go (run.drop p ++ rest') (prev == some '\n') fuel acc
        | none => go rest (c == '\n') fuel (c :: acc)
      else
        go rest (c == '\n') fuel (c :: acc)

/-! ## Prefilter step 4: tabs

    `str_replace("\t", "    ", ...)`: every tab becomes four
    spaces. (Not tab stops; a plain replacement, as in the PHP.) -/

/-- Prefilter step 4: replace every tab by four spaces. -/
def expandTabs : List Char → List Char
  | [] => []
  | c :: rest =>
      (if c = '\t' then [' ', ' ', ' ', ' '] else [c]) ++ expandTabs rest

/-- Step 4 removes every tab. -/
theorem expandTabs_no_tab (s : List Char) : '\t' ∉ expandTabs s := by
  induction s with
  | nil => simp [expandTabs]
  | cons c rest ih =>
    simp only [expandTabs]
    by_cases hc : c = '\t'
    · rw [if_pos hc]
      simp [ih]
    · rw [if_neg hc]
      simp [ih, Ne.symm hc]

/-! ## Prefilter step 5: frame padding

    The PHP prepends one `\n` and appends two. -/

/-- Prefilter step 5: prepend `\n`, append `\n\n`. -/
def framePad (s : List Char) : List Char :=
  '\n' :: (s ++ ['\n', '\n'])

/-! ## Prefilter step 6: newline-run compression

    `preg_replace("/(\n[ ]*){3,}/m", "\n\n", ...)`. A match is a
    run of at least three repetitions of (`\n` then spaces); each
    repetition's extent is forced (the spaces must all be consumed
    for the next repetition to start), so the subject splits into
    maximal groups of consecutive repetitions, a group with three
    or more repetitions is exactly one match (replaced by `"\n\n"`),
    and a group with fewer is copied verbatim; no match can start
    inside a group except at a repetition boundary, where the
    remaining count is smaller still. The scanner emits each group
    on that basis. -/

/-- Consume the run of spaces at the head: returns the spaces and
    the remaining input. -/
def skipSpaces : List Char → List Char × List Char
  | ' ' :: rest =>
      let (sp, r) := skipSpaces rest
      (' ' :: sp, r)
  | s => ([], s)

/-- Scan one maximal group of (`\n` spaces*) repetitions at the
    head of the input: returns the repetition count, the group's
    exact text, and the remaining input. -/
def scanGroup (s : List Char) (fuel : Nat) : Nat × List Char × List Char :=
  match fuel with
  | 0 => (0, [], s)
  | fuel + 1 =>
    match s with
    | '\n' :: rest =>
        let (spaces, rest1) := skipSpaces rest
        let (k, span, fin) := scanGroup rest1 fuel
        (k + 1, '\n' :: spaces ++ span, fin)
    | _ => (0, [], s)

/-- Prefilter step 6: replace every group of 3+ newline repetitions
    by exactly two newlines. -/
def compressNL (s : List Char) : List Char :=
  go s (s.length + 1)
where
  go : List Char → Nat → List Char
    | [], _ => []
    | _, 0 => []
    | s@('\n' :: _), fuel + 1 =>
        let (k, span, rest') := scanGroup s (s.length + 1)
        if 3 ≤ k then '\n' :: '\n' :: go rest' fuel
        else span ++ go rest' fuel
    | c :: rest, fuel + 1 => c :: go rest fuel

/-! ## The Prefilter rule -/

/-- The Prefilter transformation of a source, steps 1-6 in the
    PHP's order. (The fossil's üü strip after step 6 was refuted by
    live and removed from the reference in R2; it is not here.) -/
def prefilterChars (s : List Char) : List Char :=
  compressNL (framePad (expandTabs (emptyWsLines (convCR (convCRLF s)))))

/-- The Prefilter rule on a state. Its input is token-free by
    pipeline position (Prefilter runs second, before any rule that
    produces tokens; the only earlier rule, Include, produces
    text); the `none` branch is unreachable under the runner and
    exists only to keep the function total. -/
def prefilterRule (st : ParseState) : ParseState :=
  match allText st.work with
  | some cs => { st with work := normSegs [TSeg.text (prefilterChars cs)] }
  | none => st

/-! ## The Delimiter rule

    The reference's Delimiter rule replaces each literal delimiter
    byte (0xFF) in the source by a token carrying the byte, so that
    source text cannot forge a token boundary. In this model the
    rule is the identity, and that is a theorem about the model's
    alphabet rather than an omission: the working text is decoded
    characters (`TSeg.text` holds `List Char`), and no character's
    UTF-8 encoding contains the byte 0xFF (the encodings use bytes
    below 0x80 for ASCII and lead bytes 0xC0-0xF4 with continuation
    bytes 0x80-0xBF above it; `utf8Bytes` in TokenState.lean is the
    encoding in question), while placeholders are `TSeg.tok`
    structure, not bytes inside text. So on every state this model
    can represent, the rule's regex finds nothing. The R2 frame
    record reaches the same conclusion from the live side (typed
    text cannot contain a raw 0xFF byte; the nearest character, ÿ
    U+00FF, encodes as 0xC3 0xBF and renders as itself), and the
    stage report records a byte-level PHP probe showing the rule
    does fire on an undecoded 0xFF byte, which the JSON harness
    protocol cannot express. -/

/-- The Delimiter rule: the identity on every representable state
    (see the section comment). -/
def delimiterRule (st : ParseState) : ParseState := st

/-- Delimiter is the identity function on states. -/
theorem delimiterRule_id (st : ParseState) : delimiterRule st = st := rfl

end LeanFtml
