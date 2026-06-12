#include <iostream>

union Data
{
    int i;
    float f;
    char c;
};

int main()
{
    Data d;

    d.i = 65;
    std::cout << "int: " << d.i << std::endl;

    d.f = 3.14f;
    std::cout << "float: " << d.f << std::endl;

    std::cout << "int after float: "
        << d.i
        << std::endl;

    return 0;
}