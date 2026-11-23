# PAGE-LIST — R5G-P3 run-owned pages, all left in place on sandbox-for-codex

Prefix muse-probe-round5g-p3-. Two include targets and twenty case pages were created; nothing was deleted.

## Include targets

- muse-probe-round5g-p3-t1 :: "{$a}|{$b}" :: created
- muse-probe-round5g-p3-t2 :: "Q{$a}R" :: created

## Probe cases

- muse-probe-round5g-p3-p3g-01-img-style-leading :: "[[image IMG.png style=\" color:red\"]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-02-img-width-esc :: "[[image IMG.png width=\"1\u001b0\"]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-03-img-class-esc :: "[[image IMG.png class=\"th\u001bick\"]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-04-img-height-del :: "[[image IMG.png height=\"10\"]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-05-img-link-esc :: "[[image IMG.png link=\"#a\u001bb\"]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-06-img-class-ff :: "[[image IMG.png class=\"th\fck\"]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-07-anchor-href-del :: "[[a href=\"#ab\"]]x[[/a]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-08-anchor-href-tab :: "[[a href=\"#a\tb\"]]x[[/a]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-09-anchor-class-esc :: "[[a class=\"a\u001bb\"]]x[[/a]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-10-span-class-esc :: "[[span class=\"a\u001bb\"]]x[[/span]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-11-span-id-spaces :: "[[span id=\" A B \"]]x[[/span]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-12-div-role-del :: "\n[[div role=\"AB\"]]\nx\n[[/div]]\n" :: created :: valid=False stable=True source_matches=False
- muse-probe-round5g-p3-p3g-13-gallery-data-mixed :: "[[gallery]]\n: IMG.png link=\"DaTa:text/html,x\"\n[[/gallery]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-14-gallery-vbscript :: "[[gallery]]\n: IMG.png link=\"VBScript:msgbox(1)\"\n[[/gallery]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-15-url-dollar-label :: "[http://example.com x$]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-16-raw-nine-run :: "@@@@@@@@@" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-17-raw-closer-7 :: "@@@@ZQ@@@@@@@" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-18-tableadv-dotted :: "[[table data-a..b=\"v\"]]\n[[row]]\n[[cell]]X[[/cell]]\n[[/row]]\n[[/table]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-19-embed-underscore-on :: "[[embed]]<iframe src=\"http://wikimapia.org/s/x\" _onclick=\"evil()\"></iframe>[[/embed]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-20-embed-hyphen-on :: "[[embed]]<iframe src=\"http://wikimapia.org/s/x\" -onclick=\"evil()\"></iframe>[[/embed]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-21-include-two-placeholders :: "[[include muse-probe-round5g-p3-t1 | a=X | b=Y]]" :: created :: valid=True stable=True source_matches=True
- muse-probe-round5g-p3-p3g-22-include-adjacent-literal :: "[[include muse-probe-round5g-p3-t2 | a=Z]]" :: created :: valid=True stable=True source_matches=True
