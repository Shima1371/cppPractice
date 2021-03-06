#include "all.h"

// 要素がすべて偶数かどうか調べる関数
auto is_all_of_odd = [](auto first, auto last)
{
    return std::all_of(first, last,
        [](auto value) { return value % 2 == 0; });
};

// 要素が一つでも偶数かどうか調べる関数
auto is_any_of_odd = [](auto first, auto last)
{
    return std::any_of(first, last,
        [](auto value) { return value % 2 == 0; });
};

// 要素がすべて奇数かどうか調べる関数
auto is_none_of_odd = [](auto first, auto last)
{
    return std::none_of(first, last,
        [](auto value) { return value % 2 == 0; });
};

// 要素がすべて100以下かどうか調べる関数
auto is_all_of_le_100 = [](auto first, auto last)
{
    return std::all_of(first, last,
        [](auto value) { return value <= 100; });
};

int main()
{
    // 空のvector
    std::vector<int> v = {1,30,2,99,55};
    std::cout << is_all_of_odd(std::begin(v), std::end(v)) << "\n"s;
    std::cout << is_any_of_odd(std::begin(v), std::end(v)) << "\n"s;
    std::cout << is_none_of_odd(std::begin(v), std::end(v)) << "\n"s;
    std::cout << is_all_of_le_100(std::begin(v), std::end(v)) << "\n"s;

    system("pause");

}