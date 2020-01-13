//
// Created by roman on 22.11.2019.
//
#include <gtest/gtest.h>
#include <array>
#include "../project/Task_10/fan.hpp"

TEST(turn, turn_test) {
//    EXPECT_EQ(10, std::max(10,1)); // ожидается 10
//    EXPECT_EQ(1, std::max(0,1)); // ожидается 1
    std::array<int, 2> a = {3, 1};
    std::array<int, 2> a1 = {-3, -1};
    EXPECT_EQ(a1, turn(a, 2));

    std::array<int, 2> a2 = {3, 1};
    EXPECT_EQ(a2, turn(a, 0));

    std::array<int, 2> a3 = {-1, 3};
    EXPECT_EQ(a3, turn(a, 1));

    std::array<int, 2> a4 = {1, -3};
    EXPECT_EQ(a4, turn(a, 3));

    std::array<int, 2> a5 = {3, 1};
    EXPECT_EQ(a5, turn(a, -1));

}