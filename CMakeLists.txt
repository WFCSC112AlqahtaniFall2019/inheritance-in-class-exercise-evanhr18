cmake_minimum_required(VERSION 3.14)
project(inhertance_exercise)

set(CMAKE_CXX_STANDARD 14)

add_executable(inhertance_exercise main.cpp Polygon.cpp Rectangle.h Rectangle.cpp Triangle.h Triangle.cpp)