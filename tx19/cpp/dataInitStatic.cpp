#if 0
#set -x
g++ -g -std=c++11  $0 -o $0.ell ||exit -1
g++ -g -std=c++11  $0 -S
g++ -g -std=c++11  $0 -c
ls -l ${0%%.cpp}*
#ls -l dataInitStatic.*
objdump -S dataInitStatic.o
exit 0;
#endif

// https://en.cppreference.com/w/cpp/keyword/thread_local

#include <stdio.h>
#include <time.h>
#include <unistd.h>
//extern int printf(const char *format, ...);
//extern int time(int*);
int fooi()
{
static int gxs=17;
static int gxs2=time(0);
int x=1;
int x2=time(0);
printf("gss2=%d,x2=%d\n", gxs2,x2);
return x+x2+gxs+gxs2;
}

int gx=7;
int gx2;
int gx3=fooi(); //__Z41__static_initialization_and_destruction_0ii

void foo()
{
static int gxx=fooi(); //initialize only once for static, so called once here
printf("foo=%d\n", gxx);
}

int main(int ac, char* av[])
{
sleep(2);
foo();
sleep(2);
foo();
return 0;
}
