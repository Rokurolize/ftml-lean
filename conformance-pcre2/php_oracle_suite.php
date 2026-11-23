<?php
// PHP 8.5 / PCRE2 oracle for the full conformance-pcre2 suite.
// Reads patterns.json + cases.jsonl (argv[1], argv[2]); writes one JSON
// object per case to stdout (JSONL): matched/full/groups spans,
// preg_match_all full spans, preg_replace_callback output as hex, and
// the preg error string.  Patterns and subjects travel as hex so
// arbitrary bytes (including 0xFF) survive.  Observation encoding
// matches the pilot oracle (php_oracle.php) exactly.
error_reporting(E_ALL & ~E_WARNING & ~E_DEPRECATED & ~E_NOTICE);
$pats = json_decode(file_get_contents($argv[1]), true, 512, JSON_THROW_ON_ERROR);
$fh = fopen($argv[2], 'r');
$idx = 0;
while (($line = fgets($fh)) !== false) {
    $c = json_decode($line, true, 512, JSON_THROW_ON_ERROR);
    $pat = hex2bin($pats[$c['p']]['php_hex'] ?? $pats[$c['p']]['hex']);
    $subj = hex2bin($c['s']);
    $m = [];
    $matched = preg_match($pat, $subj, $m, PREG_OFFSET_CAPTURE);
    $groups = [];
    for ($i = 1; $i <= 9; $i++) {
        if (isset($m[$i]) && is_array($m[$i]) && $m[$i][1] >= 0) {
            $groups[] = [$m[$i][1], $m[$i][1] + strlen($m[$i][0])];
        } else {
            $groups[] = null;
        }
    }
    $full = null;
    if ($matched === 1 && isset($m[0])) {
        $full = [$m[0][1], $m[0][1] + strlen($m[0][0])];
    }
    $all = [];
    $allm = [];
    $n = preg_match_all($pat, $subj, $allm, PREG_OFFSET_CAPTURE);
    if ($n !== false) {
        for ($k = 0; $k < $n; $k++) {
            if (isset($allm[0][$k])) {
                $all[] = [$allm[0][$k][1], $allm[0][$k][1] + strlen($allm[0][$k][0])];
            }
        }
    }
    $replaced = preg_replace_callback($pat, function ($mm) { return 'X'; }, $subj);
    $out = [
        'id' => $idx,
        'matched' => ($matched === 1),
        'match_false' => ($matched === false),
        'full' => $full,
        'groups' => $groups,
        'all' => $all,
        'replaced_hex' => ($replaced === null ? null : bin2hex($replaced)),
        'error' => preg_last_error_msg(),
        'php_version' => PHP_VERSION,
        'pcre_version' => PCRE_VERSION,
    ];
    echo json_encode($out), "\n";
    $idx++;
}
