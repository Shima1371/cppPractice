#include "all.h"
#include <bit>

template<typename To, typename From>
To bit_cast(From const& from)
{
	To to;
	memcpy(&to, &from, sizeof(To));
	return to;
}

template<typename T>
void print_raw_address(T ptr)
{
	std::cout << bit_cast<std::uintptr_t>(ptr) << "\n"s;
}

struct Object
{
	int x;
	int y;
	int z;
};

int main()
{
	std::cout << "sizeof(int):" << sizeof(int) << "\n"s;
	std::cout << "sizeof(Object):" << sizeof(Object) << "\n"s;

	print_raw_address(&Object::x);
	print_raw_address(&Object::y);
	print_raw_address(&Object::z);

	system("pause");
}