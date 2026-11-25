<?php
// G5 render-anchor harness: direct per-token render extraction and execution.
// Modes:
//   extract: stdin {"id","source","tags"?,"pageName"?}; stdout one extraction
//            record with wire-encoded token table, tokenSource and document state.
//   render:  stdin one direct token case; stdout {"id","output"|"error",...}.
// The byte-string wire encoding is the R3.3 convention used by state-restricted.php.
error_reporting(E_ALL & ~E_DEPRECATED & ~E_WARNING);
ini_set('display_errors', 'stderr');
define('WIKIDOT_ROOT', dirname(__DIR__) . '/wikidot-root');
$root = dirname(__DIR__) . '/text-wiki';
ini_set('include_path', $root . PATH_SEPARATOR
    . dirname(__DIR__) . '/wikidot-root/lib' . PATH_SEPARATOR
    . ini_get('include_path'));
require_once dirname(__DIR__) . '/wikidot-root/lib/WDStringUtils.php';
require_once __DIR__ . '/ozone-stubs.php';
require_once $root . '/Text/Wiki.php';
require_once $root . '/Text/Wiki/Parse/Default/Math.php';
require_once $root . '/Text/Wiki/Parse/Default/Tabview.php';
require_once __DIR__ . '/wiki-config.php';
require_once __DIR__ . '/pages.php';

$GLOBALS['REF_PAGES'] = ref_page_map();
$GLOBALS['REF_EXISTING_PAGES'] = array_keys(ref_page_map());

function g5_wire_encode($v) {
    if (is_string($v)) {
        if (preg_match('//u', $v) === 1) return $v;
        return array('$bytes' => array_values(unpack('C*', $v)));
    }
    if (is_array($v)) {
        if ($v === array()) return new ArrayObject();
        $out = array();
        foreach ($v as $k => $x) $out[$k] = g5_wire_encode($x);
        return $out;
    }
    return $v;
}

function g5_wire_decode($v) {
    if (is_string($v)) return $v;
    if (is_array($v)) {
        if (array_keys($v) === array('$bytes')) {
            $out = '';
            foreach ($v['$bytes'] as $b) $out .= chr((int)$b);
            return $out;
        }
        $out = array();
        foreach ($v as $k => $x) $out[$k] = g5_wire_decode($x);
        return $out;
    }
    if (is_object($v)) {
        $vars = get_object_vars($v);
        if ($vars === array()) return array();
        if (array_keys($vars) === array('$bytes')) {
            $out = '';
            foreach ($vars['$bytes'] as $b) $out .= chr((int)$b);
            return $out;
        }
        $out = array();
        foreach ($vars as $k => $x) $out[$k] = g5_wire_decode($x);
        return $out;
    }
    return $v;
}

function g5_setup_case(&$case) {
    if (function_exists('ref_reset_stubs')) ref_reset_stubs();
    Text_Wiki_Parse_Math::$equationsArray = array();
    $tabCounterProp = new ReflectionProperty('Text_Wiki_Parse_Tabview', '_counter');
    $tabCounterProp->setAccessible(true);
    $tabCounterProp->setValue(null, 0);
    $tags = (isset($case['tags']) && is_array($case['tags'])) ? $case['tags'] : array();
    $pageName = isset($case['pageName']) ? (string)$case['pageName'] : '';
    $wiki = ref_configure_wiki(new Text_Wiki());
    $wiki->vars['footnotes'] = array();
    $wiki->vars['bibitems'] = array();
    $wiki->vars['bibitemIds'] = array();
    $wiki->vars['page'] = new RefPage('', 0, $tags, null, $pageName);
    if ($pageName !== '') $wiki->vars['pageName'] = $pageName;
    return $wiki;
}

function g5_doc_state($wiki) {
    $footnotes = array();
    if (isset($wiki->vars['footnotes']) && is_array($wiki->vars['footnotes'])) {
        foreach ($wiki->vars['footnotes'] as $body) $footnotes[] = $body;
    }
    $bibitems = array();
    if (isset($wiki->vars['bibitems']) && is_array($wiki->vars['bibitems'])) {
        foreach ($wiki->vars['bibitems'] as $label => $content) $bibitems[] = array((string)$label, $content);
    }
    $bibitemIds = array();
    if (isset($wiki->vars['bibitemIds']) && is_array($wiki->vars['bibitemIds'])) {
        foreach ($wiki->vars['bibitemIds'] as $label => $bid) $bibitemIds[] = array((string)$label, $bid);
    }
    $equations = array();
    foreach (Text_Wiki_Parse_Math::$equationsArray as $label => $mid) $equations[] = array((string)$label, $mid);
    return array(
        'footnotes' => $footnotes,
        'bibitems' => $bibitems,
        'bibitemIds' => $bibitemIds,
        'equations' => $equations,
        'mathId' => isset($wiki->vars['math_id']) ? $wiki->vars['math_id'] : null,
        'pageName' => isset($wiki->vars['pageName']) ? $wiki->vars['pageName'] : '',
        'page' => array('name' => isset($wiki->vars['pageName']) ? $wiki->vars['pageName'] : '', 'tags' => $wiki->vars['page']->getTagsAsArray()),
    );
}

function g5_install_doc_state($wiki, $doc) {
    $doc = g5_wire_decode($doc);
    if (!is_array($doc)) return;
    if (array_key_exists('footnotes', $doc)) $wiki->vars['footnotes'] = $doc['footnotes'];
    foreach (array('bibitems','bibitemIds') as $k) {
        if (array_key_exists($k, $doc) && is_array($doc[$k])) {
            $m = array();
            foreach ($doc[$k] as $pair) {
                if (is_array($pair) && count($pair) >= 2) $m[(string)$pair[0]] = $pair[1];
            }
            $wiki->vars[$k] = $m;
        }
    }
    if (array_key_exists('mathId', $doc) && $doc['mathId'] !== null) $wiki->vars['math_id'] = $doc['mathId'];
    if (array_key_exists('equations', $doc) && is_array($doc['equations'])) {
        $eq = array();
        foreach ($doc['equations'] as $pair) if (is_array($pair) && count($pair) >= 2) $eq[$pair[0]] = $pair[1];
        Text_Wiki_Parse_Math::$equationsArray = $eq;
    }
    if (array_key_exists('pageName', $doc) && $doc['pageName'] !== '') $wiki->vars['pageName'] = $doc['pageName'];
}

$mode = $argv[1] ?? '';
if ($mode === 'extract') {
    while (($line = fgets(STDIN)) !== false) {
        $line = trim($line); if ($line === '') continue;
        $case = json_decode($line, true); $id = $case['id'];
        try {
            $wiki = g5_setup_case($case);
            $src = str_replace("\r\n", "\n", $case['source']);
            $wiki->parse($src);
            $rec = array('id' => $id, 'source' => $case['source'],
                'tokens' => $wiki->tokens, 'tokenSource' => $wiki->tokenSource,
                'doc' => g5_doc_state($wiki));
            echo json_encode(g5_wire_encode($rec), JSON_UNESCAPED_SLASHES), "\n";
        } catch (Throwable $e) {
            echo json_encode(array('id' => $id, 'error' => get_class($e) . ': ' . $e->getMessage())), "\n";
        }
    }
    exit(0);
}
if ($mode === 'render') {
    while (($line = fgets(STDIN)) !== false) {
        $line = trim($line); if ($line === '') continue;
        $case = json_decode($line, true); $id = $case['id'];
        try {
            $wiki = g5_setup_case($case);
            if (isset($case['doc'])) g5_install_doc_state($wiki, $case['doc']);
            if (isset($case['tokens'])) {
                $toks = g5_wire_decode($case['tokens']);
                if (is_array($toks)) $wiki->tokens = $toks;
            }
            if (isset($case['tokenSource'])) {
                $ts = g5_wire_decode($case['tokenSource']);
                if (is_array($ts)) $wiki->tokenSource = $ts;
            }
            if (isset($case['conf']) && is_array($case['conf'])) {
                if (isset($case['conf']['footnoteIdPrefix'])) $wiki->setRenderConf('Xhtml', 'footnote', 'id_prefix', g5_wire_decode($case['conf']['footnoteIdPrefix']));
                if (isset($case['conf']['bibitemIdPrefix'])) $wiki->setRenderConf('Xhtml', 'bibitem', 'id_prefix', g5_wire_decode($case['conf']['bibitemIdPrefix']));
                if (isset($case['conf']['mathIdPrefix'])) $wiki->setRenderConf('Xhtml', 'math', 'id_prefix', g5_wire_decode($case['conf']['mathIdPrefix']));
                if (isset($case['conf']['pageName']) && $case['conf']['pageName'] !== '') $wiki->vars['pageName'] = g5_wire_decode($case['conf']['pageName']);
            }
            $rule = $case['rule'];
            $options = g5_wire_decode($case['options']);
            $err = $wiki->loadRenderObj('Xhtml', $rule);
            if (!isset($wiki->renderObj[$rule]) || !is_object($wiki->renderObj[$rule])) {
                throw new Exception('render object not loaded: ' . $rule);
            }
            $out = $wiki->renderObj[$rule]->token($options);
            // Text_Wiki::render concatenates the method result; a null return
            // is therefore the empty byte string in the real render pass.
            if ($out === null) $out = '';
            $resp = array('id' => $id, 'output' => $out);
            $stubs = function_exists('ref_stubs_hit') ? ref_stubs_hit() : array();
            if ($stubs) { $resp['stub_mediated'] = true; $resp['stubs'] = $stubs; }
            echo json_encode(g5_wire_encode($resp), JSON_UNESCAPED_SLASHES), "\n";
        } catch (Throwable $e) {
            $resp = array('id' => $id, 'error' => get_class($e) . ': ' . $e->getMessage());
            $stubs = function_exists('ref_stubs_hit') ? ref_stubs_hit() : array();
            if ($stubs) { $resp['stub_mediated'] = true; $resp['stubs'] = $stubs; }
            echo json_encode($resp), "\n";
        }
    }
    exit(0);
}
fwrite(STDERR, "usage: render-token-g5.php extract|render\n");
exit(2);
