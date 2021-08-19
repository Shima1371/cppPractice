#include "all.h"

// �v�f�����ׂċ������ǂ������ׂ�֐�
auto is_all_of_odd = [](auto first, auto last)
{
    return std::all_of(first, last,
        [](auto value) { return value % 2 == 0; });
};

// �v�f����ł��������ǂ������ׂ�֐�
auto is_any_of_odd = [](auto first, auto last)
{
    return std::any_of(first, last,
        [](auto value) { return value % 2 == 0; });
};

// �v�f�����ׂĊ���ǂ������ׂ�֐�
auto is_none_of_odd = [](auto first, auto last)
{
    return std::none_of(first, last,
        [](auto value) { return value % 2 == 0; });
};

// �v�f�����ׂ�100�ȉ����ǂ������ׂ�֐�
auto is_all_of_le_100 = [](auto first, auto last)
{
    return std::all_of(first, last,
        [](auto value) { return value <= 100; });
};

int main()
{
    // ���vector
    std::vector<int> v = {1,30,2,99,55};
    std::cout << is_all_of_odd(std::begin(v), std::end(v)) << "\n"s;
    std::cout << is_any_of_odd(std::begin(v), std::end(v)) << "\n"s;
    std::cout << is_none_of_odd(std::begin(v), std::end(v)) << "\n"s;
    std::cout << is_all_of_le_100(std::begin(v), std::end(v)) << "\n"s;

    system("pause");

}