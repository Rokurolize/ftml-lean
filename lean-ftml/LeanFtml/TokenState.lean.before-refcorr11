/-
  LeanFtml.TokenState — the R3 parse-phase state model.

  R3 mirrors the validated PHP reference's parse phase (see
  ../R3-SCOPE.md): a rule pipeline transforms a source string into a
  pair of the post-parse source, in which every claimed construct is
  replaced by a placeholder `\xFF<index>\xFF`, and the token table the
  placeholders index into. This file defines that state, the document
  state the rules carry besides the pair, and the canonical
  serialization the conformance comparison consumes.

  ## Representation decision (the stage's central choice)

  The working source is a segment list, `List TSeg`, where a segment is
  either literal text (a `List Char`, following the Tier 1 convention
  that model text is `List Char` and `String` appears only at I/O
  edges) or a token reference carrying the token's table index.
  Alternatives considered and rejected:

  * A single `String` (or `List Char`) with a sentinel character for
    the delimiter byte: the delimiter is the byte 0xFF, which is not a
    Unicode scalar value at all, so no `Char` denotes it; any chosen
    stand-in (U+00FF, a private-use codepoint) is a character that
    decoded input text can genuinely contain, so the sentinel could
    collide with real text and forge token boundaries, the exact
    failure the reference's Delimiter rule exists to prevent.
  * A byte-level model (`List Nat` / `ByteArray`): the harness
    protocol is JSON, so every input the pipeline can ever be fed
    through the conformance route is decoded text; a byte model would
    tax every rule scanner with UTF-8 bookkeeping to represent inputs
    (raw 0xFF bytes) that the protocol cannot express. The one rule
    whose semantics is byte-level, Delimiter, is the identity on
    decoded text for exactly this reason (see FrameRules.lean).

  The segment list has no collision: placeholders are structure, not
  characters, so no text can forge one. `byteForm` below renders a
  segment list back to the reference's byte string (as a list of byte
  values), which is the round-trip the conformance comparison relies
  on: the PHP driver splits the byte form at delimiter bytes to
  produce exactly these segments, and the comparison checks the two
  segment lists and token tables for equality.

  Opacity: in the reference, later rules match against the whole
  current byte string, placeholders included; a placeholder's bytes
  are `\xFF`, decimal digits, `\xFF`, and patterns treat them as
  ordinary bytes. In this model a rule that runs when placeholders
  exist must therefore be written against the byte-form view of the
  state, not against text segments in isolation. The rules mirrored
  in R3.1 (Prefilter, Delimiter, Code) all run at pipeline positions
  where the source is still placeholder-free on every decodable
  input: Prefilter and Delimiter precede all token production, and
  the only earlier rule, Include, expands to plain text (its
  full-pipeline token tables contain no Include entries; the R3.1
  consistency check records this). Their mirrors are therefore
  defined on the text of a token-free state, and the runner keeps
  that invariant by construction. The first later stage whose rule
  can observe placeholders must lift its scanner to the byte-form
  view; that obligation is recorded here, where the representation
  is chosen.
-/

namespace LeanFtml

/-! ## Character classes (PHP/PCRE byte sets, as characters)

    The reference operates on bytes; the model operates on decoded
    characters. A byte set that contains only ASCII bytes corresponds
    exactly to the same set of characters, because the UTF-8 encoding
    of any non-ASCII character uses only bytes >= 0x80. -/

/-- PCRE `\s` (no UTF mode): space, tab, LF, VT, FF, CR. -/
def isPcreWs (c : Char) : Bool :=
  c == ' ' || c == '\t' || c == '\n' || c == Char.ofNat 11 ||
  c == Char.ofNat 12 || c == '\r'

/-- PHP's default `trim` character list: space, tab, LF, CR, NUL, VT.
    Note the absence of FF, which `isPcreWs` has and this set lacks. -/
def isPhpTrim (c : Char) : Bool :=
  c == ' ' || c == '\t' || c == '\n' || c == '\r' ||
  c == Char.ofNat 0 || c == Char.ofNat 11

/-- PHP `trim` on character lists: strip `isPhpTrim` characters from
    both ends. -/
def trimChars (s : List Char) : List Char :=
  let a := s.dropWhile isPhpTrim
  (a.reverse.dropWhile isPhpTrim).reverse

/-! ## Token options -/

/-- A token option value. PHP token options are PHP values; across
    the pipeline's parse rules the shapes that occur are strings,
    integers, booleans, null, ordered maps, and lists. R3.1's rules
    produce only strings and nested string maps, but the type is
    complete for the pipeline so later stages need no new case.

    The `bytes` case (added in R3.2) is a PHP byte string that is
    not decoded text: a claimed text that spans an earlier rule's
    placeholder contains the placeholder's bytes (delimiter, digits,
    delimiter), which no `List Char` can hold. Form lines and Rawold
    bodies were the first producers; the Module family's bodies and
    attribute strings followed in R3.3. Through R3.2 such a value
    made the whole case unrepresentable in the conformance protocol
    (the PHP driver's `json_encode` failed and both drivers emitted
    an error record the comparison counted as a pass). Since R3.3
    the wire protocol encodes it instead: see `serOptVal`. -/
inductive OptVal where
  | str : List Char → OptVal
  | int : Int → OptVal
  | bool : Bool → OptVal
  | null : OptVal
  | map : List (List Char × OptVal) → OptVal
  | list : List OptVal → OptVal
  | bytes : List Nat → OptVal
deriving Inhabited

/-- An ordered attribute/option map: PHP's associative arrays.
    Insertion order is the order keys were first assigned. -/
abbrev OptMap := List (List Char × OptVal)

/-- Look up a key in an option map. -/
def omGet : OptMap → List Char → Option OptVal
  | [], _ => none
  | (k, v) :: rest, key => if k == key then some v else omGet rest key

/-- Assign a key the PHP way: an existing key keeps its position and
    takes the new value; a new key is appended at the end. -/
def omSet : OptMap → List Char → OptVal → OptMap
  | [], k, v => [(k, v)]
  | (k', v') :: rest, k, v =>
      if k' == k then (k, v) :: rest else (k', v') :: omSet rest k v

/-! ## Tokens and segments -/

/-- One token-table entry: the claiming rule's name and its options.
    Rule names are the reference's class-derived ASCII identifiers. -/
structure TokenEntry where
  rule : String
  opts : OptMap
deriving Inhabited

/-- A segment of the working source: literal text, or a reference to
    the token at the given table index. -/
inductive TSeg where
  | text : List Char → TSeg
  | tok : Nat → TSeg
deriving Inhabited

/-- Canonical segment form: no empty text segments, no two adjacent
    text segments. Every rule in this model produces canonical form,
    and the serializer emits it. -/
def normSegs : List TSeg → List TSeg
  | [] => []
  | TSeg.text [] :: rest => normSegs rest
  | TSeg.text cs :: rest =>
      match normSegs rest with
      | TSeg.text cs' :: rest' => TSeg.text (cs ++ cs') :: rest'
      | rest' => TSeg.text cs :: rest'
  | TSeg.tok n :: rest => TSeg.tok n :: normSegs rest

/-- Append literal text to a segment list, keeping canonical form. -/
def pushText (segs : List TSeg) (cs : List Char) : List TSeg :=
  if cs.isEmpty then segs else normSegs (segs ++ [TSeg.text cs])

/-- Append a token reference to a segment list. -/
def pushTok (segs : List TSeg) (n : Nat) : List TSeg :=
  segs ++ [TSeg.tok n]

/-- The text of a token-free segment list, or `none` if any token
    reference is present. Rules whose pipeline position guarantees a
    token-free input (see the file header) use this to reach the
    character stream they scan. -/
def allText : List TSeg → Option (List Char)
  | [] => some []
  | TSeg.text cs :: rest => (allText rest).map (cs ++ ·)
  | TSeg.tok _ :: _ => none

/-! ## Document state

    Every entry below is a document-state variable that some parse
    rule in ref-php reads or writes, from the R3.1 inventory of
    Text/Wiki/Parse/Default/*.php (REPORT-R31.md, vars inventory).
    Fields a stage's rules do not touch still live here, at their
    per-document initial values, so the record is complete by
    construction rather than by discovery. Per-document means the
    production situation (one parse per page request); the batch
    harness's process-static accumulation (the token id counter, the
    Collapsible and Tabview counters) is a driver artifact of the
    same class as the token numbering R3-SCOPE.md canonicalizes
    away, and the harness already resets the equation map per case
    for the same reason. -/

/-- The page the document is parsed for: `vars['page']` (an object in
    PHP; the harness's RefPage carries a name and a tag list) plus
    `vars['pageName']`, both set by the environment, read by Iftags. -/
structure PageInfo where
  name : List Char := []
  tags : List (List Char) := []

/-- Document state carried alongside the source/token pair. -/
structure DocState where
  /-- `vars['page']` and `vars['pageName']` (Iftags reads). -/
  page : PageInfo := {}
  /-- `$GLOBALS['site']`, read by Iftags; environment-provided. -/
  site : List Char := []
  /-- `vars['inclusions']`: page ids already included (Include). -/
  inclusions : List Nat := []
  /-- `vars['inclusionsNotExist']`: display names of missing
      includes (Include). -/
  inclusionsNotExist : List (List Char) := []
  /-- `vars['footnotes']`: footnote bodies by position (Footnote
      writes, Footnoteblock reads). Byte strings (R3.6): a claimed
      body is a span of the byte form and can contain an earlier
      rule's placeholder bytes, which no `List Char` can hold. -/
  footnotes : List (List Nat) := []
  /-- `vars['bibitems']`: label to body (Bibitem writes,
      Bibliography reads). Byte strings, as for `footnotes`. -/
  bibitems : List (List Nat × List Nat) := []
  /-- `vars['bibitemIds']`: label to numeric id (Bibitem). -/
  bibitemIds : List (List Nat × Nat) := []
  /-- `vars['headline_id']`: Heading's counter; PHP tests it against
      null before first use, so it is an option here. -/
  headlineId : Option Nat := none
  /-- `vars['math_id']`: Math's equation counter; likewise
      null-tested in PHP, initialized to 1 on first use. -/
  mathId : Option Nat := none
  /-- `Text_Wiki_Parse_Math::$equationsArray`: label to equation id,
      written by the Math parse rule (read only at render). -/
  equations : List (List Char × Nat) := []
  /-- `Text_Wiki_Parse_Collapsible::$count`: class static,
      read and incremented by the Collapsible parse rule. -/
  collapsibleCount : Nat := 0
  /-- `Text_Wiki_Parse_Tabview::$_counter`: class static, read and
      incremented by the Tabview parse rule. -/
  tabviewCounter : Nat := 0
  /-- `vars['scored_anchors']` (R3.17): Anchor's scored elements
      register (end placeholder, start placeholder) pairs here;
      Paragraph reads the table to leave a run that is exactly
      one scored anchor unwrapped. Byte strings, as for
      `footnotes`: the placeholders are byte forms. Insertion
      order is the reference's array order. -/
  scoredAnchors : List (List Nat × List Nat) := []

/-- The full parse-phase state: working source, token table, and
    document state. -/
structure ParseState where
  work : List TSeg
  tokens : List TokenEntry
  doc : DocState
  /-- Parse-fatal flag (R3.4): Math's process() can throw
      ProcessException, aborting the whole parse; the mirror sets
      this flag when its guard predicate fires, the runner applies
      no further rules to a fatal state, and the conformance driver
      emits the stage's fatal record for it. States built by the
      earlier stages' rules never set it. -/
  fatal : Bool := false

/-- The state a fresh document starts in: the source as one text
    segment, an empty token table, default document state. -/
def ParseState.ofSource (cs : List Char) : ParseState :=
  { work := normSegs [TSeg.text cs], tokens := [], doc := {} }

/-- Add a token to the table; returns the new state and the token's
    index (its position, which the placeholder references). Indices
    are per-document positions, the canonical form of the reference's
    process-global ids (R3-SCOPE.md, conformance protocol). -/
def ParseState.addToken (st : ParseState) (rule : String) (opts : OptMap) :
    ParseState × Nat :=
  ({ st with tokens := st.tokens ++ [{ rule := rule, opts := opts }] },
   st.tokens.length)

/-! ## Byte form (round-trip to the reference's byte string) -/

/-- UTF-8 encoding of a character, as a list of byte values. -/
def utf8Bytes (c : Char) : List Nat :=
  let n := c.toNat
  if n < 0x80 then [n]
  else if n < 0x800 then [0xC0 + n / 0x40, 0x80 + n % 0x40]
  else if n < 0x10000 then
    [0xE0 + n / 0x1000, 0x80 + (n / 0x40) % 0x40, 0x80 + n % 0x40]
  else
    [0xF0 + n / 0x40000, 0x80 + (n / 0x1000) % 0x40,
     0x80 + (n / 0x40) % 0x40, 0x80 + n % 0x40]

/-- The bytes of one segment: text as UTF-8; a token reference as
    delimiter byte, decimal index, delimiter byte. -/
def segBytes : TSeg → List Nat
  | TSeg.text cs => cs.flatMap utf8Bytes
  | TSeg.tok n => [0xFF] ++ (toString n).toList.map Char.toNat ++ [0xFF]

/-- The reference's post-parse source byte string for a segment
    list. The PHP state driver recovers exactly the segment list by
    splitting this byte string at delimiter bytes. -/
def byteForm (segs : List TSeg) : List Nat :=
  segs.flatMap segBytes

/-- The byte form of a lone text segment is the text's UTF-8
    encoding; placeholders are the only source of 0xFF bytes, and no
    character's UTF-8 encoding contains one. -/
theorem byteForm_text (cs : List Char) :
    byteForm [TSeg.text cs] = cs.flatMap utf8Bytes := by
  simp [byteForm, segBytes]

/-! ## UTF-8 decoding and validity over byte strings

    These lived in FormRawRules.lean through R3.2 and moved here in
    R3.3, when the serializer itself needed them for the wire
    encoding of byte-string option values (below); FormRawRules
    still uses them through this import. -/

/-- Is `b` a UTF-8 continuation byte (0x80–0xBF)? -/
def isContByte (b : Nat) : Bool := 0x80 ≤ b && b < 0xC0

/-- Decode UTF-8 bytes to characters. A byte that does not open a
    valid sequence decodes as the character of its own value; on
    every byte string arising in this pipeline (decoded input text
    plus ASCII rule insertions, split at placeholder boundaries,
    which are ASCII-delimited) all sequences are valid, so the
    fallback is unreachable. The fuel is the input length; every
    step consumes at least one byte, so it never runs out. -/
def utf8Decode (bs : List Nat) : List Char := go bs bs.length
where
  go : List Nat → Nat → List Char
    | [], _ => []
    | _, 0 => []
    | b :: rest, fuel + 1 =>
      if b < 0x80 then Char.ofNat b :: go rest fuel
      else if 0xC2 ≤ b && b < 0xE0 then
        match rest with
        | b2 :: rest' =>
            if isContByte b2 then
              Char.ofNat ((b % 32) * 64 + (b2 % 64)) :: go rest' fuel
            else Char.ofNat b :: go rest fuel
        | [] => [Char.ofNat b]
      else if 0xE0 ≤ b && b < 0xF0 then
        match rest with
        | b2 :: b3 :: rest' =>
            if isContByte b2 && isContByte b3 then
              Char.ofNat ((b % 16) * 4096 + (b2 % 64) * 64 + (b3 % 64)) ::
                go rest' fuel
            else Char.ofNat b :: go rest fuel
        | _ => [Char.ofNat b]
      else if 0xF0 ≤ b && b < 0xF5 then
        match rest with
        | b2 :: b3 :: b4 :: rest' =>
            if isContByte b2 && isContByte b3 && isContByte b4 then
              Char.ofNat ((b % 8) * 262144 + (b2 % 64) * 4096 +
                (b3 % 64) * 64 + (b4 % 64)) :: go rest' fuel
            else Char.ofNat b :: go rest fuel
        | _ => [Char.ofNat b]
      else Char.ofNat b :: go rest fuel

/-- Strict UTF-8 validity of a byte string: the predicate the PHP
    state driver applies with `preg_match('//u', ...)` when it
    decides whether a string crosses the wire as a JSON string or
    under the `$bytes` encoding (no overlong forms, no surrogate
    halves, nothing above U+10FFFF, no stray continuations). On
    every byte string this pipeline produces as an option value the
    decision coincides with a simpler test — the value is invalid
    if and only if it contains the delimiter byte 0xFF (option
    values are spans of decoded text and ASCII rule insertions
    between ASCII match boundaries, and 0xFF is the only byte such
    a span can hold that no decoded character produces) — but the
    serializer applies the full predicate so that its output is a
    function of the byte content alone, identical to the PHP
    driver's rule. The fuel is the input length; every step
    consumes at least one byte. -/
def utf8Valid (bs : List Nat) : Bool := go bs bs.length
where
  go : List Nat → Nat → Bool
    | [], _ => true
    | _, 0 => false
    | b :: rest, fuel + 1 =>
      if b < 0x80 then go rest fuel
      else if 0xC2 ≤ b && b < 0xE0 then
        match rest with
        | b2 :: rest' => isContByte b2 && go rest' fuel
        | [] => false
      else if b == 0xE0 then
        match rest with
        | b2 :: b3 :: rest' =>
            0xA0 ≤ b2 && b2 < 0xC0 && isContByte b3 && go rest' fuel
        | _ => false
      else if 0xE1 ≤ b && b < 0xED then
        match rest with
        | b2 :: b3 :: rest' =>
            isContByte b2 && isContByte b3 && go rest' fuel
        | _ => false
      else if b == 0xED then
        match rest with
        | b2 :: b3 :: rest' =>
            0x80 ≤ b2 && b2 < 0xA0 && isContByte b3 && go rest' fuel
        | _ => false
      else if 0xEE ≤ b && b < 0xF0 then
        match rest with
        | b2 :: b3 :: rest' =>
            isContByte b2 && isContByte b3 && go rest' fuel
        | _ => false
      else if b == 0xF0 then
        match rest with
        | b2 :: b3 :: b4 :: rest' =>
            0x90 ≤ b2 && b2 < 0xC0 && isContByte b3 && isContByte b4 &&
              go rest' fuel
        | _ => false
      else if 0xF1 ≤ b && b < 0xF4 then
        match rest with
        | b2 :: b3 :: b4 :: rest' =>
            isContByte b2 && isContByte b3 && isContByte b4 && go rest' fuel
        | _ => false
      else if b == 0xF4 then
        match rest with
        | b2 :: b3 :: b4 :: rest' =>
            0x80 ≤ b2 && b2 < 0x90 && isContByte b3 && isContByte b4 &&
              go rest' fuel
        | _ => false
      else false

/-! ## Canonical JSON serialization

    The conformance comparison parses both sides' JSON and compares
    structures (R3-SCOPE.md), so the escaping here only needs to be
    valid JSON: quote, backslash, and control characters are escaped,
    everything else is emitted as the character itself. Serializers
    are I/O-edge code and are `partial`, as in the Tier 1 drivers. -/

/-- Four lowercase hex digits of a number below 65536. -/
def hex4 (n : Nat) : List Char :=
  let d := fun k => "0123456789abcdef".toList[k % 16]!
  [d (n / 4096), d (n / 256), d (n / 16), d n]

/-- Escape a character list as a JSON string literal (with quotes). -/
def escapeJsonR3 (cs : List Char) : String :=
  '"' :: (cs.flatMap esc) ++ ['"'] |> String.ofList
where
  esc (c : Char) : List Char :=
    if c == '"' then ['\\', '"']
    else if c == '\\' then ['\\', '\\']
    else if c.toNat < 0x20 then '\\' :: 'u' :: hex4 c.toNat
    else [c]

/-- Serialize an option value as JSON.

    The `bytes` case is the R3.3 wire encoding, identical to the
    PHP state driver's rule (a serialization-layer change only;
    neither side's semantics moves): a byte string that is valid
    UTF-8 crosses as the JSON string of its decoding — the same
    wire form a `str` value with that text produces, which is
    correct because the PHP side has only byte strings and cannot
    distinguish the two — and a byte string that is not valid
    UTF-8 crosses as `{"$bytes":[b0, b1, ...]}`. The encoding is
    injective on the value space: distinct valid byte strings
    decode to distinct strings (UTF-8 decoding is injective on
    valid encodings), an invalid byte string's `$bytes` object is
    distinct from every string and from every other byte list, and
    no genuine option map can take the single-key `$bytes` shape
    (option keys are the parse rules' fixed ASCII identifiers, and
    no rule builds a bare integer-list option value). -/
partial def serOptVal : OptVal → String
  | .str cs => escapeJsonR3 cs
  | .int n => toString n
  | .bool b => if b then "true" else "false"
  | .null => "null"
  | .bytes bs =>
      if utf8Valid bs then escapeJsonR3 (utf8Decode bs)
      else "{\"$bytes\":[" ++
        String.intercalate "," (bs.map toString) ++ "]}"
  | .map m => "{" ++ String.intercalate "," (m.map fun (k, v) =>
      escapeJsonR3 k ++ ":" ++ serOptVal v) ++ "}"
  | .list xs => "[" ++ String.intercalate "," (xs.map serOptVal) ++ "]"

/-- Serialize an option map as a JSON object, keys in map order. -/
partial def serOptMap (m : OptMap) : String :=
  "{" ++ String.intercalate "," (m.map fun (k, v) =>
    escapeJsonR3 k ++ ":" ++ serOptVal v) ++ "}"

/-- Serialize one segment: `{"t": text}` or `{"k": index}`. -/
def serSeg : TSeg → String
  | TSeg.text cs => "{\"t\":" ++ escapeJsonR3 cs ++ "}"
  | TSeg.tok n => "{\"k\":" ++ toString n ++ "}"

/-- Serialize a token entry: `[rule, options]`. -/
partial def serToken (t : TokenEntry) : String :=
  "[" ++ escapeJsonR3 t.rule.toList ++ "," ++ serOptMap t.opts ++ "]"

/-- Serialize a byte string under the wire encoding (the
    `serOptVal` rule for `OptVal.bytes`, shared with the PHP state
    driver's `ref_wire_encode`): a valid-UTF-8 byte string crosses
    as the JSON string of its decoding, any other as the `$bytes`
    object. Used for the R3.6 document-state fields, whose values
    are byte strings that can span placeholders. -/
partial def serBytes (bs : List Nat) : String := serOptVal (.bytes bs)

/-- Serialize a whole state for one case, in the canonical shape the
    comparison tool consumes:
    `{"id": ..., "segments": [...], "tokens": [[rule, opts], ...]}`.
    The work segments are normalized before serialization.

    R3.4 compared-state extension (disclosed protocol change): the
    record also carries Math's equations map (`equations`, the
    label/id pairs in insertion order) and the math_id counter
    (`mathId`, null before the first Math match), serialized
    identically by the PHP state driver. Earlier stages' states
    carry the same two fields at their empty values, and their
    comparison copies ignore the fields they do not know.

    R3.6 compared-state extension (the second, same pattern): the
    record also carries the NOTES family's document state —
    `footnotes` (the claimed bodies in index order), `bibitems`
    and `bibitemIds` ((label, value) pairs in insertion order) —
    serialized identically by the PHP state driver. Earlier
    stages' states carry the same three fields at their empty
    values.

    CAPSTONE compared-state extension (the fourth, same pattern):
    the record also carries the Include rule's registries —
    `inclusions` (the page ids of fired includes, in insertion
    order) and `inclusionsNotExist` (the display names of missing
    includes, in insertion order) — serialized identically by the
    PHP state driver. Pipelines in which Include never runs carry
    both fields at their empty values. -/
partial def serState (id : String) (st : ParseState) : String :=
  "{\"id\":" ++ escapeJsonR3 id.toList ++
  ",\"segments\":[" ++ String.intercalate "," ((normSegs st.work).map serSeg) ++
  "],\"tokens\":[" ++ String.intercalate "," (st.tokens.map serToken) ++
  "],\"equations\":[" ++ String.intercalate ","
    (st.doc.equations.map fun (l, n) =>
      "[" ++ escapeJsonR3 l ++ "," ++ toString n ++ "]") ++
  "],\"mathId\":" ++ (match st.doc.mathId with
    | some n => toString n
    | none => "null") ++
  ",\"footnotes\":[" ++ String.intercalate ","
    (st.doc.footnotes.map serBytes) ++
  "],\"bibitems\":[" ++ String.intercalate ","
    (st.doc.bibitems.map fun (l, c) =>
      "[" ++ serBytes l ++ "," ++ serBytes c ++ "]") ++
  "],\"bibitemIds\":[" ++ String.intercalate ","
    (st.doc.bibitemIds.map fun (l, n) =>
      "[" ++ serBytes l ++ "," ++ toString n ++ "]") ++
  "],\"scoredAnchors\":[" ++ String.intercalate ","
    (st.doc.scoredAnchors.map fun (e, s) =>
      "[" ++ serBytes e ++ "," ++ serBytes s ++ "]") ++
  "],\"inclusions\":[" ++ String.intercalate ","
    (st.doc.inclusions.map toString) ++
  "],\"inclusionsNotExist\":[" ++ String.intercalate ","
    (st.doc.inclusionsNotExist.map escapeJsonR3) ++ "]}"

end LeanFtml
