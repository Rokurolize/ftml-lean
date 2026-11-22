import LeanFtml.TokenState
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules
import LeanFtml.MiddleRules

namespace LeanFtml

/-! ## The middle rules, second set (R3.16): Divprefilter,
    Divalign, Note, Gallery

    Four rules whose R2 validation never ran as a dedicated
    stage (the R3 claim for them is Lean == reference; see
    REPORT-R316.md). In the full pipeline Divprefilter sits
    between Bibcite and Anchor, Divalign between Div and
    Collapsible, and Note and Gallery between Tabview and
    List, in that relative order. None of the four reads or
    writes document state beyond the token table (the R3.1
    vars inventory: no vars entry, no class static, no
    superglobal in any of the four rule files), so this stage
    adds no compared state.

    Byte-form facts the mirrors rest on:

    * Prefilter, the second pipeline rule, converts DOS and
      Mac line endings to Unix, so the working string a rule
      at these positions sees never contains a carriage
      return; a line start is exactly the subject start or
      the byte after a `\n`, and a line end is exactly a `\n`
      or the subject end. The multiline anchors therefore
      need no `\r` case (the MiddleRules precedent).
    * A placeholder's bytes are `\xFF`, digits, `\xFF`: none
      is a bracket, a letter, a colon, or a whitespace byte,
      so no match of any of the four patterns can span or
      partially overlap a placeholder except through the
      parts the patterns leave unconstrained (a Note body, a
      Divalign body, a Gallery source line, a Gallery
      attribute run), and those parts are spliced verbatim
      because the scanners work on the byte form throughout.

    Per rule:

    * Divprefilter (`/\[\[\/div\]\](\s*?)\[\[div/msi`) is a
      pure source rewrite claiming no tokens: a `[[/div]]`
      (case-insensitive), a lazy whitespace run, and a
      `[[div` prefix are replaced by the constant string
      `[[/div]][[div` -- lower-case regardless of the matched
      case (oracle probes dp-08/dp-09), with no closing `]]`
      required on the opener (dp-14) and any continuation
      (a scored `[[div_`, an attributed opener, even
      `[[divx`) accepted, since the pattern ends at the
      prefix (dp-21, dp-42).
    * Divalign
      (`/^\[\[(=|<|>|==)\]\]\n((?:(?R)|.)*?)\[\[\/\\1\]\]$/msi`)
      is the pipeline's second recursive rule, after Code:
      a line-start opener naming one of the four align keys,
      a lazy body whose units are whole recursive matches in
      preference to single bytes, and the backreference
      closer at a line end. `process()` splices the body
      between a start token (`type` start, `align` the mapped
      name) and an end token with `"\n\n"` separators, and
      the rule's own `parse()` repeats the
      `preg_replace_callback` pass until the source stops
      changing, which is how a nested block inside a claimed
      body is claimed on a later pass (its tokens appended
      after the outer pair). The body's first position is a
      line start (it follows the opener's newline), so a
      recursive unit is available there, and the alternation
      order makes the first parse the recursive one even
      where a shorter char-only parse exists (oracle probes
      da-45/da-46). The matcher enumerates candidates in
      PCRE priority order in the Code style and takes the
      first.
    * Note (`/(\n)?\[\[note\]\]\n(.*?)\[\[\/note\]\]/msi`):
      an optional leading newline group (greedy, tried
      present first), the opener and a newline, a lazy body
      to the first closer, and `process()` returning the
      group byte doubled, the start token, `"\n\n"`, the
      body, `"\n\n"`, the end token. With no leading newline
      the replacement begins at the start token itself
      (oracle probes nt-01/nt-02).
    * Gallery
      (`/^\[\[gallery(\s[^\]]*?)?\]\](?:((?:\n: [^\n]+)+)\n\[\[\/gallery\]\])?/msi`):
      a line-start opener, an optional attribute group (one
      whitespace byte -- which may be a newline, ga-43 -- and
      a lazy run of non-`]` bytes up to the first `]]`), and
      an optional body of one or more `\n: ...` source lines
      followed by the closer line. `process()` runs the
      attribute group through `getAttrs`; the token carries
      `size` only when that value is PHP-truthy (the empty
      string and `"0"` are both falsy; oracle probes
      ga-14/ga-15) and `sources` always -- the body text when
      the body group participates, PHP `null` when it does
      not (ga-01). The replacement is `"\n\n"`, the token,
      `"\n\n"`. The body group's repetition is greedy with
      whole-line backtracking: the maximal line sequence is
      tried first, then one line fewer at a time; within a
      line no backtracking exists, because the content class
      excludes the newline the closer needs.
-/

/-! ## Divprefilter -/

/-- Divprefilter's tail after a `[[/div]]` match: the lazy
    `\s*?` run and the `[[div` prefix, in PCRE's order -- the
    literal is tried at the head first, then after each
    consumed whitespace byte. Returns the bytes after the
    `[[div` prefix. -/
def dpTail : List Nat → Option (List Nat)
  | [] => none
  | src@(b :: rest) =>
      match matchLitCI (litBytes "[[div") src with
      | some r => some r
      | none => if isWsByte b then dpTail rest else none

/-- Divprefilter's scanner: each `[[/div]]` + lazy-whitespace
    + `[[div` match is replaced by the constant
    `[[/div]][[div`, and the scan continues in the subject
    after the match (replacements are never rescanned, as in
    `preg_replace_callback`). No tokens are claimed. -/
def divprefilterScan : List Nat → Nat → List Nat
  | [], _ => []
  | _, 0 => []
  | src@(b :: rest), fuel + 1 =>
      match matchLitCI (litBytes "[[/div]]") src with
      | some r1 =>
          match dpTail r1 with
          | some r2 => litBytes "[[/div]][[div" ++
              divprefilterScan r2 fuel
          | none => b :: divprefilterScan rest fuel
      | none => b :: divprefilterScan rest fuel

/-- Divprefilter: a pure source rewrite, no tokens. -/
def divprefilterRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    (divprefilterScan src (src.length + 1), toks))

/-! ## Divalign -/

/-- The align name `process()` maps each key to:
    `=` center, `<` left, `>` right, `==` justify. -/
def alignName : List Nat → List Char
  | [61] => "center".toList
  | [60] => "left".toList
  | [62] => "right".toList
  | [61, 61] => "justify".toList
  | _ => []

/-- The Divalign closer tail at the head of `s`: the literal
    `[[/` + key + `]]` (the backreference: the opener's own
    key) followed by a line end, which is not consumed.
    Returns the bytes after the closer. -/
def divalignTail (key : List Nat) (s : List Nat) :
    Option (List Nat) :=
  match matchLitBytes (litBytes "[[/" ++ key ++ litBytes "]]") s with
  | some r => if lineEndAfter r then some r else none
  | none => none

mutual

/-- Enumerate the whole Divalign pattern's matches at the
    head of `s`, in PCRE priority order. Each result is
    (key, body, rest, consumed length). A match is possible
    only at a line start (the `^` anchor, which the (?R)
    recursion also evaluates against the whole subject at the
    recursion's entry position, so this gates recursive
    attempts inside a body as well). The key alternatives are
    tried in the pattern's order =, <, >, ==: for `[[==]]`
    the `=` alternative fails on the `]]` check that follows
    it and `==` succeeds, as in PCRE; the alternatives are
    otherwise byte-disjoint. The fuel bounds backtracking-path
    depth as in CodeRule (`codeFuel`). -/
def divalignMatch (s : List Nat) (atLineStart : Bool) :
    Nat → List (List Nat × List Nat × List Nat × Nat)
  | 0 => []
  | fuel + 1 =>
    if !atLineStart then []
    else
      match matchLitBytes (litBytes "[[") s with
      | none => []
      | some r1 =>
          ([[61], [60], [62], [61, 61]] : List (List Nat)).flatMap
            (fun key =>
              match matchLitBytes (key ++ litBytes "]]") r1 with
              | some (10 :: r2) =>
                  (divalignBody key r2 true fuel).map
                    (fun (body, r3) =>
                      (key, body, r3, s.length - r3.length))
              | _ => [])

/-- Enumerate the Divalign body's completions at the head of
    `s` for the closer key, in PCRE priority order: the
    closer tail first (the lazy quantifier ends the body
    whenever it can), then extensions by one recursive
    whole-pattern match (each candidate in order), then by
    one byte. Each result is (body, rest). `lineStart` is
    the line-start status of the head of `s` in the whole
    subject, threaded through consumption exactly as in
    CodeRule's body search; the body's initial position
    follows the opener's newline, so the caller passes
    `true` for it. -/
def divalignBody (key : List Nat) (s : List Nat)
    (lineStart : Bool) :
    Nat → List (List Nat × List Nat)
  | 0 => []
  | fuel + 1 =>
    let tails : List (List Nat × List Nat) :=
      match divalignTail key s with
      | some r => [([], r)]
      | none => []
    let recs : List (List Nat × List Nat) :=
      (divalignMatch s lineStart fuel).flatMap
        (fun (k2, b2, r2, consumed) =>
          (divalignBody key r2
            ((s.take consumed).getLast? == some 10) fuel).map
            (fun (b, r) => (s.take consumed ++ b, r)))
    let charStep : List (List Nat × List Nat) :=
      match s with
      | [] => []
      | c :: rest =>
          (divalignBody key rest (c == 10) fuel).map
            (fun (b, r) => (c :: b, r))
    tails ++ recs ++ charStep

end

/-- One `preg_replace_callback` pass of Divalign over the
    byte form: matches are sought at every position, the `^`
    anchor restricting attempts to line starts; the first
    candidate at the leftmost matching position is the match,
    replaced by the start placeholder, `"\n\n"`, the body,
    `"\n\n"`, the end placeholder, and the search continues
    in the subject just after the match. -/
def divalignScan : List Nat → List TokenEntry → Bool → Nat →
    List Nat × List TokenEntry
  | _, toks, _, 0 => ([], toks)
  | [], toks, _, _ => ([], toks)
  | src@(b :: rest), toks, atStart, fuel + 1 =>
      match (if atStart then
               divalignMatch src true (codeFuel src.length)
             else []) with
      | (key, body, r3, _) :: _ =>
          let startTok : TokenEntry :=
            { rule := "Divalign",
              opts := [("type".toList, OptVal.str "start".toList),
                       ("align".toList, OptVal.str (alignName key))] }
          let endTok : TokenEntry :=
            { rule := "Divalign",
              opts := [("type".toList, OptVal.str "end".toList)] }
          let (out, toks') := divalignScan r3
            (toks ++ [startTok, endTok]) false fuel
          (phBytes toks.length ++ [10, 10] ++ body ++ [10, 10] ++
            phBytes (toks.length + 1) ++ out, toks')
      | [] =>
          let (out, toks') := divalignScan rest toks (b == 10) fuel
          (b :: out, toks')

/-- Divalign's `parse()`: repeat the callback pass until the
    source stops changing. A pass changes the source exactly
    when it claims at least one block (each claim replaces an
    opener line and a closer with placeholders), and each
    claim removes two literal `[[` from the source, so the
    loop's fuel of the initial length plus one is never the
    binding bound. Later passes claim blocks nested inside
    earlier passes' bodies, appending their tokens after the
    outer pairs. -/
def divalignLoop : List Nat → List TokenEntry → Nat →
    List Nat × List TokenEntry
  | src, toks, 0 => (src, toks)
  | src, toks, fuel + 1 =>
      let (src', toks') := divalignScan src toks true (src.length + 1)
      if toks'.length == toks.length then (src', toks')
      else divalignLoop src' toks' fuel

/-- Divalign: the recursive block rule, mirrored as the
    enumerating matcher plus the `parse()` fixpoint. -/
def divalignRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    divalignLoop src toks (src.length + 1))

/-! ## Note -/

/-- Note's body search: the first case-insensitive
    `[[/note]]` at or after the head ends the lazy body.
    Returns (body, rest after the closer). -/
def noteBody : List Nat → Option (List Nat × List Nat)
  | [] => none
  | src@(b :: rest) =>
      match matchLitCI (litBytes "[[/note]]") src with
      | some r => some ([], r)
      | none => (noteBody rest).map (fun (body, r) => (b :: body, r))

/-- Try a Note match at the head of `src`: returns (group,
    body, rest), the group being `[10]` when the optional
    leading-newline group participates and `[]` when it does
    not. The group-present form is tried first (the greedy
    `(\n)?`); a match attempt whose opener is not followed
    by a newline, or whose body finds no closer, fails as a
    whole, as in PCRE. -/
def noteMatchAt (src : List Nat) :
    Option (List Nat × List Nat × List Nat) :=
  let present : Option (List Nat × List Nat × List Nat) :=
    match src with
    | 10 :: r1 =>
        match matchLitCI (litBytes "[[note]]") r1 with
        | some (10 :: r2) =>
            (noteBody r2).map (fun (body, r3) => ([10], body, r3))
        | _ => none
    | _ => none
  match present with
  | some m => some m
  | none =>
      match matchLitCI (litBytes "[[note]]") src with
      | some (10 :: r2) =>
          (noteBody r2).map (fun (body, r3) => ([], body, r3))
      | _ => none

/-- Note's scanner: each match is replaced by the group byte
    doubled, the start placeholder, `"\n\n"`, the body,
    `"\n\n"`, the end placeholder, and the scan continues in
    the subject after the closer. -/
def noteScan : List Nat → List TokenEntry → Nat →
    List Nat × List TokenEntry
  | _, toks, 0 => ([], toks)
  | [], toks, _ => ([], toks)
  | src@(b :: rest), toks, fuel + 1 =>
      match noteMatchAt src with
      | some (grp, body, r3) =>
          let startTok : TokenEntry :=
            { rule := "Note",
              opts := [("type".toList, OptVal.str "start".toList)] }
          let endTok : TokenEntry :=
            { rule := "Note",
              opts := [("type".toList, OptVal.str "end".toList)] }
          let (out, toks') := noteScan r3
            (toks ++ [startTok, endTok]) fuel
          (grp ++ grp ++ phBytes toks.length ++ [10, 10] ++ body ++
            [10, 10] ++ phBytes (toks.length + 1) ++ out, toks')
      | none =>
          let (out, toks') := noteScan rest toks fuel
          (b :: out, toks')

/-- Note: `/(\n)?\[\[note\]\]\n(.*?)\[\[\/note\]\]/msi`. -/
def noteRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    noteScan src toks (src.length + 1))

/-! ## Gallery -/

/-- Gallery's opener at a line start: the literal
    `[[gallery`, then the attribute group -- present first
    (one whitespace byte and the maximal run of non-`]` bytes,
    which the lazy `[^\]]*?` is forced to, since the run can
    only end where `]]` stands), then absent. Returns (the
    group as captured, `[]` when absent, and the bytes after
    `]]`). -/
def galleryOpener (src : List Nat) :
    Option (List Nat × List Nat) :=
  match matchLitCI (litBytes "[[gallery") src with
  | none => none
  | some r =>
      let present : Option (List Nat × List Nat) :=
        match r with
        | w :: r1 =>
            if isWsByte w then
              let run := r1.takeWhile (fun b => b != 93)
              match r1.drop run.length with
              | 93 :: 93 :: r2 => some (w :: run, r2)
              | _ => none
            else none
        | [] => none
      match present with
      | some x => some x
      | none =>
          match r with
          | 93 :: 93 :: r2 => some ([], r2)
          | _ => none

/-- The maximal sequence of Gallery source lines
    (`\n: ` + one or more non-newline bytes) at the head of
    `src`: the lines, each with its leading newline, and the
    bytes after the last line's content. -/
def galleryLines : List Nat → Nat → List (List Nat) × List Nat
  | _, 0 => ([], [])
  | src@(10 :: 58 :: 32 :: r), fuel + 1 =>
      let content := r.takeWhile (fun b => b != 10)
      if content.isEmpty then ([], src)
      else
        let rest := r.drop content.length
        let (more, final) := galleryLines rest fuel
        ((10 :: 58 :: 32 :: content) :: more, final)
  | src, _ + 1 => ([], src)

/-- Gallery's body group: the line sequence followed by
    `\n[[/gallery]]`, tried with the maximal line count
    first and one line fewer at a time (the greedy `+`'s
    whole-line backtracking). Returns (the body text -- the
    lines with their leading newlines, exactly group 2 --
    and the bytes after the closer). -/
def galleryBody (src : List Nat) :
    Option (List Nat × List Nat) :=
  let (lines, _) := galleryLines src (src.length + 1)
  tryCount lines src lines.length
where
  tryCount (lines : List (List Nat)) (src : List Nat) :
      Nat → Option (List Nat × List Nat)
    | 0 => none
    | j + 1 =>
        let bodyText := (lines.take (j + 1)).flatten
        match src.drop bodyText.length with
        | 10 :: r =>
            match matchLitCI (litBytes "[[/gallery]]") r with
            | some r2 => some (bodyText, r2)
            | none => tryCount lines src j
        | _ => tryCount lines src j

/-- Try a Gallery match at the head of `src` (assumed to be
    at a line start): returns (the attribute group as
    captured, the body text when the body group participates,
    and the bytes after the match). The body group is tried
    present before absent (the greedy `?`); when it fails,
    the match is the opener alone. -/
def galleryMatchAt (src : List Nat) :
    Option (List Nat × Option (List Nat) × List Nat) :=
  match galleryOpener src with
  | none => none
  | some (g1, r1) =>
      match galleryBody r1 with
      | some (bodyText, r2) => some (g1, some bodyText, r2)
      | none => some (g1, none, r1)

/-- The Gallery token for a match: `process()` of the
    reference. The attribute group goes through `getAttrs`;
    `size` is carried only when its value is PHP-truthy
    (neither the empty string nor `"0"`); `sources` is the
    body text, or PHP `null` when the body group did not
    participate. -/
def galleryToken (g1 : List Nat) (body : Option (List Nat)) :
    TokenEntry :=
  let attrs := getAttrsBytes (trimBytes g1)
  let sizeOpt : OptMap :=
    match lookupB attrs (litBytes "size") with
    | some v =>
        if v.isEmpty || v == litBytes "0" then []
        else [("size".toList, textVal v)]
    | none => []
  let srcVal : OptVal := match body with
    | some b => textVal b
    | none => OptVal.null
  { rule := "Gallery", opts := sizeOpt ++ [("sources".toList, srcVal)] }

/-- Gallery's scanner: matches are sought at line starts
    only (the `^` anchor; the flag is threaded through the
    subject bytes, a match ending in `]` leaving the next
    position not at a line start). Each match is replaced by
    `"\n\n"`, the placeholder, `"\n\n"`. -/
def galleryScan : List Nat → List TokenEntry → Bool → Nat →
    List Nat × List TokenEntry
  | _, toks, _, 0 => ([], toks)
  | [], toks, _, _ => ([], toks)
  | src@(b :: rest), toks, atStart, fuel + 1 =>
      if atStart then
        match galleryMatchAt src with
        | some (g1, body, r2) =>
            let (out, toks') := galleryScan r2
              (toks ++ [galleryToken g1 body]) false fuel
            ([10, 10] ++ phBytes toks.length ++ [10, 10] ++ out,
             toks')
        | none =>
            let (out, toks') := galleryScan rest toks (b == 10) fuel
            (b :: out, toks')
      else
        let (out, toks') := galleryScan rest toks (b == 10) fuel
        (b :: out, toks')

/-- Gallery: the line-start gallery block rule. -/
def galleryRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    galleryScan src toks true (src.length + 1))

/-! ## Theorems -/

theorem divprefilterScan_example :
    divprefilterScan (litBytes "a[[/div]]\n[[div]]b") 30 =
      litBytes "a[[/div]][[div]]b" :=
  rfl

theorem divprefilterScan_case_example :
    divprefilterScan (litBytes "[[/DIV]] [[DIV]]") 30 =
      litBytes "[[/div]][[div]]" :=
  rfl

theorem divprefilterScan_noFire_example :
    divprefilterScan (litBytes "[[/div]] x [[div]]") 30 =
      litBytes "[[/div]] x [[div]]" :=
  rfl

/-- The Divalign enumeration does not reduce in the kernel at
    usable cost (measured: a single `divalignMatch` on a
    14-byte input at fuel 8 exhausts memory under `rfl`, while
    the compiled evaluation of the same call is instant) --
    the same wall Code's enumeration met in R3.1, which
    likewise carries no worked-example theorems. The theorems
    below therefore cover only the enumeration's direct
    structural pieces; the enumeration itself is carried by
    the conformance corpus and the fuzz, as for Code. -/
theorem divalignTail_example :
    divalignTail [61] (litBytes "[[/=]]") = some [] :=
  rfl

theorem divalignTail_lineEnd_example :
    divalignTail [61] (litBytes "[[/=]] x") = none :=
  rfl

theorem alignName_example :
    alignName [61, 61] = "justify".toList :=
  rfl

theorem noteScan_example :
    noteScan (litBytes "[[note]]\nbody\n[[/note]]") [] 40 =
      (phBytes 0 ++ litBytes "\n\nbody\n\n\n" ++ phBytes 1,
       [{ rule := "Note",
          opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Note",
          opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

theorem noteScan_group_example :
    noteScan (litBytes "x\n[[note]]\nb\n[[/note]]") [] 40 =
      (litBytes "x\n\n" ++ phBytes 0 ++ litBytes "\n\nb\n\n\n" ++
        phBytes 1,
       [{ rule := "Note",
          opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Note",
          opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

theorem noteScan_nested_example :
    noteScan (litBytes "[[note]]\n[[note]]\ninner\n[[/note]]\n[[/note]]")
        [] 60 =
      (phBytes 0 ++ litBytes "\n\n[[note]]\ninner\n\n\n" ++ phBytes 1 ++
        litBytes "\n[[/note]]",
       [{ rule := "Note",
          opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Note",
          opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

theorem galleryScan_openerOnly_example :
    galleryScan (litBytes "[[gallery]]") [] true 20 =
      (litBytes "\n\n" ++ phBytes 0 ++ litBytes "\n\n",
       [{ rule := "Gallery",
          opts := [("sources".toList, OptVal.null)] }]) :=
  rfl

theorem galleryScan_body_example :
    galleryScan (litBytes "[[gallery]]\n: a.png\n[[/gallery]]")
        [] true 40 =
      (litBytes "\n\n" ++ phBytes 0 ++ litBytes "\n\n",
       [{ rule := "Gallery",
          opts := [("sources".toList,
                    OptVal.str "\n: a.png".toList)] }]) :=
  rfl

theorem galleryScan_size_example :
    galleryScan
        (litBytes "[[gallery size=\"small\"]]\n: a\n[[/gallery]]")
        [] true 50 =
      (litBytes "\n\n" ++ phBytes 0 ++ litBytes "\n\n",
       [{ rule := "Gallery",
          opts := [("size".toList, OptVal.str "small".toList),
                   ("sources".toList, OptVal.str "\n: a".toList)] }]) :=
  rfl

theorem galleryScan_sizeZero_example :
    galleryScan
        (litBytes "[[gallery size=\"0\"]]\n: a\n[[/gallery]]")
        [] true 50 =
      (litBytes "\n\n" ++ phBytes 0 ++ litBytes "\n\n",
       [{ rule := "Gallery",
          opts := [("sources".toList, OptVal.str "\n: a".toList)] }]) :=
  rfl

end LeanFtml
