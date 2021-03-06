#include "all.h"

int main() 
{
    // 偶数ならばtrueを返す
    auto is_even = [](auto value)
    {
        return value % 2 == 0;
    };
    // 奇数ならばtrueを返す
    auto is_odd = [](auto value)
    {
        return value % 2 == 1;
    };

    std::vector<int> v = { 1,3,5,7,9,11,13,14,15,16 };

    // 最初の偶数の要素
    auto even = std::find_if(std::begin(v), std::end(v), is_even);
    // 最初の奇数の要素
    auto odd = std::find_if(std::begin(v), std::end(v), is_odd);

    std::cout << *even << "\n"s;
    std::cout << *odd << "\n"s;

    system("pause");
}