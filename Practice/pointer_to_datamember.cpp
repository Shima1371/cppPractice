#include "all.h"

struct S 
{
	int x = 123;
};

int main()
{
	int data = 123;
	int* ptr = &data;
	//ptr’P‘Ì‚ÅQÆ‚Å‚«‚é
	int read1 = *ptr;

	S object;
	int S::* mem_ptr = &S::x;
	//object‚Æmem_ptr‚Ì2‚Â‚ÅQÆ‚Å‚«‚é
	int read2 = object.*mem_ptr;
}