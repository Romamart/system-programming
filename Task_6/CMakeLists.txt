cmake_minimum_required(VERSION 3.15)
project(Task_6)

set(CMAKE_CXX_STANDARD 17)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

#add_executable(Task_6 src/main/Fig.h src/main/Polynomial.h src/test/FigurTest.cpp src/test/PolynomialTest.cpp)
add_executable(Task_6 src/main/main.cpp src/test/FigurTest.cpp src/main/Fig.h src/test/PolynomialTest.cpp)
target_link_libraries(Task_6 ${GTEST_LIBRARIES} pthread)