//
// Created by roman on 15.11.2019.
//
#include <vector>
#pragma once

template <class T> class Matrix
{
public:
    Matrix();
    Matrix(std::vector<T> vector);
    void GetConsol(int k, int l);
//    Matrix<T>& operator=(const std::vector<T>& other);
    void push_back(T element);
    Matrix<T>& operator=(const Matrix<T>& other);
    std::vector<T>& get();
    void set(std::vector<T>& vector);
    Matrix<T> transposed();
    bool is_symmetric(double eps);
private:
    std::vector<T> Mat;
};


#include "Matrix.hpp"