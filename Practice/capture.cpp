#include "all.h"

int main()
{
    int x = 0;
    auto f = [&] { ++x; };

    f(); // x == 1
    int a = x;
    f(); // x == 2
    int b = x;
    f(); // x == 3
    int c = x;

    std::cout << a << b << c;

    system("pause");
}