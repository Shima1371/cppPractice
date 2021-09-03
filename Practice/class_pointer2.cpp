#include "all.h"

struct C
{
	int data_member = 42;
	int* member_function()
	{
	}
};

int main()
{
	C object;
	C* pointer = &object;

	//(*(pointer)).data_member = 0;
	pointer->data_member = 0;
	//0
	std::cout << object.data_member;

	system("pause");
}