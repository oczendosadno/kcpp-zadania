#include <iostream>
#include "../include/ZadKcpp.h"

using namespace std;

int main()
{
    ZadKcpp program;

    int wybor;

    do
    {
        cout << endl;
        cout << "==============================" << endl;
        cout << " MENU ZADAN KCPP " << endl;
        cout << "==============================" << endl;
        cout << "1  - Operatory logiczne" << endl;
        cout << "2  - Strumienie cout" << endl;
        cout << "3  - Wskazniki" << endl;
        cout << "4  - Tablice" << endl;
        cout << "5  - Petle" << endl;
        cout << "6  - Switch" << endl;
        cout << "7  - Klasy" << endl;
        cout << "8  - Struktury" << endl;
        cout << "9  - Friendship" << endl;
        cout << "10 - Metody abstrakcyjne" << endl;
        cout << "0  - Wyjscie" << endl;

        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1: program.Zad1(); break;
        case 2: program.Zad2(); break;
        case 3: program.Zad3(); break;
        case 4: program.Zad4(); break;
        case 5: program.Zad5(); break;
        case 6: program.Zad6(); break;
        case 7: program.Zad7(); break;
        case 8: program.Zad8(); break;
        case 9: program.Zad9(); break;
        case 10: program.Zad10(); break;
        }

    } while (wybor != 0);

    return 0;
}