
//https://en.cppreference.com/w/cpp/container/list
//https://en.cppreference.com/w/cpp/algorithm/for_each

#include <iostream>
#include <list>
#include <algorithm>
#include <string>

using namespace std;

struct print
{
    int _x;
//print(int x):_x(x){}
    void operator()(const string& _str)
    {
        cout <<_x<< _str << endl;
    }
};

print print1;

int main()
{
    list<string> str_list;
    str_list.push_front("hello");
    str_list.push_front("world");
   
    list<string> another_list;
    another_list.push_back("hello");
    another_list.push_back("world");
   
    for_each(str_list.begin(), str_list.end(), print{1});
    for_each(another_list.begin(), another_list.end(), print(2));
}
