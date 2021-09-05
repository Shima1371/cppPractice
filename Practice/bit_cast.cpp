#include "all.h"
#include <bit>

void* memcpy(void* dest, void const* src, std::size_t n)
{
	//srcの先頭からnバイトを
	//destの先頭バイトからのバイト列にコピーし
	//destを返す
}

template<typename To, typename From>
To bit_cast(From const& from)
{
	To to;
	memcpy(&to, &from, sizeof(To));
	return to;
}

int main()
{
	int data{};
	std::cout << bit_cast<std::uintptr_t>(&data);

	system("pause");
}