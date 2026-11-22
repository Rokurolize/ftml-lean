import LeanFtml.Pipeline
open LeanFtml

def showToks (n : Nat) : IO Unit := do
  let src := "[[UL]]\n[[LI]]Case[[/LI]]\n[[/UL]]".toList
  let st := runRules (pipelineFull.take n) (ParseState.ofSource src)
  IO.println ("=== take " ++ toString n ++ " work=" ++ repr ((st.work.flatMap segBytes).take 70))
  let rec loop : Nat → List TokenEntry → IO Unit
    | _, [] => pure ()
    | i, e :: rest => do
        IO.println ("  " ++ toString i ++ " " ++ e.rule ++ " " ++ repr (optStr e "type"))
        loop (i + 1) rest
  loop 0 st.tokens

#eval! do
  showToks 43
  showToks 53
  showToks 54
  showToks 68
