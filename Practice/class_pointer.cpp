#include "all.h"

struct Pointer
{
	int data = 42;
	int* data_member = &data;
	int* member_function()
	{
		return &data;
	}
};

int main()
{
	Pointer pointer;

	*pointer.data_member = 0;
	//0
	std::cout << pointer.data;
	*pointer.member_function();

	system("pause");
}