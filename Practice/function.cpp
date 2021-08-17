#include "all.h"

int main()
{
	auto print = [](auto x)
	{
		std::cout << x << "\n"s;
	};

	auto print_two = [](auto y, auto z)
	{
		std::cout << y << " "s << z << "\n"s;
	};

	auto plus = [](auto a, auto b)
	{
		return a + b;
	};

	print(123);
	print(3.14);
	print("hello");

	print_two(1, 2);
	print_two("Pi is", 3.14);

	std::cout
		<< plus(1, 2) << "\n"s
		<< plus(1.5, 0.5) << "\n"s
		<< plus("123"s, "456"s);

	system("pause");

}