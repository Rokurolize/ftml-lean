<?php
// Coverage-tier driver for Heading, Toc and Anchor. Does not modify the reference.
//   php driver.php token    JSONL {id,rule,opts} -> {id,output,phpClass}
//   php driver.php source   JSONL {id,source} -> {id,output,tokens}
//   php driver.php regex    JSONL {id,source} -> {id,groups} for the Toc pattern
// wire_encode keeps invalid UTF-8 as bytes so json_encode cannot turn it into false.
error_reporting(E_ALL & ~E_DEPRECATED & ~E_WARNING);
ini_set('display_errors', 'stderr');
$root = dirname(__DIR__) . '/ref-php';
define('WIKIDOT_ROOT', $root . '/wikidot-root');
ini_set('include_path', $root . '/text-wiki' . PATH_SEPARATOR
    . $root . '/wikidot-root/lib' . PATH_SEPARATOR
    . ini_get('include_path'));
require_once $root . '/wikidot-root/lib/WDStringUtils.php';
require_once $root . '/harness/ozone-stubs.php';
require_once $root . '/text-wiki/Text/Wiki.php';
require_once $root . '/harness/wiki-config.php';
require_once $root . '/harness/pages.php';
$GLOBALS['REF_PAGES'] = ref_page_map();

function wire_decode($v) {
    if (is_string($v)) return $v;
    if (is_array($v)) {
        if (array_key_exists('$bytes', $v) && count($v) === 1 && is_array($v['$bytes'])) {
            $s = '';
            foreach ($v['$bytes'] as $b) $s .= chr($b);
            return $s;
        }
        $o = array();
        foreach ($v as $k => $x) $o[$k] = wire_decode($x);
        return $o;
    }
    return $v;
}

function wire_encode($v) {
    if (is_string($v)) {
        return preg_match('//u', $v) === 1
            ? $v : array('$bytes' => array_values(unpack('C*', $v)));
    }
    if (is_array($v)) {
        $o = array();
        foreach ($v as $k => $x) $o[$k] = wire_encode($x);
        return $o;
    }
    return $v;
}

function isset_opt($opts, $k) {
    return is_array($opts) && array_key_exists($k, $opts) && $opts[$k] !== null;
}

function str_opt($opts, $k) {
    if (!isset_opt($opts, $k)) return '';
    $v = $opts[$k];
    if (is_bool($v)) return $v ? '1' : '';
    if (is_array($v)) return '';
    return (string)$v;
}

function php_empty_val($v) {
    if ($v === null || $v === false || $v === '' || $v === '0' || $v === 0 || $v === 0.0) return true;
    if (is_array($v) && count($v) === 0) return true;
    return false;
}

function heading_classes($opts) {
    $type = str_opt($opts, 'type');
    if ($type === 'start') {
        $out = array('hdRStart');
        if (isset_opt($opts, 'id') && str_opt($opts, 'id') !== '') $out[] = 'hdRId';
        if (isset_opt($opts, 'collapse')) $out[] = 'hdROnclick';
        return $out;
    }
    if ($type === 'start-notoc') return array('hdRNotoc');
    if ($type === 'end') {
        $out = array('hdREnd');
        if (isset_opt($opts, 'collapse')) {
            $out[] = php_empty_val($opts['collapse']) ? 'hdREndMinus' : 'hdREndPlus';
        }
        return $out;
    }
    if ($type === 'startContent') {
        $out = array('hdRContent');
        if (isset_opt($opts, 'collapse')) $out[] = 'hdRScript';
        if (isset_opt($opts, 'collapse') && $opts['collapse'] === true) $out[] = 'hdRHidden';
        return $out;
    }
    if ($type === 'endContent') return array('hdRContentEnd');
    return array('hdRFall');
}

function align_truthy($opts) {
    if (!isset_opt($opts, 'align')) return false;
    $a = str_opt($opts, 'align');
    return $a !== '' && $a !== '0';
}

function toc_classes($opts) {
    $type = str_opt($opts, 'type');
    $align = isset_opt($opts, 'align') ? str_opt($opts, 'align') : '';
    $truthy = align_truthy($opts);
    if ($type === 'list_start') {
        $out = array('tocRStart');
        if (!$truthy) $out[] = 'tocRTable';
        else if ($align === 'f<') $out[] = 'tocRFLeft';
        else if ($align === 'f>') $out[] = 'tocRFRight';
        else $out[] = 'tocROther';
        $auth = isset($opts['attr']) && is_array($opts['attr'])
            && isset($opts['attr']['title']) && is_string($opts['attr']['title']);
        $out[] = $auth ? 'tocRTitleAuthored' : 'tocRTitleDefault';
        return $out;
    }
    if ($type === 'list_end') return array('tocREnd', $truthy ? 'tocREndBare' : 'tocREndTable');
    if ($type === 'item_start') return array('tocRItem', 'tocSentinel');
    if ($type === 'item_end') return array('tocRItemEnd', 'tocSentinel');
    return array('tocRFall');
}

function anchor_classes($opts) {
    if (!isset_opt($opts, 'type')) return array('anRNamed');
    $type = str_opt($opts, 'type');
    if ($type === 'start') {
        if (isset($opts['attrs']) && is_array($opts['attrs'])) return array('anRStartGiven');
        return array('anRStartDefault');
    }
    if ($type === 'end') return array('anREnd');
    if ($type === 'invalid_named') return array('anRInvalid');
    if ($type === 'literal') return array('anRLiteral');
    return array('anRFallName');
}

function php_class($rule, $opts) {
    if ($rule === 'Heading') return heading_classes($opts);
    if ($rule === 'Toc') return toc_classes($opts);
    if ($rule === 'Anchor') return anchor_classes($opts);
    return array();
}

function emit($row) {
    echo json_encode($row, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
}

$mode = $argv[1] ?? 'token';

if ($mode === 'regex') {
    $re = '/^(?:\n*)\[\[(f[<>])?toc( .*)?\]\](\n)*/m';
    while (($line = fgets(STDIN)) !== false) {
        $line = trim($line);
        if ($line === '') continue;
        $case = json_decode($line, true);
        $src = $case['source'];
        $ok = preg_match($re, $src, $m);
        emit(array(
            'id' => $case['id'],
            'matched' => (bool)$ok,
            'g1' => $ok && array_key_exists(1, $m),
            'g2' => $ok && array_key_exists(2, $m),
            'g3' => $ok && array_key_exists(3, $m),
            'g1v' => ($ok && array_key_exists(1, $m)) ? $m[1] : null,
        ));
    }
    exit(0);
}

while (($line = fgets(STDIN)) !== false) {
    $line = trim($line);
    if ($line === '') continue;
    $case = json_decode($line, true);
    $id = $case['id'];
    try {
        if ($mode === 'source') {
            $wiki = ref_configure_wiki(new Text_Wiki());
            $wiki->vars['page'] = new RefPage('', 0, array());
            $html = $wiki->transform($case['source'], 'Xhtml');
            $tokens = array();
            foreach ($wiki->tokens as $t) {
                if (!is_array($t) || count($t) < 2) continue;
                if (!in_array($t[0], array('Heading', 'Toc', 'Anchor'), true)) continue;
                $o = is_array($t[1]) ? $t[1] : array();
                $tokens[] = array(
                    'rule' => $t[0],
                    'type' => isset($o['type']) ? $o['type'] : null,
                    'level' => isset($o['level']) ? $o['level'] : null,
                    'align' => array_key_exists('align', $o) ? $o['align'] : null,
                    'name' => isset($o['name']) ? $o['name'] : null,
                    'text' => isset($o['text']) ? $o['text'] : null,
                    'attrs' => isset($o['attrs']) ? $o['attrs'] : null,
                    'lead' => isset($o['lead']) ? $o['lead'] : null,
                    'id' => array_key_exists('id', $o) ? $o['id'] : null,
                );
            }
            emit(array('id' => $id, 'output' => wire_encode($html), 'tokens' => $tokens));
            continue;
        }
        $rule = $case['rule'];
        $opts = wire_decode(isset($case['opts']) ? $case['opts'] : array());
        $wiki = ref_configure_wiki(new Text_Wiki(array($rule)));
        $wiki->vars['page'] = new RefPage('', 0, array());
        $wiki->loadRenderObj('Xhtml', $rule);
        $key = ucwords(strtolower($rule));
        $raw = $wiki->renderObj[$key]->token($opts);
        $out = ($raw === null) ? '' : $raw;
        emit(array(
            'id' => $id,
            'output' => wire_encode($out),
            'phpClass' => php_class($rule, $opts),
            'null' => $raw === null,
        ));
    } catch (Throwable $e) {
        emit(array('id' => $id, 'error' => get_class($e) . ': ' . $e->getMessage()));
    }
}
