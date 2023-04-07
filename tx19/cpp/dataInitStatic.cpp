#if 0
#set -x
#g++ -g -std=c++11  $0 -o $0.ell  -pthread -Wall ||exit -1
g++ -g -std=c++11  $0 -o $0.ell  -Wall ||exit -1
g++ -g -std=c++11  $0 -S
g++ -g -std=c++11  $0 -c
ls -l ${0%%.cpp}*
#ls -l dataInitStatic.*
objdump -S dataInitStatic.o
exit 0;
gdb dataInitStatic.cpp.ell;disass/m fooi;
less +/fooi dataInitStatic.s; 
#endif

// https://en.cppreference.com/w/cpp/keyword/thread_local
//cxa_guard_acquire
//深入理解函数内静态局部变量初始化   https://blog.csdn.net/weixin_30634661/article/details/97550523
//函数中的局部静态变量只能初始化一次 https://blog.csdn.net/weixin_40539125/article/details/81938529
//C++ 怎么让静态变量只初始化一次    https://blog.csdn.net/xiaowall/article/details/7763214
//C/C++中全局变量，静态局部变量，局部变量的初始化问题 https://blog.csdn.net/xiaofei0859/article/details/75503990
///Zero initialization ; static initialization(compile-loading) ; dynamic initialization(runtime:global/function-static-at-firsttime)

#include <stdio.h>
#include <time.h>
#include <unistd.h>
//extern int printf(const char *format, ...);
//extern int time(int*);
int fooi()
{
static int gxs=17;
static int gxs2=time(0); //__ZZ4fooivE4gxs2, and a $__ZGVZ4fooivE4gxs2 flag is used for initialize
                         //only c++. not for c,with error: initializer element is not constant
int x=1;
int x2=time(0);
printf("gss2=%d,x2=%d\n", gxs2,x2);
return x+x2+gxs+gxs2;
}

int gx=7;
int gx2;
int gx3=fooi(); //__Z41__static_initialization_and_destruction_0ii  to be called during startup first

void foo()
{
static int gxx=fooi(); //initialize only once for static, so called once here
printf("foo=%d\n", gxx);
}

int main(int ac, char* av[])
{
///gx3=fooi(); is called outside and before main()  during startup by gcc's _init_
	for (int i=0;i<3;i++){const int t=i+100; printf("%d\n",t);}
sleep(2);
foo();
sleep(2);
foo(); //static gxx had been initialized in first foo(), and not call fooi()
return 0;
}
