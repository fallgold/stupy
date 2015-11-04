#!/bin/bash - 
#
#  +----------------------------------------------------------------------+
#  | Stupy                                                                |
#  +----------------------------------------------------------------------+
#  | This source file is subject to version 3.01 of the PHP license,      |
#  | that is bundled with this package in the file LICENSE, and is        |
#  | available through the world-wide-web at the following url:           |
#  | http://www.php.net/license/3_01.txt                                  |
#  | If you did not receive a copy of the PHP license and are unable to   |
#  | obtain it through the world-wide-web, please send a note to          |
#  | license@php.net so we can mail you a copy immediately.               |
#  +----------------------------------------------------------------------+
#  | Author: weils <fallgold@gmail.com>                                   |
#  +----------------------------------------------------------------------+
#



set -e

if [ -z "$1" ]; then
	zend="Zend53"
else
	zend="$1"
	if [ "${1:0:4}" != "Zend" ]; then
		zend="Zend$zend"
	fi
fi
if [ ! -d $zend ]; then
	echo "Zend dir not found ($zend)"
	exit 1
fi

echo "gen $zend ..."

re2c --case-inverted -cbdFt $zend/zend_language_scanner_defs.h -o $zend/zend_language_scanner.c $zend/zend_language_scanner.l
yacc -p zend --verbose -t -d $zend/zend_language_parser.y -o $zend/zend_language_parser.c

