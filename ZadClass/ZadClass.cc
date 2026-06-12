#include <iostream>

class Person
{
public:
    std::string name;

    inline void SetName(std::string n)
    {
        name = n;
    }

    void Show();

protected:
    int protectedValue = 100;

private:
    int age;
public:
    void SetAge(int a);
    int GetAge();
    void ShowProtected();
};

void Person::SetAge(int a)
{
    age = a;
}

int Person::GetAge()
{
    return age;
}

void Person::Show()
{
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

void Person::ShowProtected()
{
    std::cout << "Protected value: "
        << protectedValue
        << std::endl;
}

int main()
{
    Person p;

    p.SetName("Jan");
    p.SetAge(20);

    p.Show();
    p.ShowProtected();

    return 0;
}