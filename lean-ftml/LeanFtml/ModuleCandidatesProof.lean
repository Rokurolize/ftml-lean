import LeanFtml.ModuleRules

set_option maxHeartbeats 20000000
set_option maxRecDepth 100000

namespace LeanFtml.ModuleCandidatesProof

/-!
Universal enumeration facts for the lazy attribute-group candidates of ModuleRules.lean. Every statement below is about the mirror functions on arbitrary byte lists, with no finite-domain decide and no evaluation dependence. Section 1 proves the exact membership equivalence for close2Suffixes and derives the two halves of goal (a) from it. Section 2 proves the strict length ordering, nodup, and tail-injectivity, which together give goal (b)'s "exactly once". Section 3 characterizes the candidate list that moduleHead returns in the whitespace-after-name case of goal (c) in terms of the raw attribute bytes and the residual, using the fact that a whitespace byte is not a closing bracket so the suffix enumeration over rest3.drop 1 already coincides with the one over rest3. The only named gap is that moduleHead's no-whitespace single-candidate branch and the outer matchLitCI / name-run branches are not re-characterized here; this file is strictly about the whitespace-after-name branch.
-/

/-! ## 0. Take-prefix helper -/

theorem mcp_take_pre (pre sfx : List Nat) : (pre ++ sfx).take pre.length = pre := by
  induction pre with
  | nil => simp
  | cons x pre ih => simp [ih]

/-! ## 1. Membership equivalence and goal (a) -/

theorem mcp_mem_iff : ∀ (xs sfx : List Nat),
    sfx ∈ close2Suffixes xs ↔ ∃ pre, xs = pre ++ sfx ∧ sfx.take 2 = [93, 93]
  | [], sfx => by
      constructor
      · intro h
        simp [close2Suffixes] at h
      · rintro ⟨pre, hpre, ht2⟩
        have hlen2 : 2 ≤ sfx.length := by
          cases sfx with
          | nil => simp at ht2
          | cons u sfx' =>
              cases sfx' with
              | nil => simp at ht2
              | cons v t => simp
        have hz : 0 = pre.length + sfx.length := by
          simpa using congrArg List.length hpre
        omega
  | a :: xs, sfx => by
      constructor
      · intro h
        simp [close2Suffixes] at h
        rcases h with h | h
        · rcases h with ⟨hcond, hs⟩
          subst sfx
          refine ⟨[], rfl, ?_⟩
          simpa using hcond
        · rcases (mcp_mem_iff xs sfx).mp h with ⟨pre, hpre, ht2⟩
          exact ⟨a :: pre, by simp [hpre], ht2⟩
      · rintro ⟨pre, hpre, ht2⟩
        cases pre with
        | nil =>
            simp at hpre
            subst sfx
            have hcond : a = 93 ∧ xs.take 1 = [93] := by simpa using ht2
            simp [close2Suffixes, hcond]
        | cons p pre' =>
            injection hpre with hap hxs
            subst p
            have hmem : sfx ∈ close2Suffixes xs := (mcp_mem_iff xs sfx).mpr ⟨pre', hxs, ht2⟩
            simp [close2Suffixes, hmem]

theorem mcp_member_starts_close {xs sfx : List Nat} (h : sfx ∈ close2Suffixes xs) :
    sfx.take 2 = [93, 93] := by
  rcases (mcp_mem_iff xs sfx).mp h with ⟨pre, hpre, ht2⟩
  exact ht2

theorem mcp_member_is_suffix {xs sfx : List Nat} (h : sfx ∈ close2Suffixes xs) :
    ∃ pre, xs = pre ++ sfx := by
  rcases (mcp_mem_iff xs sfx).mp h with ⟨pre, hpre, ht2⟩
  exact ⟨pre, hpre⟩

theorem mcp_len_le {xs sfx : List Nat} (h : sfx ∈ close2Suffixes xs) :
    sfx.length ≤ xs.length := by
  rcases (mcp_mem_iff xs sfx).mp h with ⟨pre, hpre, ht2⟩
  have hz : xs.length = pre.length + sfx.length := by
    simpa using congrArg List.length hpre
  omega

/-! ## 2. Order, nodup, and exactly-once -/

theorem mcp_pairwise_len : ∀ xs : List Nat,
    (close2Suffixes xs).Pairwise (fun a b => b.length < a.length)
  | [] => by simp [close2Suffixes]
  | a :: xs => by
      by_cases hc : ((a :: xs).take 2 == [93, 93]) = true
      · rw [close2Suffixes, if_pos hc]
        constructor
        · intro b hb
          have hle := mcp_len_le hb
          simp at hle ⊢
          omega
        · exact mcp_pairwise_len xs
      · have hcf : ¬ (a = 93 ∧ xs.take 1 = [93]) := by simpa using hc
        simp [close2Suffixes, hcf, mcp_pairwise_len xs]

theorem mcp_nodup : ∀ xs : List Nat, (close2Suffixes xs).Nodup
  | [] => by simp [close2Suffixes]
  | a :: xs => by
      by_cases hc : ((a :: xs).take 2 == [93, 93]) = true
      · rw [close2Suffixes, if_pos hc]
        change ((a :: xs) :: close2Suffixes xs).Nodup
        rw [List.nodup_cons]
        constructor
        · intro hm
          have hle := mcp_len_le hm
          simp at hle
          omega
        · exact mcp_nodup xs
      · have hcf : ¬ (a = 93 ∧ xs.take 1 = [93]) := by simpa using hc
        simp [close2Suffixes, hcf, mcp_nodup xs]

theorem mcp_unique_by_tail {xs sfx1 sfx2 : List Nat}
    (h1 : sfx1 ∈ close2Suffixes xs) (h2 : sfx2 ∈ close2Suffixes xs)
    (hd : sfx1.drop 2 = sfx2.drop 2) : sfx1 = sfx2 := by
  have h1t := mcp_member_starts_close h1
  have h2t := mcp_member_starts_close h2
  calc
    sfx1 = sfx1.take 2 ++ sfx1.drop 2 := (List.take_append_drop 2 sfx1).symm
    _ = [93, 93] ++ sfx1.drop 2 := by rw [h1t]
    _ = [93, 93] ++ sfx2.drop 2 := by rw [hd]
    _ = sfx2.take 2 ++ sfx2.drop 2 := by rw [h2t]
    _ = sfx2 := List.take_append_drop 2 sfx2

/-! ## 3. Raw-attribute decomposition and the moduleHead whitespace branch -/

theorem mcp_raw_decomp {r sfx : List Nat} (h : sfx ∈ close2Suffixes r) :
    r.take (r.length - sfx.length) ++ sfx = r ∧
    sfx.take 2 = [93, 93] ∧
    r.take (r.length - sfx.length) ++ ([93, 93] ++ sfx.drop 2) = r := by
  rcases (mcp_mem_iff r sfx).mp h with ⟨pre, hpre, ht2⟩
  have hlen : r.length = pre.length + sfx.length := by
    simpa using congrArg List.length hpre
  have hsub : r.length - sfx.length = pre.length := by omega
  have htake : r.take (r.length - sfx.length) = pre := by
    rw [hsub, hpre]
    exact mcp_take_pre pre sfx
  have hsfx : sfx = [93, 93] ++ sfx.drop 2 := by
    calc
      sfx = sfx.take 2 ++ sfx.drop 2 := (List.take_append_drop 2 sfx).symm
      _ = [93, 93] ++ sfx.drop 2 := by rw [ht2]
  refine ⟨?_, ht2, ?_⟩
  · calc
      r.take (r.length - sfx.length) ++ sfx = pre ++ sfx := by rw [htake]
      _ = r := hpre.symm
  · calc
      r.take (r.length - sfx.length) ++ ([93, 93] ++ sfx.drop 2)
          = pre ++ ([93, 93] ++ sfx.drop 2) := by rw [htake]
      _ = pre ++ sfx := by rw [← hsfx]
      _ = r := hpre.symm

theorem mcp_cands_decomp (r : List Nat) {attr tail : List Nat}
    (hmem : (attr, tail) ∈
      (close2Suffixes r).map (fun sfx => (r.take (r.length - sfx.length), sfx.drop 2))) :
    ∃ sfx ∈ close2Suffixes r,
      attr = r.take (r.length - sfx.length) ∧
      tail = sfx.drop 2 ∧
      attr ++ sfx = r ∧
      sfx.take 2 = [93, 93] ∧
      attr ++ ([93, 93] ++ tail) = r := by
  rcases List.mem_map.mp hmem with ⟨sfx, hsfx, hpair⟩
  have heq : (attr, tail) = (r.take (r.length - sfx.length), sfx.drop 2) := hpair.symm
  have hattr : attr = r.take (r.length - sfx.length) := congrArg Prod.fst heq
  have htail : tail = sfx.drop 2 := congrArg Prod.snd heq
  rcases mcp_raw_decomp hsfx with ⟨happ, ht2, happ2⟩
  refine ⟨sfx, hsfx, hattr, htail, ?_, ht2, ?_⟩
  · rw [hattr]
    exact happ
  · rw [hattr, htail]
    exact happ2

theorem mcp_ws_ne_close93 (b : Nat) (hb : isWsByte b = true) : b ≠ 93 := by
  intro hb93
  subst b
  simp [isWsByte] at hb

theorem mcp_ws_head_not_close (b : Nat) (t : List Nat) (hb : isWsByte b = true) :
    (b :: t).take 2 ≠ [93, 93] := by
  intro h
  have hbne := mcp_ws_ne_close93 b hb
  cases t with
  | nil => simp at h
  | cons c cs =>
      simp at h
      exact hbne h.1

theorem mcp_close2Suffixes_cons_ws (b : Nat) (t : List Nat) (hb : isWsByte b = true) :
    close2Suffixes (b :: t) = close2Suffixes t := by
  have hbne : b ≠ 93 := mcp_ws_ne_close93 b hb
  have hcf : ¬ (b = 93 ∧ t.take 1 = [93]) := by
    intro h
    exact hbne h.1
  simp [close2Suffixes, hcf]

theorem mcp_moduleHead_ws_case_eq (lit src : List Nat) (w b : Nat) (rest2 t : List Nat)
    (hm : matchLitCI lit src = some (w :: rest2))
    (hw : isWsByte w = true)
    (hn : (rest2.takeWhile isModuleNameByte).isEmpty = false)
    (hrest3 : rest2.drop (rest2.takeWhile isModuleNameByte).length = b :: t)
    (hb : isWsByte b = true) :
    moduleHead lit src =
      some (rest2.takeWhile isModuleNameByte,
        (close2Suffixes t).map (fun sfx =>
          ((b :: t).take ((b :: t).length - sfx.length), sfx.drop 2))) := by
  unfold moduleHead
  rw [hm]
  simp [hw, hn, hrest3, hb]

theorem mcp_moduleHead_ws_case_char (lit src : List Nat) (w b : Nat) (rest2 t : List Nat)
    (cands : List (List Nat × List Nat))
    (hm : matchLitCI lit src = some (w :: rest2))
    (hw : isWsByte w = true)
    (hn : (rest2.takeWhile isModuleNameByte).isEmpty = false)
    (hrest3 : rest2.drop (rest2.takeWhile isModuleNameByte).length = b :: t)
    (hb : isWsByte b = true)
    (hcands : moduleHead lit src = some (rest2.takeWhile isModuleNameByte, cands)) :
    ∀ {attr tail : List Nat}, (attr, tail) ∈ cands →
      ∃ sfx ∈ close2Suffixes t,
        attr = (b :: t).take ((b :: t).length - sfx.length) ∧
        tail = sfx.drop 2 ∧
        attr ++ sfx = b :: t ∧
        sfx.take 2 = [93, 93] ∧
        attr ++ ([93, 93] ++ tail) = b :: t := by
  have hEq := mcp_moduleHead_ws_case_eq lit src w b rest2 t hm hw hn hrest3 hb
  have hcEq : (close2Suffixes t).map (fun sfx =>
        ((b :: t).take ((b :: t).length - sfx.length), sfx.drop 2)) = cands := by
    have hsome : (some (rest2.takeWhile isModuleNameByte,
        (close2Suffixes t).map (fun sfx =>
          ((b :: t).take ((b :: t).length - sfx.length), sfx.drop 2))) :
        Option (List Nat × List (List Nat × List Nat))) =
        some (rest2.takeWhile isModuleNameByte, cands) := hEq.symm.trans hcands
    exact congrArg Prod.snd (Option.some.inj hsome)
  have hclosews : close2Suffixes (b :: t) = close2Suffixes t :=
    mcp_close2Suffixes_cons_ws b t hb
  intro attr tail hmem
  have hmem' : (attr, tail) ∈
      (close2Suffixes (b :: t)).map (fun sfx =>
        ((b :: t).take ((b :: t).length - sfx.length), sfx.drop 2)) := by
    rw [hclosews, hcEq]
    exact hmem
  rcases mcp_cands_decomp (b :: t) hmem' with ⟨sfx, hsfx, hattr, htail, happ, ht2, happ2⟩
  refine ⟨sfx, ?_, hattr, htail, happ, ht2, happ2⟩
  rwa [hclosews] at hsfx

/-! ## Axiom audit -/

#print axioms mcp_take_pre
#print axioms mcp_mem_iff
#print axioms mcp_member_starts_close
#print axioms mcp_member_is_suffix
#print axioms mcp_len_le
#print axioms mcp_pairwise_len
#print axioms mcp_nodup
#print axioms mcp_unique_by_tail
#print axioms mcp_raw_decomp
#print axioms mcp_cands_decomp
#print axioms mcp_ws_ne_close93
#print axioms mcp_ws_head_not_close
#print axioms mcp_close2Suffixes_cons_ws
#print axioms mcp_moduleHead_ws_case_eq
#print axioms mcp_moduleHead_ws_case_char

end LeanFtml.ModuleCandidatesProof
