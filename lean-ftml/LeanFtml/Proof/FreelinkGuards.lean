/- LeanFtml.Proof.FreelinkGuards -- universal laws for the mirror's freelinkProcess guard chain, plus closed regression witnesses. -/

import LeanFtml.LinkRules

namespace LeanFtml

-- A byte absent from a list makes List.any over byte equality false.
theorem any_false_of (b : Nat) (bs : List Nat) (h : b ∉ bs) :
    bs.any (fun x => x == b) = false := by
  induction bs with
  | nil => simp
  | cons x xs ih =>
      have hx : x ≠ b := by
        intro hxb
        apply h
        simp [hxb]
      have hxs : b ∉ xs := by
        intro hb
        apply h
        simp [hb]
      simp [hx, ih hxs]

-- Filtering out an absent byte preserves the list length.
theorem filter_ne_length (b : Nat) (bs : List Nat) (h : b ∉ bs) :
    (bs.filter (fun x => x != b)).length = bs.length := by
  induction bs with
  | nil => simp
  | cons x xs ih =>
      have hx : x ≠ b := by
        intro hxb
        apply h
        simp [hxb]
      have hxs : b ∉ xs := by
        intro hb
        apply h
        simp [hb]
      simp [hx, ih hxs]

-- A pattern longer than the source has no occurrence in it.
theorem findSub_missing (pat src : List Nat) (h : src.length < pat.length) :
    findSub pat src = none := by
  induction src with
  | nil =>
      cases pat with
      | nil => simp at h
      | cons p ps => simp [findSub]
  | cons x xs ih =>
      have hxs : xs.length < pat.length := by
        have h' : xs.length + 1 < pat.length := by simpa using h
        omega
      have htake : (x :: xs).take pat.length ≠ pat := by
        intro heq
        have hlenEq : ((x :: xs).take pat.length).length = pat.length := by
          rw [heq]
        have hlenLe : ((x :: xs).take pat.length).length ≤ (x :: xs).length := by
          simpa [List.length_take] using Nat.min_le_right pat.length (x :: xs).length
        omega
      simp [findSub, htake, ih hxs]

-- C-SUSPECT-XRULE-1: a placeholder byte anywhere in the match is literal.
theorem freelinkProcess_placeholder (full raw label : List Nat) (toks : List TokenEntry)
    (h : full.any (fun b => b == 0xFF) = true) :
    freelinkProcess full raw label toks = (full, toks) := by
  unfold freelinkProcess
  simp [h]

-- More than one hash byte in the raw target forces the literal return.
theorem freelinkProcess_multi_hash (full raw label : List Nat) (toks : List TokenEntry)
    (h : 1 < (raw.filter (fun b => b == 35)).length) :
    freelinkProcess full raw label toks = (full, toks) := by
  unfold freelinkProcess
  simp [h]

-- A "##" occurrence in the raw target forces the literal return.
theorem freelinkProcess_hashhash (full raw label : List Nat) (toks : List TokenEntry)
    (h : (findSub (litBytes "##") raw).isSome = true) :
    freelinkProcess full raw label toks = (full, toks) := by
  unfold freelinkProcess
  simp [h]

-- A leading hash with a non-space, non-tab second byte is literal.
theorem freelinkProcess_hash_lead (full anch label : List Nat) (b2 : Nat)
    (toks : List TokenEntry)
    (hff : 0xFF ∉ full) (hb2 : b2 ≠ 32) (hb9 : b2 ≠ 9) :
    freelinkProcess full (35 :: b2 :: anch) label toks = (full, toks) := by
  unfold freelinkProcess
  have hany : full.any (fun b => b == 0xFF) = false := any_false_of 0xFF full hff
  simp [hany, hb2, hb9]

/- REGRESSION-WITNESS SECTION -- closed decide checks, not universal proof. -/

def fFull (target : String) : List Nat :=
  litBytes "[[[" ++ litBytes target ++ litBytes "]]]"

def freelinkClaimedNone (full raw : List Nat) : Bool :=
  (freelinkProcess full raw [] []).2.isEmpty

def freelinkStrOpt (full raw : List Nat) (key : List Char) : Option OptVal :=
  match (freelinkProcess full raw [] []).2 with
  | [] => none
  | t :: _ => omGet t.opts key

def freelinkStrEq (full raw : List Nat) (key val : String) : Bool :=
  match freelinkStrOpt full raw key.toList with
  | some (OptVal.str cs) => cs == val.toList
  | _ => false

-- REFCORR11 two-hash and leading-hash targets: no token is claimed.
example : freelinkClaimedNone (fFull "a##b") (litBytes "a##b") = true := by decide
example : freelinkClaimedNone (fFull "a#b#c") (litBytes "a#b#c") = true := by decide
example : freelinkClaimedNone (fFull "home###") (litBytes "home###") = true := by decide
example : freelinkClaimedNone (fFull "foo/#/bar#baz") (litBytes "foo/#/bar#baz") = true := by decide
example : freelinkClaimedNone (fFull "a/#/b/#/c") (litBytes "a/#/b/#/c") = true := by decide
example : freelinkClaimedNone (fFull "#a") (litBytes "#a") = true := by decide

-- Single route and anchor targets: a token is still claimed.
example : freelinkClaimedNone (fFull "foo/#/bar") (litBytes "foo/#/bar") = false := by decide
example : freelinkClaimedNone (fFull "foo/#/") (litBytes "foo/#/") = false := by decide
example : freelinkClaimedNone (fFull "/#/bar") (litBytes "/#/bar") = false := by decide
example : freelinkClaimedNone (fFull "foo#bar") (litBytes "foo#bar") = false := by decide

-- The four read options are present on a claimed route target.
example : (freelinkStrOpt (fFull "foo/#/bar") (litBytes "foo/#/bar") "page".toList).isSome = true := by decide
example : (freelinkStrOpt (fFull "foo/#/bar") (litBytes "foo/#/bar") "text".toList).isSome = true := by decide
example : (freelinkStrOpt (fFull "foo/#/bar") (litBytes "foo/#/bar") "anchor".toList).isSome = true := by decide
example : (freelinkStrOpt (fFull "foo/#/bar") (litBytes "foo/#/bar") "extra".toList).isSome = true := by decide

-- Exact option values on the route and plain-anchor shapes.
example : freelinkStrEq (fFull "foo/#/bar") (litBytes "foo/#/bar") "page" "foo" = true := by decide
example : freelinkStrEq (fFull "foo/#/bar") (litBytes "foo/#/bar") "extra" "#/bar" = true := by decide
example : freelinkStrEq (fFull "foo#bar") (litBytes "foo#bar") "page" "foo" = true := by decide
example : freelinkStrEq (fFull "foo#bar") (litBytes "foo#bar") "anchor" "#bar" = true := by decide

#print axioms any_false_of
#print axioms filter_ne_length
#print axioms findSub_missing
#print axioms freelinkProcess_placeholder
#print axioms freelinkProcess_multi_hash
#print axioms freelinkProcess_hashhash
#print axioms freelinkProcess_hash_lead

end LeanFtml
