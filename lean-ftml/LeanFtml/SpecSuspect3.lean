/-
  SpecSuspect3.lean — CONFIRMED live behaviors from BRIEF-SUSPECT3, stated as
  closed Lean propositions about the existing mirror functions.

  Each statement names the fresh sandbox probe page that pins it. All named
  pages are on sandbox-for-codex under the permanent prefix
  `muse-probe-suspect3-`, with double-fetched captures and saved-source
  verification in conformance-suspect3/captures-m1.json, captures-m2.json and
  captures-m3.json of this tree; every page named here is valid=true,
  stable=true and saved_source_matches=true. The pre-probe predictions are in
  LEDGER-M1.md, LEDGER-M2.md and LEDGER-M3.md and the verdicts in the three
  ADJUDICATION files of the same directory.

  No new mirror definitions are added and no mirror file is edited. Every
  proposition is a closed computation, so each proof is `rfl`. Divergences
  (C-SUSPECT3-1, the Mathinline body mechanism) are deliberately NOT stated
  here as live behavior; they are in the adjudication records. This file is
  unimported by LeanFtml.lean and is elaborated in isolation.
-/

import LeanFtml.Inline1Rules
import LeanFtml.Inline3Rules
import LeanFtml.IncludeRule
import LeanFtml.BlockRules
import LeanFtml.NotesRules
import LeanFtml.NotesRender

namespace LeanFtml

/-! ## A literal NBSP immediately after a complete URL stays inside the autolink

    Probe muse-probe-suspect3-m2-m2-nbsp-after-url (F-R2-85 remainder): live
    serves href="http://example.com/a--b?x=1%C2%A02", percent-encoding the
    NBSP's UTF-8 bytes exactly as the reference and the corrected ftml Url
    renderer do. The mirror's URL body class admits the two UTF-8 bytes and
    the following digit; the match covers all thirty bytes. -/

theorem suspect3_url_autolink_admits_nbsp :
    urlMatchLen (litBytes "http://example.com/a--b?x=1" ++ [194, 160, 50]) =
      some 30 := rfl

/-! ## A colon inside a site pair's page part is one page name

    Probe muse-probe-suspect3-m2-m2-include-colon-part (GRAMMAR-INCLUDE L6
    remainder): `[[include :sandbox-for-codex:foo:bar]]` fires as a pair with
    site sandbox-for-codex and page part foo:bar, and live serves the
    missing-page error for that whole page part. The mirror's reference
    resolver makes exactly that split, keeping the third colon in the page. -/

theorem suspect3_include_pair_colon_page_part :
    refResolveRef (":sandbox-for-codex:foo:bar".toList) =
      some (some ("sandbox-for-codex".toList), "foo:bar".toList) := rfl

/-! ## A heading run longer than six plus signs is never a heading

    Probe muse-probe-suspect3-m3-t1b (T1b): `+++++++ X` stays a literal
    paragraph and no TOC entry is produced for it. The whole plus run must be
    one to six long; a seventh sign leaves no valid path for the star or the
    whitespace, so the matcher returns none. -/

theorem suspect3_heading_seven_plus_never_matches :
    headingMatchLine (litBytes "+++++++ X") = none := rfl

/-! ## A TOC skips a starred heading without consuming a number

    Probes muse-probe-suspect3-m3-h2a and -h2b (H2): a `+*` heading takes the
    `start-notoc` type, no id, and no count; the TOC has only the plain
    headings, and the first plain heading is toc0. The collector emits no
    bytes and no tokens for a start-notoc heading. -/

theorem suspect3_toc_skips_notoc_heading :
    (tocItems [{ rule := "Heading", opts := [("type".toList, OptVal.str "start-notoc".toList)] }] [] 0).1 =
      [] := rfl

/-! ## A duplicate bibliography label overwrites the render-time map

    Probe muse-probe-suspect3-m3-s1b (S1): entries X, Y, Z render as 1, 2, 3
    but the citation to a resolves to 3 because the third definition
    overwrites a's value while the map keeps two keys. The mirror's bibSet
    overwrites in place and bibLookup reads the final value; the label b keeps
    its own value 2. -/

theorem suspect3_bib_duplicate_label_overwrites :
    let m := bibSet (bibSet (bibSet [] (litBytes "a") (1 : Nat))
      (litBytes "b") (2 : Nat)) (litBytes "a") (3 : Nat)
    bibLookup m (litBytes "a") = some 3 ∧
    bibLookup m (litBytes "b") = some 2 := by
  constructor <;> rfl

/-! ## Fixed-byte typography cannot cross a placeholder barrier

    Probe muse-probe-suspect3-m3-y-a (Y-a): `..``@@x@@``..` serves four
    literal dots, not an ellipsis entity. The ellipsis replacement is a
    literal three-dot byte run and the Rawold placeholder sits between the
    two dot pairs, so the mirror's global literal replacement leaves the
    bytes unchanged. -/

theorem suspect3_typography_ellipsis_barrier :
    replaceAllB (litBytes "...") (phBytes 10)
      (litBytes ".." ++ phBytes 5 ++ litBytes "..") =
      litBytes ".." ++ phBytes 5 ++ litBytes ".." := rfl

/-! ## The guillemet substitution carries a placeholder through its body

    Probe muse-probe-suspect3-m3-y-c2 (Y-c2): `<<@@x@@>>` serves the opening
    guillemet entity, the rendered raw span, and the closing entity, so the
    placeholder is admitted into the substitution's replacement range. The
    mirror replaces the angle pair with its placeholder and leaves the inner
    placeholder byte list in place. -/

theorem suspect3_typography_angles_carry_placeholder :
    replaceAllB [60, 60] (phBytes 6) (litBytes "<<" ++ phBytes 5) =
      phBytes 6 ++ phBytes 5 := rfl

end LeanFtml
