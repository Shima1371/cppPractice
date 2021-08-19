#include "all.h"

int main()
{
    std::vector<int> v = { 1,2,3,4,5 };

    // 引数を出力する関数
    auto print_value = [](auto value) { std::cout << value; };

    std::for_each(std::begin(v), std::end(v), print_value);

    // 引数を2倍して出力する関数
    auto print_twice = [](auto value) { std::cout << 2 * value; };

    std::for_each(std::begin(v), std::end(v), print_twice);

    // 引数を出力したあとに改行を出力する関数
    auto print_with_newline = [](auto value) { std::cout << value << "\n"s; };

    std::for_each(std::begin(v), std::end(v), print_with_newline);

    system("pause");
}