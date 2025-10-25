#include "greeter/SayHello.hpp"

#include <fmt/core.h>

void Greeter::SayHello(const std::string_view name)
{
    fmt::println("Hello, {}!", name);
}
