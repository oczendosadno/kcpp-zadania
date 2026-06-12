#include <iostream>
using namespace std;

int main()
{
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba < 0)
    {
        cout << "Silnia jest zdefiniowana tylko dla liczb nieujemnych";
        return 0;
    }

    long long silnia = 1;

    for (int i = 1; i <= liczba; i++)
    {
        silnia *= i;
    }

    cout << "Silnia = " << silnia << endl;

    long long suma = 0;

    for (int n = 1; n <= liczba; n++)
    {
        long long temp = 1;

        for (int i = 1; i <= n; i++)
        {
            temp *= i;
        }

        suma += temp;
    }

    cout << "Suma silni od 1 do n = "
        << suma
        << endl;

    return 0;
}