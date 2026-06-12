#include <iostream>

int main()
{
    int arr[10];

    int* p1 = &arr[2];
    int* p2 = &arr[8];

    std::cout << p2 - p1
        << std::endl;

    return 0;
}