#include "all.h"

int main()
{
	int a[5] = {1,2,3,4,5};

	std::cout << a[3] << "\n"s;

	a[2] = 0;

	for (int i = 0; i != 5; ++i) 
	{
		std::cout << a[i];
	}
	system("pause");
}