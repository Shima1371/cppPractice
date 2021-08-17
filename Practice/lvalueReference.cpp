#include "all.h"

int main()
{
    std::vector<int> v = { 3,2,1,4,5 };

    auto i = std::begin(v);
    auto j = std::end(v);

    for ( ; i!=j; ++i) 
    {
        std::cout << *i;
    }
    system("pause");

    --i;
    //std::cout << i;
    //system("pause")

    std::swap(v.at(0), v.at(2));
    auto l = std::begin(v);
    auto m = std::end(v);

    for ( ; l!=m; ++l)
    {
        std::cout << *l;
    }

    system("pause");
}