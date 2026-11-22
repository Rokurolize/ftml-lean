/-
  Conformance driver for G1.5 (bridge A, model side).

  Reads JSONL operations over stdin, applies the model from
  LeanFtml/ParagraphStack.lean, and writes the resulting output tree as
  JSONL on stdout. The Rust counterpart is conformance-g15/rust-dump,
  driving the real ParagraphStack from the same operation protocol through
  a copied ftml source tree with a shim that re-exports the stack; no file
  in the read-only ftml checkout is modified.

  Protocol: input {"id", "ops":[{"op",...}]}; output
  {"elements":[...],"id":"..."}. The emitter reproduces serde_json's key
  order for the element subset, so a mismatch is byte-visible. Text is
  modelled as List Char at the model boundary; only the I/O edge converts
  to String, after all proofs.
-/

import LeanFtml

open LeanFtml

/-- Minimal JSON string decoder (string literals and flat objects only),
    copied from the G1.4 driver's conventions. -/
def hexVal (c : Char) : Nat :=
  if 48 ≤ c.toNat && c.toNat ≤ 57 then c.toNat - 48
  else if 97 ≤ c.toNat && c.toNat ≤ 102 then c.toNat - 87
  else if 65 ≤ c.toNat && c.toNat ≤ 70 then c.toNat - 55
  else 0

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
        | 'u' =>
          match rest with
          | h1 :: h2 :: h3 :: h4 :: rest' =>
            go rest' (Char.ofNat (hexVal h1 * 4096 + hexVal h2 * 256 +
              hexVal h3 * 16 + hexVal h4) :: acc) fuel
          | _ => none
        | _ => none
      | c :: rest => go rest (c :: acc) fuel

def findSub (s : List Char) (pat : List Char) (startAt : Nat) : Nat → Option Nat
  | 0 => none
  | fuel + 1 =>
    if startAt > s.length then none
    else if (s.drop startAt).take pat.length == pat then some startAt
    else findSub s pat (startAt + 1) fuel

def jsonField (line : String) (key : String) : Option String :=
  let l := line.toList
  let pat := '"' :: (key.toList ++ ['"'])
  match findSub l pat 0 (l.length + 1) with
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

/-- Does a flat object string carry `"key":true`? -/
def jsonBoolField (s : String) (key : String) : Bool :=
  let l := s.toList
  let pat := '"' :: (key.toList ++ ['"', ':', 't', 'r', 'u', 'e'])
  (findSub l pat 0 (l.length + 1)).isSome

/-- Scan a balanced bracketed region starting just after an opening
    bracket; returns the inner text. Counts both `{}` and `[]`, so nested
    arrays inside objects are handled. -/
def takeBalanced (l : List Char) : Nat → List Char → Int → List Char
  | 0, acc, _ => acc.reverse
  | fuel + 1, acc, depth =>
    match l with
    | [] => acc.reverse
    | '{' :: rest => takeBalanced rest fuel ('{' :: acc) (depth + 1)
    | '[' :: rest => takeBalanced rest fuel ('[' :: acc) (depth + 1)
    | '}' :: rest =>
      if depth == 1 then acc.reverse else takeBalanced rest fuel ('}' :: acc) (depth - 1)
    | ']' :: rest =>
      if depth == 1 then acc.reverse else takeBalanced rest fuel (']' :: acc) (depth - 1)
    | c :: rest => takeBalanced rest fuel (c :: acc) depth

/-- Extract a nested object (including its braces) by its key. -/
def jsonObjectField (s : String) (key : String) : Option String :=
  let l := s.toList
  let pat := '"' :: (key.toList ++ ['"'])
  match findSub l pat 0 (l.length + 1) with
  | none => none
  | some p =>
    let rest := (l.drop (p + pat.length)).dropWhile (fun c => c == ' ' || c == '\t')
    match rest with
    | ':' :: rest' =>
      match (rest'.dropWhile (fun c => c == ' ' || c == '\t')) with
      | '{' :: body => some (String.ofList (['{'] ++ takeBalanced body body.length [] 1 ++ ['}']))
      | _ => none
    | _ => none

/-- Extract a JSON array field as its bracketed source text. -/
def jsonArrayField (s : String) (key : String) : Option String :=
  let l := s.toList
  let pat := '"' :: (key.toList ++ ['"'])
  match findSub l pat 0 (l.length + 1) with
  | none => none
  | some p =>
    let rest := (l.drop (p + pat.length)).dropWhile (fun c => c == ' ' || c == '\t')
    match rest with
    | ':' :: rest' =>
      match (rest'.dropWhile (fun c => c == ' ' || c == '\t')) with
      | '[' :: body => some (String.ofList (takeBalanced body body.length [] 1))
      | _ => none
    | _ => none

/-- Extract the JSON string for a named field of a flat object. -/
def objStringField (s : String) (key : String) : Option String := jsonField s key

/-- Parse one abstract element from its JSON object. -/
def elemOfJson (s : String) : AElem :=
  match objStringField s "kind" with
  | some "text" => .text (match objStringField s "s" with | some v => v.toList | none => [])
  | some "raw" => .raw (match objStringField s "s" with | some v => v.toList | none => [])
  | some "linebreak" => .lineBreak
  | some "hr" => .hr
  | some "code" => .code (match objStringField s "s" with | some v => v.toList | none => [])
  | some "list" => .list (jsonBoolField s "explicit")
  | some "html" => .html (match objStringField s "s" with | some v => v.toList | none => [])
  | some "image" => .image (jsonBoolField s "aligned")
  | some "container" =>
    if jsonField s "ctype" == some "div" then .div 0 else .bold 0
  | _ => .text (String.ofList ['?']).toList

/-- Read an unquoted JSON boolean field. -/
def jsonBoolLiteral (s : String) (key : String) : Option Bool :=
  let l := s.toList
  let patTrue := '"' :: (key.toList ++ ['"', ':', 't', 'r', 'u', 'e'])
  let patFalse := '"' :: (key.toList ++ ['"', ':', 'f', 'a', 'l', 's', 'e'])
  if (findSub l patTrue 0 (l.length + 1)).isSome then some true
  else if (findSub l patFalse 0 (l.length + 1)).isSome then some false
  else none

/-- The safety flag supplied by the driver: default from the element
    class, overridable by the op's `"safe"` field. -/
def opSafe (op : String) (e : AElem) : Bool :=
  match jsonBoolLiteral op "safe" with
  | some b => b
  | none => aSafe e

/-- Parse a batch of elements out of a JSON array field. -/
def elemsOfJson (s : String) (key : String) : List AElem :=
  match jsonArrayField s key with
  | none => []
  | some body => go body.toList body.length
where
  go (l : List Char) : Nat → List AElem
    | 0 => []
    | fuel + 1 =>
      match l with
      | [] => []
      | '{' :: rest =>
        let inner := takeBalanced rest rest.length [] 1
        let consumed := inner.length + 1
        elemOfJson (String.ofList inner) :: go (rest.drop consumed) fuel
      | _ :: rest => go rest fuel
/-- Apply one operation to the scoped state. -/
def applyOp (st : St) (op : String) : St :=
  match objStringField op "op" with
  | some "push" =>
    let e := match jsonObjectField op "element" with
      | some inner => elemOfJson inner
      | none => .hr
    pushElement st e (opSafe op e)
  | some "push_safe_batch" =>
    pushSafeElements st (elemsOfJson op "elements")
  | some "end" => endParagraph st
  | some "end_break" => endParagraphAtBreak st
  | some "unwrap" => if st.current.isEmpty then st else { st with unwrapped := true }
  | some "next_unwrap" =>
    -- The Rust driver arms a bare run; the model's mark_next_unwrapped
    -- sets current_unwrapped unconditionally, so this is the same state.
    { st with unwrapped := true }
  | some "discarded" => { st with discardedControl := true }
  | some "pop_break" => { st with current := popBreak st.current }
  | some "line_start" => { st with lineStart := jsonBoolField op "value" }
  | _ => st
where
  popBreak : List AElem → List AElem
    | [] => []
    | xs => match xs.getLast? with
      | some .lineBreak => xs.dropLast
      | _ => xs

/-- Apply the whole operation list and finalize. -/
def runOps (opsJson : String) : St :=
  go (opsJson.toList) initSt opsJson.length
where
  go (l : List Char) (st : St) : Nat → St
    | 0 => st
    | fuel + 1 =>
      match l with
      | [] => st
      | '{' :: rest =>
        let inner := takeBalanced rest rest.length [] 1
        let consumed := inner.length + 1
        go (rest.drop consumed) (applyOp st (String.ofList inner)) fuel
      | _ :: rest => go rest st fuel
/-! ## JSON emission: byte-identical to serde_json for this subset -/

def hexDigitC (n : Nat) : Char :=
  ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
   'a', 'b', 'c', 'd', 'e', 'f'][n % 16]!

def escapeJson (str : String) : String :=
  String.ofList (str.toList.flatMap (fun c =>
    if c == '"' then ['\\', '"']
    else if c == '\\' then ['\\', '\\']
    else if c == '\n' then ['\\', 'n']
    else if c == '\r' then ['\\', 'r']
    else if c == '\t' then ['\\', 't']
    else if c.toNat < 32 then
      ['\\', 'u', '0', '0', hexDigitC (c.toNat / 16), hexDigitC c.toNat]
    else [c]))

def q (s : String) : String := "\"" ++ escapeJson s ++ "\""

def emitElem : AElem → String
  | .text s => "{\"data\":" ++ q (String.ofList s) ++ ",\"element\":\"text\"}"
  | .raw s => "{\"data\":" ++ q (String.ofList s) ++ ",\"element\":\"raw\"}"
  | .lineBreak => "{\"element\":\"line-break\"}"
  | .hr => "{\"element\":\"horizontal-rule\"}"
  | .code s => "{\"data\":{\"contents\":" ++ q (String.ofList s) ++
      ",\"language\":null,\"name\":null},\"element\":\"code\"}"
  | .list explicit => "{\"data\":{\"attributes\":{},\"items\":[],\"type\":" ++
      q (if explicit then "bullet" else "bullet") ++ "},\"element\":\"list\"}"
  | .html s => "{\"data\":{\"attributes\":{},\"contents\":" ++
      q (String.ofList s) ++ "},\"element\":\"html\"}"
  | .image aligned =>
    "{\"data\":{\"alignment\":" ++
      (if aligned then "{\"align\":\"right\",\"float\":false}" else "null") ++
      ",\"attributes\":{},\"link\":null,\"source\":{\"data\":{\"data\":{\"file\":\"img.png\"},\"type\":\"file1\"},\"type\":\"direct\"},\"target\":null},\"element\":\"image\"}"
  | .bold _ => "{\"data\":{\"attributes\":{},\"elements\":[],\"type\":\"bold\"},\"element\":\"container\"}"
  | .div _ => "{\"data\":{\"attributes\":{},\"elements\":[],\"type\":\"div\"},\"element\":\"container\"}"

def emitOElem : OElem → String
  | .bare e => emitElem e
  | .para es => "{\"data\":{\"attributes\":{},\"elements\":[" ++
      String.intercalate "," (es.map emitElem) ++
      "],\"type\":\"paragraph\"},\"element\":\"container\"}"

def processLine (line : String) : String :=
  match jsonField line "id", jsonArrayField line "ops" with
  | some id, some ops =>
    let st := intoElements (runOps ops)
    "{\"elements\":[" ++ String.intercalate "," (st.map emitOElem) ++
      "],\"id\":" ++ q id ++ "}"
  | _, _ => "{\"elements\":[],\"id\":\"?\"}"

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
