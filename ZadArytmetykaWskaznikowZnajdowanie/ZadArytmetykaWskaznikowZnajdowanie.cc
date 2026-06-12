#include <iostream>

int* maxElement(int* arr, int size)
{
    int* max = arr;

    for (int i = 1; i < size; i++)
    {
        if (*(arr + i) > *max)
        {
            max = arr + i;
        }
    }

    return max;
}

int main()
{
    int numbers[5] = { 4,7,2,15,9 };

    std::cout << *maxElement(numbers, 5)
        << std::endl;

    return 0;
}