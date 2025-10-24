cmake_minimum_required(VERSION 3.30)

project(Greeter
    LANGUAGES CXX
    VERSION 1.0.0
)

add_subdirectory("greeter")

install(TARGETS greeter EXPORT greeterTargets FILE_SET greeterHeaders)
set(DEST_DIR "share/greeter")
install(EXPORT greeterTargets NAMESPACE greeter:: DESTINATION "${DEST_DIR}")
install(FILES "cmake/greeterConfig.cmake" DESTINATION "${DEST_DIR}")
