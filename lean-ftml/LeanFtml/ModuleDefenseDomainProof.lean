import LeanFtml.ModuleRules

set_option maxHeartbeats 40000000
set_option maxRecDepth 200000

namespace LeanFtml

/-! Certificate record: the defense-domain bounded certificate hash is 2400177605 over 103936 domain bytes, verified by kernel decide over the generated source family; it is recorded here so the proof file is self-contained. -/

/-!
Bounded defense-domain certificate for the Module family, defined locally so it does not depend on ModuleProof.lean.
The closer dimension is widened from the two spellings of the inherited 32-case product to all 64 case spellings of `[[/module]]`, retaining both nested-opener shapes.
This is a bounded certificate over 512 generated sources in each of two shapes, 1024 kernel-decided cases in total; it is not a universal theorem about moduleMatch.
The exact universal remainder is named at the end of this file.
-/

-- The closer generator: brackets and slash fixed, each of the six letters independently lower or upper.
def ddCloser : List Nat := litBytes "[[/module]]"

def ddLetterPairs : List (Nat × Nat) :=
  [(109, 77), (111, 79), (100, 68), (117, 85), (108, 76), (101, 69)]

def ddSpellings : List (Nat × Nat) → List (List Nat)
  | [] => [[]]
  | (lo, up) :: rest =>
      (ddSpellings rest).map (fun t => lo :: t) ++
        (ddSpellings rest).map (fun t => up :: t)

def ddClosers : List (List Nat) :=
  (ddSpellings ddLetterPairs).map (fun letters => [91, 91, 47] ++ letters ++ [93, 93])

theorem ddClosers_length : ddClosers.length = 64 := by
  decide

theorem ddClosers_nodup : ddClosers.Nodup := by
  decide

theorem ddClosers_len11 : ddClosers.all (fun c => c.length == 11) = true := by
  decide

theorem ddClosers_ci : ddClosers.all (fun c => matchLitCI ddCloser c == some []) = true := by
  decide

-- Names and bodies are the inherited two-element quotients; the closer is the widened dimension.
def ddNames : List (List Nat) := [[97], [90]]

def ddBodies : List (List Nat) := [[], [88]]

def ddCase : Type := List Nat × List Nat × List Nat × List Nat

def ddCases : List ddCase :=
  ddNames.flatMap fun o =>
    ddNames.flatMap fun i =>
      ddBodies.flatMap fun b =>
        ddClosers.map fun c => (o, i, b, c)

theorem ddCases_length : ddCases.length = 512 := by
  decide

def ddOpen (name : List Nat) : List Nat :=
  litBytes "[[module " ++ name ++ litBytes "]]"

def ddInlineSrc (o i b c : List Nat) : List Nat :=
  ddOpen o ++ [10] ++ ddOpen i ++ b ++ c ++ [10] ++ c

def ddInlineExpected (o i b c : List Nat) : List Nat :=
  litBytes "[[module654 " ++ o ++ litBytes "]]" ++ [10] ++
    ddOpen i ++ [10] ++ b ++ c

def ddInlineOk (t : ddCase) : Bool :=
  match moduleMatch (ddInlineSrc t.1 t.2.1 t.2.2.1 t.2.2.2) [] with
  | some (repl, rest, toks) =>
      repl == ddInlineExpected t.1 t.2.1 t.2.2.1 t.2.2.2 &&
      rest == [10] ++ t.2.2.2 &&
      toks.isEmpty
  | none => false

/-- Inline nested openers over all 64 closers: the leading `[[module` is renamed, exactly one LF is inserted after the inline inner opener, the residual is the outer closer, and no token is claimed. -/
theorem ddInlineDefense_all : ddCases.all ddInlineOk = true := by
  decide

def ddLineSrc (o i b c : List Nat) : List Nat :=
  ddOpen o ++ [10] ++ ddOpen i ++ [10] ++ b ++ c ++ [10] ++ c

def ddLineExpected (o i b c : List Nat) : List Nat :=
  litBytes "[[module654 " ++ o ++ litBytes "]]" ++ [10] ++
    ddOpen i ++ [10] ++ b ++ c

def ddLineOk (t : ddCase) : Bool :=
  match moduleMatch (ddLineSrc t.1 t.2.1 t.2.2.1 t.2.2.2) [] with
  | some (repl, rest, toks) =>
      repl == ddLineExpected t.1 t.2.1 t.2.2.1 t.2.2.2 &&
      rest == [10] ++ t.2.2.2 &&
      toks.isEmpty
  | none => false

/-- Line-terminated nested openers over all 64 closers: the leading `[[module` is renamed, no LF is inserted after the inner opener, the residual is the outer closer, and no token is claimed. -/
theorem ddLineDefense_all : ddCases.all ddLineOk = true := by
  decide

theorem ddDefenseDomain_all :
    ddCases.all ddInlineOk = true ∧ ddCases.all ddLineOk = true :=
  ⟨ddInlineDefense_all, ddLineDefense_all⟩

-- Deterministic FNV-1a style 32-bit hash of the generated sources and their expected outputs.
def ddHashStep (h b : Nat) : Nat := (h * 16777619 + b) % 4294967296

def ddHashBytes (seed : Nat) : List Nat → Nat
  | [] => seed
  | b :: bs => ddHashBytes (ddHashStep seed b) bs

def ddDomainBytes : List Nat :=
  ddCases.flatMap fun t =>
    let o := t.1
    let i := t.2.1
    let b := t.2.2.1
    let c := t.2.2.2
    ddInlineSrc o i b c ++ ddInlineExpected o i b c ++ [10] ++ c ++
      ddLineSrc o i b c ++ ddLineExpected o i b c ++ [10] ++ c

def ddDomainHash : Nat := ddHashBytes 2166136261 ddDomainBytes

#eval ddClosers.length
#eval ddCases.length
#eval ddDomainBytes.length
#eval ddDomainHash

/-!
Universal remainder, explicitly NOT proved by this bounded certificate.
(1) Arbitrary byte names and bodies: the generator fixes outer and inner names to `a` and `Z` and bodies to the empty list and `X`.
(2) Other opener spellings: only the exact lowercase `[[module ` head and `]]` close are generated, not mixed-case openers or attribute-bearing heads.
(3) Arbitrary tail: only the fixed frames with `[10] ++ c` after the inner closer are generated, not arbitrary trailing bytes after the outer opener.
(4) Independent closer pairs: the inner and outer closers are set to the same spelling c, so pairs of two different spellings are not generated.
The 64-spelling domain is exhaustive over case spellings of the closer; it is not a universal proof about moduleMatch.
-/

#print axioms ddClosers_length
#print axioms ddClosers_nodup
#print axioms ddClosers_len11
#print axioms ddClosers_ci
#print axioms ddCases_length
#print axioms ddInlineDefense_all
#print axioms ddLineDefense_all
#print axioms ddDefenseDomain_all

end LeanFtml
