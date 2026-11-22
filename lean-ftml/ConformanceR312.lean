/-
  Conformance driver for R3.12 (bridge A, model side).

  Protocol: JSONL on stdin, {"id", "source", "tags"?} per line;
  JSONL on stdout, the canonical state serialization of
  LeanFtml.TokenState ({"id", "segments", "tokens", "equations",
  "mathId", "footnotes", "bibitems", "bibitemIds"}) per line.
  The PHP counterpart is
  ref-php/harness/state-restricted.php run with the rule list
  Prefilter,Delimiter,Code,Form,Raw,Rawold,Modulepre,Module,Module654,Iftags,Comment,Iframe,Date,Math,Concatlines,Freelink,Equationreference,Footnote,Footnoteitem,Footnoteblock,Bibitem,Bibliography,Bibcite,Blockquote,Heading,Toc,Span,Size,Div,Collapsible,Tabview,List,Deflist,Table,Tableadv,Image,Newline,Paragraph,Url,Email,Mathinline,Interwiki;
  conformance-r3/compare.py canonicalizes both sides
  (per-document token renumbering, segment normalization,
  attribute maps as unordered sets, $bytes values decoded and
  renumbered) and compares.

  The R3.4 and R3.6 protocol points carry over unchanged (the
  per-case page tags construction, the PARSE-FATAL record, and
  the two compared-state extensions). R3.12 also adds no
  compared state: the four INLINE1 rules read and write no
  document state beyond the token table itself (Mathinline's
  placeholder resolution reads the table, which is compared
  already). One driver point is new in this stage and is
  recorded in REPORT-R312.md: the PHP driver constructs its
  wiki through ref_configure_wiki (the R3.12 disclosed driver
  change), so Interwiki's configured site table is present in
  the restricted oracle exactly as in the full pipeline.

  Like the PHP drivers, the input stage normalizes CRLF to LF
  before the pipeline runs (R2-INCLUDE.md C1); the normalization
  is the Prefilter's own first step, reused here, exactly as
  state-restricted.php reuses the same str_replace. Text is
  List Char inside the model; only the I/O edge converts.
-/

import LeanFtml
import LeanFtml.Pipeline

open LeanFtml

/-! ## Minimal JSON input parsing (string fields only) -/

def hexVal (c : Char) : Nat :=
  if 48 ≤ c.toNat && c.toNat ≤ 57 then c.toNat - 48
  else if 97 ≤ c.toNat && c.toNat ≤ 102 then c.toNat - 87
  else if 65 ≤ c.toNat && c.toNat ≤ 70 then c.toNat - 55
  else 0

/-- Does `s` have `pat` at offset `i`? -/
def startsWithAt (s : List Char) (i : Nat) (pat : List Char) : Bool :=
  (s.drop i).take pat.length == pat

/-- First index at or after `from` where `pat` occurs in `s`. -/
def findSubC (s : List Char) (pat : List Char) (startAt : Nat) :
    Nat → Option Nat
  | 0 => none
  | fuel + 1 =>
    if startAt > s.length then none
    else if startsWithAt s startAt pat then some startAt
    else findSubC s pat (startAt + 1) fuel

/-- Parse a JSON string literal at the head of `l`; returns the
    decoded string and the rest of the input. Handles the standard
    escapes and `\uXXXX`, including surrogate pairs. -/
def parseJsonString (l : List Char) : Option (String × List Char) :=
  match l with
  | '"' :: rest => go rest [] (rest.length + 1)
  | _ => none
where
  go (l : List Char) (acc : List Char) : Nat → Option (String × List Char)
    | 0 => none
    | fuel + 1 =>
      match l with
      | [] => none
      | '"' :: rest => some (String.ofList acc.reverse, rest)
      | '\\' :: 'u' :: h1 :: h2 :: h3 :: h4 :: rest =>
          let v := hexVal h1 * 4096 + hexVal h2 * 256 +
            hexVal h3 * 16 + hexVal h4
          if 0xD800 ≤ v && v ≤ 0xDBFF then
            match rest with
            | '\\' :: 'u' :: g1 :: g2 :: g3 :: g4 :: rest' =>
                let w := hexVal g1 * 4096 + hexVal g2 * 256 +
                  hexVal g3 * 16 + hexVal g4
                if 0xDC00 ≤ w && w ≤ 0xDFFF then
                  go rest' (Char.ofNat
                    (0x10000 + (v - 0xD800) * 0x400 + (w - 0xDC00)) :: acc) fuel
                else go rest (Char.ofNat v :: acc) fuel
            | _ => go rest (Char.ofNat v :: acc) fuel
          else go rest (Char.ofNat v :: acc) fuel
      | '\\' :: c :: rest =>
          match c with
          | '"' => go rest ('"' :: acc) fuel
          | '\\' => go rest ('\\' :: acc) fuel
          | '/' => go rest ('/' :: acc) fuel
          | 'n' => go rest ('\n' :: acc) fuel
          | 'r' => go rest ('\r' :: acc) fuel
          | 't' => go rest ('\t' :: acc) fuel
          | 'b' => go rest (Char.ofNat 8 :: acc) fuel
          | 'f' => go rest (Char.ofNat 12 :: acc) fuel
          | _ => none
      | c :: rest => go rest (c :: acc) fuel

/-- Extract a string field from a flat JSON object line. -/
def jsonField (line : String) (key : String) : Option String :=
  let l := line.toList
  let pat := '"' :: (key.toList ++ ['"'])
  match findSubC l pat 0 (l.length + 1) with
  | none => none
  | some p =>
    let rest := (l.drop (p + pat.length)).dropWhile
      (fun c => c == ' ' || c == '\t')
    match rest with
    | ':' :: rest' =>
      match parseJsonString (rest'.dropWhile (fun c => c == ' ' || c == '\t')) with
      | some (v, _) => some v
      | none => none
    | _ => none

/-- Extract a string field and the input right after its value
    (so a later field can be sought without the value's own text
    interfering). -/
def jsonFieldRest (line : String) (key : String) :
    Option (String × List Char) :=
  let l := line.toList
  let pat := '"' :: (key.toList ++ ['"'])
  match findSubC l pat 0 (l.length + 1) with
  | none => none
  | some p =>
    let rest := (l.drop (p + pat.length)).dropWhile
      (fun c => c == ' ' || c == '\t')
    match rest with
    | ':' :: rest' =>
      match parseJsonString (rest'.dropWhile (fun c => c == ' ' || c == '\t')) with
      | some (v, r) => some (v, r)
      | none => none
    | _ => none

/-- Read the case's "tags" field: a JSON array of strings, sought
    after the "source" value (the field order every case file in
    this stage uses), so tag-shaped text inside a source cannot be
    mistaken for the field. Absent or malformed reads as no tags,
    matching the PHP drivers' `is_array` test. -/
def jsonTags (line : String) : List (List Char) :=
  match jsonFieldRest line "source" with
  | none => []
  | some (_, rest) =>
    match findSubC rest "\"tags\"".toList 0 (rest.length + 1) with
    | none => []
    | some p =>
      let r := (rest.drop (p + 6)).dropWhile
        (fun c => c == ' ' || c == '\t')
      match r with
      | ':' :: r' =>
        match r'.dropWhile (fun c => c == ' ' || c == '\t') with
        | '[' :: inner => go inner [] (inner.length + 1)
        | _ => []
      | _ => []
where
  go : List Char → List (List Char) → Nat → List (List Char)
    | [], acc, _ => acc.reverse
    | ']' :: _, acc, _ => acc.reverse
    | ',' :: rest, acc, fuel + 1 => go rest acc fuel
    | c :: rest, acc, fuel + 1 =>
        if c == ' ' || c == '\t' || c == '\n' || c == '\r' then
          go rest acc fuel
        else
          match parseJsonString (c :: rest) with
          | some (v, rest') => go rest' (v.toList :: acc) fuel
          | none => acc.reverse
    | _, acc, 0 => acc.reverse

/-! ## The driver -/

/-- Run one case: normalize the input (the harness input stage),
    build the initial state with the case's page tags, run the
    R3.12 pipeline, and serialize — or emit the fatal record when
    the parse aborted. -/
def processLine (line : String) : String :=
  match jsonField line "id", jsonField line "source" with
  | some id, some source =>
      let input := convCRLF source.toList
      let tags := jsonTags line
      let st0 : ParseState := { ParseState.ofSource input with
        doc.page.tags := tags }
      let st := runRules pipelineR312 st0
      if st.fatal then
        "{\"id\":" ++ escapeJsonR3 id.toList ++
        ",\"fatal\":\"ProcessException: Invalid LaTeX expression(s) found.\"}"
      else serState id st
  | _, _ => "{\"id\":\"?\",\"error\":\"bad-input\"}"

/-- Drop one trailing line ending (`\n`, optionally preceded
    by `\r`) from a line read off stdin. -/
def dropLineEnd : List Char → List Char
  | [] => []
  | [c] => if c == '\n' || c == '\r' then [] else [c]
  | c :: rest => c :: dropLineEnd rest

partial def mainLoop (stdin : IO.FS.Stream) : IO Unit := do
  let raw ← stdin.getLine
  let line := String.ofList (dropLineEnd raw.toList)
  if line.isEmpty then return ()
  IO.println (processLine line)
  mainLoop stdin

def main : IO Unit := do
  let stdin ← IO.getStdin
  mainLoop stdin
