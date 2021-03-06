#include "all.h"

int main()
{
    std::vector<int> source = { 1,2,3,4,5 };
    // 要素数5のvector
    std::vector<int> destination(5);

    std::copy(std::begin(source), std::end(source), std::begin(destination));

    // destinationの中身は{1,2,3,4,5}
    auto i = std::begin(destination);
    auto j = std::end(destination);
    for (; i != j; ++i)
    {
        std::cout << *i << " "s;
    }
    system("pause");
}