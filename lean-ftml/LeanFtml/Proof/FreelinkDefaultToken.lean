import LeanFtml.LinkRules

namespace LeanFtml

-- Self-contained: the proof-module oleans are not present in this build tree,
-- so every helper is re-proved here from LinkRules alone.
-- Global defs keep raw/full opaque through the final simp, so guard facts
-- stated against them cannot drift into dependent matches over local lets.
def freelinkDefaultTokenRaw (lead suf : List Nat) : List Nat :=
  lead ++ (litBytes "_default:" ++ suf)

def freelinkDefaultTokenFull (lead suf : List Nat) : List Nat :=
  litBytes "[[[" ++ (freelinkDefaultTokenRaw lead suf ++ litBytes "]]]")

-- The mirror has no global encodeCps; on ASCII lead code points the UTF-8
-- encoding is one byte, which is what this local encoder produces there.
def freelinkDefaultTokenEncodeCps (cps : List Nat) : List Nat :=
  cps.flatMap (fun cp => if cp < 0x80 then [cp] else utf8Bytes (Char.ofNat cp))

def freelinkDefaultTokenIsTrimLead (b : Nat) : Bool :=
  b == 0x09 || b == 0x0A || b == 0x0B || b == 0x0D || b == 0x20

theorem freelinkDefaultToken_and_true {a b : Bool} (h : a && b = true) : a = true ∧ b = true := by
  simpa [Bool.and_eq_true] using h

theorem freelinkDefaultToken_and_mpr {a b : Bool} (h : a = true ∧ b = true) : (a && b) = true := by
  cases a <;> cases b <;> simp_all

theorem freelinkDefaultToken_all_cons {p : Nat -> Bool} {b : Nat} {bs : List Nat}
    (h : (b :: bs).all p = true) : p b = true ∧ bs.all p = true := by
  have h' : (p b && bs.all p) = true := by simpa only [List.all_cons] using h
  exact freelinkDefaultToken_and_true h'

theorem freelinkDefaultToken_all_cons_gen {α : Type} {p : α -> Bool} {b : α} {bs : List α}
    (h : (b :: bs).all p = true) : p b = true ∧ bs.all p = true := by
  have h' : (p b && bs.all p) = true := by simpa only [List.all_cons] using h
  simpa [Bool.and_eq_true] using h'

theorem freelinkDefaultToken_trimLead_cases {b : Nat}
    (h : freelinkDefaultTokenIsTrimLead b = true) :
    b = 9 ∨ b = 10 ∨ b = 11 ∨ b = 13 ∨ b = 32 := by
  have h' : (((b = 9 ∨ b = 10) ∨ b = 11) ∨ b = 13) ∨ b = 32 := by
    simpa only [freelinkDefaultTokenIsTrimLead, beq_iff_eq, Bool.or_eq_true] using h
  rcases h' with (((h9 | h10) | h11) | h13) | h32
  · exact Or.inl h9
  · exact Or.inr (Or.inl h10)
  · exact Or.inr (Or.inr (Or.inl h11))
  · exact Or.inr (Or.inr (Or.inr (Or.inl h13)))
  · exact Or.inr (Or.inr (Or.inr (Or.inr h32)))

theorem freelinkDefaultToken_lead_lt128 {b : Nat}
    (h : freelinkDefaultTokenIsTrimLead b = true) : b < 0x80 := by
  rcases freelinkDefaultToken_trimLead_cases h with rfl | rfl | rfl | rfl | rfl <;> omega

theorem freelinkDefaultToken_lead_isTrim {b : Nat}
    (h : freelinkDefaultTokenIsTrimLead b = true) : isTrimByte b = true := by
  rcases freelinkDefaultToken_trimLead_cases h with rfl | rfl | rfl | rfl | rfl <;> decide

theorem freelinkDefaultToken_lead_isLead {b : Nat}
    (h : freelinkDefaultTokenIsTrimLead b = true) : isDefaultLeadCp b = true := by
  rcases freelinkDefaultToken_trimLead_cases h with rfl | rfl | rfl | rfl | rfl <;> decide

theorem freelinkDefaultToken_lead_ne35 {b : Nat} (h : freelinkDefaultTokenIsTrimLead b = true) :
    b ≠ 35 := by
  rcases freelinkDefaultToken_trimLead_cases h with rfl | rfl | rfl | rfl | rfl <;> omega

theorem freelinkDefaultToken_lead_ne124 {b : Nat} (h : freelinkDefaultTokenIsTrimLead b = true) :
    b ≠ 124 := by
  rcases freelinkDefaultToken_trimLead_cases h with rfl | rfl | rfl | rfl | rfl <;> omega

theorem freelinkDefaultToken_lead_ne255 {b : Nat} (h : freelinkDefaultTokenIsTrimLead b = true) :
    b ≠ 255 := by
  rcases freelinkDefaultToken_trimLead_cases h with rfl | rfl | rfl | rfl | rfl <;> omega

theorem freelinkDefaultToken_encode_all (p : Nat -> Bool) {cps : List Nat}
    (hp : ∀ cp, freelinkDefaultTokenIsTrimLead cp = true -> p cp = true)
    (hcps : cps.all freelinkDefaultTokenIsTrimLead = true) :
    (freelinkDefaultTokenEncodeCps cps).all p = true := by
  induction cps with
  | nil => rfl
  | cons cp cps ih =>
      have hcp := freelinkDefaultToken_all_cons hcps
      have hlt : cp < 0x80 := freelinkDefaultToken_lead_lt128 hcp.1
      have hpcp : p cp = true := hp cp hcp.1
      have hiht : (freelinkDefaultTokenEncodeCps cps).all p = true := ih hcp.2
      change ((if cp < 0x80 then [cp] else utf8Bytes (Char.ofNat cp)) ++
        freelinkDefaultTokenEncodeCps cps).all p = true
      rw [if_pos hlt]
      exact freelinkDefaultToken_and_mpr ⟨hpcp, hiht⟩

theorem freelinkDefaultToken_lead_notMem (x : Nat)
    (hx : ∀ b, freelinkDefaultTokenIsTrimLead b = true -> b ≠ x)
    (lead : List Nat) (hlead : lead.all freelinkDefaultTokenIsTrimLead = true) : x ∉ lead := by
  induction lead with
  | nil => simp
  | cons b bs ih =>
      have hb := freelinkDefaultToken_all_cons hlead
      intro hm
      simp only [List.mem_cons] at hm
      rcases hm with hxb | hm
      · subst x
        exact hx b hb.1 rfl
      · exact ih hb.2 hm

theorem freelinkDefaultToken_notMem_take {x : Nat} {src : List Nat} (h : x ∉ src) (n : Nat) :
    x ∉ src.take n := by
  induction n generalizing src with
  | zero => simp
  | succ n ih =>
      cases src with
      | nil => simp
      | cons b bs =>
          intro hm
          simp at hm
          rcases hm with hxb | hm
          · apply h
            simp [hxb]
          · have hbs : x ∉ bs := by
              intro hx
              apply h
              simp [hx]
            exact ih hbs hm

theorem freelinkDefaultToken_findSub_noMem (pat : List Nat) (hpat : 35 ∈ pat) :
    ∀ {src : List Nat}, 35 ∉ src -> findSub pat src = none
  | [], hsrc => by
      cases pat with
      | nil => cases hpat
      | cons p ps => rfl
  | b :: bs, hsrc => by
      have hb : b ≠ 35 := by
        intro hb35
        apply hsrc
        simp [hb35]
      have hbs : 35 ∉ bs := by
        intro h35
        apply hsrc
        simp [h35]
      have htake : (b :: bs).take pat.length ≠ pat := by
        intro heq
        have hm : 35 ∈ (b :: bs).take pat.length := by simpa [heq] using hpat
        exact (freelinkDefaultToken_notMem_take hsrc pat.length) hm
      have hrec := freelinkDefaultToken_findSub_noMem pat hpat hbs
      simp [findSub, htake, hrec]

theorem freelinkDefaultToken_filter_count {x : Nat} {bs : List Nat} (h : x ∉ bs) :
    (bs.filter (fun b => b == x)).length = 0 := by
  induction bs with
  | nil => rfl
  | cons b bs ih =>
      have hb : b ≠ x := by
        intro hbx
        apply h
        simp [hbx]
      have hbs : x ∉ bs := by
        intro hx
        apply h
        simp [hx]
      simp [hb, ih hbs]

theorem freelinkDefaultToken_lit :
    litBytes "_default:" = [95, 100, 101, 102, 97, 117, 108, 116, 58] := by
  decide

theorem freelinkDefaultToken_raw_head (lead suf : List Nat) :
    (freelinkDefaultTokenRaw lead suf).head? =
      match lead with | [] => some 95 | b :: _ => some b := by
  cases lead with
  | nil => simp [freelinkDefaultTokenRaw, freelinkDefaultToken_lit]
  | cons b bs => rfl

theorem freelinkDefaultToken_dropWhile_append_trim (bs rest : List Nat)
    (h : bs.all isTrimByte = true) :
    (bs ++ rest).dropWhile isTrimByte = rest.dropWhile isTrimByte := by
  induction bs with
  | nil => rfl
  | cons b bs ih =>
      have hb := freelinkDefaultToken_all_cons h
      simpa [hb.1] using (ih hb.2)

theorem freelinkDefaultToken_dropWhile_reverse_head {b : Nat} (hb : isTrimByte b = false) :
    ∀ xs : List Nat, ((xs ++ [b]).dropWhile isTrimByte).reverse.head? = some b
  | [] => by simp [hb]
  | x :: xs => by
      by_cases hx : isTrimByte x = true
      · simp [hx, freelinkDefaultToken_dropWhile_reverse_head hb xs]
      · simp [hx]

theorem freelinkDefaultToken_trimBytes_head_gen {lead ys : List Nat} {b : Nat}
    (hlead : lead.all isTrimByte = true) (hb : isTrimByte b = false) :
    (trimBytes (lead ++ b :: ys)).head? = some b := by
  unfold trimBytes
  rw [freelinkDefaultToken_dropWhile_append_trim lead (b :: ys) hlead]
  simp [hb]
  simpa [List.reverse_cons] using (freelinkDefaultToken_dropWhile_reverse_head hb ys.reverse)

theorem freelinkDefaultToken_trimBytes_head (lead suf : List Nat)
    (hlead : lead.all isTrimByte = true) :
    (trimBytes (freelinkDefaultTokenRaw lead suf)).head? = some 95 := by
  simpa [freelinkDefaultTokenRaw, freelinkDefaultToken_lit] using
    (freelinkDefaultToken_trimBytes_head_gen hlead (by decide : isTrimByte 95 = false)
      (ys := 100 :: 101 :: 102 :: 97 :: 117 :: 108 :: 116 :: 58 :: suf))

theorem freelinkDefaultToken_skipFuel_step (b : Nat) (rest : List Nat)
    (hb : freelinkDefaultTokenIsTrimLead b = true) (fuel : Nat) :
    skipDefaultLeadFuel (fuel + 1) (b :: rest) = skipDefaultLeadFuel fuel rest := by
  have hb_lt : b < 0x80 := freelinkDefaultToken_lead_lt128 hb
  have hcp : leadCpLen (b :: rest) = (b, 1) := by simp [leadCpLen, hb_lt]
  have hld : isDefaultLeadCp b = true := freelinkDefaultToken_lead_isLead hb
  simp [skipDefaultLeadFuel, hcp, hld]

theorem freelinkDefaultToken_skipFuel_all (lead rest : List Nat)
    (hlead : lead.all freelinkDefaultTokenIsTrimLead = true) :
    ∀ fuel : Nat, skipDefaultLeadFuel (lead.length + fuel) (lead ++ rest) =
      skipDefaultLeadFuel fuel rest := by
  induction lead with
  | nil => intro fuel; simp
  | cons b bs ih =>
      have hb := freelinkDefaultToken_all_cons hlead
      intro fuel
      simp only [List.length_cons]
      have hfuel : bs.length + 1 + fuel = (bs.length + fuel) + 1 := by omega
      rw [hfuel]
      change skipDefaultLeadFuel (bs.length + fuel + 1) (b :: (bs ++ rest)) =
        skipDefaultLeadFuel fuel rest
      rw [freelinkDefaultToken_skipFuel_step b (bs ++ rest) hb.1 (bs.length + fuel)]
      simpa [Nat.add_assoc] using (ih hb.2 fuel)

theorem freelinkDefaultToken_skipFuel_95 (rest : List Nat) (fuel : Nat) :
    skipDefaultLeadFuel fuel (95 :: rest) = 95 :: rest := by
  induction fuel with
  | zero => rfl
  | succ fuel ih =>
      have hcp : leadCpLen (95 :: rest) = (95, 1) := by simp [leadCpLen]
      have hld : isDefaultLeadCp 95 = false := by decide
      simp [skipDefaultLeadFuel, hcp, hld]

theorem freelinkDefaultToken_skipDefaultLead (lead suf : List Nat)
    (hlead : lead.all freelinkDefaultTokenIsTrimLead = true) :
    skipDefaultLead (freelinkDefaultTokenRaw lead suf) = litBytes "_default:" ++ suf := by
  unfold skipDefaultLead freelinkDefaultTokenRaw
  have h := freelinkDefaultToken_skipFuel_all lead (litBytes "_default:" ++ suf) hlead
      ((litBytes "_default:" ++ suf).length)
  rw [freelinkDefaultToken_lit] at h
  have hbase : skipDefaultLeadFuel
      ([95, 100, 101, 102, 97, 117, 108, 116, 58] ++ suf).length
      ([95, 100, 101, 102, 97, 117, 108, 116, 58] ++ suf) =
      [95, 100, 101, 102, 97, 117, 108, 116, 58] ++ suf := by
    exact freelinkDefaultToken_skipFuel_95 ([100, 101, 102, 97, 117, 108, 116, 58] ++ suf)
      ([95, 100, 101, 102, 97, 117, 108, 116, 58] ++ suf).length
  have hres := h.trans hbase
  simpa [freelinkDefaultToken_lit, List.append_assoc, Nat.add_assoc] using hres

theorem freelinkDefaultToken_matchLitCI (suf : List Nat) :
    matchLitCI (litBytes "_default:") (litBytes "_default:" ++ suf) = some suf := by
  rw [freelinkDefaultToken_lit]
  simp [matchLitCI, byteCiEq, swapByteCase]

theorem freelinkDefaultToken_any_ge128_false {bs : List Nat}
    (h : bs.all (fun b => b < 128) = true) : bs.any (fun b => 128 <= b) = false := by
  induction bs with
  | nil => rfl
  | cons b bs ih =>
      have hb := freelinkDefaultToken_all_cons h
      have hbLt : b < 128 := by simpa using hb.1
      have hbn : ¬ 128 <= b := by omega
      simp [hbn, ih hb.2]

-- URL opener recognition: all scheme heads are ASCII letters, 0x5F is not.
def freelinkDefaultTokenIsAsciiLetter (b : Nat) : Bool := (65 <= b && b <= 90) || (97 <= b && b <= 122)

theorem freelinkDefaultTokenSchemesHeads :
    freelinkSchemes.all (fun s => match s with | [] => false | c :: _ => freelinkDefaultTokenIsAsciiLetter c) = true := by
  decide

theorem freelinkDefaultToken95NotLetter : freelinkDefaultTokenIsAsciiLetter 95 = false := by
  decide

theorem freelinkDefaultToken_swapByteCase {c : Nat}
    (hc : freelinkDefaultTokenIsAsciiLetter c = true) :
    freelinkDefaultTokenIsAsciiLetter (swapByteCase c) = true := by
  by_cases h1 : (97 ≤ c && c ≤ 122) = true
  · have h1' : 97 ≤ c ∧ c ≤ 122 := by
      simpa [Bool.and_eq_true, decide_eq_true_eq] using h1
    have hsw : swapByteCase c = c - 32 := by simp [swapByteCase, h1]
    rw [hsw]
    simp [freelinkDefaultTokenIsAsciiLetter]
    omega
  · by_cases h2 : (65 ≤ c && c ≤ 90) = true
    · have h2' : 65 ≤ c ∧ c ≤ 90 := by
        simpa [Bool.and_eq_true, decide_eq_true_eq] using h2
      have hsw : swapByteCase c = c + 32 := by simp [swapByteCase, h1, h2]
      rw [hsw]
      simp [freelinkDefaultTokenIsAsciiLetter]
      omega
    · have hsw : swapByteCase c = c := by simp [swapByteCase, h1, h2]
      rw [hsw]
      exact hc

theorem freelinkDefaultToken_byteCiEq_false {x c : Nat}
    (hx : freelinkDefaultTokenIsAsciiLetter x = false)
    (hc : freelinkDefaultTokenIsAsciiLetter c = true) : byteCiEq x c = false := by
  have hx' : ¬ ((65 ≤ x ∧ x ≤ 90) ∨ (97 ≤ x ∧ x ≤ 122)) := by
    intro hxletter
    have hxt : freelinkDefaultTokenIsAsciiLetter x = true := by
      simpa [freelinkDefaultTokenIsAsciiLetter, Bool.or_eq_true, Bool.and_eq_true, decide_eq_true_eq] using hxletter
    rw [hxt] at hx
    contradiction
  have hc' : (65 ≤ c ∧ c ≤ 90) ∨ (97 ≤ c ∧ c ≤ 122) := by
    simpa [freelinkDefaultTokenIsAsciiLetter] using hc
  have hsc' : (65 ≤ swapByteCase c ∧ swapByteCase c ≤ 90) ∨ (97 ≤ swapByteCase c ∧ swapByteCase c ≤ 122) := by
    simpa [freelinkDefaultTokenIsAsciiLetter] using freelinkDefaultToken_swapByteCase hc
  have hxc : x ≠ c := by intro heq; subst x; exact hx' hc'
  have hxsc : x ≠ swapByteCase c := by intro heq; subst x; exact hx' hsc'
  unfold byteCiEq
  by_cases h1 : (x == c) = true
  · have heq : x = c := (beq_iff_eq).mp h1
    exact (hxc heq).elim
  · by_cases h2 : (x == swapByteCase c) = true
    · have heq : x = swapByteCase c := (beq_iff_eq).mp h2
      exact (hxsc heq).elim
    · have h1f : (x == c) = false := by cases h : (x == c) <;> simp_all
      have h2f : (x == swapByteCase c) = false := by cases h : (x == swapByteCase c) <;> simp_all
      simp [h1f, h2f]

theorem freelinkDefaultToken_any_no_match (ss : List (List Nat)) (b : Nat) (rest : List Nat)
    (hb : freelinkDefaultTokenIsAsciiLetter b = false) :
    ss.all (fun s => match s with | [] => false | c :: _ => freelinkDefaultTokenIsAsciiLetter c) = true ->
    ss.any (fun s => (matchLitCI s (b :: rest)).isSome) = false := by
  induction ss with
  | nil => intro h; rfl
  | cons s ss ih =>
      intro h
      have hh := freelinkDefaultToken_all_cons_gen
        (p := fun s : List Nat => match s with | [] => false | c :: _ => freelinkDefaultTokenIsAsciiLetter c) h
      have htail := ih hh.2
      cases s with
      | nil =>
          have : False := by simpa using hh.1
          exact False.elim this
      | cons c p =>
          have hc : freelinkDefaultTokenIsAsciiLetter c = true := by simpa using hh.1
          have hbc : byteCiEq b c = false := freelinkDefaultToken_byteCiEq_false hb hc
          have hsnone : matchLitCI (c :: p) (b :: rest) = none := by simp [matchLitCI, hbc]
          simp [hsnone, htail]

theorem freelinkDefaultToken_isUrlTarget_95 (rest : List Nat) : isUrlTarget (95 :: rest) = false := by
  unfold isUrlTarget
  exact freelinkDefaultToken_any_no_match freelinkSchemes 95 rest freelinkDefaultToken95NotLetter
    freelinkDefaultTokenSchemesHeads

theorem freelinkDefaultToken_lead_all_trim (lead : List Nat)
    (hlead : lead.all freelinkDefaultTokenIsTrimLead = true) : lead.all isTrimByte = true := by
  induction lead with
  | nil => rfl
  | cons b bs ih =>
      have hb := freelinkDefaultToken_all_cons hlead
      exact freelinkDefaultToken_and_mpr ⟨freelinkDefaultToken_lead_isTrim hb.1, ih hb.2⟩

theorem freelinkDefaultToken_isUrlTarget_of_head95 (bs : List Nat)
    (h : bs.head? = some 95) : isUrlTarget bs = false := by
  cases bs with
  | nil => cases h
  | cons b rest =>
      have hb : b = 95 := Option.some.inj h
      subst b
      exact freelinkDefaultToken_isUrlTarget_95 rest

theorem freelinkDefaultToken_noBigMem {bs : List Nat}
    (h : bs.all (fun b => b < 128) = true) : ¬ (∃ x, x ∈ bs ∧ 128 <= x) := by
  induction bs with
  | nil => simp
  | cons b bs ih =>
      have hb := freelinkDefaultToken_all_cons h
      have hbLt : b < 128 := by simpa using hb.1
      intro hex
      rcases hex with ⟨x, hx, hx128⟩
      simp only [List.mem_cons] at hx
      rcases hx with rfl | hx
      · omega
      · exact ih hb.2 ⟨x, hx, hx128⟩

-- The full token-shape law on the reachable trim-lead _default: domain.
theorem freelinkDefaultToken_process (lead suf : List Nat)
    (hlead : lead.all freelinkDefaultTokenIsTrimLead = true)
    (hsufLt : suf.all (fun b => b < 128) = true)
    (hsuf35 : 35 ∉ suf) (hsuf255 : 255 ∉ suf) :
    ∃ opts : OptMap,
      (freelinkProcess (freelinkDefaultTokenFull lead suf)
        (freelinkDefaultTokenRaw lead suf) [] []).2 =
          [{ rule := "Freelink", opts := opts }] ∧
      omGet opts "page".toList = some (textVal (capSlug60 (toUnixName suf))) := by
  have hlead35 : 35 ∉ lead :=
    freelinkDefaultToken_lead_notMem 35 (fun b h => freelinkDefaultToken_lead_ne35 h) lead hlead
  have hlead255 : 255 ∉ lead :=
    freelinkDefaultToken_lead_notMem 255 (fun b h => freelinkDefaultToken_lead_ne255 h) lead hlead
  have hpre35 : 35 ∉ litBytes "_default:" := by decide
  have hpre255 : 255 ∉ litBytes "_default:" := by decide
  have hraw35 : 35 ∉ freelinkDefaultTokenRaw lead suf := by
    simp [freelinkDefaultTokenRaw, List.mem_append, hlead35, hpre35, hsuf35]
  have hraw255 : 255 ∉ freelinkDefaultTokenRaw lead suf := by
    simp [freelinkDefaultTokenRaw, List.mem_append, hlead255, hpre255, hsuf255]
  have hopen255 : 255 ∉ litBytes "[[[" := by decide
  have hclose255 : 255 ∉ litBytes "]]]" := by decide
  have hfull255 : 255 ∉ freelinkDefaultTokenFull lead suf := by
    simp [freelinkDefaultTokenFull, List.mem_append, hopen255, hraw255, hclose255]
  have hrawNotEmpty : freelinkDefaultTokenRaw lead suf ≠ [] := by
    simp [freelinkDefaultTokenRaw, freelinkDefaultToken_lit]
  have hrawHead := freelinkDefaultToken_raw_head lead suf
  have hheadNe124 : (freelinkDefaultTokenRaw lead suf).head? ≠ some 124 := by
    rw [hrawHead]
    cases lead with
    | nil => decide
    | cons b bs =>
        have hb := freelinkDefaultToken_all_cons hlead
        have hbne : b ≠ 124 := freelinkDefaultToken_lead_ne124 hb.1
        simp [hbne]
  have hheadNe35 : (freelinkDefaultTokenRaw lead suf).head? ≠ some 35 := by
    rw [hrawHead]
    cases lead with
    | nil => decide
    | cons b bs =>
        have hb := freelinkDefaultToken_all_cons hlead
        have hbne : b ≠ 35 := freelinkDefaultToken_lead_ne35 hb.1
        simp [hbne]
  have hhash2 : findSub (litBytes "##") (freelinkDefaultTokenRaw lead suf) = none := by
    apply freelinkDefaultToken_findSub_noMem (litBytes "##") (by decide : 35 ∈ litBytes "##")
    exact hraw35
  have hhash1 : findSub [35] (freelinkDefaultTokenRaw lead suf) = none := by
    apply freelinkDefaultToken_findSub_noMem [35] (by decide : 35 ∈ ([35] : List Nat))
    exact hraw35
  have hroute : findSub (litBytes "/#/") (freelinkDefaultTokenRaw lead suf) = none := by
    apply freelinkDefaultToken_findSub_noMem (litBytes "/#/") (by decide : 35 ∈ litBytes "/#/")
    exact hraw35
  have hcount : (List.filter (fun b => b == 35) (freelinkDefaultTokenRaw lead suf)).length = 0 :=
    freelinkDefaultToken_filter_count hraw35
  have hleadTrim : lead.all isTrimByte = true := freelinkDefaultToken_lead_all_trim lead hlead
  have htrimHead : (trimBytes (freelinkDefaultTokenRaw lead suf)).head? = some 95 :=
    freelinkDefaultToken_trimBytes_head lead suf hleadTrim
  have hstarNe : (trimBytes (freelinkDefaultTokenRaw lead suf)).head? ≠ some 42 := by
    rw [htrimHead]
    decide
  have hurl : isUrlTarget (trimBytes (freelinkDefaultTokenRaw lead suf)) = false :=
    freelinkDefaultToken_isUrlTarget_of_head95 _ htrimHead
  have habs : isAbsPathTarget (trimBytes (freelinkDefaultTokenRaw lead suf)) = false := by
    simp [isAbsPathTarget, htrimHead]
  have hskip : skipDefaultLead (freelinkDefaultTokenRaw lead suf) =
      litBytes "_default:" ++ suf := by
    simpa [freelinkDefaultTokenRaw] using freelinkDefaultToken_skipDefaultLead lead suf hlead
  have hstrip : matchLitCI (litBytes "_default:") (litBytes "_default:" ++ suf) = some suf :=
    freelinkDefaultToken_matchLitCI suf
  have hany128 : suf.any (fun b => 128 <= b) = false :=
    freelinkDefaultToken_any_ge128_false hsufLt
  have hgate : ((suf.any (fun b => 128 <= b)) && utf8Valid suf) = false := by
    rw [hany128]
    rfl
  have hgateProp : ¬ ((∃ x, x ∈ suf ∧ 128 <= x) ∧ utf8Valid suf = true) := by
    intro h
    exact (freelinkDefaultToken_noBigMem hsufLt) h.1
  unfold freelinkProcess
  simp [hfull255, hrawNotEmpty, hheadNe124, hheadNe35, hhash2, hcount, hroute, hhash1,
    hstarNe, hurl, habs, hskip, hstrip, hgate, hgateProp, omGet]

-- cps-framed version of the full token-shape law.
theorem freelinkDefaultToken_process_cps (cps suf : List Nat)
    (hcps : cps.all freelinkDefaultTokenIsTrimLead = true)
    (hsufLt : suf.all (fun b => b < 128) = true)
    (hsuf35 : 35 ∉ suf) (hsuf255 : 255 ∉ suf) :
    ∃ opts : OptMap,
      (freelinkProcess
        (freelinkDefaultTokenFull (freelinkDefaultTokenEncodeCps cps) suf)
        (freelinkDefaultTokenRaw (freelinkDefaultTokenEncodeCps cps) suf) [] []).2 =
          [{ rule := "Freelink", opts := opts }] ∧
      omGet opts "page".toList = some (textVal (capSlug60 (toUnixName suf))) := by
  exact freelinkDefaultToken_process (freelinkDefaultTokenEncodeCps cps) suf
    (freelinkDefaultToken_encode_all freelinkDefaultTokenIsTrimLead (fun _ h => h) hcps)
    hsufLt hsuf35 hsuf255

#print axioms freelinkDefaultToken_process
#print axioms freelinkDefaultToken_process_cps

end LeanFtml
