--TEST--
Check for loop: for in, for, foreach
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
function aaaaa() {
	return array(1,2);
}
StupyTpl::setStaticOption('tpl_opti_spaces', 1);
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{* for in *}
{for ($i in [1,2,3])}
item-{$i}
{/for}

{for ($k=>$v in [1,2,3])}
item-{$k}-{$v}
{/for}

{* for in without brackets *}
{for $i in [1,2,3]}
item-{$i}
{/for}

{for $k=>$v in [1,2,3]}
item-{$k}-{$v}
{/for}

{* for (must brackets) *}
{for ($i = 0; $i < 3; $i++)}
item-{$i}
{/for}

{* foreach *}
{foreach ([1,2,3] as $k=>$item)}
item-{$k}-{$item}
{/foreach}

{foreach ([1,2,3] as $item)}
item-{$item}
{/foreach}

{* foreach without brackets*}
{foreach [1,2,3] as $k=>$item}
item-{$k}-{$item}
{/foreach}

{foreach [1,2,3] as $item}
item-{$item}
{/foreach}

{* for else *}
{for $i in []}
item-{$i}
{else}
empty
{/for}

{for $i in null}
item-{$i}
{else}
empty
{/for}

{for $i in false}
item-{$i}
{else}
empty
{/for}

{for $i in ''}
item-{$i}
{else}
empty
{/for}

{* foreach else *}
{foreach [] as $item}
item-{$item}
{else}
empty
{/foreach}

{* more test *}
{?  $a = [1,2, [33,44]]; }
{for $item in $a[2]}aaa
{else}empty
{/for}
{for $item in aaaaa()}ddd
{else}empty
{/for}


TPL
);
--EXPECTF--
item-1item-2item-3
item-0-1item-1-2item-2-3

item-1item-2item-3
item-0-1item-1-2item-2-3

item-0item-1item-2

item-0-1item-1-2item-2-3
item-1item-2item-3

item-0-1item-1-2item-2-3
item-1item-2item-3

empty

empty

empty

empty


empty


aaa
aaa
ddd
ddd

