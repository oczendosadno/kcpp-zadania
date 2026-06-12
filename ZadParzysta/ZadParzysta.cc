#include <iostream>

bool Bitowo(int n)
{
    return (n & 1) == 0;
}

bool Modulo(int n)
{
    return n % 2 == 0;
}

bool Warunkowy(int n)
{
    return (n % 2 == 0) ? true : false;
}

int main()
{
    int n;

    std::cout << "Podaj liczbe: ";
    std::cin >> n;

    std::cout << "Bitowo: " << Bitowo(n) << std::endl;
    std::cout << "Modulo: " << Modulo(n) << std::endl;
    std::cout << "Warunkowy: " << Warunkowy(n) << std::endl;

    return 0;
}