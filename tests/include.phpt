--TEST--
Check for include
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_opti_spaces', 1);
$view = new StupyTpl();
$view->display("views/main.tpl");
--EXPECTF--
<html>
<head><title>hello world</title></head>
<body>
<html>
<head><title>hello world</title></head>
<body>
<p>hello world!</p>
<div>no news</div>
</body>
</html>
</body>
</html>
