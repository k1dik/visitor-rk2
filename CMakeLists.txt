cmake_minimum_required(VERSION 3.10)
project(VisitorPattern)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_library(visitor STATIC
    src/ConcreteElementA.cpp
    src/ConcreteElementB.cpp
    src/ConcreteElementC.cpp
    src/ConcreteVisitor.cpp
)

add_executable(main_exec src/main.cpp)
target_link_libraries(main_exec visitor)

enable_testing()
add_subdirectory(tests)
