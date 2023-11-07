cmake_minimum_required(VERSION 3.26)
project(Shapes)

set(CMAKE_CXX_STANDARD 17)

add_executable(Shapes main.cpp
        headers/Circle.h
        sources/Circle.cpp)
