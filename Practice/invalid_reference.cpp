#include "all.h"

int* f()
{
    // �����͊֐�
    int variable{};

    return &variable;
}

int main()
{
    int* ptr = f();
    // �G���[
    int read = *ptr;
}