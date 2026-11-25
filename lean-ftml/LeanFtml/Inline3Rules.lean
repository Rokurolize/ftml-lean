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
import LeanFtml.Inline2Rules

/-!
# R3.14: the Tt, Superscript, Subscript, Typography, and
Tighten rules

The third inline-family stage of the R3 sequence and the
last stage of the reference pipeline: the reference's final
five parse rules, in reference pipeline order, extending the
mirrored pipeline from forty-seven rules to fifty-two. No
rule is interposed among the five or after Tighten in the
full pipeline (Strikethrough, Tt, Superscript, Subscript,
Typography, Tighten are consecutive at the tail of the
sixty-eight-rule list), so the stage prefix is the full
pipeline. The compared state is unchanged: none of the five
rules reads or writes document state beyond the token table
(Tighten reads the table but writes none of it).

Tt is the stage's only parse()-overriding rule: it collects
all matches of `/{{({*?.*}*?)}}/U` over the original byte
form with preg_match_all and calls process() per match with
the ORIGINAL neighbouring bytes (`before`, `after`) and the
original remainder (`tail`), so the mirror scans the
original bytes itself rather than reusing `pregScan` (whose
matcher sees the rewritten source; the two differ exactly
when a match's replacement ends in a hoisted separator space
and the next match is adjacent). The pattern's enumeration
order under /U, settled by direct probes of the reference
(state-restricted.php with the single rule Tt; probe records
kept in the stage report): the `\{` run is greedy
(lengths descending), the dot is lazy (lengths ascending,
never crossing a newline), the `\}` run is greedy (lengths
descending), and the first combination after which the
literal `}}` follows wins. Probes: `{{a}}b}}` claims body
`a` (lazy dot); `{{a}}}}` claims body `a}}` (greedy brace
run at the shortest dot length); `{{{a}}` claims body `{a`;
`{{a}b}}` claims body `a}b`. process() strips leading and
trailing space/tab padding, collapses interior space/tab
runs to one space, suppresses an empty or exactly-"0" body
(a padding-only empty body still emits one space), and
re-emits one separator space outside the token pair for a
stripped edge exactly when the neighbouring original byte
exists and is not whitespace (for the trailing edge, also
not when the original tail opens with a padded `{{`).

Superscript and Subscript are the Underline shape of
R3.13: a deletion alternative stands FIRST in each pattern
(`/^^^^|^^([^\s](?:.*[^\s])?)^^/U` with the empty pair
consumed silently, the refcorr correction of the x87
crossing; `/,,,,|,,([^\s](?:.*[^\s])?),,/U`), then the
shared first-fit pair scanner of Inline2Rules.

Typography's parse() is a hand-written sequence of ten
statements, and every statement evaluates its addToken
call(s) BEFORE replacing, so the rule registers exactly
thirteen constant character tokens in every document, in
statement order (``, '', ,,, '', `, ', <<, >>, space,
space, ..., --, ---), and every match of a statement uses
that statement's pre-assigned placeholder pair. The mirror
claims the thirteen tokens up front and rewrites the byte
form statement by statement with those placeholders: three
lazy quote-pair replacements (bodies never cross a
newline), the two guillemet literal replacements, the
digit-space-digit replacement (lookbehind and lookahead
are single digits in the statement's input), the
number-space-unit replacement, the two-step str_replace of
"..." then ". . ." (PHP processes the search array
sequentially; the placeholder contains neither dots nor
spaces, so the second pass cannot match inside the first's
output), and the two dash replacements (a run of n dashes
becomes floor(n/2) placeholders plus n mod 2 dashes; the
--- statement is then dead, implemented faithfully).

The units pattern is the stage's one large alternation.
Its matching is modelled as candidate enumeration in PCRE
depth-first order: each alternative is a matcher returning
the consumed lengths it can match at the subject head, in
the order PCRE would try them (an optional group yields its
present forms before the absent form; a character class
yields at most the one byte present; the entity forms'
`0*` is deterministic, since no entity tail begins with
'0', so giving zeros back can never let a tail match).
The first candidate whose following byte is absent or not
[a-zA-Z0-9] (the pattern's negative lookahead) wins, which
is exactly PCRE's backtracking through the alternation.
The money branch's last alternative is a bare `$` in the
pattern text, an end-of-subject anchor rather than a
literal dollar: it matches the empty string at the end of
the subject or immediately before a final newline, so a
trailing "5 " (or "5 M") at the end of a document claims
its space through this branch with an empty (or "M") unit
group. A match can only start at a digit byte followed by
a space, so it never starts inside a placeholder (a
placeholder's digits are followed by the delimiter byte).

Tighten is the pipeline's last rule and its only
whole-source shaping pass (the C1-C3 corrections of the
R2 INLINE3 stage): delete every newline byte, fold each
space/tab run to one space, then for each token in table
order move a Colortext start token's following space to
before it and a Colortext end token's preceding space to
after it, fold again, then for each token in table order
delete the spaces after a Newline token and before it,
the spaces after a Paragraph start token, and the spaces
before a Paragraph end token. The mirror performs the same
five steps over the byte form, reading rule and type from
the token table at the token's list position (the
canonical per-document index of compare.py).
-/

namespace LeanFtml

/-! ## Shared byte helpers -/

/-- Fold each maximal run of space/tab bytes to a single
    space byte: the `preg_replace('/[ \t]+/', ' ', ...)`
    shared by Tt's body collapse and Tighten's two folds. -/
def collapsePad : List Nat → List Nat :=
  go false
where
  go : Bool → List Nat → List Nat
    | _, [] => []
    | inRun, b :: rest =>
        if b == 32 || b == 9 then
          if inRun then go true rest else 32 :: go true rest
        else b :: go false rest

/-- Global non-overlapping literal replacement
    (preg_replace with a quoted literal pattern, or one
    str_replace term): on a match the replacement is
    emitted and scanning resumes after the consumed bytes;
    replacements are never rescanned. The pattern is
    nonempty at every use. -/
def replaceAllB (pat rep : List Nat) (bs : List Nat) : List Nat :=
  go bs (bs.length + 1)
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | src@(b :: rest), fuel + 1 =>
        if src.take pat.length == pat then
          rep ++ go (src.drop pat.length) fuel
        else b :: go rest fuel

def isDigitB (b : Nat) : Bool := 48 ≤ b && b ≤ 57

def isAlnumB (b : Nat) : Bool :=
  isDigitB b || (97 ≤ b && b ≤ 122) || (65 ≤ b && b ≤ 90)

/-! ## Tt -/

/-- The first Tt match at the head of `src`, which must open
    with `{{`: the group bytes and the whole match's
    consumed length. Enumeration is PCRE's under /U: the
    opening brace run descends from its maximum, the dot
    body ascends from zero (and never crosses a newline, so
    its maximum is the non-newline run at its position), the
    closing brace run descends from its maximum, and the
    first combination followed by the literal `}}` wins. -/
def ttMatchAt (src : List Nat) : Option (List Nat × Nat) :=
  if src.take 2 != [123, 123] then none
  else
    let maxA := countRun 123 (src.drop 2)
    (List.range (maxA + 1)).reverse.findSome? (fun a =>
      let dMax :=
        ((src.drop (2 + a)).takeWhile (fun b => b != 10)).length
      (List.range (dMax + 1)).findSome? (fun d =>
        let pos := 2 + a + d
        let maxB := countRun 125 (src.drop pos)
        (List.range (maxB + 1)).reverse.findSome? (fun b =>
          if (src.drop (pos + b)).take 2 == [125, 125] then
            some ((src.drop 2).take (a + d + b), pos + b + 2)
          else none)))

/-- Tt's process(): strip the body's space/tab padding,
    collapse its interior runs; an empty or exactly-"0"
    body claims nothing (a padding-only empty body still
    emits one space); otherwise claim the start/end pair
    and re-emit one separator space per stripped edge whose
    original neighbour exists and is not whitespace (the
    trailing edge also yields to a padded follower in the
    original tail). -/
def ttProcess (body : List Nat) (before after : Option Nat)
    (tail : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  let leadLen :=
    (body.takeWhile (fun b => b == 32 || b == 9)).length
  let leading := body.take leadLen
  let afterLead := body.drop leadLen
  let trailLen :=
    (afterLead.reverse.takeWhile (fun b => b == 32 || b == 9)).length
  let trailing := afterLead.drop (afterLead.length - trailLen)
  let core := afterLead.take (afterLead.length - trailLen)
  let cbody := collapsePad core
  if cbody.isEmpty || cbody == [48] then
    (if cbody.isEmpty && (!leading.isEmpty || !trailing.isEmpty)
     then ([32], toks) else ([], toks))
  else
    let leadOut :=
      if !leading.isEmpty &&
          (before.map (fun b => !isWsByte b)).getD false
      then [32] else []
    let paddedFollower :=
      tail.take 3 == [123, 123, 32] || tail.take 3 == [123, 123, 9]
    let trailOut :=
      if !trailing.isEmpty &&
          (after.map (fun b => !isWsByte b)).getD false &&
          !paddedFollower
      then [32] else []
    let (s, toks1) := claimTok "Tt"
      [("type".toList, OptVal.str "start".toList)] toks
    let (e, toks2) := claimTok "Tt"
      [("type".toList, OptVal.str "end".toList)] toks1
    (leadOut ++ s ++ cbody ++ e ++ trailOut, toks2)

/-- Tt's parse(): preg_match_all over the original byte
    form, literal text copied verbatim between matches, and
    process() called with the original neighbouring bytes
    and remainder. The scan therefore walks the original
    bytes, tracking the previous original byte. -/
def ttScan (src : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  go src none toks (src.length + 1)
where
  go : List Nat → Option Nat → List TokenEntry → Nat →
      List Nat × List TokenEntry
    | [], _, toks, _ => ([], toks)
    | _, _, toks, 0 => ([], toks)
    | src@(b :: rest), before, toks, fuel + 1 =>
        match ttMatchAt src with
        | some (group, consumed) =>
            let (repl, toks') :=
              ttProcess group before src[consumed]? (src.drop consumed)
                toks
            let (o, t2) :=
              go (src.drop consumed) (src.take consumed).getLast?
                toks' fuel
            (repl ++ o, t2)
        | none =>
            let (o, t2) := go rest (some b) toks fuel
            (b :: o, t2)

def ttRule (st : ParseState) : ParseState :=
  applyByteRule st (fun bs toks => ttScan bs toks)

/-! ## Superscript and Subscript -/

/-- Superscript's matcher: the empty pair `^^^^` is
    consumed silently (the pattern's first alternative,
    the refcorr correction), otherwise the shared
    first-fit pair claim of Inline2Rules. -/
def supMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  if bs.take 4 == [94, 94, 94, 94] then some (bs.drop 4, [], toks)
  else pairClaim "Superscript" 94 bs toks

def superscriptRule (st : ParseState) : ParseState :=
  applyByteRule st (pregScan supMatch)

/-- Subscript's matcher: the empty pair `,,,,` is consumed
    silently (the pattern's first alternative), otherwise
    the shared first-fit pair claim. -/
def subMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  if bs.take 4 == [44, 44, 44, 44] then some (bs.drop 4, [], toks)
  else pairClaim "Subscript" 44 bs toks

def subscriptRule (st : ParseState) : ParseState :=
  applyByteRule st (pregScan subMatch)

/-! ## Typography -/

/-- One lazy quote-pair statement of Typography: replace
    each `open ... close` (the shortest body that reaches
    the closer without crossing a newline) with
    repO ++ body ++ repC, using the statement's
    pre-assigned placeholders. -/
def typoPair (opn cls repO repC : List Nat) (bs : List Nat) :
    List Nat :=
  let m : List Nat → List TokenEntry →
      Option (List Nat × List Nat × List TokenEntry) :=
    fun src toks =>
      if src.take opn.length == opn then
        match lazyClose cls (src.drop opn.length) 0 with
        | some blen =>
            some (src.drop (opn.length + blen + cls.length),
              repO ++ (src.drop opn.length).take blen ++ repC, toks)
        | none => none
      else none
  (pregScan m bs []).1
where
  lazyClose (cls : List Nat) : List Nat → Nat → Option Nat
    | [], _ => none
    | src@(b :: rest), n =>
        if src.take cls.length == cls then some n
        else if b == 10 then none
        else lazyClose cls rest (n + 1)

/-- The digit-space-digit statement: a space byte whose
    previous input byte and next input byte are both
    digits is replaced by the statement's placeholder.
    The decision reads the statement's input, exactly the
    pattern's lookbehind and lookahead. -/
def typoNumSpace (ph : List Nat) (bs : List Nat) : List Nat :=
  go none bs
where
  go : Option Nat → List Nat → List Nat
    | _, [] => []
    | prev, b :: rest =>
        if b == 32 &&
            (prev.map isDigitB).getD false &&
            (rest.head?.map isDigitB).getD false then
          ph ++ go (some b) rest
        else b :: go (some b) rest

/-- A units-alternation matcher: the consumed lengths it
    can match at the subject head, in PCRE depth-first
    order. -/
abbrev UMatch := List Nat → List Nat

def litM (lit : List Nat) : UMatch :=
  fun bs => if bs.take lit.length == lit then [lit.length] else []

def classM (set : List Nat) : UMatch :=
  fun bs => match bs with
    | b :: _ => if set.contains b then [1] else []
    | [] => []

/-- A decimal entity `&#0*tail`: the zero run is greedy
    and deterministic (no tail begins with '0'). -/
def entM (tail : List Nat) : UMatch :=
  fun bs =>
    if bs.take 2 == [38, 35] then
      let rest := bs.drop 2
      let zeros := countRun 48 rest
      if (rest.drop zeros).take tail.length == tail then
        [2 + zeros + tail.length]
      else []
    else []

/-- A hexadecimal entity `&#[xX]0*tail`, over the tail's
    case variants (the pattern's [Aa]/[Bb]/[Cc] classes;
    at most one variant can match a given subject). -/
def xentM (tails : List (List Nat)) : UMatch :=
  fun bs =>
    if bs.take 2 == [38, 35] &&
        (bs[2]? == some 120 || bs[2]? == some 88) then
      let rest := bs.drop 3
      let zeros := countRun 48 rest
      tails.flatMap (fun tail =>
        if (rest.drop zeros).take tail.length == tail then
          [3 + zeros + tail.length]
        else [])
    else []

def altM (ms : List UMatch) : UMatch :=
  fun bs => ms.flatMap (fun m => m bs)

def seqM (a b : UMatch) : UMatch :=
  fun bs => (a bs).flatMap (fun la => (b (bs.drop la)).map (· + la))

/-- An optional group: its present forms first, then the
    absent form. -/
def optM (m : UMatch) : UMatch :=
  fun bs => m bs ++ [0]

/-- The money branch's bare `$`: the empty string at the
    end of the subject or immediately before a final
    newline. The matcher sees the subject suffix, so the
    two positions are the empty suffix and the lone
    trailing newline. -/
def anchorM : UMatch :=
  fun bs => if bs.isEmpty || bs == [10] then [0] else []

def metricPrefix : UMatch :=
  optM (altM [litM (litBytes "p"), litM [194, 181],
    litM (litBytes "&micro;"), entM (litBytes "181;"),
    xentM [litBytes "B5;", litBytes "b5;"],
    classM (litBytes "mcdhkMGT")])

def metricUnit : UMatch :=
  altM [classM (litBytes "mgstAKNJWCVFSTHBL"),
    litM (litBytes "mol"), litM (litBytes "cd"),
    litM (litBytes "rad"), litM (litBytes "Hz"),
    litM (litBytes "Pa"), litM (litBytes "Wb"),
    litM (litBytes "lm"), litM (litBytes "lx"),
    litM (litBytes "Bq"), litM (litBytes "Gy"),
    litM (litBytes "Sv"), litM (litBytes "kat"),
    litM [206, 169], litM (litBytes "Ohm"),
    litM (litBytes "&Omega;"), entM (litBytes "937;"),
    xentM [litBytes "3A9;", litBytes "3a9;"]]

def computerU : UMatch :=
  seqM (optM (classM (litBytes "kKMGT")))
    (altM [classM (litBytes "oBb"),
      seqM (classM (litBytes "oBb")) (litM (litBytes "ps")),
      litM (litBytes "flops")])

def moneyCore : UMatch :=
  altM [litM [194, 163], litM (litBytes "&pound;"),
    entM (litBytes "163;"),
    xentM [litBytes "A3;", litBytes "a3;"],
    litM [194, 165], litM (litBytes "&yen;"),
    entM (litBytes "165;"),
    xentM [litBytes "A5;", litBytes "a5;"],
    litM [226, 130, 172], litM (litBytes "&euro;"),
    entM (litBytes "8364;"),
    xentM [litBytes "20AC;", litBytes "20Ac;",
      litBytes "20aC;", litBytes "20ac;"],
    anchorM]

def degreeU : UMatch :=
  seqM (altM [litM [194, 176], litM (litBytes "&deg;"),
      entM (litBytes "176;"),
      xentM [litBytes "B0;", litBytes "b0;"]])
    (optM (classM (litBytes "CF")))

/-- The full units alternation, in the pattern's written
    order: metric, computer, the cent forms, the money
    group, degrees, then the bare unit words. -/
def unitCands : UMatch :=
  altM [seqM metricPrefix metricUnit, computerU,
    litM [194, 162], litM (litBytes "&cent;"),
    entM (litBytes "162;"),
    xentM [litBytes "A2;", litBytes "a2;"],
    seqM (optM (litM (litBytes "M"))) moneyCore,
    degreeU,
    litM (litBytes "%"), litM (litBytes "pt"),
    litM (litBytes "pi"),
    seqM (optM (litM (litBytes "M"))) (litM (litBytes "px")),
    litM (litBytes "em"), litM (litBytes "en"),
    litM (litBytes "gal"), litM (litBytes "lb"),
    classM (litBytes "NSEOW"),
    seqM (classM (litBytes "NS")) (classM (litBytes "EOW")),
    litM (litBytes "ha"), litM (litBytes "mbar")]

/-- The number-space-unit statement: at a digit byte
    followed by a space, the first units candidate (in
    DFS order) whose following byte is absent or not
    [a-zA-Z0-9] wins; the replacement is the digit, the
    statement's placeholder, and the unit bytes. -/
def typoUnits (ph : List Nat) (bs : List Nat) : List Nat :=
  go bs (bs.length + 1)
where
  go : List Nat → Nat → List Nat
    | [], _ => []
    | _, 0 => []
    | src@(b :: rest), fuel + 1 =>
        if isDigitB b && rest.head? == some 32 then
          let after := rest.drop 1
          match (unitCands after).find? (fun c =>
              match after[c]? with
              | none => true
              | some nb => !isAlnumB nb) with
          | some c =>
              [b] ++ ph ++ after.take c ++ go (after.drop c) fuel
          | none => b :: go rest fuel
        else b :: go rest fuel

/-- Typography's parse(): claim the thirteen constant
    character tokens in statement order, then run the ten
    statements over the byte form with the pre-assigned
    placeholders. -/
def typographyRule (st : ParseState) : ParseState :=
  applyByteRule st (fun bs toks =>
    let base := toks.length
    let chars : List String :=
      ["``", "''", ",,", "''", "`", "'", "<<", ">>", " ", " ",
       "...", "--", "---"]
    let toks' := toks ++ chars.map (fun c =>
      { rule := "Typography",
        opts := [("char".toList, OptVal.str c.toList)] })
    let ph : Nat → List Nat := fun k => phBytes (base + k)
    let s1 := typoPair [96, 96] [39, 39] (ph 0) (ph 1) bs
    let s2 := typoPair [44, 44] [39, 39] (ph 2) (ph 3) s1
    let s3 := typoPair [96] [39] (ph 4) (ph 5) s2
    let s4 := replaceAllB [60, 60] (ph 6) s3
    let s5 := replaceAllB [62, 62] (ph 7) s4
    let s6 := typoNumSpace (ph 8) s5
    let s7 := typoUnits (ph 9) s6
    let s8 := replaceAllB (litBytes ". . .") (ph 10)
      (replaceAllB (litBytes "...") (ph 10) s7)
    let s9 := replaceAllB [45, 45] (ph 11) s8
    let s10 := replaceAllB [45, 45, 45] (ph 12) s9
    (s10, toks'))

/-! ## Tighten -/

/-- Delete the space/tab run after each occurrence of the
    placeholder `ph` (the `' +'` edge patterns; a run of
    length zero is a no-op, as in the pattern). -/
def dropAfterPh (ph : List Nat) (bs : List Nat) : List Nat :=
  go bs false (bs.length + 1)
where
  go : List Nat → Bool → Nat → List Nat
    | [], _, _ => []
    | _, _, 0 => []
    | src@(b :: rest), skipping, fuel + 1 =>
        if skipping && (b == 32 || b == 9) then go rest true fuel
        else if src.take ph.length == ph then
          ph ++ go (src.drop ph.length) true fuel
        else b :: go rest false fuel

/-- Delete the space/tab run before each occurrence of
    the placeholder `ph` (the `' +'` edge patterns; a run
    not followed by the placeholder is kept). -/
def dropBeforePh (ph : List Nat) (bs : List Nat) : List Nat :=
  go bs [] (bs.length + 1)
where
  go : List Nat → List Nat → Nat → List Nat
    | [], pend, _ => pend
    | _, _, 0 => []
    | src@(b :: rest), pend, fuel + 1 =>
        if b == 32 || b == 9 then go rest (pend ++ [b]) fuel
        else if src.take ph.length == ph then
          ph ++ go (src.drop ph.length) [] fuel
        else pend ++ (b :: go rest [] fuel)

/-- Tighten's color pass: for each token in table order,
    a Colortext start token's following space moves to
    before it and a Colortext end token's preceding space
    moves to after it. -/
def tightenColorPass (bs : List Nat) :
    List TokenEntry → Nat → List Nat
  | [], _ => bs
  | tok :: rest, i =>
      let bs' :=
        if tok.rule == "Colortext" then
          match omGet tok.opts "type".toList with
          | some (OptVal.str v) =>
              if v == "start".toList then
                replaceAllB (phBytes i ++ [32]) ([32] ++ phBytes i) bs
              else if v == "end".toList then
                replaceAllB ([32] ++ phBytes i) (phBytes i ++ [32]) bs
              else bs
          | _ => bs
        else bs
      tightenColorPass bs' rest (i + 1)

/-- Tighten's edge pass: for each token in table order,
    delete the spaces after and before a Newline token,
    after a Paragraph start token, and before a Paragraph
    end token. -/
def tightenEdgePass (bs : List Nat) :
    List TokenEntry → Nat → List Nat
  | [], _ => bs
  | tok :: rest, i =>
      let ph := phBytes i
      let bs' :=
        if tok.rule == "Newline" then
          dropAfterPh ph (dropBeforePh ph bs)
        else if tok.rule == "Paragraph" then
          match omGet tok.opts "type".toList with
          | some (OptVal.str v) =>
              if v == "start".toList then dropAfterPh ph bs
              else if v == "end".toList then dropBeforePh ph bs
              else bs
          | _ => bs
        else bs
      tightenEdgePass bs' rest (i + 1)

/-- REFCORR5 Batch 6: an empty Raw token renders to nothing, so its
    placeholder must be transparent to the space folds below. Drop those
    placeholders from the working source before folding; the token table
    is read only and keeps the token (and its index) intact. -/
def isEmptyRawTok (toks : List TokenEntry) (id : Nat) : Bool :=
  match toks[id]? with
  | some t =>
      t.rule == "Raw" &&
      match omGet t.opts "text".toList with
      | some (.str cs) => cs.isEmpty
      | some (.bytes bs) => bs.isEmpty
      | some (.list xs) => xs.isEmpty
      | _ => false
  | none => false

def stripEmptyRawPh (bs : List Nat) (toks : List TokenEntry) : List Nat :=
  go bs bs.length toks
where
  go : List Nat → Nat → List TokenEntry → List Nat
    | [], _, _ => []
    | _, 0, _ => []
    | 0xFF :: rest, fuel + 1, toks =>
        let (digits, tail) := rest.span (fun b => 48 <= b && b <= 57)
        match tail with
        | 0xFF :: rest2 =>
            let id := digits.foldl (fun a b => a * 10 + (b - 48)) 0
            if !digits.isEmpty && isEmptyRawTok toks id
            then go rest2 fuel toks
            -- REFCORR22 R1 (Tighten boundary scan): emit the whole matched
            -- placeholder at once and continue AFTER it. The former
            -- `0xFF :: go rest` re-examined the closing delimiter as a new
            -- opening delimiter, so in `\xFF92\xFF10\xFF93\xFF` it deleted
            -- the false empty-Raw 10 overlap spanning tokens 92 and 93,
            -- welding them into a nonexistent placeholder.
            else 0xFF :: digits ++ 0xFF :: go rest2 fuel toks
        | _ => 0xFF :: go rest fuel toks
    | b :: rest, fuel + 1, toks => b :: go rest fuel toks

/-- Whether the working byte stream still carries the three UTF-8 bytes
    of a literal U+FFFD (R-UFFFD-1). REFCORR7 (idx-after): the recovery
    path walks the whole adjacent placeholder run, so the empty Raw
    placeholder must stay in the stream exactly as live keeps it. -/
def hasUfffdBytes : List Nat → Bool
  | 0xEF :: 0xBF :: 0xBD :: _ => true
  | _ :: rest => hasUfffdBytes rest
  | [] => false

/-- R11-CONCAT: the discarded C0 control byte set live's purifyHtml
    removes from residual text: 0x00-0x08, 0x0B, 0x0C, 0x0E-0x1A and
    0x1C-0x1F. TAB, LF, CR and ESC are kept (ESC is the round-5d D7
    witness). This is exactly the class the Size rule already uses. -/
def isDiscardedControl (b : Nat) : Bool :=
  (b <= 8) || (b >= 11 && b <= 12) ||
  (b >= 14 && b <= 26) || (b >= 28 && b <= 31)

def stripDiscardedControls (bs : List Nat) : List Nat :=
  bs.filter (fun b => ! isDiscardedControl b)

/-- Tighten's parse(): delete every newline, fold
    space/tab runs, run the color pass, fold again, run
    the edge pass. The token table is read, never
    written. -/
def tightenBytes (bs : List Nat) (toks : List TokenEntry) :
    List Nat :=
  let s0 := if hasUfffdBytes bs then bs else stripEmptyRawPh bs toks
  let s1 := stripDiscardedControls (s0.filter (fun b => b != 10))
  let s2 := collapsePad s1
  let s3 := tightenColorPass s2 toks 0
  let s4 := collapsePad s3
  tightenEdgePass s4 toks 0

def tightenRule (st : ParseState) : ParseState :=
  applyByteRule st (fun bs toks => (tightenBytes bs toks, toks))

/-! ## Worked examples (all `rfl`) -/

theorem ttMatch_example :
    ttMatchAt (litBytes "{{a}}") = some (litBytes "a", 5) := rfl

theorem ttMatch_closeRun_example :
    ttMatchAt (litBytes "{{a}}}}") = some (litBytes "a}}", 7) := rfl

theorem ttScan_example :
    ttScan (litBytes "x{{ a }}y") [] =
      (litBytes "x " ++ phBytes 0 ++ litBytes "a" ++ phBytes 1 ++
        litBytes " y",
       [{ rule := "Tt",
          opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Tt",
          opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

theorem superscriptMatch_example :
    supMatch (litBytes "^^x^^") [] =
      some ([], phBytes 0 ++ litBytes "x" ++ phBytes 1,
        [{ rule := "Superscript",
           opts := [("type".toList, OptVal.str "start".toList)] },
         { rule := "Superscript",
           opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

theorem superscriptMatch_empty_example :
    supMatch (litBytes "^^^^") [] = some ([], [], []) := rfl

theorem subscriptMatch_example :
    subMatch (litBytes ",,x,,") [] =
      some ([], phBytes 0 ++ litBytes "x" ++ phBytes 1,
        [{ rule := "Subscript",
           opts := [("type".toList, OptVal.str "start".toList)] },
         { rule := "Subscript",
           opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

theorem subscriptMatch_empty_example :
    subMatch (litBytes ",,,,") [] = some ([], [], []) := rfl

theorem typoUnits_example :
    typoUnits (phBytes 0) (litBytes "5 m") =
      litBytes "5" ++ phBytes 0 ++ litBytes "m" := rfl

theorem typoUnits_anchor_example :
    typoUnits (phBytes 0) (litBytes "5 ") =
      litBytes "5" ++ phBytes 0 := rfl

theorem tighten_example :
    tightenBytes (litBytes "a\nb") [] = litBytes "ab" := rfl

theorem tighten_c0drop_example :
    tightenBytes (litBytes "alpha" ++ [12] ++ litBytes "bravo") [] =
      litBytes "alphabravo" := rfl

theorem tighten_esc_kept_example :
    tightenBytes (litBytes "A" ++ [27] ++ litBytes "B") [] =
      litBytes "A" ++ [27] ++ litBytes "B" := rfl

theorem tightenColor_example :
    tightenBytes (phBytes 0 ++ litBytes " x")
        [{ rule := "Colortext",
           opts := [("type".toList, OptVal.str "start".toList)] }] =
      [32] ++ phBytes 0 ++ litBytes "x" := rfl

end LeanFtml
