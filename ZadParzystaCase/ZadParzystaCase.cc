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
    int liczba;
    int wybor;

    std::cout << "Liczba: ";
    std::cin >> liczba;

    std::cout << "1-Bitowo\n";
    std::cout << "2-Modulo\n";
    std::cout << "3-Warunkowy\n";

    std::cin >> wybor;

    switch (wybor)
    {
    case 1:
        std::cout << Bitowo(liczba);
        break;

    case 2:
        std::cout << Modulo(liczba);
        break;

    case 3:
        std::cout << Warunkowy(liczba);
        break;

    default:
        std::cout << "Blad";
    }

    return 0;
}