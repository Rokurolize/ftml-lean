import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000
set_option maxRecDepth 100000

namespace LeanFtml

/-!
Bounded carry certificate for the REFCORR9 authored-closer re-emit. The inherited ModuleProof.lean proves `reemit_is_authored_drop` on one fixed frame whose residual is empty, but proves no statement about an arbitrary source: that every moduleHead candidate rest is a suffix of the source, and that the eleven bytes the mirror carries are the closer findSubCI located. This file proves the unconditional take/drop skeleton of that carry (append/drop/take arithmetic over appended lists, and the suffix criterion) and checks the semantic link by kernel `decide` over an explicitly generated finite family of frames. The family varies opener name bytes, attribute group, body bytes (each body holding a Code placeholder), the 64 case spellings of the closer, and a trailing tail after the closer. Nothing here is labelled universal: the named universal remainder is stated at the end of the file.
-/

/-! ## Universal take/drop arithmetic (no enumeration) -/

theorem append_drop_len (xs ys : List Nat) : (xs ++ ys).drop xs.length = ys := by
  induction xs with
  | nil => simp
  | cons _ xs ih => simp [ih]

theorem append_take_len (xs ys : List Nat) : (xs ++ ys).take xs.length = xs := by
  induction xs with
  | nil => simp
  | cons _ xs ih => simp [ih]

theorem drop_last11 {xs ys : List Nat} (h : ys.length = 11) :
    (xs ++ ys).drop ((xs ++ ys).length - 11) = ys := by
  have hlen : (xs ++ ys).length - 11 = xs.length := by
    simp [List.length_append, h]
  rw [hlen]
  exact append_drop_len xs ys

/-- Unconditional carry lemma: if a source splits as `pre ++ c ++ tail` with `c` exactly eleven bytes, then `matched` (computed the way the mirror computes it, as the source with the residual tail removed) has those eleven bytes as its suffix. This is the abstract skeleton of `matched.drop (matched.length - 11)` without any hypothesis on a parse rule. -/
theorem carry_drop (pre c tail : List Nat) (hc : c.length = 11) :
    let src := pre ++ c ++ tail
    let matched := src.take (src.length - tail.length)
    matched.drop (matched.length - 11) = c := by
  dsimp
  have hlen : (pre ++ c ++ tail).length - tail.length = (pre ++ c).length := by
    simp only [List.length_append]
    simp
  rw [hlen]
  have htake : (pre ++ c ++ tail).take (pre ++ c).length = pre ++ c :=
    append_take_len (pre ++ c) tail
  rw [htake]
  exact drop_last11 hc

/-- Local left cancellation for append. -/
theorem append_cancel_left_local {a b c : List Nat} (h : a ++ b = a ++ c) : b = c := by
  simpa using h

/-- A residual `rest'` is exactly the suffix cut off by `matched := src.take (src.length - rest'.length)` iff `matched ++ rest' = src`. This is the unconditional suffix criterion the mirror's `matched` computation relies on. -/
theorem take_append_rest_eq_iff_suffix (src rest' : List Nat) :
    (src.take (src.length - rest'.length) ++ rest' = src) ↔
    (rest' = src.drop (src.length - rest'.length)) := by
  let k := src.length - rest'.length
  change (src.take k ++ rest' = src) ↔ (rest' = src.drop k)
  constructor
  · intro h
    have hsplit : src.take k ++ src.drop k = src := List.take_append_drop k src
    have h' : src.take k ++ rest' = src.take k ++ src.drop k := by
      rw [hsplit]
      exact h
    exact append_cancel_left_local h'
  · intro h
    rw [h]
    exact List.take_append_drop k src

/-- Every element returned by `close2Suffixes xs` is a suffix of `xs`. This is the structural half of the universal claim that attribute candidates end in a suffix of the source. -/
theorem close2Suffixes_suffix {xs sfx : List Nat} (h : sfx ∈ close2Suffixes xs) :
    ∃ pre, xs = pre ++ sfx := by
  induction xs with
  | nil => simp [close2Suffixes] at h
  | cons x xs ih =>
      rw [close2Suffixes] at h
      by_cases hpos : ((x :: xs).take 2 == [93, 93]) = true
      · rw [if_pos hpos] at h
        have hh : sfx = x :: xs ∨ sfx ∈ close2Suffixes xs := by
          simpa using h
        rcases hh with h | h
        · subst sfx
          exact ⟨[], rfl⟩
        · rcases ih h with ⟨pre, hpre⟩
          exact ⟨x :: pre, by simp [hpre]⟩
      · rw [if_neg hpos] at h
        have hh : sfx ∈ close2Suffixes xs := by
          simpa using h
        rcases ih hh with ⟨pre, hpre⟩
        exact ⟨x :: pre, by simp [hpre]⟩

/-- Dropping the first two bytes of a suffix leaves a suffix (the `]]` an attribute candidate consumes). -/
theorem suffix_drop_two {xs sfx pre : List Nat} (h : xs = pre ++ sfx) :
    ∃ pre', xs = pre' ++ sfx.drop 2 := by
  refine ⟨pre ++ sfx.take 2, ?_⟩
  rw [h]
  rw [List.append_assoc]
  rw [List.take_append_drop]

/-! ## The generated finite family -/

def modCloser : List Nat := litBytes "[[/module]]"

def carryLetterPairs : List (Nat × Nat) :=
  [(109, 77), (111, 79), (100, 68), (117, 85), (108, 76), (101, 69)]

def carrySpellings : List (Nat × Nat) → List (List Nat)
  | [] => [[]]
  | (lo, up) :: rest =>
      (carrySpellings rest).map (fun t => lo :: t) ++
        (carrySpellings rest).map (fun t => up :: t)

/-- The 64 case spellings of the eleven-byte closer; brackets and slash fixed, the six letters independently lower or upper. -/
def closerCases : List (List Nat) :=
  (carrySpellings carryLetterPairs).map (fun letters => [91, 91, 47] ++ letters ++ [93, 93])

theorem closerCases_length : closerCases.length = 64 := by
  decide

theorem closerCases_len11 : closerCases.all (fun c => c.length == 11) = true := by
  decide

theorem closerCases_ci : closerCases.all (fun c => matchLitCI modCloser c == some []) = true := by
  decide

/-- Each generated frame carries its source together with the body bytes, the authored closer spelling, and the trailing tail, so the certificate can recompute the closer findSubCI located. -/
structure Frame where
  src : List Nat
  body : List Nat
  closer : List Nat
  tail : List Nat

/-- Opener name byte runs: a single lowercase letter and a two-byte uppercase run. -/
def genNames : List (List Nat) := [[97], [90, 90]]

/-- Attribute groups: a lone space, an attribute ` x=y`, and the absent group (an immediate `]]` after the name). -/
def genAttrs : List (List Nat) := [[32], [32, 120, 61, 121], []]

/-- Body byte runs; each contains the Code placeholder `phBytes 0`, so the Code-carry gate is exercised. -/
def genBodies : List (List Nat) := [[88] ++ phBytes 0, phBytes 0 ++ [89]]

/-- Trailing tails placed after the closer: an empty tail and a newline followed by literal text. -/
def genTails : List (List Nat) := [[], [10, 84, 65, 73, 76]]

/-- Frame builder: a line-start Module opener, one whitespace byte, the name, the attribute group ending at `]]`, a newline, the body, the authored closer, and the tail. -/
def genFrame (name attr body c tail : List Nat) : List Nat :=
  litBytes "[[module" ++ [32] ++ name ++ attr ++ litBytes "]]" ++ [10] ++ body ++ c ++ tail

/-- The generator: the full product 2 names x 3 attrs x 2 bodies x 64 closers x 2 tails. -/
def genFrames : List Frame :=
  genNames.flatMap fun name =>
  genAttrs.flatMap fun attr =>
  genBodies.flatMap fun body =>
  closerCases.flatMap fun c =>
  genTails.map fun tail =>
    { src := genFrame name attr body c tail, body := body, closer := c, tail := tail }

theorem genFrames_length : genFrames.length = 1536 := by
  decide

theorem genNames_length : genNames.length = 2 := by decide
theorem genAttrs_length : genAttrs.length = 3 := by decide
theorem genBodies_length : genBodies.length = 2 := by decide
theorem genTails_length : genTails.length = 2 := by decide

/-- The exact closer bytes findSubCI located in the body group: the case-insensitive occurrence search starts one byte into the body, exactly as moduleTail searches `bodyStart.drop 1`. -/
def locatedCloser (body c tail : List Nat) : Option (List Nat) :=
  let bs := body ++ c ++ tail
  match findSubCI modCloser (bs.drop 1) with
  | none => none
  | some k => some (((bs.drop 1).drop k).take 11)

/-- The proposition checked on each generated frame. It asserts that moduleMatch returns a Code-carry claim, that the emitted last eleven bytes equal `matched.drop (matched.length - 11)`, that those bytes equal the exact closer findSubCI located and the authored closer, that the residual is a suffix of the source, and that the Code token is kept and a Module token claimed. -/
def CarryClaim (f : Frame) : Prop :=
  match moduleMatch f.src [{ rule := "Code", opts := [] }] with
  | none => False
  | some (repl, rest', t1) =>
      let matched := f.src.take (f.src.length - rest'.length)
      repl.drop (repl.length - 11) = matched.drop (matched.length - 11) ∧
      some (repl.drop (repl.length - 11)) = locatedCloser f.body f.closer f.tail ∧
      matched.drop (matched.length - 11) = f.closer ∧
      matched ++ rest' = f.src ∧
      t1.map (·.rule) = ["Code", "Module"]

/-- The Bool kernel check on each generated frame, matching CarryClaim component by component. -/
def carryOk (f : Frame) : Bool :=
  match moduleMatch f.src [{ rule := "Code", opts := [] }] with
  | none => false
  | some (repl, rest', t1) =>
      let matched := f.src.take (f.src.length - rest'.length)
      (repl.drop (repl.length - 11) == matched.drop (matched.length - 11)) &&
      (some (repl.drop (repl.length - 11)) == locatedCloser f.body f.closer f.tail) &&
      (matched.drop (matched.length - 11) == f.closer) &&
      (matched ++ rest' == f.src) &&
      (t1.map (·.rule) == ["Code", "Module"])

/-- Kernel reduction over the whole generated family: every one of the 1536 frames satisfies the Bool check. This is a bounded enumeration, not a universal proof. -/
theorem carryOk_all : genFrames.all carryOk = true := by
  decide

/-- Extract the proposition from the Bool check on a single frame. -/
theorem carryOk_spec (f : Frame) (h : carryOk f = true) : CarryClaim f := by
  unfold carryOk at h
  unfold CarryClaim
  cases hm : moduleMatch f.src [{ rule := "Code", opts := [] }] with
  | none => simp [hm] at h
  | some trip =>
      obtain ⟨repl, rest', t1⟩ := trip
      simp only [hm, Bool.and_eq_true] at h
      rcases h with ⟨h1234, h5⟩
      rcases h1234 with ⟨h123, h4⟩
      rcases h123 with ⟨h12, h3⟩
      rcases h12 with ⟨h1, h2⟩
      exact ⟨beq_iff_eq.mp h1, beq_iff_eq.mp h2, beq_iff_eq.mp h3,
        beq_iff_eq.mp h4, beq_iff_eq.mp h5⟩

/-- Lift the Bool certificate to a proposition for an arbitrary member of the generated family. -/
theorem generated_carry (f : Frame) (hf : f ∈ genFrames) : CarryClaim f := by
  exact carryOk_spec f (List.all_eq_true.mp carryOk_all f hf)

/-! ## Deterministic hash of the generated family -/

def hashBytes (xs : List Nat) : Nat :=
  xs.foldl (fun h b => (h * 257 + b + 1) % 1000000007) 7

def hashFamily (fs : List Frame) : Nat :=
  fs.foldl (fun h f => (h * 1000003 + hashBytes f.src) % 1000000007) 11

#eval genFrames.length
#eval hashFamily genFrames

/-!
NAMED UNIVERSAL REMAINDER. The universal theorems above cover only the take/drop skeleton: `carry_drop` and `drop_last11` show that whenever a source splits as `pre ++ c ++ tail` with `c` eleven bytes, the last eleven bytes of the mirror's `matched` are `c`; `take_append_rest_eq_iff_suffix`, `close2Suffixes_suffix`, and `suffix_drop_two` show the suffix criterion and the structural suffixness of attribute candidates. What is NOT proved universally: for an arbitrary source `src` and arbitrary token table `toks`, `moduleMatch src toks` returning a Code-carry claim implies (i) that every `moduleHead` candidate rest is a suffix of `src` once lifted through `matchLitCI` and the full moduleHead case split, and (ii) that the eleven bytes carried are exactly the case-insensitive closer occurrence `findSubCI` located in the body group. The semantic link between `matched`, the residual `rest'`, the body group, and the author's closer is certified only on the 1536 generated frames (2 names x 3 attrs x 2 bodies x 64 closers x 2 tails). Also outside scope: the converse that `matchLitCI modCloser c = some []` implies `c ∈ closerCases`, sources whose body contains a closer before the intended one, the defense branch, Module654, Modulepre, and the multi-pass fixpoint.
-/

#print axioms append_drop_len
#print axioms append_take_len
#print axioms drop_last11
#print axioms carry_drop
#print axioms append_cancel_left_local
#print axioms take_append_rest_eq_iff_suffix
#print axioms close2Suffixes_suffix
#print axioms suffix_drop_two
#print axioms closerCases_length
#print axioms closerCases_len11
#print axioms closerCases_ci
#print axioms genFrames_length
#print axioms genNames_length
#print axioms genAttrs_length
#print axioms genBodies_length
#print axioms genTails_length
#print axioms carryOk_all
#print axioms carryOk_spec
#print axioms generated_carry

end LeanFtml
