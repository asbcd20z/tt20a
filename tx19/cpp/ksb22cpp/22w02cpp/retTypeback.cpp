
#include <iostream>
#include <vector>

using namespace std;

template <typename R, typename T, typename U>
R add(T t, U u)
{
	return t+u;
}

/*
//error, t,u not declared
template <typename T, typename U>
decltype(t+u) add2(T t, U u)
{
	return t+u;
}
*/

template <typename T, typename U>
decltype(T()+U()) add21(T t, U u)
{
	return t+u;
}

template <typename T, typename U>
decltype((*(T*)0)+(*(U*)0)) add22(T t, U u)
{
	return t+u;
}

template <typename T, typename U>
auto add3(T t, U u) -> decltype(t+u) 
{
	return t+u;
}


int& foo(int& i);
float foo(float& f);
//float foo(float& f){return f+1;}

template <typename T>
auto func(T& val) ->decltype(foo(val))
{
	return foo(val);
}


int main(int argc, const char* argv[])
{
	int a=1;
	float b=2.1;
	//auto c= add(a,b); //fail, no typename R
	auto c= add<decltype(a+b)>(a,b);
	cout << c <<endl;
	
	auto c21=add21(a,b);
	cout << c21 <<endl;
	
	auto c22=add22(a,b);
	cout << c22 <<endl;
	
	auto c3=add3(a,b);
	cout << c <<endl;
	
	auto x=func(c3);
	cout << x <<endl;
    return 0;
}
