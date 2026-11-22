/-
  Conformance driver for G1.6 (bridge A, model side).

  Regenerates the seam-typography harness's whole input space: all words of
  length 0..=5 over the eleven TOKENS plus the seam token (271,453 picks),
  with the same base-12 ordinal the harness's odometer uses. For each pick it
  builds the segments, runs the proved model in LeanFtml/SeamTypography.lean,
  and emits {"id","got","expected"} on stdout. The Rust counterpart
  (conformance-g16/rust-dump) lifts the harness check verbatim into a copied
  ftml source tree with visibility-only changes. Text stays List Char inside
  the model; only the I/O edge converts to String.
-/

import LeanFtml

open LeanFtml

/-- The harness TOKENS list, with 11 as the seam token. -/
def tokenAt : Nat → List Char
  | 0 => ['"']
  | 1 => ['\'']
  | 2 => ['a']
  | 3 => [' ']
  | 4 => ['.']
  | 5 => ['.', '.', '.']
  | 6 => ['<']
  | 7 => ['>']
  | 8 => ['<', '<']
  | 9 => ['>', '>']
  | 10 => ['é']
  | _ => []

/-- The harness odometer ordinal: position zero is the least significant
    base-12 digit. -/
def pickId : List Nat → Nat
  | [] => 0
  | d :: ds => d + 12 * pickId ds

/-- Length offset of a block of picks in the harness enumeration. -/
def lengthOffset (len : Nat) : Nat :=
  match len with
  | 0 => 0
  | n + 1 => lengthOffset n + 12 ^ n

/-- Segments of a pick: a seam token closes the current segment. -/
def segmentsOfPick (pick : List Nat) : List (List Char) :=
  let rec go (acc : List Char) (out : List (List Char)) : List Nat → List (List Char)
    | [] => (acc.reverse :: out).reverse
    | p :: ps =>
        if p == 11 then go [] (acc.reverse :: out) ps
        else go (tokenAt p ++ acc) out ps
  go [] [] pick

/-- All base-12 words of a given length, in any deterministic order. -/
def genLen : Nat → List (List Nat)
  | 0 => [[]]
  | n + 1 => (List.range 12).flatMap (fun d => (genLen n).map (fun p => d :: p))

def genAll (maxLen : Nat) : List (Nat × List Nat) :=
  (List.range (maxLen + 1)).flatMap (fun len =>
    (genLen len).map (fun p => (lengthOffset len + pickId p, p)))

def escapeJson (cs : List Char) : String :=
  let rec go (acc : List Char) : List Char → List Char
    | [] => acc.reverse
    | '"' :: rest => go ('"' :: '\\' :: acc) rest
    | '\\' :: rest => go ('\\' :: '\\' :: acc) rest
    | c :: rest => go (c :: acc) rest
  String.ofList (go [] cs)

def emitLine (id : Nat) (pick : List Nat) : String :=
  let segs := segmentsOfPick pick
  let marked := markPieces segs
  let got := charsOf (ftmlSeamResolveM segs)
  let expected := charsOf (naiveTypoM marked)
  let corrected := charsOf (seamResolveM segs)
  "{\"id\":" ++ toString id ++ ",\"got\":\"" ++ escapeJson got ++
    "\",\"expected\":\"" ++ escapeJson expected ++
    "\",\"corrected\":\"" ++ escapeJson corrected ++ "\"}"

def main : IO Unit := do
  let lines := (genAll 5).map (fun (id, pick) => emitLine id pick)
  IO.println (String.intercalate "\n" lines)
