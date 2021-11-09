cmake_minimum_required(VERSION 3.16)

project(carClass)
include_directories(include)

add_executable(carClass src/main.cpp src/car.cpp include/car.h)