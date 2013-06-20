--TEST--
Check for if else
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_opti_spaces', 1);
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{?
$arr = [1,2,3];
$n1 = 100;
$n2 = -100;
?}
1. {if 4 lt 3}
4 less than 3
{else}
3 less than 4
{/if}
2. {if 4 gt 3} 4 greater than 3 {else} 3 greater than 4 {/if}

3. {if 4 < 3} 4 < 3 {else} 3 < 4 {/if}

4. {if 4 > 3} 4 > 3 {else} 3 > 4 {/if}

5. {if $n1} {$n1} {/if}

6. {if($n1)} {$n1} {/if}

7. {if $arr} {$n1} {else} {$n2} {/if}

8. {if $arr[10]} {$n1} {else} {$n2} {/if}

9. {if 3 eq count($arr)} 
	{for $i in $arr} 
	item-i{$i}
	{/for}
{else} 
	{for $i in ['a','b','c']} 
	item-{$i}
	{/for}
{/if}

10. {if 3 neq count($arr)} 
	{for $i in $arr} 
	item-{$i}
	{/for}
{else} 
	{for $i in ['a','b','c']} 
	item-{$i}
	{/for}
{/if}

11. {if 3 > 4} 3 > 4 {elseif 4 > 3} 4 > 3 {/if}

12. {if 3 > 4} 3 > 4 {else if 4 > 3} 4 > 3 {/if}

13. {if 3 > 4} 3 > 4 {else if 4 > 5} 4 > 5 {else} other {/if}


TPL
);
--EXPECTF--
1. 3 less than 4
2.  4 greater than 3 
3.  3 < 4 
4.  4 > 3 
5.  100 
6.  100 
7.  100 
8.  -100 
9. 		item-i1		item-i2		item-i3	
10. 		item-a		item-b		item-c	
11.  4 > 3 
12.  4 > 3 
13.  other
