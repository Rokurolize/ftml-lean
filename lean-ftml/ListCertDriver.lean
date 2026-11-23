/-
  ListCertDriver — the Lean side of the List Class C bounded
  certificate (LeanFtml.Proof.ProofListCert).

  Protocol: JSONL {"id", "bytes"} on the input file (the raw-byte
  case format of conformance-list-proof/gen.py, used because a JSON
  string channel would UTF-8-encode the skeleton alphabet's 0xFF
  placeholder byte on both drivers), canonical state JSONL on the
  output file (LeanFtml.TokenState.serState). Each case runs exactly
  one rule, List, on the byte-built initial state: the work is
  `parseBytes` of the case bytes and the token table is empty, so
  the alphabet's placeholder symbol is a dangling token reference,
  exactly as on the PHP side (conformance-list-proof/
  php-list-state.php, which runs Text_Wiki with the List rule alone
  on the raw source string with an empty token table).
-/
import LeanFtml

open LeanFtml

/-- The suffix of `l` after the first occurrence of `pat`, if any. -/
def certFindPat (pat : List Char) : List Char → Option (List Char)
  | [] => if pat.isEmpty then some [] else none
  | l@(c :: rest) =>
      if l.take pat.length == pat then some (l.drop pat.length)
      else certFindPat pat rest

/-- Parse the decimal number at the head of `l`. -/
def certParseNat (l : List Char) : Nat × List Char :=
  let ds := l.takeWhile (fun c => '0' ≤ c && c ≤ '9')
  (ds.foldl (fun a c => a * 10 + (c.toNat - 48)) 0, l.drop ds.length)

/-- Parse a JSON number array's elements (the `[` already consumed),
    up to the closing `]`. -/
def certParseBytesArr : Nat → List Char → List Nat
  | 0, _ => []
  | _, [] => []
  | fuel + 1, ',' :: rest => certParseBytesArr fuel rest
  | fuel + 1, ' ' :: rest => certParseBytesArr fuel rest
  | _, ']' :: _ => []
  | fuel + 1, l@(c :: _) =>
      if '0' ≤ c && c ≤ '9' then
        let (n, rest) := certParseNat l
        n :: certParseBytesArr fuel rest
      else []

/-- The `"id"` string of a generated case line. -/
def certId (line : String) : String :=
  match certFindPat "\"id\"".toList line.toList with
  | none => ""
  | some rest =>
      match rest.dropWhile (fun c => c != '"') with
      | '"' :: rest' => String.ofList (rest'.takeWhile (fun c => c != '"'))
      | _ => ""

/-- The `"bytes"` number list of a generated case line. -/
def certBytes (line : String) : List Nat :=
  match certFindPat "\"bytes\"".toList line.toList with
  | none => []
  | some rest =>
      match rest.dropWhile (fun c => c != '[') with
      | '[' :: rest' => certParseBytesArr (rest'.length + 1) rest'
      | _ => []

def main (args : List String) : IO Unit := do
  let input ← IO.FS.readFile args[0]!
  let lines := (input.splitOn "\n").filter (fun l => !l.isEmpty)
  let outputs := lines.map (fun line =>
    let st : ParseState :=
      { ParseState.ofSource [] with work := parseBytes (certBytes line) }
    serState (certId line) (applyRule .list st))
  IO.FS.writeFile args[1]! (String.intercalate "\n" outputs ++ "\n")
