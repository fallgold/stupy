--- js ---
<script_new language="abc" src="{$p[0]}"></script_new>

--- options ---
{foreach $p[0] as $k => $v}
	<option_new value="{$k}"{if $p[1] == $k} selected{/if}>{$v}</option_new>
{/foreach}

--- taga ---
taga from php.ini: {foreach $p as $k => $v}
	item-{$k}-{$v}
{/foreach}

