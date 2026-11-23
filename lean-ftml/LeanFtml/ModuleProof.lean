import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000

namespace LeanFtml

/-!
Parse-side proofs for the Module family. Every statement is about the functions in `ModuleRules.lean`. The closer domain is the 64 case spellings of `[[/module]]`: six ASCII letters, each lower or upper, with the brackets and the slash fixed. REFCORR9 is the carry of those exact bytes on a Code-token re-emit (`matched.drop (matched.length - 11)`). REFCORR10 is the inline nested-opener newline, checked on the finite name/body/closer domain stated with `nestedCases`. Module evaluation is out of scope.
-/

def moduleCloser : List Nat := litBytes "[[/module]]"

def letterPairs : List (Nat × Nat) :=
  [(109, 77), (111, 79), (100, 68), (117, 85), (108, 76), (101, 69)]

def spellings : List (Nat × Nat) → List (List Nat)
  | [] => [[]]
  | (lo, up) :: rest =>
      (spellings rest).map (fun t => lo :: t) ++
        (spellings rest).map (fun t => up :: t)

/-- All 2^6 case spellings of the eleven-byte closer. -/
def closerSpellings : List (List Nat) :=
  (spellings letterPairs).map (fun letters => [91, 91, 47] ++ letters ++ [93, 93])

theorem closerSpellings_length : closerSpellings.length = 64 := by
  decide

theorem closerSpellings_len11 :
    closerSpellings.all (fun c => c.length == 11) = true := by
  decide

theorem closerSpellings_ci :
    closerSpellings.all (fun c => matchLitCI moduleCloser c == some []) = true := by
  decide

def codeFrame (c : List Nat) : List Nat :=
  litBytes "[[module nosuchmod]]\n" ++ phBytes 0 ++ [10] ++ c

def codeTok : List TokenEntry := [{ rule := "Code", opts := [] }]

def rawTok : List TokenEntry := [{ rule := "Raw", opts := [] }]

def reemitOk (c : List Nat) : Bool :=
  match moduleMatch (codeFrame c) codeTok with
  | some (repl, rest, toks) =>
      repl == ([10, 10] ++ phBytes 1 ++ [10, 10] ++ phBytes 0 ++ [10] ++ c) &&
      rest == [] &&
      toks.map (·.rule) == ["Code", "Module"]
  | none => false

def rawOk (c : List Nat) : Bool :=
  match moduleMatch (codeFrame c) rawTok with
  | some (repl, rest, toks) =>
      repl == ([10, 10] ++ phBytes 1 ++ [10, 10]) &&
      rest == [] &&
      toks.map (·.rule) == ["Raw", "Module"]
  | none => false

def immediateSrc (c : List Nat) : List Nat :=
  litBytes "[[module css]]\n" ++ c

def immediateOk (c : List Nat) : Bool :=
  match moduleMatch (immediateSrc c) [] with
  | some (repl, rest, toks) =>
      repl == ([10, 10] ++ phBytes 0 ++ [10, 10]) &&
      rest == c &&
      toks.map (·.rule) == ["Module"]
  | none => false

def immediate654Src (c : List Nat) : List Nat :=
  litBytes "[[module654 css]]\n" ++ c

def immediate654Ok (c : List Nat) : Bool :=
  match module654Match (immediate654Src c) [] with
  | some (repl, rest, toks) =>
      repl == ([10, 10] ++ phBytes 0 ++ [10, 10]) &&
      rest == [] &&
      toks.map (·.rule) == ["Module654"]
  | none => false

/-- REFCORR9 on the whole closer domain: each of the 64 spellings is re-emitted unchanged when the body holds the Code placeholder. -/
theorem reemitOk_all : closerSpellings.all reemitOk = true := by
  decide

/-- A Raw token in the same frame consumes every one of those closers. The Code-only gate does not reopen. -/
theorem rawOk_all : closerSpellings.all rawOk = true := by
  decide

/-- Module's `(.+?)` body leaves an immediate closer in the residual, for every spelling. -/
theorem immediateOk_all : closerSpellings.all immediateOk = true := by
  decide

/-- Module654's `(.*?)` body consumes an immediate closer as an empty body, for every spelling. -/
theorem immediate654Ok_all : closerSpellings.all immediate654Ok = true := by
  decide

theorem tail_survives_all :
    closerSpellings.all (fun c => moduleTail ([10] ++ c) == some ([], c)) = true := by
  decide

theorem tail654_consumes_all :
    closerSpellings.all (fun c => module654Tail ([10] ++ c) == some ([], [])) = true := by
  decide

/-- A tab is not Module's pre-newline run, and it is Module654's (correction C1), for every spelling. -/
theorem tab_distinguishes_all :
    closerSpellings.all (fun c =>
      moduleTail ([9, 10] ++ c) == none &&
      module654Tail ([9, 10] ++ c) == some ([], [])) = true := by
  decide

theorem drop_len (xs ys : List Nat) : (xs ++ ys).drop xs.length = ys := by
  induction xs with
  | nil => simp
  | cons _ xs ih => simp [ih]

theorem take_len (xs ys : List Nat) : (xs ++ ys).take xs.length = xs := by
  induction xs with
  | nil => simp
  | cons _ xs ih => simp [ih]

theorem drop_last {xs ys : List Nat} (h : ys.length = 11) :
    (xs ++ ys).drop ((xs ++ ys).length - 11) = ys := by
  have hlen : (xs ++ ys).length - 11 = xs.length := by
    simp [List.length_append, h]
  rw [hlen]
  exact drop_len xs ys

theorem spelling_len11 {c : List Nat} (h : c ∈ closerSpellings) : c.length = 11 := by
  have hc : (c.length == 11) = true := List.all_eq_true.mp closerSpellings_len11 c h
  exact (beq_iff_eq).mp hc

theorem codeFrame_split (c : List Nat) :
    codeFrame c = (litBytes "[[module nosuchmod]]\n" ++ phBytes 0 ++ [10]) ++ c := by
  simp [codeFrame, List.append_assoc]

theorem codeFrame_last {c : List Nat} (h : c.length = 11) :
    (codeFrame c).drop ((codeFrame c).length - 11) = c := by
  rw [codeFrame_split]
  exact drop_last h

theorem reemitOk_spec {c : List Nat} (h : reemitOk c = true) :
    (moduleMatch (codeFrame c) codeTok).map (·.1) =
      some ([10, 10] ++ phBytes 1 ++ [10, 10] ++ phBytes 0 ++ [10] ++ c) ∧
    (moduleMatch (codeFrame c) codeTok).map (·.2.1) = some [] ∧
    (moduleMatch (codeFrame c) codeTok).map (fun r => r.2.2.map (·.rule)) =
      some ["Code", "Module"] := by
  simp only [reemitOk] at h
  cases hmatch : moduleMatch (codeFrame c) codeTok with
  | none => simp [hmatch] at h
  | some trip =>
    obtain ⟨repl, rest, toks⟩ := trip
    simp only [hmatch] at h
    rw [Bool.and_eq_true] at h
    obtain ⟨hr, hrul⟩ := h
    rw [Bool.and_eq_true] at hr
    obtain ⟨hrepl, hrest⟩ := hr
    simp [beq_iff_eq.mp hrepl, beq_iff_eq.mp hrest, beq_iff_eq.mp hrul]

/-- On this frame the match ends at the closer and the residual is empty, so the carried bytes are exactly `matched.drop (matched.length - 11)`. -/
theorem reemit_is_authored_drop {c : List Nat} (h : c ∈ closerSpellings) :
    let src := codeFrame c
    (moduleMatch src codeTok).map (·.1) =
      some ([10, 10] ++ phBytes 1 ++ [10, 10] ++ phBytes 0 ++ [10] ++
        src.drop (src.length - 11)) := by
  have hlen := spelling_len11 h
  have hlast := codeFrame_last hlen
  have hflag : reemitOk c = true := List.all_eq_true.mp reemitOk_all c h
  have hspec := reemitOk_spec hflag
  simp [hspec.1, hlast]

theorem reemit_upper_not_lower :
    let c := litBytes "[[/MODULE]]"
    c ∈ closerSpellings ∧ c ≠ moduleCloser ∧
      (moduleMatch (codeFrame c) codeTok).map (·.1) =
        some ([10, 10] ++ phBytes 1 ++ [10, 10] ++ phBytes 0 ++ [10] ++ c) := by
  have hmem : litBytes "[[/MODULE]]" ∈ closerSpellings := by decide
  have hne : litBytes "[[/MODULE]]" ≠ moduleCloser := by decide
  have hflag : reemitOk (litBytes "[[/MODULE]]") = true :=
    List.all_eq_true.mp reemitOk_all _ hmem
  exact ⟨hmem, hne, (reemitOk_spec hflag).1⟩

theorem rewriteModulePrefix_exact (rest : List Nat) :
    rewriteModulePrefix (litBytes "[[module" ++ rest) =
      litBytes "[[module654" ++ rest := by
  have h8 : (litBytes "[[module").length = 8 := by decide
  unfold rewriteModulePrefix
  have htake : (litBytes "[[module" ++ rest).take 8 = litBytes "[[module" := by
    simp [h8]
  have hdrop : (litBytes "[[module" ++ rest).drop 8 = rest := by
    simp [h8]
  simp [htake, hdrop]

theorem rewriteModulePrefix_keep {m : List Nat}
    (h : (m.take 8 == litBytes "[[module") = false) :
    rewriteModulePrefix m = m := by
  unfold rewriteModulePrefix
  simp [h]

theorem rewrite654Prefix_exact (rest : List Nat) :
    rewrite654Prefix (litBytes "[[module654" ++ rest) =
      litBytes "[[module" ++ rest := by
  have h11 : (litBytes "[[module654").length = 11 := by decide
  unfold rewrite654Prefix
  have htake : (litBytes "[[module654" ++ rest).take 11 = litBytes "[[module654" := by
    simp [h11]
  have hdrop : (litBytes "[[module654" ++ rest).drop 11 = rest := by
    simp [h11]
  simp [htake, hdrop]

theorem rewrite654Prefix_keep {m : List Nat}
    (h : (m.take 11 == litBytes "[[module654") = false) :
    rewrite654Prefix m = m := by
  unfold rewrite654Prefix
  simp [h]

theorem rewrite_upper_kept :
    rewriteModulePrefix (litBytes "[[MODULE rest") = litBytes "[[MODULE rest" := by
  decide

/-! ## REFCORR10 finite domain -/

def nestedNames : List (List Nat) := [[97], [90]]

def nestedBodies : List (List Nat) := [[], [88]]

def nestedClosers : List (List Nat) :=
  [litBytes "[[/module]]", litBytes "[[/MODULE]]"]

def plainOpen (name : List Nat) : List Nat :=
  litBytes "[[module " ++ name ++ litBytes "]]"

def nestedCases : List (List Nat × List Nat × List Nat × List Nat × List Nat) :=
  nestedNames.flatMap fun o =>
    nestedNames.flatMap fun i =>
      nestedBodies.flatMap fun b =>
        nestedClosers.flatMap fun c1 =>
          nestedClosers.map fun c2 => (o, i, b, c1, c2)

theorem nestedCases_length : nestedCases.length = 32 := by
  decide

def inlineSrc (o i b c1 c2 : List Nat) : List Nat :=
  plainOpen o ++ [10] ++ plainOpen i ++ b ++ c1 ++ [10] ++ c2

def inlineExpected (o i b c1 : List Nat) : List Nat :=
  litBytes "[[module654 " ++ o ++ litBytes "]]" ++ [10] ++
    plainOpen i ++ [10] ++ b ++ c1

def inlineOk (t : List Nat × List Nat × List Nat × List Nat × List Nat) : Bool :=
  match moduleMatch (inlineSrc t.1 t.2.1 t.2.2.1 t.2.2.2.1 t.2.2.2.2) [] with
  | some (repl, rest, toks) =>
      repl == inlineExpected t.1 t.2.1 t.2.2.1 t.2.2.2.1 &&
      rest == [10] ++ t.2.2.2.2 &&
      toks.isEmpty
  | none => false

/-- Inline nested openers: the defense claims nothing, rewrites only the leading `[[module`, inserts one newline after the inner `]]`, and leaves the outer closer. Names are `a` and `Z`, bodies are empty or `X`, and both closers run over the lower and upper spellings. 32 sources. -/
theorem inline_nested_all : nestedCases.all inlineOk = true := by
  decide

def lineSrc (o i b c1 c2 : List Nat) : List Nat :=
  plainOpen o ++ [10] ++ plainOpen i ++ [10] ++ b ++ c1 ++ [10] ++ c2

def lineExpected (o i b c1 : List Nat) : List Nat :=
  litBytes "[[module654 " ++ o ++ litBytes "]]" ++ [10] ++
    plainOpen i ++ [10] ++ b ++ c1

def lineOk (t : List Nat × List Nat × List Nat × List Nat × List Nat) : Bool :=
  match moduleMatch (lineSrc t.1 t.2.1 t.2.2.1 t.2.2.2.1 t.2.2.2.2) [] with
  | some (repl, rest, toks) =>
      repl == lineExpected t.1 t.2.1 t.2.2.1 t.2.2.2.1 &&
      rest == [10] ++ t.2.2.2.2 &&
      toks.isEmpty
  | none => false

/-- The same 32 sources with both openers already line-terminated: the defense renames the leading prefix and inserts no extra newline. -/
theorem line_nested_all : nestedCases.all lineOk = true := by
  decide

#print axioms closerSpellings_length
#print axioms closerSpellings_len11
#print axioms closerSpellings_ci
#print axioms reemitOk_all
#print axioms rawOk_all
#print axioms immediateOk_all
#print axioms immediate654Ok_all
#print axioms tail_survives_all
#print axioms tail654_consumes_all
#print axioms tab_distinguishes_all
#print axioms drop_len
#print axioms take_len
#print axioms drop_last
#print axioms spelling_len11
#print axioms codeFrame_split
#print axioms codeFrame_last
#print axioms reemitOk_spec
#print axioms reemit_is_authored_drop
#print axioms reemit_upper_not_lower
#print axioms rewriteModulePrefix_exact
#print axioms rewriteModulePrefix_keep
#print axioms rewrite654Prefix_exact
#print axioms rewrite654Prefix_keep
#print axioms rewrite_upper_kept
#print axioms nestedCases_length
#print axioms inline_nested_all
#print axioms line_nested_all

end LeanFtml
