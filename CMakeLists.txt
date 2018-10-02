# CMakeLists.txt
cmake_minimum_required(VERSION 3.0)
project(cpp-opencv-example-1)

add_executable(main main.cpp helper.hpp helper.cpp)

find_package(OpenCV REQUIRED)
target_include_directories(main PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_libraries(main PRIVATE ${OpenCV_LIBS})

find_package(LibLZMA REQUIRED)
target_include_directories(main PRIVATE ${LIBLZMA_INCLUDE_DIRS})
target_link_libraries(main PRIVATE ${LIBLZMA_LIBRARIES})
