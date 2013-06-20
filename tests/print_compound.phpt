--TEST--
Check for expr printing
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
define("CCC", 'cccccc');
class CA {
	const AA = "const-aa";
	public $m_a = "member-aaa";
	static public $s_b;
	static function s_ca_a () {
		self::$s_b = new CB;
		return "static func a";
	}
}
class CB {
	function cb_a($s) {
		return "CB::cb_a.($s)";
	}
}
function funca() {
	return "funca result";
}
StupyTpl::setStaticOption('tpl_opti_spaces', 0);
$view = new StupyTpl();
$view->assign('obja', new CA());
$view->assign('vara', "funca");
$view->assign('refa', "vara");
echo $view->eval(<<<'TPL'
1. {date("Y-m-d", 1234567890)}
2. {date("Y-m-d", 1234567890);}
3. {CA::s_ca_a()}
4. {CA::AA}
5. {CCC}
6. {$obja->m_a}
7. {CA::$s_b->cb_a($obja->m_a)}
8. {$$refa()}

TPL
);
--EXPECTF--
1. 2009-02-14
2. 2009-02-14
3. static func a
4. const-aa
5. cccccc
6. member-aaa
7. CB::cb_a.(member-aaa)
8. funca result
