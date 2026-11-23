/- Kernel-checked construct tests for LeanFtml.PcreCore (F2 scratch).
    Every assertion is `by decide` / `rfl`: no native_decide, no sorry. -/
import PcreCore

set_option maxRecDepth 100000

open LeanFtml

-- Byte list of an ASCII string, written explicitly (no String.toList).
def bl (s : String) : List Nat := s.toList.map Char.toNat

def mk (p : String) : PcreParsed :=
  match parsePcre p with
  | some x => x
  | none => { ast := .eps, flags := {} }

def s (x : String) : List Nat := bl x

example : pcreMatch (mk "/abc/") (s "xxabcxx") = true := by decide
example : pcreMatch (mk "/abc/") (s "xxabxx") = false := by decide

example : pcreCapture (mk "/(a)(b)/") (s "zabz") 1 = [97] := by decide
example : pcreCapture (mk "/(a)(b)/") (s "zabz") 2 = [98] := by decide
example : pcreCapture (mk "/(a)(b)/") (s "zabz") 3 = [] := by decide

example : pcreMatch (mk "/abc/i") (s "xxABCxx") = true := by decide
example : pcreMatch (mk "/a.b/s") (s "a\nb") = true := by decide
example : pcreMatch (mk "/a.b/") (s "a\nb") = false := by decide
example : pcreMatch (mk "/^b/m") (s "a\nb") = true := by decide
example : pcreMatch (mk "/^b/") (s "a\nb") = false := by decide
example : (pcreFirst (mk "/a+/U") (s "aaa") 0).map (fun r => r.pos) = some 1 := by decide
example : (pcreFirst (mk "/a+/") (s "aaa") 0).map (fun r => r.pos) = some 3 := by decide
example : pcreMatch (mk "/a$/D") (s "a\n") = false := by decide
example : pcreMatch (mk "/a$/") (s "a\n") = true := by decide

example : pcreMatch (mk "/a(?=b)/") (s "ab") = true := by decide
example : pcreMatch (mk "/a(?=b)/") (s "ac") = false := by decide
example : pcreMatch (mk "/a(?!b)/") (s "ac") = true := by decide
example : pcreMatch (mk "/a(?!b)/") (s "ab") = false := by decide
example : pcreMatch (mk "/(?<=a)b/") (s "ab") = true := by decide
example : pcreMatch (mk "/(?<=a)b/") (s "cb") = false := by decide
example : pcreMatch (mk "/(?<!a)b/") (s "cb") = true := by decide
example : pcreMatch (mk "/(?<!a)b/") (s "ab") = false := by decide

example : pcreMatch (mk "/(a)\\1/") (s "aa") = true := by decide
example : pcreMatch (mk "/(a)\\1/") (s "ab") = false := by decide

example : pcreMatch (mk "/a(?R)?b/") (s "aabb") = true := by decide
example : pcreMatch (mk "/a(?R)?b/") (s "ab") = true := by decide
example : pcreMatch (mk "/a(?R)?b/") (s "aa") = false := by decide

example : pregReplaceCallback (mk "/(a)/") (s "aba")
    (fun _ _ => [88]) = s "XbX" := by decide
example : (pregMatchAll (mk "/(a)/") (s "aba")).length = 2 := by decide
example : (pregMatchAll (mk "/(a)/") (s "aba")).map (fun t => (t.1, t.2.1)) =
    [(0, 1), (2, 3)] := by decide

example : getCap 2 (setCap 2 3 7 [{ idx := 1, start := 0, endPos := 1 }]) =
    some (3, 7) := by decide
example : runMatch {} .eps [] [] 0 [] 0 = [] := rfl
