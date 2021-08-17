#include "all.h"

int main()
{
    std::vector<int> v = { 6,2,3,4,5 };

    auto i = std::begin(v);
    auto j = std::end(v);
    
    // イテレーターの範囲の要素の個数
    std::cout << j - i << "\n"s;

    for (; i!=j; ++i)
    {
        std::cout << *i;
    }
    system("pause");
}