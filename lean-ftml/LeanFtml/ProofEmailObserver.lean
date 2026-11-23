import LeanFtml.ProofEmailKeepers
import LeanFtml.ProofEmailDigits
import LeanFtml.ProofEmailRenumber

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## The showcase observer law (Hard Core #2) -/

/-- `email_index_observer_law (base k)`: under the cumulative-base token renumbering `σ(j) = base + j`, an Email claim for token `k` renders exactly the original span, reversed address, literal `#`, and reversed literal label bytes around `U+FFFD ++ (decBytes (base + k)).reverse ++ U+FFFD`. The claimed index is observed, not hidden: the digit run is the exact decimal of the renumbered index. For `base = 0` this is the canonical per-document reference; for `base = 1` it is the owned live +1 counter class measured in rounds 5b–5e. -/
theorem email_index_observer_law (base k : Nat) (email pre post : List Nat)
    (he : ∀ b ∈ email, b < 128 ∧ (b = 64 ∨ (b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62)))
    (hp : ∀ b ∈ pre ++ post, b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62 ∧ b ≠ 64)
    (hpre : ∀ b ∈ pre, b ≠ 255) (hpost : ∀ b ∈ post, b ≠ 255) :
    renderEmail [("email".toList, OptVal.bytes email),
        ("text".toList, OptVal.bytes (tokRenumberBytes (fun j => base + j) (pre ++ phBytes k ++ post)))] =
      litBytes "<span class=\"wiki-email\">" ++
        (email.reverse.map atPipe) ++ [35] ++
        (post.reverse.map atPipe) ++
        utf8Fffd ++ (decBytes (base + k)).reverse ++ utf8Fffd ++
        (pre.reverse.map atPipe) ++
        litBytes "</span>" := by
  rw [tokRenumberBytes_phBytes (fun j => base + j) k pre post hpre hpost]
  exact renderEmail_claimed_placeholder email pre post (base + k) he hp

/-- The +1 counter class inside U+FFFD is the `base = 1` instance of the observer law. Both the byte-level reindexing and the emitted digit run are exactly the index `k + 1`; no separate live-index function or masking is needed. -/
theorem email_index_observer_plus_one (k : Nat) (email pre post : List Nat)
    (he : ∀ b ∈ email, b < 128 ∧ (b = 64 ∨ (b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62)))
    (hp : ∀ b ∈ pre ++ post, b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62 ∧ b ≠ 64)
    (hpre : ∀ b ∈ pre, b ≠ 255) (hpost : ∀ b ∈ post, b ≠ 255) :
    tokRenumberBytes (fun j => j + 1) (pre ++ phBytes k ++ post) =
        pre ++ phBytes (k + 1) ++ post ∧
    renderEmail [("email".toList, OptVal.bytes email),
        ("text".toList, OptVal.bytes (tokRenumberBytes (fun j => j + 1) (pre ++ phBytes k ++ post)))] =
      litBytes "<span class=\"wiki-email\">" ++
        (email.reverse.map atPipe) ++ [35] ++
        (post.reverse.map atPipe) ++
        utf8Fffd ++ (decBytes (k + 1)).reverse ++ utf8Fffd ++
        (pre.reverse.map atPipe) ++
        litBytes "</span>" := by
  have hshift : (fun j : Nat => j + 1) = (fun j : Nat => 1 + j) := by
    funext j
    omega
  constructor
  · rw [hshift, tokRenumberBytes_phBytes (fun j => 1 + j) k pre post hpre hpost]
    simp [Nat.add_comm]
  · rw [hshift]
    simpa [Nat.add_comm] using email_index_observer_law 1 k email pre post he hp hpre hpost

/-- The renumbering is genuinely order-preserving and injective on claimed indices, so the observer law is an alpha-equivalence rather than a collision-prone hash. -/
theorem email_renumber_index_injective (base k₁ k₂ : Nat) (h : base + k₁ = base + k₂) : k₁ = k₂ := by
  omega

#print axioms LeanFtml.decBytes_safe
#print axioms LeanFtml.htmlSubst_safe
#print axioms LeanFtml.renderEmail_claimed_placeholder
#print axioms LeanFtml.digitsVal_decBytes
#print axioms LeanFtml.tokRenumberBytes_phBytes
#print axioms LeanFtml.email_tok_equiv_base_shift
#print axioms LeanFtml.email_index_observer_law
#print axioms LeanFtml.email_index_observer_plus_one
#print axioms LeanFtml.email_renumber_index_injective

end LeanFtml
