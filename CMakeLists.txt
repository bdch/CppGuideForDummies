cmake_minimum_required(VERSION 3.30)
project(C_C__)

set(CMAKE_CXX_STANDARD 20)

add_executable(C_C__ main.cpp
        unit_1/Namespaces.cpp
        unit_1/Namespaces.h
)
add_executable(Playground_exec_1
        unit_1/playground_1.cpp
        unit_1/Namespaces.cpp
)

add_executable(Playground_exec_2
        unit_2/playground_2.cpp
        unit_2/Solution.cpp
        unit_2/Solution.h
)

add_executable(Playground_exec_3
        unit_3/playground_3.cpp
)

add_executable(Playground_exec_4
        unit_4/playground_4.cpp
)

add_executable(Playground_exec_5
        unit_5/playground_5.cpp
)

