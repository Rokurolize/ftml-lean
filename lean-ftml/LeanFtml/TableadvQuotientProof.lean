import LeanFtml.TableadvCertificate
import LeanFtml.TableadvEnum
import LeanFtml.TableadvProof

/-!
TableadvQuotientProof.lean — the alphabet-quotient completion of the Tableadv head-group certificate in TableadvCertificate.lean, closing the two remainders its header recorded that do not wait for PcreCore. First, the byte-class map theorem: the mirror's head search advHeadRuns discriminates bytes only through the two tests `b == 34` (quote) and `b == 93` (bracket), so it commutes with the class map advClass (34 maps to 34, 93 to 93, every other byte to the plain representative 88); that is advHeadRuns_map_advClass below. Second, every component of the certificate predicate headGroupOk is a universal law of the mirror (the splice law, the terminal law, fuel stability by go_ge, the bracket-stop law heads_bracket, quote priority, plain front, and the candidate-count bound), so headGroupOk itself is true on every byte string (headGroupOk_eq_true); the decidable check over the 1,093 quotient strings therefore lifts to arbitrary raw bytes of any length, and the certificate's length-6 named remainder is discharged. The recursive nested-table body search and PcreCore equivalence remain out of scope, as the certificate header states. This file uses Lean core axioms only, with no Mathlib, sorry, native_decide, or bv_decide.
-/

namespace LeanFtml

/-- The byte-class map of the quotient alphabet Sigma_adv = {34, 93, 88}: a byte maps to the representative of its class, where the classes are the quote byte 34, the bracket byte 93, and every other byte (the plain class, represented by 88). -/
def advClass (b : Nat) : Nat :=
  if b == 34 then 34 else if b == 93 then 93 else 88

theorem advClass_34 : advClass 34 = 34 := rfl

theorem advClass_93 : advClass 93 = 93 := rfl

theorem advClass_88 : advClass 88 = 88 := rfl

/-- The class map preserves the quote test, the only test the quoted alternative of the head search performs. -/
theorem advClass_beq_34 (b : Nat) : (advClass b == 34) = (b == 34) := by
  by_cases h34 : (b == 34) = true
  · have hb : b = 34 := beq_iff_eq.mp h34
    simp [advClass, h34, hb]
  · have h34f : (b == 34) = false := by
      cases hb : (b == 34) with
      | true => exact absurd hb h34
      | false => rfl
    by_cases h93 : (b == 93) = true
    · have hb : b = 93 := beq_iff_eq.mp h93
      simp [advClass, h34f, h93, hb]
    · have h93f : (b == 93) = false := by
        cases hb : (b == 93) with
        | true => exact absurd hb h93
        | false => rfl
      simp [advClass, h34f, h93f]

/-- The class map preserves the bracket test, the only test the single-byte alternative of the head search performs. -/
theorem advClass_beq_93 (b : Nat) : (advClass b == 93) = (b == 93) := by
  by_cases h34 : (b == 34) = true
  · have hb : b = 34 := beq_iff_eq.mp h34
    simp [advClass, h34, hb]
  · have h34f : (b == 34) = false := by
      cases hb : (b == 34) with
      | true => exact absurd hb h34
      | false => rfl
    by_cases h93 : (b == 93) = true
    · have hb : b = 93 := beq_iff_eq.mp h93
      simp [advClass, h34f, h93, hb]
    · have h93f : (b == 93) = false := by
        cases hb : (b == 93) with
        | true => exact absurd hb h93
        | false => rfl
      simp [advClass, h34f, h93f]

/-- The 34-fiber of the class map is exactly {34}: a byte's class is the quote representative iff the byte is the quote byte. -/
theorem advClass_eq_34 {b : Nat} : advClass b = 34 ↔ b = 34 := by
  constructor
  · intro h
    have hbeq : (advClass b == 34) = true := by simp [h]
    rw [advClass_beq_34] at hbeq
    exact beq_iff_eq.mp hbeq
  · intro h
    simp [h, advClass]

/-- The 93-fiber of the class map is exactly {93}. -/
theorem advClass_eq_93 {b : Nat} : advClass b = 93 ↔ b = 93 := by
  constructor
  · intro h
    have hbeq : (advClass b == 93) = true := by simp [h]
    rw [advClass_beq_93] at hbeq
    exact beq_iff_eq.mp hbeq
  · intro h
    simp [h, advClass]

/-- Every byte's class is one of the three quotient representatives. -/
theorem advClass_mem (b : Nat) : advClass b ∈ advQuotientAlphabet := by
  by_cases h34 : (b == 34) = true
  · have hb : b = 34 := beq_iff_eq.mp h34
    simp [advClass, h34, hb, advQuotientAlphabet]
  · have h34f : (b == 34) = false := by
      cases hb : (b == 34) with
      | true => exact absurd hb h34
      | false => rfl
    by_cases h93 : (b == 93) = true
    · have hb : b = 93 := beq_iff_eq.mp h93
      simp [advClass, h34f, h93, hb, advQuotientAlphabet]
    · have h93f : (b == 93) = false := by
        cases hb : (b == 93) with
        | true => exact absurd hb h93
        | false => rfl
      simp [advClass, h34f, h93f, advQuotientAlphabet]

/-- The class map preserves the not-quote test used by the quoted run's takeWhile. -/
theorem advClass_bne_34 (b : Nat) : (advClass b != 34) = (b != 34) := by
  show (!(advClass b == 34)) = (!(b == 34))
  rw [advClass_beq_34]

/-- The class map commutes with the head search's takeWhile over non-quote bytes. -/
theorem takeWhile_map_advClass (l : List Nat) :
    (l.map advClass).takeWhile (fun x => x != 34) =
      (l.takeWhile (fun x => x != 34)).map advClass := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
      by_cases hx : (x != 34) = true
      · have hx' : (advClass x != 34) = true := by
          rw [advClass_bne_34]; exact hx
        simp [List.takeWhile_cons, hx, hx', ih]
      · have hxf : (x != 34) = false := by
          cases h : (x != 34) with
          | true => exact absurd h hx
          | false => rfl
        have hx' : (advClass x != 34) = false := by
          rw [advClass_bne_34]; exact hxf
        simp [List.takeWhile_cons, hx, hx', hxf]

/-- The class map commutes with drop. -/
theorem drop_map_advClass (n : Nat) (l : List Nat) :
    (l.map advClass).drop n = (l.drop n).map advClass := by
  induction n generalizing l with
  | zero => rfl
  | succ n ih =>
      cases l with
      | nil => rfl
      | cons x xs => simpa using ih xs

/-- The class map commutes with take. -/
theorem take_map_advClass (n : Nat) (l : List Nat) :
    (l.map advClass).take n = (l.take n).map advClass := by
  induction n generalizing l with
  | zero => rfl
  | succ n ih =>
      cases l with
      | nil => rfl
      | cons x xs => simpa using ih xs

/-- The pointwise class map on a head-run pair: both components mapped. -/
def advClassPair (p : List Nat × List Nat) : List Nat × List Nat :=
  (p.1.map advClass, p.2.map advClass)

/-- Mapping the class map over the quoted continuation's results commutes with the quoted-token construction, in the form headStep's step equation produces after take on a cons is pushed inside: the class byte is prepended outside a take of one more than the inner length. Per element this is take_map_advClass plus the takeWhile length equality between the mapped and raw rests. -/
theorem map_advClassPair_quote (b : Nat) (rest : List Nat) (q : List (List Nat × List Nat)) :
    (q.map advClassPair).map (fun x => (advClass b :: (rest.map advClass).take (((rest.map advClass).takeWhile (fun y => y != 34)).length + 1) ++ x.1, x.2)) =
      (q.map (fun x => (b :: (rest.take ((rest.takeWhile (fun y => y != 34)).length + 1) ++ x.1), x.2))).map advClassPair := by
  induction q with
  | nil => rfl
  | cons p ps ih =>
      cases p with
      | mk run rr =>
          have e1 : ((rest.map advClass).takeWhile (fun y => y != 34)).length =
              (rest.takeWhile (fun y => y != 34)).length := by
            rw [takeWhile_map_advClass, List.length_map]
          simp only [List.map_cons]
          congr 1
          · simp only [advClassPair, List.map_cons, List.map_append, List.cons_append, take_map_advClass, e1]

/-- The circ-composed form of map_advClassPair_quote, matching the normal form plain simp produces for map-of-map terms in headStep's congruence. -/
theorem map_advClassPair_quote_comp (b : Nat) (rest : List Nat) (q : List (List Nat × List Nat)) :
    List.map ((fun x => (advClass b :: (rest.map advClass).take (((rest.map advClass).takeWhile (fun y => y != 34)).length + 1) ++ x.1, x.2)) ∘ advClassPair) q =
      List.map advClassPair (q.map (fun x => (b :: (rest.take ((rest.takeWhile (fun y => y != 34)).length + 1) ++ x.1), x.2))) := by
  rw [← List.map_map]
  exact map_advClassPair_quote b rest q

/-- Mapping the class map over the single-byte continuation's results commutes with prepending the head byte: the byte's class is prepended on the mapped side. -/
theorem map_advClassPair_single (b : Nat) (r : List (List Nat × List Nat)) :
    (r.map advClassPair).map (fun x => (advClass b :: x.1, x.2)) =
      (r.map (fun x => (b :: x.1, x.2))).map advClassPair := by
  induction r with
  | nil => rfl
  | cons p ps ih =>
      cases p with
      | mk run rr => simp only [List.map_cons, ih, advClassPair, List.map_cons]

/-- The circ-composed form of map_advClassPair_single, matching the normal form plain simp produces for map-of-map terms in headStep's congruence. -/
theorem map_advClassPair_single_comp (b : Nat) (r : List (List Nat × List Nat)) :
    List.map ((fun x => (advClass b :: x.1, x.2)) ∘ advClassPair) r =
      List.map advClassPair (r.map (fun x => (b :: x.1, x.2))) := by
  rw [← List.map_map]
  exact map_advClassPair_single b r

/-- One head-search step commutes with the class map: the step's two byte tests are class-invariant (advClass_beq_34, advClass_beq_93), its takeWhile and drop commute with the map, and its two continuation maps commute by the two helpers above. -/
theorem headStep_map_advClass (b : Nat) (rest : List Nat)
    (q r : List (List Nat × List Nat)) :
    headStep (advClass b) (rest.map advClass) (q.map advClassPair) (r.map advClassPair) =
      (headStep b rest q r).map advClassPair := by
  have e1 : ((rest.map advClass).takeWhile (fun x => x != 34)).length =
      (rest.takeWhile (fun x => x != 34)).length := by
    rw [takeWhile_map_advClass, List.length_map]
  have hdropL : (rest.map advClass).drop
        ((rest.map advClass).takeWhile (fun x => x != 34)).length =
      (rest.drop (rest.takeWhile (fun x => x != 34)).length).map advClass := by
    rw [e1, drop_map_advClass]
  simp only [headStep]
  rw [hdropL]
  cases hdropR : rest.drop (rest.takeWhile (fun x => x != 34)).length with
  | nil =>
      simp [hdropR, advClass_beq_34, advClass_beq_93, map_advClassPair_single_comp,
        List.map_append, advClassPair]
      repeat (first | split |
        (intro a b _; simp only [advClassPair, List.map_cons, List.map_append,
          take_map_advClass, e1, advClass_34]) |
        simp_all [List.map_map, map_advClassPair_single_comp, map_advClassPair_single,
          map_advClassPair_quote_comp, map_advClassPair_quote])
  | cons c cs =>
      by_cases hc : advClass c = 34
      · have hc34 : c = 34 := advClass_eq_34.mp hc
        subst hc34
        simp [hdropR, advClass_beq_34, advClass_beq_93, advClass_34,
          map_advClassPair_single_comp, map_advClassPair_quote_comp,
          List.map_append, advClassPair]
        repeat (first | split |
        (intro a b _; simp only [advClassPair, List.map_cons, List.map_append,
          take_map_advClass, e1, advClass_34]) |
        simp_all [List.map_map, map_advClassPair_single_comp, map_advClassPair_single,
          map_advClassPair_quote_comp, map_advClassPair_quote])
      · have hcR : c ≠ 34 := by
          intro hcon
          exact hc (by rw [hcon]; exact advClass_34)
        simp [hdropR, advClass_beq_34, advClass_beq_93, map_advClassPair_single_comp,
          List.map_append, advClassPair, hc, hcR]
        repeat (first | split |
        (intro a b _; simp only [advClassPair, List.map_cons, List.map_append,
          take_map_advClass, e1, advClass_34]) |
        simp_all [List.map_map, map_advClassPair_single_comp, map_advClassPair_single,
          map_advClassPair_quote_comp, map_advClassPair_quote])

/-- The head search commutes with the class map at every fuel: the mapped source's runs are exactly the class-mapped runs of the raw source. Induction on fuel through go_cons_step and the headStep congruence. -/
theorem go_map_advClass (fuel : Nat) (src : List Nat) :
    advHeadRuns.go (src.map advClass) fuel =
      (advHeadRuns.go src fuel).map advClassPair := by
  induction fuel generalizing src with
  | zero =>
      cases src with
      | nil => simp [tadvHeadGoNil, advClassPair]
      | cons b rest => simp [advHeadRuns.go, advClassPair]
  | succ fuel ih =>
      cases src with
      | nil => simp [tadvHeadGoNil, advClassPair]
      | cons b rest =>
          rw [List.map_cons, go_cons_step, go_cons_step]
          have e1 : ((rest.map advClass).takeWhile (fun x => x != 34)).length =
              (rest.takeWhile (fun x => x != 34)).length := by
            rw [takeWhile_map_advClass, List.length_map]
          rw [e1, drop_map_advClass, ih, ih]
          exact headStep_map_advClass b rest _ _

/-- The alphabet-quotient class-map theorem for the Tableadv head search: advHeadRuns depends on a byte string only through its class image under advClass, in the strong form that the runs themselves are the pointwise class images. This is the theorem the certificate's first remainder named: with it, and with the generator membership below, the 1,093-string decidable check covers every raw byte string whose class image has length at most 6, which is every raw byte string of length at most 6. -/
theorem advHeadRuns_map_advClass (src : List Nat) :
    advHeadRuns (src.map advClass) = (advHeadRuns src).map advClassPair := by
  show advHeadRuns.go (src.map advClass) ((src.map advClass).length + 1) =
    (advHeadRuns.go src (src.length + 1)).map advClassPair
  rw [List.length_map]
  exact go_map_advClass _ _

/-- Consing a quotient letter onto a generator string stays in the generator at the next length: the append-built quotExact also absorbs front-cons, by induction on the length, peeling the last byte of the body with the flatMap form. -/
theorem quotExact_cons_mem_aux (b : Nat) (hb : b ∈ advQuotientAlphabet) :
    ∀ (n : Nat) (s : List Nat), s.length = n → s ∈ quotExact n →
      (b :: s) ∈ quotExact (n + 1) := by
  intro n
  induction n with
  | zero =>
      intro s hlen hs
      have hs0 : s = [] := by
        have h0 : s ∈ ( [[]] : List (List Nat) ) := hs
        simpa using h0
      subst hs0
      show [b] ∈ quotExact 1
      simp [quotExact, hb]
  | succ n ih =>
      intro s hlen hs
      have hs' : s ∈ List.flatMap
          (fun t => advQuotientAlphabet.map (fun c => t ++ [c])) (quotExact n) := hs
      rw [List.mem_flatMap] at hs'
      obtain ⟨t, ht, hc⟩ := hs'
      rw [List.mem_map] at hc
      obtain ⟨c, hcS, rfl⟩ := hc
      have htlen : t.length = n := by
        have h1 : (t ++ [c]).length = n + 1 := by
          rw [List.length_append]; simpa using hlen
        simpa [List.length_append] using h1
      have hbt : (b :: t) ∈ quotExact (n + 1) := ih t htlen ht
      show (b :: (t ++ [c])) ∈ quotExact (n + 1 + 1)
      have hform : (b :: (t ++ [c])) = (b :: t) ++ [c] := by simp
      rw [hform]
      show ((b :: t) ++ [c]) ∈ List.flatMap
        (fun t => advQuotientAlphabet.map (fun c => t ++ [c])) (quotExact (n + 1))
      rw [List.mem_flatMap]
      exact ⟨b :: t, hbt, by
        rw [List.mem_map]
        exact ⟨c, hcS, rfl⟩⟩

/-- Every string over the quotient alphabet is generated by quotExact at its own length. -/
theorem quotExact_mem (l : List Nat) (h : ∀ b ∈ l, b ∈ advQuotientAlphabet) :
    l ∈ quotExact l.length := by
  induction l with
  | nil => simp [quotExact]
  | cons b s ih =>
      have hb : b ∈ advQuotientAlphabet := h b (by simp)
      have hs : ∀ b' ∈ s, b' ∈ advQuotientAlphabet :=
        fun b' hb' => h b' (List.mem_cons_of_mem b hb')
      exact quotExact_cons_mem_aux b hb s.length s rfl (ih hs)

/-- quotExact at any length up to L sits inside quotUpTo L. -/
theorem quotUpTo_mem_of_le : ∀ (L k : Nat), k ≤ L → ∀ (l : List Nat),
    l ∈ quotExact k → l ∈ quotUpTo L := by
  intro L
  induction L with
  | zero =>
      intro k hk l hl
      have hk0 : k = 0 := by omega
      subst hk0
      exact hl
  | succ L ih =>
      intro k hk l hl
      show l ∈ quotUpTo L ++ quotExact (L + 1)
      cases Nat.lt_or_eq_of_le hk with
      | inl hlt =>
          exact List.mem_append_left _ (ih k (by omega) l hl)
      | inr heq =>
          have hk' : k = L + 1 := heq
          subst hk'
          exact List.mem_append_right _ hl

/-- The class image of any raw byte string of length at most 6 is a generator string: its letters are quotient representatives by advClass_mem, and its length is the raw length. With advHeadRuns_map_advClass and certificate_true, the certificate's check therefore covers every raw byte string of length at most 6. -/
theorem generator_mem_map_advClass (src : List Nat) (h : src.length ≤ 6) :
    src.map advClass ∈ generator := by
  have hmem : src.map advClass ∈ quotExact (src.map advClass).length :=
    quotExact_mem _ (fun b hb => by
      obtain ⟨x, _, rfl⟩ := List.mem_map.mp hb
      exact advClass_mem x)
  rw [List.length_map] at hmem
  show src.map advClass ∈ quotUpTo certBound
  exact quotUpTo_mem_of_le certBound src.length (by simpa [certBound] using h) _ hmem

/-- Splice law for one head step: if every continuation pair in q splices onto the quote continuation's rest and every pair in r splices onto rest, then every pair the step emits splices onto the whole source. -/
theorem headStep_splice {b : Nat} {rest : List Nat}
    {q r : List (List Nat × List Nat)}
    (hq : ∀ p ∈ q, p.1 ++ p.2 =
      rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1))
    (hr : ∀ p ∈ r, p.1 ++ p.2 = rest)
    {p : List Nat × List Nat} (hp : p ∈ headStep b rest q r) :
    p.1 ++ p.2 = b :: rest := by
  unfold headStep at hp
  dsimp only at hp
  rw [List.mem_append, List.mem_append, List.mem_singleton] at hp
  rcases hp with (hqmem | hsmem) | htmem
  · by_cases h34 : (b == 34) = true
    · cases hdrop : rest.drop (rest.takeWhile (fun x => x != 34)).length with
      | nil =>
          simp [h34, hdrop] at hqmem
      | cons c cs =>
          by_cases hc : c = 34
          · subst c
            rw [if_pos h34, hdrop] at hqmem
            simp only [List.mem_map] at hqmem
            obtain ⟨⟨run, rr⟩, hmem, rfl⟩ := hqmem
            have hsp := hq (run, rr) hmem
            have htake : (b :: rest).take
                  ((rest.takeWhile (fun x => x != 34)).length + 2) =
                b :: rest.take ((rest.takeWhile (fun x => x != 34)).length + 1) := by
              rw [show (rest.takeWhile (fun x => x != 34)).length + 2 =
                ((rest.takeWhile (fun x => x != 34)).length + 1) + 1 by omega]
              rfl
            show ((b :: rest).take ((rest.takeWhile (fun x => x != 34)).length + 2) ++ run) ++ rr = b :: rest
            rw [htake, List.append_assoc, hsp]
            exact congrArg (b :: ·) (List.take_append_drop _ _)
          · simp [h34, hdrop, hc] at hqmem
    · have h34f : (b == 34) = false := by
        cases h : (b == 34) <;> simp_all
      simp [h34f] at hqmem
  · by_cases h93 : (b == 93) = true
    · simp [h93] at hsmem
    · have h93f : (b == 93) = false := by
        cases h : (b == 93) <;> simp_all
      rw [if_neg (by simp [h93f])] at hsmem
      rw [List.mem_map] at hsmem
      obtain ⟨⟨run, rr⟩, hmem, rfl⟩ := hsmem
      have hsp := hr (run, rr) hmem
      show (b :: run) ++ rr = b :: rest
      rw [List.cons_append, hsp]
  · subst htmem
    rfl

/-- The splice law for the head search: every run pair splices onto its source, at every fuel. -/
theorem go_splice : ∀ (fuel : Nat) (src : List Nat) (p : List Nat × List Nat),
    p ∈ advHeadRuns.go src fuel → p.1 ++ p.2 = src := by
  intro fuel
  induction fuel with
  | zero =>
      intro src p hp
      cases src with
      | nil =>
          rw [tadvHeadGoNil] at hp
          simp at hp
          obtain rfl := hp
          rfl
      | cons b rest =>
          have h0 : advHeadRuns.go (b :: rest) 0 = [([], b :: rest)] := by
            simp [advHeadRuns.go]
          rw [h0] at hp
          simp at hp
          obtain rfl := hp
          rfl
  | succ fuel ih =>
      intro src p hp
      cases src with
      | nil =>
          rw [tadvHeadGoNil] at hp
          simp at hp
          obtain rfl := hp
          rfl
      | cons b rest =>
          rw [go_cons_step] at hp
          exact headStep_splice (fun p' hp' => ih _ p' hp') (fun p' hp' => ih _ p' hp') hp

/-- The splice law at the head search's own fuel. -/
theorem advHeadRuns_splice {src : List Nat} {p : List Nat × List Nat}
    (hp : p ∈ advHeadRuns src) : p.1 ++ p.2 = src :=
  go_splice _ _ _ hp

/-- The last element of an appended singleton list is that element. -/
theorem getLast?_append_singleton {α : Type} (l : List α) (x : α) :
    (l ++ [x]).getLast? = some x := by
  induction l with
  | nil => rfl
  | cons a l ih =>
      cases l with
      | nil => rfl
      | cons c l' =>
          exact ih

/-- Terminal law for the head search: the last run pair is always the empty head on the whole source, at every fuel, because every step appends that pair last. -/
theorem go_getLast : ∀ (fuel : Nat) (src : List Nat),
    (advHeadRuns.go src fuel).getLast? = some ([], src) := by
  intro fuel src
  cases fuel with
  | zero =>
      cases src with
      | nil =>
          rw [tadvHeadGoNil]
          exact getLast?_append_singleton [] _
      | cons b rest =>
          have h0 : advHeadRuns.go (b :: rest) 0 = [([], b :: rest)] := by
            simp [advHeadRuns.go]
          rw [h0]
          exact getLast?_append_singleton [] _
  | succ fuel =>
      cases src with
      | nil =>
          rw [tadvHeadGoNil]
          exact getLast?_append_singleton [] _
      | cons b rest =>
          rw [go_cons_step]
          unfold headStep
          dsimp only
          rw [getLast?_append_singleton]

/-- The terminal law at the head search's own fuel. -/
theorem advHeadRuns_getLast (src : List Nat) :
    (advHeadRuns src).getLast? = some ([], src) :=
  go_getLast _ _

/-- The head search always returns at least one run pair. -/
theorem advHeadRuns_ne_nil (src : List Nat) : advHeadRuns src ≠ [] := by
  intro h
  have hg := advHeadRuns_getLast src
  rw [h] at hg
  simp at hg

/-- The head search's result decomposes as a first pair and a tail. -/
theorem advHeadRuns_cons (src : List Nat) :
    ∃ (run rr : List Nat) (more : List (List Nat × List Nat)),
      advHeadRuns src = (run, rr) :: more := by
  cases h : advHeadRuns src with
  | nil => exact absurd h (advHeadRuns_ne_nil src)
  | cons p more =>
      exact ⟨p.1, p.2, more, by cases p with | mk run rr => rfl⟩

/-- Length bound for one head step: the step emits at most one pair per continuation pair, plus the terminal pair. -/
theorem headStep_length_le {b : Nat} {rest : List Nat}
    {q r : List (List Nat × List Nat)} {Q R : Nat}
    (hq : q.length ≤ Q) (hr : r.length ≤ R) :
    (headStep b rest q r).length ≤ Q + R + 1 := by
  by_cases h34 : (b == 34) = true
  · by_cases h93 : (b == 93) = true
    · cases hdrop : rest.drop (rest.takeWhile (fun x => x != 34)).length with
      | nil => simp [headStep, h34, h93, hdrop]
      | cons c cs =>
          by_cases hc : c = 34
          · subst c
            simp [headStep, h34, h93, hdrop, List.length_map]
            omega
          · simp [headStep, h34, h93, hdrop, hc]
    · have h93f : (b == 93) = false := by
        cases h : (b == 93) <;> simp_all
      cases hdrop : rest.drop (rest.takeWhile (fun x => x != 34)).length with
      | nil =>
          simp [headStep, h34, h93f, hdrop]
          omega
      | cons c cs =>
          by_cases hc : c = 34
          · subst c
            simp [headStep, h34, h93f, hdrop, List.length_map]
            omega
          · simp [headStep, h34, h93f, hdrop, hc]
            omega
  · have h34f : (b == 34) = false := by
      cases h : (b == 34) <;> simp_all
    by_cases h93 : (b == 93) = true
    · simp [headStep, h34f, h93]
    · have h93f : (b == 93) = false := by
        cases h : (b == 93) <;> simp_all
      simp [headStep, h34f, h93f, List.length_map]
      omega

/-- The candidate-count bound, in the strengthened form (advHeadRuns src).length ≤ 2 ^ (n + 1) - 1 for every src of length at most n: at a cons, both continuations are bounded by the same quantity at n, and (2 ^ (n + 1) - 1) + (2 ^ (n + 1) - 1) + 1 = 2 ^ (n + 2) - 1 exactly. -/
theorem advHeadRuns_length_le_aux : ∀ (n : Nat) (src : List Nat),
    src.length ≤ n → (advHeadRuns src).length ≤ 2 ^ (n + 1) - 1 := by
  intro n
  induction n with
  | zero =>
      intro src hlen
      have hsrc : src = [] := by
        cases src with
        | nil => rfl
        | cons b rest => simp at hlen
      subst hsrc
      have h1 : advHeadRuns [] = [([], [])] := by
        change advHeadRuns.go [] ([].length + 1) = [([], [])]
        exact tadvHeadGoNil _
      rw [h1]
      decide
  | succ n ih =>
      intro src hlen
      cases src with
      | nil =>
          have h1 : advHeadRuns [] = [([], [])] := by
            change advHeadRuns.go [] ([].length + 1) = [([], [])]
            exact tadvHeadGoNil _
          rw [h1]
          have hX : (1 : Nat) ≤ 2 ^ (n + 1 + 1) := Nat.one_le_two_pow
          simp only [List.length_cons, List.length_nil]
          omega
      | cons b rest =>
          have hrest : rest.length ≤ n := by
            have h1 : (b :: rest).length = rest.length + 1 := rfl
            omega
          have hfull : advHeadRuns (b :: rest) =
              headStep b rest
                (advHeadRuns (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1)))
                (advHeadRuns rest) := by
            change advHeadRuns.go (b :: rest) ((b :: rest).length + 1) = _
            have ihT1 := go_ge (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1))
              (rest.length + 1) (Nat.le_trans (drop_tail_le rest) (Nat.le_succ _))
            have ihR1 := go_ge rest (rest.length + 1) (Nat.le_succ _)
            simpa [ihT1, ihR1] using go_cons_step b rest (rest.length + 1)
          rw [hfull]
          have hR : (advHeadRuns rest).length ≤ 2 ^ (n + 1) - 1 := ih rest hrest
          have hD : (advHeadRuns
              (rest.drop ((rest.takeWhile (fun x => x != 34)).length + 1))).length
              ≤ 2 ^ (n + 1) - 1 := by
            apply ih
            rw [List.length_drop]
            omega
          have hstep : (headStep b rest _ _).length ≤
              (2 ^ (n + 1) - 1) + (2 ^ (n + 1) - 1) + 1 :=
            headStep_length_le hD hR
          have hpow : (2 : Nat) ^ (n + 1 + 1) = 2 ^ (n + 1) + 2 ^ (n + 1) := by
            have hr : (2 : Nat) ^ (n + 1 + 1) = 2 ^ (n + 1) * 2 := rfl
            rw [hr]
            omega
          have hX : (1 : Nat) ≤ 2 ^ (n + 1) := Nat.one_le_two_pow
          show (headStep b rest _ _).length ≤ 2 ^ (n + 1 + 1) - 1
          rw [hpow]
          omega

/-- The candidate-count bound at a string's own length, hence the certificate predicate's countOk bound 2 ^ (length + 1). -/
theorem advHeadRuns_length_le (src : List Nat) :
    (advHeadRuns src).length ≤ 2 ^ (src.length + 1) - 1 :=
  advHeadRuns_length_le_aux src.length src (Nat.le_refl _)

/-- The plain-front pin is a universal law: 88 is a plain byte, so the first run of the head search on 88 :: src starts with byte 88, by advHeadRuns_plain_byte. -/
theorem plainFirstOk_eq_true (src : List Nat) : plainFirstOk src = true := by
  obtain ⟨run, rr, more, hsrc⟩ := advHeadRuns_cons src
  have hb : tableadvBytePlain 88 = true := by decide
  have h := advHeadRuns_plain_byte 88 src run rr more hb hsrc
  unfold plainFirstOk
  rw [h]
  rfl

/-- Taking the first (takeWhile length) bytes of a list gives back the takeWhile itself. -/
theorem take_takeWhile_length (l : List Nat) :
    l.take (l.takeWhile (fun x => x != 34)).length =
      l.takeWhile (fun x => x != 34) := by
  induction l with
  | nil => rfl
  | cons x xs ih =>
      by_cases hx : (x != 34) = true
      · simp [List.takeWhile_cons, hx, ih]
      · have hxf : (x != 34) = false := by
          cases h : (x != 34) <;> simp_all
        simp [List.takeWhile_cons, hx, hxf]

/-- Taking one more than a list's length from an append keeps the whole list and the head of the tail. -/
theorem take_append_succ (l X : List Nat) :
    (l ++ X).take (l.length + 1) = l ++ X.take 1 := by
  induction l with
  | nil => rfl
  | cons a l ih =>
      show a :: (l ++ X).take (l.length + 1) = a :: (l ++ X.take 1)
      rw [ih]

/-- The quote-priority pin is a universal law: when a closed quote starts the source, advHeadRuns_quote_front puts the quoted token first, its take is the whole quoted token by take_quote_closed, and it splices by advHeadRuns_splice; in every other case the pin is true by its own fall-through branches. -/
theorem quotePriorityOk_eq_true (src : List Nat) : quotePriorityOk src = true := by
  cases src with
  | nil => simp [quotePriorityOk]
  | cons b rest =>
      by_cases hb : b = 34
      · subst b
        cases hdrop : rest.drop (rest.takeWhile (fun x => x != 34)).length with
        | nil => simp [quotePriorityOk, hdrop]
        | cons c cs =>
            by_cases hc : c = 34
            · subst c
              have hrest : rest =
                  (rest.takeWhile (fun x => x != 34)) ++ (34 :: cs) := by
                have h1 : rest = rest.take (rest.takeWhile (fun x => x != 34)).length ++
                    rest.drop (rest.takeWhile (fun x => x != 34)).length :=
                  (List.take_append_drop _ _).symm
                rw [take_takeWhile_length, hdrop] at h1
                exact h1
              obtain ⟨run, rr, more, htail⟩ := advHeadRuns_cons cs
              have hfront := advHeadRuns_quote_front
                (rest.takeWhile (fun x => x != 34)) cs run rr more
                (List.all_takeWhile) htail
              obtain ⟨more', hEq⟩ := hfront
              have hsp : run ++ rr = cs := advHeadRuns_splice (by
                rw [htail]
                exact List.mem_cons_self)
              have htw : ((rest.takeWhile (fun x => x != 34)) ++ (34 :: cs)).takeWhile
                    (fun x => x != 34) = rest.takeWhile (fun x => x != 34) := by
                rw [takeWhile_append_ok _ _ (List.all_takeWhile)]
                simp [List.takeWhile_cons]
              have hpre : (34 :: (rest.takeWhile (fun x => x != 34)) ++ [34]).length =
                  (rest.takeWhile (fun x => x != 34)).length + 2 := by simp
              have htake1 : ((34 :: (rest.takeWhile (fun x => x != 34)) ++ [34]) ++ run).take
                    ((rest.takeWhile (fun x => x != 34)).length + 2) =
                  34 :: (rest.takeWhile (fun x => x != 34)) ++ [34] := by
                rw [← hpre]
                exact List.take_left
              have htake2 : (34 :: ((rest.takeWhile (fun x => x != 34)) ++ (34 :: cs))).take
                    ((rest.takeWhile (fun x => x != 34)).length + 2) =
                  34 :: (rest.takeWhile (fun x => x != 34)) ++ [34] :=
                take_quote_closed _ _
              have hsplice : ((34 :: (rest.takeWhile (fun x => x != 34)) ++ [34]) ++ run) ++ rr =
                  34 :: ((rest.takeWhile (fun x => x != 34)) ++ (34 :: cs)) := by
                rw [List.append_assoc, hsp]
                simp [List.append_assoc]
              rw [hrest]
              simp only [quotePriorityOk, htw, List.drop_left, hEq]
              simp [htake2, hsplice, beq_self_eq_true]
              exact ⟨take_append_succ _ _, hsp⟩
            · unfold quotePriorityOk
              split <;> (try dsimp only) <;> (try rw [hdrop]) <;> (try split) <;> simp_all
      · unfold quotePriorityOk
        split <;> simp_all

/-- The certificate predicate holds on every string whatsoever: each of its seven components is a universal law (splice, terminal pair, fuel stability, the count bound, bracket stop, quote priority, plain front), proved above. This discharges the bounded certificate's recorded lift remainder: the 1,093 decidable checks at bound 6 were the finite shadow of a statement that holds for arbitrary raw bytes of any length. -/
theorem headGroupOk_eq_true (src : List Nat) : headGroupOk src = true := by
  have hsplice : List.all (advHeadRuns src) (fun p => p.1 ++ p.2 == src) = true := by
    rw [List.all_eq_true]
    intro p hp
    rw [advHeadRuns_splice hp]
    exact beq_self_eq_true _
  have hfuel : (advHeadRuns.go src (src.length + 1 + 2) == advHeadRuns src) = true := by
    have h : advHeadRuns.go src (src.length + 1 + 2) = advHeadRuns src :=
      go_ge src _ (by omega)
    rw [h]
    exact beq_self_eq_true _
  have hcount : decide ((advHeadRuns src).length ≤ 2 ^ (src.length + 1)) = true := by
    rw [decide_eq_true_eq]
    exact Nat.le_trans (advHeadRuns_length_le src) (by
      have hX : (1 : Nat) ≤ 2 ^ (src.length + 1) := Nat.one_le_two_pow
      omega)
  have hbracket : bracketStopOk src = true := by
    have h : advHeadRuns (93 :: src) = [([], 93 :: src)] := heads_bracket src
    show (advHeadRuns (93 :: src) == [([], 93 :: src)]) = true
    rw [h]
    exact beq_self_eq_true _
  have hquote := quotePriorityOk_eq_true src
  have hplain := plainFirstOk_eq_true src
  unfold headGroupOk
  simp only [advHeadRuns_getLast, hsplice, hfuel, hcount, hbracket, hquote, hplain,
    beq_self_eq_true, Bool.true_and, Bool.and_true]

/-- Predicate-level form of the class-map theorem: the certificate predicate is invariant under the alphabet quotient. Both sides are true outright by headGroupOk_eq_true; the statement is recorded because this invariance is what the bounded certificate's quotient remainder asked for. -/
theorem headGroupOk_map_advClass (src : List Nat) :
    headGroupOk (src.map advClass) = headGroupOk src := by
  rw [headGroupOk_eq_true, headGroupOk_eq_true]

/-- The bounded certificate's lift, in the form the certificate record states it: every raw byte string of length at most the certificate bound satisfies the predicate, with no quotient detour needed. -/
theorem headGroupOk_of_length_le (src : List Nat) (h : src.length ≤ certBound) :
    headGroupOk src = true :=
  headGroupOk_eq_true src

#print axioms advHeadRuns_map_advClass
#print axioms headGroupOk_eq_true
#print axioms generator_mem_map_advClass
