/-
  Conformance driver for R3.1 (bridge A, model side).

  Protocol: JSONL on stdin, {"id", "source"} per line; JSONL on
  stdout, the canonical state serialization of LeanFtml.TokenState
  ({"id", "segments", "tokens"}) per line. The PHP counterpart is
  ref-php/harness/state-restricted.php run with the rule list
  Prefilter,Delimiter,Code; conformance-r3/compare.py canonicalizes
  both sides (per-document token renumbering, segment
  normalization, attribute maps as unordered sets) and compares.

  Like the PHP drivers, the input stage normalizes CRLF to LF
  before the pipeline runs (R2-INCLUDE.md C1); the normalization is
  the Prefilter's own first step, reused here, exactly as
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
def findSub (s : List Char) (pat : List Char) (startAt : Nat) :
    Nat → Option Nat
  | 0 => none
  | fuel + 1 =>
    if startAt > s.length then none
    else if startsWithAt s startAt pat then some startAt
    else findSub s pat (startAt + 1) fuel

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

/-! ## The driver -/

/-- Run one case: normalize the input (the harness input stage),
    build the initial state, run the R3.1 pipeline, serialize. -/
def processLine (line : String) : String :=
  match jsonField line "id", jsonField line "source" with
  | some id, some source =>
      let input := convCRLF source.toList
      serState id (runRules pipelineR31 (ParseState.ofSource input))
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
