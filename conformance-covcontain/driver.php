<?php
// Coverage-tier container driver. Does not modify the reference.
//   php driver.php token
//       JSONL {id,rule,opts} -> {id,output,phpClass,null}
//   php driver.php source Rule1,Rule2,...
//       JSONL {id,source} -> {id,output}
//       Tabview's and Collapsible's process-static counters are reset
//       per case so each document starts at 0, matching one Lean e2e
//       process per case. This is harness isolation, the same kind of
//       per-case reset batch.php already does for Math's equation array.
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
require_once $root . '/text-wiki/Text/Wiki/Parse/Default/Math.php';
require_once $root . '/harness/wiki-config.php';
require_once $root . '/harness/pages.php';

$GLOBALS['REF_PAGES'] = ref_page_map();
$GLOBALS['REF_EXISTING_PAGES'] = array_keys(ref_page_map());

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

function php_empty_val($v) {
    if ($v === null || $v === false || $v === 0 || $v === '' || $v === '0') return true;
    if (is_array($v) && count($v) === 0) return true;
    return false;
}

function loose_zero($v) {
    if ($v === null || $v === false) return true;
    if ($v === true) return false;
    if (is_int($v)) return $v === 0;
    if (is_string($v)) {
        if ($v === '') return true;
        return preg_match('/^[+-]?0+$/', $v) === 1;
    }
    return false;
}

function label_kind($args, $key) {
    if (!is_array($args) || !array_key_exists($key, $args) || $args[$key] === null) {
        return 'default';
    }
    $v = $args[$key];
    if ($v === '' || $v === '0') return 'default';
    return 'authored';
}

function contain_class($rule, $opts) {
    $opts = is_array($opts) ? $opts : array();
    $type = array_key_exists('type', $opts) && $opts['type'] !== null ? (string)$opts['type'] : '';
    if ($rule === 'Blockquote') {
        if ($type === 'start') return array('bqRenderStart');
        if ($type === 'end') return array('bqRenderEnd');
        return array('bqRenderFall');
    }
    if ($rule === 'Div') {
        if (array_key_exists('vanished', $opts) && !php_empty_val($opts['vanished'])) {
            return array('dvRVanished');
        }
        if ($type === 'start') {
            $args = (isset($opts['args']) && is_array($opts['args'])) ? $opts['args'] : array();
            if (count($args) === 0) return array('dvRStartBare');
            foreach ($args as $k => $v) {
                $raw = is_string($v) ? $v : (string)$v;
                if (strpos($raw, "\xFF") !== false || ($k === 'id' && $raw === 'u-')) {
                    return array('dvRStartClear');
                }
            }
            return array('dvRStartEsc');
        }
        if ($type === 'end') return array('dvREnd');
        return array('dvRFall');
    }
    if ($rule === 'Collapsible') {
        $args = (isset($opts['args']) && is_array($opts['args'])) ? $opts['args'] : array();
        $folded = isset($args['folded']) ? $args['folded'] : null;
        $out = array(($folded === 'no' || $folded === 'false') ? 'coOpened' : 'coFolded');
        $out[] = label_kind($args, 'show') === 'default' ? 'coShowDefault' : 'coShowAuthored';
        $out[] = label_kind($args, 'hide') === 'default' ? 'coHideDefault' : 'coHideAuthored';
        $loc = isset($args['hideLocation']) ? $args['hideLocation'] : null;
        if ($loc === 'bottom') $out[] = 'coLocBottom';
        elseif ($loc === 'both') $out[] = 'coLocBoth';
        else $out[] = 'coLocTop';
        if ($type === 'start') $out[] = 'coStart';
        elseif ($type === 'end') $out[] = 'coEnd';
        else $out[] = 'coFall';
        return $out;
    }
    if ($rule === 'Tabview') {
        if ($type === 'start') {
            $tabs = (isset($opts['tabs']) && is_array($opts['tabs'])) ? $opts['tabs'] : array();
            $out = array('tvStart');
            foreach ($tabs as $tab) {
                if (!is_array($tab)) $tab = array();
                $selected = !array_key_exists('tabId', $tab) || loose_zero($tab['tabId']);
                $out[] = $selected ? 'tvSelected' : 'tvUnselected';
                if (!array_key_exists('title', $tab) || $tab['title'] === null) $out[] = 'tvLabelDefault';
                elseif ($tab['title'] === '') $out[] = 'tvLabelEmpty';
                else $out[] = 'tvLabelText';
            }
            return $out;
        }
        if ($type === 'tabStart') {
            $hidden = array_key_exists('tabId', $opts) && $opts['tabId'] !== null
                && !loose_zero($opts['tabId']);
            return array($hidden ? 'tvPanelHidden' : 'tvPanelShown');
        }
        if ($type === 'tabEnd') return array('tvPanelEnd');
        if ($type === 'end') return array('tvEnd');
        return array('tvFall');
    }
    return array();
}

function reset_contain_counters() {
    if (class_exists('Text_Wiki_Parse_Collapsible', false)
            || class_exists('Text_Wiki_Parse_Collapsible')) {
        Text_Wiki_Parse_Collapsible::$count = 0;
    }
    if (class_exists('Text_Wiki_Parse_Tabview')) {
        $prop = new ReflectionProperty('Text_Wiki_Parse_Tabview', '_counter');
        $prop->setAccessible(true);
        $prop->setValue(null, 0);
    }
}

$mode = $argv[1] ?? 'token';

if ($mode === 'source') {
    $rules = array_filter(array_map('trim', explode(',', $argv[2] ?? '')));
    if (!$rules) {
        fwrite(STDERR, "usage: driver.php source Rule1,Rule2,...\n");
        exit(2);
    }
    while (($line = fgets(STDIN)) !== false) {
        $line = trim($line);
        if ($line === '') continue;
        $case = json_decode($line, true);
        $id = $case['id'];
        $src = str_replace("\r\n", "\n", $case['source']);
        Text_Wiki_Parse_Math::$equationsArray = array();
        reset_contain_counters();
        try {
            $wiki = ref_configure_wiki(new Text_Wiki($rules));
            $wiki->vars['footnotes'] = array();
            $wiki->vars['bibitems'] = array();
            $wiki->vars['bibitemIds'] = array();
            $wiki->vars['page'] = new RefPage('', 0, array());
            $out = $wiki->transform($src, 'Xhtml');
            echo json_encode(wire_encode(array('id' => $id, 'output' => $out)),
                JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
        } catch (Throwable $e) {
            echo json_encode(array(
                'id' => $id,
                'error' => get_class($e) . ': ' . $e->getMessage(),
            )), "\n";
        }
    }
    exit(0);
}

while (($line = fgets(STDIN)) !== false) {
    $line = trim($line);
    if ($line === '') continue;
    $case = json_decode($line, true);
    $id = $case['id'];
    try {
        $rule = $case['rule'];
        $opts = wire_decode(isset($case['opts']) ? $case['opts'] : array());
        $wiki = ref_configure_wiki(new Text_Wiki(array($rule)));
        $wiki->vars['page'] = new RefPage('', 0, array());
        $wiki->loadRenderObj('Xhtml', $rule);
        $key = ucwords(strtolower($rule));
        $raw = $wiki->renderObj[$key]->token($opts);
        $out = ($raw === null) ? '' : $raw;
        echo json_encode(array(
            'id' => $id,
            'output' => wire_encode($out),
            'phpClass' => contain_class($rule, $opts),
            'null' => $raw === null,
        ), JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
    } catch (Throwable $e) {
        echo json_encode(array(
            'id' => $id,
            'error' => get_class($e) . ': ' . $e->getMessage(),
        )), "\n";
    }
}
