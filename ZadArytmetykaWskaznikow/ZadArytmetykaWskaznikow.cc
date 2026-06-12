#include <iostream>

void Funkcja1()
{
    int arr[5] = { 10,20,30,40,50 };

    int* p = arr;

    std::cout << "*p      = " << *p << std::endl;

    p++;
    std::cout << "p++     = " << *p << std::endl;

    ++p;
    std::cout << "++p     = " << *p << std::endl;

    ++*p;
    std::cout << "++*p    = " << *p << std::endl;

    (*p)++;
    std::cout << "(*p)++  = " << *p << std::endl;
}

void Funkcja2()
{
    int a = 0;
    int b = 0;
    int c = 0;

    std::cout << "1. A,B,C: "
        << a << " "
        << b << " "
        << c << std::endl;

    b = 10;
    std::cout << "2. A,B,C: "
        << a << " "
        << b << " "
        << c << std::endl;

    c = 20;
    std::cout << "3. A,B,C: "
        << a << " "
        << b << " "
        << c << std::endl;

    b = 30;
    std::cout << "4. A,B,C: "
        << a << " "
        << b << " "
        << c << std::endl;

    a = 40;
    std::cout << "5. A,B,C: "
        << a << " "
        << b << " "
        << c << std::endl;

    b = 50;
    std::cout << "6. A,B,C: "
        << a << " "
        << b << " "
        << c << std::endl;

    c = 60;
    std::cout << "7. A,B,C: "
        << a << " "
        << b << " "
        << c << std::endl;

    b = 70;
    std::cout << "8. A,B,C: "
        << a << " "
        << b << " "
        << c << std::endl;

    a = 80;
    std::cout << "9. A,B,C: "
        << a << " "
        << b << " "
        << c << std::endl;

    b = 90;
    std::cout << "10. A,B,C: "
        << a << " "
        << b << " "
        << c << std::endl;
}

int main()
{
    Funkcja1();

    std::cout << std::endl;

    Funkcja2();

    return 0;
}