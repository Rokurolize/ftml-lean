# Verdicts — suspicion round 4, cross-rule seams

Every capture in captures-a.json and captures-inc.json is valid, stable and saved_source_matches. Twenty-three pages, prefix muse-probe-suspect4c- on sandbox-for-codex, left in place. Reference bytes are this tree's ref-php/harness/transform.php on the same source (include cases through conformance-suspect4c/render-with-pages.php with the four target sources added to the page map). Frame newlines inside footnote and bibliography wrappers, and the empty `<span></span>` tidy removes from an empty heading, are the already-owned Stage 2 surface and are not counted as confirmations.

S1 fn-empty CONFIRMED. Live footer is `>1</a>.</div>` with no space. Reference footer is `>1</a>. </div>` with a space and no body. The empty Raw placeholder is non-empty to Footnoteitem's `!== ''` test and empty to Tighten and the Raw renderer.

S2 fn-ws CONFIRMED. Same live bytes as S1 (identical html sha256 9a433756f6c93079ca2faf49d827011e130ad08752d11db407983fc244a3c003). Spaces around `@@@@` do not become a body. Reference still emits the space.

S3 fn-six CLEARED. Live and reference both serve `>1</a>. @@</div>`. The six-at run is an empty token plus two literal @, and both sides agree.

S4 bib-empty CONFIRMED. Live is `<div class="bibitem" id="bibitem-1">1.</div>`. Reference is `<div class="bibitem" id="bibitem-1">1. </div>`. Same emptiness test on Bibitem's `'empty'` flag.

S5 toc-adj CLEARED. Both sides keep an empty first TOC link and the entry Second, and neither leaks a NUL. Live's `<h1 id="toc0"></h1>` equals the reference's `<h1 id="toc0"><span></span></h1>` after the same tidy invocation the UFFFD recovery uses; the empty span is Stage 2.

S6 toc-fn CLEARED. Live TOC anchor text is `Title1`, the heading carries the footnote sup, and the footer body is `body`, matching the reference. Copying the footnote placeholder into the TOC and letting strip_tags glue the digit is live behavior.

S7 toc-raw CLEARED. Live TOC text is `a&#32;&lt;b&gt;c&lt;/b&gt;` and the second entry is Second, matching the reference. strip_tags does not eat the escaped raw body.

S8 toc-ufffd CLEARED. Live keeps the TOC entry Hello, the heading Hello, and `<p>alpha 8</p>`. The NUL pair survives the recovery path's tidy, and the leaked digit is 8 on both sides.

S9 idx CLEARED, idx-base CLEARED, idx-raw CLEARED, idx-after CONFIRMED. idx-base is `<p>alpha <strong>bold</strong> 2</p>` on both. idx and idx-raw are both digit 5, so a leading empty Raw token shifts the leaked paragraph-end index on live exactly as on the reference, and a real `@@x@@` paragraph does the same. idx-after is the divergence: live `<p>alpha <strong>bold</strong> 3415</p>`, reference `<p>alpha <strong>bold</strong> 34</p>`. Before Tighten the source is paragraph-end, blank line, empty-paragraph start, the empty Raw placeholder, empty-paragraph end. Tighten deletes the placeholder and the newlines, and renderLiteralUfffdRecovery then leaks only the first placeholder and one neighbor (display ids 3 and 4). Live leaks the whole adjacent run, including the empty Raw placeholder that is still sitting in it (display ids 3, 4, 1 and 5).

S10 inc-free CLEARED. Live is `<p>see <a class="newpage" href="/page">Page</a></p>`, matching the reference. A freelink opened in the included page and closed in the includer is one link, and the splice newlines are normalized out of the target.

S11 inc-mod CONFIRMED. Live page-content is only the "No such module" error block. The reference emits that error, then a paragraph with the raw span `hello`, then a paragraph `[[/module]]`. Include expands `@@hello@@` into the body, Raw tokenizes it, and the REFCORR4 re-emit fires. Live keeps the included text inside the consumed module body and does not re-emit the span or the closer.

S12 inc-bq CLEARED and bq-start CLEARED. The include splits the two quote lines into two blockquotes on both sides. A page whose source is `> quoted` with no leading newline is one blockquote on both sides; Prefilter's synthetic leading newline is what the blockquote regex requires, and live behaves the same. The extra blank line inside the reference's blockquote is the frame newline.

S13 inc-idx CLEARED. Live is `<p>alpha <strong>bold</strong> 5</p>`, the same digit as idx and as the reference. Delivering the empty token through an include does not add a further shift.

S14 inc-css CONFIRMED. The reference emits the css module marker with body `%FF0%FF`, then the raw span `hello`, then `[[/module]]`. Live's `#page-content` is empty, and the full page carries `<style>\n@@hello@@\n</style>` (conformance-suspect4c/inc-css-style.txt) with no raw span and no literal closer. The marker-versus-style wrapper is the serving layer. The body bytes and the re-emit are the reference: live stored the included source `@@hello@@` as CSS and consumed the closer.

S15 fn-free CLEARED. Live footer is `1</a>. [[[<span style="white-space: pre-wrap;">x</span>]]]`, matching the reference. The freelink guard's literal brackets survive the footnote re-insertion.

The fixture page muse-probe-suspect4c-inc-emptyraw renders an empty page-content on live. The reference renders `<p></p>` for a lone `@@@@`. That empty paragraph is the Tighten boundary the sibling parse lane owns, and tidy drops it; the index probes above show the token itself is real on live. It is not scored as a confirmation here.
