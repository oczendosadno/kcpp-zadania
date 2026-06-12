#include <iostream>
#include <cmath>

int potega(int a, int b)
{
    return static_cast<int>(pow(a, b));
}

double potega(double a, double b)
{
    return pow(a, b);
}

int main()
{
    std::cout << potega(2, 3)
        << std::endl;

    std::cout << potega(2.5, 2.0)
        << std::endl;

    return 0;
}