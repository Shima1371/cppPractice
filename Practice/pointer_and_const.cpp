#include "all.h"

//int�ւ̃|�C���^�[�^
using t1 = int*;
//int�^�ւ̃��t�@�����X�^
using t2 = int&;
//const��int�^
using t3 = const int;


using T = int;

using const_T_1 = const T;
using const_T_2 = T const;

//const��T�ւ�pointer
using const_T_pointer_1 = const T *;
using const_T_pointer_2 = T const *;

//T�ւ�const��pointer
using T_const_pointer = T * const;

//const��T�ւ�const��pointer
using const_T_const_pointer_1 = const T * const;
using const_T_const_pointer_2 = T const * const;

int main()
{
	const int data = 123;
	const int* ptr = &data;
	const int data2 = 456;

	ptr = &data2;

	//456
	std::cout << *ptr << "\n"s;

	int data3 = 789;
	int* const const_ptr = &data3;

	*const_ptr = 111;
	//111
	std::cout << *const_ptr << "\n"s;
	system("pause");


}