#include <iostream>
using namespace std;

int main()
{
    int liczba;
    int suma = 0;
    int licznik = 0;

    cout << "Wprowadzaj liczby (0 konczy):" << endl;

    cin >> liczba;

    while (liczba != 0)
    {
        if (liczba > 0)
        {
            suma += liczba;
            licznik++;
        }
        else
        {
            cout << "Liczba musi byc dodatnia" << endl;
        }

        cin >> liczba;
    }

    cout << "Suma = "
        << suma
        << endl;

    cout << "Liczba elementow = "
        << licznik
        << endl;

    return 0;
}