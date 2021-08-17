#include "all.h"

int input()
{
	std::cout << ">"s;
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
	int sum = 0;
	int x{};

	while ((x = input()) != 0)
	{
		sum += x;
		std::cout << sum << "\n"s;
	}
		
}