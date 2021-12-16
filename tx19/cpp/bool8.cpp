#if 0
#set -x
g++ -Wall  -g -std=c++98 $0 -o $0.ell98 ||exit -1;
ls -l $0*
bash -xc ./$0.ell98
echo -e '\n==='; sleep 3
#
g++ -Wall  -g -std=c++11 $0 -o $0.ell ||exit -1;
ls -l $0*
bash -xc ./$0.ell
exit 0;
#endif
//
#include <iostream>

using namespace std;
int main(int ac, char* av[])
{
//#include <stddef.h> //bool, https://en.cppreference.com/w/c/types
///in c(typedef int _BOOL)sizeof(bool)=1,but sizeof(false/true)=sizeof(int)=4
///bool =1byte,sizeof(false/true)=1 in c++.
bool b=false;
bool b2=true;
char c=66;
std::cout<<7 <<c <<std::endl;
cout<<sizeof(b)<<"==1bool, " <<false<<true <<sizeof(false)<<sizeof(bool) <<std::boolalpha <<b <<b2 <<endl;
std::cout<<66 <<(char)66<<66<<std::endl;

// https://en.cppreference.com/w/cpp/io/manip
// cout<<char always print (in/visible)char. char+0 transform to int implicitly
using namespace std; c=8;
cout<<"c==BS(Backspace)"<<c <<", c+0==8="<<c+0 <<endl;
cout<<showbase<<hex <<"c=="<<c <<", c+0==8="<<c+0 <<endl;  //hex is ineffective for char

return 0;
}
