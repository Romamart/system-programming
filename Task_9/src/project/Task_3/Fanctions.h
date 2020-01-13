#include <array>
#include <vector>
#include <string>
#include <sstream>
#pragma once

template <class T, int N, int M>
struct Tie {
    private:
        std::array<T*,M> data;
public:
        Tie(std::array<T*,M> other);
        void operator=(const std::array<T,N*M>& rhs);
};

//#include <Fanctions.h>

template <class T, size_t N>
std::array<T,N> cat(std::array<T,N> arr){
    return arr;
}

template <class T, size_t N, class ... Other>
auto cat(std::array<T,N> arr, Other ... other) -> std::array<T,N*(sizeof...(Other)+1)>{
    std::array<T,N*sizeof...(Other)> tmp = cat(other ...);
    std::array<T, N*(sizeof...(Other)+1)> new_arr;
    for (int i = 0; i<arr.size(); i++){
        new_arr[i] = arr[i];
    }
    for (int j = 0; j<tmp.size(); j++){
        new_arr[arr.size()+j] = tmp[j];
    }
    return new_arr;
}

template <class Head>
void message(std::ostream& Flow, const char* str1 , Head  head){
    std::string str = str1;
    if (str.find('%')<=(str.size()-1)){
        std::stringstream s;
        std::string str2;
        s << head;

        s >> str2;
        str = str.replace(str.find('%'),1,str2);
        Flow << str;
    }else{
        Flow << str;
    }
}

template <class Head, class ... Other>
void message(std::ostream& Flow,const char* str1, Head head, Other ... other){

    std::string str = str1;
    if (str.find('%')<=(str.size()-1)){
//    const char str2 = std::to_string(head);
        std::stringstream s;
        std::string str2;
        s << head;

        s >> str2;
        str = str.replace(str.find('%'),1,str2);
        message(Flow, str.c_str(), other ...);
    }else{
        Flow << str;
    }

}


template <class T, int N, int M> Tie<T,N,M>::Tie(std::array<T*,M> other) : data(other){}

template <class T, int N, int M> void Tie<T,N,M>::operator= (const std::array<T,N*M>& rhs){
    size_t num = 0;
    for (auto& el : data){
        for (int j = 0; j < N; j++){
            *(el + j) = rhs.at(j + num * N);
        }
    }
}


template  <class T, size_t N, class... Args>
auto tie(std::array<T,N>&  arr, Args& ... args)->Tie<T,N,sizeof...(args) + 1>{
    const auto M = sizeof...(args) + 1;
    std::array<T*,M> v{arr.data(),args.data()...};
    return Tie<T,N,M>(v);
}