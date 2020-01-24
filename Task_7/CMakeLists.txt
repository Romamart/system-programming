cmake_minimum_required(VERSION 3.15)
project(Task_7)

set(CMAKE_CXX_STANDARD 17)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

add_executable(Task_7 src/test/main.cpp src/main/ln80c_buffer.h src/main/stat_buffer.h src/test/test_for_ln.cpp)
target_link_libraries(Task_7 ${GTEST_LIBRARIES} pthread)