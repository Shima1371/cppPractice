#include "all.h"
auto output_all = [](auto first, auto last)
{
    for (auto iter = first; iter != last; ++iter)
    {
        std::cout << *iter;
    }
    
    std::cout << "\n"s;
};


int main()
{
    std::vector<int> a = { 1,2,3,4,5 };

    std::vector<int> b(5);
    std::transform(std::begin(a), std::end(a), std::begin(b),
        [](auto x) { return 2 * x; });
    // b‚Í{2,4,6,8,10}


    std::vector<int> c(5);
    std::transform(std::begin(a), std::end(a), std::begin(c),
        [](auto x) { return x % 3; });
    // c‚Í{1,2,0,1,2}


    std::vector<bool> d(5);
    std::transform(std::begin(a), std::end(a), std::begin(d),
        [](auto x) { return x < 3; });
    // d‚Í{true,true,false,false,false}

    output_all(std::begin(b),std::end(b));
    output_all(std::begin(c), std::end(c));
    output_all(std::begin(d), std::end(d));

    system("pause");
}