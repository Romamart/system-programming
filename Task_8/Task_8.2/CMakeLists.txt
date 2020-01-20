cmake_minimum_required(VERSION 3.15)
project(Task_8)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pthread")
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(Task_8_1 src/main/parallel.hpp src/test/TableTest.cpp )
target_link_libraries(Task_8_1 gtest gtest_main)
target_link_libraries(Task_8_1 ${GTEST_LIBRARIES} pthread)