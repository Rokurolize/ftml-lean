/-
  LeanFtml.CodeRule — R3 mirror of the Code parse rule
  (ref-php/text-wiki/Text/Wiki/Parse/Default/Code.php), modelled
  from the corrected rule file together with the R2 Code stage
  record (conformance-refphp/code/, R2-CODE.md). The rule's parse
  needed no R2 correction; what is mirrored here is the fossil's
  regex and `process()` exactly as the reference runs them.

  The regex is `;^\[\[code(\s[^\]]*)?\]\]((?:(?R)|.)*?)\[\[/code\]\](\s|$);msi`,
  applied by the base class through `preg_replace_callback`. There
  is no regex engine in Lean, so the matcher below is an explicit
  backtracking search that enumerates matches in PCRE's priority
  order and takes the first, which is what PCRE's backtracking
  semantics define:

  * at a line start (the `^` anchor under /m), the literal `[[code`
    matches ASCII-case-insensitively (the /i modifier);
  * the optional group `(\s[^\]]*)?` is tried present before absent
    (greedy option), and inside it `[^\]]*` is tried longest first;
  * the body `((?:(?R)|.)*?)` is lazy: at each body position the
    closing tail is tried first, then one unit is consumed — a
    recursive whole-pattern match ((?R)) in preference to a single
    character (`.` under /s matches any character) — and failure of
    the continuation backtracks into the recursive match's next
    candidate, then into the character step;
  * the tail `\[\[/code\]\](\s|$)` consumes one whitespace character
    for preference; where that character is a newline (or the text
    ends) the empty alternative also exists and is tried second,
    which matters when this match is itself a recursive unit inside
    an outer body;
  * the recursive match re-runs the whole pattern, `^` anchor
    included, and PCRE evaluates that anchor against the whole
    subject at the recursion's entry position: a recursive match
    can only start at a line start. This is observable, and the
    stage's fuzz differential caught a first model that ignored
    it: in `[[code]]\n[[code]]\ninner\n[[/code]]\nouter\n[[/code]]`
    the inner block starts at a line start, the recursion fires,
    and the outer body spans the inner closer; in
    `[[CODE]][[code]]  [[code [[/code]]\n[[/CODE]]` a recursive
    match exists at the (non-line-start) first body position whose
    use would close the outer body at the second closer, but the
    reference closes at the first, because the recursion is
    unavailable there. The matcher therefore threads the current
    position's line-start status through the body search. (After
    Prefilter the subject holds no `\r`, so line start is exactly
    "start of subject or preceded by `\n`".)

  `process()` replaces the whole match by `"\n\n"`, the token
  placeholder, and the captured trailing whitespace (group 3); the
  token's options are the body text and the attribute map parsed
  from the trimmed group 1 by the base class's `getAttrs`, with a
  `type` key defaulted to `""`. `getAttrs` and PHP's `stripslashes`
  are modelled below from the base class source, with their edge
  semantics pinned by direct PHP probes (REPORT-R31.md).

  Code runs fourth in the pipeline, and on every input the harness
  can express its input is still token-free: Include (first) expands
  to plain text, Prefilter (second) produces no tokens, Delimiter
  (third) is the identity on decoded text. The stage's consistency
  check verifies this on the corpus (in every full-pipeline fixture,
  the first token of the table, if any, is a Code token). The mirror
  is therefore defined on the character list of a token-free state,
  not as a stage-local simplification but as the rule's semantics at
  its pipeline position.
-/

import LeanFtml.TokenState
import LeanFtml.FrameRules

namespace LeanFtml

/-! ## Case-insensitive literal matching (PCRE /i, ASCII folding) -/

/-- Swap the case of an ASCII letter; identity otherwise. -/
def swapAsciiCase (c : Char) : Char :=
  if 'a' ≤ c && c ≤ 'z' then Char.ofNat (c.toNat - 32)
  else if 'A' ≤ c && c ≤ 'Z' then Char.ofNat (c.toNat + 32)
  else c

/-- Does character `c` match the literal character `lit` under
    PCRE's ASCII case folding? -/
def ciChar (c lit : Char) : Bool :=
  c == lit || c == swapAsciiCase lit

/-- If `s` starts with the literal `pat` (matched
    case-insensitively), return the rest of `s`. -/
def matchLit : List Char → List Char → Option (List Char)
  | s, [] => some s
  | [], _ :: _ => none
  | c :: s, l :: p => if ciChar c l then matchLit s p else none

/-! ## PHP string helpers used by `process()` and `getAttrs` -/

/-- PHP `stripslashes`: a backslash quotes the next character
    (which is emitted literally, except `0`, which becomes the NUL
    character); a trailing lone backslash is dropped. Both edge
    behaviors are pinned by direct PHP probes (REPORT-R31.md). -/
def stripslashes : List Char → List Char
  | [] => []
  | '\\' :: c :: rest =>
      (if c = '0' then Char.ofNat 0 else c) :: stripslashes rest
  | '\\' :: [] => []
  | c :: rest => c :: stripslashes rest

/-- PHP `explode('="', s)`: split at every non-overlapping
    occurrence of the two-character sequence `="`. Always returns
    at least one part. -/
def explodeEq (s : List Char) : List (List Char) :=
  go s [] []
where
  go : List Char → List Char → List (List Char) → List (List Char)
    | [], cur, acc => (cur.reverse :: acc).reverse
    | '=' :: '"' :: rest, cur, acc => go rest [] (cur.reverse :: acc)
    | c :: rest, cur, acc => go rest (c :: cur) acc

/-- The last index of a character in a list, if present. -/
def lastIdxOf (x : Char) (l : List Char) : Option Nat :=
  go 0 none l
where
  go (i : Nat) (acc : Option Nat) : List Char → Option Nat
    | [] => acc
    | c :: rest => go (i + 1) (if c = x then some i else acc) rest

/-- The base class's `getAttrs`: split the (trimmed) text on `="`;
    the first part is the first key (trimmed); each later part
    contributes the value for the pending key — everything before
    its last `"`, passed through `stripslashes` (if the part has no
    `"`, the value is empty, matching PHP's `substr($v, 0, false)`)
    — and the next key, the trimmed remainder after that quote (or
    after the part's first character, matching `substr($v, false+1)`
    in the no-quote case). A key left pending at the end is dropped;
    assignments follow PHP array order (`omSet`). -/
def getAttrs (text : List Char) : OptMap :=
  match explodeEq (trimChars text) with
  | [] => []
  | first :: rest => go rest (trimChars first) []
where
  go : List (List Char) → List Char → OptMap → OptMap
    | [], _, acc => acc
    | part :: parts, key, acc =>
        let (value, nextKey) : List Char × List Char :=
          match lastIdxOf '"' part with
          | some i =>
              (stripslashes (part.take i), trimChars (part.drop (i + 1)))
          | none => ([], trimChars (part.drop 1))
        go parts nextKey (omSet acc key (OptVal.str value))

/-- The Code token for a match: `process()` of the reference.
    `g1` is the optional attribute group as captured (absent = the
    group did not participate, which PHP reports as `''`); the token
    options are `text` (the body) and `attr` (the parsed attributes,
    with `type` defaulted to `""`; when the trimmed arguments are
    empty the attribute map is exactly `{type: ""}` and `getAttrs`
    is not consulted). -/
def codeToken (g1 : Option (List Char)) (body : List Char) : TokenEntry :=
  let args := trimChars (g1.getD [])
  let attr : OptMap :=
    if args.isEmpty then [("type".toList, OptVal.str [])]
    else
      let a := getAttrs args
      match omGet a "type".toList with
      | some _ => a
      | none => a ++ [("type".toList, OptVal.str [])]
  { rule := "Code",
    opts := [("text".toList, OptVal.str body), ("attr".toList, OptVal.map attr)] }

/-! ## The backtracking matcher

    `codeMatch` enumerates the whole pattern's matches at the head
    of a subject (assumed to be at a line start) as
    (consumed length, group 1, body, group 3) in PCRE priority
    order; `codeBody` enumerates the body's completions as
    (body, group 3, remaining subject). Both take a fuel that
    bounds the depth of any one backtracking path (each character
    step and each nested match decrements it); `codeFuel` sizes it
    so no path a subject of the given length can take is cut off:
    along any path, character steps and nested-match entries
    together number at most twice the subject length. -/

/-- Fuel for the matcher on a subject of length `n`: a safe bound
    on backtracking-path depth (see the section comment). -/
def codeFuel (n : Nat) : Nat := 4 * n + 16

/-- Enumerate the parses of `(\s[^\]]*)?\]\]` at the head of `s`,
    as (group 1, rest) pairs in PCRE priority order: the group
    present (its `[^\]]*` run longest first), then the group
    absent. -/
def openerArgs (s : List Char) : List (Option (List Char) × List Char) :=
  let present : List (Option (List Char) × List Char) :=
    match s with
    | w :: rest =>
        if isPcreWs w then
          let run := rest.takeWhile (fun c => c != ']')
          (List.range (run.length + 1)).reverse.filterMap (fun k =>
            let after := rest.drop k
            match after with
            | ']' :: ']' :: after2 => some (some (s.take (1 + k)), after2)
            | _ => none)
        else []
    | [] => []
  let absent : List (Option (List Char) × List Char) :=
    match s with
    | ']' :: ']' :: after => [(none, after)]
    | _ => []
  present ++ absent

mutual

/-- Enumerate the whole Code pattern's matches at the head of `s`,
    in PCRE priority order. Each result is (consumed length,
    group 1, body, group 3). The pattern opens with the `^` anchor,
    so a match is only possible when `atLineStart` holds for the
    head of `s` in the whole subject; this gates both the scan's
    top-level attempts and, as PCRE does, recursive (?R) attempts
    inside a body. The body's initial position follows the opener's
    closing `]]`, so it is never itself a line start. -/
def codeMatch (s : List Char) (atLineStart : Bool) :
    Nat → List (Nat × Option (List Char) × List Char × List Char)
  | 0 => []
  | fuel + 1 =>
    if !atLineStart then []
    else
      match matchLit s "[[code".toList with
      | none => []
      | some r1 =>
          (openerArgs r1).flatMap (fun (g1, r2) =>
            (codeBody r2 false fuel).map (fun (body, g3, r3) =>
              (s.length - r3.length, g1, body, g3)))

/-- Enumerate the body pattern's completions at the head of `s`,
    in PCRE priority order: the closing tail first (with its own
    alternatives in order), then extensions by one recursive match
    (each candidate in order), then by one character. Each result
    is (body, group 3, remaining subject). `lineStart` is the
    line-start status of the head of `s` in the whole subject,
    threaded through consumption: a character step sets it from
    the consumed character, a recursive step from the match's last
    consumed character. -/
def codeBody (s : List Char) (lineStart : Bool) :
    Nat → List (List Char × List Char × List Char)
  | 0 => []
  | fuel + 1 =>
    let tails : List (List Char × List Char × List Char) :=
      match matchLit s "[[/code]]".toList with
      | none => []
      | some r0 =>
          let viaWs : List (List Char × List Char × List Char) :=
            match r0 with
            | c :: t => if isPcreWs c then [([], [c], t)] else []
            | [] => []
          let viaEnd : List (List Char × List Char × List Char) :=
            if r0.isEmpty || r0.head? == some '\n' then [([], [], r0)] else []
          viaWs ++ viaEnd
    let recs : List (List Char × List Char × List Char) :=
      (codeMatch s lineStart fuel).flatMap (fun (consumed, _, _, _) =>
        (codeBody (s.drop consumed)
          ((s.take consumed).getLast? == some '\n') fuel).map
          (fun (b, g3, r) => (s.take consumed ++ b, g3, r)))
    let charStep : List (List Char × List Char × List Char) :=
      match s with
      | [] => []
      | c :: rest =>
          (codeBody rest (c == '\n') fuel).map (fun (b, g3, r) => (c :: b, g3, r))
    tails ++ recs ++ charStep

end

/-! ## The rule: `preg_replace_callback` over the whole subject

    Matches are sought at every subject position, the `^` anchor
    restricting attempts to line starts; the first candidate at the
    leftmost matching position is the match. Each match is replaced
    by `"\n\n"`, the new token's placeholder, and group 3, and the
    search continues in the subject just after the match (the
    replacement text is never rescanned). -/

/-- Apply the Code rule to a token-free subject: returns the new
    segment list and the token table with the Code tokens appended
    in claim order. The scan takes a fuel of the subject length
    plus one: every step consumes at least one subject character
    (a match consumes at least the seventeen of `[[code]][[/code]]`),
    so the fuel never cuts off a step the subject affords. -/
def applyCode (cs : List Char) (toks : List TokenEntry) :
    List TSeg × List TokenEntry :=
  scan cs none toks [] [] (cs.length + 1)
where
  scan : List Char → Option Char → List TokenEntry → List TSeg →
      List Char → Nat → List TSeg × List TokenEntry
    | [], _, toks, out, buf, _ => (pushText out buf, toks)
    | _, _, toks, out, buf, 0 => (pushText out buf, toks)
    | rest@(c :: rest'), prev, toks, out, buf, fuel + 1 =>
        let atLineStart := prev == none || prev == some '\n'
        if atLineStart then
          match codeMatch rest true (codeFuel rest.length) with
          | (consumed, g1, body, g3) :: _ =>
              let entry := codeToken g1 body
              let idx := toks.length
              let out' := pushTok (pushText (pushText out buf) "\n\n".toList) idx
              scan (rest.drop consumed) (rest.take consumed).getLast?
                (toks ++ [entry]) out' g3 fuel
          | [] => scan rest' (some c) toks out (buf ++ [c]) fuel
        else
          scan rest' (some c) toks out (buf ++ [c]) fuel

/-- The Code rule on a state. Its input is token-free by pipeline
    position (see the file header); the `none` branch is
    unreachable under the runner and exists only for totality. -/
def codeRule (st : ParseState) : ParseState :=
  match allText st.work with
  | some cs =>
      let (segs, toks) := applyCode cs st.tokens
      { st with work := segs, tokens := toks }
  | none => st

end LeanFtml
