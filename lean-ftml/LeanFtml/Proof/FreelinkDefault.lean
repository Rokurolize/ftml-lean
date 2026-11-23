import LeanFtml.LinkRules

namespace LeanFtml

-- FALLBACK, NOT THE FULL TOKEN-SHAPE THEOREM. This file proves the isolated
-- universal slug law on the reachable _default: domain: skipDefaultLead strips
-- a trim-lead run, the anchored case-insensitive _default: strip yields the
-- suffix, the transliteration gate is false on ASCII, and the slug handed to
-- toUnixName is therefore exactly the authored suffix. The full claim that
-- (freelinkProcess full raw [] []).2 is one Freelink token whose page option
-- is some (textVal (toUnixName suf)) remains unproved here. The exact gap:
-- the mirror's outer guard chain (0xFF placeholder, empty/pipe head, leading
-- hash with non-space second byte, "##", two-hash filter), the URL-branch
-- exclusion, and the display-text/opts assembly at the end of freelinkProcess
-- were not composed into a final token equality; the unfolded if-chain under
-- local let-bound raw/full kept rewriting Bool list predicates into Prop
-- membership and produced dependent-match forms that the final simp could
-- not align. The helpers below are genuine universal lemmas, not witnesses.

-- The current mirror has no global encodeCps; on the ASCII lead domain the
-- UTF-8 encoding of a code point is its single byte, so this local encoder
-- agrees with utf8Bytes there and keeps the general branch for honesty.
def freelinkDefaultEncodeCps (cps : List Nat) : List Nat :=
  cps.flatMap (fun cp => if cp < 0x80 then [cp] else utf8Bytes (Char.ofNat cp))

-- The exact lead byte roster PHP trimBytes removes and the mirror tolerates
-- before an anchored _default: strip. Cf, BOM, star and 0x0C are NOT in it.
def freelinkDefaultIsTrimLead (b : Nat) : Bool :=
  b == 0x09 || b == 0x0A || b == 0x0B || b == 0x0D || b == 0x20

theorem freelinkDefault_and_true {a b : Bool} (h : a && b = true) : a = true ∧ b = true := by
  simpa [Bool.and_eq_true] using h

theorem freelinkDefault_and_mpr {a b : Bool} (h : a = true ∧ b = true) : (a && b) = true := by
  cases a <;> cases b <;> simp_all

theorem freelinkDefault_all_cons {p : Nat -> Bool} {b : Nat} {bs : List Nat}
    (h : (b :: bs).all p = true) : p b = true ∧ bs.all p = true := by
  have h' : (p b && bs.all p) = true := by simpa only [List.all_cons] using h
  exact freelinkDefault_and_true h'

theorem freelinkDefault_trimLead_cases {b : Nat} (h : freelinkDefaultIsTrimLead b = true) :
    b = 9 ∨ b = 10 ∨ b = 11 ∨ b = 13 ∨ b = 32 := by
  have h' : (((b = 9 ∨ b = 10) ∨ b = 11) ∨ b = 13) ∨ b = 32 := by
    simpa only [freelinkDefaultIsTrimLead, beq_iff_eq, Bool.or_eq_true] using h
  rcases h' with (((h9 | h10) | h11) | h13) | h32
  · exact Or.inl h9
  · exact Or.inr (Or.inl h10)
  · exact Or.inr (Or.inr (Or.inl h11))
  · exact Or.inr (Or.inr (Or.inr (Or.inl h13)))
  · exact Or.inr (Or.inr (Or.inr (Or.inr h32)))

theorem freelinkDefault_trimLead_lt128 {b : Nat} (h : freelinkDefaultIsTrimLead b = true) :
    b < 0x80 := by
  rcases freelinkDefault_trimLead_cases h with rfl | rfl | rfl | rfl | rfl <;> omega

theorem freelinkDefaultEncodeCps_all (p : Nat -> Bool) {cps : List Nat}
    (hp : ∀ cp, freelinkDefaultIsTrimLead cp = true -> p cp = true)
    (hcps : cps.all freelinkDefaultIsTrimLead = true) :
    (freelinkDefaultEncodeCps cps).all p = true := by
  induction cps with
  | nil => rfl
  | cons cp cps ih =>
      have hcp := freelinkDefault_all_cons hcps
      have hlt : cp < 0x80 := freelinkDefault_trimLead_lt128 hcp.1
      have hpcp : p cp = true := hp cp hcp.1
      have hiht : (freelinkDefaultEncodeCps cps).all p = true := ih hcp.2
      change ((if cp < 0x80 then [cp] else utf8Bytes (Char.ofNat cp)) ++
        freelinkDefaultEncodeCps cps).all p = true
      rw [if_pos hlt]
      exact freelinkDefault_and_mpr ⟨hpcp, hiht⟩

theorem freelinkDefault_all_append {p : Nat -> Bool} (l1 l2 : List Nat) :
    l1.all p = true -> l2.all p = true -> (l1 ++ l2).all p = true := by
  induction l1 with
  | nil => intro _ h2; simpa using h2
  | cons b bs ih =>
      intro h1 h2
      have hb := freelinkDefault_all_cons h1
      change (p b && (bs ++ l2).all p) = true
      exact freelinkDefault_and_mpr ⟨hb.1, ih hb.2 h2⟩

theorem freelinkDefault_any_ge128_false {bs : List Nat}
    (h : bs.all (fun b => b < 128) = true) : bs.any (fun b => 128 <= b) = false := by
  induction bs with
  | nil => rfl
  | cons b bs ih =>
      have hb := freelinkDefault_all_cons h
      have hbLt : b < 128 := by simpa using hb.1
      have hbn : ¬ 128 <= b := by omega
      simp [hbn, ih hb.2]

theorem freelinkDefault_lit : litBytes "_default:" = [95, 100, 101, 102, 97, 117, 108, 116, 58] := by
  decide

theorem freelinkDefault_dropWhile_append_trim (bs rest : List Nat)
    (h : bs.all isTrimByte = true) :
    (bs ++ rest).dropWhile isTrimByte = rest.dropWhile isTrimByte := by
  induction bs with
  | nil => rfl
  | cons b bs ih =>
      have hb := freelinkDefault_all_cons h
      simpa [hb.1] using (ih hb.2)

theorem freelinkDefault_skipFuel_step (b : Nat) (rest : List Nat)
    (hb : freelinkDefaultIsTrimLead b = true) (fuel : Nat) :
    skipDefaultLeadFuel (fuel + 1) (b :: rest) = skipDefaultLeadFuel fuel rest := by
  have hb_lt : b < 0x80 := freelinkDefault_trimLead_lt128 hb
  have hcp : leadCpLen (b :: rest) = (b, 1) := by simp [leadCpLen, hb_lt]
  have hld : isDefaultLeadCp b = true := by
    rcases freelinkDefault_trimLead_cases hb with rfl | rfl | rfl | rfl | rfl <;> decide
  simp [skipDefaultLeadFuel, hcp, hld]

theorem freelinkDefault_skipFuel_all (lead rest : List Nat)
    (hlead : lead.all freelinkDefaultIsTrimLead = true) :
    ∀ fuel : Nat, skipDefaultLeadFuel (lead.length + fuel) (lead ++ rest) =
      skipDefaultLeadFuel fuel rest := by
  induction lead with
  | nil => intro fuel; simp
  | cons b bs ih =>
      have hb := freelinkDefault_all_cons hlead
      intro fuel
      simp only [List.length_cons]
      have hfuel : bs.length + 1 + fuel = (bs.length + fuel) + 1 := by omega
      rw [hfuel]
      change skipDefaultLeadFuel (bs.length + fuel + 1) (b :: (bs ++ rest)) =
        skipDefaultLeadFuel fuel rest
      rw [freelinkDefault_skipFuel_step b (bs ++ rest) hb.1 (bs.length + fuel)]
      simpa [Nat.add_assoc] using (ih hb.2 fuel)

theorem freelinkDefault_skipFuel_95 (rest : List Nat) (fuel : Nat) :
    skipDefaultLeadFuel fuel (95 :: rest) = 95 :: rest := by
  induction fuel with
  | zero => rfl
  | succ fuel ih =>
      have hcp : leadCpLen (95 :: rest) = (95, 1) := by simp [leadCpLen]
      have hld : isDefaultLeadCp 95 = false := by decide
      simp [skipDefaultLeadFuel, hcp, hld]

theorem freelinkDefault_skipDefaultLead_dflt (lead suf : List Nat)
    (hlead : lead.all freelinkDefaultIsTrimLead = true) :
    skipDefaultLead (lead ++ litBytes "_default:" ++ suf) = litBytes "_default:" ++ suf := by
  unfold skipDefaultLead
  have h := freelinkDefault_skipFuel_all lead (litBytes "_default:" ++ suf) hlead
      ((litBytes "_default:" ++ suf).length)
  rw [freelinkDefault_lit] at h
  have hbase : skipDefaultLeadFuel
      ([95, 100, 101, 102, 97, 117, 108, 116, 58] ++ suf).length
      ([95, 100, 101, 102, 97, 117, 108, 116, 58] ++ suf) =
      [95, 100, 101, 102, 97, 117, 108, 116, 58] ++ suf := by
    exact freelinkDefault_skipFuel_95 ([100, 101, 102, 97, 117, 108, 116, 58] ++ suf)
      ([95, 100, 101, 102, 97, 117, 108, 116, 58] ++ suf).length
  have hres := h.trans hbase
  simpa [freelinkDefault_lit, List.append_assoc, Nat.add_assoc] using hres

theorem freelinkDefault_matchLitCI_default (suf : List Nat) :
    matchLitCI (litBytes "_default:") (litBytes "_default:" ++ suf) = some suf := by
  rw [freelinkDefault_lit]
  simp [matchLitCI, byteCiEq, swapByteCase]

-- The isolated universal slug law (fallback, not the full token-shape claim).
theorem freelinkDefault_slug_law (lead suf : List Nat)
    (hlead : lead.all freelinkDefaultIsTrimLead = true)
    (hsuf : suf.all (fun b => b < 128) = true) :
    let raw := lead ++ litBytes "_default:" ++ suf
    skipDefaultLead raw = litBytes "_default:" ++ suf ∧
    matchLitCI (litBytes "_default:") (litBytes "_default:" ++ suf) = some suf ∧
    suf.any (fun b => 128 <= b) = false ∧
    (if suf.any (fun b => 128 <= b) && utf8Valid suf then transliterate suf else suf) = suf ∧
    toUnixName (if suf.any (fun b => 128 <= b) && utf8Valid suf then transliterate suf else suf) =
      toUnixName suf := by
  dsimp
  have hskip : skipDefaultLead (lead ++ litBytes "_default:" ++ suf) =
      litBytes "_default:" ++ suf := freelinkDefault_skipDefaultLead_dflt lead suf hlead
  have hstrip : matchLitCI (litBytes "_default:") (litBytes "_default:" ++ suf) = some suf :=
    freelinkDefault_matchLitCI_default suf
  have hany : suf.any (fun b => 128 <= b) = false := freelinkDefault_any_ge128_false hsuf
  refine ⟨hskip, hstrip, hany, ?_, ?_⟩
  · simp [hany]
  · rw [show (if suf.any (fun b => 128 <= b) && utf8Valid suf then transliterate suf else suf) = suf by
      simp [hany]]

-- The same isolated slug law phrased in the programme's cps framing.
theorem freelinkDefault_slug_law_cps (cps suf : List Nat)
    (hcps : cps.all freelinkDefaultIsTrimLead = true)
    (hsuf : suf.all (fun b => b < 128) = true) :
    let raw := freelinkDefaultEncodeCps cps ++ litBytes "_default:" ++ suf
    skipDefaultLead raw = litBytes "_default:" ++ suf ∧
    matchLitCI (litBytes "_default:") (litBytes "_default:" ++ suf) = some suf ∧
    suf.any (fun b => 128 <= b) = false ∧
    (if suf.any (fun b => 128 <= b) && utf8Valid suf then transliterate suf else suf) = suf ∧
    toUnixName (if suf.any (fun b => 128 <= b) && utf8Valid suf then transliterate suf else suf) =
      toUnixName suf := by
  dsimp
  exact freelinkDefault_slug_law (freelinkDefaultEncodeCps cps) suf
    (freelinkDefaultEncodeCps_all freelinkDefaultIsTrimLead (fun _ h => h) hcps) hsuf

#print axioms freelinkDefault_slug_law
#print axioms freelinkDefault_slug_law_cps

end LeanFtml
