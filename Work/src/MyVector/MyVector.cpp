//
// Created by roman on 21.10.2019.
//

#include <fstream>
#include <algorithm>
#include <random>
#include <string>
#include "MyVector.h"


using namespace std;

int main(){
    MyVector<ofstream> RStreams;
    for (int i = 0; i < 10; i++) {
        string name = to_string(i) + ".txt";
        RStreams.push_back(ofstream(name));
    }
    shuffle(RStreams.begin(), RStreams.end(), random_device());
    int num = 0;
    for (auto &stream: RStreams) {
        stream << num;
        stream.close();
        ++num;
    }
    return 0;
}