//https://www.boost.org/doc/libs/1_78_0/libs/range/doc/html/index.html
//https://www.boost.org/doc/libs/1_78_0/libs/assign/doc/index.html
#pragma once
#include <boost/range/adaptor/transformed.hpp>
#include <boost/range/algorithm/copy.hpp>
#include <boost/range/algorithm_ext/insert.hpp>
#include <boost/range/algorithm/for_each.hpp>
#include <boost/assign.hpp>
#include <iterator>
#include <iostream>
#include <vector>
#include <algorithm>

struct double_int
{
    int operator()(int x) const { return x * 2; }
};

template <int Multiple>
struct multiple_int
{
    int operator()(int x) const { return x * Multiple; }
};

void transformedExample1()
{
    std::cout << "transformedExample1" << std::endl << std::endl;
    using namespace boost::adaptors;
    using namespace boost::assign;

    std::vector<int> input;
    input += 1,2,3,4,5,6,7,8,9,10;

    boost::copy(
        input | transformed(double_int()),
        std::ostream_iterator<int>(std::cout, ","));
    std::cout << '\n' << std::endl;

    boost::copy(
        transform(input, multiple_int<2>()),
        std::ostream_iterator<int>(std::cout, ","));
    std::cout << '\n' << std::endl;
    std::cout << "****************************************************" << '\n' <<std::endl;
}

void transformedExample2()
{
    std::cout << "transformedExample2" << std::endl << std::endl;

    std::vector<int> input{1,2,3,4,5,6,7,8,9,10};

    std::vector<int> target;
    std::cout << "target capacity: " << target.capacity() << '\n' << std::endl ;

    boost::range::insert(
        target,
        target.end(),
        input | boost::adaptors::transformed(multiple_int<3>() ));
    //auto output = input | boost::adaptors::transformed(multiple_int<3>() );
    //boost::range::for_each(output, [](const auto& item){ std::cout << item << ".";} );
    boost::range::for_each(target, [](const auto& item){ std::cout << item << ",";} );
    std::cout << std::endl;
    std::cout << "target capacity: " << target.capacity() << '\n' << std::endl ;


    boost::range::insert(
        target,
        target.end(),
        input | boost::adaptors::transformed([](const auto& item) {return item*3;} ));
    boost::range::for_each(target, [](const auto& item){ std::cout << item << ",";} );
    std::cout << std::endl;
    std::cout << "target capacity: " << target.capacity() << '\n' << std::endl ;


    std::vector<int> temp;
    std::cout << "temp capacity: " << temp.capacity() << '\n' << std::endl ;
    temp.resize(input.size());
    //std::vector<int> temp(10);
    std::cout << "temp capacity: " << temp.capacity() << '\n' << std::endl ;
    std::transform(input.begin(), input.end(), temp.begin(), multiple_int<4>());
    std::cout << "temp capacity: " << temp.capacity() << '\n' << std::endl ;

    std::vector<int> target2;
    target2.insert(target2.end(), temp.begin(), temp.end());
    std::for_each(target2.begin(), target2.end(), [](const auto& item){ std::cout << item << ",";} );
    std::cout << std::endl;
    std::cout << "target2 capacity: " << target2.capacity() << std::endl << std::endl ;

    target2.insert(target2.end(), temp.begin(), temp.end());
    std::for_each(target2.begin(), target2.end(), [](const auto& item){ std::cout << item << ",";} );
    std::cout << std::endl;
    std::cout << "target2 capacity: " << target2.capacity() << std::endl << std::endl ;

    target2.insert(target2.end(), temp.begin(), temp.end());
    std::for_each(target2.begin(), target2.end(), [](const auto& item){ std::cout << item << ",";} );
    std::cout << std::endl;
    std::cout << "target2 capacity: " << target2.capacity() << std::endl << std::endl ;

    std::cout << "****************************************************" << '\n' <<std::endl;
}
