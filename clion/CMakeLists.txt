cmake_minimum_required(VERSION 3.26)
project(clion)

set(CMAKE_CXX_STANDARD 17)

add_executable(clion main.cpp
        CommissionEmployee.cpp
        CommissionEmployee.h

)
add_executable(clion2 main2.cpp
        CommissionEmployee.cpp
        CommissionEmployee.h
)
