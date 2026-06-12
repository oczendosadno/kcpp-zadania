#include <iostream>

int main()
{
    float a[5];
    float b[5];
    float c[5];

    for (int i = 0;i < 5;i++)
    {
        a[i] = i + 1;
    }

    for (int i = 0;i < 5;i++)
    {
        *(b + i) = *(a + i) * 2;
    }

    for (int i = 0;i < 5;i++)
    {
        *(c + i) = *(a + i) + *(b + i);
    }

    std::cout << "A: ";

    for (float* p = a;p < a + 5;p++)
    {
        std::cout << *p << " ";
    }

    std::cout << std::endl;

    std::cout << "B: ";

    for (float* p = b;p < b + 5;p++)
    {
        std::cout << *p << " ";
    }

    std::cout << std::endl;

    std::cout << "C: ";

    for (float* p = c;p < c + 5;p++)
    {
        std::cout << *p << " ";
    }

    std::cout << std::endl;

    return 0;
}