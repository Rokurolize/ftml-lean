import LeanFtml.ProofEmailKeepers
import LeanFtml.ProofEmailDigits

namespace LeanFtml

set_option maxHeartbeats 2000000

/-- Fueled scanner implementing token-index reindexing on embedded `\xFF<k>\xFF` bytes. The fuel is always at least the input length plus one, so it is sufficient by construction. -/
def tokGo (σ : Nat → Nat) : List Nat → Nat → List Nat
  | [], _ => []
  | _, 0 => []
  | 255 :: rest, fuel + 1 =>
      let ds := rest.takeWhile emailIsDigitByte
      match rest.drop ds.length with
      | 255 :: tail => [255] ++ emailDecBytes (σ (digitsVal ds)) ++ [255] ++ tokGo σ tail fuel
      | _ => 255 :: tokGo σ rest fuel
  | b :: rest, fuel + 1 => b :: tokGo σ rest fuel

/-- Reindex every well-formed placeholder byte run by `σ`, leaving all other bytes verbatim. This is the Email label projection of F1's TokEquiv reindexing of `OptVal.bytes`. -/
def tokRenumberBytes (σ : Nat → Nat) (bs : List Nat) : List Nat :=
  tokGo σ bs (bs.length + 1)

theorem tokGo_id_of_no_ff (σ : Nat → Nat) (bs : List Nat) (fuel : Nat)
    (h : ∀ b ∈ bs, b ≠ 255) (hf : bs.length ≤ fuel) : tokGo σ bs fuel = bs := by
  induction bs generalizing fuel with
  | nil => simp [tokGo]
  | cons b rest ih =>
      have hb : b ≠ 255 := h b (by simp)
      have hrest : ∀ c ∈ rest, c ≠ 255 := fun c hc => h c (by simp [hc])
      simp [List.length_cons] at hf
      cases fuel with
      | zero => omega
      | succ fuel =>
          have hf' : rest.length ≤ fuel := by omega
          have ih' := ih fuel hrest hf'
          simp [tokGo, ih']

theorem tokGo_ph (σ : Nat → Nat) (k : Nat) :
    ∀ (pre post : List Nat) (fuel : Nat),
      (∀ b ∈ pre, b ≠ 255) →
      (∀ b ∈ post, b ≠ 255) →
      (pre ++ phBytes k ++ post).length ≤ fuel →
      tokGo σ (pre ++ phBytes k ++ post) fuel = pre ++ phBytes (σ k) ++ post := by
  intro pre
  induction pre with
  | nil =>
      intro post fuel hpre hpost hfuel
      simp only [List.nil_append] at hfuel ⊢
      have hrest : phBytes k ++ post = 255 :: (emailDecBytes k ++ (255 :: post)) := by
        rw [phBytes_digits]
        simp [List.append_assoc]
      rw [hrest] at hfuel ⊢
      rw [phBytes_digits]
      simp [List.length_cons, List.length_append] at hfuel
      cases fuel with
      | zero => omega
      | succ fuel =>
          have hds : (emailDecBytes k ++ (255 :: post)).takeWhile emailIsDigitByte = emailDecBytes k :=
            takeWhile_decBytes_255 k post
          have hdrop : (emailDecBytes k ++ (255 :: post)).drop (emailDecBytes k).length = 255 :: post :=
            drop_prefix_append (emailDecBytes k) (255 :: post)
          have hdigits : digitsVal (emailDecBytes k) = k := digitsVal_decBytes k
          have hfuel' : post.length ≤ fuel := by omega
          have hpostgo : tokGo σ post fuel = post := tokGo_id_of_no_ff σ post fuel hpost hfuel'
          simp [tokGo, hds, hdrop, hdigits, hpostgo, List.append_assoc]
  | cons b pre' ih =>
      intro post fuel hpre hpost hfuel
      have hb : b ≠ 255 := hpre b (by simp)
      have hpre' : ∀ c ∈ pre', c ≠ 255 := fun c hc => hpre c (by simp [hc])
      simp [List.length_cons] at hfuel
      cases fuel with
      | zero => omega
      | succ fuel =>
          have hfuel' : (pre' ++ phBytes k ++ post).length ≤ fuel := by
            simp [List.length_append]
            omega
          have ih' := ih post fuel hpre' hpost hfuel'
          simpa [tokGo, hb, List.append_assoc] using
            congrArg (fun xs : List Nat => b :: xs) ih'

theorem tokRenumberBytes_phBytes (σ : Nat → Nat) (k : Nat) (pre post : List Nat)
    (hpre : ∀ b ∈ pre, b ≠ 255) (hpost : ∀ b ∈ post, b ≠ 255) :
    tokRenumberBytes σ (pre ++ phBytes k ++ post) = pre ++ phBytes (σ k) ++ post := by
  unfold tokRenumberBytes
  exact tokGo_ph σ k pre post (pre ++ phBytes k ++ post).length.succ hpre hpost (by omega)

/-- The Email-facing alpha-equivalence relation: same address bytes, and the label of the second option map is the first label with its claimed placeholder reindexed by `σ`. -/
def EmailTokEquiv (σ : Nat → Nat) (opts₁ opts₂ : OptMap) : Prop :=
  ∃ email t,
    optStrBytes opts₁ "email".toList = email ∧
    optStrBytes opts₂ "email".toList = email ∧
    optStrBytes opts₁ "text".toList = t ∧
    optStrBytes opts₂ "text".toList = tokRenumberBytes σ t

theorem email_tok_equiv_base_shift (base k : Nat) (email pre post : List Nat)
    (hpre : ∀ b ∈ pre, b ≠ 255) (hpost : ∀ b ∈ post, b ≠ 255) :
    EmailTokEquiv (fun j => base + j)
      [("email".toList, OptVal.bytes email), ("text".toList, OptVal.bytes (pre ++ phBytes k ++ post))]
      [("email".toList, OptVal.bytes email), ("text".toList, OptVal.bytes (pre ++ phBytes (base + k) ++ post))] := by
  refine ⟨email, pre ++ phBytes k ++ post, ?_, ?_, ?_, ?_⟩
  · simp [optStrBytes, omGet, renderOptValBytes]
  · simp [optStrBytes, omGet, renderOptValBytes]
  · simp [optStrBytes, omGet, renderOptValBytes]
  · simp [optStrBytes, omGet, renderOptValBytes]
    rw [← List.append_assoc pre (phBytes (base + k)) post]
    rw [← List.append_assoc pre (phBytes k) post]
    rw [tokRenumberBytes_phBytes (fun j => base + j) k pre post hpre hpost]

#print axioms LeanFtml.tokGo_id_of_no_ff
#print axioms LeanFtml.tokGo_ph
#print axioms LeanFtml.tokRenumberBytes_phBytes
#print axioms LeanFtml.email_tok_equiv_base_shift

end LeanFtml
