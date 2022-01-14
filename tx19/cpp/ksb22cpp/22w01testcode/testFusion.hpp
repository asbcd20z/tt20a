//https://www.boost.org/doc/libs/1_78_0/libs/fusion/doc/html/index.html
//https://www.boost.org/doc/libs/1_78_0/libs/mpl/doc/refmanual/components.html

#pragma once
#include <iostream>
#include <boost/fusion/sequence/intrinsic/at_c.hpp>
#include <boost/fusion/include/at_c.hpp>
#include <boost/fusion/adapted/std_tuple.hpp>
#include <boost/fusion/include/std_tuple.hpp>
#include <boost/fusion/sequence/intrinsic/begin.hpp>
#include <boost/fusion/include/begin.hpp>
#include <boost/fusion/adapted/boost_tuple.hpp>
#include <boost/fusion/include/boost_tuple.hpp>
#include <boost/fusion/adapted/struct/adapt_struct.hpp>
#include <boost/fusion/include/adapt_struct.hpp>
#include <boost/mpl/for_each.hpp>
#include <boost/mpl/range_c.hpp>

using namespace std;

namespace demo
{
    struct employee
    {
        std::string name;
        int age;
    };

    struct apple
    {
        std::string color;
        int num;
    };
}

// demo::employee is now a Fusion sequence
BOOST_FUSION_ADAPT_STRUCT(
    demo::employee,
    name,
    age)

void fusionExample()
{
    std::cout << "fusionExample" << std::endl << std::endl;
    std::tuple<int, std::string, float> p(123, "Hola!!!", 456.1f);
    std::cout << *boost::fusion::begin(p) << '\n';
    std::cout << boost::fusion::at_c<1>(p) << std::endl;
    std::cout << boost::fusion::at_c<2>(p) << std::endl;
    std::cout << std::endl;

    boost::tuple<int,std::string> example_tuple(101, "hello");
    std::cout << boost::fusion::at_c<0>(example_tuple) << '\n';
    std::cout << *boost::fusion::next(boost::fusion::begin(example_tuple)) << '\n';
    std::cout << std::endl;

    demo::employee e{"Lucy", 8};
    std::cout << *boost::fusion::begin(e) << '\n';
    std::cout << boost::fusion::at_c<1>(e) << std::endl;
    std::cout << std::endl;

    boost::fusion::traits::is_sequence<demo::employee>::value ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;
    boost::fusion::traits::is_sequence<demo::apple>::value ? std::cout << "true" << std::endl : std::cout << "false" << std::endl;
    std::cout << std::endl;

    const auto sequenceSize = boost::fusion::result_of::size<demo::employee>::type::value;
    using Range = boost::mpl::range_c<int, 0, sequenceSize>;
    boost::mpl::for_each<Range>([&](auto index){using Index = decltype(index); std::cout << boost::fusion::at<Index>(e) << std::endl; });
    std::cout << std::endl;
    std::cout << "****************************************************" << '\n' <<std::endl;
}
