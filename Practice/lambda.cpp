#include "all.h"

void f(std::string x)
{
    std::cout << x;
}

int main()
{
    f("hello"s);
    [](auto x) -> int{ return x;}(2);

    system("pause");
}