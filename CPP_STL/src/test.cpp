#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

int main()
{
	const int ia[6] = { 27, 210, 12, 47, 68, 69 };
	std::vector<int, std::allocator<int>> vi{ 23, 45, 34, 26, 55, 100 ,5 };

	std::vector<int, std::allocator<int>>::iterator begin = vi.begin();
	auto second = vi.begin() + 1;

	// 这里输出的是23
	std::cout << *begin << std::endl;

	// 这里输出的是45
	std::cout << *second << std::endl;

	std::cin.get();
}