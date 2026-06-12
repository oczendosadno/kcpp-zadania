#include <iostream>

double pole(double side)
{
    return side * side;
}

double pole(double a, double b)
{
    return a * b;
}

double pole(int radius)
{
    return 3.14159 * radius * radius;
}

int main()
{
    std::cout << "Square: "
        << pole(4.0)
        << std::endl;

    std::cout << "Rectangle: "
        << pole(4.0, 5.0)
        << std::endl;

    std::cout << "Circle: "
        << pole(3)
        << std::endl;

    return 0;
}