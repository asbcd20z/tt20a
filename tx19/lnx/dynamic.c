#if 0
gcc -g $0 -o $0.ell ||exit -1
gcc -g $0 -o $0.ellr -rdynamic ||exit -1
ls -l $0*
nm -AD $0.ell*
exit 0
#endif

#include <stdio.h>
#include <unistd.h>
 
void foo()
{
printf("hi2\n");
}
 
int main(int argc, char *argv[])
{
foo();
 
    return 0;
}

//gcc -g tracepoint.c -o tracepoint
#if 0
+ nm -AD dynamic.c.ell dynamic.c.ellr
dynamic.c.ell:                 w __gmon_start__
dynamic.c.ell:                 U __libc_start_main
dynamic.c.ell:                 U puts
dynamic.c.ellr:000000000060102c B __bss_start
dynamic.c.ellr:0000000000601028 D __data_start
dynamic.c.ellr:0000000000601028 W data_start
dynamic.c.ellr:000000000060102c D _edata
dynamic.c.ellr:0000000000601030 B _end
dynamic.c.ellr:00000000004007a4 T _fini
dynamic.c.ellr:00000000004006fd T foo
dynamic.c.ellr:                 w __gmon_start__
dynamic.c.ellr:00000000004005b0 T _init
dynamic.c.ellr:00000000004007b0 R _IO_stdin_used
dynamic.c.ellr:00000000004007a0 T __libc_csu_fini
dynamic.c.ellr:0000000000400730 T __libc_csu_init
dynamic.c.ellr:                 U __libc_start_main
dynamic.c.ellr:000000000040070d T main
dynamic.c.ellr:                 U puts
dynamic.c.ellr:0000000000400610 T _start
#endif
