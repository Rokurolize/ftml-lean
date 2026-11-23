# R5G-R1 per-case verdicts and decisive bytes

All sixteen cases have a valid, stable, source-matching capture. Grading uses wikidot-probe.norm() (standard mask) plus the campaign frame mask (inter-tag whitespace collapse and trim); token-id digits, tab ids, date attributes and Stage 2 purifyHtml tidy frame are owned classes and cannot confirm. Final tally: 2 CONFIRMED, 14 CLEARED, 0 UNTESTABLE.

R5GR1-A1 CLEARED: live and reference both emit `<p><span class="a">body</span></p>`; the R13 Span both-end trim drops the authored leading and trailing spaces on live as the reference predicts. Reason category: byte-identical after both masks.

R5GR1-A2 CLEARED: both emit `<p><span style="color: red">body</span></p>`; the R13 Span collapse arm collapses the internal double space on live. Reason category: byte-identical after both masks.

R5GR1-A3 CLEARED: both emit `<p><span type="A\x1bB">body</span></p>`; live keeps ESC in a Span type value, confirming the R13 narrowed C0 class D on the newly normalized Span consumer. Reason category: byte-identical after both masks.

R5GR1-A4 CLEARED: both emit `<p><span data-x="A\x7fB">body</span></p>`; live keeps DEL on a normalized Span data-* value. Reason category: byte-identical after both masks.

R5GR1-A5 CLEARED: live `<div class="a\x1b"> <p>body</p> </div>` against reference `<div class="a\x1b"><p>body</p> </div>`; after the frame mask both are `<div class="a\x1b"><p>body</p></div>`. DECISIVE value ESC kept and trailing spaces trimmed agree; the only raw difference is an inter-tag space. Reason category: frame-only whitespace.

R5GR1-A6 CLEARED: both emit `<p><span role="">body</span></p>`; a space-only authored role keeps the key emptied on live. Reason category: byte-identical after both masks.

R5GR1-A7 CLEARED: both emit `<p><span data-x="v">body</span></p>`; uppercase X lowercases and both padding runs trim on live. Reason category: byte-identical after both masks.

R5GR1-B1 CLEARED: live `alpha <div type="A\x1bB"> <p>body</p> </div>` against reference `alpha <div type="A\x1bB"><p>body</p> </div>`; after the frame mask the bare lead, kept ESC and trimmed normalized type all agree. Reason category: frame-only whitespace.

R5GR1-B2 CLEARED as owned Stage 2 tidy frame: live `alpha\n<div class="a">body</div>` against reference `<p>alpha <div class="a">body</div></p>\n\n`. The raw DIFF is exactly the reference's misnested `<p>` containing a `<div>`; live's purifyHtml tidy removes the wrapper and the owned symmetric frame transform makes both sides `alpha <div class="a">body</div>`. This is the same surface cleared as R5E-P4-C09/C17 and R5E-P1-C1-DIVSCORED, so the scored attributed opener does not create a new rule-level value. Reason category: owned tidy frame.

R5GR1-B3 CONFIRMED C-R5G-R1-1: live `alpha <span style="font-size:12px;">x</span>\n<div class="a">\n<p>body</p>\n</div>` against reference `<p>alpha <span style="font-size:12px;">x</span> <div class="a"></p>\n\n<p>body</p>\n\n</div>` (ref.jsonl line 10). The reference closes a stray `<p>` immediately after the div opener and reopens a second paragraph for the div body, while live leaves the lead bare and keeps one well-formed div; this is a rule-level paragraph-structure difference that survives both masks. The class value a itself agrees on both sides under R13 normalization. Reason category: rule-level paragraph structure, attributed-opener sibling of the still-open C-R5E-R1-2 class.

R5GR1-B4 CLEARED: live and reference both keep the alpha and beta leads bare with type values A\x7fB and t after the frame mask; the DEL byte is kept and the second trailing run is trimmed on live. Reason category: frame-only whitespace.

R5GR1-C1 CLEARED: both show the folded label 0&nbsp; (masked to `0 `) and the default – hide block link; the R13-style strict-zero guard keeps the padded zero visible on live. Reason category: byte-identical after both masks (frame-only inter-tag whitespace).

R5GR1-C2 CONFIRMED C-R5G-R1-2: live `<em>0</em>` against reference `<em>untitled</em>` (ref.jsonl line 13). A padded zero tab title is visible on live but defaults to untitled on the reference, a rule-level tab-label value difference on the R13 D11 falsy path with a fresh input. Reason category: rule-level label value, not a serving id or tidy frame.

R5GR1-C3 CLEARED: both show `<em>00</em>` after the frame mask; the reference's truthy boundary for the R13 falsy test is correct on live. Reason category: frame-only whitespace.

R5GR1-C4 CLEARED: both emit `<p><span style="font-size:12px;">A\x1bB</span></p>`; live keeps ESC in a Size body under the R13 narrowed C0 class. Reason category: byte-identical after both masks.

R5GR1-C5 CLEARED: live and reference both emit the two-list shape with a literal `[[li]]B` fragment and a trailing break after the frame mask; the R13 symmetric nested-boundary rewrite agrees on live for this case combination. Reason category: frame-only whitespace.
