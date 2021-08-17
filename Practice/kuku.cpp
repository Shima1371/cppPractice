#include "all.h"

int main()
{
	int a = 1;
	while (a <= 9)
	{
		int b = 1;
		while (b <= 9)
		{
			std::cout << a*b << "\t"s;
			++b;
		}

		std::cout << "\n"s;
		++a;
	}
	system("pause");
}