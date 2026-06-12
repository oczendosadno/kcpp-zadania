#include <iostream>

int main()
{
    int arr[10];

    for (int i = 0;i < 10;i++)
    {
        arr[i] = i + 1;
    }

    int sum = 0;
    int* p = arr;

    for (int i = 0;i < 10;i++)
    {
        sum += *(p + i);
    }

    std::cout << "Sum = "
        << sum
        << std::endl;

    int max = *arr;

    for (int i = 0;i < 10;i++)
    {
        if (*(p + i) > max)
        {
            max = *(p + i);
        }
    }

    std::cout << "Max = "
        << max
        << std::endl;

    int* left = arr;
    int* right = arr + 9;

    while (left < right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }

    std::cout << "Reverse: ";

    for (int i = 0;i < 10;i++)
    {
        std::cout << arr[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}