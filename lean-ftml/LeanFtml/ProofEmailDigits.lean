import LeanFtml.ProofEmailKeepers

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## Token renumbering — the Email-facing projection of TokEquiv (§5.2) -/

/-- The decimal-digit byte predicate used by the mirror's `readPlaceholder`. -/
def emailIsDigitByte (b : Nat) : Bool := 48 ≤ b && b ≤ 57

/-- The decimal value of an ASCII digit run, parsed exactly as `readPlaceholder` parses it. -/
def digitsVal (ds : List Nat) : Nat :=
  ds.foldl (fun a d => a * 10 + (d - 48)) 0

theorem digitsVal_append_single (ds : List Nat) (d : Nat) :
    digitsVal (ds ++ [d]) = digitsVal ds * 10 + (d - 48) := by
  unfold digitsVal
  rw [List.foldl_append]
  simp

theorem digitsVal_decBytes (k : Nat) : digitsVal (emailDecBytes k) = k := by
  induction k using Nat.strongRecOn with
  | ind k ih =>
      by_cases hk : k < 10
      · have ht : Nat.toDigits 10 k = [Nat.digitChar k] := Nat.toDigits_of_lt_base hk
        have hd : emailDecBytes k = [48 + k] := by
          rw [emailDecBytes, ht]
          simp [digitChar_toNat k hk]
        rw [hd]
        simp [digitsVal]
      · have hk10 : 10 ≤ k := by omega
        have hdiv : k / 10 < k := Nat.div_lt_self (by omega) (by omega)
        have ht : Nat.toDigits 10 k = Nat.toDigits 10 (k / 10) ++ [Nat.digitChar (k % 10)] :=
          Nat.toDigits_of_base_le (by omega) hk10
        have hd : emailDecBytes k = emailDecBytes (k / 10) ++ [48 + k % 10] := by
          simp [emailDecBytes, ht, digitChar_toNat (k % 10) (Nat.mod_lt k (by omega))]
        rw [hd, digitsVal_append_single, ih (k / 10) hdiv]
        have hsub : 48 + k % 10 - 48 = k % 10 := by omega
        rw [hsub, Nat.mul_comm]
        exact Nat.div_add_mod k 10

theorem takeWhile_eq_self_append_cons (p : Nat → Bool) (ds : List Nat) (t : Nat) (tail : List Nat)
    (hds : ∀ b ∈ ds, p b = true) (ht : p t = false) :
    (ds ++ t :: tail).takeWhile p = ds := by
  induction ds with
  | nil => simp [List.takeWhile, ht]
  | cons d ds ih =>
      have hd : p d = true := hds d (by simp)
      have hds' : ∀ b ∈ ds, p b = true := fun b hb => hds b (by simp [hb])
      simp [List.takeWhile, hd, ih hds']

theorem takeWhile_decBytes_255 (k : Nat) (post : List Nat) :
    (emailDecBytes k ++ (255 :: post)).takeWhile emailIsDigitByte = emailDecBytes k := by
  apply takeWhile_eq_self_append_cons
  · intro b hb
    have hr := decBytes_range k b hb
    simp [emailIsDigitByte]
    omega
  · simp [emailIsDigitByte]

theorem drop_prefix_append (ds tail : List Nat) : (ds ++ tail).drop ds.length = tail := by
  induction ds with
  | nil => simp
  | cons d ds ih => simpa using ih

#print axioms emailIsDigitByte
#print axioms digitsVal
#print axioms digitsVal_append_single
#print axioms digitsVal_decBytes
#print axioms takeWhile_eq_self_append_cons
#print axioms takeWhile_decBytes_255
#print axioms drop_prefix_append

end LeanFtml
