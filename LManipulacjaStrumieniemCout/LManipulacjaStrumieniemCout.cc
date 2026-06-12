#include <iostream>
#include <iomanip>

int main()
{
    double output = 12.34567;
    double output1 = 1.23456;
    double output2 = 2.345678;
    double average = (output + output1 + output2) / 3.0;

    std::cout << "==================================================" << std::endl;

    std::cout << "Wynik naszego dzialania:" << std::endl;

    std::cout << std::fixed << std::setprecision(3);

    std::cout << "output : "
        << std::setw(8)
        << output
        << std::endl;

    std::cout << "output1: "
        << std::setw(8)
        << output1
        << std::endl;

    std::cout << "output2: "
        << std::setw(8)
        << output2
        << std::endl;

    std::cout << "---------------------------------" << std::endl;

    std::cout << "average: "
        << std::setw(8)
        << average
        << std::endl;

    std::cout << "==================================================" << std::endl;

    return 0;
}