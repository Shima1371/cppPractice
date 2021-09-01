#include "all.h"

int main()
{
	std::array<int, 5> a = { 1,2,3,4,5 };

	auto iter = a.begin();
	std::cout << *iter << "\n"s;
	++iter;
	std::cout << *iter << "\n"s;
	
	system("pause");
}