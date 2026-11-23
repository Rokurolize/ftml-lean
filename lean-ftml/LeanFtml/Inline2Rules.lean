import LeanFtml.TokenState
import LeanFtml.FrameRules
import LeanFtml.CodeRule
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules
import LeanFtml.LinkRules
import LeanFtml.NotesRules
import LeanFtml.BlockRules
import LeanFtml.ContainRules
import LeanFtml.ListRules
import LeanFtml.TableRules
import LeanFtml.ParaRules
import LeanFtml.Inline1Rules

/-!
# R3.13: the Colortext, Strong, Emphasis, Underline, and
Strikethrough rules

The second inline-family stage of the R3 sequence: the
reference's five paired-marker parse rules, in reference
pipeline order, extending the mirrored pipeline from
forty-two rules to forty-seven. No rule is interposed
between Interwiki and Colortext or among the five in the
full pipeline (Wikilink, Bold, and Italic are commented out
of the reference's rule list), so the stage prefix is the
R3.12 prefix plus these five. The compared state is
unchanged: none of the five rules reads or writes document
state beyond the token table.

## The pairing shape all five share

Each rule is a single `preg_replace_callback` pass (the
shared `pregScan` combinator): the leftmost match wins, a
match is fixed by the regex alone before `process()` sees
it, and scanning resumes after the consumed match, so a
callback that returns its match unchanged (Emphasis's
whitespace-padded return) still advances past the whole
match, and a callback that returns the empty string (the
empty-pair deletions) still consumes it. Making PCRE's
search order explicit is the whole modelling task:

* Colortext's two groups are explicitly lazy (`.+?`), so
  the search is a nested first-fit: color candidates end
  at each `|` in increasing order, and for each candidate
  the body ends at the first `##` at distance at least
  one; the first complete parse wins, and a failed body
  search extends the color to the next `|` (the mirror's
  `colorGo` loop, which accumulates the pipe into the
  color on failure, is that backtracking).
* Strong, Underline, and Strikethrough share one body
  grammar, `[^\s](?:.*[^\s])?` under the /U modifier.
  /U inverts every quantifier's greediness, so the
  optional group is lazy (absent before present) and the
  inner `.*` is lazy: the body candidates are tried in
  increasing length 1, 2, 3, ..., each requiring a
  non-whitespace first and last byte, and the first
  length whose following two bytes are the marker pair
  wins. That is the mirror's `pairBodyLen` scan. Strong's
  pattern carries the empty alternative last (correction
  C1), so the empty body is tried only after every
  non-empty length fails; Underline's pattern instead
  carries the `____` deletion alternative first, so four
  underscores at a position are deleted before any pair
  is attempted there.
* Emphasis's body is a lazy `.*` (correction C1): the
  first `//` at distance at least zero closes the pair.
  The whitespace-padded rejection lives in `process()`,
  after the match is fixed, so a padded body consumes
  its first-fit match and returns it literal rather than
  retrying a later closer.

## Byte-form analysis

All five rules run on the byte-form view (the R3.2
obligation). None of the five patterns excludes the
delimiter byte 0xFF from its dot or edge classes, so a
pair's body (and Colortext's color) can span an earlier
rule's placeholder whole: the placeholder's bytes are
delimiter, digits, delimiter, all dot-matchable and
non-whitespace, and a placeholder contains no newline
byte, no `|`, and no marker pair, so it can neither open
nor close a pair nor end a color by itself. The one hard
barrier is the newline byte: every dot in the five
patterns excludes it and every edge class excludes it,
so a literal newline in the byte form (one the Newline
rule left in place, as it does at paragraph boundaries)
blocks pairing across it, while a newline the Newline
rule claimed is a placeholder and no barrier at all.
The stage corpus carries both shapes: the interaction
battery's pairs spanning Url and Mathinline placeholders,
and battery case s33, whose restricted-pipeline Strong
pair spans two Newline placeholders inside one paragraph
(the same case is the stage's one consistency exclusion,
because the full pipeline's interposed Horiz claim makes
Paragraph form two paragraphs there and leaves literal
newlines between the markers). Edge bytes are read as
bytes: a body whose first or last byte is a placeholder's
0xFF is non-whitespace and claims, and an empty pair
adjacent to a placeholder is consumed exactly as in
plain text; the corpus and fuzz differentials settle
these shapes against the oracle.

The inherited residuals ride along as recorded: the
TABLE-stage strong cell-boundary shape is a Table
parse-scope matter (Table's placeholders are what the
body crosses; the mirror reproduces the reference's
parse behavior on it, as the reference does), and the
color pair across a native list stays literal in the
reference because the List rule's placeholders and the
surviving literal newlines leave no first-fit parse
(F-R2-79's line); neither is a question for this stage.
-/

namespace LeanFtml

/-! ## The shared pair-body search -/

/-- The first-fit pair body of Strong, Underline, and
    Strikethrough, at the head of `bs` (the bytes after
    the two-byte opener): the shortest length `L ≥ 1`
    whose body (the first `L` bytes) contains no newline,
    opens and closes on a non-whitespace byte, and is
    followed by two `marker` bytes. The scan walks the
    body bytes in order: a newline byte ends the search
    (no longer body can exclude it), a whitespace first
    byte ends it at once (every body opens with it), any
    other byte is a candidate last byte exactly when the
    two bytes after it are the marker pair. This is
    PCRE's own order for `[^\s](?:.*[^\s])?` under /U:
    the lazy optional group tries lengths 1, 2, 3, ...
    in increasing order. -/
def pairBodyLen (marker : Nat) (bs : List Nat) : Option Nat :=
  go bs 0 (bs.length + 1)
where
  go : List Nat → Nat → Nat → Option Nat
    | _, _, 0 => none
    | [], _, _ => none
    | b :: rest, n, fuel + 1 =>
        if b == 10 then none
        else if n == 0 && isWsByte b then none
        else if !isWsByte b && rest.take 2 == [marker, marker] then
          some (n + 1)
        else go rest (n + 1) fuel

/-- Claim a start/end token pair around the first-fit
    body at the head of `bs`, where `bs` opens with two
    `marker` bytes: the shared match shape of Strong,
    Underline, and Strikethrough. Both tokens carry only
    the `type` option, in the reference's order. -/
def pairClaim (rule : String) (marker : Nat) (bs : List Nat)
    (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match bs with
  | m1 :: m2 :: rest0 =>
      if m1 == marker && m2 == marker then
        match pairBodyLen marker rest0 with
        | some l =>
            let body := rest0.take l
            let (s, toks1) := claimTok rule
              [("type".toList, OptVal.str "start".toList)] toks
            let (e, toks2) := claimTok rule
              [("type".toList, OptVal.str "end".toList)] toks1
            some (rest0.drop (l + 2), s ++ body ++ e, toks2)
        | none => none
      else none
  | _ => none

/-! ## Colortext -/

/-- The body search of Colortext's `\#\#(.+?)\|(.+?)\#\#`
    at the head of `bs` (the bytes after a color's `|`):
    the first `##` at distance at least one, with no
    newline before it. A `##` at distance zero is body
    content (the body's first byte), so its first `#` is
    consumed and the search continues from the second.
    Returns the body and the rest after the closing
    `##`. -/
def colorBodyScan (bs : List Nat) : Option (List Nat × List Nat) :=
  go bs [] (bs.length + 1)
where
  go : List Nat → List Nat → Nat → Option (List Nat × List Nat)
    | _, _, 0 => none
    | bs, acc, fuel + 1 =>
        match bs with
        | 10 :: _ => none
        | 35 :: 35 :: rest =>
            if acc.isEmpty then go (35 :: rest) (35 :: acc) fuel
            else some (acc.reverse, rest)
        | b :: rest => go rest (b :: acc) fuel
        | [] => none

/-- REFCORR5 Batch 2: the parse-time admission class of the restricted
    color regex `/##([A-Za-z0-9#(),\- \t]+)\|(.+?)##/` — alphanumerics,
    `#`, `(`, `)`, `,`, `-`, space and tab. A color byte outside this
    class makes the whole candidate fail at this `##` position, so no
    Colortext token is claimed and the scan resumes past the first `#`. -/
def colorParseCharB (b : Nat) : Bool :=
  (65 <= b && b <= 90) || (97 <= b && b <= 122) || (48 <= b && b <= 57) ||
  b == 35 || b == 40 || b == 41 || b == 44 || b == 45 || b == 32 || b == 9

/-- The Colortext matcher at a scan position: `##`, the
    admitted color, `|`, the lazy body, `##`. Color
    candidates end at each `|` in increasing order (a
    `|` at distance zero is color content, the group
    requiring at least one byte); when a candidate's
    body search fails, the pipe joins the color and the
    next candidate is tried, which is PCRE's
    backtracking order for the nested lazy groups. A
    newline ends the search: neither group can cross
    it. REFCORR5 Batch 2: a candidate color outside the
    parse admission class (including a placeholder byte)
    fails the whole match, which leaves the construct
    literal for pre() and Tighten and lets earlier-rule
    tokens in the rejected spec render normally. Both
    tokens carry `type` then `color`, in the process's
    order. -/
def colortextMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match bs with
  | 35 :: 35 :: rest0 => go rest0 [] toks (rest0.length + 1)
  | _ => none
where
  go : List Nat → List Nat → List TokenEntry → Nat →
      Option (List Nat × List Nat × List TokenEntry)
    | _, _, _, 0 => none
    | bs, acc, toks, fuel + 1 =>
        match bs with
        | [] => none
        | 10 :: _ => none
        | 124 :: rest =>
            if acc.isEmpty then go rest (124 :: acc) toks fuel
            else
              let color := acc.reverse
              if color.all colorParseCharB then
                match colorBodyScan rest with
                | some (body, rest2) =>
                    let (s, toks1) := claimTok "Colortext"
                      [("type".toList, OptVal.str "start".toList),
                       ("color".toList, textVal color)] toks
                    let (e, toks2) := claimTok "Colortext"
                      [("type".toList, OptVal.str "end".toList),
                       ("color".toList, textVal color)] toks1
                    some (rest2, s ++ body ++ e, toks2)
                | none => go rest (124 :: acc) toks fuel
              else none
        | b :: rest => go rest (b :: acc) toks fuel

/-- The Colortext rule mirror. -/
def colortextRule (st : ParseState) : ParseState :=
  applyByteRule st (pregScan colortextMatch)

/-! ## Strong -/

/-- The Strong matcher at a scan position:
    `/\*\*([^\s\n](?:.*[^\s\n])?|)\*\*/U`. The
    non-empty body (the shared `pairClaim` search) is
    the alternation's first branch and wins wherever it
    parses; the empty alternative (correction C1) is
    tried only after it fails, and consumes the four
    markers with no tokens. -/
def strongMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match pairClaim "Strong" 42 bs toks with
  | some r => some r
  | none =>
      match bs with
      | 42 :: 42 :: 42 :: 42 :: rest => some (rest, [], toks)
      | _ => none

/-- The Strong rule mirror. -/
def strongRule (st : ParseState) : ParseState :=
  applyByteRule st (pregScan strongMatch)

/-! ## Emphasis -/

/-- The closer search of Emphasis's `/\/\/(.*)\/\//U`
    at the head of `bs` (the bytes after the opener):
    the first `//` with no newline before it (the lazy
    body tries distance zero first, so a `//` in the
    first position closes an empty body). Returns the
    body and the rest after the closer. -/
def emphCloseScan (bs : List Nat) : Option (List Nat × List Nat) :=
  go bs [] (bs.length + 1)
where
  go : List Nat → List Nat → Nat → Option (List Nat × List Nat)
    | _, _, 0 => none
    | bs, acc, fuel + 1 =>
        match bs with
        | 10 :: _ => none
        | 47 :: 47 :: rest => some (acc.reverse, rest)
        | b :: rest => go rest (b :: acc) fuel
        | [] => none

/-- REFCORR15 (S_diag d27): `/\/\/\/\/|\/\/([^\s](?:.*[^\s])?)\/\//U`,
    deleting `////` silently and pairing non-whitespace-delimited bodies
    via the shared `pairClaim` search (so leading-space `// ...` does not
    consume a later closing `//`). -/
def emphasisMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match bs with
  | 47 :: 47 :: 47 :: 47 :: rest => some (rest, [], toks)
  | _ => pairClaim "Emphasis" 47 bs toks

/-- The Emphasis rule mirror. -/
def emphasisRule (st : ParseState) : ParseState :=
  applyByteRule st (pregScan emphasisMatch)

/-! ## Underline -/

/-- The Underline matcher at a scan position:
    `/____|__([^\s](?:.*[^\s])?)__/U`. The deletion
    alternative stands first in the pattern (correction
    C1), so four underscores at a position are consumed
    with no tokens before any pair is attempted there;
    the pair form is the shared `pairClaim` search. -/
def underlineMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match bs with
  | 95 :: 95 :: 95 :: 95 :: rest => some (rest, [], toks)
  | _ => pairClaim "Underline" 95 bs toks

/-- The Underline rule mirror. -/
def underlineRule (st : ParseState) : ParseState :=
  applyByteRule st (pregScan underlineMatch)

/-! ## Strikethrough -/

/-- Does `body` open with a placeholder `\xFF<digits>\xFF` whose token in
    `toks` is a `Span` `end` token? Rejects `--` glued to `[[/span]]` by
    `Span::parse()` space trimming (REFCORR15, S_diag d30). -/
def startsWithSpanEndTok (body : List Nat) (toks : List TokenEntry) : Bool :=
  match body with
  | 0xFF :: rest =>
      let ds := rest.takeWhile (fun b => 48 ≤ b && b ≤ 57)
      if ds.isEmpty then false
      else
        match rest.drop ds.length with
        | 0xFF :: _ =>
            let idx := ds.foldl (fun a d => a * 10 + (d - 48)) 0
            match toks[idx]? with
            | some t =>
                t.rule == "Span" &&
                  match omGet t.opts "type".toList with
                  | some (OptVal.str ['e', 'n', 'd']) => true
                  | _ => false
            | none => false
        | _ => false
  | _ => false

/-- Strikethrough matcher: `/--([^\s](?:.*[^\s])?)--/U` with the REFCORR15
    guard rejecting an opening `--` immediately followed by a `Span` `end`
    placeholder, keeping `--` literal and resuming right after `--`. -/
def strikethroughMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match bs with
  | 45 :: 45 :: rest0 =>
      match pairBodyLen 45 rest0 with
      | some l =>
          let body := rest0.take l
          if startsWithSpanEndTok body toks then
            some (rest0, [45, 45], toks)
          else
            let (s, toks1) := claimTok "Strikethrough"
              [("type".toList, OptVal.str "start".toList)] toks
            let (e, toks2) := claimTok "Strikethrough"
              [("type".toList, OptVal.str "end".toList)] toks1
            some (rest0.drop (l + 2), s ++ body ++ e, toks2)
      | none => none
  | _ => none

/-- The Strikethrough rule mirror. -/
def strikethroughRule (st : ParseState) : ParseState :=
  applyByteRule st (pregScan strikethroughMatch)

/-! ## Worked examples

    The family's per-rule evidence in miniature: a
    Colortext claim; a Strong claim and the C1 empty
    pair's silent consumption; an Emphasis claim, the
    empty pair's consumption, and the whitespace-padded
    body's literal return; an Underline claim, the C1
    empty pair's deletion, and the `__a____b__` shape
    (two pairs around a deleted empty pair, the C1
    headline case) at scan level; a Strikethrough
    claim. The family's whole-rule evidence is the
    exhaustive conformance of the stage corpus and the
    fuzz differentials in REPORT-R313.md. -/

theorem colortextMatch_example :
    colortextMatch (litBytes "##red|bold##") [] =
      some ([],
        phBytes 0 ++ litBytes "bold" ++ phBytes 1,
        [{ rule := "Colortext", opts :=
           [("type".toList, OptVal.str "start".toList),
            ("color".toList, OptVal.str "red".toList)] },
         { rule := "Colortext", opts :=
           [("type".toList, OptVal.str "end".toList),
            ("color".toList, OptVal.str "red".toList)] }]) := rfl

theorem strongMatch_example :
    strongMatch (litBytes "**bold**") [] =
      some ([],
        phBytes 0 ++ litBytes "bold" ++ phBytes 1,
        [{ rule := "Strong", opts :=
           [("type".toList, OptVal.str "start".toList)] },
         { rule := "Strong", opts :=
           [("type".toList, OptVal.str "end".toList)] }]) := rfl

theorem strongMatch_empty_example :
    strongMatch (litBytes "****") [] = some ([], [], []) := rfl

theorem emphasisMatch_example :
    emphasisMatch (litBytes "//em//") [] =
      some ([],
        phBytes 0 ++ litBytes "em" ++ phBytes 1,
        [{ rule := "Emphasis", opts :=
           [("type".toList, OptVal.str "start".toList)] },
         { rule := "Emphasis", opts :=
           [("type".toList, OptVal.str "end".toList)] }]) := rfl

theorem emphasisMatch_empty_example :
    emphasisMatch (litBytes "////") [] = some ([], [], []) := rfl

theorem emphasisMatch_padded_example :
    emphasisMatch (litBytes "// pad //") [] = none := rfl

theorem underlineMatch_example :
    underlineMatch (litBytes "__u__") [] =
      some ([],
        phBytes 0 ++ litBytes "u" ++ phBytes 1,
        [{ rule := "Underline", opts :=
           [("type".toList, OptVal.str "start".toList)] },
         { rule := "Underline", opts :=
           [("type".toList, OptVal.str "end".toList)] }]) := rfl

theorem underlineMatch_empty_example :
    underlineMatch (litBytes "____") [] = some ([], [], []) := rfl

theorem underlineScan_double_example :
    pregScan underlineMatch (litBytes "__a____b__") [] =
      (phBytes 0 ++ litBytes "a" ++ phBytes 1 ++
       phBytes 2 ++ litBytes "b" ++ phBytes 3,
       [{ rule := "Underline", opts :=
          [("type".toList, OptVal.str "start".toList)] },
        { rule := "Underline", opts :=
          [("type".toList, OptVal.str "end".toList)] },
        { rule := "Underline", opts :=
          [("type".toList, OptVal.str "start".toList)] },
        { rule := "Underline", opts :=
          [("type".toList, OptVal.str "end".toList)] }]) := rfl

theorem strikethroughMatch_example :
    pairClaim "Strikethrough" 45 (litBytes "--gone--") [] =
      some ([],
        phBytes 0 ++ litBytes "gone" ++ phBytes 1,
        [{ rule := "Strikethrough", opts :=
           [("type".toList, OptVal.str "start".toList)] },
         { rule := "Strikethrough", opts :=
           [("type".toList, OptVal.str "end".toList)] }]) := rfl

end LeanFtml
