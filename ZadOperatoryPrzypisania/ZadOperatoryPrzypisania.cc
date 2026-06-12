#include <iostream>

void OperatoryArytmetyczne()
{
    int a = 10;
    int b = 3;

    std::cout << a + b << std::endl;
    std::cout << a - b << std::endl;
    std::cout << a * b << std::endl;
    std::cout << a / b << std::endl;
}

void OperatoryPrzypisania()
{
    int x = 10;

    x += 5;
    std::cout << x << std::endl;

    x -= 3;
    std::cout << x << std::endl;

    x *= 2;
    std::cout << x << std::endl;
}

int main()
{
    OperatoryArytmetyczne();

    OperatoryPrzypisania();

    return 0;
}