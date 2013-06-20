--TEST--
Check for include_extend options (APC 3.1.13 there is a op_array refcount memleak, if use diff version or other module, this test may fail)
--EXTENSIONS--
apc
--SKIPIF--
<?php 
if (!extension_loaded("stupy")) 
	print "skip";
if (!extension_loaded("apc")) {
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

// apc memleak:
ob_start();
phpinfo();
$s = ob_get_clean();
if(!(preg_match("/^Debug Build => yes$/m", $s) && preg_match("/^APC Support => enabled\nVersion => 3.1.13$/m", $s))) {
	echo "[aa]  Script:  'aa/include_options.php'
aa/apc_zend.c(11) :  Freeing aa (4 bytes), script=aa/include_options.php
Last leak repeated 1 times
=== Total 1 memory leaks detected ===";
}
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
[%s]  Script:  '%sinclude_options.php'
%sapc_zend.c(%d) :  Freeing %s (4 bytes), script=%sinclude_options.php
Last leak repeated %d times
=== Total %d memory leaks detected ===
