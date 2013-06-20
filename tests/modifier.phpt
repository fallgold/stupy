--TEST--
Check for modifier
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_mod_file_pattern', dirname(__FILE__).'/plugins/stupy_mod_%s.php');
StupyTpl::setStaticOption('tpl_opti_spaces', 0);
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{? 
	$a = 'aaa';
	$b = 'bbb';
}
{* inner modifier *}
1. {$c|default:date('Y-m-d',1234567890)}
2. {"1234567890"|df}
3. {"1234567890"|df:'Y-m-d'}
4. {"1234567890"|df:'Y-m-d H:i:s'}
5. {""|df}
6. {""|df:'Y-m-d H:i:s'}
7. {"<div>',@#&.</div>"|e}

{* stardard function *}
8. {"http://aaa.bb.ccc/d?ok&buok"|urlencode}
{?$arr=[1,2,3,4,5]}
9. {$arr|count}

{* user define modifier *}
10. {$a|cat1}
11. {$a|cat1:bbb}
12. {$a|cat1:"bbb"}
13. {$a|cat1:'bbb'}
14. {$a|cat1:$b}
15. {$a|cat1:bbb:ccc}
16. {$a|cat1:bbb:ccc|cat2}
17. {$a|cat1:bbb:ccc|cat2:ooo}
18. {$a|cat1:bbb:ccc|cat2:ooo:ppp}


TPL
);
--EXPECTF--
1. 2009-02-14
2. 2009-02-14 07:31
3. 2009-02-14
4. 2009-02-14 07:31:30
5. %d-%d-%d %d:%d
6. %d-%d-%d %d:%d:%d
7. &lt;div&gt;&#039;,@#&amp;.&lt;/div&gt;


8. http%3A%2F%2Faaa.bb.ccc%2Fd%3Fok%26buok

9. 5


10. aaa
11. aaabbb
12. aaabbb
13. aaabbb
14. aaabbb
15. aaabbbccc
16. aaabbbccc--
17. aaabbbccc-ooo-
18. aaabbbccc-ooo-ppp

