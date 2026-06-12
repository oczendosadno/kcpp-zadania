#include <iostream>

class Punkt
{
public:
    int x;
    int y;

    Punkt(int xx, int yy)
    {
        x = xx;
        y = yy;
    }

    Punkt operator+(const Punkt& other)
    {
        return Punkt(x + other.x, y + other.y);
    }
};

int main()
{
    Punkt p1(2, 3);
    Punkt p2(4, 5);

    Punkt p3 = p1 + p2;

    std::cout << "x = "
        << p3.x
        << ", y = "
        << p3.y
        << std::endl;

    return 0;
}