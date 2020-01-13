//
// Created by roman on 21.10.2019.
//

#pragma once

#include "MyVector.h"
#include <iostream>
#include <cassert>


template <class T> MyVector<T>::MyVector() : volume(0), length(0), data(nullptr) {}

template <class T> MyVector<T>::MyVector(unsigned int new_volume) {
    volume = new_volume;
    length = 0;
    data = new T[volume];
}

template <class T> MyVector<T>::MyVector(const MyVector &other) : volume(other.volume), length(other.length) {  // Конструктор копирования.
    delete[] data;
    data = new T[volume];
    for (size_t i = 0; i != length; ++i)
        data[i] = other.data[i];
}

template <class T> MyVector<T>::MyVector(MyVector &&other) noexcept : volume(0), length(0), data(nullptr) {  // Move-конструктор.
    swap(other);
}

template <class T> MyVector<T>::~MyVector() { delete[] data; }

template <class T> typename MyVector<T>::iterator MyVector<T>::begin() {
    assert(length != 0);
    return data;
}

template <class T> typename MyVector<T>::const_iterator MyVector<T>::begin() const {
    assert(length != 0);
    return data;
}

template <class T> typename MyVector<T>::iterator MyVector<T>::end() {
    assert(length != 0);
    return data + length;
}

template <class T> typename MyVector<T>::const_iterator MyVector<T>::end() const {
    assert(length != 0);
    return data;
}

    template <class T> unsigned int MyVector<T>::size() { return length; }

template <class T> void MyVector<T>::resize(int new_volume) {
    volume = new_volume * 2;
    T *temp = new T[volume];
    for (size_t i = 0; i != length; ++i)
        temp[i] = std::move(data[i]);
    delete[] data;
    data = temp;
}

template <class T> void MyVector<T>::push_back(const T &value) {
    if (length == volume) {
        resize(volume + 1);
    }
    data[length++] = value;
}

template <class T> void MyVector<T>::push_back(T &&value) {
    if (length == volume) {
        resize(volume + 1);
    }
    data[length++] = std::move(value);
}

template <class T> typename MyVector<T>::iterator MyVector<T>::erase(iterator pos) {
    auto iterCurr = pos, iterAfterDeleted = pos + 1;
    while (pos < end()) {
        *iterCurr = std::move(*(++pos));
        ++iterCurr;
    }
    --length;
    iterCurr->~T();
    return iterAfterDeleted;
}

template <class T> void MyVector<T>::pop_back() { erase(end()); }

template <class T> void MyVector<T>::swap(MyVector &other) {
    using std::swap;
    swap(volume, other.volume);
    swap(length, other.length);
    swap(data, other.data);
}

template <class T> MyVector<T> &MyVector<T>::operator=(const MyVector &other) {
    if (this != &other) {
        auto copy = other;
        swap(copy);
    }
    return *this;
}

template <class T> MyVector<T>& MyVector<T>::operator=(MyVector &&other) noexcept {
    if (this != &other) {
        swap(other);
        other.length = 0;
        other.volume = 0;
        other.data = nullptr;
    }
    return *this;
}
