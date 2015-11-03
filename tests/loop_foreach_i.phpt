--TEST--
Check for foreach_i
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_opti_spaces', 1);
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{?$a = ['x','y','z']; ?}
{?$b = ['a','b']?}
{?$c = ['ee','ff']?}
{foreach $a as $item}
	{$foreach_i}. 000-{$item}
{/foreach}

{for ($i = 0; $i < count($a); $i++)}
	{$foreach_i}. {$i}. 000-1-{$a[$i]}
{/for}

{for ($item in $a)}
	{$foreach_i}. 111-{$item}
{/for}

{foreach ($a as $item_a)}

	{$foreach_i}. 222-{$item_a}

	{? $ii = $foreach_i ?}
	{foreach ($b as $item_b)}

		{$ii}. {$foreach_i}. 333-{$item_b}

		{foreach $c as $item_c}
			{$foreach_i}. 444-{$item_c}
		{/foreach}

		{foreach ($c as $item_c)}
			{$foreach_i}. 444-{$item_c}
		{/foreach}
	{/foreach}
{/foreach}


TPL
);
--EXPECTF--
	0. 000-x	1. 000-y	2. 000-z
	. 0. 000-1-x	. 1. 000-1-y	. 2. 000-1-z
	. 111-x	. 111-y	. 111-z

	0. 222-x
		
		0. 0. 333-a
					0. 444-ee					1. 444-ff		
					0. 444-ee					1. 444-ff			
		0. 1. 333-b
					0. 444-ee					1. 444-ff		
					0. 444-ee					1. 444-ff			
	1. 222-y
		
		1. 0. 333-a
					0. 444-ee					1. 444-ff		
					0. 444-ee					1. 444-ff			
		1. 1. 333-b
					0. 444-ee					1. 444-ff		
					0. 444-ee					1. 444-ff			
	2. 222-z
		
		2. 0. 333-a
					0. 444-ee					1. 444-ff		
					0. 444-ee					1. 444-ff			
		2. 1. 333-b
					0. 444-ee					1. 444-ff		
					0. 444-ee					1. 444-ff			
