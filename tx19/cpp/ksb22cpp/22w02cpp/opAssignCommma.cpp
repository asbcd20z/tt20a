#include <boost/range/adaptor/transformed.hpp>
#include <boost/range/algorithm/copy.hpp>
#include <boost/assign.hpp>
#include <iterator>
#include <iostream>
#include <vector>

struct double_int
{
    typedef int result_type;
    int operator()(int x) const { return x * 2; }
};


using namespace std;
vector<int>& operator+=(vector<int>& v,int y)
{
    v.push_back(y);return v;
}
vector<int>& operator,(vector<int>& v,int y)
{
    v.push_back(y);return v;
}


int main(int argc, const char* argv[])
{
    //using namespace boost::adaptors;
    //using namespace boost::assign;

    std::vector<int> input;
    input += 1,2,3,4,5,6,7,8,9,10;

    for(auto e:input){cout<<e<<" ";}
    cout<<endl;
    for_each(begin(input),end(input),[](auto & x){cout<<x<<" ";});
    cout<<endl;
    int x=1;
    x+=3,5;
    cout<<x<<"\n";

    boost::copy(
        input | boost::adaptors::transformed(double_int()),
        std::ostream_iterator<int>(std::cout, ","));

    return 0;
}
