--TEST--
Check for all modifier collect in one file
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_mod_pattern', "stupy_mod_%s");
StupyTpl::setStaticOption('tpl_mod_file_pattern', dirname(__FILE__).'/plugins/stupy_mods.php');
StupyTpl::setStaticOption('tpl_opti_spaces', 0);
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{? 
	$a = 'aaa';
	$b = 'bbb';
}
1. {$a|cat5}
2. {$a|cat5:bbb}
3. {$a|cat5:"bbb"}
4. {$a|cat5:'bbb'}
5. {$a|cat5:$b}
6. {$a|cat5:bbb:ccc}
7. {$a|cat5:bbb:ccc|cat6}
8. {$a|cat5:bbb:ccc|cat6:ooo}
9. {$a|cat5:bbb:ccc|cat6:ooo:ppp}


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
