#include "all.h"
#include <bit>

void* memcpy(void* dest, void const * src, std::size_t n)
{
	//dest��std::byte*�^�ɕϊ�
	auto d = static_cast<std::byte*>(dest);
	//src��std::byte const*�^�ɕϊ�
	auto s = static_cast<std::byte const*>(src);
	//src����n�o�C�g�R�s�[����̂�n�o�C�g��̃A�h���X�𓾂�
	auto last = s + n;
	//n�o�C�g�R�s�[����
	while (s != last)
	{
		*d = *s;
		++d;
		++s;
	}
	//dest��Ԃ�
	return dest;
}

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

int main()
{
	int data[3] = { 0,1,2 };

	int* data0 = &data[0];
	print_raw_address(data0);
	print_raw_address(&data[1]);
	print_raw_address(&data[2]);

	system("pause");
}