
#include <iostream>
#include <utility>
#include <string>
 
#include <map>
#include <memory>
 
auto print_node = [](const auto &node) {
    std::cout << "[" << node.first << "] = " << node.second << '\n';
};
 
auto print_result = [](auto const &pair) {
    std::cout << (pair.second ? "inserted: " : "ignored:  ");
    print_node(*pair.first);
};
 
int main()
{
    using namespace std::literals;
    std::map<std::string, std::string> m;
 
    print_result( m.try_emplace("a", "a"s) );
    print_result( m.try_emplace("b", "abcd") );
    print_result( m.try_emplace("c", 10, 'c') );
    print_result( m.try_emplace("c", "Won't be inserted") );
    //
    auto it= m.try_emplace(m.begin(), "d", "dd") ;
    std::cout << "[" << it->first << "] = " << it->second << '\n';
    //
    print_result( m.emplace("b", "abcd2-ignored") );
    print_result( m.emplace(std::make_pair("e", "e")) );

    std::cout << std::endl;
    for (const auto &p : m) { print_node(p); }
    std::cout << std::endl;


    using namespace std;
    std::map<string, unique_ptr<string>> m2;
    auto p1=std::make_unique<string>("a");
    auto p2=std::make_unique<string>("b");
    auto q1=std::make_unique<string>("aa");
    m2.try_emplace("a", std::move(p1));
    m2.try_emplace("b", std::move(p2));
    cout<<m2.size()  <<endl;
    m2.try_emplace("a", std::move(q1));
    cout<<m2.size()  <<"," <<(q1?*q1:"none")<<endl;
    m2.emplace("a", std::move(q1)); //not insert, but had beben moved
    cout<<m2.size()  <<"," <<(q1?*q1:"none")<<endl;

}
