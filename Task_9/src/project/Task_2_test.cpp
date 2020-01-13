//
// Created by roman on 21.10.2019.
//

#include <fstream>
#include <algorithm>
#include <random>
#include <string>
#include "Task_2/MyVector.h"


using namespace std;
/**
 * @mainpage Myvector
 * @brief:  removeFolder()
 *          Удалить содержимое директории
 *
 * @param:  [in] dir Директория, которую необходимо очистить.
 * @param:  [in] rmdir флаг (параметр удаления):
 *                   false – удалить только внутренние папки и файлы
 *                   true  – удалить и корневую директорию
 * @retval: true  Успешное выполнение
 * @retval: false Ошибка выполнения
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