//
// Created by aklen on 13.10.2019.
//
#include <iostream>

template<typename T,size_t size>
T* createArr(T(*gen)()){
    auto a=new T[size];
    for(size_t i=0;i<size;i++){
        a[i]=gen();
    }
    return a;
}
