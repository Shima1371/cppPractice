#include "all.h"

int main()
{
	//int
	int x = 123;
	//int‚Ö‚Ìpointer
	int* p = &x;
	//int‚Ö‚Ìpointer‚Ö‚Ìpointer
	int** pp = &p;

	//123
	int value1 = **pp;
	std::cout << value1 << "\n"s;

	int y = 456;
	*pp = &y;

	int value2 = **pp;
	std::cout << value2 << "\n"s;

	system("pause");
}