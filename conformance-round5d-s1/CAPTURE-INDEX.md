# Capture index — R5D-S1

All 21 pages were created on sandbox-for-codex under prefix `muse-probe-round5d-s1-` and left in place. The standard wikidot-probe tool created s01–s14; a transport-security redirect refusal on the pre-existence GET for not-yet-existing pages blocked the tool for the remaining pages, so s15–s21 were saved by calling the same library's direct AMC save path (`Page.create_or_edit`, with try_again retry and read-back verification) from the unit-local scratch helper `make_remaining.py`. A final standard-tool create pass then confirmed all 21 pages as `exists` with matching source and wrote `map.json`. The standard capture tool double-fetched all 21 pages; every capture is valid=true, stable=true and saved_source_matches=true. No page was deleted.

| case id | fullname | capture html_sha256 | flags |
|---|---|---|---|
| s01-li-guard-footnote-gap | muse-probe-round5d-s1-s01-li-guard-footnote-gap | b56c3285f3a1f0ba91217fb79e1d864638a06aff4269d71138f9576a50fe7ac5 | valid/stable/source-matched |
| s02-li-empty-item-footnote-nested | muse-probe-round5d-s1-s02-li-empty-item-footnote-nested | 45cacdafc15d6b8005a2c553b7f29a0fcb5b99e47b7647fa4cf88c3230cd2bae | valid/stable/source-matched |
| s03-li-mixedcase-footnote-body | muse-probe-round5d-s1-s03-li-mixedcase-footnote-body | 0141ebb6884d988e68205ec5eb1d210c55eff7d6691c21d3629fecc3c39cb434 | valid/stable/source-matched |
| s04-li-fn-newline-before-failed-close | muse-probe-round5d-s1-s04-li-fn-newline-before-failed-close | ca73e3637d604f965339f0108105e0386ab42b7eb23d5f1a1b41a904f7999575 | valid/stable/source-matched |
| s05-fl-u2002-pipe | muse-probe-round5d-s1-s05-fl-u2002-pipe | 94d2ae1d4a19b0ca6c7ce940482bdef88107b57e4d826593c80cb9233fe4a675 | valid/stable/source-matched |
| s06-fl-u1680-pipe | muse-probe-round5d-s1-s06-fl-u1680-pipe | 94d2ae1d4a19b0ca6c7ce940482bdef88107b57e4d826593c80cb9233fe4a675 | valid/stable/source-matched |
| s07-fl-u0085-pipe | muse-probe-round5d-s1-s07-fl-u0085-pipe | 94d2ae1d4a19b0ca6c7ce940482bdef88107b57e4d826593c80cb9233fe4a675 | valid/stable/source-matched |
| s08-fl-mixed-nel-star-pipe | muse-probe-round5d-s1-s08-fl-mixed-nel-star-pipe | 94d2ae1d4a19b0ca6c7ce940482bdef88107b57e4d826593c80cb9233fe4a675 | valid/stable/source-matched |
| s09-fn-newline-in-quote | muse-probe-round5d-s1-s09-fn-newline-in-quote | 91c015de108af0934db9d4bdd01d8043c25480ee4e835381dcfa2ef694a32b95 | valid/stable/source-matched |
| s10-fn-leading-break-in-list | muse-probe-round5d-s1-s10-fn-leading-break-in-list | 22e10076906a57a178ea29c1756570c97befcac6e1e7a1b2a4a79ff675a0dd9c | valid/stable/source-matched |
| s11-fn-formfeed-in-quote | muse-probe-round5d-s1-s11-fn-formfeed-in-quote | 3bed96a4f259bc5cacc134195d7be07852b1a1241529ecae1cba4dd7c4899998 | valid/stable/source-matched |
| s12-fn-doublelf-in-list | muse-probe-round5d-s1-s12-fn-doublelf-in-list | 9482e364a1e5fd2009129a374c548bd9d41ef5a8b8ce561fb32e5d24777a8242 | valid/stable/source-matched |
| s13-div-ph-id-in-module | muse-probe-round5d-s1-s13-div-ph-id-in-module | b3e0122b100fe4f72c5544f83517a9ebb084d7e196270f9423657d7ad6758e9b | valid/stable/source-matched |
| s14-div-ph-id-u-prefix-in-module | muse-probe-round5d-s1-s14-div-ph-id-u-prefix-in-module | b3e0122b100fe4f72c5544f83517a9ebb084d7e196270f9423657d7ad6758e9b | valid/stable/source-matched |
| s15-div-ph-id-plus-class-in-nested-module | muse-probe-round5d-s1-s15-div-ph-id-plus-class-in-nested-module | b3e0122b100fe4f72c5544f83517a9ebb084d7e196270f9423657d7ad6758e9b | valid/stable/source-matched |
| s16-raw-surplus-include-before-quad | muse-probe-round5d-s1-s16-raw-surplus-include-before-quad | e4af0118d414828afebc546713f6d28cffe6b9ee78a3e82eca858a443052efc1 | valid/stable/source-matched |
| s17-raw-surplus-include-after | muse-probe-round5d-s1-s17-raw-surplus-include-after | 87c1519af052e818cff0a7144d2d5e62d67078d51110d7d73c49cf4159fd1cc2 | valid/stable/source-matched |
| s18-tableadv-data-dot-nested | muse-probe-round5d-s1-s18-tableadv-data-dot-nested | 3d104e4eb29bde908c602dcedbd69cd70f22a299cd366b116282d3c472a655a5 | valid/stable/source-matched |
| s19-tableadv-data-mixed-duplicate-nested | muse-probe-round5d-s1-s19-tableadv-data-mixed-duplicate-nested | d6d2293bba9f792a10e0a764fb2063ef54fe70842eeabac9afe7c84f520ba85f | valid/stable/source-matched |
| s20-module-nested-raw-token | muse-probe-round5d-s1-s20-module-nested-raw-token | e891f2bb321f042b39910808067638c3bbb4a8fca0d145d27a1da192c6c28170 | valid/stable/source-matched |
| t-raw (support include target) | muse-probe-round5d-s1-t-raw | b9411bf302aef7b681da8552d4817bd5e2f099eb2c608f4d22f7cb16c893d6ab | valid/stable/source-matched |

Counts: 21 created, 21 captured, 21 valid, 21 stable, 21 source-matched, 0 untestable. Twenty of the 21 cases are numbered suspicions; `t-raw` is the run-owned include target used by the Raw/include seam and is not a suspicion.
