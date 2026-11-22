<?php
error_reporting(E_ALL & ~E_DEPRECATED);
ini_set('display_errors', 'stderr');
define('WIKIDOT_ROOT', getenv('REF_ROOT') . '/wikidot-root');
$root = getenv('REF_ROOT') . '/text-wiki';
ini_set('include_path', $root . PATH_SEPARATOR . getenv('REF_ROOT') . '/wikidot-root/lib' . PATH_SEPARATOR . ini_get('include_path'));
require_once getenv('REF_ROOT') . '/wikidot-root/lib/WDStringUtils.php';
require_once getenv('REF_ROOT') . '/harness/ozone-stubs.php';
require_once $root . '/Text/Wiki.php';
require_once getenv('REF_ROOT') . '/harness/pages.php';
require_once getenv('REF_ROOT') . '/harness/wiki-config.php';
$GLOBALS['REF_PAGES'] = ref_page_map();
$extra = json_decode(getenv('REF_EXTRA_PAGES'), true);
foreach ($extra as $k => $v) { $GLOBALS['REF_PAGES'][$k] = $v; }
$src = file_get_contents('php://stdin');
$src = str_replace("\r\n", "\n", $src);
$wiki = ref_configure_wiki(new Text_Wiki());
echo $wiki->transform($src, 'Xhtml');
echo "\n";
