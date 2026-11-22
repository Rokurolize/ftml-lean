<?php
// Coverage-tier table driver. Does not modify the reference.
//   php driver.php token    JSONL {id,rule,opts} -> {id,output,phpClass}
//   php driver.php source   JSONL {id,source}    -> {id,output,phpClass}
// token() is the reference renderer under ref_configure_wiki.
// source is the full transform, same configuration as harness/batch.php.
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

$ALL = array(
    'tbMiss','tbHit','tbRowContent','tbRowEmpty','tbSpanOne','tbSpanCarry','tbSpanDiscard',
    'tbCellRight','tbCellCenter','tbCellLeft','tbCellHeader','tbCellPlain',
    'tbRTableStart','tbRTableEnd','tbRCaptionStart','tbRCaptionEnd',
    'tbRRowStart','tbRRowEnd','tbRCellStart','tbRCellEnd','tbRFall',
    'tbRTh','tbRTd','tbRColspan','tbRRowspan','tbRAlign','tbRFormat',
    'taNoRow','taStrayRow','taNoCell','taStrayCell','taOk',
    'taCellHeader','taCellPlain','taCellPara','taCellTrim',
    'taNested','taFlat','taEnumQuoted',
    'taAttrBadKey','taAttrBlocked','taAttrUnsafe','taAttrSpanOffCell',
    'taAttrEmptyVal','taAttrSpanZero','taAttrNormDrop','taAttrKeep',
    'taIdEmpty','taIdAlready','taIdLeadWs','taIdPrefix','taAttrRank',
    'taRStart','taRRowStart','taRCellStart','taRCellEnd','taRRowEnd','taREnd',
    'taRFall','taRTh','taRTd','taRAttrs'
);

$SAFE = array_flip(array(
    'accept','alt','autocapitalize','autoplay','background','bgcolor','border',
    'buffered','checked','cite','class','cols','colspan','contenteditable',
    'controls','coords','datetime','decoding','default','dir','dirname',
    'disabled','download','draggable','for','form','frameborder','headers',
    'height','hidden','high','href','hreflang','id','inputmode','ismap',
    'itemprop','kind','label','lang','list','loop','low','max','maxlength',
    'min','minlength','multiple','muted','name','optimum','pattern',
    'placeholder','poster','preload','readonly','required','reversed','role',
    'rows','rowspan','scope','selected','shape','size','sizes','span',
    'spellcheck','src','srclang','start','step','style','tabindex','target',
    'title','translate','type','usemap','value','width','wrap'
));

$FRAMES = array(
    '[[table]][[row]][[cell]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[hcell]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[hcell]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="2"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="2"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="0"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="0"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="abc"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell colspan="abc"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[cell align="center"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell align="center"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
    '[[table]][[row]][[cell foo="1"]][[table"]][[/table]]"]][[/cell]][[/row]][[/table]]',
    '[[table]][[row]][[cell foo="1"]][[table"]][[/table]]"]][[/hcell]][[/row]][[/table]]',
);

function canon_classes($names) {
    global $ALL;
    $have = array_flip($names);
    $out = array();
    foreach ($ALL as $c) {
        if (isset($have[$c])) $out[] = $c;
    }
    return $out;
}

function is_safe_attr($key) {
    global $SAFE;
    return strpos($key, 'data-') === 0 || isset($SAFE[$key]);
}

function normalize_val($value) {
    $stripped = preg_replace('/[\x00-\x1F\x7F]/', '', $value);
    $collapsed = preg_replace('/\s+/u', ' ', $stripped);
    return trim($collapsed);
}

function id_class_of($value) {
    if ($value === '') return 'taIdEmpty';
    if (strpos($value, 'u-') === 0) return 'taIdAlready';
    if (preg_match('/^\s/', $value)) return 'taIdLeadWs';
    return 'taIdPrefix';
}

function attr_class_of($key, $value, $owner) {
    if (preg_match('/^[a-z][a-z0-9-]*$/', $key) !== 1) return 'taAttrBadKey';
    if ($key === 'title' || $key === 'hidden') return 'taAttrBlocked';
    if (!is_safe_attr($key)) return 'taAttrUnsafe';
    if ($owner !== 'cell' && ($key === 'colspan' || $key === 'rowspan')) return 'taAttrSpanOffCell';
    if ($value === '') return 'taAttrEmptyVal';
    if ($owner === 'cell' && ($key === 'colspan' || $key === 'rowspan') && $value === '0') {
        return 'taAttrSpanZero';
    }
    if ($key === 'id') {
        if (strpos($value, 'u-') === 0) $norm = normalize_val($value);
        else {
            $prefix = preg_match('/^\s/', $value) ? 'u- ' : 'u-';
            $norm = normalize_val($prefix . normalize_val($value));
        }
    } else {
        $norm = normalize_val($value);
    }
    if ($norm === '' && in_array($key, array('class','id','role','style','type'), true)) {
        return 'taAttrNormDrop';
    }
    return 'taAttrKeep';
}

function push_attrs(&$out, $head, $owner) {
    if (preg_match_all('/([A-Za-z0-9-]+)="([^"]*)"/', $head, $ms, PREG_SET_ORDER)) {
        foreach ($ms as $m) {
            $kind = attr_class_of($m[1], $m[2], $owner);
            $out[] = $kind;
            if ($kind === 'taAttrKeep' && $m[1] === 'id') $out[] = id_class_of($m[2]);
        }
    }
}

function plain_classes_of($src) {
    $lines = array();
    foreach (explode("\n", $src) as $ln) {
        if (strpos($ln, '||') === 0) $lines[] = $ln;
    }
    if (count($lines) === 0) return array('tbMiss');
    $out = array('tbHit');
    foreach ($lines as $row) {
        $parts = explode('||', $row);
        $inner = array_slice($parts, 1, max(0, count($parts) - 2));
        $span = 1;
        $has = false;
        foreach ($inner as $cell) {
            if ($cell === '') { $span += 1; continue; }
            $has = true;
            if (substr($cell, 0, 2) === '> ') $out[] = 'tbCellRight';
            elseif (substr($cell, 0, 2) === '= ') $out[] = 'tbCellCenter';
            elseif (substr($cell, 0, 2) === '< ') $out[] = 'tbCellLeft';
            elseif (substr($cell, 0, 2) === '~ ') $out[] = 'tbCellHeader';
            else $out[] = 'tbCellPlain';
            $out[] = ($span > 1) ? 'tbSpanCarry' : 'tbSpanOne';
            $span = 1;
        }
        if ($has) $out[] = 'tbRowContent';
        else { $out[] = 'tbRowEmpty'; $out[] = 'tbSpanDiscard'; }
    }
    return $out;
}

function frame_in($src) {
    global $FRAMES;
    foreach ($FRAMES as $fr) {
        if (strpos($src, $fr) !== false) return $fr;
    }
    return null;
}

function enum_classes_of($src) {
    $frame = frame_in($src);
    $out = array('taEnumQuoted', 'taOk', 'taAttrRank', 'taCellTrim');
    if (preg_match('/\[\[(cell|hcell)([^\]]*)\]\]\[\[table"\]\]\[\[\/table\]\]"\]\]\[\[\/(cell|hcell)\]\]/', $frame, $m)) {
        $out[] = ($m[3] === 'hcell') ? 'taCellHeader' : 'taCellPlain';
        push_attrs($out, $m[2], 'cell');
    }
    return $out;
}

function adv_classes_of($src) {
    if (frame_in($src) !== null) return enum_classes_of($src);
    if (substr_count(strtolower($src), '[[table') >= 2) {
        return array('taNested', 'taOk', 'taAttrRank', 'taCellPlain', 'taCellTrim');
    }
    $rowRe = '/\[\[row([^\]]*)\]\](.*?)\[\[\/row\]\]/si';
    $cellRe = '/\[\[(cell|hcell)([^\]]*)\]\](.*?)\[\[\/(cell|hcell)\]\]/si';
    $tableRe = '/\[\[table((?:"[^"]*"|[^\]])*)\]\](.*?)\[\[\/table\]\]/si';
    if (!preg_match($tableRe, $src, $tm)) return plain_classes_of($src);
    $body = $tm[2];
    if (!preg_match_all($rowRe, $body, $rows, PREG_SET_ORDER)) {
        return array('taNoRow', 'taFlat');
    }
    if (trim(preg_replace($rowRe, '', $body)) !== '') return array('taStrayRow', 'taFlat');
    foreach ($rows as $row) {
        if (!preg_match_all($cellRe, $row[2], $cells, PREG_SET_ORDER)) {
            return array('taNoCell', 'taFlat');
        }
        if (trim(preg_replace($cellRe, '', $row[2])) !== '') return array('taStrayCell', 'taFlat');
    }
    $out = array('taOk', 'taFlat', 'taAttrRank');
    push_attrs($out, $tm[1], 'table');
    foreach ($rows as $row) {
        push_attrs($out, $row[1], 'row');
        preg_match_all($cellRe, $row[2], $cells, PREG_SET_ORDER);
        foreach ($cells as $cell) {
            $out[] = ($cell[4] === 'hcell') ? 'taCellHeader' : 'taCellPlain';
            $out[] = (strpos($cell[3], "\n\n") !== false) ? 'taCellPara' : 'taCellTrim';
            push_attrs($out, $cell[2], 'cell');
        }
    }
    return $out;
}

function source_classes_of($src) {
    if (stripos($src, '[[table') !== false || frame_in($src) !== null) {
        return canon_classes(adv_classes_of($src));
    }
    return canon_classes(plain_classes_of($src));
}

function isset_opt($opts, $key) {
    return is_array($opts) && array_key_exists($key, $opts) && $opts[$key] !== null;
}

function as_str($value) {
    if ($value === null) return '';
    if (is_bool($value)) return $value ? '1' : '';
    if (is_array($value)) return '';
    return (string)$value;
}

function nat_opt($opts, $key) {
    if (!is_array($opts) || !array_key_exists($key, $opts) || $opts[$key] === null) return 1;
    $v = $opts[$key];
    if (is_bool($v)) return 1;
    if (is_int($v)) return $v >= 0 ? $v : 1;
    if (is_string($v) && ctype_digit($v)) return intval($v);
    return 1;
}

function table_render_classes($opts) {
    $type = as_str(isset($opts['type']) ? $opts['type'] : '');
    $map = array(
        'table_start' => 'tbRTableStart', 'table_end' => 'tbRTableEnd',
        'caption_start' => 'tbRCaptionStart', 'caption_end' => 'tbRCaptionEnd',
        'row_start' => 'tbRRowStart', 'row_end' => 'tbRRowEnd',
        'cell_start' => 'tbRCellStart', 'cell_end' => 'tbRCellEnd',
    );
    $out = array(isset($map[$type]) ? $map[$type] : 'tbRFall');
    $attr = array_key_exists('attr', $opts) ? as_str($opts['attr']) : '';
    $header = ($attr === 'header');
    if ($type === 'cell_start' || $type === 'cell_end') $out[] = $header ? 'tbRTh' : 'tbRTd';
    if ($type === 'cell_start' && nat_opt($opts, 'span') > 1) $out[] = 'tbRColspan';
    if ($type === 'cell_start' && nat_opt($opts, 'rowspan') > 1) $out[] = 'tbRRowspan';
    if ($type === 'cell_start' && $attr !== '' && !$header) $out[] = 'tbRAlign';
    if (in_array($type, array('table_start','caption_start','row_start','cell_start'), true)
        && isset_opt($opts, 'format')) $out[] = 'tbRFormat';
    return canon_classes($out);
}

function tableadv_render_classes($opts) {
    $type = as_str(isset($opts['type']) ? $opts['type'] : '');
    $map = array(
        'start' => 'taRStart', 'rowStart' => 'taRRowStart', 'cellStart' => 'taRCellStart',
        'cellEnd' => 'taRCellEnd', 'rowEnd' => 'taRRowEnd', 'end' => 'taREnd',
    );
    $out = array(isset($map[$type]) ? $map[$type] : 'taRFall');
    if ($type === 'cellStart' || $type === 'cellEnd') {
        $out[] = empty($opts['header']) ? 'taRTd' : 'taRTh';
    }
    $attrs = (isset($opts['attrs']) && is_array($opts['attrs'])) ? $opts['attrs'] : array();
    if (in_array($type, array('start','rowStart','cellStart'), true) && count($attrs) > 0) {
        $out[] = 'taRAttrs';
    }
    return canon_classes($out);
}

function wire_encode($v) {
    if (is_string($v)) {
        return preg_match('//u', $v) === 1
            ? $v : array('$bytes' => array_values(unpack('C*', $v)));
    }
    return $v;
}

$mode = $argv[1] ?? 'token';
while (($line = fgets(STDIN)) !== false) {
    $line = trim($line);
    if ($line === '') continue;
    $case = json_decode($line, true);
    $id = $case['id'];
    try {
        if ($mode === 'source') {
            $src = str_replace("\r\n", "\n", $case['source']);
            Text_Wiki_Parse_Math::$equationsArray = array();
            $wiki = ref_configure_wiki(new Text_Wiki());
            $wiki->vars['footnotes'] = array();
            $wiki->vars['bibitems'] = array();
            $wiki->vars['bibitemIds'] = array();
            $wiki->vars['page'] = new RefPage('', 0, array());
            $out = $wiki->transform($src, 'Xhtml');
            echo json_encode(array(
                'id' => $id,
                'output' => $out,
                'phpClass' => source_classes_of($case['source']),
            ), JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
        } elseif ($mode === 'direct') {
            echo json_encode(array(
                'id' => $id,
                'output' => '',
                'phpClass' => array(id_class_of('')),
            )), "\n";
        } else {
            $rule = $case['rule'];
            $opts = isset($case['opts']) ? $case['opts'] : array();
            $wiki = ref_configure_wiki(new Text_Wiki(array($rule)));
            $wiki->vars['page'] = new RefPage('', 0, array());
            $wiki->loadRenderObj('Xhtml', $rule);
            $key = ucwords(strtolower($rule));
            $raw = $wiki->renderObj[$key]->token($opts);
            $out = ($raw === null) ? '' : $raw;
            $cls = ($rule === 'Tableadv') ? tableadv_render_classes($opts) : table_render_classes($opts);
            echo json_encode(array(
                'id' => $id,
                'output' => wire_encode($out),
                'phpClass' => $cls,
                'null' => $raw === null,
            ), JSON_UNESCAPED_UNICODE | JSON_UNESCAPED_SLASHES), "\n";
        }
    } catch (Throwable $e) {
        echo json_encode(array(
            'id' => $id,
            'error' => get_class($e) . ': ' . $e->getMessage(),
        )), "\n";
    }
}
