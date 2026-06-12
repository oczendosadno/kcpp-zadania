#include <iostream>

struct Student
{
    std::string name;
    int age;

    Student()
    {
        name = "Unknown";
        age = 0;
    }

    Student(std::string n, int a)
        : name(n), age(a)
    {
    }

    ~Student()
    {
        std::cout << "Student deleted" << std::endl;
    }

    void Show()
    {
        std::cout
            << name
            << " "
            << age
            << std::endl;
    }
};

int main()
{
    Student s1;
    Student s2("Adam", 25);

    s2.Show();

    return 0;
}