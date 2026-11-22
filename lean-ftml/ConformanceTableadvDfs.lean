/-
  Cost-measurement driver for the legacy first-parse Tableadv
  scanner. Same I/O protocol as ConformanceTableadvFix.lean, but
  using tableadvDfsScanGo; it exists only to time the refuted
  shortcut against the repaired mirror on the same inputs.
-/

import LeanFtml

open LeanFtml

def dfsHexDigit (c : Char) : Nat :=
  if '0' ≤ c && c ≤ '9' then c.toNat - 48
  else if 'a' ≤ c && c ≤ 'f' then c.toNat - 87
  else if 'A' ≤ c && c ≤ 'F' then c.toNat - 55
  else 0

def dfsHexBytes : List Char → List Nat
  | c1 :: c2 :: rest => (dfsHexDigit c1 * 16 + dfsHexDigit c2) :: dfsHexBytes rest
  | _ => []

def dfsNibble (n : Nat) : Char :=
  if n < 10 then Char.ofNat (48 + n) else Char.ofNat (87 + n)

def dfsByteHex (b : Nat) : String :=
  String.ofList [dfsNibble (b / 16), dfsNibble (b % 16)]

def dfsBytesHex : List Nat → String
  | [] => ""
  | b :: rest => dfsByteHex b ++ dfsBytesHex rest

def dfsOne (src : List Nat) : String :=
  "OK " ++ dfsBytesHex (tableadvDfsScanGo src [] (tableFuel src.length)).1

partial def dfsLoop (stdin : IO.FS.Stream) : IO Unit := do
  let raw ← stdin.getLine
  let line := String.ofList (raw.toList.filter (fun c => c != '\n' && c != '\r'))
  if line.isEmpty then return ()
  IO.println (dfsOne (dfsHexBytes (line.toList.drop 1)))
  dfsLoop stdin

def main : IO Unit := do
  let stdin ← IO.getStdin
  dfsLoop stdin
