#if 0
#g++ -g -std=c++11 threadid.cpp
#g++ -g -std=c++11 $0 -c
g++ -g -std=c++11 $0 ||exit -1
ls -l ${0%%.cpp}*  a.*
./a.exe
exit 0;
#endif

#include <iostream>
#include <thread>
#include <chrono>
#include <mutex>
#include <stdio.h>


std::mutex g_display_mutex;

std::thread::id  foo2i(int l_){printf("foo2i: %d\n",l_);return std::this_thread::get_id();}
// https://en.cppreference.com/w/cpp/keyword/thread_local
//thread_local variable is never auto, seems to be "static" by default (if not declared as static/extern explicitly)
//so thread_local variable is initialized only once /per thread
void foo2(){thread_local std::thread::id t=foo2i(__LINE__); printf("foo2-%d\n",t);}
void foo3(){thread_local std::thread::id t; t=foo2i(__LINE__); printf("foo3-%d\n",t);}
void foo4(){/*thread_local*/std::thread::id t=foo2i(__LINE__); printf("foo4-%d\n",t);}
//only static/global, to be initialized only once for all threads
void foo5(){static /*thread_local*/std::thread::id t=foo2i(__LINE__); printf("foo5-%x-%d\n",t,t);}
std::thread::id t=foo2i(__LINE__);

void foo()
{
foo5();
    thread_local std::thread::id this_id = std::this_thread::get_id(); //gcc __thread

    g_display_mutex.lock();
    //std::cout << "thread " << this_id << " sleeping...\n";
    std::cout << std::this_thread::get_id() << "/"; // add thread id
    //printf("%x/\n", std::this_thread::get_id()); //add thread id
    g_display_mutex.unlock();

    std::this_thread::sleep_for(std::chrono::seconds(1));
}

int main()
{
    std::thread t1(foo);
    std::thread t2(foo);

    t1.join();
    t2.join();
printf("\n");
foo2();
foo2();
foo3();
foo3();
foo4();
foo4();
foo5();
foo5();
}
