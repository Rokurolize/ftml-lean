/-
  SpecEmail — live-confirmed behaviors of the Email parse and render rules.

  Every statement below is a Lean proposition about this tree's mirror
  functions in LeanFtml.Inline1Rules (parse) and LeanFtml.InlineSimpleRules
  (render). Each carries the saved-page probe page names (site
  sandbox-for-codex, prefix muse-probe-suspect-email-) whose valid, stable,
  source-matching captures discriminate the behavior from the alternative
  prediction recorded in conformance-suspect-email/DESIGN.md.

  CONFIRMED behaviors are stated here. The render-side live rule was a
  DIVERGENCE when this file was first written, but REFCORR5 Batch 3 corrected
  renderEmail to escape and substitute exactly as live does, and MIRROR-FIX
  restates the affected theorem as a confirmation of
  LiveSpec_email_render_escapes_and_substitutes (the same statement is
  `diverges_p18_p19_f01_f02_email_render` in the pre-correction SuspectSpec).
  Candidate records are in conformance-suspect-email/candidates/ with their
  own evidence.
  Agy probe names are cited alongside this lane's probes where both pin a
  behavior (Agy report section 2.2, captures under conformance-agy-suspect/).
-/

import LeanFtml.Inline1Rules
import LeanFtml.InlineRender

namespace LeanFtml

/-- The described form's label is a lazy `.+?`, not the X44 bounded class:
    it closes at the first `]` at distance at least one, even when a later
    `]` remains as literal content. Live probes:
    muse-probe-suspect-email-lbl-close-inner (`[u@example.com a]b]`). -/
theorem spec_email_descr_lazy_first_close :
    emailDescrMatch (litBytes "[u@example.com a]b]") [] =
      some (litBytes "b]",
        phBytes 0,
        [{ rule := "Email", opts :=
           [("email".toList, OptVal.str "u@example.com".toList),
            ("text".toList, OptVal.str "a".toList)] }]) := rfl

/-- An opening bracket inside the described label does not stop the lazy
    scan; X44's bracket guard was deliberately not extended to Email. Live
    probe: muse-probe-suspect-email-lbl-open-bracket (`[u@example.com a[b]`). -/
theorem spec_email_descr_open_bracket_in_label :
    emailDescrMatch (litBytes "[u@example.com a[b]") [] =
      some ([],
        phBytes 0,
        [{ rule := "Email", opts :=
           [("email".toList, OptVal.str "u@example.com".toList),
            ("text".toList, OptVal.str "a[b".toList)] }]) := rfl

/-- A byte sequence belonging to an earlier rule's placeholder is accepted
    inside an Email label (contrast interwikiDescrMatch's X44 guard). Live
    probes: muse-probe-suspect-email-lbl-url (`[u@example.com http://x/y]`),
    -idx-url-shift and -idx-newline-shift, alongside the Agy probes
    muse-probe-agy-suspect-x03-email-url-label, -x04-email-bracket-label and
    -x05-email-raw-label; the parse-side over-claim is CONFIRMED, and the
    rendered placeholder is escaped and substituted by REFCORR5 Batch 3's
    corrected renderEmail. -/
theorem spec_email_descr_placeholder_label_claims :
    emailDescrMatch
      (litBytes "[u@example.com " ++ phBytes 0 ++ litBytes "]") [] =
      some ([],
        phBytes 0,
        [{ rule := "Email", opts :=
           [("email".toList, OptVal.str "u@example.com".toList),
            ("text".toList, OptVal.bytes [255, 48, 255])] }]) := rfl

/-- A trailing space inside a nonempty described label survives into the
    token option. Live probe: muse-probe-suspect-email-gap-trail
    (`[u@example.com Label ]`), whose served span is `…# lebaL`. -/
theorem spec_email_descr_trailing_space_label :
    emailDescrMatch (litBytes "[u@example.com Label ]") [] =
      some ([],
        phBytes 0,
        [{ rule := "Email", opts :=
           [("email".toList, OptVal.str "u@example.com".toList),
            ("text".toList, OptVal.str "Label ".toList)] }]) := rfl

/-- Render: `strrev` is bytewise, so a two-byte UTF-8 local sequence is
    reversed to an invalid byte order and the corrected escape pass then
    substitutes U+FFFD for each invalid byte. Live probes:
    muse-probe-suspect-email-lbl-eacute (`café`), -lbl-acute-only (`é`), and
    the Agy probes muse-probe-agy-suspect-p19-email-utf8 and -f01-email-ee.
    The name and the bytewise-reversal claim stand; MIRROR-FIX updates only
    the expected bytes to the served [EF BF BD EF BF BD] that REFCORR5
    Batch 3's extra escape pass produces, since the pre-correction raw
    [A9 C3] expectation is false against the corrected mirror. -/
theorem spec_email_render_bytewise_reverse_non_ascii :
    renderEmail [("email".toList, OptVal.str "u@example.com".toList),
      ("text".toList, OptVal.bytes [195, 169])] =
    litBytes "<span class=\"wiki-email\">moc.elpmaxe|u#" ++
      [239, 191, 189, 239, 191, 189] ++ litBytes "</span>" := rfl

/-- Render: the `@` → `|` replacement runs over the whole concatenation,
    including an `@` authored inside the label. Live probe:
    muse-probe-suspect-email-lbl-at (`[u@example.com foo@bar]`). -/
theorem spec_email_render_at_in_label :
    renderEmail [("email".toList, OptVal.str "u@example.com".toList),
      ("text".toList, OptVal.str "foo@bar".toList)] =
    litBytes "<span class=\"wiki-email\">moc.elpmaxe|u#rab|oof</span>" := rfl

/-- Render: the `#` join is literal, so an authored `#` in the label is
    served raw. Live probe: muse-probe-suspect-email-lbl-hash
    (`[u@example.com foo#bar]`). -/
theorem spec_email_render_hash_in_label :
    renderEmail [("email".toList, OptVal.str "u@example.com".toList),
      ("text".toList, OptVal.str "foo#bar".toList)] =
    litBytes "<span class=\"wiki-email\">moc.elpmaxe|u#rab#oof</span>" := rfl

/-- Address grammar: the local atom chain stops before `+`, so plus-addressing
    claims only from the substring after it. Live probe:
    muse-probe-suspect-email-addr-plus (`u+tag@example.com`), corroborating
    the frozen probe muse-probe-r2in1-mail-p03. -/
theorem spec_email_plus_addressing_splits :
    emailMatchLen (litBytes "u+tag@example.com") = none ∧
    emailMatchLen (litBytes "tag@example.com") = some 15 := by
  decide

/-- Address grammar: a single-label host is not an address at all. Live
    probe: muse-probe-suspect-email-addr-localhost (`u@localhost`),
    corroborating the frozen R2-INLINE1 battery e41-14. -/
theorem spec_email_single_label_host_rejected :
    emailMatchLen (litBytes "u@localhost") = none := by
  decide

/-- Address grammar: an underscore in the domain is not in the domain atom
    class, and a numeric top label is admitted. Live probes:
    muse-probe-suspect-email-addr-underscore-dom (`u@example_com.net`) and
    -addr-tld-digit (`u@example.1`). -/
theorem spec_email_domain_class_boundary :
    emailMatchLen (litBytes "u@example_com.net") = none ∧
    emailMatchLen (litBytes "u@example.1") = some 11 := by
  decide

/-- Address grammar: hyphens are admitted at either edge of a domain atom;
    there is no hyphen-position validation. Live probes:
    muse-probe-suspect-email-addr-leading-dash (`u@-example.com`) and
    -addr-trailing-dash (`u@example-.com`). -/
theorem spec_email_hyphen_edges_claimed :
    emailMatchLen (litBytes "u@-example.com") = some 14 ∧
    emailMatchLen (litBytes "u@example-.com") = some 14 := by
  decide

/-- The `/i` fold is ASCII-only: a non-ASCII byte never enters either atom
    class, so a claim can start after it but not include it. Live probes:
    muse-probe-suspect-email-addr-acute-local (`éu@example.com`),
    -addr-kelvin (`K@example.com`) and -adj-acute-before (`é u@example.com`). -/
theorem spec_email_i_is_ascii_only :
    emailLocalB 195 = false ∧ emailLocalB 132 = false ∧
    emailMatchLen ([195, 169] ++ litBytes "u@example.com") = none := by
  decide

/-- Parse-side over-claim of earlier placeholders, settled by the Agy probes
    muse-probe-agy-suspect-x03-email-url-label and -x05-email-raw-label and
    independently pinned here by muse-probe-suspect-email-lbl-url and
    -idx-url-shift: Email claims the described form even when its label is
    a Url or Raw token placeholder, exactly as the mirror does. This half of
    x03/x05 is CONFIRMED; only the rendered placeholder bytes diverge. -/
theorem spec_email_overclaim_url_raw_placeholders :
    let stUrl := emailRule (urlRule (ParseState.ofSource
      "[a@b.com http://example.com]".toList))
    let stRaw := emailRule (rawRule (ParseState.ofSource
      "[a@b.com @@raw@@]".toList))
    (stUrl.tokens.any (fun t => t.rule == "Email") &&
      stRaw.tokens.any (fun t => t.rule == "Email")) = true := by
  decide

/-- The render-side live rule settled with the Agy probes
    muse-probe-agy-suspect-p18-email-html (`[a@b.com >i<]`),
    -f02-email-apos-amp (`[a@b.com a'b&c"d]`), -p19-email-utf8 and
    -f01-email-ee: live escapes `&`, `<`, `>` with ENT_NOQUOTES and
    substitutes U+FFFD for invalid reversed bytes. REFCORR5 Batch 3 made
    renderEmail satisfy this rule; candidate records C-SUSPECT-EMAIL-1/2
    carry this lane's evidence. -/
def LiveSpec_email_render_escapes_and_substitutes (fn : OptMap → List Nat) : Prop :=
  fn [("email".toList, OptVal.str "a@b.com".toList),
      ("text".toList, OptVal.str ">i<".toList)] =
    litBytes "<span class=\"wiki-email\">moc.b|a#&lt;i&gt;</span>" ∧
  fn [("email".toList, OptVal.str "a@b.com".toList),
      ("text".toList, OptVal.str "a'b&c\"d".toList)] =
    litBytes "<span class=\"wiki-email\">moc.b|a#d\"c&amp;b'a</span>" ∧
  fn [("email".toList, OptVal.str "a@b.com".toList),
      ("text".toList, OptVal.bytes [195, 169, 195, 169])] =
    litBytes "<span class=\"wiki-email\">moc.b|a#" ++
      [239, 191, 189, 195, 169, 239, 191, 189] ++ litBytes "</span>"

/-- REFCORR5 Batch 3 (C-SUSPECT-EMAIL-1/2) corrected renderEmail with
    htmlSpecialCharsNoQuotesSubst, so the old divergence theorem is FALSE
    against the current mirror. MIRROR-FIX flips it to a confirmation of the
    live rule under a confirmation name; the three expected-byte positions
    of LiveSpec_email_render_escapes_and_substitutes are unchanged. -/
theorem spec_email_render_confirms_live_escaping :
    LiveSpec_email_render_escapes_and_substitutes renderEmail := by
  constructor
  · rfl
  constructor
  · rfl
  · rfl

end LeanFtml

#print axioms LeanFtml.spec_email_render_confirms_live_escaping
#print axioms LeanFtml.spec_email_render_bytewise_reverse_non_ascii
#print axioms LeanFtml.spec_email_render_at_in_label
#print axioms LeanFtml.spec_email_render_hash_in_label
