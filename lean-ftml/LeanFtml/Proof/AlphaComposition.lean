/-
  LeanFtml.Proof.AlphaComposition — Wave 3 composition lane (alpha composition).

  Covered segment: the Email claimed-placeholder observer surface only. This file composes the main-carried Email facts (ProofEmailRenumber.lean, ProofEmailObserver.lean, ProofEmailKeepers.lean, ProofEmailDigits.lean) into genuine semigroup and chained-observer statements about sequential token-index base shifts on a single 0xFF<k>0xFF placeholder in an Email label. Every step is bridged by tokRenumberBytes_phBytes; the email render internals are not reproved.

  Uncovered set: all non-Email rules — the 67 parse rules of pipelineR317, i.e. prefilter through tighten at positions 2 through 68 of pipelineFull after Include — lack a file-verified rule-level TokEquiv or token-renumbering result on main. The generic refl lemmas in LeanFtml.TokenStateProof (segTokEquiv_refl, segsTokEquiv_refl, tokEquiv_refl) are stated for an identity renaming only and are not rule-level results; they establish no non-Email rule's alpha-invariance. No claim is made here about those 67 rules, and no state-level renaming function is introduced.

  Import boundary: only the Email proof chain is imported. Main carries two definitions of emailDecBytes (ByteCore.lean:39 and ProofEmailKeepers.lean:16), so importing TokenStateProof, ProofInterface, ByteCore, ProofInclude or LeanFtml.lean alongside the Email chain collides on that name; the Email chain reaches Pipeline but not ByteCore, so the imports below are collision-free. Resolving that duplicate definition is a coordinator/foundation boundary, not touched here.

  Axiom discipline: only the standard core axioms are used; there are no placeholder terms, no opaque oracle constants, no kernel-bypass tactics and no compiler-assisted decision procedures. The trailing #print axioms lines record the exact axiom set of every theorem here.
-/
import LeanFtml.ProofEmailObserver
import LeanFtml.ProofEmailRenumber
import LeanFtml.ProofEmailKeepers
import LeanFtml.ProofEmailDigits

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## Composition of renamings on a single claimed placeholder -/

/-- Semigroup law for two arbitrary renamings on one claimed placeholder: applying σ₁ and then σ₂ to an Email label equals applying the composed renaming (fun j => σ₂ (σ₁ j)) once. The second shift is applied to the intermediate string pre ++ phBytes (σ₁ k) ++ post, which is not FF-free because phBytes carries two 0xFF delimiters, so it is justified by tokRenumberBytes_phBytes rather than by tokGo_id_of_no_ff on the whole string. -/
theorem tokRenumberBytes_comp (σ₁ σ₂ : Nat → Nat) (k : Nat) (pre post : List Nat)
    (hpre : ∀ b ∈ pre, b ≠ 255) (hpost : ∀ b ∈ post, b ≠ 255) :
    tokRenumberBytes σ₂ (tokRenumberBytes σ₁ (pre ++ phBytes k ++ post)) =
      tokRenumberBytes (fun j => σ₂ (σ₁ j)) (pre ++ phBytes k ++ post) := by
  rw [tokRenumberBytes_phBytes σ₁ k pre post hpre hpost]
  rw [tokRenumberBytes_phBytes σ₂ (σ₁ k) pre post hpre hpost]
  rw [tokRenumberBytes_phBytes (fun j => σ₂ (σ₁ j)) k pre post hpre hpost]

/-- The requested base-shift instance of the semigroup law: two cumulative shifts b₁ then b₂ on one claimed placeholder compose to the single shift j ↦ b₂ + (b₁ + j). Obtained from tokRenumberBytes_comp by specialization; the intermediate FF-bearing string is handled entirely by the main-carried placeholder lemma. -/
theorem tokRenumberBytes_base_shift_comp (b₁ b₂ k : Nat) (pre post : List Nat)
    (hpre : ∀ b ∈ pre, b ≠ 255) (hpost : ∀ b ∈ post, b ≠ 255) :
    tokRenumberBytes (fun j => b₂ + j)
        (tokRenumberBytes (fun j => b₁ + j) (pre ++ phBytes k ++ post)) =
      tokRenumberBytes (fun j => b₂ + (b₁ + j)) (pre ++ phBytes k ++ post) := by
  simpa using tokRenumberBytes_comp (fun j : Nat => b₁ + j) (fun j : Nat => b₂ + j)
    k pre post hpre hpost

/-! ## Chained observer law -/

/-- Composed observer law for the same two shifts: an Email claiming token k whose label undergoes the two-stage base renumbering renders exactly the original surrounding bytes with the index digits equal to (emailDecBytes (b₂ + (b₁ + k))).reverse between the two U+FFFD sequences. Derived from tokRenumberBytes_base_shift_comp and one use of email_index_observer_law at base b₂ + b₁; no renderEmail internals are reproved here. -/
theorem email_index_observer_base_shift_comp (b₁ b₂ k : Nat) (email pre post : List Nat)
    (he : ∀ b ∈ email, b < 128 ∧ (b = 64 ∨ (b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62)))
    (hp : ∀ b ∈ pre ++ post, b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62 ∧ b ≠ 64)
    (hpre : ∀ b ∈ pre, b ≠ 255) (hpost : ∀ b ∈ post, b ≠ 255) :
    renderEmail [("email".toList, OptVal.bytes email),
        ("text".toList, OptVal.bytes (tokRenumberBytes (fun j => b₂ + j)
          (tokRenumberBytes (fun j => b₁ + j) (pre ++ phBytes k ++ post))))] =
      litBytes "<span class=\"wiki-email\">" ++
        (email.reverse.map atPipe) ++ [35] ++
        (post.reverse.map atPipe) ++
        utf8Fffd ++ (emailDecBytes (b₂ + (b₁ + k))).reverse ++ utf8Fffd ++
        (pre.reverse.map atPipe) ++
        litBytes "</span>" := by
  rw [tokRenumberBytes_base_shift_comp b₁ b₂ k pre post hpre hpost]
  simpa [Nat.add_assoc] using
    email_index_observer_law (b₂ + b₁) k email pre post he hp hpre hpost

/-! ## Generic segment composition over a list of rules -/

/-- Generic segment-composition lemma over an explicit List of rules (here natural base shifts), parameterised by an explicit per-rule commutation hypothesis. The hypothesis says exactly that one rule's main-defined tokRenumberBytes maps a single-placeholder label pre ++ phBytes n ++ post to pre ++ phBytes (b + n) ++ post, which is the property proved on main by tokRenumberBytes_phBytes. Folding the rules therefore accumulates their shifts in the placeholder index; no state-renumbering function, no per-rule bundle and no non-Email rule claim is introduced. -/
theorem segment_shift_list_of_commute (shifts : List Nat) (k : Nat) (pre post : List Nat)
    (comm : ∀ b n : Nat, tokRenumberBytes (fun j => b + j) (pre ++ phBytes n ++ post) =
        pre ++ phBytes (b + n) ++ post) :
    shifts.foldl (fun bs b => tokRenumberBytes (fun j => b + j) bs) (pre ++ phBytes k ++ post) =
      pre ++ phBytes (shifts.foldl (fun acc b => b + acc) k) ++ post := by
  induction shifts generalizing k with
  | nil => simp
  | cons b shifts ih =>
      change shifts.foldl (fun bs b' => tokRenumberBytes (fun j => b' + j) bs)
          (tokRenumberBytes (fun j => b + j) (pre ++ phBytes k ++ post)) =
        pre ++ phBytes (shifts.foldl (fun acc b' => b' + acc) (b + k)) ++ post
      rw [comm b k]
      simpa using ih (b + k)

/-- The unconditional list instance: the per-rule commutation hypothesis is discharged for every shift rule by tokRenumberBytes_phBytes on main. This is the honest N-rule extension of the two-shift semigroup law, still confined to the Email claimed-placeholder surface. -/
theorem tokRenumberBytes_shift_list (shifts : List Nat) (k : Nat) (pre post : List Nat)
    (hpre : ∀ b ∈ pre, b ≠ 255) (hpost : ∀ b ∈ post, b ≠ 255) :
    shifts.foldl (fun bs b => tokRenumberBytes (fun j => b + j) bs) (pre ++ phBytes k ++ post) =
      pre ++ phBytes (shifts.foldl (fun acc b => b + acc) k) ++ post := by
  apply segment_shift_list_of_commute
  intro b n
  exact tokRenumberBytes_phBytes (fun j => b + j) n pre post hpre hpost

/-- The accumulated fold of shifts is the zero-based accumulated sum plus the starting index. Used only to state the N-shift observer law against the observer's base-parameterized form. -/
theorem shift_fold_add (shifts : List Nat) (k : Nat) :
    shifts.foldl (fun acc b => b + acc) k = shifts.foldl (fun acc b => b + acc) 0 + k := by
  induction shifts generalizing k with
  | nil => simp
  | cons b shifts ih =>
      change shifts.foldl (fun acc b' => b' + acc) (b + k) =
        shifts.foldl (fun acc b' => b' + acc) b + k
      rw [ih (b + k), ih b]
      omega

/-- N-shift chained observer law: after folding the shift list over the Email label, the rendered index digits are exactly (emailDecBytes (fold shifts + k)).reverse with the same surrounding bytes as email_index_observer_law. Derived from tokRenumberBytes_shift_list and one use of the main observer law. -/
theorem email_index_observer_shift_list (shifts : List Nat) (k : Nat) (email pre post : List Nat)
    (he : ∀ b ∈ email, b < 128 ∧ (b = 64 ∨ (b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62)))
    (hp : ∀ b ∈ pre ++ post, b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62 ∧ b ≠ 64)
    (hpre : ∀ b ∈ pre, b ≠ 255) (hpost : ∀ b ∈ post, b ≠ 255) :
    renderEmail [("email".toList, OptVal.bytes email),
        ("text".toList, OptVal.bytes
          (shifts.foldl (fun bs b => tokRenumberBytes (fun j => b + j) bs)
            (pre ++ phBytes k ++ post)))] =
      litBytes "<span class=\"wiki-email\">" ++
        (email.reverse.map atPipe) ++ [35] ++
        (post.reverse.map atPipe) ++
        utf8Fffd ++ (emailDecBytes (shifts.foldl (fun acc b => b + acc) 0 + k)).reverse ++ utf8Fffd ++
        (pre.reverse.map atPipe) ++
        litBytes "</span>" := by
  rw [tokRenumberBytes_shift_list shifts k pre post hpre hpost]
  rw [shift_fold_add shifts k]
  have hobs := email_index_observer_law (shifts.foldl (fun acc b => b + acc) 0)
    k email pre post he hp hpre hpost
  rw [tokRenumberBytes_phBytes (fun j => shifts.foldl (fun acc b => b + acc) 0 + j)
    k pre post hpre hpost] at hobs
  simpa using hobs

#print axioms LeanFtml.tokRenumberBytes_comp
#print axioms LeanFtml.tokRenumberBytes_base_shift_comp
#print axioms LeanFtml.email_index_observer_base_shift_comp
#print axioms LeanFtml.segment_shift_list_of_commute
#print axioms LeanFtml.tokRenumberBytes_shift_list
#print axioms LeanFtml.shift_fold_add
#print axioms LeanFtml.email_index_observer_shift_list

end LeanFtml
