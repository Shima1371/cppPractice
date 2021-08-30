#include "all.h";

struct fractional
{
    int num;
    int denom;

    // コンストラクター
    fractional(int num, int denom = 1)
        : num(num), denom(denom)
    { }
};

int main()
{
    fractional a = 1;
    fractional b(1, 2);
    fractional c{ 1, 2 };

    system("pause");
}