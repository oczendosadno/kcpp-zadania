#include <iostream>
#include <sstream>
#include <string>

int main()
{
    std::stringstream ss;

    ss << "Hello ";
    ss << "World ";
    ss << 2025;

    std::string result = ss.str();

    std::cout << result << std::endl;

    return 0;
}