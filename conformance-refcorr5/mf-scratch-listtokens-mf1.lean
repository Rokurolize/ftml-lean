import LeanFtml.Pipeline
open LeanFtml

#eval do
  let st0 := ParseState.ofSource ("[[UL]]\n[[LI]]Case[[/LI]]\n[[/UL]]".toList)
  let st := runRules pipelineR45 st0
  IO.println ("WORK=" ++ repr (st.work.flatMap segBytes))
  let rec loop : Nat → List TokenEntry → IO Unit
    | _, [] => pure ()
    | i, e :: rest => do
        IO.println ("TOK " ++ toString i ++ " rule=" ++ e.rule ++
          " type=" ++ repr (optStr e "type") ++
          " lead=" ++ repr (optStr e "lead"))
        loop (i + 1) rest
  loop 0 st.tokens
