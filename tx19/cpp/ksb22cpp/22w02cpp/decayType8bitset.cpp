
//https://wandbox.org/
//http://coliru.stacked-crooked.com/

#include <iostream>
#include <type_traits>
#include <bitset>
 
template <typename T, typename U>
struct decay_equiv : 
    std::is_same<typename std::decay<T>::type, U>::type 
{};
 
int main()
{
    std::cout << std::boolalpha
				<< decay_equiv<int*, int>::value << '\n'        //**not decay int*
				<< decay_equiv<const int*, int*>::value << '\n' //**not
              << decay_equiv<int, int>::value << '\n'
              << decay_equiv<int&, int>::value << '\n'
              << decay_equiv<int&&, int>::value << '\n'
              << decay_equiv<const int&, int>::value << '\n'
              << decay_equiv<int[2], int*>::value << '\n'
              << decay_equiv<int(int), int(*)(int)>::value << '\n';

//
	unsigned x=0xf0000000;
	constexpr auto bcsBitMapSize = sizeof(std::decay<decltype(x)>::type) * 8;
	auto result = std::bitset<bcsBitMapSize>(x << 3).any();
	auto tmp = std::bitset<bcsBitMapSize>(x << 3);
	using namespace std;
    cout <<"\nbitset:"<<endl;
	cout <<boolalpha <<result <<endl;
	// any/all/none/count
	cout <<boolalpha <<tmp <<tmp.any() <<tmp.all() <<tmp.none() <<tmp.count() <<endl;
	tmp.set(1); // the position of the bit to set (least significant to most significant)
	cout <<boolalpha <<tmp <<tmp.any() <<tmp.all() <<tmp.none() <<tmp.count() <<endl;
	tmp.reset(31);
	cout <<boolalpha <<tmp <<tmp.any() <<tmp.all() <<tmp.none() <<tmp.count() <<endl;
	cout <<tmp.test(1)<<tmp.test(31) <<endl;

	//similar to
	constexpr auto size = sizeof(x) * 8;
	auto result2 = (bool)(x << 3);
	cout <<boolalpha <<result2 <<endl;

}
