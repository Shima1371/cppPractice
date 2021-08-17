#include "all.h"

void hello_n(int n)
{
	int i = 0;
loop:
	if(i<n)
	{
		std::cout << "hello\n"s;
		++i;
		goto loop;
	}
}

int main()
{
	int n{};
	std::cin >> n;
	hello_n(n);
	system("pause");
}
