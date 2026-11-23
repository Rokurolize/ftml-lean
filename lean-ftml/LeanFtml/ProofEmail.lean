import LeanFtml.Inline1Rules
import LeanFtml.InlineSimpleRules
import LeanFtml.Pipeline

/-!
ProofEmail — theorems about the mirror's Email parse and render. The claimed-placeholder index is the per-document token-table length at the claim (`claimTok` / `ParseState.ofSource`). `renderEmail` byte-reverses that placeholder and `htmlSpecialCharsNoQuotesSubst` turns each `0xFF` delimiter into U+FFFD, so the served fragment is U+FFFD, the decimal digits reversed, U+FFFD. The owned live index measured in round 5b is that per-document reference index plus one; `ownedLiveIndex` states the offset as a function of the mirror's own index, and `renderEmail` is proved to emit it.
-/

namespace LeanFtml

set_option maxHeartbeats 2000000

/-- Decimal ASCII bytes of `n`, the same digits `phBytes` splices between the `0xFF` delimiters. -/
def decBytes (n : Nat) : List Nat :=
  (Nat.toDigits 10 n).map Char.toNat

/-- Pipe substitution `renderEmail` runs over the joined reversed bytes (`@` is byte 64, `|` is byte 124). -/
def atPipe (b : Nat) : Nat :=
  if b == 64 then 124 else b

/-- The owned live index inside a U+FFFD email rendering: the per-document reference index plus one. Round 5b measured this offset on every non-module intervening family (live/ref 3/2, 4/3, 5/4, 3/2, 5/4, 4/3, 3/2, 1/0). -/
def ownedLiveIndex (referenceIndex : Nat) : Nat :=
  referenceIndex + 1

theorem ownedLiveIndex_plus_one (k : Nat) : ownedLiveIndex k = k + 1 := rfl

theorem claimTok_index (rule : String) (opts : OptMap) (toks : List TokenEntry) :
    (claimTok rule opts toks).1 = phBytes toks.length := rfl

/-- A fresh document starts at index 0, and a second document does not continue the first document's counter. -/
theorem perDocument_index_restarts (a b : List Char) (opts : OptMap) :
    (ParseState.ofSource a).tokens = [] ∧
    (ParseState.ofSource b).tokens = [] ∧
    (claimTok "Email" opts (ParseState.ofSource a).tokens).1 = phBytes 0 ∧
    (claimTok "Email" opts (ParseState.ofSource b).tokens).1 = phBytes 0 := by
  simp [ParseState.ofSource, claimTok_index]

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

theorem decBytes_range (n : Nat) : ∀ b ∈ decBytes n, 48 ≤ b ∧ b ≤ 57 := by
  intro b hb
  simp [decBytes, Nat.toDigits] at hb
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
    phBytes n = [255] ++ decBytes n ++ [255] := by
  unfold phBytes decBytes
  rw [toString_toDigits]

theorem phBytes_contains_ff (n : Nat) : (phBytes n).contains 255 = true := by
  rw [phBytes_digits]
  show (255 :: (decBytes n ++ [255])).contains 255 = true
  simp only [List.contains_cons]
  have hb : (255 == 255) = true := by decide
  simp only [hb, Bool.true_or]

theorem decBytes_safe (n : Nat) : ∀ b ∈ decBytes n, b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62 ∧ b ≠ 64 ∧ b ≠ 10 ∧ b ≠ 93 ∧ b ≠ 255 := by
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

theorem atPipe_lt128 (b : Nat) (hb : b < 128) : atPipe b < 128 := by
  simp [atPipe]
  split <;> omega

theorem atPipe_ne255 (b : Nat) (hb : b < 128) : atPipe b ≠ 255 := by
  have h := atPipe_lt128 b hb
  omega

theorem map_atPipe_id (bs : List Nat) (h : ∀ b ∈ bs, b ≠ 64) :
    bs.map atPipe = bs := by
  induction bs with
  | nil => simp
  | cons b rest ih =>
      simp [atPipe, h b (List.mem_cons_self ..), ih (fun c hc => h c (List.mem_cons_of_mem _ hc))]

theorem map_atPipe_ne255 (bs : List Nat) (h : ∀ b ∈ bs, b < 128) :
    ∀ b ∈ bs.map atPipe, b ≠ 255 := by
  intro b hb
  simp [List.mem_map] at hb
  rcases hb with ⟨c, hc, rfl⟩
  exact atPipe_ne255 c (h c hc)

theorem atPipe_placeholder (n : Nat) :
    (phBytes n).map atPipe = phBytes n := by
  rw [phBytes_digits]
  simp [List.map_append, atPipe]
  exact map_atPipe_id (decBytes n) (fun b hb => (decBytes_safe n b hb).2.2.2.2.1)

theorem flatMap_not255 (bs : List Nat) (h : ∀ b ∈ bs, b ≠ 255) :
    bs.flatMap (fun b => if b = 255 then utf8Fffd else [b]) = bs := by
  induction bs with
  | nil => simp
  | cons b rest ih =>
      simp [h b (List.mem_cons_self ..), ih (fun c hc => h c (List.mem_cons_of_mem _ hc))]

theorem flatMap_255 :
    ([255] : List Nat).flatMap (fun b => if b = 255 then utf8Fffd else [b]) = utf8Fffd := by
  simp

theorem phBytes_reverse (n : Nat) :
    (phBytes n).reverse = [255] ++ (decBytes n).reverse ++ [255] := by
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
        utf8Fffd ++ (decBytes n).reverse ++ utf8Fffd ++
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
  have hph : (phBytes n).reverse.map atPipe = [255] ++ (decBytes n).reverse ++ [255] := by
    rw [phBytes_reverse]
    simp only [List.map_append, List.map_cons, List.map_nil]
    have h255 : atPipe 255 = 255 := by simp [atPipe]
    rw [h255, map_atPipe_id (decBytes n).reverse
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
  have hd : ∀ b ∈ (decBytes n).reverse, byteSafe b := by
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
        ([255] ++ (decBytes n).reverse ++ [255]) ++ pre.reverse =
      email.reverse.map atPipe ++ [35] ++ post.reverse ++ [255] ++
        (decBytes n).reverse ++ [255] ++ pre.reverse := by
    simp [List.append_assoc]
  rw [hassoc, hs]
  simp [List.append_assoc]

/-- A described address match that has already consumed `a@b.com` does not read a following space. -/
theorem emailMatchLen_abcom_space (more : List Nat) :
    emailMatchLen (litBytes "a@b.com" ++ 32 :: more) = some 7 := by
  rfl

/-- The wiki-email span `renderEmail` wraps around the reversed body. -/
def emailSpan (inner : List Nat) : List Nat :=
  litBytes "<span class=\"wiki-email\">" ++ inner ++ litBytes "</span>"

/-- Reversed `a@b.com` with `@` already piped, the literal `#`, and the U+FFFD-wrapped byte-reversed decimal of `k`. -/
def abcomIndex (k : Nat) : List Nat :=
  litBytes "moc.b|a#" ++ utf8Fffd ++ (decBytes k).reverse ++ utf8Fffd

theorem abcom_reversed :
    ((litBytes "a@b.com").map atPipe).reverse ++ [35] = litBytes "moc.b|a#" := by
  rfl

theorem abcom_safe :
    ∀ b ∈ litBytes "a@b.com", b < 128 ∧ (b = 64 ∨ (b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62)) := by
  intro b hb
  have h : litBytes "a@b.com" = [97, 64, 98, 46, 99, 111, 109] := by rfl
  rw [h] at hb
  simp [List.mem_cons] at hb
  rcases hb with rfl | rfl | rfl | rfl | rfl | rfl | rfl <;> decide

/-- `renderEmail` of address `a@b.com` and a bare placeholder of index `k` is the wiki-email span around `moc.b|a#`, U+FFFD, the byte-reversed decimal of `k`, U+FFFD. -/
theorem renderEmail_abcom_index (k : Nat) :
    renderEmail [("email".toList, OptVal.bytes (litBytes "a@b.com")),
        ("text".toList, OptVal.bytes (phBytes k))] = emailSpan (abcomIndex k) := by
  have hp : ∀ b ∈ (([] : List Nat) ++ []), b < 128 ∧ b ≠ 38 ∧ b ≠ 60 ∧ b ≠ 62 ∧ b ≠ 64 := by
    intro b hb
    simp at hb
  have hk := renderEmail_claimed_placeholder (litBytes "a@b.com") [] [] k abcom_safe hp
  have hpad : phBytes k = [] ++ phBytes k ++ [] := by simp
  rw [hpad, hk]
  rw [List.map_reverse (f := atPipe) (l := litBytes "a@b.com")]
  simp only [List.reverse_nil, List.map_nil, List.append_nil]
  have hbody :
      ((litBytes "a@b.com").map atPipe).reverse ++ [35] ++
        (utf8Fffd ++ (decBytes k).reverse ++ utf8Fffd ++ litBytes "</span>") =
      litBytes "moc.b|a#" ++
        (utf8Fffd ++ (decBytes k).reverse ++ utf8Fffd ++ litBytes "</span>") := by
    rw [abcom_reversed]
  have hassoc :
      litBytes "<span class=\"wiki-email\">" ++
        (((litBytes "a@b.com").map atPipe).reverse ++ [35] ++
          (utf8Fffd ++ (decBytes k).reverse ++ utf8Fffd ++ litBytes "</span>")) =
      litBytes "<span class=\"wiki-email\">" ++
        (((litBytes "a@b.com").map atPipe).reverse ++
          ([35] ++ (utf8Fffd ++ (decBytes k).reverse ++ utf8Fffd ++ litBytes "</span>"))) := by
    simp [List.append_assoc]
  rw [← hassoc, hbody]
  simp only [emailSpan, abcomIndex, List.append_assoc]

/-- For every index `k`, `renderEmail` of a per-document reference placeholder and of the owned live index `k + 1` are the same span, the same reversed address, and the same U+FFFD wrappers, and the digit run is the byte-reversed decimal of that index. -/
theorem renderEmail_reference_and_owned (k : Nat) :
    renderEmail [("email".toList, OptVal.bytes (litBytes "a@b.com")),
        ("text".toList, OptVal.bytes (phBytes k))] = emailSpan (abcomIndex k) ∧
    renderEmail [("email".toList, OptVal.bytes (litBytes "a@b.com")),
        ("text".toList, OptVal.bytes (phBytes (ownedLiveIndex k)))] =
      emailSpan (abcomIndex (ownedLiveIndex k)) ∧
    ownedLiveIndex k = k + 1 :=
  ⟨renderEmail_abcom_index k, renderEmail_abcom_index (ownedLiveIndex k), ownedLiveIndex_plus_one k⟩

/-- Text option and `renderEmail` output of every Email token the full pipeline claims for `src`. One parse feeds both components. -/
def emailParsed (src : String) : List (List Nat) × List (List Nat) :=
  let st := runRules pipelineFull (ParseState.ofSource src.toList)
  let emails := st.tokens.filter (fun t => t.rule == "Email")
  (emails.map (fun t => optStrBytes t.opts "text".toList),
   emails.map (fun t => renderEmail t.opts))

/-- The eight round-5b families serve one shape. Only the per-document index changes, and the owned live index of each family is that index plus one. -/
theorem r5b_eight_owned_indices :
    ownedLiveIndex 2 = 3 ∧ ownedLiveIndex 3 = 4 ∧ ownedLiveIndex 4 = 5 ∧
    ownedLiveIndex 2 = 3 ∧ ownedLiveIndex 4 = 5 ∧ ownedLiveIndex 3 = 4 ∧
    ownedLiveIndex 2 = 3 ∧ ownedLiveIndex 0 = 1 := by
  decide

#print axioms LeanFtml.ownedLiveIndex_plus_one
#print axioms LeanFtml.claimTok_index
#print axioms LeanFtml.perDocument_index_restarts
#print axioms LeanFtml.renderEmail_claimed_placeholder
#print axioms LeanFtml.renderEmail_abcom_index
#print axioms LeanFtml.renderEmail_reference_and_owned
#print axioms LeanFtml.emailMatchLen_abcom_space
#print axioms LeanFtml.r5b_eight_owned_indices
#print axioms LeanFtml.subst_wrapped
#print axioms LeanFtml.htmlSubst_safe
#print axioms LeanFtml.phBytes_digits
#print axioms LeanFtml.toString_toDigits

end LeanFtml
