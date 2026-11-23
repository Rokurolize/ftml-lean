import LeanFtml.FormRawRules
import LeanFtml.RawHeadingRules

/-!
# RawoldProof — general scan and emit laws for the Rawold mirror

This module states universal theorems about the actual `rawoldBody`, `rawoldScan`, `claimText` and `renderRawold` functions of the mirror, with no ground pins. `rawoldBody` is characterized on bodies drawn from a stated safe alphabet (bytes that are neither apostrophe nor backtick), including the empty and one-byte cases and the exact body-equality claim. `rawoldScan` is characterized for the `(?<!`)` lookbehind, leftmost matching, one claim per match with placeholder `phBytes toks.length`, fuel-parameterized recursion, and the identity law on backtick-free sources. `renderRawold` is characterized on bodies whose bytes are outside the HTML-special set, and the claimed token's output is shown to be exactly the escape of its stored text. All theorems are proved constructively and audit inside `[propext, Classical.choice, Quot.sound]`.
-/

namespace LeanFtml
namespace Rawold

/-- A safe body byte: neither apostrophe (39) nor backtick (96). The Rawold body class `[^']*` may contain backticks in its prefix, but restricting to bytes that are neither keeps the body-extension walk unambiguous. -/
def roSafeByte (b : Nat) : Prop := b ≠ 39 ∧ b ≠ 96

/-- A byte outside the `ENT_COMPAT` escape set `{&, ", <, >}` of `escHtmlCompatByte`. -/
def roHtmlSafeByte (b : Nat) : Prop := b ≠ 38 ∧ b ≠ 34 ∧ b ≠ 60 ∧ b ≠ 62

/-- The lookbehind byte after copying `mid`: the last byte of `mid`, or `prev` when `mid` is empty. -/
def roPrevAfter (prev : Option Nat) : List Nat → Option Nat
  | [] => prev
  | b :: bs => roPrevAfter (some b) bs

/-- The body-extension walk inside `rawoldBody`, restated at top level so the scan lemmas can be proved by induction. It is the same function as the local `go` of `rawoldBody`. -/
def roBodyGo : List Nat → List Nat → Option (List Nat)
  | [], _ => none
  | c :: rest, acc =>
      let here : Option (List Nat) :=
        if c != 96 then
          match rest with
          | 96 :: 96 :: _ => some (acc ++ [c])
          | _ => none
        else none
      match here with
      | some g1 => some g1
      | none =>
          if c == 39 then none
          else roBodyGo rest (acc ++ [c])

/-- The top-level walk is exactly the local walk used by `rawoldBody`. The two recursive definitions have different constants, so the bridge is by induction on the scanned suffix rather than by `rfl`. -/
theorem ro_body_go_eq (rest acc : List Nat) :
    rawoldBody.go rest acc = roBodyGo rest acc := by
  induction rest generalizing acc with
  | nil => rfl
  | cons c rest ih =>
      simp [rawoldBody.go, roBodyGo, ih] <;> rfl

/-- One step of the safe-body walk: a safe byte that is not followed by the closer is appended to the accumulator and the walk continues. -/
theorem ro_body_go_step (b c : Nat) (more : List Nat) (acc : List Nat)
    (hb96 : b ≠ 96) (hb39 : b ≠ 39) (hc96 : c ≠ 96) :
    roBodyGo (b :: c :: more) acc = roBodyGo (c :: more) (acc ++ [b]) := by
  simp [roBodyGo, hb96, hb39, hc96]

/-- A safe byte followed immediately by the closer is the final body byte and is returned. -/
theorem ro_body_go_last (b : Nat) (tail : List Nat) (acc : List Nat)
    (hb96 : b ≠ 96) :
    roBodyGo (b :: [96, 96] ++ tail) acc = some (acc ++ [b]) := by
  simp [roBodyGo, hb96]

/-- The token claimed by `claimText "Rawold" text`: a `Rawold` rule with the single `text` option. -/
def roTextToken (text : List Nat) : TokenEntry :=
  { rule := "Rawold", opts := [("text".toList, textVal text)] }

/-- `claimText "Rawold" body toks` yields exactly the placeholder `phBytes toks.length` and appends exactly one `Rawold` token carrying the body as text. -/
theorem ro_claim (body : List Nat) (toks : List TokenEntry) :
    claimText "Rawold" body toks = (phBytes toks.length, toks ++ [roTextToken body]) := by
  rfl

/-- One claim appends exactly one token. -/
theorem ro_claim_one (body : List Nat) (toks : List TokenEntry) :
    (claimText "Rawold" body toks).2.length = toks.length + 1 := by
  rw [ro_claim]
  simp

/-- `roBodyGo` on a single byte never finds a match: with no following bytes there is no closer. -/
theorem ro_body_go_single (b : Nat) : roBodyGo [b] [] = none := by
  simp [roBodyGo]

/-- The Rawold body walk over a nonempty safe body `B` followed by a closer ` `` ` and any tail returns exactly `acc ++ B`. -/
theorem ro_body_go_safe : ∀ (B : List Nat) (acc : List Nat) (tail : List Nat),
    (∀ b ∈ B, roSafeByte b) → B ≠ [] →
    roBodyGo (B ++ [96, 96] ++ tail) acc = some (acc ++ B) := by
  intro B
  induction B with
  | nil =>
      intro acc tail h hne
      contradiction
  | cons b B' ih =>
      intro acc tail h hne
      have hb : roSafeByte b := h b (by simp)
      have hb96 : b ≠ 96 := hb.2
      have hb39 : b ≠ 39 := hb.1
      have hrest : ∀ x ∈ B', roSafeByte x := by
        intro x hx
        exact h x (by simp [hx])
      cases B' with
      | nil =>
          exact ro_body_go_last b tail acc hb96
      | cons c B'' =>
          have hc : roSafeByte c := hrest c (by simp)
          have hs := ih (acc ++ [b]) tail hrest (by simp)
          have h1 : roBodyGo ((b :: c :: B'') ++ [96, 96] ++ tail) acc =
              roBodyGo ((c :: B'') ++ [96, 96] ++ tail) (acc ++ [b]) := by
            simp [roBodyGo, hb96, hb39, hc.2]
          rw [h1]
          simpa using hs

/-- Exact body-equality claim: for a nonempty body drawn from the safe alphabet, `rawoldBody` returns that body. -/
theorem ro_body_safe (B : List Nat) (tail : List Nat)
    (hB : ∀ b ∈ B, roSafeByte b) (hBne : B ≠ []) :
    rawoldBody ([96, 96] ++ B ++ [96, 96] ++ tail) = some B := by
  change rawoldBody.go (B ++ [96, 96] ++ tail) [] = some B
  rw [ro_body_go_eq]
  exact ro_body_go_safe B [] tail hB hBne

/-- The one-byte body case: a single safe byte followed by a closer is claimed exactly. -/
theorem ro_body_one (b : Nat) (hb : roSafeByte b) (tail : List Nat) :
    rawoldBody ([96, 96, b, 96, 96] ++ tail) = some [b] := by
  exact ro_body_safe [b] tail (by simp [hb]) (by simp)

/-- No opener: a source whose first byte is not a backtick cannot yield a body. -/
theorem ro_body_no_opener (b : Nat) (rest : List Nat) (hb : b ≠ 96) :
    rawoldBody (b :: rest) = none := by
  simp [rawoldBody, hb]

/-- Empty opener: an opener with no following byte yields no body. -/
theorem ro_body_empty (tail : List Nat) (h : tail = []) :
    rawoldBody ([96, 96] ++ tail) = none := by
  subst tail
  rfl

/-- One byte after the opener but no closer yields no body. -/
theorem ro_body_short (b : Nat) :
    rawoldBody [96, 96, b] = none := by
  change rawoldBody.go [b] [] = none
  rw [ro_body_go_eq]
  exact ro_body_go_single b

/-- Dropping the body and the two closer bytes from the post-opener suffix leaves the tail. -/
theorem ro_drop_body_rest (B tail : List Nat) :
    (B ++ [96, 96] ++ tail).drop (B.length + 2) = tail := by
  have h : (B ++ [96, 96] ++ tail) = (B ++ [96, 96]) ++ tail := by
    simp [List.append_assoc]
  rw [h]
  have hlen : (B ++ [96, 96]).length = B.length + 2 := by simp
  rw [← hlen]
  exact List.drop_append_length

/-- Dropping the two opener bytes, the body and the two closer bytes leaves the tail. -/
theorem ro_drop_body (B tail : List Nat) :
    ([96, 96] ++ B ++ [96, 96] ++ tail).drop (B.length + 4) = tail := by
  have h : ([96, 96] ++ B ++ [96, 96] ++ tail) =
      ([96, 96] ++ B ++ [96, 96]) ++ tail := by
    simp [List.append_assoc]
  rw [h]
  have hlen : ([96, 96] ++ B ++ [96, 96]).length = B.length + 4 := by simp
  rw [← hlen]
  exact List.drop_append_length

/-- Lookbehind: with the preceding subject byte a backtick, no token is claimed at the head; the first backtick is copied verbatim and the lookbehind persists. -/
theorem ro_scan_lookbehind (rest : List Nat) (toks : List TokenEntry) (fuel : Nat) :
    rawoldScan (some 96) (96 :: 96 :: rest) toks (fuel + 1) =
      (96 :: (rawoldScan (some 96) (96 :: rest) toks fuel).1,
       (rawoldScan (some 96) (96 :: rest) toks fuel).2) := by
  simp [rawoldScan]

/-- Leftmost copy: a backtick-free prefix is copied verbatim, with no token claimed, and the scan continues at the first byte that can start a match. -/
theorem ro_scan_copy_no_tick : ∀ (fuel : Nat) (prev : Option Nat)
    (mid rest : List Nat) (toks : List TokenEntry),
    96 ∉ mid → mid.length ≤ fuel →
    rawoldScan prev (mid ++ rest) toks fuel =
      (mid ++ (rawoldScan (roPrevAfter prev mid) rest toks (fuel - mid.length)).1,
       (rawoldScan (roPrevAfter prev mid) rest toks (fuel - mid.length)).2) := by
  intro fuel
  induction fuel with
  | zero =>
      intro prev mid rest toks hmem hf
      have hnil : mid = [] := List.eq_nil_of_length_eq_zero (Nat.eq_zero_of_le_zero hf)
      simp [hnil, roPrevAfter, rawoldScan]
  | succ fuel ih =>
      intro prev mid rest toks hmem hf
      cases mid with
      | nil => simp [roPrevAfter]
      | cons x xs =>
          have hx : x ≠ 96 := by intro e; exact hmem (by simp [e])
          have hxs : 96 ∉ xs := by intro hm; exact hmem (by simp [hm])
          have hf' : xs.length ≤ fuel := by simp at hf; omega
          have hstep := ih (some x) xs rest toks hxs hf'
          have hsub : fuel + 1 - (xs.length + 1) = fuel - xs.length := by omega
          simp [rawoldScan, hx, hstep, roPrevAfter, hsub]

/-- Identity law: on any source with no backtick byte at all, the scanner is the identity and claims no token. -/
theorem ro_scan_no_tick : ∀ (fuel : Nat) (prev : Option Nat) (src : List Nat)
    (toks : List TokenEntry), 96 ∉ src → src.length ≤ fuel →
    rawoldScan prev src toks fuel = (src, toks) := by
  intro fuel
  induction fuel with
  | zero =>
      intro prev src toks h hf
      have hnil : src = [] := List.eq_nil_of_length_eq_zero (Nat.eq_zero_of_le_zero hf)
      simp [hnil, rawoldScan]
  | succ fuel ih =>
      intro prev src toks h hf
      cases src with
      | nil => simp [rawoldScan]
      | cons b rest =>
          have hb : b ≠ 96 := by intro e; exact h (by simp [e])
          have hr : 96 ∉ rest := by intro hm; exact h (by simp [hm])
          have hlen : rest.length ≤ fuel := by simp at hf; omega
          have hstep := ih (some b) rest toks hr hlen
          simp [rawoldScan, hb, hstep]

/-- Match at the head: with clear lookbehind and a safe nonempty body, the scan claims exactly one `Rawold` token with placeholder `phBytes toks.length` and resumes after the match with lookbehind set to a backtick. -/
theorem ro_scan_claim (B tail : List Nat) (toks : List TokenEntry) (prev : Option Nat)
    (hB : ∀ b ∈ B, roSafeByte b) (hBne : B ≠ []) (hp : prev ≠ some 96)
    (fuel : Nat) :
    rawoldScan prev ([96, 96] ++ B ++ [96, 96] ++ tail) toks (fuel + 1) =
      let (ph, t1) := claimText "Rawold" B toks
      let (o, t) := rawoldScan (some 96) tail t1 fuel
      (ph ++ o, t) := by
  have hbody : rawoldBody (96 :: 96 :: (B ++ 96 :: 96 :: tail)) = some B := by
    simpa using ro_body_safe B tail hB hBne
  have hdrop : (B ++ 96 :: 96 :: tail).drop (B.length + 2) = tail := by
    simpa using ro_drop_body_rest B tail
  simp [rawoldScan, hp, hbody, hdrop]

/-- The placeholder emitted at a match is exactly `phBytes toks.length`, and the token table gains exactly the one claimed `Rawold` token before the tail is scanned. -/
theorem ro_scan_claim_ph (B tail : List Nat) (toks : List TokenEntry) (prev : Option Nat)
    (hB : ∀ b ∈ B, roSafeByte b) (hBne : B ≠ []) (hp : prev ≠ some 96)
    (fuel : Nat) :
    (rawoldScan prev ([96, 96] ++ B ++ [96, 96] ++ tail) toks (fuel + 1)).1 =
      phBytes toks.length ++
        (rawoldScan (some 96) tail (toks ++ [roTextToken B]) fuel).1 := by
  rw [ro_scan_claim B tail toks prev hB hBne hp fuel]
  simp [ro_claim]

/-- Leftmost match: after copying a backtick-free prefix `pre`, the first match (with safe body `B`) is claimed, so the emitted bytes are `pre`, the placeholder, then the scan of the tail. -/
theorem ro_scan_leftmost_claim (pre : List Nat) (B tail : List Nat)
    (toks : List TokenEntry) (prev : Option Nat) (fuel : Nat)
    (hpre : 96 ∉ pre) (hprelen : pre.length ≤ fuel)
    (hB : ∀ b ∈ B, roSafeByte b) (hBne : B ≠ [])
    (hp : roPrevAfter prev pre ≠ some 96) :
    rawoldScan prev (pre ++ ([96, 96] ++ B ++ [96, 96] ++ tail)) toks (fuel + 1) =
      let cf := fuel - pre.length
      let (o, t) := rawoldScan (some 96) tail (toks ++ [roTextToken B]) cf
      (pre ++ phBytes toks.length ++ o, t) := by
  have hcopy := ro_scan_copy_no_tick (fuel + 1) prev pre
      ([96, 96] ++ B ++ [96, 96] ++ tail) toks hpre (by omega)
  have hfuel : fuel + 1 - pre.length = (fuel - pre.length) + 1 := by omega
  have hclaim := ro_scan_claim B tail toks (roPrevAfter prev pre) hB hBne hp (fuel - pre.length)
  calc
    rawoldScan prev (pre ++ ([96, 96] ++ B ++ [96, 96] ++ tail)) toks (fuel + 1)
        = (pre ++ (rawoldScan (roPrevAfter prev pre)
              ([96, 96] ++ B ++ [96, 96] ++ tail) toks (fuel - pre.length + 1)).1,
           (rawoldScan (roPrevAfter prev pre)
              ([96, 96] ++ B ++ [96, 96] ++ tail) toks (fuel - pre.length + 1)).2) := by
            simpa [hfuel] using hcopy
    _ = (let cf := fuel - pre.length
         let (o, t) := rawoldScan (some 96) tail (toks ++ [roTextToken B]) cf
         (pre ++ phBytes toks.length ++ o, t)) := by
            rw [hclaim]
            simp [ro_claim]

/-- One byte of `escHtmlCompatByte` is the identity on a byte outside the escape set. -/
theorem ro_esc_safe (b : Nat) (hb : roHtmlSafeByte b) : escHtmlCompatByte b = [b] := by
  unfold roHtmlSafeByte at hb
  simp [escHtmlCompatByte, hb.1, hb.2.1, hb.2.2.1, hb.2.2.2]

/-- Flattening `escHtmlCompatByte` over a list of escape-safe bytes is the identity. -/
theorem ro_flatMap_esc_safe : ∀ (bs : List Nat),
    (∀ b ∈ bs, roHtmlSafeByte b) → bs.flatMap escHtmlCompatByte = bs
  | [], _ => rfl
  | b :: rest, h => by
      have hb : roHtmlSafeByte b := h b (by simp)
      have hr : ∀ x ∈ rest, roHtmlSafeByte x := by
        intro x hx
        exact h x (by simp [hx])
      simp [ro_esc_safe b hb, ro_flatMap_esc_safe rest hr]

/-- `htmlSpecialCharsCompat` is the identity on an ASCII body whose bytes are all outside the `ENT_COMPAT` escape set. -/
theorem ro_htmlEscape_safe_id (bs : List Nat)
    (hascii : ∀ b ∈ bs, b < 0x80)
    (hsafe : ∀ b ∈ bs, roHtmlSafeByte b) :
    htmlSpecialCharsCompat bs = bs := by
  rw [htmlSpecialCharsCompat_ascii bs hascii]
  exact ro_flatMap_esc_safe bs hsafe

/-- A `text` option holding raw bytes escapes to exactly `htmlSpecialCharsCompat` of those bytes. -/
theorem ro_renderRawold_bytes (bs : List Nat) :
    renderRawold [("text".toList, OptVal.bytes bs)] = htmlSpecialCharsCompat bs := by
  rfl

/-- General render law: an escape-safe ASCII body renders byte-identically through `renderRawold`. -/
theorem ro_renderRawold_safe_id (bs : List Nat)
    (hascii : ∀ b ∈ bs, b < 0x80)
    (hsafe : ∀ b ∈ bs, roHtmlSafeByte b) :
    renderRawold [("text".toList, OptVal.bytes bs)] = bs := by
  rw [ro_renderRawold_bytes, ro_htmlEscape_safe_id bs hascii hsafe]

/-- `textVal` of a byte list containing a placeholder delimiter is the raw-bytes option. -/
theorem ro_textVal_bytes (bs : List Nat) (hff : 0xFF ∈ bs) :
    textVal bs = OptVal.bytes bs := by
  simp [textVal, hff]

/-- The claimed token's output is exactly the escape of its stored text when the body carries a placeholder delimiter. -/
theorem ro_claim_render_bytes (bs : List Nat) (hff : 0xFF ∈ bs) :
    renderRawold (roTextToken bs).opts = htmlSpecialCharsCompat bs := by
  unfold roTextToken
  rw [ro_textVal_bytes bs hff]
  rfl

/-- The claimed token's output is generally the escape of the bytes stored as the token's text. -/
theorem ro_claim_render (bs : List Nat) :
    renderRawold (roTextToken bs).opts =
      htmlSpecialCharsCompat (renderOptValBytes (textVal bs)) := by
  rfl

#print axioms roSafeByte
#print axioms roHtmlSafeByte
#print axioms roPrevAfter
#print axioms roBodyGo
#print axioms ro_body_go_eq
#print axioms ro_body_go_step
#print axioms ro_body_go_last
#print axioms roTextToken
#print axioms ro_claim
#print axioms ro_claim_one
#print axioms ro_body_go_single
#print axioms ro_body_go_safe
#print axioms ro_body_safe
#print axioms ro_body_one
#print axioms ro_body_no_opener
#print axioms ro_body_empty
#print axioms ro_body_short
#print axioms ro_drop_body_rest
#print axioms ro_drop_body
#print axioms ro_scan_lookbehind
#print axioms ro_scan_copy_no_tick
#print axioms ro_scan_no_tick
#print axioms ro_scan_claim
#print axioms ro_scan_claim_ph
#print axioms ro_scan_leftmost_claim
#print axioms ro_esc_safe
#print axioms ro_flatMap_esc_safe
#print axioms ro_htmlEscape_safe_id
#print axioms ro_renderRawold_bytes
#print axioms ro_renderRawold_safe_id
#print axioms ro_textVal_bytes
#print axioms ro_claim_render_bytes
#print axioms ro_claim_render

end Rawold
end LeanFtml
