#include "all.h"

struct fractional
{
    int num;
    int denom;

    // コンストラクターなど
};

fractional operator +(fractional& l, fractional& r)
{
    // 分母が同じなら
    if (l.denom == r.denom)
        // 単に分子を足す
        return fractional{ l.num + r.num, l.denom };
    else
        // 分母を合わせて分子を足す
        return fractional{ l.num * r.denom + r.num * l.denom, l.denom * r.denom };
}

fractional operator -(fractional& l, fractional& r)
{
    if (l.denom == r.denom)
        return fractional{ l.num - r.num, l.denom };
    else
        return fractional{ l.num * r.denom - r.num * l.denom, l.denom * r.denom };
}

int main()
{
    fractional a{ 1,2 };
    fractional b{ 1,3 };

    auto c = a + b;

    system("pause");
}