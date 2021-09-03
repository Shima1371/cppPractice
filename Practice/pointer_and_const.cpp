#include "all.h"

//int‚Ö‚Ìƒ|ƒCƒ“ƒ^[Œ^
using t1 = int*;
//intŒ^‚Ö‚ÌƒŠƒtƒ@ƒŒƒ“ƒXŒ^
using t2 = int&;
//const‚ÈintŒ^
using t3 = const int;


using T = int;

using const_T_1 = const T;
using const_T_2 = T const;

//const‚ÈT‚Ö‚Ìpointer
using const_T_pointer_1 = const T *;
using const_T_pointer_2 = T const *;

//T‚Ö‚Ìconst‚Èpointer
using T_const_pointer = T * const;

//const‚ÈT‚Ö‚Ìconst‚Èpointer
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