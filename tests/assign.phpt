--TEST--
check for assign
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
$view = new StupyTpl();
StupyTpl::setStaticOption('tpl_opti_spaces', 0);
echo $view->eval(<<<'TPL'
{? 
	$n = 1
}
1. {$n}
2. {$n++}
3. {++$n}
4. {$n = $n + 5}
5. {$n}
6. {?$n++}
7. {?$n = $n + 10}
8. {$n}

TPL
);
--EXPECTF--
1. 1
2. 1
3. 3
4. 8
5. 8
6. 
7. 
8. 19
