//
// Created by KasperSK on 8/31/2016.
//

#ifndef TEMPLATES_MYARRAY_H
#define TEMPLATES_MYARRAY_H

#include<iostream>
/*
template <typename T>
class MyArray{
    T* _array;
    size_t _size;

public:
    MyArray(int arraySize){
        _size = arraySize;
        _array = new T[_size];
    }

    ~MyArray(){
        delete _array;
    }

    void fill(const T& element){
        for(size_t i = 0; i < _size; ++i){
            _array[i] = element;
        }
    }

    T* begin() const{
        return &_array[0];
    }

    T* end() const{
        return &_array[_size];
    }

    T& operator[](int i) const{
        return _array[i];
    }
};*/

template <typename T, size_t N>
class MyArray{
    T _array[N];
    size_t _size=N;

public:
    MyArray(){
    }

    ~MyArray(){
    }

    void fill(const T& element){
        for(size_t i = 0; i < _size; ++i){
            _array[i] = element;
        }
    }

    T* begin() {
        return &_array[0];
    }

    T* end() {
        return &_array[_size];
    }

    T& operator[](int i) {
        return _array[i];
    }
};

#endif //TEMPLATES_MYARRAY_H
