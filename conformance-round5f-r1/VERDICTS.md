# R5F-R1 per-case verdicts (post-mask)

All sixteen captures are valid=true, stable=true and saved_source_matches=true. Verdicts are from comparison.json (standard wikidot-probe.norm() mask plus the campaign frame mask). Frame-only differences are owned inter-tag whitespace and trailing paragraph newlines and are CLEARED, never confirmed; Stage 2 frame and serving surfaces are cleared by rule.

R5FR1-D1 CLEARED. Live `<div type="t"> <p>body</p> </div>` vs ref `<div type="t"><p>body</p> </div>` after norm: identical rule-level bytes; the trailing tab is dropped by the control-byte filter on both sides. Frame-only diff. Category: byte agreement under frame mask.

R5FR1-D2 CLEARED. Live `<div role="note"> <p>body</p> </div>` vs ref `<div role="note"><p>body</p> </div>` after norm: the REFCORR12 right-trim on role agrees with live. Frame-only diff. Category: byte agreement under frame mask.

R5FR1-D3 CLEARED. Live `<div data-z="v"> <p>body</p> </div>` vs ref `<div data-z="v"><p>body</p> </div>` after norm: data-* trailing spaces trimmed on both sides. Frame-only diff. Category: byte agreement under frame mask.

R5FR1-D4 CLEARED. Live `<div class="a" style="color:red"> <p>body</p> </div>` vs ref same after norm: both keys trimmed and emitted in the fixed id-class-style-role-type order. Frame-only diff. Category: byte agreement under frame mask.

R5FR1-D5 CLEARED. Live `<div type> <p>body</p> </div>` vs ref `<div type><p>body</p> </div>` after norm: the space-only authored value keeps the key emptied on both sides (norm renders `type=""` as bare `type`). Frame-only diff. Category: byte agreement under frame mask.

R5FR1-D6 CLEARED. Live `<div type="a b c"> <p>body</p> </div>` vs ref `<div type="a b c"><p>body</p> </div>` after norm: internal runs collapsed and trailing run removed on both sides. Frame-only diff. Category: byte agreement under frame mask.

R5FR1-S1 CLEARED. Strict-match true. Live and ref both `<p><span data-y="">q[[/size]]&quot;]]body</span></p>`: the REFCORR12 data-y retention and 0xFF clear arm agree with live. Category: exact byte agreement.

R5FR1-S2 CONFIRMED C-R5F-R1-1. Live `<p><span class="a">body</span></p>` vs ref `<p><span class="a  ">body</span></p>` (ref line 8): trailing spaces kept by the raw Span value path, trimmed on live. Strict-match false, survives both masks. Category: rule-level attribute-value byte divergence.

R5FR1-S3 CLEARED. Strict-match true. Live and ref both `<p><span>q[[/size]]&quot;]]body</span></p>`: the id key is dropped on both sides under the REFCORR12 data-*-only retention split. Category: exact byte agreement.

R5FR1-S4 CONFIRMED C-R5F-R1-2. Live `<p><span data-x="v">body</span></p>` vs ref `<p><span data-x="v  ">body</span></p>` (ref line 10): uppercase key lowercased on both, trailing value spaces kept by the reference only. Strict-match false, survives both masks. Category: rule-level attribute-value byte divergence.

R5FR1-S5 CONFIRMED C-R5F-R1-3. Live `<p><span type="t">body</span></p>` vs ref `<p><span type="t  ">body</span></p>` (ref line 11): trailing spaces kept by the raw Span value path, trimmed on live. Strict-match false, survives both masks. Category: rule-level attribute-value byte divergence.

R5FR1-K1 CLEARED. Live and ref both place the hide link only in the top unfolded panel with the unfolded wrapper style="display:none": uppercase folded=NO is not accepted on either side. Frame-only diff. Category: byte agreement under frame mask.

R5FR1-K2 CLEARED. Live and ref both keep hideLocation=top for mixed-case Bottom: the hide link is top-only on both. Frame-only diff. Category: byte agreement under frame mask.

R5FR1-T1 CLEARED. Live and ref both render `<em>a'b</em>` with the apostrophe raw under ENT_COMPAT. Frame-only diff plus masked per-render tab ids. Category: byte agreement under frame mask.

R5FR1-Z1 CLEARED. Strict-match true. Live and ref both keep the literal `[[size -12px]]x[[/size]]`: the signed magnitude is rejected on both sides. Category: exact byte agreement.

R5FR1-X1 CLEARED. Live `<ol type="a"> <li>A</li> </ol> <br>` vs ref same after norm: the padded explicit-list type is collapsed and trimmed on both sides by buildListAttrs/normalizeAttrValue. Frame-only diff. Category: byte agreement under frame mask.

Untestable: 0. Stage 2 frame differences: not counted. Serving-layer surfaces: none encountered; no gallery ids, module placeholders or wdfiles hosts in these sources.
