<?php
// Coverage-tier harness driver. Does not modify the reference.
//   php driver.php e2e     JSONL {id,source} -> {id,output,classes}
//   php driver.php token   JSONL {id,rule,opts,footnotes,bibitemIds}
//                          -> {id,output,phpClass}
// token() null (the fallthrough arms) is reported as the empty string,
// which is what Text_Wiki::render does when it concatenates the result.
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

$R36 = array(
    'Prefilter','Delimiter','Code','Form','Raw','Rawold','Modulepre','Module',
    'Module654','Iftags','Comment','Iframe','Date','Math','Concatlines',
    'Freelink','Equationreference','Footnote','Footnoteitem','Footnoteblock',
    'Bibitem','Bibliography','Bibcite'
);

function cov_title_branch($opts) {
    if (!is_array($opts) || !array_key_exists('title', $opts) || $opts['title'] === null) {
        return 'default';
    }
    if ($opts['title'] === '') {
        return 'blank';
    }
    return 'authored';
}

function cov_class($rule, $opts, $wiki) {
    $opts = is_array($opts) ? $opts : array();
    $type = array_key_exists('type', $opts) ? $opts['type'] : null;
    if ($rule === 'Footnote') {
        return 'fnCite';
    }
    if ($rule === 'Footnoteitem') {
        if ($type === 'parabreak') return 'fniParabreak';
        if ($type === 'start') {
            $id = isset($opts['id']) ? (int)$opts['id'] : 0;
            $notes = $wiki->vars['footnotes'] ?? array();
            $body = ($id > 0 && isset($notes[$id - 1])) ? $notes[$id - 1] : '';
            return ($body !== '') ? 'fniStartBody' : 'fniStartEmpty';
        }
        if ($type === 'end') return 'fniEnd';
        return 'fniFallthrough';
    }
    if ($rule === 'Footnoteblock') {
        $notes = $wiki->vars['footnotes'] ?? array();
        if (count($notes) == 0) return 'fnbNoNotes';
        if ($type === 'start') {
            $b = cov_title_branch($opts);
            if ($b === 'default') return 'fnbStartDefault';
            if ($b === 'blank') return 'fnbStartBlank';
            return 'fnbStartTitled';
        }
        if ($type === 'end') return 'fnbEnd';
        return 'fnbFallthrough';
    }
    if ($rule === 'Bibitem') {
        if ($type === 'start') {
            $flag = array_key_exists('empty', $opts) ? $opts['empty'] : null;
            return empty($flag) ? 'bibiStartSpace' : 'bibiStartTight';
        }
        if ($type === 'end') return 'bibiEnd';
        return 'bibiFallthrough';
    }
    if ($rule === 'Bibliography') {
        if ($type === 'nl') return 'bibNl';
        if ($type === 'start') {
            $b = cov_title_branch($opts);
            if ($b === 'default') return 'bibStartDefault';
            if ($b === 'blank') return 'bibStartBlank';
            return 'bibStartTitled';
        }
        if ($type === 'end') return 'bibEnd';
        return 'bibFallthrough';
    }
    if ($rule === 'Bibcite') {
        $label = array_key_exists('label', $opts) ? $opts['label'] : '';
        $ids = $wiki->vars['bibitemIds'] ?? array();
        $id = (is_array($ids) && array_key_exists($label, $ids)) ? $ids[$label] : null;
        return ($id === null) ? 'bibcMissing' : 'bibcResolved';
    }
    return null;
}

$mode = $argv[1] ?? 'e2e';

while (($line = fgets(STDIN)) !== false) {
    $line = trim($line);
    if ($line === '') continue;
    $case = json_decode($line, true);
    $id = $case['id'];
    try {
        if ($mode === 'token') {
            $rule = $case['rule'];
            $wiki = ref_configure_wiki(new Text_Wiki(array($rule)));
            $wiki->vars['footnotes'] = $case['footnotes'] ?? array();
            $wiki->vars['bibitems'] = array();
            $wiki->vars['bibitemIds'] = array();
            foreach (($case['bibitemIds'] ?? array()) as $pair) {
                $wiki->vars['bibitemIds'][$pair[0]] = $pair[1];
            }
            $wiki->loadRenderObj('Xhtml', $rule);
            $key = ucwords(strtolower($rule));
            $opts = $case['opts'] ?? array();
            $raw = $wiki->renderObj[$key]->token($opts);
            $out = ($raw === null) ? '' : $raw;
            echo json_encode(array(
                'id' => $id,
                'output' => $out,
                'phpClass' => cov_class($rule, $opts, $wiki),
                'null' => $raw === null,
            ), JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
        } else {
            $wiki = ref_configure_wiki(new Text_Wiki($GLOBALS['R36']));
            $wiki->vars['page'] = new RefPage('', 0, array());
            $wiki->vars['footnotes'] = array();
            $wiki->vars['bibitems'] = array();
            $wiki->vars['bibitemIds'] = array();
            Text_Wiki_Parse_Math::$equationsArray = array();
            $src = str_replace("\r\n", "\n", $case['source']);
            $wiki->parse($src);
            $classes = array();
            foreach ($wiki->tokens as $tok) {
                $c = cov_class($tok[0], $tok[1], $wiki);
                if ($c !== null) $classes[$c] = true;
            }
            $out = $wiki->render('Xhtml');
            echo json_encode(array(
                'id' => $id,
                'output' => $out,
                'classes' => array_keys($classes),
            ), JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
        }
    } catch (Throwable $e) {
        echo json_encode(array(
            'id' => $id,
            'error' => get_class($e) . ': ' . $e->getMessage(),
        )), "\n";
    }
}
