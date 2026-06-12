#include <iostream>
#include <string>

int main()
{
    std::string word;

    std::cout << "Podaj slowo: ";
    std::cin >> word;

    if (word == "kot")
    {
        std::cout << "To jest kot";
    }
    else if (word == "pies")
    {
        std::cout << "To jest pies";
    }
    else if (word == "ptak")
    {
        std::cout << "To jest ptak";
    }
    else
    {
        std::cout << "Nieznane slowo";
    }

    return 0;
}