#include "Task_2/MyVector.h"


using namespace std;
/**
 * @file
 * @brief Просто для документации

    добавляю пару комментариев для функции,
    чтобы просто заполнить место
 */
int main(){
    MyVector<int> RStreams;
    for (int i = 0; i < 10; i++) {
        RStreams.push_back(i);
    }
//    shuffle(RStreams.begin(), RStreams.end(), random_device());
//    int num = 0;
//    for (auto &stream: RStreams) {
//        stream << num;
//        stream.close();
//        ++num;
//    }
//    for (int j : RStr
    std::cout << *(RStreams.end()-1);
    return 0;
}