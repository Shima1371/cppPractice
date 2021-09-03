#include "all.h"

struct C
{
	int data{};
	void set(int n)
	{
		C* pointer = this;
		this->data = n;
	}
};

int main()
{
	C a;
	C b;

	//a.data‚ğ•ÏX
	a.set(1);
	//b.data‚ğ•ÏX
	b.set(2);
}