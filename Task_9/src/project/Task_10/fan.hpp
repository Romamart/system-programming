
#include <array>
#include <cmath>

template <class T>
std::array<T,2> turn(std::array<T,2> arr,int n){
    std::array<T,2> turn_arr{};
    switch(n%4) {
        default:{
            turn_arr[0] = arr[0];
            turn_arr[1] = arr[1];
            break;
        }
        case 1:{
            turn_arr[0] = -arr[1];
            turn_arr[1] = arr[0];
            break;
        }
        case 2:{
            turn_arr[0] = -arr[0];
            turn_arr[1] = -arr[1];
            break;
        }
        case 3:{
            turn_arr[0] = arr[1];
            turn_arr[1] = -arr[0];
            break;
        }
    }
    return turn_arr;
}
