#include <iostream>
#include <cstdio>

int main()
{
    int number = 10;

    printf("C style: %d\n", number);

    std::cout
        << "C++ style: "
        << number
        << std::endl;

    return 0;
}