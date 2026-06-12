#include <iostream>
#include <cmath>

class Figura
{
public:
    virtual double Pole() = 0;
    virtual double Obwod() = 0;

    virtual ~Figura() {}
};

class Kwadrat : public Figura
{
private:
    double a;

public:
    Kwadrat(double side)
        : a(side)
    {
    }

    double Pole() override
    {
        return a * a;
    }

    double Obwod() override
    {
        return 4 * a;
    }
};

class Prostokat : public Figura
{
private:
    double a;
    double b;

public:
    Prostokat(double x, double y)
        : a(x), b(y)
    {
    }

    double Pole() override
    {
        return a * b;
    }

    double Obwod() override
    {
        return 2 * (a + b);
    }
};

class Trojkat : public Figura
{
private:
    double a;
    double h;

public:
    Trojkat(double side, double height)
        : a(side), h(height)
    {
    }

    double Pole() override
    {
        return a * h / 2.0;
    }

    double Obwod() override
    {
        return 3 * a;
    }
};

class Kolo : public Figura
{
private:
    double r;

public:
    Kolo(double radius)
        : r(radius)
    {
    }

    double Pole() override
    {
        return 3.1415926535 * r * r;
    }

    double Obwod() override
    {
        return 2 * 3.1415926535 * r;
    }

    double Dystans(double areaPerPerson)
    {
        return std::sqrt(areaPerPerson / 3.1415926535);
    }
};

int main()
{
    Kwadrat kw(5);
    Prostokat pr(4, 6);
    Trojkat tr(6, 4);
    Kolo ko(5);

    std::cout
        << "Square area: "
        << kw.Pole()
        << std::endl;

    std::cout
        << "Square perimeter: "
        << kw.Obwod()
        << std::endl;

    std::cout
        << std::endl;

    std::cout
        << "Rectangle area: "
        << pr.Pole()
        << std::endl;

    std::cout
        << "Rectangle perimeter: "
        << pr.Obwod()
        << std::endl;

    std::cout
        << std::endl;

    std::cout
        << "Triangle area: "
        << tr.Pole()
        << std::endl;

    std::cout
        << "Triangle perimeter: "
        << tr.Obwod()
        << std::endl;

    std::cout
        << std::endl;

    std::cout
        << "Circle area: "
        << ko.Pole()
        << std::endl;

    std::cout
        << "Circle perimeter: "
        << ko.Obwod()
        << std::endl;

    std::cout
        << "Distance: "
        << ko.Dystans(10.0)
        << std::endl;

    return 0;
}