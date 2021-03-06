#include "all.h"

int input()
{
	int x{};
	std::cin >> x;
	return x;
}

int main()
{
	// ベクトル作成
	std::vector<int> vin;
	int x{};
	while ((x = input()) != 0)
	{
		vin.push_back(x);
	}

	// 並べ替え
	std::size_t size = vin.size();

	// これを繰り返す
	for (std::size_t head = 0; head != size; ++head)
	{
		std::size_t min = head;
		for (std::size_t index = head +1; index != size; ++index)
		{
			if (vin.at(index) < vin.at(min))
			{
				min = index;
			}
		}
		std::cout << vin.at(min) << " "s;

		auto temp = vin.at(head);
		vin.at(head) = vin.at(min);
		vin.at(min) = temp;
	}

	for (std::size_t index = 0, size = vin.size(); index != size; ++index)
	{
		std::cout << vin.at(index) << " "s;
	}

	system("pause");
}
