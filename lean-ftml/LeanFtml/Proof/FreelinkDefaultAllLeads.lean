/- LeanFtml.Proof.FreelinkDefaultAllLeads -- universal _default: domain laws for the full 29-code-point lead class. -/

import LeanFtml.LinkRules

set_option maxHeartbeats 0

namespace LeanFtml

-- The mirror has no global encodeCps, so this file uses a local canonical UTF-8 encoder.
def fdaIsAsciiLetter (b : Nat) : Bool := (65 <= b && b <= 90) || (97 <= b && b <= 122)

def fdaEncCp (cp : Nat) : List Nat :=
  if cp < 0x80 then [cp]
  else if cp = 0x85 then [0xC2, 0x85]
  else if cp = 0xA0 then [0xC2, 0xA0]
  else if cp = 0x1680 then [0xE1, 0x9A, 0x80]
  else if 0x2000 <= cp && cp <= 0x200B then [0xE2, 0x80, 0x80 + (cp - 0x2000)]
  else if cp = 0x2028 then [0xE2, 0x80, 0xA8]
  else if cp = 0x2029 then [0xE2, 0x80, 0xA9]
  else if cp = 0x202F then [0xE2, 0x80, 0xAF]
  else if cp = 0x205F then [0xE2, 0x81, 0x9F]
  else if cp = 0x2060 then [0xE2, 0x81, 0xA0]
  else if cp = 0x3000 then [0xE3, 0x80, 0x80]
  else if cp = 0xFEFF then [0xEF, 0xBB, 0xBF]
  else []

def fdaEncode (cps : List Nat) : List Nat := cps.flatMap fdaEncCp

def fdaTail (suf : List Nat) : List Nat := litBytes "_default:" ++ suf

-- Every lead code point has a nonempty, correctly decodable, letter-free, hash-free encoding.
theorem fdaEncCp_facts (cp : Nat) (rest : List Nat) (h : isDefaultLeadCp cp = true) :
    (fdaEncCp cp).length > 0 ∧
    leadCpLen (fdaEncCp cp ++ rest) = (cp, (fdaEncCp cp).length) ∧
    (fdaEncCp cp).all (fun b => b != 35 && b != 255 && fdaIsAsciiLetter b == false) = true := by
  simp [isDefaultLeadCp] at h
  rcases h with (((((((((((((((((h9 | h10) | h11) | h12) | h13) | h20) | h2A) | h85) | hA0) | h1680) | hrange) | h2028) | h2029) | h202F) | h205F) | h2060) | h3000) | hFEFF)
  all_goals try (subst cp; simp [fdaEncCp, leadCpLen, isContByte, fdaIsAsciiLetter])
  have hlo : 0x2000 <= cp := hrange.1
  have hhi : cp <= 0x200B := hrange.2
  have hk : cp - 0x2000 <= 11 := by omega
  have hn128 : ¬ cp < 128 := by omega
  have hn133 : cp ≠ 133 := by omega
  have hn160 : cp ≠ 160 := by omega
  have hn5760 : cp ≠ 5760 := by omega
  have hcond : (0x2000 <= cp && cp <= 0x200B) = true := by simp [hlo, hhi]
  have henc : fdaEncCp cp = [226, 128, 128 + (cp - 8192)] := by
    simp [fdaEncCp, hn128, hn133, hn160, hn5760, hcond]
  rw [henc]
  constructor
  · simp
  constructor
  · have hcont : isContByte (128 + (cp - 8192)) = true := by
      simp [isContByte]
      omega
    have hlt192 : 128 + (cp - 8192) < 192 := by omega
    have hmod : (128 + (cp - 8192)) % 64 = cp - 8192 := by omega
    have hsub : 8192 + (cp - 8192) = cp := by omega
    simp [leadCpLen, isContByte, hcont, hlt192, hmod, hsub]
  · simp [fdaIsAsciiLetter]
    omega

theorem fdaEncCp_len (cp : Nat) (rest : List Nat) (h : isDefaultLeadCp cp = true) :
    leadCpLen (fdaEncCp cp ++ rest) = (cp, (fdaEncCp cp).length) :=
  (fdaEncCp_facts cp rest h).2.1

-- List.all and List.any helpers over Bool predicates.
theorem fda_all_cons {p : Nat → Bool} {b : Nat} {bs : List Nat}
    (h : (b :: bs).all p = true) : p b = true ∧ bs.all p = true := by
  have h' : (p b && bs.all p) = true := by simpa only [List.all_cons] using h
  simpa [Bool.and_eq_true] using h'

theorem fda_all_cons_gen {α : Type} {p : α → Bool} {b : α} {bs : List α}
    (h : (b :: bs).all p = true) : p b = true ∧ bs.all p = true := by
  have h' : (p b && bs.all p) = true := by simpa only [List.all_cons] using h
  simpa [Bool.and_eq_true] using h'

theorem fda_all_append {p : Nat → Bool} (l1 l2 : List Nat) :
    l1.all p = true → l2.all p = true → (l1 ++ l2).all p = true := by
  induction l1 with
  | nil => intro _ h2; simpa using h2
  | cons b bs ih =>
      intro h1 h2
      have hb := fda_all_cons h1
      change (p b && (bs ++ l2).all p) = true
      simpa [Bool.and_eq_true] using And.intro hb.1 (ih hb.2 h2)

theorem fda_notMem_of_all {x : Nat} {p : Nat → Bool} (hp : ∀ b, p b = true → b ≠ x) :
    ∀ bs : List Nat, bs.all p = true → x ∉ bs := by
  intro bs
  induction bs with
  | nil =>
      intro h hm
      simpa using hm
  | cons b bs ih =>
      intro h hm
      have hb := fda_all_cons h
      simp only [List.mem_cons] at hm
      rcases hm with rfl | hm
      · exact hp _ hb.1 rfl
      · exact ih hb.2 hm

-- A whole encoded lead run is letter-free and avoids the hash and placeholder bytes.
theorem fdaEncode_all_bytes (cps : List Nat) (hcps : cps.all isDefaultLeadCp = true) :
    (fdaEncode cps).all (fun b => b != 35 && b != 255 && fdaIsAsciiLetter b == false) = true := by
  induction cps with
  | nil => rfl
  | cons cp cps ih =>
      have hc := fda_all_cons hcps
      exact fda_all_append (fdaEncCp cp) (fdaEncode cps) (fdaEncCp_facts cp [] hc.1).2.2 (ih hc.2)

theorem fda_lit : litBytes "_default:" = [95, 100, 101, 102, 97, 117, 108, 116, 58] := by decide

-- skipDefaultLeadFuel consumes one lead code point per fuel tick.
theorem fda_drop_len (l1 l2 : List Nat) : (l1 ++ l2).drop l1.length = l2 := by
  induction l1 with
  | nil => rfl
  | cons b bs ih => simpa using ih

theorem fda_skipFuel_step (cp : Nat) (rest : List Nat) (h : isDefaultLeadCp cp = true) (fuel : Nat) :
    skipDefaultLeadFuel (fuel + 1) (fdaEncCp cp ++ rest) = skipDefaultLeadFuel fuel rest := by
  have hf := fdaEncCp_facts cp rest h
  have hcp := hf.2.1
  have hn : 0 < (fdaEncCp cp).length := hf.1
  simp [skipDefaultLeadFuel, hcp, h, hn, fda_drop_len]

theorem fda_skipFuel_stop (suf : List Nat) (fuel : Nat) :
    skipDefaultLeadFuel fuel (fdaTail suf) = fdaTail suf := by
  induction fuel with
  | zero => rfl
  | succ fuel ih =>
      have hcp : leadCpLen (fdaTail suf) = (95, 1) := by
        rw [fdaTail, fda_lit]
        simp [leadCpLen]
      have hld : isDefaultLeadCp 95 = false := by decide
      simp [skipDefaultLeadFuel, hcp, hld]

theorem fda_skipFuel_all (cps suf : List Nat) (hcps : cps.all isDefaultLeadCp = true) :
    ∀ fuel : Nat, (fdaEncode cps).length + (fdaTail suf).length ≤ fuel →
      skipDefaultLeadFuel fuel (fdaEncode cps ++ fdaTail suf) = fdaTail suf := by
  induction cps with
  | nil =>
      intro fuel hfuel
      simpa [fdaEncode] using fda_skipFuel_stop suf fuel
  | cons cp cps ih =>
      intro fuel hfuel
      have hc := fda_all_cons hcps
      cases fuel with
      | zero =>
          have hpos : 0 < (fdaEncCp cp).length := (fdaEncCp_facts cp [] hc.1).1
          have hlen : (fdaEncode (cp :: cps)).length = (fdaEncCp cp).length + (fdaEncode cps).length := by
            simp [fdaEncode]
          rw [hlen] at hfuel
          omega
      | succ fuel' =>
          have hlen : fdaEncode (cp :: cps) = fdaEncCp cp ++ fdaEncode cps := by
            simp [fdaEncode]
          rw [hlen, List.append_assoc]
          rw [fda_skipFuel_step cp (fdaEncode cps ++ fdaTail suf) hc.1 fuel']
          apply ih hc.2 fuel'
          have hpos : 0 < (fdaEncCp cp).length := (fdaEncCp_facts cp [] hc.1).1
          have hlen2 : (fdaEncode (cp :: cps)).length = (fdaEncCp cp).length + (fdaEncode cps).length := by
            simp [fdaEncode]
          rw [hlen2] at hfuel
          omega

theorem fda_skipDefaultLead (cps suf : List Nat) (hcps : cps.all isDefaultLeadCp = true) :
    skipDefaultLead (fdaEncode cps ++ fdaTail suf) = fdaTail suf := by
  unfold skipDefaultLead
  apply fda_skipFuel_all cps suf hcps
  simp

-- The anchored case-insensitive strip yields the authored suffix.
theorem fda_strip (suf : List Nat) :
    matchLitCI (litBytes "_default:") (fdaTail suf) = some suf := by
  simp [fdaTail, fda_lit, matchLitCI, byteCiEq, swapByteCase]

-- No URL scheme can start with a byte that is not an ASCII letter.
theorem fdaSchemesHeads :
    freelinkSchemes.all (fun s => match s with | [] => false | c :: _ => fdaIsAsciiLetter c) = true := by
  decide

theorem fda_swapByteCase_letter {c : Nat} (hc : fdaIsAsciiLetter c = true) :
    fdaIsAsciiLetter (swapByteCase c) = true := by
  by_cases h1 : (97 ≤ c && c ≤ 122) = true
  · have h1' : 97 ≤ c ∧ c ≤ 122 := by simpa [Bool.and_eq_true, decide_eq_true_eq] using h1
    have hsw : swapByteCase c = c - 32 := by simp [swapByteCase, h1]
    rw [hsw]
    simp [fdaIsAsciiLetter]
    omega
  · by_cases h2 : (65 ≤ c && c ≤ 90) = true
    · have h2' : 65 ≤ c ∧ c ≤ 90 := by simpa [Bool.and_eq_true, decide_eq_true_eq] using h2
      have hsw : swapByteCase c = c + 32 := by simp [swapByteCase, h1, h2]
      rw [hsw]
      simp [fdaIsAsciiLetter]
      omega
    · have hsw : swapByteCase c = c := by simp [swapByteCase, h1, h2]
      rw [hsw]
      exact hc

theorem fda_byteCiEq_false {x c : Nat} (hx : fdaIsAsciiLetter x = false)
    (hc : fdaIsAsciiLetter c = true) : byteCiEq x c = false := by
  have hx' : ¬ ((65 ≤ x ∧ x ≤ 90) ∨ (97 ≤ x ∧ x ≤ 122)) := by
    intro hxletter
    have hxt : fdaIsAsciiLetter x = true := by
      simpa [fdaIsAsciiLetter, Bool.or_eq_true, Bool.and_eq_true, decide_eq_true_eq] using hxletter
    rw [hxt] at hx
    contradiction
  have hc' : (65 ≤ c ∧ c ≤ 90) ∨ (97 ≤ c ∧ c ≤ 122) := by
    simpa [fdaIsAsciiLetter, Bool.or_eq_true, Bool.and_eq_true, decide_eq_true_eq] using hc
  have hsc' : (65 ≤ swapByteCase c ∧ swapByteCase c ≤ 90) ∨
      (97 ≤ swapByteCase c ∧ swapByteCase c ≤ 122) := by
    simpa [fdaIsAsciiLetter, Bool.or_eq_true, Bool.and_eq_true, decide_eq_true_eq] using fda_swapByteCase_letter hc
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

theorem fda_any_no_match (ss : List (List Nat)) (b : Nat) (rest : List Nat)
    (hb : fdaIsAsciiLetter b = false)
    (hheads : ss.all (fun s => match s with | [] => false | c :: _ => fdaIsAsciiLetter c) = true) :
    ss.any (fun s => (matchLitCI s (b :: rest)).isSome) = false := by
  induction ss with
  | nil => rfl
  | cons s ss ih =>
      have hh := fda_all_cons_gen hheads
      have htail := ih hh.2
      cases s with
      | nil =>
          have : False := by simpa using hh.1
          exact False.elim this
      | cons c p =>
          have hc : fdaIsAsciiLetter c = true := by simpa using hh.1
          have hbc : byteCiEq b c = false := fda_byteCiEq_false hb hc
          have hsnone : matchLitCI (c :: p) (b :: rest) = none := by simp [matchLitCI, hbc]
          simp [hsnone, htail]

theorem fda_isUrlTarget_nil : isUrlTarget [] = false := by decide

theorem fda_isUrlTarget_head (b : Nat) (rest : List Nat) (hb : fdaIsAsciiLetter b = false) :
    isUrlTarget (b :: rest) = false := by
  unfold isUrlTarget
  exact fda_any_no_match freelinkSchemes b rest hb fdaSchemesHeads

-- trimBytes keeps the first non-trim byte at the head.
theorem fda_dropWhile_reverse_head (b : Nat) (hb : isTrimByte b = false) :
    ∀ xs : List Nat, ((xs ++ [b]).dropWhile isTrimByte).reverse.head? = some b
  | [] => by simp [hb]
  | x :: xs => by
      by_cases hx : isTrimByte x = true
      · simp [hx, fda_dropWhile_reverse_head b hb xs]
      · simp [hx]

theorem fda_trimBytes_head_cons (b : Nat) (xs : List Nat) (hb : isTrimByte b = false) :
    (trimBytes (b :: xs)).head? = some b := by
  unfold trimBytes
  simp [hb]
  simpa [List.reverse_cons] using fda_dropWhile_reverse_head b hb xs.reverse

theorem fda_trim_head_nonletter (lead : List Nat) (suf : List Nat)
    (hlead : lead.all (fun b => fdaIsAsciiLetter b == false) = true) :
    (trimBytes (lead ++ fdaTail suf)).head? = none ∨
      ∃ b, (trimBytes (lead ++ fdaTail suf)).head? = some b ∧ fdaIsAsciiLetter b = false := by
  induction lead with
  | nil =>
      right
      refine ⟨95, ?_, by decide⟩
      simpa [fdaTail, fda_lit] using
        (fda_trimBytes_head_cons 95 (100 :: 101 :: 102 :: 97 :: 117 :: 108 :: 116 :: 58 :: suf) (by decide))
  | cons b lead ih =>
      have hb := fda_all_cons hlead
      have hbn : fdaIsAsciiLetter b = false := by simpa using hb.1
      by_cases htrim : isTrimByte b = true
      · have hsimp : trimBytes (b :: (lead ++ fdaTail suf)) = trimBytes (lead ++ fdaTail suf) := by
          simp [trimBytes, htrim]
        change (trimBytes (b :: (lead ++ fdaTail suf))).head? = none ∨
          ∃ c, (trimBytes (b :: (lead ++ fdaTail suf))).head? = some c ∧ fdaIsAsciiLetter c = false
        rw [hsimp]
        exact ih hb.2
      · right
        refine ⟨b, ?_, hbn⟩
        have htrimf : isTrimByte b = false := by cases h : isTrimByte b <;> simp_all
        simpa using fda_trimBytes_head_cons b (lead ++ fdaTail suf) htrimf

theorem fda_url_false (lead : List Nat) (suf : List Nat)
    (hlead : lead.all (fun b => fdaIsAsciiLetter b == false) = true) :
    isUrlTarget (trimBytes (lead ++ fdaTail suf)) = false := by
  have hh := fda_trim_head_nonletter lead suf hlead
  rcases hh with hnone | ⟨b, hbhead, hbnon⟩
  · cases hcases : trimBytes (lead ++ fdaTail suf) with
    | nil => exact fda_isUrlTarget_nil
    | cons x xs =>
        rw [hcases] at hnone
        simp at hnone
  · cases hcases : trimBytes (lead ++ fdaTail suf) with
    | nil =>
        rw [hcases] at hbhead
        simp at hbhead
    | cons x xs =>
        rw [hcases] at hbhead
        have hxb : x = b := Option.some.inj hbhead
        subst x
        exact fda_isUrlTarget_head b xs hbnon

theorem fda_all_third {p q r : Nat → Bool} {bs : List Nat}
    (h : bs.all (fun b => p b && q b && r b) = true) : bs.all r = true := by
  induction bs with
  | nil => rfl
  | cons b bs ih =>
      have hb := fda_all_cons h
      have hpqr : (p b && q b && r b) = true := hb.1
      have hbr : r b = true := by
        have ht : (p b && q b) = true ∧ r b = true := by simpa [Bool.and_eq_true] using hpqr
        exact ht.2
      simpa [Bool.and_eq_true] using And.intro hbr (ih hb.2)

theorem fdaEncode_all_nonletter (cps : List Nat) (hcps : cps.all isDefaultLeadCp = true) :
    (fdaEncode cps).all (fun b => fdaIsAsciiLetter b == false) = true :=
  fda_all_third (bs := fdaEncode cps) (fdaEncode_all_bytes cps hcps)

-- Headline combination: skip, strip and URL exclusion on the full lead class.
theorem freelinkDefaultAll_pieces (cps suf : List Nat)
    (hcps : cps.all isDefaultLeadCp = true) :
    let lead := fdaEncode cps
    skipDefaultLead (lead ++ fdaTail suf) = fdaTail suf ∧
    matchLitCI (litBytes "_default:") (fdaTail suf) = some suf ∧
    isUrlTarget (trimBytes (lead ++ fdaTail suf)) = false := by
  dsimp
  refine ⟨fda_skipDefaultLead cps suf hcps, fda_strip suf, ?_⟩
  exact fda_url_false (fdaEncode cps) suf (fdaEncode_all_nonletter cps hcps)

/- COMPOSITION GAP. The process-level token equality is NOT claimed here. The three universal pieces above cover skipDefaultLead, the anchored _default: strip and the URL-branch exclusion for every one of the 29 lead code points. The remaining work is the mirror's display-text assembly after those pieces: with leadingSpace true the starUrl test is skipped, but a lead run beginning with a star makes starUrl true and trimmed becomes trimmed0.tail, whose head needs a separate non-letter argument; the outer guard chain and the final opts map then have to be aligned exactly as in FreelinkDefaultToken.process. Those steps are not proved in this file. -/

#print axioms fda_skipDefaultLead
#print axioms fda_strip
#print axioms fda_url_false
#print axioms freelinkDefaultAll_pieces

end LeanFtml
