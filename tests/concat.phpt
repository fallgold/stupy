--TEST--
Check for concat
--SKIPIF--
<?php if (!extension_loaded("stupy")) print "skip"; ?>
--FILE--
<?php 
$view = new StupyTpl();
echo $view->eval(<<<'TPL'
{? $a = ['x','y','z']; $s = "123" ?}
{"abc"."def"}
{"abc". "def"}
{"abc" . "def"}

{"abc".."def"}
{"abc".. "def"}
{"abc" .. "def"}

{$s .. "def"}
{$s.. "def"}
{$s .. "def"}

{"def"..$s}
{"def".. $s}
{"def" .. $s}

{$s..$s}
{$s.. $s}
{$s .. $s}

{$s.. $a[0]}
{$a[0].. $s}
{$a[0].. $a[0]}
{$a[0].. $a[0].. $s}

{? $s1 = $a[0].. $a[0].. $s }
{$s1 .. $s}

TPL
);
--EXPECTF--

abcdef
abcdef
abcdef

abcdef
abcdef
abcdef

123def
123def
123def

def123
def123
def123

123123
123123
123123

123x
x123
xx
xx123


xx123123
