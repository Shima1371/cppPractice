#include "all.h"

int main()
{
    std::vector<int> v = { 1,2,1,1,3,3 };

    // 奇数の数: 5
    auto a = std::count_if(std::begin(v), std::end(v),
        [](auto x) { return x % 2 == 1; });

    // 偶数の数: 1
    auto b = std::count_if(std::begin(v), std::end(v),
        [](auto x) { return x % 2 == 0; });

    // 2以上の数: 3
    auto c = std::count_if(std::begin(v), std::end(v),
        [](auto x) { return x >= 2; });

    std::cout << a << "\n"s << b << "\n"s << c << "\n"s;
    system("pause");
}