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

{options array(array('id'=> 11, 'desc'=>'a'), array('id'=>22, 'desc'=>'b'), array('id'=>33, 'desc'=>'c')) array('id', 'desc', 22)}

{radios 'ddd' array(1=>'a','2'=>'b','3'=>'c') 2}

{radios 'abc' array(array('id'=> 11, 'desc'=>'a'), array('id'=>22, 'desc'=>'b'), array('id'=>33, 'desc'=>'c')) array('id', 'desc', 22)}

{ckboxes 'ddd' array(1=>'a','2'=>'b','3'=>'c') array(2)}

{ckboxes 'abc' array(array('id'=> 11, 'desc'=>'a'), array('id'=>22, 'desc'=>'b'), array('id'=>33, 'desc'=>'c')) array('id', 'desc', array(22))}

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
 	 
  	<option value="11">a</option>
 	<option value="22" selected="selected">b</option>
 	<option value="33">c</option>
 	 
  	<li><input id="id_radio_ddd_1" value="1" type="radio" name="ddd" /><label for="id_radio_ddd_1">a</label></li>
 	<li><input id="id_radio_ddd_2" value="2" type="radio" name="ddd"  checked="checked"/><label for="id_radio_ddd_2">b</label></li>
 	<li><input id="id_radio_ddd_3" value="3" type="radio" name="ddd" /><label for="id_radio_ddd_3">c</label></li>
 	 
  	<li><input id="id_radio_abc_11" value="11" type="radio" name="abc" /><label for="id_radio_abc_11">a</label></li>
 	<li><input id="id_radio_abc_22" value="22" type="radio" name="abc"  checked="checked"/><label for="id_radio_abc_22">b</label></li>
 	<li><input id="id_radio_abc_33" value="33" type="radio" name="abc" /><label for="id_radio_abc_33">c</label></li>
 	 
  	<li><input id="id_ckbox_ddd_1" value="1" type="checkbox" name="ddd[]" /><label for="id_ckbox_ddd_1">a</label></li>
 	<li><input id="id_ckbox_ddd_2" value="2" type="checkbox" name="ddd[]"  checked="checked"/><label for="id_ckbox_ddd_2">b</label></li>
 	<li><input id="id_ckbox_ddd_3" value="3" type="checkbox" name="ddd[]" /><label for="id_ckbox_ddd_3">c</label></li>
 	 
  	<li><input id="id_ckbox_abc_11" value="11" type="checkbox" name="abc[]" /><label for="id_ckbox_abc_11">a</label></li>
 	<li><input id="id_ckbox_abc_22" value="22" type="checkbox" name="abc[]"  checked="checked"/><label for="id_ckbox_abc_22">b</label></li>
 	<li><input id="id_ckbox_abc_33" value="33" type="checkbox" name="abc[]" /><label for="id_ckbox_abc_33">c</label></li>
 	 
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
