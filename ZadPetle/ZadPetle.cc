#include <iostream>

void WhileLoop()
{
    int i = 0;

    while (i < 10)
    {
        i++;

        if (i == 3)
            continue;

        if (i == 8)
            break;

        std::cout << i << " ";
    }

    std::cout << std::endl;
}

void DoWhileLoop()
{
    int i = 0;

    do
    {
        ++i;

        if (i == 5)
            continue;

        std::cout << i << " ";

    } while (i < 10);

    std::cout << std::endl;
}

void ForLoop()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 7)
            return;

        std::cout << i << " ";
    }
}

int main()
{
    WhileLoop();
    DoWhileLoop();
    ForLoop();

    return 0;
}