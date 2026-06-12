#include <iostream>
#include <cstring>

int main()
{
    char text1[50] = "Hello";
    char text2[50] = " World";

    std::cout << "Length: "
        << strlen(text1)
        << std::endl;

    strcat_s(text1, text2);

    std::cout << "After strcat: "
        << text1
        << std::endl;

    char copy[50];

    strcpy_s(copy, text1);

    std::cout << "Copy: "
        << copy
        << std::endl;

    int result = strcmp(text1, copy);

    std::cout << "Compare result: "
        << result
        << std::endl;

    return 0;
}