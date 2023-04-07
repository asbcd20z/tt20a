#!/bin/bash
echo $0-$*-$@
echo $#
if [ $1 ]; then echo xx; else echo yy;fi

foo1(){ echo ==; echo $#,$0,x$*y,"x$*y"; echo $#,$0,x$@y,"x$@y";}
foo2(){ foo1 $*; foo1 "$*"; foo1 "$@";}
foo2  aa bb
