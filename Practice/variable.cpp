#include "all.h"

int main() 
{
	//整数の変数
	int answer = 425;
	std::cout << answer << "\n"s;
	//浮動小数点数の変数
	double pi = 3.14;
	std::cout << pi << "\n"s;
	//文字列の変数
	std::string question = "Life, The Universe, and Everything.\n"s;
	std::cout << question;

	auto x(123);
	std::cout << "x="s << x;
	x += 1;
	std::cout << "x="s << x;
}