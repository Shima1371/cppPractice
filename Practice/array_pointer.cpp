#include "all.h"

using int5 = int[5];
using double10 = double[10];

using pointer_to_array_type = int(*)[5];

int main()
{
	int a[5] = {1,2,3,4,5};
	pointer_to_array_type ptr = &a;

	int* ptr2 = a;

	std::cout << *a;

	system("pause");
}