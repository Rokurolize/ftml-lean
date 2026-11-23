/-
  ConformancePcre2 — the Lean side of the conformance-pcre2 torture
  suite (TCB-2 certification, gate G2's pcre2 half).

  Usage: lean-ftml-conformance-pcre2 <patterns.txt> <cases.txt>
    patterns.txt: one hex-encoded pattern per line.
    cases.txt:    one case per line, "<pattern index>\t<subject hex>".
  Prints one observation line per case, in the pilot's flat encoding
  (see conformance-pcre2/make_lean_pilot.py): the first match
  (start, end, full bytes, groups 1..9), all match spans, and the
  preg_replace_callback output with the constant replacement byte
  88, joined by "##".  A pattern PcreCore cannot parse prints
  PARSE_FAIL for each of its cases; the comparison driver buckets
  those separately from mismatches.
-/
import LeanFtml.PcreCore

open LeanFtml
open LeanFtml.PcreCore

def findFirst (p : PcreParsed) (subj : List Nat) : Option (Nat × MResult) :=
  let candidates : List (Nat × MResult) :=
    (List.range (subj.length + 1)).filterMap fun s =>
      match pcreFirstAnchored p subj 0 s with
      | some r => some (s, r)
      | none => none
  candidates.head?

def fJoin (sep : String) : List String → String
  | [] => ""
  | x :: xs => x ++ xs.foldl (fun acc y => acc ++ sep ++ y) ""

def fNats (bs : List Nat) : String := fJoin "," (bs.map toString)

def fOpt (o : Option (List Nat)) : String :=
  match o with | some bs => "S" ++ fNats bs | none => "N"

def fObs (p : PcreParsed) (subj : List Nat) : String :=
  let found := match findFirst p subj with
    | some (s, r) => "S" ++ toString s ++ "|" ++ toString r.pos ++ "|" ++
        fNats ((subj.drop s).take (r.pos - s)) ++ "|" ++
        fJoin ";" ((matchGroups subj r.caps).map fOpt)
    | none => "N"
  let allm := fJoin ";" ((pregMatchAll p subj).map
    (fun t => toString t.1 ++ "|" ++ toString t.2.1))
  let rep := fNats (pregReplaceCallback p subj (fun _ _ => [88]))
  found ++ "##" ++ allm ++ "##" ++ rep

def hexVal (c : Char) : Nat :=
  if '0' ≤ c ∧ c ≤ '9' then c.toNat - 48
  else if 'a' ≤ c ∧ c ≤ 'f' then c.toNat - 87
  else if 'A' ≤ c ∧ c ≤ 'F' then c.toNat - 55
  else 0

def parseHex : List Char → List Nat
  | a :: b :: rest => (hexVal a * 16 + hexVal b) :: parseHex rest
  | _ => []

def main (args : List String) : IO Unit := do
  let patPath := args[0]!
  let casePath := args[1]!
  let patLines := (← IO.FS.readFile patPath).splitOn "\n"
    |>.filter (fun l => !l.isEmpty)
  let parsed : Array (Option PcreParsed) :=
    (patLines.map (fun l => parsePcreBytes (parseHex l.toList))).toArray
  let caseLines := (← IO.FS.readFile casePath).splitOn "\n"
    |>.filter (fun l => !l.isEmpty)
  let out ← IO.mkRef ""
  for line in caseLines do
    let parts := line.splitOn "\t"
    let pi := parts[0]!.toNat!
    let subj := parseHex parts[1]!.toList
    let obs := match parsed[pi]! with
      | some p => fObs p subj
      | none => "PARSE_FAIL"
    out.modify (· ++ obs ++ "\n")
  IO.print (← out.get)
