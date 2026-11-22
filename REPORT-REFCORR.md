# REPORT-REFCORR

## fnb-24

Mechanism. Footnoteblock::process (ref-php/text-wiki/Text/Wiki/Parse/Default/Footnoteblock.php) reassembles each collected note as a Footnoteitem start token, the stored body, two newlines, and a Footnoteitem end token. For `first para\n\nsecond para` the Paragraph rule leaves the blank line as raw newlines between the unwrapped lead and the next paragraph start, and Tighten deletes every remaining newline, so the reference emitted `first para<p>second para</p>`.

Change. Assembly now inserts a Footnoteitem `parabreak` token on the lead side of the first paragraph break, and Footnoteitem's Xhtml renderer (ref-php/text-wiki/Text/Wiki/Render/Xhtml/Footnoteitem.php) renders that token as `\n`. Pre-correction copies: materials/conformance-refphp/notes/Footnoteblock.before-refcorr.php and Footnoteitem.before-refcorr.php. Record: materials/conformance-refphp/notes/CORRECTION-FNB24.md.

Verification. batch.php render of the probe source matches the capture's footnote body `first para\n<p>second para</p>`. Inside the footnote-footer element the remaining difference is the paragraph-end frame (`\n\n` before `</div>` against the capture's single newline). Notes batteries, 365 cases: render movement on exactly the four two-paragraph note bodies (fnb-24-note-paragraphs, fni-12-paragraphs, fn14-multiline-body, fn44-across-paragraphs), each by that one newline. Every other notes case was unchanged, including bibliography 56, bibitem 52, bibcite 60, the notes x battery 39, and the audit state-leak battery 7.

## x87

Mechanism. Superscript.php tried its non-empty body before the empty pair. Because `^` is a legal body character, `^^^^` on `^^ a ^^ ,, b ,, ^^^^ ,,,, ^^x^^^^ ,,,,y,,,,` opened a span through the later `^^` and claimed `^^ ,,,, ^^x`, which rendered `<sup>^^ ^^x</sup>` after Subscript dropped the commas inside that body. Subscript.php already prefers `,,,,` first and was not the rule that claimed the span.

Change. The empty `^^^^` alternative is now the first alternative, and an unset capture group is the empty body. Subscript.php was not edited. Pre-correction copy: materials/conformance-refphp/inline3/Superscript.before-refcorr.php. Record: materials/conformance-refphp/inline3/CORRECTION-X87.md.

Verification. batch.php render of x87 is `<p>^^ a ^^ ,, b ,, <sup>x</sup>^^ y</p>` plus the harness's trailing paragraph newlines, byte-identical to the live capture once those newlines are stripped. Inline-3 batteries, 446 cases (tt 55, sup 66, sub 55, typo 92, tighten 70, x 108): render movement on x87 only.

COMPLETE
