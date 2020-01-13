cmake_minimum_required(VERSION 3.10)
project(Task_9)

set(CMAKE_CXX_STANDARD 17)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})


add_executable(Task_9 src/project/Task_2/MyVector.h src/project/Task_2/MyVector.hpp
        src/project/Task_3/Fanctions.h src/project/Task_4/Matrix.h
        src/project/Task_4/Matrix.hpp src/project/Task_4/MyGuard.h
        src/project/Task_5/man.hpp src/project/Task_5/Mysrteam.hpp src/project/Task_5/sort.hpp
        src/project/Task_10/fan.hpp
        src/test/Task_4_test.cpp src/test/Task_5_test_1.cpp src/test/Task_5_test_2.cpp src/test/Task_10_test.cpp
        src/project/Task_2_test.cpp src/test/Task_3_test.cpp)
target_link_libraries(Task_9 ${GTEST_LIBRARIES} pthread)