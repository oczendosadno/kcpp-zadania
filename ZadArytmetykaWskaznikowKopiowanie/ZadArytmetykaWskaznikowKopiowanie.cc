#include <iostream>

void kopiujTablice(int* src,
    int* dst,
    int size)
{
    for (int i = 0; i < size; i++)
    {
        *(dst + i) = *(src + i);
    }
}

int main()
{
    int a[5] = { 1,2,3,4,5 };
    int b[5];

    kopiujTablice(a, b, 5);

    for (int i = 0; i < 5; i++)
    {
        std::cout << b[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}