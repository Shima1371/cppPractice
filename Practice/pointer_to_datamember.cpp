#include "all.h"

struct S 
{
	int x = 123;
};

int main()
{
	int data = 123;
	int* ptr = &data;
	//ptr単体で参照できる
	int read1 = *ptr;

	S object;
	int S::* mem_ptr = &S::x;
	//objectとmem_ptrの2つで参照できる
	int read2 = object.*mem_ptr;
}