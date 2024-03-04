#if 0
#set -x
#bash -x ...
g++ -g $0 -o $0.ell ||exit -1  ##-ggdb -gstabs+ -Wall  -print-search-dirs
ls -l $0*
./$0.ell
#gdb gdbx_python.c.ell  --batch -x gdbx2.sh  -ex run //? pause
#gdb //i args, i locals
exit 0;
#endif

#include <stdio.h>

#define log(lev, fmt, ...) do {printf("%s:%d@%s" fmt, __FILE__,__LINE__,__func__, __VA_ARGS__);} while(1)

void foo()
{
	printf("##%s:%d@%s \n", __FILE__, __LINE__, __func__);
}

void foo2(int x_)
{
	int y=2;
	int& x2=x_;
	printf("##%s:%d@%s x=%x,y=%x\n", __FILE__, __LINE__, __func__,  x_, y);
	return;
}

int main(int ac, char* av[])
{
	foo();
	int x=1;
	foo2(x);
	return 0;
}
