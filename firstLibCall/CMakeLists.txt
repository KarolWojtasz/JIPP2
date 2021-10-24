include_directories(${CMAKE_SOURCE_DIR}/firstLib/include)
add_executable(firstLibCall src/main.cpp)
target_link_libraries(firstLibCall firstLib)

cmake_minimum_required(VERSION 3.16)
project(firstLibCall)

include_directories(src)

set(CMAKE_CXX_STANDARD 17)