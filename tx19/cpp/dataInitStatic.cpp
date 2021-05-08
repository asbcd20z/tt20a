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
//extern int printf(const char *format, ...);
//extern int time(int*);
int fooi()
{
static int gxs=17;
static int gxs2=time(0);
int x=1;
int x2=time(0);
printf("%d\n",x);
return x+x2+gxs+gxs2;
}

int gx=7;
int gx2;
int gx3=fooi(); //__Z41__static_initialization_and_destruction_0ii

int main(int ac, char* av[])
{
fooi();
return 0;
}
