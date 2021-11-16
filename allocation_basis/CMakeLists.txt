cmake_minimum_required(VERSION 3.16)
project(allocation_basis)
set(CMAKE_CXX_STANDARD 17)
add_executable(allocation_basis main.cpp ../Copyingclass/src/main.cpp ../Copyingclass/src/Point.cpp ../Copyingclass/include/Point.h ../lab5/src/main.cpp ../lab6_node/src/node.cpp ../lab6_node/src/node.h ../lab6_vector/src/vector.cpp ../lab6_vector/src/vector.h)
