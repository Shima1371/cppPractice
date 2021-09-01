#include "all.h"

int* f()
{
    // õ–½‚ÍŠÖ”
    int variable{};

    return &variable;
}

int main()
{
    int* ptr = f();
    // ƒGƒ‰[
    int read = *ptr;
}