#include "greeter/SayHello.hpp"

#include <iostream>

void Greeter::SayHello(const std::string_view name)
{
    std::cout << "Hello, " << name << "!" << std::endl;
}
