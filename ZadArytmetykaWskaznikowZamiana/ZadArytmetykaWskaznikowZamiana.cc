#include <iostream>

void zamien(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10;
    int y = 20;

    std::cout << "Before: "
        << x
        << " "
        << y
        << std::endl;

    zamien(&x, &y);

    std::cout << "After: "
        << x
        << " "
        << y
        << std::endl;

    return 0;
}