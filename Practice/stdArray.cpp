#include "all.h"

int main()
{
    // int型の値を10個保持するクラス
    std::array<int, 10> a;

    // 0番目の値を1に
    a.at(0) = 1;

    // イテレーターを取る
    auto i = std::begin(a);
}