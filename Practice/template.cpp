#include "all.h"

//�e���v���[�g�̓e���v���[�g����(T)���Ƃ�
template <typename T>
//�֐�(�����̌^T ����n)
T twice(T n)
{
	return n * 2;
}

//void f(T const & x)
//{
//	std::cout << x << "\n"s;
//}

int main()
{
	std::cout << twice(123) << "\n"s;
	std::cout << twice(1.23) << "\n"s;
	//error
	//std::cout << twice("hello") << "\n"s;

	system("pause");
}