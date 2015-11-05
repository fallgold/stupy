--TEST--
Check for printing of string (encaps of class constant, class member)
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
class Acc {
	const p_1 = "ppp1";
	static $ac = "accc";
	public $ns_ac = "ns ccc";
	static function aaa() {return 'a--';}
	static function ns_aaa() {return 'ns ---';}
}
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{? 
	$cn = "Acc"; 
	$obj = new Acc(); 
?}
{ Acc::aaa()}{* parse as innerHtml *}
{Acc::aaa()}
{Acc::$ac}
{Acc::p_1}
{$obj->ns_aaa()}
{* not support at script
{Acc: :aaa()}
{Acc::1p_1}
*}
{$cn::aaa()}
{$cn::p_1}{* not support at string *}
{$cn::$ac}{* not support at string *}
{print_r "abc{Acc::$ac}def" "abc{$cn::aaa()}def" "abc{Acc::p_1}def" "abc{Acc: :p_1}def" "abc{Acc::1p_1}def" "abc{ Acc::p_1}def"}
{print_r "abc{$obj->ns_ac}def" "abc{$obj->ns_aaa()}def"}

TPL
);
--EXPECTF--

{ Acc::aaa()}
a--
accc
ppp1
ns ---

a--
ppp1
accc
Array
(
    [0] => abcacccdef
    [1] => abca--def
    [2] => abcppp1def
    [3] => abc{Acc: :p_1}def
    [4] => abc{Acc::1p_1}def
    [5] => abc{ Acc::p_1}def
)
1
Array
(
    [0] => abcns cccdef
    [1] => abcns ---def
)
1
