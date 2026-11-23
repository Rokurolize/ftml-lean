import Std
import LeanFtml.Proof.Stage2TidyCore

/- Batch stdin -> stdout driver for the Stage 2 totalized model.
    One input line in, one model output written per input line, no prompts or
    logging. With an optional first argument `--core` it applies the decoupled
    core (`applyFrameComp := false`); otherwise it runs the byte-faithful total
    port `transformTotal`. The whole stdin is read once and output is flushed
    in bounded chunks, so a large batch is handled in one process. -/
namespace ProofStage2Cli

open LeanFtml.Proof.Stage2TidyCore

/-- Split on `\n`. A trailing `\n` is a terminator, not an extra empty line;
    interior empty lines and a final unterminated line are preserved. -/
def splitInputLines (s : String) : List String :=
  let rec go (rem : List Char) (cur : List Char) (acc : List String) : List String :=
    match rem with
    | [] => if cur.isEmpty then acc.reverse else String.ofList cur.reverse :: acc.reverse
    | '\n' :: rest => go rest [] (String.ofList cur.reverse :: acc)
    | c :: rest => go rest (c :: cur) acc
  go s.toList [] []

def processLines (f : String → String) (lines : List String) : IO Unit := do

  let chunkLimit := 256
  let rec go (rem : List String) (chunk : List String) (n : Nat) : IO Unit :=
    match rem with
    | [] =>
      if chunk.isEmpty then pure ()
      else IO.print (String.intercalate "\n" chunk.reverse ++ "\n")
    | line :: rest =>
      let chunk' := f line :: chunk
      if n + 1 >= chunkLimit then do
        IO.print (String.intercalate "\n" chunk'.reverse ++ "\n")
        go rest [] 0
      else
        go rest chunk' (n + 1)
  go lines [] 0

def certificateSentinel : String := "@@S2CERT-SEP-7f3a9c@@"

def main (args : List String) : IO Unit := do
  let core := args.any (fun a => a == "--core")
  let framed := args.any (fun a => a == "--framed")
  let stdin ← IO.getStdin
  let all ← stdin.readToEnd
  let base : String → String :=
    if core then stage2TidyCore { applyFrameComp := false }
    else transformTotal
  let f : String → String :=
    if framed then fun line => base line ++ "\n" ++ certificateSentinel
    else base
  processLines f (splitInputLines all)

end ProofStage2Cli

def main (args : List String) : IO Unit := ProofStage2Cli.main args
