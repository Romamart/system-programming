//
// Created by roman on 21.10.2019.
//

#pragma once

#include <ostream>

template <class T> class MyVector {
private:
    unsigned  int length;
    unsigned  int volume;
    T* data;
    typedef T* iterator;
    typedef const T* const_iterator;
    void resize(int);
public:
    MyVector();
    explicit MyVector(unsigned int);
    MyVector(const MyVector &);
    MyVector(MyVector &&) noexcept ;
    ~MyVector();
    typename MyVector::iterator begin();
    typename MyVector::const_iterator begin() const;
    typename MyVector::iterator end();
    typename MyVector::const_iterator end() const;
    unsigned int size();
    void push_back(const T &);
    void push_back(T &&);
    typename MyVector::iterator erase(iterator);
    void pop_back();
    MyVector &operator=(const MyVector &);
    MyVector &operator=(MyVector &&) noexcept;
    void swap(MyVector &);

};

#include "MyVector.hpp"

