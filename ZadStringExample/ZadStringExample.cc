#include <iostream>
#include <string>

int main()
{
    std::string text = "Hello";

    text += " World";

    std::cout << "Text: "
        << text
        << std::endl;

    std::cout << "Length: "
        << text.length()
        << std::endl;

    std::cout << "First character: "
        << text[0]
        << std::endl;

    if (text.find("World") != std::string::npos)
    {
        std::cout << "Word found"
            << std::endl;
    }

    return 0;
}