#include <iostream>
#include <string>

int dodaj(int a, int b)
{
    return a + b;
}

double dodaj(double a, double b)
{
    return a + b;
}

std::string dodaj(std::string a, std::string b)
{
    return a + b;
}

int main()
{
    std::cout << dodaj(2, 3) << std::endl;

    std::cout << dodaj(2.5, 3.5) << std::endl;

    std::cout << dodaj("Hello ", "World") << std::endl;

    return 0;
}