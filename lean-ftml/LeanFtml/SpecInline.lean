/-
  SpecInline — live-confirmed fossil behaviors of the simple-inline family.

  Each statement below is a Lean proposition about this tree's mirror functions
  in LeanFtml.InlineSimpleRules / LeanFtml.InteractiveRules. Every statement
  records the saved-page probe pages (site sandbox-for-codex, prefix
  muse-probe-suspect-inline-) whose valid, stable, source-matching captures
  discriminate that branch from the alternative reading of the PHP reference.

  Only CONFIRMED suspicions appear here. The four DIVERGENCE findings
  (C-SUSPECT-INLINE-1..4) are recorded in conformance-suspect-inline/candidates/
  with their own evidence and reference corrections; their old mirror arms are
  deliberately NOT restated as live behavior.
-/

import LeanFtml.InlineSimpleRules
import LeanFtml.InlineRender
import LeanFtml.InteractiveRules
import LeanFtml.InteractiveRender

namespace LeanFtml

/-- Url, plain inline form. Live probe:
    muse-probe-suspect-inline-url-inline-basic (`http://a`). -/
theorem spec_inline_url_plain :
    renderUrl [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "http://a".toList)] =
    litBytes "<a href=\"http://a\">http://a</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "http://a".toList)] "href".toList =
      litBytes "http://a" := rfl
  have henc : percentEncodeNonAscii (litBytes "http://a") =
      litBytes "http://a" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "http://a") =
      litBytes "http://a" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "http://a" == litBytes "#") = false := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "http://a".toList)] "text".toList =
      litBytes "http://a" := rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "http://a".toList)] "target".toList =
      [] := rfl
  have htruth : phpTruthyBytes [] = false := rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "inline".toList),
      ("href".toList, OptVal.str "http://a".toList),
      ("text".toList, OptVal.str "http://a".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htarget0,
    htruth, htype, Bool.false_eq_true, ↓reduceIte, List.nil_append,
    List.append_assoc]
  rfl

/-- Url: the exact href "#" is substituted to "javascript:;" before the
    on-page-anchor test sees it, so the starred form keeps its target. Live
    probes: muse-probe-suspect-inline-url-hash-star (`[*# Top]`) and
    muse-probe-suspect-inline-url-hash-unstar (`[# Top]`). -/
theorem spec_inline_url_hash_target_kept :
    renderUrl [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList),
      ("target".toList, OptVal.str "_blank".toList)] =
    litBytes "<a href=\"javascript:;\" target=\"_blank\">Top</a>" := by
  have hhref0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList),
      ("target".toList, OptVal.str "_blank".toList)] "href".toList =
      litBytes "#" := rfl
  have henc : percentEncodeNonAscii (litBytes "#") =
      litBytes "#" := rfl
  have hhrefE : htmlSpecialCharsCompat (litBytes "#") =
      litBytes "#" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have hhash : (litBytes "#" == litBytes "#") = true := rfl
  have htext0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList),
      ("target".toList, OptVal.str "_blank".toList)] "text".toList =
      litBytes "Top" := rfl
  have htext : htmlSpecialCharsCompat (litBytes "Top") =
      litBytes "Top" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htarget0 : optStrBytes [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList),
      ("target".toList, OptVal.str "_blank".toList)] "target".toList =
      litBytes "_blank" := rfl
  have htruth : phpTruthyBytes (litBytes "_blank") = true := rfl
  have htargetE : htmlSpecialCharsCompat (litBytes "_blank") =
      litBytes "_blank" := by
    rw [htmlSpecialCharsCompat_ascii _ (by decide)]
    rfl
  have htype : inlineTypeIs [("type".toList, OptVal.str "descr".toList),
      ("href".toList, OptVal.str "#".toList),
      ("text".toList, OptVal.str "Top".toList),
      ("target".toList, OptVal.str "_blank".toList)]
      (litBytes "footnote") = false := rfl
  unfold renderUrl
  simp only [hhref0, henc, hhrefE, hhash, htext0, htext, htarget0,
    htruth, htargetE, htype, Bool.false_eq_true, ↓reduceIte,
    List.nil_append, List.append_assoc]
  rfl

/-- Interwiki: the site table is byte-keyed and case-sensitive. A mixed-case
    standalone site key is NOT resolved; the lowercase key is. Live probes:
    muse-probe-suspect-inline-iw-standalone-case (`[Wikipedia:Some_Page]`),
    -iw-standalone-lower (`[wikipedia:Some_Page]`) and
    -iw-described-case (`[Wikipedia:Some_Page Label]`, whose parse path
    lowercases the site before the renderer sees it). -/
theorem spec_inline_interwiki_site_case_sensitive :
    bytesTableLookup interwikiSites (litBytes "Wikipedia") = none ∧
    bytesTableLookup interwikiSites (litBytes "wikipedia") =
      some (litBytes "https://en.wikipedia.org/wiki/%s") := by
  decide

set_option maxRecDepth 8192 in
/-- Interwiki: the page is inserted into the href raw, while the label is
    escaped. Live probe: muse-probe-suspect-inline-iw-amp (`[google:a&b]`). -/
theorem spec_inline_interwiki_href_amp_raw :
    renderInterwiki [("site".toList, OptVal.str "google".toList),
      ("page".toList, OptVal.str "a&b".toList),
      ("text".toList, OptVal.str "a&b".toList)] =
    litBytes "<a href=\"https://www.google.com/search?q=a&b\" " ++
      litBytes "onclick=\"window.open(this.href, '_blank'); return false;\">" ++
      litBytes "a&amp;b</a>" := rfl

set_option maxRecDepth 8192 in
/-- Interwiki: an unknown site returns the token's label escaped with
    ENT_COMPAT (REFCORR4 Batch C, CORRECTION-AGY-INTERWIKI-FALLBACK):
    the earlier RAW expectation below was falsified by live probes
    muse-probe-agy-suspect-p16-interwiki-unknown-html and
    -f10-interwiki-unknown-apos, so MIRROR-FIX restates only its
    expected bytes as a regression pin for the corrected fallback.
    Live probe muse-probe-suspect-inline-iw-unknown-described
    (`[nosuch:page Label]`) and the earlier R2-INLINE1 probe
    muse-probe-r2in1-iw-p11-unknown-labeled remain the branch pins. -/
theorem spec_inline_interwiki_unknown_raw :
    renderInterwiki [("site".toList, OptVal.str "nosuch".toList),
      ("page".toList, OptVal.str "page".toList),
      ("text".toList, OptVal.str "<b>&".toList)] =
    litBytes "&lt;b&gt;&amp;" := rfl

/-- Colortext: an inadmissible spec restores the literal opener. Live probe:
    muse-probe-suspect-inline-color-invalid-semi (`##a;b|x##`). -/
theorem spec_inline_color_invalid_literal :
    renderColortext [("type".toList, OptVal.str "start".toList),
      ("color".toList, OptVal.str "a;b".toList)] =
    litBytes "##a;b|" := rfl

/-- Colortext: a whitespace-only spec is admitted and renders with no space
    after the colon; a truly empty field never tokenizes (parse regex `.+?`),
    so the adjacent form stays literal. Live probes:
    muse-probe-suspect-inline-color-empty-color (`##|x##`) and the earlier
    R2-INLINE2 battery case c30 (`##red|##`, empty body). -/
theorem spec_inline_color_empty_spec :
    renderColortext [("type".toList, OptVal.str "start".toList),
      ("color".toList, OptVal.str "  ".toList)] =
    litBytes "<span style=\"color:\">" := rfl

/-- Size: the fossil style string carries a trailing semicolon, and the
    `{1,5}` digit/dot admission accepts a multi-dot spec while rejecting a
    six-digit one. Live probes: muse-probe-suspect-inline-size-semicolon,
    -size-dot-malformed, -size-six-digit and -size-uppercase (the regex's /i
    also admits uppercase tags); all four were already pinned by the
    R2-CONTAIN Size battery. -/
theorem spec_inline_size_styles :
    renderSize [("size".toList, OptVal.str "12px".toList),
      ("type".toList, OptVal.str "start".toList)] =
      litBytes "<span style=\"font-size:12px;\">" ∧
    renderSize [("size".toList, OptVal.str "1.2.3em".toList),
      ("type".toList, OptVal.str "start".toList)] =
      litBytes "<span style=\"font-size:1.2.3em;\">" := by
  constructor <;> rfl

/-- Span: attribute values use ENT_COMPAT escaping, so an apostrophe stays
    raw and an ampersand becomes `&amp;`. Live probes:
    muse-probe-suspect-inline-span-apos-fixed (`[[span class="it's"]]X[[/span]]`)
    and -span-amp-fixed (`[[span class="a&b"]]X[[/span]]`), both also pinned by
    the R2-CONTAIN Span probes p32/p34. -/
theorem spec_inline_span_attr_escaping :
    renderSpan [("args".toList, OptVal.map
        [("class".toList, OptVal.str "it's".toList)]),
      ("type".toList, OptVal.str "start".toList)] =
      litBytes "<span class=\"it's\">" ∧
    renderSpan [("args".toList, OptVal.map
        [("class".toList, OptVal.str "a&b".toList)]),
      ("type".toList, OptVal.str "start".toList)] =
      litBytes "<span class=\"a&amp;b\">" := by
  constructor <;> rfl

end LeanFtml
