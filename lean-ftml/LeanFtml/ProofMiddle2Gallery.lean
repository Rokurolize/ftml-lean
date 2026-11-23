-- ProofMiddle2Gallery.lean — kernel-free universal theorems for Middle2Rules' Gallery rule.
-- Wave 2 block-middle proof lane, unit U4. All declarations live in namespace LeanFtml.Middle2.Gallery.
-- Mirror sources are read only; this file proves properties of the mirror's actual functions, never of a second copy.
-- Axiom discipline: no sorry, no native_decide, no bv_decide, no placeholder axioms; only [propext, Classical.choice, Quot.sound].
--
-- NAMED KERNEL-DEPENDENT REMAINDER. GalleryScanPcreObligation below states that the mirror's galleryScan equals the extracted PHP regex decomposition under PcreCore (TCB-2) and RefTables (TCB-4). Those artifacts are not present in this mirror revision, so the obligation is an abstract section parameter and galleryRule_eq_ref_of_correspondence is its conditional reduction only; discharging it is not claimed here. The two Tier-1 byte-bridge obligations parseBytes_byteForm_id and byteForm_parseBytes_id are comment text in TokenStateProof.lean, not declarations: the WF theorem below takes the first as a local hypothesis and never names the commented text as a constant. This revision has no built olean for LeanFtml.TokenStateProof, so the F1 WFState/TokEquiv definitions are projected locally below under Gallery-prefixed names; they are ordinary transparent definitions, and the WF/TokEquiv statements remain explicitly conditional.
--
-- Prose is kept on single lines; no hard wrapping.

import LeanFtml.Middle2Rules

set_option maxRecDepth 10000

namespace LeanFtml.Middle2.Gallery

/-! ## Generic byte-helper facts -/

theorem matchLitCI_length_eq_local (pat src rest : List Nat) (h : matchLitCI pat src = some rest) :
    src.length = pat.length + rest.length := by
  induction pat generalizing src rest with
  | nil =>
      simp [matchLitCI] at h
      subst rest
      simp
  | cons p pt ih =>
      cases src with
      | nil => simp [matchLitCI] at h
      | cons x xs =>
          by_cases hb : byteCiEq x p = true
          · simp [matchLitCI, hb] at h
            have hi := ih xs rest h
            simp_all
            omega
          · simp [matchLitCI, hb] at h

theorem takeWhile_append_drop_local (p : Nat → Bool) (xs : List Nat) :
    xs.takeWhile p ++ xs.drop (xs.takeWhile p).length = xs := by
  induction xs with
  | nil => rfl
  | cons x xs ih =>
      by_cases h : p x = true
      · simp [List.takeWhile, h, ih]
      · simp [List.takeWhile, h]

theorem takeWhile_length_le_local (p : Nat → Bool) (xs : List Nat) :
    (xs.takeWhile p).length ≤ xs.length := by
  induction xs with
  | nil => simp
  | cons x xs ih =>
      by_cases h : p x = true
      · simp [List.takeWhile, h]
        omega
      · simp [List.takeWhile, h]

theorem drop_takeWhile_length_lt_local (p : Nat → Bool) (xs : List Nat)
    (hne : (xs.takeWhile p).isEmpty = false) :
    (xs.drop (xs.takeWhile p).length).length < xs.length := by
  have hpos : 0 < (xs.takeWhile p).length := by
    cases htw : xs.takeWhile p with
    | nil => simp [htw] at hne
    | cons y ys => simp
  have hle := takeWhile_length_le_local p xs
  have hxspos : 0 < xs.length := by omega
  have hd : (xs.drop (xs.takeWhile p).length).length =
      xs.length - (xs.takeWhile p).length := List.length_drop
  rw [hd]
  exact Nat.sub_lt hxspos hpos

/-! ## Opener: present group first, absent fallback -/

theorem galleryOpener_of_no_prefix (src : List Nat)
    (h : matchLitCI (litBytes "[[gallery") src = none) :
    galleryOpener src = none := by
  simp [galleryOpener, h]

theorem galleryOpener_present_group (src r1 r2 : List Nat) (w : Nat)
    (h : matchLitCI (litBytes "[[gallery") src = some (w :: r1))
    (hw : isWsByte w = true)
    (hr : r1.drop (r1.takeWhile (fun b => b != 93)).length = 93 :: 93 :: r2) :
    galleryOpener src = some (w :: r1.takeWhile (fun b => b != 93), r2) := by
  simp [galleryOpener, h, hw, hr]

theorem galleryOpener_absent_group (src r2 : List Nat)
    (h : matchLitCI (litBytes "[[gallery") src = some (93 :: 93 :: r2)) :
    galleryOpener src = some ([], r2) := by
  simp [galleryOpener, h, isWsByte]

theorem galleryOpener_none_of_non_ws (src : List Nat) (w : Nat) (r1 : List Nat)
    (h : matchLitCI (litBytes "[[gallery") src = some (w :: r1))
    (hw : isWsByte w = false) (hw93 : w ≠ 93) :
    galleryOpener src = none := by
  simp [galleryOpener, h, hw, hw93]

theorem galleryOpener_some_of_prefix (src g rest : List Nat)
    (h : galleryOpener src = some (g, rest)) :
    ∃ r, matchLitCI (litBytes "[[gallery") src = some r := by
  cases hp : matchLitCI (litBytes "[[gallery") src with
  | none => simp [galleryOpener, hp] at h
  | some r => exact ⟨r, rfl⟩

theorem galleryOpener_rest_length_lt (src r g : List Nat)
    (h : galleryOpener src = some (g, r)) : r.length < src.length := by
  cases hp : matchLitCI (litBytes "[[gallery") src with
  | none => simp [galleryOpener, hp] at h
  | some r' =>
      have hlen := matchLitCI_length_eq_local (litBytes "[[gallery") src r' hp
      have hpref : 0 < (litBytes "[[gallery").length := by decide
      cases r' with
      | nil => simp [galleryOpener, hp] at h
      | cons w r1 =>
          cases hw : isWsByte w with
          | true =>
              have hwne : w ≠ 93 := by
                intro hw93
                subst w
                simp [isWsByte] at hw
              cases hx : r1.drop (r1.takeWhile (fun b => b != 93)).length with
              | nil =>
                  have hop : galleryOpener src = none := by
                    simp [galleryOpener, hp, hw, hx, hwne]
                  rw [hop] at h
                  contradiction
              | cons x xs =>
                  by_cases hx93 : x = 93
                  · subst x
                    cases xs with
                    | nil =>
                        have hop : galleryOpener src = none := by
                          simp [galleryOpener, hp, hw, hx, hwne]
                        rw [hop] at h
                        contradiction
                    | cons y ys =>
                        by_cases hy93 : y = 93
                        · subst y
                          have hop : galleryOpener src =
                              some (w :: r1.takeWhile (fun b => b != 93), ys) := by
                            simp [galleryOpener, hp, hw, hx]
                          rw [hop] at h
                          cases h
                          simp at hlen
                          have hdle : (r1.drop (r1.takeWhile (fun b => b != 93)).length).length ≤ r1.length := by simp
                          have hxlen : (r1.drop (r1.takeWhile (fun b => b != 93)).length).length = r.length + 2 := by
                            rw [hx]
                            rfl
                          have hysle : r.length ≤ (r1.drop (r1.takeWhile (fun b => b != 93)).length).length := by omega
                          have hyslt : r.length < r1.length := by omega
                          omega
                        · have hop : galleryOpener src = none := by
                            simp [galleryOpener, hp, hw, hx, hy93, hwne]
                          rw [hop] at h
                          contradiction
                  · have hop : galleryOpener src = none := by
                      simp [galleryOpener, hp, hw, hx, hx93, hwne]
                    rw [hop] at h
                    contradiction
          | false =>
              by_cases hw93 : w = 93
              · subst w
                cases r1 with
                | nil =>
                    have hop : galleryOpener src = none := by simp [galleryOpener, hp, hw]
                    rw [hop] at h
                    contradiction
                | cons x xs =>
                    by_cases hx93 : x = 93
                    · subst x
                      have hop : galleryOpener src = some ([], xs) := by
                        simp [galleryOpener, hp, hw]
                      rw [hop] at h
                      cases h
                      simp at hlen
                      omega
                    · have hop : galleryOpener src = none := by
                        simp [galleryOpener, hp, hw, hx93]
                      rw [hop] at h
                      contradiction
              · have hop : galleryOpener src = none := by
                  simp [galleryOpener, hp, hw, hw93]
                rw [hop] at h
                contradiction

/-! ## Lines: maximal source-line sequence, partition and exhaustion -/

theorem galleryLines_zero (src : List Nat) : galleryLines src 0 = ([], []) := rfl

theorem galleryLines_line_step (r : List Nat) (fuel : Nat)
    (he : (r.takeWhile (fun b => b != 10)).isEmpty = false) :
    galleryLines (10 :: 58 :: 32 :: r) (fuel + 1) =
      ((10 :: 58 :: 32 :: r.takeWhile (fun b => b != 10)) ::
          (galleryLines (r.drop (r.takeWhile (fun b => b != 10)).length) fuel).1,
       (galleryLines (r.drop (r.takeWhile (fun b => b != 10)).length) fuel).2) := by
  simp [galleryLines, he]

theorem galleryLines_empty_content (r : List Nat) (fuel : Nat)
    (he : (r.takeWhile (fun b => b != 10)).isEmpty = true) :
    galleryLines (10 :: 58 :: 32 :: r) (fuel + 1) = ([], 10 :: 58 :: 32 :: r) := by
  simp [galleryLines, he]

theorem galleryLines_partition_of_fuel (src : List Nat) (fuel : Nat) (h : src.length < fuel) :
    (galleryLines src fuel).1.flatten ++ (galleryLines src fuel).2 = src := by
  induction fuel generalizing src with
  | zero => simp at h
  | succ fuel ih =>
      cases src with
      | nil => simp [galleryLines]
      | cons b r =>
          by_cases hb : b = 10
          · subst b
            cases r with
            | nil => simp [galleryLines]
            | cons c r' =>
                by_cases hc : c = 58
                · subst c
                  cases r' with
                  | nil => simp [galleryLines]
                  | cons d r'' =>
                      by_cases hd : d = 32
                      · subst d
                        let content := r''.takeWhile (fun x => x != 10)
                        by_cases he : content.isEmpty
                        · cases hcontent : content with
                          | nil => simp [galleryLines, content, hcontent]
                          | cons c' cs => simp [hcontent] at he
                        · have he' : (r''.takeWhile (fun x => x != 10)).isEmpty = false := by
                            simpa [content] using he
                          have hrest : (r''.drop content.length).length < fuel := by
                            have hlt := drop_takeWhile_length_lt_local (fun x => x != 10) r'' he'
                            have hsame : (r''.drop content.length).length =
                                (r''.drop (r''.takeWhile (fun x => x != 10)).length).length := by rfl
                            simp at h
                            omega
                          have hih := ih (r''.drop content.length) hrest
                          rw [galleryLines_line_step r'' fuel he']
                          have hcore : content ++
                              ((galleryLines (r''.drop content.length) fuel).1.flatten ++
                               (galleryLines (r''.drop content.length) fuel).2) = r'' := by
                            rw [hih]
                            exact takeWhile_append_drop_local (fun x => x != 10) r''
                          simpa [List.append_assoc] using
                            congrArg (fun xs => 10 :: 58 :: 32 :: xs) hcore
                      · simp [galleryLines, hd]
                · simp [galleryLines, hc]
          · simp [galleryLines, hb]

theorem galleryLines_final_no_line (src : List Nat) (fuel : Nat) (h : src.length < fuel) :
    ¬ ∃ r, (galleryLines src fuel).2 = 10 :: 58 :: 32 :: r ∧
      (r.takeWhile (fun b => b != 10)).isEmpty = false := by
  induction fuel generalizing src with
  | zero => simp at h
  | succ fuel ih =>
      cases src with
      | nil => simp [galleryLines]
      | cons b r =>
          by_cases hb : b = 10
          · subst b
            cases r with
            | nil => simp [galleryLines]
            | cons c r' =>
                by_cases hc : c = 58
                · subst c
                  cases r' with
                  | nil => simp [galleryLines]
                  | cons d r'' =>
                      by_cases hd : d = 32
                      · subst d
                        let content := r''.takeWhile (fun x => x != 10)
                        by_cases he : content.isEmpty
                        · cases hcontent : content with
                          | nil => simp [galleryLines, content, hcontent]
                          | cons c' cs => simp [hcontent] at he
                        · have he' : (r''.takeWhile (fun x => x != 10)).isEmpty = false := by
                            simpa [content] using he
                          have hrest : (r''.drop content.length).length < fuel := by
                            have hlt := drop_takeWhile_length_lt_local (fun x => x != 10) r'' he'
                            have hsame : (r''.drop content.length).length =
                                (r''.drop (r''.takeWhile (fun x => x != 10)).length).length := by rfl
                            simp at h
                            omega
                          rw [galleryLines_line_step r'' fuel he']
                          intro hex
                          exact ih (r''.drop content.length) hrest hex
                      · simp [galleryLines, hd]
                · simp [galleryLines, hc]
          · simp [galleryLines, hb]

/-! ## Body: greedy maximal-count-first characterization -/

def GalleryCloserRest (src body : List Nat) : Option (List Nat) :=
  match src.drop body.length with
  | 10 :: r => matchLitCI (litBytes "[[/gallery]]") r
  | _ => none

def GalleryCloser (src body r2 : List Nat) : Prop :=
  GalleryCloserRest src body = some r2

def GallerySuccessAt (lines : List (List Nat)) (src : List Nat) (k : Nat) : Prop :=
  (GalleryCloserRest src (lines.take k).flatten).isSome = true

theorem galleryTryCount_succ (lines : List (List Nat)) (src : List Nat) (j : Nat) :
    galleryBody.tryCount lines src (j + 1) =
      match GalleryCloserRest src (lines.take (j + 1)).flatten with
      | some r2 => some ((lines.take (j + 1)).flatten, r2)
      | none => galleryBody.tryCount lines src j := by
  change (match src.drop (lines.take (j + 1)).flatten.length with
          | 10 :: r => match matchLitCI (litBytes "[[/gallery]]") r with
                       | some r2 => some ((lines.take (j + 1)).flatten, r2)
                       | none => galleryBody.tryCount lines src j
          | _ => galleryBody.tryCount lines src j) =
         (match (match src.drop (lines.take (j + 1)).flatten.length with
                 | 10 :: r => matchLitCI (litBytes "[[/gallery]]") r
                 | _ => none) with
          | some r2 => some ((lines.take (j + 1)).flatten, r2)
          | none => galleryBody.tryCount lines src j)
  cases h : src.drop (lines.take (j + 1)).flatten.length with
  | nil => simp [h]
  | cons b r =>
      by_cases hb : b = 10
      · subst b
        cases hm : matchLitCI (litBytes "[[/gallery]]") r with
        | none => simp [h, hm]
        | some r2 => simp [h, hm]
      · simp [h, hb]

theorem gallerySuccessAt_of_closer (lines : List (List Nat)) (src body r2 : List Nat) (k : Nat)
    (hb : body = (lines.take k).flatten) (hc : GalleryCloser src body r2) :
    GallerySuccessAt lines src k := by
  subst body
  unfold GalleryCloser at hc
  simp [GallerySuccessAt, hc]

theorem galleryTryCount_eq_some_iff (lines : List (List Nat)) (src : List Nat) (j : Nat)
    (body r2 : List Nat) :
    galleryBody.tryCount lines src j = some (body, r2) ↔
      ∃ k, 1 ≤ k ∧ k ≤ j ∧ body = (lines.take k).flatten ∧
        GalleryCloser src body r2 ∧
        ∀ m, k < m → m ≤ j → ¬ GallerySuccessAt lines src m := by
  induction j with
  | zero =>
      constructor
      · intro h
        simp [galleryBody.tryCount] at h
      · rintro ⟨k, hk1, hk0, _, _, _⟩
        omega
  | succ j ih =>
      rw [galleryTryCount_succ]
      let bodyTop := (lines.take (j + 1)).flatten
      cases htop : GalleryCloserRest src bodyTop with
      | some r2top =>
          simp [htop]
          constructor
          · rintro ⟨hb, hr⟩
            refine ⟨j + 1, by omega, by omega, ?_, ?_, ?_⟩
            · exact hb.symm
            · rw [← hb, ← hr]
              exact htop
            · intro m hm hmle
              have : m = j + 1 := by omega
              subst m
              omega
          · rintro ⟨k, hk1, hkj, hbody, hclose, hmax⟩
            have hkcase : k ≤ j ∨ k = j + 1 := by omega
            rcases hkcase with hkj' | hkeq
            · have hbad := hmax (j + 1) (by omega) (by omega)
              have hsucc : GallerySuccessAt lines src (j + 1) := by
                simpa [GallerySuccessAt, bodyTop, htop]
              exact (hbad hsucc).elim
            · subst k
              have hc : GalleryCloserRest src body = some r2 := by exact hclose
              rw [hbody] at hc
              change GalleryCloserRest src bodyTop = some r2 at hc
              rw [htop] at hc
              exact ⟨hbody.symm, Option.some.inj hc⟩
      | none =>
          simp [htop]
          constructor
          · intro hold
            rcases (ih.mp hold) with ⟨k, hk1, hkj, hbody, hclose, hmax⟩
            refine ⟨k, hk1, by omega, hbody, hclose, ?_⟩
            intro m hkm hmle
            by_cases hmj : m ≤ j
            · exact hmax m hkm hmj
            · have hmeq : m = j + 1 := by omega
              subst m
              simpa [GallerySuccessAt, bodyTop, htop]
          · rintro ⟨k, hk1, hkj, hbody, hclose, hmax⟩
            have hkcase : k ≤ j ∨ k = j + 1 := by omega
            rcases hkcase with hkj' | hkeq
            · apply ih.mpr
              refine ⟨k, hk1, hkj', hbody, hclose, ?_⟩
              intro m hkm hmj
              exact hmax m hkm (by omega)
            · subst k
              have hsucc : GallerySuccessAt lines src (j + 1) :=
                gallerySuccessAt_of_closer lines src body r2 (j + 1) hbody hclose
              exfalso
              simpa [GallerySuccessAt, bodyTop, htop] using hsucc

theorem galleryTryCount_eq_none_iff (lines : List (List Nat)) (src : List Nat) (j : Nat) :
    galleryBody.tryCount lines src j = none ↔
      ∀ k, 1 ≤ k → k ≤ j → ¬ GallerySuccessAt lines src k := by
  induction j with
  | zero =>
      constructor
      · intro h k hk1 hk0
        omega
      · intro h
        rfl
  | succ j ih =>
      rw [galleryTryCount_succ]
      let bodyTop := (lines.take (j + 1)).flatten
      cases htop : GalleryCloserRest src bodyTop with
      | some r2top =>
          simp [htop]
          refine ⟨j + 1, by omega, by omega, ?_⟩
          simpa [GallerySuccessAt, bodyTop, htop]
      | none =>
          simp [htop]
          constructor
          · intro hnone k hk1 hkj
            have hkj' : k ≤ j ∨ k = j + 1 := by omega
            rcases hkj' with hkj'' | hkeq
            · exact (ih.mp hnone) k hk1 hkj''
            · subst k
              simpa [GallerySuccessAt, bodyTop, htop]
          · intro hall
            apply ih.mpr
            intro k hk1 hkj
            exact hall k hk1 (by omega)

theorem galleryBody_eq_some_iff (src body r2 : List Nat) :
    galleryBody src = some (body, r2) ↔
      ∃ k, 1 ≤ k ∧ k ≤ (galleryLines src (src.length + 1)).1.length ∧
        body = ((galleryLines src (src.length + 1)).1.take k).flatten ∧
        GalleryCloser src body r2 ∧
        ∀ m, k < m → m ≤ (galleryLines src (src.length + 1)).1.length →
          ¬ GallerySuccessAt (galleryLines src (src.length + 1)).1 src m := by
  unfold galleryBody
  dsimp only
  exact galleryTryCount_eq_some_iff ((galleryLines src (src.length + 1)).1) src
    ((galleryLines src (src.length + 1)).1.length) body r2

theorem galleryBody_eq_none_iff (src : List Nat) :
    galleryBody src = none ↔
      ∀ k, 1 ≤ k → k ≤ (galleryLines src (src.length + 1)).1.length →
        ¬ GallerySuccessAt (galleryLines src (src.length + 1)).1 src k := by
  unfold galleryBody
  dsimp only
  exact galleryTryCount_eq_none_iff ((galleryLines src (src.length + 1)).1) src
    ((galleryLines src (src.length + 1)).1.length)

theorem galleryTryCount_rest_length_le (lines : List (List Nat)) (src : List Nat) (j : Nat)
    (body r2 : List Nat) (h : galleryBody.tryCount lines src j = some (body, r2)) :
    r2.length ≤ src.length := by
  induction j with
  | zero => simp [galleryBody.tryCount] at h
  | succ j ih =>
      rw [galleryTryCount_succ] at h
      let bodyTop := (lines.take (j + 1)).flatten
      cases htop : GalleryCloserRest src bodyTop with
      | some r2top =>
          rw [show GalleryCloserRest src (lines.take (j + 1)).flatten = GalleryCloserRest src bodyTop by rfl] at h
          have hpair : bodyTop = body ∧ r2top = r2 := by simpa [htop] using h
          rcases hpair with ⟨hb, hr⟩
          subst body
          subst r2
          change (match src.drop bodyTop.length with
                  | 10 :: r => matchLitCI (litBytes "[[/gallery]]") r
                  | _ => none) = some r2top at htop
          cases hd : src.drop bodyTop.length with
          | nil => simp [hd] at htop
          | cons b r =>
              rw [hd] at htop
              by_cases hb : b = 10
              · subst b
                simp at htop
                have hlen := matchLitCI_length_eq_local (litBytes "[[/gallery]]") r r2top htop
                have hcloserpos : 0 < (litBytes "[[/gallery]]").length := by decide
                have hdlen : (src.drop bodyTop.length).length ≤ src.length := by
                  rw [List.length_drop]
                  omega
                simp [hd] at hdlen
                have hrle : r2top.length < r.length := by omega
                omega
              · simp [hb] at htop
      | none =>
          rw [show GalleryCloserRest src (lines.take (j + 1)).flatten = GalleryCloserRest src bodyTop by rfl] at h
          have hprev : galleryBody.tryCount lines src j = some (body, r2) := by
            simpa [htop] using h
          exact ih hprev

theorem galleryBody_rest_length_le (src body r2 : List Nat)
    (h : galleryBody src = some (body, r2)) : r2.length ≤ src.length := by
  unfold galleryBody at h
  dsimp only at h
  exact galleryTryCount_rest_length_le ((galleryLines src (src.length + 1)).1) src
    ((galleryLines src (src.length + 1)).1.length) body r2 h

/-! ## MatchAt: group present before absent -/

theorem galleryMatchAt_none_of_opener (src : List Nat)
    (h : galleryOpener src = none) : galleryMatchAt src = none := by
  simp [galleryMatchAt, h]

theorem galleryMatchAt_body_present (src g1 r1 body r2 : List Nat)
    (hop : galleryOpener src = some (g1, r1))
    (hb : galleryBody r1 = some (body, r2)) :
    galleryMatchAt src = some (g1, some body, r2) := by
  simp [galleryMatchAt, hop, hb]

theorem galleryMatchAt_body_absent (src g1 r1 : List Nat)
    (hop : galleryOpener src = some (g1, r1))
    (hb : galleryBody r1 = none) :
    galleryMatchAt src = some (g1, none, r1) := by
  simp [galleryMatchAt, hop, hb]

theorem galleryMatchAt_some_opener (src g1 : List Nat) (body : Option (List Nat)) (rest : List Nat)
    (h : galleryMatchAt src = some (g1, body, rest)) :
    ∃ r1, galleryOpener src = some (g1, r1) := by
  cases hop : galleryOpener src with
  | none => simp [galleryMatchAt, hop] at h
  | some x =>
      rcases x with ⟨g1', r1⟩
      cases hb : galleryBody r1 with
      | none =>
          refine ⟨r1, ?_⟩
          have hcalc : galleryMatchAt src = some (g1', none, r1) := by
            simp [galleryMatchAt, hop, hb]
          rw [hcalc] at h
          cases h
          simpa using hop
      | some x2 =>
          rcases x2 with ⟨body', r2'⟩
          refine ⟨r1, ?_⟩
          have hcalc : galleryMatchAt src = some (g1', some body', r2') := by
            simp [galleryMatchAt, hop, hb]
          rw [hcalc] at h
          cases h
          simpa using hop

theorem galleryMatchAt_rest_length_lt (src g1 : List Nat) (body : Option (List Nat)) (rest : List Nat)
    (h : galleryMatchAt src = some (g1, body, rest)) : rest.length < src.length := by
  rcases galleryMatchAt_some_opener src g1 body rest h with ⟨r1, hop⟩
  have hlt := galleryOpener_rest_length_lt src r1 g1 hop
  cases hb : galleryBody r1 with
  | none =>
      have hcalc : galleryMatchAt src = some (g1, none, r1) := by
        simp [galleryMatchAt, hop, hb]
      rw [hcalc] at h
      cases h
      exact hlt
  | some x =>
      rcases x with ⟨body', r2'⟩
      have hle := galleryBody_rest_length_le r1 body' r2' hb
      have hcalc : galleryMatchAt src = some (g1, some body', r2') := by
        simp [galleryMatchAt, hop, hb]
      rw [hcalc] at h
      cases h
      omega

theorem galleryMatchAt_body_present_not_absent (src g1 body r2 : List Nat)
    (h : galleryMatchAt src = some (g1, some body, r2)) :
    ∀ r1, galleryOpener src = some (g1, r1) → galleryBody r1 ≠ none := by
  intro r1 hop hb
  have h' := galleryMatchAt_body_absent src g1 r1 hop hb
  rw [h] at h'
  cases h'

/-! ## Token: rule name, size truthiness, sources option shape -/

theorem galleryToken_rule (g1 : List Nat) (body : Option (List Nat)) :
    (galleryToken g1 body).rule = "Gallery" := rfl

theorem galleryToken_sources (g1 : List Nat) (body : Option (List Nat)) :
    omGet (galleryToken g1 body).opts "sources".toList =
      some (match body with | some b => textVal b | none => OptVal.null) := by
  unfold galleryToken
  dsimp only
  cases h : lookupB (getAttrsBytes (trimBytes g1)) (litBytes "size") with
  | none => cases body <;> rfl
  | some v =>
      by_cases hf : (v.isEmpty || v == litBytes "0") = true
      · cases body <;> simp [h, hf, omGet]
      · have hf' : (v.isEmpty || v == litBytes "0") = false := by
          cases b : (v.isEmpty || v == litBytes "0") <;> simp_all
        cases body <;> simp [h, hf', omGet]

theorem galleryToken_sources_null_iff (g1 : List Nat) (body : Option (List Nat)) :
    omGet (galleryToken g1 body).opts "sources".toList = some OptVal.null ↔ body = none := by
  rw [galleryToken_sources]
  cases body with
  | none => simp
  | some b =>
      have hneq : textVal b ≠ OptVal.null := by
        unfold textVal
        split <;> simp
      constructor
      · intro h
        exfalso
        exact hneq (Option.some.inj h)
      · intro h
        cases h

theorem galleryToken_size_of_lookup_none (g1 : List Nat) (body : Option (List Nat))
    (h : lookupB (getAttrsBytes (trimBytes g1)) (litBytes "size") = none) :
    omGet (galleryToken g1 body).opts "size".toList = none := by
  simp [galleryToken, omGet, h]

theorem galleryToken_size_of_lookup_empty (g1 : List Nat) (body : Option (List Nat)) (v : List Nat)
    (h : lookupB (getAttrsBytes (trimBytes g1)) (litBytes "size") = some v) (hv : v = []) :
    omGet (galleryToken g1 body).opts "size".toList = none := by
  subst v
  simp [galleryToken, omGet, h]

theorem galleryToken_size_of_lookup_zero (g1 : List Nat) (body : Option (List Nat))
    (h : lookupB (getAttrsBytes (trimBytes g1)) (litBytes "size") = some (litBytes "0")) :
    omGet (galleryToken g1 body).opts "size".toList = none := by
  simp [galleryToken, omGet, h]

theorem galleryToken_size_of_truthy (g1 : List Nat) (body : Option (List Nat)) (v : List Nat)
    (h : lookupB (getAttrsBytes (trimBytes g1)) (litBytes "size") = some v)
    (hfalsy : (v.isEmpty || v == litBytes "0") = false) :
    omGet (galleryToken g1 body).opts "size".toList = some (textVal v) := by
  simp [galleryToken, omGet, h, hfalsy]

theorem galleryToken_trim_congr (g1 g1' : List Nat) (body : Option (List Nat))
    (h : trimBytes g1 = trimBytes g1') : galleryToken g1 body = galleryToken g1' body := by
  simp [galleryToken, h]

theorem galleryToken_opts_shape (g1 : List Nat) (body : Option (List Nat)) :
    (galleryToken g1 body).opts = [] ++
        [("sources".toList, match body with | some b => textVal b | none => OptVal.null)] ∨
    ∃ v, (galleryToken g1 body).opts = [("size".toList, textVal v)] ++
        [("sources".toList, match body with | some b => textVal b | none => OptVal.null)] := by
  unfold galleryToken
  dsimp only
  cases h : lookupB (getAttrsBytes (trimBytes g1)) (litBytes "size") with
  | none => exact Or.inl rfl
  | some v =>
      by_cases hf : (v.isEmpty || v == litBytes "0") = true
      · left
        cases body <;> simp [h, hf]
      · right
        exact ⟨v, by cases body <;> simp [h, hf]⟩

/-! ## Scan: step shape, one token per match, line-start threading -/

def galleryMatchCount : List Nat → Bool → Nat → Nat
  | _, _, 0 => 0
  | [], _, _ => 0
  | b :: rest, atStart, fuel + 1 =>
      if atStart then
        match galleryMatchAt (b :: rest) with
        | some (_, _, r2) => 1 + galleryMatchCount r2 false fuel
        | none => galleryMatchCount rest (b == 10) fuel
      else galleryMatchCount rest (b == 10) fuel

theorem galleryScan_zero (src : List Nat) (toks : List TokenEntry) (atStart : Bool) :
    galleryScan src toks atStart 0 = ([], toks) := by
  cases src <;> simp [galleryScan]

theorem galleryScan_nil (toks : List TokenEntry) (atStart : Bool) (fuel : Nat) :
    galleryScan [] toks atStart fuel = ([], toks) := by
  cases fuel <;> simp [galleryScan]

theorem galleryScan_step_match (b : Nat) (rest : List Nat) (toks : List TokenEntry)
    (g1 : List Nat) (body : Option (List Nat)) (r2 : List Nat) (fuel : Nat)
    (h : galleryMatchAt (b :: rest) = some (g1, body, r2)) :
    galleryScan (b :: rest) toks true (fuel + 1) =
      ([10, 10] ++ phBytes toks.length ++ [10, 10] ++
          (galleryScan r2 (toks ++ [galleryToken g1 body]) false fuel).1,
       (galleryScan r2 (toks ++ [galleryToken g1 body]) false fuel).2) := by
  simp [galleryScan, h]

theorem galleryScan_step_no_match (b : Nat) (rest : List Nat) (toks : List TokenEntry) (fuel : Nat)
    (h : galleryMatchAt (b :: rest) = none) :
    galleryScan (b :: rest) toks true (fuel + 1) =
      (b :: (galleryScan rest toks (b == 10) fuel).1,
       (galleryScan rest toks (b == 10) fuel).2) := by
  simp [galleryScan, h]

theorem galleryScan_step_not_start (b : Nat) (rest : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    galleryScan (b :: rest) toks false (fuel + 1) =
      (b :: (galleryScan rest toks (b == 10) fuel).1,
       (galleryScan rest toks (b == 10) fuel).2) := by
  rfl

theorem galleryScan_tokens_extend : ∀ (fuel : Nat) (src : List Nat) (toks : List TokenEntry)
    (atStart : Bool), ∃ added, (galleryScan src toks atStart fuel).2 = toks ++ added := by
  intro fuel
  induction fuel with
  | zero =>
      intro src toks atStart
      cases src <;> simp [galleryScan]
  | succ fuel ih =>
      intro src toks atStart
      cases src with
      | nil => simp [galleryScan]
      | cons b rest =>
          cases atStart with
          | false =>
              simp [galleryScan]
              exact ih rest toks (b == 10)
          | true =>
              cases hm : galleryMatchAt (b :: rest) with
              | none =>
                  simp [galleryScan, hm]
                  exact ih rest toks (b == 10)
              | some x =>
                  rcases x with ⟨g1, body, r2⟩
                  simp [galleryScan, hm]
                  rcases ih r2 (toks ++ [galleryToken g1 body]) false with ⟨a, ha⟩
                  refine ⟨[galleryToken g1 body] ++ a, ?_⟩
                  rw [ha]
                  simp [List.append_assoc]

theorem galleryScan_len : ∀ (fuel : Nat) (src : List Nat) (toks : List TokenEntry) (atStart : Bool),
    (galleryScan src toks atStart fuel).2.length = toks.length + galleryMatchCount src atStart fuel := by
  intro fuel
  induction fuel with
  | zero =>
      intro src toks atStart
      cases src <;> rfl
  | succ fuel ih =>
      intro src toks atStart
      cases src with
      | nil => rfl
      | cons b rest =>
          cases atStart with
          | false =>
              simp [galleryScan, galleryMatchCount]
              exact ih rest toks (b == 10)
          | true =>
              cases hm : galleryMatchAt (b :: rest) with
              | none =>
                  simp [galleryScan, galleryMatchCount, hm]
                  exact ih rest toks (b == 10)
              | some x =>
                  rcases x with ⟨g1, body, r2⟩
                  simp [galleryScan, galleryMatchCount, hm]
                  rw [ih r2 (toks ++ [galleryToken g1 body]) false]
                  simp
                  omega

theorem galleryScan_full_tokens_extend (src : List Nat) (toks : List TokenEntry) :
    ∃ added, (galleryScan src toks true (src.length + 1)).2 = toks ++ added :=
  galleryScan_tokens_extend (src.length + 1) src toks true

theorem galleryScan_full_len (src : List Nat) (toks : List TokenEntry) :
    (galleryScan src toks true (src.length + 1)).2.length =
      toks.length + galleryMatchCount src true (src.length + 1) :=
  galleryScan_len (src.length + 1) src toks true

theorem galleryScan_fuel_stable (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (fuel : Nat)
    (h : src.length < fuel) :
    galleryScan src toks atStart (fuel + 1) = galleryScan src toks atStart fuel := by
  induction fuel generalizing src toks atStart with
  | zero =>
      simp at h
  | succ fuel ih =>
      cases src with
      | nil => simp [galleryScan]
      | cons b rest =>
          cases atStart with
          | false =>
              have hrest : rest.length < fuel := by
                simp at h
                omega
              have hi := ih rest toks (b == 10) hrest
              simp [galleryScan]
              constructor
              · simpa using congrArg Prod.fst hi
              · simpa using congrArg Prod.snd hi
          | true =>
              cases hm : galleryMatchAt (b :: rest) with
              | none =>
                  have hrest : rest.length < fuel := by
                    simp at h
                    omega
                  have hi := ih rest toks (b == 10) hrest
                  simp [galleryScan, hm]
                  constructor
                  · simpa using congrArg Prod.fst hi
                  · simpa using congrArg Prod.snd hi
              | some x =>
                  rcases x with ⟨g1, body, r2⟩
                  have hlt := galleryMatchAt_rest_length_lt (b :: rest) g1 body r2 hm
                  have hrest : r2.length < fuel := by
                    have hle : (b :: rest).length ≤ fuel := by omega
                    omega
                  have hi := ih r2 (toks ++ [galleryToken g1 body]) false hrest
                  simp [galleryScan, hm]
                  constructor
                  · simpa using congrArg Prod.fst hi
                  · simpa using congrArg Prod.snd hi

theorem galleryScan_fuel_sufficient (src : List Nat) (toks : List TokenEntry) (atStart : Bool) (k : Nat) :
    galleryScan src toks atStart (src.length + 1 + k) = galleryScan src toks atStart (src.length + 1) := by
  induction k with
  | zero => rfl
  | succ k ih =>
      have h : src.length < src.length + 1 + k := by omega
      rw [show src.length + 1 + (k + 1) = (src.length + 1 + k) + 1 by omega]
      rw [galleryScan_fuel_stable src toks atStart (src.length + 1 + k) h]
      exact ih

/-! ## Rule: ParseState preservation and conditional reference reduction -/

def galleryScanFull (st : ParseState) : List Nat × List TokenEntry :=
  galleryScan (byteForm st.work) st.tokens true ((byteForm st.work).length + 1)

theorem galleryRule_unfold (st : ParseState) :
    galleryRule st = applyByteRule st (fun src toks => galleryScan src toks true (src.length + 1)) := rfl

theorem galleryRule_tokens_extend (st : ParseState) :
    ∃ added, (galleryRule st).tokens = st.tokens ++ added := by
  unfold galleryRule applyByteRule
  dsimp only
  exact galleryScan_tokens_extend ((byteForm st.work).length + 1) (byteForm st.work) st.tokens true

theorem galleryRule_len (st : ParseState) :
    (galleryRule st).tokens.length = st.tokens.length +
      galleryMatchCount (byteForm st.work) true ((byteForm st.work).length + 1) := by
  unfold galleryRule applyByteRule
  dsimp only
  exact galleryScan_len ((byteForm st.work).length + 1) (byteForm st.work) st.tokens true

theorem galleryRule_doc_eq (st : ParseState) : (galleryRule st).doc = st.doc := by
  rfl

theorem galleryRule_fatal_eq (st : ParseState) : (galleryRule st).fatal = st.fatal := by
  rfl

theorem galleryRule_continuedDivLeads_eq (st : ParseState) :
    (galleryRule st).continuedDivLeads = st.continuedDivLeads := by
  rfl

section OpenObligations

variable (refGallery : List Nat → List TokenEntry → List Nat × List TokenEntry)

/-- Open obligation: the mirror's line-start gallery scan equals the mechanically extracted PHP regex decomposition under PcreCore (TCB-2) and RefTables (TCB-4). -/
def GalleryScanPcreObligation : Prop :=
  ∀ bs toks, galleryScan bs toks true (bs.length + 1) = refGallery bs toks

theorem galleryRule_eq_ref_of_correspondence (st : ParseState)
    (h : GalleryScanPcreObligation refGallery) :
    galleryRule st = applyByteRule st refGallery := by
  unfold galleryRule applyByteRule
  dsimp only
  have hscan := h (byteForm st.work) st.tokens
  rw [hscan]

end OpenObligations

/-! ## Local projections of the F1 WF/TokEquiv definitions -/

def GalleryWFSegs (segs : List TSeg) (n : Nat) : Prop :=
  segs = normSegs segs ∧ ∀ k, TSeg.tok k ∈ segs → k < n

def GalleryWFBytes (bs : List Nat) (n : Nat) : Prop :=
  ∃ segs : List TSeg, GalleryWFSegs segs n ∧ byteForm segs = bs

def GalleryWFOptVal (n : Nat) (v : OptVal) : Prop :=
  match v with
  | OptVal.bytes bs => GalleryWFBytes bs n
  | _ => True

def GalleryWFOptMap (n : Nat) (m : OptMap) : Prop := ∀ kv ∈ m, GalleryWFOptVal n kv.2

def GalleryWfBytePairs (n : Nat) (ps : List (List Nat × List Nat)) : Prop :=
  ∀ p ∈ ps, GalleryWFBytes p.1 n ∧ GalleryWFBytes p.2 n

def GalleryWfByteIdPairs (n : Nat) (ps : List (List Nat × Nat)) : Prop :=
  ∀ p ∈ ps, GalleryWFBytes p.1 n ∧ p.2 < n

def GalleryWFState (st : ParseState) : Prop :=
  GalleryWFSegs st.work st.tokens.length ∧
  (∀ t ∈ st.tokens, GalleryWFOptMap st.tokens.length t.opts) ∧
  (∀ bs ∈ st.doc.footnotes, GalleryWFBytes bs st.tokens.length) ∧
  GalleryWfBytePairs st.tokens.length st.doc.bibitems ∧
  GalleryWfByteIdPairs st.tokens.length st.doc.bibitemIds ∧
  GalleryWfBytePairs st.tokens.length st.doc.scoredAnchors ∧
  (∀ bs ∈ st.continuedDivLeads, GalleryWFBytes bs st.tokens.length)

def GallerySegTokEquiv (σ : Nat → Nat) : TSeg → TSeg → Prop
  | TSeg.text cs, TSeg.text cs' => cs = cs'
  | TSeg.tok k, TSeg.tok k' => σ k = k'
  | _, _ => False

def GallerySegsTokEquiv (σ : Nat → Nat) : List TSeg → List TSeg → Prop
  | [], [] => True
  | a :: as, b :: bs => GallerySegTokEquiv σ a b ∧ GallerySegsTokEquiv σ as bs
  | _, _ => False

def GalleryTokEquiv (σ : Nat → Nat) (st₁ st₂ : ParseState) : Prop :=
  GallerySegsTokEquiv σ st₁.work st₂.work ∧
  ∃ hlen : st₁.tokens.length = st₂.tokens.length,
    (∀ i (hi : i < st₁.tokens.length),
      (st₁.tokens.get ⟨i, hi⟩).rule =
        (st₂.tokens.get ⟨i, by simpa [hlen] using hi⟩).rule) ∧
    st₁.fatal = st₂.fatal

/-- The local stand-in for the unproved F1 byte bridge parseBytes_byteForm_id. It is an obligation, never an axiom. -/
def GalleryByteBridgeObligation : Prop :=
  ∀ (segs : List TSeg) (n : Nat), GalleryWFSegs segs n → parseBytes (byteForm segs) = segs

theorem galleryRule_preserves_wf_of_bridge (st : ParseState)
    (hbridge : GalleryByteBridgeObligation)
    (hbytes : GalleryWFBytes (galleryScanFull st).1 (galleryScanFull st).2.length)
    (hopts : ∀ t ∈ (galleryScanFull st).2, GalleryWFOptMap (galleryScanFull st).2.length t.opts)
    (hfoot : ∀ bs ∈ st.doc.footnotes, GalleryWFBytes bs (galleryScanFull st).2.length)
    (hbib : GalleryWfBytePairs (galleryScanFull st).2.length st.doc.bibitems)
    (hbid : GalleryWfByteIdPairs (galleryScanFull st).2.length st.doc.bibitemIds)
    (hscore : GalleryWfBytePairs (galleryScanFull st).2.length st.doc.scoredAnchors)
    (hlead : ∀ bs ∈ st.continuedDivLeads, GalleryWFBytes bs (galleryScanFull st).2.length) :
    GalleryWFState (galleryRule st) := by
  rcases hbytes with ⟨segs, hwfs, hseg⟩
  have hpb : parseBytes (galleryScanFull st).1 = segs := by
    rw [← hseg]
    exact hbridge segs (galleryScanFull st).2.length hwfs
  change GalleryWFState
    { work := parseBytes (galleryScanFull st).1, tokens := (galleryScanFull st).2,
      doc := st.doc, fatal := st.fatal, continuedDivLeads := st.continuedDivLeads }
  refine ⟨?_, hopts, hfoot, hbib, hbid, hscore, hlead⟩
  rw [hpb]
  exact hwfs

theorem galleryRule_tokEquiv_of (st : ParseState) (σ : Nat → Nat)
    (hw : GallerySegsTokEquiv σ st.work (galleryRule st).work)
    (hlen : st.tokens.length = (galleryRule st).tokens.length)
    (hrule : ∀ i (hi : i < st.tokens.length),
      (st.tokens.get ⟨i, hi⟩).rule =
        ((galleryRule st).tokens.get ⟨i, by simpa [hlen] using hi⟩).rule) :
    GalleryTokEquiv σ st (galleryRule st) := by
  refine ⟨hw, ⟨hlen, hrule, ?_⟩⟩
  exact galleryRule_fatal_eq st

end LeanFtml.Middle2.Gallery

#print axioms LeanFtml.Middle2.Gallery.matchLitCI_length_eq_local
#print axioms LeanFtml.Middle2.Gallery.takeWhile_append_drop_local
#print axioms LeanFtml.Middle2.Gallery.takeWhile_length_le_local
#print axioms LeanFtml.Middle2.Gallery.drop_takeWhile_length_lt_local
#print axioms LeanFtml.Middle2.Gallery.galleryOpener_of_no_prefix
#print axioms LeanFtml.Middle2.Gallery.galleryOpener_present_group
#print axioms LeanFtml.Middle2.Gallery.galleryOpener_absent_group
#print axioms LeanFtml.Middle2.Gallery.galleryOpener_none_of_non_ws
#print axioms LeanFtml.Middle2.Gallery.galleryOpener_some_of_prefix
#print axioms LeanFtml.Middle2.Gallery.galleryOpener_rest_length_lt
#print axioms LeanFtml.Middle2.Gallery.galleryLines_zero
#print axioms LeanFtml.Middle2.Gallery.galleryLines_line_step
#print axioms LeanFtml.Middle2.Gallery.galleryLines_empty_content
#print axioms LeanFtml.Middle2.Gallery.galleryLines_partition_of_fuel
#print axioms LeanFtml.Middle2.Gallery.galleryLines_final_no_line
#print axioms LeanFtml.Middle2.Gallery.galleryTryCount_succ
#print axioms LeanFtml.Middle2.Gallery.gallerySuccessAt_of_closer
#print axioms LeanFtml.Middle2.Gallery.galleryTryCount_eq_some_iff
#print axioms LeanFtml.Middle2.Gallery.galleryTryCount_eq_none_iff
#print axioms LeanFtml.Middle2.Gallery.galleryBody_eq_some_iff
#print axioms LeanFtml.Middle2.Gallery.galleryBody_eq_none_iff
#print axioms LeanFtml.Middle2.Gallery.galleryTryCount_rest_length_le
#print axioms LeanFtml.Middle2.Gallery.galleryBody_rest_length_le
#print axioms LeanFtml.Middle2.Gallery.galleryMatchAt_none_of_opener
#print axioms LeanFtml.Middle2.Gallery.galleryMatchAt_body_present
#print axioms LeanFtml.Middle2.Gallery.galleryMatchAt_body_absent
#print axioms LeanFtml.Middle2.Gallery.galleryMatchAt_some_opener
#print axioms LeanFtml.Middle2.Gallery.galleryMatchAt_rest_length_lt
#print axioms LeanFtml.Middle2.Gallery.galleryMatchAt_body_present_not_absent
#print axioms LeanFtml.Middle2.Gallery.galleryToken_rule
#print axioms LeanFtml.Middle2.Gallery.galleryToken_sources
#print axioms LeanFtml.Middle2.Gallery.galleryToken_sources_null_iff
#print axioms LeanFtml.Middle2.Gallery.galleryToken_size_of_lookup_none
#print axioms LeanFtml.Middle2.Gallery.galleryToken_size_of_lookup_empty
#print axioms LeanFtml.Middle2.Gallery.galleryToken_size_of_lookup_zero
#print axioms LeanFtml.Middle2.Gallery.galleryToken_size_of_truthy
#print axioms LeanFtml.Middle2.Gallery.galleryToken_trim_congr
#print axioms LeanFtml.Middle2.Gallery.galleryToken_opts_shape
#print axioms LeanFtml.Middle2.Gallery.galleryScan_zero
#print axioms LeanFtml.Middle2.Gallery.galleryScan_nil
#print axioms LeanFtml.Middle2.Gallery.galleryScan_step_match
#print axioms LeanFtml.Middle2.Gallery.galleryScan_step_no_match
#print axioms LeanFtml.Middle2.Gallery.galleryScan_step_not_start
#print axioms LeanFtml.Middle2.Gallery.galleryScan_tokens_extend
#print axioms LeanFtml.Middle2.Gallery.galleryScan_len
#print axioms LeanFtml.Middle2.Gallery.galleryScan_full_tokens_extend
#print axioms LeanFtml.Middle2.Gallery.galleryScan_full_len
#print axioms LeanFtml.Middle2.Gallery.galleryScan_fuel_stable
#print axioms LeanFtml.Middle2.Gallery.galleryScan_fuel_sufficient
#print axioms LeanFtml.Middle2.Gallery.galleryRule_unfold
#print axioms LeanFtml.Middle2.Gallery.galleryRule_tokens_extend
#print axioms LeanFtml.Middle2.Gallery.galleryRule_len
#print axioms LeanFtml.Middle2.Gallery.galleryRule_doc_eq
#print axioms LeanFtml.Middle2.Gallery.galleryRule_fatal_eq
#print axioms LeanFtml.Middle2.Gallery.galleryRule_continuedDivLeads_eq
#print axioms LeanFtml.Middle2.Gallery.galleryRule_eq_ref_of_correspondence
#print axioms LeanFtml.Middle2.Gallery.galleryRule_preserves_wf_of_bridge
#print axioms LeanFtml.Middle2.Gallery.galleryRule_tokEquiv_of
