<?php
// Adjudication scratch: the simple-regex model of live Raw.
class Text_Wiki_Parse_Raw extends Text_Wiki_Parse {
    public $regex = "/(?<!@)@@(.*?)@@/";
    function process($matches) {
        return $this->wiki->addToken($this->rule, array('text' => $matches[1]));
    }
}
