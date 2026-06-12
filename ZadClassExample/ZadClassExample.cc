#include <iostream>
#include <string>

class Car
{
private:
    std::string brand;
    int year;

public:
    Car(std::string b, int y)
    {
        brand = b;
        year = y;
    }

    void ShowInfo()
    {
        std::cout << "Brand: " << brand << std::endl;
        std::cout << "Year: " << year << std::endl;
    }
};

int main()
{
    Car myCar("Toyota", 2020);

    myCar.ShowInfo();

    return 0;
}