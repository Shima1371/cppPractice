#include "all.h"

int main()
{
	std::cout << "hello "s+"world\n"s;
	std::cout << "\\naaa\nbbb\nccc\n"s;
	std::cout
		<< "Integer: "s << 42 << "\n"s
		<<"Floating Point: "s << 3.14 << "\n"s;
	std::cout
		<< 3 + 5 << " "s << 3 - 5 << " "s
		<< 3 * 5 << " "s << 3 / 5 << " "s
		<< 3 % 5;
}