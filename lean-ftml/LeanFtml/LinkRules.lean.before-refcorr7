/-
  LeanFtml.LinkRules — R3.5 mirrors of the Concatlines, Freelink,
  and Equationreference parse rules (pipeline positions 15–17,
  after Math), modelled from the reference's corrected rule files
  (ref-php/text-wiki/Text/Wiki/Parse/Default/{Concatlines,
  Freelink,Equationreference}.php) read together with the R2 stage
  record (conformance-refphp/R2-LINK.md and the per-rule SECTION.md
  files under conformance-refphp/link/).

  ## The byte-form obligation, per rule

  All three rules run after token-producing rules, so all three
  mirrors work on the byte form through `applyByteRule`.

  * Concatlines: a hand-written parse() (no regex property) that
    rewrites the whole source in one left-to-right pass and claims
    no token. Its trigger is the adjacent byte pair `\` + LF. A
    placeholder's bytes are delimiter, digits, delimiter — neither
    byte of the pair — so a pair can neither start nor end inside
    a placeholder, and the pair is consumed or kept exactly as the
    reference consumes it. The one lookahead, the standalone
    div-opener line that keeps its newline, reads the following
    line's bytes, placeholders included: a line holding a
    placeholder in place of the opener text fails the opener test
    in the reference (the placeholder bytes are not `[[div`) and
    in the mirror alike, since both test the same bytes.
  * Freelink: the pattern's character classes exclude only `[`
    and `]`, so a match can span a whole placeholder inside the
    target or the label (the placeholder holds neither bracket),
    and the claimed options can therefore be `OptVal.bytes` (the
    x-free-math-label interaction shape, where a Freelink claim
    inside an eref label leaves the placeholder as the eref's
    label bytes). A match can neither start nor end inside a
    placeholder: the opener `[[[` and closer `]]]` are bracket
    literals, and the target/label runs end only at a bracket or a
    pipe, none of which a placeholder contains. process() works
    on the raw target bytes throughout (hash peeling, the slug
    computation, the display text), and the mirror does the same;
    the one character-level step, the non-ASCII transliteration,
    is gated in the reference on the target being valid UTF-8
    (its `/u` probe fails on the delimiter byte), so a target
    spanning a placeholder is never transliterated, in both.
    REFCORR3 C-SUSPECT-SERVING-2: with no leading space, a target
    whose first byte is `*` is a new-tab marker — process() strips
    it before the `isUrlTarget` test (so a starred URL is not
    slugified into a local link) and appends `target="_blank"` at
    the end of that URL token's options; plain URLs and local
    starred page names stay byte-unchanged.
  * Equationreference: the pattern is `\[\[eref (.*?)\]\]` with
    no modifiers — case-sensitive, and `.` excludes the newline
    byte. The lazy label can span whole placeholders (a
    placeholder holds no newline and no `]`), so the label option
    can be `OptVal.bytes`; it can neither start nor end inside
    one. The parse claims a token whose only option is the
    trimmed label: the equations map is NOT read at parse time in
    the reference (the lookup lives in the render rule, outside
    R3's parse-phase scope; see REPORT-R35.md). What parse pins
    about the map is Math's writes (R3.4's mirror, last
    registration wins by PHP array assignment), carried through
    this stage as compared state untouched by all three rules.

  ## What is modelled

  Concatlines is translated mechanically from the corrected
  parse(): the single pass, the backslash-newline pair, and the
  div-opener lookahead (the trimmed line tested against
  `/^\[\[div_?(?:[ \t].*)?\]\]$/i`). Freelink's matcher is an
  explicit enumeration of its pattern
  `/\[\[\[([^\]\[]+?)(\|[^\]\[]*)?\]\]\]/` in PCRE priority order
  (target lazy ascending; at each length the label group present
  before absent; the label run maximal and forced), and its
  process() is transcribed step for step, including the literal
  returns, the hash and hash-route peeling, the URL branch, the
  transliteration (the reference's 468-entry table, extracted
  behaviorally), and `WDStringUtils::toUnixName` (the reference's
  own slug function, with its CONVERT_ARRAY extracted as PHP
  resolves it). Equationreference's matcher grows the lazy label
  to each newline-free `]]` in order, as Date's patterns do.
-/

import LeanFtml.TokenState
import LeanFtml.FrameRules
import LeanFtml.CodeRule
import LeanFtml.FormRawRules
import LeanFtml.ModuleRules
import LeanFtml.NextRules

namespace LeanFtml

/-! ## Byte helpers for the LINK family -/

/-- Is `b` a space or tab byte (the Concatlines trim set and
    div-opener class)? -/
def isSpaceTab (b : Nat) : Bool := b == 32 || b == 9

/-- Trim space and tab bytes at both ends (PHP's
    `trim($line, " \t")` in Concatlines). -/
def trimSpaceTab (bs : List Nat) : List Nat :=
  ((bs.dropWhile isSpaceTab).reverse.dropWhile isSpaceTab).reverse

/-- Trim PHP trim-set bytes at the right end only (PHP's `rtrim`
    with its default character list, used by Freelink's anchor
    peel). -/
def rtrimBytes (bs : List Nat) : List Nat :=
  (bs.reverse.dropWhile isTrimByte).reverse

/-! ## Concatlines -/

/-- The div-opener lookahead of the corrected Concatlines rule:
    does the (space/tab-trimmed) line match
    `/^\[\[div_?(?:[ \t].*)?\]\]$/i`? The optional underscore is
    tried consumed before not (PCRE's greedy `?`); the optional
    group is either absent (the line ends right after the opener
    head) or one space/tab byte, any bytes, and the closing `]]`
    at the line's end (the line holds no newline, so `.` spans
    it all). -/
def isDivOpenerLine (line : List Nat) : Bool :=
  let m := trimSpaceTab line
  match matchLitCI (litBytes "[[div") m with
  | none => false
  | some rest =>
      let rests : List (List Nat) :=
        match rest with
        | 95 :: r => [r, rest]
        | _ => [rest]
      rests.any (fun r =>
        r == [93, 93] ||
        ((r.head? == some 32 || r.head? == some 9) &&
          3 ≤ r.length && r.drop (r.length - 2) == [93, 93]))

/-- The Concatlines pass over the byte form: a single
    left-to-right scan, exactly the corrected parse()'s loop. At
    a backslash immediately followed by a newline, the pair is
    dropped (the lines join), except when the next line is a
    standalone div opener, where the backslash is dropped but the
    newline is kept. Scanning resumes right after the consumed
    pair, in the original bytes: a backslash or newline newly
    exposed by a removal is not re-examined as a pair (the
    fossil's single-pass `str_replace` shape, which R2 settled
    against live). -/
def concatScan : List Nat → List Nat
  | [] => []
  | 92 :: 10 :: rest =>
      let line := rest.takeWhile (fun b => b != 10)
      (if isDivOpenerLine line then [10] else []) ++ concatScan rest
  | b :: rest => b :: concatScan rest

/-- The Concatlines rule mirror: a whole-source rewrite claiming
    no token. (The reference's `strpos` early return when no pair
    exists is an optimization; the pass without a pair is the
    identity, so the mirror needs no guard.) -/
def concatlinesRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => (concatScan src, toks))

/-! ## The character tables (extracted from the reference) -/
/-- The Freelink transliteration table (codepoint to replacement
    text), extracted behaviorally from the reference's
    `freelink_transliterate` map: 468 entries, probed per
    codepoint over U+0080..U+3000 against the reference on WSL
    (a single non-ASCII character maps to its table value, or
    to a space when unmapped; the count matches the R2 record's
    468-entry table). -/
def transTable : List (Nat × List Char) :=
[(192, "a".toList),
(193, "a".toList),
(194, "a".toList),
(195, "a".toList),
(196, "ae".toList),
(197, "a".toList),
(198, "ae".toList),
(200, "e".toList),
(201, "e".toList),
(202, "e".toList),
(203, "e".toList),
(204, "i".toList),
(205, "i".toList),
(206, "i".toList),
(207, "i".toList),
(208, "d".toList),
(209, "n".toList),
(210, "o".toList),
(211, "o".toList),
(212, "o".toList),
(213, "o".toList),
(214, "oe".toList),
(216, "o".toList),
(217, "u".toList),
(218, "u".toList),
(219, "u".toList),
(220, "ue".toList),
(221, "y".toList),
(222, "t".toList),
(223, "ss".toList),
(224, "a".toList),
(225, "a".toList),
(226, "a".toList),
(227, "a".toList),
(228, "ae".toList),
(229, "a".toList),
(230, "ae".toList),
(231, "c".toList),
(232, "e".toList),
(233, "e".toList),
(234, "e".toList),
(235, "e".toList),
(236, "i".toList),
(237, "i".toList),
(238, "i".toList),
(239, "i".toList),
(240, "d".toList),
(241, "n".toList),
(242, "o".toList),
(243, "o".toList),
(244, "o".toList),
(245, "o".toList),
(246, "oe".toList),
(248, "o".toList),
(249, "u".toList),
(250, "u".toList),
(251, "u".toList),
(252, "ue".toList),
(253, "y".toList),
(254, "t".toList),
(255, "y".toList),
(256, "a".toList),
(257, "a".toList),
(258, "a".toList),
(259, "a".toList),
(260, "a".toList),
(261, "a".toList),
(262, "c".toList),
(263, "c".toList),
(264, "c".toList),
(265, "c".toList),
(266, "c".toList),
(267, "c".toList),
(268, "c".toList),
(269, "c".toList),
(270, "d".toList),
(271, "d".toList),
(272, "d".toList),
(273, "d".toList),
(274, "e".toList),
(275, "e".toList),
(276, "e".toList),
(277, "e".toList),
(278, "e".toList),
(279, "e".toList),
(280, "e".toList),
(281, "e".toList),
(282, "e".toList),
(283, "e".toList),
(284, "g".toList),
(285, "g".toList),
(286, "g".toList),
(287, "g".toList),
(288, "g".toList),
(289, "g".toList),
(290, "g".toList),
(291, "g".toList),
(292, "h".toList),
(293, "h".toList),
(294, "h".toList),
(295, "h".toList),
(296, "i".toList),
(297, "i".toList),
(298, "i".toList),
(299, "i".toList),
(300, "i".toList),
(301, "i".toList),
(302, "i".toList),
(303, "i".toList),
(304, "i".toList),
(305, "i".toList),
(306, "ij".toList),
(307, "ij".toList),
(308, "j".toList),
(309, "j".toList),
(310, "k".toList),
(311, "k".toList),
(312, "k".toList),
(313, "l".toList),
(314, "l".toList),
(315, "l".toList),
(316, "l".toList),
(317, "l".toList),
(318, "l".toList),
(319, "l".toList),
(320, "l".toList),
(321, "l".toList),
(322, "l".toList),
(323, "n".toList),
(324, "n".toList),
(325, "n".toList),
(326, "n".toList),
(327, "n".toList),
(328, "n".toList),
(329, "n".toList),
(330, "n".toList),
(331, "n".toList),
(332, "o".toList),
(333, "o".toList),
(334, "o".toList),
(335, "o".toList),
(336, "o".toList),
(337, "o".toList),
(338, "oe".toList),
(339, "oe".toList),
(340, "r".toList),
(341, "r".toList),
(342, "r".toList),
(343, "r".toList),
(344, "r".toList),
(345, "r".toList),
(346, "s".toList),
(347, "s".toList),
(348, "s".toList),
(349, "s".toList),
(350, "s".toList),
(351, "s".toList),
(352, "s".toList),
(353, "s".toList),
(354, "t".toList),
(355, "t".toList),
(356, "t".toList),
(357, "t".toList),
(358, "t".toList),
(359, "t".toList),
(360, "u".toList),
(361, "u".toList),
(362, "u".toList),
(363, "u".toList),
(364, "u".toList),
(365, "u".toList),
(366, "u".toList),
(367, "u".toList),
(368, "u".toList),
(369, "u".toList),
(370, "u".toList),
(371, "u".toList),
(372, "w".toList),
(373, "w".toList),
(374, "y".toList),
(375, "y".toList),
(376, "y".toList),
(377, "z".toList),
(378, "z".toList),
(379, "z".toList),
(380, "z".toList),
(381, "z".toList),
(382, "z".toList),
(383, "ss".toList),
(401, "f".toList),
(402, "f".toList),
(536, "s".toList),
(537, "s".toList),
(538, "t".toList),
(539, "t".toList),
(902, "a".toList),
(904, "e".toList),
(905, "i".toList),
(906, "i".toList),
(908, "o".toList),
(910, "y".toList),
(911, "o".toList),
(912, "i".toList),
(913, "a".toList),
(914, "v".toList),
(915, "g".toList),
(916, "d".toList),
(917, "e".toList),
(918, "z".toList),
(919, "i".toList),
(920, "th".toList),
(921, "i".toList),
(922, "k".toList),
(923, "l".toList),
(924, "m".toList),
(925, "n".toList),
(926, "x".toList),
(927, "o".toList),
(928, "p".toList),
(929, "r".toList),
(931, "s".toList),
(932, "t".toList),
(933, "y".toList),
(934, "f".toList),
(935, "ch".toList),
(936, "ps".toList),
(937, "o".toList),
(938, "i".toList),
(939, "y".toList),
(940, "a".toList),
(941, "e".toList),
(942, "i".toList),
(943, "i".toList),
(944, "y".toList),
(945, "a".toList),
(946, "v".toList),
(947, "g".toList),
(948, "d".toList),
(949, "e".toList),
(950, "z".toList),
(951, "i".toList),
(952, "th".toList),
(953, "i".toList),
(954, "k".toList),
(955, "l".toList),
(956, "m".toList),
(957, "n".toList),
(958, "x".toList),
(959, "o".toList),
(960, "p".toList),
(961, "r".toList),
(962, "s".toList),
(963, "s".toList),
(964, "t".toList),
(965, "y".toList),
(966, "f".toList),
(967, "ch".toList),
(968, "ps".toList),
(969, "o".toList),
(970, "i".toList),
(971, "y".toList),
(972, "o".toList),
(973, "y".toList),
(974, "o".toList),
(1012, "th".toList),
(1025, "e".toList),
(1026, "d".toList),
(1027, "g".toList),
(1028, "e".toList),
(1029, "z".toList),
(1030, "i".toList),
(1031, "i".toList),
(1032, "j".toList),
(1033, "l".toList),
(1034, "n".toList),
(1035, "c".toList),
(1036, "k".toList),
(1038, "u".toList),
(1039, "d".toList),
(1040, "a".toList),
(1041, "b".toList),
(1042, "v".toList),
(1043, "g".toList),
(1044, "d".toList),
(1045, "e".toList),
(1046, "z".toList),
(1047, "z".toList),
(1048, "i".toList),
(1049, "j".toList),
(1050, "k".toList),
(1051, "l".toList),
(1052, "m".toList),
(1053, "n".toList),
(1054, "o".toList),
(1055, "p".toList),
(1056, "r".toList),
(1057, "s".toList),
(1058, "t".toList),
(1059, "u".toList),
(1060, "f".toList),
(1061, "h".toList),
(1062, "c".toList),
(1063, "c".toList),
(1064, "s".toList),
(1065, "s".toList),
(1067, "y".toList),
(1069, "e".toList),
(1070, "u".toList),
(1071, "a".toList),
(1072, "a".toList),
(1073, "b".toList),
(1074, "v".toList),
(1075, "g".toList),
(1076, "d".toList),
(1077, "e".toList),
(1078, "z".toList),
(1079, "z".toList),
(1080, "i".toList),
(1081, "j".toList),
(1082, "k".toList),
(1083, "l".toList),
(1084, "m".toList),
(1085, "n".toList),
(1086, "o".toList),
(1087, "p".toList),
(1088, "r".toList),
(1089, "s".toList),
(1090, "t".toList),
(1091, "u".toList),
(1092, "f".toList),
(1093, "h".toList),
(1094, "c".toList),
(1095, "c".toList),
(1096, "s".toList),
(1097, "s".toList),
(1099, "y".toList),
(1101, "e".toList),
(1102, "u".toList),
(1103, "a".toList),
(1105, "e".toList),
(1106, "d".toList),
(1107, "g".toList),
(1108, "e".toList),
(1109, "z".toList),
(1110, "i".toList),
(1111, "i".toList),
(1112, "j".toList),
(1113, "l".toList),
(1114, "n".toList),
(1115, "c".toList),
(1116, "k".toList),
(1118, "u".toList),
(1119, "d".toList),
(1122, "e".toList),
(1123, "e".toList),
(1130, "a".toList),
(1131, "a".toList),
(1138, "f".toList),
(1139, "f".toList),
(1140, "y".toList),
(1141, "y".toList),
(1168, "g".toList),
(1169, "g".toList),
(1170, "g".toList),
(1171, "g".toList),
(1172, "g".toList),
(1173, "g".toList),
(1174, "z".toList),
(1175, "z".toList),
(1178, "k".toList),
(1179, "k".toList),
(1180, "k".toList),
(1181, "k".toList),
(1182, "k".toList),
(1183, "k".toList),
(1184, "k".toList),
(1185, "k".toList),
(1186, "n".toList),
(1187, "n".toList),
(1188, "n".toList),
(1189, "n".toList),
(1190, "p".toList),
(1191, "p".toList),
(1192, "o".toList),
(1193, "o".toList),
(1194, "s".toList),
(1195, "s".toList),
(1196, "t".toList),
(1197, "t".toList),
(1198, "u".toList),
(1199, "u".toList),
(1200, "u".toList),
(1201, "u".toList),
(1202, "h".toList),
(1203, "h".toList),
(1204, "c".toList),
(1205, "c".toList),
(1206, "c".toList),
(1207, "c".toList),
(1208, "c".toList),
(1209, "c".toList),
(1210, "h".toList),
(1211, "h".toList),
(1212, "c".toList),
(1213, "c".toList),
(1214, "c".toList),
(1215, "c".toList),
(1217, "z".toList),
(1218, "z".toList),
(1219, "k".toList),
(1220, "k".toList),
(1221, "l".toList),
(1222, "l".toList),
(1223, "n".toList),
(1224, "n".toList),
(1225, "n".toList),
(1226, "n".toList),
(1227, "c".toList),
(1228, "c".toList),
(1232, "a".toList),
(1233, "a".toList),
(1234, "a".toList),
(1235, "a".toList),
(1236, "ae".toList),
(1237, "ae".toList),
(1238, "e".toList),
(1239, "e".toList),
(1240, "a".toList),
(1241, "a".toList),
(1242, "a".toList),
(1243, "a".toList),
(1244, "z".toList),
(1245, "z".toList),
(1246, "z".toList),
(1247, "z".toList),
(1248, "z".toList),
(1249, "z".toList),
(1250, "i".toList),
(1251, "i".toList),
(1252, "i".toList),
(1253, "i".toList),
(1254, "o".toList),
(1255, "o".toList),
(1256, "o".toList),
(1257, "o".toList),
(1258, "o".toList),
(1259, "o".toList),
(1262, "u".toList),
(1263, "u".toList),
(1264, "u".toList),
(1265, "u".toList),
(1266, "u".toList),
(1267, "u".toList),
(1268, "c".toList),
(1269, "c".toList),
(1272, "y".toList),
(1273, "y".toList),
(1290, "n".toList),
(1291, "n".toList),
(1294, "t".toList),
(1295, "t".toList),
(1306, "q".toList),
(1307, "q".toList),
(1308, "w".toList),
(1309, "w".toList),
(7838, "ss".toList),
(8490, "k".toList),
(8491, "a".toList)]

/-- WDStringUtils' $CONVERT_ARRAY as PHP resolves it (duplicate
    keys in the file's array literal take their last value),
    dumped from the reference on WSL: (key bytes, value bytes),
    191 entries; keys are one or two bytes. -/
def convertTable : List (List Nat × List Nat) :=
[([195, 128], [65]),
([195, 129], [65]),
([195, 130], [65]),
([195, 131], [65]),
([195, 132], [65]),
([195, 133], [65]),
([195, 134], [65, 69]),
([196, 128], [65]),
([196, 132], [65]),
([196, 130], [65]),
([195, 135], [67]),
([196, 134], [67]),
([196, 140], [67]),
([196, 136], [67]),
([196, 138], [67]),
([196, 142], [68]),
([196, 144], [68]),
([195, 144], [68]),
([195, 136], [69]),
([195, 137], [69]),
([195, 138], [69]),
([195, 139], [69]),
([196, 146], [69]),
([196, 152], [69]),
([196, 154], [69]),
([196, 148], [69]),
([196, 150], [69]),
([196, 156], [71]),
([196, 158], [71]),
([196, 160], [71]),
([196, 162], [71]),
([196, 164], [72]),
([196, 166], [72]),
([195, 140], [73]),
([195, 141], [73]),
([195, 142], [73]),
([195, 143], [73]),
([196, 170], [73]),
([196, 168], [73]),
([196, 172], [73]),
([196, 174], [73]),
([196, 176], [73]),
([196, 178], [73, 74]),
([196, 180], [74]),
([196, 182], [75]),
([197, 129], [75]),
([196, 189], [75]),
([196, 185], [75]),
([196, 187], [75]),
([196, 191], [75]),
([195, 145], [78]),
([197, 131], [78]),
([197, 135], [78]),
([197, 133], [78]),
([197, 138], [78]),
([195, 146], [79]),
([195, 147], [79]),
([195, 148], [79]),
([195, 149], [79]),
([195, 150], [79, 101]),
([195, 152], [79]),
([197, 140], [79]),
([197, 144], [79]),
([197, 142], [79]),
([197, 146], [79, 69]),
([197, 148], [82]),
([197, 152], [82]),
([197, 150], [82]),
([197, 154], [83]),
([197, 160], [83]),
([197, 158], [83]),
([197, 156], [83]),
([200, 152], [83]),
([197, 164], [84]),
([197, 162], [84]),
([197, 166], [84]),
([200, 154], [84]),
([195, 153], [85]),
([195, 154], [85]),
([195, 155], [85]),
([195, 156], [85, 101]),
([197, 170], [85]),
([197, 174], [85]),
([197, 176], [85]),
([197, 172], [85]),
([197, 168], [85]),
([197, 178], [85]),
([197, 180], [87]),
([195, 157], [89]),
([197, 182], [89]),
([197, 184], [89]),
([197, 185], [90]),
([197, 189], [90]),
([197, 187], [90]),
([195, 158], [84]),
([195, 160], [97]),
([195, 161], [97]),
([195, 162], [97]),
([195, 163], [97]),
([195, 164], [97, 101]),
([195, 165], [97]),
([196, 129], [97]),
([196, 133], [97]),
([196, 131], [97]),
([195, 166], [97, 101]),
([195, 167], [99]),
([196, 135], [99]),
([196, 141], [99]),
([196, 137], [99]),
([196, 139], [99]),
([196, 143], [100]),
([196, 145], [100]),
([195, 176], [100]),
([195, 168], [101]),
([195, 169], [101]),
([195, 170], [101]),
([195, 171], [101]),
([196, 147], [101]),
([196, 153], [101]),
([196, 155], [101]),
([196, 149], [101]),
([196, 151], [101]),
([198, 146], [102]),
([196, 157], [103]),
([196, 159], [103]),
([196, 161], [103]),
([196, 163], [103]),
([196, 165], [104]),
([196, 167], [104]),
([195, 172], [105]),
([195, 173], [105]),
([195, 174], [105]),
([195, 175], [105]),
([196, 171], [105]),
([196, 169], [105]),
([196, 173], [105]),
([196, 175], [105]),
([196, 177], [105]),
([196, 179], [105, 106]),
([196, 181], [106]),
([196, 183], [107]),
([196, 184], [107]),
([197, 130], [108]),
([196, 190], [108]),
([196, 186], [108]),
([196, 188], [108]),
([197, 128], [108]),
([195, 177], [110]),
([197, 132], [110]),
([197, 136], [110]),
([197, 134], [110]),
([197, 137], [110]),
([197, 139], [110]),
([195, 178], [111]),
([195, 179], [111]),
([195, 180], [111]),
([195, 181], [111]),
([195, 182], [111, 101]),
([195, 184], [111]),
([197, 141], [111]),
([197, 145], [111]),
([197, 143], [111]),
([197, 147], [111, 101]),
([197, 149], [114]),
([197, 153], [114]),
([197, 151], [114]),
([197, 161], [115]),
([195, 185], [117]),
([195, 186], [117]),
([195, 187], [117]),
([195, 188], [117, 101]),
([197, 171], [117]),
([197, 175], [117]),
([197, 177], [117]),
([197, 173], [117]),
([197, 169], [117]),
([197, 179], [117]),
([197, 181], [119]),
([195, 189], [121]),
([195, 191], [121]),
([197, 183], [121]),
([197, 190], [122]),
([197, 188], [122]),
([197, 186], [122]),
([195, 190], [116]),
([195, 159], [115, 115]),
([197, 191], [115, 115]),
([32], [45]),
([44], [45]),
([47], [45]),
([46], [45])]

/-! ## WDStringUtils::toUnixName (the reference's slug function) -/

/-- Look up a byte-string key in the CONVERT_ARRAY table. -/
def lookupConvert (key : List Nat) : Option (List Nat) :=
  (convertTable.find? (fun kv => kv.1 == key)).map Prod.snd

/-- PHP `strtr` with the CONVERT_ARRAY: at each position the
    longest matching key wins (keys are one or two bytes, so a
    two-byte key is tried before the one-byte key at the same
    position); emitted values are never rescanned, and a position
    with no key copies one byte. -/
def strtrConvert : List Nat → List Nat
  | [] => []
  | [b] =>
      match lookupConvert [b] with
      | some v => v
      | none => [b]
  | b1 :: b2 :: rest =>
      match lookupConvert [b1, b2] with
      | some v => v ++ strtrConvert rest
      | none =>
          match lookupConvert [b1] with
          | some v => v ++ strtrConvert (b2 :: rest)
          | none => b1 :: strtrConvert (b2 :: rest)

/-- PHP `strtolower` on bytes: ASCII case folding only. -/
def lowerBytes (bs : List Nat) : List Nat :=
  bs.map (fun b => if 65 ≤ b && b ≤ 90 then b + 32 else b)

/-- The byte class toUnixName keeps: `[a-z0-9\-:_]` after
    lowering. -/
def isSlugByte (b : Nat) : Bool :=
  (97 ≤ b && b ≤ 122) || (48 ≤ b && b ≤ 57) ||
  b == 45 || b == 58 || b == 95

/-- toUnixName's `(?<!:)_` pass: an underscore whose preceding
    byte (in the pass's input, as PHP's lookbehind reads the
    subject) is not a colon becomes a dash. -/
def underscorePass (prev : Option Nat) : List Nat → List Nat
  | [] => []
  | b :: rest =>
      (if b == 95 && prev != some 58 then 45 else b) ::
        underscorePass (some b) rest

/-- Collapse every run of byte `c` to a single `c` (toUnixName's
    `[\-]{2,}` and `[:]{2,}` passes; a run of one is already a
    single byte, so collapsing all runs is the same function). -/
def collapseRun (c : Nat) (inRun : Bool) : List Nat → List Nat
  | [] => []
  | b :: rest =>
      if b == c then
        if inRun then collapseRun c true rest
        else c :: collapseRun c true rest
      else b :: collapseRun c false rest

/-- PHP `str_replace` for a two-byte needle and one-byte
    replacement: a single left-to-right pass replacing
    non-overlapping occurrences; replaced text is not rescanned
    (toUnixName's `:-`, `-:`, `_-`, `-_` passes). -/
def replace2 (x y r : Nat) : List Nat → List Nat
  | [] => []
  | [b] => [b]
  | b1 :: b2 :: rest =>
      if b1 == x && b2 == y then r :: replace2 x y r rest
      else b1 :: replace2 x y r (b2 :: rest)

/-- `WDStringUtils::toUnixName`, step for step as the reference's
    wikidot-root/lib/WDStringUtils.php runs it: trim, the
    CONVERT_ARRAY translation, ASCII lowering, every byte outside
    `[a-z0-9\-:_]` to a dash, a leading underscore to `:_`, an
    underscore not after a colon to a dash, leading and trailing
    dash runs stripped, dash and colon runs collapsed, the four
    two-byte replacements in order, and one leading and one
    trailing colon stripped. -/
def toUnixName (bs0 : List Nat) : List Nat :=
  let s1 := trimBytes bs0
  let s2 := strtrConvert s1
  let s3 := lowerBytes s2
  let s4 := s3.map (fun b => if isSlugByte b then b else 45)
  let s5 := match s4 with
    | 95 :: rest => 58 :: 95 :: rest
    | _ => s4
  let s6 := underscorePass none s5
  let s7 := s6.dropWhile (· == 45)
  let s8 := (s7.reverse.dropWhile (· == 45)).reverse
  let s9 := collapseRun 45 false s8
  let sA := collapseRun 58 false s9
  let sB := replace2 58 45 58 sA
  let sC := replace2 45 58 58 sB
  let sD := replace2 95 45 95 sC
  let sE := replace2 45 95 95 sD
  let sF := match sE with
    | 58 :: rest => rest
    | _ => sE
  match sF.reverse with
  | 58 :: rest => rest.reverse
  | _ => sF

/-! ## Freelink -/

/-- The Freelink pattern's character class: any byte but `]` and
    `[`. (Newlines and the delimiter byte are admitted, which is
    what lets a claim span a placeholder.) -/
def isFreeByte (b : Nat) : Bool := b != 93 && b != 91

/-- A whole Freelink match at the head of `src`, in PCRE
    priority order: the target run lazy, grown one byte at a
    time; at each length the label group present before absent.
    The label run is maximal and forced: giving a byte back
    would put a class byte where `]` must stand. Returns (full
    match, group 1, group 2 including its leading pipe — empty
    when the group does not participate — rest). -/
def freelinkMatchAt (src : List Nat) :
    Option (List Nat × List Nat × List Nat × List Nat) :=
  match matchLitBytes (litBytes "[[[") src with
  | none => none
  | some r0 =>
      let runLen := (r0.takeWhile isFreeByte).length
      (List.range runLen).findSome? (fun i =>
        let l1 := i + 1
        let g1 := r0.take l1
        let after1 := r0.drop l1
        let present : Option (List Nat × List Nat × List Nat ×
            List Nat) :=
          match after1 with
          | 124 :: after2 =>
              let lab := after2.takeWhile isFreeByte
              let after3 := after2.drop lab.length
              if after3.take 3 == [93, 93, 93] then
                some (src.take (src.length - (after3.drop 3).length),
                  g1, 124 :: lab, after3.drop 3)
              else none
          | _ => none
        match present with
        | some m => some m
        | none =>
            if after1.take 3 == [93, 93, 93] then
              some (src.take (src.length - (after1.drop 3).length),
                g1, [], after1.drop 3)
            else none)

/-- The URL schemes of the reference's `freelink_is_url`
    (compared case-insensitively at the head of the trimmed
    target, PHP's `stripos(...) === 0`). -/
def freelinkSchemes : List (List Nat) :=
  ["http://", "https://", "ftp://", "file://", "feed:", "git://",
   "gopher://", "irc://", "irc6://", "ircs://", "sftp://",
   "ssh://", "telnet://", "rtmp://", "resource://", "chrome://",
   "chrome-extension://", "content://", "cvs://", "blob:",
   "dns:", "mailto:", "mms://", "news://", "nntp://", "tel:",
   "sms:", "skype:", "xmpp:"].map litBytes

/-- Is the trimmed target a bare URL (the reference's
    `freelink_is_url`)? -/
def isUrlTarget (bs : List Nat) : Bool :=
  freelinkSchemes.any (fun s => (matchLitCI s bs).isSome)

/-- The reference's `freelink_transliterate` on a valid-UTF-8
    byte string: per character, the keep-set (`#`, `:`, `/`,
    space, `_`, `-`) passes through, a table entry is replaced
    by its value, and anything else — including every ASCII
    letter, which is neither kept nor in the table — becomes a
    space (a separator). -/
def transliterate (bs : List Nat) : List Nat :=
  (utf8Decode bs).flatMap (fun c =>
    let b := c.toNat
    if (0x41 <= b && b <= 0x5A) || (0x61 <= b && b <= 0x7A) ||
       (0x30 <= b && b <= 0x39) ||
       b == 0x23 || b == 0x3A || b == 0x2F || b == 0x20 ||
       b == 0x5F || b == 0x2D then [b]
    else match transTable.find? (fun kv => kv.1 == c.toNat) with
      | some (_, v) => v.map Char.toNat
      | none => [32])

/-- process() for a Freelink match, transcribed step for step
    from the corrected rule file: the literal returns (the match
    is replaced by itself and claims nothing, but is still
    consumed), the multi-hash guards, the hash-route and anchor
    peeling, the URL branch, the slug computation (transliteration
    gated on the target holding non-ASCII valid UTF-8, the
    `_default:` strip, `toUnixName`), and the display-text rules.
    Returns the replacement bytes and the extended token table. -/
def freelinkProcess (full raw labelRaw : List Nat)
    (toks : List TokenEntry) : List Nat × List TokenEntry :=
  -- C-SUSPECT-XRULE-1: an earlier rule's placeholder anywhere in the match
  -- leaves the whole triple link literal on live (the PHP guard tests the
  -- whole match, so a placeholder in the label counts too).
  if full.any (fun b => b == 0xFF) then (full, toks)
  else if raw.isEmpty || raw.head? == some 124 then (full, toks)
  else if raw.head? == some 35 &&
      (match raw with
       | _ :: b2 :: _ => b2 != 32 && b2 != 9
       | _ => false) then (full, toks)
  else if (findSub (litBytes "##") raw).isSome &&
      (findSub (litBytes "/#/") raw).isNone then (full, toks)
  else if 1 < (raw.filter (· == 35)).length &&
      (findSub (litBytes "/#/") raw).isNone then (full, toks)
  else
    let (raw1, anchor, extra) : List Nat × List Nat × List Nat :=
      match findSub (litBytes "/#/") raw with
      | some i => (raw.take i, [], [35, 47] ++ raw.drop (i + 3))
      | none =>
          match findSub [35] raw with
          | some i => (raw.take i, rtrimBytes (raw.drop i), [])
          | none => (raw, [], [])
    let leadingSpace :=
      raw1.head? == some 32 || raw1.head? == some 9
    let trimmed0 := trimBytes raw1
    -- REFCORR3 C-SUSPECT-SERVING-2: a leading star (with no leading
    -- space) is live's new-tab marker on an external URL, not part
    -- of the target. Strip it BEFORE the URL test so a starred URL
    -- is no longer slugified into a local link, and remember it so
    -- only the starred URL token gains a trailing target option.
    let starUrl := !leadingSpace && trimmed0.head? == some 42
    let trimmed := if starUrl then trimmed0.tail else trimmed0
    if !leadingSpace && isUrlTarget trimmed then
      let text := if labelRaw.isEmpty then trimmed
                  else labelRaw.drop 1
      let opts : OptMap :=
        [("site".toList, OptVal.null),
         ("page".toList, OptVal.str []),
         ("text".toList, textVal text),
         ("anchor".toList, OptVal.str []),
         ("extra".toList, OptVal.str []),
         ("url".toList, textVal trimmed),
         ("textFromTitle".toList, OptVal.null)] ++
        (if starUrl then [("target".toList, OptVal.str "_blank".toList)] else [])
      (phBytes toks.length,
       toks ++ [{ rule := "Freelink", opts := opts }])
    else
      -- REFCORR5 Batch 5: strip _default: before transliteration so the
      -- ASCII prefix is not corrupted into _: by the table fallback.
      let stripped := match matchLitCI (litBytes "_default:") raw1 with
        | some rest => rest
        | none => raw1
      let slug := if stripped.any (fun b => 128 ≤ b) && utf8Valid stripped
                  then transliterate stripped else stripped
      let page := toUnixName slug
      let (text, tft) : List Nat × OptVal :=
        if labelRaw.isEmpty then
          let t1 :=
            if raw1.head? != some 58 && raw1.head? != some 47 then
              match findSub [58] raw1 with
              | some i => raw1.drop (i + 1)
              | none => raw1
            else raw1
          (trimBytes t1, OptVal.null)
        else if trimBytes labelRaw == [124] then
          ([124], OptVal.bool true)
        else (labelRaw.drop 1, OptVal.null)
      let opts : OptMap :=
        [("site".toList, OptVal.null),
         ("page".toList, textVal page),
         ("text".toList, textVal text),
         ("anchor".toList, textVal anchor),
         ("extra".toList, textVal extra),
         ("url".toList, OptVal.null),
         ("textFromTitle".toList, tft)]
      (phBytes toks.length,
       toks ++ [{ rule := "Freelink", opts := opts }])

/-- The Freelink rule's scanner: preg_replace_callback semantics
    over the byte form; a match whose process() declines to claim
    is replaced by its own text and still consumed. -/
def freelinkScan (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => ([], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match freelinkMatchAt src with
        | some (full, raw, labelRaw, r) =>
            let (repl, t1) := freelinkProcess full raw labelRaw toks
            let (o, t) := freelinkScan r t1 fuel
            (repl ++ o, t)
        | none =>
            let (o, t) := freelinkScan rest toks fuel
            (b :: o, t)

/-- The Freelink rule mirror. -/
def freelinkRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks =>
    freelinkScan src toks (src.length + 1))

/-! ## Equationreference -/

/-- A whole Equationreference match at the head of `src`: the
    literal `[[eref ` (case-sensitive, exactly one space), then
    the lazy label grown to each `]]` whose span holds no newline
    (`.` excludes it), in order. Returns (full match, group 1,
    rest). -/
def erefMatchAt (src : List Nat) :
    Option (List Nat × List Nat × List Nat) :=
  match matchLitBytes (litBytes "[[eref ") src with
  | none => none
  | some r =>
      (close2SuffixesNoNl r).findSome? (fun sfx =>
        some (src.take (src.length - (sfx.drop 2).length),
          r.take (r.length - sfx.length), sfx.drop 2))

/-- Claim an Equationreference token (the token shape of the
    rule: the single `label` option). Returns the placeholder
    bytes to splice into the rewritten source and the extended
    table. -/
def claimEref (label : List Nat) (toks : List TokenEntry) :
    List Nat × List TokenEntry :=
  (phBytes toks.length,
   toks ++ [{ rule := "Equationreference", opts := [("label".toList, textVal label)] }])

/-- The Equationreference rule's scanner: preg_replace_callback
    semantics over the byte form. process() claims a token whose
    only option is the PHP-trimmed label; it reads no document
    state (the equations lookup is the render rule's, outside
    R3's scope). -/
def erefScan (src : List Nat) (toks : List TokenEntry) :
    Nat → List Nat × List TokenEntry
  | 0 => ([], toks)
  | fuel + 1 =>
    match src with
    | [] => ([], toks)
    | b :: rest =>
        match erefMatchAt src with
        | some (_, labelRaw, r) =>
            let (repl, t1) := claimEref (trimBytes labelRaw) toks
            let (o, t) := erefScan r t1 fuel
            (repl ++ o, t)
        | none =>
            let (o, t) := erefScan rest toks fuel
            (b :: o, t)

/-- The Equationreference rule mirror. -/
def erefRule (st : ParseState) : ParseState :=
  applyByteRule st (fun src toks => erefScan src toks (src.length + 1))

/-! ## Theorems -/

/-- Concatlines claims no token: its rule returns the token
    table unchanged (it only rewrites source bytes). -/
theorem concatlinesRule_tokens (st : ParseState) :
    (concatlinesRule st).tokens = st.tokens := rfl

/-- A worked Concatlines join: a backslash-newline pair before
    an ordinary line is dropped outright. -/
theorem concatScan_join_example :
    concatScan (litBytes "a\\\nb") = litBytes "ab" := rfl

/-- A worked Concatlines div exemption: before a standalone div
    opener the backslash is dropped but the newline is kept. -/
theorem concatScan_div_example :
    concatScan (litBytes "a\\\n[[div]]\nb")
      = litBytes "a\n[[div]]\nb" := rfl

/-- A worked toUnixName: the fossil `::` form collapses to one
    colon (the shape the R2 Freelink stage settled for
    `[[[site::page]]]`). -/
theorem toUnixName_double_colon_example :
    toUnixName (litBytes "site::page") = litBytes "site:page" := rfl

/-- A worked toUnixName: case folding and the space-to-dash
    conversion. -/
theorem toUnixName_case_example :
    toUnixName (litBytes "Foo Bar") = litBytes "foo-bar" := rfl

/-- A worked Freelink match: target and pipe label. -/
theorem freelinkMatchAt_example :
    freelinkMatchAt (litBytes "[[[a|b]]]")
      = some (litBytes "[[[a|b]]]", litBytes "a", litBytes "|b",
          []) := rfl

/-- A worked Freelink claim at rule level: the token carries the
    reference's seven options in the reference's order, with the
    slug computed by toUnixName and the label as display text. -/
theorem freelinkRule_example :
    (freelinkRule (ParseState.ofSource
      "[[[some-page|label]]]".toList)).tokens
      = [{ rule := "Freelink", opts :=
          [("site".toList, OptVal.null),
           ("page".toList, OptVal.str "some-page".toList),
           ("text".toList, OptVal.str "label".toList),
           ("anchor".toList, OptVal.str []),
           ("extra".toList, OptVal.str []),
           ("url".toList, OptVal.null),
           ("textFromTitle".toList, OptVal.null)] }] := rfl

/-- REFCORR3 C-SUSPECT-SERVING-2: a star-prefixed URL target is a
    new-tab external link — the star is stripped from the URL and
    the display text, and `target="_blank"` is appended as the
    last option. -/
theorem freelinkRule_star_url_example :
    (freelinkRule (ParseState.ofSource
      "[[[*http://example.com]]]".toList)).tokens
      = [{ rule := "Freelink", opts :=
          [("site".toList, OptVal.null),
           ("page".toList, OptVal.str []),
           ("text".toList, OptVal.str "http://example.com".toList),
           ("anchor".toList, OptVal.str []),
           ("extra".toList, OptVal.str []),
           ("url".toList, OptVal.str "http://example.com".toList),
           ("textFromTitle".toList, OptVal.null),
           ("target".toList, OptVal.str "_blank".toList)] }] := rfl

/-- REFCORR3 C-SUSPECT-SERVING-2 control: a plain URL token is
    byte-unchanged (no target option). -/
theorem freelinkRule_plain_url_example :
    (freelinkRule (ParseState.ofSource
      "[[[http://example.com]]]".toList)).tokens
      = [{ rule := "Freelink", opts :=
          [("site".toList, OptVal.null),
           ("page".toList, OptVal.str []),
           ("text".toList, OptVal.str "http://example.com".toList),
           ("anchor".toList, OptVal.str []),
           ("extra".toList, OptVal.str []),
           ("url".toList, OptVal.str "http://example.com".toList),
           ("textFromTitle".toList, OptVal.null)] }] := rfl

/-- A worked Equationreference match: the label up to the first
    `]]`. -/
theorem erefMatchAt_example :
    erefMatchAt (litBytes "[[eref a]]x")
      = some (litBytes "[[eref a]]", litBytes "a", litBytes "x") :=
  rfl

/-- A worked Equationreference claim at rule level: the token's
    only option is the trimmed label. -/
theorem erefRule_example :
    (erefRule (ParseState.ofSource "[[eref a]]".toList)).tokens
      = [{ rule := "Equationreference", opts :=
          [("label".toList, OptVal.str "a".toList)] }] :=
  rfl

end LeanFtml
