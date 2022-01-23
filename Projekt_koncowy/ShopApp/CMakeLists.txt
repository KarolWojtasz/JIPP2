cmake_minimum_required(VERSION 3.16)

set(CMAKE_CXX_STANDARD  17)

include_directories(../ShopLib/include)
include_directories(include)
include_directories(src)
add_executable(ShopApp src/main.cpp src/Product.cpp include/Product.h src/User.cpp include/User.h  include/Printer.h)

target_link_libraries(ShopApp PUBLIC ShopLib)