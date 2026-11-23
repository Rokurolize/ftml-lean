/- LeanFtml.Proof.FreelinkSlug -- universal slug-byte invariant of the mirror's toUnixName. -/

import LeanFtml.LinkRules

set_option maxHeartbeats 0

namespace LeanFtml

-- dropWhile returns a sublist: membership in it implies membership in the source.
theorem freelinkSlug_dropWhile (p : Nat → Bool) (bs : List Nat) :
    ∀ z ∈ bs.dropWhile p, z ∈ bs := by
  induction bs with
  | nil => simp
  | cons x xs ih =>
      intro z hz
      by_cases hx : p x
      · have hzxs : z ∈ xs := ih z (by simpa [List.dropWhile, hx] using hz)
        simp [hzxs]
      · have hz' : z = x ∨ z ∈ xs := by simpa [List.dropWhile, hx] using hz
        rcases hz' with rfl | hz'
        · simp
        · simp [hz']

-- The dropWhile pass preserves the slug-byte class.
theorem freelinkSlug_dropWhile_slug (p : Nat → Bool) (bs : List Nat)
    (h : ∀ x ∈ bs, isSlugByte x = true) :
    ∀ z ∈ bs.dropWhile p, isSlugByte z = true := by
  intro z hz
  exact h z (freelinkSlug_dropWhile p bs z hz)

-- reverse preserves membership, hence the slug-byte class.
theorem freelinkSlug_reverse (bs : List Nat)
    (h : ∀ x ∈ bs, isSlugByte x = true) :
    ∀ z ∈ bs.reverse, isSlugByte z = true := by
  intro z hz
  exact h z (by simpa using hz)

-- The leading-underscore rewrite only emits 58 and 95 from existing bytes.
theorem freelinkSlug_lead_colon (bs : List Nat)
    (h : ∀ x ∈ bs, isSlugByte x = true) :
    ∀ z ∈ (match bs with | 95 :: rest => 58 :: 95 :: rest | _ => bs), isSlugByte z = true := by
  cases bs with
  | nil => exact h
  | cons hd tl =>
      intro z hz
      by_cases heq : hd = 95
      · subst hd
        simp at hz
        rcases hz with rfl | hz
        · simp [isSlugByte]
        · rcases hz with rfl | hz
          · simp [isSlugByte]
          · exact h z (by simp [hz])
      · have hzbs : z ∈ hd :: tl := by simpa [heq] using hz
        exact h z hzbs

-- Stripping a leading colon only drops bytes.
theorem freelinkSlug_strip_lead_colon (bs : List Nat)
    (h : ∀ x ∈ bs, isSlugByte x = true) :
    ∀ z ∈ (match bs with | 58 :: rest => rest | _ => bs), isSlugByte z = true := by
  cases bs with
  | nil => exact h
  | cons hd tl =>
      intro z hz
      by_cases heq : hd = 58
      · subst hd
        simp at hz
        exact h z (by simp [hz])
      · have hzbs : z ∈ hd :: tl := by simpa [heq] using hz
        exact h z hzbs

-- Stripping a trailing colon only drops bytes.
theorem freelinkSlug_strip_last_colon (bs : List Nat)
    (h : ∀ x ∈ bs, isSlugByte x = true) :
    ∀ z ∈ (match bs.reverse with | 58 :: rest => rest.reverse | _ => bs), isSlugByte z = true := by
  cases hrev : bs.reverse with
  | nil =>
      have hnil : bs = [] := by simpa using congrArg List.reverse hrev
      subst bs
      intro z hz
      simp at hz
  | cons hd tl =>
      intro z hz
      by_cases heq : hd = 58
      · subst hd
        simp at hz
        have hztl : z ∈ tl := by simpa using hz
        have hzrev : z ∈ bs.reverse := by
          rw [hrev]
          simp [hztl]
        exact h z (by simpa using hzrev)
      · have hzbs : z ∈ bs := by simpa [hrev, heq] using hz
        exact h z hzbs

-- underscorePass only preserves input bytes or emits 45.
theorem freelinkSlug_underscorePass (prev : Option Nat) (bs : List Nat)
    (h : ∀ x ∈ bs, isSlugByte x = true) :
    ∀ z ∈ underscorePass prev bs, isSlugByte z = true := by
  exact List.recOn
    (motive := fun xs => ∀ prev : Option Nat,
      (∀ x ∈ xs, isSlugByte x = true) →
      ∀ Hd ∈ underscorePass prev xs, isSlugByte Hd = true)
    bs
    (fun _ h => by simp [underscorePass])
    (fun _ _ _ _ _ => by
      rename_i Hd tl ih prev h
      intro w hw
      by_cases hm : Hd == 95 && prev != some 58
      · have hw' : w = 45 ∨ w ∈ underscorePass (some Hd) tl := by
          simpa [underscorePass, hm] using hw
        rcases hw' with rfl | hw'
        · simp [isSlugByte]
        · exact ih (some Hd) (by intro y hy; exact h y (by simp [hy])) w hw'
      · have hw' : w = Hd ∨ w ∈ underscorePass (some Hd) tl := by
          simpa [underscorePass, hm] using hw
        rcases hw' with rfl | hw'
        · exact h w (by simp)
        · exact ih (some Hd) (by intro y hy; exact h y (by simp [hy])) w hw') prev h

-- collapseRun only preserves input bytes or emits its run byte c, assumed slug.
theorem freelinkSlug_collapseRun (c : Nat) (hc : isSlugByte c = true) (inRun : Bool) (bs : List Nat)
    (h : ∀ x ∈ bs, isSlugByte x = true) :
    ∀ z ∈ collapseRun c inRun bs, isSlugByte z = true := by
  exact List.recOn
    (motive := fun xs => ∀ inRun : Bool,
      (∀ x ∈ xs, isSlugByte x = true) →
      ∀ Hd ∈ collapseRun c inRun xs, isSlugByte Hd = true)
    bs
    (fun _ h => by simp [collapseRun])
    (fun _ _ _ _ _ => by
      rename_i Hd tl ih inRun h
      intro w hw
      by_cases hdc : Hd == c
      · by_cases hin : inRun
        · have hw' : w ∈ collapseRun c true tl := by
            simpa [collapseRun, hdc, hin] using hw
          exact ih true (by intro y hy; exact h y (by simp [hy])) w hw'
        · have hw' : w = c ∨ w ∈ collapseRun c true tl := by
            simpa [collapseRun, hdc, hin] using hw
          rcases hw' with rfl | hw'
          · exact hc
          · exact ih true (by intro y hy; exact h y (by simp [hy])) w hw'
      · have hw' : w = Hd ∨ w ∈ collapseRun c false tl := by
          simpa [collapseRun, hdc] using hw
        rcases hw' with rfl | hw'
        · exact h w (by simp)
        · exact ih false (by intro y hy; exact h y (by simp [hy])) w hw') inRun h

-- replace2 only preserves input bytes or emits its replacement r, assumed slug.
theorem freelinkSlug_replace2 (x y r : Nat) (hr : isSlugByte r = true) (bs : List Nat)
    (h : ∀ w ∈ bs, isSlugByte w = true) :
    ∀ z ∈ replace2 x y r bs, isSlugByte z = true := by
  have main : ∀ n : Nat, ∀ bs : List Nat, bs.length = n →
      (∀ w ∈ bs, isSlugByte w = true) →
      ∀ Hd ∈ replace2 x y r bs, isSlugByte Hd = true := by
    intro n
    exact Nat.strongRecOn n (fun n ih => by
      intro bs hlen hbs
      cases bs with
      | nil =>
          intro z hz
          simp [replace2] at hz
      | cons =>
          rename_i Hd rest
          cases rest with
          | nil =>
              intro z hz
              simp [replace2] at hz
              subst z
              exact hbs Hd (by simp)
          | cons c cs =>
              intro z hz
              by_cases hm : Hd == x && c == y
              · simp [replace2, hm] at hz
                rcases hz with rfl | hz
                · exact hr
                · have hcs : ∀ w ∈ cs, isSlugByte w = true := by
                    intro w hw
                    exact hbs w (by simp [hw])
                  have hlen' := hlen
                  simp at hlen'
                  have hlt : cs.length < n := by omega
                  exact ih cs.length hlt cs rfl hcs z hz
              · simp [replace2, hm] at hz
                rcases hz with rfl | hz
                · exact hbs z (by simp)
                · have htail : ∀ w ∈ c :: cs, isSlugByte w = true := by
                    intro w hw
                    exact hbs w (by simp [hw])
                  have hlen' := hlen
                  simp at hlen'
                  have hlt : (c :: cs).length < n := by
                    simp only [List.length_cons]
                    omega
                  exact ih (c :: cs).length hlt (c :: cs) rfl htail z hz)
  exact main bs.length bs rfl h

-- Every byte toUnixName emits lies in the slug class [a-z0-9\\-:_].
theorem freelinkSlug_bytes (bs : List Nat) :
    ∀ z ∈ toUnixName bs, isSlugByte z = true := by
  let s1 := trimBytes bs
  let s2 := strtrConvert s1
  let s3 := lowerBytes s2
  let s4 := s3.map (fun b => if isSlugByte b then b else 45)
  have hs4 : ∀ z ∈ s4, isSlugByte z = true := by
    dsimp [s4]
    intro z hz
    rcases List.mem_map.mp hz with ⟨a, ha, haz⟩
    subst z
    cases hslug : isSlugByte a
    · simp [hslug, isSlugByte]
    · simpa [hslug] using hslug
  let s5 := match s4 with | 95 :: rest => 58 :: 95 :: rest | _ => s4
  have hs5 : ∀ z ∈ s5, isSlugByte z = true := by
    dsimp [s5]
    exact freelinkSlug_lead_colon s4 hs4
  let s6 := underscorePass none s5
  have hs6 : ∀ z ∈ s6, isSlugByte z = true := by
    dsimp [s6]
    exact freelinkSlug_underscorePass none s5 hs5
  let s7 := s6.dropWhile (fun b => b == 45)
  have hs7 : ∀ z ∈ s7, isSlugByte z = true := by
    dsimp [s7]
    exact freelinkSlug_dropWhile_slug (fun b => b == 45) s6 hs6
  let s8 := (s7.reverse.dropWhile (fun b => b == 45)).reverse
  have hs8 : ∀ z ∈ s8, isSlugByte z = true := by
    dsimp [s8]
    exact freelinkSlug_reverse _ (freelinkSlug_dropWhile_slug (fun b => b == 45) s7.reverse (freelinkSlug_reverse s7 hs7))
  let s9 := collapseRun 45 false s8
  have hs9 : ∀ z ∈ s9, isSlugByte z = true := by
    dsimp [s9]
    exact freelinkSlug_collapseRun 45 (by simp [isSlugByte]) false s8 hs8
  let sA := collapseRun 58 false s9
  have hsA : ∀ z ∈ sA, isSlugByte z = true := by
    dsimp [sA]
    exact freelinkSlug_collapseRun 58 (by simp [isSlugByte]) false s9 hs9
  let sB := replace2 58 45 58 sA
  have hsB : ∀ z ∈ sB, isSlugByte z = true := by
    dsimp [sB]
    exact freelinkSlug_replace2 58 45 58 (by simp [isSlugByte]) sA hsA
  let sC := replace2 45 58 58 sB
  have hsC : ∀ z ∈ sC, isSlugByte z = true := by
    dsimp [sC]
    exact freelinkSlug_replace2 45 58 58 (by simp [isSlugByte]) sB hsB
  let sD := replace2 95 45 95 sC
  have hsD : ∀ z ∈ sD, isSlugByte z = true := by
    dsimp [sD]
    exact freelinkSlug_replace2 95 45 95 (by simp [isSlugByte]) sC hsC
  let sE := replace2 45 95 95 sD
  have hsE : ∀ z ∈ sE, isSlugByte z = true := by
    dsimp [sE]
    exact freelinkSlug_replace2 45 95 95 (by simp [isSlugByte]) sD hsD
  let sF := match sE with | 58 :: rest => rest | _ => sE
  have hsF : ∀ z ∈ sF, isSlugByte z = true := by
    dsimp [sF]
    exact freelinkSlug_strip_lead_colon sE hsE
  have hsG : ∀ z ∈ (match sF.reverse with | 58 :: rest => rest.reverse | _ => sF), isSlugByte z = true :=
    freelinkSlug_strip_last_colon sF hsF
  have hEq : toUnixName bs = (match sF.reverse with | 58 :: rest => rest.reverse | _ => sF) := by
    rfl
  rw [hEq]
  exact hsG

#print axioms freelinkSlug_dropWhile
#print axioms freelinkSlug_underscorePass
#print axioms freelinkSlug_collapseRun
#print axioms freelinkSlug_replace2
#print axioms freelinkSlug_bytes

end LeanFtml
