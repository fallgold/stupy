--TEST--
Check for fixme001: In php5.3, ob_start within render/eval, the output is error
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_opti_spaces', 1);
$view = new StupyTpl();
$view->assign("a", "hello world");
if (PHP_VERSION_ID < 50400) {
	echo $view->eval(<<<'TPL'


content222

content333
{? ob_start()}
content111
{ob_get_clean()}


TPL
);
} else {
	// 5.4 is ok
	echo $view->eval(<<<'TPL'
content111

{? ob_start()}

content222

{ob_get_clean()}
content333


TPL
);
}
/**
EXPECT:
content111
content222
content333
*/
--EXPECTF--
content111


content222

content333


