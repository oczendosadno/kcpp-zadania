#include <iostream>

void przesun(int* arr, int size)
{
    int last = *(arr + size - 1);

    for (int i = size - 1; i > 0; i--)
    {
        *(arr + i) = *(arr + i - 1);
    }

    *arr = last;
}

int main()
{
    int numbers[5] = { 1,2,3,4,5 };

    przesun(numbers, 5);

    for (int i = 0; i < 5; i++)
    {
        std::cout << numbers[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}