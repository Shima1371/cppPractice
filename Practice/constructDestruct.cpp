#include "all.h"

struct S
{
    int n;
    S(int n)
        : n(n)
    {
        std::cout << "constructed: "s << n << "\n"s;
    }

    ~S()
    {
        std::cout << "destructed: "s << n << "\n"s;
    }
};

int main()
{
    S a(1);
    { S b(2); }
    S c(3);

    system("pause");
}