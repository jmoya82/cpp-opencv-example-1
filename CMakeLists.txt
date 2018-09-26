# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(test)

find_package(opencv REQUIRED)

add_executable(main main.cpp)
target_link_libraries(main opencv)