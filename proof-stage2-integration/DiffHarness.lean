import Stage2Original
import LeanFtml.Proof.Stage2TidyCore

open LeanFtml.Proof

/-- Deterministic token alphabet for the independent port differential. -/
def toks : List String :=
  ["<span>", "</span>", "<strong>", "</strong>", "<em>", "</em>", "<div>", "</div>", "<p>", "</p>", "<br />", "X", " "]

def join (xs : List String) : String := String.intercalate "" xs

def wordsUpTo (k : Nat) : List (List String) :=
  let rec go (n : Nat) (cur : List (List String)) (acc : List (List String)) : List (List String) :=
    match n with
    | 0 => acc.reverse ++ cur.reverse
    | n' + 1 =>
      let next := cur.flatMap (fun w => toks.map (fun t => w ++ [t]))
      go n' next (acc ++ cur)
  go k [[]] []

def hand : List String :=
  ["<p>A<br />\n<div align></p>", "<strong>OUTER <em>INNER</strong> TAIL</em>",
   "<span color><strong><em><span u>text</span>1</strong>2</em>3</span>",
   "<table><tr><td><span>A</td><td>B</span></td></tr></table>",
   "</table><br />\n<table>", "<pre>  a  </pre>", "<a href=\"/x\">A <strong>B</a> C</strong>"]

def runDiff : IO Nat := do
  let cases := hand ++ (wordsUpTo 3).map join
  let mut bad := 0
  for s in cases do
    let a := Stage2.transform s
    let b := Stage2TidyCore.transformTotal s
    if a != b then
      bad := bad + 1
      if bad <= 10 then
        IO.println s!"MISMATCH input={s.quote}"
        IO.println s!"  original={a.quote}"
        IO.println s!"  total   ={b.quote}"
  IO.println s!"DIFF cases={cases.length} mismatches={bad}"
  return bad

#eval runDiff
