cmake_minimum_required(VERSION 3.0)

project(calculatorCpp)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(SOURCES
    src/main.cpp
    src/simple.cpp
)

add_executable(calculator ${SOURCES})
