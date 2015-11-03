--TEST--
Check for include_extend options with opcache
--INI--
zend_extension=/usr/local/lib/php/extensions/no-debug-non-zts-20131226/opcache.so
opcache.enable_cli=1
opcache.revalidate_freq=0
--SKIPIF--
<?php 
if (!extension_loaded("stupy")) 
	print "skip";
if (!extension_loaded("Zend OPcache")) {
	print "skip opcode cache module not exist, to test include options, you should config the EXTENSIONS in .phpt file";
}
?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_opti_spaces', 1);
StupyTpl::setStaticOption('tpl_include_extend', 0);
$view = new StupyTpl();
$view->display("views/main_op0.tpl");
$view->display("views/main_op0.tpl");

ini_set('display_errors', 'on');
error_reporting(E_ALL);
StupyTpl::setStaticOption('tpl_include_extend', 1);
$view->display("views/main_op1.tpl");
StupyTpl::setStaticOption('tpl_include_extend', 2);
$view->display("views/main_op2.tpl");
StupyTpl::setStaticOption('tpl_include_extend', 3);
$view->display("views/main_op3.tpl");

file_put_contents(dirname(__FILE__)."/views/header2.tpl", "ccc");
clearstatcache(true, dirname(__FILE__)."/views/header2.tpl");

// do a trick for _stupy_check_extend, avoid 3 seconds's tolerance
StupyTpl::setStaticOption('use_request_time', -1);

StupyTpl::setStaticOption('tpl_include_extend', 1);
$view->display("views/main_op1.tpl");

StupyTpl::setStaticOption('tpl_include_extend', 2);
$view->display("views/main_op2.tpl");

StupyTpl::setStaticOption('tpl_include_extend', 3);
$view->display("views/main_op3.tpl");

// reset
file_put_contents(dirname(__FILE__)."/views/header2.tpl", "aaa");

--EXPECTF--
aaa<p>hello world!</p>
aaa<p>hello world!</p>
aaa<p>hello world!</p>
aaa<p>hello world!</p>
aaa<p>hello world!</p>

Warning: _stupy_check_extend(): sub tpl(%sviews%cheader2.tpl) is modified, and may be it is opcode cached, you should clean the opcode cache, or just touch the top tpl. in %sviews%cmain_op1.tpl on line 2
ccc<p>hello world!</p>
ccc<p>hello world!</p>
aaa<p>hello world!</p>
