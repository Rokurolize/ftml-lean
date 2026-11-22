<?php
// Coverage-tier driver for Code, Math and Mathinline. Does not modify
// the reference. Modes:
//   e2e     JSONL {id,source} -> parse+render under ref_configure_wiki,
//           with an independent class annotation and the Math id/type
//           sequence (the counter is not visible in harness HTML).
//   direct  JSONL {id,kind,arg} -> Mathinline::expandSource on a
//           constructed token table (depth, unknown, cycle).
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
require_once $root . '/text-wiki/Text/Wiki/Parse/Default/Mathinline.php';
require_once $root . '/harness/wiki-config.php';
require_once $root . '/harness/pages.php';

$GLOBALS['REF_PAGES'] = ref_page_map();
$GLOBALS['REF_EXISTING_PAGES'] = array_keys(ref_page_map());

function opt_str($opts, $key) {
    if (!is_array($opts) || !array_key_exists($key, $opts)) return '';
    $v = $opts[$key];
    if (is_string($v)) return $v;
    return '';
}

function type_valid($ty) {
    return preg_match('/^[a-z][a-z0-9]*$/', (string) $ty) === 1;
}

function code_is_empty($wiki, $text) {
    $wiki->loadRenderObj('Xhtml', 'Code');
    $trimmed = $wiki->renderObj['Code']->wikidotTrimCodeBody($text);
    return trim($trimmed) === '';
}

function annotate($src, $wiki) {
    $classes = array();
    $mathIds = array();
    $mathTypes = array();
    $codeTrail = null;
    if (preg_match_all('/\[\[\/code\]\](\s|$)/i', $src, $ms, PREG_SET_ORDER)) {
        $codeTrail = false;
        foreach ($ms as $m) {
            if ($m[1] !== '') $codeTrail = true;
        }
    }
    $openers = array();
    if (preg_match_all('/\[\[math([^\]]*)\]\]/i', $src, $om, PREG_SET_ORDER)) {
        foreach ($om as $m) $openers[] = $m[1];
    }
    $mi = 0;
    $rules = array();
    foreach ($wiki->tokens as $tok) {
        $rule = $tok[0];
        $opts = isset($tok[1]) && is_array($tok[1]) ? $tok[1] : array();
        $rules[] = $rule;
        if ($rule === 'Code') {
            $text = opt_str($opts, 'text');
            $classes[code_is_empty($wiki, $text) ? 'codeEmpty' : 'codePlain'] = true;
            if ($codeTrail === true) $classes['codeTrailWs'] = true;
            elseif ($codeTrail === false) $classes['codeTrailEnd'] = true;
        } elseif ($rule === 'Math') {
            $ty = opt_str($opts, 'type');
            $mathTypes[] = $ty;
            $mathIds[] = isset($opts['id']) ? (int) $opts['id'] : null;
            $opener = isset($openers[$mi]) ? $openers[$mi] : '';
            $mi++;
            if (preg_match('/\btype="([^"]*)"/', $opener, $tm)) {
                $classes[type_valid($tm[1]) ? 'mathTypeValid' : 'mathTypeInvalid'] = true;
            } else {
                $classes['mathTypeAbsent'] = true;
            }
        }
    }
    $hasMi = in_array('Mathinline', $rules, true);
    if ($hasMi) {
        $content = '';
        foreach ($wiki->tokens as $tok) {
            if ($tok[0] === 'Mathinline') {
                $content = opt_str(isset($tok[1]) ? $tok[1] : array(), 'content');
                break;
            }
        }
        $suppress = null;
        foreach ($rules as $rule) {
            if (in_array($rule, array('Freelink', 'Raw', 'Newline', 'Image'), true)) {
                $suppress = $rule;
                break;
            }
        }
        if ($suppress !== null && $content === '') {
            $map = array(
                'Freelink' => 'miSuppressFreelink',
                'Raw' => 'miSuppressRaw',
                'Newline' => 'miSuppressNewline',
                'Image' => 'miSuppressImage',
            );
            $classes[$map[$suppress]] = true;
        } elseif (in_array('Url', $rules, true) || in_array('Email', $rules, true)
            || in_array('Code', $rules, true)) {
            $classes['miSource'] = true;
        } elseif (in_array('Rawold', $rules, true)) {
            $classes['miFallback'] = true;
        } else {
            $classes['miPlain'] = true;
        }
    }
    return array($classes, $mathIds, $mathTypes);
}

function emit($row) {
    echo json_encode($row, JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
}

$mode = $argv[1] ?? 'e2e';

while (($line = fgets(STDIN)) !== false) {
    $line = trim($line);
    if ($line === '') continue;
    $case = json_decode($line, true);
    $id = $case['id'];
    if ($mode === 'direct') {
        $wiki = ref_configure_wiki(new Text_Wiki());
        $wiki->delim = "\xFF";
        $mi = new Text_Wiki_Parse_Mathinline($wiki);
        $kind = $case['kind'];
        $arg = isset($case['arg']) ? $case['arg'] : '';
        if ($kind === 'depth') {
            list($sup, $out) = $mi->expandSource($arg, array(), 65);
            $ok = ($sup === false && $out === $arg);
        } elseif ($kind === 'unknown') {
            $bytes = "\xFF" . $arg . "\xFF";
            list($sup, $out) = $mi->expandSource($bytes, array(), 0);
            $ok = ($sup === false && $out === $bytes);
        } elseif ($kind === 'cycle') {
            $wiki->tokens[1] = array('Url', array('text' => $arg));
            $wiki->tokenSource[1] = "\xFF1\xFF";
            list($sup, $out) = $mi->expandSource("\xFF1\xFF", array(), 0);
            $ok = ($sup === false && $out === "\xFF1\xFF");
        } else {
            emit(array('id' => $id, 'error' => 'bad-kind'));
            continue;
        }
        emit(array('id' => $id, 'kind' => $kind, 'ok' => $ok));
        continue;
    }
    Text_Wiki_Parse_Math::$equationsArray = array();
    $wiki = ref_configure_wiki(new Text_Wiki());
    $wiki->vars['page'] = new RefPage('', 0, array());
    $src = str_replace("\r\n", "\n", $case['source']);
    try {
        $wiki->parse($src);
        $out = $wiki->render('Xhtml');
        list($classes, $mathIds, $mathTypes) = annotate($src, $wiki);
        emit(array(
            'id' => $id,
            'output' => $out,
            'classes' => array_keys($classes),
            'mathIds' => $mathIds,
            'mathTypes' => $mathTypes,
            'mathId' => isset($wiki->vars['math_id']) ? $wiki->vars['math_id'] : null,
        ));
    } catch (Throwable $e) {
        $msg = get_class($e) . ': ' . $e->getMessage();
        $fatal = (strpos($msg, 'Invalid LaTeX expression(s) found.') !== false);
        emit(array(
            'id' => $id,
            'error' => $msg,
            'fatal' => $fatal,
            'classes' => $fatal ? array('mathFatal') : array(),
            'mathId' => isset($wiki->vars['math_id']) ? $wiki->vars['math_id'] : null,
        ));
    }
}
