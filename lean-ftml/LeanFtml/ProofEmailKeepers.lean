import LeanFtml.Inline1Rules
import LeanFtml.InlineSimpleRules
import LeanFtml.Pipeline

/-!
ProofEmail — the Email family proof lane under ADVISOR-PROOF-POLICY.md §4.3 and §5.2. Kept from the inherited Cursor draft: the three named keepers `decBytes_safe`, `htmlSubst_safe`, `renderEmail_claimed_placeholder` and the helper lemmas they need. Dropped: the round-5b mirror-internal diagnostics (`ownedLiveIndex`, `claimTok_index`, `perDocument_index_restarts`, `emailMatchLen_abcom_space`, `abcomIndex`, `renderEmail_abcom_index`, `renderEmail_reference_and_owned`, `emailParsed`, `r5b_eight_owned_indices`) — mirror-internal index diagnostics and ground pins that §4.6 gate G4 excludes from proof completion. New: `email_index_observer_law (base k)`, the exact base-parameterized observer law for Email's claimed placeholders under token renumbering, lives in `ProofEmailObserver.lean`. The byte-level `tokRenumberBytes` lives in `ProofEmailRenumber.lean` and is the Email-facing projection of the policy's TokEquiv reindexing of `\xFF<k>\xFF` bytes in `OptVal.bytes`; the owned +1 counter class inside U+FFFD is accounted for formally as the `base = 1` instance, not routed around.
-/

namespace LeanFtml

set_option maxHeartbeats 2000000

/-! ## Decimal placeholder bytes and HTML substitution (inherited keepers) -/

/-- Decimal ASCII bytes of `n`, the same digits `phBytes` splices between the `0xFF` delimiters. -/
def emailDecBytes (n : Nat) : List Nat :=
  (Nat.toDigits 10 n).map Char.toNat

/-- Pipe substitution `renderEmail` runs over the joined reversed bytes (`@` is byte 64, `|` is byte 124). -/
def atPipe (b : Nat) : Nat :=
  if b == 64 then 124 else b

theorem digitChar_toNat (d : Nat) (hd : d < 10) :
    (Nat.digitChar d).toNat = 48 + d := by
  have : d = 0 ∨ d = 1 ∨ d = 2 ∨ d = 3 ∨ d = 4 ∨ d = 5 ∨ d = 6 ∨ d = 7 ∨ d = 8 ∨ d = 9 := by omega
  rcases this with rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl | rfl <;> rfl

theorem toDigitsCore_range {fuel n : Nat} {acc : List Char}
    (hacc : ∀ c ∈ acc, 48 ≤ c.toNat ∧ c.toNat ≤ 57)
    (hf : n < fuel) :
    ∀ c ∈ Nat.toDigitsCore 10 fuel n acc, 48 ≤ c.toNat ∧ c.toNat ≤ 57 := by
  induction fuel generalizing n acc with
  | zero => omega
  | succ fuel ih =>
      unfold Nat.toDigitsCore
      have hmod : n % 10 < 10 := Nat.mod_lt _ (by decide)
      have hd : (Nat.digitChar (n % 10)).toNat = 48 + n % 10 := digitChar_toNat _ hmod
      by_cases h0 : n / 10 = 0
      · simp only [h0, ↓reduceIte]
        intro c hc
        simp only [List.mem_cons] at hc
        rcases hc with rfl | hm
        · rw [hd]; omega
        · exact hacc c hm
      · simp only [h0, ↓reduceIte]
        refine ih ?_ ?_
        · intro c hc
          simp only [List.mem_cons] at hc
          rcases hc with rfl | hm
          · rw [hd]; omega
          · exact hacc c hm
        · omega

theorem decBytes_range (n : Nat) : ∀ b ∈ emailDecBytes n, 48 ≤ b ∧ b ≤ 57 := by
  intro b hb
  simp [emailDecBytes, Nat.toDigits] at hb
  rcases hb with ⟨c, hc, rfl⟩
  have h := toDigitsCore_range (fuel := n + 1) (n := n) (acc := []) (hacc := by simp) (hf := Nat.lt_succ_self n) c hc
  exact h

theorem toString_toDigits (n : Nat) :
    (toString n).toList = Nat.toDigits 10 n := by
  have h1 : toString n = Nat.repr n := rfl
  have h2 : Nat.repr n = String.ofList (Nat.toDigits 10 n) := rfl
  rw [h1, h2]
  exact String.toList_ofList

theorem phBytes_digits (n : Nat) :
    phBytes n = [255] ++ emailDecBytes n ++ [255] := by
  unfold phBytes emailDecBytes
  rw [toString_toDigits]

theorem decBytes_safe (n : Nat) : ∀ b ∈ emailDecBytes n, b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62 ∧ b ≠ 64 ∧ b ≠ 10 ∧ b ≠ 93 ∧ b ≠ 255 := by
  intro b hb
  have hr := decBytes_range n b hb
  omega

theorem escHtmlNoQuotesByte_id (b : Nat) (h38 : b ≠ 38) (h60 : b ≠ 60) (h62 : b ≠ 62) :
    escHtmlNoQuotesByte b = [b] := by
  simp [escHtmlNoQuotesByte, h38, h60, h62]

private theorem substGo_ascii (b : Nat) (rest : List Nat) (fuel : Nat) (hb : b < 128) :
    htmlSpecialCharsNoQuotesSubst.go (b :: rest) (fuel + 1) =
      escHtmlNoQuotesByte b ++ htmlSpecialCharsNoQuotesSubst.go rest fuel := by
  conv => lhs; unfold htmlSpecialCharsNoQuotesSubst.go
  simp only [hb, ↓reduceIte]

private theorem substGo_ff (rest : List Nat) (fuel : Nat) :
    htmlSpecialCharsNoQuotesSubst.go (255 :: rest) (fuel + 1) =
      utf8Fffd ++ htmlSpecialCharsNoQuotesSubst.go rest fuel := by
  conv => lhs; unfold htmlSpecialCharsNoQuotesSubst.go
  simp only [(show ¬ 255 < 128 by decide),
    (show (decide (194 ≤ 255) && decide (255 < 224)) = false by decide),
    (show (decide (224 ≤ 255) && decide (255 < 240)) = false by decide),
    (show (decide (240 ≤ 255) && decide (255 ≤ 244)) = false by decide)]
  simp only [(show (false = true) = False by decide), ↓reduceIte]

private theorem substGo_safe (bs : List Nat)
    (h : ∀ b ∈ bs, (b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62) ∨ b = 255) :
    htmlSpecialCharsNoQuotesSubst.go bs bs.length =
      bs.flatMap (fun b => if b = 255 then utf8Fffd else [b]) := by
  induction bs with
  | nil => simp [htmlSpecialCharsNoQuotesSubst.go]
  | cons b rest ih =>
      have hb := h b (by simp)
      have hlen : (b :: rest).length = rest.length + 1 := rfl
      rw [hlen]
      cases hb with
      | inl hs =>
          rw [substGo_ascii b rest rest.length hs.1]
          rw [escHtmlNoQuotesByte_id b hs.2.1 hs.2.2.1 hs.2.2.2]
          have ih' := ih (fun c hc => h c (by simp [hc]))
          have hne : b ≠ 255 := by omega
          simp [ih', hne]
      | inr hff =>
          subst hff
          rw [substGo_ff rest rest.length]
          have ih' := ih (fun c hc => h c (by simp [hc]))
          simp [ih']

theorem htmlSubst_safe (bs : List Nat)
    (h : ∀ b ∈ bs, (b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62) ∨ b = 255) :
    htmlSpecialCharsNoQuotesSubst bs =
      bs.flatMap (fun b => if b = 255 then utf8Fffd else [b]) := by
  simpa [htmlSpecialCharsNoQuotesSubst] using substGo_safe bs h

theorem map_atPipe_id (bs : List Nat) (h : ∀ b ∈ bs, b ≠ 64) :
    bs.map atPipe = bs := by
  induction bs with
  | nil => simp
  | cons b rest ih =>
      simp [atPipe, h b (List.mem_cons_self ..), ih (fun c hc => h c (List.mem_cons_of_mem _ hc))]

theorem flatMap_not255 (bs : List Nat) (h : ∀ b ∈ bs, b ≠ 255) :
    bs.flatMap (fun b => if b = 255 then utf8Fffd else [b]) = bs := by
  induction bs with
  | nil => simp
  | cons b rest ih =>
      simp [h b (List.mem_cons_self ..), ih (fun c hc => h c (List.mem_cons_of_mem _ hc))]

theorem phBytes_reverse (n : Nat) :
    (phBytes n).reverse = [255] ++ (emailDecBytes n).reverse ++ [255] := by
  rw [phBytes_digits]
  simp [List.reverse_append]

/-- A byte `htmlSpecialCharsNoQuotesSubst` copies unchanged: ASCII, and not `&`, `<` or `>`. -/
def byteSafe (b : Nat) : Prop :=
  b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62

theorem atPipe_byteSafe (b : Nat) (hb : b < 128 ∧ (b = 64 ∨ (b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62))) :
    byteSafe (atPipe b) := by
  rcases hb with ⟨hlt, h⟩
  by_cases h64 : b = 64
  · subst h64
    simp [byteSafe, atPipe]
  · have hne : b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62 := by
      rcases h with h | h
      · exact absurd h h64
      · exact h
    have hid : atPipe b = b := by simp [atPipe, h64]
    rw [hid]
    exact ⟨hlt, hne⟩

theorem map_byteSafe (bs : List Nat) (h : ∀ b ∈ bs, byteSafe (atPipe b)) :
    ∀ b ∈ bs.map atPipe, byteSafe b := by
  intro b hb
  simp [List.mem_map] at hb
  rcases hb with ⟨c, hc, rfl⟩
  exact h c hc

theorem subst_wrapped (left digits right : List Nat)
    (hl : ∀ b ∈ left, byteSafe b) (hd : ∀ b ∈ digits, byteSafe b) (hr : ∀ b ∈ right, byteSafe b) :
    htmlSpecialCharsNoQuotesSubst (left ++ [255] ++ digits ++ [255] ++ right) =
      left ++ utf8Fffd ++ digits ++ utf8Fffd ++ right := by
  have hmem : ∀ b ∈ left ++ [255] ++ digits ++ [255] ++ right, byteSafe b ∨ b = 255 := by
    intro b hb
    simp only [List.mem_append, List.mem_singleton] at hb
    rcases hb with (((hb | rfl) | hb) | rfl) | hb
    · exact Or.inl (hl b hb)
    · exact Or.inr rfl
    · exact Or.inl (hd b hb)
    · exact Or.inr rfl
    · exact Or.inl (hr b hb)
  rw [htmlSubst_safe _ hmem]
  have hl255 : ∀ b ∈ left, b ≠ 255 := fun b hb => by have := (hl b hb).1; omega
  have hd255 : ∀ b ∈ digits, b ≠ 255 := fun b hb => by have := (hd b hb).1; omega
  have hr255 : ∀ b ∈ right, b ≠ 255 := fun b hb => by have := (hr b hb).1; omega
  simp [List.flatMap_append, flatMap_not255 _ hl255, flatMap_not255 _ hd255, flatMap_not255 _ hr255]

/-- `renderEmail` on an address and a label that contains one claimed placeholder emits the reversed address, the literal `#`, and the placeholder's decimal digits byte-reversed between two U+FFFD sequences. The surrounding label bytes are reversed around that fragment and are not renumbered. -/
theorem renderEmail_claimed_placeholder
    (email pre post : List Nat) (n : Nat)
    (he : ∀ b ∈ email, b < 128 ∧ (b = 64 ∨ (b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62)))
    (hp : ∀ b ∈ pre ++ post, b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62 ∧ b ≠ 64) :
    renderEmail [("email".toList, OptVal.bytes email),
        ("text".toList, OptVal.bytes (pre ++ phBytes n ++ post))] =
      litBytes "<span class=\"wiki-email\">" ++
        (email.reverse.map atPipe) ++ [35] ++
        (post.reverse.map atPipe) ++
        utf8Fffd ++ (emailDecBytes n).reverse ++ utf8Fffd ++
        (pre.reverse.map atPipe) ++
        litBytes "</span>" := by
  let opts : OptMap := [("email".toList, OptVal.bytes email),
    ("text".toList, OptVal.bytes (pre ++ phBytes n ++ post))]
  have hemail : optStrBytes opts "email".toList = email := by
    simp [opts, optStrBytes, omGet, renderOptValBytes]
  have htextb : optStrBytes opts "text".toList = pre ++ phBytes n ++ post := by
    simp [opts, optStrBytes, omGet, renderOptValBytes]
  simp only [renderEmail]
  rw [hemail, htextb]
  rw [show (fun b : Nat => if b == 64 then 124 else b) = atPipe from rfl]
  have hrev : (pre ++ phBytes n ++ post).reverse =
      post.reverse ++ (phBytes n).reverse ++ pre.reverse := by
    simp [List.reverse_append]
  rw [hrev]
  have hmap : ((email.reverse ++ [35] ++ (post.reverse ++ (phBytes n).reverse ++ pre.reverse)).map atPipe) =
      email.reverse.map atPipe ++ [atPipe 35] ++ post.reverse.map atPipe ++
        (phBytes n).reverse.map atPipe ++ pre.reverse.map atPipe := by
    simp [List.map_append]
  have h35 : atPipe 35 = 35 := by simp [atPipe]
  have hph : (phBytes n).reverse.map atPipe = [255] ++ (emailDecBytes n).reverse ++ [255] := by
    rw [phBytes_reverse]
    simp only [List.map_append, List.map_cons, List.map_nil]
    have h255 : atPipe 255 = 255 := by simp [atPipe]
    rw [h255, map_atPipe_id (emailDecBytes n).reverse
      (fun b hb => (decBytes_safe n b (List.mem_reverse.mp hb)).2.2.2.2.1)]
  rw [hmap, h35, hph]
  have hpostm : post.reverse.map atPipe = post.reverse := map_atPipe_id _ (fun b hb => by
    have hp' := hp b (by simp [List.mem_reverse.mp hb])
    exact hp'.2.2.2.2)
  have hprem : pre.reverse.map atPipe = pre.reverse := map_atPipe_id _ (fun b hb => by
    have hp' := hp b (by simp [List.mem_reverse.mp hb])
    exact hp'.2.2.2.2)
  rw [hpostm, hprem]
  have hl : ∀ b ∈ email.reverse.map atPipe ++ [35] ++ post.reverse, byteSafe b := by
    intro b hb
    have hsplit : b ∈ email.reverse.map atPipe ∨ b = 35 ∨ b ∈ post.reverse := by
      simpa [List.mem_append, List.mem_singleton, List.append_assoc] using hb
    rcases hsplit with hb | rfl | hb
    · exact map_byteSafe email.reverse
        (fun c hc => atPipe_byteSafe c (he c (List.mem_reverse.mp hc))) b hb
    · simp [byteSafe]
    · have hp' := hp b (List.mem_append.mpr (Or.inr (List.mem_reverse.mp hb)))
      exact ⟨hp'.1, hp'.2.1, hp'.2.2.1, hp'.2.2.2.1⟩
  have hd : ∀ b ∈ (emailDecBytes n).reverse, byteSafe b := by
    intro b hb
    have hr := decBytes_safe n b (List.mem_reverse.mp hb)
    exact ⟨hr.1, hr.2.1, hr.2.2.1, hr.2.2.2.1⟩
  have hr : ∀ b ∈ pre.reverse, byteSafe b := by
    intro b hb
    have hp' := hp b (by simp [List.mem_reverse.mp hb])
    exact ⟨hp'.1, hp'.2.1, hp'.2.2.1, hp'.2.2.2.1⟩
  have hs := subst_wrapped _ _ _ hl hd hr
  have hassoc :
      email.reverse.map atPipe ++ [35] ++ post.reverse ++
        ([255] ++ (emailDecBytes n).reverse ++ [255]) ++ pre.reverse =
      email.reverse.map atPipe ++ [35] ++ post.reverse ++ [255] ++
        (emailDecBytes n).reverse ++ [255] ++ pre.reverse := by
    simp [List.append_assoc]
  rw [hassoc, hs]
  simp [List.append_assoc]


end LeanFtml
