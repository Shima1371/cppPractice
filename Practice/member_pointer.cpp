#include "all.h"

struct Object
{
	int data_member = 1;
	void member_function()
	{
		std::cout << data_member;
	}
};

struct ABC
{
	//int ABC::*
	int x;
	//int ABC::*
	int y;
	//double ABC::*
	double d;
	//int* ABC::*
	int* ptr;
};

struct DEF
{
	//ABC * DEF::*
	ABC* abc;
};

struct C
{
	int data{};
};

int main()
{
	//Object::data_memberメンバーへのポインター
	int Object::* int_ptr = &Object::data_member;
	//Object::member_functionメンバーへのポインター
	void (Object::* func_ptr)() = &Object::member_function;

	//クラスのオブジェクト
	Object object;

	std::cout << object.*int_ptr << "\n"s;

	//objectに対するメンバーポインターを介した参照
	object.*int_ptr = 123;
	//objectに対するメンバーポインターを介した参照
	//123
	(object.*func_ptr)();

	C object_c;
	auto c_ptr = &object_c;
	//(*(c_ptr)).*object = 123;と同義
	c_ptr ->* object_c = 123;
	

	system("pause");

}