#include "all.h"

int main()
{
    std::vector<int> source = { 1,2,3,4,5 };
    // �v�f��5��vector
    std::vector<int> destination(5);

    std::copy(std::begin(source), std::end(source), std::begin(destination));

    // destination�̒��g��{1,2,3,4,5}
    auto i = std::begin(destination);
    auto j = std::end(destination);
    for (; i != j; ++i)
    {
        std::cout << *i << " "s;
    }
    system("pause");
}