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

	//a.data��ύX
	a.set(1);
	//b.data��ύX
	b.set(2);
}