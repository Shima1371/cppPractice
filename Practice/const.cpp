#include "all.h"

void f(std::vector<int> const & v)
{
    std::cout << v.at(1234);
}

int main()
{
    // 10000�̗v�f������vector
    std::vector<int> v(10000);

    f(v);

    system("pause");
}