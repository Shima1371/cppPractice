#include "all.h"

int main() 
{
    // �����Ȃ��true��Ԃ�
    auto is_even = [](auto value)
    {
        return value % 2 == 0;
    };
    // ��Ȃ��true��Ԃ�
    auto is_odd = [](auto value)
    {
        return value % 2 == 1;
    };

    std::vector<int> v = { 1,3,5,7,9,11,13,14,15,16 };

    // �ŏ��̋����̗v�f
    auto even = std::find_if(std::begin(v), std::end(v), is_even);
    // �ŏ��̊�̗v�f
    auto odd = std::find_if(std::begin(v), std::end(v), is_odd);

    std::cout << *even << "\n"s;
    std::cout << *odd << "\n"s;

    system("pause");
}