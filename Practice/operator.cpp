#include "all.h"

struct fractional
{
    int num;
    int denom;

    // �R���X�g���N�^�[�Ȃ�
};

fractional operator +(fractional& l, fractional& r)
{
    // ���ꂪ�����Ȃ�
    if (l.denom == r.denom)
        // �P�ɕ��q�𑫂�
        return fractional{ l.num + r.num, l.denom };
    else
        // ��������킹�ĕ��q�𑫂�
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