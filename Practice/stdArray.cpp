#include "all.h"

int main()
{
    // int�^�̒l��10�ێ�����N���X
    std::array<int, 10> a;

    // 0�Ԗڂ̒l��1��
    a.at(0) = 1;

    // �C�e���[�^�[�����
    auto i = std::begin(a);
}