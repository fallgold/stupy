--TEST--
Check for StupyTpl object
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
$view = new StupyTpl();
print_r($view);
--EXPECTF--
StupyTpl Object
(
    [_tpl_vars:protected] => Array
        (
        )

    [_tpl_dir:protected] => 
    [_options:protected] => 
)
