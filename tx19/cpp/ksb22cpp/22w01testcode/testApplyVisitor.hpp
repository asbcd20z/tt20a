// https://www.boost.org/doc/libs/1_78_0/doc/html/variant.html
// https://blog.csdn.net/pizi0475/article/details/6531616

#pragma once
#include <iostream>
#include <sstream>
#include <string>
#include <boost/variant.hpp>
#include <vector>
#include <algorithm>
#include <complex>

void variantExample1()
{
    std::cout << "variantExample1" << std::endl << std::endl;
    union U {int i; double b;};
    U u;

    u.i = 100;
    std::cout << "u.i = " << u.i << std::endl;
    std::cout << "u.b = " << u.b << std::endl;
    u.b = 200.0;

    std::cout << "u.i = " << u.i << std::endl;
    std::cout << "u.b = " << u.b << std::endl;

    boost::variant<int, double> v;

    v = 100;
    try
    {
        std::cout << "v = " << boost::get<int>(v) << std::endl;
        std::cout << "v = " << boost::get<double>(v) << std::endl;
    }
    catch(const boost::bad_get& e)
    {
        std::cout << e.what() << std::endl;
    }

    v = 200.0;
    try
    {
        std::cout << "v = " << boost::get<double>(v) << std::endl;
        std::cout << "v = " << boost::get<int>(v) << std::endl;
    }
    catch(const boost::bad_get& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << "****************************************************" << '\n' <<std::endl;
}

template <typename T>
void times_two( T& operand )
{
    if ( int* pi = boost::get<int>( &operand ) )
    {
        *pi *= 2;
        std::cout << "variant is int type, times_two result: " << *pi << std::endl;
    }
    else if ( std::string* pstr = boost::get<std::string>( &operand ) )
    {
        *pstr += *pstr;
        std::cout << "variant is string type, times_two result: " << *pstr << std::endl;
    }
}

void variantExample2()
{
    std::cout << "variantExample2" << std::endl << std::endl;
    //boost::variant< int, std::string > v;
    boost::variant< int, std::string, std::complex<double> > v;
    v = 1;
    times_two(v);
    v = "hello";
    times_two(v);
    v = 1 + 2i;
    times_two(v);
    std::cout << "****************************************************" << '\n' <<std::endl;
}

class times_two_visitor
    : public boost::static_visitor<>
{
public:
    void operator()(int & i) const
    {
        i *= 2;
        std::cout << "variant is int type, times_two_visitor result: " << i << std::endl;
    }

    void operator()(std::string & str) const
    {
        str += str;
        std::cout << "variant is string type, times_two_visitor result: " << str << std::endl;
    }
};

class times_two_generic
    : public boost::static_visitor<>
{
public:

    template <typename T>
    void operator()( T & operand ) const
    {
        operand += operand;
        std::cout << operand << std::endl;
    }

};

void variantExample3()
{
    std::cout << "variantExample3" << std::endl << std::endl;
    //boost::variant< int, std::string > v;
    boost::variant< int, std::string, std::complex<double> > v;
    v = 1;
    //boost::apply_visitor(times_two_visitor(), v);
    boost::apply_visitor(times_two_generic(), v);
    v = "hello";
    //boost::apply_visitor(times_two_visitor(), v);
    boost::apply_visitor(times_two_generic(), v);
    v = 1 + 2i;
    //boost::apply_visitor(times_two_visitor(), v);
    boost::apply_visitor(times_two_generic(), v);
    std::cout << "****************************************************" << '\n' <<std::endl;
}

class stream_output_visitor : public boost::static_visitor<void>
{
    std::ostream& os_;
public :
    stream_output_visitor(std::ostream& os) : os_(os) {}
    template <typename T>
    void operator()(T& t) const
    {
        os_ << t << '\n';
    }
};

class lexicographical_visitor : public boost::static_visitor<bool>
{
public:
    template <typename LHS, typename RHS>
    bool operator()(const LHS& lhs, const RHS& rhs) const
    {
        return get_string(lhs) < get_string(rhs);
    }
private:
    template <typename T>
    static std::string get_string(const T& t)
    {
        std::ostringstream s;
        s << t;
        return s.str();
    }
    static const std::string& get_string(const std::string& s)
    {
        return s;
    }
};

void variantExample4()
{
    std::cout << "variantExample" << std::endl << std::endl;
    boost::variant<int, std::string> var1 = "100";
    boost::variant<double> var2 = 99.99;
    std::cout << "var1<var2: " << boost::apply_visitor(lexicographical_visitor(), var1, var2) << '\n' << std::endl;

    typedef std::vector<boost::variant<int, std::string, double> > vec_type;
    vec_type vec;
    vec.push_back("Hello");
    vec.push_back(12);
    vec.push_back(1.12);
    vec.push_back("0");
    stream_output_visitor sv(std::cout);
    std::for_each(vec.begin(), vec.end(), sv);
    std::cout << '\n';
    std::sort(vec.begin(), vec.end());
    std::for_each(vec.begin(), vec.end(), [](auto& item){ std::cout << item << std::endl;});
    lexicographical_visitor lv;
    std::sort(vec.begin(), vec.end(), boost::apply_visitor(lv));
    std::cout << '\n';
    std::for_each(vec.begin(), vec.end(), sv);
    std::cout << "****************************************************" << '\n' <<std::endl;
}
