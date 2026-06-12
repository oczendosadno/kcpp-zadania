#include <iostream>
#include <iomanip>

int main()
{
    double pi = 3.1415926535;
    double e = 2.7182818284;
    double golden = 1.6180339887;

    std::cout
        << std::left
        << std::setw(15) << "Stala"
        << std::setw(20) << "Domyslnie"
        << std::setw(20) << "Fixed"
        << std::setw(20) << "Scientific"
        << std::endl;

    std::cout
        << std::setw(15) << "Pi"
        << std::defaultfloat << std::setw(20) << pi
        << std::fixed << std::setprecision(6) << std::setw(20) << pi
        << std::scientific << std::setw(20) << pi
        << std::endl;

    std::cout
        << std::setw(15) << "e"
        << std::defaultfloat << std::setw(20) << e
        << std::fixed << std::setprecision(6) << std::setw(20) << e
        << std::scientific << std::setw(20) << e
        << std::endl;

    std::cout
        << std::setw(15) << "Golden"
        << std::defaultfloat << std::setw(20) << golden
        << std::fixed << std::setprecision(6) << std::setw(20) << golden
        << std::scientific << std::setw(20) << golden
        << std::endl;

    return 0;
}