<?php
// Coverage-tier serving-render token driver. Does not modify the reference.
//   php driver.php token   JSONL {id,rule,opts} -> {id,output|error,phpClass}
// The reference token() is called directly under ref_configure_wiki.
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

function ob($opts, $key) {
    if (!is_array($opts) || !array_key_exists($key, $opts)) return '';
    $v = $opts[$key];
    if ($v === null) return '';
    if (is_bool($v)) return $v ? '1' : '';
    if (is_array($v)) return '';
    return (string)$v;
}

function truthy_s($s) { return !($s === '' || $s === '0'); }

function from1($pat, $s) {
    $i = strpos($s, $pat);
    return $i !== false && $i >= 1;
}

function ga_attrs($text) {
    $tmp = explode('="', trim($text));
    $attrs = array();
    $key = null;
    foreach ($tmp as $i => $val) {
        if ($i == 0) { $key = trim($val); continue; }
        $pos = strrpos($val, '"');
        if ($pos === false) {
            $attrs[$key] = '';
            $key = trim(substr($val, 1));
        } else {
            $attrs[$key] = stripslashes(substr($val, 0, $pos));
            $key = trim(substr($val, $pos + 1));
        }
    }
    return $attrs;
}

function ga_link($raw) {
    $star = isset($raw[0]) && $raw[0] === '*';
    $body = $star ? substr($raw, 1) : $raw;
    return array(from1('://', $body) ? 'url' : 'page', $star);
}

function ga_row($line) {
    if (strpos($line, ': ') !== 0) return null;
    $body = trim(substr($line, 2));
    $pos = strpos($body, ' ');
    if ($pos === false) { $src0 = $body; $attr = array(); }
    else { $src0 = substr($body, 0, $pos); $attr = ga_attrs(substr($body, $pos + 1)); }
    $star = isset($src0[0]) && $src0[0] === '*';
    $src = $star ? substr($src0, 1) : $src0;
    $alt = array_key_exists('alt', $attr);
    if (strpos($src, 'flickr:') !== false) {
        return array('kind' => 'flickr', 'star' => $star, 'alt' => $alt, 'link' => 'none', 'linkStar' => false);
    }
    if (strpos($src, '://') === false) {
        $kind = strpos($src, '/') !== false ? 'localSlashed' : 'localPlain';
        if (array_key_exists('link', $attr)) {
            list($lk, $ls) = ga_link($attr['link']);
        } else { $lk = 'none'; $ls = false; }
        return array('kind' => $kind, 'star' => $star, 'alt' => $alt, 'link' => $lk, 'linkStar' => $ls);
    }
    return array('kind' => 'external', 'star' => $star, 'alt' => $alt, 'link' => 'url', 'linkStar' => false);
}

function ga_mods($row) {
    if ($row['kind'] === 'flickr') return array('gaFlickr');
    $kind = array('external' => 'gaExternal', 'localSlashed' => 'gaLocalSlashed', 'localPlain' => 'gaLocalPlain');
    $out = array($kind[$row['kind']]);
    if ($row['star']) $out[] = 'gaStarSrc';
    if ($row['alt']) $out[] = 'gaAlt';
    if ($row['kind'] === 'external') $out[] = 'gaLinkUrl';
    elseif ($row['link'] === 'url') { $out[] = 'gaLinkUrl'; if ($row['linkStar']) $out[] = 'gaLinkStar'; }
    elseif ($row['link'] === 'page') { $out[] = 'gaLinkPage'; if ($row['linkStar']) $out[] = 'gaLinkStar'; }
    return $out;
}

function gallery_class($opts) {
    $sources = ob($opts, 'sources');
    if (!truthy_s($sources)) return array('gaPageMiss');
    $rows = array();
    foreach (explode("\n", $sources) as $line) {
        $r = ga_row($line);
        if ($r) $rows[] = $r;
    }
    foreach ($rows as $r) if ($r['kind'] === 'flickr') return array('gaFlickr');
    if (count($rows) === 0) return array('gaNoItem');
    $sizes = array(
        'small' => 'gaSizeSmall', 'medium' => 'gaSizeMedium', 'thumbnail' => 'gaSizeThumbnail',
        'square' => 'gaSizeSquare', 'original' => 'gaSizeOriginal');
    $sz = ob($opts, 'size');
    $out = array(isset($sizes[$sz]) ? $sizes[$sz] : 'gaSizeDefault');
    foreach ($rows as $r) foreach (ga_mods($r) as $c) $out[] = $c;
    return $out;
}

function button_class($opts) {
    $map = array(
        'edit' => 'btEdit', 'edit-append' => 'btEditAppend', 'edit-sections' => 'btEditSections',
        'history' => 'btHistory', 'print' => 'btPrint', 'files' => 'btFiles', 'tags' => 'btTags',
        'source' => 'btSource', 'talk' => 'btTalk', 'backlinks' => 'btBacklinks',
        'rename' => 'btRename', 'delete' => 'btDelete', 'parent' => 'btParent',
        'edit-meta' => 'btEditMeta', 'watchers' => 'btWatchers', 'set-tags' => 'btSetTags');
    $ty = strtolower(ob($opts, 'type'));
    $text = ob($opts, 'text');
    if (!isset($map[$ty])) return array('btInvalid');
    if ($ty === 'set-tags' && !truthy_s($text)) return array('btSetTagsEmpty');
    $out = array($map[$ty]);
    if (truthy_s(ob($opts, 'style'))) $out[] = 'btStyle';
    if (truthy_s(ob($opts, 'class'))) $out[] = 'btClassCustom';
    if (truthy_s($text)) $out[] = 'btTextCustom';
    return $out;
}

function embed_class($content, $patterns) {
    $content = trim($content);
    $hit = false;
    foreach ($patterns as $pattern) {
        if (@preg_match($pattern, $content)) { $hit = true; break; }
    }
    if (!$hit) return array('emNoMatch');
    $stripped = preg_replace('/language="JavaScript[^"]*"/i', '', $content);
    $lang = $stripped !== $content;
    if (preg_match(';<[^>]*\s*on[a-z]+\s*=[^>]+>;si', $stripped)) return array('emEvent');
    if (preg_match("/(?<![a-zA-Z0-9_-])src\s*=\s*([\"'])([^\"']*)\\1/i", $stripped, $sm)) {
        $scheme = strtolower(trim($sm[2]));
        if (strpos($scheme, 'javascript:') === 0) return array('emSrcJavascript');
        if (strpos($scheme, 'vbscript:') === 0) return array('emSrcVbscript');
    }
    if (preg_match_all('/(?<![a-zA-Z0-9_-])([a-zA-Z0-9_-]+)\s*=\s*"([^"]*)"/i', $stripped, $am, PREG_SET_ORDER)) {
        foreach ($am as $attr) {
            if (strtolower($attr[1]) === 'src') continue;
            $lv = strtolower($attr[2]);
            if (strpos($lv, 'javascript:') !== false) return array('emAttrJavascript');
            if (strpos($lv, 'vbscript:') !== false) return array('emAttrVbscript');
        }
    }
    $out = array('emPass');
    if ($lang) $out[] = 'emLangStrip';
    return $out;
}

function serve_class($rule, $opts, $patterns) {
    if ($rule === 'Gallery') return gallery_class($opts);
    if ($rule === 'User') return array('usNotFound');
    if ($rule === 'Button') return button_class($opts);
    if ($rule === 'Embed') return embed_class(ob($opts, 'content'), $patterns);
    return array();
}

$embedPatterns = null;
function embed_patterns() {
    global $embedPatterns;
    if ($embedPatterns !== null) return $embedPatterns;
    $wiki = ref_configure_wiki(new Text_Wiki(array('Embed')));
    $wiki->loadRenderObj('Xhtml', 'Embed');
    $obj = $wiki->renderObj['Embed'];
    $embedPatterns = isset($obj->_patterns) ? $obj->_patterns : array();
    return $embedPatterns;
}

while (($line = fgets(STDIN)) !== false) {
    $line = trim($line);
    if ($line === '') continue;
    $case = json_decode($line, true);
    $id = $case['id'];
    $rule = $case['rule'];
    $opts = wire_decode(isset($case['opts']) ? $case['opts'] : array());
    $rawOpts = isset($case['opts']) ? $case['opts'] : array();
    $patterns = $rule === 'Embed' ? embed_patterns() : array();
    $phpClass = serve_class($rule, is_array($rawOpts) ? $rawOpts : array(), $patterns);
    try {
        $wiki = ref_configure_wiki(new Text_Wiki(array($rule)));
        $wiki->vars['page'] = new RefPage('', 0, array());
        $wiki->vars['externalLinks'] = null;
        $wiki->loadRenderObj('Xhtml', $rule);
        $key = ucwords(strtolower($rule));
        $raw = $wiki->renderObj[$key]->token($opts);
        $out = ($raw === null) ? '' : $raw;
        echo json_encode(array(
            'id' => $id,
            'output' => wire_encode($out),
            'phpClass' => $phpClass,
            'null' => $raw === null,
        ), JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
    } catch (Throwable $e) {
        echo json_encode(array(
            'id' => $id,
            'error' => get_class($e) . ': ' . $e->getMessage(),
            'phpClass' => $phpClass,
        ), JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
    }
}
