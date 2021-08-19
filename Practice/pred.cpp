#include "all.h"

int main() 
{
    // ‹ô”‚È‚ç‚Îtrue‚ğ•Ô‚·
    auto is_even = [](auto value)
    {
        return value % 2 == 0;
    };
    // Šï”‚È‚ç‚Îtrue‚ğ•Ô‚·
    auto is_odd = [](auto value)
    {
        return value % 2 == 1;
    };

    std::vector<int> v = { 1,3,5,7,9,11,13,14,15,16 };

    // Å‰‚Ì‹ô”‚Ì—v‘f
    auto even = std::find_if(std::begin(v), std::end(v), is_even);
    // Å‰‚ÌŠï”‚Ì—v‘f
    auto odd = std::find_if(std::begin(v), std::end(v), is_odd);

    std::cout << *even << "\n"s;
    std::cout << *odd << "\n"s;

    system("pause");
}