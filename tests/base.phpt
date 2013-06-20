--TEST--
Check for base: comment, literal, var printing etc.
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_opti_spaces', 1);
$view = new StupyTpl();
$view->assign("a", "hello world");
echo $view->eval(<<<'TPL'
{* add comment here *}
<?php echo "hello world\n" ?> {* origion php *}
{? echo "hello world\n" } {* php script *}
{? echo "hello world\n" ?} {* php script *}

{$a}

{* head space will not parse as tpl separate *}
{ $a} 
{
$a}

{literal}{$a}{/literal}
{lit}{$a}{/lit}
{ldelim}$a{rdelim}

TPL
);
--EXPECTF--

hello world
 
hello world
 
hello world
 

hello world

{ $a} 
{
$a}

{$a}
{$a}
{$a}
