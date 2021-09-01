#include "all.h"

int main()
{
	int object{};

	int* p1 = &object;
	int* p2 = p1;

	int x=0;
	int y=1;

	int& reference = x;
	reference = y;
	std::cout << "reference=" << reference << "\n"s;

	int* pointer = &x;
	pointer = &y;
	std::cout << "pointer=" << pointer << "\n"s;

	system("pause");
}