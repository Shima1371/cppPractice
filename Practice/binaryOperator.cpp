#include "all.h"

struct S { };

int operator +(S, S) { return 0; }
void operator -(S, S) { }

int main()
{
    S s;
    int x = s + s;
    s - s; // 戻り値はない

    std::cout << x;

    system("pause");
}