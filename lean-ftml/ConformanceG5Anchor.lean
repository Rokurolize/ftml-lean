/-
  ConformanceG5Anchor — lane-owned direct render differential driver.

  This is harness code only: it does not change the Lean mirror, the
  PHP-traceable reference specification, or any production render path.
  The JSON parser and wire decoders above are copied from the R4.8
  conformance driver so the lane uses the established R3.3 byte wire
  encoding (`{"$bytes": [...]}` for non-UTF-8 byte strings).

  Input is one direct token case per line:
    {"id": ..., "rule": "Strong", "options": {...},
     "doc": {...}, "conf": {...},
     "tokens"?: [...], "tokenSource"?: {...}}

  Output is one JSON record per line with the byte outputs of:
    * `mirror`: `renderMirrorEnv harnessEnv`
    * `mirrorTokenAware`: `dispatchRenderR41TokenAware` for the two
      token-table-sensitive rules Footnoteitem and Gallery, otherwise
      the same bytes as `mirror` (an observation, not a pass criterion)
    * `spec`: `renderRefSpec harnessEnv` with the case token lookup supplied;
      only Footnoteitem and Gallery consult that trailing argument

  `--list-rules` enumerates all 62 `RenderRuleId` constructors directly.
  This deliberately does not use the older `mirroredRenderRules` driver
  list, which omits Html.
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
import LeanFtml.ServingRules
import LeanFtml.ServingRender

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


/-! ## G5 direct-render serialization and input decoding -/

/-- All sixty-two `RenderRuleId` constructors, enumerated directly rather
    than through the older `mirroredRenderRules` driver list. -/
def g5RenderRuleIds : List RenderRuleId :=
  [.footnote, .footnoteitem, .footnoteblock, .bibitem, .bibliography, .bibcite,
   .paragraph, .newline, .break, .center, .horiz, .separator, .clearfloat,
   .blockquote, .note, .divalign, .comment, .delimiter, .url, .email,
   .mathinline, .interwiki, .colortext, .strong, .emphasis, .underline,
   .strikethrough, .tt, .superscript, .subscript, .typography, .tighten,
   .raw, .rawold, .form, .heading, .toc, .list, .deflist, .table, .tableadv,
   .equationreference, .anchor, .collapsible, .tabview, .button, .iframe,
   .date, .file, .size, .span, .div, .code, .embed, .freelink, .module,
   .module654, .math, .image, .gallery, .user, .html]

def g5RenderRuleNames : List String := g5RenderRuleIds.map renderRuleName

def serStrListG5 (xs : List String) : String :=
  "[" ++ String.intercalate "," (xs.map fun s => escapeJsonR3 s.toList) ++ "]"

def jObjKvs : Option JVal → List (String × JVal)
  | some (.obj kvs) => kvs
  | _ => []

def jBytesDefault (v : Option JVal) : List Nat :=
  match v with
  | some j => (jToBytes j).getD []
  | none => []

def jPageInfo (v : Option JVal) : PageInfo :=
  let kvs := jObjKvs v
  { name := match jGet kvs "name" with
      | some (.str s) => s.toList
      | _ => []
    tags := jToTags (jGet kvs "tags") }

def jDocState (v : Option JVal) : DocState :=
  let kvs := jObjKvs v
  { page := jPageInfo (jGet kvs "page")
    footnotes := jToFootnotes (jGet kvs "footnotes")
    bibitems := jToBibitems (jGet kvs "bibitems")
    bibitemIds := jToBibitemIds (jGet kvs "bibitemIds")
    equations := jToEquations (jGet kvs "equations")
    mathId := jToMathId (jGet kvs "mathId") }

def jRenderConf (v : Option JVal) : RenderConf :=
  let kvs := jObjKvs v
  { footnoteIdPrefix := jBytesDefault (jGet kvs "footnoteIdPrefix")
    bibitemIdPrefix := jBytesDefault (jGet kvs "bibitemIdPrefix")
    mathIdPrefix := jBytesDefault (jGet kvs "mathIdPrefix")
    pageName := jBytesDefault (jGet kvs "pageName") }

def serG5Error (id : String) (msg : String) : String :=
  "{\"id\":" ++ escapeJsonR3 id.toList ++ ",\"error\":" ++ escapeJsonR3 msg.toList ++ "}"

partial def processG5Line (line : String) : String :=
  match jParseVal line.toList with
  | some (.obj kvs, _) =>
      let id := match jGet kvs "id" with
        | some (.str s) => s
        | _ => "?"
      match jGet kvs "rule", jGet kvs "options" with
      | some (.str ruleName), some optsJson =>
          match renderRuleOfName ruleName, jToOptMap optsJson with
          | some r, some opts =>
              let doc := jDocState (jGet kvs "doc")
              let conf := jRenderConf (jGet kvs "conf")
              let tokMap := match jGet kvs "tokens" with
                | some toksJson => (jToTokenMap toksJson).getD []
                | none => []
              let lookup := fun k => lookupTokList tokMap k
              let mirror := renderMirrorEnv harnessEnv r conf doc opts
              let mirrorTokenAware :=
                if r == .footnoteitem || r == .gallery then
                  dispatchRenderR41TokenAware lookup r conf doc opts
                else mirror
              let spec := renderRefSpec harnessEnv r conf doc opts lookup
              "{\"id\":" ++ escapeJsonR3 id.toList ++
              ",\"rule\":" ++ escapeJsonR3 ruleName.toList ++
              ",\"mirror\":" ++ serBytes mirror ++
              ",\"mirrorTokenAware\":" ++ serBytes mirrorTokenAware ++
              ",\"spec\":" ++ serBytes spec ++
              ",\"agree\":" ++ (if mirror == spec then "true" else "false") ++ "}"
          | none, _ => serG5Error id ("unknown-rule:" ++ ruleName)
          | _, none => serG5Error id "malformed-options"
      | _, _ => serG5Error id "missing-rule-or-options"
  | _ => serG5Error "?" "invalid-json"

def dropLineEndG5 (s : String) : String :=
  let rec go (cs : List Char) : List Char :=
    match cs with
    | '\n' :: rest => go rest
    | '\r' :: rest => go rest
    | _ => cs
  String.ofList (go s.toList.reverse).reverse

partial def runStreamG5 (stdin : IO.FS.Stream) : IO Unit := do
  let raw ← stdin.getLine
  if raw.isEmpty then return ()
  let line := dropLineEndG5 raw
  if !line.isEmpty then
    IO.println (processG5Line line)
  runStreamG5 stdin

def main (args : List String) : IO Unit := do
  match args with
  | ["--list-rules"] => IO.println (serStrListG5 g5RenderRuleNames)
  | [] | ["render"] =>
      let stdin ← IO.getStdin
      runStreamG5 stdin
  | _ =>
      IO.eprintln "usage: lean-ftml-conformance-g5-anchor [--list-rules | render]"
      IO.Process.exit 2
