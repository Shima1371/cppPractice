#include "all.h"

struct S 
{
	int x = 123;
};

int main()
{
	int data = 123;
	int* ptr = &data;
	//ptr�P�̂ŎQ�Ƃł���
	int read1 = *ptr;

	S object;
	int S::* mem_ptr = &S::x;
	//object��mem_ptr��2�ŎQ�Ƃł���
	int read2 = object.*mem_ptr;
}