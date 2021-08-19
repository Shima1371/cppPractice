#include "all.h"

int main()
{
	std::vector<int> v = { 1,2,3,4,5 };
	auto gen_zero = []() {return 0; };
	std::generate(std::begin(v), std::end(v), gen_zero);


	for (auto i = std::begin(v), j= std::end(v); i != j; ++i) 
	{
		std::cout << *i << " "s;
	}
	system("pause");
}