<?php
// Read length-prefixed sources on stdin. For each, run only the
// Tableadv parse rule and write one TSV line:
//   <hex source>\t<token fingerprint>
// Token ids are renumbered to 0..n-1 in claim order so a warm
// process-global counter matches a fresh one. Fingerprint fields
// are type, header, and the attribute map in key order.
error_reporting(E_ALL & ~E_DEPRECATED & ~E_WARNING);
ini_set('display_errors', 'stderr');
define('WIKIDOT_ROOT', dirname(__DIR__) . '/ref-php/wikidot-root');
$root = dirname(__DIR__) . '/ref-php/text-wiki';
ini_set('include_path', $root . PATH_SEPARATOR
    . WIKIDOT_ROOT . '/lib' . PATH_SEPARATOR
    . ini_get('include_path'));
require_once WIKIDOT_ROOT . '/lib/WDStringUtils.php';
require_once dirname(__DIR__) . '/ref-php/harness/ozone-stubs.php';
require_once $root . '/Text/Wiki.php';

function renumber($src, $tokens) {
    $ids = array_keys($tokens);
    sort($ids, SORT_NUMERIC);
    $map = array();
    $i = 0;
    foreach ($ids as $id) {
        $map[$id] = $i;
        $i++;
    }
    $out = preg_replace_callback('/\xFF(\d+)\xFF/', function ($m) use ($map) {
        $id = intval($m[1]);
        $n = array_key_exists($id, $map) ? $map[$id] : $id;
        return "\xFF" . $n . "\xFF";
    }, $src);
    $fps = array();
    foreach ($ids as $id) {
        $opts = $tokens[$id][1];
        $type = isset($opts['type']) ? $opts['type'] : '';
        $header = array_key_exists('header', $opts)
            ? ($opts['header'] ? '1' : '0') : '';
        $attrs = isset($opts['attrs']) ? $opts['attrs'] : null;
        $fps[] = json_encode(array($type, $header, $attrs),
            JSON_UNESCAPED_SLASHES | JSON_UNESCAPED_UNICODE);
    }
    return array(bin2hex($out), implode(',', $fps));
}

$in = fopen('php://stdin', 'rb');
$out = fopen('php://stdout', 'wb');
while (!feof($in)) {
    $line = fgets($in);
    if ($line === false) {
        break;
    }
    $n = intval(trim($line));
    $buf = '';
    while (strlen($buf) < $n) {
        $chunk = fread($in, $n - strlen($buf));
        if ($chunk === false || $chunk === '') {
            break;
        }
        $buf .= $chunk;
    }
    $wiki = new Text_Wiki(array('Tableadv'));
    $wiki->parse($buf);
    list($hex, $fp) = renumber($wiki->source, $wiki->tokens);
    fwrite($out, $hex . "\t" . $fp . "\n");
}
