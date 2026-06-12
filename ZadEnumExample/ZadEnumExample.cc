#include <iostream>

enum Month
{
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

int main()
{
    Month currentMonth = March;

    std::cout << "Month number: " << currentMonth << std::endl;

    return 0;
}