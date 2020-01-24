#include <iostream>
#include "../main/ln80c_buffer.h"
#include "../main/stat_buffer.h"
#include <ostream>
#include <string>
#include <sstream>

int main() {
//    std::stringbuf strBuf;
//    ln80c_buffer buffer(&strBuf);
//    std::ostream ostr(&buffer);
//
////    ostr << "Куда сегодня пойдем?\n";
//    std::string str(72, 'R');
////    ostr << "Привет\n";
//    std::cout << strBuf.str();
//
//    ostr << str;
////    ostr << '\n';
////    ostr << "Hello\n";
//    ostr << "Я еще не решил\n";
//    std::cout << strBuf.str();


    std::streambuf* oldbuf = std::cin.rdbuf();
    stat_buffer stbuff(oldbuf);
    std::cin.rdbuf(&stbuff);
    std::string s(6,' ');
    std::cout << std::cin.rdbuf();
    std::cout << s << stbuff.getnumstr() << s << stbuff.getnumwords() << s << stbuff.getnumchars() << std::endl;
    std::cin.rdbuf(oldbuf);
    return 0;
}

//#include <iostream>
//#include "../main/stat_buffer.h"
//#include <string>
//
//int main(){
//    std::streambuf* oldbuf = std::cin.rdbuf();
//    stat_buffer stbuff(oldbuf);
//    std::cin.rdbuf(&stbuff);
//    std::cout << std::cin.rdbuf(&stbuff);
//    std::cout << stbuff.getnumstr() << " " << stbuff.getnumwords() << " "
//              << stbuff.getnumchars() << std::endl;
//    std::cin.rdbuf(oldbuf);
//    return 0;
//}