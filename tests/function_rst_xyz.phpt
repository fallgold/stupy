--TEST--
Check for function rst, xyz
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
function t($p) {
	var_dump($p);
}
function x($p) {
	var_dump($p);
}
class tt {
	public function abc() {
		return "ttabc";
	}
};
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{? $a = "eee"; $url = new tt ?}
{t ->}
{t 000 $aaa $a[0] {$url->abc()}' "\\ok/?}
{t '}
{t $a}

{x ->}
{x 000 $aaa $a[0] {$url->abc()} @attention new line, because the prev } ; dd' "\\ok/?}
{x '}
{x $a}

TPL
);
--EXPECTF--

string(2) "->"

string(20) "000  e ttabc' "\ok/?"

string(1) "'"

string(3) "eee"


string(2) "->"

string(27) "000 $aaa $a[0] {$url->abc()"
 @attention new line, because the prev } ; dd' "\\ok/?}
string(1) "'"

string(2) "$a"

