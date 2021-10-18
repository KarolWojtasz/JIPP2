cmake_minimum_required(VERSION 3.16)
project(simpleCalc)

include_directories(include)
include_directories(src)

set(CMAKE_CXX_STANDARD 17)
add_executable(simpleCalc src/main.cpp src/functions.cpp include/functions.h)
