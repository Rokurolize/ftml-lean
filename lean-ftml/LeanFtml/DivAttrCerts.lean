import LeanFtml.ContainRules
import LeanFtml.InteractiveRules

/-! Finite-domain certificates for Div attribute parsing over the explicit generator domains `domKeys`, `domVals`, `dataCaseKeys` and `rankedKeys`. Bounded evidence with recorded cardinality; not a universal theorem. -/

namespace LeanFtml

/-! ## Finite domain, in the style of the Tableadv enumeration. -/

def domKeys : List (List Nat) :=
  [litBytes "id", litBytes "class", litBytes "style", litBytes "role", litBytes "type",
   litBytes "data-foo", litBytes "data-Foo", litBytes "data-FOO",
   litBytes "DATA-foo", litBytes "CLASS", litBytes "ID", litBytes "onclick"]

def domVals : List (List Nat) :=
  [[], [32], [9], [12], [1], litBytes "t", litBytes "  t  ", litBytes "a  b",
   litBytes "u-", litBytes " foo", [255, 48, 255]]

def dataCaseKeys : List (List Nat) :=
  [litBytes "data-foo", litBytes "data-Foo", litBytes "data-FOO"]

def rankedKeys : List (List Nat) :=
  [litBytes "id", litBytes "class", litBytes "style", litBytes "role", litBytes "type"]

def valueAt (r : List (List Char × Option (List Nat))) (name : String) :
    Option (Option (List Nat)) :=
  match r.find? (fun kv => kv.1 == name.toList) with
  | some (_, v) => some v
  | none => none

def noCtrlBytes (bs : List Nat) : Bool :=
  bs.all (fun b => !(b < 32 || b == 127))

/-- One singleton attribute: rejected names drop, `data-*` folds, class right-trims, the other ranked names keep `normalizeValue`, and a PHP-trim id becomes the bare shell. -/
def checkSingleton (k v : List Nat) : Bool :=
  let r := divArgs [(k, v)]
  (r.length ≤ 1) &&
  (if k == litBytes "CLASS" || k == litBytes "ID" || k == litBytes "DATA-foo" ||
      k == litBytes "onclick" then r.isEmpty else true) &&
  (if k == litBytes "data-foo" || k == litBytes "data-Foo" || k == litBytes "data-FOO" then
    valueAt r "data-foo" == some (some (normalizeValue v)) else true) &&
  (if k == litBytes "class" then
    valueAt r "class" == some (some (rtrimSpaceTab (normalizeValue v))) else true) &&
  (if k == litBytes "type" then
    valueAt r "type" == some (some (normalizeValue v)) else true) &&
  (if k == litBytes "style" then
    valueAt r "style" == some (some (normalizeValue v)) else true) &&
  (if k == litBytes "role" then
    valueAt r "role" == some (some (normalizeValue v)) else true) &&
  (if k == litBytes "id" && v.isEmpty then r.isEmpty else true) &&
  (if k == litBytes "id" && !v.isEmpty && v.contains 255 then
    valueAt r "id" == some (some v) else true) &&
  (if k == litBytes "id" && !v.isEmpty && v.all isTrimByte then
    valueAt r "id" == some (some (litBytes "u-")) else true) &&
  (if k == litBytes "id" && v == [12] then
    valueAt r "id" == some (some [117, 45, 32, 32]) else true) &&
  (r.all (fun kv => match kv.2 with
    | some bs => if kv.1 == "id".toList then true else noCtrlBytes bs
    | none => true))

def checkSingletons : Bool :=
  domKeys.all fun k => domVals.all fun v => checkSingleton k v

def checkDup (k1 k2 v1 v2 : List Nat) : Bool :=
  let r := divArgs [(k1, v1), (k2, v2)]
  r.length == 1 && valueAt r "data-foo" == some (some (normalizeValue v2))

def checkDups : Bool :=
  dataCaseKeys.all fun k1 => dataCaseKeys.all fun k2 =>
    domVals.all fun v1 => domVals.all fun v2 => checkDup k1 k2 v1 v2

def inserts {α} (a : α) : List α → List (List α)
  | [] => [[a]]
  | b :: bs => (a :: b :: bs) :: (inserts a bs).map (fun l => b :: l)

def perms {α} : List α → List (List α)
  | [] => [[]]
  | a :: as => (perms as).flatMap (inserts a)

def checkPerm (ks : List (List Nat)) : Bool :=
  let got := (divArgs (ks.map fun k => (k, litBytes "Z"))).map (·.1)
  let exp := (rankedKeys.filter (fun k => ks.contains k)).map utf8Decode
  got == exp

def checkPerms : Bool := (perms rankedKeys).all checkPerm

set_option maxRecDepth 200000 in
theorem dom_card : domKeys.length = 12 ∧ domVals.length = 11 ∧
    dataCaseKeys.length = 3 ∧ (perms rankedKeys).length = 120 := by
  decide

theorem all_true {α} (p : α → Bool) :
    ∀ (l : List α), (∀ a ∈ l, p a = true) → l.all p = true
  | [], _ => rfl
  | a :: rest, h => by
      simp [List.all_cons, h a (List.mem_cons_self ..),
        all_true p rest (fun x hx => h x (List.mem_cons_of_mem _ hx))]

set_option maxHeartbeats 8000000 in
/-- Generator: checkSingleton over domKeys (12) x domVals (11); cardinality by dom_card; remainder: inputs outside domKeys x domVals untested, no PHP differential. -/
theorem enum_singletons : checkSingletons = true := by
  unfold checkSingletons
  refine all_true _ domKeys ?_
  intro k hk
  refine all_true _ domVals ?_
  intro v hv
  simp only [domKeys, List.mem_cons, List.mem_nil_iff, or_false] at hk
  simp only [domVals, List.mem_cons, List.mem_nil_iff, or_false] at hv
  rcases hk with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals rcases hv with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals decide

set_option maxHeartbeats 20000000 in
/-- Generator: checkDup over dataCaseKeys (3)^2 x domVals (11)^2; cardinality by dom_card; remainder: duplicate key/value pairs outside the finite domain untested, no PHP differential. -/
theorem enum_data_dups : checkDups = true := by
  unfold checkDups
  refine all_true _ dataCaseKeys ?_
  intro k1 hk1
  refine all_true _ dataCaseKeys ?_
  intro k2 hk2
  refine all_true _ domVals ?_
  intro v1 hv1
  refine all_true _ domVals ?_
  intro v2 hv2
  simp only [dataCaseKeys, List.mem_cons, List.mem_nil_iff, or_false] at hk1 hk2
  simp only [domVals, List.mem_cons, List.mem_nil_iff, or_false] at hv1 hv2
  rcases hk1 with rfl | rfl | rfl
  all_goals rcases hk2 with rfl | rfl | rfl
  all_goals rcases hv1 with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals rcases hv2 with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl
  all_goals decide

set_option maxRecDepth 200000 in
set_option maxHeartbeats 40000000 in
/-- Generator: checkPerm over perms rankedKeys (120) from inserts/perms; cardinality by dom_card; remainder: key multisets outside rankedKeys untested, no PHP differential. -/
theorem enum_ranked_order : checkPerms = true := by
  decide

end LeanFtml
