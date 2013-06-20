--TEST--
Check for base printing
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
$view = new StupyTpl();
StupyTpl::setStaticOption('tpl_opti_spaces', 0);
$view->assign("a", "aaaaaaa");
$view->assign("n", 123456);
$view->assign("f", 123456.89);
$view->v = "vvvvv";
$view->assign("arr", array('item1', 'ka' => 'item_aaaa', 'subarr' => array(1, 2, 'k3' => 3)));
echo $view->eval(<<<'TPL'
1. {$a}
2. {$n}
3. {$f}
4. {$v}
5. {$arr}
6. {$arr[0]}
7. {$arr.ka}
8. {$arr["ka"]}
9. {$arr['ka']}
10. {$arr[ka]}
11. {$arr.subarr}
12. {$arr.subarr.k3}
13. {$arr["subarr"].k3}
14. {$arr["subarr"]["k3"]}
15. {$arr["subarr"][0]}
15. {$arr.subarr[0]}
17. >{$arr.subarr[10]}<

TPL
);
--EXPECTF--
1. aaaaaaa
2. 123456
3. 123456.89
4. vvvvv
5. Array
6. item1
7. item_aaaa
8. item_aaaa
9. item_aaaa
10. item_aaaa
11. Array
12. 3
13. 3
14. 3
15. 1
15. 1
17. ><
