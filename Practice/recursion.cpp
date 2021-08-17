#include "all.h"

void hello()
{
	std::cout << "hello\n";
	hello();
}

int input()
{
	std::cout << "x is";
	int x{};
	std::cin >> x;
	return x;
}

void loop_until_zero()
{
	if (input() == 0)
		return;
	else
		loop_until_zero();
}

void until_ten(int x)
{
	if (x > 10)
		return;
	else
	{
		std::cout << x << "\n";
		return until_ten(x + 1);
	}
}

int main()
{
	//loop_until_zero();
	until_ten(1);
	system("pause");
}