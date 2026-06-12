#include "../include/ZadKcpp.h"
#include <iostream>
#include <iomanip>
#include <sstream>
#include <cmath>

void ZadKcpp::BitoweOperatory()
{
    int bits[8] = { 1,0,1,0,1,0,1,0 };

    int result = 0;

    for (int i = 0; i < 8; i++)
    {
        if (bits[i] == 1)
        {
            result |= (1 << i);
        }
    }

    std::cout << "Result = " << result << std::endl;
}

void ZadKcpp::ManipulacjaCout()
{
    double output = 12.34567;
    double output1 = 1.23456;
    double output2 = 2.345678;
    double average = (output + output1 + output2) / 3.0;

    std::cout << std::fixed << std::setprecision(3);

    std::cout << output << std::endl;
    std::cout << output1 << std::endl;
    std::cout << output2 << std::endl;
    std::cout << average << std::endl;
}

void ZadKcpp::StringStream()
{
    std::stringstream ss;

    ss << "Hello ";
    ss << "World ";
    ss << 2025;

    std::cout << ss.str() << std::endl;
}

void ZadKcpp::AdresowaniePamieci()
{
    int a = 10;
    int b = 20;
    int c = 30;

    std::cout << &a << std::endl;
    std::cout << &b << std::endl;
    std::cout << &c << std::endl;
}

void ZadKcpp::ArytmetykaWskaznikow()
{
    int numbers[5] = { 1,2,3,4,5 };

    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum += *(numbers + i);
    }

    std::cout << "Sum = " << sum << std::endl;
}

void ZadKcpp::Petle()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << " ";
    }

    std::cout << std::endl;
}

void ZadKcpp::Switch()
{
    int number = 2;

    switch (number)
    {
    case 1:
        std::cout << "One" << std::endl;
        break;

    case 2:
        std::cout << "Two" << std::endl;
        break;

    default:
        std::cout << "Other" << std::endl;
    }
}

void ZadKcpp::Klasy()
{
    std::cout << "Demonstration of class Person" << std::endl;
}

void ZadKcpp::Struktury()
{
    struct Student
    {
        std::string name;
        int age;
    };

    Student s{ "Jan",20 };

    std::cout << s.name << " " << s.age << std::endl;
}

void ZadKcpp::MetodyAbstrakcyjne()
{
    double r = 5.0;

    double pole =
        3.1415926535 * r * r;

    double obwod =
        2 * 3.1415926535 * r;

    std::cout << "Pole kola = "
        << pole
        << std::endl;

    std::cout << "Obwod kola = "
        << obwod
        << std::endl;
}