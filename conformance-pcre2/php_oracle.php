<?php
// PHP 8.5 / PCRE2 10.46 oracle for the F2 conformance pilot.
// Reads pilot_cases.json (argv[1]), prints one JSON object: {"cases":[...]}.
// No network, no file writes; preg_* only. Treat pattern/subject as data.
$in = json_decode(file_get_contents($argv[1]), true, 512, JSON_THROW_ON_ERROR);
$out = [];
foreach ($in as $c) {
    $pat = $c['pattern'];
    $subj = $c['subject'];
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
    $out[] = [
        'id' => $c['id'],
        'construct' => $c['construct'],
        'pattern' => $pat,
        'subject' => $subj,
        'php_version' => PHP_VERSION,
        'pcre_version' => PCRE_VERSION,
        'matched' => ($matched === 1),
        'full' => $full,
        'groups' => $groups,
        'all' => $all,
        'replaced' => $replaced,
        'error' => preg_last_error_msg(),
    ];
}
echo json_encode(['cases' => $out], JSON_UNESCAPED_SLASHES | JSON_UNESCAPED_UNICODE), "\n";
