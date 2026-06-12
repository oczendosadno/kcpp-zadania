#include <iostream>
#include "../include/ZadKcpp.h"

int main()
{
    ZadKcpp zad;

    int wybor;

    do
    {
        std::cout << "\n==============================" << std::endl;
        std::cout << "MENU ZADAN KCPP" << std::endl;
        std::cout << "==============================" << std::endl;

        std::cout << "1  - Operatory logiczne" << std::endl;
        std::cout << "2  - Strumienie cout" << std::endl;
        std::cout << "3  - StringStream" << std::endl;
        std::cout << "4  - Adresowanie pamieci" << std::endl;
        std::cout << "5  - Arytmetyka wskaznikow" << std::endl;
        std::cout << "6  - Petle" << std::endl;
        std::cout << "7  - Switch" << std::endl;
        std::cout << "8  - Klasy" << std::endl;
        std::cout << "9  - Struktury" << std::endl;
        std::cout << "10 - Metody abstrakcyjne" << std::endl;
        std::cout << "0  - Wyjscie" << std::endl;

        std::cout << "\nWybor: ";
        std::cin >> wybor;

        switch (wybor)
        {
        case 1:
            zad.BitoweOperatory();
            break;

        case 2:
            zad.ManipulacjaCout();
            break;

        case 3:
            zad.StringStream();
            break;

        case 4:
            zad.AdresowaniePamieci();
            break;

        case 5:
            zad.ArytmetykaWskaznikow();
            break;

        case 6:
            zad.Petle();
            break;

        case 7:
            zad.Switch();
            break;

        case 8:
            zad.Klasy();
            break;

        case 9:
            zad.Struktury();
            break;

        case 10:
            zad.MetodyAbstrakcyjne();
            break;

        case 0:
            std::cout << "Koniec programu." << std::endl;
            break;

        default:
            std::cout << "Niepoprawny wybor." << std::endl;
        }

    } while (wybor != 0);

    return 0;
}