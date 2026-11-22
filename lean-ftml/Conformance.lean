/-
  Conformance driver for gap ledger G1.1 (see ../conformance/README.md).

  Reads process_depths inputs in the harness's text format (one case per
  line, rows as `depth,type,id` separated by `;`, an empty line is the
  empty case), runs the Lean model `LeanFtml.processDepths` with the
  harness's top type 9, and writes the output trees in the canonical
  text format the Rust dumper in ../conformance/rust-dumper/ also uses.
  The two output files are compared line by line; any difference is a
  model defect, by construction of bridge option A.
-/
import LeanFtml

open LeanFtml

/-- Node serialisations of a forest, in order. -/
def serNodes : Forest Nat Nat → List String
  | .nil => []
  | .item t rest => ("i" ++ toString t) :: serNodes rest
  | .list l sub rest =>
      ("L" ++ toString l ++ "(" ++
        (match serNodes sub with
         | [] => "-"
         | xs => String.intercalate " " xs) ++ ")") :: serNodes rest

/-- Canonical forest serialisation: `-` for empty, else nodes joined by
    single spaces. -/
def serForest (f : Forest Nat Nat) : String :=
  match serNodes f with
  | [] => "-"
  | xs => String.intercalate " " xs

/-- Canonical output line: `EMPTY` for no trees, else `T<type>[<forest>]`
    joined by single spaces. -/
def serTrees (trees : List (Nat × Forest Nat Nat)) : String :=
  match trees with
  | [] => "EMPTY"
  | ts => String.intercalate " " (ts.map fun (l, f) => "T" ++ toString l ++ "[" ++ serForest f ++ "]")

def parseRow (s : String) : Option (Row Nat Nat) :=
  match s.splitOn "," with
  | [d, t, i] => do
      let d ← d.toNat?
      let t ← t.toNat?
      let i ← i.toNat?
      pure ⟨d, t, i⟩
  | _ => none

def parseLine (line : String) : List (Row Nat Nat) :=
  if line.isEmpty then [] else (line.splitOn ";").filterMap parseRow

def main (args : List String) : IO Unit := do
  let input ← IO.FS.readFile args[0]!
  -- `String.splitOn "\n"` leaves one trailing empty segment for the
  -- file's final newline; the Rust side's `lines()` ignores it, so drop
  -- exactly that segment to keep the case lists identical.
  let raw := input.splitOn "\n"
  let lines := if raw.getLast? = some "" then raw.dropLast else raw
  let outputs := lines.map fun line => serTrees (processDepths 9 (parseLine line))
  IO.FS.writeFile args[1]! (String.intercalate "\n" outputs ++ "\n")
