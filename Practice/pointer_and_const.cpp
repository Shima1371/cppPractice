#include "all.h"

//intへのポインター型
using t1 = int*;
//int型へのリファレンス型
using t2 = int&;
//constなint型
using t3 = const int;


using T = int;

using const_T_1 = const T;
using const_T_2 = T const;

//constなTへのpointer
using const_T_pointer_1 = const T *;
using const_T_pointer_2 = T const *;

//Tへのconstなpointer
using T_const_pointer = T * const;

//constなTへのconstなpointer
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