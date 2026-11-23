#!/usr/bin/env python3
"""Generate a Lean pilot harness from pilot_cases.json.

Each case is emitted with its pattern and subject as explicit byte-list
literals (no String.toList in the observed computation) and one #eval line
emitting a flat, single-line observation string that run_pilot.py compares
against the PHP 8.5 oracle.  Flat strings avoid all pretty-printer wrapping.
"""
import json
import pathlib

HERE = pathlib.Path(__file__).resolve().parent
cases = json.loads((HERE / "pilot_cases.json").read_text())


def byte_list(s: str) -> str:
    return "[" + ", ".join(str(b) for b in s.encode("latin-1")) + "]"


L = []
L.append("import PcreCore")
L.append("set_option maxRecDepth 100000")
L.append("open LeanFtml")
L.append("")
L.append("def findFirst (p : PcreParsed) (subj : List Nat) : Option (Nat × MResult) :=")
L.append("  let candidates : List (Nat × MResult) :=")
L.append("    (List.range (subj.length + 1)).filterMap fun s =>")
L.append("      match pcreFirst p subj s with")
L.append("      | some r => some (s, r)")
L.append("      | none => none")
L.append("  candidates.head?")
L.append("")
L.append("def fJoin (sep : String) : List String → String")
L.append("  | [] => \"\"")
L.append("  | x :: xs => x ++ xs.foldl (fun acc y => acc ++ sep ++ y) \"\"")
L.append("")
L.append("def fNats (bs : List Nat) : String := fJoin \",\" (bs.map toString)")
L.append("")
L.append("def fOpt (o : Option (List Nat)) : String :=")
L.append("  match o with | some bs => \"S\" ++ fNats bs | none => \"N\"")
L.append("")
L.append("def fObs (p : PcreParsed) (subj : List Nat) : String :=")
L.append("  let found := match findFirst p subj with")
L.append("    | some (s, r) => \"S\" ++ toString s ++ \"|\" ++ toString r.pos ++ \"|\" ++")
L.append("        fNats ((subj.drop s).take (r.pos - s)) ++ \"|\" ++")
L.append("        fJoin \";\" ((matchGroups subj r.caps).map fOpt)")
L.append("    | none => \"N\"")
L.append("  let allm := fJoin \";\" ((pregMatchAll p subj).map")
L.append("    (fun t => toString t.1 ++ \"|\" ++ toString t.2.1))")
L.append("  let rep := fNats (pregReplaceCallback p subj (fun _ _ => [88]))")
L.append("  found ++ \"##\" ++ allm ++ \"##\" ++ rep")
L.append("")
for c in cases:
    pat = byte_list(c["pattern"])
    subj = byte_list(c["subject"])
    L.append(f'-- case {c["id"]} ({c["construct"]})')
    L.append(f'#eval IO.println ("CASE {c["id"]} " ++ (match parsePcreBytes {pat} with')
    L.append(f'  | some p => fObs p {subj}')
    L.append('  | none => "PARSE_FAIL"))')
(HERE / "PcreCorePilot.lean").write_text("\n".join(L) + "\n")
print(f"wrote {HERE / 'PcreCorePilot.lean'} ({len(cases)} cases)")
