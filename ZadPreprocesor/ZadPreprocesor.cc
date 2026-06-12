#include <iostream>

#define PI 3.14159

#define PRINT(x) \
std::cout << #x << " = " << x << std::endl

#define CONCAT(a,b) a##b

int main()
{
#ifdef PI

    std::cout
        << "PI istnieje"
        << std::endl;

#else

    std::cout
        << "PI nie istnieje"
        << std::endl;

#endif

#ifndef TEST

    std::cout
        << "TEST nie istnieje"
        << std::endl;

#endif

    double pole =
        PI * 5 * 5;

    PRINT(pole);

    int CONCAT(my, Var) = 10;

    std::cout
        << myVar
        << std::endl;

    return 0;
}