/- BUILD STATUS (2026-11-22): the single permitted end-of-run attempt
   `LAKE_JOBS=1 lake env lean LeanFtml/SpecCodeembed.lean` failed before
   elaboration because this tree's Lean library has no built .olean files
   (error: "unknown module prefix 'LeanFtml'"). Per the brief, the statements
   are preserved as text in conformance-suspect-codeembed/SpecCodeembed.statements.txt
   and in the comment block below; they are not claimed to be compiled.
-/

/-
  LeanFtml.SpecCodeembed — live-pinned behavior of the Code/Embed/Gallery/
  User/Social/Note family, as propositions about this tree's mirror functions.

  Probe pages (all on sandbox-for-codex, prefix `muse-probe-suspect-codeembed-`,
  kept permanently, captures and source hashes in
  conformance-suspect-codeembed/captures.json and captures2.json):

  Code:    cs-mysql, cs-mysql-lower, cs-bash, cs-xhtml, cs-filename, cs-js,
           cs-bracket-attr
  Embed:   es-mixed-close, es-single-language, es-single-attr-js,
           es-gmaps-color (CONFIRMED);
           es-digg-language, es-both-bad, es-single-quote-js, es-data-src,
           es-src-xjs, es-glued-onclick, es-junk-zoho (DIVERGENCE candidates)
  Gallery: gs-bare, gs-bare-with-lines, gs-local-link-leadcolon,
           gs-ext-link-override, gs-size-invalid, gs-ext-star,
           gs-size-case, gs-link-empty, gs-alt-backslash
  User:    us-empty, us-space-only, us-apostrophe
  Social:  ss-quote, ss-uppercase
  Note:    ns-leading-newline, ns-no-leading, ns-nested,
           ns-no-immediate-newline

  The CONFIRMED statements below are byte-observed on live and reproduced by
  the reference under the documented Stage-2/gallery serving normalizations.
  Several DIVERGENCE mechanisms are also stated (as facts about the mirror's
  predicates), because the mirror reproduces the reference's side of those
  splits; that is not a claim that live agrees with them.
-/

import LeanFtml.CodeEmbedRules
import LeanFtml.CodeEmbedRender
import LeanFtml.Middle2Rules
import LeanFtml.FinalRules

set_option maxRecDepth 8192

namespace LeanFtml

/-! ## Code: the hard-coded 14-name language allowlist is live -/

/-- Probe cs-mysql, cs-mysql-lower: `mysql` has a vendored grammar file but
    is not on the allowlist, and live renders it plain. -/
theorem spec_code_mysql_not_on_allowlist :
    codeLangs.contains (litBytes "mysql") = false := rfl

/-- Probe cs-bash: the same for `bash`. -/
theorem spec_code_bash_not_on_allowlist :
    codeLangs.contains (litBytes "bash") = false := rfl

/-- Probe cs-js: no `js` -> `javascript` alias on live. -/
theorem spec_code_js_not_on_allowlist :
    codeLangs.contains (litBytes "js") = false := rfl

/-- Probe cs-xhtml: `xhtml` is on the allowlist (and Code's renderer maps it
    to the `html` grammar). -/
theorem spec_code_xhtml_on_allowlist :
    codeLangs.contains (litBytes "xhtml") = true := rfl

/-- Probe cs-filename: `filename` is present in the token options but the
    caption branch is gated on a null conf, so the render ignores it. -/
theorem spec_code_filename_not_a_language :
    codeType [("text".toList, .str "x".toList),
        ("attr".toList, .map [("filename".toList, .str "a.css".toList),
          ("type".toList, .str "css".toList)])] = litBytes "css" := rfl

/-- Probe cs-mysql: the plain branch is reached with the `mysql` type. -/
theorem spec_code_mysql_plain :
    renderCode [("text".toList, .str "\nSELECT 1;\n".toList),
        ("attr".toList, .map [("type".toList, .str "mysql".toList)])] =
    [10] ++ litBytes "<div class=\"code\">\n<pre><code>" ++
      litBytes "SELECT 1;" ++
      litBytes "</code></pre></div>" ++ [10, 10] := by
  have hopt : optStrBytes [("text".toList, .str "\nSELECT 1;\n".toList),
        ("attr".toList, .map [("type".toList, .str "mysql".toList)])]
      "text".toList = litBytes "\nSELECT 1;\n" := rfl
  have hbody : wikidotTrimCodeBody (litBytes "\nSELECT 1;\n") =
      litBytes "SELECT 1;" := rfl
  have hty : codeType [("text".toList, .str "\nSELECT 1;\n".toList),
        ("attr".toList, .map [("type".toList, .str "mysql".toList)])] =
      litBytes "mysql" := rfl
  have hlang : codeLangs.contains (litBytes "mysql") = false := rfl
  have htrim : (phpTrimBytes (litBytes "SELECT 1;") == []) = false := rfl
  have htab : (litBytes "SELECT 1;").flatMap
      (fun b => if b == 9 then [32, 32, 32, 32] else [b]) =
      litBytes "SELECT 1;" := rfl
  have hesc : htmlSpecialCharsCompat (litBytes "SELECT 1;") =
      litBytes "SELECT 1;" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  unfold renderCode
  simp only [hopt, hbody, hty, hlang, htrim, htab, hesc,
    Bool.false_eq_true, ↓reduceIte, List.append_assoc]

/-! ## Embed: live-pinned parse and guard predicates -/

/-- Probe es-mixed-close (REFVAL p04..p06): the closer's variant is
    independent of the opener's. -/
theorem spec_embed_mixed_closers :
    embedMatchAt (litBytes "[[embed]]body[[/embedvideo]]") =
      some (litBytes "body", []) := rfl

/-- Probe es-single-language: the strip is double-quote-only; a
    single-quoted `language='JavaScript1.2'` survives on live. -/
theorem spec_embed_single_quote_language_kept :
    pcreReplaceAll languageStripPattern
        (litBytes "<iframe language='JavaScript1.2' src=\"http://x/\"></iframe>") =
    litBytes "<iframe language='JavaScript1.2' src=\"http://x/\"></iframe>" := by
  decide

/-- Probe es-single-attr-js: the any-attribute scan is double-quote-only;
    `x='javascript:foo'` is invisible to it on live as well. -/
theorem spec_embed_single_quote_attr_invisible :
    attrValues (litBytes "<iframe x='javascript:foo'></iframe>") 40 = [] := by
  decide

/- Probe es-gmaps-color: the configuration's `googlemaps` pattern carries
    `[0-0A-F]{6}` (digits 1-9 and lowercase a-f excluded); the reference and
    live both render the no-match block for `#123456`. The typo is recorded
    in `EmbedPatterns.lean`, so no extra theorem is needed here. -/

/-! ## Divergence mechanisms the mirror reproduces on the reference side -/

/-- Probe es-src-xjs: src is prefix-tested (false here) and is now skipped
    by the generic contains scan; the two predicates remain distinct. -/
theorem spec_embed_xjs_split_src_false :
    srcHasBadScheme (litBytes "xjavascript:alert(1)") = false := rfl

theorem spec_embed_xjs_split_attr_true :
    valueHasBadScheme (litBytes "xjavascript:alert(1)") = true := by
  decide

/-- REFCORR4 C-SUSPECT-CODEEMBED-4: the src scanner excludes a preceding
    word byte or '-', so `data-src` is not captured and the generic
    attribute check still sends the embed to the error block, as live does. -/
theorem spec_embed_data_src_not_captured :
    findSrcValue (litBytes "<img data-src=\"javascript:alert(1)\">") = none := by
  decide

/-- REFCORR4 C-SUSPECT-CODEEMBED-6: the event regex no longer requires a
    preceding whitespace byte, so a glued `/onclick=` is rejected on the
    mirror side too. -/
theorem spec_embed_glued_event_rejected :
    pcreMatch embedEventPattern
      (litBytes "<iframe src=\"http://x/\" style=\"\"/onclick=\"go()\"></iframe>") =
      true := by
  decide

/-- REFCORR4 C-SUSPECT-CODEEMBED-3: a single-quoted script-scheme src is
    captured by the src scanner and renders the whole embed empty. -/
theorem spec_embed_single_quote_src_captured :
    findSrcValue (litBytes "<iframe src='javascript:alert(1)' width='1'></iframe>") =
      some (litBytes "javascript:alert(1)") := by
  decide

/-- REFCORR4 C-SUSPECT-CODEEMBED-5: src is excluded from the generic
    contains scan, so `xjavascript:` on src passes through while the same
    value on another attribute still fires. -/
theorem spec_embed_xjs_src_skipped :
    attrValues (litBytes "<iframe src=\"xjavascript:alert(1)\"></iframe>") 60 = [] := by
  decide

/-! ## Note: the doubled leading newline and non-recursive close are live -/

/-- Probe ns-leading-newline (REFVAL p02/p14): a leading `\n` group is
    emitted twice before the start token. -/
theorem spec_note_doubles_leading_newline :
    noteScan (litBytes "x\n[[note]]\ny\n[[/note]]") [] 40 =
      (litBytes "x\n\n" ++ phBytes 0 ++ litBytes "\n\ny\n\n\n" ++ phBytes 1,
       [{ rule := "Note", opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Note", opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

/-- Probe ns-nested (REFVAL p12): the first closer wins; the inner opener
    and the outer closer stay literal. -/
theorem spec_note_closes_at_first_end :
    noteScan (litBytes "[[note]]\n[[note]]\ninner\n[[/note]]\n[[/note]]") [] 60 =
      (phBytes 0 ++ litBytes "\n\n[[note]]\ninner\n\n\n" ++ phBytes 1 ++
        litBytes "\n[[/note]]",
       [{ rule := "Note", opts := [("type".toList, OptVal.str "start".toList)] },
        { rule := "Note", opts := [("type".toList, OptVal.str "end".toList)] }]) :=
  rfl

/-- Probe ns-no-immediate-newline (REFVAL p08): `[[note]]body` is literal. -/
theorem spec_note_requires_newline_after_opener :
    noteScan (litBytes "[[note]]body\n[[/note]]") [] 40 =
      (litBytes "[[note]]body\n[[/note]]", []) := rfl

/-! ## Gallery, User, Social parse shapes confirmed by this lane -/

/-- Probe gs-size-case: `getAttrs` keys are case-sensitive, so `SIZE=`
    carries no size option; live also falls back to thumbnail. -/
theorem spec_gallery_size_attr_case_sensitive :
    (galleryToken (litBytes " SIZE=\"small\"") none).opts =
      [("sources".toList, OptVal.null)] := rfl

/-- Probe gs-bare and gs-bare-with-lines: a bare opener is still a Gallery
    token, with a null `sources` option. -/
theorem spec_gallery_bare_opener :
    (galleryToken [] none).opts = [("sources".toList, OptVal.null)] := rfl

/-- Probe us-space-only: the name group keeps the two spaces after the
    pattern's mandatory one; live's empty-`<em>` is dropped by Stage 2. -/
theorem spec_user_space_name :
    userMatchAt (litBytes "[[user   ]]") =
      some (false, litBytes "  ", []) := rfl

/-- Probe us-empty: a single space cannot fill the name group. -/
theorem spec_user_single_space_literal :
    userMatchAt (litBytes "[[user ]]") = none := rfl

/-- Probe ss-quote: PHP `urlencode` percent-encodes the embedded quote in
    the Social module handoff. -/
theorem spec_social_quote_urlencoded :
    urlencodeBytes (litBytes "a\"b") = litBytes "a%22b" := rfl

end LeanFtml
