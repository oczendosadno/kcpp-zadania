#include <iostream>

int main()
{
    int bits[8] = { 1,0,1,0,1,0,1,0 };

    int result = 0;

    for (int i = 0; i < 8; i++)
    {
        if (bits[i] == 1)
        {
            result |= (1 << i);
        }
    }

    std::cout << result << std::endl;

    return 0;
}