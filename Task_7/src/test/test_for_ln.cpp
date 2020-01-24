
#include <gtest/gtest.h>
#include "../main/ln80c_buffer.h"
#include <ostream>

TEST(ln80c_buffer, 1){
    std::stringbuf uBuf;
    ln80c_buffer buffer(&uBuf);
    std::ostream ostr(&buffer);

    ostr << "Куда сегодня пойдем?\n";
    EXPECT_EQ("       0 Куда сегодня пойдем?\n", uBuf.str());
    ostr << "Я еще не решил\n";
    EXPECT_EQ("       0 Куда сегодня пойдем?\n       1 Я еще не решил\n", uBuf.str());
}

TEST(LN80C_BUFFER, 2){
    std::stringbuf uBuf;
    ln80c_buffer buffer(&uBuf);
    std::ostream ostr(&buffer);

    std::string str(72, 'R');
    ostr << str;
    EXPECT_EQ("       0 " + str + '\n', uBuf.str());
    ostr<<"123\n";
    EXPECT_EQ("       0 " + str + "\n       1 123\n", uBuf.str());
}

TEST(LN80C_BUFFER, 3){
    std::stringbuf strBuf;
    ln80c_buffer buffer(&strBuf);
    std::ostream ostr(&buffer);

    std::string str(72, 'R');
    ostr << str + "1111\n";
    EXPECT_EQ("       0 " + str + "\n       1 1111\n", strBuf.str());
}