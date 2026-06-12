#include <iostream>

int ReturnValue()
{
    return 10;
}

int globalNumber = 20;

int& ReturnReference()
{
    return globalNumber;
}

int* ReturnPointer()
{
    return &globalNumber;
}

int* ReturnArray()
{
    static int arr[3] = { 1, 2, 3 };
    return arr;
}

int main()
{
    std::cout << "Value: "
        << ReturnValue()
        << std::endl;

    std::cout << "Reference: "
        << ReturnReference()
        << std::endl;

    std::cout << "Pointer: "
        << *ReturnPointer()
        << std::endl;

    int* array = ReturnArray();

    std::cout << "Array: ";

    for (int i = 0; i < 3; i++)
    {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}