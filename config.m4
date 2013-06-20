dnl $Id$
dnl config.m4 for extension stupy

PHP_ARG_ENABLE(stupy, whether to enable stupy support,
Make sure that the comment is aligned:
[  --enable-stupy           Enable stupy support])

if test "$PHP_STUPY" != "no"; then
  PHP_SUBST(STUPY_SHARED_LIBADD)

  AC_MSG_CHECKING([PHP version])

  tmp_version=$PHP_VERSION
  if test -z "$tmp_version"; then
    if test -z "$PHP_CONFIG"; then
      AC_MSG_ERROR([php-config not found])
    fi
    php_version=`$PHP_CONFIG --version 2>/dev/null|head -n 1|sed -e 's#\([0-9]\.[0-9]*\.[0-9]*\)\(.*\)#\1#'`
  else
    php_version=`echo "$tmp_version"|sed -e 's#\([0-9]\.[0-9]*\.[0-9]*\)\(.*\)#\1#'`
  fi

  if test -z "$php_version"; then
    AC_MSG_ERROR([failed to detect PHP version, please report])
  fi

  ac_IFS=$IFS
  IFS="."
  set $php_version
  IFS=$ac_IFS
  yaf_php_version=`expr [$]1 \* 1000000 + [$]2 \* 1000 + [$]3`

  if test "$yaf_php_version" -lt "5003000"; then
    AC_MSG_ERROR([You need at least PHP 5.3.0 to be able to use this version of StupyUtils. PHP $php_version found])
  else
    AC_MSG_RESULT([$php_version, ok])
  fi
  if test "$yaf_php_version" -lt "5004000"; then
	  zend=Zend53
  elif test "$yaf_php_version" -lt "5005000"; then
	  zend=Zend54
  else
	AC_MSG_RESULT([zend engine is too new, it may not work])
	  zend=Zend54
  fi
  PHP_ADD_INCLUDE("$zend")
  PHP_NEW_EXTENSION(stupy, stupy.c $zend/stupy_compile.c tpl.c, $ext_shared)
fi
