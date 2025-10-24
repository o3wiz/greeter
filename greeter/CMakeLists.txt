add_library(greeter STATIC)
add_library(greeter::greeter ALIAS greeter)

target_sources(greeter
    PUBLIC
    FILE_SET greeterHeaders
    TYPE HEADERS
    BASE_DIRS "include"
    FILES
    "include/greeter/SayHello.hpp"
)

target_sources(greeter
    PRIVATE
    "source/SayHello.cpp"
)

target_compile_features(greeter PRIVATE cxx_std_17)
