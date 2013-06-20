--TEST--
Check for tags
--INI--
stupy.tpl_tags={PWD}/plugins/stupy_tags.tpl
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_opti_spaces', 1);
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{js "js/abc.js"}

{options array(1,2,3,4)}

{taga "abc" 123 attra=aaa "ccc" attrd=ddd}


TPL
);

StupyTpl::setTag('taga', 'new taga: {foreach $p as $k => $v} newitem-{$k}-{$v} {/foreach}');
echo $view->eval(<<<'TPL'
{taga "abc" 123 attra=aaa "ccc" attrd=ddd}


TPL
);
--EXPECTF--
<script_new language="abc" src="js/abc.js"></script_new>
	<option_new value="0" selected>1</option_new>
	<option_new value="1">2</option_new>
	<option_new value="2">3</option_new>
	<option_new value="3">4</option_new>

taga from php.ini: 	item-0-abc	item-1-123	item-attra-aaa	item-2-ccc	item-attrd-ddd
new taga:  newitem-0-abc  newitem-1-123  newitem-attra-aaa  newitem-2-ccc  newitem-attrd-ddd
