#include <iostream>

void PrintArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;
}

int main()
{
    int numbers[5] = { 1, 2, 3, 4, 5 };

    PrintArray(numbers, 5);

    return 0;
}