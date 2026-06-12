#include <iostream>

int suma(int* arr, int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }

    return sum;
}

int main()
{
    int numbers[5] = { 1,2,3,4,5 };

    std::cout << suma(numbers, 5)
        << std::endl;

    return 0;
}