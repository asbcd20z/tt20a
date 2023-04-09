#if 0
#set -x
#fatal error: bits/libc-header-start.h: No such file or directory #include <bits/libc-header-start.h>
#https://blog.csdn.net/qq_19734597/article/details/102943559
#https://blog.csdn.net/qq_42750240/article/details/120917259   //-m32 for host-x64--target-x32
#gcc -Wall  -m32 -g -gstabs+ $0 -o $0.ell || exit -1
gcc -Wall   -g -gstabs+ $0 -o $0.ell || exit -1
ls -l $0*
#./$0.ell
$0.ell
objdump $0.ell -G -g
exit 0;
#endif

///bistruct.c
#include <stdio.h>
struct Test{
unsigned long KE: 18;
unsigned long KI: 18;
unsigned long KC: 18;
unsigned long KS: 18;
unsigned long KB: 24;
} test;


#define int2str(x) #x
//#define line2str(x) "#" int2str(x)
#define line2str(x) ":" int2str(x)

int
main(int argc, const char *argv[])
{
printf("sizeof(Test) = %d\n", sizeof(test));
printf(__FILE__ line2str(__LINE__)"@%s\n", __FUNCTION__);
printf(__FILE__ ":" int2str(__LINE__)"@%s\n", __FUNCTION__);
return 0;
}
