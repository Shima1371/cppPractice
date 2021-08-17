#include "all.h"


int at()
{
	std::vector<int> v;

	for (int i = 0; i != 10; ++i)
	{
		v.push_back(i+2);
	}

	// vの中身は{0,1,2,3,4,5,6,7,8,9}

	// 0, 0番目の最初の要素
	std::cout << v.at(0);
	// 4, 4番目の要素
	std::cout << v.at(4);
	// 9, 9番目の最後の要素
	std::cout << v.at(9);

	return 0;
}

int input()
{
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
	std::vector<int> vi;

	std::cout << vi.size();
	vi.push_back(1);
	std::cout << vi.size();
	vi.push_back(2);
	std::cout << vi.size();
	vi.push_back(3);
	std::cout << vi.size();
	system("pause");

	at();
	system("pause");

	std::vector<int> vin;
	int x{};

	while ((x=input()) != 0)
	{
		vin.push_back(x);
	}

	for (std::size_t index = 0; index != vin.size(); ++index)
	{
		std::cout << vin.at(index) << " "s;
	}
	system("pause");
}

