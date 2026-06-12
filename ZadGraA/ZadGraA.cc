#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));

    int poziom;

    cout << "1 - Latwy" << endl;
    cout << "2 - Trudny" << endl;

    cin >> poziom;

    int maxValue;

    if (poziom == 1)
    {
        maxValue = 50;
    }
    else
    {
        maxValue = 200;
    }

    int wylosowana =
        rand() % maxValue + 1;

    int proba;

    for (int i = 1; i <= 10; i++)
    {
        cout << "Proba "
            << i
            << "/10: ";

        cin >> proba;

        if (proba < wylosowana)
        {
            cout << "Za malo" << endl;
        }
        else if (proba > wylosowana)
        {
            cout << "Za duzo" << endl;
        }
        else
        {
            cout << "Wygrales!" << endl;
            return 0;
        }
    }

    cout << "Przegrales." << endl;
    cout << "Prawidlowa liczba: "
        << wylosowana
        << endl;

    return 0;
}