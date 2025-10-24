cmake_minimum_required(VERSION 3.30)

project(Greeter
    LANGUAGES CXX
    VERSION 1.0.2
)

add_subdirectory("greeter")

install(TARGETS greeter EXPORT greeterTargets FILE_SET greeterHeaders)
install(EXPORT greeterTargets NAMESPACE greeter:: DESTINATION "share/cmake/greeter")

include(CMakePackageConfigHelpers)
configure_package_config_file(
    "greeterConfig.cmake.in"
    "${CMAKE_CURRENT_BINARY_DIR}/greeterConfig.cmake"
    INSTALL_DESTINATION "share/cmake/greeter"
)

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/greeterConfig.cmake" DESTINATION "share/cmake/greeter")
