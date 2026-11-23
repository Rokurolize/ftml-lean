<?php
// R5G-P3 scratch copy of the SUSPECT4-C include-aware reference renderer.
// Adds this unit's two run-owned target pages to the harness page map so
// Include resolves exactly the sources that were saved on the sandbox.
error_reporting(E_ALL & ~E_DEPRECATED & ~E_WARNING);
ini_set('display_errors', 'stderr');
define('WIKIDOT_ROOT', getenv('REF_ROOT') . '/wikidot-root');
$root = getenv('REF_ROOT') . '/text-wiki';
ini_set('include_path', $root . PATH_SEPARATOR . getenv('REF_ROOT') . '/wikidot-root/lib' . PATH_SEPARATOR . ini_get('include_path'));
require_once getenv('REF_ROOT') . '/wikidot-root/lib/WDStringUtils.php';
require_once getenv('REF_ROOT') . '/harness/ozone-stubs.php';
require_once $root . '/Text/Wiki.php';
require_once $root . '/Text/Wiki/Parse/Default/Math.php';
require_once getenv('REF_ROOT') . '/harness/pages.php';
require_once getenv('REF_ROOT') . '/harness/wiki-config.php';
$GLOBALS['REF_PAGES'] = ref_page_map();
$extra = json_decode(getenv('REF_EXTRA_PAGES'), true);
foreach ($extra as $k => $v) { $GLOBALS['REF_PAGES'][WDStringUtils::toUnixName($k)] = $v; }
$GLOBALS['REF_EXISTING_PAGES'] = array_keys($GLOBALS['REF_PAGES']);
while (($line = fgets(STDIN)) !== false) {
    $line = trim($line);
    if ($line === '') continue;
    $case = json_decode($line, true);
    Text_Wiki_Parse_Math::$equationsArray = array();
    $caseTags = (isset($case['tags']) && is_array($case['tags'])) ? $case['tags'] : array();
    $src = str_replace("\r\n", "\n", $case['source']);
    try {
        $wiki = ref_configure_wiki(new Text_Wiki());
        $wiki->vars['footnotes'] = array();
        $wiki->vars['bibitems'] = array();
        $wiki->vars['bibitemIds'] = array();
        $wiki->vars['page'] = new RefPage('', 0, $caseTags);
        $out = $wiki->transform($src, 'Xhtml');
        echo json_encode(array('id' => $case['id'], 'output' => $out)), "\n";
    } catch (Throwable $e) {
        echo json_encode(array('id' => $case['id'], 'error' => get_class($e) . ': ' . $e->getMessage())), "\n";
    }
}
