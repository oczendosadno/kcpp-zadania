#include <iostream>

struct Student
{
    std::string name;
    int age;
};

int main()
{
    Student s1;

    s1.name = "Jan";
    s1.age = 20;

    std::cout
        << s1.name
        << " "
        << s1.age
        << std::endl;

    s1.name = "Adam";
    s1.age = 25;

    std::cout
        << s1.name
        << " "
        << s1.age
        << std::endl;

    return 0;
}