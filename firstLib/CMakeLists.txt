cmake_minimum_required(VERSION 3.16)
project(firstLib)

include_directories(include)
include_directories(src)

set(CMAKE_CXX_STANDARD 17)
add_library(firstLib src/lib.cpp include/lib.h)
