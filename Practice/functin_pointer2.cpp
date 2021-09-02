#include "all.h"

int f(int x)
{
	return x;
}
using f_ptr = int(*)(int);

f_ptr g(f_ptr p)
{
	p(0);
	return p;
}

int main()
{
	g(&f);
	std::cout << g(&f);
	system("pause");
}