<?php
// Coverage-tier INLINE token driver. Does not modify the reference.
//   php driver.php token   JSONL {id,rule,opts} -> {id,output,phpClass,null}
// The reference token() is called directly under ref_configure_wiki, the
// same harness configuration the Lean mirrors were validated against.
// wire_encode is mandatory: json_encode of an invalid-UTF-8 byte string
// returns false, which would silently turn a rendered byte into a mismatch.
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

function otype($opts) { return ob($opts, 'type'); }

function percent_encode_non_ascii($s) {
    return preg_replace_callback('/[^\x00-\x7F]/', function ($m) {
        $bytes = unpack('C*', $m[0]);
        $out = '';
        foreach ($bytes as $byte) {
            $out .= '%' . strtoupper(str_pad(dechex($byte), 2, '0', STR_PAD_LEFT));
        }
        return $out;
    }, $s);
}

function image_ext_suffix($s) {
    return (bool)preg_match('/\.(png|jpg|gif)$/i', $s);
}

function image_href_php($link) {
    if (strpos(substr($link, 1), '://') !== false) return $link;
    if (isset($link[0]) && $link[0] === '#') return $link;
    return '/' . ltrim($link, '/');
}

function norm_color_php($raw) {
    $parts = preg_split('/[ \t]+/', $raw, -1, PREG_SPLIT_NO_EMPTY);
    $collapsed = strtolower(implode(' ', $parts));
    $hex = substr($collapsed, 0, 1) === '#' ? substr($collapsed, 1) : $collapsed;
    if ((strlen($hex) === 3 || strlen($hex) === 6) && ctype_xdigit($hex)) return '#' . $hex;
    if (preg_match('/^[A-Za-z0-9#(),\- ]*$/D', $collapsed)) return $collapsed;
    return null;
}

function inline_class($rule, $opts, $wiki) {
    $opts = is_array($opts) ? $opts : array();
    if ($rule === 'Url') {
        $out = array('urlLink');
        $href = htmlspecialchars(percent_encode_non_ascii(ob($opts, 'href')), ENT_COMPAT, 'UTF-8');
        if ($href === '#') $out[] = 'urlHash';
        if (ob($opts, 'target')) $out[] = 'urlTarget';
        if (otype($opts) === 'footnote') $out[] = 'urlFootnote';
        return $out;
    }
    if ($rule === 'Interwiki') {
        $sites = $wiki->renderObj['Interwiki']->conf['sites'];
        return array(isset($sites[ob($opts, 'site')]) ? 'iwKnown' : 'iwUnknown');
    }
    if ($rule === 'Email') return array('emReversed');
    if ($rule === 'Freelink') {
        $url = ob($opts, 'url');
        $site = ob($opts, 'site');
        $page = ob($opts, 'page');
        if ($url) $out = array('flUrl');
        elseif ($site) $out = array('flSite');
        elseif (in_array($page, $GLOBALS['REF_EXISTING_PAGES'], true)) $out = array('flExists');
        else $out = array('flMissing');
        if (!empty($opts['nonbr'])) $out[] = 'flNonbr';
        if (!empty($opts['target'])) $out[] = 'flTarget';
        return $out;
    }
    if ($rule === 'Image') {
        $src = ob($opts, 'src');
        $attr = (isset($opts['attr']) && is_array($opts['attr'])) ? $opts['attr'] : array();
        if (strpos($src, ':first') === 0) $out = array('imFirst');
        elseif (strpos($src, 'flickr:') !== false) $out = array('imFlickr');
        elseif (strpos($src, '://') !== false) $out = array('imUrlSource');
        else {
            $size = isset($attr['size']) ? (string)$attr['size'] : '';
            if (!in_array($size, array('small', 'medium', 'thumbnail', 'square'), true)) $size = '';
            if ($size === '' && !image_ext_suffix($src)) $size = 'medium';
            $out = array($size === '' ? 'imLocalPlain' : 'imLocalResized');
        }
        if (isset($attr['link']) && $attr['link'] !== null && $attr['link'] !== '') {
            $href = image_href_php((string)$attr['link']);
            if ($href !== '' && $href !== '0') $out[] = 'imLinked';
        }
        $align = ob($opts, 'align');
        $amap = array('f<' => 'imAlignFLeft', 'f>' => 'imAlignFRight',
            '<' => 'imAlignLeft', '>' => 'imAlignRight', '=' => 'imAlignCenter');
        if (isset($amap[$align])) $out[] = $amap[$align];
        return $out;
    }
    if ($rule === 'Span') {
        if (otype($opts) === 'start') {
            $args = isset($opts['args']) ? $opts['args'] : array();
            return array(empty($args) ? 'spStartBare' : 'spStartAttrs');
        }
        if (otype($opts) === 'end') return array('spEnd');
        return array('spFall');
    }
    if ($rule === 'Size') {
        if (otype($opts) === 'start') return array('szStart');
        if (otype($opts) === 'end') return array('szEnd');
        return array('szFall');
    }
    if ($rule === 'Colortext') {
        $color = norm_color_php(ob($opts, 'color'));
        if (otype($opts) === 'start') {
            if ($color === null) return array('ctInvalidStart');
            if ($color === '') return array('ctEmpty');
            $hex = substr($color, 0, 1) === '#' ? substr($color, 1) : $color;
            if ((strlen($hex) === 3 || strlen($hex) === 6) && ctype_xdigit($hex)) return array('ctHex');
            return array('ctNamed');
        }
        if ($color === null) return array('ctInvalidOther');
        if (otype($opts) === 'end') return array('ctEnd');
        return array('ctFall');
    }
    return array();
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
        $wiki->vars['externalLinks'] = null;
        $wiki->loadRenderObj('Xhtml', $rule);
        $key = ucwords(strtolower($rule));
        $raw = $wiki->renderObj[$key]->token($opts);
        $out = ($raw === null) ? '' : $raw;
        echo json_encode(array(
            'id' => $id,
            'output' => wire_encode($out),
            'phpClass' => inline_class($rule, $case['opts'] ?? array(), $wiki),
            'null' => $raw === null,
        ), JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
    } catch (Throwable $e) {
        echo json_encode(array(
            'id' => $id,
            'error' => get_class($e) . ': ' . $e->getMessage(),
        )), "\n";
    }
}
