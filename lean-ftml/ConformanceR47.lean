/-
  Conformance driver for R4.7 (render-equivalence tier, Code
  and Embed).

  Self-declared mirrored render rules (`--list-rules`): the
  fifty-four rules of `mirroredRenderRules` (the six R4.1 NOTES
  rules, the twelve R4.2 prose-core rules, the fourteen R4.3
  inline-simple and typography rules, the five R4.4 raw/form
  and heading/toc rules, the four R4.5 list and table rules,
  the eleven R4.6 interactive, link-pure, and small stateless
  rules, and the two R4.7 Code and Embed rules).

  Modes:
    lean-ftml-conformance-r47 [--list-rules | state | --e2e-r47 |
      --embed-patterns-ok]

  1. `--list-rules`:
     Prints the JSON array of mirrored render rule names and exits 0.

  2. `state` (default, when invoked with no arguments or `state`):
     Reads R3 parse-state JSONL on stdin (the exact wire format emitted
     by `ref-php/harness/state-restricted.php` and by Lean's
     `lean-ftml-conformance-r3*` drivers):
       {"id": ..., "segments": [...], "tokens": {... or [...]},
        "equations": [...], "mathId": ..., "footnotes": [...],
        "bibitems": [...], "bibitemIds": [...], "scoredAnchors": [...]}
     Handles `"tokens"` as either a 0-indexed JSON array (Lean `serState`
     and first batch case of PHP) or a JSON object keyed by process-global
     integer token id (subsequent batch cases of `state-restricted.php`),
     empty PHP option arrays `[]` as empty option maps, and the R3.3
     `{"$bytes": [b0, ...]}` wire encoding everywhere.

     For each line, emits one JSONL record on stdout:
     - When every referenced token maps to a mirrored render rule:
         {"id":...,"status":"ok","mirrored":[...],"output":<str or $bytes>}
     - When any referenced token maps to an unmirrored render rule, a
       missing token key, or a Code token reaching the
       `Text_Highlighter` external boundary (named
       `"Text_Highlighter:<type>"` in `unmirrored`):
         {"id":...,"status":"excluded","mirrored":[...],
          "unmirrored":[...],"missingKeys":[...],"fallback":<str or $bytes>}
       No silent stand-ins: excluded cases are never counted as passes,
       and unmirrored tokens render to `[[UNMIRRORED:<rule>:<key>]]` in
       `fallback`.
     - Passthrough for `"fatal"` or `"error"` input records:
         {"id":...,"status":"fatal","fatal":...}
         {"id":...,"status":"error","error":...}

  3. `--e2e-r47`:
     Reads raw source JSONL `{"id": ..., "source": ..., "tags"?: [...]}`
     on stdin, parses through Lean's R4.7 stage-prefix pipeline
     (`convCRLF` -> `pipelineR47`, the full sixty-eight-rule pipeline),
     renders via `renderStateR47`, and emits the same JSONL output
     schema.

  4. `--embed-patterns-ok`:
     Prints the number of allowlist patterns the PCRE-subset
     parser accepted from the 75-entry configuration table
     (`embedPatterns.length`); the R4.7 gate requires exactly 75 (the retired digg entry was removed by REFCORR4),
     so a pattern the parser rejected fails the gate visibly
     instead of silently narrowing the allowlist.
-/

import LeanFtml
import LeanFtml.Pipeline
import LeanFtml.RenderCore
import LeanFtml.NotesRender
import LeanFtml.ProseRules
import LeanFtml.ProseRender
import LeanFtml.InlineSimpleRules
import LeanFtml.InlineRender
import LeanFtml.RawHeadingRules
import LeanFtml.RawHeadingRender
import LeanFtml.ListTableRules
import LeanFtml.ListTableRender
import LeanFtml.InteractiveRules
import LeanFtml.InteractiveRender
import LeanFtml.CodeEmbedRules
import LeanFtml.CodeEmbedRender

open LeanFtml

/-! ## General recursive JSON parser (linear-time head-peeling) -/

inductive JVal where
  | null
  | bool : Bool → JVal
  | int : Int → JVal
  | str : String → JVal
  | arr : List JVal → JVal
  | obj : List (String × JVal) → JVal
deriving Inhabited

def jHexVal (c : Char) : Nat :=
  if 48 ≤ c.toNat && c.toNat ≤ 57 then c.toNat - 48
  else if 97 ≤ c.toNat && c.toNat ≤ 102 then c.toNat - 87
  else if 65 ≤ c.toNat && c.toNat ≤ 70 then c.toNat - 55
  else 0

def jSkipWs : List Char → List Char
  | ' ' :: rest => jSkipWs rest
  | '\t' :: rest => jSkipWs rest
  | '\n' :: rest => jSkipWs rest
  | '\r' :: rest => jSkipWs rest
  | l => l

def jParseStrBody (l : List Char) (acc : List Char) :
    Nat → Option (String × List Char)
  | 0 => none
  | fuel + 1 =>
    match l with
    | [] => none
    | '"' :: rest => some (String.ofList acc.reverse, rest)
    | '\\' :: 'u' :: h1 :: h2 :: h3 :: h4 :: rest =>
        let v := jHexVal h1 * 4096 + jHexVal h2 * 256 +
          jHexVal h3 * 16 + jHexVal h4
        if 0xD800 ≤ v && v ≤ 0xDBFF then
          match rest with
          | '\\' :: 'u' :: g1 :: g2 :: g3 :: g4 :: rest' =>
              let w := jHexVal g1 * 4096 + jHexVal g2 * 256 +
                jHexVal g3 * 16 + jHexVal g4
              if 0xDC00 ≤ w && w ≤ 0xDFFF then
                jParseStrBody rest'
                  (Char.ofNat (0x10000 + (v - 0xD800) * 0x400 + (w - 0xDC00)) :: acc) fuel
              else jParseStrBody rest (Char.ofNat v :: acc) fuel
          | _ => jParseStrBody rest (Char.ofNat v :: acc) fuel
        else jParseStrBody rest (Char.ofNat v :: acc) fuel
    | '\\' :: c :: rest =>
        match c with
        | '"' => jParseStrBody rest ('"' :: acc) fuel
        | '\\' => jParseStrBody rest ('\\' :: acc) fuel
        | '/' => jParseStrBody rest ('/' :: acc) fuel
        | 'n' => jParseStrBody rest ('\n' :: acc) fuel
        | 'r' => jParseStrBody rest ('\r' :: acc) fuel
        | 't' => jParseStrBody rest ('\t' :: acc) fuel
        | 'b' => jParseStrBody rest (Char.ofNat 8 :: acc) fuel
        | 'f' => jParseStrBody rest (Char.ofNat 12 :: acc) fuel
        | _ => none
    | c :: rest => jParseStrBody rest (c :: acc) fuel

def jParseString : List Char → Option (String × List Char)
  | '"' :: rest => jParseStrBody rest [] (rest.length + 1)
  | _ => none

def jIsDigit (c : Char) : Bool := 48 ≤ c.toNat && c.toNat ≤ 57

def jParseNatDigits : List Char → Nat → Option (Nat × List Char)
  | c :: rest, acc =>
      if jIsDigit c then jParseNatDigits rest (acc * 10 + (c.toNat - 48))
      else some (acc, c :: rest)
  | [], acc => some (acc, [])

def jParseInt (l : List Char) : Option (Int × List Char) :=
  match l with
  | '-' :: c :: rest =>
      if jIsDigit c then
        match jParseNatDigits rest (c.toNat - 48) with
        | some (n, r) => some (-(n : Int), r)
        | none => none
      else none
  | c :: rest =>
      if jIsDigit c then
        match jParseNatDigits rest (c.toNat - 48) with
        | some (n, r) => some ((n : Int), r)
        | none => none
      else none
  | _ => none

mutual
  partial def jParseVal (l : List Char) : Option (JVal × List Char) :=
    match jSkipWs l with
    | 'n' :: 'u' :: 'l' :: 'l' :: rest => some (.null, rest)
    | 't' :: 'r' :: 'u' :: 'e' :: rest => some (.bool true, rest)
    | 'f' :: 'a' :: 'l' :: 's' :: 'e' :: rest => some (.bool false, rest)
    | '"' :: rest =>
        match jParseStrBody rest [] (rest.length + 1) with
        | some (s, r) => some (.str s, r)
        | none => none
    | '[' :: rest => jParseArr (jSkipWs rest) []
    | '{' :: rest => jParseObj (jSkipWs rest) []
    | l' =>
        match jParseInt l' with
        | some (n, r) => some (.int n, r)
        | none => none

  partial def jParseArr (l : List Char) (acc : List JVal) :
      Option (JVal × List Char) :=
    match l with
    | ']' :: rest => some (.arr acc.reverse, rest)
    | _ =>
        match jParseVal l with
        | none => none
        | some (v, r) =>
            match jSkipWs r with
            | ',' :: r' => jParseArr (jSkipWs r') (v :: acc)
            | ']' :: r' => some (.arr (v :: acc).reverse, r')
            | _ => none

  partial def jParseObj (l : List Char) (acc : List (String × JVal)) :
      Option (JVal × List Char) :=
    match l with
    | '}' :: rest => some (.obj acc.reverse, rest)
    | _ =>
        match jParseString l with
        | none => none
        | some (k, r1) =>
            match jSkipWs r1 with
            | ':' :: r2 =>
                match jParseVal r2 with
                | none => none
                | some (v, r3) =>
                    match jSkipWs r3 with
                    | ',' :: r4 => jParseObj (jSkipWs r4) ((k, v) :: acc)
                    | '}' :: r4 => some (.obj ((k, v) :: acc).reverse, r4)
                    | _ => none
            | _ => none
end

def jGet (kvs : List (String × JVal)) (key : String) : Option JVal :=
  match kvs.find? (fun p => p.1 == key) with
  | some (_, v) => some v
  | none => none

/-! ## Decoding R3 parse-state JSON records -/

def jBytesOfNatArr (xs : List JVal) : Option (List Nat) :=
  xs.mapM fun
    | .int n => if 0 ≤ n && n ≤ 255 then some n.toNat else none
    | _ => none

/-- Decode a JSON value that represents a wire-encoded byte string
    (either a normal JSON string or `{"$bytes": [b0, b1, ...]}`). -/
def jToBytes : JVal → Option (List Nat)
  | .str s => some (s.toList.flatMap utf8Bytes)
  | .obj [("$bytes", .arr xs)] => jBytesOfNatArr xs
  | _ => none

partial def jToOptVal : JVal → OptVal
  | .null => .null
  | .bool b => .bool b
  | .int n => .int n
  | .str s => .str s.toList
  | .arr xs => .list (xs.map jToOptVal)
  | .obj [("$bytes", .arr xs)] =>
      match jBytesOfNatArr xs with
      | some bs => .bytes bs
      | none => .map [("$bytes".toList, .list (xs.map jToOptVal))]
  | .obj kvs => .map (kvs.map fun (k, v) => (k.toList, jToOptVal v))

def jToOptMap : JVal → Option OptMap
  | .obj kvs => some (kvs.map fun (k, v) => (k.toList, jToOptVal v))
  | .arr [] => some []  -- PHP `json_encode(array())` emits `[]`
  | _ => none

def jToTokenEntry : JVal → Option TokenEntry
  | .arr [.str rule, optsJson] =>
      match jToOptMap optsJson with
      | some opts => some { rule := rule, opts := opts }
      | none => none
  | _ => none

def jParseNatKey (s : String) : Option Nat :=
  parseNatBytes (s.toList.map Char.toNat)

/-- Decode `"tokens"` from either a 0-indexed JSON array or a JSON object
    keyed by integer token id (PHP `state-restricted.php` batch output). -/
def jToTokenMap : JVal → Option (List (Nat × TokenEntry))
  | .arr entries =>
      let rec go (idx : Nat) : List JVal → Option (List (Nat × TokenEntry))
        | [] => some []
        | x :: xs => do
            let e ← jToTokenEntry x
            let rest ← go (idx + 1) xs
            pure ((idx, e) :: rest)
      go 0 entries
  | .obj kvs =>
      kvs.mapM fun (kStr, v) => do
        let k ← jParseNatKey kStr
        let e ← jToTokenEntry v
        pure (k, e)
  | _ => none

def jToSeg : JVal → Option TSeg
  | .obj [("t", .str s)] => some (.text s.toList)
  | .obj [("t", .obj [("$bytes", .arr xs)])] =>
      match jBytesOfNatArr xs with
      | some bs => some (.text (utf8Decode bs))
      | none => none
  | .obj [("k", .int n)] =>
      if n ≥ 0 then some (.tok n.toNat) else none
  | _ => none

def jToSegs : JVal → Option (List TSeg)
  | .arr xs => xs.mapM jToSeg
  | _ => none

def jToFootnotes (v : Option JVal) : List (List Nat) :=
  match v with
  | some (.arr xs) => xs.filterMap jToBytes
  | _ => []

def jToBibitems (v : Option JVal) : List (List Nat × List Nat) :=
  match v with
  | some (.arr xs) =>
      xs.filterMap fun
        | .arr [k, c] => do
            let kb ← jToBytes k
            let cb ← jToBytes c
            pure (kb, cb)
        | _ => none
  | _ => []

def jToBibitemIds (v : Option JVal) : List (List Nat × Nat) :=
  match v with
  | some (.arr xs) =>
      xs.filterMap fun
        | .arr [k, .int n] =>
            if n ≥ 0 then (jToBytes k).map (fun kb => (kb, n.toNat)) else none
        | _ => none
  | _ => []

def jToEquations (v : Option JVal) : List (List Char × Nat) :=
  match v with
  | some (.arr xs) =>
      xs.filterMap fun
        | .arr [.str l, .int n] => if n ≥ 0 then some (l.toList, n.toNat) else none
        | _ => none
  | _ => []

def jToMathId (v : Option JVal) : Option Nat :=
  match v with
  | some (.int n) => if n ≥ 0 then some n.toNat else none
  | _ => none

def jToScoredAnchors (v : Option JVal) : List (List Nat × List Nat) :=
  match v with
  | some (.arr xs) =>
      xs.filterMap fun
        | .arr [e, s] => do
            let eb ← jToBytes e
            let sb ← jToBytes s
            pure (eb, sb)
        | _ => none
  | _ => []

def jToTags (v : Option JVal) : List (List Char) :=
  match v with
  | some (.arr xs) =>
      xs.filterMap fun
        | .str s => some s.toList
        | _ => none
  | _ => []

def lookupTokList (m : List (Nat × TokenEntry)) (k : Nat) : Option TokenEntry :=
  match m.find? (fun p => p.1 == k) with
  | some (_, e) => some e
  | none => none

/-! ## Output serialization -/

def serStrList (xs : List String) : String :=
  "[" ++ String.intercalate "," (xs.map fun s => escapeJsonR3 s.toList) ++ "]"

def serNatList (xs : List Nat) : String :=
  "[" ++ String.intercalate "," (xs.map toString) ++ "]"

partial def serRenderOutcome (id : String) (o : RenderOutcome) : String :=
  if o.isComplete then
    "{\"id\":" ++ escapeJsonR3 id.toList ++
    ",\"status\":\"ok\",\"mirrored\":" ++ serStrList mirroredRenderRules ++
    ",\"output\":" ++ serBytes o.output ++ "}"
  else
    "{\"id\":" ++ escapeJsonR3 id.toList ++
    ",\"status\":\"excluded\",\"mirrored\":" ++ serStrList mirroredRenderRules ++
    ",\"unmirrored\":" ++ serStrList o.unmirrored ++
    ",\"missingKeys\":" ++ serNatList o.missingKeys ++
    ",\"fallback\":" ++ serBytes o.output ++ "}"

/-! ## Line processors (state mode & e2e-r45 mode) -/

partial def processStateLine (line : String) : String :=
  match jParseVal line.toList with
  | some (.obj kvs, _) =>
      let id := match jGet kvs "id" with
        | some (.str s) => s
        | _ => "?"
      match jGet kvs "fatal" with
      | some (.str msg) =>
          "{\"id\":" ++ escapeJsonR3 id.toList ++
          ",\"status\":\"fatal\",\"fatal\":" ++ escapeJsonR3 msg.toList ++ "}"
      | _ =>
          match jGet kvs "error" with
          | some (.str msg) =>
              "{\"id\":" ++ escapeJsonR3 id.toList ++
              ",\"status\":\"error\",\"error\":" ++ escapeJsonR3 msg.toList ++ "}"
          | _ =>
              match jGet kvs "segments" |>.bind jToSegs,
                    jGet kvs "tokens" |>.bind jToTokenMap with
              | some segs, some tokMap =>
                  let doc : DocState := {
                    footnotes := jToFootnotes (jGet kvs "footnotes"),
                    bibitems := jToBibitems (jGet kvs "bibitems"),
                    bibitemIds := jToBibitemIds (jGet kvs "bibitemIds"),
                    equations := jToEquations (jGet kvs "equations"),
                    mathId := jToMathId (jGet kvs "mathId"),
                    scoredAnchors := jToScoredAnchors (jGet kvs "scoredAnchors")
                  }
                  let out := renderWithR47 (lookupTokList tokMap) {} segs doc
                  serRenderOutcome id out
              | _, _ =>
                  "{\"id\":" ++ escapeJsonR3 id.toList ++
                  ",\"status\":\"error\",\"error\":\"malformed-parse-state\"}"
  | _ => "{\"id\":\"?\",\"status\":\"error\",\"error\":\"invalid-json\"}"

partial def processE2eR47Line (line : String) : String :=
  match jParseVal line.toList with
  | some (.obj kvs, _) =>
      match jGet kvs "id", jGet kvs "source" with
      | some (.str id), some (.str source) =>
          let tags := jToTags (jGet kvs "tags")
          let st0 : ParseState := { ParseState.ofSource (convCRLF source.toList) with
            doc.page.tags := tags }
          let st := runRules pipelineR47 st0
          if st.fatal then
            "{\"id\":" ++ escapeJsonR3 id.toList ++
            ",\"status\":\"fatal\",\"fatal\":\"ProcessException: Invalid LaTeX expression(s) found.\"}"
          else
            serRenderOutcome id (renderStateR47 {} st)
      | _, _ => "{\"id\":\"?\",\"status\":\"error\",\"error\":\"bad-e2e-input\"}"
  | _ => "{\"id\":\"?\",\"status\":\"error\",\"error\":\"invalid-json\"}"

def dropLineEndR4 (s : String) : String :=
  let rec go (cs : List Char) : List Char :=
    match cs with
    | '\n' :: rest => go rest
    | '\r' :: rest => go rest
    | _ => cs
  String.ofList (go s.toList.reverse).reverse

partial def runStream (stdin : IO.FS.Stream) (proc : String → String) : IO Unit := do
  let raw ← stdin.getLine
  if raw.isEmpty then return ()
  let line := dropLineEndR4 raw
  if !line.isEmpty then
    IO.println (proc line)
  runStream stdin proc

def main (args : List String) : IO Unit := do
  match args with
  | ["--list-rules"] =>
      IO.println (serStrList mirroredRenderRules)
  | ["--e2e-r47"] =>
      let stdin ← IO.getStdin
      runStream stdin processE2eR47Line
  | ["--embed-patterns-ok"] =>
      IO.println (toString embedPatterns.length)
  | [] | ["state"] =>
      let stdin ← IO.getStdin
      runStream stdin processStateLine
  | _ =>
      IO.eprintln "usage: lean-ftml-conformance-r47 [--list-rules | state | --e2e-r47 | --embed-patterns-ok]"
      IO.Process.exit 2
