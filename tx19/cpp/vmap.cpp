#if 0
#g++ -fno-elide-constructors -Werror -Wall  -g -std=c++11 $0 -o $0.ell ||exit -1;
g++ -Wall  -g -std=c++11 $0 -o $0.ell ||exit -1;
ls -l $0*
./$0.ell
exit 0;
#endif
#include <iostream>
#include <string>
#include <map>

using namespace std;

struct K{
int x;int y;
};

struct V{
string x;
};

int operator<(const K &a_, const K &b_){
return a_.y<b_.y;//&&a.x<b.x;
}

int main(int ac, char* av[])
{
map<K,string> map={{{1,1},"aa"},{{2,2},"bb"},{{1,2},"ab"}};
cout<<map[{1,2}]<<endl;
cout<<"end.."<<endl;
return 0;
}
