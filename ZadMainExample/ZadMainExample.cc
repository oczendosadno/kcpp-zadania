#include <iostream>

extern "C" void Func1()
{
    std::cout << "Func1" << std::endl;
}

extern "C" void Func2()
{
    std::cout << "Func2" << std::endl;
}

void Func3()
{
    std::cout << "Func3" << std::endl;
}

void Func4()
{
    std::cout << "Func4" << std::endl;
}

void Func5()
{
    std::cout << "Func5" << std::endl;
}

int main()
{
    Func1();
    Func2();
    Func3();
    Func4();
    Func5();

    return 0;
}