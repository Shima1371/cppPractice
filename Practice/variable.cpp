#include "all.h"

int main() 
{
	//�����̕ϐ�
	int answer = 425;
	std::cout << answer << "\n"s;
	//���������_���̕ϐ�
	double pi = 3.14;
	std::cout << pi << "\n"s;
	//������̕ϐ�
	std::string question = "Life, The Universe, and Everything.\n"s;
	std::cout << question;

	auto x(123);
	std::cout << "x="s << x;
	x += 1;
	std::cout << "x="s << x;
}