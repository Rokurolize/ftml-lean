/-
  LeanFtml.Proof.FreelinkRender: axiom-free mechanism laws for the mirror's pure freelink renderer.
  All statements are about the actual renderFreelink in LeanFtml.ServingRules, not about a rewrite of it.
  The read-key congruence theorem and the branch-shape theorems are universal over OptMap.
  Every branch of renderFreelink emits the "<a" opener, which the prefix theorem proves without case-specific byte tables.
  REBASED onto canonical head f2d4316: the external href is now htmlSpecialCharsCompat (percentEncodeNonAscii (url ++ anchor ++ extra)), so the URL-shape theorem leaves the encoded href subterm abstract and stays stable across the non-ASCII href change. The shape theorems leave the escape, trim, nonbr and target subterms abstract, which keeps them honest and stable under changes to those helpers.
  Gap: no universal exact expanded-byte formula for arbitrary opts is claimed here, because the escape, trim and nonbr helpers can expand their inputs in ways this unit does not characterize.
  Gap: no closed decide witnesses are included; elaborating the full renderer under decide exceeded the wrapper's per-run wall budget on this box, and the universal facts above carry the proof content instead.
  Gap: the fossil site branch is not given a dedicated exact-shape theorem; it is unreachable from the corrected parse rule and is covered only by the universal <a prefix law.
  Comments are single lines by project convention.
-/
import LeanFtml.ServingRules

namespace LeanFtml

theorem freelinkRender_false_not_true {b : Bool} (h : b = false) : ¬ b = true := by
  intro ht
  rw [h] at ht
  cases ht

theorem freelinkRender_prefix_a (opts : OptMap) : ∃ rest, renderFreelink opts = litBytes "<a" ++ rest := by
  unfold renderFreelink
  by_cases hurl : phpTruthyBytes (optStrBytes opts "url".toList) = true
  · rw [if_pos hurl]
    refine ⟨_, rfl⟩
  · rw [if_neg hurl]
    by_cases hsite : phpTruthyBytes (optStrBytes opts "site".toList) = true
    · rw [if_pos hsite]
      refine ⟨_, rfl⟩
    · rw [if_neg hsite]
      by_cases hpage : freelinkExistingPages.contains (optStrBytes opts "page".toList) = true
      · rw [if_pos hpage]
        refine ⟨_, rfl⟩
      · rw [if_neg hpage]
        refine ⟨_, rfl⟩

theorem freelinkRender_url_shape (opts : OptMap)
    (hurl : phpTruthyBytes (optStrBytes opts "url".toList) = true) :
    ∃ targetAttr hrefEnc t, renderFreelink opts =
      litBytes "<a" ++ targetAttr ++ litBytes " href=\"" ++
      hrefEnc ++ litBytes "\">" ++ t ++ litBytes "</a>" := by
  unfold renderFreelink
  rw [if_pos hurl]
  refine ⟨_, _, _, rfl⟩

theorem freelinkRender_local_existing_shape (opts : OptMap)
    (hurl : phpTruthyBytes (optStrBytes opts "url".toList) = false)
    (hsite : phpTruthyBytes (optStrBytes opts "site".toList) = false)
    (hpage : freelinkExistingPages.contains (optStrBytes opts "page".toList) = true) :
    ∃ suffix t, renderFreelink opts =
      litBytes "<a href=\"/" ++
      htmlSpecialCharsCompat (phpTrimBytes (optStrBytes opts "page".toList)) ++ suffix ++
      litBytes "\">" ++ t ++ litBytes "</a>" := by
  unfold renderFreelink
  rw [if_neg (freelinkRender_false_not_true hurl)]
  rw [if_neg (freelinkRender_false_not_true hsite)]
  rw [if_pos hpage]
  refine ⟨_, _, rfl⟩

theorem freelinkRender_local_newpage_shape (opts : OptMap)
    (hurl : phpTruthyBytes (optStrBytes opts "url".toList) = false)
    (hsite : phpTruthyBytes (optStrBytes opts "site".toList) = false)
    (hpage : freelinkExistingPages.contains (optStrBytes opts "page".toList) = false) :
    ∃ suffix t, renderFreelink opts =
      litBytes "<a class=\"newpage\" href=\"/" ++
      htmlSpecialCharsCompat (phpTrimBytes (optStrBytes opts "page".toList)) ++ suffix ++
      litBytes "\">" ++ t ++ litBytes "</a>" := by
  unfold renderFreelink
  rw [if_neg (freelinkRender_false_not_true hurl)]
  rw [if_neg (freelinkRender_false_not_true hsite)]
  rw [if_neg (freelinkRender_false_not_true hpage)]
  refine ⟨_, _, rfl⟩

theorem freelinkRender_local_newpage_prefix (opts : OptMap)
    (hurl : phpTruthyBytes (optStrBytes opts "url".toList) = false)
    (hsite : phpTruthyBytes (optStrBytes opts "site".toList) = false)
    (hpage : freelinkExistingPages.contains (optStrBytes opts "page".toList) = false) :
    ∃ rest, renderFreelink opts = litBytes "<a class=\"newpage\" href=\"/" ++ rest := by
  unfold renderFreelink
  rw [if_neg (freelinkRender_false_not_true hurl)]
  rw [if_neg (freelinkRender_false_not_true hsite)]
  rw [if_neg (freelinkRender_false_not_true hpage)]
  refine ⟨_, rfl⟩

theorem freelinkRender_congr_readKeys (opts₁ opts₂ : OptMap)
    (hpage : optStrBytes opts₁ "page".toList = optStrBytes opts₂ "page".toList)
    (htext : optStrBytes opts₁ "text".toList = optStrBytes opts₂ "text".toList)
    (hanchor : optStrBytes opts₁ "anchor".toList = optStrBytes opts₂ "anchor".toList)
    (hextra : optStrBytes opts₁ "extra".toList = optStrBytes opts₂ "extra".toList)
    (hurl : optStrBytes opts₁ "url".toList = optStrBytes opts₂ "url".toList)
    (hsite : optStrBytes opts₁ "site".toList = optStrBytes opts₂ "site".toList)
    (htarget : optStrBytes opts₁ "target".toList = optStrBytes opts₂ "target".toList)
    (hnonbr : omGet opts₁ "nonbr".toList = omGet opts₂ "nonbr".toList)
    (htft : omGet opts₁ "textFromTitle".toList = omGet opts₂ "textFromTitle".toList) :
    renderFreelink opts₁ = renderFreelink opts₂ := by
  unfold renderFreelink
  rw [← hurl, ← hsite, ← hpage, ← htext, ← hanchor, ← hextra, ← htarget, ← hnonbr, ← htft]

#print axioms freelinkRender_prefix_a
#print axioms freelinkRender_url_shape
#print axioms freelinkRender_local_existing_shape
#print axioms freelinkRender_local_newpage_shape
#print axioms freelinkRender_local_newpage_prefix
#print axioms freelinkRender_congr_readKeys

end LeanFtml
