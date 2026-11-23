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

/-!
# R3.12: the Url, Email, Mathinline, and Interwiki rules

The first inline-family stage of the R3 sequence: the
reference's Url, Email, Mathinline, and Interwiki parse rules,
in reference pipeline order, extending the mirrored pipeline
from thirty-eight rules to forty-two. No rule is interposed
between Paragraph and Url or among the four in the full
pipeline, so the stage prefix is the R3.11 prefix plus these
four. The compared state is unchanged (the post-parse source
plus the token table): none of the four rules reads or writes
document state beyond the token table, and Mathinline's
placeholder resolution reads the table the earlier rules built,
which is part of that state already.

## Configuration

Two of the four rules read parse configuration. Url's scheme
list is the rule class's own `$conf` default (thirteen schemes,
the fossil seven plus the six of correction C1), present in
every construction. Interwiki's standalone gate reads the
`sites` parse configuration, the one parse-conf key
`ref_configure_wiki` (ref-php/harness/wiki-config.php) sets:
wikipedia, wikipedia.pl, pl.wikipedia, google, dictionary. The
restricted state driver historically constructed its wiki
without that configuration, so the standalone form never
claimed there while the configured full pipeline claims it;
the R3.12 disclosed driver change constructs the restricted
wiki through `ref_configure_wiki` exactly as batch.php,
prefix-source.php, and probe-source.php do (the R3.4
driver-alignment pattern), and the mirror implements the gate
as the configured pipeline behaves. Url's `post_vars` gate is
unset in the class defaults and in `ref_configure_wiki`, so
the described `%%var%%` pass never runs in either oracle; the
mirror omits the pass and this paragraph is its record (the
stage's probe case probe-url-pv claims nothing on either
oracle).

## Byte-form analysis

All four rules run on the byte-form view (the R3.2 obligation):
their patterns' delimiter exclusions are the byte 0xFF, and
option values that can span an earlier placeholder (an Email
or Interwiki described label, a Mathinline content) cross as
`OptVal.bytes` through `textVal`, exactly as the reference's
byte strings do.

Url runs two `preg_replace_callback` passes (described, then
inline; the post_vars pass is inactive, above). Both patterns
are deterministic once PCRE's search order is made explicit,
which the mirror reproduces rather than approximates:

* In the strict body `(?:SEG*\/)* TAIL* FINAL`, a segment is a
  maximal run of segment bytes followed by `/`: giving segment
  bytes back can never expose a `/`, so the segment
  decomposition at each level is forced, and the only
  backtracking is the segment count (a deeper segment path is
  tried before the tail at a shallower level, which is the
  recursion's own order) and the tail length (the largest tail
  whose following byte is a final byte wins). The mirror's
  `urlBodyEnd` is that search, first-parse depth-first in the
  R3.10 sense; unlike Tableadv it has at most one candidate
  per level, so no subsumption question arises.
* The liberal body of the described form is likewise forced
  (maximal segments, maximal tail), and its continuation (a
  space, a text run, a closing bracket) can be satisfied by
  no other decomposition, so the first candidate that
  completes is the match. The `#anchor` and `/path`
  alternatives follow in pattern order.
* Email's address grammar (an atom chain, `@`, a domain atom
  chain with at least one dot) has a unique maximal parse at
  any start position, and no shorter parse can satisfy a
  following continuation, so maximal-or-fail is the regex's
  own behavior on both passes.
* Mathinline's lazy body ends at the first `$]]` with no
  newline intervening; its process() trims the body with
  PHP's `trim`, then resolves placeholders through the token
  table in occurrence order (the R2 correction C1): a
  Newline or Raw token suppresses the content to the empty
  string, any other token contributes its `text` option if
  string-valued, else its `href` if string-valued, else the
  empty string, substituted for every occurrence of that
  placeholder at once (`str_replace`).
* Interwiki runs its standalone pass before its described
  pass. The site and page runs are forced-maximal; the
  standalone form claims only for a configured site (the
  gate above) and otherwise returns its match literally,
  which still consumes the match for scanning purposes; the
  described form lowercases the site (ASCII) and checks
  nothing.

The x44 remainder recorded here at R3.12 (an interwiki link
whose label is a URL: the reference claimed where live is
literal) was discharged by the X44 correction lane: the
reference's described-label pattern is now the class
`[^\]\[\n<delim>]+`, and `interwikiDescrMatch` below mirrors
the corrected pattern, so the mirror no longer claims those
forms either. See REPORT-X44.md section 4 and the matcher's
own doc comment.
-/

namespace LeanFtml

/-! ## Shared scan machinery -/

/-- A byte-class run length at the head of `bs`. -/
def runOf (p : Nat → Bool) (bs : List Nat) : Nat :=
  (bs.takeWhile p).length

/-- Is the byte an ASCII letter? -/
def isAlphaB (b : Nat) : Bool :=
  (65 ≤ b && b ≤ 90) || (97 ≤ b && b ≤ 122)

/-- The `preg_replace_callback` scan shared by this stage's
    passes: at each position the matcher is tried on the
    remaining bytes; a match contributes its replacement and
    scanning resumes after the consumed match (a callback
    that returns its match unchanged, the C5 yield and the
    Interwiki unknown-site return, therefore still advances
    past the whole match); a non-match copies one byte. The
    matcher returns (rest after the match, replacement,
    extended table) and always consumes at least one byte. -/
def pregScan
    (m : List Nat → List TokenEntry →
      Option (List Nat × List Nat × List TokenEntry))
    (bs : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  go m bs toks (bs.length + 1)
where
  go (m : List Nat → List TokenEntry →
        Option (List Nat × List Nat × List TokenEntry)) :
      List Nat → List TokenEntry → Nat → List Nat × List TokenEntry
    | [], toks, _ => ([], toks)
    | _, toks, 0 => ([], toks)
    | src@(b :: rest), toks, fuel + 1 =>
        match m src toks with
        | some (rest', repl, toks') =>
            let (o, t2) := go m rest' toks' fuel
            (repl ++ o, t2)
        | none =>
            let (o, t2) := go m rest toks fuel
            (b :: o, t2)

/-- The described-form continuation for Url: a text run of
    bytes satisfying `p` (at least one), then a closing `]`.
    Returns the text and the rest after the bracket. Url's
    text class is `[^\]DELIM]` (a newline is allowed), so
    the run is genuinely class-bounded. The corrected
    Interwiki label class is bounded the same way (over
    `iwLabelB` below). Email's text is a lazy `.+?` instead,
    which `lazyTail` below handles. -/
def descrTail (p : Nat → Bool) (bs : List Nat) :
    Option (List Nat × List Nat) :=
  let tLen := runOf p bs
  if tLen == 0 then none
  else if bs[tLen]? == some 93 then some (bs.take tLen, bs.drop (tLen + 1))
  else none

/-- The lazy `.+?` text of the Email described form: the
    shortest run of at least one non-newline byte that is
    followed by a `]`. A lazy dot run can itself contain
    `]` bytes, so the closing bracket is the first `]` at
    distance at least one (a `]` in the first position is
    content, not the closer); a newline anywhere before the
    closer fails the match. Returns the text and the rest
    after the bracket. (The Interwiki described form used
    this scan until the X44 correction made its label a
    bounded class; see `iwLabelB`.) -/
def lazyTail (bs : List Nat) : Option (List Nat × List Nat) :=
  go bs [] (bs.length + 1)
where
  go : List Nat → List Nat → Nat → Option (List Nat × List Nat)
    | _, _, 0 => none
    | bs, acc, fuel + 1 =>
        match bs with
        | [] => none
        | 10 :: _ => none
        | 93 :: rest =>
            if acc.isEmpty then go rest (93 :: acc) fuel
            else some (acc.reverse, rest)
        | b :: rest => go rest (b :: acc) fuel

/-! ## Url -/

/-- The strict segment class `[^ \/"'DELIM]`: everything but
    space, slash, the two quotes, and the delimiter byte.
    Tab and newline are segment bytes. -/
def urlSegB (b : Nat) : Bool :=
  !(b == 32 || b == 47 || b == 34 || b == 39 || b == 255)

/-- The strict tail class `[^ \t\n\/"'DELIM]`. -/
def urlTailB (b : Nat) : Bool :=
  !(b == 32 || b == 9 || b == 10 || b == 47 || b == 34 || b == 39 ||
    b == 255)

/-- The liberal tail class `[^ \t\n\/"DELIM]`: the strict
    tail class plus the single quote. -/
def urlLibTailB (b : Nat) : Bool :=
  !(b == 32 || b == 9 || b == 10 || b == 47 || b == 34 || b == 255)

/-- The strict final class `[A-Za-z%0-9\/?=&~_]`. -/
def urlFinalB (b : Nat) : Bool :=
  isAlphaB b || (48 ≤ b && b ≤ 57) || b == 37 || b == 47 ||
  b == 63 || b == 61 || b == 38 || b == 126 || b == 95

/-- The thirteen schemes of the rule's `$conf`, in conf
    order (the fossil seven, then correction C1's six).
    Matching is case-sensitive: neither Url pattern carries
    the /i modifier. -/
def urlSchemeList : List (List Nat) :=
  ["http://", "https://", "ftp://", "gopher://", "news://",
   "mailto:", "mms://", "ssh://", "git://", "sftp://", "svn://",
   "telnet://", "cvs://"].map litBytes

/-- Match a scheme literal at the head of `bs`; returns the
    rest after the first scheme (in conf order) that matches.
    At most one scheme can match at a position: no scheme
    literal is a prefix of another. -/
def urlSchemeAt (bs : List Nat) : Option (List Nat) :=
  urlSchemeList.findSome? (fun sch => matchLitBytes sch bs)

/-- The strict tail at the head of `bs`: the greedy tail run
    gives bytes back one at a time until the following byte
    is a final byte; returns the end offset of tail + final
    byte, i.e. the largest `L ≤ run length` whose byte is a
    final byte, plus one. -/
def urlTailEnd (bs : List Nat) : Option Nat :=
  let yLen := runOf urlTailB bs
  ((List.range (yLen + 1)).reverse.find? (fun l =>
    match bs[l]? with
    | some b => urlFinalB b
    | none => false)).map (· + 1)

/-- The strict body `(?:SEG*\/)* TAIL* FINAL` at the head of
    `bs`, as PCRE's first-parse depth-first search: at each
    level the one forced segment (a maximal segment-byte run
    followed by `/`) is consumed and the search recurses;
    only when that path fails does the level's own tail get
    its turn. Returns the end offset of the whole body. -/
def urlBodyEnd (bs : List Nat) : Option Nat :=
  go bs (bs.length + 1)
where
  go (bs : List Nat) (fuel : Nat) : Option Nat :=
    match fuel with
    | 0 => urlTailEnd bs
    | fuel + 1 =>
        let runLen := runOf urlSegB bs
        match bs[runLen]? with
        | some 47 =>
            match go (bs.drop (runLen + 1)) fuel with
            | some e => some (runLen + 1 + e)
            | none => urlTailEnd bs
        | _ => urlTailEnd bs

/-- A strict URL match at the head of `bs`: a scheme and a
    strict body. Returns the match length. -/
def urlMatchLen (bs : List Nat) : Option Nat :=
  match urlSchemeAt bs with
  | none => none
  | some rest => (urlBodyEnd rest).map (fun e => (bs.length - rest.length) + e)

/-- An inline-pass URL attempt at the head of `s` (the bytes
    after the prefix group): the optional star group is tried
    first. Returns the URL bytes (without the star), the
    total bytes consumed from `s` (with it), and the star
    flag. -/
def urlAttempt (s : List Nat) : Option (List Nat × Nat × Bool) :=
  match s with
  | 42 :: rest =>
      match urlMatchLen rest with
      | some n => some (rest.take n, n + 1, true)
      | none => (urlMatchLen s).map (fun n => (s.take n, n, false))
  | _ => (urlMatchLen s).map (fun n => (s.take n, n, false))

/-- The inline process(): correction C4 cuts the URL at the
    first `[[` (a pipe immediately before the opener belongs
    to the label surface, so the cut moves one byte earlier),
    the cut tail rejoins the output after the token, and the
    options are type/href/text with the star's target. The
    replacement is prefix + placeholder + trailing. -/
def urlInlineResult (pfx url : List Nat) (starred : Bool)
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  let (u, trailing) := match findSub [91, 91] url with
    | some m0 =>
        let m := if m0 > 0 && url[m0 - 1]? == some 124 then m0 - 1 else m0
        (url.take m, url.drop m)
    | none => (url, [])
  let opts : OptMap :=
    [("type".toList, OptVal.str "inline".toList),
     ("href".toList, textVal u), ("text".toList, textVal u)] ++
    (if starred then [("target".toList, OptVal.str "_blank".toList)]
     else [])
  let (ph, toks') := claimTok "Url" opts toks
  (pfx ++ ph ++ trailing, toks')

/-- The inline pass's matcher at a scan position: the prefix
    group `[^A-Za-z]` consumes one non-letter byte, which the
    process returns verbatim before its token. -/
def urlInlineMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match bs with
  | [] => none
  | b :: rest =>
      if isAlphaB b then none
      else match urlAttempt rest with
        | some (url, consumed, starred) =>
            let (repl, toks') := urlInlineResult [b] url starred toks
            some (rest.drop consumed, repl, toks')
        | none => none

/-- The inline pass. At position zero the pattern's `^`
    alternative (an empty prefix group) is tried before the
    `[^A-Za-z]` alternative the scan uses everywhere; if it
    matches, scanning resumes after that match under the scan
    matcher, and if it fails the scan runs from the start. -/
def urlInlinePass (bs : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  match urlAttempt bs with
  | some (url, consumed, starred) =>
      let (repl, toks') := urlInlineResult [] url starred toks
      let (o, t2) := pregScan urlInlineMatch (bs.drop consumed) toks'
      (repl ++ o, t2)
  | none => pregScan urlInlineMatch bs toks

/-- The liberal body at the head of `bs` (the bytes after a
    scheme): forced segments (maximal segment runs followed
    by `/`), then the maximal liberal tail run. Always
    succeeds; returns the end offset. No other decomposition
    can satisfy the described continuation, since a shorter
    tail or a dropped segment ends the href at a byte that
    is not the required space. -/
def urlLibBodyEnd (bs : List Nat) : Nat :=
  go bs (bs.length + 1)
where
  go (bs : List Nat) (fuel : Nat) : Nat :=
    match fuel with
    | 0 => runOf urlLibTailB bs
    | fuel + 1 =>
        let runLen := runOf urlSegB bs
        if bs[runLen]? == some 47 then
          runLen + 1 + go (bs.drop (runLen + 1)) fuel
        else runOf urlLibTailB bs

/-- The described href alternatives at the head of `s`, in
    pattern order: the liberal URL, the `#` anchor form
    (`#[a-zA-Z0-9_\-%]*`), and the `/` path form
    (`\/[^ \t\n"'DELIM]*`). Each returns the href and the
    rest after it; at most one candidate per alternative. -/
def urlDescrHrefs (s : List Nat) : List (List Nat × List Nat) :=
  let liberal := match urlSchemeAt s with
    | some rest =>
        let n := (s.length - rest.length) + urlLibBodyEnd rest
        [(s.take n, s.drop n)]
    | none => []
  let hash := match s with
    | 35 :: rest =>
        let n := runOf (fun b => isAlphaB b || (48 ≤ b && b ≤ 57) ||
          b == 95 || b == 45 || b == 37) rest
        let name := rest.take n
        -- REFCORR16: the anchor form must not claim the reserved
        -- parser-function heads #expr and #ifexpr (the reference's
        -- negative lookahead): in [[#expr ...]] and
        -- [[#ifexpr ...]] the inner bracket span is a parser
        -- function, not an anchor link. The exclusion is by exact
        -- head plus a following whitespace or bracket byte, so
        -- anchors like #expression still claim.
        if (name == [105, 102, 101, 120, 112, 114] ||
            name == [101, 120, 112, 114]) &&
            (match rest.drop n with
             | b :: _ => isWsByte b || b == 93
             | [] => false) then
          []
        else [(35 :: name, rest.drop n)]
    | _ => []
  let slash := match s with
    | 47 :: rest =>
        let n := runOf (fun b => !(b == 32 || b == 9 || b == 10 ||
          b == 34 || b == 39 || b == 255)) rest
        [(47 :: rest.take n, rest.drop n)]
    | _ => []
  liberal ++ hash ++ slash

/-- The described pass's matcher at a scan position: `[`,
    the optional star group, an href alternative, a space,
    the text run, and `]`. Correction C5: a text containing
    `[[$` yields the whole match unchanged (the callback
    still consumes it). -/
def urlDescrMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match bs with
  | 91 :: after =>
      let cands : List (Bool × List Nat) := match after with
        | 42 :: rest => [(true, rest), (false, after)]
        | _ => [(false, after)]
      cands.findSome? (fun (starred, s) =>
        (urlDescrHrefs s).findSome? (fun (href, rest1) =>
          match rest1 with
          | 32 :: rest2 =>
              match descrTail (fun b => !(b == 93 || b == 255)) rest2 with
              | some (text, rest3) =>
                  let wholeMatch := bs.take (bs.length - rest3.length)
                  if (findSub [91, 91, 36] text).isSome ||
                      ((findSub [36, 93] wholeMatch).isSome &&
                       (findSub [93, 93] wholeMatch).isSome) then
                    -- REFCORR6 m1-code: a described match that has
                    -- swallowed the math closer's `$]]` tail (the
                    -- doubled `]]` before `$]`) yields, so Mathinline
                    -- claims the whole authored body. REFCORR13 D05:
                    -- a plain described link ending in `$` has no
                    -- doubled closer and is claimed normally.
                    some (rest3, wholeMatch, toks)
                  else
                    let opts : OptMap :=
                      [("type".toList, OptVal.str "descr".toList),
                       ("href".toList, textVal href),
                       ("text".toList, textVal text)] ++
                      (if starred then
                         [("target".toList, OptVal.str "_blank".toList)]
                       else [])
                    let (ph, toks') := claimTok "Url" opts toks
                    some (rest3, ph, toks')
              | none => none
          | _ => none))
  | _ => none

/-- The Url rule mirror: the described pass, then the inline
    pass. The `post_vars` described pass between them never
    runs (the configuration note in this file's header). -/
def urlRule (st : ParseState) : ParseState :=
  applyByteRule st fun bs toks =>
    let (bs1, toks1) := pregScan urlDescrMatch bs toks
    urlInlinePass bs1 toks1

/-! ## Email -/

/-- The local-part atom class `[_a-z0-9\-]` under /i. -/
def emailLocalB (b : Nat) : Bool :=
  isAlphaB b || (48 ≤ b && b ≤ 57) || b == 95 || b == 45

/-- The domain atom class `[a-z0-9\-]` under /i. -/
def emailDomB (b : Nat) : Bool :=
  isAlphaB b || (48 ≤ b && b ≤ 57) || b == 45

/-- The length of the maximal atom chain `ATOM (\. ATOM)*`
    at the head of `bs` (the caller guarantees the first atom
    is non-empty). The chain extends exactly while a dot is
    followed by an atom byte; it is the regex's unique
    maximal parse, and no shorter parse can be followed by
    the `@` or the described continuation, both of which sit
    outside the atom classes. -/
def atomChainLen (p : Nat → Bool) (bs : List Nat) : Nat :=
  go bs (runOf p bs) (bs.length + 1)
where
  go (bs : List Nat) (n : Nat) (fuel : Nat) : Nat :=
    match fuel with
    | 0 => n
    | fuel + 1 =>
        if bs[n]? == some 46 &&
            (match bs[n + 1]? with
             | some b => p b
             | none => false) then
          go bs (n + 1 + runOf p (bs.drop (n + 1))) fuel
        else n

/-- An address match at the head of `bs`: a local atom
    chain, `@`, and a domain atom chain carrying at least
    one dot group. Returns the match length. -/
def emailMatchLen (bs : List Nat) : Option Nat :=
  let l1 := runOf emailLocalB bs
  if l1 == 0 then none else
  let localLen := atomChainLen emailLocalB bs
  if bs[localLen]? != some 64 then none else
  let dom := bs.drop (localLen + 1)
  let d1 := runOf emailDomB dom
  if d1 == 0 then none else
  let domLen := atomChainLen emailDomB dom
  if domLen > d1 then some (localLen + 1 + domLen) else none

/-- The described pass's matcher: `[`, an address, a space,
    a lazy text (the `lazyTail` scan), and `]`.
    Options are email and text, in the process's order. -/
def emailDescrMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match bs with
  | 91 :: after =>
      match emailMatchLen after with
      | some n =>
          match after.drop n with
          | 32 :: rest2 =>
              match lazyTail rest2 with
              | some (text, rest3) =>
                  let opts : OptMap :=
                    [("email".toList, textVal (after.take n)),
                     ("text".toList, textVal text)]
                  let (ph, toks') := claimTok "Email" opts toks
                  some (rest3, ph, toks')
              | none => none
          | _ => none
      | none => none
  | _ => none

/-- The standalone pass's matcher: a bare address, claimed
    with email and text both the whole match. -/
def emailStandaloneMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match emailMatchLen bs with
  | some n =>
      let addr := bs.take n
      let opts : OptMap :=
        [("email".toList, textVal addr), ("text".toList, textVal addr)]
      let (ph, toks') := claimTok "Email" opts toks
      some (bs.drop n, ph, toks')
  | none => none

/-- The Email rule mirror: the described pass, then the
    standalone pass, in the reference's order. -/
def emailRule (st : ParseState) : ParseState :=
  applyByteRule st fun bs toks =>
    let (bs1, toks1) := pregScan emailDescrMatch bs toks
    pregScan emailStandaloneMatch bs1 toks1

/-! ## Mathinline -/

/-- The lazy body scan of `\[\[\$(.*?)\$\]\]`: the body is
    the bytes up to the first `$]]`, and a newline anywhere
    before it fails the match at this opener (`.` excludes
    newline; no /s modifier). Returns the body and the rest
    after the closer. -/
def mathEndScan (bs : List Nat) : Option (List Nat × List Nat) :=
  go bs [] (bs.length + 1)
where
  go : List Nat → List Nat → Nat → Option (List Nat × List Nat)
    | _, _, 0 => none
    | bs, acc, fuel + 1 =>
        match bs with
        | 36 :: 93 :: 93 :: rest => some (acc.reverse, rest)
        | 10 :: _ => none
        | b :: rest => go rest (b :: acc) fuel
        | [] => none

/-- All well-formed placeholder occurrences in a byte
    string, in occurrence order (duplicates included), as
    (whole placeholder bytes, token index) pairs: the
    `preg_match_all('/\xFF(\d+)\xFF/')` of correction C1's
    resolution. A delimiter byte that does not open a
    well-formed placeholder is skipped one byte at a time. -/
def placeholdersOf (bs : List Nat) : List (List Nat × Nat) :=
  go bs (bs.length + 1)
where
  go : List Nat → Nat → List (List Nat × Nat)
    | _, 0 => []
    | bs, fuel + 1 =>
        match readPlaceholder bs with
        | some (n, rest) =>
            (bs.take (bs.length - rest.length), n) :: go rest fuel
        | none =>
            match bs with
            | _ :: rest => go rest fuel
            | [] => []

/-- The string value of an option, as bytes, if it is
    string-valued in PHP's sense (`is_string`): a plain
    string contributes its UTF-8 bytes, a `$bytes` value its
    bytes; any other shape is not a string. -/
def optStringBytes (v : OptVal) : Option (List Nat) :=
  match v with
  | .str cs => some (cs.flatMap utf8Bytes)
  | .bytes bs => some bs
  | _ => none

/-- PHP `str_replace` on bytes: every non-overlapping
    occurrence of `pat`, left to right, replaced by `repl`;
    inserted text is not rescanned. -/
def replaceAllBytes (src pat repl : List Nat) : List Nat :=
  go src (src.length + 1)
where
  go : List Nat → Nat → List Nat
    | _, 0 => []
    | src, fuel + 1 =>
        if pat.isEmpty then src
        else if src.take pat.length == pat then
          repl ++ go (src.drop pat.length) fuel
        else match src with
          | b :: rest => b :: go rest fuel
          | [] => []

/-- REFCORR6 C-SUSPECT3-1. The mirror's token entries carry only a
    rule name and an option map (TokenState.TokenEntry), with no side
    table: unlike the reference's addToken, no mirrored claim site
    hands its matched span to a shared choke point. For the rules that
    can reach a Mathinline body, the option map determines that span
    exactly, so this is a per-rule source-text reconstruction, the
    mirror counterpart of the reference's carried source span. A
    described Url is `[href text]`, a bare Url is its href, a described
    Email is `[email text]`, a bare Email is its address, and a Code
    block is its authored opener, body and closer. Every other rule
    keeps the pre-correction one-level option substitution, so the
    mirror changes only where live changes. -/
def mathRepl (tok : TokenEntry) : List Nat :=
  let fallback := match (omGet tok.opts "text".toList).bind optStringBytes with
    | some bs => bs
    | none => ((omGet tok.opts "href".toList).bind optStringBytes).getD []
  let star := match omGet tok.opts "target".toList with
    | some (OptVal.str s) => if s == "_blank".toList then [42] else []
    | _ => []
  match tok.rule with
  | "Url" =>
      let href := ((omGet tok.opts "href".toList).bind optStringBytes).getD fallback
      let text := ((omGet tok.opts "text".toList).bind optStringBytes).getD href
      match omGet tok.opts "type".toList with
      | some (OptVal.str t) =>
          if t == "descr".toList then [91] ++ star ++ href ++ [32] ++ text ++ [93]
          else star ++ href
      | _ => star ++ href
  | "Email" =>
      let addr := ((omGet tok.opts "email".toList).bind optStringBytes).getD fallback
      let text := ((omGet tok.opts "text".toList).bind optStringBytes).getD addr
      if addr == text then addr else [91] ++ addr ++ [32] ++ text ++ [93]
  | "Code" =>
      litBytes "[[code]]" ++
        ((omGet tok.opts "text".toList).bind optStringBytes).getD fallback ++
        litBytes "[[/code]]"
  | _ => fallback

/-- REFCORR6 suppression set: the four rules the M1 battery proves
    suppress the whole formula wherever they occur, at any depth.
    REFCORR8 C-R5-P2-4 adds `Date`: live suppresses the whole formula for
    a Date token (`[[$x [[date 0]] y$]]` renders `$x y$` on the reference
    but `$$` on live). The recursive source-span expansion below is
    unchanged, so a Date at any depth still suppresses while the four
    original rules and every non-suppressing token keep their shape. -/
def mathSuppressRule (rule : String) : Bool :=
  rule == "Freelink" || rule == "Raw" || rule == "Newline" ||
  rule == "Image" || rule == "Date"

/-- REFCORR6 C-SUSPECT3-1 recursive expansion. Each placeholder is
    looked up and replaced with its token's authored source text; that
    source is itself expanded, recursively, so a placeholder carried
    inside a described email's label is resolved too. A suppression
    rule found at any depth empties the whole body. `seen` is the
    current chain of token ids and bounds a cyclic placeholder chain;
    `depth` bounds accidental deep nesting. Unknown placeholders and
    cycles are left in place. -/
def mathResolveGo (content : List Nat) (toks : List TokenEntry)
    (seen : List Nat) (fuel : Nat) : List Nat :=
  go content (placeholdersOf content) fuel
where
  go : List Nat → List (List Nat × Nat) → Nat → List Nat
    | c, _, 0 => c
    | c, [], _ => c
    | c, (whole, tid) :: rest, fuel + 1 =>
        match toks[tid]? with
        | none => go c rest fuel
        | some tok =>
            if mathSuppressRule tok.rule then []
            else if tid ∈ seen then go c rest fuel
            else
              let src := mathRepl tok
              let rep := go src (placeholdersOf src) fuel
              go (replaceAllBytes c whole rep) rest fuel

/-- The Mathinline entry point: expand the trimmed body from an empty
    chain. The fuel bounds every expansion chain; it is far larger than
    any placeholder count a document in the corpus can produce. -/
def mathResolve (content : List Nat) (toks : List TokenEntry) :
    List Nat :=
  mathResolveGo content toks [] 10000

/-- The Mathinline matcher at a scan position: the opener
    `[[$`, the lazy body, and the closer `$]]`; the claimed
    token's only option is the resolved content. -/
def mathinlineMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match matchLitBytes [91, 91, 36] bs with
  | some rest =>
      match mathEndScan rest with
      | some (body, rest2) =>
          let content := mathResolve (trimBytes body) toks
          let (ph, toks') := claimTok "Mathinline"
            [("content".toList, textVal content)] toks
          some (rest2, ph, toks')
      | none => none
  | none => none

/-- The Mathinline rule mirror. -/
def mathinlineRule (st : ParseState) : ParseState :=
  applyByteRule st (pregScan mathinlineMatch)

/-! ## Interwiki -/

/-- The site class `[A-Za-z0-9_\.]`. -/
def iwSiteB (b : Nat) : Bool :=
  isAlphaB b || (48 ≤ b && b ≤ 57) || b == 95 || b == 46

/-- The page class `[A-Za-z0-9_\/=&~#.:;\-\+]` (the colon
    is a page byte; only the first page byte is barred from
    being one, by the pattern's `(?!:)` lookahead). -/
def iwPageB (b : Nat) : Bool :=
  isAlphaB b || (48 ≤ b && b ≤ 57) || b == 95 || b == 47 ||
  b == 61 || b == 38 || b == 126 || b == 35 || b == 46 ||
  b == 58 || b == 59 || b == 45 || b == 43

/-- The configured site table's key set (the configuration
    note in this file's header): the standalone form's
    claim gate, compared against the site as written
    (case-sensitive). -/
def iwSiteTable : List (List Nat) :=
  [litBytes "wikipedia", litBytes "wikipedia.pl",
   litBytes "pl.wikipedia", litBytes "google",
   litBytes "dictionary"]

/-- The shared head of both Interwiki forms at the head of
    `bs`: a maximal site run, the colon, and a maximal page
    run whose first byte is not a colon. Returns the site,
    the page, and the rest after the page. Both runs are
    forced: no shorter site can be followed by the colon,
    and no shorter page by the closing bracket or the
    described space. -/
def iwHead (bs : List Nat) : Option (List Nat × List Nat × List Nat) :=
  let sLen := runOf iwSiteB bs
  if sLen == 0 then none
  else if bs[sLen]? != some 58 then none
  else
    let pStart := sLen + 1
    match bs[pStart]? with
    | some b =>
        if b == 58 || !iwPageB b then none
        else
          let pLen := runOf iwPageB (bs.drop pStart)
          some (bs.take sLen, (bs.drop pStart).take pLen,
            bs.drop (pStart + pLen))
    | none => none

/-- The standalone pass's matcher: `[`, the head, and `]`.
    A configured site claims with site as written, page,
    and text the page (the part of the whole site:page
    group after its first colon, which is the page, the
    site class barring colons). An unconfigured site
    returns the whole match literally, consuming it. -/
def interwikiStandaloneMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match bs with
  | 91 :: after =>
      match iwHead after with
      | some (site, page, rest) =>
          match rest with
          | 93 :: rest2 =>
              if iwSiteTable.contains site then
                let opts : OptMap :=
                  [("site".toList, textVal site),
                   ("page".toList, textVal page),
                   ("text".toList, textVal page)]
                let (ph, toks') := claimTok "Interwiki" opts toks
                some (rest2, ph, toks')
              else
                some (rest2, bs.take (bs.length - rest2.length), toks)
          | _ => none
      | none => none
  | _ => none

/-- The described label class of the corrected reference
    pattern `[^\]\[\n<delim>]+`: every byte but the closing
    bracket, an opening bracket, a newline, and the token
    delimiter byte (255). -/
def iwLabelB (b : Nat) : Bool :=
  !(b == 93 || b == 91 || b == 10 || b == 255)

/-- The described pass's matcher: `[`, the head, a space,
    and a label of the corrected class (the `descrTail` scan
    over `iwLabelB`: a nonempty class run closed by `]`).
    The X44 correction replaced the fossil's lazy `.+?`
    label: a label containing a token claimed by an earlier
    rule (present only as its delimiter-bracketed index) or
    an opening bracket now fails the match outright, so the
    whole form stays literal and the tokens inside it render
    normally, exactly as live serves it. The closing bracket
    and the newline are excluded by the same construction
    (the class bars both, and `descrTail` requires the run
    to end at a `]`); note the class also bars a `]` in the
    first label position, where the old lazy scan treated it
    as content — the corrected pattern admits no `]` anywhere
    in the label. The site is lowercased (ASCII) and no site
    check applies. -/
def interwikiDescrMatch (bs : List Nat) (toks : List TokenEntry) :
    Option (List Nat × List Nat × List TokenEntry) :=
  match bs with
  | 91 :: after =>
      match iwHead after with
      | some (site, page, rest) =>
          match rest with
          | 32 :: rest2 =>
              match descrTail iwLabelB rest2 with
              | some (text, rest3) =>
                  let opts : OptMap :=
                    [("site".toList, textVal (asciiLower site)),
                     ("page".toList, textVal page),
                     ("text".toList, textVal text)]
                  let (ph, toks') := claimTok "Interwiki" opts toks
                  some (rest3, ph, toks')
              | none => none
          | _ => none
      | none => none
  | _ => none

/-- The Interwiki rule mirror: the standalone pass, then
    the described pass, in the reference's order. -/
def interwikiRule (st : ParseState) : ParseState :=
  applyByteRule st fun bs toks =>
    let (bs1, toks1) := pregScan interwikiStandaloneMatch bs toks
    pregScan interwikiDescrMatch bs1 toks1

/-! ## Worked examples

    The family's per-rule evidence in miniature: a strict
    URL length, a described claim, the C4 cut, an address
    length, a described Email claim, the two Mathinline
    resolution outcomes, an Interwiki claim, the
    unknown-site literal return, and the described form's
    site lowercasing. The family's whole-rule evidence is
    the exhaustive conformance of the stage corpus and the
    fuzz differentials in REPORT-R312.md. -/

theorem urlMatchLen_example :
    urlMatchLen (litBytes "http://example.com") = some 18 := rfl

theorem urlDescrMatch_example :
    urlDescrMatch (litBytes "[http://example.com Label]") [] =
      some ([],
        phBytes 0,
        [{ rule := "Url", opts :=
           [("type".toList, OptVal.str "descr".toList),
            ("href".toList, OptVal.str "http://example.com".toList),
            ("text".toList, OptVal.str "Label".toList)] }]) := rfl

theorem urlInlineCut_example :
    urlInlineResult [] (litBytes "http://a|[[x]]") false [] =
      (phBytes 0 ++ litBytes "|[[x]]",
       [{ rule := "Url", opts :=
          [("type".toList, OptVal.str "inline".toList),
           ("href".toList, OptVal.str "http://a".toList),
           ("text".toList, OptVal.str "http://a".toList)] }]) := rfl

theorem emailMatchLen_example :
    emailMatchLen (litBytes "user@example.com") = some 16 := rfl

theorem emailDescrMatch_example :
    emailDescrMatch (litBytes "[user@example.com Label]") [] =
      some ([],
        phBytes 0,
        [{ rule := "Email", opts :=
           [("email".toList, OptVal.str "user@example.com".toList),
            ("text".toList, OptVal.str "Label".toList)] }]) := rfl

theorem mathResolve_text_example :
    mathResolve (phBytes 0 ++ litBytes " + 1")
        [{ rule := "Url", opts :=
           [("text".toList, OptVal.str "http://x".toList)] }] =
      litBytes "http://x + 1" := rfl

theorem mathResolve_suppress_example :
    mathResolve (phBytes 0)
        [{ rule := "Newline", opts := [] }] = [] := rfl

theorem interwikiStandaloneMatch_example :
    interwikiStandaloneMatch (litBytes "[wikipedia:Some_Page]") [] =
      some ([],
        phBytes 0,
        [{ rule := "Interwiki", opts :=
           [("site".toList, OptVal.str "wikipedia".toList),
            ("page".toList, OptVal.str "Some_Page".toList),
            ("text".toList, OptVal.str "Some_Page".toList)] }]) := rfl

theorem interwikiStandaloneMatch_unknown_example :
    interwikiStandaloneMatch (litBytes "[nosuch:Page]") [] =
      some ([], litBytes "[nosuch:Page]", []) := rfl

theorem interwikiDescrMatch_example :
    interwikiDescrMatch (litBytes "[Wikipedia:Page Label]") [] =
      some ([],
        phBytes 0,
        [{ rule := "Interwiki", opts :=
           [("site".toList, OptVal.str "wikipedia".toList),
            ("page".toList, OptVal.str "Page".toList),
            ("text".toList, OptVal.str "Label".toList)] }]) := rfl

/-- The X44 guard: a label carrying an earlier rule's token
    placeholder (the x44 shape, a URL already claimed by the
    Url rule) fails the described match outright; the form
    stays literal. -/
theorem interwikiDescrMatch_placeholder_label_none :
    interwikiDescrMatch
      (litBytes "[wikipedia:X " ++ phBytes 0 ++ litBytes "]") [] =
      none := rfl

/-- The X44 guard: a label containing an opening bracket
    fails the described match outright. -/
theorem interwikiDescrMatch_bracket_label_none :
    interwikiDescrMatch (litBytes "[wikipedia:Page a [b]") [] =
      none := rfl

/-- REFCORR8 C-R5-P2-4: Date joins the whole-formula suppression set;
    the four REFCORR6 rules still suppress. -/
theorem mathSuppressRule_date_added :
    mathSuppressRule "Date" = true ∧ mathSuppressRule "Freelink" = true ∧
    mathSuppressRule "Raw" = true ∧ mathSuppressRule "Newline" = true ∧
    mathSuppressRule "Image" = true := by decide

theorem mathSuppressRule_non_suppress_kept :
    mathSuppressRule "Url" = false ∧ mathSuppressRule "Code" = false := by decide
