#include <iostream>

class Person
{
private:
    std::string name;
    int age;

public:
    Person()
    {
        std::cout << "Default constructor" << std::endl;
        name = "Unknown";
        age = 0;
    }

    Person(std::string n, int a)
        : name(n), age(a)
    {
    }

    ~Person()
    {
        std::cout << "Destructor" << std::endl;
    }

    void Show()
    {
        std::cout
            << "Name: "
            << name
            << " Age: "
            << age
            << std::endl;
    }
};

int main()
{
    Person p1;
    Person p2("Jan", 20);

    p2.Show();

    return 0;
}