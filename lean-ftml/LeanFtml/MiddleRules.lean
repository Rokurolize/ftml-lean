import LeanFtml.TokenState
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules

namespace LeanFtml

/-! ## The middle rules (R3.15): Horiz, Separator, Clearfloat,
    Break, Center

    Five small rules whose R2 validation never ran as a
    dedicated stage (the R3 claim for them is Lean == reference;
    see REPORT-R315.md). In the full pipeline Horiz, Separator,
    Clearfloat, and Break sit between Toc and Span, in that
    relative order, and Center sits between File and Newline.
    All five are plain `preg_replace_callback` rules in the
    reference (the base class's `parse()`), so each is mirrored
    here as a single left-to-right pass over the byte form with
    no rescanning of replacements, claiming tokens as it goes.

    Byte-form facts the mirrors rest on:

    * Prefilter, the first pipeline rule, converts DOS and Mac
      line endings to Unix, so the working string a middle rule
      sees never contains a carriage return; a line start is
      exactly the subject start or the byte after a `\n`, and a
      line end is exactly a `\n` or the subject end. The
      multiline anchors of the reference's patterns therefore
      need no `\r` case.
    * A placeholder's bytes are `\xFF`, digits, `\xFF`: none is
      a space, an underscore, a newline, or one of the run
      characters, so no match of any of the five patterns can
      span or partially overlap a placeholder. A Center body,
      whose pattern excludes only `\n`, can contain whole
      placeholders, and the scanner splices them verbatim
      because it works on the byte form throughout.

    Per rule:

    * Horiz (`/^([-]{4,})$/m`): a run of at least four `-` alone
      on a line is replaced by `"\n"`, the token, `"\n\n"`, with
      no options.
    * Separator (`/^([=]{4,})$/m`): the same with `=`.
    * Clearfloat (`/^([~]{4,})(>|<)?$/m`): a run of at least
      four `~`, an optional single side byte, alone on a line,
      replaced by `"\n\n"`, the token, `"\n\n"`. The token's
      `side` option is the byte when the group participates and
      PHP `null` when it does not (the reference driver's JSON
      for `~~~~` is `{"side":null}`; settled by oracle probe
      before mirroring, recorded in REPORT-R315.md).
    * Break (`/ _\n/`): the literal three bytes space,
      underscore, newline are replaced by the bare token, with
      no options.
    * Center (`/^= (.*)$/m`, as corrected by the REFVAL
      live validation, 2026-11-21): a line beginning `= ` (at
      the subject start or after a `\n`) is claimed as a start
      token, the body (the rest of the line; the dot excludes
      `\n`), trimmed with PHP trim's byte set, and an end
      token, the match (which consumes neither bounding
      newline) replaced by `"\n\n"`, start, trimmed body,
      end, `"\n\n"`. Every consecutive Center line matches,
      as do a Center line at the subject start and one on an
      unterminated last line. (The fossil pattern
      `/\n\= (.*?)\n/` consumed both bounding newlines, could
      match neither at the subject start nor on an
      unterminated line, left the body untrimmed, and skipped
      every second consecutive line; live serves the
      corrected behavior, probes muse-probe-refval-center-p08
      (trim), p10 and p11 (consecutive lines).)
-/

/-- The length of the run of byte `c` at the head of the byte
    string (the reference patterns' `{4,}` runs are greedy, so
    the whole run is consumed). -/
def runCount : List Nat → Nat → Nat → Nat
  | [], _, acc => acc
  | b :: bs, c, acc => if b == c then runCount bs c (acc + 1) else acc

/-- Whether a line-anchored match may end at this position:
    the subject is exhausted or the next byte is a newline. -/
def lineEndAfter : List Nat → Bool
  | [] => true
  | b :: _ => b == 10

/-- Clearfloat's ending: an optional single side byte (`>` or
    `<`) followed by a line end, or a bare line end. Returns
    the bytes after the match and the side byte when one was
    consumed. Trying the side byte first is the pattern's own
    greediness; when the side byte is present but no line end
    follows it, the bare ending cannot match either (the side
    byte is not a newline), so no backtracking case exists. -/
def clearfloatEnd : List Nat → Option (List Nat × Option Nat)
  | [] => some ([], none)
  | b :: rest =>
    if (b == 62 || b == 60) && lineEndAfter rest then
      some (rest, some b)
    else if b == 10 then some (b :: rest, none)
    else none

/-- The shared scanner for Horiz, Separator, and Clearfloat:
    at a line start (the `atStart` flag: the subject start, or
    the previous byte a newline, or the previous replacement
    ending in newlines), a run of at least four `ch` bytes
    followed by the rule's ending is claimed. `preN` is the
    number of newlines the replacement puts before the token
    (one for Horiz and Separator, two for Clearfloat); the
    replacement always ends in two newlines, so the scan
    resumes at a line start. A failed ending steps one byte,
    after which the rest of the run is not at a line start and
    cannot start a match, as in the reference. -/
def lineScan (ch : Nat) (withSide : Bool) (preN : Nat)
    (rule : String) : List Nat → List TokenEntry → Bool → Nat →
    List Nat × List TokenEntry
  | _, toks, _, 0 => ([], toks)
  | [], toks, _, _ => ([], toks)
  | b :: rest, toks, atStart, fuel + 1 =>
    if atStart && 4 ≤ runCount (b :: rest) ch 0 then
      let afterRun := (b :: rest).drop (runCount (b :: rest) ch 0)
      match (if withSide then clearfloatEnd afterRun
             else if lineEndAfter afterRun
                  then some (afterRun, none)
                  else none) with
      | some (remaining, sideByte) =>
        let sideVal : OptVal := match sideByte with
          | some 62 => OptVal.str ">".toList
          | some 60 => OptVal.str "<".toList
          | _ => OptVal.null
        let opts : OptMap :=
          if withSide then [("side".toList, sideVal)] else []
        let (out, toks') := lineScan ch withSide preN rule
          remaining (toks ++ [{ rule := rule, opts := opts }])
          true fuel
        (List.replicate preN 10 ++ phBytes toks.length ++
          [10, 10] ++ out, toks')
      | none =>
        let (out, toks') := lineScan ch withSide preN rule
          rest toks (b == 10) fuel
        (b :: out, toks')
    else
      let (out, toks') := lineScan ch withSide preN rule
        rest toks (b == 10) fuel
      (b :: out, toks')

/-- Horiz: `/^([-]{4,})$/m`, replaced by `"\n"`, the token,
    `"\n\n"`, no options. -/
def horizRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    lineScan 45 false 1 "Horiz" src toks true (src.length + 1))

/-- Separator: `/^([=]{4,})$/m`, replaced by `"\n"`, the
    token, `"\n\n"`, no options. -/
def separatorRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    lineScan 61 false 1 "Separator" src toks true (src.length + 1))

/-- Clearfloat: `/^([~]{4,})(>|<)?$/m`, replaced by `"\n\n"`,
    the token, `"\n\n"`, with the `side` option. -/
def clearfloatRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    lineScan 126 true 2 "Clearfloat" src toks true (src.length + 1))

/-- Break's scanner: the literal bytes space, underscore,
    newline are replaced by the bare token. -/
def breakScan : List Nat → List TokenEntry → Nat →
    List Nat × List TokenEntry
  | _, toks, 0 => ([], toks)
  | [], toks, _ => ([], toks)
  | b :: b2 :: b3 :: rest, toks, fuel + 1 =>
    if b == 32 && b2 == 95 && b3 == 10 then
      let (out, toks') := breakScan rest
        (toks ++ [{ rule := "Break", opts := [] }]) fuel
      (phBytes toks.length ++ out, toks')
    else
      let (out, toks') := breakScan (b2 :: b3 :: rest) toks fuel
      (b :: out, toks')
  | b :: bs, toks, fuel + 1 =>
    let (out, toks') := breakScan bs toks fuel
    (b :: out, toks')

/-- Break: `/ _\n/`, replaced by the bare token, no options. -/
def breakRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    breakScan src toks (src.length + 1))

/-- Split a byte string at the first occurrence of a byte:
    the bytes before it and the bytes after it. -/
def splitAtByte : List Nat → Nat → Option (List Nat × List Nat)
  | [], _ => none
  | b :: bs, c =>
    if b == c then some ([], bs)
    else match splitAtByte bs c with
      | some (pre, post) => some (b :: pre, post)
      | none => none

/-- Center's scanner: at a line start (the `atStart` flag:
    the subject start, or the previous byte a newline), an
    `= ` opening claims the rest of the line as its body,
    trimmed with PHP trim's byte set (`trimBytes`), between a
    start and an end token. The match consumes neither
    bounding newline, so the scan resumes at the newline
    that ended the body (or at the subject end for an
    unterminated line) and the following line is attempted
    on its own: every consecutive Center line matches, as in
    the corrected reference. -/
def centerScan : List Nat → List TokenEntry → Bool → Nat →
    List Nat × List TokenEntry
  | _, toks, _, 0 => ([], toks)
  | [], toks, _, _ => ([], toks)
  | b :: b2 :: rest, toks, atStart, fuel + 1 =>
    if atStart && b == 61 && b2 == 32 then
      let body := rest.takeWhile (fun x => x != 10)
      let after := rest.drop body.length
      let startTok : TokenEntry :=
        { rule := "Center",
          opts := [("type".toList, OptVal.str "start".toList)] }
      let endTok : TokenEntry :=
        { rule := "Center",
          opts := [("type".toList, OptVal.str "end".toList)] }
      let (out, toks') := centerScan after
        (toks ++ [startTok, endTok]) false fuel
      ([10, 10] ++ phBytes toks.length ++ trimBytes body ++
        phBytes (toks.length + 1) ++ [10, 10] ++ out, toks')
    else
      let (out, toks') := centerScan (b2 :: rest) toks (b == 10) fuel
      (b :: out, toks')
  | b :: bs, toks, _, fuel + 1 =>
    let (out, toks') := centerScan bs toks (b == 10) fuel
    (b :: out, toks')

/-- Center: `/^= (.*)$/m` (REFVAL-corrected), replaced by
    `"\n\n"`, the start token, the trimmed body, the end
    token, `"\n\n"`. -/
def centerRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    centerScan src toks true (src.length + 1))

/-! ## Theorems -/

theorem horizScan_example :
    lineScan 45 false 1 "Horiz" (litBytes "a\n----\nb\n") []
        true 20 =
      (litBytes "a\n\n" ++ phBytes 0 ++ litBytes "\n\n\nb\n",
       [{ rule := "Horiz", opts := [] }]) :=
  rfl

theorem horizScan_trailingSpace_example :
    lineScan 45 false 1 "Horiz" (litBytes "x\n---- \ny\n") []
        true 20 =
      (litBytes "x\n---- \ny\n", []) :=
  rfl

theorem separatorScan_example :
    lineScan 61 false 1 "Separator" (litBytes "x\n====\ny\n") []
        true 20 =
      (litBytes "x\n\n" ++ phBytes 0 ++ litBytes "\n\n\ny\n",
       [{ rule := "Separator", opts := [] }]) :=
  rfl

theorem clearfloatScan_absentSide_example :
    lineScan 126 true 2 "Clearfloat" (litBytes "~~~~\n") []
        true 20 =
      (litBytes "\n\n" ++ phBytes 0 ++ litBytes "\n\n\n",
       [{ rule := "Clearfloat",
          opts := [("side".toList, OptVal.null)] }]) :=
  rfl

theorem clearfloatScan_side_example :
    lineScan 126 true 2 "Clearfloat" (litBytes "x\n~~~~>\ny\n")
        [] true 20 =
      (litBytes "x\n\n\n" ++ phBytes 0 ++ litBytes "\n\n\ny\n",
       [{ rule := "Clearfloat",
          opts := [("side".toList, OptVal.str ">".toList)] }]) :=
  rfl

theorem clearfloatScan_doubleSide_example :
    lineScan 126 true 2 "Clearfloat" (litBytes "x\n~~~~>>\ny\n")
        [] true 20 =
      (litBytes "x\n~~~~>>\ny\n", []) :=
  rfl

theorem breakScan_example :
    breakScan (litBytes "a _\nb\n") [] 20 =
      (litBytes "a" ++ phBytes 0 ++ litBytes "b\n",
       [{ rule := "Break", opts := [] }]) :=
  rfl

theorem breakScan_doubled_example :
    breakScan (litBytes "a _ _\nb\n") [] 20 =
      (litBytes "a _" ++ phBytes 0 ++ litBytes "b\n",
       [{ rule := "Break", opts := [] }]) :=
  rfl

theorem centerScan_example :
    centerScan (litBytes "a\n= hello =\nb\n") [] true 30 =
      (litBytes "a\n\n\n" ++ phBytes 0 ++ litBytes "hello =" ++
        phBytes 1 ++ litBytes "\n\n\nb\n",
       [{ rule := "Center",
          opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Center",
          opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

/-- A Center line at the subject start matches under the
    corrected line-anchored pattern (the fossil pattern
    required a leading newline and could not match here). -/
theorem centerScan_docStart_example :
    centerScan (litBytes "= hello\nb\n") [] true 30 =
      (litBytes "\n\n" ++ phBytes 0 ++ litBytes "hello" ++
        phBytes 1 ++ litBytes "\n\n\nb\n",
       [{ rule := "Center",
          opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Center",
          opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

/-- Consecutive Center lines each claim a pair under the
    corrected pattern (the fossil pattern consumed the
    shared newline and skipped every second line). -/
theorem centerScan_consecutive_example :
    centerScan (litBytes "x\n= a\n= b\ny\n") [] true 30 =
      (litBytes "x\n\n\n" ++ phBytes 0 ++ litBytes "a" ++
        phBytes 1 ++ litBytes "\n\n\n\n\n" ++ phBytes 2 ++
        litBytes "b" ++ phBytes 3 ++ litBytes "\n\n\ny\n",
       [{ rule := "Center",
          opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Center",
          opts := [("type".toList, OptVal.str "end".toList)] },
        { rule := "Center",
          opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Center",
          opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

/-- The body is trimmed the way PHP trim trims (the REFVAL
    correction's second half, probe
    muse-probe-refval-center-p08). -/
theorem centerScan_trim_example :
    centerScan (litBytes "=  padded \t\n") [] true 30 =
      ([10, 10] ++ phBytes 0 ++ litBytes "padded" ++
        phBytes 1 ++ [10, 10] ++ litBytes "\n",
       [{ rule := "Center",
          opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Center",
          opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

/-- A Center line on an unterminated last line matches
    (the pattern's `$` at the subject end). -/
theorem centerScan_unterminated_example :
    centerScan (litBytes "x\n= last") [] true 30 =
      (litBytes "x\n\n\n" ++ phBytes 0 ++ litBytes "last" ++
        phBytes 1 ++ [10, 10],
       [{ rule := "Center",
          opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Center",
          opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

end LeanFtml
