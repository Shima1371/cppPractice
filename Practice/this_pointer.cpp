#include "all.h"

struct C
{
	int data{};
	void set(int n)
	{
		data = n;
	}
};

int main()
{
	C a;
	C b;

	//a.dataを変更
	a.set(1);
	//b.dataを変更
	b.set(2);
}