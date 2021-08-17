#include "all.h"

auto output_all = [](auto first, auto last, auto output_iter)
{
	for (auto iter = first; iter != last; ++iter, ++output_iter)
	{
		*output_iter = *iter;
	}
	system("pause");
};

int main()
{
	//o—Í‚³‚ê‚È‚¢
	std::vector<int> source = { 1,2,3,4,5 };
	std::vector<int> destination(5);

	output_all(std::begin(source), std::end(source), std::begin(destination));
	system("pause");
}