#include "all.h"

int main()
{
    std::vector<int> a = { 1,2,3,4,5 };
    // a‚Æ“™‚µ‚¢
    std::vector<int> b = { 1,2,3,4,5 };
    // a‚Æ“™‚µ‚­‚È‚¢
    std::vector<int> c = { 1,2,3,4,5,6 };
    // a‚Æ“™‚µ‚­‚È‚¢
    std::vector<int> d = { 1,2,2,4,6 };

    // true
    bool ab = std::equal(
        std::begin(a), std::end(a),
        std::begin(b), std::end(b));

    // false
    bool ac = std::equal(
        std::begin(a), std::end(a),
        std::begin(c), std::end(c));

    // false
    bool ad = std::equal(
        std::begin(a), std::end(a),
        std::begin(d), std::end(d));

    std::cout << ab << "\n"s << ac << "\n"s << ad << "\n"s;
    system("pause");
}