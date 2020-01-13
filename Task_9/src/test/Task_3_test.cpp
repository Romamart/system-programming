#include <gtest/gtest.h> // заголовочный файл Google Test
#include <algorithm>
#include <cmath>
#include "../project/Task_3/Fanctions.h"
#include <iostream>
#include <type_traits>
#include <sstream>
#include <array>
#include <vector>
#include <string>


TEST(Cat, CatFanction) {
//    EXPECT_EQ(10, std::max(10,1)); // ожидается 10
//    EXPECT_EQ(1, std::max(0,1)); // ожидается 1
    std::array<float,9> a1 = {3.,1.,6.,4.,1.,2.,0.,8.,5.};
    std::array<float,3> a = {3.,1.,6.};
    std::array<float,3> b = {4.,1.,2.};
    std::array<float,3> c = {0.,8.,5.};
    EXPECT_EQ( a1 , cat(a,b,c));

}
 TEST(massage, massageFanction){
    std::stringstream  out;
    message(out, "% + % = %\n", "bd",'a', 2, 3.0);
    const char* ss = "bd + a = 2\n";
    EXPECT_EQ("bd + a = 2\n", out.str());
}
TEST(Tie, TieFanction){
    std::array<int,6> arr1 = {1,2,3,4,5,6};
    std::array<int,3> arr2 = {7,8,9}, arr3 = {10,11,12};
    tie(arr2,arr3) = arr1;
    std::array<int,3> ans = {1,2,3};
    EXPECT_EQ(ans, arr2);
}