#include "all.h"

int main()
{
    std::vector<int> v = { 1,2,3 };

    auto last = std::remove(std::begin(v), std::end(v), 2);

    // "13"
    std::for_each(std::begin(v), last,
        [](auto x) { std::cout << x; });

    std::vector<int> w = { 1,2,2,3,2,2,4 };

    auto last2 = std::remove(std::begin(w), std::end(w), 2);

    // "134"
    std::for_each(std::begin(w), last2,
        [](auto x) { std::cout << x; });

    system("pause");

}