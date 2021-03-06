#include "all.h"

int solve(int n)
{
	if (n <= 1)
		return n;
	else
		return n % 10 + 2 * solve(n / 10);
}

int convert(int n)
{
	if (n > 0)
		return solve(n);
	else
		return -solve(-n);
}

//????
int input()
{
	std::cout << "x>";
	int x{};
	std::cin >> x;
	return x;
}

//?o??
void output(int binary)
{
	std::cout << binary << "\n"s;
}

int main()
{
	while (true)
	{
		auto decimal = input();
		auto binary = convert(decimal);
		output(binary);
	}
}