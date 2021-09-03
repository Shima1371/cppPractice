#include "all.h"

struct C
{
	int data{};
	int f0() { return 0; };
	int f1(int) { return 1; };
};

int main()
{
	auto data_ptr = &C::data;

	C object;

	//“¯‚¶ˆÓ–¡
	object.*data_ptr = 123;
	std::invoke(data_ptr, object) = 123;

	std::invoke(&C::f0, object);
	std::invoke(&C::f1, object, 1);
}