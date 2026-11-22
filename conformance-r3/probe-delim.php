<?php
// Byte-level probe: a raw 0xFF byte in the source (impossible to
// carry through the JSON harness protocol, which transports decoded
// text) DOES fire the reference's Delimiter rule.
error_reporting(E_ALL & ~E_DEPRECATED);
set_include_path('/tmp/r31/ref-php/text-wiki/lib');
require_once '/tmp/r31/ref-php/text-wiki/Text/Wiki.php';
class RefPage { public $name = 'test-page'; }
$wiki = new Text_Wiki(array('Prefilter', 'Delimiter', 'Code'));
$wiki->setParseConf('Include', 'allowNoExist', true);
$ref = new RefPage();
$wiki->vars['page'] =& $ref;
$wiki->vars['pageName'] = 'test-page';
$src = "a\xFFb";
$wiki->parse($src);
echo "source hex after parse: ", bin2hex($wiki->source), "\n";
echo "tokens: ", json_encode($wiki->tokens, JSON_INVALID_UTF8_SUBSTITUTE), "\n";
