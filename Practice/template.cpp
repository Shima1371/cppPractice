#include "all.h"

//テンプレートはテンプレート引数(T)をとる
template <typename T>
//関数(引数の型T 引数n)
T twice(T n)
{
	return n * 2;
}

//void f(T const & x)
//{
//	std::cout << x << "\n"s;
//}

int main()
{
	std::cout << twice(123) << "\n"s;
	std::cout << twice(1.23) << "\n"s;
	//error
	//std::cout << twice("hello") << "\n"s;

	system("pause");
}