#include <iostream>

void CopyArray(int source[],
    int destination[],
    int size)
{
    for (int i = 0; i < size; i++)
    {
        destination[i] = source[i];
    }
}

int main()
{
    int source[5] = { 1, 2, 3, 4, 5 };
    int copy[5];

    CopyArray(source, copy, 5);

    for (int i = 0; i < 5; i++)
    {
        std::cout << copy[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}