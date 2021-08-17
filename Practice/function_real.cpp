#include "all.h"

int plus(int x, int y)
{
	return x + y;
};

double plus_d(double x, double y)
{
	return x + y;
};

int main()
{
	auto x = plus(1, 2);
	std::cout << x << "\n"s;

	auto y = plus_d(1.5, 2.5);
	std::cout << y;

	system("pause");
};