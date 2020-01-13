//
// Created by roman on 15.11.2019.
//

#pragma once

#include <iostream>
#include <vector>
#include "Matrix.h"
#include <math.h>


template <class T> Matrix<T>::Matrix() {Mat = {};}

template<class T> Matrix<T>::Matrix(std::vector<T> vector) {
    Mat = vector;
}

template <class T> void Matrix<T>::set(std::vector<T>& vector) {
    this->Mat.clear();
    Mat = vector;
}

template <class T> void Matrix<T>::push_back(T element) {
    Mat.push_back(element);
}

//template<class T> Matrix<T>& Matrix<T>::operator=(const std::vector<T>& other){
//    Mat.clear();
//    rows = 1;
//    cols = other.size();
//    Mat = other.data();
//    return *this;
//}
template <class T> Matrix<T>& Matrix<T>::operator=(const Matrix<T>& other) {
    if (this != &other) {
        Mat.clear();
        for (auto& element : other.data)
        {
            Mat.push_back(element);
        }
    }
    return *this;
}

template <class T> Matrix<bool> operator<(Matrix<T>& a, Matrix<T>& b){
    Matrix<bool> res{};
    std::vector<T> data1 = a.get();
    std::vector<T> data2 = b.get();
    for (int i = 0; i < std::max(data1.size(),data2.size()); ++i){
        if (i < data1.size() && i > data2.size())
            res.push_back(true);
        else
            if (i > data1.size() && i < data2.size())
                res.push_back(false);
            else
                res.push_back(data1.at(i) < data2.at(i));
    }
    return res;
}

template <class T> Matrix<T> operator<(Matrix<T> matrix, double eps) {
    Matrix<T> res;
    for (int i = 0; i < matrix.get().size(); ++i) {
        res.push_back((T)(matrix.get().at(i) < eps));
    }
    return res;
}

template <class T> Matrix<T> where(Matrix<bool> matbool, Matrix<T>& mat1, Matrix<T>& mat2){
    Matrix<T> res{};
    std::vector<T> data1 = mat1.get();
    std::vector<T> data2 = mat2.get();
    std::vector<bool> booldata = matbool.get();
    for (int i = 0; i < matbool.get().size(); ++i){
        if (booldata[i] == true)
            res.push_back(data1.at(i));
        else
            res.push_back(data2.at(i));
    }
    return res;
}

template <class T> std::vector<T>& Matrix<T>::get() { return Mat; }

template<class T> void Matrix<T>::GetConsol(int k, int l){
//    reshape(k,l);
    std::cout << k << " " << l << std::endl;
    for (int i = 0; i < k; ++i){
        for (int j = 0; j < l; ++j){
            std::cout << Mat[i*k + j] << " ";
        }
        std::cout << std::endl;
    }
}


template <class T> Matrix<T> operator-(Matrix<T> first, Matrix<T> second) {
    Matrix<T> res{};
    for (int i = 0; i < first.get().size(); ++i) {
        res.push_back(first.get().at(i) - second.get().at(i));
    }
    return res;
}

template <class T> Matrix<T> abs(Matrix<T> matrix) {
    for (auto& element : matrix.get()) {
        element = std::abs(element);
    }
    return matrix;
}

template <class T> Matrix<T> Matrix<T>::transposed() {
    Matrix<T> res{};
    int l = sqrt(Mat.size());
    int k = sqrt(Mat.size());
    for (size_t i = 0; i < l; ++i) {
        for (size_t j = 0; j < k; ++j)
            res.push_back(Mat[j*(l) + i]);
    }
    return res;
}

template <class T> bool all(Matrix<T> matrix) {
    for (int i = 0; i < matrix.get().size(); ++i) {
            if (matrix.get().at(i) == 0){
                return 0;
        }
    }
    return 1;
}

template <class T> bool Matrix<T>::is_symmetric(double eps) {
    return all(abs(*this - this->transposed()) < eps);
}