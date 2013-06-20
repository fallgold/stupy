--TEST--
Check for modifier static options
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_mod_pattern', "my_mod_%s");
StupyTpl::setStaticOption('tpl_mod_file_pattern', dirname(__FILE__).'/plugins/my_mod_%s.php');
StupyTpl::setStaticOption('tpl_opti_spaces', 0);
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{? 
	$a = 'aaa';
	$b = 'bbb';
}
1. {$a|cat3}
2. {$a|cat3:bbb}
3. {$a|cat3:"bbb"}
4. {$a|cat3:'bbb'}
5. {$a|cat3:$b}
6. {$a|cat3:bbb:ccc}
7. {$a|cat3:bbb:ccc|cat4}
8. {$a|cat3:bbb:ccc|cat4:ooo}
9. {$a|cat3:bbb:ccc|cat4:ooo:ppp}


TPL
);
--EXPECTF--
1. aaa
2. aaabbb
3. aaabbb
4. aaabbb
5. aaabbb
6. aaabbbccc
7. aaabbbccc--
8. aaabbbccc-ooo-
9. aaabbbccc-ooo-ppp
