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
