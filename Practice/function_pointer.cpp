#include "all.h"

using type = int(*)(int);

int (*ptr) (int) = nullptr;

int f(int x)
{
	std::cout << x;
	return x;
}

int main()
{
	using f_type = int(int);
	using f_pointer = f_type*;

	f_pointer ptr = &f;

	//�֐��ւ̃|�C���^�[���o�R�����֐��Ăяo��
	ptr(123);
}