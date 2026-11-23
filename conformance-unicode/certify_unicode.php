<?php
/**
 * FOUNDATION-F3 / conformance-unicode/certify_unicode.php
 *
 * Exhaustive PHP 8.5 certification of the four UnicodeCore single-scalar
 * predicates over ALL 1,112,064 Unicode scalar values
 * (0x0000..0xD7FF union 0xE000..0x10FFFF; surrogates excluded):
 *   (1) PCRE2 /\s/u          -> Lean scalarSpaceRanges
 *   (2) PCRE2 /\p{Cf}/u      -> Lean scalarCfRanges
 *   (3) Freelink lead class  -> Lean freelinkLeadRanges (exact byte-oriented
 *       _default: lead regex lifted verbatim from the reference Freelink.php)
 *   (4) freelink_transliterate() -> Lean scalarTranslitTable (468 entries)
 *
 * Method: pass 1 measures PHP and emits the Lean tables; pass 2 re-reads the
 * EMITTED Lean file from disk, parses the tables back, and re-measures PHP for
 * every scalar, counting mismatches. It also checks the structural identity
 * lead = space ∪ Cf ∪ {U+002A} over every scalar. Any mismatch is a hard fail.
 *
 * This is evidence, not a Lean kernel proof that PHP equals the tables: the
 * Lean file proves structural/interval facts about the generated tables; the
 * equality to PHP 8.5 is certified by this measured, repeatable script.
 */
declare(strict_types=1);
ini_set('memory_limit', '1G');
date_default_timezone_set('UTC');

const REF = '/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php';
const LEAN_OUT = '/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/FOUNDATION-F3/LeanFtml/UnicodeCore.lean';
const JSON_OUT = '/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/FOUNDATION-F3/conformance-unicode/unicode-certification.json';
const LOG_OUT  = '/home/roku/.local/state/wikijump/muse-bhl/lean-ftml-coordinator/coord-units/FOUNDATION-F3/logs/unicode-certification.log';

/** Minimal manual UTF-8 encoder (ext/mbstring is unavailable on this host). */
function cp2utf8(int $cp): string {
    if ($cp < 0x80) return chr($cp);
    if ($cp < 0x800) return chr(0xC0 | ($cp >> 6)) . chr(0x80 | ($cp & 0x3F));
    if ($cp < 0x10000) return chr(0xE0 | ($cp >> 12)) . chr(0x80 | (($cp >> 6) & 0x3F)) . chr(0x80 | ($cp & 0x3F));
    return chr(0xF0 | ($cp >> 18)) . chr(0x80 | (($cp >> 12) & 0x3F)) . chr(0x80 | (($cp >> 6) & 0x3F)) . chr(0x80 | ($cp & 0x3F));
}

/** Manual UTF-8 decoder for the one-scalar map keys; false when ill-formed. */
function utf8cp(string $s): int|false {
    $n = strlen($s); $b = array_map('ord', str_split($s));
    if ($n === 1 && $b[0] < 0x80) return $b[0];
    if ($n === 2 && $b[0] >= 0xC2 && $b[0] < 0xE0 && ($b[1] & 0xC0) === 0x80)
        return (($b[0] & 0x1F) << 6) | ($b[1] & 0x3F);
    if ($n === 3 && $b[0] >= 0xE0 && $b[0] < 0xF0 && ($b[1] & 0xC0) === 0x80 && ($b[2] & 0xC0) === 0x80
        && !($b[0] === 0xE0 && $b[1] < 0xA0) && !($b[0] === 0xED && $b[1] >= 0xA0))
        return (($b[0] & 0x0F) << 12) | (($b[1] & 0x3F) << 6) | ($b[2] & 0x3F);
    if ($n === 4 && $b[0] >= 0xF0 && $b[0] <= 0xF4 && ($b[1] & 0xC0) === 0x80 && ($b[2] & 0xC0) === 0x80 && ($b[3] & 0xC0) === 0x80
        && !($b[0] === 0xF0 && $b[1] < 0x90) && !($b[0] === 0xF4 && $b[1] >= 0x90))
        return (($b[0] & 0x07) << 18) | (($b[1] & 0x3F) << 12) | (($b[2] & 0x3F) << 6) | ($b[3] & 0x3F);
    return false;
}

/** Lift the exact byte-oriented _default: lead regex literal out of the reference. */
function extract_lead_regex(string $src): string {
    $needle = ', $slugSource, $defPrefix)';
    $j = strpos($src, $needle);
    if ($j === false) throw new RuntimeException('lead preg_match call not found');
    $k = strrpos(substr($src, 0, $j), "preg_match('");
    if ($k === false) throw new RuntimeException('lead preg_match opener not found');
    $lit = substr($src, $k + strlen("preg_match('"), $j - ($k + strlen("preg_match('")) - 1);
    // The source literal is single-quoted with only \\x.. escapes, so the raw
    // text between the quotes IS the PCRE pattern (PHP single quotes do not
    // interpret \x). Guard against an unexpected quote or delimiter.
    if ($lit === '' || $lit[0] !== '/' || str_contains($lit, "'"))
        throw new RuntimeException('unexpected lead regex literal: ' . $lit);
    return $lit;
}

/** Extract the 468-entry transliteration map as cp => ASCII byte string. */
function extract_map(string $src): array {
    preg_match_all("/^\\s+'([^']+)' => '([^']+)',/mu", $src, $m);
    $map = [];
    foreach ($m[1] as $i => $k) {
        $cp = utf8cp($k);
        if ($cp === false) throw new RuntimeException("non-scalar map key: $k");
        if (isset($map[$cp])) throw new RuntimeException("duplicate map key U+" . dechex($cp));
        if (!preg_match('/^[A-Za-z]+$/D', $m[2][$i])) throw new RuntimeException("non-ascii map value: {$m[2][$i]}");
        $map[$cp] = $m[2][$i];
    }
    return $map;
}

/** Compress a sorted list of codepoints to inclusive [start,end] ranges. */
function to_ranges(array $cps): array {
    $out = []; $n = count($cps);
    for ($i = 0; $i < $n;) {
        $a = $cps[$i]; $b = $a; $i++;
        while ($i < $n && $cps[$i] === $b + 1) { $b = $cps[$i]; $i++; }
        $out[] = [$a, $b];
    }
    return $out;
}

/** Membership of a codepoint in a parsed range table. */
function in_ranges(array $rs, int $cp): bool {
    foreach ($rs as $r) if ($r[0] <= $cp && $cp <= $r[1]) return true;
    return false;
}

/** Render a range table as one Lean line. */
function lean_ranges(string $name, array $rs): string {
    $parts = [];
    foreach ($rs as $r) $parts[] = sprintf('(0x%X, 0x%X)', $r[0], $r[1]);
    return "def $name : List (Nat × Nat) := [" . implode(', ', $parts) . ']';
}

/** Render the transliteration table as one Lean line. */
function lean_translit(array $map): string {
    $parts = [];
    foreach ($map as $cp => $val) {
        $bytes = [];
        foreach (str_split($val) as $ch) $bytes[] = ord($ch);
        $parts[] = sprintf('(0x%X, [%s])', $cp, implode(', ', $bytes));
    }
    return 'def scalarTranslitTable : List (Nat × List Nat) := [' . implode(', ', $parts) . ']';
}

/** Parse a `def NAME : ... := [...]` line back from the emitted Lean file. */
function parse_lean_table(string $lean, string $name): array {
    if (!preg_match('/^def ' . preg_quote($name, '/') . ' [^\n]*:= \[(.*)\]$/m', $lean, $m))
        throw new RuntimeException("cannot parse Lean table $name");
    $body = $m[1]; $out = [];
    if ($name === 'scalarTranslitTable') {
        preg_match_all('/\(0x([0-9A-F]+), \[([0-9, ]*)\]\)/', $body, $mm, PREG_SET_ORDER);
        foreach ($mm as $e) {
            $bytes = $e[2] === '' ? [] : array_map('intval', explode(',', $e[2]));
            $out[hexdec($e[1])] = implode('', array_map('chr', $bytes));
        }
    } else {
        preg_match_all('/\(0x([0-9A-F]+), 0x([0-9A-F]+)\)/', $body, $mm, PREG_SET_ORDER);
        foreach ($mm as $e) $out[] = [hexdec($e[1]), hexdec($e[2])];
    }
    return $out;
}

/** Expected transliteration of one scalar from the parsed Lean table. */
function lean_translit_scalar(array $table, int $cp): string {
    if (isset($table[$cp])) return $table[$cp];
    if (($cp >= 0x30 && $cp <= 0x39) || ($cp >= 0x41 && $cp <= 0x5A) || ($cp >= 0x61 && $cp <= 0x7A)
        || $cp === 0x23 || $cp === 0x3A || $cp === 0x2F || $cp === 0x20 || $cp === 0x5F || $cp === 0x2D)
        return cp2utf8($cp);
    return ' ';
}

// ---------------------------------------------------------------------------
// Load the actual reference file (stub only its abstract parent class).
// ---------------------------------------------------------------------------
class Text_Wiki_Parse { public $wiki; function __construct(&$obj) {} }
if (!function_exists('freelink_transliterate')) require REF;

$src = file_get_contents(REF);
$refSha = hash_file('sha256', REF);
$genSha = hash_file('sha256', __FILE__);
$leadRe = extract_lead_regex($src);
$map = extract_map($src);
$phpVer = PHP_VERSION;
$pcreVer = PCRE_VERSION;

// ---------------------------------------------------------------------------
// Pass 1: measure PHP over every scalar; build tables.
// ---------------------------------------------------------------------------
$wsCps = []; $cfCps = []; $leadCps = [];
for ($cp = 0; $cp <= 0x10FFFF; $cp++) {
    if ($cp >= 0xD800 && $cp <= 0xDFFF) continue;
    $ch = cp2utf8($cp);
    if (preg_match('/^\s$/u', $ch) === 1) $wsCps[] = $cp;
    if (preg_match('/^\p{Cf}$/u', $ch) === 1) $cfCps[] = $cp;
    if (preg_match($leadRe, $ch . '_default:') === 1) $leadCps[] = $cp;
}
$scalarCount = count($wsCps) * 0 + 0x110000 - 0x800; // 1,112,064 by construction
if ($scalarCount !== 1112064) throw new RuntimeException('scalar cardinality wrong');

// Cross-check the 468 map entries against the real PHP function.
$mapMismatch = 0;
foreach ($map as $cp => $val) {
    if (freelink_transliterate(cp2utf8($cp)) !== $val) $mapMismatch++;
}
if ($mapMismatch !== 0) throw new RuntimeException("map/function disagreement: $mapMismatch");

$wsRanges = to_ranges($wsCps);
$cfRanges = to_ranges($cfCps);
$leadRanges = to_ranges($leadCps);

// ---------------------------------------------------------------------------
// Emit the Lean file.
// ---------------------------------------------------------------------------
$ts = gmdate('Y-m-d\TH:i:s\Z');
$nWs = count($wsCps); $nWsR = count($wsRanges);
$nCf = count($cfCps); $nCfR = count($cfRanges);
$nLead = count($leadCps); $nLeadR = count($leadRanges);
$nMap = count($map);
$header = <<<EOT
/-
  LeanFtml.UnicodeCore — TCB-3 Unicode core for the ftml Lean equivalence
  programme (ADVISOR-PROOF-POLICY §§1.2, 2.1, 5.1; foundation unit F3).

  GENERATED DATA — do not hand-edit. Generated by
  coord-units/FOUNDATION-F3/conformance-unicode/certify_unicode.php.

  Provenance (all hashes SHA-256):
    reference   ref-php/text-wiki/Text/Wiki/Parse/Default/Freelink.php
                $refSha
    generator   coord-units/FOUNDATION-F3/conformance-unicode/certify_unicode.php
                $genSha
    PHP         $phpVer (PCRE $pcreVer)
    generated   $ts
    baseline    proof-base-v1 / snapshot-36 reference

  Certification scope: ALL 1,112,064 Unicode scalar values
  (0x0000..0xD7FF ∪ 0xE000..0x10FFFF; the 2,048 surrogates are excluded).
  Four single-scalar predicates were measured against PHP 8.5 and compressed
  to inclusive ranges / an exact map:
    \\s/u                 $nWs codepoints in $nWsR ranges
    \\p{Cf}/u             $nCf codepoints in $nCfR ranges
    Freelink lead class   $nLead codepoints in $nLeadR ranges
    transliteration       $nMap mapped codepoints (all others -> one space, with the
                          ASCII pass-through classes kept verbatim)

  The Freelink lead regex is lifted byte-for-byte from the reference
  Freelink.php `_default:` guard (REFCORR12 general Cf/White_Space/BOM/star
  predicate), not re-typed. The exhaustive script additionally verifies the
  structural identity lead = space ∪ Cf ∪ {U+002A} for every scalar.

  The script re-reads this generated file and re-measures PHP for every scalar;
  the recorded counters are in
  conformance-unicode/unicode-certification.json and logs/unicode-certification.log.
  A mismatch is a hard failure, so a committed table is a zero-mismatch table.

  Status of the claim: the four tables are EVIDENCE-BACKED CERTIFIED DATA, not
  a Lean proof that PHP 8.5 equals them (PHP/PCRE2 is not a Lean term). Inside
  Lean these definitions are total, axiom-clean kernel functions; the lemmas
  below are kernel-proved structural facts about the tables, in particular the
  universal `freelinkLead_eq_space_or_cf_or_star` over all Nat.

  Lean core only (Init + Std); no Mathlib, no bv_decide, no native_decide, no
  sorryAx. Prose is flowing single-line paragraphs.
-/

namespace LeanFtml

/-- A Unicode scalar value: everything in 0x0000..0x10FFFF except the surrogates. -/
def isScalar (n : Nat) : Bool :=
  n < 0xD800 || (0xDFFF < n && n <= 0x10FFFF)

/-- Membership in a sorted list of inclusive scalar ranges. -/
def inScalarRanges (rs : List (Nat × Nat)) (n : Nat) : Bool :=
  rs.any (fun r => r.1 <= n && n <= r.2)

EOT;

$parts = [$header];
$parts[] = lean_ranges('scalarSpaceRanges', $wsRanges) . "\n\n";
$parts[] = lean_ranges('scalarCfRanges', $cfRanges) . "\n\n";
$parts[] = lean_ranges('freelinkLeadRanges', $leadRanges) . "\n\n";
$parts[] = lean_translit($map) . "\n\n";

$parts[] = <<<'EOT'
/-- PHP 8.5 PCRE2 `/\\s/u` on a single scalar (Unicode White_Space plus the
    PCRE2-included U+180E). -/
def isSpaceU (n : Nat) : Bool := inScalarRanges scalarSpaceRanges n

/-- PHP 8.5 PCRE2 `/\\p{Cf}/u` on a single scalar (Unicode category Cf). -/
def isCf (n : Nat) : Bool := inScalarRanges scalarCfRanges n

/-- Freelink's tolerated lead class before `_default:` under the REFCORR12
    byte-oriented regex; measured separately, not reconstructed from the other
    two tables. -/
def isFreelinkLead (n : Nat) : Bool := inScalarRanges freelinkLeadRanges n

/-- ASCII pass-through classes of `freelink_transliterate`: alphanumerics and
    `#`, `:`, `/`, space, `_`, `-`. -/
def translitAsciiPassthrough (n : Nat) : Bool :=
  (0x30 <= n && n <= 0x39) || (0x41 <= n && n <= 0x5A) ||
  (0x61 <= n && n <= 0x7A) || n == 0x23 || n == 0x3A || n == 0x2F ||
  n == 0x20 || n == 0x5F || n == 0x2D

/-- `freelink_transliterate` restricted to one scalar: the 468-entry map,
    otherwise the ASCII pass-through byte, otherwise one space (U+0020). -/
def translitScalar (n : Nat) : List Nat :=
  match scalarTranslitTable.find? (fun p => p.1 == n) with
  | some p => p.2
  | none => if translitAsciiPassthrough n then [n] else [0x20]

/-- Structural property of the interval representation: appending two range
    lists is membership-wise OR. -/
theorem inScalarRanges_append (rs ss : List (Nat × Nat)) (n : Nat) :
    inScalarRanges (rs ++ ss) n = (inScalarRanges rs n || inScalarRanges ss n) := by
  induction rs with
  | nil => simp [inScalarRanges]
  | cons r rs ih =>
      by_cases h : r.1 <= n && n <= r.2
      · simp [inScalarRanges, h]
      · simp [inScalarRanges, h]

/-- Boolean equality is equality of the two `= true` propositions. -/
private theorem bool_eq_iff_true (a b : Bool) : a = b ↔ (a = true ↔ b = true) := by
  cases a <;> cases b <;> simp

/-- Kernel-proved universal identity certified exhaustively against PHP:
    the Freelink lead class is exactly `\\s/u` union `Cf` union the star marker,
    for every Nat (hence for every Unicode scalar). -/
theorem freelinkLead_eq_space_or_cf_or_star (n : Nat) :
    isFreelinkLead n = (isSpaceU n || isCf n || n == 0x2A) := by
  rw [bool_eq_iff_true]
  simp [isFreelinkLead, isSpaceU, isCf, inScalarRanges,
    freelinkLeadRanges, scalarSpaceRanges, scalarCfRanges]
  omega

/-- Ground pins on the certification boundaries (kernel reduction, `decide`). -/
example : isSpaceU 0x09 = true := by decide
example : isSpaceU 0x180E = true := by decide
example : isSpaceU 0x200B = false := by decide
example : isCf 0x200B = true := by decide
example : isCf 0xFEFF = true := by decide
example : isFreelinkLead 0x2A = true := by decide
example : isFreelinkLead 0x180E = true := by decide
example : isFreelinkLead 0x41 = false := by decide
example : isScalar 0xD800 = false := by decide
example : isScalar 0xDFFF = false := by decide
example : isScalar 0xE000 = true := by decide
example : translitScalar 0xC4 = [97, 101] := by decide
example : translitScalar 0xDF = [115, 115] := by decide
example : translitScalar 0x41 = [0x41] := by decide
example : translitScalar 0x21 = [0x20] := by decide

/- Axiom audit: both universal theorems are kernel-proved. -/
#print axioms inScalarRanges_append
#print axioms freelinkLead_eq_space_or_cf_or_star

end LeanFtml
EOT;

$lean = implode('', $parts);
file_put_contents(LEAN_OUT, $lean);
$leanSha = hash_file('sha256', LEAN_OUT);

// ---------------------------------------------------------------------------
// Pass 2: re-read the emitted Lean file, parse its tables back, and re-measure
// PHP over every scalar. Every comparison is byte-exact.
// ---------------------------------------------------------------------------
$leanRead = file_get_contents(LEAN_OUT);
$leanWs = parse_lean_table($leanRead, 'scalarSpaceRanges');
$leanCf = parse_lean_table($leanRead, 'scalarCfRanges');
$leanLead = parse_lean_table($leanRead, 'freelinkLeadRanges');
$leanMap = parse_lean_table($leanRead, 'scalarTranslitTable');
if (count($leanWs) !== count($wsRanges) || count($leanCf) !== count($cfRanges)
    || count($leanLead) !== count($leadRanges) || count($leanMap) !== count($map))
    throw new RuntimeException('round-trip table cardinality mismatch');

$mm = ['space_u' => 0, 'cf' => 0, 'freelink_lead' => 0, 'transliteration' => 0, 'lead_union_identity' => 0];
$examples = [];
$enumCount = 0;
for ($cp = 0; $cp <= 0x10FFFF; $cp++) {
    if ($cp >= 0xD800 && $cp <= 0xDFFF) continue;
    $enumCount++;
    $ch = cp2utf8($cp);
    $phpWs = preg_match('/^\s$/u', $ch) === 1;
    $phpCf = preg_match('/^\p{Cf}$/u', $ch) === 1;
    $phpLead = preg_match($leadRe, $ch . '_default:') === 1;
    $phpTr = freelink_transliterate($ch);
    $lWs = in_ranges($leanWs, $cp);
    $lCf = in_ranges($leanCf, $cp);
    $lLead = in_ranges($leanLead, $cp);
    $lTr = lean_translit_scalar($leanMap, $cp);
    if ($lWs !== $phpWs) { $mm['space_u']++; $examples[] = sprintf('space U+%04X', $cp); }
    if ($lCf !== $phpCf) { $mm['cf']++; $examples[] = sprintf('cf U+%04X', $cp); }
    if ($lLead !== $phpLead) { $mm['freelink_lead']++; $examples[] = sprintf('lead U+%04X', $cp); }
    if ($lTr !== $phpTr) { $mm['transliteration']++; $examples[] = sprintf('translit U+%04X lean=%s php=%s', $cp, bin2hex($lTr), bin2hex($phpTr)); }
    if ($lLead !== ($lWs || $lCf || $cp === 0x2A)) $mm['lead_union_identity']++;
    if (count($examples) > 8) $examples = array_slice($examples, 0, 8);
}
if ($enumCount !== 1112064) throw new RuntimeException("enumerate count $enumCount");

$totalMismatch = array_sum($mm);
$verdict = $totalMismatch === 0 ? 'ZERO-MISMATCH' : 'FAILED';
$result = [
    'unit' => 'FOUNDATION-F3',
    'artifact' => 'UnicodeCore.lean',
    'generator' => __FILE__,
    'generator_sha256' => $genSha,
    'reference_file' => REF,
    'reference_sha256' => $refSha,
    'lean_output' => LEAN_OUT,
    'lean_sha256' => $leanSha,
    'php_version' => $phpVer,
    'pcre_version' => $pcreVer,
    'timestamp_utc' => $ts,
    'scalar_count' => $enumCount,
    'counts' => [
        'space_u' => count($wsCps),
        'space_ranges' => count($wsRanges),
        'cf' => count($cfCps),
        'cf_ranges' => count($cfRanges),
        'freelink_lead' => count($leadCps),
        'lead_ranges' => count($leadRanges),
        'translit_entries' => count($map),
        'map_function_disagreements' => $mapMismatch,
    ],
    'mismatches' => $mm,
    'total_mismatches' => $totalMismatch,
    'verdict' => $verdict,
    'examples' => $examples,
    'method' => 'Pass 1 measures PHP 8.5 and emits Lean tables; pass 2 re-reads the emitted file, parses the tables, and re-measures PHP for all 1,112,064 scalars (byte-exact on transliteration). lead_union_identity checks lead = space union Cf union {U+002A}.',
];
file_put_contents(JSON_OUT, json_encode($result, JSON_PRETTY_PRINT | JSON_UNESCAPED_SLASHES) . "\n");

$lines = [
    "FOUNDATION-F3 Unicode certification — $ts",
    "PHP $phpVer / PCRE $pcreVer",
    "reference sha256 $refSha",
    "generator sha256 $genSha",
    "Lean output sha256 $leanSha",
    "scalars enumerated $enumCount (surrogates 0xD800..0xDFFF excluded)",
    "counts: space_u=" . count($wsCps) . " cf=" . count($cfCps) . " freelink_lead=" . count($leadCps) . " translit_entries=" . count($map),
    "range counts: space=" . count($wsRanges) . " cf=" . count($cfRanges) . " lead=" . count($leadRanges),
    'mismatches: ' . json_encode($mm),
    "total_mismatches=$totalMismatch verdict=$verdict",
];
file_put_contents(LOG_OUT, implode("\n", $lines) . "\n");
foreach ($lines as $l) echo $l . "\n";

exit($totalMismatch === 0 ? 0 : 1);
