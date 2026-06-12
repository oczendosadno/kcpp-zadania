#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student
{
    string imie;
    string nazwisko;
    int indeks;
};

int main()
{
    vector<Student> students;

    students.push_back(
        { "Jan","Kowalski",1001 });

    students.push_back(
        { "Anna","Nowak",1002 });

    students.push_back(
        { "Piotr","Zielinski",1003 });

    sort(
        students.begin(),
        students.end(),
        [](const Student& a,
            const Student& b)
        {
            return a.imie < b.imie;
        });

    cout << "Lista studentow:"
        << endl;

    for (const auto& s : students)
    {
        cout
            << s.imie << " "
            << s.nazwisko << " "
            << s.indeks
            << endl;
    }

    return 0;
}