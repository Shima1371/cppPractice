#include "all.h"

struct fractional
{
	int num;
	int denom;

	void set(int num_)
	{
		num = num_;
		denom = 1;
	}
	void set(int num, int denom)
	{
		fractional::num = num;
		fractional::denom = denom;
	}
};

int main()
{
	fractional x;

	x.set(5);
	std::cout << x.num;
	std::cout << x.denom;

	x.set(2, 3);
	std::cout << x.num;
	std::cout << x.denom;

	system("pause");
}