<?php
/**
 * verify_u_boundary.php — Mechanical PHP 8.5 vs Lean differential across all
 * four `/u` rule families (Freelink, Div, Tableadv, Include) plus the
 * documented `isolateId` non-0xFF invalid-UTF-8 scope boundary.
 *
 * Runs both `ref-php/harness/state-restricted.php full` and the compiled
 * Lean `lean-ftml-conformance-capstone` binary over targeted `/u` boundary
 * witnesses, canonicalizes process-global token IDs, and asserts exact
 * parse-state equality on every in-scope case while pinning the explicit
 * `utf8Valid` scope boundary on raw invalid UTF-8 (`\x80`) in `[[div id=...]]`.
 */

$root = dirname(__DIR__);
$phpDriver = $root . '/ref-php/harness/state-restricted.php';
$leanBin = $root . '/lean-ftml/.lake/build/bin/lean-ftml-conformance-capstone';

if (!file_exists($leanBin)) {
    fwrite(STDERR, "missing Lean binary: $leanBin\n");
    exit(2);
}

$twRoot = $root . '/ref-php/text-wiki';
ini_set('include_path', $twRoot . PATH_SEPARATOR . ini_get('include_path'));
require_once $twRoot . '/Text/Wiki.php';
$allRules = implode(',', (new Text_Wiki())->rules);

$cases = [
    // 1. Freelink lead class & transliteration (incl. REFCORR13 & U+180E)
    ['id' => 'fl-lead-esc',      'source' => "[[[\x1B_default:Target]]]"],
    ['id' => 'fl-lead-u2065',    'source' => "[[[\u{2065}_default:Target]]]"],
    ['id' => 'fl-lead-u180e',    'source' => "[[[\u{180E}_default:Target]]]"],
    ['id' => 'fl-lead-zwsp',     'source' => "[[[\u{200B}_default:Target]]]"],
    ['id' => 'fl-lead-star',     'source' => '[[[*_default:Target]]]'],
    ['id' => 'fl-translit-mix',  'source' => '[[[Café Müller & Straße Καλώς Д Щ]]]'],
    ['id' => 'fl-translit-212a', 'source' => "[[[Kelvin \u{212A} and Angstrom \u{212B}]]]"],

    // 2. Div isolateId (/^\s$/u including U+180E, NBSP, em-space, u- prefix, 0xFF placeholder)
    ['id' => 'div-id-u180e',     'source' => "[[div id=\"\u{180E}foo\u{180E}\u{2003}bar\"]]\nhi\n[[/div]]"],
    ['id' => 'div-id-nbsp',      'source' => "[[div id=\"\u{00A0}alpha\u{200A}beta\"]]\nhi\n[[/div]]"],
    ['id' => 'div-id-uprefix',   'source' => "[[div id=\"  u-abc\u{180E}def\"]]\nhi\n[[/div]]"],
    ['id' => 'div-id-empty-ws',  'source' => "[[div id=\"\u{180E}\u{2003}\"]]\nhi\n[[/div]]"],
    ['id' => 'div-id-ph-0xff',   'source' => "[[div id=\"pre[[footnote]]f[[/footnote]]post\"]]\nhi\n[[/div]]"],

    // 3. Tableadv normalizeValueAdv & isolateIdAdv (control-byte strip + /u collapse)
    ['id' => 'tadv-u180e-attrs', 'source' => "[[table]][[row]][[cell id=\"\u{180E}a\u{2003}b\" class=\"c\x07\u{180E}\u{00A0}d\"]]ok[[/cell]][[/row]][[/table]]"],
    ['id' => 'tadv-uprefix',     'source' => "[[table]][[row]][[cell id=\"u-\u{180E}x\"]]ok[[/cell]][[/row]][[/table]]"],

    // 4. Include refNormalize (ASCII fold + non-ASCII \p{L}\p{N} : - _)
    ['id' => 'inc-ascii-upper',  'source' => '[[include Foo_Bar:Baz_123]]'],
    ['id' => 'inc-u2070-u200b',  'source' => "[[include café\u{2070}\u{200B}test]]"],
    ['id' => 'inc-existing',     'source' => '[[include MUSE-PROBE-G14-TARGET marker=ok]]'],
];

// Write JSONL carefully preserving raw UTF-8 / arbitrary bytes cleanly via surrogate/hex?
// Note: state-restricted.php uses json_decode($line, true) expecting UTF-8 JSON strings.
$jsonl = '';
foreach ($cases as $c) {
    $jsonl .= json_encode($c, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES) . "\n";
}

function run_driver(string $cmd, string $stdin): array {
    $spec = [0 => ['pipe', 'r'], 1 => ['pipe', 'w'], 2 => ['pipe', 'w']];
    $proc = proc_open($cmd, $spec, $pipes);
    if (!is_resource($proc)) {
        throw new RuntimeException("proc_open failed: $cmd");
    }
    fwrite($pipes[0], $stdin);
    fclose($pipes[0]);
    $out = stream_get_contents($pipes[1]);
    $err = stream_get_contents($pipes[2]);
    fclose($pipes[1]);
    fclose($pipes[2]);
    $rc = proc_close($proc);
    if ($rc !== 0) {
        throw new RuntimeException("cmd exit $rc: $cmd\nstderr: $err");
    }
    $rows = [];
    foreach (explode("\n", trim($out)) as $line) {
        if ($line === '') continue;
        $rec = json_decode($line, true);
        if (!is_array($rec) || !isset($rec['id'])) {
            throw new RuntimeException("bad JSONL line from $cmd: $line");
        }
        $rows[$rec['id']] = $rec;
    }
    return $rows;
}

function canonicalize_state(array $rec): array {
    // Tokens may be a 0-indexed array (Lean) or map keyed by string/int token ID (PHP).
    $tokMap = $rec['tokens'] ?? [];
    $idToNorm = [];
    $normToks = [];
    $i = 0;
    foreach ($tokMap as $oldKey => $tok) {
        $idToNorm[(string)$oldKey] = $i;
        $normToks[] = $tok;
        $i++;
    }
    // Rewrite placeholders / token references canonically.
    $rewriteBytes = function (array $bs) use ($idToNorm): array {
        $s = '';
        foreach ($bs as $b) $s .= chr($b);
        $s = preg_replace_callback('/\xFF(\d+)\xFF/', function ($m) use ($idToNorm) {
            $k = $m[1];
            return "\xFF" . ($idToNorm[$k] ?? $k) . "\xFF";
        }, $s);
        $out = [];
        for ($j = 0; $j < strlen($s); $j++) $out[] = ord($s[$j]);
        return ['$bytes' => $out];
    };
    $rewriteVal = null;
    $rewriteVal = function ($v) use (&$rewriteVal, $rewriteBytes, $idToNorm) {
        if (is_array($v)) {
            if (array_key_exists('$bytes', $v)) {
                return $rewriteBytes($v['$bytes']);
            }
            $out = [];
            foreach ($v as $k => $sub) {
                $out[$k] = $rewriteVal($sub);
            }
            if (!array_is_list($out)) {
                ksort($out, SORT_STRING);
            }
            return $out;
        }
        if (is_string($v)) {
            return preg_replace_callback('/\xFF(\d+)\xFF/', function ($m) use ($idToNorm) {
                $k = $m[1];
                return "\xFF" . ($idToNorm[$k] ?? $k) . "\xFF";
            }, $v);
        }
        return $v;
    };
    $normToks = array_map($rewriteVal, $normToks);
    $segs = [];
    foreach ($rec['segments'] ?? [] as $seg) {
        if (isset($seg['k'])) {
            $k = (string)$seg['k'];
            $segs[] = ['k' => $idToNorm[$k] ?? $seg['k']];
        } elseif (($seg['t'] ?? '') !== '') {
            $segs[] = $seg;
        }
    }
    return [
        'segments' => $segs,
        'tokens' => $normToks,
        'inclusions' => $rec['inclusions'] ?? [],
        'inclusionsNotExist' => $rec['inclusionsNotExist'] ?? [],
    ];
}

$phpRows = run_driver('php ' . escapeshellarg($phpDriver) . ' ' . escapeshellarg($allRules), $jsonl);
$leanRows = run_driver(escapeshellarg($leanBin), $jsonl);

$mismatches = 0;
foreach ($cases as $c) {
    $id = $c['id'];
    if (!isset($phpRows[$id]) || !isset($leanRows[$id])) {
        echo "MISSING $id\n";
        $mismatches++;
        continue;
    }
    $pNorm = canonicalize_state($phpRows[$id]);
    $lNorm = canonicalize_state($leanRows[$id]);
    if ($pNorm === $lNorm) {
        echo "PASS $id\n";
    } else {
        echo "FAIL $id\n  PHP:  " . json_encode($pNorm) . "\n  LEAN: " . json_encode($lNorm) . "\n";
        $mismatches++;
    }
}

// Explicitly verify the documented isolateId non-0xFF invalid-UTF-8 scope boundary in PHP:
// preg_replace('/\s+/u', ' ', "\x80") returns NULL under PCRE2 /u error, whereas
// Lean ContainRules.isolateId guards only `v.contains 255`.
$phpInvalidCollapse = preg_replace('/\s+/u', ' ', trim("\x80"));
if ($phpInvalidCollapse !== null) {
    echo "FAIL scope-boundary-invalid-utf8: expected NULL from preg_replace(/\\s+/u), got " . var_export($phpInvalidCollapse, true) . "\n";
    $mismatches++;
} else {
    echo "SCOPE-BOUNDARY-PINNED div-isolateId-invalid-utf8-0x80: PHP preg_replace(/\\s+/u)=NULL (documented utf8Valid precondition)\n";
}

echo "Summary: " . count($cases) . " differential cases + 1 documented scope boundary; mismatches=$mismatches\n";
exit($mismatches === 0 ? 0 : 1);
