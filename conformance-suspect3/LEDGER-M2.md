# Pre-probe prediction ledger — M2, the three open probe remainders (written 2026-11-22 before any live probe)

This closes the three evidence gaps in WORKLIST-FTML.md section 3. Every row has two observable predictions written before probing. P_code is the local reference render (php ref-php/harness/transform.php render, retained in ref-m2.json); P_alt is the competing live shape. Sources carry no trailing newline. Prefix muse-probe-suspect3-m2-.

## F-R2-85: literal NBSP immediately after a complete URL

m2-nbsp-after-url. Source `http://example.com/a--b?x=1\u00a02\nx`, the exact typo61 source with its regular space replaced by a literal U+00A0. The relay probe muse-probe-req-nbsp-url settled an NBSP INSIDE a URL (live percent-encodes it as %C2%A0); this row is the never-probed after-the-URL boundary. P_code: the reference's measured bytes `href="http://example.com/a--b?x=1%C2%A02"` with the link text swallowing the NBSP and the trailing `2`, i.e. its Url boundary admits the NBSP as a URL byte. P_alt: live keeps the NBSP outside the link (clean href, NBSP and `2` as following text, shown as &#160; or &nbsp; in the output layer), or percent-encodes it exactly as the reference does. This single probe settles the remainder. Plausible on a real page (a URL pasted before a non-breaking space).

m2-nbsp-after-url-inline. Source `A http://example.com/a B\u00a0C`. Control in which the NBSP is separated from the URL by an ordinary space; P_code and P_alt both agree that the URL is a clean autolink and the NBSP stays in plain text. It rules out a blanket NBSP transport effect. Plausible.

## GRAMMAR-INCLUDE L6: colon inside a site pair's page part

m2-include-colon-part. Source `[[include :sandbox-for-codex:foo:bar]]`. GRAMMAR-INCLUDE.md's C7 completion lists this as the one sub-shape still unprobed: a colon inside a pair's page part, with both implementations admitting it consistently. P_code: the missing-page error for the whole page part `foo:bar` on sandbox-for-codex (locally `<div class="error-block"><p>Included page &quot;foo:bar&quot; does not exist ...` with a create link on sandbox-for-codex.wikidot.com/foo:bar/edit/true). P_alt: live treats the third colon as another site separator (naming `bar` as the page on some other site), keeps the whole source literal, or normalizes the colon to a dash. Decisive for the last unprobed include resolution shape. Adversarial-only but directly named by the grammar record.

m2-include-colon-part-cross. Source `[[include :sandbox-for-codex:category:page]]`. Second spelling with a category-like page part, chosen because `category:page` is a normal Wikidot fullname. P_code: a missing-page error for `category:page` on sandbox-for-codex. P_alt: literal source or a different site/page split. Adversarial-only.

## Module654: four created but never captured probe shapes

These reproduce the exact sources of the four pages recorded as created with action=created and no capture in conformance-refphp/module/module654/probe-map.json. They close the explicit coverage gap in the R2 Module654 record rather than reopen any finding (whose canonicalization of serving-layer marker, TODO placeholder, widget HTML and rel attribute is unchanged).

m2-m654-upper-nested. Source `[[MODULE654 CSS]]\n[[module654 Rate]]\n[[/module]]\n[[/module]]` (p-upper-nested). P_code: a `\xFE` module marker for CSS whose body is the rewritten inner module654, with a literal `[[/module]]` tail — locally `þmodule "CSS" +module_body%3D%22%255B%255Bmodule654%2BRate%255D%255D%22 þ<p>[[/module]]</p>`. P_alt: live nests the two module calls and consumes both closers, or leaves the outer opener literal. Adversarial-only.

m2-m654-upper-inline-empty. Source `[[MODULE654 Rate]][[/module]]` (p-upper-inline-empty). P_code: the source left literal as one paragraph. P_alt: live claims the opener as a module with an empty body and a stray closer. Adversarial-only.

m2-m654-control-module. Source `[[module Rate]]\n[[/module]]` (p-control-module). P_code: a `\xFE` marker for the module with a literal `[[/module]]` paragraph tail. P_alt: live's real Rate widget or a no-such-module error block. Serving-layer control; the marker-versus-widget difference is class S, not a finding.

m2-m654-control-plain. Source `just plain text` (p-control-plain). P_code and P_alt both `<p>just plain text</p>`. Baseline control proving the capture and page pipeline work for this batch. Plausible.
