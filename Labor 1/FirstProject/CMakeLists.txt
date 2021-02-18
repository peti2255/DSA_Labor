cmake_minimum_required(VERSION 3.17)
project(FirstProject C)

set(CMAKE_C_STANDARD 99)

add_executable(FirstProject main.c functions.c functions.h)