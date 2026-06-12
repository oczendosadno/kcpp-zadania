#include <iostream>
#include <iomanip>

int main()
{
    std::cout
        << "| "
        << std::left << std::setw(15) << "Nazwa"
        << "| "
        << std::right << std::setw(8) << "Cena"
        << " | "
        << std::setw(7) << "Ilosc"
        << " |"
        << std::endl;

    std::cout
        << "|----------------|----------|---------|"
        << std::endl;

    std::cout << "| "
        << std::left << std::setw(15) << "Chleb"
        << "| "
        << std::right << std::fixed << std::setprecision(2)
        << std::setw(8) << 4.99
        << " | "
        << std::setw(7) << 5
        << " |"
        << std::endl;

    std::cout << "| "
        << std::left << std::setw(15) << "Mleko"
        << "| "
        << std::setw(8) << 3.20
        << " | "
        << std::setw(7) << 10
        << " |"
        << std::endl;

    std::cout << "| "
        << std::left << std::setw(15) << "Jajka (10 szt)"
        << "| "
        << std::setw(8) << 8.50
        << " | "
        << std::setw(7) << 3
        << " |"
        << std::endl;

    return 0;
}