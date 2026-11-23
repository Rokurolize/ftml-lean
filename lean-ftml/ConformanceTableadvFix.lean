/-
  F-TABLEADV-1 fuzz driver: compare the repaired mirror's Tableadv
  parse state with the independent reference enumeration's, on every
  hex-encoded source fed one per line on stdin. Lines are "OK" when
  output bytes and token tables agree, otherwise "DIFF" followed by
  the two output hexes and the two token counts. The driver is a
  measurement tool; no theorem's authority depends on its output.
-/

import LeanFtml

open LeanFtml

def fixHexDigit (c : Char) : Nat :=
  if '0' ≤ c && c ≤ '9' then c.toNat - 48
  else if 'a' ≤ c && c ≤ 'f' then c.toNat - 87
  else if 'A' ≤ c && c ≤ 'F' then c.toNat - 55
  else 0

def fixHexBytes : List Char → List Nat
  | c1 :: c2 :: rest => (fixHexDigit c1 * 16 + fixHexDigit c2) :: fixHexBytes rest
  | _ => []

def fixNibble (n : Nat) : Char :=
  if n < 10 then Char.ofNat (48 + n) else Char.ofNat (87 + n)

def fixByteHex (b : Nat) : String :=
  String.ofList [fixNibble (b / 16), fixNibble (b % 16)]

def fixBytesHex : List Nat → String
  | [] => ""
  | b :: rest => fixByteHex b ++ fixBytesHex rest

mutual

def fixOptVal : OptVal → String
  | OptVal.str cs => "s:" ++ String.ofList cs
  | OptVal.int i => "i:" ++ toString i
  | OptVal.bool b => "b:" ++ toString b
  | OptVal.null => "n"
  | OptVal.map m => "m:" ++ fixOptPairs m
  | OptVal.list vs => "l:" ++ fixOptVals vs
  | OptVal.bytes bs => "y:" ++ fixBytesHex bs

def fixOptPairs : List (List Char × OptVal) → String
  | [] => ""
  | (k, v) :: rest => String.ofList k ++ "=" ++ fixOptVal v ++ ";" ++ fixOptPairs rest

def fixOptVals : List OptVal → String
  | [] => ""
  | v :: rest => fixOptVal v ++ ";" ++ fixOptVals rest

end

def fixTokenFingerprint : List TokenEntry → String
  | [] => ""
  | t :: rest => t.rule ++ "(" ++ fixOptPairs t.opts ++ ");" ++
      fixTokenFingerprint rest

/- The retired tableadvEnumScan was a duplicate of the repaired mirror scanner. This driver now compares the legacy depth-first scanner against the repaired mirror, so a DIFF records the F-TABLEADV-1 shape rather than a mirror-versus-reference claim. -/
def fixCompare (src : List Nat) : String :=
  let fuel := tableFuel src.length
  let m := tableadvScanGo src [] fuel
  let e := tableadvDfsScanGo src [] fuel
  if m.1 = e.1 && fixTokenFingerprint m.2 == fixTokenFingerprint e.2 then
    "OK " ++ fixBytesHex m.1
  else "DIFF " ++ fixBytesHex m.1 ++ " " ++ fixBytesHex e.1 ++
    " " ++ toString m.2.length ++ " " ++ toString e.2.length

partial def fixLoop (stdin : IO.FS.Stream) : IO Unit := do
  let raw ← stdin.getLine
  let line := String.ofList (raw.toList.filter (fun c => c != '\n' && c != '\r'))
  if line.isEmpty then return ()
  IO.println (fixCompare (fixHexBytes (line.toList.drop 1)))
  fixLoop stdin

def main : IO Unit := do
  let stdin ← IO.getStdin
  fixLoop stdin
