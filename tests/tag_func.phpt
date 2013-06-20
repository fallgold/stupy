--TEST--
Check for tag & func
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
StupyTpl::setStaticOption('tpl_opti_spaces', 1);
StupyTpl::setStaticOption('tpl_mod_file_pattern', dirname(__FILE__).'/plugins/stupy_mod_%s.php');
StupyTpl::setTag('taga', '{foreach $p as $k => $v} item-{$k}-{$v} {/foreach}');
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{js "js/abc.js"}

{options array(1,2,3,4)}

{options array(1=>'a','2'=>'b','3'=>'c') 2}

{options array(1=>'a','2'=>'b','3'=>'c')}

{$k = "global-k"} {$v = "global-v"} {$p = 'global-p'}

{taga "abc" 123 attra=aaa "ccc" attrd=ddd}

{$k} {$v} {$p}


{funca "abc" 123 attra=aaa "ccc" attrd=ddd}


TPL
);

StupyTpl::setStaticOption('tpl_tag_symbol', 0);
StupyTpl::setTag('taga', '{foreach $p as $k => $v} newitem-{$k}-{$v} {/foreach}');
echo $view->eval(<<<'TPL'
{$k = "new-global-k"} {$v = "new-global-v"} {$p = 'new-global-p'}

{taga "abc" 123 attra=aaa "ccc" attrd=ddd}

{$k} {$v} {$p}


TPL
);
--EXPECTF--
<script language="javascript" src="js/abc.js"></script>

<option value="0" selected="selected">1</option>
<option value="1">2</option>
<option value="2">3</option>
<option value="3">4</option>

<option value="1">a</option>
<option value="2" selected="selected">b</option>
<option value="3">c</option>

<option value="1">a</option>
<option value="2">b</option>
<option value="3">c</option>

global-k global-v global-p
 item-0-abc  item-1-123  item-attra-aaa  item-2-ccc  item-attrd-ddd 
global-k global-v global-p

array (
  0 => 'abc',
  1 => 123,
  'attra' => 'aaa',
  2 => 'ccc',
  'attrd' => 'ddd',
)
new-global-k new-global-v new-global-p
 newitem-0-abc  newitem-1-123  newitem-attra-aaa  newitem-2-ccc  newitem-attrd-ddd 
attrd ddd new-global-p
